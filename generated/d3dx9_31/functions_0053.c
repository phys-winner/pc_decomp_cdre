#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17208827(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17208827u);

L_17208827:
    edi = edi; /* 0x17208827: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17208829: push ebp */
    ebp = esp; /* 0x1720882A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1720882C: push ebx */
    PUSH32(esp, edi); /* 0x1720882D: push edi */
    ebx = ecx; /* 0x1720882E: mov ebx, ecx */
    edi = edx; /* 0x17208830: mov edi, edx */
    RECOMP_CALL(sub_172087CB); /* 0x17208832: call 0x172087cb */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17208837: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax + 0x16AC) = 8; /* 0x1720883B: mov dword ptr [eax + 0x16ac], 8 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17208881; /* 0x17208845: je 0x17208881 */
L_17208847:
    ecx = MEM32(eax + 0x14); /* 0x17208847: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x1720884A: mov edx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x1720884D: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208850: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208853: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208856: mov edx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(HI8(ebx)); /* 0x17208859: mov byte ptr [ecx + edx], bh */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x1720885C: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(eax + 0x8); /* 0x1720885F: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x17208862: push esi */
    esi = MEM32(eax + 0x14); /* 0x17208863: mov esi, dword ptr [eax + 0x14] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17208866: mov cl, bl */
    SET_LO8(ecx, ~LO8(ecx)); /* 0x17208868: not cl */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x1720886A: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x1720886D: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x17208870: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208873: mov edx, dword ptr [eax + 8] */
    ecx = ebx; /* 0x17208876: mov ecx, ebx */
    ecx = ~ecx; /* 0x17208878: not ecx */
    MEM8(esi + edx) = (uint8_t)(HI8(ecx)); /* 0x1720887A: mov byte ptr [esi + edx], ch */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x1720887D: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x17208880: pop esi */
L_17208881:
    /* test ebx, ebx */ /* 0x17208881: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720889D; /* 0x17208883: je 0x1720889d */
L_17208885:
    ecx = MEM32(eax + 0x14); /* 0x17208885: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208888: mov edx, dword ptr [eax + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x1720888B: mov dword ptr [ebp + 8], ebx */
    SET_LO8(ebx, MEM8(edi)); /* 0x1720888E: mov bl, byte ptr [edi] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208890: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208893: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + 0x8); /* 0x17208896: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17208899: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1720889A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17208885; /* 0x1720889B: jne 0x17208885 */
L_1720889D:
    edi = POP32_VAL(esp); /* 0x1720889D: pop edi */
    ebx = POP32_VAL(esp); /* 0x1720889E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1720889F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x172088A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_172088A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172088A8u);

L_172088A8:
    edi = edi; /* 0x172088A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172088AA: push ebp */
    ebp = esp; /* 0x172088AB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x172088AD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(eax + 0x16B0)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) & 0); /* 0x172088B0: and word ptr [eax + 0x16b0], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(eax + 0x16B4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x16B4) = MEM32(eax + 0x16B4) & 0; /* 0x172088B8: and dword ptr [eax + 0x16b4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + 0x8C; /* 0x172088BF: lea ecx, [eax + 0x8c] */
    MEM32(eax + 0xB10) = ecx; /* 0x172088C5: mov dword ptr [eax + 0xb10], ecx */
    ecx = eax + 0x980; /* 0x172088CB: lea ecx, [eax + 0x980] */
    MEM32(eax + 0xB1C) = ecx; /* 0x172088D1: mov dword ptr [eax + 0xb1c], ecx */
    ecx = eax + 0xA74; /* 0x172088D7: lea ecx, [eax + 0xa74] */
    MEM32(eax + 0xB18) = 0x17028FE0u; /* 0x172088DD: mov dword ptr [eax + 0xb18], 0x17028fe0 */
    MEM32(eax + 0xB24) = 0x17028FF4u; /* 0x172088E7: mov dword ptr [eax + 0xb24], 0x17028ff4 */
    MEM32(eax + 0xB28) = ecx; /* 0x172088F1: mov dword ptr [eax + 0xb28], ecx */
    MEM32(eax + 0xB30) = 0x17029008u; /* 0x172088F7: mov dword ptr [eax + 0xb30], 0x17029008 */
    MEM32(eax + 0x16AC) = 8; /* 0x17208901: mov dword ptr [eax + 0x16ac], 8 */
    RECOMP_CALL(sub_172078BA); /* 0x1720890B: call 0x172078ba */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17208910: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17208911: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17208BED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17208BEDu);

L_17208BED:
    edi = edi; /* 0x17208BED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17208BEF: push ebp */
    ebp = esp; /* 0x17208BF0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17208BF2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x16B4); /* 0x17208BF5: mov ecx, dword ptr [eax + 0x16b4] */
    /* cmp ecx, 0xDu */ /* 0x17208BFB: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17208C55; /* 0x17208BFE: jle 0x17208c55 */
L_17208C00:
    PUSH32(esp, ebx); /* 0x17208C00: push ebx */
    PUSH32(esp, esi); /* 0x17208C01: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17208C02: mov esi, dword ptr [ebp + 0x14] */
    edx = esi; /* 0x17208C05: mov edx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208C07: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208C07: shl edx, cl */
    ecx = MEM32(eax + 0x8); /* 0x17208C09: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208C0C: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x17208C13: mov edx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B0)); /* 0x17208C16: mov bl, byte ptr [eax + 0x16b0] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208C1C: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208C1F: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208C22: mov ecx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B1)); /* 0x17208C25: mov bl, byte ptr [eax + 0x16b1] */
    edx = MEM32(eax + 0x8); /* 0x17208C2B: mov edx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208C2E: mov byte ptr [ecx + edx], bl */
    edx = MEM32(eax + 0x16B4); /* 0x17208C31: mov edx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208C37: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, 0x10u); /* 0x17208C3A: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17208C3C: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17208C3E: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x17208C3E: shr si, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF3u; /* 0x17208C41: add edx, -0xd */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = edx; /* 0x17208C44: mov dword ptr [eax + 0x16b4], edx */
    MEM16(eax + 0x16B0) = (uint16_t)(LO16(esi)); /* 0x17208C4A: mov word ptr [eax + 0x16b0], si */
    esi = POP32_VAL(esp); /* 0x17208C51: pop esi */
    ebx = POP32_VAL(esp); /* 0x17208C52: pop ebx */
    goto L_17208C6A; /* 0x17208C53: jmp 0x17208c6a */
L_17208C55:
    edx = MEM32(ebp + 0x14); /* 0x17208C55: mov edx, dword ptr [ebp + 0x14] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208C58: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208C58: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208C5A: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x17208C61: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = ecx; /* 0x17208C64: mov dword ptr [eax + 0x16b4], ecx */
L_17208C6A:
    ecx = MEM32(ebp + 0x10); /* 0x17208C6A: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x17208C6D: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x17208C70: push 1 */
    RECOMP_CALL(sub_17208827); /* 0x17208C72: call 0x17208827 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17208C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17208C78: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17208C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17208C80u);

L_17208C80:
    edi = edi; /* 0x17208C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17208C82: push ebp */
    ebp = esp; /* 0x17208C83: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17208C85: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x16B4); /* 0x17208C88: mov ecx, dword ptr [eax + 0x16b4] */
    PUSH32(esp, ebx); /* 0x17208C8E: push ebx */
    PUSH32(esp, esi); /* 0x17208C8F: push esi */
    PUSH32(esp, 2); /* 0x17208C90: push 2 */
    edx = POP32_VAL(esp); /* 0x17208C92: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208C93: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208C93: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208C95: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp ecx, 0xDu */ /* 0x17208C9C: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17208CE8; /* 0x17208C9F: jle 0x17208ce8 */
L_17208CA1:
    edx = MEM32(eax + 0x14); /* 0x17208CA1: mov edx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B0)); /* 0x17208CA4: mov bl, byte ptr [eax + 0x16b0] */
    ecx = MEM32(eax + 0x8); /* 0x17208CAA: mov ecx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208CAD: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208CB0: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208CB3: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208CB6: mov edx, dword ptr [eax + 8] */
    SET_LO8(ebx, MEM8(eax + 0x16B1)); /* 0x17208CB9: mov bl, byte ptr [eax + 0x16b1] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208CBF: mov byte ptr [ecx + edx], bl */
    edx = MEM32(eax + 0x16B4); /* 0x17208CC2: mov edx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208CC8: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, 0x10u); /* 0x17208CCB: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17208CCD: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO16(esi, 2); /* 0x17208CCF: mov si, 2 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17208CD3: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x17208CD3: shr si, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF3u; /* 0x17208CD6: add edx, -0xd */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = edx; /* 0x17208CD9: mov dword ptr [eax + 0x16b4], edx */
    MEM16(eax + 0x16B0) = (uint16_t)(LO16(esi)); /* 0x17208CDF: mov word ptr [eax + 0x16b0], si */
    goto L_17208CF1; /* 0x17208CE6: jmp 0x17208cf1 */
L_17208CE8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x17208CE8: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = ecx; /* 0x17208CEB: mov dword ptr [eax + 0x16b4], ecx */
L_17208CF1:
    ecx = MEM32(eax + 0x16B4); /* 0x17208CF1: mov ecx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17208CF7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208CF9: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208CF9: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208CFB: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp ecx, 9 */ /* 0x17208D02: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17208D4C; /* 0x17208D05: jle 0x17208d4c */
L_17208D07:
    edx = MEM32(eax + 0x14); /* 0x17208D07: mov edx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B0)); /* 0x17208D0A: mov bl, byte ptr [eax + 0x16b0] */
    ecx = MEM32(eax + 0x8); /* 0x17208D10: mov ecx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208D13: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208D16: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208D19: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208D1C: mov edx, dword ptr [eax + 8] */
    SET_LO8(ebx, MEM8(eax + 0x16B1)); /* 0x17208D1F: mov bl, byte ptr [eax + 0x16b1] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208D25: mov byte ptr [ecx + edx], bl */
    edx = MEM32(eax + 0x16B4); /* 0x17208D28: mov edx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208D2E: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, 0x10u); /* 0x17208D31: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17208D33: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17208D35: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17208D37: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x17208D37: shr si, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF7u; /* 0x17208D3A: add edx, -9 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = edx; /* 0x17208D3D: mov dword ptr [eax + 0x16b4], edx */
    MEM16(eax + 0x16B0) = (uint16_t)(LO16(esi)); /* 0x17208D43: mov word ptr [eax + 0x16b0], si */
    goto L_17208D55; /* 0x17208D4A: jmp 0x17208d55 */
L_17208D4C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x17208D4C: add ecx, 7 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = ecx; /* 0x17208D4F: mov dword ptr [eax + 0x16b4], ecx */
L_17208D55:
    RECOMP_CALL(sub_17208759); /* 0x17208D55: call 0x17208759 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x16B4); /* 0x17208D5A: mov ecx, dword ptr [eax + 0x16b4] */
    edx = MEM32(eax + 0x16AC); /* 0x17208D60: mov edx, dword ptr [eax + 0x16ac] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17208D66: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xBu; /* 0x17208D68: add edx, 0xb */
    _flag_k = FK_ADD;
    /* cmp edx, 9 */ /* 0x17208D6B: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17208E3E; /* 0x17208D6E: jge 0x17208e3e */
L_17208D74:
    PUSH32(esp, 2); /* 0x17208D74: push 2 */
    edx = POP32_VAL(esp); /* 0x17208D76: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208D77: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208D77: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208D79: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp ecx, 0xDu */ /* 0x17208D80: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17208DCC; /* 0x17208D83: jle 0x17208dcc */
L_17208D85:
    edx = MEM32(eax + 0x14); /* 0x17208D85: mov edx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B0)); /* 0x17208D88: mov bl, byte ptr [eax + 0x16b0] */
    ecx = MEM32(eax + 0x8); /* 0x17208D8E: mov ecx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208D91: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208D94: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208D97: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208D9A: mov edx, dword ptr [eax + 8] */
    SET_LO8(ebx, MEM8(eax + 0x16B1)); /* 0x17208D9D: mov bl, byte ptr [eax + 0x16b1] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208DA3: mov byte ptr [ecx + edx], bl */
    edx = MEM32(eax + 0x16B4); /* 0x17208DA6: mov edx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208DAC: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, 0x10u); /* 0x17208DAF: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17208DB1: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO16(esi, 2); /* 0x17208DB3: mov si, 2 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17208DB7: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x17208DB7: shr si, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF3u; /* 0x17208DBA: add edx, -0xd */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = edx; /* 0x17208DBD: mov dword ptr [eax + 0x16b4], edx */
    MEM16(eax + 0x16B0) = (uint16_t)(LO16(esi)); /* 0x17208DC3: mov word ptr [eax + 0x16b0], si */
    goto L_17208DD5; /* 0x17208DCA: jmp 0x17208dd5 */
L_17208DCC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x17208DCC: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = ecx; /* 0x17208DCF: mov dword ptr [eax + 0x16b4], ecx */
L_17208DD5:
    ecx = MEM32(eax + 0x16B4); /* 0x17208DD5: mov ecx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17208DDB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17208DDD: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17208DDD: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B0) | LO16(edx))) << 16;
    MEM16(eax + 0x16B0) = (uint16_t)(MEM16(eax + 0x16B0) | LO16(edx)); /* 0x17208DDF: or word ptr [eax + 0x16b0], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp ecx, 9 */ /* 0x17208DE6: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17208E30; /* 0x17208DE9: jle 0x17208e30 */
L_17208DEB:
    edx = MEM32(eax + 0x14); /* 0x17208DEB: mov edx, dword ptr [eax + 0x14] */
    SET_LO8(ebx, MEM8(eax + 0x16B0)); /* 0x17208DEE: mov bl, byte ptr [eax + 0x16b0] */
    ecx = MEM32(eax + 0x8); /* 0x17208DF4: mov ecx, dword ptr [eax + 8] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208DF7: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208DFA: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x14); /* 0x17208DFD: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x17208E00: mov edx, dword ptr [eax + 8] */
    SET_LO8(ebx, MEM8(eax + 0x16B1)); /* 0x17208E03: mov bl, byte ptr [eax + 0x16b1] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x17208E09: mov byte ptr [ecx + edx], bl */
    edx = MEM32(eax + 0x16B4); /* 0x17208E0C: mov edx, dword ptr [eax + 0x16b4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x17208E12: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, 0x10u); /* 0x17208E15: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x17208E17: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17208E19: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17208E1B: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x17208E1B: shr si, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF7u; /* 0x17208E1E: add edx, -9 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = edx; /* 0x17208E21: mov dword ptr [eax + 0x16b4], edx */
    MEM16(eax + 0x16B0) = (uint16_t)(LO16(esi)); /* 0x17208E27: mov word ptr [eax + 0x16b0], si */
    goto L_17208E39; /* 0x17208E2E: jmp 0x17208e39 */
L_17208E30:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x17208E30: add ecx, 7 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16B4) = ecx; /* 0x17208E33: mov dword ptr [eax + 0x16b4], ecx */
L_17208E39:
    RECOMP_CALL(sub_17208759); /* 0x17208E39: call 0x17208759 */
    RECOMP_FLAGS_IN();
L_17208E3E:
    esi = POP32_VAL(esp); /* 0x17208E3E: pop esi */
    MEM32(eax + 0x16AC) = 7; /* 0x17208E3F: mov dword ptr [eax + 0x16ac], 7 */
    ebx = POP32_VAL(esp); /* 0x17208E49: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17208E4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17208E4B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17209013(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209013u);

L_17209013:
    edi = edi; /* 0x17209013: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209015: push ebp */
    ebp = esp; /* 0x17209016: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x17209018: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x1Cu); /* 0x1720901B: push 0x1c */
    PUSH32(esp, 1); /* 0x1720901D: push 1 */
    PUSH32(esp, MEM32(eax + 0x28)); /* 0x1720901F: push dword ptr [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17209022: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17209025: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209044; /* 0x17209027: je 0x17209044 */
L_17209029:
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x17209029: mov cl, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1720902C: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x10) = (uint8_t)(LO8(ecx)); /* 0x1720902F: mov byte ptr [eax + 0x10], cl */
    SET_LO8(ecx, MEM8(ebp + 0xC)); /* 0x17209032: mov cl, byte ptr [ebp + 0xc] */
    MEM8(eax + 0x11) = (uint8_t)(LO8(ecx)); /* 0x17209035: mov byte ptr [eax + 0x11], cl */
    ecx = MEM32(ebp + 0x10); /* 0x17209038: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x14) = ecx; /* 0x1720903B: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1720903E: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x18) = ecx; /* 0x17209041: mov dword ptr [eax + 0x18], ecx */
L_17209044:
    ebp = POP32_VAL(esp); /* 0x17209044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17209045: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1720904D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720904Du);

L_1720904D:
    edi = edi; /* 0x1720904D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1720904F: push ebp */
    ebp = esp; /* 0x17209050: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17209052: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17209055: push ebx */
    PUSH32(esp, esi); /* 0x17209056: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17209057: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1720905A: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1720905C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x4); /* 0x1720905F: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x17209062: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17209063: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x34); /* 0x17209066: mov edx, dword ptr [edi + 0x34] */
    ebx = MEM32(edi + 0x4); /* 0x17209069: mov ebx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1720906C: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x20); /* 0x1720906F: mov eax, dword ptr [edi + 0x20] */
    MEM32(ebp + 0xC) = eax; /* 0x17209072: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edi + 0x1C); /* 0x17209075: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + 0x8) = eax; /* 0x17209078: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x30); /* 0x1720907B: mov eax, dword ptr [edi + 0x30] */
    /* cmp edx, eax */ /* 0x1720907E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1720908A; /* 0x17209080: jae 0x1720908a */
L_17209082:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209082: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17209084: dec eax */
    _flag_k = FK_DEC;
    goto L_172094AF; /* 0x17209085: jmp 0x172094af */
L_1720908A:
    eax = MEM32(edi + 0x2C); /* 0x1720908A: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1720908D: sub eax, edx */
    _flag_k = FK_CMP;
    goto L_172094AF; /* 0x1720908F: jmp 0x172094af */
L_17209094:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1720957E)); goto _ljump; }
L_1720909B:
    /* cmp eax, 0x102u */ /* 0x1720909B: cmp eax, 0x102 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17209133; /* 0x172090A0: jb 0x17209133 */
L_172090A6:
    /* cmp MEM32(ebp + (-0x8)), 0xAu */ /* 0x172090A6: cmp dword ptr [ebp - 8], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17209133; /* 0x172090AA: jb 0x17209133 */
L_172090B0:
    eax = MEM32(ebp + 0xC); /* 0x172090B0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x20) = eax; /* 0x172090B3: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + 0x8); /* 0x172090B6: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x1C) = eax; /* 0x172090B9: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x172090BC: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x4) = eax; /* 0x172090BF: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x172090C2: mov eax, dword ptr [ebp - 4] */
    ecx = eax; /* 0x172090C5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x172090C7: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x172090C9: push esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ecx; /* 0x172090CA: add dword ptr [esi + 8], ecx */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x172090CD: mov dword ptr [esi], eax */
    PUSH32(esp, edi); /* 0x172090CF: push edi */
    MEM32(edi + 0x34) = edx; /* 0x172090D0: mov dword ptr [edi + 0x34], edx */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x172090D3: push dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM8(ebx + 0x11); /* 0x172090D6: movzx eax, byte ptr [ebx + 0x11] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x172090DA: push dword ptr [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x172090DD: push eax */
    eax = (uint32_t)MEM8(ebx + 0x10); /* 0x172090DE: movzx eax, byte ptr [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x172090E2: push eax */
    RECOMP_CALL(sub_17209C2B); /* 0x172090E3: call 0x17209c2b */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x34); /* 0x172090E8: mov edx, dword ptr [edi + 0x34] */
    MEM32(ebp + 0x10) = eax; /* 0x172090EB: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(esi); /* 0x172090EE: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x172090F0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x4); /* 0x172090F3: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x172090F6: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x20); /* 0x172090F9: mov eax, dword ptr [edi + 0x20] */
    MEM32(ebp + 0xC) = eax; /* 0x172090FC: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edi + 0x1C); /* 0x172090FF: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + 0x8) = eax; /* 0x17209102: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x30); /* 0x17209105: mov eax, dword ptr [edi + 0x30] */
    /* cmp edx, eax */ /* 0x17209108: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209111; /* 0x1720910A: jae 0x17209111 */
L_1720910C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1720910C: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720910E: dec eax */
    _flag_k = FK_DEC;
    goto L_17209116; /* 0x1720910F: jmp 0x17209116 */
L_17209111:
    eax = MEM32(edi + 0x2C); /* 0x17209111: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209114: sub eax, edx */
    _flag_k = FK_CMP;
L_17209116:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x17209116: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1720911A: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209133; /* 0x1720911D: je 0x17209133 */
L_1720911F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1720911F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x17209121: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17209125: setne al */
    eax = eax + eax + 0x7; /* 0x17209128: lea eax, [eax + eax + 7] */
    MEM32(ebx) = eax; /* 0x1720912C: mov dword ptr [ebx], eax */
    goto L_172092D4; /* 0x1720912E: jmp 0x172092d4 */
L_17209133:
    eax = (uint32_t)MEM8(ebx + 0x10); /* 0x17209133: movzx eax, byte ptr [ebx + 0x10] */
    MEM32(ebx + 0xC) = eax; /* 0x17209137: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebx + 0x14); /* 0x1720913A: mov eax, dword ptr [ebx + 0x14] */
    MEM32(ebx + 0x8) = eax; /* 0x1720913D: mov dword ptr [ebx + 8], eax */
    MEM32(ebx) = 1; /* 0x17209140: mov dword ptr [ebx], 1 */
    goto L_1720916E; /* 0x17209146: jmp 0x1720916e */
L_17209148:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17209148: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720950E; /* 0x1720914C: je 0x1720950e */
L_17209152:
    eax = MEM32(ebp + (-0x4)); /* 0x17209152: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax); /* 0x17209155: movzx eax, byte ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x17209158: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1720915B: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1720915F: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17209162: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17209162: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax; /* 0x17209164: or dword ptr [ebp + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17209167: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x1720916A: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
L_1720916E:
    eax = MEM32(ebx + 0xC); /* 0x1720916E: mov eax, dword ptr [ebx + 0xc] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17209171: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209148; /* 0x17209174: jb 0x17209148 */
L_17209176:
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x17209176: mov eax, dword ptr [eax*4 + 0x1702a500] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x1720917D: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x8); /* 0x17209180: mov ecx, dword ptr [ebx + 8] */
    eax = ecx + eax * 8; /* 0x17209183: lea eax, [ecx + eax*8] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209186: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0xC)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1720918A: shr dword ptr [ebp + 0xc], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31); /* 0x1720918A: shr dword ptr [ebp + 0xc], cl */
    MEM32(ebp + (-0x14)) = eax; /* 0x1720918D: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x17209190: movzx eax, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x17209194: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x14)); /* 0x17209197: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM8(eax); /* 0x1720919A: movzx ecx, byte ptr [eax] */
    /* test ecx, ecx */ /* 0x1720919D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1720919F: mov dword ptr [ebp - 0x18], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172091B2; /* 0x172091A2: jne 0x172091b2 */
L_172091A4:
    eax = MEM32(eax + 0x4); /* 0x172091A4: mov eax, dword ptr [eax + 4] */
    MEM32(ebx) = 6; /* 0x172091A7: mov dword ptr [ebx], 6 */
    goto L_172092D1; /* 0x172091AD: jmp 0x172092d1 */
L_172091B2:
    ecx = MEM32(ebp + (-0x18)); /* 0x172091B2: mov ecx, dword ptr [ebp - 0x18] */
    /* test LO8(ecx), 0x10u */ /* 0x172091B5: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_172091D1; /* 0x172091B8: je 0x172091d1 */
L_172091BA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x172091BA: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x8) = ecx; /* 0x172091BD: mov dword ptr [ebx + 8], ecx */
    eax = MEM32(eax + 0x4); /* 0x172091C0: mov eax, dword ptr [eax + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x172091C3: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = 2; /* 0x172091C6: mov dword ptr [ebx], 2 */
    goto L_172092D4; /* 0x172091CC: jmp 0x172092d4 */
L_172091D1:
    /* test LO8(ecx), 0x40u */ /* 0x172091D1: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172091E4; /* 0x172091D4: jne 0x172091e4 */
L_172091D6:
    MEM32(ebx + 0xC) = ecx; /* 0x172091D6: mov dword ptr [ebx + 0xc], ecx */
    ecx = MEM32(eax + 0x4); /* 0x172091D9: mov ecx, dword ptr [eax + 4] */
    eax = eax + ecx * 8; /* 0x172091DC: lea eax, [eax + ecx*8] */
    goto L_172092D1; /* 0x172091DF: jmp 0x172092d1 */
L_172091E4:
    /* test LO8(ecx), 0x20u */ /* 0x172091E4: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_172094EE; /* 0x172091E7: je 0x172094ee */
L_172091ED:
    MEM32(ebx) = 7; /* 0x172091ED: mov dword ptr [ebx], 7 */
    goto L_172092D4; /* 0x172091F3: jmp 0x172092d4 */
L_172091F8:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x172091F8: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720950E; /* 0x172091FC: je 0x1720950e */
L_17209202:
    eax = MEM32(ebp + (-0x4)); /* 0x17209202: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax); /* 0x17209205: movzx eax, byte ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x17209208: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1720920B: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1720920F: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17209212: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17209212: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax; /* 0x17209214: or dword ptr [ebp + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17209217: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x1720921A: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
L_1720921E:
    eax = MEM32(ebx + 0x8); /* 0x1720921E: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17209221: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172091F8; /* 0x17209224: jb 0x172091f8 */
L_17209226:
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x17209226: mov eax, dword ptr [eax*4 + 0x1702a500] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x1720922D: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x8); /* 0x17209230: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + eax; /* 0x17209233: add dword ptr [ebx + 4], eax */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0xC)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209236: shr dword ptr [ebp + 0xc], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31); /* 0x17209236: shr dword ptr [ebp + 0xc], cl */
    eax = ecx; /* 0x17209239: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x1720923B: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebx + 0x11); /* 0x1720923E: movzx eax, byte ptr [ebx + 0x11] */
    MEM32(ebx + 0xC) = eax; /* 0x17209242: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebx + 0x18); /* 0x17209245: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebx + 0x8) = eax; /* 0x17209248: mov dword ptr [ebx + 8], eax */
    MEM32(ebx) = 3; /* 0x1720924B: mov dword ptr [ebx], 3 */
    goto L_17209279; /* 0x17209251: jmp 0x17209279 */
L_17209253:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17209253: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720950E; /* 0x17209257: je 0x1720950e */
L_1720925D:
    eax = MEM32(ebp + (-0x4)); /* 0x1720925D: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax); /* 0x17209260: movzx eax, byte ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x17209263: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17209266: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1720926A: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1720926D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1720926D: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax; /* 0x1720926F: or dword ptr [ebp + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17209272: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x17209275: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
L_17209279:
    eax = MEM32(ebx + 0xC); /* 0x17209279: mov eax, dword ptr [ebx + 0xc] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1720927C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209253; /* 0x1720927F: jb 0x17209253 */
L_17209281:
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x17209281: mov eax, dword ptr [eax*4 + 0x1702a500] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x17209288: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x8); /* 0x1720928B: mov ecx, dword ptr [ebx + 8] */
    eax = ecx + eax * 8; /* 0x1720928E: lea eax, [ecx + eax*8] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209291: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0xC)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209295: shr dword ptr [ebp + 0xc], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31); /* 0x17209295: shr dword ptr [ebp + 0xc], cl */
    MEM32(ebp + (-0x14)) = eax; /* 0x17209298: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x1720929B: movzx eax, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x1720929F: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x14)); /* 0x172092A2: mov ecx, dword ptr [ebp - 0x14] */
    eax = (uint32_t)MEM8(ecx); /* 0x172092A5: movzx eax, byte ptr [ecx] */
    /* test LO8(eax), 0x10u */ /* 0x172092A8: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_172092C0; /* 0x172092AA: je 0x172092c0 */
L_172092AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x172092AC: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x8) = eax; /* 0x172092AF: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ecx + 0x4); /* 0x172092B2: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0xC) = eax; /* 0x172092B5: mov dword ptr [ebx + 0xc], eax */
    MEM32(ebx) = 4; /* 0x172092B8: mov dword ptr [ebx], 4 */
    goto L_172092D4; /* 0x172092BE: jmp 0x172092d4 */
L_172092C0:
    /* test LO8(eax), 0x40u */ /* 0x172092C0: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172094FF; /* 0x172092C2: jne 0x172094ff */
L_172092C8:
    MEM32(ebx + 0xC) = eax; /* 0x172092C8: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x172092CB: mov eax, dword ptr [ecx + 4] */
    eax = ecx + eax * 8; /* 0x172092CE: lea eax, [ecx + eax*8] */
L_172092D1:
    MEM32(ebx + 0x8) = eax; /* 0x172092D1: mov dword ptr [ebx + 8], eax */
L_172092D4:
    eax = MEM32(ebp + (-0xC)); /* 0x172092D4: mov eax, dword ptr [ebp - 0xc] */
    goto L_172094B2; /* 0x172092D7: jmp 0x172094b2 */
L_172092DC:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x172092DC: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720950E; /* 0x172092E0: je 0x1720950e */
L_172092E6:
    eax = MEM32(ebp + (-0x4)); /* 0x172092E6: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax); /* 0x172092E9: movzx eax, byte ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x172092EC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x172092EF: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x172092F3: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x172092F6: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x172092F6: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax; /* 0x172092F8: or dword ptr [ebp + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x172092FB: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x172092FE: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
L_17209302:
    eax = MEM32(ebx + 0x8); /* 0x17209302: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17209305: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172092DC; /* 0x17209308: jb 0x172092dc */
L_1720930A:
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x1720930A: mov eax, dword ptr [eax*4 + 0x1702a500] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x17209311: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x8); /* 0x17209314: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + eax; /* 0x17209317: add dword ptr [ebx + 0xc], eax */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0xC)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1720931A: shr dword ptr [ebp + 0xc], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> ((LO8(ecx)) & 31); /* 0x1720931A: shr dword ptr [ebp + 0xc], cl */
    eax = ecx; /* 0x1720931D: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x1720931F: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    MEM32(ebx) = 5; /* 0x17209322: mov dword ptr [ebx], 5 */
L_17209328:
    ecx = MEM32(edi + 0x28); /* 0x17209328: mov ecx, dword ptr [edi + 0x28] */
    eax = edx; /* 0x1720932B: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0xC); /* 0x1720932D: sub eax, dword ptr [ebx + 0xc] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x17209330: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x17209332: mov dword ptr [ebp - 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1720934D; /* 0x17209335: jae 0x1720934d */
L_17209337:
    eax = MEM32(edi + 0x2C); /* 0x17209337: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1720933A: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1720933C: mov dword ptr [ebp - 0x18], eax */
L_1720933F:
    eax = MEM32(ebp + (-0x10)); /* 0x1720933F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x17209342: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x28) */ /* 0x17209345: cmp eax, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x17209348: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1720933F; /* 0x1720934B: jb 0x1720933f */
L_1720934D:
    eax = MEM32(ebp + (-0xC)); /* 0x1720934D: mov eax, dword ptr [ebp - 0xc] */
L_17209350:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x17209350: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720940E; /* 0x17209354: je 0x1720940e */
L_1720935A:
    /* test eax, eax */ /* 0x1720935A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172093E5; /* 0x1720935C: jne 0x172093e5 */
L_17209362:
    eax = MEM32(edi + 0x2C); /* 0x17209362: mov eax, dword ptr [edi + 0x2c] */
    /* cmp edx, eax */ /* 0x17209365: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x17209367: mov dword ptr [ebp - 0x14], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1720938A; /* 0x1720936A: jne 0x1720938a */
L_1720936C:
    eax = MEM32(edi + 0x30); /* 0x1720936C: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(edi + 0x28); /* 0x1720936F: mov ecx, dword ptr [edi + 0x28] */
    /* cmp eax, ecx */ /* 0x17209372: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720938A; /* 0x17209374: je 0x1720938a */
L_17209376:
    edx = ecx; /* 0x17209376: mov edx, ecx */
    /* cmp edx, eax */ /* 0x17209378: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209381; /* 0x1720937A: jae 0x17209381 */
L_1720937C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1720937C: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720937E: dec eax */
    _flag_k = FK_DEC;
    goto L_17209386; /* 0x1720937F: jmp 0x17209386 */
L_17209381:
    eax = MEM32(ebp + (-0x14)); /* 0x17209381: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209384: sub eax, edx */
    _flag_k = FK_CMP;
L_17209386:
    /* test eax, eax */ /* 0x17209386: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172093E5; /* 0x17209388: jne 0x172093e5 */
L_1720938A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1720938A: push dword ptr [ebp + 0x10] */
    MEM32(edi + 0x34) = edx; /* 0x1720938D: mov dword ptr [edi + 0x34], edx */
    PUSH32(esp, esi); /* 0x17209390: push esi */
    PUSH32(esp, edi); /* 0x17209391: push edi */
    RECOMP_CALL(sub_17209B13); /* 0x17209392: call 0x17209b13 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x34); /* 0x17209397: mov edx, dword ptr [edi + 0x34] */
    MEM32(ebp + 0x10) = eax; /* 0x1720939A: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi + 0x30); /* 0x1720939D: mov eax, dword ptr [edi + 0x30] */
    /* cmp edx, eax */ /* 0x172093A0: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x172093A2: mov dword ptr [ebp - 0x18], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_172093AC; /* 0x172093A5: jae 0x172093ac */
L_172093A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x172093A7: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172093A9: dec eax */
    _flag_k = FK_DEC;
    goto L_172093B1; /* 0x172093AA: jmp 0x172093b1 */
L_172093AC:
    eax = MEM32(edi + 0x2C); /* 0x172093AC: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x172093AF: sub eax, edx */
    _flag_k = FK_CMP;
L_172093B1:
    ecx = MEM32(edi + 0x2C); /* 0x172093B1: mov ecx, dword ptr [edi + 0x2c] */
    /* cmp edx, ecx */ /* 0x172093B4: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x172093B6: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x172093B9: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_172093DD; /* 0x172093BC: jne 0x172093dd */
L_172093BE:
    ecx = MEM32(edi + 0x28); /* 0x172093BE: mov ecx, dword ptr [edi + 0x28] */
    eax = MEM32(ebp + (-0x18)); /* 0x172093C1: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, ecx */ /* 0x172093C4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172093DA; /* 0x172093C6: je 0x172093da */
L_172093C8:
    edx = ecx; /* 0x172093C8: mov edx, ecx */
    /* cmp edx, eax */ /* 0x172093CA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_172093D3; /* 0x172093CC: jae 0x172093d3 */
L_172093CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x172093CE: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172093D0: dec eax */
    _flag_k = FK_DEC;
    goto L_172093DD; /* 0x172093D1: jmp 0x172093dd */
L_172093D3:
    eax = MEM32(ebp + (-0x14)); /* 0x172093D3: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x172093D6: sub eax, edx */
    _flag_k = FK_CMP;
    goto L_172093DD; /* 0x172093D8: jmp 0x172093dd */
L_172093DA:
    eax = MEM32(ebp + (-0xC)); /* 0x172093DA: mov eax, dword ptr [ebp - 0xc] */
L_172093DD:
    /* test eax, eax */ /* 0x172093DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209523; /* 0x172093DF: je 0x17209523 */
L_172093E5:
    ecx = MEM32(ebp + (-0x10)); /* 0x172093E5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x172093E8: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(ecx)); /* 0x172093EC: mov cl, byte ptr [ecx] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x172093EE: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x172093F0: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x172093F1: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x10)); /* 0x172093F4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172093F7: dec eax */
    _flag_k = FK_DEC;
    /* cmp ecx, MEM32(edi + 0x2C) */ /* 0x172093F8: cmp ecx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x172093FB: mov dword ptr [ebp - 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209406; /* 0x172093FE: jne 0x17209406 */
L_17209400:
    ecx = MEM32(edi + 0x28); /* 0x17209400: mov ecx, dword ptr [edi + 0x28] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17209403: mov dword ptr [ebp - 0x10], ecx */
L_17209406:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) - 1; /* 0x17209406: dec dword ptr [ebx + 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_17209350; /* 0x17209409: jmp 0x17209350 */
L_1720940E:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1720940E: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_172094B2; /* 0x17209411: jmp 0x172094b2 */
L_17209416:
    /* test eax, eax */ /* 0x17209416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172094A1; /* 0x17209418: jne 0x172094a1 */
L_1720941E:
    eax = MEM32(edi + 0x2C); /* 0x1720941E: mov eax, dword ptr [edi + 0x2c] */
    /* cmp edx, eax */ /* 0x17209421: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x17209423: mov dword ptr [ebp - 0x14], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209446; /* 0x17209426: jne 0x17209446 */
L_17209428:
    eax = MEM32(edi + 0x30); /* 0x17209428: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(edi + 0x28); /* 0x1720942B: mov ecx, dword ptr [edi + 0x28] */
    /* cmp eax, ecx */ /* 0x1720942E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209446; /* 0x17209430: je 0x17209446 */
L_17209432:
    edx = ecx; /* 0x17209432: mov edx, ecx */
    /* cmp edx, eax */ /* 0x17209434: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1720943D; /* 0x17209436: jae 0x1720943d */
L_17209438:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209438: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720943A: dec eax */
    _flag_k = FK_DEC;
    goto L_17209442; /* 0x1720943B: jmp 0x17209442 */
L_1720943D:
    eax = MEM32(ebp + (-0x14)); /* 0x1720943D: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209440: sub eax, edx */
    _flag_k = FK_CMP;
L_17209442:
    /* test eax, eax */ /* 0x17209442: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172094A1; /* 0x17209444: jne 0x172094a1 */
L_17209446:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17209446: push dword ptr [ebp + 0x10] */
    MEM32(edi + 0x34) = edx; /* 0x17209449: mov dword ptr [edi + 0x34], edx */
    PUSH32(esp, esi); /* 0x1720944C: push esi */
    PUSH32(esp, edi); /* 0x1720944D: push edi */
    RECOMP_CALL(sub_17209B13); /* 0x1720944E: call 0x17209b13 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x34); /* 0x17209453: mov edx, dword ptr [edi + 0x34] */
    MEM32(ebp + 0x10) = eax; /* 0x17209456: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi + 0x30); /* 0x17209459: mov eax, dword ptr [edi + 0x30] */
    /* cmp edx, eax */ /* 0x1720945C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1720945E: mov dword ptr [ebp - 0x18], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209468; /* 0x17209461: jae 0x17209468 */
L_17209463:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209463: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17209465: dec eax */
    _flag_k = FK_DEC;
    goto L_1720946D; /* 0x17209466: jmp 0x1720946d */
L_17209468:
    eax = MEM32(edi + 0x2C); /* 0x17209468: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1720946B: sub eax, edx */
    _flag_k = FK_CMP;
L_1720946D:
    ecx = MEM32(edi + 0x2C); /* 0x1720946D: mov ecx, dword ptr [edi + 0x2c] */
    /* cmp edx, ecx */ /* 0x17209470: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x17209472: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17209475: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209499; /* 0x17209478: jne 0x17209499 */
L_1720947A:
    ecx = MEM32(edi + 0x28); /* 0x1720947A: mov ecx, dword ptr [edi + 0x28] */
    eax = MEM32(ebp + (-0x18)); /* 0x1720947D: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, ecx */ /* 0x17209480: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209496; /* 0x17209482: je 0x17209496 */
L_17209484:
    edx = ecx; /* 0x17209484: mov edx, ecx */
    /* cmp edx, eax */ /* 0x17209486: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1720948F; /* 0x17209488: jae 0x1720948f */
L_1720948A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1720948A: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720948C: dec eax */
    _flag_k = FK_DEC;
    goto L_17209499; /* 0x1720948D: jmp 0x17209499 */
L_1720948F:
    eax = MEM32(ebp + (-0x14)); /* 0x1720948F: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17209492: sub eax, edx */
    _flag_k = FK_CMP;
    goto L_17209499; /* 0x17209494: jmp 0x17209499 */
L_17209496:
    eax = MEM32(ebp + (-0xC)); /* 0x17209496: mov eax, dword ptr [ebp - 0xc] */
L_17209499:
    /* test eax, eax */ /* 0x17209499: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209523; /* 0x1720949B: je 0x17209523 */
L_172094A1:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x172094A1: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(ebx + 0x8)); /* 0x172094A5: mov cl, byte ptr [ebx + 8] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x172094A8: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x172094AA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172094AB: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x172094AC: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_172094AF:
    MEM32(ebp + (-0xC)) = eax; /* 0x172094AF: mov dword ptr [ebp - 0xc], eax */
L_172094B2:
    ecx = MEM32(ebx); /* 0x172094B2: mov ecx, dword ptr [ebx] */
    /* cmp ecx, 9 */ /* 0x172094B4: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209094; /* 0x172094B7: jbe 0x17209094 */
L_172094BD:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x172094BD: push -2 */
L_172094BF:
    eax = MEM32(ebp + 0xC); /* 0x172094BF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x20) = eax; /* 0x172094C2: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + 0x8); /* 0x172094C5: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x1C) = eax; /* 0x172094C8: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x172094CB: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x4) = eax; /* 0x172094CE: mov dword ptr [esi + 4], eax */
L_172094D1:
    eax = MEM32(ebp + (-0x4)); /* 0x172094D1: mov eax, dword ptr [ebp - 4] */
    ecx = eax; /* 0x172094D4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x172094D6: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x172094D8: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ecx; /* 0x172094DA: add dword ptr [esi + 8], ecx */
    _flag_k = FK_ADD;
L_172094DD:
    PUSH32(esp, esi); /* 0x172094DD: push esi */
    PUSH32(esp, edi); /* 0x172094DE: push edi */
    MEM32(edi + 0x34) = edx; /* 0x172094DF: mov dword ptr [edi + 0x34], edx */
    RECOMP_CALL(sub_17209B13); /* 0x172094E2: call 0x17209b13 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x172094E7: pop edi */
    esi = POP32_VAL(esp); /* 0x172094E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x172094E9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x172094EA: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172094EB: ret 0xc */
L_172094EE:
    MEM32(ebx) = 9; /* 0x172094EE: mov dword ptr [ebx], 9 */
    MEM32(esi + 0x18) = 0x170290CCu; /* 0x172094F4: mov dword ptr [esi + 0x18], 0x170290cc */
L_172094FB:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x172094FB: push -3 */
    RECOMP_BACKEDGE();
    goto L_172094BF; /* 0x172094FD: jmp 0x172094bf */
L_172094FF:
    MEM32(ebx) = 9; /* 0x172094FF: mov dword ptr [ebx], 9 */
    MEM32(esi + 0x18) = 0x170290B4u; /* 0x17209505: mov dword ptr [esi + 0x18], 0x170290b4 */
    RECOMP_BACKEDGE();
    goto L_172094FB; /* 0x1720950C: jmp 0x172094fb */
L_1720950E:
    eax = MEM32(ebp + 0xC); /* 0x1720950E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17209511: push dword ptr [ebp + 0x10] */
    MEM32(edi + 0x20) = eax; /* 0x17209514: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + 0x8); /* 0x17209517: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x1C) = eax; /* 0x1720951A: mov dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1720951D: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_172094D1; /* 0x17209521: jmp 0x172094d1 */
L_17209523:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17209523: push dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_172094BF; /* 0x17209526: jmp 0x172094bf */
L_17209528:
    /* cmp MEM32(ebp + 0x8), 7 */ /* 0x17209528: cmp dword ptr [ebp + 8], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209538; /* 0x1720952C: jbe 0x17209538 */
L_1720952E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 8; /* 0x1720952E: sub dword ptr [ebp + 8], 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17209532: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17209535: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
L_17209538:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17209538: push dword ptr [ebp + 0x10] */
    MEM32(edi + 0x34) = edx; /* 0x1720953B: mov dword ptr [edi + 0x34], edx */
    PUSH32(esp, esi); /* 0x1720953E: push esi */
    PUSH32(esp, edi); /* 0x1720953F: push edi */
    RECOMP_CALL(sub_17209B13); /* 0x17209540: call 0x17209b13 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x34); /* 0x17209545: mov edx, dword ptr [edi + 0x34] */
    /* cmp MEM32(edi + 0x30), edx */ /* 0x17209548: cmp dword ptr [edi + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209571; /* 0x1720954B: je 0x17209571 */
L_1720954D:
    ecx = MEM32(ebp + 0xC); /* 0x1720954D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x20) = ecx; /* 0x17209550: mov dword ptr [edi + 0x20], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x17209553: mov ecx, dword ptr [ebp + 8] */
    MEM32(edi + 0x1C) = ecx; /* 0x17209556: mov dword ptr [edi + 0x1c], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x17209559: mov ecx, dword ptr [ebp - 8] */
    MEM32(esi + 0x4) = ecx; /* 0x1720955C: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1720955F: mov ecx, dword ptr [ebp - 4] */
    ebx = ecx; /* 0x17209562: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi); /* 0x17209564: sub ebx, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(esi) = ecx; /* 0x17209566: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + ebx; /* 0x17209568: add dword ptr [esi + 8], ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1720956B: push eax */
    RECOMP_BACKEDGE();
    goto L_172094DD; /* 0x1720956C: jmp 0x172094dd */
L_17209571:
    MEM32(ebx) = 8; /* 0x17209571: mov dword ptr [ebx], 8 */
L_17209577:
    PUSH32(esp, 1); /* 0x17209577: push 1 */
    RECOMP_BACKEDGE();
    goto L_172094BF; /* 0x17209579: jmp 0x172094bf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1720909Bu: goto L_1720909B;
      case 0x1720916Eu: goto L_1720916E;
      case 0x1720921Eu: goto L_1720921E;
      case 0x17209279u: goto L_17209279;
      case 0x17209302u: goto L_17209302;
      case 0x17209328u: goto L_17209328;
      case 0x17209416u: goto L_17209416;
      case 0x172094FBu: goto L_172094FB;
      case 0x17209528u: goto L_17209528;
      case 0x17209577u: goto L_17209577;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_172095AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172095ABu);

L_172095AB:
    edi = edi; /* 0x172095AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172095AD: push ebp */
    ebp = esp; /* 0x172095AE: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x172095B0: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x172095B3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x28)); /* 0x172095B6: push dword ptr [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x172095B9: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x172095BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172095BD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172095C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172095C5u);

L_172095C5:
    edi = edi; /* 0x172095C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172095C7: push ebp */
    ebp = esp; /* 0x172095C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF8u; /* 0x172095CA: sub esp, 0xf8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x172095D0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x172095D3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x172095D4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x172095D7: push esi */
    PUSH32(esp, edi); /* 0x172095D8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x172095D9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x172095DB: mov esi, eax */
    MEM32(ebp + (-0x7C)) = edi; /* 0x172095DD: mov dword ptr [ebp - 0x7c], edi */
    MEM32(ebp + (-0x78)) = edi; /* 0x172095E0: mov dword ptr [ebp - 0x78], edi */
    MEM32(ebp + (-0x74)) = edi; /* 0x172095E3: mov dword ptr [ebp - 0x74], edi */
    MEM32(ebp + (-0x70)) = edi; /* 0x172095E6: mov dword ptr [ebp - 0x70], edi */
    MEM32(ebp + (-0x6C)) = edi; /* 0x172095E9: mov dword ptr [ebp - 0x6c], edi */
    MEM32(ebp + (-0x68)) = edi; /* 0x172095EC: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x64)) = edi; /* 0x172095EF: mov dword ptr [ebp - 0x64], edi */
    MEM32(ebp + (-0x60)) = edi; /* 0x172095F2: mov dword ptr [ebp - 0x60], edi */
    MEM32(ebp + (-0x5C)) = edi; /* 0x172095F5: mov dword ptr [ebp - 0x5c], edi */
    MEM32(ebp + (-0x58)) = edi; /* 0x172095F8: mov dword ptr [ebp - 0x58], edi */
    MEM32(ebp + (-0x54)) = edi; /* 0x172095FB: mov dword ptr [ebp - 0x54], edi */
    MEM32(ebp + (-0x50)) = edi; /* 0x172095FE: mov dword ptr [ebp - 0x50], edi */
    MEM32(ebp + (-0x4C)) = edi; /* 0x17209601: mov dword ptr [ebp - 0x4c], edi */
    MEM32(ebp + (-0x48)) = edi; /* 0x17209604: mov dword ptr [ebp - 0x48], edi */
    MEM32(ebp + (-0x44)) = edi; /* 0x17209607: mov dword ptr [ebp - 0x44], edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x1720960A: mov dword ptr [ebp - 0x40], edi */
    edx = ebx; /* 0x1720960D: mov edx, ebx */
L_1720960F:
    eax = MEM32(ecx); /* 0x1720960F: mov eax, dword ptr [ecx] */
    eax = ebp + eax * 4 + (-0x7C); /* 0x17209611: lea eax, [ebp + eax*4 - 0x7c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17209615: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17209617: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1720961A: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1720960F; /* 0x1720961B: jne 0x1720960f */
L_1720961D:
    /* cmp MEM32(ebp + (-0x7C)), ebx */ /* 0x1720961D: cmp dword ptr [ebp - 0x7c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209632; /* 0x17209620: jne 0x17209632 */
L_17209622:
    eax = MEM32(ebp + 0x1C); /* 0x17209622: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = edi; /* 0x17209625: mov dword ptr [eax], edi */
    MEM32(esi) = edi; /* 0x17209627: mov dword ptr [esi], edi */
L_17209629:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209629: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1720962B:
    edi = POP32_VAL(esp); /* 0x1720962B: pop edi */
    esi = POP32_VAL(esp); /* 0x1720962C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1720962D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1720962E: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1720962F: ret 0x24 */
L_17209632:
    ebx = MEM32(esi); /* 0x17209632: mov ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17209634: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17209636: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, 0xFu); /* 0x17209637: push 0xf */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17209639: mov dword ptr [ebp - 4], ebx */
    ecx = edx; /* 0x1720963C: mov ecx, edx */
    eax = POP32_VAL(esp); /* 0x1720963E: pop eax */
L_1720963F:
    /* cmp MEM32(ebp + ecx * 4 + (-0x7C)), edi */ /* 0x1720963F: cmp dword ptr [ebp + ecx*4 - 0x7c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x7C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1720964A; /* 0x17209643: jne 0x1720964a */
L_17209645:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209645: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x17209646: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1720963F; /* 0x17209648: jbe 0x1720963f */
L_1720964A:
    /* cmp ebx, ecx */ /* 0x1720964A: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1720964C: mov dword ptr [ebp - 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209654; /* 0x1720964F: jae 0x17209654 */
L_17209651:
    MEM32(ebp + (-0x4)) = ecx; /* 0x17209651: mov dword ptr [ebp - 4], ecx */
L_17209654:
    /* cmp MEM32(ebp + eax * 4 + (-0x7C)), edi */ /* 0x17209654: cmp dword ptr [ebp + eax*4 - 0x7c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x7C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1720965D; /* 0x17209658: jne 0x1720965d */
L_1720965A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720965A: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17209654; /* 0x1720965B: jne 0x17209654 */
L_1720965D:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1720965D: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = eax; /* 0x17209660: mov dword ptr [ebp - 0x2c], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209668; /* 0x17209663: jbe 0x17209668 */
L_17209665:
    MEM32(ebp + (-0x4)) = eax; /* 0x17209665: mov dword ptr [ebp - 4], eax */
L_17209668:
    ebx = MEM32(ebp + (-0x4)); /* 0x17209668: mov ebx, dword ptr [ebp - 4] */
    MEM32(esi) = ebx; /* 0x1720966B: mov dword ptr [esi], ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1720966D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1720966D: shl edx, cl */
    goto L_1720967E; /* 0x1720966F: jmp 0x1720967e */
L_17209671:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x7C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + ecx * 4 + (-0x7C)); /* 0x17209671: sub edx, dword ptr [ebp + ecx*4 - 0x7c] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_17209758; /* 0x17209675: js 0x17209758 */
L_1720967B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1720967B: inc ecx */
    _flag_k = FK_INC;
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x1720967C: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x1720967C: shl edx, 1 */
L_1720967E:
    /* cmp ecx, eax */ /* 0x1720967E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209671; /* 0x17209680: jb 0x17209671 */
L_17209682:
    esi = eax; /* 0x17209682: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17209684: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17209684: shl esi, 2 */
    ecx = ebp + esi + (-0x7C); /* 0x17209687: lea ecx, [ebp + esi - 0x7c] */
    ebx = MEM32(ecx); /* 0x1720968B: mov ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1720968D: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = edx; /* 0x1720968F: mov dword ptr [ebp - 0x34], edx */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_17209758; /* 0x17209692: js 0x17209758 */
L_17209698:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x17209698: add ebx, edx */
    _flag_k = FK_ADD;
    MEM32(ecx) = ebx; /* 0x1720969A: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1720969C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720969E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xB8)) = edi; /* 0x1720969F: mov dword ptr [ebp - 0xb8], edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_172096BA; /* 0x172096A5: je 0x172096ba */
L_172096A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x172096A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_172096A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + ebx + (-0x78)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + ebx + (-0x78)); /* 0x172096A9: add ecx, dword ptr [ebp + ebx - 0x78] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x172096AD: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172096B0: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + ebx + (-0xB8)) = ecx; /* 0x172096B1: mov dword ptr [ebp + ebx - 0xb8], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172096A9; /* 0x172096B8: jne 0x172096a9 */
L_172096BA:
    ecx = MEM32(ebp + 0x8); /* 0x172096BA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x172096BD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_172096BF:
    eax = MEM32(ecx); /* 0x172096BF: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x172096C1: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x172096C4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x172096C6: mov dword ptr [ebp + 8], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172096E3; /* 0x172096C9: je 0x172096e3 */
L_172096CB:
    edx = MEM32(ebp + 0x28); /* 0x172096CB: mov edx, dword ptr [ebp + 0x28] */
    eax = ebp + eax * 4 + (-0xBC); /* 0x172096CE: lea eax, [ebp + eax*4 - 0xbc] */
    ecx = MEM32(eax); /* 0x172096D5: mov ecx, dword ptr [eax] */
    MEM32(edx + ecx * 4) = ebx; /* 0x172096D7: mov dword ptr [edx + ecx*4], ebx */
    edx = MEM32(ebp + (-0x34)); /* 0x172096DA: mov edx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x172096DD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x172096DE: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x172096E0: mov ecx, dword ptr [ebp + 8] */
L_172096E3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x172096E3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x172096E4: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172096BF; /* 0x172096E7: jb 0x172096bf */
L_172096E9:
    eax = MEM32(ebp + esi + (-0xBC)); /* 0x172096E9: mov eax, dword ptr [ebp + esi - 0xbc] */
    ebx = MEM32(ebp + (-0x4)); /* 0x172096F0: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x172096F3: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x172096F7: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x28); /* 0x172096FA: mov eax, dword ptr [ebp + 0x28] */
    MEM32(ebp + 0x8) = eax; /* 0x172096FD: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x17209700: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x17209703: neg ebx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x17209705: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edi; /* 0x17209708: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0xBC)) = edi; /* 0x1720970B: mov dword ptr [ebp - 0xbc], edi */
    MEM32(ebp + (-0xF8)) = edi; /* 0x17209711: mov dword ptr [ebp - 0xf8], edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x17209717: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1720971A: mov dword ptr [ebp - 0x10], edi */
    if (CMP_G(_flag_a, _flag_b)) goto L_1720993F; /* 0x1720971D: jg 0x1720993f */
L_17209723:
    ecx = eax + (-0x1); /* 0x17209723: lea ecx, [eax - 1] */
    eax = ebp + eax * 4 + (-0x7C); /* 0x17209726: lea eax, [ebp + eax*4 - 0x7c] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1720972A: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1720972D: mov dword ptr [ebp - 0x24], eax */
L_17209730:
    eax = MEM32(ebp + (-0x24)); /* 0x17209730: mov eax, dword ptr [ebp - 0x24] */
    eax = MEM32(eax); /* 0x17209733: mov eax, dword ptr [eax] */
    /* cmp eax, edi */ /* 0x17209735: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17209737: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209929; /* 0x1720973A: je 0x17209929 */
L_17209740:
    eax = MEM32(ebp + (-0x4)); /* 0x17209740: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x17209743: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17209746: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x17209748: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17209845; /* 0x1720974B: jle 0x17209845 */
L_17209751:
    ecx = ebx; /* 0x17209751: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x17209753: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    goto L_17209762; /* 0x17209756: jmp 0x17209762 */
L_17209758:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x17209758: push -3 */
    goto L_17209953; /* 0x1720975A: jmp 0x17209953 */
L_1720975F:
    ecx = MEM32(ebp + (-0x3C)); /* 0x1720975F: mov ecx, dword ptr [ebp - 0x3c] */
L_17209762:
    edx = MEM32(ebp + (-0x4)); /* 0x17209762: mov edx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x2C)); /* 0x17209765: mov esi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17209768: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1720976B: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1720976D: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1720976F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x17209771: sub esi, ebx */
    _flag_k = FK_CMP;
    /* cmp esi, edx */ /* 0x17209773: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = ecx; /* 0x17209775: mov dword ptr [ebp - 0x3c], ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x17209778: mov dword ptr [ebp - 0x38], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1720977F; /* 0x1720977B: jbe 0x1720977f */
L_1720977D:
    esi = edx; /* 0x1720977D: mov esi, edx */
L_1720977F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1720977F: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x17209782: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209785: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x17209787: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209789: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1720978A: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1720978A: shl eax, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1720978C: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1720978D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_172097BF; /* 0x1720978F: jbe 0x172097bf */
L_17209791:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x17209791: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x1C)); /* 0x17209794: sub edx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17209797: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x17209799: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x24)); /* 0x1720979B: mov edx, dword ptr [ebp - 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_172097BF; /* 0x1720979E: jae 0x172097bf */
L_172097A0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x172097A0: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x172097A1: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_172097BF; /* 0x172097A3: jae 0x172097bf */
L_172097A5:
    goto L_172097AA; /* 0x172097A5: jmp 0x172097aa */
L_172097A7:
    edx = MEM32(ebp + (-0x10)); /* 0x172097A7: mov edx, dword ptr [ebp - 0x10] */
L_172097AA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x172097AA: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x172097AD: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(edx); /* 0x172097B0: mov edx, dword ptr [edx] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x172097B2: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x172097B2: shl eax, 1 */
    /* cmp eax, edx */ /* 0x172097B4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_172097BF; /* 0x172097B6: jbe 0x172097bf */
L_172097B8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x172097B8: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x172097BA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x172097BB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172097A7; /* 0x172097BD: jb 0x172097a7 */
L_172097BF:
    eax = MEM32(ebp + 0x24); /* 0x172097BF: mov eax, dword ptr [ebp + 0x24] */
    eax = MEM32(eax); /* 0x172097C2: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x172097C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x172097C6: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x172097C7: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x172097C7: shl edx, cl */
    esi = eax + edx; /* 0x172097C9: lea esi, [eax + edx] */
    /* cmp esi, 0x5A0u */ /* 0x172097CC: cmp esi, 0x5a0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x172097D2: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17209758; /* 0x172097D5: ja 0x17209758 */
L_172097D7:
    edx = MEM32(ebp + 0x20); /* 0x172097D7: mov edx, dword ptr [ebp + 0x20] */
    eax = edx + eax * 8; /* 0x172097DA: lea eax, [edx + eax*8] */
    edx = MEM32(ebp + (-0xC)); /* 0x172097DD: mov edx, dword ptr [ebp - 0xc] */
    edx = ebp + edx * 4 + (-0xF8); /* 0x172097E0: lea edx, [ebp + edx*4 - 0xf8] */
    MEM32(ebp + (-0x28)) = eax; /* 0x172097E7: mov dword ptr [ebp - 0x28], eax */
    MEM32(edx) = eax; /* 0x172097EA: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0x24); /* 0x172097EC: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = esi; /* 0x172097EF: mov dword ptr [eax], esi */
    eax = MEM32(ebp + (-0xC)); /* 0x172097F1: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, edi */ /* 0x172097F4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1720982E; /* 0x172097F6: je 0x1720982e */
L_172097F8:
    esi = MEM32(ebp + (-0x20)); /* 0x172097F8: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + eax * 4 + (-0xBC)) = esi; /* 0x172097FB: mov dword ptr [ebp + eax*4 - 0xbc], esi */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x17209802: mov al, byte ptr [ebp - 4] */
    MEM8(ebp + (-0x17)) = (uint8_t)(LO8(eax)); /* 0x17209805: mov byte ptr [ebp - 0x17], al */
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(ecx)); /* 0x17209808: mov byte ptr [ebp - 0x18], cl */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1720980B: mov ecx, dword ptr [ebp - 0x3c] */
    eax = esi; /* 0x1720980E: mov eax, esi */
    esi = MEM32(ebp + (-0x18)); /* 0x17209810: mov esi, dword ptr [ebp - 0x18] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209813: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x17209813: shr eax, cl */
    ecx = MEM32(edx + (-0x4)); /* 0x17209815: mov ecx, dword ptr [edx - 4] */
    edx = MEM32(ebp + (-0x28)); /* 0x17209818: mov edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1720981B: sub edx, ecx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1720981D: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x17209820: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ecx + eax * 8) = esi; /* 0x17209822: mov dword ptr [ecx + eax*8], esi */
    MEM32(ebp + (-0x14)) = edx; /* 0x17209825: mov dword ptr [ebp - 0x14], edx */
    MEM32(ecx + eax * 8 + 0x4) = edx; /* 0x17209828: mov dword ptr [ecx + eax*8 + 4], edx */
    goto L_17209836; /* 0x1720982C: jmp 0x17209836 */
L_1720982E:
    eax = MEM32(ebp + (-0x28)); /* 0x1720982E: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + 0x1C); /* 0x17209831: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(ecx) = eax; /* 0x17209834: mov dword ptr [ecx], eax */
L_17209836:
    eax = MEM32(ebp + (-0x38)); /* 0x17209836: mov eax, dword ptr [ebp - 0x38] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x17209839: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1720975F; /* 0x1720983C: jg 0x1720975f */
L_17209842:
    edx = MEM32(ebp + (-0x34)); /* 0x17209842: mov edx, dword ptr [ebp - 0x34] */
L_17209845:
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x17209845: mov al, byte ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x17209848: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(ebx)); /* 0x1720984B: sub al, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x17)) = (uint8_t)(LO8(eax)); /* 0x1720984D: mov byte ptr [ebp - 0x17], al */
    eax = MEM32(ebp + 0x28); /* 0x17209850: mov eax, dword ptr [ebp + 0x28] */
    ecx = eax + ecx * 4; /* 0x17209853: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x8); /* 0x17209856: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x17209859: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17209863; /* 0x1720985B: jb 0x17209863 */
L_1720985D:
    MEM8(ebp + (-0x18)) = (uint8_t)(0xC0u); /* 0x1720985D: mov byte ptr [ebp - 0x18], 0xc0 */
    goto L_1720989B; /* 0x17209861: jmp 0x1720989b */
L_17209863:
    eax = MEM32(eax); /* 0x17209863: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x17209865: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1720987C; /* 0x17209868: jae 0x1720987c */
L_1720986A:
    /* cmp eax, 0x100u */ /* 0x1720986A: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_B(_flag_a, _flag_b)) ? 1 : 0); /* 0x1720986F: setb cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x17209872: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    ecx = ecx & 0x60u; /* 0x17209874: and ecx, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(ecx)); /* 0x17209877: mov byte ptr [ebp - 0x18], cl */
    goto L_17209894; /* 0x1720987A: jmp 0x17209894 */
L_1720987C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x10); /* 0x1720987C: sub eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x18); /* 0x1720987F: mov ecx, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17209882: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17209882: shl eax, 2 */
    SET_LO8(ecx, MEM8(eax + ecx)); /* 0x17209885: mov cl, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x50u); /* 0x17209888: add cl, 0x50 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(ecx)); /* 0x1720988B: mov byte ptr [ebp - 0x18], cl */
    ecx = MEM32(ebp + 0x14); /* 0x1720988E: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(eax + ecx); /* 0x17209891: mov eax, dword ptr [eax + ecx] */
L_17209894:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x17209894: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x17209898: mov dword ptr [ebp - 0x14], eax */
L_1720989B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1720989B: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x20)); /* 0x1720989E: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x172098A1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x172098A3: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x172098A5: inc esi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x172098A6: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x172098A6: shl esi, cl */
    ecx = ebx; /* 0x172098A8: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x172098AA: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x172098AA: shr eax, cl */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x172098AC: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_172098D3; /* 0x172098AF: jae 0x172098d3 */
L_172098B1:
    ecx = MEM32(ebp + (-0x28)); /* 0x172098B1: mov ecx, dword ptr [ebp - 0x28] */
    ecx = ecx + eax * 8; /* 0x172098B4: lea ecx, [ecx + eax*8] */
L_172098B7:
    edx = MEM32(ebp + (-0x18)); /* 0x172098B7: mov edx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = edx; /* 0x172098BA: mov dword ptr [ecx], edx */
    edx = MEM32(ebp + (-0x14)); /* 0x172098BC: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + 0x4) = edx; /* 0x172098BF: mov dword ptr [ecx + 4], edx */
    edx = esi; /* 0x172098C2: mov edx, esi */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x172098C4: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x172098C4: shl edx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x172098C7: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x172098C9: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x172098CB: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172098B7; /* 0x172098CE: jb 0x172098b7 */
L_172098D0:
    edx = MEM32(ebp + (-0x34)); /* 0x172098D0: mov edx, dword ptr [ebp - 0x34] */
L_172098D3:
    ecx = MEM32(ebp + (-0x30)); /* 0x172098D3: mov ecx, dword ptr [ebp - 0x30] */
    esi = MEM32(ebp + (-0x20)); /* 0x172098D6: mov esi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172098D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x172098DB: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x172098DC: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x172098DC: shl eax, cl */
    goto L_172098E4; /* 0x172098DE: jmp 0x172098e4 */
L_172098E0:
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x172098E0: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x172098E2: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x172098E2: shr eax, 1 */
L_172098E4:
    /* test esi, eax */ /* 0x172098E4: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_172098E0; /* 0x172098E6: jne 0x172098e0 */
L_172098E8:
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x172098E8: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172098EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x172098EC: inc eax */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x172098ED: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x172098EF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x172098EF: shl eax, cl */
    MEM32(ebp + (-0x20)) = esi; /* 0x172098F1: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x172098F4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x172098F5: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x172098F7: mov ecx, eax */
    eax = MEM32(ebp + (-0xC)); /* 0x172098F9: mov eax, dword ptr [ebp - 0xc] */
    /* cmp ecx, MEM32(ebp + eax * 4 + (-0xBC)) */ /* 0x172098FC: cmp ecx, dword ptr [ebp + eax*4 - 0xbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + eax * 4 + (-0xBC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209920; /* 0x17209903: je 0x17209920 */
L_17209905:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x4)); /* 0x17209905: sub ebx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17209908: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1720990A: inc esi */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x1720990B: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1720990D: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1720990D: shl esi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1720990F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17209910: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    esi = esi & MEM32(ebp + (-0x20)); /* 0x17209911: and esi, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + eax * 4 + (-0xBC)) */ /* 0x17209914: cmp esi, dword ptr [ebp + eax*4 - 0xbc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + eax * 4 + (-0xBC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209905; /* 0x1720991B: jne 0x17209905 */
L_1720991D:
    MEM32(ebp + (-0xC)) = eax; /* 0x1720991D: mov dword ptr [ebp - 0xc], eax */
L_17209920:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x17209920: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209740; /* 0x17209923: jne 0x17209740 */
L_17209929:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17209929: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 4; /* 0x1720992C: add dword ptr [ebp - 0x24], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x17209930: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x17209933: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x17209936: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_17209730; /* 0x17209939: jle 0x17209730 */
L_1720993F:
    /* cmp edx, edi */ /* 0x1720993F: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209629; /* 0x17209941: je 0x17209629 */
L_17209947:
    /* cmp MEM32(ebp + (-0x2C)), 1 */ /* 0x17209947: cmp dword ptr [ebp - 0x2c], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209629; /* 0x1720994B: je 0x17209629 */
L_17209951:
    PUSH32(esp, 0xFFFFFFFBu); /* 0x17209951: push -5 */
L_17209953:
    eax = POP32_VAL(esp); /* 0x17209953: pop eax */
    RECOMP_BACKEDGE();
    goto L_1720962B; /* 0x17209954: jmp 0x1720962b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1720995E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720995Eu);

L_1720995E:
    edi = edi; /* 0x1720995E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209960: push ebp */
    ebp = esp; /* 0x17209961: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17209963: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17209964: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17209968: push esi */
    esi = MEM32(ebp + 0x18); /* 0x17209969: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 4); /* 0x1720996C: push 4 */
    PUSH32(esp, 0x13u); /* 0x1720996E: push 0x13 */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x17209970: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x17209973: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17209976: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x18) = eax; /* 0x17209978: mov dword ptr [ebp + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209982; /* 0x1720997B: jne 0x17209982 */
L_1720997D:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x1720997D: push -4 */
    eax = POP32_VAL(esp); /* 0x1720997F: pop eax */
    goto L_172099D4; /* 0x17209980: jmp 0x172099d4 */
L_17209982:
    PUSH32(esp, ebx); /* 0x17209982: push ebx */
    PUSH32(esp, eax); /* 0x17209983: push eax */
    eax = ebp + (-0x4); /* 0x17209984: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17209987: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17209988: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1720998B: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1720998E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x17209991: push 0 */
    PUSH32(esp, 0); /* 0x17209993: push 0 */
    PUSH32(esp, 0x13u); /* 0x17209995: push 0x13 */
    PUSH32(esp, 0x13u); /* 0x17209997: push 0x13 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17209999: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_172095C5); /* 0x1720999C: call 0x172095c5 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x172099A1: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFDu */ /* 0x172099A3: cmp ebx, -3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_172099B1; /* 0x172099A6: jne 0x172099b1 */
L_172099A8:
    MEM32(esi + 0x18) = 0x1702A434u; /* 0x172099A8: mov dword ptr [esi + 0x18], 0x1702a434 */
    goto L_172099C8; /* 0x172099AF: jmp 0x172099c8 */
L_172099B1:
    /* cmp ebx, 0xFFFFFFFBu */ /* 0x172099B1: cmp ebx, -5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172099BE; /* 0x172099B4: je 0x172099be */
L_172099B6:
    eax = MEM32(ebp + 0xC); /* 0x172099B6: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x172099B9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_172099C8; /* 0x172099BC: jne 0x172099c8 */
L_172099BE:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x172099BE: push -3 */
    MEM32(esi + 0x18) = 0x1702A410u; /* 0x172099C0: mov dword ptr [esi + 0x18], 0x1702a410 */
    ebx = POP32_VAL(esp); /* 0x172099C7: pop ebx */
L_172099C8:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x172099C8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x172099CB: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x172099CE: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x172099D1: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x172099D3: pop ebx */
L_172099D4:
    esi = POP32_VAL(esp); /* 0x172099D4: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x172099D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x172099D6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_172099DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172099DEu);

L_172099DE:
    edi = edi; /* 0x172099DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172099E0: push ebp */
    ebp = esp; /* 0x172099E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x172099E3: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x172099E4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x172099E8: push esi */
    esi = MEM32(ebp + 0x28); /* 0x172099E9: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, 4); /* 0x172099EC: push 4 */
    PUSH32(esp, 0x120u); /* 0x172099EE: push 0x120 */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x172099F3: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x172099F6: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x172099F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x28) = eax; /* 0x172099FB: mov dword ptr [ebp + 0x28], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209A08; /* 0x172099FE: jne 0x17209a08 */
L_17209A00:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x17209A00: push -4 */
    eax = POP32_VAL(esp); /* 0x17209A02: pop eax */
    goto L_17209AD5; /* 0x17209A03: jmp 0x17209ad5 */
L_17209A08:
    PUSH32(esp, ebx); /* 0x17209A08: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17209A09: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17209A0C: push edi */
    PUSH32(esp, eax); /* 0x17209A0D: push eax */
    eax = ebp + (-0x4); /* 0x17209A0E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17209A11: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x17209A12: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0x14); /* 0x17209A15: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x17209A18: push dword ptr [ebp + 0x1c] */
    edi = 0x101u; /* 0x17209A1B: mov edi, 0x101 */
    PUSH32(esp, 0x17029198u); /* 0x17209A20: push 0x17029198 */
    PUSH32(esp, 0x17029118u); /* 0x17209A25: push 0x17029118 */
    PUSH32(esp, edi); /* 0x17209A2A: push edi */
    PUSH32(esp, ebx); /* 0x17209A2B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17209A2C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_172095C5); /* 0x17209A2F: call 0x172095c5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17209A34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209AA9; /* 0x17209A36: jne 0x17209aa9 */
L_17209A38:
    eax = MEM32(ebp + 0x14); /* 0x17209A38: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), 0 */ /* 0x17209A3B: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209ABC; /* 0x17209A3E: je 0x17209abc */
L_17209A40:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x17209A40: push dword ptr [ebp + 0x28] */
    eax = ebp + (-0x4); /* 0x17209A43: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17209A46: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x17209A47: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0x10); /* 0x17209A4A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x17209A4D: push dword ptr [ebp + 0x20] */
    eax = eax + ebx * 4; /* 0x17209A50: lea eax, [eax + ebx*4] */
    PUSH32(esp, 0x17029290u); /* 0x17209A53: push 0x17029290 */
    PUSH32(esp, 0x17029218u); /* 0x17209A58: push 0x17029218 */
    PUSH32(esp, 0); /* 0x17209A5D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17209A5F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17209A62: push eax */
    eax = MEM32(ebp + 0x18); /* 0x17209A63: mov eax, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_172095C5); /* 0x17209A66: call 0x172095c5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17209A6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209A7F; /* 0x17209A6D: jne 0x17209a7f */
L_17209A6F:
    eax = MEM32(ebp + 0x18); /* 0x17209A6F: mov eax, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax), 0 */ /* 0x17209A72: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209A7B; /* 0x17209A75: jne 0x17209a7b */
L_17209A77:
    /* cmp ebx, edi */ /* 0x17209A77: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17209AA0; /* 0x17209A79: ja 0x17209aa0 */
L_17209A7B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17209A7B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17209AC8; /* 0x17209A7D: jmp 0x17209ac8 */
L_17209A7F:
    /* cmp eax, 0xFFFFFFFDu */ /* 0x17209A7F: cmp eax, -3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209A8D; /* 0x17209A82: jne 0x17209a8d */
L_17209A84:
    MEM32(esi + 0x18) = 0x1702A4E0u; /* 0x17209A84: mov dword ptr [esi + 0x18], 0x1702a4e0 */
    goto L_17209AC6; /* 0x17209A8B: jmp 0x17209ac6 */
L_17209A8D:
    /* cmp eax, 0xFFFFFFFBu */ /* 0x17209A8D: cmp eax, -5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209A9B; /* 0x17209A90: jne 0x17209a9b */
L_17209A92:
    MEM32(esi + 0x18) = 0x1702A4C4u; /* 0x17209A92: mov dword ptr [esi + 0x18], 0x1702a4c4 */
    goto L_17209AC3; /* 0x17209A99: jmp 0x17209ac3 */
L_17209A9B:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x17209A9B: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209AC6; /* 0x17209A9E: je 0x17209ac6 */
L_17209AA0:
    MEM32(esi + 0x18) = 0x1702A4A0u; /* 0x17209AA0: mov dword ptr [esi + 0x18], 0x1702a4a0 */
    goto L_17209AC3; /* 0x17209AA7: jmp 0x17209ac3 */
L_17209AA9:
    /* cmp eax, 0xFFFFFFFDu */ /* 0x17209AA9: cmp eax, -3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209AB7; /* 0x17209AAC: jne 0x17209ab7 */
L_17209AAE:
    MEM32(esi + 0x18) = 0x1702A47Cu; /* 0x17209AAE: mov dword ptr [esi + 0x18], 0x1702a47c */
    goto L_17209AC6; /* 0x17209AB5: jmp 0x17209ac6 */
L_17209AB7:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x17209AB7: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17209AC6; /* 0x17209ABA: je 0x17209ac6 */
L_17209ABC:
    MEM32(esi + 0x18) = 0x1702A45Cu; /* 0x17209ABC: mov dword ptr [esi + 0x18], 0x1702a45c */
L_17209AC3:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x17209AC3: push -3 */
    eax = POP32_VAL(esp); /* 0x17209AC5: pop eax */
L_17209AC6:
    edi = eax; /* 0x17209AC6: mov edi, eax */
L_17209AC8:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x17209AC8: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x17209ACB: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x17209ACE: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17209AD1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17209AD3: pop edi */
    ebx = POP32_VAL(esp); /* 0x17209AD4: pop ebx */
L_17209AD5:
    esi = POP32_VAL(esp); /* 0x17209AD5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17209AD6: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x17209AD7: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_17209ADF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209ADFu);

L_17209ADF:
    edi = edi; /* 0x17209ADF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209AE1: push ebp */
    ebp = esp; /* 0x17209AE2: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17209AE4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 9; /* 0x17209AE7: mov dword ptr [eax], 9 */
    eax = MEM32(ebp + 0xC); /* 0x17209AED: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 5; /* 0x17209AF0: mov dword ptr [eax], 5 */
    eax = MEM32(ebp + 0x10); /* 0x17209AF6: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0x17029310u; /* 0x17209AF9: mov dword ptr [eax], 0x17029310 */
    eax = MEM32(ebp + 0x14); /* 0x17209AFF: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 0x1702A310u; /* 0x17209B02: mov dword ptr [eax], 0x1702a310 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209B08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x17209B0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17209B0B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17209B13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209B13u);

L_17209B13:
    edi = edi; /* 0x17209B13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209B15: push ebp */
    ebp = esp; /* 0x17209B16: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17209B18: push ecx */
    PUSH32(esp, ecx); /* 0x17209B19: push ecx */
    PUSH32(esp, ebx); /* 0x17209B1A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17209B1B: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x30); /* 0x17209B1E: mov edx, dword ptr [ebx + 0x30] */
    PUSH32(esp, esi); /* 0x17209B21: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17209B22: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x17209B25: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x17209B28: push edi */
    edi = MEM32(ebx + 0x34); /* 0x17209B29: mov edi, dword ptr [ebx + 0x34] */
    /* cmp edx, edi */ /* 0x17209B2C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x17209B2E: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0x8) = edx; /* 0x17209B31: mov dword ptr [ebp + 8], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209B39; /* 0x17209B34: jbe 0x17209b39 */
L_17209B36:
    edi = MEM32(ebx + 0x2C); /* 0x17209B36: mov edi, dword ptr [ebx + 0x2c] */
L_17209B39:
    eax = MEM32(esi + 0x10); /* 0x17209B39: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x17209B3C: sub edi, edx */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x17209B3E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17209B40: mov dword ptr [ebp - 4], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209B4A; /* 0x17209B43: jbe 0x17209b4a */
L_17209B45:
    MEM32(ebp + (-0x4)) = eax; /* 0x17209B45: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x17209B48: mov edi, eax */
L_17209B4A:
    /* test edi, edi */ /* 0x17209B4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209B58; /* 0x17209B4C: je 0x17209b58 */
L_17209B4E:
    /* cmp MEM32(ebp + 0x10), 0xFFFFFFFBu */ /* 0x17209B4E: cmp dword ptr [ebp + 0x10], -5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209B58; /* 0x17209B52: jne 0x17209b58 */
L_17209B54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17209B54: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17209B58:
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + edi; /* 0x17209B58: add dword ptr [esi + 0x14], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17209B5B: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = eax; /* 0x17209B5D: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebx + 0x38); /* 0x17209B60: mov eax, dword ptr [ebx + 0x38] */
    /* test eax, eax */ /* 0x17209B63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209B77; /* 0x17209B65: je 0x17209b77 */
L_17209B67:
    PUSH32(esp, edi); /* 0x17209B67: push edi */
    PUSH32(esp, edx); /* 0x17209B68: push edx */
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x17209B69: push dword ptr [ebx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x17209B6C: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x17209B6E: mov edx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x3C) = eax; /* 0x17209B71: mov dword ptr [ebx + 0x3c], eax */
    MEM32(esi + 0x30) = eax; /* 0x17209B74: mov dword ptr [esi + 0x30], eax */
L_17209B77:
    ecx = edi; /* 0x17209B77: mov ecx, edi */
    edi = MEM32(ebp + (-0x8)); /* 0x17209B79: mov edi, dword ptr [ebp - 8] */
    eax = ecx; /* 0x17209B7C: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17209B7E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17209B7E: shr ecx, 2 */
    esi = edx; /* 0x17209B81: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17209B83: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17209B85: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17209B87: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x17209B8A: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x17209B8D: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17209B90: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17209B93: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0x2C); /* 0x17209B95: mov eax, dword ptr [ebx + 0x2c] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17209B98: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209C0D; /* 0x17209B9B: jne 0x17209c0d */
L_17209B9D:
    /* cmp MEM32(ebx + 0x34), eax */ /* 0x17209B9D: cmp dword ptr [ebx + 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0x28); /* 0x17209BA0: mov edx, dword ptr [ebx + 0x28] */
    MEM32(ebp + 0x8) = edx; /* 0x17209BA3: mov dword ptr [ebp + 8], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209BAB; /* 0x17209BA6: jne 0x17209bab */
L_17209BA8:
    MEM32(ebx + 0x34) = edx; /* 0x17209BA8: mov dword ptr [ebx + 0x34], edx */
L_17209BAB:
    edi = MEM32(ebx + 0x34); /* 0x17209BAB: mov edi, dword ptr [ebx + 0x34] */
    esi = MEM32(ebp + 0xC); /* 0x17209BAE: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x10); /* 0x17209BB1: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x17209BB4: sub edi, edx */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x17209BB6: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17209BB8: mov dword ptr [ebp - 4], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209BC2; /* 0x17209BBB: jbe 0x17209bc2 */
L_17209BBD:
    MEM32(ebp + (-0x4)) = eax; /* 0x17209BBD: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x17209BC0: mov edi, eax */
L_17209BC2:
    /* test edi, edi */ /* 0x17209BC2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209BD0; /* 0x17209BC4: je 0x17209bd0 */
L_17209BC6:
    /* cmp MEM32(ebp + 0x10), 0xFFFFFFFBu */ /* 0x17209BC6: cmp dword ptr [ebp + 0x10], -5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17209BD0; /* 0x17209BCA: jne 0x17209bd0 */
L_17209BCC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17209BCC: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17209BD0:
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + edi; /* 0x17209BD0: add dword ptr [esi + 0x14], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17209BD3: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = eax; /* 0x17209BD5: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebx + 0x38); /* 0x17209BD8: mov eax, dword ptr [ebx + 0x38] */
    /* test eax, eax */ /* 0x17209BDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209BEF; /* 0x17209BDD: je 0x17209bef */
L_17209BDF:
    PUSH32(esp, edi); /* 0x17209BDF: push edi */
    PUSH32(esp, edx); /* 0x17209BE0: push edx */
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x17209BE1: push dword ptr [ebx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x17209BE4: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x17209BE6: mov edx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x3C) = eax; /* 0x17209BE9: mov dword ptr [ebx + 0x3c], eax */
    MEM32(esi + 0x30) = eax; /* 0x17209BEC: mov dword ptr [esi + 0x30], eax */
L_17209BEF:
    ecx = edi; /* 0x17209BEF: mov ecx, edi */
    edi = MEM32(ebp + (-0x8)); /* 0x17209BF1: mov edi, dword ptr [ebp - 8] */
    eax = ecx; /* 0x17209BF4: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17209BF6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17209BF6: shr ecx, 2 */
    esi = edx; /* 0x17209BF9: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17209BFB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17209BFD: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17209BFF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x17209C02: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17209C05: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x17209C08: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17209C0B: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_17209C0D:
    eax = MEM32(ebp + 0xC); /* 0x17209C0D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x17209C10: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0xC) = ecx; /* 0x17209C13: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(ebp + 0x8); /* 0x17209C16: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x17209C19: pop edi */
    MEM32(ebx + 0x30) = eax; /* 0x17209C1A: mov dword ptr [ebx + 0x30], eax */
    eax = MEM32(ebp + 0x10); /* 0x17209C1D: mov eax, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x17209C20: pop esi */
    ebx = POP32_VAL(esp); /* 0x17209C21: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17209C22: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17209C23: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17209C2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209C2Bu);

L_17209C2B:
    edi = edi; /* 0x17209C2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209C2D: push ebp */
    ebp = esp; /* 0x17209C2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17209C30: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17209C33: push ebx */
    PUSH32(esp, esi); /* 0x17209C34: push esi */
    esi = MEM32(ebp + 0x18); /* 0x17209C35: mov esi, dword ptr [ebp + 0x18] */
    ecx = MEM32(esi + 0x34); /* 0x17209C38: mov ecx, dword ptr [esi + 0x34] */
    edx = MEM32(esi + 0x1C); /* 0x17209C3B: mov edx, dword ptr [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x17209C3E: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x17209C3F: mov edi, dword ptr [ebp + 0x1c] */
    eax = MEM32(edi); /* 0x17209C42: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17209C44: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x4); /* 0x17209C47: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17209C4A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x20); /* 0x17209C4D: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebp + 0x1C) = eax; /* 0x17209C50: mov dword ptr [ebp + 0x1c], eax */
    eax = MEM32(esi + 0x30); /* 0x17209C53: mov eax, dword ptr [esi + 0x30] */
    /* cmp ecx, eax */ /* 0x17209C56: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x17209C58: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209C62; /* 0x17209C5B: jae 0x17209c62 */
L_17209C5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17209C5D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17209C5F: dec eax */
    _flag_k = FK_DEC;
    goto L_17209C67; /* 0x17209C60: jmp 0x17209c67 */
L_17209C62:
    eax = MEM32(esi + 0x2C); /* 0x17209C62: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17209C65: sub eax, ecx */
    _flag_k = FK_CMP;
L_17209C67:
    MEM32(ebp + (-0x10)) = eax; /* 0x17209C67: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x8); /* 0x17209C6A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x17209C6D: mov eax, dword ptr [eax*4 + 0x1702a500] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17209C74: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x17209C77: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax * 4 + 0x1702A500); /* 0x17209C7A: mov eax, dword ptr [eax*4 + 0x1702a500] */
    MEM32(ebp + 0xC) = eax; /* 0x17209C81: mov dword ptr [ebp + 0xc], eax */
    goto L_17209C9C; /* 0x17209C84: jmp 0x17209c9c */
L_17209C86:
    eax = MEM32(ebp + (-0x8)); /* 0x17209C86: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM8(eax); /* 0x17209C89: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17209C8C: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = edx; /* 0x17209C8F: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17209C91: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17209C91: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0x1C) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0x1C) | eax));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) | eax; /* 0x17209C93: or dword ptr [ebp + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17209C96: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x17209C99: add edx, 8 */
    _flag_k = FK_ADD;
L_17209C9C:
    /* cmp edx, 0x14u */ /* 0x17209C9C: cmp edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209C86; /* 0x17209C9F: jb 0x17209c86 */
L_17209CA1:
    eax = MEM32(ebp + (-0x14)); /* 0x17209CA1: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    eax = eax & MEM32(ebp + 0x1C); /* 0x17209CA4: and eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x17209CA7: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + eax * 8; /* 0x17209CAA: lea eax, [ecx + eax*8] */
    ecx = (uint32_t)MEM8(eax); /* 0x17209CAD: movzx ecx, byte ptr [eax] */
    MEM32(ebp + 0x8) = ecx; /* 0x17209CB0: mov dword ptr [ebp + 8], ecx */
    /* test ecx, ecx */ /* 0x17209CB3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17209CD8; /* 0x17209CB5: jmp 0x17209cd8 */
L_17209CB7:
    /* test LO8(ecx), 0x40u */ /* 0x17209CB7: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209E8D; /* 0x17209CBA: jne 0x17209e8d */
L_17209CC0:
    ecx = MEM32(ecx * 4 + 0x1702A500); /* 0x17209CC0: mov ecx, dword ptr [ecx*4 + 0x1702a500] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    ecx = ecx & MEM32(ebp + 0x1C); /* 0x17209CC7: and ecx, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x17209CCA: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = eax + ecx * 8; /* 0x17209CCD: lea eax, [eax + ecx*8] */
    ecx = (uint32_t)MEM8(eax); /* 0x17209CD0: movzx ecx, byte ptr [eax] */
    MEM32(ebp + 0x8) = ecx; /* 0x17209CD3: mov dword ptr [ebp + 8], ecx */
    /* test ecx, ecx */ /* 0x17209CD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_17209CD8:
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209CD8: movzx ecx, byte ptr [eax + 1] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17209E31; /* 0x17209CDC: je 0x17209e31 */
L_17209CE2:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209CE2: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209CE2: shr dword ptr [ebp + 0x1c], cl */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209CE5: movzx ecx, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17209CE9: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x17209CEB: mov ecx, dword ptr [ebp + 8] */
    /* test LO8(ecx), 0x10u */ /* 0x17209CEE: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209CB7; /* 0x17209CF1: je 0x17209cb7 */
L_17209CF3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x17209CF3: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx * 4 + 0x1702A500); /* 0x17209CF6: mov esi, dword ptr [ecx*4 + 0x1702a500] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    esi = esi & MEM32(ebp + 0x1C); /* 0x17209CFD: and esi, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209D00: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209D00: shr dword ptr [ebp + 0x1c], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x17209D03: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17209D06: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x17209D08: mov dword ptr [ebp + 8], esi */
    goto L_17209D23; /* 0x17209D0B: jmp 0x17209d23 */
L_17209D0D:
    eax = MEM32(ebp + (-0x8)); /* 0x17209D0D: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM8(eax); /* 0x17209D10: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17209D13: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = edx; /* 0x17209D16: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17209D18: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17209D18: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0x1C) | eax)); _flag_b = (uint32_t)((MEM32(ebp + 0x1C) | eax));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) | eax; /* 0x17209D1A: or dword ptr [ebp + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17209D1D: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x17209D20: add edx, 8 */
    _flag_k = FK_ADD;
L_17209D23:
    /* cmp edx, 0xFu */ /* 0x17209D23: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209D0D; /* 0x17209D26: jb 0x17209d0d */
L_17209D28:
    eax = MEM32(ebp + 0xC); /* 0x17209D28: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    eax = eax & MEM32(ebp + 0x1C); /* 0x17209D2B: and eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x17209D2E: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx + eax * 8; /* 0x17209D31: lea eax, [ecx + eax*8] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209D34: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209D38: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209D38: shr dword ptr [ebp + 0x1c], cl */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209D3B: movzx ecx, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17209D3F: sub edx, ecx */
    _flag_k = FK_CMP;
    goto L_17209D68; /* 0x17209D41: jmp 0x17209d68 */
L_17209D43:
    /* test LO8(ebx), 0x40u */ /* 0x17209D43: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17209E70; /* 0x17209D46: jne 0x17209e70 */
L_17209D4C:
    ecx = MEM32(ebx * 4 + 0x1702A500); /* 0x17209D4C: mov ecx, dword ptr [ebx*4 + 0x1702a500] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    ecx = ecx & MEM32(ebp + 0x1C); /* 0x17209D53: and ecx, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x17209D56: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = eax + ecx * 8; /* 0x17209D59: lea eax, [eax + ecx*8] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209D5C: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209D60: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209D60: shr dword ptr [ebp + 0x1c], cl */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17209D63: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17209D66: sub edx, ecx */
    _flag_k = FK_CMP;
L_17209D68:
    ebx = (uint32_t)MEM8(eax); /* 0x17209D68: movzx ebx, byte ptr [eax] */
    /* test LO8(ebx), 0x10u */ /* 0x17209D6B: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209D43; /* 0x17209D6E: je 0x17209d43 */
L_17209D70:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x17209D70: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17209D8B; /* 0x17209D73: jmp 0x17209d8b */
L_17209D75:
    ecx = MEM32(ebp + (-0x8)); /* 0x17209D75: mov ecx, dword ptr [ebp - 8] */
    esi = (uint32_t)MEM8(ecx); /* 0x17209D78: movzx esi, byte ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17209D7B: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = edx; /* 0x17209D7E: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17209D80: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x17209D80: shl esi, cl */
    _flag_a = (uint32_t)((MEM32(ebp + 0x1C) | esi)); _flag_b = (uint32_t)((MEM32(ebp + 0x1C) | esi));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) | esi; /* 0x17209D82: or dword ptr [ebp + 0x1c], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17209D85: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x17209D88: add edx, 8 */
    _flag_k = FK_ADD;
L_17209D8B:
    /* cmp edx, ebx */ /* 0x17209D8B: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209D75; /* 0x17209D8D: jb 0x17209d75 */
L_17209D8F:
    esi = MEM32(ebx * 4 + 0x1702A500); /* 0x17209D8F: mov esi, dword ptr [ebx*4 + 0x1702a500] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    esi = esi & MEM32(ebp + 0x1C); /* 0x17209D96: and esi, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x17209D99: mov ecx, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x17209D9B: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209D9E: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209D9E: shr dword ptr [ebp + 0x1c], cl */
    eax = MEM32(ebp + 0x8); /* 0x17209DA1: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - eax; /* 0x17209DA4: sub dword ptr [ebp - 0x10], eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x17209DA7: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x17209DAA: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x18); /* 0x17209DAC: mov ebx, dword ptr [ebp + 0x18] */
    eax = ecx; /* 0x17209DAF: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17209DB1: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebx + 0x28); /* 0x17209DB3: mov esi, dword ptr [ebx + 0x28] */
    /* cmp eax, esi */ /* 0x17209DB6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209E0E; /* 0x17209DB8: jae 0x17209e0e */
L_17209DBA:
    ebx = MEM32(ebx + 0x2C); /* 0x17209DBA: mov ebx, dword ptr [ebx + 0x2c] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x17209DBD: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x17209DC0: sub ebx, esi */
    _flag_k = FK_CMP;
L_17209DC2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17209DC2: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x17209DC4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17209DC2; /* 0x17209DC6: jb 0x17209dc2 */
L_17209DC8:
    esi = MEM32(ebp + (-0x18)); /* 0x17209DC8: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x17209DCB: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x17209DCD: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209DF1; /* 0x17209DD0: jbe 0x17209df1 */
L_17209DD2:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - esi; /* 0x17209DD2: sub dword ptr [ebp + 8], esi */
    _flag_k = FK_CMP;
L_17209DD5:
    SET_LO8(ebx, MEM8(eax)); /* 0x17209DD5: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209DD7: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209DD9: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209DDA: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17209DDB: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17209DD5; /* 0x17209DDC: jne 0x17209dd5 */
L_17209DDE:
    eax = MEM32(ebp + 0x18); /* 0x17209DDE: mov eax, dword ptr [ebp + 0x18] */
    esi = MEM32(eax + 0x28); /* 0x17209DE1: mov esi, dword ptr [eax + 0x28] */
L_17209DE4:
    SET_LO8(eax, MEM8(esi)); /* 0x17209DE4: mov al, byte ptr [esi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x17209DE6: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209DE8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17209DE9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17209DEA: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17209DE4; /* 0x17209DED: jne 0x17209de4 */
L_17209DEF:
    goto L_17209E29; /* 0x17209DEF: jmp 0x17209e29 */
L_17209DF1:
    SET_LO8(ebx, MEM8(eax)); /* 0x17209DF1: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209DF3: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209DF5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209DF6: inc eax */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(eax)); /* 0x17209DF7: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209DF9: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209DFB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209DFC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 2; /* 0x17209DFD: sub dword ptr [ebp + 8], 2 */
    _flag_k = FK_CMP;
L_17209E01:
    SET_LO8(ebx, MEM8(eax)); /* 0x17209E01: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209E03: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209E05: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209E06: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17209E07: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17209E01; /* 0x17209E0A: jne 0x17209e01 */
L_17209E0C:
    goto L_17209E29; /* 0x17209E0C: jmp 0x17209e29 */
L_17209E0E:
    SET_LO8(ebx, MEM8(eax)); /* 0x17209E0E: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209E10: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209E12: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209E13: inc eax */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(eax)); /* 0x17209E14: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209E16: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209E18: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209E19: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 2; /* 0x17209E1A: sub dword ptr [ebp + 8], 2 */
    _flag_k = FK_CMP;
L_17209E1E:
    SET_LO8(ebx, MEM8(eax)); /* 0x17209E1E: mov bl, byte ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x17209E20: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17209E22: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209E23: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17209E24: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17209E1E; /* 0x17209E27: jne 0x17209e1e */
L_17209E29:
    esi = MEM32(ebp + 0x18); /* 0x17209E29: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17209E2C: mov dword ptr [ebp - 0xc], ecx */
    goto L_17209E48; /* 0x17209E2F: jmp 0x17209e48 */
L_17209E31:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + 0x1C)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x17209E31: shr dword ptr [ebp + 0x1c], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) >> ((LO8(ecx)) & 31); /* 0x17209E31: shr dword ptr [ebp + 0x1c], cl */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x17209E34: movzx ecx, byte ptr [eax + 1] */
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x17209E38: mov al, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17209E3B: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x17209E3D: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17209E40: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x17209E43: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x17209E46: mov byte ptr [ecx], al */
L_17209E48:
    /* cmp MEM32(ebp + (-0x10)), 0x102u */ /* 0x17209E48: cmp dword ptr [ebp - 0x10], 0x102 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17209E5B; /* 0x17209E4F: jb 0x17209e5b */
L_17209E51:
    /* cmp MEM32(ebp + (-0x4)), 0xAu */ /* 0x17209E51: cmp dword ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209C9C; /* 0x17209E55: jae 0x17209c9c */
L_17209E5B:
    ecx = MEM32(edi + 0x4); /* 0x17209E5B: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x17209E5E: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = edx; /* 0x17209E61: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17209E63: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17209E63: shr eax, 3 */
    /* cmp eax, ecx */ /* 0x17209E66: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209E6C; /* 0x17209E68: jae 0x17209e6c */
L_17209E6A:
    ecx = eax; /* 0x17209E6A: mov ecx, eax */
L_17209E6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209E6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17209EBB; /* 0x17209E6E: jmp 0x17209ebb */
L_17209E70:
    ecx = MEM32(edi + 0x4); /* 0x17209E70: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x17209E73: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = edx; /* 0x17209E76: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17209E78: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17209E78: shr eax, 3 */
    /* cmp eax, ecx */ /* 0x17209E7B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x18) = 0x170290B4u; /* 0x17209E7D: mov dword ptr [edi + 0x18], 0x170290b4 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209E88; /* 0x17209E84: jae 0x17209e88 */
L_17209E86:
    ecx = eax; /* 0x17209E86: mov ecx, eax */
L_17209E88:
    esi = MEM32(ebp + 0x18); /* 0x17209E88: mov esi, dword ptr [ebp + 0x18] */
    goto L_17209EB8; /* 0x17209E8B: jmp 0x17209eb8 */
L_17209E8D:
    eax = edx; /* 0x17209E8D: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17209E8F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17209E8F: shr eax, 3 */
    /* test LO8(ecx), 0x20u */ /* 0x17209E92: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(edi + 0x4); /* 0x17209E95: mov ecx, dword ptr [edi + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209EA8; /* 0x17209E98: je 0x17209ea8 */
L_17209E9A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x17209E9A: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x17209E9D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209EA3; /* 0x17209E9F: jae 0x17209ea3 */
L_17209EA1:
    ecx = eax; /* 0x17209EA1: mov ecx, eax */
L_17209EA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209EA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17209EA5: inc eax */
    _flag_k = FK_INC;
    goto L_17209EBB; /* 0x17209EA6: jmp 0x17209ebb */
L_17209EA8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x17209EA8: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x18) = 0x170290CCu; /* 0x17209EAB: mov dword ptr [edi + 0x18], 0x170290cc */
    /* cmp eax, ecx */ /* 0x17209EB2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17209EB8; /* 0x17209EB4: jae 0x17209eb8 */
L_17209EB6:
    ecx = eax; /* 0x17209EB6: mov ecx, eax */
L_17209EB8:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x17209EB8: push -3 */
    eax = POP32_VAL(esp); /* 0x17209EBA: pop eax */
L_17209EBB:
    ebx = MEM32(ebp + 0x1C); /* 0x17209EBB: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x17209EBE: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = ebx; /* 0x17209EC1: mov dword ptr [esi + 0x20], ebx */
    ebx = ecx; /* 0x17209EC4: mov ebx, ecx */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x17209EC6: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x17209EC6: shl ebx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x17209EC9: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x1C) = edx; /* 0x17209ECB: mov dword ptr [esi + 0x1c], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x17209ECE: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x17209ED1: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = ecx; /* 0x17209ED3: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x17209ED6: mov ecx, dword ptr [ebp - 8] */
    edx = ecx; /* 0x17209ED9: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x17209EDB: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(edi) = ecx; /* 0x17209EDD: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + edx; /* 0x17209EDF: add dword ptr [edi + 8], edx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x17209EE2: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17209EE5: pop edi */
    MEM32(esi + 0x34) = ecx; /* 0x17209EE6: mov dword ptr [esi + 0x34], ecx */
    esi = POP32_VAL(esp); /* 0x17209EE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x17209EEA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17209EEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17209EEC: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17209EF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209EF4u);

L_17209EF4:
    edi = edi; /* 0x17209EF4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209EF6: push ebp */
    ebp = esp; /* 0x17209EF7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x17209EF9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17209EFC: push ebx */
    PUSH32(esp, esi); /* 0x17209EFD: push esi */
    PUSH32(esp, edi); /* 0x17209EFE: push edi */
    esi = 0x1702A678u; /* 0x17209EFF: mov esi, 0x1702a678 */
    edi = ebp + (-0x14); /* 0x17209F04: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F07: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F08: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(0x1723C894); /* 0x17209F09: mov eax, dword ptr [0x1723c894] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F0E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x17209F0F: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = 0x1702A668u; /* 0x17209F10: mov esi, 0x1702a668 */
    edi = ebp + (-0x24); /* 0x17209F15: lea edi, [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F18: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F19: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17209F1A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17209F1B: mov dword ptr [ebp - 4], eax */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x17209F1E: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209F1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17209F21: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17209F23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17209F25: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x17209F27: cpuid  */
    MEM32(ebp + (-0x28)) = 1; /* 0x17209F29: mov dword ptr [ebp - 0x28], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17209F30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x17209F32: cpuid  */
    MEM32(ebp + (-0x14)) = ebx; /* 0x17209F34: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x10)) = edx; /* 0x17209F37: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17209F3A: mov dword ptr [ebp - 0xc], ecx */
    /* test eax, eax */ /* 0x17209F3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17209FDA; /* 0x17209F3F: je 0x17209fda */
L_17209F45:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 2)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 2));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 2; /* 0x17209F45: or dword ptr [ebp - 0x28], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x17209F49: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x17209F4E: cpuid  */
    MEM32(ebp + (-0x2C)) = eax; /* 0x17209F50: mov dword ptr [ebp - 0x2c], eax */
    ecx = 0x00800000u; /* 0x17209F53: mov ecx, 0x800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x17209F58: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17209F5A: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17209F5C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x17209F5E: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | ecx));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | ecx; /* 0x17209F61: or dword ptr [ebp - 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x02000000u; /* 0x17209F64: mov ecx, 0x2000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x17209F69: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17209F6B: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17209F6D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x17209F6F: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | ecx));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | ecx; /* 0x17209F72: or dword ptr [ebp - 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80000000u; /* 0x17209F75: mov eax, 0x80000000 */
    CPUID(eax, ebx, ecx, edx); /* 0x17209F7A: cpuid  */
    /* cmp eax, 0x80000000u */ /* 0x17209F7C: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17209FDA; /* 0x17209F81: jbe 0x17209fda */
L_17209F83:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 4)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 4));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 4; /* 0x17209F83: or dword ptr [ebp - 0x28], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80000001u; /* 0x17209F87: mov eax, 0x80000001 */
    CPUID(eax, ebx, ecx, edx); /* 0x17209F8C: cpuid  */
    ecx = 0x80000000u; /* 0x17209F8E: mov ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x17209F93: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17209F95: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17209F97: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    ecx = ecx & 0x80u; /* 0x17209F99: and ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | ecx));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | ecx; /* 0x17209F9F: or dword ptr [ebp - 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x24); /* 0x17209FA2: lea esi, [ebp - 0x24] */
    edi = ebp + (-0x14); /* 0x17209FA5: lea edi, [ebp - 0x14] */
    ecx = 0xCu; /* 0x17209FA8: mov ecx, 0xc */
    _df = 1; /* 0x17209FAD: cld  */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17209FAE: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    ecx = 0x40000000u; /* 0x17209FB0: mov ecx, 0x40000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x17209FB5: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17209FB7: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17209FB9: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    ecx = ecx & 0x100u; /* 0x17209FBB: and ecx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | ecx));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | ecx; /* 0x17209FC1: or dword ptr [ebp - 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x00400000u; /* 0x17209FC4: mov ecx, 0x400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x17209FC9: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17209FCB: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17209FCD: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x200u);
    ecx = ecx & 0x200u; /* 0x17209FCF: and ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | ecx));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | ecx; /* 0x17209FD5: or dword ptr [ebp - 0x28], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17209FDA; /* 0x17209FD8: jmp 0x17209fda */
L_17209FDA:
    ecx = MEM32(ebp + (-0x4)); /* 0x17209FDA: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x17209FDD: mov eax, dword ptr [ebp - 0x28] */
    edi = POP32_VAL(esp); /* 0x17209FE0: pop edi */
    esi = POP32_VAL(esp); /* 0x17209FE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x17209FE2: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17209FE3: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17209FE8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17209FE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_17209FEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17209FEFu);

L_17209FEF:
    edi = edi; /* 0x17209FEF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17209FF1: push ebp */
    ebp = esp; /* 0x17209FF2: mov ebp, esp */
    RECOMP_CALL(sub_17209EF4); /* 0x17209FF4: call 0x17209ef4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 0x20u */ /* 0x17209FF9: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x8); /* 0x17209FFB: mov ecx, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720A22F; /* 0x17209FFE: je 0x1720a22f */
L_1720A004:
    /* test LO8(eax), LO8(eax) */ /* 0x1720A004: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1720A22F; /* 0x1720A006: jns 0x1720a22f */
L_1720A00C:
    /* test HI8(eax), 1 */ /* 0x1720A00C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x172152F1u; /* 0x1720A00F: mov dword ptr [ecx], 0x172152f1 */
    MEM32(ecx + 0x4) = 0x17213B46u; /* 0x1720A015: mov dword ptr [ecx + 4], 0x17213b46 */
    MEM32(ecx + 0x8) = 0x172155DBu; /* 0x1720A01C: mov dword ptr [ecx + 8], 0x172155db */
    MEM32(ecx + 0xC) = 0x1720FC91u; /* 0x1720A023: mov dword ptr [ecx + 0xc], 0x1720fc91 */
    MEM32(ecx + 0x14) = 0x1721534Du; /* 0x1720A02A: mov dword ptr [ecx + 0x14], 0x1721534d */
    MEM32(ecx + 0x18) = 0x17213BBEu; /* 0x1720A031: mov dword ptr [ecx + 0x18], 0x17213bbe */
    MEM32(ecx + 0x1C) = 0x17213C2Cu; /* 0x1720A038: mov dword ptr [ecx + 0x1c], 0x17213c2c */
    MEM32(ecx + 0x20) = 0x17215664u; /* 0x1720A03F: mov dword ptr [ecx + 0x20], 0x17215664 */
    MEM32(ecx + 0x24) = 0x1721538Du; /* 0x1720A046: mov dword ptr [ecx + 0x24], 0x1721538d */
    MEM32(ecx + 0x28) = 0x1721412Eu; /* 0x1720A04D: mov dword ptr [ecx + 0x28], 0x1721412e */
    MEM32(ecx + 0x2C) = 0x1720FEC8u; /* 0x1720A054: mov dword ptr [ecx + 0x2c], 0x1720fec8 */
    MEM32(ecx + 0x34) = 0x17215A27u; /* 0x1720A05B: mov dword ptr [ecx + 0x34], 0x17215a27 */
    MEM32(ecx + 0x38) = 0x17215A6Fu; /* 0x1720A062: mov dword ptr [ecx + 0x38], 0x17215a6f */
    MEM32(ecx + 0x3C) = 0x1721413Eu; /* 0x1720A069: mov dword ptr [ecx + 0x3c], 0x1721413e */
    MEM32(ecx + 0x40) = 0x172142CFu; /* 0x1720A070: mov dword ptr [ecx + 0x40], 0x172142cf */
    MEM32(ecx + 0x44) = 0x172156C8u; /* 0x1720A077: mov dword ptr [ecx + 0x44], 0x172156c8 */
    MEM32(ecx + 0x48) = 0x172153F8u; /* 0x1720A07E: mov dword ptr [ecx + 0x48], 0x172153f8 */
    MEM32(ecx + 0x4C) = 0x17213B26u; /* 0x1720A085: mov dword ptr [ecx + 0x4c], 0x17213b26 */
    MEM32(ecx + 0x50) = 0x1720E76Eu; /* 0x1720A08C: mov dword ptr [ecx + 0x50], 0x1720e76e */
    MEM32(ecx + 0x54) = 0x1720E80Cu; /* 0x1720A093: mov dword ptr [ecx + 0x54], 0x1720e80c */
    MEM32(ecx + 0x58) = 0x17215C1Bu; /* 0x1720A09A: mov dword ptr [ecx + 0x58], 0x17215c1b */
    MEM32(ecx + 0x5C) = 0x17215B58u; /* 0x1720A0A1: mov dword ptr [ecx + 0x5c], 0x17215b58 */
    MEM32(ecx + 0x60) = 0x1720E86Eu; /* 0x1720A0A8: mov dword ptr [ecx + 0x60], 0x1720e86e */
    MEM32(ecx + 0x64) = 0x1720E8B7u; /* 0x1720A0AF: mov dword ptr [ecx + 0x64], 0x1720e8b7 */
    MEM32(ecx + 0x68) = 0x1720ECF2u; /* 0x1720A0B6: mov dword ptr [ecx + 0x68], 0x1720ecf2 */
    MEM32(ecx + 0x6C) = 0x1720FF9Cu; /* 0x1720A0BD: mov dword ptr [ecx + 0x6c], 0x1720ff9c */
    MEM32(ecx + 0x70) = 0x1720FFF1u; /* 0x1720A0C4: mov dword ptr [ecx + 0x70], 0x1720fff1 */
    MEM32(ecx + 0x74) = 0x172100E1u; /* 0x1720A0CB: mov dword ptr [ecx + 0x74], 0x172100e1 */
    MEM32(ecx + 0x78) = 0x1720EDBCu; /* 0x1720A0D2: mov dword ptr [ecx + 0x78], 0x1720edbc */
    MEM32(ecx + 0x7C) = 0x172101C2u; /* 0x1720A0D9: mov dword ptr [ecx + 0x7c], 0x172101c2 */
    MEM32(ecx + 0x80) = 0x1721022Cu; /* 0x1720A0E0: mov dword ptr [ecx + 0x80], 0x1721022c */
    MEM32(ecx + 0x84) = 0x17210291u; /* 0x1720A0EA: mov dword ptr [ecx + 0x84], 0x17210291 */
    MEM32(ecx + 0x88) = 0x172102F1u; /* 0x1720A0F4: mov dword ptr [ecx + 0x88], 0x172102f1 */
    MEM32(ecx + 0x8C) = 0x17215C84u; /* 0x1720A0FE: mov dword ptr [ecx + 0x8c], 0x17215c84 */
    MEM32(ecx + 0x90) = 0x1720EE2Du; /* 0x1720A108: mov dword ptr [ecx + 0x90], 0x1720ee2d */
    MEM32(ecx + 0x94) = 0x1720EF69u; /* 0x1720A112: mov dword ptr [ecx + 0x94], 0x1720ef69 */
    MEM32(ecx + 0x98) = 0x1721033Du; /* 0x1720A11C: mov dword ptr [ecx + 0x98], 0x1721033d */
    MEM32(ecx + 0x9C) = 0x172103B1u; /* 0x1720A126: mov dword ptr [ecx + 0x9c], 0x172103b1 */
    MEM32(ecx + 0xA0) = 0x17210542u; /* 0x1720A130: mov dword ptr [ecx + 0xa0], 0x17210542 */
    MEM32(ecx + 0xA4) = 0x17211743u; /* 0x1720A13A: mov dword ptr [ecx + 0xa4], 0x17211743 */
    MEM32(ecx + 0xA8) = 0x172118EDu; /* 0x1720A144: mov dword ptr [ecx + 0xa8], 0x172118ed */
    MEM32(ecx + 0xAC) = 0x17211E26u; /* 0x1720A14E: mov dword ptr [ecx + 0xac], 0x17211e26 */
    MEM32(ecx + 0xB0) = 0x1720EFFBu; /* 0x1720A158: mov dword ptr [ecx + 0xb0], 0x1720effb */
    MEM32(ecx + 0xB4) = 0x1720F092u; /* 0x1720A162: mov dword ptr [ecx + 0xb4], 0x1720f092 */
    MEM32(ecx + 0xDC) = 0x17215801u; /* 0x1720A16C: mov dword ptr [ecx + 0xdc], 0x17215801 */
    MEM32(ecx + 0xD0) = 0x17213C90u; /* 0x1720A176: mov dword ptr [ecx + 0xd0], 0x17213c90 */
    MEM32(ecx + 0xC4) = 0x17215495u; /* 0x1720A180: mov dword ptr [ecx + 0xc4], 0x17215495 */
    MEM32(ecx + 0xBC) = 0x172154E3u; /* 0x1720A18A: mov dword ptr [ecx + 0xbc], 0x172154e3 */
    MEM32(ecx + 0xD4) = 0x17215877u; /* 0x1720A194: mov dword ptr [ecx + 0xd4], 0x17215877 */
    MEM32(ecx + 0xC8) = 0x17213D06u; /* 0x1720A19E: mov dword ptr [ecx + 0xc8], 0x17213d06 */
    MEM32(ecx + 0xE0) = 0x1720F0FBu; /* 0x1720A1A8: mov dword ptr [ecx + 0xe0], 0x1720f0fb */
    MEM32(ecx + 0xE4) = 0x1720F1A7u; /* 0x1720A1B2: mov dword ptr [ecx + 0xe4], 0x1720f1a7 */
    MEM32(ecx + 0xD8) = 0x17215944u; /* 0x1720A1BC: mov dword ptr [ecx + 0xd8], 0x17215944 */
    MEM32(ecx + 0xC0) = 0x1721552Bu; /* 0x1720A1C6: mov dword ptr [ecx + 0xc0], 0x1721552b */
    MEM32(ecx + 0xCC) = 0x17213DDFu; /* 0x1720A1D0: mov dword ptr [ecx + 0xcc], 0x17213ddf */
    MEM32(ecx + 0x10) = 0x172133ECu; /* 0x1720A1DA: mov dword ptr [ecx + 0x10], 0x172133ec */
    MEM32(ecx + 0xB8) = 0x1720F251u; /* 0x1720A1E1: mov dword ptr [ecx + 0xb8], 0x1720f251 */
    MEM32(ecx + 0xEC) = 0x17215000u; /* 0x1720A1EB: mov dword ptr [ecx + 0xec], 0x17215000 */
    MEM32(ecx + 0xE8) = 0x17215160u; /* 0x1720A1F5: mov dword ptr [ecx + 0xe8], 0x17215160 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720A22F; /* 0x1720A1FF: je 0x1720a22f */
L_1720A201:
    /* test HI8(eax), 2 */ /* 0x1720A201: test ah, 2 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720A22F; /* 0x1720A204: je 0x1720a22f */
L_1720A206:
    MEM32(ecx + 0x40) = 0x172144F1u; /* 0x1720A206: mov dword ptr [ecx + 0x40], 0x172144f1 */
    MEM32(ecx + 0x4C) = 0x17213103u; /* 0x1720A20D: mov dword ptr [ecx + 0x4c], 0x17213103 */
    MEM32(ecx + 0x9C) = 0x17210488u; /* 0x1720A214: mov dword ptr [ecx + 0x9c], 0x17210488 */
    MEM32(ecx + 0xA0) = 0x17211F46u; /* 0x1720A21E: mov dword ptr [ecx + 0xa0], 0x17211f46 */
    MEM32(ecx + 0x64) = 0x1720EAD8u; /* 0x1720A228: mov dword ptr [ecx + 0x64], 0x1720ead8 */
L_1720A22F:
    /* test LO8(eax), 0x40u */ /* 0x1720A22F: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720A283; /* 0x1720A231: je 0x1720a283 */
L_1720A233:
    MEM32(ecx + 0xFC) = 0x1720E000u; /* 0x1720A233: mov dword ptr [ecx + 0xfc], 0x1720e000 */
    MEM32(ecx + 0x100) = 0x1720E0A0u; /* 0x1720A23D: mov dword ptr [ecx + 0x100], 0x1720e0a0 */
    MEM32(ecx + 0x104) = 0x1720E460u; /* 0x1720A247: mov dword ptr [ecx + 0x104], 0x1720e460 */
    MEM32(ecx + 0xF0) = 0x1720D000u; /* 0x1720A251: mov dword ptr [ecx + 0xf0], 0x1720d000 */
    MEM32(ecx + 0xF4) = 0x1720D2C0u; /* 0x1720A25B: mov dword ptr [ecx + 0xf4], 0x1720d2c0 */
    MEM32(ecx + 0xF8) = 0x1720D580u; /* 0x1720A265: mov dword ptr [ecx + 0xf8], 0x1720d580 */
    MEM32(ecx + 0x108) = 0x1720C000u; /* 0x1720A26F: mov dword ptr [ecx + 0x108], 0x1720c000 */
    MEM32(ecx + 0x114) = 0x1720B000u; /* 0x1720A279: mov dword ptr [ecx + 0x114], 0x1720b000 */
L_1720A283:
    ebp = POP32_VAL(esp); /* 0x1720A283: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1720A284: ret  */
    RECOMP_REGS_OUT();
}

void sub_1720B000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720B000u);

L_1720B000:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720B000: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x1720B003: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x1720B007: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x1720B00B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x1720B00E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x1720B012: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x1720B016: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x1720B01A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x1720B01E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1720B080; /* 0x1720B021: jle 0x1720b080 */
L_1720B023:
    esi = MEM32(esp + 0x1C); /* 0x1720B023: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x1720B027: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x1720B02B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x1720B02E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x1720B032: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x1720B036: movups xmm7, xmmword ptr [edx + 0x30] */
L_1720B03A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x1720B03A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720B03E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720B042: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720B047: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720B04B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720B050: shufps xmm2, xmm2, 0 */
    _xmm[3].u64[0] = MEM32(ebx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720B054: movss xmm3, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720B059: shufps xmm3, xmm3, 0 */
    ebx = esi + ebx; /* 0x1720B05D: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720B060: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720B063: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720B066: mulps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720B069: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720B06C: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1720B06F: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720B072: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x1720B075: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x1720B078: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1720B07B: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720B03A; /* 0x1720B07E: jg 0x1720b03a */
L_1720B080:
    eax = MEM32(esp + 0x10); /* 0x1720B080: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x1720B084: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x1720B087: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x1720B08B: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720B08F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720B092: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720C000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720C000u);

L_1720C000:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720C000: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x1720C003: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x1720C007: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x1720C00B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x1720C00E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x1720C012: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x1720C016: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x1720C01A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x1720C01E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1720C080; /* 0x1720C021: jle 0x1720c080 */
L_1720C023:
    esi = MEM32(esp + 0x1C); /* 0x1720C023: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x1720C027: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x1720C02B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x1720C02E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x1720C032: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x1720C036: movups xmm7, xmmword ptr [edx + 0x30] */
L_1720C03A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x1720C03A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720C03E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720C042: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720C047: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720C04B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720C050: shufps xmm2, xmm2, 0 */
    _xmm[3].u64[0] = MEM32(ebx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720C054: movss xmm3, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720C059: shufps xmm3, xmm3, 0 */
    ebx = esi + ebx; /* 0x1720C05D: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720C060: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720C063: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720C066: mulps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720C069: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720C06C: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1720C06F: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720C072: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x1720C075: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x1720C078: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1720C07B: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720C03A; /* 0x1720C07E: jg 0x1720c03a */
L_1720C080:
    eax = MEM32(esp + 0x10); /* 0x1720C080: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x1720C084: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x1720C087: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x1720C08B: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720C08F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720C092: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720D000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720D000u);

L_1720D000:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x1720D000: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x1720D006: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x1720D00D: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x1720D014: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x1720D01B: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x1720D022: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1720D024: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x1720D027: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x1720D02D: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x1720D033: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x1720D039: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1720D080; /* 0x1720D03C: jge 0x1720d080 */
L_1720D03E:
    esi = MEM32(ebp + 0x140); /* 0x1720D03E: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x1720D044: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1720D047:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1720D290; /* 0x1720D047: je 0x1720d290 */
L_1720D04D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720D04D: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1720D050: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x1720D053: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x1720D057: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_172152F1); /* 0x1720D05B: call 0x172152f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x1720D060: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x1720D066: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x1720D06C: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x1720D072: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x1720D078: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1720D047; /* 0x1720D07E: jmp 0x1720d047 */
L_1720D080:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x1720D080: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720D084: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720D089: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720D08E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720D093: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720D097: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720D09B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720D09F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x1720D0A3: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x1720D0A8: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x1720D0AD: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x1720D0B2: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720D0B7: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720D0BB: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720D0BF: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720D0C3: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x1720D0C7: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x1720D0CB: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x1720D0D0: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x1720D0D5: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x1720D0DA: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x1720D0DF: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x1720D0E4: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x1720D0E9: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x30); _xmm[0].u64[1] = 0; /* 0x1720D0EE: movss xmm0, dword ptr [edx + 0x30] */
    _xmm[1].u64[0] = MEM32(edx + 0x34); _xmm[1].u64[1] = 0; /* 0x1720D0F3: movss xmm1, dword ptr [edx + 0x34] */
    _xmm[2].u64[0] = MEM32(edx + 0x38); _xmm[2].u64[1] = 0; /* 0x1720D0F8: movss xmm2, dword ptr [edx + 0x38] */
    _xmm[3].u64[0] = MEM32(edx + 0x3C); _xmm[3].u64[1] = 0; /* 0x1720D0FD: movss xmm3, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720D102: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720D106: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720D10A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720D10E: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0xC0, _xmm[0]); /* 0x1720D112: movaps xmmword ptr [esp + 0xc0], xmm0 */
    xmm_st(esp + 0xD0, _xmm[1]); /* 0x1720D11A: movaps xmmword ptr [esp + 0xd0], xmm1 */
    xmm_st(esp + 0xE0, _xmm[2]); /* 0x1720D122: movaps xmmword ptr [esp + 0xe0], xmm2 */
    xmm_st(esp + 0xF0, _xmm[3]); /* 0x1720D12A: movaps xmmword ptr [esp + 0xf0], xmm3 */
    ebx = ecx; /* 0x1720D132: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1720D134: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x1720D137: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x1720D13D: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720D195; /* 0x1720D143: je 0x1720d195 */
L_1720D145:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D145: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1720D148: mov eax, ecx */
    edx = ecx; /* 0x1720D14A: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1720D14C: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1720D14F: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x1720D152: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x1720D158: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D15E: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D161: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D165: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D168: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D16B: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D16E: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D172: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D175: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D178: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D17B: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x1720D17E: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x1720D186: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x1720D18E: mov dword ptr [esp + 0x120], eax */
L_1720D195:
    edx = MEM32(ebp + 0x140); /* 0x1720D195: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x1720D19B: mov eax, dword ptr [ebp + 0x138] */
L_1720D1A1:
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D1A1: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D1A4: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D1A8: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D1AB: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D1AE: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D1B1: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D1B5: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D1B8: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D1BB: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D1BE: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x1720D1C1: lea edx, [edx + esi*2] */
L_1720D1C4:
    _xmm[1] = _xmm[0]; /* 0x1720D1C4: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x1720D1C7: movaps xmm3, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x1720D1CA: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720D1CD: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720D1D1: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720D1D6: mulps xmm3, xmmword ptr [esp + 0x20] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720D1DB: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[2] = _xmm[4]; /* 0x1720D1E0: movaps xmm2, xmm4 */
    _xmm[6] = _xmm[4]; /* 0x1720D1E3: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x1720D1E6: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720D1E9: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720D1EE: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1720D1F3: mulps xmm6, xmmword ptr [esp + 0x60] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1720D1F8: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720D1FD: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720D200: addps xmm1, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720D203: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720D206: addps xmm5, xmm7 */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720D209: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720D211: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xE0)); float _s1 = sse_f32(MEM32(esp + 0xE0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xE0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xE0 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720D219: addps xmm3, xmmword ptr [esp + 0xe0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720D221: addps xmm5, xmmword ptr [esp + 0xf0] */
    _xmm[2] = _xmm[0]; /* 0x1720D229: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D22C: unpcklps xmm0, xmm1 */
    _xmm[4] = _xmm[3]; /* 0x1720D22F: movaps xmm4, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1720D232: unpcklps xmm3, xmm5 */
    _xmm[6] = _xmm[0]; /* 0x1720D235: movaps xmm6, xmm0 */
    _xmm[7] = _xmm[5]; /* 0x1720D238: movaps xmm7, xmm5 */
    _xmm[0].u64[1] = _xmm[3].u64[0]; /* 0x1720D23B: movlhps xmm0, xmm3 */
    _xmm[3].u64[0] = _xmm[6].u64[1]; /* 0x1720D23E: movhlps xmm3, xmm6 */
    { xmm_t _s = _xmm[7], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1720D241: unpckhps xmm4, xmm7 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1720D244: unpckhps xmm2, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x1720D247: movaps xmm5, xmm2 */
    _xmm[2].u64[1] = _xmm[4].u64[0]; /* 0x1720D24A: movlhps xmm2, xmm4 */
    _xmm[4].u64[0] = _xmm[5].u64[1]; /* 0x1720D24D: movhlps xmm4, xmm5 */
    xmm_st(eax, _xmm[0]); /* 0x1720D250: movups xmmword ptr [eax], xmm0 */
    xmm_st(edi + eax, _xmm[3]); /* 0x1720D253: movups xmmword ptr [edi + eax], xmm3 */
    eax = eax + edi * 2; /* 0x1720D257: lea eax, [eax + edi*2] */
    xmm_st(eax, _xmm[2]); /* 0x1720D25A: movups xmmword ptr [eax], xmm2 */
    xmm_st(edi + eax, _xmm[4]); /* 0x1720D25D: movups xmmword ptr [edi + eax], xmm4 */
    eax = eax + edi * 2; /* 0x1720D261: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D264: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720D1A1; /* 0x1720D267: jg 0x1720d1a1 */
L_1720D26D:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1720D290; /* 0x1720D26D: je 0x1720d290 */
L_1720D26F:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x1720D26F: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x1720D277: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x1720D27F: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x1720D286: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1720D1C4; /* 0x1720D28B: jmp 0x1720d1c4 */
L_1720D290:
    esp = ebp; /* 0x1720D290: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x1720D292: mov eax, dword ptr [ebp + 0x138] */
    ebp = MEM32(esp + 0x124); /* 0x1720D298: mov ebp, dword ptr [esp + 0x124] */
    esi = MEM32(esp + 0x128); /* 0x1720D29F: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x1720D2A6: mov edi, dword ptr [esp + 0x12c] */
    ebx = MEM32(esp + 0x130); /* 0x1720D2AD: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x1720D2B4: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720D2BA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720D2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720D2C0u);

L_1720D2C0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x1720D2C0: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x1720D2C6: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x1720D2CD: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x1720D2D4: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x1720D2DB: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x1720D2E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1720D2E4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x1720D2E7: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x1720D2ED: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x1720D2F3: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x1720D2F9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1720D340; /* 0x1720D2FC: jge 0x1720d340 */
L_1720D2FE:
    esi = MEM32(ebp + 0x140); /* 0x1720D2FE: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x1720D304: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1720D307:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1720D536; /* 0x1720D307: je 0x1720d536 */
L_1720D30D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720D30D: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1720D310: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x1720D313: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x1720D317: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_1721538D); /* 0x1720D31B: call 0x1721538d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x1720D320: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x1720D326: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x1720D32C: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x1720D332: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x1720D338: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1720D307; /* 0x1720D33E: jmp 0x1720d307 */
L_1720D340:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x1720D340: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720D344: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720D349: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720D34E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720D353: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720D357: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720D35B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720D35F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x1720D363: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x1720D368: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x1720D36D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x1720D372: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720D377: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720D37B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720D37F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720D383: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x1720D387: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x1720D38B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x1720D390: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x1720D395: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x1720D39A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x1720D39F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x1720D3A4: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x1720D3A9: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x30); _xmm[0].u64[1] = 0; /* 0x1720D3AE: movss xmm0, dword ptr [edx + 0x30] */
    _xmm[1].u64[0] = MEM32(edx + 0x34); _xmm[1].u64[1] = 0; /* 0x1720D3B3: movss xmm1, dword ptr [edx + 0x34] */
    _xmm[2].u64[0] = MEM32(edx + 0x38); _xmm[2].u64[1] = 0; /* 0x1720D3B8: movss xmm2, dword ptr [edx + 0x38] */
    _xmm[3].u64[0] = MEM32(edx + 0x3C); _xmm[3].u64[1] = 0; /* 0x1720D3BD: movss xmm3, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720D3C2: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720D3C6: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720D3CA: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720D3CE: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0xC0, _xmm[0]); /* 0x1720D3D2: movaps xmmword ptr [esp + 0xc0], xmm0 */
    xmm_st(esp + 0xD0, _xmm[1]); /* 0x1720D3DA: movaps xmmword ptr [esp + 0xd0], xmm1 */
    xmm_st(esp + 0xE0, _xmm[2]); /* 0x1720D3E2: movaps xmmword ptr [esp + 0xe0], xmm2 */
    xmm_st(esp + 0xF0, _xmm[3]); /* 0x1720D3EA: movaps xmmword ptr [esp + 0xf0], xmm3 */
    ebx = ecx; /* 0x1720D3F2: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1720D3F4: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x1720D3F7: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x1720D3FD: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720D455; /* 0x1720D403: je 0x1720d455 */
L_1720D405:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D405: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1720D408: mov eax, ecx */
    edx = ecx; /* 0x1720D40A: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1720D40C: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1720D40F: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x1720D412: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x1720D418: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D41E: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D421: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D425: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D428: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D42B: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D42E: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D432: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D435: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D438: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D43B: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x1720D43E: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x1720D446: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x1720D44E: mov dword ptr [esp + 0x120], eax */
L_1720D455:
    edx = MEM32(ebp + 0x140); /* 0x1720D455: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x1720D45B: mov eax, dword ptr [ebp + 0x138] */
L_1720D461:
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D461: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D464: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D468: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D46B: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D46E: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D471: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D475: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D478: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D47B: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D47E: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x1720D481: lea edx, [edx + esi*2] */
L_1720D484:
    _xmm[1] = _xmm[0]; /* 0x1720D484: movaps xmm1, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x1720D487: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720D48A: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720D48E: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720D493: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[2] = _xmm[4]; /* 0x1720D498: movaps xmm2, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x1720D49B: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720D49E: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720D4A3: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1720D4A8: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720D4AD: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720D4B0: addps xmm1, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720D4B3: addps xmm5, xmm7 */
    _xmm[2] = xmm_ld(0x17239000); /* 0x1720D4B6: movaps xmm2, xmmword ptr [0x17239000] */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720D4BD: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720D4C5: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720D4CD: addps xmm5, xmmword ptr [esp + 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x1720D4D5: rcpps xmm4, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720D4D8: mulps xmm5, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1720D4DB: subps xmm2, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720D4DE: mulps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720D4E1: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720D4E4: mulps xmm1, xmm4 */
    _xmm[2] = _xmm[0]; /* 0x1720D4E7: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D4EA: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1720D4ED: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x1720D4F0: movlps qword ptr [eax], xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x1720D4F3: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x1720D4F6: movlps qword ptr [edi + eax], xmm0 */
    eax = eax + edi * 2; /* 0x1720D4FA: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x1720D4FD: movlps qword ptr [eax], xmm2 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x1720D500: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x1720D503: movlps qword ptr [edi + eax], xmm2 */
    eax = eax + edi * 2; /* 0x1720D507: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D50A: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720D461; /* 0x1720D50D: jg 0x1720d461 */
L_1720D513:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1720D536; /* 0x1720D513: je 0x1720d536 */
L_1720D515:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x1720D515: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x1720D51D: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x1720D525: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x1720D52C: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1720D484; /* 0x1720D531: jmp 0x1720d484 */
L_1720D536:
    esp = ebp; /* 0x1720D536: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x1720D538: mov eax, dword ptr [ebp + 0x138] */
    ebp = MEM32(esp + 0x124); /* 0x1720D53E: mov ebp, dword ptr [esp + 0x124] */
    esi = MEM32(esp + 0x128); /* 0x1720D545: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x1720D54C: mov edi, dword ptr [esp + 0x12c] */
    ebx = MEM32(esp + 0x130); /* 0x1720D553: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x1720D55A: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720D560: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720D580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720D580u);

L_1720D580:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x1720D580: sub esp, 0x134 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x124) = ebp; /* 0x1720D586: mov dword ptr [esp + 0x124], ebp */
    MEM32(esp + 0x128) = esi; /* 0x1720D58D: mov dword ptr [esp + 0x128], esi */
    MEM32(esp + 0x12C) = edi; /* 0x1720D594: mov dword ptr [esp + 0x12c], edi */
    MEM32(esp + 0x130) = ebx; /* 0x1720D59B: mov dword ptr [esp + 0x130], ebx */
    ebp = esp; /* 0x1720D5A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1720D5A4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14C); /* 0x1720D5A7: mov ecx, dword ptr [ebp + 0x14c] */
    eax = MEM32(ebp + 0x138); /* 0x1720D5AD: mov eax, dword ptr [ebp + 0x138] */
    edx = MEM32(ebp + 0x148); /* 0x1720D5B3: mov edx, dword ptr [ebp + 0x148] */
    /* cmp ecx, 4 */ /* 0x1720D5B9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1720D600; /* 0x1720D5BC: jge 0x1720d600 */
L_1720D5BE:
    esi = MEM32(ebp + 0x140); /* 0x1720D5BE: mov esi, dword ptr [ebp + 0x140] */
    /* cmp ecx, 0 */ /* 0x1720D5C4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1720D5C7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1720D767; /* 0x1720D5C7: je 0x1720d767 */
L_1720D5CD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720D5CD: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1720D5D0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x1720D5D3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x1720D5D7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_1721534D); /* 0x1720D5DB: call 0x1721534d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x13C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x13C); /* 0x1720D5E0: add eax, dword ptr [ebp + 0x13c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x140); /* 0x1720D5E6: mov esi, dword ptr [ebp + 0x140] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x144));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x144); /* 0x1720D5EC: add esi, dword ptr [ebp + 0x144] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x140) = esi; /* 0x1720D5F2: mov dword ptr [ebp + 0x140], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14C) = MEM32(ebp + 0x14C) - 1; /* 0x1720D5F8: dec dword ptr [ebp + 0x14c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1720D5C7; /* 0x1720D5FE: jmp 0x1720d5c7 */
L_1720D600:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x1720D600: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720D604: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720D609: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720D60E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720D613: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720D617: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720D61B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720D61F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x1720D623: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x1720D628: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x1720D62D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x1720D632: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720D637: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720D63B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720D63F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720D643: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x1720D647: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x1720D64B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x1720D650: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x1720D655: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x1720D65A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x1720D65F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x1720D664: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x1720D669: movaps xmmword ptr [esp + 0x70], xmm7 */
    ebx = ecx; /* 0x1720D66E: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1720D670: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x144); /* 0x1720D673: mov esi, dword ptr [ebp + 0x144] */
    edi = MEM32(ebp + 0x13C); /* 0x1720D679: mov edi, dword ptr [ebp + 0x13c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720D6D1; /* 0x1720D67F: je 0x1720d6d1 */
L_1720D681:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D681: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1720D684: mov eax, ecx */
    edx = ecx; /* 0x1720D686: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1720D688: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1720D68B: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x140));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x140); /* 0x1720D68E: add edx, dword ptr [ebp + 0x140] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x138));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x138); /* 0x1720D694: add eax, dword ptr [ebp + 0x138] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D69A: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D69D: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D6A1: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D6A4: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D6A7: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D6AA: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D6AE: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D6B1: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D6B4: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D6B7: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x1720D6BA: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x1720D6C2: movaps xmmword ptr [esp + 0x110], xmm4 */
    MEM32(esp + 0x120) = eax; /* 0x1720D6CA: mov dword ptr [esp + 0x120], eax */
L_1720D6D1:
    edx = MEM32(ebp + 0x140); /* 0x1720D6D1: mov edx, dword ptr [ebp + 0x140] */
    eax = MEM32(ebp + 0x138); /* 0x1720D6D7: mov eax, dword ptr [ebp + 0x138] */
L_1720D6DD:
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720D6DD: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720D6E0: movlps xmm1, qword ptr [esi + edx] */
    edx = edx + esi * 2; /* 0x1720D6E4: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D6E7: unpcklps xmm0, xmm1 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720D6EA: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720D6ED: movlps xmm5, qword ptr [esi + edx] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720D6F1: unpcklps xmm4, xmm5 */
    _xmm[1] = _xmm[0]; /* 0x1720D6F4: movaps xmm1, xmm0 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720D6F7: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720D6FA: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x1720D6FD: lea edx, [edx + esi*2] */
L_1720D700:
    _xmm[1] = _xmm[0]; /* 0x1720D700: movaps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720D703: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720D707: mulps xmm1, xmmword ptr [esp + 0x10] */
    _xmm[2] = _xmm[4]; /* 0x1720D70C: movaps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720D70F: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720D714: mulps xmm2, xmmword ptr [esp + 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720D719: addps xmm0, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720D71C: addps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x1720D71F: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720D722: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1720D725: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x1720D728: movlps qword ptr [eax], xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x1720D72B: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x1720D72E: movlps qword ptr [edi + eax], xmm0 */
    eax = eax + edi * 2; /* 0x1720D732: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x1720D735: movlps qword ptr [eax], xmm2 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x1720D738: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x1720D73B: movlps qword ptr [edi + eax], xmm2 */
    eax = eax + edi * 2; /* 0x1720D73F: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720D742: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720D6DD; /* 0x1720D745: jg 0x1720d6dd */
L_1720D747:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1720D767; /* 0x1720D747: je 0x1720d767 */
L_1720D749:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x1720D749: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x1720D751: movaps xmm4, xmmword ptr [esp + 0x110] */
    eax = MEM32(esp + 0x120); /* 0x1720D759: mov eax, dword ptr [esp + 0x120] */
    ecx = 4; /* 0x1720D760: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1720D700; /* 0x1720D765: jmp 0x1720d700 */
L_1720D767:
    esp = ebp; /* 0x1720D767: mov esp, ebp */
    eax = MEM32(ebp + 0x138); /* 0x1720D769: mov eax, dword ptr [ebp + 0x138] */
    esi = MEM32(esp + 0x128); /* 0x1720D76F: mov esi, dword ptr [esp + 0x128] */
    edi = MEM32(esp + 0x12C); /* 0x1720D776: mov edi, dword ptr [esp + 0x12c] */
    ebp = MEM32(esp + 0x124); /* 0x1720D77D: mov ebp, dword ptr [esp + 0x124] */
    ebx = MEM32(esp + 0x130); /* 0x1720D784: mov ebx, dword ptr [esp + 0x130] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x134u; /* 0x1720D78B: add esp, 0x134 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720D791: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720E000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E000u);

L_1720E000:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720E000: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = esi; /* 0x1720E003: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edi; /* 0x1720E007: mov dword ptr [esp + 8], edi */
    MEM32(esp) = ebx; /* 0x1720E00B: mov dword ptr [esp], ebx */
    ecx = MEM32(esp + 0x24); /* 0x1720E00E: mov ecx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10); /* 0x1720E012: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x18); /* 0x1720E016: mov ebx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x20); /* 0x1720E01A: mov edx, dword ptr [esp + 0x20] */
    /* cmp ecx, 0 */ /* 0x1720E01E: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1720E074; /* 0x1720E021: jle 0x1720e074 */
L_1720E023:
    esi = MEM32(esp + 0x1C); /* 0x1720E023: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x14); /* 0x1720E027: mov edi, dword ptr [esp + 0x14] */
    _xmm[4] = xmm_ld(edx); /* 0x1720E02B: movups xmm4, xmmword ptr [edx] */
    _xmm[5] = xmm_ld(edx + 0x10); /* 0x1720E02E: movups xmm5, xmmword ptr [edx + 0x10] */
    _xmm[6] = xmm_ld(edx + 0x20); /* 0x1720E032: movups xmm6, xmmword ptr [edx + 0x20] */
    _xmm[7] = xmm_ld(edx + 0x30); /* 0x1720E036: movups xmm7, xmmword ptr [edx + 0x30] */
L_1720E03A:
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x1720E03A: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720E03E: shufps xmm0, xmm0, 0 */
    _xmm[1].u64[0] = MEM32(ebx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720E042: movss xmm1, dword ptr [ebx + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720E047: shufps xmm1, xmm1, 0 */
    _xmm[2].u64[0] = MEM32(ebx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E04B: movss xmm2, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720E050: shufps xmm2, xmm2, 0 */
    ebx = esi + ebx; /* 0x1720E054: lea ebx, [esi + ebx] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720E057: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720E05A: mulps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720E05D: mulps xmm2, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E060: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1720E063: addps xmm2, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E066: addps xmm0, xmm2 */
    xmm_st(eax, _xmm[0]); /* 0x1720E069: movups xmmword ptr [eax], xmm0 */
    eax = edi + eax; /* 0x1720E06C: lea eax, [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1720E06F: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720E03A; /* 0x1720E072: jg 0x1720e03a */
L_1720E074:
    eax = MEM32(esp + 0x10); /* 0x1720E074: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp); /* 0x1720E078: mov ebx, dword ptr [esp] */
    esi = MEM32(esp + 0x4); /* 0x1720E07B: mov esi, dword ptr [esp + 4] */
    edi = MEM32(esp + 0x8); /* 0x1720E07F: mov edi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720E083: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720E086: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720E0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E0A0u);

L_1720E0A0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x1720E0A0: sub esp, 0x144 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x134) = ebp; /* 0x1720E0A6: mov dword ptr [esp + 0x134], ebp */
    MEM32(esp + 0x138) = esi; /* 0x1720E0AD: mov dword ptr [esp + 0x138], esi */
    MEM32(esp + 0x13C) = edi; /* 0x1720E0B4: mov dword ptr [esp + 0x13c], edi */
    MEM32(esp + 0x140) = ebx; /* 0x1720E0BB: mov dword ptr [esp + 0x140], ebx */
    ebp = esp; /* 0x1720E0C2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1720E0C4: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x15C); /* 0x1720E0C7: mov ecx, dword ptr [ebp + 0x15c] */
    eax = MEM32(ebp + 0x148); /* 0x1720E0CD: mov eax, dword ptr [ebp + 0x148] */
    edx = MEM32(ebp + 0x158); /* 0x1720E0D3: mov edx, dword ptr [ebp + 0x158] */
    /* cmp ecx, 4 */ /* 0x1720E0D9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1720E120; /* 0x1720E0DC: jge 0x1720e120 */
L_1720E0DE:
    esi = MEM32(ebp + 0x150); /* 0x1720E0DE: mov esi, dword ptr [ebp + 0x150] */
    /* cmp ecx, 0 */ /* 0x1720E0E4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1720E0E7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1720E41D; /* 0x1720E0E7: je 0x1720e41d */
L_1720E0ED:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720E0ED: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1720E0F0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x1720E0F3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x1720E0F7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_1721412E); /* 0x1720E0FB: call 0x1721412e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14C); /* 0x1720E100: add eax, dword ptr [ebp + 0x14c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x150); /* 0x1720E106: mov esi, dword ptr [ebp + 0x150] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x154));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x154); /* 0x1720E10C: add esi, dword ptr [ebp + 0x154] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x150) = esi; /* 0x1720E112: mov dword ptr [ebp + 0x150], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x15C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x15C) = MEM32(ebp + 0x15C) - 1; /* 0x1720E118: dec dword ptr [ebp + 0x15c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1720E0E7; /* 0x1720E11E: jmp 0x1720e0e7 */
L_1720E120:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x1720E120: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720E124: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E129: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720E12E: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720E133: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720E137: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720E13B: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720E13F: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x1720E143: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x1720E148: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x1720E14D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x1720E152: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720E157: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720E15B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720E15F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720E163: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x1720E167: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x1720E16B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x1720E170: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x1720E175: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x1720E17A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x1720E17F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x1720E184: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x1720E189: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x20); _xmm[0].u64[1] = 0; /* 0x1720E18E: movss xmm0, dword ptr [edx + 0x20] */
    _xmm[1].u64[0] = MEM32(edx + 0x24); _xmm[1].u64[1] = 0; /* 0x1720E193: movss xmm1, dword ptr [edx + 0x24] */
    _xmm[2].u64[0] = MEM32(edx + 0x28); _xmm[2].u64[1] = 0; /* 0x1720E198: movss xmm2, dword ptr [edx + 0x28] */
    _xmm[3].u64[0] = MEM32(edx + 0x2C); _xmm[3].u64[1] = 0; /* 0x1720E19D: movss xmm3, dword ptr [edx + 0x2c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720E1A2: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720E1A6: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720E1AA: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720E1AE: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x30); _xmm[4].u64[1] = 0; /* 0x1720E1B2: movss xmm4, dword ptr [edx + 0x30] */
    _xmm[5].u64[0] = MEM32(edx + 0x34); _xmm[5].u64[1] = 0; /* 0x1720E1B7: movss xmm5, dword ptr [edx + 0x34] */
    _xmm[6].u64[0] = MEM32(edx + 0x38); _xmm[6].u64[1] = 0; /* 0x1720E1BC: movss xmm6, dword ptr [edx + 0x38] */
    _xmm[7].u64[0] = MEM32(edx + 0x3C); _xmm[7].u64[1] = 0; /* 0x1720E1C1: movss xmm7, dword ptr [edx + 0x3c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720E1C6: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720E1CA: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720E1CE: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720E1D2: shufps xmm7, xmm7, 0 */
    xmm_st(esp + 0x80, _xmm[0]); /* 0x1720E1D6: movaps xmmword ptr [esp + 0x80], xmm0 */
    xmm_st(esp + 0x90, _xmm[1]); /* 0x1720E1DE: movaps xmmword ptr [esp + 0x90], xmm1 */
    xmm_st(esp + 0xA0, _xmm[2]); /* 0x1720E1E6: movaps xmmword ptr [esp + 0xa0], xmm2 */
    xmm_st(esp + 0xB0, _xmm[3]); /* 0x1720E1EE: movaps xmmword ptr [esp + 0xb0], xmm3 */
    xmm_st(esp + 0xC0, _xmm[4]); /* 0x1720E1F6: movaps xmmword ptr [esp + 0xc0], xmm4 */
    xmm_st(esp + 0xD0, _xmm[5]); /* 0x1720E1FE: movaps xmmword ptr [esp + 0xd0], xmm5 */
    xmm_st(esp + 0xE0, _xmm[6]); /* 0x1720E206: movaps xmmword ptr [esp + 0xe0], xmm6 */
    xmm_st(esp + 0xF0, _xmm[7]); /* 0x1720E20E: movaps xmmword ptr [esp + 0xf0], xmm7 */
    ebx = ecx; /* 0x1720E216: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1720E218: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x154); /* 0x1720E21B: mov esi, dword ptr [ebp + 0x154] */
    edi = MEM32(ebp + 0x14C); /* 0x1720E221: mov edi, dword ptr [ebp + 0x14c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720E2A0; /* 0x1720E227: je 0x1720e2a0 */
L_1720E229:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720E229: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1720E22C: mov eax, ecx */
    edx = ecx; /* 0x1720E22E: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1720E230: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1720E233: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x150));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x150); /* 0x1720E236: add edx, dword ptr [ebp + 0x150] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x148));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x148); /* 0x1720E23C: add eax, dword ptr [ebp + 0x148] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720E242: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720E245: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E249: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x1720E24E: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x1720E254: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E257: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1720E25A: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720E25D: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720E260: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x1720E264: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x1720E269: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720E26F: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1720E272: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x1720E275: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x1720E278: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720E27B: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720E27E: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x1720E281: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x1720E289: movaps xmmword ptr [esp + 0x110], xmm4 */
    xmm_st(esp + 0x120, _xmm[2]); /* 0x1720E291: movaps xmmword ptr [esp + 0x120], xmm2 */
    MEM32(esp + 0x130) = eax; /* 0x1720E299: mov dword ptr [esp + 0x130], eax */
L_1720E2A0:
    edx = MEM32(ebp + 0x150); /* 0x1720E2A0: mov edx, dword ptr [ebp + 0x150] */
    eax = MEM32(ebp + 0x148); /* 0x1720E2A6: mov eax, dword ptr [ebp + 0x148] */
L_1720E2AC:
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720E2AC: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720E2AF: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E2B3: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x1720E2B8: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x1720E2BE: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E2C1: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1720E2C4: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720E2C7: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720E2CA: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x1720E2CE: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x1720E2D3: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720E2D9: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1720E2DC: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x1720E2DF: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x1720E2E2: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720E2E5: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720E2E8: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x1720E2EB: lea edx, [edx + esi*2] */
L_1720E2EE:
    _xmm[1] = _xmm[0]; /* 0x1720E2EE: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x1720E2F1: movaps xmm3, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x1720E2F4: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720E2F7: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720E2FB: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720E300: mulps xmm3, xmmword ptr [esp + 0x20] */
    { float _s0 = sse_f32(MEM32(esp + 0x30)); float _s1 = sse_f32(MEM32(esp + 0x30 + 4)); float _s2 = sse_f32(MEM32(esp + 0x30 + 8)); float _s3 = sse_f32(MEM32(esp + 0x30 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720E305: mulps xmm5, xmmword ptr [esp + 0x30] */
    _xmm[6] = _xmm[4]; /* 0x1720E30A: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[4]; /* 0x1720E30D: movaps xmm7, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720E310: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1720E315: mulps xmm6, xmmword ptr [esp + 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E31A: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720E31D: addps xmm1, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1720E320: movaps xmm6, xmm7 */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1720E323: mulps xmm6, xmmword ptr [esp + 0x60] */
    { float _s0 = sse_f32(MEM32(esp + 0x70)); float _s1 = sse_f32(MEM32(esp + 0x70 + 4)); float _s2 = sse_f32(MEM32(esp + 0x70 + 8)); float _s3 = sse_f32(MEM32(esp + 0x70 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1720E328: mulps xmm7, xmmword ptr [esp + 0x70] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720E32D: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720E330: addps xmm5, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x1720E333: movaps xmm4, xmm2 */
    _xmm[6] = _xmm[2]; /* 0x1720E336: movaps xmm6, xmm2 */
    _xmm[7] = _xmm[2]; /* 0x1720E339: movaps xmm7, xmm2 */
    { float _s0 = sse_f32(MEM32(esp + 0x80)); float _s1 = sse_f32(MEM32(esp + 0x80 + 4)); float _s2 = sse_f32(MEM32(esp + 0x80 + 8)); float _s3 = sse_f32(MEM32(esp + 0x80 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720E33C: mulps xmm2, xmmword ptr [esp + 0x80] */
    { float _s0 = sse_f32(MEM32(esp + 0x90)); float _s1 = sse_f32(MEM32(esp + 0x90 + 4)); float _s2 = sse_f32(MEM32(esp + 0x90 + 8)); float _s3 = sse_f32(MEM32(esp + 0x90 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720E344: mulps xmm4, xmmword ptr [esp + 0x90] */
    { float _s0 = sse_f32(MEM32(esp + 0xA0)); float _s1 = sse_f32(MEM32(esp + 0xA0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xA0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xA0 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1720E34C: mulps xmm6, xmmword ptr [esp + 0xa0] */
    { float _s0 = sse_f32(MEM32(esp + 0xB0)); float _s1 = sse_f32(MEM32(esp + 0xB0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xB0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xB0 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1720E354: mulps xmm7, xmmword ptr [esp + 0xb0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E35C: addps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720E35F: addps xmm1, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720E362: addps xmm3, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720E365: addps xmm5, xmm7 */
    _xmm[2] = xmm_ld(0x1723A000); /* 0x1720E368: movaps xmm2, xmmword ptr [0x1723a000] */
    { float _s0 = sse_f32(MEM32(esp + 0xC0)); float _s1 = sse_f32(MEM32(esp + 0xC0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xC0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E36F: addps xmm0, xmmword ptr [esp + 0xc0] */
    { float _s0 = sse_f32(MEM32(esp + 0xD0)); float _s1 = sse_f32(MEM32(esp + 0xD0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xD0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xD0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720E377: addps xmm1, xmmword ptr [esp + 0xd0] */
    { float _s0 = sse_f32(MEM32(esp + 0xE0)); float _s1 = sse_f32(MEM32(esp + 0xE0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xE0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xE0 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720E37F: addps xmm3, xmmword ptr [esp + 0xe0] */
    { float _s0 = sse_f32(MEM32(esp + 0xF0)); float _s1 = sse_f32(MEM32(esp + 0xF0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xF0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xF0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1720E387: addps xmm5, xmmword ptr [esp + 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x1720E38F: rcpps xmm4, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720E392: mulps xmm5, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1720E395: subps xmm2, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720E398: mulps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720E39B: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720E39E: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720E3A1: mulps xmm3, xmm4 */
    _xmm[2] = _xmm[0]; /* 0x1720E3A4: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E3A7: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1720E3AA: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x1720E3AD: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E3B0: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E3B5: shufps xmm3, xmm3, 0xf9 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x1720E3B9: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x1720E3BC: movlps qword ptr [edi + eax], xmm0 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E3C0: movss dword ptr [edi + eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E3C6: shufps xmm3, xmm3, 0xf9 */
    eax = eax + edi * 2; /* 0x1720E3CA: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x1720E3CD: movlps qword ptr [eax], xmm2 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E3D0: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E3D5: shufps xmm3, xmm3, 0xf9 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x1720E3D9: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x1720E3DC: movlps qword ptr [edi + eax], xmm2 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E3E0: movss dword ptr [edi + eax + 8], xmm3 */
    eax = eax + edi * 2; /* 0x1720E3E6: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720E3E9: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720E2AC; /* 0x1720E3EC: jg 0x1720e2ac */
L_1720E3F2:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1720E41D; /* 0x1720E3F2: je 0x1720e41d */
L_1720E3F4:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x1720E3F4: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x1720E3FC: movaps xmm4, xmmword ptr [esp + 0x110] */
    _xmm[2] = xmm_ld(esp + 0x120); /* 0x1720E404: movaps xmm2, xmmword ptr [esp + 0x120] */
    eax = MEM32(esp + 0x130); /* 0x1720E40C: mov eax, dword ptr [esp + 0x130] */
    ecx = 4; /* 0x1720E413: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1720E2EE; /* 0x1720E418: jmp 0x1720e2ee */
L_1720E41D:
    esp = ebp; /* 0x1720E41D: mov esp, ebp */
    eax = MEM32(ebp + 0x148); /* 0x1720E41F: mov eax, dword ptr [ebp + 0x148] */
    esi = MEM32(esp + 0x138); /* 0x1720E425: mov esi, dword ptr [esp + 0x138] */
    edi = MEM32(esp + 0x13C); /* 0x1720E42C: mov edi, dword ptr [esp + 0x13c] */
    ebp = MEM32(esp + 0x134); /* 0x1720E433: mov ebp, dword ptr [esp + 0x134] */
    ebx = MEM32(esp + 0x140); /* 0x1720E43A: mov ebx, dword ptr [esp + 0x140] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x144u; /* 0x1720E441: add esp, 0x144 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720E447: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720E460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E460u);

L_1720E460:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x1720E460: sub esp, 0x144 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x134) = ebp; /* 0x1720E466: mov dword ptr [esp + 0x134], ebp */
    MEM32(esp + 0x138) = esi; /* 0x1720E46D: mov dword ptr [esp + 0x138], esi */
    MEM32(esp + 0x13C) = edi; /* 0x1720E474: mov dword ptr [esp + 0x13c], edi */
    MEM32(esp + 0x140) = ebx; /* 0x1720E47B: mov dword ptr [esp + 0x140], ebx */
    ebp = esp; /* 0x1720E482: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1720E484: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x15C); /* 0x1720E487: mov ecx, dword ptr [ebp + 0x15c] */
    eax = MEM32(ebp + 0x148); /* 0x1720E48D: mov eax, dword ptr [ebp + 0x148] */
    edx = MEM32(ebp + 0x158); /* 0x1720E493: mov edx, dword ptr [ebp + 0x158] */
    /* cmp ecx, 4 */ /* 0x1720E499: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1720E4E0; /* 0x1720E49C: jge 0x1720e4e0 */
L_1720E49E:
    esi = MEM32(ebp + 0x150); /* 0x1720E49E: mov esi, dword ptr [ebp + 0x150] */
    /* cmp ecx, 0 */ /* 0x1720E4A4: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1720E4A7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1720E73C; /* 0x1720E4A7: je 0x1720e73c */
L_1720E4AD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720E4AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1720E4B0: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = esi; /* 0x1720E4B3: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = edx; /* 0x1720E4B7: mov dword ptr [esp + 8], edx */
    RECOMP_CALL(sub_17213BBE); /* 0x1720E4BB: call 0x17213bbe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14C); /* 0x1720E4C0: add eax, dword ptr [ebp + 0x14c] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x150); /* 0x1720E4C6: mov esi, dword ptr [ebp + 0x150] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x154));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x154); /* 0x1720E4CC: add esi, dword ptr [ebp + 0x154] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x150) = esi; /* 0x1720E4D2: mov dword ptr [ebp + 0x150], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x15C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x15C) = MEM32(ebp + 0x15C) - 1; /* 0x1720E4D8: dec dword ptr [ebp + 0x15c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1720E4A7; /* 0x1720E4DE: jmp 0x1720e4a7 */
L_1720E4E0:
    _xmm[0].u64[0] = MEM32(edx); _xmm[0].u64[1] = 0; /* 0x1720E4E0: movss xmm0, dword ptr [edx] */
    _xmm[1].u64[0] = MEM32(edx + 0x4); _xmm[1].u64[1] = 0; /* 0x1720E4E4: movss xmm1, dword ptr [edx + 4] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E4E9: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(edx + 0xC); _xmm[3].u64[1] = 0; /* 0x1720E4EE: movss xmm3, dword ptr [edx + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720E4F3: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720E4F7: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720E4FB: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720E4FF: shufps xmm3, xmm3, 0 */
    _xmm[4].u64[0] = MEM32(edx + 0x10); _xmm[4].u64[1] = 0; /* 0x1720E503: movss xmm4, dword ptr [edx + 0x10] */
    _xmm[5].u64[0] = MEM32(edx + 0x14); _xmm[5].u64[1] = 0; /* 0x1720E508: movss xmm5, dword ptr [edx + 0x14] */
    _xmm[6].u64[0] = MEM32(edx + 0x18); _xmm[6].u64[1] = 0; /* 0x1720E50D: movss xmm6, dword ptr [edx + 0x18] */
    _xmm[7].u64[0] = MEM32(edx + 0x1C); _xmm[7].u64[1] = 0; /* 0x1720E512: movss xmm7, dword ptr [edx + 0x1c] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x1720E517: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1720E51B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1720E51F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1720E523: shufps xmm7, xmm7, 0 */
    xmm_st(esp, _xmm[0]); /* 0x1720E527: movaps xmmword ptr [esp], xmm0 */
    xmm_st(esp + 0x10, _xmm[1]); /* 0x1720E52B: movaps xmmword ptr [esp + 0x10], xmm1 */
    xmm_st(esp + 0x20, _xmm[2]); /* 0x1720E530: movaps xmmword ptr [esp + 0x20], xmm2 */
    xmm_st(esp + 0x30, _xmm[3]); /* 0x1720E535: movaps xmmword ptr [esp + 0x30], xmm3 */
    xmm_st(esp + 0x40, _xmm[4]); /* 0x1720E53A: movaps xmmword ptr [esp + 0x40], xmm4 */
    xmm_st(esp + 0x50, _xmm[5]); /* 0x1720E53F: movaps xmmword ptr [esp + 0x50], xmm5 */
    xmm_st(esp + 0x60, _xmm[6]); /* 0x1720E544: movaps xmmword ptr [esp + 0x60], xmm6 */
    xmm_st(esp + 0x70, _xmm[7]); /* 0x1720E549: movaps xmmword ptr [esp + 0x70], xmm7 */
    _xmm[0].u64[0] = MEM32(edx + 0x20); _xmm[0].u64[1] = 0; /* 0x1720E54E: movss xmm0, dword ptr [edx + 0x20] */
    _xmm[1].u64[0] = MEM32(edx + 0x24); _xmm[1].u64[1] = 0; /* 0x1720E553: movss xmm1, dword ptr [edx + 0x24] */
    _xmm[2].u64[0] = MEM32(edx + 0x28); _xmm[2].u64[1] = 0; /* 0x1720E558: movss xmm2, dword ptr [edx + 0x28] */
    _xmm[3].u64[0] = MEM32(edx + 0x2C); _xmm[3].u64[1] = 0; /* 0x1720E55D: movss xmm3, dword ptr [edx + 0x2c] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1720E562: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1720E566: shufps xmm1, xmm1, 0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1720E56A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x1720E56E: shufps xmm3, xmm3, 0 */
    xmm_st(esp + 0x80, _xmm[0]); /* 0x1720E572: movaps xmmword ptr [esp + 0x80], xmm0 */
    xmm_st(esp + 0x90, _xmm[1]); /* 0x1720E57A: movaps xmmword ptr [esp + 0x90], xmm1 */
    xmm_st(esp + 0xA0, _xmm[2]); /* 0x1720E582: movaps xmmword ptr [esp + 0xa0], xmm2 */
    xmm_st(esp + 0xB0, _xmm[3]); /* 0x1720E58A: movaps xmmword ptr [esp + 0xb0], xmm3 */
    ebx = ecx; /* 0x1720E592: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1720E594: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x154); /* 0x1720E597: mov esi, dword ptr [ebp + 0x154] */
    edi = MEM32(ebp + 0x14C); /* 0x1720E59D: mov edi, dword ptr [ebp + 0x14c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720E61C; /* 0x1720E5A3: je 0x1720e61c */
L_1720E5A5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720E5A5: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1720E5A8: mov eax, ecx */
    edx = ecx; /* 0x1720E5AA: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x1720E5AC: imul edx, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1720E5AF: imul eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x150));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x150); /* 0x1720E5B2: add edx, dword ptr [ebp + 0x150] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x148));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x148); /* 0x1720E5B8: add eax, dword ptr [ebp + 0x148] */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720E5BE: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720E5C1: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E5C5: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x1720E5CA: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x1720E5D0: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E5D3: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1720E5D6: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720E5D9: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720E5DC: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x1720E5E0: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x1720E5E5: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720E5EB: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1720E5EE: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x1720E5F1: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x1720E5F4: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720E5F7: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720E5FA: movhlps xmm4, xmm1 */
    xmm_st(esp + 0x100, _xmm[0]); /* 0x1720E5FD: movaps xmmword ptr [esp + 0x100], xmm0 */
    xmm_st(esp + 0x110, _xmm[4]); /* 0x1720E605: movaps xmmword ptr [esp + 0x110], xmm4 */
    xmm_st(esp + 0x120, _xmm[2]); /* 0x1720E60D: movaps xmmword ptr [esp + 0x120], xmm2 */
    MEM32(esp + 0x130) = eax; /* 0x1720E615: mov dword ptr [esp + 0x130], eax */
L_1720E61C:
    edx = MEM32(ebp + 0x150); /* 0x1720E61C: mov edx, dword ptr [ebp + 0x150] */
    eax = MEM32(ebp + 0x148); /* 0x1720E622: mov eax, dword ptr [ebp + 0x148] */
L_1720E628:
    _xmm[0].u64[0] = MEM64(edx); /* 0x1720E628: movlps xmm0, qword ptr [edx] */
    _xmm[1].u64[0] = MEM64(esi + edx); /* 0x1720E62B: movlps xmm1, qword ptr [esi + edx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1720E62F: movss xmm2, dword ptr [edx + 8] */
    _xmm[3].u64[0] = MEM32(esi + edx + 0x8); _xmm[3].u64[1] = 0; /* 0x1720E634: movss xmm3, dword ptr [esi + edx + 8] */
    edx = edx + esi * 2; /* 0x1720E63A: lea edx, [edx + esi*2] */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E63D: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1720E640: unpcklps xmm2, xmm3 */
    _xmm[4].u64[0] = MEM64(edx); /* 0x1720E643: movlps xmm4, qword ptr [edx] */
    _xmm[5].u64[0] = MEM64(esi + edx); /* 0x1720E646: movlps xmm5, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x1720E64A: movss xmm6, dword ptr [edx + 8] */
    _xmm[7].u64[0] = MEM32(esi + edx + 0x8); _xmm[7].u64[1] = 0; /* 0x1720E64F: movss xmm7, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1720E655: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[7], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1720E658: unpcklps xmm6, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x1720E65B: movaps xmm1, xmm0 */
    _xmm[2].u64[1] = _xmm[6].u64[0]; /* 0x1720E65E: movlhps xmm2, xmm6 */
    _xmm[0].u64[1] = _xmm[4].u64[0]; /* 0x1720E661: movlhps xmm0, xmm4 */
    _xmm[4].u64[0] = _xmm[1].u64[1]; /* 0x1720E664: movhlps xmm4, xmm1 */
    edx = edx + esi * 2; /* 0x1720E667: lea edx, [edx + esi*2] */
L_1720E66A:
    _xmm[1] = _xmm[0]; /* 0x1720E66A: movaps xmm1, xmm0 */
    _xmm[3] = _xmm[0]; /* 0x1720E66D: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(esp)); float _s1 = sse_f32(MEM32(esp + 4)); float _s2 = sse_f32(MEM32(esp + 8)); float _s3 = sse_f32(MEM32(esp + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1720E670: mulps xmm0, xmmword ptr [esp] */
    { float _s0 = sse_f32(MEM32(esp + 0x10)); float _s1 = sse_f32(MEM32(esp + 0x10 + 4)); float _s2 = sse_f32(MEM32(esp + 0x10 + 8)); float _s3 = sse_f32(MEM32(esp + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1720E674: mulps xmm1, xmmword ptr [esp + 0x10] */
    { float _s0 = sse_f32(MEM32(esp + 0x20)); float _s1 = sse_f32(MEM32(esp + 0x20 + 4)); float _s2 = sse_f32(MEM32(esp + 0x20 + 8)); float _s3 = sse_f32(MEM32(esp + 0x20 + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1720E679: mulps xmm3, xmmword ptr [esp + 0x20] */
    _xmm[5] = _xmm[4]; /* 0x1720E67E: movaps xmm5, xmm4 */
    _xmm[6] = _xmm[4]; /* 0x1720E681: movaps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(esp + 0x40)); float _s1 = sse_f32(MEM32(esp + 0x40 + 4)); float _s2 = sse_f32(MEM32(esp + 0x40 + 8)); float _s3 = sse_f32(MEM32(esp + 0x40 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720E684: mulps xmm4, xmmword ptr [esp + 0x40] */
    { float _s0 = sse_f32(MEM32(esp + 0x50)); float _s1 = sse_f32(MEM32(esp + 0x50 + 4)); float _s2 = sse_f32(MEM32(esp + 0x50 + 8)); float _s3 = sse_f32(MEM32(esp + 0x50 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1720E689: mulps xmm6, xmmword ptr [esp + 0x50] */
    { float _s0 = sse_f32(MEM32(esp + 0x60)); float _s1 = sse_f32(MEM32(esp + 0x60 + 4)); float _s2 = sse_f32(MEM32(esp + 0x60 + 8)); float _s3 = sse_f32(MEM32(esp + 0x60 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1720E68E: mulps xmm5, xmmword ptr [esp + 0x60] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E693: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720E696: addps xmm1, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720E699: addps xmm3, xmm5 */
    _xmm[4] = _xmm[2]; /* 0x1720E69C: movaps xmm4, xmm2 */
    _xmm[7] = _xmm[2]; /* 0x1720E69F: movaps xmm7, xmm2 */
    { float _s0 = sse_f32(MEM32(esp + 0x80)); float _s1 = sse_f32(MEM32(esp + 0x80 + 4)); float _s2 = sse_f32(MEM32(esp + 0x80 + 8)); float _s3 = sse_f32(MEM32(esp + 0x80 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1720E6A2: mulps xmm2, xmmword ptr [esp + 0x80] */
    { float _s0 = sse_f32(MEM32(esp + 0x90)); float _s1 = sse_f32(MEM32(esp + 0x90 + 4)); float _s2 = sse_f32(MEM32(esp + 0x90 + 8)); float _s3 = sse_f32(MEM32(esp + 0x90 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1720E6AA: mulps xmm4, xmmword ptr [esp + 0x90] */
    { float _s0 = sse_f32(MEM32(esp + 0xA0)); float _s1 = sse_f32(MEM32(esp + 0xA0 + 4)); float _s2 = sse_f32(MEM32(esp + 0xA0 + 8)); float _s3 = sse_f32(MEM32(esp + 0xA0 + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1720E6B2: mulps xmm7, xmmword ptr [esp + 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1720E6BA: addps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1720E6BD: addps xmm1, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1720E6C0: addps xmm3, xmm7 */
    _xmm[2] = _xmm[0]; /* 0x1720E6C3: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1720E6C6: unpcklps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1720E6C9: unpckhps xmm2, xmm1 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x1720E6CC: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E6CF: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E6D4: shufps xmm3, xmm3, 0xf9 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x1720E6D8: movhlps xmm0, xmm0 */
    MEM64(edi + eax) = _xmm[0].u64[0]; /* 0x1720E6DB: movlps qword ptr [edi + eax], xmm0 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E6DF: movss dword ptr [edi + eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E6E5: shufps xmm3, xmm3, 0xf9 */
    eax = eax + edi * 2; /* 0x1720E6E9: lea eax, [eax + edi*2] */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x1720E6EC: movlps qword ptr [eax], xmm2 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E6EF: movss dword ptr [eax + 8], xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1720E6F4: shufps xmm3, xmm3, 0xf9 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x1720E6F8: movhlps xmm2, xmm2 */
    MEM64(edi + eax) = _xmm[2].u64[0]; /* 0x1720E6FB: movlps qword ptr [edi + eax], xmm2 */
    MEM32(edi + eax + 0x8) = _xmm[3].u32[0]; /* 0x1720E6FF: movss dword ptr [edi + eax + 8], xmm3 */
    eax = eax + edi * 2; /* 0x1720E705: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1720E708: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_1720E628; /* 0x1720E70B: jg 0x1720e628 */
L_1720E711:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1720E73C; /* 0x1720E711: je 0x1720e73c */
L_1720E713:
    _xmm[0] = xmm_ld(esp + 0x100); /* 0x1720E713: movaps xmm0, xmmword ptr [esp + 0x100] */
    _xmm[4] = xmm_ld(esp + 0x110); /* 0x1720E71B: movaps xmm4, xmmword ptr [esp + 0x110] */
    _xmm[2] = xmm_ld(esp + 0x120); /* 0x1720E723: movaps xmm2, xmmword ptr [esp + 0x120] */
    eax = MEM32(esp + 0x130); /* 0x1720E72B: mov eax, dword ptr [esp + 0x130] */
    ecx = 4; /* 0x1720E732: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1720E66A; /* 0x1720E737: jmp 0x1720e66a */
L_1720E73C:
    esp = ebp; /* 0x1720E73C: mov esp, ebp */
    eax = MEM32(ebp + 0x148); /* 0x1720E73E: mov eax, dword ptr [ebp + 0x148] */
    esi = MEM32(esp + 0x138); /* 0x1720E744: mov esi, dword ptr [esp + 0x138] */
    edi = MEM32(esp + 0x13C); /* 0x1720E74B: mov edi, dword ptr [esp + 0x13c] */
    ebp = MEM32(esp + 0x134); /* 0x1720E752: mov ebp, dword ptr [esp + 0x134] */
    ebx = MEM32(esp + 0x140); /* 0x1720E759: mov ebx, dword ptr [esp + 0x140] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x144u; /* 0x1720E760: add esp, 0x144 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720E766: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720E76E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E76Eu);

L_1720E76E:
    edx = MEM32(esp + 0xC); /* 0x1720E76E: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x1720E772: mov eax, dword ptr [esp + 8] */
    _mm[2] = MEM64(edx); /* 0x1720E776: movq mm2, qword ptr [edx] */
    _mm[3] = MEM64(edx + 0x8); /* 0x1720E779: movq mm3, qword ptr [edx + 8] */
    _mm[4] = _mm[2]; /* 0x1720E77D: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720E780: movq mm5, mm3 */
    _mm[0] = MEM64(eax); /* 0x1720E783: movq mm0, qword ptr [eax] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720E786: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720E789: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(eax + 0x8); /* 0x1720E78C: movq mm1, qword ptr [eax + 8] */
    void_lift_trap(0x1720E790u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E793u, "unsupported PUNPCKLDQ operands");
    eax = MEM32(esp + 0x4); /* 0x1720E796: mov eax, dword ptr [esp + 4] */
    _mm[6] = _mm[4]; /* 0x1720E79A: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720E79D: movq mm7, mm5 */
    void_lift_trap(0x1720E7A0u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720E7A4: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720E7ABu, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720E7AF: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720E7B6u, "pfmul mm5, mm0");
    void_lift_trap(0x1720E7BAu, "pfmul mm4, mm1");
    void_lift_trap(0x1720E7BEu, "pfadd mm2, mm3");
    _mm[3] = MEM64(edx); /* 0x1720E7C2: movq mm3, qword ptr [edx] */
    void_lift_trap(0x1720E7C5u, "pfsub mm4, mm5");
    _mm[5] = MEM64(edx + 0x8); /* 0x1720E7C9: movq mm5, qword ptr [edx + 8] */
    void_lift_trap(0x1720E7CDu, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720E7D1: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720E7D8u, "pfacc mm4, mm2");
    void_lift_trap(0x1720E7DCu, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720E7E0: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720E7E7u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x1720E7EB: movq qword ptr [eax], mm4 */
    void_lift_trap(0x1720E7EEu, "pfmul mm5, mm1");
    void_lift_trap(0x1720E7F2u, "pfadd mm6, mm7");
    void_lift_trap(0x1720E7F6u, "pfsub mm5, mm3");
    void_lift_trap(0x1720E7FAu, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x1720E7FE: movq qword ptr [eax + 8], mm6 */
    void_lift_trap(0x1720E802u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1720E804: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1720E80C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E80Cu);

L_1720E80C:
    edx = MEM32(esp + 0x8); /* 0x1720E80C: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x1720E810: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x1720E813: movq mm2, qword ptr [edx + 8] */
    _mm[1] = _mm[0]; /* 0x1720E817: movq mm1, mm0 */
    void_lift_trap(0x1720E81Au, "pfmul mm0, mm0");
    _mm[3] = _mm[2]; /* 0x1720E81E: movq mm3, mm2 */
    void_lift_trap(0x1720E821u, "pfmul mm2, mm2");
    void_lift_trap(0x1720E825u, "pfadd mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x1720E829: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720E82Du, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x1720E831: movq mm5, mm0 */
    void_lift_trap(0x1720E834u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x1720E838u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[2] = _mm[4]; /* 0x1720E840: movq mm2, mm4 */
    void_lift_trap(0x1720E843u, "pfmul mm2, mm4");
    void_lift_trap(0x1720E847u, "pfrsqit1 mm0, mm2");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x1720E84B: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x1720E84E: pand mm3, mm5 */
    void_lift_trap(0x1720E851u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720E855u, "pfmul mm1, mm0");
    void_lift_trap(0x1720E859u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x1720E85D: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720E860: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x1720E864u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720E866: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720E86E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E86Eu);

L_1720E86E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1720E86E: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0xC); /* 0x1720E871: mov ecx, dword ptr [esp + 0xc] */
    edx = MEM32(esp + 0x10); /* 0x1720E875: mov edx, dword ptr [esp + 0x10] */
    _mm[5] = MEM64(ecx); /* 0x1720E879: movq mm5, qword ptr [ecx] */
    _mm[0] = MEM64(ecx + 0x8); /* 0x1720E87C: movq mm0, qword ptr [ecx + 8] */
    /* test edx, edx */ /* 0x1720E880: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x14); /* 0x1720E882: mov ecx, dword ptr [esp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720E88F; /* 0x1720E886: je 0x1720e88f */
L_1720E888:
    MEM64(edx) = _mm[5]; /* 0x1720E888: movq qword ptr [edx], mm5 */
    MEM32(edx + 0x8) = (uint32_t)_mm[0]; /* 0x1720E88B: movd dword ptr [edx + 8], mm0 */
L_1720E88F:
    /* test ecx, ecx */ /* 0x1720E88F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720E891: punpckhdq mm0, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720E8AA; /* 0x1720E894: je 0x1720e8aa */
L_1720E896:
    RECOMP_CALL(sub_172161C0); /* 0x1720E896: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x14); /* 0x1720E89B: mov ecx, dword ptr [esp + 0x14] */
    void_lift_trap(0x1720E89Fu, "pfmul mm0, qword ptr [0x1702a570]");
    MEM32(ecx) = (uint32_t)_mm[0]; /* 0x1720E8A7: movd dword ptr [ecx], mm0 */
L_1720E8AA:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1720E8AA: add esp, 8 */
    _flag_k = FK_ADD;
    void_lift_trap(0x1720E8ADu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1720E8AF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1720E8B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720E8B7u);

L_1720E8B7:
    edx = MEM32(esp + 0x8); /* 0x1720E8B7: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x1720E8BB: movq mm0, qword ptr [edx] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x1720E8BE: pxor mm6, mm6 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x14)); /* 0x1720E8C1: movd mm4, dword ptr [edx + 0x14] */
    _mm[1] = _mm[0]; /* 0x1720E8C5: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x1720E8C8: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x1720E8CB: movq mm3, mm0 */
    void_lift_trap(0x1720E8CEu, "pfadd mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x28)); /* 0x1720E8D2: movd mm5, dword ptr [edx + 0x28] */
    void_lift_trap(0x1720E8D6u, "pfsub mm1, mm4");
    void_lift_trap(0x1720E8DAu, "pfsubr mm2, mm4");
    void_lift_trap(0x1720E8DEu, "pfsubr mm3, mm5");
    void_lift_trap(0x1720E8E2u, "pfadd mm0, mm5");
    void_lift_trap(0x1720E8E6u, "pfsub mm1, mm5");
    void_lift_trap(0x1720E8EAu, "pfsub mm2, mm5");
    _mm[5] = MEM64(edx + 0x20); /* 0x1720E8EE: movq mm5, qword ptr [edx + 0x20] */
    void_lift_trap(0x1720E8F2u, "pfsub mm3, mm4");
    void_lift_trap(0x1720E8F6u, "unsupported PUNPCKLDQ operands");
    _mm[7] = _mm[2]; /* 0x1720E8F9: movq mm7, mm2 */
    void_lift_trap(0x1720E8FCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E8FFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E902u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E905u, "pfcmpge mm6, mm0");
    void_lift_trap(0x1720E909u, "pfcmpge mm7, mm3");
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x1720E90D: packssdw mm6, mm7 */
    _mm[6] = mmx_packsswb(_mm[6], _mm[6]); /* 0x1720E910: packsswb mm6, mm6 */
    ecx = (uint32_t)_mm[6]; /* 0x1720E913: movd ecx, mm6 */
    /* test ecx, 1 */ /* 0x1720E916: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[6] = _mm[5]; /* 0x1720E91C: movq mm6, mm5 */
    eax = ecx; /* 0x1720E91F: mov eax, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720E988; /* 0x1720E921: jne 0x1720e988 */
L_1720E923:
    void_lift_trap(0x1720E923u, "pfadd mm0, qword ptr [0x1702a558]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x1720E92B: movd mm3, dword ptr [edx + 0x18] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720E92F: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x1720E933u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x1720E937u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E93Au, "unsupported PUNPCKLDQ operands");
    _mm[2] = _mm[4]; /* 0x1720E93D: movq mm2, mm4 */
    void_lift_trap(0x1720E940u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E943u, "pfmul mm4, mm4");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x1720E947: punpckhdq mm5, mm7 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720E94A: movd mm6, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720E94Eu, "pfrsqit1 mm4, mm0");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720E952: punpckhdq mm1, mm1 */
    void_lift_trap(0x1720E955u, "pfsub mm3, mm5");
    void_lift_trap(0x1720E959u, "pfrcpit2 mm4, mm2");
    void_lift_trap(0x1720E95Du, "pfsub mm1, mm6");
    void_lift_trap(0x1720E961u, "pfmul mm4, qword ptr [0x1702a5d0]");
    eax = MEM32(esp + 0x4); /* 0x1720E969: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720E96Du, "pfmul mm0, mm4");
    void_lift_trap(0x1720E971u, "pfmul mm1, mm4");
    void_lift_trap(0x1720E975u, "pfmul mm3, mm4");
    void_lift_trap(0x1720E979u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[3]; /* 0x1720E97C: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x1720E97F: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x1720E983u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720E985: ret 8 */
L_1720E988:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00FF00u);
    eax = eax & 0xFF00FF00u; /* 0x1720E988: and eax, 0xff00ff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFF00FF00u */ /* 0x1720E98D: cmp eax, 0xff00ff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00FF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x4); /* 0x1720E992: mov eax, dword ptr [esp + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1720EA01; /* 0x1720E996: jne 0x1720ea01 */
L_1720E998:
    void_lift_trap(0x1720E998u, "pfadd mm1, qword ptr [0x1702a558]");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1720E9A0: punpckhdq mm2, mm2 */
    void_lift_trap(0x1720E9A3u, "pfrsqrt mm4, mm1");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720E9A7: movd mm3, dword ptr [edx + 0x10] */
    _mm[0] = _mm[4]; /* 0x1720E9AB: movq mm0, mm4 */
    void_lift_trap(0x1720E9AEu, "pfmul mm4, mm4");
    void_lift_trap(0x1720E9B2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E9B5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E9B9u, "pfsub mm3, mm2");
    void_lift_trap(0x1720E9BDu, "pfrsqit1 mm4, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720E9C1: movd mm7, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720E9C5: punpckhdq mm6, mm6 */
    void_lift_trap(0x1720E9C8u, "pfrcpit2 mm4, mm0");
    void_lift_trap(0x1720E9CCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720E9CFu, "pfmul mm4, qword ptr [0x1702a5d0]");
    _mm[7] = (_mm[7] ^ MEM64(0x1702A588)); /* 0x1720E9D7: pxor mm7, qword ptr [0x1702a588] */
    void_lift_trap(0x1720E9DEu, "pfmul mm1, mm4");
    void_lift_trap(0x1720E9E2u, "pfadd mm5, mm7");
    void_lift_trap(0x1720E9E6u, "pfmul mm3, mm4");
    eax = MEM32(esp + 0x4); /* 0x1720E9EA: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720E9EEu, "pfmul mm5, mm4");
    void_lift_trap(0x1720E9F2u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[5]; /* 0x1720E9F5: movq qword ptr [eax + 8], mm5 */
    MEM64(eax) = _mm[1]; /* 0x1720E9F9: movq qword ptr [eax], mm1 */
    void_lift_trap(0x1720E9FCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720E9FE: ret 8 */
L_1720EA01:
    /* test ecx, 0x00010000u */ /* 0x1720EA01: test ecx, 0x10000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x4); /* 0x1720EA07: mov eax, dword ptr [esp + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720EA75; /* 0x1720EA0B: je 0x1720ea75 */
L_1720EA0D:
    void_lift_trap(0x1720EA0Du, "pfadd mm2, qword ptr [0x1702a558]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720EA15: punpckhdq mm1, mm1 */
    _mm[6] = _mm[5]; /* 0x1720EA18: movq mm6, mm5 */
    void_lift_trap(0x1720EA1Bu, "pfrsqrt mm4, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x1720EA1F: movd mm3, dword ptr [edx + 0x18] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720EA23: punpckhdq mm6, mm6 */
    _mm[0] = _mm[4]; /* 0x1720EA26: movq mm0, mm4 */
    void_lift_trap(0x1720EA29u, "pfmul mm4, mm4");
    void_lift_trap(0x1720EA2Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA30u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA34u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA37u, "pfrsqit1 mm4, mm2");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720EA3B: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720EA3Fu, "pfrcpit2 mm4, mm0");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A588)); /* 0x1720EA43: pxor mm6, qword ptr [0x1702a588] */
    void_lift_trap(0x1720EA4Au, "pfadd mm1, mm7");
    void_lift_trap(0x1720EA4Eu, "pfmul mm4, qword ptr [0x1702a5d0]");
    void_lift_trap(0x1720EA56u, "pfadd mm3, mm6");
    void_lift_trap(0x1720EA5Au, "pfmul mm1, mm4");
    void_lift_trap(0x1720EA5Eu, "pfmul mm2, mm4");
    void_lift_trap(0x1720EA62u, "pfmul mm3, mm4");
    void_lift_trap(0x1720EA66u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720EA69: movq qword ptr [eax + 8], mm3 */
    MEM64(eax) = _mm[1]; /* 0x1720EA6D: movq qword ptr [eax], mm1 */
    void_lift_trap(0x1720EA70u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720EA72: ret 8 */
L_1720EA75:
    void_lift_trap(0x1720EA75u, "pfadd mm3, qword ptr [0x1702a558]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720EA7D: punpckhdq mm1, mm1 */
    void_lift_trap(0x1720EA80u, "pfrsqrt mm2, mm3");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720EA84: movd mm4, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720EA88: punpckhdq mm6, mm6 */
    _mm[0] = _mm[2]; /* 0x1720EA8B: movq mm0, mm2 */
    void_lift_trap(0x1720EA8Eu, "pfmul mm2, mm2");
    void_lift_trap(0x1720EA92u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA95u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA99u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EA9Cu, "pfrsqit1 mm2, mm3");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720EAA0: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720EAA4u, "pfrcpit2 mm2, mm0");
    void_lift_trap(0x1720EAA8u, "pfsub mm1, mm7");
    void_lift_trap(0x1720EAACu, "pfadd mm5, mm4");
    void_lift_trap(0x1720EAB0u, "pfmul mm2, qword ptr [0x1702a5d0]");
    void_lift_trap(0x1720EAB8u, "pfmul mm3, mm2");
    void_lift_trap(0x1720EABCu, "pfmul mm1, mm2");
    void_lift_trap(0x1720EAC0u, "pfmul mm5, mm2");
    void_lift_trap(0x1720EAC4u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[5]; /* 0x1720EAC7: movq qword ptr [eax], mm5 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720EACA: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x1720EACEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720EAD0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720EAD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720EAD8u);

L_1720EAD8:
    edx = MEM32(esp + 0x8); /* 0x1720EAD8: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x1720EADC: movq mm0, qword ptr [edx] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x1720EADF: pxor mm6, mm6 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x14)); /* 0x1720EAE2: movd mm4, dword ptr [edx + 0x14] */
    _mm[1] = _mm[0]; /* 0x1720EAE6: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x1720EAE9: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x1720EAEC: movq mm3, mm0 */
    void_lift_trap(0x1720EAEFu, "pfadd mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x28)); /* 0x1720EAF3: movd mm5, dword ptr [edx + 0x28] */
    void_lift_trap(0x1720EAF7u, "pfsub mm1, mm4");
    void_lift_trap(0x1720EAFBu, "pfsubr mm2, mm4");
    void_lift_trap(0x1720EAFFu, "pfsubr mm3, mm5");
    void_lift_trap(0x1720EB03u, "pfadd mm0, mm5");
    void_lift_trap(0x1720EB07u, "pfsub mm1, mm5");
    void_lift_trap(0x1720EB0Bu, "pfsub mm2, mm5");
    _mm[5] = MEM64(edx + 0x20); /* 0x1720EB0F: movq mm5, qword ptr [edx + 0x20] */
    void_lift_trap(0x1720EB13u, "pfsub mm3, mm4");
    void_lift_trap(0x1720EB17u, "unsupported PUNPCKLDQ operands");
    _mm[7] = _mm[2]; /* 0x1720EB1A: movq mm7, mm2 */
    void_lift_trap(0x1720EB1Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EB20u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EB23u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EB26u, "pfcmpge mm6, mm0");
    void_lift_trap(0x1720EB2Au, "pfcmpge mm7, mm3");
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x1720EB2E: packssdw mm6, mm7 */
    void_lift_trap(0x1720EB31u, "pmovmskb ecx, mm6");
    /* test ecx, 1 */ /* 0x1720EB34: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[6] = _mm[5]; /* 0x1720EB3A: movq mm6, mm5 */
    eax = ecx; /* 0x1720EB3D: mov eax, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720EBA6; /* 0x1720EB3F: jne 0x1720eba6 */
L_1720EB41:
    void_lift_trap(0x1720EB41u, "pfadd mm0, qword ptr [0x1702a558]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x1720EB49: movd mm3, dword ptr [edx + 0x18] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720EB4D: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x1720EB51u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x1720EB55u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EB58u, "unsupported PUNPCKLDQ operands");
    _mm[2] = _mm[4]; /* 0x1720EB5B: movq mm2, mm4 */
    void_lift_trap(0x1720EB5Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EB61u, "pfmul mm4, mm4");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x1720EB65: punpckhdq mm5, mm7 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720EB68: movd mm6, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720EB6Cu, "pfrsqit1 mm4, mm0");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720EB70: punpckhdq mm1, mm1 */
    void_lift_trap(0x1720EB73u, "pfsub mm3, mm5");
    void_lift_trap(0x1720EB77u, "pfrcpit2 mm4, mm2");
    void_lift_trap(0x1720EB7Bu, "pfsub mm1, mm6");
    void_lift_trap(0x1720EB7Fu, "pfmul mm4, qword ptr [0x1702a5d0]");
    eax = MEM32(esp + 0x4); /* 0x1720EB87: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720EB8Bu, "pfmul mm0, mm4");
    void_lift_trap(0x1720EB8Fu, "pfmul mm1, mm4");
    void_lift_trap(0x1720EB93u, "pfmul mm3, mm4");
    void_lift_trap(0x1720EB97u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[3]; /* 0x1720EB9A: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x1720EB9D: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x1720EBA1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720EBA3: ret 8 */
L_1720EBA6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    eax = eax & 0xCCu; /* 0x1720EBA6: and eax, 0xcc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xCCu */ /* 0x1720EBAB: cmp eax, 0xcc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1720EC1B; /* 0x1720EBB0: jne 0x1720ec1b */
L_1720EBB2:
    void_lift_trap(0x1720EBB2u, "pfadd mm1, qword ptr [0x1702a558]");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1720EBBA: punpckhdq mm2, mm2 */
    void_lift_trap(0x1720EBBDu, "pfrsqrt mm4, mm1");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720EBC1: movd mm3, dword ptr [edx + 0x10] */
    _mm[0] = _mm[4]; /* 0x1720EBC5: movq mm0, mm4 */
    void_lift_trap(0x1720EBC8u, "pfmul mm4, mm4");
    void_lift_trap(0x1720EBCCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EBCFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EBD3u, "pfsub mm3, mm2");
    void_lift_trap(0x1720EBD7u, "pfrsqit1 mm4, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720EBDB: movd mm7, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720EBDF: punpckhdq mm6, mm6 */
    void_lift_trap(0x1720EBE2u, "pfrcpit2 mm4, mm0");
    void_lift_trap(0x1720EBE6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EBE9u, "pfmul mm4, qword ptr [0x1702a5d0]");
    _mm[7] = (_mm[7] ^ MEM64(0x1702A588)); /* 0x1720EBF1: pxor mm7, qword ptr [0x1702a588] */
    void_lift_trap(0x1720EBF8u, "pfmul mm1, mm4");
    void_lift_trap(0x1720EBFCu, "pfadd mm5, mm7");
    void_lift_trap(0x1720EC00u, "pfmul mm3, mm4");
    eax = MEM32(esp + 0x4); /* 0x1720EC04: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720EC08u, "pfmul mm5, mm4");
    void_lift_trap(0x1720EC0Cu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[5]; /* 0x1720EC0F: movq qword ptr [eax + 8], mm5 */
    MEM64(eax) = _mm[1]; /* 0x1720EC13: movq qword ptr [eax], mm1 */
    void_lift_trap(0x1720EC16u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720EC18: ret 8 */
L_1720EC1B:
    /* test ecx, 0x10u */ /* 0x1720EC1B: test ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x4); /* 0x1720EC21: mov eax, dword ptr [esp + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720EC8F; /* 0x1720EC25: je 0x1720ec8f */
L_1720EC27:
    void_lift_trap(0x1720EC27u, "pfadd mm2, qword ptr [0x1702a558]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720EC2F: punpckhdq mm1, mm1 */
    _mm[6] = _mm[5]; /* 0x1720EC32: movq mm6, mm5 */
    void_lift_trap(0x1720EC35u, "pfrsqrt mm4, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x18)); /* 0x1720EC39: movd mm3, dword ptr [edx + 0x18] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720EC3D: punpckhdq mm6, mm6 */
    _mm[0] = _mm[4]; /* 0x1720EC40: movq mm0, mm4 */
    void_lift_trap(0x1720EC43u, "pfmul mm4, mm4");
    void_lift_trap(0x1720EC47u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EC4Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EC4Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EC51u, "pfrsqit1 mm4, mm2");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720EC55: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720EC59u, "pfrcpit2 mm4, mm0");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A588)); /* 0x1720EC5D: pxor mm6, qword ptr [0x1702a588] */
    void_lift_trap(0x1720EC64u, "pfadd mm1, mm7");
    void_lift_trap(0x1720EC68u, "pfmul mm4, qword ptr [0x1702a5d0]");
    void_lift_trap(0x1720EC70u, "pfadd mm3, mm6");
    void_lift_trap(0x1720EC74u, "pfmul mm1, mm4");
    void_lift_trap(0x1720EC78u, "pfmul mm2, mm4");
    void_lift_trap(0x1720EC7Cu, "pfmul mm3, mm4");
    void_lift_trap(0x1720EC80u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720EC83: movq qword ptr [eax + 8], mm3 */
    MEM64(eax) = _mm[1]; /* 0x1720EC87: movq qword ptr [eax], mm1 */
    void_lift_trap(0x1720EC8Au, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720EC8C: ret 8 */
L_1720EC8F:
    void_lift_trap(0x1720EC8Fu, "pfadd mm3, qword ptr [0x1702a558]");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720EC97: punpckhdq mm1, mm1 */
    void_lift_trap(0x1720EC9Au, "pfrsqrt mm2, mm3");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720EC9E: movd mm4, dword ptr [edx + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720ECA2: punpckhdq mm6, mm6 */
    _mm[0] = _mm[2]; /* 0x1720ECA5: movq mm0, mm2 */
    void_lift_trap(0x1720ECA8u, "pfmul mm2, mm2");
    void_lift_trap(0x1720ECACu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720ECAFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720ECB3u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720ECB6u, "pfrsqit1 mm2, mm3");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x10)); /* 0x1720ECBA: movd mm7, dword ptr [edx + 0x10] */
    void_lift_trap(0x1720ECBEu, "pfrcpit2 mm2, mm0");
    void_lift_trap(0x1720ECC2u, "pfsub mm1, mm7");
    void_lift_trap(0x1720ECC6u, "pfadd mm5, mm4");
    void_lift_trap(0x1720ECCAu, "pfmul mm2, qword ptr [0x1702a5d0]");
    void_lift_trap(0x1720ECD2u, "pfmul mm3, mm2");
    void_lift_trap(0x1720ECD6u, "pfmul mm1, mm2");
    void_lift_trap(0x1720ECDAu, "pfmul mm5, mm2");
    void_lift_trap(0x1720ECDEu, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[5]; /* 0x1720ECE1: movq qword ptr [eax], mm5 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720ECE4: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x1720ECE8u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720ECEA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720ECF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720ECF2u);

L_1720ECF2:
    void_lift_trap(0x1720ECF2u, "femms ");
    _mm[0] = MEM64(0x1702A5F8); /* 0x1720ECF4: movq mm0, qword ptr [0x1702a5f8] */
    PUSH32(esp, ebx); /* 0x1720ECFB: push ebx */
    PUSH32(esp, esi); /* 0x1720ECFC: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1720ECFD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _mm[1] = _mm[0]; /* 0x1720ED00: movq mm1, mm0 */
    void_lift_trap(0x1720ED03u, "pfmul mm0, qword ptr [esp + 0x30]");
    void_lift_trap(0x1720ED09u, "pfmul mm1, qword ptr [esp + 0x28]");
    MEM64(esp + 0x10) = _mm[1]; /* 0x1720ED0F: movq qword ptr [esp + 0x10], mm1 */
    RECOMP_CALL(sub_172167A0); /* 0x1720ED14: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp) = _mm[0]; /* 0x1720ED19: movq qword ptr [esp], mm0 */
    _mm[0] = MEM64(esp + 0x10); /* 0x1720ED1D: movq mm0, qword ptr [esp + 0x10] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720ED22: punpckhdq mm0, mm0 */
    RECOMP_CALL(sub_172167A0); /* 0x1720ED25: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x8) = _mm[0]; /* 0x1720ED2A: movq qword ptr [esp + 8], mm0 */
    _mm[0] = MEM64(esp + 0x10); /* 0x1720ED2F: movq mm0, qword ptr [esp + 0x10] */
    RECOMP_CALL(sub_172167A0); /* 0x1720ED34: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = MEM64(esp); /* 0x1720ED39: movq mm1, qword ptr [esp] */
    _mm[2] = MEM64(esp + 0x8); /* 0x1720ED3D: movq mm2, qword ptr [esp + 8] */
    eax = MEM32(esp + 0x24); /* 0x1720ED42: mov eax, dword ptr [esp + 0x24] */
    _mm[7] = MEM64(0x1702A5E8); /* 0x1720ED46: movq mm7, qword ptr [0x1702a5e8] */
    _mm[3] = _mm[0]; /* 0x1720ED4D: movq mm3, mm0 */
    _mm[4] = _mm[0]; /* 0x1720ED50: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x1720ED53: movq mm5, mm0 */
    void_lift_trap(0x1720ED56u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720ED59u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x1720ED5C: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x1720ED5F: punpckhdq mm5, mm5 */
    _mm[0] = (_mm[0] ^ _mm[7]); /* 0x1720ED62: pxor mm0, mm7 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x1720ED65: psrlq mm7, 0x20 */
    _mm[6] = _mm[2]; /* 0x1720ED69: movq mm6, mm2 */
    void_lift_trap(0x1720ED6Cu, "unsupported PUNPCKLDQ operands");
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720ED6F: punpckhdq mm6, mm6 */
    _mm[5] = (_mm[5] ^ _mm[7]); /* 0x1720ED72: pxor mm5, mm7 */
    void_lift_trap(0x1720ED75u, "pfmul mm0, mm6");
    void_lift_trap(0x1720ED79u, "pfmul mm3, mm2");
    void_lift_trap(0x1720ED7Du, "pfmul mm4, mm2");
    void_lift_trap(0x1720ED81u, "pfmul mm5, mm6");
    _mm[7] = _mm[1]; /* 0x1720ED85: movq mm7, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x1720ED88: punpckhdq mm7, mm7 */
    void_lift_trap(0x1720ED8Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720ED8Eu, "pfmul mm0, mm1");
    void_lift_trap(0x1720ED92u, "pfmul mm3, mm7");
    void_lift_trap(0x1720ED96u, "pfmul mm4, mm7");
    void_lift_trap(0x1720ED9Au, "pfmul mm5, mm1");
    void_lift_trap(0x1720ED9Eu, "pfadd mm0, mm4");
    void_lift_trap(0x1720EDA2u, "pfadd mm3, mm5");
    MEM64(eax) = _mm[0]; /* 0x1720EDA6: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720EDA9: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x1720EDADu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1720EDAF: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1720EDB2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1720EDB3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1720EDB4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1720EDBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720EDBCu);

L_1720EDBC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1720EDBC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebx; /* 0x1720EDBF: mov dword ptr [esp + 0x10], ebx */
    MEM32(esp + 0xC) = esi; /* 0x1720EDC3: mov dword ptr [esp + 0xc], esi */
    MEM32(esp + 0x14) = ebp; /* 0x1720EDC7: mov dword ptr [esp + 0x14], ebp */
    ebp = esp; /* 0x1720EDCB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1720EDCD: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esp; /* 0x1720EDD0: mov edx, esp */
    void_lift_trap(0x1720EDD2u, "femms ");
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1720EDD4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x1720EDD7: push edx */
    RECOMP_CALL(sub_17213C2C); /* 0x1720EDD8: call 0x17213c2c */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x24)); /* 0x1720EDDD: movd mm0, dword ptr [ebp + 0x24] */
    void_lift_trap(0x1720EDE1u, "pfmul mm0, qword ptr [0x1702a5f8]");
    RECOMP_CALL(sub_172167A0); /* 0x1720EDE9: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x1C); /* 0x1720EDEE: mov eax, dword ptr [ebp + 0x1c] */
    _mm[1] = MEM64(esp); /* 0x1720EDF1: movq mm1, qword ptr [esp] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x1720EDF5: movd mm2, dword ptr [esp + 8] */
    _mm[3] = _mm[0]; /* 0x1720EDFA: movq mm3, mm0 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720EDFD: punpckhdq mm3, mm3 */
    void_lift_trap(0x1720EE00u, "pfmul mm1, mm3");
    void_lift_trap(0x1720EE04u, "pfmul mm2, mm3");
    void_lift_trap(0x1720EE08u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[1]; /* 0x1720EE0B: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x1720EE0E: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x1720EE12u, "femms ");
    esp = ebp; /* 0x1720EE14: mov esp, ebp */
    ebx = MEM32(esp + 0x10); /* 0x1720EE16: mov ebx, dword ptr [esp + 0x10] */
    esi = MEM32(esp + 0xC); /* 0x1720EE1A: mov esi, dword ptr [esp + 0xc] */
    ebp = MEM32(esp + 0x14); /* 0x1720EE1E: mov ebp, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1720EE22: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1720EE25: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1720EE2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720EE2Du);

L_1720EE2D:
    void_lift_trap(0x1720EE2Du, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1720EE2F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0x20); /* 0x1720EE32: mov ecx, dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x24); /* 0x1720EE36: mov edx, dword ptr [esp + 0x24] */
    MEM32(esp + 0x14) = ebx; /* 0x1720EE3A: mov dword ptr [esp + 0x14], ebx */
    MEM32(esp + 0x10) = esi; /* 0x1720EE3E: mov dword ptr [esp + 0x10], esi */
    _mm[0] = (uint64_t)(uint32_t)(MEM32(0x1702A5F0)); /* 0x1720EE42: movd mm0, dword ptr [0x1702a5f0] */
    _mm[1] = MEM64(ecx); /* 0x1720EE49: movq mm1, qword ptr [ecx] */
    void_lift_trap(0x1720EE4Cu, "pfmul mm1, qword ptr [edx]");
    _mm[2] = MEM64(ecx + 0x8); /* 0x1720EE50: movq mm2, qword ptr [ecx + 8] */
    void_lift_trap(0x1720EE54u, "pfmul mm2, qword ptr [edx + 8]");
    void_lift_trap(0x1720EE59u, "pfadd mm1, mm2");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x1720EE5D: pxor mm7, mm7 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x1720EE60: movd mm4, dword ptr [esp + 0x28] */
    void_lift_trap(0x1720EE65u, "pfsub mm0, mm4");
    void_lift_trap(0x1720EE69u, "pfacc mm1, mm1");
    void_lift_trap(0x1720EE6Du, "pfcmpge mm7, mm1");
    _mm[6] = MEM64(0x1702A650); /* 0x1720EE71: movq mm6, qword ptr [0x1702a650] */
    _mm[7] = (_mm[7] & MEM64(0x1702A638)); /* 0x1720EE78: pand mm7, qword ptr [0x1702a638] */
    _mm[1] = (_mm[1] ^ _mm[7]); /* 0x1720EE7F: pxor mm1, mm7 */
    void_lift_trap(0x1720EE82u, "pfcmpge mm6, mm1");
    eax = (uint32_t)_mm[6]; /* 0x1720EE86: movd eax, mm6 */
    _mm[3] = _mm[1]; /* 0x1720EE89: movq mm3, mm1 */
    void_lift_trap(0x1720EE8Cu, "pfmul mm3, mm3");
    void_lift_trap(0x1720EE90u, "pfsubr mm3, qword ptr [0x1702a5f0]");
    /* test eax, eax */ /* 0x1720EE98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720EF18; /* 0x1720EE9A: je 0x1720ef18 */
L_1720EE9C:
    void_lift_trap(0x1720EE9Cu, "pfrsqrt mm4, mm3");
    _mm[2] = _mm[4]; /* 0x1720EEA0: movq mm2, mm4 */
    MEM32(esp + 0xC) = (uint32_t)_mm[7]; /* 0x1720EEA3: movd dword ptr [esp + 0xc], mm7 */
    void_lift_trap(0x1720EEA8u, "pfmul mm2, mm4");
    void_lift_trap(0x1720EEACu, "pfrsqit1 mm3, mm2");
    void_lift_trap(0x1720EEB0u, "pfrcpit2 mm3, mm4");
    void_lift_trap(0x1720EEB4u, "pfrcp mm2, mm3");
    _mm[4] = _mm[3]; /* 0x1720EEB8: movq mm4, mm3 */
    void_lift_trap(0x1720EEBBu, "pfrcpit1 mm4, mm2");
    void_lift_trap(0x1720EEBFu, "pfrcpit2 mm4, mm2");
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720EEC3: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = (uint32_t)_mm[3]; /* 0x1720EEC7: movd dword ptr [esp + 4], mm3 */
    _mm[0] = _mm[1]; /* 0x1720EECC: movq mm0, mm1 */
    _mm[1] = _mm[4]; /* 0x1720EECF: movq mm1, mm4 */
    RECOMP_CALL(sub_172160C0); /* 0x1720EED2: call 0x172160c0 */
    RECOMP_FLAGS_IN();
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x1720EED7: movd mm1, dword ptr [esp + 0x28] */
    MEM32(esp + 0x8) = (uint32_t)_mm[0]; /* 0x1720EEDC: movd dword ptr [esp + 8], mm0 */
    void_lift_trap(0x1720EEE1u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_172168A0); /* 0x1720EEE5: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = (uint32_t)_mm[0]; /* 0x1720EEEA: movd dword ptr [esp + 0x28], mm0 */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720EEEF: movd mm1, dword ptr [esp] */
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x1720EEF3: movd mm0, dword ptr [esp + 8] */
    void_lift_trap(0x1720EEF8u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_172168A0); /* 0x1720EEFC: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x28)); /* 0x1720EF01: movd mm4, dword ptr [esp + 0x28] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x4)); /* 0x1720EF06: movd mm1, dword ptr [esp + 4] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x1720EF0B: movd mm7, dword ptr [esp + 0xc] */
    void_lift_trap(0x1720EF10u, "pfmul mm0, mm1");
    void_lift_trap(0x1720EF14u, "pfmul mm4, mm1");
L_1720EF18:
    ecx = MEM32(esp + 0x20); /* 0x1720EF18: mov ecx, dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x24); /* 0x1720EF1C: mov edx, dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x1C); /* 0x1720EF20: mov eax, dword ptr [esp + 0x1c] */
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x1720EF24: pxor mm4, mm7 */
    void_lift_trap(0x1720EF27u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720EF2Au, "unsupported PUNPCKLDQ operands");
    _mm[5] = _mm[0]; /* 0x1720EF2D: movq mm5, mm0 */
    _mm[6] = _mm[4]; /* 0x1720EF30: movq mm6, mm4 */
    void_lift_trap(0x1720EF33u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x1720EF37u, "pfmul mm4, qword ptr [edx]");
    void_lift_trap(0x1720EF3Bu, "pfmul mm5, qword ptr [ecx + 8]");
    void_lift_trap(0x1720EF40u, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x1720EF45u, "pfadd mm0, mm4");
    void_lift_trap(0x1720EF49u, "pfadd mm5, mm6");
    MEM64(eax) = _mm[0]; /* 0x1720EF4D: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x1720EF50: movq qword ptr [eax + 8], mm5 */
    void_lift_trap(0x1720EF54u, "femms ");
    ebx = MEM32(esp + 0x14); /* 0x1720EF56: mov ebx, dword ptr [esp + 0x14] */
    esi = MEM32(esp + 0x10); /* 0x1720EF5A: mov esi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1720EF5E: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1720EF61: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1720EF69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720EF69u);

L_1720EF69:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1720EF69: sub esp, 0x24 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x20) = ebp; /* 0x1720EF6C: mov dword ptr [esp + 0x20], ebp */
    ebp = esp; /* 0x1720EF70: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1720EF72: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esp; /* 0x1720EF75: mov edx, esp */
    void_lift_trap(0x1720EF77u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x38)); /* 0x1720EF79: movd mm0, dword ptr [ebp + 0x38] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(ebp + 0x3C)); /* 0x1720EF7D: movd mm1, dword ptr [ebp + 0x3c] */
    void_lift_trap(0x1720EF81u, "pfadd mm0, mm1");
    MEM32(ebp + 0x38) = (uint32_t)_mm[0]; /* 0x1720EF85: movd dword ptr [ebp + 0x38], mm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x1720EF89: sub esp, 4 */
    _flag_k = FK_CMP;
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720EF8C: movd dword ptr [esp], mm0 */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1720EF90: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1720EF93: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, edx); /* 0x1720EF96: push edx */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720EF97: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    edx = esp + 0x10; /* 0x1720EF9C: lea edx, [esp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x1720EFA0: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x1720EFA3: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1720EFA6: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, edx); /* 0x1720EFA9: push edx */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720EFAA: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x38)); /* 0x1720EFAF: movd mm0, dword ptr [ebp + 0x38] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(ebp + 0x3C)); /* 0x1720EFB3: movd mm1, dword ptr [ebp + 0x3c] */
    edx = esp + 0x10; /* 0x1720EFB7: lea edx, [esp + 0x10] */
    ecx = esp; /* 0x1720EFBB: lea ecx, [esp] */
    void_lift_trap(0x1720EFBEu, "pfrcp mm2, mm0");
    void_lift_trap(0x1720EFC2u, "pfrcpit1 mm0, mm2");
    void_lift_trap(0x1720EFC6u, "pfrcpit2 mm0, mm2");
    void_lift_trap(0x1720EFCAu, "pfmul mm0, mm1");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720EFCE: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = edx; /* 0x1720EFD1: mov dword ptr [esp + 4], edx */
    MEM32(esp) = ecx; /* 0x1720EFD5: mov dword ptr [esp], ecx */
    MEM32(esp + 0x8) = (uint32_t)_mm[0]; /* 0x1720EFD8: movd dword ptr [esp + 8], mm0 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1720EFDD: push dword ptr [ebp + 0x28] */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720EFE0: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x28); /* 0x1720EFE5: mov eax, dword ptr [ebp + 0x28] */
    void_lift_trap(0x1720EFE8u, "femms ");
    esp = ebp; /* 0x1720EFEA: mov esp, ebp */
    ebp = MEM32(esp + 0x20); /* 0x1720EFEC: mov ebp, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1720EFF0: add esp, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720EFF3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720EFFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720EFFBu);

L_1720EFFB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1720EFFB: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x48); /* 0x1720EFFE: mov eax, dword ptr [esp + 0x48] */
    edx = MEM32(esp + 0x44); /* 0x1720F002: mov edx, dword ptr [esp + 0x44] */
    ecx = MEM32(esp + 0x38); /* 0x1720F006: mov ecx, dword ptr [esp + 0x38] */
    MEM32(esp + 0xC) = eax; /* 0x1720F00A: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0x10; /* 0x1720F00E: lea eax, [esp + 0x10] */
    MEM32(esp + 0x8) = edx; /* 0x1720F012: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x1720F016: mov dword ptr [esp + 4], ecx */
    MEM32(esp) = eax; /* 0x1720F01A: mov dword ptr [esp], eax */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720F01D: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1720F022: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x48); /* 0x1720F025: mov eax, dword ptr [esp + 0x48] */
    edx = MEM32(esp + 0x40); /* 0x1720F029: mov edx, dword ptr [esp + 0x40] */
    ecx = MEM32(esp + 0x3C); /* 0x1720F02D: mov ecx, dword ptr [esp + 0x3c] */
    MEM32(esp + 0xC) = eax; /* 0x1720F031: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0x20; /* 0x1720F035: lea eax, [esp + 0x20] */
    MEM32(esp + 0x8) = edx; /* 0x1720F039: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x1720F03D: mov dword ptr [esp + 4], ecx */
    MEM32(esp) = eax; /* 0x1720F041: mov dword ptr [esp], eax */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720F044: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1720F049: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x48)); /* 0x1720F04C: movd mm0, dword ptr [esp + 0x48] */
    eax = MEM32(esp + 0x34); /* 0x1720F051: mov eax, dword ptr [esp + 0x34] */
    _mm[1] = _mm[0]; /* 0x1720F055: movq mm1, mm0 */
    edx = esp + 0x20; /* 0x1720F058: lea edx, [esp + 0x20] */
    void_lift_trap(0x1720F05Cu, "pfmul mm0, mm0");
    ecx = esp + 0x10; /* 0x1720F060: lea ecx, [esp + 0x10] */
    void_lift_trap(0x1720F064u, "pfsub mm1, mm0");
    MEM32(esp) = eax; /* 0x1720F068: mov dword ptr [esp], eax */
    MEM32(esp + 0x8) = edx; /* 0x1720F06B: mov dword ptr [esp + 8], edx */
    MEM32(esp + 0x4) = ecx; /* 0x1720F06F: mov dword ptr [esp + 4], ecx */
    void_lift_trap(0x1720F073u, "pfmul mm1, qword ptr [0x1702a570]");
    MEM32(esp + 0xC) = (uint32_t)_mm[1]; /* 0x1720F07B: movd dword ptr [esp + 0xc], mm1 */
    RECOMP_CALL(sub_1720EE2D); /* 0x1720F080: call 0x1720ee2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1720F085: add esp, 0x20 */
    _flag_k = FK_ADD;
    void_lift_trap(0x1720F088u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1720F08A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1720F092(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720F092u);

L_1720F092:
    edx = MEM32(esp + 0x8); /* 0x1720F092: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x1720F096: movq mm0, qword ptr [edx] */
    _mm[1] = _mm[0]; /* 0x1720F099: movq mm1, mm0 */
    _mm[2] = MEM64(edx + 0x8); /* 0x1720F09C: movq mm2, qword ptr [edx + 8] */
    _mm[3] = _mm[2]; /* 0x1720F0A0: movq mm3, mm2 */
    void_lift_trap(0x1720F0A3u, "pfmul mm0, mm0");
    void_lift_trap(0x1720F0A7u, "pfmul mm2, mm2");
    void_lift_trap(0x1720F0ABu, "pfadd mm0, mm2");
    void_lift_trap(0x1720F0AFu, "pfacc mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x1720F0B3: mov eax, dword ptr [esp + 4] */
    _mm[5] = _mm[0]; /* 0x1720F0B7: movq mm5, mm0 */
    void_lift_trap(0x1720F0BAu, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F0BEu, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[1] = (_mm[1] ^ MEM64(0x1702A638)); /* 0x1720F0C6: pxor mm1, qword ptr [0x1702a638] */
    _mm[3] = (_mm[3] ^ MEM64(0x1702A580)); /* 0x1720F0CD: pxor mm3, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F0D4u, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x1720F0D8: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x1720F0DB: pand mm3, mm5 */
    void_lift_trap(0x1720F0DEu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F0E2u, "pfmul mm1, mm0");
    void_lift_trap(0x1720F0E6u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x1720F0EA: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720F0ED: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x1720F0F1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720F0F3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720F0FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720F0FBu);

L_1720F0FB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F0FB: sub esp, 0xc */
    _flag_k = FK_CMP;
    void_lift_trap(0x1720F0FEu, "femms ");
    eax = MEM32(esp + 0x10); /* 0x1720F100: mov eax, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x1720F104: mov edx, dword ptr [esp + 0x14] */
    _mm[1] = MEM64(edx); /* 0x1720F108: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x1720F10B: movq mm2, qword ptr [edx + 8] */
    _mm[3] = _mm[2]; /* 0x1720F10F: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720F112: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x1720F115: movq mm0, mm3 */
    void_lift_trap(0x1720F118u, "pfcmpge mm3, qword ptr [0x1702a5f0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F120: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x1720F123: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720F18C; /* 0x1720F125: jne 0x1720f18c */
L_1720F127:
    RECOMP_CALL(sub_172161C0); /* 0x1720F127: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720F12C: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x1720F130: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x1720F134: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_172168A0); /* 0x1720F138: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x1720F13D: movq mm3, mm0 */
    edx = MEM32(esp + 0x14); /* 0x1720F140: mov edx, dword ptr [esp + 0x14] */
    esi = MEM32(esp + 0x4); /* 0x1720F144: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x1702A5A8)); /* 0x1720F148: pand mm3, qword ptr [0x1702a5a8] */
    eax = MEM32(esp + 0x10); /* 0x1720F14F: mov eax, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x8); /* 0x1720F153: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x1720F157u, "pfcmpge mm3, qword ptr [0x1702a5b0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F15F: movd ecx, mm3 */
    _mm[1] = MEM64(edx); /* 0x1720F162: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x1720F165: movq mm2, qword ptr [edx + 8] */
    /* test ecx, ecx */ /* 0x1720F169: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F18C; /* 0x1720F16B: je 0x1720f18c */
L_1720F16D:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720F16D: movd mm3, dword ptr [esp] */
    void_lift_trap(0x1720F171u, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F175u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F178u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x1720F17Cu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F180u, "pfmul mm3, mm0");
    void_lift_trap(0x1720F184u, "pfmul mm1, mm3");
    void_lift_trap(0x1720F188u, "pfmul mm2, mm3");
L_1720F18C:
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x1720F18C: pand mm2, qword ptr [0x1702a5b8] */
    MEM64(eax) = _mm[1]; /* 0x1720F193: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x1720F196: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x1720F19Au, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720F19C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720F19F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720F1A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720F1A7u);

L_1720F1A7:
    edx = MEM32(esp + 0x8); /* 0x1720F1A7: mov edx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F1AB: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(edx); /* 0x1720F1AE: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720F1B1: movd mm1, dword ptr [edx + 8] */
    void_lift_trap(0x1720F1B5u, "pfmul mm0, mm0");
    void_lift_trap(0x1720F1B9u, "pfmul mm1, mm1");
    void_lift_trap(0x1720F1BDu, "pfadd mm0, mm1");
    void_lift_trap(0x1720F1C1u, "pfacc mm0, mm0");
    void_lift_trap(0x1720F1C5u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x1720F1C9: movq mm2, mm1 */
    void_lift_trap(0x1720F1CCu, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x1720F1D0: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x1720F1D4u, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x1720F1D8: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x1720F1DCu, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x1720F1E0: movd dword ptr [esp], mm1 */
    void_lift_trap(0x1720F1E4u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_172167A0); /* 0x1720F1E8: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x1720F1ED: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1702A5A0)); /* 0x1720F1F0: pand mm0, qword ptr [0x1702a5a0] */
    edx = MEM32(esp + 0x14); /* 0x1720F1F7: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x1720F1FBu, "pfcmpge mm0, qword ptr [0x1702a5b0]");
    eax = MEM32(esp + 0x10); /* 0x1720F203: mov eax, dword ptr [esp + 0x10] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720F207: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x1720F20A: movd ecx, mm0 */
    _mm[2] = MEM64(edx); /* 0x1720F20D: movq mm2, qword ptr [edx] */
    _mm[0] = _mm[1]; /* 0x1720F210: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720F213: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x1720F216: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1720F21Cu, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1720F221: movd mm3, dword ptr [edx + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F232; /* 0x1720F225: je 0x1720f232 */
L_1720F227:
    void_lift_trap(0x1720F227u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F22Au, "pfmul mm3, mm1");
    void_lift_trap(0x1720F22Eu, "pfmul mm2, mm1");
L_1720F232:
    void_lift_trap(0x1720F232u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[2]; /* 0x1720F235: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1720F238: movq qword ptr [eax + 8], mm3 */
    esi = MEM32(esp + 0x4); /* 0x1720F23C: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x1720F240: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720F244: add esp, 0xc */
    _flag_k = FK_ADD;
    void_lift_trap(0x1720F247u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1720F249: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1720F251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720F251u);

L_1720F251:
    edi = edi; /* 0x1720F251: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1720F253: push ebp */
    ebp = esp; /* 0x1720F254: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x1720F256: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1720F25C: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x14); /* 0x1720F25F: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x18); /* 0x1720F262: mov ecx, dword ptr [ebp + 0x18] */
    _mm[0] = MEM64(edx); /* 0x1720F265: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x1720F268: movq mm1, qword ptr [edx + 8] */
    _mm[2] = _mm[0]; /* 0x1720F26C: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1720F26F: movq mm3, mm1 */
    MEM64(esp) = _mm[0]; /* 0x1720F272: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[1]; /* 0x1720F276: movq qword ptr [esp + 8], mm1 */
    _mm[4] = MEM64(ecx); /* 0x1720F27B: movq mm4, qword ptr [ecx] */
    _mm[5] = MEM64(ecx + 0x8); /* 0x1720F27E: movq mm5, qword ptr [ecx + 8] */
    MEM64(esp + 0x10) = _mm[4]; /* 0x1720F282: movq qword ptr [esp + 0x10], mm4 */
    void_lift_trap(0x1720F287u, "pfadd mm0, mm4");
    MEM64(esp + 0x18) = _mm[5]; /* 0x1720F28B: movq qword ptr [esp + 0x18], mm5 */
    void_lift_trap(0x1720F290u, "pfadd mm1, mm5");
    void_lift_trap(0x1720F294u, "pfsub mm2, mm4");
    void_lift_trap(0x1720F298u, "pfmul mm0, mm0");
    void_lift_trap(0x1720F29Cu, "pfsub mm3, mm5");
    void_lift_trap(0x1720F2A0u, "pfmul mm1, mm1");
    edx = MEM32(ebp + 0x1C); /* 0x1720F2A4: mov edx, dword ptr [ebp + 0x1c] */
    void_lift_trap(0x1720F2A7u, "pfmul mm2, mm2");
    void_lift_trap(0x1720F2ABu, "pfmul mm3, mm3");
    void_lift_trap(0x1720F2AFu, "pfadd mm0, mm1");
    void_lift_trap(0x1720F2B3u, "pfadd mm2, mm3");
    _mm[6] = MEM64(edx); /* 0x1720F2B7: movq mm6, qword ptr [edx] */
    _mm[7] = MEM64(edx + 0x8); /* 0x1720F2BA: movq mm7, qword ptr [edx + 8] */
    MEM64(esp + 0x20) = _mm[6]; /* 0x1720F2BE: movq qword ptr [esp + 0x20], mm6 */
    MEM64(esp + 0x28) = _mm[7]; /* 0x1720F2C3: movq qword ptr [esp + 0x28], mm7 */
    _mm[1] = _mm[4]; /* 0x1720F2C8: movq mm1, mm4 */
    _mm[3] = _mm[5]; /* 0x1720F2CB: movq mm3, mm5 */
    void_lift_trap(0x1720F2CEu, "pfadd mm4, mm6");
    void_lift_trap(0x1720F2D2u, "pfadd mm5, mm7");
    void_lift_trap(0x1720F2D6u, "pfsub mm1, mm6");
    void_lift_trap(0x1720F2DAu, "pfsub mm3, mm7");
    void_lift_trap(0x1720F2DEu, "pfmul mm4, mm4");
    void_lift_trap(0x1720F2E2u, "pfmul mm5, mm5");
    void_lift_trap(0x1720F2E6u, "pfmul mm1, mm1");
    void_lift_trap(0x1720F2EAu, "pfmul mm3, mm3");
    void_lift_trap(0x1720F2EEu, "pfadd mm4, mm5");
    void_lift_trap(0x1720F2F2u, "pfadd mm1, mm3");
    void_lift_trap(0x1720F2F6u, "pfacc mm0, mm4");
    void_lift_trap(0x1720F2FAu, "pfacc mm2, mm1");
    void_lift_trap(0x1720F2FEu, "pfcmpgt mm2, mm0");
    _mm[2] = mmx_packsswb(_mm[2], _mm[2]); /* 0x1720F302: packsswb mm2, mm2 */
    eax = (uint32_t)_mm[2]; /* 0x1720F305: movd eax, mm2 */
    /* test eax, 1 */ /* 0x1720F308: test eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(0x1702A590); /* 0x1720F30D: movq mm0, qword ptr [0x1702a590] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F32F; /* 0x1720F314: je 0x1720f32f */
L_1720F316:
    edx = MEM32(ebp + 0x14); /* 0x1720F316: mov edx, dword ptr [ebp + 0x14] */
    _mm[1] = _mm[0]; /* 0x1720F319: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x1720F31C: movq mm2, mm0 */
    _mm[1] = (_mm[1] ^ MEM64(edx)); /* 0x1720F31F: pxor mm1, qword ptr [edx] */
    _mm[2] = (_mm[2] ^ MEM64(edx + 0x8)); /* 0x1720F322: pxor mm2, qword ptr [edx + 8] */
    MEM64(esp) = _mm[1]; /* 0x1720F326: movq qword ptr [esp], mm1 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x1720F32A: movq qword ptr [esp + 8], mm2 */
L_1720F32F:
    /* test eax, 0x00010000u */ /* 0x1720F32F: test eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F350; /* 0x1720F334: je 0x1720f350 */
L_1720F336:
    ecx = MEM32(ebp + 0x1C); /* 0x1720F336: mov ecx, dword ptr [ebp + 0x1c] */
    _mm[1] = _mm[0]; /* 0x1720F339: movq mm1, mm0 */
    _mm[2] = _mm[0]; /* 0x1720F33C: movq mm2, mm0 */
    _mm[1] = (_mm[1] ^ MEM64(ecx)); /* 0x1720F33F: pxor mm1, qword ptr [ecx] */
    _mm[2] = (_mm[2] ^ MEM64(ecx + 0x8)); /* 0x1720F342: pxor mm2, qword ptr [ecx + 8] */
    MEM64(esp + 0x20) = _mm[1]; /* 0x1720F346: movq qword ptr [esp + 0x20], mm1 */
    MEM64(esp + 0x28) = _mm[2]; /* 0x1720F34B: movq qword ptr [esp + 0x28], mm2 */
L_1720F350:
    ecx = MEM32(ebp + 0x20); /* 0x1720F350: mov ecx, dword ptr [ebp + 0x20] */
    _mm[6] = MEM64(esp + 0x20); /* 0x1720F353: movq mm6, qword ptr [esp + 0x20] */
    _mm[7] = MEM64(esp + 0x28); /* 0x1720F358: movq mm7, qword ptr [esp + 0x28] */
    _mm[1] = MEM64(ecx); /* 0x1720F35D: movq mm1, qword ptr [ecx] */
    _mm[4] = MEM64(ecx + 0x8); /* 0x1720F360: movq mm4, qword ptr [ecx + 8] */
    _mm[3] = _mm[6]; /* 0x1720F364: movq mm3, mm6 */
    _mm[5] = _mm[7]; /* 0x1720F367: movq mm5, mm7 */
    void_lift_trap(0x1720F36Au, "pfadd mm6, mm1");
    MEM64(esp + 0x30) = _mm[1]; /* 0x1720F36E: movq qword ptr [esp + 0x30], mm1 */
    void_lift_trap(0x1720F373u, "pfadd mm7, mm4");
    MEM64(esp + 0x38) = _mm[4]; /* 0x1720F377: movq qword ptr [esp + 0x38], mm4 */
    void_lift_trap(0x1720F37Cu, "pfsub mm3, mm1");
    void_lift_trap(0x1720F380u, "pfsub mm5, mm4");
    void_lift_trap(0x1720F384u, "pfmul mm6, mm6");
    void_lift_trap(0x1720F388u, "pfmul mm7, mm7");
    void_lift_trap(0x1720F38Cu, "pfmul mm3, mm3");
    void_lift_trap(0x1720F390u, "pfmul mm5, mm5");
    void_lift_trap(0x1720F394u, "pfadd mm6, mm7");
    void_lift_trap(0x1720F398u, "pfadd mm3, mm5");
    void_lift_trap(0x1720F39Cu, "pfacc mm6, mm6");
    void_lift_trap(0x1720F3A0u, "pfacc mm3, mm3");
    void_lift_trap(0x1720F3A4u, "pfcmpgt mm3, mm6");
    eax = (uint32_t)_mm[3]; /* 0x1720F3A8: movd eax, mm3 */
    /* test eax, 1 */ /* 0x1720F3AB: test eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F3C9; /* 0x1720F3B0: je 0x1720f3c9 */
L_1720F3B2:
    edx = MEM32(ebp + 0x20); /* 0x1720F3B2: mov edx, dword ptr [ebp + 0x20] */
    _mm[2] = _mm[0]; /* 0x1720F3B5: movq mm2, mm0 */
    _mm[0] = (_mm[0] ^ MEM64(edx)); /* 0x1720F3B8: pxor mm0, qword ptr [edx] */
    _mm[2] = (_mm[2] ^ MEM64(edx + 0x8)); /* 0x1720F3BB: pxor mm2, qword ptr [edx + 8] */
    MEM64(esp + 0x30) = _mm[0]; /* 0x1720F3BF: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[2]; /* 0x1720F3C4: movq qword ptr [esp + 0x38], mm2 */
L_1720F3C9:
    _mm[0] = MEM64(esp + 0x10); /* 0x1720F3C9: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = _mm[0]; /* 0x1720F3CE: movq mm1, mm0 */
    _mm[2] = MEM64(esp + 0x18); /* 0x1720F3D1: movq mm2, qword ptr [esp + 0x18] */
    _mm[3] = _mm[2]; /* 0x1720F3D6: movq mm3, mm2 */
    void_lift_trap(0x1720F3D9u, "pfmul mm0, mm0");
    void_lift_trap(0x1720F3DDu, "pfmul mm2, mm2");
    void_lift_trap(0x1720F3E1u, "pfadd mm0, mm2");
    void_lift_trap(0x1720F3E5u, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x1720F3E9: movq mm5, mm0 */
    void_lift_trap(0x1720F3ECu, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F3F0u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[1] = (_mm[1] ^ MEM64(0x1702A638)); /* 0x1720F3F8: pxor mm1, qword ptr [0x1702a638] */
    _mm[3] = (_mm[3] ^ MEM64(0x1702A580)); /* 0x1720F3FF: pxor mm3, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F406u, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x1720F40A: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x1720F40D: pand mm3, mm5 */
    void_lift_trap(0x1720F410u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F414u, "pfmul mm1, mm0");
    void_lift_trap(0x1720F418u, "pfmul mm3, mm0");
    MEM64(esp + 0x40) = _mm[1]; /* 0x1720F41C: movq qword ptr [esp + 0x40], mm1 */
    MEM64(esp + 0x48) = _mm[3]; /* 0x1720F421: movq qword ptr [esp + 0x48], mm3 */
    _mm[2] = MEM64(esp); /* 0x1720F426: movq mm2, qword ptr [esp] */
    _mm[3] = MEM64(esp + 0x8); /* 0x1720F42A: movq mm3, qword ptr [esp + 8] */
    _mm[4] = _mm[2]; /* 0x1720F42F: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720F432: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x1720F435: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720F43A: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720F43D: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x1720F440: movq mm1, qword ptr [esp + 0x48] */
    void_lift_trap(0x1720F445u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F448u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720F44B: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720F44E: movq mm7, mm5 */
    void_lift_trap(0x1720F451u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F455: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F45Cu, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720F460: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F467u, "pfmul mm5, mm0");
    void_lift_trap(0x1720F46Bu, "pfmul mm4, mm1");
    void_lift_trap(0x1720F46Fu, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp); /* 0x1720F473: movq mm3, qword ptr [esp] */
    void_lift_trap(0x1720F477u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x8); /* 0x1720F47B: movq mm5, qword ptr [esp + 8] */
    void_lift_trap(0x1720F480u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720F484: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F48Bu, "pfacc mm4, mm2");
    void_lift_trap(0x1720F48Fu, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F493: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F49Au, "pfmul mm3, mm0");
    MEM64(esp + 0x80) = _mm[4]; /* 0x1720F49E: movq qword ptr [esp + 0x80], mm4 */
    void_lift_trap(0x1720F4A6u, "pfmul mm5, mm1");
    void_lift_trap(0x1720F4AAu, "pfadd mm6, mm7");
    void_lift_trap(0x1720F4AEu, "pfsub mm5, mm3");
    void_lift_trap(0x1720F4B2u, "pfacc mm6, mm5");
    MEM64(esp + 0x88) = _mm[6]; /* 0x1720F4B6: movq qword ptr [esp + 0x88], mm6 */
    _mm[2] = MEM64(esp + 0x20); /* 0x1720F4BE: movq mm2, qword ptr [esp + 0x20] */
    _mm[3] = MEM64(esp + 0x28); /* 0x1720F4C3: movq mm3, qword ptr [esp + 0x28] */
    _mm[4] = _mm[2]; /* 0x1720F4C8: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720F4CB: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x1720F4CE: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720F4D3: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720F4D6: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x1720F4D9: movq mm1, qword ptr [esp + 0x48] */
    void_lift_trap(0x1720F4DEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F4E1u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720F4E4: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720F4E7: movq mm7, mm5 */
    void_lift_trap(0x1720F4EAu, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F4EE: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F4F5u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720F4F9: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F500u, "pfmul mm5, mm0");
    void_lift_trap(0x1720F504u, "pfmul mm4, mm1");
    void_lift_trap(0x1720F508u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x20); /* 0x1720F50C: movq mm3, qword ptr [esp + 0x20] */
    void_lift_trap(0x1720F511u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x28); /* 0x1720F515: movq mm5, qword ptr [esp + 0x28] */
    void_lift_trap(0x1720F51Au, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720F51E: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F525u, "pfacc mm4, mm2");
    void_lift_trap(0x1720F529u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F52D: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F534u, "pfmul mm3, mm0");
    MEM64(esp + 0x90) = _mm[4]; /* 0x1720F538: movq qword ptr [esp + 0x90], mm4 */
    void_lift_trap(0x1720F540u, "pfmul mm5, mm1");
    void_lift_trap(0x1720F544u, "pfadd mm6, mm7");
    void_lift_trap(0x1720F548u, "pfsub mm5, mm3");
    void_lift_trap(0x1720F54Cu, "pfacc mm6, mm5");
    MEM64(esp + 0x98) = _mm[6]; /* 0x1720F550: movq qword ptr [esp + 0x98], mm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F558: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x8C); /* 0x1720F55B: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x1720F563: movq mm2, qword ptr [esp + 0x94] */
    _mm[3] = _mm[2]; /* 0x1720F56B: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720F56E: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x1720F571: movq mm0, mm3 */
    void_lift_trap(0x1720F574u, "pfcmpge mm3, qword ptr [0x1702a5f0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F57C: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x1720F57F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720F5E9; /* 0x1720F581: jne 0x1720f5e9 */
L_1720F583:
    RECOMP_CALL(sub_172161C0); /* 0x1720F583: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720F588: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x1720F58C: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x1720F590: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_172168A0); /* 0x1720F594: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x1720F599: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x1720F59C: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x1702A5A8)); /* 0x1720F5A0: pand mm3, qword ptr [0x1702a5a8] */
    ebx = MEM32(esp + 0x8); /* 0x1720F5A7: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x1720F5ABu, "pfcmpge mm3, qword ptr [0x1702a5b0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F5B3: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x8C); /* 0x1720F5B6: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x1720F5BE: movq mm2, qword ptr [esp + 0x94] */
    /* test ecx, ecx */ /* 0x1720F5C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F5E9; /* 0x1720F5C8: je 0x1720f5e9 */
L_1720F5CA:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720F5CA: movd mm3, dword ptr [esp] */
    void_lift_trap(0x1720F5CEu, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F5D2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F5D5u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x1720F5D9u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F5DDu, "pfmul mm3, mm0");
    void_lift_trap(0x1720F5E1u, "pfmul mm1, mm3");
    void_lift_trap(0x1720F5E5u, "pfmul mm2, mm3");
L_1720F5E9:
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x1720F5E9: pand mm2, qword ptr [0x1702a5b8] */
    MEM64(esp + 0x5C) = _mm[1]; /* 0x1720F5F0: movq qword ptr [esp + 0x5c], mm1 */
    MEM64(esp + 0x64) = _mm[2]; /* 0x1720F5F5: movq qword ptr [esp + 0x64], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720F5FA: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F5FD: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x9C); /* 0x1720F600: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x1720F608: movq mm2, qword ptr [esp + 0xa4] */
    _mm[3] = _mm[2]; /* 0x1720F610: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720F613: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x1720F616: movq mm0, mm3 */
    void_lift_trap(0x1720F619u, "pfcmpge mm3, qword ptr [0x1702a5f0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F621: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x1720F624: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720F68E; /* 0x1720F626: jne 0x1720f68e */
L_1720F628:
    RECOMP_CALL(sub_172161C0); /* 0x1720F628: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720F62D: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x1720F631: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x1720F635: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_172168A0); /* 0x1720F639: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x1720F63E: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x1720F641: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x1702A5A8)); /* 0x1720F645: pand mm3, qword ptr [0x1702a5a8] */
    ebx = MEM32(esp + 0x8); /* 0x1720F64C: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x1720F650u, "pfcmpge mm3, qword ptr [0x1702a5b0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F658: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x9C); /* 0x1720F65B: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x1720F663: movq mm2, qword ptr [esp + 0xa4] */
    /* test ecx, ecx */ /* 0x1720F66B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F68E; /* 0x1720F66D: je 0x1720f68e */
L_1720F66F:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720F66F: movd mm3, dword ptr [esp] */
    void_lift_trap(0x1720F673u, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F677u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F67Au, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x1720F67Eu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F682u, "pfmul mm3, mm0");
    void_lift_trap(0x1720F686u, "pfmul mm1, mm3");
    void_lift_trap(0x1720F68Au, "pfmul mm2, mm3");
L_1720F68E:
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x1720F68E: pand mm2, qword ptr [0x1702a5b8] */
    MEM64(esp + 0x6C) = _mm[1]; /* 0x1720F695: movq qword ptr [esp + 0x6c], mm1 */
    MEM64(esp + 0x74) = _mm[2]; /* 0x1720F69A: movq qword ptr [esp + 0x74], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720F69F: add esp, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = MEM64(esp + 0x50); /* 0x1720F6A2: movq mm0, qword ptr [esp + 0x50] */
    _mm[1] = MEM64(esp + 0x58); /* 0x1720F6A7: movq mm1, qword ptr [esp + 0x58] */
    void_lift_trap(0x1720F6ACu, "pfadd mm0, qword ptr [esp + 0x60]");
    void_lift_trap(0x1720F6B2u, "pfadd mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1720F6B8u, "pfmul mm0, qword ptr [0x1702a688]");
    void_lift_trap(0x1720F6C0u, "pfmul mm1, qword ptr [0x1702a688]");
    MEM64(esp + 0x80) = _mm[0]; /* 0x1720F6C8: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x88) = _mm[1]; /* 0x1720F6D0: movq qword ptr [esp + 0x88], mm1 */
    _mm[7] = MEM64(0x1702A5B0); /* 0x1720F6D8: movq mm7, qword ptr [0x1702a5b0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F6DF: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(esp + 0x8C); /* 0x1720F6E2: movq mm0, qword ptr [esp + 0x8c] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x1720F6EA: movd mm1, dword ptr [esp + 0x94] */
    void_lift_trap(0x1720F6F2u, "pfmul mm0, mm0");
    void_lift_trap(0x1720F6F6u, "pfmul mm1, mm1");
    void_lift_trap(0x1720F6FAu, "pfadd mm0, mm1");
    void_lift_trap(0x1720F6FEu, "pfacc mm0, mm0");
    void_lift_trap(0x1720F702u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x1720F706: movq mm2, mm1 */
    void_lift_trap(0x1720F709u, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x1720F70D: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x1720F711u, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x1720F715: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x1720F719u, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x1720F71D: movd dword ptr [esp], mm1 */
    void_lift_trap(0x1720F721u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_172167A0); /* 0x1720F725: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x1720F72A: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1702A5A0)); /* 0x1720F72D: pand mm0, qword ptr [0x1702a5a0] */
    void_lift_trap(0x1720F734u, "pfcmpge mm0, qword ptr [0x1702a5b0]");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720F73C: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x1720F73F: movd ecx, mm0 */
    _mm[2] = MEM64(esp + 0x8C); /* 0x1720F742: movq mm2, qword ptr [esp + 0x8c] */
    _mm[0] = _mm[1]; /* 0x1720F74A: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720F74D: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x1720F750: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1720F756u, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x1720F75B: movd mm3, dword ptr [esp + 0x94] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720F770; /* 0x1720F763: je 0x1720f770 */
L_1720F765:
    void_lift_trap(0x1720F765u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F768u, "pfmul mm3, mm1");
    void_lift_trap(0x1720F76Cu, "pfmul mm2, mm1");
L_1720F770:
    void_lift_trap(0x1720F770u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x7C) = _mm[2]; /* 0x1720F773: movq qword ptr [esp + 0x7c], mm2 */
    MEM64(esp + 0x84) = _mm[3]; /* 0x1720F778: movq qword ptr [esp + 0x84], mm3 */
    esi = MEM32(esp + 0x4); /* 0x1720F780: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x1720F784: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720F788: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1720F78B: mov eax, dword ptr [ebp + 8] */
    _mm[2] = MEM64(esp + 0x70); /* 0x1720F78E: movq mm2, qword ptr [esp + 0x70] */
    _mm[3] = MEM64(esp + 0x78); /* 0x1720F793: movq mm3, qword ptr [esp + 0x78] */
    _mm[4] = _mm[2]; /* 0x1720F798: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720F79B: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x10); /* 0x1720F79E: movq mm0, qword ptr [esp + 0x10] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720F7A3: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720F7A6: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x18); /* 0x1720F7A9: movq mm1, qword ptr [esp + 0x18] */
    void_lift_trap(0x1720F7AEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F7B1u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720F7B4: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720F7B7: movq mm7, mm5 */
    void_lift_trap(0x1720F7BAu, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F7BE: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F7C5u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720F7C9: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F7D0u, "pfmul mm5, mm0");
    void_lift_trap(0x1720F7D4u, "pfmul mm4, mm1");
    void_lift_trap(0x1720F7D8u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x70); /* 0x1720F7DC: movq mm3, qword ptr [esp + 0x70] */
    void_lift_trap(0x1720F7E1u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x78); /* 0x1720F7E5: movq mm5, qword ptr [esp + 0x78] */
    void_lift_trap(0x1720F7EAu, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720F7EE: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F7F5u, "pfacc mm4, mm2");
    void_lift_trap(0x1720F7F9u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F7FD: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F804u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x1720F808: movq qword ptr [eax], mm4 */
    void_lift_trap(0x1720F80Bu, "pfmul mm5, mm1");
    void_lift_trap(0x1720F80Fu, "pfadd mm6, mm7");
    void_lift_trap(0x1720F813u, "pfsub mm5, mm3");
    void_lift_trap(0x1720F817u, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x1720F81B: movq qword ptr [eax + 8], mm6 */
    _mm[0] = MEM64(esp + 0x20); /* 0x1720F81F: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = _mm[0]; /* 0x1720F824: movq mm1, mm0 */
    _mm[2] = MEM64(esp + 0x28); /* 0x1720F827: movq mm2, qword ptr [esp + 0x28] */
    _mm[3] = _mm[2]; /* 0x1720F82C: movq mm3, mm2 */
    void_lift_trap(0x1720F82Fu, "pfmul mm0, mm0");
    void_lift_trap(0x1720F833u, "pfmul mm2, mm2");
    void_lift_trap(0x1720F837u, "pfadd mm0, mm2");
    void_lift_trap(0x1720F83Bu, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x1720F83F: movq mm5, mm0 */
    void_lift_trap(0x1720F842u, "pfrcp mm4, mm0");
    void_lift_trap(0x1720F846u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[1] = (_mm[1] ^ MEM64(0x1702A638)); /* 0x1720F84E: pxor mm1, qword ptr [0x1702a638] */
    _mm[3] = (_mm[3] ^ MEM64(0x1702A580)); /* 0x1720F855: pxor mm3, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F85Cu, "pfrcpit1 mm0, mm4");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x1720F860: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x1720F863: pand mm3, mm5 */
    void_lift_trap(0x1720F866u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720F86Au, "pfmul mm1, mm0");
    void_lift_trap(0x1720F86Eu, "pfmul mm3, mm0");
    MEM64(esp + 0x40) = _mm[1]; /* 0x1720F872: movq qword ptr [esp + 0x40], mm1 */
    MEM64(esp + 0x48) = _mm[3]; /* 0x1720F877: movq qword ptr [esp + 0x48], mm3 */
    _mm[2] = MEM64(esp + 0x10); /* 0x1720F87C: movq mm2, qword ptr [esp + 0x10] */
    _mm[3] = MEM64(esp + 0x18); /* 0x1720F881: movq mm3, qword ptr [esp + 0x18] */
    _mm[4] = _mm[2]; /* 0x1720F886: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720F889: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x1720F88C: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720F891: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720F894: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x1720F897: movq mm1, qword ptr [esp + 0x48] */
    void_lift_trap(0x1720F89Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F89Fu, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720F8A2: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720F8A5: movq mm7, mm5 */
    void_lift_trap(0x1720F8A8u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F8AC: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F8B3u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720F8B7: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F8BEu, "pfmul mm5, mm0");
    void_lift_trap(0x1720F8C2u, "pfmul mm4, mm1");
    void_lift_trap(0x1720F8C6u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x10); /* 0x1720F8CA: movq mm3, qword ptr [esp + 0x10] */
    void_lift_trap(0x1720F8CFu, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x18); /* 0x1720F8D3: movq mm5, qword ptr [esp + 0x18] */
    void_lift_trap(0x1720F8D8u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720F8DC: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F8E3u, "pfacc mm4, mm2");
    void_lift_trap(0x1720F8E7u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F8EB: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F8F2u, "pfmul mm3, mm0");
    MEM64(esp + 0x80) = _mm[4]; /* 0x1720F8F6: movq qword ptr [esp + 0x80], mm4 */
    void_lift_trap(0x1720F8FEu, "pfmul mm5, mm1");
    void_lift_trap(0x1720F902u, "pfadd mm6, mm7");
    void_lift_trap(0x1720F906u, "pfsub mm5, mm3");
    void_lift_trap(0x1720F90Au, "pfacc mm6, mm5");
    MEM64(esp + 0x88) = _mm[6]; /* 0x1720F90E: movq qword ptr [esp + 0x88], mm6 */
    _mm[2] = MEM64(esp + 0x30); /* 0x1720F916: movq mm2, qword ptr [esp + 0x30] */
    _mm[3] = MEM64(esp + 0x38); /* 0x1720F91B: movq mm3, qword ptr [esp + 0x38] */
    _mm[4] = _mm[2]; /* 0x1720F920: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720F923: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x40); /* 0x1720F926: movq mm0, qword ptr [esp + 0x40] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720F92B: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720F92E: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x48); /* 0x1720F931: movq mm1, qword ptr [esp + 0x48] */
    void_lift_trap(0x1720F936u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720F939u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720F93C: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720F93F: movq mm7, mm5 */
    void_lift_trap(0x1720F942u, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F946: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F94Du, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720F951: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F958u, "pfmul mm5, mm0");
    void_lift_trap(0x1720F95Cu, "pfmul mm4, mm1");
    void_lift_trap(0x1720F960u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x30); /* 0x1720F964: movq mm3, qword ptr [esp + 0x30] */
    void_lift_trap(0x1720F969u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x38); /* 0x1720F96D: movq mm5, qword ptr [esp + 0x38] */
    void_lift_trap(0x1720F972u, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720F976: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F97Du, "pfacc mm4, mm2");
    void_lift_trap(0x1720F981u, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720F985: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720F98Cu, "pfmul mm3, mm0");
    MEM64(esp + 0x90) = _mm[4]; /* 0x1720F990: movq qword ptr [esp + 0x90], mm4 */
    void_lift_trap(0x1720F998u, "pfmul mm5, mm1");
    void_lift_trap(0x1720F99Cu, "pfadd mm6, mm7");
    void_lift_trap(0x1720F9A0u, "pfsub mm5, mm3");
    void_lift_trap(0x1720F9A4u, "pfacc mm6, mm5");
    MEM64(esp + 0x98) = _mm[6]; /* 0x1720F9A8: movq qword ptr [esp + 0x98], mm6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720F9B0: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x8C); /* 0x1720F9B3: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x1720F9BB: movq mm2, qword ptr [esp + 0x94] */
    _mm[3] = _mm[2]; /* 0x1720F9C3: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720F9C6: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x1720F9C9: movq mm0, mm3 */
    void_lift_trap(0x1720F9CCu, "pfcmpge mm3, qword ptr [0x1702a5f0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720F9D4: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x1720F9D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720FA41; /* 0x1720F9D9: jne 0x1720fa41 */
L_1720F9DB:
    RECOMP_CALL(sub_172161C0); /* 0x1720F9DB: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720F9E0: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x1720F9E4: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x1720F9E8: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_172168A0); /* 0x1720F9EC: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x1720F9F1: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x1720F9F4: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x1702A5A8)); /* 0x1720F9F8: pand mm3, qword ptr [0x1702a5a8] */
    ebx = MEM32(esp + 0x8); /* 0x1720F9FF: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x1720FA03u, "pfcmpge mm3, qword ptr [0x1702a5b0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720FA0B: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x8C); /* 0x1720FA0E: movq mm1, qword ptr [esp + 0x8c] */
    _mm[2] = MEM64(esp + 0x94); /* 0x1720FA16: movq mm2, qword ptr [esp + 0x94] */
    /* test ecx, ecx */ /* 0x1720FA1E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720FA41; /* 0x1720FA20: je 0x1720fa41 */
L_1720FA22:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720FA22: movd mm3, dword ptr [esp] */
    void_lift_trap(0x1720FA26u, "pfrcp mm4, mm0");
    void_lift_trap(0x1720FA2Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FA2Du, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x1720FA31u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720FA35u, "pfmul mm3, mm0");
    void_lift_trap(0x1720FA39u, "pfmul mm1, mm3");
    void_lift_trap(0x1720FA3Du, "pfmul mm2, mm3");
L_1720FA41:
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x1720FA41: pand mm2, qword ptr [0x1702a5b8] */
    MEM64(esp + 0x5C) = _mm[1]; /* 0x1720FA48: movq qword ptr [esp + 0x5c], mm1 */
    MEM64(esp + 0x64) = _mm[2]; /* 0x1720FA4D: movq qword ptr [esp + 0x64], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720FA52: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720FA55: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(esp + 0x9C); /* 0x1720FA58: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x1720FA60: movq mm2, qword ptr [esp + 0xa4] */
    _mm[3] = _mm[2]; /* 0x1720FA68: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1720FA6B: punpckhdq mm3, mm3 */
    _mm[0] = _mm[3]; /* 0x1720FA6E: movq mm0, mm3 */
    void_lift_trap(0x1720FA71u, "pfcmpge mm3, qword ptr [0x1702a5f0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720FA79: movd ecx, mm3 */
    /* test ecx, ecx */ /* 0x1720FA7C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1720FAE6; /* 0x1720FA7E: jne 0x1720fae6 */
L_1720FA80:
    RECOMP_CALL(sub_172161C0); /* 0x1720FA80: call 0x172161c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1720FA85: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = esi; /* 0x1720FA89: mov dword ptr [esp + 4], esi */
    MEM32(esp + 0x8) = ebx; /* 0x1720FA8D: mov dword ptr [esp + 8], ebx */
    RECOMP_CALL(sub_172168A0); /* 0x1720FA91: call 0x172168a0 */
    RECOMP_FLAGS_IN();
    _mm[3] = _mm[0]; /* 0x1720FA96: movq mm3, mm0 */
    esi = MEM32(esp + 0x4); /* 0x1720FA99: mov esi, dword ptr [esp + 4] */
    _mm[3] = (_mm[3] & MEM64(0x1702A5A8)); /* 0x1720FA9D: pand mm3, qword ptr [0x1702a5a8] */
    ebx = MEM32(esp + 0x8); /* 0x1720FAA4: mov ebx, dword ptr [esp + 8] */
    void_lift_trap(0x1720FAA8u, "pfcmpge mm3, qword ptr [0x1702a5b0]");
    ecx = (uint32_t)_mm[3]; /* 0x1720FAB0: movd ecx, mm3 */
    _mm[1] = MEM64(esp + 0x9C); /* 0x1720FAB3: movq mm1, qword ptr [esp + 0x9c] */
    _mm[2] = MEM64(esp + 0xA4); /* 0x1720FABB: movq mm2, qword ptr [esp + 0xa4] */
    /* test ecx, ecx */ /* 0x1720FAC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720FAE6; /* 0x1720FAC5: je 0x1720fae6 */
L_1720FAC7:
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp)); /* 0x1720FAC7: movd mm3, dword ptr [esp] */
    void_lift_trap(0x1720FACBu, "pfrcp mm4, mm0");
    void_lift_trap(0x1720FACFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FAD2u, "pfrcpit1 mm0, mm4");
    void_lift_trap(0x1720FAD6u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x1720FADAu, "pfmul mm3, mm0");
    void_lift_trap(0x1720FADEu, "pfmul mm1, mm3");
    void_lift_trap(0x1720FAE2u, "pfmul mm2, mm3");
L_1720FAE6:
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x1720FAE6: pand mm2, qword ptr [0x1702a5b8] */
    MEM64(esp + 0x6C) = _mm[1]; /* 0x1720FAED: movq qword ptr [esp + 0x6c], mm1 */
    MEM64(esp + 0x74) = _mm[2]; /* 0x1720FAF2: movq qword ptr [esp + 0x74], mm2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720FAF7: add esp, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = MEM64(esp + 0x50); /* 0x1720FAFA: movq mm0, qword ptr [esp + 0x50] */
    _mm[1] = MEM64(esp + 0x58); /* 0x1720FAFF: movq mm1, qword ptr [esp + 0x58] */
    void_lift_trap(0x1720FB04u, "pfadd mm0, qword ptr [esp + 0x60]");
    void_lift_trap(0x1720FB0Au, "pfadd mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1720FB10u, "pfmul mm0, qword ptr [0x1702a688]");
    void_lift_trap(0x1720FB18u, "pfmul mm1, qword ptr [0x1702a688]");
    MEM64(esp + 0x80) = _mm[0]; /* 0x1720FB20: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x88) = _mm[1]; /* 0x1720FB28: movq qword ptr [esp + 0x88], mm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1720FB30: sub esp, 0xc */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(esp + 0x8C); /* 0x1720FB33: movq mm0, qword ptr [esp + 0x8c] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x1720FB3B: movd mm1, dword ptr [esp + 0x94] */
    void_lift_trap(0x1720FB43u, "pfmul mm0, mm0");
    void_lift_trap(0x1720FB47u, "pfmul mm1, mm1");
    void_lift_trap(0x1720FB4Bu, "pfadd mm0, mm1");
    void_lift_trap(0x1720FB4Fu, "pfacc mm0, mm0");
    void_lift_trap(0x1720FB53u, "pfrsqrt mm1, mm0");
    _mm[2] = _mm[1]; /* 0x1720FB57: movq mm2, mm1 */
    void_lift_trap(0x1720FB5Au, "pfmul mm1, mm1");
    MEM32(esp + 0x4) = esi; /* 0x1720FB5E: mov dword ptr [esp + 4], esi */
    void_lift_trap(0x1720FB62u, "pfrsqit1 mm1, mm0");
    MEM32(esp + 0x8) = ebx; /* 0x1720FB66: mov dword ptr [esp + 8], ebx */
    void_lift_trap(0x1720FB6Au, "pfrcpit2 mm1, mm2");
    MEM32(esp) = (uint32_t)_mm[1]; /* 0x1720FB6E: movd dword ptr [esp], mm1 */
    void_lift_trap(0x1720FB72u, "pfmul mm0, mm1");
    RECOMP_CALL(sub_172167A0); /* 0x1720FB76: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = _mm[0]; /* 0x1720FB7B: movq mm1, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1702A5A0)); /* 0x1720FB7E: pand mm0, qword ptr [0x1702a5a0] */
    void_lift_trap(0x1720FB85u, "pfcmpge mm0, qword ptr [0x1702a5b0]");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720FB8D: punpckhdq mm0, mm0 */
    ecx = (uint32_t)_mm[0]; /* 0x1720FB90: movd ecx, mm0 */
    _mm[2] = MEM64(esp + 0x8C); /* 0x1720FB93: movq mm2, qword ptr [esp + 0x8c] */
    _mm[0] = _mm[1]; /* 0x1720FB9B: movq mm0, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720FB9E: punpckhdq mm1, mm1 */
    /* test ecx, 1 */ /* 0x1720FBA1: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1720FBA7u, "pfmul mm1, qword ptr [esp]");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x94)); /* 0x1720FBAC: movd mm3, dword ptr [esp + 0x94] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1720FBC1; /* 0x1720FBB4: je 0x1720fbc1 */
L_1720FBB6:
    void_lift_trap(0x1720FBB6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FBB9u, "pfmul mm3, mm1");
    void_lift_trap(0x1720FBBDu, "pfmul mm2, mm1");
L_1720FBC1:
    void_lift_trap(0x1720FBC1u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x7C) = _mm[2]; /* 0x1720FBC4: movq qword ptr [esp + 0x7c], mm2 */
    MEM64(esp + 0x84) = _mm[3]; /* 0x1720FBC9: movq qword ptr [esp + 0x84], mm3 */
    esi = MEM32(esp + 0x4); /* 0x1720FBD1: mov esi, dword ptr [esp + 4] */
    ebx = MEM32(esp + 0x8); /* 0x1720FBD5: mov ebx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1720FBD9: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1720FBDC: mov eax, dword ptr [ebp + 0xc] */
    _mm[2] = MEM64(esp + 0x70); /* 0x1720FBDF: movq mm2, qword ptr [esp + 0x70] */
    _mm[3] = MEM64(esp + 0x78); /* 0x1720FBE4: movq mm3, qword ptr [esp + 0x78] */
    _mm[4] = _mm[2]; /* 0x1720FBE9: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x1720FBEC: movq mm5, mm3 */
    _mm[0] = MEM64(esp + 0x20); /* 0x1720FBEF: movq mm0, qword ptr [esp + 0x20] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[2]); /* 0x1720FBF4: punpckhdq mm4, mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x1720FBF7: punpckhdq mm5, mm3 */
    _mm[1] = MEM64(esp + 0x28); /* 0x1720FBFA: movq mm1, qword ptr [esp + 0x28] */
    void_lift_trap(0x1720FBFFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FC02u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[4]; /* 0x1720FC05: movq mm6, mm4 */
    _mm[7] = _mm[5]; /* 0x1720FC08: movq mm7, mm5 */
    void_lift_trap(0x1720FC0Bu, "pfmul mm2, mm1");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720FC0F: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720FC16u, "pfmul mm3, mm0");
    _mm[2] = (_mm[2] ^ MEM64(0x1702A580)); /* 0x1720FC1A: pxor mm2, qword ptr [0x1702a580] */
    void_lift_trap(0x1720FC21u, "pfmul mm5, mm0");
    void_lift_trap(0x1720FC25u, "pfmul mm4, mm1");
    void_lift_trap(0x1720FC29u, "pfadd mm2, mm3");
    _mm[3] = MEM64(esp + 0x70); /* 0x1720FC2D: movq mm3, qword ptr [esp + 0x70] */
    void_lift_trap(0x1720FC32u, "pfsub mm4, mm5");
    _mm[5] = MEM64(esp + 0x78); /* 0x1720FC36: movq mm5, qword ptr [esp + 0x78] */
    void_lift_trap(0x1720FC3Bu, "pfmul mm7, mm1");
    _mm[6] = (_mm[6] ^ MEM64(0x1702A580)); /* 0x1720FC3F: pxor mm6, qword ptr [0x1702a580] */
    void_lift_trap(0x1720FC46u, "pfacc mm4, mm2");
    void_lift_trap(0x1720FC4Au, "pfmul mm6, mm0");
    _mm[5] = (_mm[5] ^ MEM64(0x1702A580)); /* 0x1720FC4E: pxor mm5, qword ptr [0x1702a580] */
    void_lift_trap(0x1720FC55u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[4]; /* 0x1720FC59: movq qword ptr [eax], mm4 */
    void_lift_trap(0x1720FC5Cu, "pfmul mm5, mm1");
    void_lift_trap(0x1720FC60u, "pfadd mm6, mm7");
    void_lift_trap(0x1720FC64u, "pfsub mm5, mm3");
    void_lift_trap(0x1720FC68u, "pfacc mm6, mm5");
    MEM64(eax + 0x8) = _mm[6]; /* 0x1720FC6C: movq qword ptr [eax + 8], mm6 */
    eax = MEM32(ebp + 0x10); /* 0x1720FC70: mov eax, dword ptr [ebp + 0x10] */
    _mm[0] = MEM64(esp + 0x20); /* 0x1720FC73: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x1720FC78: movq mm1, qword ptr [esp + 0x28] */
    MEM64(eax) = _mm[0]; /* 0x1720FC7D: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x1720FC80: movq qword ptr [eax + 8], mm1 */
    esp = ebp; /* 0x1720FC84: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1720FC86: pop ebp */
    void_lift_trap(0x1720FC87u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1720FC89: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1720FC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720FC91u);

L_1720FC91:
    void_lift_trap(0x1720FC91u, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1720FC93: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x50); /* 0x1720FC96: mov edx, dword ptr [esp + 0x50] */
    MEM32(esp + 0x40) = ebp; /* 0x1720FC9A: mov dword ptr [esp + 0x40], ebp */
    ebp = esp; /* 0x1720FC9E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1720FCA0: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(edx); /* 0x1720FCA3: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x1720FCA6: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x1720FCAA: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x1720FCAE: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x1720FCB2: movq mm2, mm0 */
    void_lift_trap(0x1720FCB5u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x1720FCB8: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x1720FCBB: movq mm5, mm3 */
    MEM64(esp) = _mm[0]; /* 0x1720FCBE: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x10) = _mm[2]; /* 0x1720FCC2: movq qword ptr [esp + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x1720FCC7: movq mm6, qword ptr [edx + 8] */
    void_lift_trap(0x1720FCCBu, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(edx + 0x18); /* 0x1720FCCE: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x1720FCD2: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x1720FCD6: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x1720FCD9: movq mm1, mm6 */
    MEM64(esp + 0x28) = _mm[3]; /* 0x1720FCDC: movq qword ptr [esp + 0x28], mm3 */
    MEM64(esp + 0x38) = _mm[5]; /* 0x1720FCE1: movq qword ptr [esp + 0x38], mm5 */
    ecx = MEM32(ebp + 0x4C); /* 0x1720FCE6: mov ecx, dword ptr [ebp + 0x4c] */
    void_lift_trap(0x1720FCE9u, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(edx + 0x30); /* 0x1720FCEC: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x1720FCF0: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x1720FCF3: punpckhdq mm1, mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x1720FCF6: movq qword ptr [esp + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x1720FCFB: punpckhdq mm0, mm4 */
    void_lift_trap(0x1720FCFEu, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x30) = _mm[1]; /* 0x1720FD01: movq qword ptr [esp + 0x30], mm1 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x1720FD06: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x1720FD0B: movq qword ptr [esp + 8], mm2 */
    eax = MEM32(ebp + 0x48); /* 0x1720FD10: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(ecx); /* 0x1720FD13: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x1720FD16: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x1720FD1A: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1720FD1D: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1720FD20: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x1720FD23: movq mm5, mm1 */
    void_lift_trap(0x1720FD26u, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x1720FD2Bu, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x1720FD31: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x1720FD34: movq mm7, mm3 */
    void_lift_trap(0x1720FD37u, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x1720FD3Du, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x1720FD43u, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x1720FD49u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x1720FD4Fu, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x1720FD55u, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x1720FD5Bu, "pfacc mm0, mm2");
    void_lift_trap(0x1720FD5Fu, "pfacc mm1, mm3");
    void_lift_trap(0x1720FD63u, "pfacc mm4, mm6");
    void_lift_trap(0x1720FD67u, "pfacc mm5, mm7");
    void_lift_trap(0x1720FD6Bu, "pfadd mm0, mm1");
    void_lift_trap(0x1720FD6Fu, "pfadd mm4, mm5");
    MEM64(eax) = _mm[0]; /* 0x1720FD73: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x1720FD76: movq qword ptr [eax + 8], mm4 */
    _mm[0] = MEM64(ecx + 0x10); /* 0x1720FD7A: movq mm0, qword ptr [ecx + 0x10] */
    _mm[1] = MEM64(ecx + 0x18); /* 0x1720FD7E: movq mm1, qword ptr [ecx + 0x18] */
    _mm[2] = _mm[0]; /* 0x1720FD82: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1720FD85: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1720FD88: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x1720FD8B: movq mm5, mm1 */
    void_lift_trap(0x1720FD8Eu, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x1720FD93u, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x1720FD99: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x1720FD9C: movq mm7, mm3 */
    void_lift_trap(0x1720FD9Fu, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x1720FDA5u, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x1720FDABu, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x1720FDB1u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x1720FDB7u, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x1720FDBDu, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x1720FDC3u, "pfacc mm0, mm2");
    void_lift_trap(0x1720FDC7u, "pfacc mm1, mm3");
    void_lift_trap(0x1720FDCBu, "pfacc mm4, mm6");
    void_lift_trap(0x1720FDCFu, "pfacc mm5, mm7");
    void_lift_trap(0x1720FDD3u, "pfadd mm0, mm1");
    void_lift_trap(0x1720FDD7u, "pfadd mm4, mm5");
    MEM64(eax + 0x10) = _mm[0]; /* 0x1720FDDB: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x1720FDDF: movq qword ptr [eax + 0x18], mm4 */
    _mm[0] = MEM64(ecx + 0x20); /* 0x1720FDE3: movq mm0, qword ptr [ecx + 0x20] */
    _mm[1] = MEM64(ecx + 0x28); /* 0x1720FDE7: movq mm1, qword ptr [ecx + 0x28] */
    _mm[2] = _mm[0]; /* 0x1720FDEB: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1720FDEE: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1720FDF1: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x1720FDF4: movq mm5, mm1 */
    void_lift_trap(0x1720FDF7u, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x1720FDFCu, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x1720FE02: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x1720FE05: movq mm7, mm3 */
    void_lift_trap(0x1720FE08u, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x1720FE0Eu, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x1720FE14u, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x1720FE1Au, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x1720FE20u, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x1720FE26u, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x1720FE2Cu, "pfacc mm0, mm2");
    void_lift_trap(0x1720FE30u, "pfacc mm1, mm3");
    void_lift_trap(0x1720FE34u, "pfacc mm4, mm6");
    void_lift_trap(0x1720FE38u, "pfacc mm5, mm7");
    void_lift_trap(0x1720FE3Cu, "pfadd mm0, mm1");
    void_lift_trap(0x1720FE40u, "pfadd mm4, mm5");
    MEM64(eax + 0x20) = _mm[0]; /* 0x1720FE44: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x1720FE48: movq qword ptr [eax + 0x28], mm4 */
    _mm[0] = MEM64(ecx + 0x30); /* 0x1720FE4C: movq mm0, qword ptr [ecx + 0x30] */
    _mm[1] = MEM64(ecx + 0x38); /* 0x1720FE50: movq mm1, qword ptr [ecx + 0x38] */
    _mm[2] = _mm[0]; /* 0x1720FE54: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1720FE57: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1720FE5A: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x1720FE5D: movq mm5, mm1 */
    void_lift_trap(0x1720FE60u, "pfmul mm0, qword ptr [esp]");
    void_lift_trap(0x1720FE65u, "pfmul mm1, qword ptr [esp + 8]");
    _mm[6] = _mm[2]; /* 0x1720FE6B: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x1720FE6E: movq mm7, mm3 */
    void_lift_trap(0x1720FE71u, "pfmul mm2, qword ptr [esp + 0x10]");
    void_lift_trap(0x1720FE77u, "pfmul mm3, qword ptr [esp + 0x18]");
    void_lift_trap(0x1720FE7Du, "pfmul mm4, qword ptr [esp + 0x20]");
    void_lift_trap(0x1720FE83u, "pfmul mm5, qword ptr [esp + 0x28]");
    void_lift_trap(0x1720FE89u, "pfmul mm6, qword ptr [esp + 0x30]");
    void_lift_trap(0x1720FE8Fu, "pfmul mm7, qword ptr [esp + 0x38]");
    void_lift_trap(0x1720FE95u, "pfacc mm0, mm2");
    void_lift_trap(0x1720FE99u, "pfacc mm1, mm3");
    void_lift_trap(0x1720FE9Du, "pfacc mm4, mm6");
    void_lift_trap(0x1720FEA1u, "pfacc mm5, mm7");
    void_lift_trap(0x1720FEA5u, "pfadd mm0, mm1");
    void_lift_trap(0x1720FEA9u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x1720FEAD: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x1720FEB1: movq qword ptr [eax + 0x38], mm4 */
    esp = ebp; /* 0x1720FEB5: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x1720FEB7: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x1720FEBB: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x1720FEBEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1720FEC0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1720FEC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720FEC8u);

L_1720FEC8:
    eax = MEM32(esp + 0x4); /* 0x1720FEC8: mov eax, dword ptr [esp + 4] */
    _mm[2] = MEM64(eax + 0x20); /* 0x1720FECC: movq mm2, qword ptr [eax + 0x20] */
    _mm[1] = MEM64(eax + 0x28); /* 0x1720FED0: movq mm1, qword ptr [eax + 0x28] */
    _mm[0] = MEM64(eax + 0x24); /* 0x1720FED4: movq mm0, qword ptr [eax + 0x24] */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1720FED8: punpckhdq mm1, mm1 */
    void_lift_trap(0x1720FEDBu, "unsupported PUNPCKLDQ operands");
    _mm[5] = MEM64(eax + 0x30); /* 0x1720FEDE: movq mm5, qword ptr [eax + 0x30] */
    _mm[4] = MEM64(eax + 0x38); /* 0x1720FEE2: movq mm4, qword ptr [eax + 0x38] */
    _mm[3] = MEM64(eax + 0x34); /* 0x1720FEE6: movq mm3, qword ptr [eax + 0x34] */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x1720FEEA: punpckhdq mm4, mm4 */
    void_lift_trap(0x1720FEEDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FEF0u, "pfmul mm4, mm0");
    void_lift_trap(0x1720FEF4u, "pfmul mm1, mm3");
    void_lift_trap(0x1720FEF8u, "pfsub mm4, mm1");
    void_lift_trap(0x1720FEFCu, "pfmul mm2, qword ptr [eax + 0x38]");
    void_lift_trap(0x1720FF01u, "pfmul mm5, qword ptr [eax + 0x28]");
    void_lift_trap(0x1720FF06u, "pfsub mm2, mm5");
    void_lift_trap(0x1720FF0Au, "pfmul mm3, qword ptr [eax + 0x20]");
    void_lift_trap(0x1720FF0Fu, "pfmul mm0, qword ptr [eax + 0x30]");
    void_lift_trap(0x1720FF14u, "pfsub mm3, mm0");
    _mm[0] = _mm[2]; /* 0x1720FF18: movq mm0, mm2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1720FF1B: punpckhdq mm0, mm0 */
    void_lift_trap(0x1720FF1Eu, "unsupported PUNPCKLDQ operands");
    _mm[1] = _mm[3]; /* 0x1720FF21: movq mm1, mm3 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[4]); /* 0x1720FF24: punpckhdq mm1, mm4 */
    _mm[5] = _mm[3]; /* 0x1720FF27: movq mm5, mm3 */
    void_lift_trap(0x1720FF2Au, "unsupported PUNPCKLDQ operands");
    _mm[6] = MEM64(eax + 0x18); /* 0x1720FF2D: movq mm6, qword ptr [eax + 0x18] */
    _mm[7] = _mm[6]; /* 0x1720FF31: movq mm7, mm6 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1720FF34: punpckhdq mm6, mm6 */
    void_lift_trap(0x1720FF37u, "pfmul mm4, qword ptr [eax + 0x10]");
    void_lift_trap(0x1720FF3Cu, "pfmul mm3, mm6");
    void_lift_trap(0x1720FF40u, "pfadd mm4, mm3");
    _mm[3] = MEM64(eax + 0x14); /* 0x1720FF44: movq mm3, qword ptr [eax + 0x14] */
    void_lift_trap(0x1720FF48u, "pfmul mm0, mm3");
    void_lift_trap(0x1720FF4Cu, "pfsub mm4, mm0");
    _mm[0] = MEM64(eax + 0x10); /* 0x1720FF50: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x1720FF54u, "unsupported PUNPCKLDQ operands");
    _mm[6] = MEM64(eax + 0x8); /* 0x1720FF57: movq mm6, qword ptr [eax + 8] */
    void_lift_trap(0x1720FF5Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FF5Eu, "pfmul mm4, mm6");
    _mm[6] = MEM64(eax + 0x8); /* 0x1720FF62: movq mm6, qword ptr [eax + 8] */
    _mm[6] = mmx_punpckhdq(_mm[6], MEM64(eax)); /* 0x1720FF66: punpckhdq mm6, qword ptr [eax] */
    void_lift_trap(0x1720FF69u, "pfmul mm5, mm7");
    void_lift_trap(0x1720FF6Du, "pfmul mm2, mm3");
    void_lift_trap(0x1720FF71u, "pfmul mm1, mm0");
    void_lift_trap(0x1720FF75u, "pfadd mm1, mm5");
    void_lift_trap(0x1720FF79u, "pfsub mm1, mm2");
    void_lift_trap(0x1720FF7Du, "pfmul mm1, mm6");
    void_lift_trap(0x1720FF81u, "pfsub mm4, mm1");
    void_lift_trap(0x1720FF85u, "pfacc mm4, mm4");
    MEM32(esp + 0x4) = (uint32_t)_mm[4]; /* 0x1720FF89: movd dword ptr [esp + 4], mm4 */
    void_lift_trap(0x1720FF8Eu, "femms ");
    fp_push(*(float*)&MEM32(esp + 0x4)); /* 0x1720FF90: fld dword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1720FF94: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1720FF9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720FF9Cu);

L_1720FF9C:
    eax = MEM32(esp + 0x4); /* 0x1720FF9C: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x1720FFA0u, "femms ");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x1720FFA2: movd mm4, dword ptr [esp + 0x10] */
    _mm[1] = MEM64(0x1702A628); /* 0x1720FFA7: movq mm1, qword ptr [0x1702a628] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x1720FFAE: pxor mm0, mm0 */
    _mm[2] = MEM64(0x1702A630); /* 0x1720FFB1: movq mm2, qword ptr [0x1702a630] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x1720FFB8: movd mm3, dword ptr [esp + 8] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x1720FFBD: movd mm5, dword ptr [esp + 0xc] */
    void_lift_trap(0x1720FFC2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1720FFC5u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[2]; /* 0x1720FFC8: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x1720FFCB: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[1]; /* 0x1720FFCF: movq qword ptr [eax + 0x10], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x1720FFD3: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x1720FFD7: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[2]; /* 0x1720FFDB: movq qword ptr [eax + 0x28], mm2 */
    MEM64(eax + 0x30) = _mm[3]; /* 0x1720FFDF: movq qword ptr [eax + 0x30], mm3 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x1720FFE3: movq qword ptr [eax + 0x38], mm4 */
    void_lift_trap(0x1720FFE7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1720FFE9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1720FFF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1720FFF1u);

L_1720FFF1:
    void_lift_trap(0x1720FFF1u, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1720FFF3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x1720FFF6: mov dword ptr [esp + 0x10], ebp */
    ebp = esp; /* 0x1720FFFA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1720FFFC: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp; /* 0x1720FFFF: mov ecx, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x17210001: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x17210004: push ecx */
    RECOMP_CALL(sub_17215C1B); /* 0x17210005: call 0x17215c1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1721000A: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x1C); /* 0x1721000D: mov ecx, dword ptr [ebp + 0x1c] */
    _mm[0] = MEM64(esp); /* 0x17210010: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(ecx); /* 0x17210014: movq mm1, qword ptr [ecx] */
    _mm[6] = _mm[1]; /* 0x17210017: movq mm6, mm1 */
    void_lift_trap(0x1721001Au, "pfmul mm1, mm0");
    _mm[2] = MEM64(esp + 0x8); /* 0x1721001E: movq mm2, qword ptr [esp + 8] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x17210023: movq mm3, qword ptr [ecx + 8] */
    _mm[7] = _mm[3]; /* 0x17210027: movq mm7, mm3 */
    void_lift_trap(0x1721002Au, "pfmul mm3, mm2");
    void_lift_trap(0x1721002Eu, "pfadd mm1, mm3");
    _mm[0] = (_mm[0] ^ MEM64(0x1702A638)); /* 0x17210032: pxor mm0, qword ptr [0x1702a638] */
    _mm[2] = (_mm[2] ^ MEM64(0x1702A638)); /* 0x17210039: pxor mm2, qword ptr [0x1702a638] */
    void_lift_trap(0x17210040u, "pfacc mm1, mm1");
    _mm[4] = _mm[0]; /* 0x17210044: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x17210047: movq mm5, mm0 */
    void_lift_trap(0x1721004Au, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_psllq(_mm[1], 32); /* 0x1721004D: psllq mm1, 0x20 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x17210051: psrlq mm3, 0x20 */
    void_lift_trap(0x17210055u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210058u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721005Bu, "pfmul mm4, mm6");
    void_lift_trap(0x1721005Fu, "pfmul mm5, mm7");
    void_lift_trap(0x17210063u, "pfadd mm4, mm3");
    MEM64(eax) = _mm[4]; /* 0x17210067: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x1721006A: movq qword ptr [eax + 8], mm5 */
    _mm[4] = _mm[0]; /* 0x1721006E: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x17210071: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17210074: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17210077: punpckhdq mm5, mm5 */
    void_lift_trap(0x1721007Au, "pfmul mm4, mm6");
    void_lift_trap(0x1721007Eu, "pfmul mm5, mm7");
    void_lift_trap(0x17210082u, "pfadd mm4, mm1");
    MEM64(eax + 0x10) = _mm[4]; /* 0x17210086: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x18) = _mm[5]; /* 0x1721008A: movq qword ptr [eax + 0x18], mm5 */
    _mm[4] = _mm[2]; /* 0x1721008E: movq mm4, mm2 */
    _mm[5] = _mm[2]; /* 0x17210091: movq mm5, mm2 */
    void_lift_trap(0x17210094u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210097u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721009Au, "pfmul mm4, mm6");
    void_lift_trap(0x1721009Eu, "pfmul mm5, mm7");
    void_lift_trap(0x172100A2u, "pfadd mm5, mm3");
    MEM64(eax + 0x20) = _mm[4]; /* 0x172100A6: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x172100AA: movq qword ptr [eax + 0x28], mm5 */
    _mm[4] = _mm[2]; /* 0x172100AE: movq mm4, mm2 */
    _mm[5] = _mm[2]; /* 0x172100B1: movq mm5, mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172100B4: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172100B7: punpckhdq mm5, mm5 */
    void_lift_trap(0x172100BAu, "pfmul mm4, mm6");
    void_lift_trap(0x172100BEu, "pfmul mm5, mm7");
    void_lift_trap(0x172100C2u, "pfadd mm5, mm1");
    MEM64(eax + 0x30) = _mm[4]; /* 0x172100C6: movq qword ptr [eax + 0x30], mm4 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x172100CA: movq qword ptr [eax + 0x38], mm5 */
    esp = ebp; /* 0x172100CE: mov esp, ebp */
    ebp = MEM32(esp + 0x10); /* 0x172100D0: mov ebp, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x172100D4: add esp, 0x14 */
    _flag_k = FK_ADD;
    void_lift_trap(0x172100D7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172100D9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172100E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172100E1u);

L_172100E1:
    void_lift_trap(0x172100E1u, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x172100E3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x172100E6: mov dword ptr [esp + 0x10], ebp */
    ebp = esp; /* 0x172100EA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x172100EC: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp; /* 0x172100EF: mov ecx, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x172100F1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x172100F4: push ecx */
    RECOMP_CALL(sub_17215C1B); /* 0x172100F5: call 0x17215c1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x172100FA: mov eax, dword ptr [ebp + 0x18] */
    _mm[0] = MEM64(esp); /* 0x172100FD: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x17210101: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x17210106: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x17210109: movq mm3, mm1 */
    void_lift_trap(0x1721010Cu, "pfmul mm0, qword ptr [0x1702a640]");
    void_lift_trap(0x17210114u, "pfmul mm1, qword ptr [0x1702a648]");
    _mm[4] = _mm[2]; /* 0x1721011C: movq mm4, mm2 */
    _mm[6] = _mm[2]; /* 0x1721011F: movq mm6, mm2 */
    void_lift_trap(0x17210122u, "unsupported PUNPCKLDQ operands");
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x17210125: punpckhdq mm6, mm6 */
    _mm[5] = _mm[4]; /* 0x17210128: movq mm5, mm4 */
    _mm[7] = _mm[6]; /* 0x1721012B: movq mm7, mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x1721012E: psrlq mm5, 0x20 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x17210132: psrlq mm7, 0x20 */
    void_lift_trap(0x17210136u, "pfmul mm4, mm0");
    void_lift_trap(0x1721013Au, "pfmul mm5, mm1");
    void_lift_trap(0x1721013Eu, "pfmul mm6, mm0");
    void_lift_trap(0x17210142u, "pfmul mm7, mm1");
    void_lift_trap(0x17210146u, "pfadd mm4, qword ptr [0x1702a630]");
    void_lift_trap(0x1721014Eu, "pfadd mm6, qword ptr [0x1702a628]");
    MEM64(eax) = _mm[4]; /* 0x17210156: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x17210159: movq qword ptr [eax + 8], mm5 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x1721015D: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[7]; /* 0x17210161: movq qword ptr [eax + 0x18], mm7 */
    _mm[4] = _mm[3]; /* 0x17210165: movq mm4, mm3 */
    _mm[6] = _mm[3]; /* 0x17210168: movq mm6, mm3 */
    void_lift_trap(0x1721016Bu, "unsupported PUNPCKLDQ operands");
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1721016E: punpckhdq mm6, mm6 */
    _mm[5] = _mm[4]; /* 0x17210171: movq mm5, mm4 */
    _mm[7] = _mm[6]; /* 0x17210174: movq mm7, mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x17210177: psrlq mm5, 0x20 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x1721017B: psrlq mm7, 0x20 */
    void_lift_trap(0x1721017Fu, "pfmul mm4, mm0");
    void_lift_trap(0x17210183u, "pfmul mm5, mm1");
    void_lift_trap(0x17210187u, "pfmul mm6, mm0");
    void_lift_trap(0x1721018Bu, "pfmul mm7, mm1");
    void_lift_trap(0x1721018Fu, "pfadd mm5, qword ptr [0x1702a630]");
    void_lift_trap(0x17210197u, "pfadd mm7, qword ptr [0x1702a628]");
    MEM64(eax + 0x20) = _mm[4]; /* 0x1721019F: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x172101A3: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x30) = _mm[6]; /* 0x172101A7: movq qword ptr [eax + 0x30], mm6 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x172101AB: movq qword ptr [eax + 0x38], mm7 */
    esp = ebp; /* 0x172101AF: mov esp, ebp */
    ebp = MEM32(esp + 0x10); /* 0x172101B1: mov ebp, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x172101B5: add esp, 0x14 */
    _flag_k = FK_ADD;
    void_lift_trap(0x172101B8u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172101BA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172101C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172101C2u);

L_172101C2:
    edi = edi; /* 0x172101C2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172101C4: push ebx */
    PUSH32(esp, esi); /* 0x172101C5: push esi */
    void_lift_trap(0x172101C6u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x172101C8: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_172167A0); /* 0x172101CD: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x172101D2: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x172101D6: movq mm4, mm0 */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x172101D9: pxor mm1, mm1 */
    _mm[2] = MEM64(0x1702A630); /* 0x172101DC: movq mm2, qword ptr [0x1702a630] */
    _mm[3] = MEM64(0x1702A628); /* 0x172101E3: movq mm3, qword ptr [0x1702a628] */
    _mm[4] = mmx_psrlq(_mm[4], 32); /* 0x172101EA: psrlq mm4, 0x20 */
    MEM64(eax) = _mm[2]; /* 0x172101EE: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x172101F1: movq qword ptr [eax + 8], mm1 */
    MEM32(eax + 0x10) = (uint32_t)_mm[1]; /* 0x172101F5: movd dword ptr [eax + 0x10], mm1 */
    MEM32(eax + 0x14) = (uint32_t)_mm[0]; /* 0x172101F9: movd dword ptr [eax + 0x14], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x172101FD: movq qword ptr [eax + 0x18], mm4 */
    _mm[4] = (_mm[4] ^ MEM64(0x1702A5E0)); /* 0x17210201: pxor mm4, qword ptr [0x1702a5e0] */
    MEM64(eax + 0x30) = _mm[1]; /* 0x17210208: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x1721020C: movq qword ptr [eax + 0x38], mm3 */
    MEM32(eax + 0x20) = (uint32_t)_mm[1]; /* 0x17210210: movd dword ptr [eax + 0x20], mm1 */
    MEM32(eax + 0x24) = (uint32_t)_mm[4]; /* 0x17210214: movd dword ptr [eax + 0x24], mm4 */
    MEM32(eax + 0x28) = (uint32_t)_mm[0]; /* 0x17210218: movd dword ptr [eax + 0x28], mm0 */
    MEM32(eax + 0x2C) = (uint32_t)_mm[1]; /* 0x1721021C: movd dword ptr [eax + 0x2c], mm1 */
    void_lift_trap(0x17210220u, "femms ");
    esi = POP32_VAL(esp); /* 0x17210222: pop esi */
    ebx = POP32_VAL(esp); /* 0x17210223: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17210224: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1721022C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721022Cu);

L_1721022C:
    edi = edi; /* 0x1721022C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721022E: push ebx */
    PUSH32(esp, esi); /* 0x1721022F: push esi */
    void_lift_trap(0x17210230u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x17210232: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_172167A0); /* 0x17210237: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x1721023C: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x17210240: movq mm4, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1702A5B8)); /* 0x17210243: pand mm0, qword ptr [0x1702a5b8] */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x1721024A: pxor mm1, mm1 */
    _mm[2] = MEM64(0x1702A630); /* 0x1721024D: movq mm2, qword ptr [0x1702a630] */
    _mm[3] = MEM64(0x1702A628); /* 0x17210254: movq mm3, qword ptr [0x1702a628] */
    _mm[4] = mmx_psrlq(_mm[4], 32); /* 0x1721025B: psrlq mm4, 0x20 */
    MEM64(eax + 0x10) = _mm[3]; /* 0x1721025F: movq qword ptr [eax + 0x10], mm3 */
    MEM64(eax + 0x18) = _mm[1]; /* 0x17210263: movq qword ptr [eax + 0x18], mm1 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x17210267: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x1721026B: movq qword ptr [eax + 0x38], mm3 */
    MEM64(eax + 0x20) = _mm[4]; /* 0x1721026F: movq qword ptr [eax + 0x20], mm4 */
    _mm[4] = (_mm[4] ^ MEM64(0x1702A5E0)); /* 0x17210273: pxor mm4, qword ptr [0x1702a5e0] */
    MEM64(eax) = _mm[0]; /* 0x1721027A: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x28) = _mm[0]; /* 0x1721027D: movq qword ptr [eax + 0x28], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x17210281: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x17210285u, "femms ");
    esi = POP32_VAL(esp); /* 0x17210287: pop esi */
    ebx = POP32_VAL(esp); /* 0x17210288: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17210289: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17210291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17210291u);

L_17210291:
    edi = edi; /* 0x17210291: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17210293: push ebx */
    PUSH32(esp, esi); /* 0x17210294: push esi */
    void_lift_trap(0x17210295u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x17210297: movd mm0, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_172167A0); /* 0x1721029C: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x172102A1: mov eax, dword ptr [esp + 0xc] */
    _mm[4] = _mm[0]; /* 0x172102A5: movq mm4, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172102A8: punpckhdq mm4, mm4 */
    _mm[1] = (_mm[1] ^ _mm[1]); /* 0x172102AB: pxor mm1, mm1 */
    _mm[2] = MEM64(0x1702A630); /* 0x172102AE: movq mm2, qword ptr [0x1702a630] */
    _mm[3] = MEM64(0x1702A628); /* 0x172102B5: movq mm3, qword ptr [0x1702a628] */
    void_lift_trap(0x172102BCu, "unsupported PUNPCKLDQ operands");
    _mm[4] = (_mm[4] ^ MEM64(0x1702A5E0)); /* 0x172102BF: pxor mm4, qword ptr [0x1702a5e0] */
    MEM64(eax) = _mm[0]; /* 0x172102C6: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x172102C9: movq qword ptr [eax + 8], mm1 */
    MEM64(eax + 0x18) = _mm[1]; /* 0x172102CD: movq qword ptr [eax + 0x18], mm1 */
    MEM64(eax + 0x20) = _mm[1]; /* 0x172102D1: movq qword ptr [eax + 0x20], mm1 */
    MEM64(eax + 0x28) = _mm[2]; /* 0x172102D5: movq qword ptr [eax + 0x28], mm2 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x172102D9: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x172102DD: movq qword ptr [eax + 0x38], mm3 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x172102E1: movq qword ptr [eax + 0x10], mm4 */
    void_lift_trap(0x172102E5u, "femms ");
    esi = POP32_VAL(esp); /* 0x172102E7: pop esi */
    ebx = POP32_VAL(esp); /* 0x172102E8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172102E9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172102F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172102F1u);

L_172102F1:
    void_lift_trap(0x172102F1u, "femms ");
    eax = MEM32(esp + 0x4); /* 0x172102F3: mov eax, dword ptr [esp + 4] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x172102F7: movd mm3, dword ptr [esp + 0xc] */
    _mm[1] = MEM64(0x1702A628); /* 0x172102FC: movq mm1, qword ptr [0x1702a628] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x17210303: movd mm2, dword ptr [esp + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17210308: pxor mm0, mm0 */
    _mm[3] = mmx_psllq(_mm[3], 32); /* 0x1721030B: psllq mm3, 0x20 */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(esp + 0x10)); /* 0x1721030F: movd mm4, dword ptr [esp + 0x10] */
    MEM64(eax) = _mm[2]; /* 0x17210314: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x17210317: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x1721031B: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x1721031F: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x17210323: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x10) = _mm[3]; /* 0x17210327: movq qword ptr [eax + 0x10], mm3 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x1721032B: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x1721032F: movq qword ptr [eax + 0x38], mm1 */
    void_lift_trap(0x17210333u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17210335: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1721033D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721033Du);

L_1721033D:
    edx = MEM32(esp + 0x8); /* 0x1721033D: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x17210341: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x17210344: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x17210348: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x1721034C: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x17210350: movq mm2, mm0 */
    eax = MEM32(esp + 0x4); /* 0x17210353: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x17210357u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x1721035A: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x1721035D: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x17210360: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17210363: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x17210367: movq mm6, qword ptr [edx + 8] */
    void_lift_trap(0x1721036Bu, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(edx + 0x18); /* 0x1721036E: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x17210372: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x17210376: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x17210379: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x1721037C: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x17210380: movq qword ptr [eax + 0x38], mm5 */
    void_lift_trap(0x17210384u, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(edx + 0x30); /* 0x17210387: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x1721038B: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x1721038E: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x17210391: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17210395: punpckhdq mm0, mm4 */
    void_lift_trap(0x17210398u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[1]; /* 0x1721039B: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x1721039F: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x172103A3: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x172103A7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172103A9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172103B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172103B1u);

L_172103B1:
    eax = MEM32(esp + 0x4); /* 0x172103B1: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x172103B5: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x172103B9: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x172103BC: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x172103C0: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x172103C3: movq mm3, mm0 */
    void_lift_trap(0x172103C6u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x172103CA: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x172103CD: movq mm7, mm1 */
    void_lift_trap(0x172103D0u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172103D4: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x172103D7: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172103DA: punpckhdq mm4, mm4 */
    void_lift_trap(0x172103DDu, "pfmul mm3, mm0");
    void_lift_trap(0x172103E1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172103E4u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172103E7u, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x172103EB: movq mm6, mm1 */
    void_lift_trap(0x172103EEu, "pfmul mm7, mm1");
    void_lift_trap(0x172103F2u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x172103F6: pxor mm0, mm0 */
    void_lift_trap(0x172103F9u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x172103FD: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x17210400: punpckhdq mm1, mm7 */
    void_lift_trap(0x17210403u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210406u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17210409: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x1721040Du, "pfadd mm7, mm3");
    void_lift_trap(0x17210411u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x17210415: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x17210418: punpckhdq mm6, mm5 */
    void_lift_trap(0x1721041Bu, "pfsubr mm3, qword ptr [0x1702a568]");
    void_lift_trap(0x17210423u, "pfsubr mm7, qword ptr [0x1702a568]");
    void_lift_trap(0x1721042Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721042Eu, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210432: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x17210436u, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x1721043A: movq mm3, mm2 */
    void_lift_trap(0x1721043Du, "pfadd mm2, mm5");
    void_lift_trap(0x17210441u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x17210445: movq mm5, mm4 */
    void_lift_trap(0x17210448u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[1]; /* 0x1721044B: movq mm6, mm1 */
    void_lift_trap(0x1721044Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210451u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x18) = _mm[2]; /* 0x17210454: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x17210458: punpckhdq mm5, mm0 */
    void_lift_trap(0x1721045Bu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[5]; /* 0x17210462: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x17210466: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x17210469: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x1721046D: punpckhdq mm7, mm1 */
    void_lift_trap(0x17210470u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[7]; /* 0x17210473: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x17210476: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x1721047A: movq qword ptr [eax + 0x38], mm0 */
    void_lift_trap(0x1721047Eu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17210480: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17210488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17210488u);

L_17210488:
    eax = MEM32(esp + 0x4); /* 0x17210488: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x1721048C: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x17210490: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x17210493: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x17210497u, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x1721049B: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x1721049E: movq mm2, mm0 */
    void_lift_trap(0x172104A1u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x172104A5: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x172104A8: punpckhdq mm6, mm1 */
    void_lift_trap(0x172104ABu, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x172104AF: movq mm5, mm0 */
    void_lift_trap(0x172104B2u, "pfmul mm0, mm2");
    void_lift_trap(0x172104B6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172104B9u, "pfmul mm2, mm1");
    void_lift_trap(0x172104BDu, "pfmul mm3, mm1");
    void_lift_trap(0x172104C1u, "pfmul mm1, mm4");
    void_lift_trap(0x172104C5u, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x172104C9: movq mm4, mm0 */
    void_lift_trap(0x172104CCu, "pfsubr mm0, qword ptr [0x1702a568]");
    _mm[5] = _mm[1]; /* 0x172104D4: movq mm5, mm1 */
    void_lift_trap(0x172104D7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172104DAu, "pfpnacc mm3, mm3");
    void_lift_trap(0x172104DEu, "pfacc mm4, mm4");
    void_lift_trap(0x172104E2u, "pfpnacc mm6, mm6");
    void_lift_trap(0x172104E6u, "pfpnacc mm2, mm2");
    void_lift_trap(0x172104EAu, "pfsub mm0, mm1");
    void_lift_trap(0x172104EEu, "pswapd mm5, mm2");
    void_lift_trap(0x172104F2u, "pfsubr mm4, qword ptr [0x1702a568]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x172104FA: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x172104FD: movq mm1, mm0 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x17210500: movq qword ptr [eax + 0x30], mm7 */
    void_lift_trap(0x17210504u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210507u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x1721050A: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x1721050D: punpckhdq mm0, mm6 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x17210510: movq qword ptr [eax + 0x20], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x17210514: punpckhdq mm3, mm7 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x17210517: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x1721051Bu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x28) = _mm[4]; /* 0x1721051E: movq qword ptr [eax + 0x28], mm4 */
    void_lift_trap(0x17210522u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[0]; /* 0x17210529: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x1721052C: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17210530: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x17210534: movq qword ptr [eax + 0x38], mm7 */
    void_lift_trap(0x17210538u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1721053A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17210542(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17210542u);

L_17210542:
    edi = edi; /* 0x17210542: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17210544: push ebp */
    ebp = esp; /* 0x17210545: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x17210547: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x1721054D: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x17210550: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x17210553: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x17210556: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17210558: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721120B; /* 0x1721055B: je 0x1721120b */
L_17210561:
    /* test ecx, ecx */ /* 0x17210561: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721116E; /* 0x17210563: je 0x1721116e */
L_17210569:
    _mm[1] = MEM64(0x1702A548); /* 0x17210569: movq mm1, qword ptr [0x1702a548] */
    _mm[2] = MEM64(edx); /* 0x17210570: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17210573: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x17210577: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x1721057A: movq mm3, mm2 */
    void_lift_trap(0x1721057Du, "unsupported PUNPCKLDQ operands");
    _mm[0] = _mm[5]; /* 0x17210580: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x17210583: punpckhdq mm5, mm3 */
    MEM64(esp) = _mm[2]; /* 0x17210586: movq qword ptr [esp], mm2 */
    MEM64(esp + 0x8) = _mm[0]; /* 0x1721058A: movq qword ptr [esp + 8], mm0 */
    MEM64(esp + 0x10) = _mm[5]; /* 0x1721058F: movq qword ptr [esp + 0x10], mm5 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x17210594: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x20) = _mm[0]; /* 0x17210599: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x1721059E: movq qword ptr [esp + 0x28], mm4 */
    MEM64(esp + 0x30) = _mm[0]; /* 0x172105A3: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[1]; /* 0x172105A8: movq qword ptr [esp + 0x38], mm1 */
    eax = esp + 0x40; /* 0x172105AD: lea eax, [esp + 0x40] */
    _mm[0] = MEM64(ecx); /* 0x172105B1: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x172105B4: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x172105B8: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x172105BB: movq mm3, mm0 */
    void_lift_trap(0x172105BEu, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x172105C2: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x172105C5: movq mm7, mm1 */
    void_lift_trap(0x172105C8u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172105CC: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x172105CF: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172105D2: punpckhdq mm4, mm4 */
    void_lift_trap(0x172105D5u, "pfmul mm3, mm0");
    void_lift_trap(0x172105D9u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172105DCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172105DFu, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x172105E3: movq mm6, mm1 */
    void_lift_trap(0x172105E6u, "pfmul mm7, mm1");
    void_lift_trap(0x172105EAu, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x172105EE: pxor mm0, mm0 */
    void_lift_trap(0x172105F1u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x172105F5: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x172105F8: punpckhdq mm1, mm7 */
    void_lift_trap(0x172105FBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172105FEu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17210601: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x17210605u, "pfadd mm7, mm3");
    void_lift_trap(0x17210609u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x1721060D: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x17210610: punpckhdq mm6, mm5 */
    void_lift_trap(0x17210613u, "pfsubr mm3, qword ptr [0x1702a568]");
    void_lift_trap(0x1721061Bu, "pfsubr mm7, qword ptr [0x1702a568]");
    void_lift_trap(0x17210623u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210626u, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x1721062A: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x1721062Eu, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x17210632: movq mm3, mm2 */
    void_lift_trap(0x17210635u, "pfadd mm2, mm5");
    void_lift_trap(0x17210639u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x1721063D: movq mm5, mm4 */
    void_lift_trap(0x17210640u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[1]; /* 0x17210643: movq mm6, mm1 */
    void_lift_trap(0x17210646u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210649u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x18) = _mm[2]; /* 0x1721064C: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x17210650: punpckhdq mm5, mm0 */
    void_lift_trap(0x17210653u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[5]; /* 0x1721065A: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x1721065E: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x17210661: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x17210665: punpckhdq mm7, mm1 */
    void_lift_trap(0x17210668u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[7]; /* 0x1721066B: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x1721066E: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x17210672: movq qword ptr [eax + 0x38], mm0 */
    edx = MEM32(ebp + 0xC); /* 0x17210676: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x17210679: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17210D53; /* 0x1721067B: je 0x17210d53 */
L_17210681:
    _mm[0] = MEM64(esp + 0x40); /* 0x17210681: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x17210686: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x1721068B: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x17210690: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x17210695: movq mm2, mm0 */
    void_lift_trap(0x17210698u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x1721069B: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x1721069E: movq mm5, mm3 */
    MEM64(esp + 0x80) = _mm[0]; /* 0x172106A1: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x90) = _mm[2]; /* 0x172106A9: movq qword ptr [esp + 0x90], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x172106B1: movq mm6, qword ptr [esp + 0x48] */
    void_lift_trap(0x172106B6u, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(esp + 0x58); /* 0x172106B9: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x172106BE: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x172106C3: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x172106C6: movq mm1, mm6 */
    MEM64(esp + 0xA8) = _mm[3]; /* 0x172106C9: movq qword ptr [esp + 0xa8], mm3 */
    MEM64(esp + 0xB8) = _mm[5]; /* 0x172106D1: movq qword ptr [esp + 0xb8], mm5 */
    void_lift_trap(0x172106D9u, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(esp + 0x70); /* 0x172106DC: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x172106E1: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x172106E4: punpckhdq mm1, mm7 */
    MEM64(esp + 0xA0) = _mm[6]; /* 0x172106E7: movq qword ptr [esp + 0xa0], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x172106EF: punpckhdq mm0, mm4 */
    void_lift_trap(0x172106F2u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0xB0) = _mm[1]; /* 0x172106F5: movq qword ptr [esp + 0xb0], mm1 */
    MEM64(esp + 0x98) = _mm[0]; /* 0x172106FD: movq qword ptr [esp + 0x98], mm0 */
    MEM64(esp + 0x88) = _mm[2]; /* 0x17210705: movq qword ptr [esp + 0x88], mm2 */
    eax = MEM32(ebp + 0x8); /* 0x1721070D: mov eax, dword ptr [ebp + 8] */
    _mm[3] = MEM64(edx); /* 0x17210710: movq mm3, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17210713: movd mm4, dword ptr [edx + 8] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x1702A558)); /* 0x17210717: movd mm1, dword ptr [0x1702a558] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x1721071E: pxor mm0, mm0 */
    _mm[2] = _mm[1]; /* 0x17210721: movq mm2, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210724: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210727u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[1]; /* 0x1721072A: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x1721072D: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17210731: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17210735: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x17210739: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x1721073D: movq qword ptr [eax + 0x28], mm1 */
    void_lift_trap(0x17210741u, "pfsub mm2, mm4");
    void_lift_trap(0x17210745u, "pfsub mm0, mm3");
    MEM64(eax + 0x38) = _mm[2]; /* 0x17210749: movq qword ptr [eax + 0x38], mm2 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x1721074D: movq qword ptr [eax + 0x30], mm0 */
    _mm[0] = MEM64(eax); /* 0x17210751: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17210754: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x80); /* 0x17210758: movq mm4, qword ptr [esp + 0x80] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210760: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x17210763: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721076B: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x1721076E: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17210776u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210779u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721077Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210780: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210783u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x1721078C: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x17210794u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210798: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721079Bu, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x172107A4u, "pfadd mm5, mm4");
    void_lift_trap(0x172107A8u, "pfmul mm6, mm1");
    void_lift_trap(0x172107ACu, "pfadd mm2, mm0");
    void_lift_trap(0x172107B0u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x172107B9u, "pfadd mm6, mm5");
    void_lift_trap(0x172107BDu, "pfmul mm7, mm3");
    void_lift_trap(0x172107C1u, "pfadd mm2, mm1");
    void_lift_trap(0x172107C5u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x172107CEu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172107D2: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172107D6u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172107DA: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172107DE: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x172107E1: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172107E9: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172107ED: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x172107F0: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172107F8: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x172107FB: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17210803u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210806u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210809u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721080D: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210810u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x17210819: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x17210821u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210825: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210828u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x17210831u, "pfadd mm5, mm4");
    void_lift_trap(0x17210835u, "pfmul mm6, mm1");
    void_lift_trap(0x17210839u, "pfadd mm2, mm0");
    void_lift_trap(0x1721083Du, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x17210846u, "pfadd mm6, mm5");
    void_lift_trap(0x1721084Au, "pfmul mm7, mm3");
    void_lift_trap(0x1721084Eu, "pfadd mm2, mm1");
    void_lift_trap(0x17210852u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x1721085Bu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x1721085F: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17210863u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17210867: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x1721086B: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x1721086F: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17210877: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721087B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x1721087E: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210886: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x17210889: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17210891u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210894u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210897u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721089B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721089Eu, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x172108A7: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x172108AFu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172108B3: punpckhdq mm3, mm3 */
    void_lift_trap(0x172108B6u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x172108BFu, "pfadd mm5, mm4");
    void_lift_trap(0x172108C3u, "pfmul mm6, mm1");
    void_lift_trap(0x172108C7u, "pfadd mm2, mm0");
    void_lift_trap(0x172108CBu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x172108D4u, "pfadd mm6, mm5");
    void_lift_trap(0x172108D8u, "pfmul mm7, mm3");
    void_lift_trap(0x172108DCu, "pfadd mm2, mm1");
    void_lift_trap(0x172108E0u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x172108E9u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x172108ED: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x172108F1u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x172108F5: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172108F9: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x172108FD: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210905: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210909: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x1721090C: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210914: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x17210917: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x1721091Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210922u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210925u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210929: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721092Cu, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x17210935: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x1721093Du, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210941: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210944u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x1721094Du, "pfadd mm5, mm4");
    void_lift_trap(0x17210951u, "pfmul mm6, mm1");
    void_lift_trap(0x17210955u, "pfadd mm2, mm0");
    void_lift_trap(0x17210959u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x17210962u, "pfadd mm6, mm5");
    void_lift_trap(0x17210966u, "pfmul mm7, mm3");
    void_lift_trap(0x1721096Au, "pfadd mm2, mm1");
    void_lift_trap(0x1721096Eu, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x17210977u, "pfadd mm7, mm6");
    void_lift_trap(0x1721097Bu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x1721097F: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17210983: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x17210987: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x1721098A: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x1721098E: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210992: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210995: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721099A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x1721099D: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x172109A2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172109A5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172109A8u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172109AC: punpckhdq mm2, mm2 */
    void_lift_trap(0x172109AFu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x172109B5: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x172109BAu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172109BE: punpckhdq mm3, mm3 */
    void_lift_trap(0x172109C1u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x172109C7u, "pfadd mm5, mm4");
    void_lift_trap(0x172109CBu, "pfmul mm6, mm1");
    void_lift_trap(0x172109CFu, "pfadd mm2, mm0");
    void_lift_trap(0x172109D3u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x172109D9u, "pfadd mm6, mm5");
    void_lift_trap(0x172109DDu, "pfmul mm7, mm3");
    void_lift_trap(0x172109E1u, "pfadd mm2, mm1");
    void_lift_trap(0x172109E5u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x172109EBu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172109EF: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172109F3u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172109F7: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172109FB: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x172109FE: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17210A02: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210A06: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210A09: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210A0E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210A11: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210A16u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210A19u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210A1Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210A20: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210A23u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210A29: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210A2Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210A32: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210A35u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210A3Bu, "pfadd mm5, mm4");
    void_lift_trap(0x17210A3Fu, "pfmul mm6, mm1");
    void_lift_trap(0x17210A43u, "pfadd mm2, mm0");
    void_lift_trap(0x17210A47u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210A4Du, "pfadd mm6, mm5");
    void_lift_trap(0x17210A51u, "pfmul mm7, mm3");
    void_lift_trap(0x17210A55u, "pfadd mm2, mm1");
    void_lift_trap(0x17210A59u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210A5Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17210A63: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17210A67u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17210A6B: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17210A6F: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x17210A73: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17210A77: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210A7B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210A7E: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210A83: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210A86: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210A8Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210A8Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210A91u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210A95: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210A98u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210A9E: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210AA3u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210AA7: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210AAAu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210AB0u, "pfadd mm5, mm4");
    void_lift_trap(0x17210AB4u, "pfmul mm6, mm1");
    void_lift_trap(0x17210AB8u, "pfadd mm2, mm0");
    void_lift_trap(0x17210ABCu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210AC2u, "pfadd mm6, mm5");
    void_lift_trap(0x17210AC6u, "pfmul mm7, mm3");
    void_lift_trap(0x17210ACAu, "pfadd mm2, mm1");
    void_lift_trap(0x17210ACEu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210AD4u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17210AD8: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17210ADCu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17210AE0: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17210AE4: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x17210AE8: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210AEC: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210AF0: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210AF3: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210AF8: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210AFB: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210B00u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210B03u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210B06u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210B0A: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210B0Du, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210B13: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210B18u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210B1C: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210B1Fu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210B25u, "pfadd mm5, mm4");
    void_lift_trap(0x17210B29u, "pfmul mm6, mm1");
    void_lift_trap(0x17210B2Du, "pfadd mm2, mm0");
    void_lift_trap(0x17210B31u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210B37u, "pfadd mm6, mm5");
    void_lift_trap(0x17210B3Bu, "pfmul mm7, mm3");
    void_lift_trap(0x17210B3Fu, "pfadd mm2, mm1");
    void_lift_trap(0x17210B43u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210B49u, "pfadd mm7, mm6");
    void_lift_trap(0x17210B4Du, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17210B51: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17210B55: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x17210B59: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17210B5C: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17210B60: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210B65: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17210B68: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210B6D: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17210B70: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17210B75u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210B78u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210B7Bu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210B7F: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210B82u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17210B88: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17210B8Du, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210B91: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210B94u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17210B9Au, "pfadd mm5, mm4");
    void_lift_trap(0x17210B9Eu, "pfmul mm6, mm1");
    void_lift_trap(0x17210BA2u, "pfadd mm2, mm0");
    void_lift_trap(0x17210BA6u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17210BACu, "pfadd mm6, mm5");
    void_lift_trap(0x17210BB0u, "pfmul mm7, mm3");
    void_lift_trap(0x17210BB4u, "pfadd mm2, mm1");
    void_lift_trap(0x17210BB8u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17210BBEu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17210BC2: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17210BC6u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17210BCA: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17210BCE: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17210BD1: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17210BD6: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210BDA: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17210BDD: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210BE2: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17210BE5: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17210BEAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210BEDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210BF0u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210BF4: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210BF7u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17210BFD: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17210C02u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210C06: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210C09u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17210C0Fu, "pfadd mm5, mm4");
    void_lift_trap(0x17210C13u, "pfmul mm6, mm1");
    void_lift_trap(0x17210C17u, "pfadd mm2, mm0");
    void_lift_trap(0x17210C1Bu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17210C21u, "pfadd mm6, mm5");
    void_lift_trap(0x17210C25u, "pfmul mm7, mm3");
    void_lift_trap(0x17210C29u, "pfadd mm2, mm1");
    void_lift_trap(0x17210C2Du, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17210C33u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17210C37: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17210C3Bu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17210C3F: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17210C43: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17210C47: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17210C4C: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210C50: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17210C53: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210C58: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17210C5B: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17210C60u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210C63u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210C66u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210C6A: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210C6Du, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17210C73: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17210C78u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210C7C: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210C7Fu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17210C85u, "pfadd mm5, mm4");
    void_lift_trap(0x17210C89u, "pfmul mm6, mm1");
    void_lift_trap(0x17210C8Du, "pfadd mm2, mm0");
    void_lift_trap(0x17210C91u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17210C97u, "pfadd mm6, mm5");
    void_lift_trap(0x17210C9Bu, "pfmul mm7, mm3");
    void_lift_trap(0x17210C9Fu, "pfadd mm2, mm1");
    void_lift_trap(0x17210CA3u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17210CA9u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17210CAD: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17210CB1u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17210CB5: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17210CB9: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17210CBD: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210CC2: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210CC6: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17210CC9: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210CCE: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17210CD1: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17210CD6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210CD9u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210CDCu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210CE0: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210CE3u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17210CE9: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17210CEEu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210CF2: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210CF5u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17210CFBu, "pfadd mm5, mm4");
    void_lift_trap(0x17210CFFu, "pfmul mm6, mm1");
    void_lift_trap(0x17210D03u, "pfadd mm2, mm0");
    void_lift_trap(0x17210D07u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17210D0Du, "pfadd mm6, mm5");
    void_lift_trap(0x17210D11u, "pfmul mm7, mm3");
    void_lift_trap(0x17210D15u, "pfadd mm2, mm1");
    void_lift_trap(0x17210D19u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17210D1Fu, "pfadd mm7, mm6");
    void_lift_trap(0x17210D23u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17210D27: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17210D2B: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(edx); /* 0x17210D2F: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(eax + 0x30); /* 0x17210D32: movq mm1, qword ptr [eax + 0x30] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17210D36: movd mm2, dword ptr [edx + 8] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17210D3A: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x17210D3Eu, "pfadd mm0, mm1");
    void_lift_trap(0x17210D42u, "pfadd mm2, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17210D46: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[2]; /* 0x17210D4A: movd dword ptr [eax + 0x38], mm2 */
    goto L_1721123D; /* 0x17210D4E: jmp 0x1721123d */
L_17210D53:
    eax = MEM32(ebp + 0x8); /* 0x17210D53: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp + 0x40); /* 0x17210D56: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x17210D5B: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x17210D60: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x17210D65: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x17210D6A: movq mm2, mm0 */
    void_lift_trap(0x17210D6Du, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x17210D70: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x17210D73: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x17210D76: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17210D79: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x17210D7D: movq mm6, qword ptr [esp + 0x48] */
    void_lift_trap(0x17210D82u, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(esp + 0x58); /* 0x17210D85: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x17210D8A: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x17210D8F: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x17210D92: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210D95: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x17210D99: movq qword ptr [eax + 0x38], mm5 */
    void_lift_trap(0x17210D9Du, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(esp + 0x70); /* 0x17210DA0: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x17210DA5: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x17210DA8: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x17210DAB: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17210DAF: punpckhdq mm0, mm4 */
    void_lift_trap(0x17210DB2u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[1]; /* 0x17210DB5: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17210DB9: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x17210DBD: movq qword ptr [eax + 8], mm2 */
    _mm[0] = MEM64(eax); /* 0x17210DC1: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17210DC4: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x17210DC8: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210DCC: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210DCF: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210DD4: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210DD7: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210DDCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210DDFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210DE2u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210DE6: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210DE9u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210DEF: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210DF4u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210DF8: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210DFBu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210E01u, "pfadd mm5, mm4");
    void_lift_trap(0x17210E05u, "pfmul mm6, mm1");
    void_lift_trap(0x17210E09u, "pfadd mm2, mm0");
    void_lift_trap(0x17210E0Du, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210E13u, "pfadd mm6, mm5");
    void_lift_trap(0x17210E17u, "pfmul mm7, mm3");
    void_lift_trap(0x17210E1Bu, "pfadd mm2, mm1");
    void_lift_trap(0x17210E1Fu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210E25u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17210E29: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17210E2Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17210E31: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17210E35: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x17210E38: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17210E3C: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210E40: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210E43: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210E48: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210E4B: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210E50u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210E53u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210E56u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210E5A: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210E5Du, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210E63: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210E68u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210E6C: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210E6Fu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210E75u, "pfadd mm5, mm4");
    void_lift_trap(0x17210E79u, "pfmul mm6, mm1");
    void_lift_trap(0x17210E7Du, "pfadd mm2, mm0");
    void_lift_trap(0x17210E81u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210E87u, "pfadd mm6, mm5");
    void_lift_trap(0x17210E8Bu, "pfmul mm7, mm3");
    void_lift_trap(0x17210E8Fu, "pfadd mm2, mm1");
    void_lift_trap(0x17210E93u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210E99u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17210E9D: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17210EA1u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17210EA5: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17210EA9: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x17210EAD: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17210EB1: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210EB5: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210EB8: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210EBD: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210EC0: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210EC5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210EC8u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210ECBu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210ECF: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210ED2u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210ED8: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210EDDu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210EE1: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210EE4u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210EEAu, "pfadd mm5, mm4");
    void_lift_trap(0x17210EEEu, "pfmul mm6, mm1");
    void_lift_trap(0x17210EF2u, "pfadd mm2, mm0");
    void_lift_trap(0x17210EF6u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210EFCu, "pfadd mm6, mm5");
    void_lift_trap(0x17210F00u, "pfmul mm7, mm3");
    void_lift_trap(0x17210F04u, "pfadd mm2, mm1");
    void_lift_trap(0x17210F08u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210F0Eu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17210F12: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17210F16u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17210F1A: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17210F1E: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x17210F22: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17210F26: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210F2A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17210F2D: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210F32: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17210F35: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17210F3Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210F3Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210F40u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210F44: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210F47u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17210F4D: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17210F52u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210F56: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210F59u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17210F5Fu, "pfadd mm5, mm4");
    void_lift_trap(0x17210F63u, "pfmul mm6, mm1");
    void_lift_trap(0x17210F67u, "pfadd mm2, mm0");
    void_lift_trap(0x17210F6Bu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17210F71u, "pfadd mm6, mm5");
    void_lift_trap(0x17210F75u, "pfmul mm7, mm3");
    void_lift_trap(0x17210F79u, "pfadd mm2, mm1");
    void_lift_trap(0x17210F7Du, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17210F83u, "pfadd mm7, mm6");
    void_lift_trap(0x17210F87u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17210F8B: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17210F8F: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x17210F93: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17210F96: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17210F9A: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17210F9F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17210FA2: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17210FA7: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17210FAA: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17210FAFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210FB2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17210FB5u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17210FB9: punpckhdq mm2, mm2 */
    void_lift_trap(0x17210FBCu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17210FC2: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17210FC7u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17210FCB: punpckhdq mm3, mm3 */
    void_lift_trap(0x17210FCEu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17210FD4u, "pfadd mm5, mm4");
    void_lift_trap(0x17210FD8u, "pfmul mm6, mm1");
    void_lift_trap(0x17210FDCu, "pfadd mm2, mm0");
    void_lift_trap(0x17210FE0u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17210FE6u, "pfadd mm6, mm5");
    void_lift_trap(0x17210FEAu, "pfmul mm7, mm3");
    void_lift_trap(0x17210FEEu, "pfadd mm2, mm1");
    void_lift_trap(0x17210FF2u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17210FF8u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17210FFC: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17211000u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17211004: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17211008: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721100B: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17211010: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211014: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17211017: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721101C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x1721101F: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17211024u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211027u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721102Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721102E: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211031u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17211037: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721103Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211040: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211043u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17211049u, "pfadd mm5, mm4");
    void_lift_trap(0x1721104Du, "pfmul mm6, mm1");
    void_lift_trap(0x17211051u, "pfadd mm2, mm0");
    void_lift_trap(0x17211055u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1721105Bu, "pfadd mm6, mm5");
    void_lift_trap(0x1721105Fu, "pfmul mm7, mm3");
    void_lift_trap(0x17211063u, "pfadd mm2, mm1");
    void_lift_trap(0x17211067u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721106Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17211071: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17211075u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17211079: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x1721107D: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17211081: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17211086: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721108A: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x1721108D: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211092: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17211095: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x1721109Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721109Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172110A0u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172110A4: punpckhdq mm2, mm2 */
    void_lift_trap(0x172110A7u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172110AD: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172110B2u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172110B6: punpckhdq mm3, mm3 */
    void_lift_trap(0x172110B9u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172110BFu, "pfadd mm5, mm4");
    void_lift_trap(0x172110C3u, "pfmul mm6, mm1");
    void_lift_trap(0x172110C7u, "pfadd mm2, mm0");
    void_lift_trap(0x172110CBu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172110D1u, "pfadd mm6, mm5");
    void_lift_trap(0x172110D5u, "pfmul mm7, mm3");
    void_lift_trap(0x172110D9u, "pfadd mm2, mm1");
    void_lift_trap(0x172110DDu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x172110E3u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x172110E7: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x172110EBu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x172110EF: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172110F3: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172110F7: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172110FC: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211100: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17211103: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211108: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x1721110B: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17211110u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211113u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211116u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721111A: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721111Du, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17211123: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17211128u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721112C: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721112Fu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17211135u, "pfadd mm5, mm4");
    void_lift_trap(0x17211139u, "pfmul mm6, mm1");
    void_lift_trap(0x1721113Du, "pfadd mm2, mm0");
    void_lift_trap(0x17211141u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17211147u, "pfadd mm6, mm5");
    void_lift_trap(0x1721114Bu, "pfmul mm7, mm3");
    void_lift_trap(0x1721114Fu, "pfadd mm2, mm1");
    void_lift_trap(0x17211153u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17211159u, "pfadd mm7, mm6");
    void_lift_trap(0x1721115Du, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17211161: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17211165: movq qword ptr [eax + 0x38], mm3 */
    goto L_1721123D; /* 0x17211169: jmp 0x1721123d */
L_1721116E:
    ecx = MEM32(ebp + 0xC); /* 0x1721116E: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x17211171: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172111CD; /* 0x17211173: je 0x172111cd */
L_17211175:
    _mm[1] = MEM64(0x1702A568); /* 0x17211175: movq mm1, qword ptr [0x1702a568] */
    _mm[4] = MEM64(ecx); /* 0x1721117C: movq mm4, qword ptr [ecx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x1721117F: movd mm5, dword ptr [ecx + 8] */
    _mm[2] = MEM64(edx); /* 0x17211183: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17211186: movd mm3, dword ptr [edx + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x1721118A: pxor mm0, mm0 */
    _mm[6] = _mm[1]; /* 0x1721118D: movq mm6, mm1 */
    void_lift_trap(0x17211190u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211193u, "pfsub mm1, mm2");
    MEM64(eax + 0x28) = _mm[3]; /* 0x17211197: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x1721119Bu, "pfsub mm6, mm3");
    MEM64(eax + 0x8) = _mm[0]; /* 0x1721119F: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x172111A3: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x172111A7: movq qword ptr [eax + 0x20], mm0 */
    void_lift_trap(0x172111ABu, "pfmul mm1, mm4");
    _mm[4] = _mm[2]; /* 0x172111AF: movq mm4, mm2 */
    void_lift_trap(0x172111B2u, "pfmul mm6, mm5");
    void_lift_trap(0x172111B6u, "unsupported PUNPCKLDQ operands");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x172111B9: punpckhdq mm0, mm4 */
    MEM64(eax) = _mm[2]; /* 0x172111BC: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[0]; /* 0x172111BF: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x172111C3: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[6]; /* 0x172111C7: movq qword ptr [eax + 0x38], mm6 */
    goto L_1721123D; /* 0x172111CB: jmp 0x1721123d */
L_172111CD:
    _mm[1] = MEM64(0x1702A548); /* 0x172111CD: movq mm1, qword ptr [0x1702a548] */
    _mm[2] = MEM64(edx); /* 0x172111D4: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x172111D7: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x172111DB: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x172111DE: movq mm3, mm2 */
    void_lift_trap(0x172111E1u, "unsupported PUNPCKLDQ operands");
    _mm[0] = _mm[5]; /* 0x172111E4: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x172111E7: punpckhdq mm5, mm3 */
    MEM64(eax) = _mm[2]; /* 0x172111EA: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x172111ED: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[5]; /* 0x172111F1: movq qword ptr [eax + 0x10], mm5 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x172111F5: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x172111F9: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x172111FD: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211201: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x17211205: movq qword ptr [eax + 0x38], mm1 */
    goto L_1721123D; /* 0x17211209: jmp 0x1721123d */
L_1721120B:
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x1702A558)); /* 0x1721120B: movd mm1, dword ptr [0x1702a558] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17211212: pxor mm0, mm0 */
    _mm[2] = _mm[1]; /* 0x17211215: movq mm2, mm1 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211218: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721121Bu, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[1]; /* 0x1721121E: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x17211221: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17211225: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17211229: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x1721122D: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x17211231: movq qword ptr [eax + 0x28], mm1 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211235: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[2]; /* 0x17211239: movq qword ptr [eax + 0x38], mm2 */
L_1721123D:
    ecx = MEM32(ebp + 0x1C); /* 0x1721123D: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x17211240: mov edx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x17211243: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17211710; /* 0x17211245: je 0x17211710 */
L_1721124B:
    _mm[0] = MEM64(ecx); /* 0x1721124B: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x1721124E: movq mm1, qword ptr [ecx + 8] */
    _mm[2] = _mm[0]; /* 0x17211252: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x17211255: movq mm3, mm0 */
    void_lift_trap(0x17211258u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x1721125C: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x1721125F: movq mm7, mm1 */
    void_lift_trap(0x17211262u, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211266: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x17211269: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x1721126C: punpckhdq mm4, mm4 */
    void_lift_trap(0x1721126Fu, "pfmul mm3, mm0");
    void_lift_trap(0x17211273u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211276u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211279u, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x1721127D: movq mm6, mm1 */
    void_lift_trap(0x17211280u, "pfmul mm7, mm1");
    void_lift_trap(0x17211284u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17211288: pxor mm0, mm0 */
    void_lift_trap(0x1721128Bu, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x1721128F: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x17211292: punpckhdq mm1, mm7 */
    void_lift_trap(0x17211295u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211298u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x70) = _mm[0]; /* 0x1721129B: movq qword ptr [esp + 0x70], mm0 */
    void_lift_trap(0x172112A0u, "pfadd mm7, mm3");
    void_lift_trap(0x172112A4u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x172112A8: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x172112AB: punpckhdq mm6, mm5 */
    void_lift_trap(0x172112AEu, "pfsubr mm3, qword ptr [0x1702a568]");
    void_lift_trap(0x172112B6u, "pfsubr mm7, qword ptr [0x1702a568]");
    void_lift_trap(0x172112BEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172112C1u, "pfadd mm1, mm6");
    MEM64(esp + 0x68) = _mm[3]; /* 0x172112C5: movq qword ptr [esp + 0x68], mm3 */
    void_lift_trap(0x172112CAu, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x172112CE: movq mm3, mm2 */
    void_lift_trap(0x172112D1u, "pfadd mm2, mm5");
    void_lift_trap(0x172112D5u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x172112D9: movq mm5, mm4 */
    void_lift_trap(0x172112DCu, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[1]; /* 0x172112DF: movq mm6, mm1 */
    void_lift_trap(0x172112E2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172112E5u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x58) = _mm[2]; /* 0x172112E8: movq qword ptr [esp + 0x58], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x172112ED: punpckhdq mm5, mm0 */
    void_lift_trap(0x172112F0u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x48) = _mm[5]; /* 0x172112F7: movq qword ptr [esp + 0x48], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172112FC: punpckhdq mm6, mm6 */
    MEM64(esp + 0x50) = _mm[4]; /* 0x172112FF: movq qword ptr [esp + 0x50], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x17211304: punpckhdq mm7, mm1 */
    void_lift_trap(0x17211307u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x40) = _mm[7]; /* 0x1721130A: movq qword ptr [esp + 0x40], mm7 */
    MEM64(esp + 0x60) = _mm[6]; /* 0x1721130F: movq qword ptr [esp + 0x60], mm6 */
    MEM64(esp + 0x78) = _mm[0]; /* 0x17211314: movq qword ptr [esp + 0x78], mm0 */
    /* test edx, edx */ /* 0x17211319: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721153A; /* 0x1721131B: je 0x1721153a */
L_17211321:
    _mm[0] = MEM64(eax + 0x30); /* 0x17211321: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17211325: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x17211329: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x1721132C: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x17211330u, "pfsub mm0, mm2");
    void_lift_trap(0x17211334u, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211338: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x1721133C: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x17211340: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17211343: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17211347: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721134C: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x1721134F: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211354: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17211357: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x1721135Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721135Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211362u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211366: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211369u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x1721136F: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17211374u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211378: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721137Bu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17211381u, "pfadd mm5, mm4");
    void_lift_trap(0x17211385u, "pfmul mm6, mm1");
    void_lift_trap(0x17211389u, "pfadd mm2, mm0");
    void_lift_trap(0x1721138Du, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17211393u, "pfadd mm6, mm5");
    void_lift_trap(0x17211397u, "pfmul mm7, mm3");
    void_lift_trap(0x1721139Bu, "pfadd mm2, mm1");
    void_lift_trap(0x1721139Fu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x172113A5u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172113A9: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172113ADu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172113B1: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172113B5: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172113B8: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172113BD: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172113C1: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172113C4: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172113C9: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172113CC: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172113D1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172113D4u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172113D7u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172113DB: punpckhdq mm2, mm2 */
    void_lift_trap(0x172113DEu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172113E4: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172113E9u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172113ED: punpckhdq mm3, mm3 */
    void_lift_trap(0x172113F0u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172113F6u, "pfadd mm5, mm4");
    void_lift_trap(0x172113FAu, "pfmul mm6, mm1");
    void_lift_trap(0x172113FEu, "pfadd mm2, mm0");
    void_lift_trap(0x17211402u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17211408u, "pfadd mm6, mm5");
    void_lift_trap(0x1721140Cu, "pfmul mm7, mm3");
    void_lift_trap(0x17211410u, "pfadd mm2, mm1");
    void_lift_trap(0x17211414u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721141Au, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x1721141E: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17211422u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17211426: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x1721142A: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721142E: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17211433: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211437: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x1721143A: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721143F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17211442: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17211447u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721144Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721144Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211451: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211454u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x1721145A: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721145Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211463: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211466u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x1721146Cu, "pfadd mm5, mm4");
    void_lift_trap(0x17211470u, "pfmul mm6, mm1");
    void_lift_trap(0x17211474u, "pfadd mm2, mm0");
    void_lift_trap(0x17211478u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1721147Eu, "pfadd mm6, mm5");
    void_lift_trap(0x17211482u, "pfmul mm7, mm3");
    void_lift_trap(0x17211486u, "pfadd mm2, mm1");
    void_lift_trap(0x1721148Au, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17211490u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17211494: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17211498u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x1721149C: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172114A0: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172114A4: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172114A9: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172114AD: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172114B0: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172114B5: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172114B8: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172114BDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172114C0u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172114C3u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172114C7: punpckhdq mm2, mm2 */
    void_lift_trap(0x172114CAu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172114D0: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172114D5u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172114D9: punpckhdq mm3, mm3 */
    void_lift_trap(0x172114DCu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172114E2u, "pfadd mm5, mm4");
    void_lift_trap(0x172114E6u, "pfmul mm6, mm1");
    void_lift_trap(0x172114EAu, "pfadd mm2, mm0");
    void_lift_trap(0x172114EEu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172114F4u, "pfadd mm6, mm5");
    void_lift_trap(0x172114F8u, "pfmul mm7, mm3");
    void_lift_trap(0x172114FCu, "pfadd mm2, mm1");
    void_lift_trap(0x17211500u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17211506u, "pfadd mm7, mm6");
    void_lift_trap(0x1721150Au, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x1721150E: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17211512: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x17211516: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x1721151A: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x1721151E: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17211521: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x17211525u, "pfadd mm0, mm2");
    void_lift_trap(0x17211529u, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x1721152D: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17211531: movd dword ptr [eax + 0x38], mm1 */
    goto L_17211710; /* 0x17211535: jmp 0x17211710 */
L_1721153A:
    _mm[0] = MEM64(eax); /* 0x1721153A: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x1721153D: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17211541: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211546: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17211549: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721154E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17211551: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17211556u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211559u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721155Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211560: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211563u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17211569: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721156Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211572: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211575u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x1721157Bu, "pfadd mm5, mm4");
    void_lift_trap(0x1721157Fu, "pfmul mm6, mm1");
    void_lift_trap(0x17211583u, "pfadd mm2, mm0");
    void_lift_trap(0x17211587u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1721158Du, "pfadd mm6, mm5");
    void_lift_trap(0x17211591u, "pfmul mm7, mm3");
    void_lift_trap(0x17211595u, "pfadd mm2, mm1");
    void_lift_trap(0x17211599u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721159Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172115A3: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172115A7u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172115AB: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172115AF: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172115B2: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172115B7: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172115BB: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172115BE: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172115C3: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172115C6: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172115CBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172115CEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172115D1u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172115D5: punpckhdq mm2, mm2 */
    void_lift_trap(0x172115D8u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172115DE: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172115E3u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172115E7: punpckhdq mm3, mm3 */
    void_lift_trap(0x172115EAu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172115F0u, "pfadd mm5, mm4");
    void_lift_trap(0x172115F4u, "pfmul mm6, mm1");
    void_lift_trap(0x172115F8u, "pfadd mm2, mm0");
    void_lift_trap(0x172115FCu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17211602u, "pfadd mm6, mm5");
    void_lift_trap(0x17211606u, "pfmul mm7, mm3");
    void_lift_trap(0x1721160Au, "pfadd mm2, mm1");
    void_lift_trap(0x1721160Eu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17211614u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17211618: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x1721161Cu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17211620: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17211624: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17211628: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x1721162D: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211631: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17211634: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211639: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x1721163C: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17211641u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211644u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211647u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721164B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721164Eu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17211654: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17211659u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721165D: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211660u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17211666u, "pfadd mm5, mm4");
    void_lift_trap(0x1721166Au, "pfmul mm6, mm1");
    void_lift_trap(0x1721166Eu, "pfadd mm2, mm0");
    void_lift_trap(0x17211672u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17211678u, "pfadd mm6, mm5");
    void_lift_trap(0x1721167Cu, "pfmul mm7, mm3");
    void_lift_trap(0x17211680u, "pfadd mm2, mm1");
    void_lift_trap(0x17211684u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721168Au, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x1721168E: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17211692u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17211696: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x1721169A: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721169E: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172116A3: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172116A7: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172116AA: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172116AF: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172116B2: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172116B7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172116BAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172116BDu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172116C1: punpckhdq mm2, mm2 */
    void_lift_trap(0x172116C4u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172116CA: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172116CFu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172116D3: punpckhdq mm3, mm3 */
    void_lift_trap(0x172116D6u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172116DCu, "pfadd mm5, mm4");
    void_lift_trap(0x172116E0u, "pfmul mm6, mm1");
    void_lift_trap(0x172116E4u, "pfadd mm2, mm0");
    void_lift_trap(0x172116E8u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172116EEu, "pfadd mm6, mm5");
    void_lift_trap(0x172116F2u, "pfmul mm7, mm3");
    void_lift_trap(0x172116F6u, "pfadd mm2, mm1");
    void_lift_trap(0x172116FAu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17211700u, "pfadd mm7, mm6");
    void_lift_trap(0x17211704u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17211708: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x1721170C: movq qword ptr [eax + 0x38], mm3 */
L_17211710:
    ecx = MEM32(ebp + 0x20); /* 0x17211710: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x17211713: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17211736; /* 0x17211715: je 0x17211736 */
L_17211717:
    _mm[0] = MEM64(eax + 0x30); /* 0x17211717: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x1721171B: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x1721171F: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17211722: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17211726u, "pfadd mm0, mm2");
    void_lift_trap(0x1721172Au, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x1721172E: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17211732: movd dword ptr [eax + 0x38], mm1 */
L_17211736:
    esp = ebp; /* 0x17211736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17211738: pop ebp */
    void_lift_trap(0x17211739u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1721173B: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17211743(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17211743u);

L_17211743:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17211743: sub esp, 0x14 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = ebp; /* 0x17211746: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x1721174A: lea ebp, [esp + 0x10] */
    _mm[0] = MEM64(0x1702A5F8); /* 0x1721174E: movq mm0, qword ptr [0x1702a5f8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17211755: sub esp, 0x20 */
    _flag_k = FK_CMP;
    MEM32(esp + 0x4) = ebx; /* 0x17211758: mov dword ptr [esp + 4], ebx */
    MEM32(esp) = esi; /* 0x1721175C: mov dword ptr [esp], esi */
    _mm[1] = _mm[0]; /* 0x1721175F: movq mm1, mm0 */
    void_lift_trap(0x17211762u, "pfmul mm0, qword ptr [ebp + 0x14]");
    void_lift_trap(0x17211767u, "pfmul mm1, qword ptr [ebp + 0xc]");
    MEM64(esp + 0x18) = _mm[1]; /* 0x1721176C: movq qword ptr [esp + 0x18], mm1 */
    RECOMP_CALL(sub_172167A0); /* 0x17211771: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x8) = _mm[0]; /* 0x17211776: movq qword ptr [esp + 8], mm0 */
    _mm[0] = MEM64(esp + 0x18); /* 0x1721177B: movq mm0, qword ptr [esp + 0x18] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x17211780: punpckhdq mm0, mm0 */
    RECOMP_CALL(sub_172167A0); /* 0x17211783: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    MEM64(esp + 0x10) = _mm[0]; /* 0x17211788: movq qword ptr [esp + 0x10], mm0 */
    _mm[0] = MEM64(esp + 0x18); /* 0x1721178D: movq mm0, qword ptr [esp + 0x18] */
    RECOMP_CALL(sub_172167A0); /* 0x17211792: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[1] = MEM64(esp + 0x8); /* 0x17211797: movq mm1, qword ptr [esp + 8] */
    _mm[2] = MEM64(esp + 0x10); /* 0x1721179C: movq mm2, qword ptr [esp + 0x10] */
    _mm[7] = MEM64(0x1702A588); /* 0x172117A1: movq mm7, qword ptr [0x1702a588] */
    _mm[3] = _mm[0]; /* 0x172117A8: movq mm3, mm0 */
    _mm[4] = _mm[0]; /* 0x172117AB: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x172117AE: movq mm5, mm0 */
    void_lift_trap(0x172117B1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172117B4u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172117B7: punpckhdq mm4, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172117BA: punpckhdq mm5, mm5 */
    _mm[0] = (_mm[0] ^ _mm[7]); /* 0x172117BD: pxor mm0, mm7 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x172117C0: psrlq mm7, 0x20 */
    _mm[6] = _mm[2]; /* 0x172117C4: movq mm6, mm2 */
    void_lift_trap(0x172117C7u, "unsupported PUNPCKLDQ operands");
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172117CA: punpckhdq mm6, mm6 */
    _mm[5] = (_mm[5] ^ _mm[7]); /* 0x172117CD: pxor mm5, mm7 */
    void_lift_trap(0x172117D0u, "pfmul mm0, mm6");
    void_lift_trap(0x172117D4u, "pfmul mm3, mm2");
    void_lift_trap(0x172117D8u, "pfmul mm4, mm2");
    void_lift_trap(0x172117DCu, "pfmul mm5, mm6");
    _mm[7] = _mm[1]; /* 0x172117E0: movq mm7, mm1 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x172117E3: punpckhdq mm7, mm7 */
    void_lift_trap(0x172117E6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172117E9u, "pfmul mm0, mm1");
    void_lift_trap(0x172117EDu, "pfmul mm3, mm7");
    void_lift_trap(0x172117F1u, "pfmul mm4, mm7");
    void_lift_trap(0x172117F5u, "pfmul mm5, mm1");
    void_lift_trap(0x172117F9u, "pfadd mm0, mm4");
    void_lift_trap(0x172117FDu, "pfadd mm3, mm5");
    MEM64(ebp + (-0x10)) = _mm[0]; /* 0x17211801: movq qword ptr [ebp - 0x10], mm0 */
    MEM64(ebp + (-0x8)) = _mm[3]; /* 0x17211805: movq qword ptr [ebp - 8], mm3 */
    esi = MEM32(esp); /* 0x17211809: mov esi, dword ptr [esp] */
    ebx = MEM32(esp + 0x4); /* 0x1721180C: mov ebx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x17211810: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x17211813: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp); /* 0x17211816: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x1721181A: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x1721181F: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x17211822: movq mm3, mm0 */
    void_lift_trap(0x17211825u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x17211829: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x1721182C: movq mm7, mm1 */
    void_lift_trap(0x1721182Fu, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211833: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x17211836: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17211839: punpckhdq mm4, mm4 */
    void_lift_trap(0x1721183Cu, "pfmul mm3, mm0");
    void_lift_trap(0x17211840u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211843u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211846u, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x1721184A: movq mm6, mm1 */
    void_lift_trap(0x1721184Du, "pfmul mm7, mm1");
    void_lift_trap(0x17211851u, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17211855: pxor mm0, mm0 */
    void_lift_trap(0x17211858u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x1721185C: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x1721185F: punpckhdq mm1, mm7 */
    void_lift_trap(0x17211862u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211865u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211868: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x1721186Cu, "pfadd mm7, mm3");
    void_lift_trap(0x17211870u, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x17211874: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x17211877: punpckhdq mm6, mm5 */
    void_lift_trap(0x1721187Au, "pfsubr mm3, qword ptr [0x1702a568]");
    void_lift_trap(0x17211882u, "pfsubr mm7, qword ptr [0x1702a568]");
    void_lift_trap(0x1721188Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721188Du, "pfadd mm1, mm6");
    MEM64(eax + 0x28) = _mm[3]; /* 0x17211891: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x17211895u, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x17211899: movq mm3, mm2 */
    void_lift_trap(0x1721189Cu, "pfadd mm2, mm5");
    void_lift_trap(0x172118A0u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x172118A4: movq mm5, mm4 */
    void_lift_trap(0x172118A7u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[1]; /* 0x172118AA: movq mm6, mm1 */
    void_lift_trap(0x172118ADu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172118B0u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x18) = _mm[2]; /* 0x172118B3: movq qword ptr [eax + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x172118B7: punpckhdq mm5, mm0 */
    void_lift_trap(0x172118BAu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[5]; /* 0x172118C1: movq qword ptr [eax + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172118C5: punpckhdq mm6, mm6 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x172118C8: movq qword ptr [eax + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x172118CC: punpckhdq mm7, mm1 */
    void_lift_trap(0x172118CFu, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[7]; /* 0x172118D2: movq qword ptr [eax], mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x172118D5: movq qword ptr [eax + 0x20], mm6 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x172118D9: movq qword ptr [eax + 0x38], mm0 */
    esp = ebp + 0x4; /* 0x172118DD: lea esp, [ebp + 4] */
    ebp = MEM32(ebp); /* 0x172118E0: mov ebp, dword ptr [ebp] */
    void_lift_trap(0x172118E3u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x172118E5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_172118ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172118EDu);

L_172118ED:
    eax = MEM32(esp + 0x4); /* 0x172118ED: mov eax, dword ptr [esp + 4] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x172118F1: movd mm6, dword ptr [esp + 8] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x172118F6: pxor mm7, mm7 */
    edx = MEM32(esp + 0x10); /* 0x172118F9: mov edx, dword ptr [esp + 0x10] */
    _mm[5] = MEM64(0x1702A548); /* 0x172118FD: movq mm5, qword ptr [0x1702a548] */
    ecx = MEM32(esp + 0xC); /* 0x17211904: mov ecx, dword ptr [esp + 0xc] */
    MEM64(eax) = _mm[6]; /* 0x17211908: movq qword ptr [eax], mm6 */
    MEM64(eax + 0x8) = _mm[7]; /* 0x1721190B: movq qword ptr [eax + 8], mm7 */
    MEM32(eax + 0x10) = (uint32_t)_mm[7]; /* 0x1721190F: movd dword ptr [eax + 0x10], mm7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x17211913: sub esp, 0x40 */
    _flag_k = FK_CMP;
    MEM32(eax + 0x14) = (uint32_t)_mm[6]; /* 0x17211916: movd dword ptr [eax + 0x14], mm6 */
    MEM64(eax + 0x18) = _mm[7]; /* 0x1721191A: movq qword ptr [eax + 0x18], mm7 */
    /* test edx, edx */ /* 0x1721191E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(eax + 0x20) = _mm[7]; /* 0x17211920: movq qword ptr [eax + 0x20], mm7 */
    MEM64(eax + 0x28) = _mm[6]; /* 0x17211924: movq qword ptr [eax + 0x28], mm6 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x17211928: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x1721192C: movq qword ptr [eax + 0x38], mm5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17211DF2; /* 0x17211930: je 0x17211df2 */
L_17211936:
    _mm[0] = MEM64(edx); /* 0x17211936: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x17211939: movq mm1, qword ptr [edx + 8] */
    _mm[2] = _mm[0]; /* 0x1721193D: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x17211940: movq mm3, mm0 */
    void_lift_trap(0x17211943u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x17211947: movq mm4, mm1 */
    _mm[7] = _mm[1]; /* 0x1721194A: movq mm7, mm1 */
    void_lift_trap(0x1721194Du, "pfadd mm1, mm1");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211951: punpckhdq mm2, mm2 */
    _mm[5] = _mm[0]; /* 0x17211954: movq mm5, mm0 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17211957: punpckhdq mm4, mm4 */
    void_lift_trap(0x1721195Au, "pfmul mm3, mm0");
    void_lift_trap(0x1721195Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211961u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211964u, "pfmul mm5, mm4");
    _mm[6] = _mm[1]; /* 0x17211968: movq mm6, mm1 */
    void_lift_trap(0x1721196Bu, "pfmul mm7, mm1");
    void_lift_trap(0x1721196Fu, "pfmul mm1, mm2");
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17211973: pxor mm0, mm0 */
    void_lift_trap(0x17211976u, "pfmul mm6, mm4");
    _mm[2] = _mm[1]; /* 0x1721197A: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x1721197D: punpckhdq mm1, mm7 */
    void_lift_trap(0x17211980u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211983u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x30) = _mm[0]; /* 0x17211986: movq qword ptr [esp + 0x30], mm0 */
    void_lift_trap(0x1721198Bu, "pfadd mm7, mm3");
    void_lift_trap(0x1721198Fu, "pfacc mm3, mm3");
    _mm[4] = _mm[1]; /* 0x17211993: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[5]); /* 0x17211996: punpckhdq mm6, mm5 */
    void_lift_trap(0x17211999u, "pfsubr mm3, qword ptr [0x1702a568]");
    void_lift_trap(0x172119A1u, "pfsubr mm7, qword ptr [0x1702a568]");
    void_lift_trap(0x172119A9u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172119ACu, "pfadd mm1, mm6");
    MEM64(esp + 0x28) = _mm[3]; /* 0x172119B0: movq qword ptr [esp + 0x28], mm3 */
    void_lift_trap(0x172119B5u, "pfsub mm4, mm6");
    _mm[3] = _mm[2]; /* 0x172119B9: movq mm3, mm2 */
    void_lift_trap(0x172119BCu, "pfadd mm2, mm5");
    void_lift_trap(0x172119C0u, "pfsub mm3, mm5");
    _mm[5] = _mm[4]; /* 0x172119C4: movq mm5, mm4 */
    void_lift_trap(0x172119C7u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[1]; /* 0x172119CA: movq mm6, mm1 */
    void_lift_trap(0x172119CDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172119D0u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x18) = _mm[2]; /* 0x172119D3: movq qword ptr [esp + 0x18], mm2 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x172119D8: punpckhdq mm5, mm0 */
    void_lift_trap(0x172119DBu, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x8) = _mm[5]; /* 0x172119E2: movq qword ptr [esp + 8], mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172119E7: punpckhdq mm6, mm6 */
    MEM64(esp + 0x10) = _mm[4]; /* 0x172119EA: movq qword ptr [esp + 0x10], mm4 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x172119EF: punpckhdq mm7, mm1 */
    void_lift_trap(0x172119F2u, "unsupported PUNPCKLDQ operands");
    MEM64(esp) = _mm[7]; /* 0x172119F5: movq qword ptr [esp], mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x172119F9: movq qword ptr [esp + 0x20], mm6 */
    MEM64(esp + 0x38) = _mm[0]; /* 0x172119FE: movq qword ptr [esp + 0x38], mm0 */
    /* test ecx, ecx */ /* 0x17211A03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17211C20; /* 0x17211A05: je 0x17211c20 */
L_17211A0B:
    _mm[0] = MEM64(eax + 0x30); /* 0x17211A0B: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17211A0F: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x17211A13: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17211A16: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17211A1Au, "pfsub mm0, mm2");
    void_lift_trap(0x17211A1Eu, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211A22: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17211A26: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x17211A2A: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17211A2D: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x17211A31: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211A35: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211A38: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211A3D: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211A40: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211A45u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211A48u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211A4Bu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211A4F: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211A52u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211A58: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211A5Du, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211A61: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211A64u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211A6Au, "pfadd mm5, mm4");
    void_lift_trap(0x17211A6Eu, "pfmul mm6, mm1");
    void_lift_trap(0x17211A72u, "pfadd mm2, mm0");
    void_lift_trap(0x17211A76u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211A7Cu, "pfadd mm6, mm5");
    void_lift_trap(0x17211A80u, "pfmul mm7, mm3");
    void_lift_trap(0x17211A84u, "pfadd mm2, mm1");
    void_lift_trap(0x17211A88u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211A8Eu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17211A92: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17211A96u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17211A9A: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17211A9E: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211AA1: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17211AA5: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211AA9: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211AAC: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211AB1: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211AB4: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211AB9u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211ABCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211ABFu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211AC3: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211AC6u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211ACC: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211AD1u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211AD5: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211AD8u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211ADEu, "pfadd mm5, mm4");
    void_lift_trap(0x17211AE2u, "pfmul mm6, mm1");
    void_lift_trap(0x17211AE6u, "pfadd mm2, mm0");
    void_lift_trap(0x17211AEAu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211AF0u, "pfadd mm6, mm5");
    void_lift_trap(0x17211AF4u, "pfmul mm7, mm3");
    void_lift_trap(0x17211AF8u, "pfadd mm2, mm1");
    void_lift_trap(0x17211AFCu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211B02u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17211B06: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17211B0Au, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17211B0E: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17211B12: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211B16: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17211B1A: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211B1E: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211B21: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211B26: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211B29: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211B2Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211B31u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211B34u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211B38: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211B3Bu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211B41: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211B46u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211B4A: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211B4Du, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211B53u, "pfadd mm5, mm4");
    void_lift_trap(0x17211B57u, "pfmul mm6, mm1");
    void_lift_trap(0x17211B5Bu, "pfadd mm2, mm0");
    void_lift_trap(0x17211B5Fu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211B65u, "pfadd mm6, mm5");
    void_lift_trap(0x17211B69u, "pfmul mm7, mm3");
    void_lift_trap(0x17211B6Du, "pfadd mm2, mm1");
    void_lift_trap(0x17211B71u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211B77u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17211B7B: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17211B7Fu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17211B83: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17211B87: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211B8B: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17211B8F: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211B93: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211B96: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211B9B: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211B9E: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211BA3u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211BA6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211BA9u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211BAD: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211BB0u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211BB6: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211BBBu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211BBF: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211BC2u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211BC8u, "pfadd mm5, mm4");
    void_lift_trap(0x17211BCCu, "pfmul mm6, mm1");
    void_lift_trap(0x17211BD0u, "pfadd mm2, mm0");
    void_lift_trap(0x17211BD4u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211BDAu, "pfadd mm6, mm5");
    void_lift_trap(0x17211BDEu, "pfmul mm7, mm3");
    void_lift_trap(0x17211BE2u, "pfadd mm2, mm1");
    void_lift_trap(0x17211BE6u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211BECu, "pfadd mm7, mm6");
    void_lift_trap(0x17211BF0u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17211BF4: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17211BF8: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x17211BFC: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17211C00: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x17211C04: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17211C07: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17211C0Bu, "pfadd mm0, mm2");
    void_lift_trap(0x17211C0Fu, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211C13: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17211C17: movd dword ptr [eax + 0x38], mm1 */
    goto L_17211DF2; /* 0x17211C1B: jmp 0x17211df2 */
L_17211C20:
    _mm[0] = MEM64(eax); /* 0x17211C20: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17211C23: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x17211C27: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211C2B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211C2E: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211C33: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211C36: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211C3Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211C3Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211C41u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211C45: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211C48u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211C4E: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211C53u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211C57: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211C5Au, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211C60u, "pfadd mm5, mm4");
    void_lift_trap(0x17211C64u, "pfmul mm6, mm1");
    void_lift_trap(0x17211C68u, "pfadd mm2, mm0");
    void_lift_trap(0x17211C6Cu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211C72u, "pfadd mm6, mm5");
    void_lift_trap(0x17211C76u, "pfmul mm7, mm3");
    void_lift_trap(0x17211C7Au, "pfadd mm2, mm1");
    void_lift_trap(0x17211C7Eu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211C84u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17211C88: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17211C8Cu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17211C90: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17211C94: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211C97: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17211C9B: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211C9F: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211CA2: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211CA7: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211CAA: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211CAFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211CB2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211CB5u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211CB9: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211CBCu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211CC2: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211CC7u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211CCB: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211CCEu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211CD4u, "pfadd mm5, mm4");
    void_lift_trap(0x17211CD8u, "pfmul mm6, mm1");
    void_lift_trap(0x17211CDCu, "pfadd mm2, mm0");
    void_lift_trap(0x17211CE0u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211CE6u, "pfadd mm6, mm5");
    void_lift_trap(0x17211CEAu, "pfmul mm7, mm3");
    void_lift_trap(0x17211CEEu, "pfadd mm2, mm1");
    void_lift_trap(0x17211CF2u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211CF8u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17211CFC: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17211D00u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17211D04: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17211D08: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211D0C: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17211D10: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211D14: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211D17: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211D1C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211D1F: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211D24u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211D27u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211D2Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211D2E: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211D31u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211D37: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211D3Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211D40: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211D43u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211D49u, "pfadd mm5, mm4");
    void_lift_trap(0x17211D4Du, "pfmul mm6, mm1");
    void_lift_trap(0x17211D51u, "pfadd mm2, mm0");
    void_lift_trap(0x17211D55u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211D5Bu, "pfadd mm6, mm5");
    void_lift_trap(0x17211D5Fu, "pfmul mm7, mm3");
    void_lift_trap(0x17211D63u, "pfadd mm2, mm1");
    void_lift_trap(0x17211D67u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211D6Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17211D71: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17211D75u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17211D79: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17211D7D: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x17211D81: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17211D85: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17211D89: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17211D8C: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17211D91: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17211D94: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17211D99u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211D9Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211D9Fu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17211DA3: punpckhdq mm2, mm2 */
    void_lift_trap(0x17211DA6u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17211DAC: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17211DB1u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17211DB5: punpckhdq mm3, mm3 */
    void_lift_trap(0x17211DB8u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17211DBEu, "pfadd mm5, mm4");
    void_lift_trap(0x17211DC2u, "pfmul mm6, mm1");
    void_lift_trap(0x17211DC6u, "pfadd mm2, mm0");
    void_lift_trap(0x17211DCAu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17211DD0u, "pfadd mm6, mm5");
    void_lift_trap(0x17211DD4u, "pfmul mm7, mm3");
    void_lift_trap(0x17211DD8u, "pfadd mm2, mm1");
    void_lift_trap(0x17211DDCu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17211DE2u, "pfadd mm7, mm6");
    void_lift_trap(0x17211DE6u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17211DEA: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17211DEE: movq qword ptr [eax + 0x38], mm3 */
L_17211DF2:
    edx = MEM32(esp + 0x54); /* 0x17211DF2: mov edx, dword ptr [esp + 0x54] */
    /* test edx, edx */ /* 0x17211DF6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17211E19; /* 0x17211DF8: je 0x17211e19 */
L_17211DFA:
    _mm[0] = MEM64(edx); /* 0x17211DFA: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17211DFD: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(eax + 0x30); /* 0x17211E01: movq mm2, qword ptr [eax + 0x30] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17211E05: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x17211E09u, "pfadd mm0, mm2");
    void_lift_trap(0x17211E0Du, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211E11: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17211E15: movd dword ptr [eax + 0x38], mm1 */
L_17211E19:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x17211E19: add esp, 0x40 */
    _flag_k = FK_ADD;
    void_lift_trap(0x17211E1Cu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17211E1E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17211E26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17211E26u);

L_17211E26:
    edi = edi; /* 0x17211E26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17211E28: push ebp */
    ebp = esp; /* 0x17211E29: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17211E2B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x17211E2E: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x17211E31: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x17211E34: lea eax, [esp] */
    _mm[0] = MEM64(edx); /* 0x17211E37: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17211E3A: movd mm1, dword ptr [edx + 8] */
    MEM32(esp + 0x10) = esi; /* 0x17211E3E: mov dword ptr [esp + 0x10], esi */
    MEM32(esp + 0x14) = ebx; /* 0x17211E42: mov dword ptr [esp + 0x14], ebx */
    MEM64(esp) = _mm[0]; /* 0x17211E46: movq qword ptr [esp], mm0 */
    MEM32(esp + 0x8) = (uint32_t)_mm[1]; /* 0x17211E4A: movd dword ptr [esp + 8], mm1 */
    PUSH32(esp, eax); /* 0x17211E4F: push eax */
    PUSH32(esp, eax); /* 0x17211E50: push eax */
    RECOMP_CALL(sub_17213C2C); /* 0x17211E51: call 0x17213c2c */
    RECOMP_FLAGS_IN();
    _mm[0] = (uint64_t)(uint32_t)(MEM32(ebp + 0x10)); /* 0x17211E56: movd mm0, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_172167A0); /* 0x17211E5A: call 0x172167a0 */
    RECOMP_FLAGS_IN();
    _mm[7] = _mm[0]; /* 0x17211E5F: movq mm7, mm0 */
    _mm[1] = _mm[0]; /* 0x17211E62: movq mm1, mm0 */
    void_lift_trap(0x17211E65u, "pfsubr mm0, qword ptr [0x1702a568]");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x17211E6D: punpckhdq mm7, mm7 */
    _mm[2] = MEM64(esp); /* 0x17211E70: movq mm2, qword ptr [esp] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(esp + 0x8)); /* 0x17211E74: movd mm3, dword ptr [esp + 8] */
    _mm[4] = _mm[2]; /* 0x17211E79: movq mm4, mm2 */
    _mm[5] = _mm[3]; /* 0x17211E7C: movq mm5, mm3 */
    MEM32(esp + 0xC) = (uint32_t)_mm[7]; /* 0x17211E7F: movd dword ptr [esp + 0xc], mm7 */
    _mm[7] = _mm[3]; /* 0x17211E84: movq mm7, mm3 */
    void_lift_trap(0x17211E87u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[2]; /* 0x17211E8A: movq mm6, mm2 */
    esi = MEM32(esp + 0x10); /* 0x17211E8D: mov esi, dword ptr [esp + 0x10] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x17211E91: punpckhdq mm2, mm3 */
    void_lift_trap(0x17211E94u, "pfmul mm3, mm4");
    void_lift_trap(0x17211E98u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211E9Bu, "pfmul mm2, mm4");
    void_lift_trap(0x17211E9Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211EA2u, "pfmul mm2, mm0");
    eax = MEM32(ebp + 0x8); /* 0x17211EA6: mov eax, dword ptr [ebp + 8] */
    void_lift_trap(0x17211EA9u, "pfmul mm3, mm0");
    void_lift_trap(0x17211EADu, "pfmul mm4, mm4");
    void_lift_trap(0x17211EB1u, "pfmul mm5, mm5");
    void_lift_trap(0x17211EB5u, "pfmul mm4, mm0");
    ebx = MEM32(esp + 0x14); /* 0x17211EB9: mov ebx, dword ptr [esp + 0x14] */
    void_lift_trap(0x17211EBDu, "pfmul mm5, mm0");
    void_lift_trap(0x17211EC1u, "pfadd mm4, mm1");
    void_lift_trap(0x17211EC5u, "pfadd mm5, mm1");
    _mm[1] = (uint64_t)(uint32_t)(MEM32(esp + 0xC)); /* 0x17211EC9: movd mm1, dword ptr [esp + 0xc] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17211ECE: pxor mm0, mm0 */
    void_lift_trap(0x17211ED1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211ED4u, "pfmul mm6, mm1");
    void_lift_trap(0x17211ED8u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211EDBu, "pfmul mm7, mm1");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17211EDF: movq qword ptr [eax + 0x30], mm0 */
    void_lift_trap(0x17211EE3u, "unsupported PUNPCKLDQ operands");
    _mm[1] = _mm[2]; /* 0x17211EE6: movq mm1, mm2 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x17211EE9: punpckhdq mm6, mm6 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x17211EEC: movq qword ptr [eax + 0x28], mm5 */
    void_lift_trap(0x17211EF0u, "pfsub mm2, mm7");
    void_lift_trap(0x17211EF4u, "pfadd mm1, mm7");
    _mm[7] = _mm[3]; /* 0x17211EF8: movq mm7, mm3 */
    void_lift_trap(0x17211EFBu, "pfsub mm3, mm6");
    _mm[5] = _mm[4]; /* 0x17211EFF: movq mm5, mm4 */
    void_lift_trap(0x17211F02u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211F05u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[0]); /* 0x17211F08: punpckhdq mm1, mm0 */
    MEM64(eax) = _mm[4]; /* 0x17211F0B: movq qword ptr [eax], mm4 */
    void_lift_trap(0x17211F0Eu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[3]; /* 0x17211F11: movq qword ptr [eax + 8], mm3 */
    _mm[0] = mmx_punpckhdq(_mm[0], MEM64(0x1702A568)); /* 0x17211F15: punpckhdq mm0, qword ptr [0x1702a568] */
    void_lift_trap(0x17211F1Cu, "pfadd mm7, mm6");
    MEM64(eax + 0x18) = _mm[1]; /* 0x17211F20: movq qword ptr [eax + 0x18], mm1 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17211F24: punpckhdq mm5, mm5 */
    MEM64(eax + 0x38) = _mm[0]; /* 0x17211F27: movq qword ptr [eax + 0x38], mm0 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x17211F2B: punpckhdq mm7, mm2 */
    void_lift_trap(0x17211F2Eu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x20) = _mm[7]; /* 0x17211F31: movq qword ptr [eax + 0x20], mm7 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17211F35: movq qword ptr [eax + 0x10], mm2 */
    esp = ebp; /* 0x17211F39: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17211F3B: pop ebp */
    void_lift_trap(0x17211F3Cu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17211F3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17211F46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17211F46u);

L_17211F46:
    edi = edi; /* 0x17211F46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17211F48: push ebp */
    ebp = esp; /* 0x17211F49: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x17211F4B: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x17211F51: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x17211F54: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x17211F57: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x17211F5A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17211F5C: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17212BED; /* 0x17211F5F: je 0x17212bed */
L_17211F65:
    /* test ecx, ecx */ /* 0x17211F65: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17212B50; /* 0x17211F67: je 0x17212b50 */
L_17211F6D:
    _mm[1] = MEM64(0x1702A548); /* 0x17211F6D: movq mm1, qword ptr [0x1702a548] */
    _mm[2] = MEM64(edx); /* 0x17211F74: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17211F77: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x17211F7B: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x17211F7E: movq mm3, mm2 */
    void_lift_trap(0x17211F81u, "unsupported PUNPCKLDQ operands");
    _mm[0] = _mm[5]; /* 0x17211F84: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x17211F87: punpckhdq mm5, mm3 */
    MEM64(esp) = _mm[2]; /* 0x17211F8A: movq qword ptr [esp], mm2 */
    MEM64(esp + 0x8) = _mm[0]; /* 0x17211F8E: movq qword ptr [esp + 8], mm0 */
    MEM64(esp + 0x10) = _mm[5]; /* 0x17211F93: movq qword ptr [esp + 0x10], mm5 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x17211F98: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x20) = _mm[0]; /* 0x17211F9D: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x17211FA2: movq qword ptr [esp + 0x28], mm4 */
    MEM64(esp + 0x30) = _mm[0]; /* 0x17211FA7: movq qword ptr [esp + 0x30], mm0 */
    MEM64(esp + 0x38) = _mm[1]; /* 0x17211FAC: movq qword ptr [esp + 0x38], mm1 */
    eax = esp + 0x40; /* 0x17211FB1: lea eax, [esp + 0x40] */
    _mm[0] = MEM64(ecx); /* 0x17211FB5: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x17211FB8: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x17211FBCu, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x17211FC0: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x17211FC3: movq mm2, mm0 */
    void_lift_trap(0x17211FC6u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x17211FCA: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x17211FCD: punpckhdq mm6, mm1 */
    void_lift_trap(0x17211FD0u, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x17211FD4: movq mm5, mm0 */
    void_lift_trap(0x17211FD7u, "pfmul mm0, mm2");
    void_lift_trap(0x17211FDBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211FDEu, "pfmul mm2, mm1");
    void_lift_trap(0x17211FE2u, "pfmul mm3, mm1");
    void_lift_trap(0x17211FE6u, "pfmul mm1, mm4");
    void_lift_trap(0x17211FEAu, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x17211FEE: movq mm4, mm0 */
    void_lift_trap(0x17211FF1u, "pfsubr mm0, qword ptr [0x1702a568]");
    _mm[5] = _mm[1]; /* 0x17211FF9: movq mm5, mm1 */
    void_lift_trap(0x17211FFCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17211FFFu, "pfpnacc mm3, mm3");
    void_lift_trap(0x17212003u, "pfacc mm4, mm4");
    void_lift_trap(0x17212007u, "pfpnacc mm6, mm6");
    void_lift_trap(0x1721200Bu, "pfpnacc mm2, mm2");
    void_lift_trap(0x1721200Fu, "pfsub mm0, mm1");
    void_lift_trap(0x17212013u, "pswapd mm5, mm2");
    void_lift_trap(0x17212017u, "pfsubr mm4, qword ptr [0x1702a568]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x1721201F: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x17212022: movq mm1, mm0 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212025: movq qword ptr [eax + 0x30], mm7 */
    void_lift_trap(0x17212029u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721202Cu, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x1721202F: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x17212032: punpckhdq mm0, mm6 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x17212035: movq qword ptr [eax + 0x20], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x17212039: punpckhdq mm3, mm7 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x1721203C: movq qword ptr [eax + 8], mm2 */
    void_lift_trap(0x17212040u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x28) = _mm[4]; /* 0x17212043: movq qword ptr [eax + 0x28], mm4 */
    void_lift_trap(0x17212047u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[0]; /* 0x1721204E: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[6]; /* 0x17212051: movq qword ptr [eax + 0x10], mm6 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212055: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x17212059: movq qword ptr [eax + 0x38], mm7 */
    edx = MEM32(ebp + 0xC); /* 0x1721205D: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x17212060: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17212735; /* 0x17212062: je 0x17212735 */
L_17212068:
    _mm[0] = MEM64(esp + 0x40); /* 0x17212068: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x1721206D: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x17212072: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x17212077: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x1721207C: movq mm2, mm0 */
    void_lift_trap(0x1721207Fu, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x17212082: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x17212085: movq mm5, mm3 */
    MEM64(esp + 0x80) = _mm[0]; /* 0x17212088: movq qword ptr [esp + 0x80], mm0 */
    MEM64(esp + 0x90) = _mm[2]; /* 0x17212090: movq qword ptr [esp + 0x90], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x17212098: movq mm6, qword ptr [esp + 0x48] */
    void_lift_trap(0x1721209Du, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(esp + 0x58); /* 0x172120A0: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x172120A5: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x172120AA: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x172120AD: movq mm1, mm6 */
    MEM64(esp + 0xA8) = _mm[3]; /* 0x172120B0: movq qword ptr [esp + 0xa8], mm3 */
    MEM64(esp + 0xB8) = _mm[5]; /* 0x172120B8: movq qword ptr [esp + 0xb8], mm5 */
    void_lift_trap(0x172120C0u, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(esp + 0x70); /* 0x172120C3: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x172120C8: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x172120CB: punpckhdq mm1, mm7 */
    MEM64(esp + 0xA0) = _mm[6]; /* 0x172120CE: movq qword ptr [esp + 0xa0], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x172120D6: punpckhdq mm0, mm4 */
    void_lift_trap(0x172120D9u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0xB0) = _mm[1]; /* 0x172120DC: movq qword ptr [esp + 0xb0], mm1 */
    MEM64(esp + 0x98) = _mm[0]; /* 0x172120E4: movq qword ptr [esp + 0x98], mm0 */
    MEM64(esp + 0x88) = _mm[2]; /* 0x172120EC: movq qword ptr [esp + 0x88], mm2 */
    eax = MEM32(ebp + 0x8); /* 0x172120F4: mov eax, dword ptr [ebp + 8] */
    _mm[3] = MEM64(edx); /* 0x172120F7: movq mm3, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x172120FA: movd mm4, dword ptr [edx + 8] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x1702A558)); /* 0x172120FE: movd mm1, dword ptr [0x1702a558] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17212105: pxor mm0, mm0 */
    void_lift_trap(0x17212108u, "pswapd mm2, mm1");
    MEM64(eax) = _mm[1]; /* 0x1721210C: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x1721210F: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17212113: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17212117: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x1721211B: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x1721211F: movq qword ptr [eax + 0x28], mm1 */
    void_lift_trap(0x17212123u, "pfsub mm2, mm4");
    void_lift_trap(0x17212127u, "pfsub mm0, mm3");
    MEM64(eax + 0x38) = _mm[2]; /* 0x1721212B: movq qword ptr [eax + 0x38], mm2 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x1721212F: movq qword ptr [eax + 0x30], mm0 */
    _mm[0] = MEM64(eax); /* 0x17212133: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17212136: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x80); /* 0x1721213A: movq mm4, qword ptr [esp + 0x80] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212142: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x17212145: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721214D: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x17212150: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17212158u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721215Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721215Eu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212162: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212165u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x1721216E: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x17212176u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721217A: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721217Du, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x17212186u, "pfadd mm5, mm4");
    void_lift_trap(0x1721218Au, "pfmul mm6, mm1");
    void_lift_trap(0x1721218Eu, "pfadd mm2, mm0");
    void_lift_trap(0x17212192u, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x1721219Bu, "pfadd mm6, mm5");
    void_lift_trap(0x1721219Fu, "pfmul mm7, mm3");
    void_lift_trap(0x172121A3u, "pfadd mm2, mm1");
    void_lift_trap(0x172121A7u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x172121B0u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172121B4: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172121B8u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172121BC: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172121C0: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x172121C3: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172121CB: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172121CF: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x172121D2: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172121DA: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x172121DD: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x172121E5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172121E8u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172121EBu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172121EF: punpckhdq mm2, mm2 */
    void_lift_trap(0x172121F2u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x172121FB: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x17212203u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212207: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721220Au, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x17212213u, "pfadd mm5, mm4");
    void_lift_trap(0x17212217u, "pfmul mm6, mm1");
    void_lift_trap(0x1721221Bu, "pfadd mm2, mm0");
    void_lift_trap(0x1721221Fu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x17212228u, "pfadd mm6, mm5");
    void_lift_trap(0x1721222Cu, "pfmul mm7, mm3");
    void_lift_trap(0x17212230u, "pfadd mm2, mm1");
    void_lift_trap(0x17212234u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x1721223Du, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212241: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212245u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212249: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x1721224D: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x17212251: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212259: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721225D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x17212260: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212268: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x1721226B: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17212273u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212276u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212279u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721227D: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212280u, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x17212289: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x17212291u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212295: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212298u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x172122A1u, "pfadd mm5, mm4");
    void_lift_trap(0x172122A5u, "pfmul mm6, mm1");
    void_lift_trap(0x172122A9u, "pfadd mm2, mm0");
    void_lift_trap(0x172122ADu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x172122B6u, "pfadd mm6, mm5");
    void_lift_trap(0x172122BAu, "pfmul mm7, mm3");
    void_lift_trap(0x172122BEu, "pfadd mm2, mm1");
    void_lift_trap(0x172122C2u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x172122CBu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x172122CF: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x172122D3u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x172122D7: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172122DB: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x80); /* 0x172122DF: movq mm4, qword ptr [esp + 0x80] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172122E7: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172122EB: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x90); /* 0x172122EE: movq mm5, qword ptr [esp + 0x90] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172122F6: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0xA0); /* 0x172122F9: movq mm6, qword ptr [esp + 0xa0] */
    void_lift_trap(0x17212301u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212304u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212307u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721230B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721230Eu, "pfmul mm0, qword ptr [esp + 0x88]");
    _mm[7] = MEM64(esp + 0xB0); /* 0x17212317: movq mm7, qword ptr [esp + 0xb0] */
    void_lift_trap(0x1721231Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212323: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212326u, "pfmul mm2, qword ptr [esp + 0x98]");
    void_lift_trap(0x1721232Fu, "pfadd mm5, mm4");
    void_lift_trap(0x17212333u, "pfmul mm6, mm1");
    void_lift_trap(0x17212337u, "pfadd mm2, mm0");
    void_lift_trap(0x1721233Bu, "pfmul mm1, qword ptr [esp + 0xa8]");
    void_lift_trap(0x17212344u, "pfadd mm6, mm5");
    void_lift_trap(0x17212348u, "pfmul mm7, mm3");
    void_lift_trap(0x1721234Cu, "pfadd mm2, mm1");
    void_lift_trap(0x17212350u, "pfmul mm3, qword ptr [esp + 0xb8]");
    void_lift_trap(0x17212359u, "pfadd mm7, mm6");
    void_lift_trap(0x1721235Du, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212361: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17212365: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x17212369: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x1721236C: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x17212370: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212374: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17212377: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721237C: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x1721237F: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17212384u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212387u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721238Au, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721238E: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212391u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17212397: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x1721239Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172123A0: punpckhdq mm3, mm3 */
    void_lift_trap(0x172123A3u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x172123A9u, "pfadd mm5, mm4");
    void_lift_trap(0x172123ADu, "pfmul mm6, mm1");
    void_lift_trap(0x172123B1u, "pfadd mm2, mm0");
    void_lift_trap(0x172123B5u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x172123BBu, "pfadd mm6, mm5");
    void_lift_trap(0x172123BFu, "pfmul mm7, mm3");
    void_lift_trap(0x172123C3u, "pfadd mm2, mm1");
    void_lift_trap(0x172123C7u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x172123CDu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172123D1: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172123D5u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172123D9: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172123DD: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x172123E0: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172123E4: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172123E8: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x172123EB: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172123F0: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x172123F3: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x172123F8u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172123FBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172123FEu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212402: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212405u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x1721240B: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17212410u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212414: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212417u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x1721241Du, "pfadd mm5, mm4");
    void_lift_trap(0x17212421u, "pfmul mm6, mm1");
    void_lift_trap(0x17212425u, "pfadd mm2, mm0");
    void_lift_trap(0x17212429u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x1721242Fu, "pfadd mm6, mm5");
    void_lift_trap(0x17212433u, "pfmul mm7, mm3");
    void_lift_trap(0x17212437u, "pfadd mm2, mm1");
    void_lift_trap(0x1721243Bu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17212441u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212445: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212449u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x1721244D: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17212451: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x17212455: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212459: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721245D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17212460: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212465: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17212468: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x1721246Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212470u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212473u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212477: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721247Au, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17212480: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17212485u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212489: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721248Cu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17212492u, "pfadd mm5, mm4");
    void_lift_trap(0x17212496u, "pfmul mm6, mm1");
    void_lift_trap(0x1721249Au, "pfadd mm2, mm0");
    void_lift_trap(0x1721249Eu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x172124A4u, "pfadd mm6, mm5");
    void_lift_trap(0x172124A8u, "pfmul mm7, mm3");
    void_lift_trap(0x172124ACu, "pfadd mm2, mm1");
    void_lift_trap(0x172124B0u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x172124B6u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x172124BA: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x172124BEu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x172124C2: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172124C6: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x172124CA: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172124CE: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172124D2: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x172124D5: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172124DA: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x172124DD: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x172124E2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172124E5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172124E8u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172124EC: punpckhdq mm2, mm2 */
    void_lift_trap(0x172124EFu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x172124F5: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x172124FAu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172124FE: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212501u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17212507u, "pfadd mm5, mm4");
    void_lift_trap(0x1721250Bu, "pfmul mm6, mm1");
    void_lift_trap(0x1721250Fu, "pfadd mm2, mm0");
    void_lift_trap(0x17212513u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17212519u, "pfadd mm6, mm5");
    void_lift_trap(0x1721251Du, "pfmul mm7, mm3");
    void_lift_trap(0x17212521u, "pfadd mm2, mm1");
    void_lift_trap(0x17212525u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x1721252Bu, "pfadd mm7, mm6");
    void_lift_trap(0x1721252Fu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212533: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17212537: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x1721253B: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x1721253E: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212542: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212547: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x1721254A: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721254F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212552: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212557u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721255Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721255Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212561: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212564u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x1721256A: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721256Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212573: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212576u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x1721257Cu, "pfadd mm5, mm4");
    void_lift_trap(0x17212580u, "pfmul mm6, mm1");
    void_lift_trap(0x17212584u, "pfadd mm2, mm0");
    void_lift_trap(0x17212588u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x1721258Eu, "pfadd mm6, mm5");
    void_lift_trap(0x17212592u, "pfmul mm7, mm3");
    void_lift_trap(0x17212596u, "pfadd mm2, mm1");
    void_lift_trap(0x1721259Au, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x172125A0u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172125A4: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172125A8u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172125AC: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172125B0: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172125B3: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172125B8: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172125BC: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172125BF: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172125C4: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172125C7: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172125CCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172125CFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172125D2u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172125D6: punpckhdq mm2, mm2 */
    void_lift_trap(0x172125D9u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172125DF: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172125E4u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172125E8: punpckhdq mm3, mm3 */
    void_lift_trap(0x172125EBu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172125F1u, "pfadd mm5, mm4");
    void_lift_trap(0x172125F5u, "pfmul mm6, mm1");
    void_lift_trap(0x172125F9u, "pfadd mm2, mm0");
    void_lift_trap(0x172125FDu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212603u, "pfadd mm6, mm5");
    void_lift_trap(0x17212607u, "pfmul mm7, mm3");
    void_lift_trap(0x1721260Bu, "pfadd mm2, mm1");
    void_lift_trap(0x1721260Fu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212615u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212619: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x1721261Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212621: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17212625: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212629: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x1721262E: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212632: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212635: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721263A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x1721263D: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212642u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212645u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212648u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721264C: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721264Fu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212655: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721265Au, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721265E: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212661u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212667u, "pfadd mm5, mm4");
    void_lift_trap(0x1721266Bu, "pfmul mm6, mm1");
    void_lift_trap(0x1721266Fu, "pfadd mm2, mm0");
    void_lift_trap(0x17212673u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212679u, "pfadd mm6, mm5");
    void_lift_trap(0x1721267Du, "pfmul mm7, mm3");
    void_lift_trap(0x17212681u, "pfadd mm2, mm1");
    void_lift_trap(0x17212685u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721268Bu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x1721268F: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17212693u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17212697: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x1721269B: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721269F: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172126A4: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172126A8: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172126AB: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172126B0: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x172126B3: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x172126B8u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172126BBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172126BEu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172126C2: punpckhdq mm2, mm2 */
    void_lift_trap(0x172126C5u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172126CB: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172126D0u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172126D4: punpckhdq mm3, mm3 */
    void_lift_trap(0x172126D7u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172126DDu, "pfadd mm5, mm4");
    void_lift_trap(0x172126E1u, "pfmul mm6, mm1");
    void_lift_trap(0x172126E5u, "pfadd mm2, mm0");
    void_lift_trap(0x172126E9u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172126EFu, "pfadd mm6, mm5");
    void_lift_trap(0x172126F3u, "pfmul mm7, mm3");
    void_lift_trap(0x172126F7u, "pfadd mm2, mm1");
    void_lift_trap(0x172126FBu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212701u, "pfadd mm7, mm6");
    void_lift_trap(0x17212705u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212709: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x1721270D: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(edx); /* 0x17212711: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(eax + 0x30); /* 0x17212714: movq mm1, qword ptr [eax + 0x30] */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17212718: movd mm2, dword ptr [edx + 8] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x1721271C: movd mm3, dword ptr [eax + 0x38] */
    void_lift_trap(0x17212720u, "pfadd mm0, mm1");
    void_lift_trap(0x17212724u, "pfadd mm2, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17212728: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[2]; /* 0x1721272C: movd dword ptr [eax + 0x38], mm2 */
    goto L_17212C1A; /* 0x17212730: jmp 0x17212c1a */
L_17212735:
    eax = MEM32(ebp + 0x8); /* 0x17212735: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(esp + 0x40); /* 0x17212738: movq mm0, qword ptr [esp + 0x40] */
    _mm[1] = MEM64(esp + 0x50); /* 0x1721273D: movq mm1, qword ptr [esp + 0x50] */
    _mm[3] = MEM64(esp + 0x68); /* 0x17212742: movq mm3, qword ptr [esp + 0x68] */
    _mm[4] = MEM64(esp + 0x78); /* 0x17212747: movq mm4, qword ptr [esp + 0x78] */
    _mm[2] = _mm[0]; /* 0x1721274C: movq mm2, mm0 */
    void_lift_trap(0x1721274Fu, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x17212752: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x17212755: movq mm5, mm3 */
    MEM64(eax) = _mm[0]; /* 0x17212758: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x1721275B: movq qword ptr [eax + 0x10], mm2 */
    _mm[6] = MEM64(esp + 0x48); /* 0x1721275F: movq mm6, qword ptr [esp + 0x48] */
    void_lift_trap(0x17212764u, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(esp + 0x58); /* 0x17212767: movq mm7, qword ptr [esp + 0x58] */
    _mm[0] = MEM64(esp + 0x60); /* 0x1721276C: movq mm0, qword ptr [esp + 0x60] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x17212771: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x17212774: movq mm1, mm6 */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17212777: movq qword ptr [eax + 0x28], mm3 */
    MEM64(eax + 0x38) = _mm[5]; /* 0x1721277B: movq qword ptr [eax + 0x38], mm5 */
    void_lift_trap(0x1721277Fu, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(esp + 0x70); /* 0x17212782: movq mm4, qword ptr [esp + 0x70] */
    _mm[2] = _mm[0]; /* 0x17212787: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x1721278A: punpckhdq mm1, mm7 */
    MEM64(eax + 0x20) = _mm[6]; /* 0x1721278D: movq qword ptr [eax + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17212791: punpckhdq mm0, mm4 */
    void_lift_trap(0x17212794u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x30) = _mm[1]; /* 0x17212797: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x1721279B: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x8) = _mm[2]; /* 0x1721279F: movq qword ptr [eax + 8], mm2 */
    _mm[0] = MEM64(eax); /* 0x172127A3: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x172127A6: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp); /* 0x172127AA: movq mm4, qword ptr [esp] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172127AE: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x172127B1: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172127B6: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x172127B9: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x172127BEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172127C1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172127C4u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172127C8: punpckhdq mm2, mm2 */
    void_lift_trap(0x172127CBu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x172127D1: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x172127D6u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172127DA: punpckhdq mm3, mm3 */
    void_lift_trap(0x172127DDu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x172127E3u, "pfadd mm5, mm4");
    void_lift_trap(0x172127E7u, "pfmul mm6, mm1");
    void_lift_trap(0x172127EBu, "pfadd mm2, mm0");
    void_lift_trap(0x172127EFu, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x172127F5u, "pfadd mm6, mm5");
    void_lift_trap(0x172127F9u, "pfmul mm7, mm3");
    void_lift_trap(0x172127FDu, "pfadd mm2, mm1");
    void_lift_trap(0x17212801u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17212807u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x1721280B: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x1721280Fu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17212813: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17212817: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp); /* 0x1721281A: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x1721281E: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212822: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x17212825: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721282A: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x1721282D: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x17212832u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212835u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212838u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721283C: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721283Fu, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x17212845: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x1721284Au, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721284E: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212851u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17212857u, "pfadd mm5, mm4");
    void_lift_trap(0x1721285Bu, "pfmul mm6, mm1");
    void_lift_trap(0x1721285Fu, "pfadd mm2, mm0");
    void_lift_trap(0x17212863u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17212869u, "pfadd mm6, mm5");
    void_lift_trap(0x1721286Du, "pfmul mm7, mm3");
    void_lift_trap(0x17212871u, "pfadd mm2, mm1");
    void_lift_trap(0x17212875u, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x1721287Bu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x1721287F: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212883u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212887: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x1721288B: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp); /* 0x1721288F: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212893: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212897: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x1721289A: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721289F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x172128A2: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x172128A7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172128AAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172128ADu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172128B1: punpckhdq mm2, mm2 */
    void_lift_trap(0x172128B4u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x172128BA: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x172128BFu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172128C3: punpckhdq mm3, mm3 */
    void_lift_trap(0x172128C6u, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x172128CCu, "pfadd mm5, mm4");
    void_lift_trap(0x172128D0u, "pfmul mm6, mm1");
    void_lift_trap(0x172128D4u, "pfadd mm2, mm0");
    void_lift_trap(0x172128D8u, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x172128DEu, "pfadd mm6, mm5");
    void_lift_trap(0x172128E2u, "pfmul mm7, mm3");
    void_lift_trap(0x172128E6u, "pfadd mm2, mm1");
    void_lift_trap(0x172128EAu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x172128F0u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x172128F4: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x172128F8u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x172128FC: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17212900: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp); /* 0x17212904: movq mm4, qword ptr [esp] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17212908: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x1721290C: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x10); /* 0x1721290F: movq mm5, qword ptr [esp + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212914: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x20); /* 0x17212917: movq mm6, qword ptr [esp + 0x20] */
    void_lift_trap(0x1721291Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721291Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212922u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212926: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212929u, "pfmul mm0, qword ptr [esp + 8]");
    _mm[7] = MEM64(esp + 0x30); /* 0x1721292F: movq mm7, qword ptr [esp + 0x30] */
    void_lift_trap(0x17212934u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212938: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721293Bu, "pfmul mm2, qword ptr [esp + 0x18]");
    void_lift_trap(0x17212941u, "pfadd mm5, mm4");
    void_lift_trap(0x17212945u, "pfmul mm6, mm1");
    void_lift_trap(0x17212949u, "pfadd mm2, mm0");
    void_lift_trap(0x1721294Du, "pfmul mm1, qword ptr [esp + 0x28]");
    void_lift_trap(0x17212953u, "pfadd mm6, mm5");
    void_lift_trap(0x17212957u, "pfmul mm7, mm3");
    void_lift_trap(0x1721295Bu, "pfadd mm2, mm1");
    void_lift_trap(0x1721295Fu, "pfmul mm3, qword ptr [esp + 0x38]");
    void_lift_trap(0x17212965u, "pfadd mm7, mm6");
    void_lift_trap(0x17212969u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x1721296D: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17212971: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax); /* 0x17212975: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17212978: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721297C: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212981: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212984: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212989: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x1721298C: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212991u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212994u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212997u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721299B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721299Eu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x172129A4: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x172129A9u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172129AD: punpckhdq mm3, mm3 */
    void_lift_trap(0x172129B0u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x172129B6u, "pfadd mm5, mm4");
    void_lift_trap(0x172129BAu, "pfmul mm6, mm1");
    void_lift_trap(0x172129BEu, "pfadd mm2, mm0");
    void_lift_trap(0x172129C2u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172129C8u, "pfadd mm6, mm5");
    void_lift_trap(0x172129CCu, "pfmul mm7, mm3");
    void_lift_trap(0x172129D0u, "pfadd mm2, mm1");
    void_lift_trap(0x172129D4u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x172129DAu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x172129DE: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x172129E2u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x172129E6: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x172129EA: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x172129ED: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172129F2: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172129F6: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x172129F9: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172129FE: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212A01: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212A06u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212A09u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212A0Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212A10: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212A13u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212A19: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212A1Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212A22: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212A25u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212A2Bu, "pfadd mm5, mm4");
    void_lift_trap(0x17212A2Fu, "pfmul mm6, mm1");
    void_lift_trap(0x17212A33u, "pfadd mm2, mm0");
    void_lift_trap(0x17212A37u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212A3Du, "pfadd mm6, mm5");
    void_lift_trap(0x17212A41u, "pfmul mm7, mm3");
    void_lift_trap(0x17212A45u, "pfadd mm2, mm1");
    void_lift_trap(0x17212A49u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212A4Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212A53: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212A57u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212A5B: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17212A5F: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212A63: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212A68: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212A6C: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212A6F: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212A74: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212A77: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212A7Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212A7Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212A82u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212A86: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212A89u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212A8F: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212A94u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212A98: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212A9Bu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212AA1u, "pfadd mm5, mm4");
    void_lift_trap(0x17212AA5u, "pfmul mm6, mm1");
    void_lift_trap(0x17212AA9u, "pfadd mm2, mm0");
    void_lift_trap(0x17212AADu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212AB3u, "pfadd mm6, mm5");
    void_lift_trap(0x17212AB7u, "pfmul mm7, mm3");
    void_lift_trap(0x17212ABBu, "pfadd mm2, mm1");
    void_lift_trap(0x17212ABFu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212AC5u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17212AC9: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17212ACDu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17212AD1: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17212AD5: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212AD9: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17212ADE: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212AE2: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212AE5: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212AEA: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212AED: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212AF2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212AF5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212AF8u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212AFC: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212AFFu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212B05: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212B0Au, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212B0E: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212B11u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212B17u, "pfadd mm5, mm4");
    void_lift_trap(0x17212B1Bu, "pfmul mm6, mm1");
    void_lift_trap(0x17212B1Fu, "pfadd mm2, mm0");
    void_lift_trap(0x17212B23u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212B29u, "pfadd mm6, mm5");
    void_lift_trap(0x17212B2Du, "pfmul mm7, mm3");
    void_lift_trap(0x17212B31u, "pfadd mm2, mm1");
    void_lift_trap(0x17212B35u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212B3Bu, "pfadd mm7, mm6");
    void_lift_trap(0x17212B3Fu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212B43: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17212B47: movq qword ptr [eax + 0x38], mm3 */
    goto L_17212C1A; /* 0x17212B4B: jmp 0x17212c1a */
L_17212B50:
    ecx = MEM32(ebp + 0xC); /* 0x17212B50: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x17212B53: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17212BAF; /* 0x17212B55: je 0x17212baf */
L_17212B57:
    _mm[1] = MEM64(0x1702A568); /* 0x17212B57: movq mm1, qword ptr [0x1702a568] */
    _mm[4] = MEM64(ecx); /* 0x17212B5E: movq mm4, qword ptr [ecx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17212B61: movd mm5, dword ptr [ecx + 8] */
    _mm[2] = MEM64(edx); /* 0x17212B65: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17212B68: movd mm3, dword ptr [edx + 8] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17212B6C: pxor mm0, mm0 */
    _mm[6] = _mm[1]; /* 0x17212B6F: movq mm6, mm1 */
    void_lift_trap(0x17212B72u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212B75u, "pfsub mm1, mm2");
    MEM64(eax + 0x28) = _mm[3]; /* 0x17212B79: movq qword ptr [eax + 0x28], mm3 */
    void_lift_trap(0x17212B7Du, "pfsub mm6, mm3");
    MEM64(eax + 0x8) = _mm[0]; /* 0x17212B81: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17212B85: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x17212B89: movq qword ptr [eax + 0x20], mm0 */
    void_lift_trap(0x17212B8Du, "pfmul mm1, mm4");
    _mm[4] = _mm[2]; /* 0x17212B91: movq mm4, mm2 */
    void_lift_trap(0x17212B94u, "pfmul mm6, mm5");
    void_lift_trap(0x17212B98u, "unsupported PUNPCKLDQ operands");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17212B9B: punpckhdq mm0, mm4 */
    MEM64(eax) = _mm[2]; /* 0x17212B9E: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[0]; /* 0x17212BA1: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x30) = _mm[1]; /* 0x17212BA5: movq qword ptr [eax + 0x30], mm1 */
    MEM64(eax + 0x38) = _mm[6]; /* 0x17212BA9: movq qword ptr [eax + 0x38], mm6 */
    goto L_17212C1A; /* 0x17212BAD: jmp 0x17212c1a */
L_17212BAF:
    _mm[1] = MEM64(0x1702A548); /* 0x17212BAF: movq mm1, qword ptr [0x1702a548] */
    _mm[2] = MEM64(edx); /* 0x17212BB6: movq mm2, qword ptr [edx] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17212BB9: movd mm4, dword ptr [edx + 8] */
    _mm[5] = (_mm[5] ^ _mm[5]); /* 0x17212BBD: pxor mm5, mm5 */
    _mm[3] = _mm[2]; /* 0x17212BC0: movq mm3, mm2 */
    void_lift_trap(0x17212BC3u, "unsupported PUNPCKLDQ operands");
    _mm[0] = _mm[5]; /* 0x17212BC6: movq mm0, mm5 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[3]); /* 0x17212BC9: punpckhdq mm5, mm3 */
    MEM64(eax) = _mm[2]; /* 0x17212BCC: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x17212BCF: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[5]; /* 0x17212BD3: movq qword ptr [eax + 0x10], mm5 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17212BD7: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x17212BDB: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x17212BDF: movq qword ptr [eax + 0x28], mm4 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x17212BE3: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[1]; /* 0x17212BE7: movq qword ptr [eax + 0x38], mm1 */
    goto L_17212C1A; /* 0x17212BEB: jmp 0x17212c1a */
L_17212BED:
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x1702A558)); /* 0x17212BED: movd mm1, dword ptr [0x1702a558] */
    _mm[0] = (_mm[0] ^ _mm[0]); /* 0x17212BF4: pxor mm0, mm0 */
    void_lift_trap(0x17212BF7u, "pswapd mm2, mm1");
    MEM64(eax) = _mm[1]; /* 0x17212BFB: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x17212BFE: movq qword ptr [eax + 8], mm0 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x17212C02: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[0]; /* 0x17212C06: movq qword ptr [eax + 0x18], mm0 */
    MEM64(eax + 0x20) = _mm[0]; /* 0x17212C0A: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[1]; /* 0x17212C0E: movq qword ptr [eax + 0x28], mm1 */
    MEM64(eax + 0x30) = _mm[0]; /* 0x17212C12: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[2]; /* 0x17212C16: movq qword ptr [eax + 0x38], mm2 */
L_17212C1A:
    ecx = MEM32(ebp + 0x1C); /* 0x17212C1A: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x17212C1D: mov edx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x17212C20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172130D0; /* 0x17212C22: je 0x172130d0 */
L_17212C28:
    _mm[0] = MEM64(ecx); /* 0x17212C28: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x17212C2B: movq mm1, qword ptr [ecx + 8] */
    void_lift_trap(0x17212C2Fu, "pswapd mm3, mm0");
    _mm[6] = _mm[0]; /* 0x17212C33: movq mm6, mm0 */
    _mm[2] = _mm[0]; /* 0x17212C36: movq mm2, mm0 */
    void_lift_trap(0x17212C39u, "pfadd mm0, mm0");
    _mm[4] = _mm[1]; /* 0x17212C3D: movq mm4, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[1]); /* 0x17212C40: punpckhdq mm6, mm1 */
    void_lift_trap(0x17212C43u, "pfadd mm1, mm1");
    _mm[5] = _mm[0]; /* 0x17212C47: movq mm5, mm0 */
    void_lift_trap(0x17212C4Au, "pfmul mm0, mm2");
    void_lift_trap(0x17212C4Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212C51u, "pfmul mm2, mm1");
    void_lift_trap(0x17212C55u, "pfmul mm3, mm1");
    void_lift_trap(0x17212C59u, "pfmul mm1, mm4");
    void_lift_trap(0x17212C5Du, "pfmul mm6, mm5");
    _mm[4] = _mm[0]; /* 0x17212C61: movq mm4, mm0 */
    void_lift_trap(0x17212C64u, "pfsubr mm0, qword ptr [0x1702a568]");
    _mm[5] = _mm[1]; /* 0x17212C6C: movq mm5, mm1 */
    void_lift_trap(0x17212C6Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212C72u, "pfpnacc mm3, mm3");
    void_lift_trap(0x17212C76u, "pfacc mm4, mm4");
    void_lift_trap(0x17212C7Au, "pfpnacc mm6, mm6");
    void_lift_trap(0x17212C7Eu, "pfpnacc mm2, mm2");
    void_lift_trap(0x17212C82u, "pfsub mm0, mm1");
    void_lift_trap(0x17212C86u, "pswapd mm5, mm2");
    void_lift_trap(0x17212C8Au, "pfsubr mm4, qword ptr [0x1702a568]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17212C92: pxor mm7, mm7 */
    _mm[1] = _mm[0]; /* 0x17212C95: movq mm1, mm0 */
    MEM64(esp + 0x70) = _mm[7]; /* 0x17212C98: movq qword ptr [esp + 0x70], mm7 */
    void_lift_trap(0x17212C9Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212CA0u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[7]); /* 0x17212CA3: punpckhdq mm4, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[6]); /* 0x17212CA6: punpckhdq mm0, mm6 */
    MEM64(esp + 0x60) = _mm[5]; /* 0x17212CA9: movq qword ptr [esp + 0x60], mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[7]); /* 0x17212CAE: punpckhdq mm3, mm7 */
    MEM64(esp + 0x48) = _mm[2]; /* 0x17212CB1: movq qword ptr [esp + 0x48], mm2 */
    void_lift_trap(0x17212CB6u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x68) = _mm[4]; /* 0x17212CB9: movq qword ptr [esp + 0x68], mm4 */
    void_lift_trap(0x17212CBEu, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x40) = _mm[0]; /* 0x17212CC5: movq qword ptr [esp + 0x40], mm0 */
    MEM64(esp + 0x50) = _mm[6]; /* 0x17212CCA: movq qword ptr [esp + 0x50], mm6 */
    MEM64(esp + 0x58) = _mm[3]; /* 0x17212CCF: movq qword ptr [esp + 0x58], mm3 */
    MEM64(esp + 0x78) = _mm[7]; /* 0x17212CD4: movq qword ptr [esp + 0x78], mm7 */
    /* test edx, edx */ /* 0x17212CD9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17212EFA; /* 0x17212CDB: je 0x17212efa */
L_17212CE1:
    _mm[0] = MEM64(eax + 0x30); /* 0x17212CE1: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17212CE5: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x17212CE9: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17212CEC: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x17212CF0u, "pfsub mm0, mm2");
    void_lift_trap(0x17212CF4u, "pfsub mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17212CF8: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17212CFC: movd dword ptr [eax + 0x38], mm1 */
    _mm[0] = MEM64(eax); /* 0x17212D00: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17212D03: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212D07: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212D0C: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212D0F: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212D14: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212D17: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212D1Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212D1Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212D22u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212D26: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212D29u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212D2F: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212D34u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212D38: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212D3Bu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212D41u, "pfadd mm5, mm4");
    void_lift_trap(0x17212D45u, "pfmul mm6, mm1");
    void_lift_trap(0x17212D49u, "pfadd mm2, mm0");
    void_lift_trap(0x17212D4Du, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212D53u, "pfadd mm6, mm5");
    void_lift_trap(0x17212D57u, "pfmul mm7, mm3");
    void_lift_trap(0x17212D5Bu, "pfadd mm2, mm1");
    void_lift_trap(0x17212D5Fu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212D65u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17212D69: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17212D6Du, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17212D71: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17212D75: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212D78: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17212D7D: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212D81: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212D84: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212D89: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212D8C: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212D91u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212D94u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212D97u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212D9B: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212D9Eu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212DA4: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212DA9u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212DAD: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212DB0u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212DB6u, "pfadd mm5, mm4");
    void_lift_trap(0x17212DBAu, "pfmul mm6, mm1");
    void_lift_trap(0x17212DBEu, "pfadd mm2, mm0");
    void_lift_trap(0x17212DC2u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212DC8u, "pfadd mm6, mm5");
    void_lift_trap(0x17212DCCu, "pfmul mm7, mm3");
    void_lift_trap(0x17212DD0u, "pfadd mm2, mm1");
    void_lift_trap(0x17212DD4u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212DDAu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212DDE: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212DE2u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212DE6: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17212DEA: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212DEE: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212DF3: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212DF7: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212DFA: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212DFF: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212E02: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212E07u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212E0Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212E0Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212E11: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212E14u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212E1A: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212E1Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212E23: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212E26u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212E2Cu, "pfadd mm5, mm4");
    void_lift_trap(0x17212E30u, "pfmul mm6, mm1");
    void_lift_trap(0x17212E34u, "pfadd mm2, mm0");
    void_lift_trap(0x17212E38u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212E3Eu, "pfadd mm6, mm5");
    void_lift_trap(0x17212E42u, "pfmul mm7, mm3");
    void_lift_trap(0x17212E46u, "pfadd mm2, mm1");
    void_lift_trap(0x17212E4Au, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212E50u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x17212E54: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17212E58u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17212E5C: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x17212E60: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212E64: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17212E69: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212E6D: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212E70: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212E75: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212E78: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212E7Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212E80u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212E83u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212E87: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212E8Au, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212E90: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212E95u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212E99: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212E9Cu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212EA2u, "pfadd mm5, mm4");
    void_lift_trap(0x17212EA6u, "pfmul mm6, mm1");
    void_lift_trap(0x17212EAAu, "pfadd mm2, mm0");
    void_lift_trap(0x17212EAEu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212EB4u, "pfadd mm6, mm5");
    void_lift_trap(0x17212EB8u, "pfmul mm7, mm3");
    void_lift_trap(0x17212EBCu, "pfadd mm2, mm1");
    void_lift_trap(0x17212EC0u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212EC6u, "pfadd mm7, mm6");
    void_lift_trap(0x17212ECAu, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17212ECE: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x17212ED2: movq qword ptr [eax + 0x38], mm3 */
    _mm[0] = MEM64(eax + 0x30); /* 0x17212ED6: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x17212EDA: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(edx); /* 0x17212EDE: movq mm2, qword ptr [edx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17212EE1: movd mm3, dword ptr [edx + 8] */
    void_lift_trap(0x17212EE5u, "pfadd mm0, mm2");
    void_lift_trap(0x17212EE9u, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x17212EED: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x17212EF1: movd dword ptr [eax + 0x38], mm1 */
    goto L_172130D0; /* 0x17212EF5: jmp 0x172130d0 */
L_17212EFA:
    _mm[0] = MEM64(eax); /* 0x17212EFA: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17212EFD: movq mm1, qword ptr [eax + 8] */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212F01: movq mm4, qword ptr [esp + 0x40] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212F06: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212F09: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212F0E: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212F11: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212F16u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212F19u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212F1Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212F20: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212F23u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212F29: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212F2Eu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212F32: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212F35u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212F3Bu, "pfadd mm5, mm4");
    void_lift_trap(0x17212F3Fu, "pfmul mm6, mm1");
    void_lift_trap(0x17212F43u, "pfadd mm2, mm0");
    void_lift_trap(0x17212F47u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212F4Du, "pfadd mm6, mm5");
    void_lift_trap(0x17212F51u, "pfmul mm7, mm3");
    void_lift_trap(0x17212F55u, "pfadd mm2, mm1");
    void_lift_trap(0x17212F59u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212F5Fu, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x10); /* 0x17212F63: movq mm0, qword ptr [eax + 0x10] */
    void_lift_trap(0x17212F67u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x18); /* 0x17212F6B: movq mm1, qword ptr [eax + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17212F6F: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212F72: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17212F77: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212F7B: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212F7E: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212F83: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212F86: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17212F8Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212F8Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17212F91u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17212F95: punpckhdq mm2, mm2 */
    void_lift_trap(0x17212F98u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17212F9E: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17212FA3u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17212FA7: punpckhdq mm3, mm3 */
    void_lift_trap(0x17212FAAu, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17212FB0u, "pfadd mm5, mm4");
    void_lift_trap(0x17212FB4u, "pfmul mm6, mm1");
    void_lift_trap(0x17212FB8u, "pfadd mm2, mm0");
    void_lift_trap(0x17212FBCu, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17212FC2u, "pfadd mm6, mm5");
    void_lift_trap(0x17212FC6u, "pfmul mm7, mm3");
    void_lift_trap(0x17212FCAu, "pfadd mm2, mm1");
    void_lift_trap(0x17212FCEu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x17212FD4u, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x20); /* 0x17212FD8: movq mm0, qword ptr [eax + 0x20] */
    void_lift_trap(0x17212FDCu, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x28); /* 0x17212FE0: movq mm1, qword ptr [eax + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17212FE4: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x17212FE8: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x17212FED: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17212FF1: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x17212FF4: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17212FF9: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17212FFC: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17213001u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213004u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213007u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721300B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721300Eu, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x17213014: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x17213019u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721301D: punpckhdq mm3, mm3 */
    void_lift_trap(0x17213020u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x17213026u, "pfadd mm5, mm4");
    void_lift_trap(0x1721302Au, "pfmul mm6, mm1");
    void_lift_trap(0x1721302Eu, "pfadd mm2, mm0");
    void_lift_trap(0x17213032u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x17213038u, "pfadd mm6, mm5");
    void_lift_trap(0x1721303Cu, "pfmul mm7, mm3");
    void_lift_trap(0x17213040u, "pfadd mm2, mm1");
    void_lift_trap(0x17213044u, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x1721304Au, "pfadd mm7, mm6");
    _mm[0] = MEM64(eax + 0x30); /* 0x1721304E: movq mm0, qword ptr [eax + 0x30] */
    void_lift_trap(0x17213052u, "pfadd mm3, mm2");
    _mm[1] = MEM64(eax + 0x38); /* 0x17213056: movq mm1, qword ptr [eax + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x1721305A: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(esp + 0x40); /* 0x1721305E: movq mm4, qword ptr [esp + 0x40] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x17213063: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17213067: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(esp + 0x50); /* 0x1721306A: movq mm5, qword ptr [esp + 0x50] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721306F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(esp + 0x60); /* 0x17213072: movq mm6, qword ptr [esp + 0x60] */
    void_lift_trap(0x17213077u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721307Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721307Du, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17213081: punpckhdq mm2, mm2 */
    void_lift_trap(0x17213084u, "pfmul mm0, qword ptr [esp + 0x48]");
    _mm[7] = MEM64(esp + 0x70); /* 0x1721308A: movq mm7, qword ptr [esp + 0x70] */
    void_lift_trap(0x1721308Fu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213093: punpckhdq mm3, mm3 */
    void_lift_trap(0x17213096u, "pfmul mm2, qword ptr [esp + 0x58]");
    void_lift_trap(0x1721309Cu, "pfadd mm5, mm4");
    void_lift_trap(0x172130A0u, "pfmul mm6, mm1");
    void_lift_trap(0x172130A4u, "pfadd mm2, mm0");
    void_lift_trap(0x172130A8u, "pfmul mm1, qword ptr [esp + 0x68]");
    void_lift_trap(0x172130AEu, "pfadd mm6, mm5");
    void_lift_trap(0x172130B2u, "pfmul mm7, mm3");
    void_lift_trap(0x172130B6u, "pfadd mm2, mm1");
    void_lift_trap(0x172130BAu, "pfmul mm3, qword ptr [esp + 0x78]");
    void_lift_trap(0x172130C0u, "pfadd mm7, mm6");
    void_lift_trap(0x172130C4u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x172130C8: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x172130CC: movq qword ptr [eax + 0x38], mm3 */
L_172130D0:
    ecx = MEM32(ebp + 0x20); /* 0x172130D0: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x172130D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172130F6; /* 0x172130D5: je 0x172130f6 */
L_172130D7:
    _mm[0] = MEM64(eax + 0x30); /* 0x172130D7: movq mm0, qword ptr [eax + 0x30] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x38)); /* 0x172130DB: movd mm1, dword ptr [eax + 0x38] */
    _mm[2] = MEM64(ecx); /* 0x172130DF: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x172130E2: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x172130E6u, "pfadd mm0, mm2");
    void_lift_trap(0x172130EAu, "pfadd mm1, mm3");
    MEM64(eax + 0x30) = _mm[0]; /* 0x172130EE: movq qword ptr [eax + 0x30], mm0 */
    MEM32(eax + 0x38) = (uint32_t)_mm[1]; /* 0x172130F2: movd dword ptr [eax + 0x38], mm1 */
L_172130F6:
    esp = ebp; /* 0x172130F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x172130F8: pop ebp */
    void_lift_trap(0x172130F9u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x172130FB: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17213103(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213103u);

L_17213103:
    edx = MEM32(esp + 0xC); /* 0x17213103: mov edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x17213107: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _mm[1] = MEM64(edx + 0x10); /* 0x1721310A: movq mm1, qword ptr [edx + 0x10] */
    _mm[2] = MEM64(edx + 0x20); /* 0x1721310E: movq mm2, qword ptr [edx + 0x20] */
    void_lift_trap(0x17213112u, "pswapd mm5, mm1");
    _mm[3] = MEM64(edx + 0x30); /* 0x17213116: movq mm3, qword ptr [edx + 0x30] */
    void_lift_trap(0x1721311Au, "pswapd mm4, mm2");
    _mm[0] = MEM64(edx); /* 0x1721311E: movq mm0, qword ptr [edx] */
    void_lift_trap(0x17213121u, "pswapd mm6, mm3");
    void_lift_trap(0x17213125u, "pswapd mm7, mm2");
    void_lift_trap(0x17213129u, "pfmul mm5, mm0");
    void_lift_trap(0x1721312Du, "pfmul mm4, mm0");
    void_lift_trap(0x17213131u, "pfmul mm6, mm0");
    void_lift_trap(0x17213135u, "pswapd mm0, mm3");
    void_lift_trap(0x17213139u, "pfmul mm7, mm1");
    void_lift_trap(0x1721313Du, "pfnacc mm5, mm4");
    void_lift_trap(0x17213141u, "pfmul mm1, mm0");
    void_lift_trap(0x17213145u, "pfmul mm2, mm0");
    void_lift_trap(0x17213149u, "pfnacc mm6, mm7");
    void_lift_trap(0x1721314Du, "pfnacc mm1, mm2");
    _mm[0] = MEM64(edx + 0x38); /* 0x17213151: movq mm0, qword ptr [edx + 0x38] */
    _mm[2] = _mm[6]; /* 0x17213155: movq mm2, mm6 */
    _mm[4] = _mm[1]; /* 0x17213158: movq mm4, mm1 */
    _mm[7] = MEM64(edx + 0x28); /* 0x1721315B: movq mm7, qword ptr [edx + 0x28] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721315F: punpckhdq mm2, mm2 */
    _mm[3] = _mm[1]; /* 0x17213162: movq mm3, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17213165: punpckhdq mm4, mm4 */
    void_lift_trap(0x17213168u, "pfmul mm2, mm0");
    void_lift_trap(0x1721316Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721316Fu, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213174u, "pfmul mm3, mm7");
    void_lift_trap(0x17213178u, "pfadd mm2, mm4");
    _mm[4] = _mm[6]; /* 0x1721317C: movq mm4, mm6 */
    void_lift_trap(0x1721317Fu, "pfsub mm2, mm3");
    _mm[3] = _mm[1]; /* 0x17213183: movq mm3, mm1 */
    void_lift_trap(0x17213186u, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x8) = _mm[2]; /* 0x17213189: movq qword ptr [esp + 8], mm2 */
    _mm[2] = _mm[5]; /* 0x1721318E: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213191: punpckhdq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17213194: punpckhdq mm2, mm2 */
    void_lift_trap(0x17213197u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x1721319Cu, "pfmul mm2, mm0");
    void_lift_trap(0x172131A0u, "pfmul mm4, mm7");
    void_lift_trap(0x172131A4u, "pfsub mm2, mm4");
    void_lift_trap(0x172131A8u, "pfadd mm2, mm3");
    MEM64(esp + 0x18) = _mm[2]; /* 0x172131AC: movq qword ptr [esp + 0x18], mm2 */
    _mm[2] = _mm[5]; /* 0x172131B1: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x172131B4: movq mm3, mm6 */
    void_lift_trap(0x172131B7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172131BAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172131BDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172131C0u, "pfmul mm1, qword ptr [edx + 8]");
    void_lift_trap(0x172131C5u, "pfmul mm0, mm2");
    void_lift_trap(0x172131C9u, "pfmul mm3, qword ptr [edx + 0x18]");
    void_lift_trap(0x172131CEu, "pfadd mm0, mm1");
    void_lift_trap(0x172131D2u, "pfsub mm0, mm3");
    MEM64(esp + 0x28) = _mm[0]; /* 0x172131D6: movq qword ptr [esp + 0x28], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172131DB: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172131DE: punpckhdq mm6, mm6 */
    void_lift_trap(0x172131E1u, "pfmul mm2, mm7");
    void_lift_trap(0x172131E5u, "pfmul mm5, qword ptr [edx + 0x18]");
    _mm[0] = MEM64(edx + 0x8); /* 0x172131EA: movq mm0, qword ptr [edx + 8] */
    void_lift_trap(0x172131EEu, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x172131F3u, "pfsub mm2, mm5");
    void_lift_trap(0x172131F7u, "pfadd mm2, mm6");
    MEM64(esp + 0x38) = _mm[2]; /* 0x172131FB: movq qword ptr [esp + 0x38], mm2 */
    _mm[1] = MEM64(edx + 0x18); /* 0x17213200: movq mm1, qword ptr [edx + 0x18] */
    _mm[2] = MEM64(edx + 0x28); /* 0x17213204: movq mm2, qword ptr [edx + 0x28] */
    _mm[3] = MEM64(edx + 0x38); /* 0x17213208: movq mm3, qword ptr [edx + 0x38] */
    void_lift_trap(0x1721320Cu, "pswapd mm5, mm1");
    void_lift_trap(0x17213210u, "pswapd mm4, mm2");
    void_lift_trap(0x17213214u, "pfmul mm5, mm0");
    void_lift_trap(0x17213218u, "pswapd mm6, mm3");
    void_lift_trap(0x1721321Cu, "pfmul mm4, mm0");
    void_lift_trap(0x17213220u, "pswapd mm7, mm2");
    void_lift_trap(0x17213224u, "pfmul mm6, mm0");
    void_lift_trap(0x17213228u, "pswapd mm0, mm3");
    void_lift_trap(0x1721322Cu, "pfnacc mm5, mm4");
    void_lift_trap(0x17213230u, "pfmul mm7, mm1");
    void_lift_trap(0x17213234u, "pfmul mm1, mm0");
    void_lift_trap(0x17213238u, "pfmul mm2, mm0");
    void_lift_trap(0x1721323Cu, "pfnacc mm6, mm7");
    void_lift_trap(0x17213240u, "pfnacc mm1, mm2");
    _mm[0] = MEM64(edx + 0x30); /* 0x17213244: movq mm0, qword ptr [edx + 0x30] */
    _mm[4] = _mm[1]; /* 0x17213248: movq mm4, mm1 */
    _mm[3] = _mm[1]; /* 0x1721324B: movq mm3, mm1 */
    _mm[7] = MEM64(edx + 0x20); /* 0x1721324E: movq mm7, qword ptr [edx + 0x20] */
    _mm[2] = _mm[6]; /* 0x17213252: movq mm2, mm6 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17213255: punpckhdq mm4, mm4 */
    void_lift_trap(0x17213258u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721325B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721325Eu, "pfmul mm4, qword ptr [edx + 0x10]");
    void_lift_trap(0x17213263u, "pfmul mm2, mm0");
    void_lift_trap(0x17213267u, "pfmul mm3, mm7");
    void_lift_trap(0x1721326Bu, "pfadd mm2, mm4");
    void_lift_trap(0x1721326Fu, "pfsub mm2, mm3");
    MEM64(esp) = _mm[2]; /* 0x17213273: movq qword ptr [esp], mm2 */
    _mm[3] = _mm[1]; /* 0x17213277: movq mm3, mm1 */
    _mm[4] = _mm[6]; /* 0x1721327A: movq mm4, mm6 */
    _mm[2] = _mm[5]; /* 0x1721327D: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213280: punpckhdq mm3, mm3 */
    void_lift_trap(0x17213283u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17213286: punpckhdq mm2, mm2 */
    void_lift_trap(0x17213289u, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x1721328Du, "pfmul mm2, mm0");
    void_lift_trap(0x17213291u, "pfmul mm4, mm7");
    void_lift_trap(0x17213295u, "pfsub mm2, mm4");
    void_lift_trap(0x17213299u, "pfadd mm2, mm3");
    MEM64(esp + 0x10) = _mm[2]; /* 0x1721329D: movq qword ptr [esp + 0x10], mm2 */
    _mm[4] = _mm[0]; /* 0x172132A2: movq mm4, mm0 */
    _mm[2] = _mm[5]; /* 0x172132A5: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x172132A8: movq mm3, mm6 */
    void_lift_trap(0x172132ABu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172132AEu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172132B1u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172132B4u, "pfmul mm1, qword ptr [edx]");
    void_lift_trap(0x172132B8u, "pfmul mm0, mm2");
    void_lift_trap(0x172132BCu, "pfmul mm3, qword ptr [edx + 0x10]");
    void_lift_trap(0x172132C1u, "pfadd mm0, mm1");
    void_lift_trap(0x172132C5u, "pfsub mm0, mm3");
    MEM64(esp + 0x20) = _mm[0]; /* 0x172132C9: movq qword ptr [esp + 0x20], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172132CE: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172132D1: punpckhdq mm6, mm6 */
    void_lift_trap(0x172132D4u, "pfmul mm2, mm7");
    void_lift_trap(0x172132D8u, "pfmul mm5, qword ptr [edx + 0x10]");
    void_lift_trap(0x172132DDu, "pfmul mm6, qword ptr [edx]");
    void_lift_trap(0x172132E1u, "pfsub mm2, mm5");
    void_lift_trap(0x172132E5u, "pfadd mm2, mm6");
    MEM64(esp + 0x30) = _mm[2]; /* 0x172132E9: movq qword ptr [esp + 0x30], mm2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[2]); /* 0x172132EE: punpckhdq mm0, mm2 */
    void_lift_trap(0x172132F1u, "unsupported PUNPCKLDQ operands");
    _mm[3] = MEM64(edx); /* 0x172132F4: movq mm3, qword ptr [edx] */
    _mm[1] = MEM64(esp); /* 0x172132F7: movq mm1, qword ptr [esp] */
    void_lift_trap(0x172132FBu, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], MEM64(esp + 0x10)); /* 0x172132FF: punpckhdq mm1, qword ptr [esp + 0x10] */
    void_lift_trap(0x17213304u, "pfmul mm0, mm7");
    void_lift_trap(0x17213308u, "pfmul mm3, mm1");
    void_lift_trap(0x1721330Cu, "pfnacc mm0, mm3");
    eax = MEM32(esp + 0x48); /* 0x17213310: mov eax, dword ptr [esp + 0x48] */
    void_lift_trap(0x17213314u, "pfacc mm0, mm0");
    /* test eax, eax */ /* 0x17213318: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[4] = _mm[0]; /* 0x1721331A: movq mm4, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17213322; /* 0x1721331D: je 0x17213322 */
L_1721331F:
    MEM32(eax) = (uint32_t)_mm[0]; /* 0x1721331F: movd dword ptr [eax], mm0 */
L_17213322:
    void_lift_trap(0x17213322u, "pfrcp mm1, mm0");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x17213326: pxor mm3, mm3 */
    void_lift_trap(0x17213329u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721332Cu, "pfcmpeq mm3, mm4");
    void_lift_trap(0x17213330u, "pfrcpit1 mm0, mm1");
    void_lift_trap(0x17213334u, "pfrcpit2 mm0, mm1");
    eax = (uint32_t)_mm[3]; /* 0x17213338: movd eax, mm3 */
    void_lift_trap(0x1721333Bu, "pfmul mm0, qword ptr [0x1702a558]");
    eax = ~eax; /* 0x17213343: not eax */
    /* test eax, eax */ /* 0x17213345: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17213347u, "pswapd mm1, mm0");
    if (TEST_Z(_flag_a, _flag_b)) goto L_172133DF; /* 0x1721334B: je 0x172133df */
L_17213351:
    eax = MEM32(esp + 0x44); /* 0x17213351: mov eax, dword ptr [esp + 0x44] */
    _mm[2] = MEM64(esp); /* 0x17213355: movq mm2, qword ptr [esp] */
    _mm[5] = MEM64(esp + 0x8); /* 0x17213359: movq mm5, qword ptr [esp + 8] */
    _mm[3] = MEM64(esp + 0x10); /* 0x1721335E: movq mm3, qword ptr [esp + 0x10] */
    _mm[6] = MEM64(esp + 0x18); /* 0x17213363: movq mm6, qword ptr [esp + 0x18] */
    void_lift_trap(0x17213368u, "pfmul mm2, mm1");
    void_lift_trap(0x1721336Cu, "pfmul mm3, mm0");
    void_lift_trap(0x17213370u, "pfmul mm5, mm1");
    void_lift_trap(0x17213374u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x17213378: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x1721337B: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x1721337E: punpckhdq mm2, mm3 */
    void_lift_trap(0x17213381u, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x17213384: punpckhdq mm5, mm6 */
    void_lift_trap(0x17213387u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[2]; /* 0x1721338A: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x1721338D: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x17213391: movq qword ptr [eax + 0x20], mm5 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x17213395: movq qword ptr [eax + 0x30], mm7 */
    _mm[2] = MEM64(esp + 0x20); /* 0x17213399: movq mm2, qword ptr [esp + 0x20] */
    _mm[5] = MEM64(esp + 0x28); /* 0x1721339E: movq mm5, qword ptr [esp + 0x28] */
    _mm[3] = MEM64(esp + 0x30); /* 0x172133A3: movq mm3, qword ptr [esp + 0x30] */
    _mm[6] = MEM64(esp + 0x38); /* 0x172133A8: movq mm6, qword ptr [esp + 0x38] */
    void_lift_trap(0x172133ADu, "pfmul mm2, mm1");
    void_lift_trap(0x172133B1u, "pfmul mm3, mm0");
    void_lift_trap(0x172133B5u, "pfmul mm5, mm1");
    void_lift_trap(0x172133B9u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x172133BD: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x172133C0: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x172133C3: punpckhdq mm2, mm3 */
    void_lift_trap(0x172133C6u, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x172133C9: punpckhdq mm5, mm6 */
    void_lift_trap(0x172133CCu, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[2]; /* 0x172133CF: movq qword ptr [eax + 8], mm2 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x172133D3: movq qword ptr [eax + 0x18], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x172133D7: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x172133DB: movq qword ptr [eax + 0x38], mm7 */
L_172133DF:
    void_lift_trap(0x172133DFu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x172133E1: add esp, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172133E4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172133EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172133ECu);

L_172133EC:
    void_lift_trap(0x172133ECu, "femms ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x172133EE: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x50); /* 0x172133F1: mov edx, dword ptr [esp + 0x50] */
    MEM32(esp + 0x40) = ebp; /* 0x172133F5: mov dword ptr [esp + 0x40], ebp */
    ebp = esp; /* 0x172133F9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x172133FB: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[0] = MEM64(edx); /* 0x172133FE: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x17213401: movq mm1, qword ptr [edx + 0x10] */
    _mm[3] = MEM64(edx + 0x28); /* 0x17213405: movq mm3, qword ptr [edx + 0x28] */
    _mm[4] = MEM64(edx + 0x38); /* 0x17213409: movq mm4, qword ptr [edx + 0x38] */
    _mm[2] = _mm[0]; /* 0x1721340D: movq mm2, mm0 */
    void_lift_trap(0x17213410u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[1]); /* 0x17213413: punpckhdq mm2, mm1 */
    _mm[5] = _mm[3]; /* 0x17213416: movq mm5, mm3 */
    MEM64(esp) = _mm[0]; /* 0x17213419: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x10) = _mm[2]; /* 0x1721341D: movq qword ptr [esp + 0x10], mm2 */
    _mm[6] = MEM64(edx + 0x8); /* 0x17213422: movq mm6, qword ptr [edx + 8] */
    void_lift_trap(0x17213426u, "unsupported PUNPCKLDQ operands");
    _mm[7] = MEM64(edx + 0x18); /* 0x17213429: movq mm7, qword ptr [edx + 0x18] */
    _mm[0] = MEM64(edx + 0x20); /* 0x1721342D: movq mm0, qword ptr [edx + 0x20] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[4]); /* 0x17213431: punpckhdq mm5, mm4 */
    _mm[1] = _mm[6]; /* 0x17213434: movq mm1, mm6 */
    MEM64(esp + 0x28) = _mm[3]; /* 0x17213437: movq qword ptr [esp + 0x28], mm3 */
    MEM64(esp + 0x38) = _mm[5]; /* 0x1721343C: movq qword ptr [esp + 0x38], mm5 */
    ecx = MEM32(ebp + 0x4C); /* 0x17213441: mov ecx, dword ptr [ebp + 0x4c] */
    /* cmp ecx, MEM32(ebp + 0x48) */ /* 0x17213444: cmp ecx, dword ptr [ebp + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    void_lift_trap(0x17213447u, "unsupported PUNPCKLDQ operands");
    _mm[4] = MEM64(edx + 0x30); /* 0x1721344A: movq mm4, qword ptr [edx + 0x30] */
    _mm[2] = _mm[0]; /* 0x1721344E: movq mm2, mm0 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[7]); /* 0x17213451: punpckhdq mm1, mm7 */
    MEM64(esp + 0x20) = _mm[6]; /* 0x17213454: movq qword ptr [esp + 0x20], mm6 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17213459: punpckhdq mm0, mm4 */
    void_lift_trap(0x1721345Cu, "unsupported PUNPCKLDQ operands");
    MEM64(esp + 0x30) = _mm[1]; /* 0x1721345F: movq qword ptr [esp + 0x30], mm1 */
    MEM64(esp + 0x18) = _mm[0]; /* 0x17213464: movq qword ptr [esp + 0x18], mm0 */
    MEM64(esp + 0x8) = _mm[2]; /* 0x17213469: movq qword ptr [esp + 8], mm2 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721360F; /* 0x1721346E: je 0x1721360f */
L_17213474:
    eax = MEM32(ebp + 0x48); /* 0x17213474: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(esp); /* 0x17213477: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x1721347B: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x17213480: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x17213483: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x17213486: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x17213489: movq mm5, mm1 */
    void_lift_trap(0x1721348Cu, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x17213490u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x17213495: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x17213498: movq mm7, mm3 */
    void_lift_trap(0x1721349Bu, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x172134A0u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x172134A5u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x172134AAu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x172134AFu, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x172134B4u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x172134B9u, "pfacc mm0, mm2");
    void_lift_trap(0x172134BDu, "pfacc mm1, mm3");
    void_lift_trap(0x172134C1u, "pfacc mm4, mm6");
    void_lift_trap(0x172134C5u, "pfacc mm5, mm7");
    void_lift_trap(0x172134C9u, "pfadd mm0, mm1");
    void_lift_trap(0x172134CDu, "pfadd mm4, mm5");
    MEM64(eax) = _mm[0]; /* 0x172134D1: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x172134D4: movq qword ptr [eax + 8], mm4 */
    _mm[0] = MEM64(esp + 0x10); /* 0x172134D8: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = MEM64(esp + 0x18); /* 0x172134DD: movq mm1, qword ptr [esp + 0x18] */
    _mm[2] = _mm[0]; /* 0x172134E2: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x172134E5: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x172134E8: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x172134EB: movq mm5, mm1 */
    void_lift_trap(0x172134EEu, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x172134F2u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x172134F7: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x172134FA: movq mm7, mm3 */
    void_lift_trap(0x172134FDu, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x17213502u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x17213507u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x1721350Cu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x17213511u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x17213516u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x1721351Bu, "pfacc mm0, mm2");
    void_lift_trap(0x1721351Fu, "pfacc mm1, mm3");
    void_lift_trap(0x17213523u, "pfacc mm4, mm6");
    void_lift_trap(0x17213527u, "pfacc mm5, mm7");
    void_lift_trap(0x1721352Bu, "pfadd mm0, mm1");
    void_lift_trap(0x1721352Fu, "pfadd mm4, mm5");
    MEM64(eax + 0x10) = _mm[0]; /* 0x17213533: movq qword ptr [eax + 0x10], mm0 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x17213537: movq qword ptr [eax + 0x18], mm4 */
    _mm[0] = MEM64(esp + 0x20); /* 0x1721353B: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x17213540: movq mm1, qword ptr [esp + 0x28] */
    _mm[2] = _mm[0]; /* 0x17213545: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x17213548: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1721354B: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x1721354E: movq mm5, mm1 */
    void_lift_trap(0x17213551u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x17213555u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x1721355A: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x1721355D: movq mm7, mm3 */
    void_lift_trap(0x17213560u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x17213565u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x1721356Au, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x1721356Fu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x17213574u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x17213579u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x1721357Eu, "pfacc mm0, mm2");
    void_lift_trap(0x17213582u, "pfacc mm1, mm3");
    void_lift_trap(0x17213586u, "pfacc mm4, mm6");
    void_lift_trap(0x1721358Au, "pfacc mm5, mm7");
    void_lift_trap(0x1721358Eu, "pfadd mm0, mm1");
    void_lift_trap(0x17213592u, "pfadd mm4, mm5");
    MEM64(eax + 0x20) = _mm[0]; /* 0x17213596: movq qword ptr [eax + 0x20], mm0 */
    MEM64(eax + 0x28) = _mm[4]; /* 0x1721359A: movq qword ptr [eax + 0x28], mm4 */
    _mm[0] = MEM64(esp + 0x30); /* 0x1721359E: movq mm0, qword ptr [esp + 0x30] */
    _mm[1] = MEM64(esp + 0x38); /* 0x172135A3: movq mm1, qword ptr [esp + 0x38] */
    _mm[2] = _mm[0]; /* 0x172135A8: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x172135AB: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x172135AE: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x172135B1: movq mm5, mm1 */
    void_lift_trap(0x172135B4u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x172135B8u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x172135BD: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x172135C0: movq mm7, mm3 */
    void_lift_trap(0x172135C3u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x172135C8u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x172135CDu, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x172135D2u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x172135D7u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x172135DCu, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x172135E1u, "pfacc mm0, mm2");
    void_lift_trap(0x172135E5u, "pfacc mm1, mm3");
    void_lift_trap(0x172135E9u, "pfacc mm4, mm6");
    void_lift_trap(0x172135EDu, "pfacc mm5, mm7");
    void_lift_trap(0x172135F1u, "pfadd mm0, mm1");
    void_lift_trap(0x172135F5u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x172135F9: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x172135FD: movq qword ptr [eax + 0x38], mm4 */
    esp = ebp; /* 0x17213601: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x17213603: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x17213607: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x1721360Au, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721360C: ret 0xc */
L_1721360F:
    eax = MEM32(ebp + 0x48); /* 0x1721360F: mov eax, dword ptr [ebp + 0x48] */
    _mm[0] = MEM64(esp); /* 0x17213612: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x17213616: movq mm1, qword ptr [esp + 8] */
    _mm[2] = _mm[0]; /* 0x1721361B: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1721361E: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x17213621: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x17213624: movq mm5, mm1 */
    void_lift_trap(0x17213627u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x1721362Bu, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x17213630: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x17213633: movq mm7, mm3 */
    void_lift_trap(0x17213636u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x1721363Bu, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x17213640u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x17213645u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x1721364Au, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x1721364Fu, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x17213654u, "pfacc mm0, mm2");
    void_lift_trap(0x17213658u, "pfacc mm1, mm3");
    void_lift_trap(0x1721365Cu, "pfacc mm4, mm6");
    void_lift_trap(0x17213660u, "pfacc mm5, mm7");
    void_lift_trap(0x17213664u, "pfadd mm0, mm1");
    void_lift_trap(0x17213668u, "pfadd mm4, mm5");
    MEM64(esp) = _mm[0]; /* 0x1721366C: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[4]; /* 0x17213670: movq qword ptr [esp + 8], mm4 */
    _mm[0] = MEM64(esp + 0x10); /* 0x17213675: movq mm0, qword ptr [esp + 0x10] */
    _mm[1] = MEM64(esp + 0x18); /* 0x1721367A: movq mm1, qword ptr [esp + 0x18] */
    _mm[2] = _mm[0]; /* 0x1721367F: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x17213682: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x17213685: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x17213688: movq mm5, mm1 */
    void_lift_trap(0x1721368Bu, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x1721368Fu, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x17213694: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x17213697: movq mm7, mm3 */
    void_lift_trap(0x1721369Au, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x1721369Fu, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x172136A4u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x172136A9u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x172136AEu, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x172136B3u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x172136B8u, "pfacc mm0, mm2");
    void_lift_trap(0x172136BCu, "pfacc mm1, mm3");
    void_lift_trap(0x172136C0u, "pfacc mm4, mm6");
    void_lift_trap(0x172136C4u, "pfacc mm5, mm7");
    void_lift_trap(0x172136C8u, "pfadd mm0, mm1");
    void_lift_trap(0x172136CCu, "pfadd mm4, mm5");
    MEM64(esp + 0x10) = _mm[0]; /* 0x172136D0: movq qword ptr [esp + 0x10], mm0 */
    MEM64(esp + 0x18) = _mm[4]; /* 0x172136D5: movq qword ptr [esp + 0x18], mm4 */
    _mm[0] = MEM64(esp + 0x20); /* 0x172136DA: movq mm0, qword ptr [esp + 0x20] */
    _mm[1] = MEM64(esp + 0x28); /* 0x172136DF: movq mm1, qword ptr [esp + 0x28] */
    _mm[2] = _mm[0]; /* 0x172136E4: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x172136E7: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x172136EA: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x172136ED: movq mm5, mm1 */
    void_lift_trap(0x172136F0u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x172136F4u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x172136F9: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x172136FC: movq mm7, mm3 */
    void_lift_trap(0x172136FFu, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x17213704u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x17213709u, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x1721370Eu, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x17213713u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x17213718u, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x1721371Du, "pfacc mm0, mm2");
    void_lift_trap(0x17213721u, "pfacc mm1, mm3");
    void_lift_trap(0x17213725u, "pfacc mm4, mm6");
    void_lift_trap(0x17213729u, "pfacc mm5, mm7");
    void_lift_trap(0x1721372Du, "pfadd mm0, mm1");
    void_lift_trap(0x17213731u, "pfadd mm4, mm5");
    MEM64(esp + 0x20) = _mm[0]; /* 0x17213735: movq qword ptr [esp + 0x20], mm0 */
    MEM64(esp + 0x28) = _mm[4]; /* 0x1721373A: movq qword ptr [esp + 0x28], mm4 */
    _mm[0] = MEM64(esp + 0x30); /* 0x1721373F: movq mm0, qword ptr [esp + 0x30] */
    _mm[1] = MEM64(esp + 0x38); /* 0x17213744: movq mm1, qword ptr [esp + 0x38] */
    _mm[2] = _mm[0]; /* 0x17213749: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x1721374C: movq mm3, mm1 */
    _mm[4] = _mm[0]; /* 0x1721374F: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x17213752: movq mm5, mm1 */
    void_lift_trap(0x17213755u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x17213759u, "pfmul mm1, qword ptr [ecx + 8]");
    _mm[6] = _mm[2]; /* 0x1721375E: movq mm6, mm2 */
    _mm[7] = _mm[3]; /* 0x17213761: movq mm7, mm3 */
    void_lift_trap(0x17213764u, "pfmul mm2, qword ptr [ecx + 0x10]");
    void_lift_trap(0x17213769u, "pfmul mm3, qword ptr [ecx + 0x18]");
    void_lift_trap(0x1721376Eu, "pfmul mm4, qword ptr [ecx + 0x20]");
    void_lift_trap(0x17213773u, "pfmul mm5, qword ptr [ecx + 0x28]");
    void_lift_trap(0x17213778u, "pfmul mm6, qword ptr [ecx + 0x30]");
    void_lift_trap(0x1721377Du, "pfmul mm7, qword ptr [ecx + 0x38]");
    void_lift_trap(0x17213782u, "pfacc mm0, mm2");
    void_lift_trap(0x17213786u, "pfacc mm1, mm3");
    void_lift_trap(0x1721378Au, "pfacc mm4, mm6");
    void_lift_trap(0x1721378Eu, "pfacc mm5, mm7");
    void_lift_trap(0x17213792u, "pfadd mm0, mm1");
    void_lift_trap(0x17213796u, "pfadd mm4, mm5");
    MEM64(eax + 0x30) = _mm[0]; /* 0x1721379A: movq qword ptr [eax + 0x30], mm0 */
    MEM64(eax + 0x38) = _mm[4]; /* 0x1721379E: movq qword ptr [eax + 0x38], mm4 */
    _mm[0] = MEM64(esp); /* 0x172137A2: movq mm0, qword ptr [esp] */
    _mm[1] = MEM64(esp + 0x8); /* 0x172137A6: movq mm1, qword ptr [esp + 8] */
    _mm[2] = MEM64(esp + 0x10); /* 0x172137AB: movq mm2, qword ptr [esp + 0x10] */
    _mm[3] = MEM64(esp + 0x18); /* 0x172137B0: movq mm3, qword ptr [esp + 0x18] */
    _mm[4] = MEM64(esp + 0x20); /* 0x172137B5: movq mm4, qword ptr [esp + 0x20] */
    _mm[5] = MEM64(esp + 0x28); /* 0x172137BA: movq mm5, qword ptr [esp + 0x28] */
    MEM64(eax) = _mm[0]; /* 0x172137BF: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x172137C2: movq qword ptr [eax + 8], mm1 */
    MEM64(eax + 0x10) = _mm[2]; /* 0x172137C6: movq qword ptr [eax + 0x10], mm2 */
    MEM64(eax + 0x18) = _mm[3]; /* 0x172137CA: movq qword ptr [eax + 0x18], mm3 */
    MEM64(eax + 0x20) = _mm[4]; /* 0x172137CE: movq qword ptr [eax + 0x20], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x172137D2: movq qword ptr [eax + 0x28], mm5 */
    esp = ebp; /* 0x172137D6: mov esp, ebp */
    ebp = MEM32(esp + 0x40); /* 0x172137D8: mov ebp, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x172137DC: add esp, 0x44 */
    _flag_k = FK_ADD;
    void_lift_trap(0x172137DFu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172137E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172137E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172137E9u);

L_172137E9:
    edi = edi; /* 0x172137E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172137EB: push ebp */
    ebp = esp; /* 0x172137EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x172137EE: sub esp, 0x44 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x172137F1: mov edx, dword ptr [ebp + 0x10] */
    _mm[0] = MEM64(edx); /* 0x172137F4: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x10); /* 0x172137F7: movq mm1, qword ptr [edx + 0x10] */
    _mm[2] = MEM64(edx + 0x20); /* 0x172137FB: movq mm2, qword ptr [edx + 0x20] */
    _mm[4] = _mm[0]; /* 0x172137FF: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x17213802: movq mm5, mm0 */
    _mm[6] = _mm[1]; /* 0x17213805: movq mm6, mm1 */
    _mm[7] = _mm[1]; /* 0x17213808: movq mm7, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x1721380B: punpckhdq mm4, mm4 */
    void_lift_trap(0x1721380Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213811u, "unsupported PUNPCKLDQ operands");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x17213814: punpckhdq mm7, mm2 */
    void_lift_trap(0x17213817u, "pfmul mm4, mm6");
    void_lift_trap(0x1721381Bu, "pfmul mm5, mm7");
    _mm[3] = MEM64(edx + 0x30); /* 0x1721381F: movq mm3, qword ptr [edx + 0x30] */
    _mm[7] = _mm[0]; /* 0x17213823: movq mm7, mm0 */
    void_lift_trap(0x17213826u, "pfsub mm5, mm4");
    void_lift_trap(0x1721382Au, "unsupported PUNPCKLDQ operands");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x1721382D: punpckhdq mm7, mm1 */
    _mm[6] = _mm[3]; /* 0x17213830: movq mm6, mm3 */
    _mm[4] = _mm[3]; /* 0x17213833: movq mm4, mm3 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213836: punpckhdq mm3, mm3 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x17213839: punpckhdq mm6, mm2 */
    void_lift_trap(0x1721383Cu, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x1721383F: punpckhdq mm1, mm2 */
    void_lift_trap(0x17213842u, "pfmul mm6, mm0");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x17213846: punpckhdq mm0, mm4 */
    void_lift_trap(0x17213849u, "pfmul mm7, mm4");
    void_lift_trap(0x1721384Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213850u, "pfmul mm0, mm3");
    void_lift_trap(0x17213854u, "pfmul mm1, mm4");
    void_lift_trap(0x17213858u, "pfsub mm6, mm7");
    void_lift_trap(0x1721385Cu, "pfsubr mm1, mm0");
    _mm[0] = MEM64(edx + 0x38); /* 0x17213860: movq mm0, qword ptr [edx + 0x38] */
    _mm[2] = _mm[6]; /* 0x17213864: movq mm2, mm6 */
    _mm[4] = _mm[1]; /* 0x17213867: movq mm4, mm1 */
    _mm[7] = MEM64(edx + 0x28); /* 0x1721386A: movq mm7, qword ptr [edx + 0x28] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721386E: punpckhdq mm2, mm2 */
    _mm[3] = _mm[1]; /* 0x17213871: movq mm3, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17213874: punpckhdq mm4, mm4 */
    void_lift_trap(0x17213877u, "pfmul mm2, mm0");
    void_lift_trap(0x1721387Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721387Eu, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213883u, "pfmul mm3, mm7");
    void_lift_trap(0x17213887u, "pfadd mm2, mm4");
    _mm[4] = _mm[6]; /* 0x1721388B: movq mm4, mm6 */
    void_lift_trap(0x1721388Eu, "pfsub mm2, mm3");
    _mm[3] = _mm[1]; /* 0x17213892: movq mm3, mm1 */
    void_lift_trap(0x17213895u, "unsupported PUNPCKLDQ operands");
    MEM64(ebp + (-0x3C)) = _mm[2]; /* 0x17213898: movq qword ptr [ebp - 0x3c], mm2 */
    _mm[2] = _mm[5]; /* 0x1721389C: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721389F: punpckhdq mm3, mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172138A2: punpckhdq mm2, mm2 */
    void_lift_trap(0x172138A5u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x172138AAu, "pfmul mm2, mm0");
    void_lift_trap(0x172138AEu, "pfmul mm4, mm7");
    void_lift_trap(0x172138B2u, "pfsub mm2, mm4");
    void_lift_trap(0x172138B6u, "pfadd mm2, mm3");
    MEM64(ebp + (-0x2C)) = _mm[2]; /* 0x172138BA: movq qword ptr [ebp - 0x2c], mm2 */
    _mm[2] = _mm[5]; /* 0x172138BE: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x172138C1: movq mm3, mm6 */
    void_lift_trap(0x172138C4u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172138C7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172138CAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172138CDu, "pfmul mm1, qword ptr [edx + 8]");
    void_lift_trap(0x172138D2u, "pfmul mm0, mm2");
    void_lift_trap(0x172138D6u, "pfmul mm3, qword ptr [edx + 0x18]");
    void_lift_trap(0x172138DBu, "pfadd mm0, mm1");
    void_lift_trap(0x172138DFu, "pfsub mm0, mm3");
    MEM64(ebp + (-0x1C)) = _mm[0]; /* 0x172138E3: movq qword ptr [ebp - 0x1c], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172138E7: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172138EA: punpckhdq mm6, mm6 */
    void_lift_trap(0x172138EDu, "pfmul mm2, mm7");
    void_lift_trap(0x172138F1u, "pfmul mm5, qword ptr [edx + 0x18]");
    void_lift_trap(0x172138F6u, "pfmul mm6, qword ptr [edx + 8]");
    void_lift_trap(0x172138FBu, "pfsub mm2, mm5");
    void_lift_trap(0x172138FFu, "pfadd mm2, mm6");
    MEM64(ebp + (-0xC)) = _mm[2]; /* 0x17213903: movq qword ptr [ebp - 0xc], mm2 */
    _mm[0] = MEM64(edx + 0x8); /* 0x17213907: movq mm0, qword ptr [edx + 8] */
    _mm[1] = MEM64(edx + 0x18); /* 0x1721390B: movq mm1, qword ptr [edx + 0x18] */
    _mm[2] = MEM64(edx + 0x28); /* 0x1721390F: movq mm2, qword ptr [edx + 0x28] */
    _mm[4] = _mm[0]; /* 0x17213913: movq mm4, mm0 */
    _mm[5] = _mm[0]; /* 0x17213916: movq mm5, mm0 */
    _mm[6] = _mm[1]; /* 0x17213919: movq mm6, mm1 */
    _mm[7] = _mm[1]; /* 0x1721391C: movq mm7, mm1 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x1721391F: punpckhdq mm4, mm4 */
    void_lift_trap(0x17213922u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213925u, "unsupported PUNPCKLDQ operands");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[2]); /* 0x17213928: punpckhdq mm7, mm2 */
    void_lift_trap(0x1721392Bu, "pfmul mm4, mm6");
    void_lift_trap(0x1721392Fu, "pfmul mm5, mm7");
    _mm[3] = MEM64(edx + 0x38); /* 0x17213933: movq mm3, qword ptr [edx + 0x38] */
    _mm[7] = _mm[0]; /* 0x17213937: movq mm7, mm0 */
    void_lift_trap(0x1721393Au, "pfsub mm5, mm4");
    void_lift_trap(0x1721393Eu, "unsupported PUNPCKLDQ operands");
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x17213941: punpckhdq mm7, mm1 */
    _mm[6] = _mm[3]; /* 0x17213944: movq mm6, mm3 */
    _mm[4] = _mm[3]; /* 0x17213947: movq mm4, mm3 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721394A: punpckhdq mm3, mm3 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x1721394D: punpckhdq mm6, mm2 */
    void_lift_trap(0x17213950u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x17213953: punpckhdq mm1, mm2 */
    void_lift_trap(0x17213956u, "pfmul mm6, mm0");
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[4]); /* 0x1721395A: punpckhdq mm0, mm4 */
    void_lift_trap(0x1721395Du, "pfmul mm7, mm4");
    void_lift_trap(0x17213961u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213964u, "pfmul mm0, mm3");
    void_lift_trap(0x17213968u, "pfmul mm1, mm4");
    void_lift_trap(0x1721396Cu, "pfsub mm6, mm7");
    void_lift_trap(0x17213970u, "pfsubr mm1, mm0");
    _mm[0] = MEM64(edx + 0x30); /* 0x17213974: movq mm0, qword ptr [edx + 0x30] */
    _mm[4] = _mm[1]; /* 0x17213978: movq mm4, mm1 */
    _mm[3] = _mm[1]; /* 0x1721397B: movq mm3, mm1 */
    _mm[7] = MEM64(edx + 0x20); /* 0x1721397E: movq mm7, qword ptr [edx + 0x20] */
    _mm[2] = _mm[6]; /* 0x17213982: movq mm2, mm6 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x17213985: punpckhdq mm4, mm4 */
    void_lift_trap(0x17213988u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x1721398B: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721398Eu, "pfmul mm4, qword ptr [edx + 0x10]");
    void_lift_trap(0x17213993u, "pfmul mm2, mm0");
    void_lift_trap(0x17213997u, "pfmul mm3, mm7");
    void_lift_trap(0x1721399Bu, "pfadd mm2, mm4");
    void_lift_trap(0x1721399Fu, "pfsub mm2, mm3");
    MEM64(ebp + (-0x44)) = _mm[2]; /* 0x172139A3: movq qword ptr [ebp - 0x44], mm2 */
    _mm[3] = _mm[1]; /* 0x172139A7: movq mm3, mm1 */
    _mm[4] = _mm[6]; /* 0x172139AA: movq mm4, mm6 */
    _mm[2] = _mm[5]; /* 0x172139AD: movq mm2, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172139B0: punpckhdq mm3, mm3 */
    void_lift_trap(0x172139B3u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172139B6: punpckhdq mm2, mm2 */
    void_lift_trap(0x172139B9u, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x172139BDu, "pfmul mm2, mm0");
    void_lift_trap(0x172139C1u, "pfmul mm4, mm7");
    void_lift_trap(0x172139C5u, "pfsub mm2, mm4");
    void_lift_trap(0x172139C9u, "pfadd mm2, mm3");
    MEM64(ebp + (-0x34)) = _mm[2]; /* 0x172139CD: movq qword ptr [ebp - 0x34], mm2 */
    _mm[4] = _mm[0]; /* 0x172139D1: movq mm4, mm0 */
    _mm[2] = _mm[5]; /* 0x172139D4: movq mm2, mm5 */
    _mm[3] = _mm[6]; /* 0x172139D7: movq mm3, mm6 */
    void_lift_trap(0x172139DAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172139DDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172139E0u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172139E3u, "pfmul mm1, qword ptr [edx]");
    void_lift_trap(0x172139E7u, "pfmul mm0, mm2");
    void_lift_trap(0x172139EBu, "pfmul mm3, qword ptr [edx + 0x10]");
    void_lift_trap(0x172139F0u, "pfadd mm0, mm1");
    void_lift_trap(0x172139F4u, "pfsub mm0, mm3");
    MEM64(ebp + (-0x24)) = _mm[0]; /* 0x172139F8: movq qword ptr [ebp - 0x24], mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x172139FC: punpckhdq mm5, mm5 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172139FF: punpckhdq mm6, mm6 */
    void_lift_trap(0x17213A02u, "pfmul mm2, mm7");
    void_lift_trap(0x17213A06u, "pfmul mm5, qword ptr [edx + 0x10]");
    void_lift_trap(0x17213A0Bu, "pfmul mm6, qword ptr [edx]");
    void_lift_trap(0x17213A0Fu, "pfsub mm2, mm5");
    void_lift_trap(0x17213A13u, "pfadd mm2, mm6");
    MEM64(ebp + (-0x14)) = _mm[2]; /* 0x17213A17: movq qword ptr [ebp - 0x14], mm2 */
    void_lift_trap(0x17213A1Bu, "unsupported PUNPCKLDQ operands");
    _mm[3] = MEM64(edx); /* 0x17213A1E: movq mm3, qword ptr [edx] */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[2]); /* 0x17213A21: punpckhdq mm0, mm2 */
    void_lift_trap(0x17213A24u, "pfmul mm7, qword ptr [0x1702a558]");
    _mm[1] = MEM64(ebp + (-0x44)); /* 0x17213A2C: movq mm1, qword ptr [ebp - 0x44] */
    void_lift_trap(0x17213A30u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], MEM64(ebp + (-0x34))); /* 0x17213A34: punpckhdq mm1, qword ptr [ebp - 0x34] */
    void_lift_trap(0x17213A38u, "pfmul mm3, qword ptr [0x1702a558]");
    void_lift_trap(0x17213A40u, "pfmul mm0, mm7");
    void_lift_trap(0x17213A44u, "pfmul mm3, mm1");
    void_lift_trap(0x17213A48u, "pfadd mm0, mm3");
    eax = MEM32(ebp + 0xC); /* 0x17213A4C: mov eax, dword ptr [ebp + 0xc] */
    void_lift_trap(0x17213A4Fu, "pfacc mm0, mm0");
    /* test eax, eax */ /* 0x17213A53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[4] = _mm[0]; /* 0x17213A55: movq mm4, mm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17213A5D; /* 0x17213A58: je 0x17213a5d */
L_17213A5A:
    MEM32(eax) = (uint32_t)_mm[0]; /* 0x17213A5A: movd dword ptr [eax], mm0 */
L_17213A5D:
    void_lift_trap(0x17213A5Du, "pfrcp mm1, mm0");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x17213A61: pxor mm3, mm3 */
    void_lift_trap(0x17213A64u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213A67u, "pfcmpeq mm3, mm4");
    void_lift_trap(0x17213A6Bu, "pfrcpit1 mm0, mm1");
    void_lift_trap(0x17213A6Fu, "pfrcpit2 mm0, mm1");
    eax = (uint32_t)_mm[3]; /* 0x17213A73: movd eax, mm3 */
    void_lift_trap(0x17213A76u, "pfmul mm0, qword ptr [0x1702a558]");
    eax = ~eax; /* 0x17213A7E: not eax */
    /* test eax, eax */ /* 0x17213A80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[1] = _mm[0]; /* 0x17213A82: movq mm1, mm0 */
    void_lift_trap(0x17213A85u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[2]); /* 0x17213A88: punpckhdq mm1, mm2 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17213B17; /* 0x17213A8B: je 0x17213b17 */
L_17213A91:
    eax = MEM32(ebp + 0x8); /* 0x17213A91: mov eax, dword ptr [ebp + 8] */
    _mm[2] = MEM64(ebp + (-0x44)); /* 0x17213A94: movq mm2, qword ptr [ebp - 0x44] */
    _mm[5] = MEM64(ebp + (-0x3C)); /* 0x17213A98: movq mm5, qword ptr [ebp - 0x3c] */
    _mm[3] = MEM64(ebp + (-0x34)); /* 0x17213A9C: movq mm3, qword ptr [ebp - 0x34] */
    _mm[6] = MEM64(ebp + (-0x2C)); /* 0x17213AA0: movq mm6, qword ptr [ebp - 0x2c] */
    void_lift_trap(0x17213AA4u, "pfmul mm2, mm1");
    void_lift_trap(0x17213AA8u, "pfmul mm3, mm0");
    void_lift_trap(0x17213AACu, "pfmul mm5, mm1");
    void_lift_trap(0x17213AB0u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x17213AB4: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x17213AB7: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x17213ABA: punpckhdq mm2, mm3 */
    void_lift_trap(0x17213ABDu, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x17213AC0: punpckhdq mm5, mm6 */
    void_lift_trap(0x17213AC3u, "unsupported PUNPCKLDQ operands");
    MEM64(eax) = _mm[2]; /* 0x17213AC6: movq qword ptr [eax], mm2 */
    MEM64(eax + 0x10) = _mm[4]; /* 0x17213AC9: movq qword ptr [eax + 0x10], mm4 */
    MEM64(eax + 0x20) = _mm[5]; /* 0x17213ACD: movq qword ptr [eax + 0x20], mm5 */
    MEM64(eax + 0x30) = _mm[7]; /* 0x17213AD1: movq qword ptr [eax + 0x30], mm7 */
    _mm[2] = MEM64(ebp + (-0x24)); /* 0x17213AD5: movq mm2, qword ptr [ebp - 0x24] */
    _mm[5] = MEM64(ebp + (-0x1C)); /* 0x17213AD9: movq mm5, qword ptr [ebp - 0x1c] */
    _mm[3] = MEM64(ebp + (-0x14)); /* 0x17213ADD: movq mm3, qword ptr [ebp - 0x14] */
    _mm[6] = MEM64(ebp + (-0xC)); /* 0x17213AE1: movq mm6, qword ptr [ebp - 0xc] */
    void_lift_trap(0x17213AE5u, "pfmul mm2, mm1");
    void_lift_trap(0x17213AE9u, "pfmul mm3, mm0");
    void_lift_trap(0x17213AEDu, "pfmul mm5, mm1");
    void_lift_trap(0x17213AF1u, "pfmul mm6, mm0");
    _mm[4] = _mm[2]; /* 0x17213AF5: movq mm4, mm2 */
    _mm[7] = _mm[5]; /* 0x17213AF8: movq mm7, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[3]); /* 0x17213AFB: punpckhdq mm2, mm3 */
    void_lift_trap(0x17213AFEu, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[6]); /* 0x17213B01: punpckhdq mm5, mm6 */
    void_lift_trap(0x17213B04u, "unsupported PUNPCKLDQ operands");
    MEM64(eax + 0x8) = _mm[2]; /* 0x17213B07: movq qword ptr [eax + 8], mm2 */
    MEM64(eax + 0x18) = _mm[4]; /* 0x17213B0B: movq qword ptr [eax + 0x18], mm4 */
    MEM64(eax + 0x28) = _mm[5]; /* 0x17213B0F: movq qword ptr [eax + 0x28], mm5 */
    MEM64(eax + 0x38) = _mm[7]; /* 0x17213B13: movq qword ptr [eax + 0x38], mm7 */
L_17213B17:
    MEM32(ebp + (-0x4)) = eax; /* 0x17213B17: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17213B1A: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17213B1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213B1E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17213B26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213B26u);

L_17213B26:
    edi = edi; /* 0x17213B26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213B28: push ebp */
    ebp = esp; /* 0x17213B29: mov ebp, esp */
    void_lift_trap(0x17213B2Bu, "femms ");
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17213B2D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17213B30: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17213B33: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_172137E9); /* 0x17213B36: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x17213B3Bu, "femms ");
    ebp = POP32_VAL(esp); /* 0x17213B3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213B3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17213B46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213B46u);

L_17213B46:
    edi = edi; /* 0x17213B46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213B48: push ebp */
    ebp = esp; /* 0x17213B49: mov ebp, esp */
    void_lift_trap(0x17213B4Bu, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17213B4D: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17213B50: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17213B53: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x17213B56: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17213B59: movq mm1, mm0 */
    void_lift_trap(0x17213B5Cu, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17213B5F: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213B62: movd mm2, dword ptr [eax + 8] */
    void_lift_trap(0x17213B66u, "unsupported PUNPCKLDQ operands");
    _mm[3] = _mm[0]; /* 0x17213B69: movq mm3, mm0 */
    void_lift_trap(0x17213B6Cu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17213B70: movq mm4, mm1 */
    void_lift_trap(0x17213B73u, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x17213B78: movq mm5, mm2 */
    void_lift_trap(0x17213B7Bu, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x17213B80u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x17213B85u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x17213B8Au, "pfadd mm1, mm2");
    void_lift_trap(0x17213B8Eu, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213B93u, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x17213B98u, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17213B9Du, "pfadd mm0, mm1");
    void_lift_trap(0x17213BA1u, "pfadd mm4, mm5");
    void_lift_trap(0x17213BA5u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x17213BA9: movq qword ptr [ecx], mm0 */
    MEM64(ecx + 0x8) = _mm[3]; /* 0x17213BAC: movq qword ptr [ecx + 8], mm3 */
    void_lift_trap(0x17213BB0u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17213BB2: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17213BB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213BB6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17213BBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213BBEu);

L_17213BBE:
    edi = edi; /* 0x17213BBE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213BC0: push ebp */
    ebp = esp; /* 0x17213BC1: mov ebp, esp */
    void_lift_trap(0x17213BC3u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17213BC5: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17213BC8: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17213BCB: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x17213BCE: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17213BD1: movq mm1, mm0 */
    void_lift_trap(0x17213BD4u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17213BD7: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213BDA: movd mm2, dword ptr [eax + 8] */
    void_lift_trap(0x17213BDEu, "unsupported PUNPCKLDQ operands");
    _mm[3] = _mm[0]; /* 0x17213BE1: movq mm3, mm0 */
    void_lift_trap(0x17213BE4u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17213BE8: movq mm4, mm1 */
    void_lift_trap(0x17213BEBu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x17213BF0: movq mm5, mm2 */
    void_lift_trap(0x17213BF3u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x17213BF8u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x17213BFDu, "pfadd mm1, mm2");
    void_lift_trap(0x17213C01u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213C06u, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x17213C0Bu, "pfadd mm0, mm1");
    void_lift_trap(0x17213C0Fu, "pfadd mm4, mm5");
    void_lift_trap(0x17213C13u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x17213C17: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x17213C1A: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x17213C1Eu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17213C20: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17213C23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213C24: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17213C2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213C2Cu);

L_17213C2C:
    void_lift_trap(0x17213C2Cu, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x17213C2E: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x17213C32: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x17213C35: movq mm1, mm0 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17213C38: movd mm2, dword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x17213C3C: movq mm3, mm2 */
    void_lift_trap(0x17213C3Fu, "pfmul mm0, mm0");
    void_lift_trap(0x17213C43u, "pfmul mm2, mm2");
    void_lift_trap(0x17213C47u, "pfadd mm0, mm2");
    void_lift_trap(0x17213C4Bu, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x17213C4F: movq mm5, mm0 */
    void_lift_trap(0x17213C52u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x17213C56u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[2] = _mm[4]; /* 0x17213C5E: movq mm2, mm4 */
    void_lift_trap(0x17213C61u, "pfmul mm2, mm4");
    void_lift_trap(0x17213C65u, "pfrsqit1 mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x17213C69: mov eax, dword ptr [esp + 4] */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x17213C6D: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x17213C70: pand mm3, mm5 */
    void_lift_trap(0x17213C73u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x17213C77u, "pfmul mm1, mm0");
    void_lift_trap(0x17213C7Bu, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x17213C7F: movq qword ptr [eax], mm1 */
    MEM32(eax + 0x8) = (uint32_t)_mm[3]; /* 0x17213C82: movd dword ptr [eax + 8], mm3 */
    void_lift_trap(0x17213C86u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17213C88: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17213C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213C90u);

L_17213C90:
    edx = MEM32(esp + 0xC); /* 0x17213C90: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x17213C94: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x17213C98: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x17213C9C: movq mm0, qword ptr [edx] */
    _mm[4] = MEM64(eax); /* 0x17213C9F: movq mm4, qword ptr [eax] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x17213CA2: movd mm6, dword ptr [esp + 0x14] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17213CA7: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x17213CAB: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17213CAE: movd mm3, dword ptr [ecx + 8] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213CB2: movd mm5, dword ptr [eax + 8] */
    void_lift_trap(0x17213CB6u, "pfsub mm0, mm4");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17213CBA: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x17213CBFu, "pfsub mm1, mm5");
    eax = MEM32(esp + 0x4); /* 0x17213CC3: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x17213CC7u, "pfsub mm2, mm4");
    void_lift_trap(0x17213CCBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213CCEu, "pfsub mm3, mm5");
    void_lift_trap(0x17213CD2u, "pfmul mm0, mm6");
    void_lift_trap(0x17213CD6u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213CD9u, "pfmul mm1, mm6");
    void_lift_trap(0x17213CDDu, "pfadd mm0, mm4");
    void_lift_trap(0x17213CE1u, "pfmul mm2, mm7");
    void_lift_trap(0x17213CE5u, "pfadd mm1, mm5");
    void_lift_trap(0x17213CE9u, "pfmul mm3, mm7");
    void_lift_trap(0x17213CEDu, "pfadd mm0, mm2");
    void_lift_trap(0x17213CF1u, "pfadd mm1, mm3");
    MEM64(eax) = _mm[0]; /* 0x17213CF5: movq qword ptr [eax], mm0 */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x17213CF8: movd dword ptr [eax + 8], mm1 */
    void_lift_trap(0x17213CFCu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17213CFE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17213D06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213D06u);

L_17213D06:
    void_lift_trap(0x17213D06u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17213D08: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x17213D0D: movq mm1, mm0 */
    void_lift_trap(0x17213D10u, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x17213D14: movq mm2, mm1 */
    void_lift_trap(0x17213D17u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x1702A600); /* 0x17213D1B: movq mm3, qword ptr [0x1702a600] */
    _mm[4] = _mm[1]; /* 0x17213D22: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x17213D25: movq mm7, mm2 */
    void_lift_trap(0x17213D28u, "pfsub mm7, mm1");
    void_lift_trap(0x17213D2Cu, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x17213D30: movq mm6, mm2 */
    void_lift_trap(0x17213D33u, "pfmul mm1, qword ptr [0x1702a608]");
    void_lift_trap(0x17213D3Bu, "pfmul mm2, mm3");
    void_lift_trap(0x17213D3Fu, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x17213D43: movq mm5, mm1 */
    void_lift_trap(0x17213D46u, "pfsub mm1, mm2");
    void_lift_trap(0x17213D4Au, "pfadd mm6, mm0");
    void_lift_trap(0x17213D4Eu, "pfsub mm2, mm5");
    void_lift_trap(0x17213D52u, "pfadd mm2, qword ptr [0x1702a5f0]");
    eax = MEM32(esp + 0x14); /* 0x17213D5A: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x17213D5E: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x17213D62: mov edx, dword ptr [esp + 0xc] */
    void_lift_trap(0x17213D66u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213D69u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213D6Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213D6Fu, "unsupported PUNPCKLDQ operands");
    _mm[5] = _mm[7]; /* 0x17213D72: movq mm5, mm7 */
    void_lift_trap(0x17213D75u, "pfmul mm7, qword ptr [eax]");
    _mm[0] = _mm[1]; /* 0x17213D79: movq mm0, mm1 */
    void_lift_trap(0x17213D7Cu, "pfmul mm1, qword ptr [ecx]");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213D80: movd mm4, dword ptr [eax + 8] */
    void_lift_trap(0x17213D84u, "pfmul mm5, mm4");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17213D88: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17213D8Cu, "pfmul mm0, mm3");
    ecx = MEM32(esp + 0x8); /* 0x17213D90: mov ecx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x4); /* 0x17213D94: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[6]; /* 0x17213D98: movq mm4, mm6 */
    void_lift_trap(0x17213D9Bu, "pfmul mm6, qword ptr [edx]");
    _mm[3] = _mm[2]; /* 0x17213D9F: movq mm3, mm2 */
    void_lift_trap(0x17213DA2u, "pfadd mm1, mm7");
    void_lift_trap(0x17213DA6u, "pfadd mm0, mm5");
    void_lift_trap(0x17213DAAu, "pfmul mm2, qword ptr [ecx]");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17213DAE: movd mm7, dword ptr [edx + 8] */
    void_lift_trap(0x17213DB2u, "pfmul mm4, mm7");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17213DB6: movd mm5, dword ptr [ecx + 8] */
    void_lift_trap(0x17213DBAu, "pfmul mm3, mm5");
    void_lift_trap(0x17213DBEu, "pfadd mm2, mm6");
    void_lift_trap(0x17213DC2u, "pfadd mm3, mm4");
    void_lift_trap(0x17213DC6u, "pfadd mm1, mm2");
    void_lift_trap(0x17213DCAu, "pfadd mm0, mm3");
    MEM64(eax) = _mm[1]; /* 0x17213DCE: movq qword ptr [eax], mm1 */
    MEM32(eax + 0x8) = (uint32_t)_mm[0]; /* 0x17213DD1: movd dword ptr [eax + 8], mm0 */
    void_lift_trap(0x17213DD5u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17213DD7: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17213DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213DDFu);

L_17213DDF:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17213DDF: movd mm0, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x8); /* 0x17213DE4: mov edx, dword ptr [esp + 8] */
    _mm[1] = _mm[0]; /* 0x17213DE8: movq mm1, mm0 */
    void_lift_trap(0x17213DEBu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213DEEu, "pfmul mm0, mm0");
    void_lift_trap(0x17213DF2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213DF9u, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x17213DFD: movq mm3, mm1 */
    void_lift_trap(0x17213E00u, "pfmul mm1, mm1");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17213E04: pxor mm7, mm7 */
    void_lift_trap(0x17213E07u, "pfsub mm0, mm1");
    void_lift_trap(0x17213E0Bu, "unsupported PUNPCKLDQ operands");
    _mm[4] = _mm[0]; /* 0x17213E0E: movq mm4, mm0 */
    void_lift_trap(0x17213E11u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213E14u, "pfmul mm0, qword ptr [0x1702a578]");
    _mm[5] = _mm[0]; /* 0x17213E1C: movq mm5, mm0 */
    void_lift_trap(0x17213E1Fu, "unsupported PUNPCKLDQ operands");
    _mm[3] = (_mm[3] ^ MEM64(0x1702A588)); /* 0x17213E22: pxor mm3, qword ptr [0x1702a588] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x17213E29: punpckhdq mm5, mm7 */
    void_lift_trap(0x17213E2Cu, "pfadd mm1, mm3");
    void_lift_trap(0x17213E30u, "pfsub mm1, mm0");
    ecx = MEM32(esp + 0xC); /* 0x17213E34: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x17213E38u, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x17213E3C: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17213E3F: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x17213E42: movq mm3, mm0 */
    void_lift_trap(0x17213E45u, "unsupported PUNPCKLDQ operands");
    eax = MEM32(esp + 0x10); /* 0x17213E48: mov eax, dword ptr [esp + 0x10] */
    void_lift_trap(0x17213E4Cu, "unsupported PUNPCKLDQ operands");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17213E4F: movd mm7, dword ptr [edx + 8] */
    _mm[4] = _mm[1]; /* 0x17213E53: movq mm4, mm1 */
    void_lift_trap(0x17213E56u, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213E5A: punpckhdq mm3, mm3 */
    _mm[5] = _mm[0]; /* 0x17213E5D: movq mm5, mm0 */
    void_lift_trap(0x17213E60u, "pfmul mm0, qword ptr [ecx]");
    _mm[6] = _mm[2]; /* 0x17213E64: movq mm6, mm2 */
    void_lift_trap(0x17213E67u, "pfmul mm2, qword ptr [eax]");
    void_lift_trap(0x17213E6Bu, "pfmul mm4, mm7");
    edx = MEM32(esp + 0x14); /* 0x17213E6F: mov edx, dword ptr [esp + 0x14] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17213E73: movd mm7, dword ptr [ecx + 8] */
    void_lift_trap(0x17213E77u, "pfmul mm5, mm7");
    void_lift_trap(0x17213E7Bu, "pfadd mm0, mm1");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213E7F: movd mm7, dword ptr [eax + 8] */
    void_lift_trap(0x17213E83u, "pfmul mm6, mm7");
    eax = MEM32(esp + 0x4); /* 0x17213E87: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x17213E8Bu, "pfadd mm4, mm5");
    _mm[7] = _mm[3]; /* 0x17213E8F: movq mm7, mm3 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17213E92: movd mm5, dword ptr [edx + 8] */
    void_lift_trap(0x17213E96u, "pfadd mm0, mm2");
    void_lift_trap(0x17213E9Au, "pfmul mm3, qword ptr [edx]");
    _mm[1] = MEM64(0x1702A5D0); /* 0x17213E9E: movq mm1, qword ptr [0x1702a5d0] */
    void_lift_trap(0x17213EA5u, "pfadd mm0, mm3");
    void_lift_trap(0x17213EA9u, "pfmul mm7, mm5");
    void_lift_trap(0x17213EADu, "pfadd mm4, mm6");
    void_lift_trap(0x17213EB1u, "pfmul mm0, mm1");
    void_lift_trap(0x17213EB5u, "pfadd mm4, mm7");
    MEM64(eax) = _mm[0]; /* 0x17213EB9: movq qword ptr [eax], mm0 */
    void_lift_trap(0x17213EBCu, "pfmul mm4, mm1");
    MEM32(eax + 0x8) = (uint32_t)_mm[4]; /* 0x17213EC0: movd dword ptr [eax + 8], mm4 */
    void_lift_trap(0x17213EC4u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17213EC6: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17213ECE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213ECEu);

L_17213ECE:
    edi = edi; /* 0x17213ECE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213ED0: push ebp */
    ebp = esp; /* 0x17213ED1: mov ebp, esp */
    void_lift_trap(0x17213ED3u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17213ED5: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17213ED8: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17213EDB: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x17213EDE: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17213EE1: movq mm1, mm0 */
    void_lift_trap(0x17213EE4u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17213EE7: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213EEA: movd mm2, dword ptr [eax + 8] */
    void_lift_trap(0x17213EEEu, "unsupported PUNPCKLDQ operands");
    _mm[3] = _mm[0]; /* 0x17213EF1: movq mm3, mm0 */
    void_lift_trap(0x17213EF4u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17213EF8: movq mm4, mm1 */
    void_lift_trap(0x17213EFBu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x17213F00: movq mm5, mm2 */
    void_lift_trap(0x17213F03u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x17213F08u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x17213F0Du, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x17213F12u, "pfadd mm1, mm2");
    void_lift_trap(0x17213F16u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213F1Bu, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x17213F20u, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17213F25u, "pfadd mm0, mm1");
    void_lift_trap(0x17213F29u, "pfadd mm4, mm5");
    void_lift_trap(0x17213F2Du, "pfadd mm3, mm4");
    _mm[5] = _mm[3]; /* 0x17213F31: movq mm5, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17213F34: punpckhdq mm5, mm5 */
    void_lift_trap(0x17213F37u, "pfrcp mm4, mm5");
    void_lift_trap(0x17213F3Bu, "pfrcpit1 mm5, mm4");
    void_lift_trap(0x17213F3Fu, "pfrcpit2 mm5, mm4");
    void_lift_trap(0x17213F43u, "pfmul mm0, mm5");
    void_lift_trap(0x17213F47u, "pfmul mm3, mm5");
    MEM64(ecx) = _mm[0]; /* 0x17213F4B: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x17213F4E: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x17213F52u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17213F54: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17213F57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213F58: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17213F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17213F60u);

L_17213F60:
    edi = edi; /* 0x17213F60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213F62: push ebp */
    ebp = esp; /* 0x17213F63: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17213F65: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17213F68: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17213F6B: mov eax, dword ptr [ebp + 8] */
    _mm[0] = MEM64(ecx); /* 0x17213F6E: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(ecx + 0x8); /* 0x17213F71: movq mm1, qword ptr [ecx + 8] */
    _mm[4] = MEM64(edx); /* 0x17213F75: movq mm4, qword ptr [edx] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17213F78: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x17213F7B: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17213F7F: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x17213F82: movq mm6, qword ptr [edx + 0x20] */
    void_lift_trap(0x17213F86u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213F89u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213F8Cu, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17213F90: punpckhdq mm2, mm2 */
    void_lift_trap(0x17213F93u, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x17213F98: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x17213F9Cu, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17213FA0: punpckhdq mm3, mm3 */
    void_lift_trap(0x17213FA3u, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213FA8u, "pfadd mm5, mm4");
    void_lift_trap(0x17213FACu, "pfmul mm6, mm1");
    void_lift_trap(0x17213FB0u, "pfadd mm2, mm0");
    void_lift_trap(0x17213FB4u, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x17213FB9u, "pfadd mm6, mm5");
    void_lift_trap(0x17213FBDu, "pfmul mm7, mm3");
    void_lift_trap(0x17213FC1u, "pfadd mm2, mm1");
    void_lift_trap(0x17213FC5u, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17213FCAu, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x10); /* 0x17213FCE: movq mm0, qword ptr [ecx + 0x10] */
    void_lift_trap(0x17213FD2u, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x18); /* 0x17213FD6: movq mm1, qword ptr [ecx + 0x18] */
    MEM64(eax) = _mm[7]; /* 0x17213FDA: movq qword ptr [eax], mm7 */
    _mm[4] = MEM64(edx); /* 0x17213FDD: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17213FE0: movq qword ptr [eax + 8], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17213FE4: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x17213FE7: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17213FEB: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x17213FEE: movq mm6, qword ptr [edx + 0x20] */
    void_lift_trap(0x17213FF2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213FF5u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17213FF8u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17213FFC: punpckhdq mm2, mm2 */
    void_lift_trap(0x17213FFFu, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x17214004: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x17214008u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721400C: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721400Fu, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x17214014u, "pfadd mm5, mm4");
    void_lift_trap(0x17214018u, "pfmul mm6, mm1");
    void_lift_trap(0x1721401Cu, "pfadd mm2, mm0");
    void_lift_trap(0x17214020u, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x17214025u, "pfadd mm6, mm5");
    void_lift_trap(0x17214029u, "pfmul mm7, mm3");
    void_lift_trap(0x1721402Du, "pfadd mm2, mm1");
    void_lift_trap(0x17214031u, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17214036u, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x20); /* 0x1721403A: movq mm0, qword ptr [ecx + 0x20] */
    void_lift_trap(0x1721403Eu, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x28); /* 0x17214042: movq mm1, qword ptr [ecx + 0x28] */
    MEM64(eax + 0x10) = _mm[7]; /* 0x17214046: movq qword ptr [eax + 0x10], mm7 */
    _mm[4] = MEM64(edx); /* 0x1721404A: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x18) = _mm[3]; /* 0x1721404D: movq qword ptr [eax + 0x18], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17214051: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x17214054: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x17214058: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x1721405B: movq mm6, qword ptr [edx + 0x20] */
    void_lift_trap(0x1721405Fu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17214062u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17214065u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x17214069: punpckhdq mm2, mm2 */
    void_lift_trap(0x1721406Cu, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x17214071: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x17214075u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17214079: punpckhdq mm3, mm3 */
    void_lift_trap(0x1721407Cu, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x17214081u, "pfadd mm5, mm4");
    void_lift_trap(0x17214085u, "pfmul mm6, mm1");
    void_lift_trap(0x17214089u, "pfadd mm2, mm0");
    void_lift_trap(0x1721408Du, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x17214092u, "pfadd mm6, mm5");
    void_lift_trap(0x17214096u, "pfmul mm7, mm3");
    void_lift_trap(0x1721409Au, "pfadd mm2, mm1");
    void_lift_trap(0x1721409Eu, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x172140A3u, "pfadd mm7, mm6");
    _mm[0] = MEM64(ecx + 0x30); /* 0x172140A7: movq mm0, qword ptr [ecx + 0x30] */
    void_lift_trap(0x172140ABu, "pfadd mm3, mm2");
    _mm[1] = MEM64(ecx + 0x38); /* 0x172140AF: movq mm1, qword ptr [ecx + 0x38] */
    MEM64(eax + 0x20) = _mm[7]; /* 0x172140B3: movq qword ptr [eax + 0x20], mm7 */
    _mm[4] = MEM64(edx); /* 0x172140B7: movq mm4, qword ptr [edx] */
    MEM64(eax + 0x28) = _mm[3]; /* 0x172140BA: movq qword ptr [eax + 0x28], mm3 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x172140BE: punpckhdq mm2, mm0 */
    _mm[5] = MEM64(edx + 0x10); /* 0x172140C1: movq mm5, qword ptr [edx + 0x10] */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x172140C5: punpckhdq mm3, mm1 */
    _mm[6] = MEM64(edx + 0x20); /* 0x172140C8: movq mm6, qword ptr [edx + 0x20] */
    void_lift_trap(0x172140CCu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172140CFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172140D2u, "pfmul mm4, mm0");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x172140D6: punpckhdq mm2, mm2 */
    void_lift_trap(0x172140D9u, "pfmul mm0, qword ptr [edx + 8]");
    _mm[7] = MEM64(edx + 0x30); /* 0x172140DE: movq mm7, qword ptr [edx + 0x30] */
    void_lift_trap(0x172140E2u, "pfmul mm5, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172140E6: punpckhdq mm3, mm3 */
    void_lift_trap(0x172140E9u, "pfmul mm2, qword ptr [edx + 0x18]");
    void_lift_trap(0x172140EEu, "pfadd mm5, mm4");
    void_lift_trap(0x172140F2u, "pfmul mm6, mm1");
    void_lift_trap(0x172140F6u, "pfadd mm2, mm0");
    void_lift_trap(0x172140FAu, "pfmul mm1, qword ptr [edx + 0x28]");
    void_lift_trap(0x172140FFu, "pfadd mm6, mm5");
    void_lift_trap(0x17214103u, "pfmul mm7, mm3");
    void_lift_trap(0x17214107u, "pfadd mm2, mm1");
    void_lift_trap(0x1721410Bu, "pfmul mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17214110u, "pfadd mm7, mm6");
    void_lift_trap(0x17214114u, "pfadd mm3, mm2");
    MEM64(eax + 0x30) = _mm[7]; /* 0x17214118: movq qword ptr [eax + 0x30], mm7 */
    MEM64(eax + 0x38) = _mm[3]; /* 0x1721411C: movq qword ptr [eax + 0x38], mm3 */
    void_lift_trap(0x17214120u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17214122: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17214125: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17214126: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721412E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721412Eu);

    goto L_1721412E;
L_17213ECE:
    edi = edi; /* 0x17213ECE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17213ED0: push ebp */
    ebp = esp; /* 0x17213ED1: mov ebp, esp */
    void_lift_trap(0x17213ED3u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17213ED5: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17213ED8: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17213EDB: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x17213EDE: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17213EE1: movq mm1, mm0 */
    void_lift_trap(0x17213EE4u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17213EE7: punpckhdq mm1, mm1 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17213EEA: movd mm2, dword ptr [eax + 8] */
    void_lift_trap(0x17213EEEu, "unsupported PUNPCKLDQ operands");
    _mm[3] = _mm[0]; /* 0x17213EF1: movq mm3, mm0 */
    void_lift_trap(0x17213EF4u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17213EF8: movq mm4, mm1 */
    void_lift_trap(0x17213EFBu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[5] = _mm[2]; /* 0x17213F00: movq mm5, mm2 */
    void_lift_trap(0x17213F03u, "pfmul mm2, qword ptr [edx + 0x20]");
    void_lift_trap(0x17213F08u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x17213F0Du, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x17213F12u, "pfadd mm1, mm2");
    void_lift_trap(0x17213F16u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x17213F1Bu, "pfmul mm5, qword ptr [edx + 0x28]");
    void_lift_trap(0x17213F20u, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17213F25u, "pfadd mm0, mm1");
    void_lift_trap(0x17213F29u, "pfadd mm4, mm5");
    void_lift_trap(0x17213F2Du, "pfadd mm3, mm4");
    _mm[5] = _mm[3]; /* 0x17213F31: movq mm5, mm3 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17213F34: punpckhdq mm5, mm5 */
    void_lift_trap(0x17213F37u, "pfrcp mm4, mm5");
    void_lift_trap(0x17213F3Bu, "pfrcpit1 mm5, mm4");
    void_lift_trap(0x17213F3Fu, "pfrcpit2 mm5, mm4");
    void_lift_trap(0x17213F43u, "pfmul mm0, mm5");
    void_lift_trap(0x17213F47u, "pfmul mm3, mm5");
    MEM64(ecx) = _mm[0]; /* 0x17213F4B: movq qword ptr [ecx], mm0 */
    MEM32(ecx + 0x8) = (uint32_t)_mm[3]; /* 0x17213F4E: movd dword ptr [ecx + 8], mm3 */
    void_lift_trap(0x17213F52u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17213F54: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17213F57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17213F58: ret 0xc */
L_1721412E:
    edi = edi; /* 0x1721412E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17214130: push ebp */
    ebp = esp; /* 0x17214131: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x17214133: pop ebp */
    RECOMP_BACKEDGE();
    goto L_17213ECE; /* 0x17214134: jmp 0x17213ece */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1721413E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721413Eu);

L_1721413E:
    edi = edi; /* 0x1721413E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17214140: push ebp */
    ebp = esp; /* 0x17214141: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x17214143: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17214146: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17214148: push esi */
    PUSH32(esp, edi); /* 0x17214149: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x1721414A: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x1721414D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1721414F: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17214152: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x40); /* 0x17214154: lea esi, [ebp - 0x40] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17214157: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17214157: shl eax, 1 */
    /* cmp MEM32(ebp + 0x18), ecx */ /* 0x17214159: cmp dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1721415C: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1721415F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17214161: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x17214163: mov ecx, dword ptr [ebp + 0x14] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17214166: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17214166: shl eax, 1 */
    /* test ecx, ecx */ /* 0x17214168: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1721416A: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1721416D: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x1721416F: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17214233; /* 0x17214172: ja 0x17214233 */
L_17214178:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x172142AA)); goto _ljump; }
L_1721417F:
    fp_push(0.0); /* 0x1721417F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17214181: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x17214184: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17214186: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x17214189: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1721418B: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x1721418E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17214190: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17214193: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17214195: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17214198: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1721419A: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1721419D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1721419F: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x172141A2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x172141A4: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x172141A7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x172141A9: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x172141AC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x172141AE: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x172141B1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x172141B3: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x172141B6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x172141B8: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x172141BB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x172141BD: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x172141C0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x172141C2: fstp dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x172141C5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x172141C7: fstp dword ptr [ebp - 0x2c] */
    fp_push(1.0); /* 0x172141CA: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x172141CC: fstp dword ptr [ebp - 0x40] */
    goto L_17214233; /* 0x172141CF: jmp 0x17214233 */
L_172141D1:
    esi = ecx; /* 0x172141D1: mov esi, ecx */
    goto L_17214233; /* 0x172141D3: jmp 0x17214233 */
L_172141D5:
    esi = MEM32(ebp + 0x18); /* 0x172141D5: mov esi, dword ptr [ebp + 0x18] */
    goto L_17214233; /* 0x172141D8: jmp 0x17214233 */
L_172141DA:
    void_lift_trap(0x172141DAu, "femms ");
    PUSH32(esp, ecx); /* 0x172141DC: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x172141DD: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x40); /* 0x172141E0: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172141E3: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172141E4: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172141E9u, "femms ");
    goto L_17214233; /* 0x172141EB: jmp 0x17214233 */
L_172141ED:
    esi = edi; /* 0x172141ED: mov esi, edi */
    goto L_17214233; /* 0x172141EF: jmp 0x17214233 */
L_172141F1:
    void_lift_trap(0x172141F1u, "femms ");
    PUSH32(esp, ecx); /* 0x172141F3: push ecx */
    PUSH32(esp, edi); /* 0x172141F4: push edi */
    eax = ebp + (-0x40); /* 0x172141F5: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172141F8: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172141F9: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172141FEu, "femms ");
    goto L_17214233; /* 0x17214200: jmp 0x17214233 */
L_17214202:
    void_lift_trap(0x17214202u, "femms ");
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17214204: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x40); /* 0x17214207: lea eax, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1721420A: push edi */
    PUSH32(esp, eax); /* 0x1721420B: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x1721420C: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x17214211u, "femms ");
    goto L_17214233; /* 0x17214213: jmp 0x17214233 */
L_17214215:
    void_lift_trap(0x17214215u, "femms ");
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17214217: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x40); /* 0x1721421A: lea eax, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1721421D: push edi */
    PUSH32(esp, eax); /* 0x1721421E: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x1721421F: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214224: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x17214227: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1721422A: push eax */
    PUSH32(esp, eax); /* 0x1721422B: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x1721422C: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x17214231u, "femms ");
L_17214233:
    PUSH32(esp, esi); /* 0x17214233: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17214234: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17214237: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17213ECE); /* 0x1721423A: call 0x17213ece */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1721423F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17214243: pop edi */
    esi = POP32_VAL(esp); /* 0x17214244: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172142A3; /* 0x17214245: je 0x172142a3 */
L_17214247:
    void_lift_trap(0x17214247u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17214249: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1721424C: mov ecx, dword ptr [ebp + 0x10] */
    _mm[0] = MEM64(eax); /* 0x1721424F: movq mm0, qword ptr [eax] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(eax + 0x8)); /* 0x17214252: movd mm1, dword ptr [eax + 8] */
    _mm[2] = MEM64(ecx); /* 0x17214256: movq mm2, qword ptr [ecx] */
    _mm[0] = (_mm[0] ^ MEM64(0x1702A5E8)); /* 0x17214259: pxor mm0, qword ptr [0x1702a5e8] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x17214260: movq mm3, qword ptr [ecx + 8] */
    _mm[4] = MEM64(ecx + 0x10); /* 0x17214264: movq mm4, qword ptr [ecx + 0x10] */
    void_lift_trap(0x17214268u, "pi2fd mm2, mm2");
    void_lift_trap(0x1721426Cu, "pi2fd mm3, mm3");
    void_lift_trap(0x17214270u, "pfadd mm0, qword ptr [0x1702a5f0]");
    void_lift_trap(0x17214278u, "pfmul mm3, qword ptr [0x1702a5f8]");
    _mm[5] = _mm[4]; /* 0x17214280: movq mm5, mm4 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17214283: punpckhdq mm5, mm5 */
    void_lift_trap(0x17214286u, "pfsub mm5, mm4");
    void_lift_trap(0x1721428Au, "pfmul mm0, mm3");
    void_lift_trap(0x1721428Eu, "pfmul mm1, mm5");
    void_lift_trap(0x17214292u, "pfadd mm1, mm4");
    void_lift_trap(0x17214296u, "pfadd mm0, mm2");
    MEM64(eax) = _mm[0]; /* 0x1721429A: movq qword ptr [eax], mm0 */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x1721429D: movd dword ptr [eax + 8], mm1 */
    void_lift_trap(0x172142A1u, "femms ");
L_172142A3:
    eax = MEM32(ebp + 0x8); /* 0x172142A3: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x172142A6: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172142A7: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1721417Fu: goto L_1721417F;
      case 0x172141D1u: goto L_172141D1;
      case 0x172141D5u: goto L_172141D5;
      case 0x172141DAu: goto L_172141DA;
      case 0x172141EDu: goto L_172141ED;
      case 0x172141F1u: goto L_172141F1;
      case 0x17214202u: goto L_17214202;
      case 0x17214215u: goto L_17214215;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_172142CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172142CFu);

L_172142CF:
    edi = edi; /* 0x172142CF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172142D1: push ebp */
    ebp = esp; /* 0x172142D2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x172142D4: sub esp, 0x40 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x18); /* 0x172142D7: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172142DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x172142DC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x172142DD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x172142DF: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x172142E0: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edi, esi */ /* 0x172142E3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x172142E5: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x172142E8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x172142EA: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x172142EA: shl eax, 1 */
    /* cmp ecx, esi */ /* 0x172142EC: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x172142EE: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x172142F1: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x172142F3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x172142F5: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x172142F5: shl eax, 1 */
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x172142F7: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x172142FA: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x172142FD: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x172142FF: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1721441E; /* 0x17214302: ja 0x1721441e */
L_17214308:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x172144CC)); goto _ljump; }
L_1721430F:
    fp_push(0.0); /* 0x1721430F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17214311: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x17214314: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17214316: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x17214319: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1721431B: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x1721431E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17214320: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17214323: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17214325: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17214328: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1721432A: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1721432D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1721432F: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17214332: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17214334: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x17214337: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17214339: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x1721433C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1721433E: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17214341: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17214343: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17214346: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17214348: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x1721434B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1721434D: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x17214350: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17214352: fstp dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x17214355: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17214357: fstp dword ptr [ebp - 0x2c] */
    fp_push(1.0); /* 0x1721435A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1721435C: fstp dword ptr [ebp - 0x40] */
    goto L_1721441E; /* 0x1721435F: jmp 0x1721441e */
L_17214364:
    void_lift_trap(0x17214364u, "femms ");
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214366: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x17214369: lea eax, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x1721436C: push esi */
    PUSH32(esp, eax); /* 0x1721436D: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x1721436E: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x17214373u, "femms ");
    goto L_1721441E; /* 0x17214375: jmp 0x1721441e */
L_1721437A:
    void_lift_trap(0x1721437Au, "femms ");
    PUSH32(esp, ecx); /* 0x1721437C: push ecx */
    PUSH32(esp, esi); /* 0x1721437D: push esi */
    eax = ebp + (-0x40); /* 0x1721437E: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17214381: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x17214382: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x17214387u, "femms ");
    goto L_1721441E; /* 0x17214389: jmp 0x1721441e */
L_1721438E:
    void_lift_trap(0x1721438Eu, "femms ");
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214390: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x17214393: lea eax, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x17214396: push ecx */
    PUSH32(esp, eax); /* 0x17214397: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x17214398: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1721439D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143A0: push eax */
    PUSH32(esp, esi); /* 0x172143A1: push esi */
    PUSH32(esp, eax); /* 0x172143A2: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x172143A3: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172143A8u, "femms ");
    goto L_1721441E; /* 0x172143AA: jmp 0x1721441e */
L_172143AC:
    void_lift_trap(0x172143ACu, "femms ");
    PUSH32(esp, edi); /* 0x172143AE: push edi */
    PUSH32(esp, esi); /* 0x172143AF: push esi */
    eax = ebp + (-0x40); /* 0x172143B0: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143B3: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x172143B4: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172143B9u, "femms ");
    goto L_1721441E; /* 0x172143BB: jmp 0x1721441e */
L_172143BD:
    void_lift_trap(0x172143BDu, "femms ");
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x172143BF: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x172143C2: lea eax, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x172143C5: push edi */
    PUSH32(esp, eax); /* 0x172143C6: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172143C7: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x172143CC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143CF: push eax */
    PUSH32(esp, esi); /* 0x172143D0: push esi */
    PUSH32(esp, eax); /* 0x172143D1: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x172143D2: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172143D7u, "femms ");
    goto L_1721441E; /* 0x172143D9: jmp 0x1721441e */
L_172143DB:
    void_lift_trap(0x172143DBu, "femms ");
    PUSH32(esp, ecx); /* 0x172143DD: push ecx */
    PUSH32(esp, edi); /* 0x172143DE: push edi */
    eax = ebp + (-0x40); /* 0x172143DF: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143E2: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172143E3: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x172143E8: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143EB: push eax */
    PUSH32(esp, esi); /* 0x172143EC: push esi */
    PUSH32(esp, eax); /* 0x172143ED: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x172143EE: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x172143F3u, "femms ");
    goto L_1721441E; /* 0x172143F5: jmp 0x1721441e */
L_172143F7:
    void_lift_trap(0x172143F7u, "femms ");
    PUSH32(esp, ecx); /* 0x172143F9: push ecx */
    PUSH32(esp, edi); /* 0x172143FA: push edi */
    eax = ebp + (-0x40); /* 0x172143FB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172143FE: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172143FF: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214404: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x17214407: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1721440A: push eax */
    PUSH32(esp, eax); /* 0x1721440B: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x1721440C: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x17214411: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17214414: push eax */
    PUSH32(esp, esi); /* 0x17214415: push esi */
    PUSH32(esp, eax); /* 0x17214416: push eax */
    RECOMP_CALL(sub_172137E9); /* 0x17214417: call 0x172137e9 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1721441Cu, "femms ");
L_1721441E:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1721441E: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17214421: pop edi */
    esi = POP32_VAL(esp); /* 0x17214422: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172144B6; /* 0x17214423: je 0x172144b6 */
L_17214429:
    void_lift_trap(0x17214429u, "femms ");
    eax = MEM32(ebp + 0x10); /* 0x1721442B: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1721442E: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x17214431: mov edx, dword ptr [ebp + 8] */
    _mm[1] = MEM64(eax); /* 0x17214434: movq mm1, qword ptr [eax] */
    _mm[2] = MEM64(eax + 0x8); /* 0x17214437: movq mm2, qword ptr [eax + 8] */
    _mm[0] = MEM64(ecx); /* 0x1721443B: movq mm0, qword ptr [ecx] */
    void_lift_trap(0x1721443Eu, "pi2fd mm1, mm1");
    _mm[4] = MEM64(eax + 0x10); /* 0x17214442: movq mm4, qword ptr [eax + 0x10] */
    void_lift_trap(0x17214446u, "pi2fd mm2, mm2");
    _mm[3] = _mm[2]; /* 0x1721444A: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721444D: punpckhdq mm3, mm3 */
    void_lift_trap(0x17214450u, "pfrcp mm5, mm2");
    void_lift_trap(0x17214454u, "pfrcp mm3, mm3");
    void_lift_trap(0x17214458u, "pfsub mm0, mm1");
    void_lift_trap(0x1721445Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721445Fu, "pfrcpit1 mm2, mm5");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17214463: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17214467u, "pfrcpit2 mm2, mm5");
    void_lift_trap(0x1721446Bu, "pfmul mm2, qword ptr [0x1702a600]");
    _mm[5] = _mm[4]; /* 0x17214473: movq mm5, mm4 */
    void_lift_trap(0x17214476u, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x1721447A: punpckhdq mm5, mm5 */
    void_lift_trap(0x1721447Du, "pfsub mm0, qword ptr [0x1702a5f0]");
    void_lift_trap(0x17214485u, "pfsub mm5, mm4");
    void_lift_trap(0x17214489u, "pfrcp mm6, mm5");
    _mm[0] = (_mm[0] ^ MEM64(0x1702A5E8)); /* 0x1721448D: pxor mm0, qword ptr [0x1702a5e8] */
    void_lift_trap(0x17214494u, "pfrcpit1 mm5, mm6");
    void_lift_trap(0x17214498u, "pfrcpit2 mm5, mm6");
    void_lift_trap(0x1721449Cu, "pfsub mm3, mm4");
    void_lift_trap(0x172144A0u, "pfmul mm3, mm5");
    MEM64(edx) = _mm[0]; /* 0x172144A4: movq qword ptr [edx], mm0 */
    MEM32(edx + 0x8) = (uint32_t)_mm[3]; /* 0x172144A7: movd dword ptr [edx + 8], mm3 */
    void_lift_trap(0x172144ABu, "femms ");
    eax = ebp + (-0x40); /* 0x172144AD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172144B0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x172144B1: push dword ptr [ebp + 8] */
    goto L_172144BD; /* 0x172144B4: jmp 0x172144bd */
L_172144B6:
    eax = ebp + (-0x40); /* 0x172144B6: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172144B9: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x172144BA: push dword ptr [ebp + 0xc] */
L_172144BD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x172144BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17213ECE); /* 0x172144C0: call 0x17213ece */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x172144C5: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x172144C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172144C9: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1721430Fu: goto L_1721430F;
      case 0x17214364u: goto L_17214364;
      case 0x1721437Au: goto L_1721437A;
      case 0x1721438Eu: goto L_1721438E;
      case 0x172143ACu: goto L_172143AC;
      case 0x172143BDu: goto L_172143BD;
      case 0x172143DBu: goto L_172143DB;
      case 0x172143F7u: goto L_172143F7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_172144F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172144F1u);

L_172144F1:
    edi = edi; /* 0x172144F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172144F3: push ebp */
    ebp = esp; /* 0x172144F4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x172144F6: sub esp, 0x40 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x18); /* 0x172144F9: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172144FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x172144FE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x172144FF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17214501: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x17214502: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edi, esi */ /* 0x17214505: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17214507: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1721450A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1721450C: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1721450C: shl eax, 1 */
    /* cmp ecx, esi */ /* 0x1721450E: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17214510: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x17214513: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17214515: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17214517: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17214517: shl eax, 1 */
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x17214519: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1721451C: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1721451F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x17214521: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_172145C6; /* 0x17214524: ja 0x172145c6 */
L_1721452A:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x17214674)); goto _ljump; }
L_17214531:
    fp_push(0.0); /* 0x17214531: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17214533: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x17214536: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17214538: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x1721453B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1721453D: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x17214540: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17214542: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17214545: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17214547: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x1721454A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1721454C: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1721454F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17214551: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17214554: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17214556: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x17214559: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1721455B: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x1721455E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17214560: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17214563: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17214565: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17214568: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1721456A: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x1721456D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1721456F: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x17214572: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17214574: fstp dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x17214577: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17214579: fstp dword ptr [ebp - 0x2c] */
    fp_push(1.0); /* 0x1721457C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1721457E: fstp dword ptr [ebp - 0x40] */
    goto L_172145C6; /* 0x17214581: jmp 0x172145c6 */
L_17214583:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214583: push dword ptr [ebp + 0x14] */
    goto L_172145BC; /* 0x17214586: jmp 0x172145bc */
L_17214588:
    PUSH32(esp, ecx); /* 0x17214588: push ecx */
    goto L_172145BC; /* 0x17214589: jmp 0x172145bc */
L_1721458B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1721458B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x1721458E: push ecx */
    goto L_172145AF; /* 0x1721458F: jmp 0x172145af */
L_17214591:
    PUSH32(esp, edi); /* 0x17214591: push edi */
    goto L_172145BC; /* 0x17214592: jmp 0x172145bc */
L_17214594:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17214594: push dword ptr [ebp + 0x14] */
    goto L_1721459A; /* 0x17214597: jmp 0x1721459a */
L_17214599:
    PUSH32(esp, ecx); /* 0x17214599: push ecx */
L_1721459A:
    PUSH32(esp, edi); /* 0x1721459A: push edi */
    goto L_172145AF; /* 0x1721459B: jmp 0x172145af */
L_1721459D:
    PUSH32(esp, ecx); /* 0x1721459D: push ecx */
    PUSH32(esp, edi); /* 0x1721459E: push edi */
    eax = ebp + (-0x40); /* 0x1721459F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172145A2: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172145A3: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x172145A8: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x40); /* 0x172145AB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172145AE: push eax */
L_172145AF:
    eax = ebp + (-0x40); /* 0x172145AF: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172145B2: push eax */
    RECOMP_CALL(sub_17213F60); /* 0x172145B3: call 0x17213f60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x172145B8: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x172145BB: push eax */
L_172145BC:
    eax = ebp + (-0x40); /* 0x172145BC: lea eax, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x172145BF: push esi */
    PUSH32(esp, eax); /* 0x172145C0: push eax */
    RECOMP_CALL(sub_17213103); /* 0x172145C1: call 0x17213103 */
    RECOMP_FLAGS_IN();
L_172145C6:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x172145C6: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x172145C9: pop edi */
    esi = POP32_VAL(esp); /* 0x172145CA: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721465E; /* 0x172145CB: je 0x1721465e */
L_172145D1:
    void_lift_trap(0x172145D1u, "femms ");
    eax = MEM32(ebp + 0x10); /* 0x172145D3: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x172145D6: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x172145D9: mov edx, dword ptr [ebp + 8] */
    _mm[1] = MEM64(eax); /* 0x172145DC: movq mm1, qword ptr [eax] */
    _mm[2] = MEM64(eax + 0x8); /* 0x172145DF: movq mm2, qword ptr [eax + 8] */
    _mm[0] = MEM64(ecx); /* 0x172145E3: movq mm0, qword ptr [ecx] */
    void_lift_trap(0x172145E6u, "pi2fd mm1, mm1");
    _mm[4] = MEM64(eax + 0x10); /* 0x172145EA: movq mm4, qword ptr [eax + 0x10] */
    void_lift_trap(0x172145EEu, "pi2fd mm2, mm2");
    _mm[3] = _mm[2]; /* 0x172145F2: movq mm3, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172145F5: punpckhdq mm3, mm3 */
    void_lift_trap(0x172145F8u, "pfrcp mm5, mm2");
    void_lift_trap(0x172145FCu, "pfrcp mm3, mm3");
    void_lift_trap(0x17214600u, "pfsub mm0, mm1");
    void_lift_trap(0x17214604u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17214607u, "pfrcpit1 mm2, mm5");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x1721460B: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x1721460Fu, "pfrcpit2 mm2, mm5");
    void_lift_trap(0x17214613u, "pfmul mm2, qword ptr [0x1702a600]");
    _mm[5] = _mm[4]; /* 0x1721461B: movq mm5, mm4 */
    void_lift_trap(0x1721461Eu, "pfmul mm0, mm2");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x17214622: punpckhdq mm5, mm5 */
    void_lift_trap(0x17214625u, "pfsub mm0, qword ptr [0x1702a5f0]");
    void_lift_trap(0x1721462Du, "pfsub mm5, mm4");
    void_lift_trap(0x17214631u, "pfrcp mm6, mm5");
    _mm[0] = (_mm[0] ^ MEM64(0x1702A5E8)); /* 0x17214635: pxor mm0, qword ptr [0x1702a5e8] */
    void_lift_trap(0x1721463Cu, "pfrcpit1 mm5, mm6");
    void_lift_trap(0x17214640u, "pfrcpit2 mm5, mm6");
    void_lift_trap(0x17214644u, "pfsub mm3, mm4");
    void_lift_trap(0x17214648u, "pfmul mm3, mm5");
    MEM64(edx) = _mm[0]; /* 0x1721464C: movq qword ptr [edx], mm0 */
    MEM32(edx + 0x8) = (uint32_t)_mm[3]; /* 0x1721464F: movd dword ptr [edx + 8], mm3 */
    void_lift_trap(0x17214653u, "femms ");
    eax = ebp + (-0x40); /* 0x17214655: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17214658: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17214659: push dword ptr [ebp + 8] */
    goto L_17214665; /* 0x1721465C: jmp 0x17214665 */
L_1721465E:
    eax = ebp + (-0x40); /* 0x1721465E: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17214661: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17214662: push dword ptr [ebp + 0xc] */
L_17214665:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17214665: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17213ECE); /* 0x17214668: call 0x17213ece */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1721466D: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17214670: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17214671: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x17214531u: goto L_17214531;
      case 0x17214583u: goto L_17214583;
      case 0x17214588u: goto L_17214588;
      case 0x1721458Bu: goto L_1721458B;
      case 0x17214591u: goto L_17214591;
      case 0x17214594u: goto L_17214594;
      case 0x17214599u: goto L_17214599;
      case 0x1721459Du: goto L_1721459D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17215000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215000u);

L_17215000:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17215000: sub esp, 0x1c */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = ebp; /* 0x17215003: mov dword ptr [esp + 0xc], ebp */
    MEM32(esp + 0x10) = esi; /* 0x17215007: mov dword ptr [esp + 0x10], esi */
    MEM32(esp + 0x14) = edi; /* 0x1721500B: mov dword ptr [esp + 0x14], edi */
    MEM32(esp + 0x18) = ebx; /* 0x1721500F: mov dword ptr [esp + 0x18], ebx */
    ebp = esp; /* 0x17215013: mov ebp, esp */
    ecx = MEM32(ebp + 0x28); /* 0x17215015: mov ecx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x17215018: mov eax, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x24); /* 0x1721501B: mov edx, dword ptr [ebp + 0x24] */
    /* cmp ecx, 4 */ /* 0x1721501E: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17215044; /* 0x17215021: jge 0x17215044 */
L_17215023:
    /* cmp ecx, 0 */ /* 0x17215023: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17215125; /* 0x17215026: je 0x17215125 */
L_1721502C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1721502C: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x1721502F: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = edx; /* 0x17215032: mov dword ptr [esp + 4], edx */
    MEM32(esp + 0x8) = ecx; /* 0x17215036: mov dword ptr [esp + 8], ecx */
    RECOMP_CALL(sub_17040761); /* 0x1721503A: call 0x17040761 */
    RECOMP_FLAGS_IN();
    goto L_17215125; /* 0x1721503F: jmp 0x17215125 */
L_17215044:
    ebx = ecx; /* 0x17215044: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x17215046: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17215067; /* 0x17215049: je 0x17215067 */
L_1721504B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1721504B: sub ecx, 4 */
    _flag_k = FK_CMP;
    _mm[0] = (uint64_t)(uint32_t)(MEM32(edx + ecx * 2)); /* 0x1721504E: movd mm0, dword ptr [edx + ecx*2] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + ecx * 2 + 0x4)); /* 0x17215052: movd mm1, dword ptr [edx + ecx*2 + 4] */
    ebx = eax + ecx * 4; /* 0x17215057: lea ebx, [eax + ecx*4] */
    MEM32(esp) = (uint32_t)_mm[0]; /* 0x1721505A: movd dword ptr [esp], mm0 */
    MEM32(esp + 0x4) = (uint32_t)_mm[1]; /* 0x1721505E: movd dword ptr [esp + 4], mm1 */
    MEM32(esp + 0x8) = ebx; /* 0x17215063: mov dword ptr [esp + 8], ebx */
L_17215067:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(edx)); /* 0x17215067: movd mm0, dword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x4)); /* 0x1721506A: movd mm1, dword ptr [edx + 4] */
    _mm[6] = (_mm[6] ^ _mm[6]); /* 0x1721506E: pxor mm6, mm6 */
    _mm[7] = MEM64(0x1723B000); /* 0x17215071: movq mm7, qword ptr [0x1723b000] */
    _mm[0] = mmx_punpcklwd(_mm[0], _mm[6]); /* 0x17215078: punpcklwd mm0, mm6 */
    _mm[1] = mmx_punpcklwd(_mm[1], _mm[6]); /* 0x1721507B: punpcklwd mm1, mm6 */
    _mm[2] = _mm[0]; /* 0x1721507E: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x17215081: movq mm3, mm0 */
    _mm[4] = _mm[1]; /* 0x17215084: movq mm4, mm1 */
    _mm[5] = _mm[1]; /* 0x17215087: movq mm5, mm1 */
    _mm[0] = (_mm[0] & _mm[7]); /* 0x1721508A: pand mm0, mm7 */
    _mm[1] = (_mm[1] & _mm[7]); /* 0x1721508D: pand mm1, mm7 */
    _mm[7] = MEM64(0x1723B010); /* 0x17215090: movq mm7, qword ptr [0x1723b010] */
    _mm[0] = mmx_pcmpeqd(_mm[0], _mm[6]); /* 0x17215097: pcmpeqd mm0, mm6 */
    _mm[1] = mmx_pcmpeqd(_mm[1], _mm[6]); /* 0x1721509A: pcmpeqd mm1, mm6 */
    _mm[6] = MEM64(0x1723B020); /* 0x1721509D: movq mm6, qword ptr [0x1723b020] */
    _mm[2] = (_mm[2] & _mm[6]); /* 0x172150A4: pand mm2, mm6 */
    _mm[4] = (_mm[4] & _mm[6]); /* 0x172150A7: pand mm4, mm6 */
    _mm[3] = (_mm[3] ^ _mm[2]); /* 0x172150AA: pxor mm3, mm2 */
    _mm[5] = (_mm[5] ^ _mm[4]); /* 0x172150AD: pxor mm5, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[7]); /* 0x172150B0: paddd mm3, mm7 */
    _mm[5] = mmx_paddd(_mm[5], _mm[7]); /* 0x172150B3: paddd mm5, mm7 */
    _mm[6] = _mm[0]; /* 0x172150B6: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x172150B9: movq mm7, mm1 */
    _mm[0] = (_mm[0] & MEM64(0x1723B030)); /* 0x172150BC: pand mm0, qword ptr [0x1723b030] */
    _mm[1] = (_mm[1] & MEM64(0x1723B030)); /* 0x172150C3: pand mm1, qword ptr [0x1723b030] */
    _mm[3] = mmx_paddd(_mm[3], _mm[0]); /* 0x172150CA: paddd mm3, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[1]); /* 0x172150CD: paddd mm5, mm1 */
    _mm[6] = (_mm[6] & MEM64(0x1723B040)); /* 0x172150D0: pand mm6, qword ptr [0x1723b040] */
    _mm[7] = (_mm[7] & MEM64(0x1723B040)); /* 0x172150D7: pand mm7, qword ptr [0x1723b040] */
    _mm[2] = mmx_pslld(_mm[2], 16); /* 0x172150DE: pslld mm2, 0x10 */
    _mm[4] = mmx_pslld(_mm[4], 16); /* 0x172150E2: pslld mm4, 0x10 */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x172150E6: pslld mm3, 0xd */
    _mm[5] = mmx_pslld(_mm[5], 13); /* 0x172150EA: pslld mm5, 0xd */
    void_lift_trap(0x172150EEu, "pfsub mm3, mm6");
    void_lift_trap(0x172150F2u, "pfsub mm5, mm7");
    _mm[3] = (_mm[3] | _mm[2]); /* 0x172150F6: por mm3, mm2 */
    _mm[5] = (_mm[5] | _mm[4]); /* 0x172150F9: por mm5, mm4 */
    MEM64(eax) = _mm[3]; /* 0x172150FC: movq qword ptr [eax], mm3 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x172150FF: movq qword ptr [eax + 8], mm5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x17215103: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = eax + 0x10; /* 0x17215106: lea eax, [eax + 0x10] */
    edx = edx + 0x8; /* 0x17215109: lea edx, [edx + 8] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_17215067; /* 0x1721510C: jg 0x17215067 */
L_17215112:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17215125; /* 0x17215112: je 0x17215125 */
L_17215114:
    edx = esp; /* 0x17215114: lea edx, [esp] */
    eax = MEM32(esp + 0x8); /* 0x17215117: mov eax, dword ptr [esp + 8] */
    ecx = 4; /* 0x1721511B: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_17215067; /* 0x17215120: jmp 0x17215067 */
L_17215125:
    esp = ebp; /* 0x17215125: mov esp, ebp */
    eax = MEM32(ebp + 0x20); /* 0x17215127: mov eax, dword ptr [ebp + 0x20] */
    esi = MEM32(esp + 0x10); /* 0x1721512A: mov esi, dword ptr [esp + 0x10] */
    edi = MEM32(esp + 0x14); /* 0x1721512E: mov edi, dword ptr [esp + 0x14] */
    ebp = MEM32(esp + 0xC); /* 0x17215132: mov ebp, dword ptr [esp + 0xc] */
    ebx = MEM32(esp + 0x18); /* 0x17215136: mov ebx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1721513A: add esp, 0x1c */
    _flag_k = FK_ADD;
    void_lift_trap(0x1721513Du, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721513F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17215160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215160u);

L_17215160:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x17215160: sub esp, 0x2c */
    _flag_k = FK_CMP;
    MEM32(esp + 0x1C) = ebp; /* 0x17215163: mov dword ptr [esp + 0x1c], ebp */
    MEM32(esp + 0x20) = esi; /* 0x17215167: mov dword ptr [esp + 0x20], esi */
    MEM32(esp + 0x24) = edi; /* 0x1721516B: mov dword ptr [esp + 0x24], edi */
    MEM32(esp + 0x28) = ebx; /* 0x1721516F: mov dword ptr [esp + 0x28], ebx */
    ebp = esp; /* 0x17215173: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x17215175: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x38); /* 0x17215178: mov ecx, dword ptr [ebp + 0x38] */
    eax = MEM32(ebp + 0x30); /* 0x1721517B: mov eax, dword ptr [ebp + 0x30] */
    edx = MEM32(ebp + 0x34); /* 0x1721517E: mov edx, dword ptr [ebp + 0x34] */
    /* cmp ecx, 4 */ /* 0x17215181: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_172151A7; /* 0x17215184: jge 0x172151a7 */
L_17215186:
    /* cmp ecx, 0 */ /* 0x17215186: cmp ecx, 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_172152CF; /* 0x17215189: je 0x172152cf */
L_1721518F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1721518F: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(esp) = eax; /* 0x17215192: mov dword ptr [esp], eax */
    MEM32(esp + 0x4) = edx; /* 0x17215195: mov dword ptr [esp + 4], edx */
    MEM32(esp + 0x8) = ecx; /* 0x17215199: mov dword ptr [esp + 8], ecx */
    RECOMP_CALL(sub_17040697); /* 0x1721519D: call 0x17040697 */
    RECOMP_FLAGS_IN();
    goto L_172152CF; /* 0x172151A2: jmp 0x172152cf */
L_172151A7:
    ebx = ecx; /* 0x172151A7: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x172151A9: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172151CA; /* 0x172151AC: je 0x172151ca */
L_172151AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x172151AE: sub ecx, 4 */
    _flag_k = FK_CMP;
    _mm[0] = MEM64(edx + ecx * 4); /* 0x172151B1: movq mm0, qword ptr [edx + ecx*4] */
    _mm[1] = MEM64(edx + ecx * 4 + 0x8); /* 0x172151B5: movq mm1, qword ptr [edx + ecx*4 + 8] */
    ebx = eax + ecx * 2; /* 0x172151BA: lea ebx, [eax + ecx*2] */
    MEM64(esp) = _mm[0]; /* 0x172151BD: movq qword ptr [esp], mm0 */
    MEM64(esp + 0x8) = _mm[1]; /* 0x172151C1: movq qword ptr [esp + 8], mm1 */
    MEM32(esp + 0x18) = ebx; /* 0x172151C6: mov dword ptr [esp + 0x18], ebx */
L_172151CA:
    _mm[0] = MEM64(edx); /* 0x172151CA: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x172151CD: movq mm1, qword ptr [edx + 8] */
    _mm[6] = MEM64(0x1723B070); /* 0x172151D1: movq mm6, qword ptr [0x1723b070] */
    _mm[7] = _mm[6]; /* 0x172151D8: movq mm7, mm6 */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x172151DB: pand mm6, mm0 */
    _mm[7] = (_mm[7] & _mm[1]); /* 0x172151DE: pand mm7, mm1 */
    _mm[0] = (_mm[0] ^ _mm[6]); /* 0x172151E1: pxor mm0, mm6 */
    _mm[6] = mmx_psrld(_mm[6], 18); /* 0x172151E4: psrld mm6, 0x12 */
    _mm[1] = (_mm[1] ^ _mm[7]); /* 0x172151E8: pxor mm1, mm7 */
    _mm[7] = mmx_psrld(_mm[7], 18); /* 0x172151EB: psrld mm7, 0x12 */
    _mm[6] = mmx_packssdw(_mm[6], _mm[7]); /* 0x172151EF: packssdw mm6, mm7 */
    _mm[6] = mmx_pslld(_mm[6], 2); /* 0x172151F2: pslld mm6, 2 */
    MEM64(esp + 0x10) = _mm[6]; /* 0x172151F6: movq qword ptr [esp + 0x10], mm6 */
    _mm[6] = _mm[0]; /* 0x172151FB: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x172151FE: movq mm7, mm1 */
    _mm[3] = MEM64(0x1723B060); /* 0x17215201: movq mm3, qword ptr [0x1723b060] */
    _mm[4] = _mm[3]; /* 0x17215208: movq mm4, mm3 */
    _mm[5] = _mm[3]; /* 0x1721520B: movq mm5, mm3 */
    void_lift_trap(0x1721520Eu, "pfcmpge mm3, mm0");
    _mm[2] = _mm[3]; /* 0x17215212: movq mm2, mm3 */
    _mm[3] = (_mm[3] & _mm[4]); /* 0x17215215: pand mm3, mm4 */
    void_lift_trap(0x17215218u, "pfadd mm0, mm3");
    _mm[2] = (_mm[2] & MEM64(0x1723B0D0)); /* 0x1721521C: pand mm2, qword ptr [0x1723b0d0] */
    _mm[0] = mmx_psubd(_mm[0], _mm[2]); /* 0x17215223: psubd mm0, mm2 */
    void_lift_trap(0x17215226u, "pfcmpge mm5, mm1");
    _mm[3] = _mm[5]; /* 0x1721522A: movq mm3, mm5 */
    _mm[5] = (_mm[5] & _mm[4]); /* 0x1721522D: pand mm5, mm4 */
    void_lift_trap(0x17215230u, "pfadd mm1, mm5");
    _mm[3] = (_mm[3] & MEM64(0x1723B0D0)); /* 0x17215234: pand mm3, qword ptr [0x1723b0d0] */
    _mm[1] = mmx_psubd(_mm[1], _mm[3]); /* 0x1721523B: psubd mm1, mm3 */
    _mm[2] = _mm[0]; /* 0x1721523E: movq mm2, mm0 */
    _mm[3] = _mm[1]; /* 0x17215241: movq mm3, mm1 */
    _mm[0] = mmx_psrld(_mm[0], 13); /* 0x17215244: psrld mm0, 0xd */
    _mm[1] = mmx_psrld(_mm[1], 13); /* 0x17215248: psrld mm1, 0xd */
    _mm[4] = MEM64(0x1723B090); /* 0x1721524C: movq mm4, qword ptr [0x1723b090] */
    _mm[0] = (_mm[0] & _mm[4]); /* 0x17215253: pand mm0, mm4 */
    _mm[1] = (_mm[1] & _mm[4]); /* 0x17215256: pand mm1, mm4 */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x17215259: paddd mm0, mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x1721525C: paddd mm1, mm3 */
    _mm[4] = MEM64(0x1723B050); /* 0x1721525F: movq mm4, qword ptr [0x1723b050] */
    _mm[5] = _mm[4]; /* 0x17215266: movq mm5, mm4 */
    void_lift_trap(0x17215269u, "pfcmpgt mm4, mm6");
    void_lift_trap(0x1721526Du, "pfcmpgt mm5, mm7");
    _mm[6] = MEM64(esp + 0x10); /* 0x17215271: movq mm6, qword ptr [esp + 0x10] */
    _mm[2] = MEM64(0x1723B0A0); /* 0x17215276: movq mm2, qword ptr [0x1723b0a0] */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x1721527D: paddd mm0, mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[2]); /* 0x17215280: paddd mm1, mm2 */
    _mm[3] = MEM64(0x1723B0E0); /* 0x17215283: movq mm3, qword ptr [0x1723b0e0] */
    _mm[0] = mmx_psrld(_mm[0], 13); /* 0x1721528A: psrld mm0, 0xd */
    _mm[1] = mmx_psrld(_mm[1], 13); /* 0x1721528E: psrld mm1, 0xd */
    _mm[0] = (_mm[0] & _mm[4]); /* 0x17215292: pand mm0, mm4 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x17215295: pand mm1, mm5 */
    _mm[4] = (~_mm[4] & _mm[3]); /* 0x17215298: pandn mm4, mm3 */
    _mm[5] = (~_mm[5] & _mm[3]); /* 0x1721529B: pandn mm5, mm3 */
    _mm[0] = (_mm[0] | _mm[4]); /* 0x1721529E: por mm0, mm4 */
    _mm[1] = (_mm[1] | _mm[5]); /* 0x172152A1: por mm1, mm5 */
    _mm[0] = mmx_packssdw(_mm[0], _mm[1]); /* 0x172152A4: packssdw mm0, mm1 */
    _mm[0] = (_mm[0] | _mm[6]); /* 0x172152A7: por mm0, mm6 */
    MEM64(eax) = _mm[0]; /* 0x172152AA: movq qword ptr [eax], mm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x172152AD: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = eax + 0x8; /* 0x172152B0: lea eax, [eax + 8] */
    edx = edx + 0x10; /* 0x172152B3: lea edx, [edx + 0x10] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_G(_flag_a, _flag_b)) goto L_172151CA; /* 0x172152B6: jg 0x172151ca */
L_172152BC:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_172152CF; /* 0x172152BC: je 0x172152cf */
L_172152BE:
    edx = esp; /* 0x172152BE: lea edx, [esp] */
    eax = MEM32(esp + 0x18); /* 0x172152C1: mov eax, dword ptr [esp + 0x18] */
    ecx = 4; /* 0x172152C5: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_172151CA; /* 0x172152CA: jmp 0x172151ca */
L_172152CF:
    esp = ebp; /* 0x172152CF: mov esp, ebp */
    eax = MEM32(ebp + 0x30); /* 0x172152D1: mov eax, dword ptr [ebp + 0x30] */
    esi = MEM32(esp + 0x20); /* 0x172152D4: mov esi, dword ptr [esp + 0x20] */
    edi = MEM32(esp + 0x24); /* 0x172152D8: mov edi, dword ptr [esp + 0x24] */
    ebp = MEM32(esp + 0x1C); /* 0x172152DC: mov ebp, dword ptr [esp + 0x1c] */
    ebx = MEM32(esp + 0x28); /* 0x172152E0: mov ebx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x172152E4: add esp, 0x2c */
    _flag_k = FK_ADD;
    void_lift_trap(0x172152E7u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172152E9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172152F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172152F1u);

L_172152F1:
    edi = edi; /* 0x172152F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172152F3: push ebp */
    ebp = esp; /* 0x172152F4: mov ebp, esp */
    void_lift_trap(0x172152F6u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x172152F8: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x172152FB: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x172152FE: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x17215301: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17215304: movq mm1, mm0 */
    void_lift_trap(0x17215307u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1721530A: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x1721530D: movq mm3, mm0 */
    void_lift_trap(0x17215310u, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17215314: movq mm4, mm1 */
    void_lift_trap(0x17215317u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x1721531Cu, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x17215321u, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x17215326u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x1721532Bu, "pfadd mm0, mm1");
    void_lift_trap(0x1721532Fu, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x17215334u, "pfadd mm3, mm4");
    MEM64(ecx) = _mm[0]; /* 0x17215338: movq qword ptr [ecx], mm0 */
    MEM64(ecx + 0x8) = _mm[3]; /* 0x1721533B: movq qword ptr [ecx + 8], mm3 */
    void_lift_trap(0x1721533Fu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17215341: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17215344: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17215345: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721534D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721534Du);

L_1721534D:
    edi = edi; /* 0x1721534D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721534F: push ebp */
    ebp = esp; /* 0x17215350: mov ebp, esp */
    void_lift_trap(0x17215352u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17215354: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17215357: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1721535A: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x1721535D: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x17215360: movq mm1, mm0 */
    void_lift_trap(0x17215363u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17215366: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x17215369: movq mm3, mm0 */
    void_lift_trap(0x1721536Cu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x17215370: movq mm4, mm1 */
    void_lift_trap(0x17215373u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x17215378u, "pfadd mm0, mm1");
    MEM64(ecx) = _mm[0]; /* 0x1721537C: movq qword ptr [ecx], mm0 */
    void_lift_trap(0x1721537Fu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17215381: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17215384: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17215385: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721538D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721538Du);

L_1721538D:
    edi = edi; /* 0x1721538D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721538F: push ebp */
    ebp = esp; /* 0x17215390: mov ebp, esp */
    void_lift_trap(0x17215392u, "femms ");
    eax = MEM32(ebp + 0xC); /* 0x17215394: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17215397: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1721539A: mov ecx, dword ptr [ebp + 8] */
    _mm[0] = MEM64(eax); /* 0x1721539D: movq mm0, qword ptr [eax] */
    _mm[1] = _mm[0]; /* 0x172153A0: movq mm1, mm0 */
    void_lift_trap(0x172153A3u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x172153A6: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x172153A9: movq mm3, mm0 */
    void_lift_trap(0x172153ACu, "pfmul mm0, qword ptr [edx]");
    _mm[4] = _mm[1]; /* 0x172153B0: movq mm4, mm1 */
    void_lift_trap(0x172153B3u, "pfmul mm1, qword ptr [edx + 0x10]");
    void_lift_trap(0x172153B8u, "pfadd mm0, qword ptr [edx + 0x30]");
    void_lift_trap(0x172153BDu, "pfmul mm3, qword ptr [edx + 8]");
    void_lift_trap(0x172153C2u, "pfmul mm4, qword ptr [edx + 0x18]");
    void_lift_trap(0x172153C7u, "pfadd mm0, mm1");
    void_lift_trap(0x172153CBu, "pfadd mm3, qword ptr [edx + 0x38]");
    void_lift_trap(0x172153D0u, "pfadd mm3, mm4");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172153D4: punpckhdq mm3, mm3 */
    void_lift_trap(0x172153D7u, "pfrcp mm4, mm3");
    void_lift_trap(0x172153DBu, "pfrcpit1 mm3, mm4");
    void_lift_trap(0x172153DFu, "pfrcpit2 mm3, mm4");
    void_lift_trap(0x172153E3u, "pfmul mm0, mm3");
    MEM64(ecx) = _mm[0]; /* 0x172153E7: movq qword ptr [ecx], mm0 */
    void_lift_trap(0x172153EAu, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x172153EC: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172153EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172153F0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172153F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172153F8u);

L_172153F8:
    void_lift_trap(0x172153F8u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x172153FA: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x172153FF: movq mm1, mm0 */
    void_lift_trap(0x17215402u, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x17215406: movq mm2, mm1 */
    void_lift_trap(0x17215409u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x1702A600); /* 0x1721540D: movq mm3, qword ptr [0x1702a600] */
    _mm[4] = _mm[1]; /* 0x17215414: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x17215417: movq mm7, mm2 */
    void_lift_trap(0x1721541Au, "pfsub mm7, mm1");
    void_lift_trap(0x1721541Eu, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x17215422: movq mm6, mm2 */
    void_lift_trap(0x17215425u, "pfmul mm1, qword ptr [0x1702a608]");
    void_lift_trap(0x1721542Du, "pfmul mm2, mm3");
    void_lift_trap(0x17215431u, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x17215435: movq mm5, mm1 */
    void_lift_trap(0x17215438u, "pfsub mm1, mm2");
    void_lift_trap(0x1721543Cu, "pfadd mm6, mm0");
    void_lift_trap(0x17215440u, "pfsub mm2, mm5");
    void_lift_trap(0x17215444u, "pfadd mm2, qword ptr [0x1702a5f0]");
    eax = MEM32(esp + 0x4); /* 0x1721544C: mov eax, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x17215450: mov ecx, dword ptr [esp + 8] */
    void_lift_trap(0x17215454u, "unsupported PUNPCKLDQ operands");
    edx = MEM32(esp + 0xC); /* 0x17215457: mov edx, dword ptr [esp + 0xc] */
    void_lift_trap(0x1721545Bu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721545Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215461u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215464u, "pfmul mm2, qword ptr [ecx]");
    ecx = MEM32(esp + 0x10); /* 0x17215468: mov ecx, dword ptr [esp + 0x10] */
    void_lift_trap(0x1721546Cu, "pfmul mm6, qword ptr [edx]");
    edx = MEM32(esp + 0x14); /* 0x17215470: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x17215474u, "pfadd mm2, mm6");
    void_lift_trap(0x17215478u, "pfmul mm1, qword ptr [ecx]");
    void_lift_trap(0x1721547Cu, "pfmul mm7, qword ptr [edx]");
    void_lift_trap(0x17215480u, "pfadd mm1, mm7");
    void_lift_trap(0x17215484u, "pfadd mm2, mm1");
    MEM64(eax) = _mm[2]; /* 0x17215488: movq qword ptr [eax], mm2 */
    void_lift_trap(0x1721548Bu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721548D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17215495(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215495u);

L_17215495:
    edx = MEM32(esp + 0xC); /* 0x17215495: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x17215499: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x1721549D: mov eax, dword ptr [esp + 8] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x172154A1: movd mm6, dword ptr [esp + 0x14] */
    _mm[0] = MEM64(edx); /* 0x172154A6: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(ecx); /* 0x172154A9: movq mm2, qword ptr [ecx] */
    _mm[4] = MEM64(eax); /* 0x172154AC: movq mm4, qword ptr [eax] */
    void_lift_trap(0x172154AFu, "unsupported PUNPCKLDQ operands");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x172154B2: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x172154B7u, "pfsub mm0, mm4");
    eax = MEM32(esp + 0x4); /* 0x172154BB: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x172154BFu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172154C2u, "pfmul mm0, mm6");
    void_lift_trap(0x172154C6u, "pfsub mm2, mm4");
    void_lift_trap(0x172154CAu, "pfadd mm4, mm0");
    void_lift_trap(0x172154CEu, "pfmul mm2, mm7");
    void_lift_trap(0x172154D2u, "pfadd mm4, mm2");
    MEM64(eax) = _mm[4]; /* 0x172154D6: movq qword ptr [eax], mm4 */
    void_lift_trap(0x172154D9u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172154DB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172154E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172154E3u);

L_172154E3:
    edx = MEM32(esp + 0x8); /* 0x172154E3: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x172154E7: movq mm0, qword ptr [edx] */
    _mm[1] = _mm[0]; /* 0x172154EA: movq mm1, mm0 */
    void_lift_trap(0x172154EDu, "pfmul mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x172154F1: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x172154F5u, "pfacc mm0, mm0");
    _mm[2] = _mm[0]; /* 0x172154F9: movq mm2, mm0 */
    void_lift_trap(0x172154FCu, "pfrsqrt mm4, mm0");
    void_lift_trap(0x17215500u, "pfcmpgt mm2, qword ptr [0x1702a5d8]");
    _mm[5] = _mm[4]; /* 0x17215508: movq mm5, mm4 */
    void_lift_trap(0x1721550Bu, "pfmul mm4, mm4");
    void_lift_trap(0x1721550Fu, "pfrsqit1 mm4, mm0");
    _mm[1] = (_mm[1] & _mm[2]); /* 0x17215513: pand mm1, mm2 */
    void_lift_trap(0x17215516u, "pfrcpit2 mm4, mm5");
    void_lift_trap(0x1721551Au, "pfmul mm1, mm4");
    MEM64(eax) = _mm[1]; /* 0x1721551E: movq qword ptr [eax], mm1 */
    void_lift_trap(0x17215521u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17215523: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1721552B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721552Bu);

L_1721552B:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x1721552B: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x17215530: movq mm1, mm0 */
    void_lift_trap(0x17215533u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215536u, "pfmul mm0, mm0");
    void_lift_trap(0x1721553Au, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215541u, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x17215545: movq mm3, mm1 */
    void_lift_trap(0x17215548u, "pfmul mm1, mm1");
    edx = MEM32(esp + 0x8); /* 0x1721554C: mov edx, dword ptr [esp + 8] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17215550: pxor mm7, mm7 */
    void_lift_trap(0x17215553u, "pfsub mm0, mm1");
    void_lift_trap(0x17215557u, "unsupported PUNPCKLDQ operands");
    _mm[4] = _mm[0]; /* 0x1721555A: movq mm4, mm0 */
    void_lift_trap(0x1721555Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215560u, "pfmul mm0, qword ptr [0x1702a578]");
    _mm[5] = _mm[0]; /* 0x17215568: movq mm5, mm0 */
    void_lift_trap(0x1721556Bu, "unsupported PUNPCKLDQ operands");
    _mm[3] = (_mm[3] ^ MEM64(0x1702A588)); /* 0x1721556E: pxor mm3, qword ptr [0x1702a588] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x17215575: punpckhdq mm5, mm7 */
    void_lift_trap(0x17215578u, "pfadd mm1, mm3");
    ecx = MEM32(esp + 0xC); /* 0x1721557C: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x17215580u, "pfsub mm1, mm0");
    void_lift_trap(0x17215584u, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x17215588: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x1721558B: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x1721558E: movq mm3, mm0 */
    void_lift_trap(0x17215591u, "unsupported PUNPCKLDQ operands");
    eax = MEM32(esp + 0x10); /* 0x17215594: mov eax, dword ptr [esp + 0x10] */
    void_lift_trap(0x17215598u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721559Bu, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x1721559F: punpckhdq mm3, mm3 */
    void_lift_trap(0x172155A2u, "pfmul mm0, qword ptr [ecx]");
    void_lift_trap(0x172155A6u, "pfmul mm2, qword ptr [eax]");
    void_lift_trap(0x172155AAu, "pfadd mm0, mm1");
    edx = MEM32(esp + 0x14); /* 0x172155AE: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x172155B2u, "pfadd mm4, mm5");
    eax = MEM32(esp + 0x4); /* 0x172155B6: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x172155BAu, "pfadd mm0, mm2");
    void_lift_trap(0x172155BEu, "pfmul mm3, qword ptr [edx]");
    void_lift_trap(0x172155C2u, "pfadd mm0, mm3");
    void_lift_trap(0x172155C6u, "pfmul mm0, qword ptr [0x1702a5d0]");
    MEM64(eax) = _mm[0]; /* 0x172155CE: movq qword ptr [eax], mm0 */
    void_lift_trap(0x172155D1u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172155D3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172155DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172155DBu);

L_172155DB:
    edi = edi; /* 0x172155DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172155DD: push ebp */
    ebp = esp; /* 0x172155DE: mov ebp, esp */
    void_lift_trap(0x172155E0u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x172155E2: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x172155E5: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x172155E8: mov ecx, dword ptr [ebp + 0xc] */
    _mm[0] = MEM64(ecx); /* 0x172155EB: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x172155EE: movq mm1, mm0 */
    void_lift_trap(0x172155F1u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x172155F4: punpckhdq mm1, mm1 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x172155F7: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x172155FB: movq mm3, mm2 */
    void_lift_trap(0x172155FEu, "unsupported PUNPCKLDQ operands");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17215601: punpckhdq mm3, mm3 */
    _mm[4] = _mm[0]; /* 0x17215604: movq mm4, mm0 */
    void_lift_trap(0x17215607u, "pfmul mm0, qword ptr [edx]");
    _mm[5] = _mm[1]; /* 0x1721560B: movq mm5, mm1 */
    void_lift_trap(0x1721560Eu, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[6] = _mm[2]; /* 0x17215613: movq mm6, mm2 */
    void_lift_trap(0x17215616u, "pfmul mm2, qword ptr [edx + 0x20]");
    _mm[7] = _mm[3]; /* 0x1721561B: movq mm7, mm3 */
    void_lift_trap(0x1721561Eu, "pfmul mm3, qword ptr [edx + 0x30]");
    void_lift_trap(0x17215623u, "pfadd mm0, mm1");
    void_lift_trap(0x17215627u, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x1721562Cu, "pfadd mm2, mm3");
    void_lift_trap(0x17215630u, "pfmul mm5, qword ptr [edx + 0x18]");
    void_lift_trap(0x17215635u, "pfmul mm6, qword ptr [edx + 0x28]");
    void_lift_trap(0x1721563Au, "pfmul mm7, qword ptr [edx + 0x38]");
    void_lift_trap(0x1721563Fu, "pfadd mm0, mm2");
    void_lift_trap(0x17215643u, "pfadd mm4, mm5");
    void_lift_trap(0x17215647u, "pfadd mm6, mm7");
    void_lift_trap(0x1721564Bu, "pfadd mm4, mm6");
    MEM64(eax) = _mm[0]; /* 0x1721564F: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x17215652: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x17215656u, "femms ");
    eax = MEM32(ebp + 0x8); /* 0x17215658: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1721565B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721565C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17215664(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215664u);

L_17215664:
    void_lift_trap(0x17215664u, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x17215666: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x1721566A: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x1721566D: movq mm1, mm0 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x17215670: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x17215674: movq mm3, mm2 */
    void_lift_trap(0x17215677u, "pfmul mm0, mm0");
    void_lift_trap(0x1721567Bu, "pfmul mm2, mm2");
    void_lift_trap(0x1721567Fu, "pfadd mm0, mm2");
    void_lift_trap(0x17215683u, "pfacc mm0, mm0");
    eax = MEM32(esp + 0x4); /* 0x17215687: mov eax, dword ptr [esp + 4] */
    _mm[5] = _mm[0]; /* 0x1721568B: movq mm5, mm0 */
    void_lift_trap(0x1721568Eu, "pfrsqrt mm4, mm0");
    void_lift_trap(0x17215692u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[2] = _mm[4]; /* 0x1721569A: movq mm2, mm4 */
    void_lift_trap(0x1721569Du, "pfmul mm2, mm4");
    void_lift_trap(0x172156A1u, "pfrsqit1 mm0, mm2");
    _mm[1] = (_mm[1] & _mm[5]); /* 0x172156A5: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x172156A8: pand mm3, mm5 */
    void_lift_trap(0x172156ABu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x172156AFu, "pfmul mm1, mm0");
    void_lift_trap(0x172156B3u, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x172156B7: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x172156BA: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x172156BEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172156C0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172156C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172156C8u);

L_172156C8:
    edi = edi; /* 0x172156C8: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172156CA: push ebx */
    void_lift_trap(0x172156CBu, "femms ");
    ebx = MEM32(esp + 0xC); /* 0x172156CD: mov ebx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x172156D1: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x172156D5: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x8); /* 0x172156D9: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(ecx); /* 0x172156DD: movq mm0, qword ptr [ecx] */
    _mm[1] = MEM64(edx); /* 0x172156E0: movq mm1, qword ptr [edx] */
    _mm[2] = MEM64(ecx + 0x8); /* 0x172156E3: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = MEM64(edx + 0x8); /* 0x172156E7: movq mm3, qword ptr [edx + 8] */
    _mm[4] = _mm[3]; /* 0x172156EB: movq mm4, mm3 */
    _mm[6] = _mm[2]; /* 0x172156EE: movq mm6, mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[4]); /* 0x172156F1: punpckhdq mm4, mm4 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172156F4: punpckhdq mm6, mm6 */
    _mm[5] = _mm[2]; /* 0x172156F7: movq mm5, mm2 */
    _mm[7] = _mm[3]; /* 0x172156FA: movq mm7, mm3 */
    void_lift_trap(0x172156FDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215700u, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[0]); /* 0x17215703: punpckhdq mm5, mm0 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[1]); /* 0x17215706: punpckhdq mm7, mm1 */
    void_lift_trap(0x17215709u, "pfmul mm4, mm5");
    void_lift_trap(0x1721570Du, "pfmul mm6, mm7");
    void_lift_trap(0x17215711u, "pfsub mm4, mm6");
    _mm[5] = _mm[0]; /* 0x17215715: movq mm5, mm0 */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[2]); /* 0x17215718: punpckhdq mm5, mm2 */
    _mm[6] = _mm[3]; /* 0x1721571B: movq mm6, mm3 */
    void_lift_trap(0x1721571Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215721u, "pfmul mm5, mm6");
    _mm[6] = _mm[1]; /* 0x17215725: movq mm6, mm1 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[3]); /* 0x17215728: punpckhdq mm6, mm3 */
    _mm[7] = _mm[2]; /* 0x1721572B: movq mm7, mm2 */
    void_lift_trap(0x1721572Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215731u, "pfmul mm6, mm7");
    void_lift_trap(0x17215735u, "pfsub mm5, mm6");
    _mm[6] = _mm[1]; /* 0x17215739: movq mm6, mm1 */
    void_lift_trap(0x1721573Cu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721573Fu, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[0]); /* 0x17215742: punpckhdq mm2, mm0 */
    void_lift_trap(0x17215745u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215748u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721574Bu, "pfmul mm6, mm2");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1721574F: punpckhdq mm3, mm1 */
    void_lift_trap(0x17215752u, "pfmul mm0, mm3");
    void_lift_trap(0x17215756u, "pfsub mm6, mm0");
    _mm[0] = MEM64(ebx); /* 0x1721575A: movq mm0, qword ptr [ebx] */
    _mm[1] = MEM64(ebx + 0x8); /* 0x1721575D: movq mm1, qword ptr [ebx + 8] */
    _mm[7] = MEM64(0x1702A5E8); /* 0x17215761: movq mm7, qword ptr [0x1702a5e8] */
    _mm[2] = _mm[4]; /* 0x17215768: movq mm2, mm4 */
    _mm[3] = _mm[0]; /* 0x1721576B: movq mm3, mm0 */
    void_lift_trap(0x1721576Eu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215771u, "unsupported PUNPCKLDQ operands");
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x17215774: pxor mm2, mm7 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[3]); /* 0x17215777: punpckhdq mm0, mm3 */
    void_lift_trap(0x1721577Au, "pfmul mm2, mm0");
    _mm[0] = _mm[7]; /* 0x1721577E: movq mm0, mm7 */
    _mm[3] = _mm[4]; /* 0x17215781: movq mm3, mm4 */
    _mm[7] = _mm[5]; /* 0x17215784: movq mm7, mm5 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17215787: punpckhdq mm3, mm3 */
    _mm[7] = mmx_punpckhdq(_mm[7], _mm[7]); /* 0x1721578A: punpckhdq mm7, mm7 */
    void_lift_trap(0x1721578Du, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215790u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215793u, "pfmul mm3, mm1");
    void_lift_trap(0x17215797u, "pfmul mm7, mm1");
    _mm[3] = (_mm[3] ^ _mm[0]); /* 0x1721579B: pxor mm3, mm0 */
    _mm[7] = (_mm[7] ^ _mm[0]); /* 0x1721579E: pxor mm7, mm0 */
    void_lift_trap(0x172157A1u, "pfacc mm3, mm7");
    _mm[7] = _mm[0]; /* 0x172157A5: movq mm7, mm0 */
    _mm[0] = MEM64(ebx); /* 0x172157A8: movq mm0, qword ptr [ebx] */
    void_lift_trap(0x172157ABu, "pfsub mm2, mm3");
    MEM64(eax) = _mm[2]; /* 0x172157AF: movq qword ptr [eax], mm2 */
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x172157B2: punpckhdq mm4, mm5 */
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x172157B5: pxor mm4, mm7 */
    _mm[2] = _mm[5]; /* 0x172157B8: movq mm2, mm5 */
    _mm[7] = mmx_psrlq(_mm[7], 32); /* 0x172157BB: psrlq mm7, 0x20 */
    void_lift_trap(0x172157BFu, "unsupported PUNPCKLDQ operands");
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x172157C2: pxor mm2, mm7 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[6]); /* 0x172157C5: punpckhdq mm6, mm6 */
    _mm[3] = _mm[1]; /* 0x172157C8: movq mm3, mm1 */
    void_lift_trap(0x172157CBu, "unsupported PUNPCKLDQ operands");
    _mm[6] = (_mm[6] ^ _mm[7]); /* 0x172157CE: pxor mm6, mm7 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[3]); /* 0x172157D1: punpckhdq mm1, mm3 */
    _mm[7] = mmx_psllq(_mm[7], 32); /* 0x172157D4: psllq mm7, 0x20 */
    void_lift_trap(0x172157D8u, "pfmul mm4, mm0");
    void_lift_trap(0x172157DCu, "pfmul mm2, mm0");
    void_lift_trap(0x172157E0u, "pfmul mm1, mm6");
    _mm[4] = (_mm[4] ^ _mm[7]); /* 0x172157E4: pxor mm4, mm7 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x172157E7: pxor mm2, mm7 */
    void_lift_trap(0x172157EAu, "pfacc mm4, mm2");
    void_lift_trap(0x172157EEu, "pfadd mm1, mm4");
    MEM64(eax + 0x8) = _mm[1]; /* 0x172157F2: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x172157F6u, "femms ");
    ebx = POP32_VAL(esp); /* 0x172157F8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x172157F9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17215801(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215801u);

L_17215801:
    edx = MEM32(esp + 0xC); /* 0x17215801: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x17215805: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x8); /* 0x17215809: mov eax, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x1721580D: movq mm0, qword ptr [edx] */
    _mm[1] = MEM64(edx + 0x8); /* 0x17215810: movq mm1, qword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x17215814: movq mm2, qword ptr [ecx] */
    _mm[3] = MEM64(ecx + 0x8); /* 0x17215817: movq mm3, qword ptr [ecx + 8] */
    _mm[4] = MEM64(eax); /* 0x1721581B: movq mm4, qword ptr [eax] */
    _mm[5] = MEM64(eax + 0x8); /* 0x1721581E: movq mm5, qword ptr [eax + 8] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(esp + 0x14)); /* 0x17215822: movd mm6, dword ptr [esp + 0x14] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17215827: movd mm7, dword ptr [esp + 0x18] */
    void_lift_trap(0x1721582Cu, "pfsub mm0, mm4");
    void_lift_trap(0x17215830u, "pfsub mm1, mm5");
    eax = MEM32(esp + 0x4); /* 0x17215834: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x17215838u, "pfsub mm2, mm4");
    void_lift_trap(0x1721583Cu, "pfsub mm3, mm5");
    void_lift_trap(0x17215840u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215843u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215846u, "pfmul mm0, mm6");
    void_lift_trap(0x1721584Au, "pfmul mm1, mm6");
    void_lift_trap(0x1721584Eu, "pfmul mm2, mm7");
    void_lift_trap(0x17215852u, "pfadd mm0, mm4");
    void_lift_trap(0x17215856u, "pfmul mm3, mm7");
    void_lift_trap(0x1721585Au, "pfadd mm1, mm5");
    void_lift_trap(0x1721585Eu, "pfadd mm0, mm2");
    void_lift_trap(0x17215862u, "pfadd mm1, mm3");
    MEM64(eax) = _mm[0]; /* 0x17215866: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[1]; /* 0x17215869: movq qword ptr [eax + 8], mm1 */
    void_lift_trap(0x1721586Du, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721586F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17215877(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215877u);

L_17215877:
    void_lift_trap(0x17215877u, "femms ");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17215879: movd mm0, dword ptr [esp + 0x18] */
    _mm[1] = _mm[0]; /* 0x1721587E: movq mm1, mm0 */
    void_lift_trap(0x17215881u, "pfmul mm1, mm1");
    _mm[2] = _mm[1]; /* 0x17215885: movq mm2, mm1 */
    void_lift_trap(0x17215888u, "pfmul mm2, mm0");
    _mm[3] = MEM64(0x1702A600); /* 0x1721588C: movq mm3, qword ptr [0x1702a600] */
    _mm[4] = _mm[1]; /* 0x17215893: movq mm4, mm1 */
    _mm[7] = _mm[2]; /* 0x17215896: movq mm7, mm2 */
    void_lift_trap(0x17215899u, "pfsub mm7, mm1");
    void_lift_trap(0x1721589Du, "pfmul mm4, mm3");
    _mm[6] = _mm[2]; /* 0x172158A1: movq mm6, mm2 */
    void_lift_trap(0x172158A4u, "pfmul mm1, qword ptr [0x1702a608]");
    void_lift_trap(0x172158ACu, "pfmul mm2, mm3");
    void_lift_trap(0x172158B0u, "pfsub mm6, mm4");
    _mm[5] = _mm[1]; /* 0x172158B4: movq mm5, mm1 */
    void_lift_trap(0x172158B7u, "pfsub mm1, mm2");
    void_lift_trap(0x172158BBu, "pfadd mm6, mm0");
    void_lift_trap(0x172158BFu, "pfsub mm2, mm5");
    void_lift_trap(0x172158C3u, "pfadd mm2, qword ptr [0x1702a5f0]");
    eax = MEM32(esp + 0x14); /* 0x172158CB: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x172158CF: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x172158D3: mov edx, dword ptr [esp + 0xc] */
    void_lift_trap(0x172158D7u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172158DAu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172158DDu, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x172158E0u, "unsupported PUNPCKLDQ operands");
    _mm[5] = _mm[7]; /* 0x172158E3: movq mm5, mm7 */
    void_lift_trap(0x172158E6u, "pfmul mm7, qword ptr [eax]");
    _mm[0] = _mm[1]; /* 0x172158EA: movq mm0, mm1 */
    void_lift_trap(0x172158EDu, "pfmul mm1, qword ptr [ecx]");
    void_lift_trap(0x172158F1u, "pfmul mm5, qword ptr [eax + 8]");
    void_lift_trap(0x172158F6u, "pfmul mm0, qword ptr [ecx + 8]");
    ecx = MEM32(esp + 0x8); /* 0x172158FB: mov ecx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x4); /* 0x172158FF: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[6]; /* 0x17215903: movq mm4, mm6 */
    void_lift_trap(0x17215906u, "pfmul mm6, qword ptr [edx]");
    _mm[3] = _mm[2]; /* 0x1721590A: movq mm3, mm2 */
    void_lift_trap(0x1721590Du, "pfmul mm2, qword ptr [ecx]");
    void_lift_trap(0x17215911u, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x17215916u, "pfmul mm3, qword ptr [ecx + 8]");
    void_lift_trap(0x1721591Bu, "pfadd mm1, mm7");
    void_lift_trap(0x1721591Fu, "pfadd mm0, mm5");
    void_lift_trap(0x17215923u, "pfadd mm2, mm6");
    void_lift_trap(0x17215927u, "pfadd mm3, mm4");
    void_lift_trap(0x1721592Bu, "pfadd mm1, mm2");
    void_lift_trap(0x1721592Fu, "pfadd mm0, mm3");
    MEM64(eax) = _mm[1]; /* 0x17215933: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[0]; /* 0x17215936: movq qword ptr [eax + 8], mm0 */
    void_lift_trap(0x1721593Au, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721593C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17215944(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215944u);

L_17215944:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(esp + 0x18)); /* 0x17215944: movd mm0, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x8); /* 0x17215949: mov edx, dword ptr [esp + 8] */
    _mm[1] = _mm[0]; /* 0x1721594D: movq mm1, mm0 */
    void_lift_trap(0x17215950u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215953u, "pfmul mm0, mm0");
    void_lift_trap(0x17215957u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x1721595Eu, "pfmul mm0, mm1");
    _mm[3] = _mm[1]; /* 0x17215962: movq mm3, mm1 */
    void_lift_trap(0x17215965u, "pfmul mm1, mm1");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17215969: pxor mm7, mm7 */
    void_lift_trap(0x1721596Cu, "pfsub mm0, mm1");
    void_lift_trap(0x17215970u, "unsupported PUNPCKLDQ operands");
    _mm[4] = _mm[0]; /* 0x17215973: movq mm4, mm0 */
    void_lift_trap(0x17215976u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215979u, "pfmul mm0, qword ptr [0x1702a578]");
    _mm[5] = _mm[0]; /* 0x17215981: movq mm5, mm0 */
    void_lift_trap(0x17215984u, "unsupported PUNPCKLDQ operands");
    _mm[3] = (_mm[3] ^ MEM64(0x1702A588)); /* 0x17215987: pxor mm3, qword ptr [0x1702a588] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[7]); /* 0x1721598E: punpckhdq mm5, mm7 */
    void_lift_trap(0x17215991u, "pfadd mm1, mm3");
    void_lift_trap(0x17215995u, "pfsub mm1, mm0");
    ecx = MEM32(esp + 0xC); /* 0x17215999: mov ecx, dword ptr [esp + 0xc] */
    void_lift_trap(0x1721599Du, "pfsub mm0, mm5");
    _mm[2] = _mm[1]; /* 0x172159A1: movq mm2, mm1 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x172159A4: punpckhdq mm1, mm1 */
    _mm[3] = _mm[0]; /* 0x172159A7: movq mm3, mm0 */
    void_lift_trap(0x172159AAu, "unsupported PUNPCKLDQ operands");
    eax = MEM32(esp + 0x10); /* 0x172159AD: mov eax, dword ptr [esp + 0x10] */
    void_lift_trap(0x172159B1u, "unsupported PUNPCKLDQ operands");
    _mm[4] = _mm[1]; /* 0x172159B4: movq mm4, mm1 */
    void_lift_trap(0x172159B7u, "pfmul mm1, qword ptr [edx]");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x172159BB: punpckhdq mm3, mm3 */
    _mm[5] = _mm[0]; /* 0x172159BE: movq mm5, mm0 */
    void_lift_trap(0x172159C1u, "pfmul mm0, qword ptr [ecx]");
    _mm[6] = _mm[2]; /* 0x172159C5: movq mm6, mm2 */
    void_lift_trap(0x172159C8u, "pfmul mm2, qword ptr [eax]");
    _mm[7] = _mm[3]; /* 0x172159CC: movq mm7, mm3 */
    void_lift_trap(0x172159CFu, "pfmul mm4, qword ptr [edx + 8]");
    edx = MEM32(esp + 0x14); /* 0x172159D4: mov edx, dword ptr [esp + 0x14] */
    void_lift_trap(0x172159D8u, "pfmul mm5, qword ptr [ecx + 8]");
    void_lift_trap(0x172159DDu, "pfadd mm0, mm1");
    void_lift_trap(0x172159E1u, "pfmul mm6, qword ptr [eax + 8]");
    eax = MEM32(esp + 0x4); /* 0x172159E6: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x172159EAu, "pfadd mm4, mm5");
    void_lift_trap(0x172159EEu, "pfadd mm0, mm2");
    void_lift_trap(0x172159F2u, "pfmul mm3, qword ptr [edx]");
    _mm[1] = MEM64(0x1702A5D0); /* 0x172159F6: movq mm1, qword ptr [0x1702a5d0] */
    void_lift_trap(0x172159FDu, "pfadd mm0, mm3");
    void_lift_trap(0x17215A01u, "pfmul mm7, qword ptr [edx + 8]");
    void_lift_trap(0x17215A06u, "pfadd mm4, mm6");
    void_lift_trap(0x17215A0Au, "pfmul mm0, mm1");
    void_lift_trap(0x17215A0Eu, "pfadd mm4, mm7");
    MEM64(eax) = _mm[0]; /* 0x17215A12: movq qword ptr [eax], mm0 */
    void_lift_trap(0x17215A15u, "pfmul mm4, mm1");
    MEM64(eax + 0x8) = _mm[4]; /* 0x17215A19: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x17215A1Du, "femms ");
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17215A1F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17215A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215A27u);

L_17215A27:
    void_lift_trap(0x17215A27u, "femms ");
    eax = MEM32(esp + 0x4); /* 0x17215A29: mov eax, dword ptr [esp + 4] */
    edx = MEM32(esp + 0xC); /* 0x17215A2D: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x8); /* 0x17215A31: mov ecx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x17215A35: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17215A38: movd mm1, dword ptr [edx + 8] */
    _mm[2] = MEM64(ecx); /* 0x17215A3C: movq mm2, qword ptr [ecx] */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17215A3F: movd mm3, dword ptr [ecx + 8] */
    void_lift_trap(0x17215A43u, "pfmul mm2, mm0");
    void_lift_trap(0x17215A47u, "pfmul mm3, mm1");
    void_lift_trap(0x17215A4Bu, "pfacc mm2, mm2");
    void_lift_trap(0x17215A4Fu, "pfadd mm2, mm3");
    MEM64(eax) = _mm[0]; /* 0x17215A53: movq qword ptr [eax], mm0 */
    _mm[2] = (_mm[2] ^ MEM64(0x1702A5E0)); /* 0x17215A56: pxor mm2, qword ptr [0x1702a5e0] */
    MEM32(eax + 0x8) = (uint32_t)_mm[1]; /* 0x17215A5D: movd dword ptr [eax + 8], mm1 */
    MEM32(eax + 0xC) = (uint32_t)_mm[2]; /* 0x17215A61: movd dword ptr [eax + 0xc], mm2 */
    void_lift_trap(0x17215A65u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17215A67: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17215A6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215A6Fu);

L_17215A6F:
    void_lift_trap(0x17215A6Fu, "femms ");
    eax = MEM32(esp + 0xC); /* 0x17215A71: mov eax, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x10); /* 0x17215A75: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x8); /* 0x17215A79: mov edx, dword ptr [esp + 8] */
    _mm[3] = MEM64(0x1702A5E8); /* 0x17215A7D: movq mm3, qword ptr [0x1702a5e8] */
    _mm[0] = MEM64(edx); /* 0x17215A84: movq mm0, qword ptr [edx] */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17215A87: movd mm1, dword ptr [edx + 8] */
    _mm[2] = _mm[1]; /* 0x17215A8B: movq mm2, mm1 */
    _mm[4] = _mm[0]; /* 0x17215A8E: movq mm4, mm0 */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17215A91: movd mm6, dword ptr [ecx + 8] */
    void_lift_trap(0x17215A95u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215A98u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215A9Cu, "pfsub mm0, qword ptr [eax]");
    void_lift_trap(0x17215AA0u, "pfsub mm1, mm6");
    void_lift_trap(0x17215AA4u, "pfsub mm4, qword ptr [ecx]");
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17215AA8: pxor mm7, mm7 */
    void_lift_trap(0x17215AABu, "pfsub mm7, mm4");
    _mm[5] = _mm[0]; /* 0x17215AAF: movq mm5, mm0 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[7]); /* 0x17215AB2: punpckhdq mm0, mm7 */
    void_lift_trap(0x17215AB5u, "pfmul mm0, mm1");
    _mm[6] = _mm[7]; /* 0x17215AB9: movq mm6, mm7 */
    void_lift_trap(0x17215ABCu, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[3]); /* 0x17215ABF: punpckhdq mm1, mm3 */
    void_lift_trap(0x17215AC2u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17215AC5u, "pfmul mm1, mm6");
    void_lift_trap(0x17215AC9u, "pfacc mm0, mm1");
    _mm[0] = (_mm[0] ^ _mm[3]); /* 0x17215ACD: pxor mm0, mm3 */
    _mm[1] = _mm[4]; /* 0x17215AD0: movq mm1, mm4 */
    void_lift_trap(0x17215AD3u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[4]); /* 0x17215AD6: punpckhdq mm1, mm4 */
    void_lift_trap(0x17215AD9u, "pfmul mm1, mm5");
    void_lift_trap(0x17215ADDu, "pfacc mm1, mm1");
    _mm[6] = _mm[0]; /* 0x17215AE1: movq mm6, mm0 */
    _mm[7] = _mm[1]; /* 0x17215AE4: movq mm7, mm1 */
    _mm[7] = mmx_psllq(_mm[7], 32); /* 0x17215AE7: psllq mm7, 0x20 */
    void_lift_trap(0x17215AEBu, "pfmul mm6, mm6");
    void_lift_trap(0x17215AEFu, "pfmul mm7, mm7");
    void_lift_trap(0x17215AF3u, "pfadd mm6, mm7");
    void_lift_trap(0x17215AF7u, "pfacc mm6, mm6");
    _mm[5] = _mm[6]; /* 0x17215AFB: movq mm5, mm6 */
    void_lift_trap(0x17215AFEu, "pfrsqrt mm4, mm6");
    void_lift_trap(0x17215B02u, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[7] = _mm[4]; /* 0x17215B0A: movq mm7, mm4 */
    void_lift_trap(0x17215B0Du, "pfmul mm7, mm4");
    void_lift_trap(0x17215B11u, "pfrsqit1 mm6, mm7");
    _mm[0] = (_mm[0] & _mm[5]); /* 0x17215B15: pand mm0, mm5 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x17215B18: pand mm1, mm5 */
    void_lift_trap(0x17215B1Bu, "pfrcpit2 mm6, mm4");
    void_lift_trap(0x17215B1Fu, "pfmul mm0, mm6");
    void_lift_trap(0x17215B23u, "pfmul mm1, mm6");
    eax = MEM32(esp + 0x4); /* 0x17215B27: mov eax, dword ptr [esp + 4] */
    _mm[4] = _mm[0]; /* 0x17215B2B: movq mm4, mm0 */
    _mm[5] = _mm[1]; /* 0x17215B2E: movq mm5, mm1 */
    void_lift_trap(0x17215B31u, "pfmul mm0, qword ptr [edx]");
    void_lift_trap(0x17215B35u, "pfmul mm1, mm2");
    void_lift_trap(0x17215B39u, "pfacc mm0, mm0");
    void_lift_trap(0x17215B3Du, "pfadd mm0, mm1");
    void_lift_trap(0x17215B41u, "unsupported PUNPCKLDQ operands");
    _mm[5] = (_mm[5] ^ _mm[3]); /* 0x17215B44: pxor mm5, mm3 */
    MEM64(eax) = _mm[4]; /* 0x17215B47: movq qword ptr [eax], mm4 */
    MEM64(eax + 0x8) = _mm[5]; /* 0x17215B4A: movq qword ptr [eax + 8], mm5 */
    void_lift_trap(0x17215B4Eu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17215B50: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17215B58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215B58u);

L_17215B58:
    eax = MEM32(esp + 0x8); /* 0x17215B58: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x17215B5C: mov edx, dword ptr [esp + 0x10] */
    _mm[0] = MEM64(eax); /* 0x17215B60: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17215B63: movq mm1, qword ptr [eax + 8] */
    ecx = MEM32(esp + 0xC); /* 0x17215B67: mov ecx, dword ptr [esp + 0xc] */
    _mm[4] = MEM64(edx); /* 0x17215B6B: movq mm4, qword ptr [edx] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17215B6E: movd mm5, dword ptr [edx + 8] */
    _mm[3] = _mm[1]; /* 0x17215B72: movq mm3, mm1 */
    _mm[2] = _mm[0]; /* 0x17215B75: movq mm2, mm0 */
    _mm[6] = MEM64(ecx); /* 0x17215B78: movq mm6, qword ptr [ecx] */
    void_lift_trap(0x17215B7Bu, "pfmul mm2, mm4");
    void_lift_trap(0x17215B7Fu, "pfmul mm3, mm5");
    _mm[7] = (uint64_t)(uint32_t)(MEM32(ecx + 0x8)); /* 0x17215B83: movd mm7, dword ptr [ecx + 8] */
    _mm[4] = _mm[0]; /* 0x17215B87: movq mm4, mm0 */
    void_lift_trap(0x17215B8Au, "pfadd mm2, mm3");
    _mm[5] = _mm[1]; /* 0x17215B8E: movq mm5, mm1 */
    void_lift_trap(0x17215B91u, "pfmul mm4, mm6");
    void_lift_trap(0x17215B95u, "pfmul mm5, mm7");
    void_lift_trap(0x17215B99u, "pfadd mm4, mm5");
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x17215B9D: pxor mm3, mm3 */
    void_lift_trap(0x17215BA0u, "pfsub mm4, mm2");
    void_lift_trap(0x17215BA4u, "unsupported PUNPCKLDQ operands");
    _mm[2] = _mm[0]; /* 0x17215BAB: movq mm2, mm0 */
    void_lift_trap(0x17215BAEu, "pfacc mm4, mm4");
    void_lift_trap(0x17215BB2u, "pfcmpeq mm3, mm4");
    eax = (uint32_t)_mm[3]; /* 0x17215BB6: movd eax, mm3 */
    /* test eax, eax */ /* 0x17215BB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17215BBBu, "pfrcp mm5, mm4");
    eax = MEM32(esp + 0x4); /* 0x17215BBF: mov eax, dword ptr [esp + 4] */
    _mm[3] = _mm[1]; /* 0x17215BC3: movq mm3, mm1 */
    void_lift_trap(0x17215BC6u, "pfmul mm2, mm6");
    if (TEST_Z(_flag_a, _flag_b)) goto L_17215BD3; /* 0x17215BCA: je 0x17215bd3 */
L_17215BCC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17215BCC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17215BCEu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17215BD0: ret 0x10 */
L_17215BD3:
    void_lift_trap(0x17215BD3u, "pfmul mm3, mm7");
    void_lift_trap(0x17215BD7u, "pfrcpit1 mm4, mm5");
    void_lift_trap(0x17215BDBu, "pfadd mm2, mm3");
    _mm[3] = MEM64(edx); /* 0x17215BDF: movq mm3, qword ptr [edx] */
    void_lift_trap(0x17215BE2u, "pfrcpit2 mm4, mm5");
    void_lift_trap(0x17215BE6u, "pfacc mm2, mm2");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(edx + 0x8)); /* 0x17215BEA: movd mm5, dword ptr [edx + 8] */
    void_lift_trap(0x17215BEEu, "pfsub mm3, mm6");
    void_lift_trap(0x17215BF2u, "pfmul mm2, mm4");
    void_lift_trap(0x17215BF6u, "pfsub mm5, mm7");
    void_lift_trap(0x17215BFAu, "pfmul mm3, mm2");
    void_lift_trap(0x17215BFEu, "pfmul mm5, mm2");
    void_lift_trap(0x17215C02u, "pfadd mm3, mm6");
    void_lift_trap(0x17215C06u, "pfadd mm5, mm7");
    MEM64(eax) = _mm[3]; /* 0x17215C0A: movq qword ptr [eax], mm3 */
    MEM32(eax + 0x8) = (uint32_t)_mm[5]; /* 0x17215C0D: movd dword ptr [eax + 8], mm5 */
    void_lift_trap(0x17215C11u, "femms ");
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17215C13: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17215C1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215C1Bu);

L_17215C1B:
    edx = MEM32(esp + 0x8); /* 0x17215C1B: mov edx, dword ptr [esp + 8] */
    _mm[0] = MEM64(edx); /* 0x17215C1F: movq mm0, qword ptr [edx] */
    _mm[2] = MEM64(edx + 0x8); /* 0x17215C22: movq mm2, qword ptr [edx + 8] */
    _mm[1] = _mm[0]; /* 0x17215C26: movq mm1, mm0 */
    _mm[3] = _mm[2]; /* 0x17215C29: movq mm3, mm2 */
    _mm[2] = (_mm[2] & MEM64(0x1702A5B8)); /* 0x17215C2C: pand mm2, qword ptr [0x1702a5b8] */
    void_lift_trap(0x17215C33u, "pfmul mm0, mm0");
    void_lift_trap(0x17215C37u, "pfmul mm2, mm2");
    void_lift_trap(0x17215C3Bu, "pfadd mm0, mm2");
    void_lift_trap(0x17215C3Fu, "pfacc mm0, mm0");
    _mm[5] = _mm[0]; /* 0x17215C43: movq mm5, mm0 */
    void_lift_trap(0x17215C46u, "pfrsqrt mm4, mm0");
    void_lift_trap(0x17215C4Au, "pfcmpgt mm5, qword ptr [0x1702a5d8]");
    _mm[2] = _mm[4]; /* 0x17215C52: movq mm2, mm4 */
    void_lift_trap(0x17215C55u, "pfmul mm2, mm4");
    void_lift_trap(0x17215C59u, "pfrsqit1 mm0, mm2");
    eax = MEM32(esp + 0x4); /* 0x17215C5D: mov eax, dword ptr [esp + 4] */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x17215C61: pand mm1, mm5 */
    _mm[3] = (_mm[3] & _mm[5]); /* 0x17215C64: pand mm3, mm5 */
    void_lift_trap(0x17215C67u, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x17215C6Bu, "pfmul mm1, mm0");
    void_lift_trap(0x17215C6Fu, "pfmul mm3, mm0");
    MEM64(eax) = _mm[1]; /* 0x17215C73: movq qword ptr [eax], mm1 */
    MEM64(eax + 0x8) = _mm[3]; /* 0x17215C76: movq qword ptr [eax + 8], mm3 */
    void_lift_trap(0x17215C7Au, "femms ");
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17215C7C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17215C84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17215C84u);

L_17215C84:
    void_lift_trap(0x17215C84u, "femms ");
    ecx = MEM32(esp + 0x8); /* 0x17215C86: mov ecx, dword ptr [esp + 8] */
    edx = MEM32(esp + 0xC); /* 0x17215C8A: mov edx, dword ptr [esp + 0xc] */
    _mm[0] = MEM64(ecx); /* 0x17215C8E: movq mm0, qword ptr [ecx] */
    _mm[1] = _mm[0]; /* 0x17215C91: movq mm1, mm0 */
    void_lift_trap(0x17215C94u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[1]); /* 0x17215C97: punpckhdq mm1, mm1 */
    _mm[2] = MEM64(ecx + 0x8); /* 0x17215C9A: movq mm2, qword ptr [ecx + 8] */
    _mm[3] = _mm[2]; /* 0x17215C9E: movq mm3, mm2 */
    void_lift_trap(0x17215CA1u, "unsupported PUNPCKLDQ operands");
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[3]); /* 0x17215CA4: punpckhdq mm3, mm3 */
    _mm[4] = _mm[0]; /* 0x17215CA7: movq mm4, mm0 */
    void_lift_trap(0x17215CAAu, "pfmul mm0, qword ptr [edx]");
    _mm[5] = _mm[1]; /* 0x17215CAE: movq mm5, mm1 */
    void_lift_trap(0x17215CB1u, "pfmul mm1, qword ptr [edx + 0x10]");
    _mm[6] = _mm[2]; /* 0x17215CB6: movq mm6, mm2 */
    void_lift_trap(0x17215CB9u, "pfmul mm2, qword ptr [edx + 0x20]");
    _mm[7] = _mm[3]; /* 0x17215CBE: movq mm7, mm3 */
    void_lift_trap(0x17215CC1u, "pfmul mm3, qword ptr [edx + 0x30]");
    void_lift_trap(0x17215CC6u, "pfadd mm0, mm1");
    void_lift_trap(0x17215CCAu, "pfmul mm4, qword ptr [edx + 8]");
    void_lift_trap(0x17215CCFu, "pfadd mm2, mm3");
    void_lift_trap(0x17215CD3u, "pfmul mm5, qword ptr [edx + 0x18]");
    eax = MEM32(esp + 0x4); /* 0x17215CD8: mov eax, dword ptr [esp + 4] */
    void_lift_trap(0x17215CDCu, "pfmul mm6, qword ptr [edx + 0x28]");
    void_lift_trap(0x17215CE1u, "pfmul mm7, qword ptr [edx + 0x38]");
    void_lift_trap(0x17215CE6u, "pfadd mm0, mm2");
    void_lift_trap(0x17215CEAu, "pfadd mm4, mm5");
    void_lift_trap(0x17215CEEu, "pfadd mm6, mm7");
    void_lift_trap(0x17215CF2u, "pfadd mm4, mm6");
    MEM64(eax) = _mm[0]; /* 0x17215CF6: movq qword ptr [eax], mm0 */
    MEM64(eax + 0x8) = _mm[4]; /* 0x17215CF9: movq qword ptr [eax + 8], mm4 */
    void_lift_trap(0x17215CFDu, "femms ");
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17215CFF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_172160C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172160C0u);

L_172160C0:
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x1723C098)); /* 0x172160C0: movd mm7, dword ptr [0x1723c098] */
    _mm[6] = (uint64_t)(uint32_t)(MEM32(0x1723C098)); /* 0x172160C7: movd mm6, dword ptr [0x1723c098] */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C09C)); /* 0x172160CE: movd mm5, dword ptr [0x1723c09c] */
    _mm[7] = (_mm[7] & _mm[0]); /* 0x172160D5: pand mm7, mm0 */
    _mm[6] = (_mm[6] & _mm[1]); /* 0x172160D8: pand mm6, mm1 */
    _mm[7] = mmx_psrld(_mm[7], 1); /* 0x172160DB: psrld mm7, 1 */
    _mm[7] = (_mm[7] | _mm[6]); /* 0x172160DF: por mm7, mm6 */
    _mm[1] = (_mm[1] & _mm[5]); /* 0x172160E2: pand mm1, mm5 */
    _mm[0] = (_mm[0] & _mm[5]); /* 0x172160E5: pand mm0, mm5 */
    _mm[6] = _mm[1]; /* 0x172160E8: movq mm6, mm1 */
    _mm[2] = _mm[0]; /* 0x172160EB: movq mm2, mm0 */
    _mm[6] = mmx_pcmpgtd(_mm[6], _mm[0]); /* 0x172160EE: pcmpgtd mm6, mm0 */
    void_lift_trap(0x172160F1u, "pfmax mm0, mm1");
    _mm[6] = mmx_pslld(_mm[6], 31); /* 0x172160F5: pslld mm6, 0x1f */
    void_lift_trap(0x172160F9u, "pfmin mm1, mm2");
    void_lift_trap(0x172160FDu, "pfrcp mm2, mm0");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0D8)); /* 0x17216101: movd mm5, dword ptr [0x1723c0d8] */
    void_lift_trap(0x17216108u, "pfrcpit1 mm0, mm2");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x1723C0DC)); /* 0x1721610C: movd mm4, dword ptr [0x1723c0dc] */
    void_lift_trap(0x17216113u, "pfrcpit2 mm0, mm2");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x1723C0D0)); /* 0x17216117: movd mm3, dword ptr [0x1723c0d0] */
    void_lift_trap(0x1721611Eu, "pfmul mm0, mm1");
    _mm[1] = _mm[0]; /* 0x17216122: movq mm1, mm0 */
    void_lift_trap(0x17216125u, "pfmul mm0, mm0");
    void_lift_trap(0x17216129u, "pfadd mm3, mm0");
    void_lift_trap(0x1721612Du, "pfmul mm4, mm0");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x1723C0CC)); /* 0x17216131: movd mm2, dword ptr [0x1723c0cc] */
    void_lift_trap(0x17216138u, "pfmul mm3, mm0");
    void_lift_trap(0x1721613Cu, "pfadd mm4, mm5");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0D4)); /* 0x17216140: movd mm5, dword ptr [0x1723c0d4] */
    void_lift_trap(0x17216147u, "pfadd mm3, mm2");
    void_lift_trap(0x1721614Bu, "pfmul mm4, mm0");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x1723C0C8)); /* 0x1721614F: movd mm2, dword ptr [0x1723c0c8] */
    void_lift_trap(0x17216156u, "pfmul mm3, mm0");
    void_lift_trap(0x1721615Au, "pfadd mm4, mm5");
    void_lift_trap(0x1721615Eu, "pfadd mm3, mm2");
    void_lift_trap(0x17216162u, "pfmul mm0, mm4");
    _mm[4] = _mm[7]; /* 0x17216166: movq mm4, mm7 */
    void_lift_trap(0x17216169u, "pfmul mm0, mm1");
    void_lift_trap(0x1721616Du, "pfrcp mm5, mm3");
    _mm[7] = mmx_pslld(_mm[7], 1); /* 0x17216171: pslld mm7, 1 */
    void_lift_trap(0x17216175u, "pfrcpit1 mm3, mm5");
    void_lift_trap(0x17216179u, "pfrcpit2 mm3, mm5");
    _mm[5] = _mm[7]; /* 0x1721617D: movq mm5, mm7 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x17216180: pxor mm7, mm6 */
    void_lift_trap(0x17216183u, "pfmul mm0, mm3");
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x1723C0F8)); /* 0x17216187: movd mm3, dword ptr [0x1723c0f8] */
    _mm[5] = (_mm[5] ^ _mm[3]); /* 0x1721618E: pxor mm5, mm3 */
    _mm[6] = mmx_psrad(_mm[6], 31); /* 0x17216191: psrad mm6, 0x1f */
    void_lift_trap(0x17216195u, "pfadd mm0, mm1");
    _mm[6] = (~_mm[6] & _mm[5]); /* 0x17216199: pandn mm6, mm5 */
    _mm[1] = (uint64_t)(uint32_t)(MEM32(0x1723C098)); /* 0x1721619C: movd mm1, dword ptr [0x1723c098] */
    void_lift_trap(0x172161A3u, "pfsub mm6, mm3");
    _mm[0] = (_mm[0] | _mm[7]); /* 0x172161A7: por mm0, mm7 */
    _mm[1] = (_mm[1] & _mm[4]); /* 0x172161AA: pand mm1, mm4 */
    void_lift_trap(0x172161ADu, "pfadd mm0, mm6");
    _mm[0] = (_mm[0] | _mm[1]); /* 0x172161B1: por mm0, mm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x172161B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_172161C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172161C0u);

L_172161C0:
    _mm[6] = (uint64_t)(uint32_t)(MEM32(0x1723C098)); /* 0x172161C0: movd mm6, dword ptr [0x1723c098] */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x1723C09C)); /* 0x172161C7: movd mm7, dword ptr [0x1723c09c] */
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x1723C0AC)); /* 0x172161CE: movd mm4, dword ptr [0x1723c0ac] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x172161D5: pand mm6, mm0 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0A8)); /* 0x172161D8: movd mm5, dword ptr [0x1723c0a8] */
    _mm[0] = (_mm[0] & _mm[7]); /* 0x172161DF: pand mm0, mm7 */
    _mm[3] = _mm[0]; /* 0x172161E2: movq mm3, mm0 */
    _mm[3] = mmx_pcmpgtd(_mm[3], _mm[5]); /* 0x172161E5: pcmpgtd mm3, mm5 */
    _mm[5] = _mm[0]; /* 0x172161E8: movq mm5, mm0 */
    void_lift_trap(0x172161EBu, "pfmul mm0, mm4");
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x1723C0E0)); /* 0x172161EF: movd mm2, dword ptr [0x1723c0e0] */
    void_lift_trap(0x172161F6u, "pfsubr mm0, mm4");
    void_lift_trap(0x172161FAu, "pfrsqrt mm7, mm0");
    _mm[1] = _mm[7]; /* 0x172161FE: movq mm1, mm7 */
    void_lift_trap(0x17216201u, "pfmul mm7, mm7");
    _mm[2] = mmx_pcmpgtd(_mm[2], _mm[5]); /* 0x17216205: pcmpgtd mm2, mm5 */
    void_lift_trap(0x17216208u, "pfrsqit1 mm7, mm0");
    _mm[4] = (uint64_t)(uint32_t)(MEM32(0x1723C0F0)); /* 0x1721620C: movd mm4, dword ptr [0x1723c0f0] */
    void_lift_trap(0x17216213u, "pfrcpit2 mm7, mm1");
    void_lift_trap(0x17216217u, "pfmul mm7, mm0");
    _mm[0] = _mm[2]; /* 0x1721621B: movq mm0, mm2 */
    _mm[5] = (_mm[5] & _mm[2]); /* 0x1721621E: pand mm5, mm2 */
    _mm[0] = (~_mm[0] & _mm[7]); /* 0x17216221: pandn mm0, mm7 */
    _mm[7] = (uint64_t)(uint32_t)(MEM32(0x1723C0E8)); /* 0x17216224: movd mm7, dword ptr [0x1723c0e8] */
    _mm[0] = (_mm[0] | _mm[5]); /* 0x1721622B: por mm0, mm5 */
    _mm[1] = _mm[0]; /* 0x1721622E: movq mm1, mm0 */
    void_lift_trap(0x17216231u, "pfmul mm0, mm0");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0E4)); /* 0x17216235: movd mm5, dword ptr [0x1723c0e4] */
    void_lift_trap(0x1721623Cu, "pfmul mm7, mm0");
    void_lift_trap(0x17216240u, "pfadd mm4, mm0");
    void_lift_trap(0x17216244u, "pfadd mm7, mm5");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0EC)); /* 0x17216248: movd mm5, dword ptr [0x1723c0ec] */
    void_lift_trap(0x1721624Fu, "pfmul mm7, mm0");
    void_lift_trap(0x17216253u, "pfmul mm0, mm4");
    void_lift_trap(0x17216257u, "pfadd mm0, mm5");
    void_lift_trap(0x1721625Bu, "pfmul mm7, mm1");
    void_lift_trap(0x1721625Fu, "pfrcp mm4, mm0");
    void_lift_trap(0x17216263u, "pfrcpit1 mm0, mm4");
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0F8)); /* 0x17216267: movd mm5, dword ptr [0x1723c0f8] */
    void_lift_trap(0x1721626Eu, "pfrcpit2 mm0, mm4");
    void_lift_trap(0x17216272u, "pfmul mm0, mm7");
    _mm[4] = _mm[2]; /* 0x17216276: movq mm4, mm2 */
    _mm[2] = (~_mm[2] & _mm[5]); /* 0x17216279: pandn mm2, mm5 */
    _mm[5] = (uint64_t)(uint32_t)(MEM32(0x1723C0F4)); /* 0x1721627C: movd mm5, dword ptr [0x1723c0f4] */
    _mm[7] = _mm[4]; /* 0x17216283: movq mm7, mm4 */
    _mm[2] = (_mm[2] ^ _mm[6]); /* 0x17216286: pxor mm2, mm6 */
    void_lift_trap(0x17216289u, "pfadd mm1, mm0");
    _mm[0] = (uint64_t)(uint32_t)(MEM32(0x1723C0B4)); /* 0x1721628D: movd mm0, dword ptr [0x1723c0b4] */
    void_lift_trap(0x17216294u, "pfadd mm2, mm5");
    _mm[7] = mmx_pslld(_mm[7], 31); /* 0x17216298: pslld mm7, 0x1f */
    _mm[4] = (~_mm[4] & _mm[1]); /* 0x1721629C: pandn mm4, mm1 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x1721629F: pxor mm7, mm6 */
    void_lift_trap(0x172162A2u, "pfadd mm1, mm4");
    _mm[0] = (_mm[0] & _mm[3]); /* 0x172162A6: pand mm0, mm3 */
    _mm[1] = (_mm[1] | _mm[7]); /* 0x172162A9: por mm1, mm7 */
    void_lift_trap(0x172162ACu, "pfadd mm2, mm1");
    _mm[3] = (~_mm[3] & _mm[2]); /* 0x172162B0: pandn mm3, mm2 */
    _mm[0] = (_mm[0] | _mm[3]); /* 0x172162B3: por mm0, mm3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x172162B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_172167A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172167A0u);

L_172167A0:
    eax = (uint32_t)_mm[0]; /* 0x172167A0: movd eax, mm0 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x1723C09C)); /* 0x172167A3: movd mm3, dword ptr [0x1723c09c] */
    ebx = eax; /* 0x172167AA: mov ebx, eax */
    edx = eax; /* 0x172167AC: mov edx, eax */
    _mm[0] = (_mm[0] & _mm[3]); /* 0x172167AE: pand mm0, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x172167B1: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x172167B7: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x172167B7: shr edx, 0x1f */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x172167BA: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x1723C150)); /* 0x172167BC: movd mm2, dword ptr [0x1723c150] */
    _mm[1] = _mm[0]; /* 0x172167C3: movq mm1, mm0 */
    void_lift_trap(0x172167C6u, "pfmul mm0, mm2");
    _mm[3] = MEM64(0x1723C060); /* 0x172167CA: movq mm3, qword ptr [0x1723c060] */
    void_lift_trap(0x172167D1u, "pf2id mm0, mm0");
    _mm[7] = MEM64(0x1723C068); /* 0x172167D5: movq mm7, qword ptr [0x1723c068] */
    ecx = (uint32_t)_mm[0]; /* 0x172167DC: movd ecx, mm0 */
    void_lift_trap(0x172167DFu, "pi2fd mm0, mm0");
    esi = ecx; /* 0x172167E3: mov esi, ecx */
    _mm[6] = MEM64(0x1723C078); /* 0x172167E5: movq mm6, qword ptr [0x1723c078] */
    void_lift_trap(0x172167ECu, "unsupported PUNPCKLDQ operands");
    _mm[5] = MEM64(0x1723C018); /* 0x172167EF: movq mm5, qword ptr [0x1723c018] */
    void_lift_trap(0x172167F6u, "pfmul mm0, mm3");
    _mm[3] = MEM64(0x1723C070); /* 0x172167FA: movq mm3, qword ptr [0x1723c070] */
    void_lift_trap(0x17216801u, "pfadd mm1, mm0");
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17216805: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17216805: shr esi, 2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x17216808: punpckhdq mm0, mm0 */
    _flag_a = (uint32_t)((edx ^ esi)); _flag_b = (uint32_t)((edx ^ esi));
    edx = edx ^ esi; /* 0x1721680B: xor edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721680Du, "pfadd mm1, mm0");
    /* test ecx, 1 */ /* 0x17216811: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17216817u, "unsupported PUNPCKLDQ operands");
    if (TEST_Z(_flag_a, _flag_b)) goto L_17216820; /* 0x1721681A: je 0x17216820 */
L_1721681C:
    void_lift_trap(0x1721681Cu, "pfsubr mm1, mm3");
L_17216820:
    _mm[2] = _mm[5]; /* 0x17216820: movq mm2, mm5 */
    if (31u) _cf = (((edx) >> 1) & 1u); /* 0x17216823: shl edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 31u; /* 0x17216823: shl edx, 0x1f */
    void_lift_trap(0x17216826u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17216829u, "pfmul mm1, mm1");
    esi = ecx; /* 0x1721682D: mov esi, ecx */
    _mm[4] = MEM64(0x1723C080); /* 0x1721682F: movq mm4, qword ptr [0x1723c080] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x17216836: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x17216836: shr esi, 1 */
    void_lift_trap(0x17216838u, "pfmul mm7, mm1");
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x1721683C: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721683Eu, "pfmul mm6, mm1");
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x17216842: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x17216842: shl esi, 0x1f */
    void_lift_trap(0x17216845u, "pfadd mm7, mm5");
    _flag_a = (uint32_t)((ebx ^ esi)); _flag_b = (uint32_t)((ebx ^ esi));
    ebx = ebx ^ esi; /* 0x17216849: xor ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721684Bu, "pfmul mm4, mm1");
    void_lift_trap(0x1721684Fu, "pfmul mm7, mm6");
    _mm[6] = MEM64(0x1723C088); /* 0x17216853: movq mm6, qword ptr [0x1723c088] */
    void_lift_trap(0x1721685Au, "pfadd mm7, mm5");
    void_lift_trap(0x1721685Eu, "pfmul mm6, mm1");
    void_lift_trap(0x17216862u, "pfmul mm4, mm7");
    _mm[0] = (uint64_t)(uint32_t)(edx); /* 0x17216866: movd mm0, edx */
    void_lift_trap(0x17216869u, "pfadd mm4, mm5");
    void_lift_trap(0x1721686Du, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x17216870: psrlq mm5, 0x20 */
    void_lift_trap(0x17216874u, "pfmul mm4, mm6");
    void_lift_trap(0x17216878u, "unsupported PUNPCKLDQ operands");
    _mm[1] = (uint64_t)(uint32_t)(ebx); /* 0x1721687B: movd mm1, ebx */
    void_lift_trap(0x1721687Eu, "pfadd mm4, mm5");
    /* test ecx, 1 */ /* 0x17216882: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17216888u, "pfmul mm4, mm2");
    if (TEST_Z(_flag_a, _flag_b)) goto L_17216894; /* 0x1721688C: je 0x17216894 */
L_1721688E:
    void_lift_trap(0x1721688Eu, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x17216891: punpckhdq mm4, mm5 */
L_17216894:
    _mm[4] = (_mm[4] ^ _mm[1]); /* 0x17216894: pxor mm4, mm1 */
    _mm[0] = (_mm[0] ^ _mm[4]); /* 0x17216897: pxor mm0, mm4 */
    /* nop */ /* 0x1721689A: nop  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721689B: ret  */
    RECOMP_REGS_OUT();
}

void sub_172168A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172168A0u);

L_172168A0:
    eax = (uint32_t)_mm[0]; /* 0x172168A0: movd eax, mm0 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(0x1723C09C)); /* 0x172168A3: movd mm3, dword ptr [0x1723c09c] */
    ebx = eax; /* 0x172168AA: mov ebx, eax */
    edx = eax; /* 0x172168AC: mov edx, eax */
    _mm[0] = (_mm[0] & _mm[3]); /* 0x172168AE: pand mm0, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x172168B1: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x172168B7: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x172168B7: shr edx, 0x1f */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x172168BA: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[2] = (uint64_t)(uint32_t)(MEM32(0x1723C150)); /* 0x172168BC: movd mm2, dword ptr [0x1723c150] */
    _mm[1] = _mm[0]; /* 0x172168C3: movq mm1, mm0 */
    void_lift_trap(0x172168C6u, "pfmul mm0, mm2");
    _mm[3] = MEM64(0x1723C060); /* 0x172168CA: movq mm3, qword ptr [0x1723c060] */
    void_lift_trap(0x172168D1u, "pf2id mm0, mm0");
    _mm[7] = MEM64(0x1723C068); /* 0x172168D5: movq mm7, qword ptr [0x1723c068] */
    ecx = (uint32_t)_mm[0]; /* 0x172168DC: movd ecx, mm0 */
    void_lift_trap(0x172168DFu, "pi2fd mm0, mm0");
    esi = ecx; /* 0x172168E3: mov esi, ecx */
    _mm[6] = MEM64(0x1723C078); /* 0x172168E5: movq mm6, qword ptr [0x1723c078] */
    void_lift_trap(0x172168ECu, "unsupported PUNPCKLDQ operands");
    _mm[5] = MEM64(0x1723C018); /* 0x172168EF: movq mm5, qword ptr [0x1723c018] */
    void_lift_trap(0x172168F6u, "pfmul mm0, mm3");
    _mm[3] = MEM64(0x1723C070); /* 0x172168FA: movq mm3, qword ptr [0x1723c070] */
    void_lift_trap(0x17216901u, "pfadd mm1, mm0");
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17216905: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17216905: shr esi, 2 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x17216908: punpckhdq mm0, mm0 */
    _flag_a = (uint32_t)((edx ^ esi)); _flag_b = (uint32_t)((edx ^ esi));
    edx = edx ^ esi; /* 0x1721690B: xor edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721690Du, "pfadd mm1, mm0");
    /* test ecx, 1 */ /* 0x17216911: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17216917u, "unsupported PUNPCKLDQ operands");
    if (TEST_Z(_flag_a, _flag_b)) goto L_17216920; /* 0x1721691A: je 0x17216920 */
L_1721691C:
    void_lift_trap(0x1721691Cu, "pfsubr mm1, mm3");
L_17216920:
    _mm[2] = _mm[5]; /* 0x17216920: movq mm2, mm5 */
    if (31u) _cf = (((edx) >> 1) & 1u); /* 0x17216923: shl edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 31u; /* 0x17216923: shl edx, 0x1f */
    void_lift_trap(0x17216926u, "unsupported PUNPCKLDQ operands");
    void_lift_trap(0x17216929u, "pfmul mm1, mm1");
    esi = ecx; /* 0x1721692D: mov esi, ecx */
    _mm[4] = MEM64(0x1723C080); /* 0x1721692F: movq mm4, qword ptr [0x1723c080] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x17216936: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x17216936: shr esi, 1 */
    void_lift_trap(0x17216938u, "pfmul mm7, mm1");
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x1721693C: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721693Eu, "pfmul mm6, mm1");
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x17216942: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x17216942: shl esi, 0x1f */
    void_lift_trap(0x17216945u, "pfadd mm7, mm5");
    _flag_a = (uint32_t)((ebx ^ esi)); _flag_b = (uint32_t)((ebx ^ esi));
    ebx = ebx ^ esi; /* 0x17216949: xor ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x1721694Bu, "pfmul mm4, mm1");
    void_lift_trap(0x1721694Fu, "pfmul mm7, mm6");
    _mm[6] = MEM64(0x1723C088); /* 0x17216953: movq mm6, qword ptr [0x1723c088] */
    void_lift_trap(0x1721695Au, "pfadd mm7, mm5");
    void_lift_trap(0x1721695Eu, "pfmul mm6, mm1");
    void_lift_trap(0x17216962u, "pfmul mm4, mm7");
    _mm[0] = (uint64_t)(uint32_t)(edx); /* 0x17216966: movd mm0, edx */
    void_lift_trap(0x17216969u, "pfadd mm4, mm5");
    void_lift_trap(0x1721696Du, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_psrlq(_mm[5], 32); /* 0x17216970: psrlq mm5, 0x20 */
    void_lift_trap(0x17216974u, "pfmul mm4, mm6");
    void_lift_trap(0x17216978u, "unsupported PUNPCKLDQ operands");
    _mm[1] = (uint64_t)(uint32_t)(ebx); /* 0x1721697B: movd mm1, ebx */
    void_lift_trap(0x1721697Eu, "pfadd mm4, mm5");
    /* test ecx, 1 */ /* 0x17216982: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17216988u, "pfmul mm4, mm2");
    if (TEST_Z(_flag_a, _flag_b)) goto L_17216994; /* 0x1721698C: je 0x17216994 */
L_1721698E:
    void_lift_trap(0x1721698Eu, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], _mm[5]); /* 0x17216991: punpckhdq mm4, mm5 */
L_17216994:
    _mm[4] = (_mm[4] ^ _mm[1]); /* 0x17216994: pxor mm4, mm1 */
    _mm[0] = (_mm[0] ^ _mm[4]); /* 0x17216997: pxor mm0, mm4 */
    _mm[0] = mmx_punpckhdq(_mm[0], _mm[0]); /* 0x1721699A: punpckhdq mm0, mm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721699D: ret  */
    RECOMP_REGS_OUT();
}

void sub_17216C5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17216C5Du);

L_17216C5D:
    edi = edi; /* 0x17216C5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17216C5F: push ebp */
    ebp = esp; /* 0x17216C60: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17216C62: mov eax, dword ptr [ebp + 8] */
    ecx = 0x172170B6u; /* 0x17216C65: mov ecx, 0x172170b6 */
    MEM32(eax + 0x8) = ecx; /* 0x17216C6A: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x8C) = ecx; /* 0x17216C6D: mov dword ptr [eax + 0x8c], ecx */
    ecx = 0x1721885Eu; /* 0x17216C73: mov ecx, 0x1721885e */
    MEM32(eax + 0x108) = ecx; /* 0x17216C78: mov dword ptr [eax + 0x108], ecx */
    MEM32(eax + 0x114) = ecx; /* 0x17216C7E: mov dword ptr [eax + 0x114], ecx */
    ecx = 0x17217391u; /* 0x17216C84: mov ecx, 0x17217391 */
    MEM32(eax) = 0x17216FD5u; /* 0x17216C89: mov dword ptr [eax], 0x17216fd5 */
    MEM32(eax + 0x4) = 0x17217D68u; /* 0x17216C8F: mov dword ptr [eax + 4], 0x17217d68 */
    MEM32(eax + 0x14) = 0x17217078u; /* 0x17216C96: mov dword ptr [eax + 0x14], 0x17217078 */
    MEM32(eax + 0x18) = 0x17217C8Fu; /* 0x17216C9D: mov dword ptr [eax + 0x18], 0x17217c8f */
    MEM32(eax + 0x24) = 0x1721701Au; /* 0x17216CA4: mov dword ptr [eax + 0x24], 0x1721701a */
    MEM32(eax + 0x28) = 0x17217E3Cu; /* 0x17216CAB: mov dword ptr [eax + 0x28], 0x17217e3c */
    MEM32(eax + 0xBC) = 0x17217F3Du; /* 0x17216CB2: mov dword ptr [eax + 0xbc], 0x17217f3d */
    MEM32(eax + 0x44) = 0x172172C3u; /* 0x17216CBC: mov dword ptr [eax + 0x44], 0x172172c3 */
    MEM32(eax + 0x4C) = 0x172197A2u; /* 0x17216CC3: mov dword ptr [eax + 0x4c], 0x172197a2 */
    MEM32(eax + 0xC8) = 0x17217623u; /* 0x17216CCA: mov dword ptr [eax + 0xc8], 0x17217623 */
    MEM32(eax + 0xCC) = 0x17217432u; /* 0x17216CD4: mov dword ptr [eax + 0xcc], 0x17217432 */
    MEM32(eax + 0xD4) = 0x172176DDu; /* 0x17216CDE: mov dword ptr [eax + 0xd4], 0x172176dd */
    MEM32(eax + 0xD8) = 0x17217577u; /* 0x17216CE8: mov dword ptr [eax + 0xd8], 0x17217577 */
    MEM32(eax + 0x48) = 0x1721777Eu; /* 0x17216CF2: mov dword ptr [eax + 0x48], 0x1721777e */
    MEM32(eax + 0xC0) = 0x172174EBu; /* 0x17216CF9: mov dword ptr [eax + 0xc0], 0x172174eb */
    MEM32(eax + 0x70) = 0x17217AB5u; /* 0x17216D03: mov dword ptr [eax + 0x70], 0x17217ab5 */
    MEM32(eax + 0x38) = 0x172179C4u; /* 0x17216D0A: mov dword ptr [eax + 0x38], 0x172179c4 */
    MEM32(eax + 0x74) = 0x17217BB2u; /* 0x17216D11: mov dword ptr [eax + 0x74], 0x17217bb2 */
    MEM32(eax + 0xF0) = 0x17218438u; /* 0x17216D18: mov dword ptr [eax + 0xf0], 0x17218438 */
    MEM32(eax + 0xF4) = 0x172185CAu; /* 0x17216D22: mov dword ptr [eax + 0xf4], 0x172185ca */
    MEM32(eax + 0xF8) = 0x1721873Bu; /* 0x17216D2C: mov dword ptr [eax + 0xf8], 0x1721873b */
    MEM32(eax + 0xFC) = 0x17218254u; /* 0x17216D36: mov dword ptr [eax + 0xfc], 0x17218254 */
    MEM32(eax + 0x100) = 0x17218C3Bu; /* 0x17216D40: mov dword ptr [eax + 0x100], 0x17218c3b */
    MEM32(eax + 0x104) = 0x17218A7Eu; /* 0x17216D4A: mov dword ptr [eax + 0x104], 0x17218a7e */
    MEM32(eax + 0x68) = 0x17218111u; /* 0x17216D54: mov dword ptr [eax + 0x68], 0x17218111 */
    MEM32(eax + 0xC) = 0x17219527u; /* 0x17216D5B: mov dword ptr [eax + 0xc], 0x17219527 */
    MEM32(eax + 0x10) = 0x17219A53u; /* 0x17216D62: mov dword ptr [eax + 0x10], 0x17219a53 */
    MEM32(eax + 0x1C) = 0x17217183u; /* 0x17216D69: mov dword ptr [eax + 0x1c], 0x17217183 */
    MEM32(eax + 0x58) = 0x1721721Cu; /* 0x17216D70: mov dword ptr [eax + 0x58], 0x1721721c */
    MEM32(eax + 0x5C) = 0x1721790Fu; /* 0x17216D77: mov dword ptr [eax + 0x5c], 0x1721790f */
    MEM32(eax + 0x50) = 0x17218000u; /* 0x17216D7E: mov dword ptr [eax + 0x50], 0x17218000 */
    MEM32(eax + 0xB4) = 0x17218080u; /* 0x17216D85: mov dword ptr [eax + 0xb4], 0x17218080 */
    MEM32(eax + 0x2C) = 0x17219C6Eu; /* 0x17216D8F: mov dword ptr [eax + 0x2c], 0x17219c6e */
    MEM32(eax + 0x20) = ecx; /* 0x17216D96: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x17216D99: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0xD0) = 0x1721780Bu; /* 0x17216D9C: mov dword ptr [eax + 0xd0], 0x1721780b */
    MEM32(eax + 0xDC) = 0x1721786Cu; /* 0x17216DA6: mov dword ptr [eax + 0xdc], 0x1721786c */
    MEM32(eax + 0xC4) = 0x172178B9u; /* 0x17216DB0: mov dword ptr [eax + 0xc4], 0x172178b9 */
    MEM32(eax + 0xEC) = 0x17216EFAu; /* 0x17216DBA: mov dword ptr [eax + 0xec], 0x17216efa */
    ebp = POP32_VAL(esp); /* 0x17216DC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17216DC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_17216DCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17216DCBu);

L_17216DCB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17216DCB: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x17216DCE: pxor mm7, mm7 */
    _mm[6] = MEM64(0x1723C180); /* 0x17216DD1: movq mm6, qword ptr [0x1723c180] */
    _mm[2] = MEM64(0x1723C190); /* 0x17216DD8: movq mm2, qword ptr [0x1723c190] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x17216DDF: pand mm6, mm0 */
    _mm[3] = _mm[6]; /* 0x17216DE2: movq mm3, mm6 */
    _mm[2] = (_mm[2] & _mm[0]); /* 0x17216DE5: pand mm2, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1723C170)); /* 0x17216DE8: pand mm0, qword ptr [0x1723c170] */
    _mm[3] = mmx_pcmpeqw(_mm[3], _mm[7]); /* 0x17216DEF: pcmpeqw mm3, mm7 */
    _mm[3] = (~_mm[3] & MEM64(0x1723C160)); /* 0x17216DF2: pandn mm3, qword ptr [0x1723c160] */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x17216DF9: por mm2, mm3 */
    _mm[3] = _mm[7]; /* 0x17216DFC: movq mm3, mm7 */
    void_lift_trap(0x17216DFFu, "pmaxsw mm6, qword ptr [0x1723c1a0]");
    _mm[4] = MEM64(0x1723C1B0); /* 0x17216E06: movq mm4, qword ptr [0x1723c1b0] */
    _mm[3] = _mm[6]; /* 0x17216E0D: movq mm3, mm6 */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x17216E10: punpcklwd mm6, mm7 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[7]); /* 0x17216E13: punpckhwd mm3, mm7 */
    _mm[5] = _mm[7]; /* 0x17216E16: movq mm5, mm7 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[0]); /* 0x17216E19: punpcklwd mm5, mm0 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x17216E1C: punpckhwd mm7, mm0 */
    _mm[6] = mmx_paddd(_mm[6], _mm[4]); /* 0x17216E1F: paddd mm6, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[4]); /* 0x17216E22: paddd mm3, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x17216E25: pslld mm6, 0xd */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x17216E29: pslld mm3, 0xd */
    _mm[6] = (_mm[6] | _mm[5]); /* 0x17216E2D: por mm6, mm5 */
    _mm[3] = (_mm[3] | _mm[7]); /* 0x17216E30: por mm3, mm7 */
    MEM64(esp) = _mm[6]; /* 0x17216E33: movq qword ptr [esp], mm6 */
    MEM64(esp + 0x8) = _mm[3]; /* 0x17216E37: movq qword ptr [esp + 8], mm3 */
    _xmm[1].u64[0] = MEM64(esp); /* 0x17216E3C: movlps xmm1, qword ptr [esp] */
    _xmm[1].u64[1] = MEM64(esp + 0x8); /* 0x17216E40: movhps xmm1, qword ptr [esp + 8] */
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x17216E45: pxor mm3, mm3 */
    _mm[7] = _mm[2]; /* 0x17216E48: movq mm7, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x17216E4B: punpcklwd mm2, mm3 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[3]); /* 0x17216E4E: punpckhwd mm7, mm3 */
    { uint64_t _v = _mm[2]; _xmm[0].f32[0] = (float)(int32_t)_v; _xmm[0].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x17216E51: cvtpi2ps xmm0, mm2 */
    { uint64_t _v = _mm[7]; _xmm[2].f32[0] = (float)(int32_t)_v; _xmm[2].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x17216E54: cvtpi2ps xmm2, mm7 */
    _xmm[0].u64[1] = _xmm[2].u64[0]; /* 0x17216E57: movlhps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17216E5A: mulps xmm0, xmm1 */
    _mm[0] = _mm[1]; /* 0x17216E5D: movq mm0, mm1 */
    _mm[7] = _mm[3]; /* 0x17216E60: movq mm7, mm3 */
    _mm[6] = MEM64(0x1723C180); /* 0x17216E63: movq mm6, qword ptr [0x1723c180] */
    _mm[2] = MEM64(0x1723C190); /* 0x17216E6A: movq mm2, qword ptr [0x1723c190] */
    _mm[6] = (_mm[6] & _mm[0]); /* 0x17216E71: pand mm6, mm0 */
    _mm[3] = _mm[6]; /* 0x17216E74: movq mm3, mm6 */
    _mm[2] = (_mm[2] & _mm[0]); /* 0x17216E77: pand mm2, mm0 */
    _mm[0] = (_mm[0] & MEM64(0x1723C170)); /* 0x17216E7A: pand mm0, qword ptr [0x1723c170] */
    _mm[3] = mmx_pcmpeqw(_mm[3], _mm[7]); /* 0x17216E81: pcmpeqw mm3, mm7 */
    _mm[3] = (~_mm[3] & MEM64(0x1723C160)); /* 0x17216E84: pandn mm3, qword ptr [0x1723c160] */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x17216E8B: por mm2, mm3 */
    _mm[3] = _mm[7]; /* 0x17216E8E: movq mm3, mm7 */
    void_lift_trap(0x17216E91u, "pmaxsw mm6, qword ptr [0x1723c1a0]");
    _mm[4] = MEM64(0x1723C1B0); /* 0x17216E98: movq mm4, qword ptr [0x1723c1b0] */
    _mm[3] = _mm[6]; /* 0x17216E9F: movq mm3, mm6 */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x17216EA2: punpcklwd mm6, mm7 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[7]); /* 0x17216EA5: punpckhwd mm3, mm7 */
    _mm[5] = _mm[7]; /* 0x17216EA8: movq mm5, mm7 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[0]); /* 0x17216EAB: punpcklwd mm5, mm0 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x17216EAE: punpckhwd mm7, mm0 */
    _mm[6] = mmx_paddd(_mm[6], _mm[4]); /* 0x17216EB1: paddd mm6, mm4 */
    _mm[3] = mmx_paddd(_mm[3], _mm[4]); /* 0x17216EB4: paddd mm3, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x17216EB7: pslld mm6, 0xd */
    _mm[3] = mmx_pslld(_mm[3], 13); /* 0x17216EBB: pslld mm3, 0xd */
    _mm[6] = (_mm[6] | _mm[5]); /* 0x17216EBF: por mm6, mm5 */
    _mm[3] = (_mm[3] | _mm[7]); /* 0x17216EC2: por mm3, mm7 */
    MEM64(esp) = _mm[6]; /* 0x17216EC5: movq qword ptr [esp], mm6 */
    MEM64(esp + 0x8) = _mm[3]; /* 0x17216EC9: movq qword ptr [esp + 8], mm3 */
    _xmm[1].u64[0] = MEM64(esp); /* 0x17216ECE: movlps xmm1, qword ptr [esp] */
    _xmm[1].u64[1] = MEM64(esp + 0x8); /* 0x17216ED2: movhps xmm1, qword ptr [esp + 8] */
    _mm[3] = (_mm[3] ^ _mm[3]); /* 0x17216ED7: pxor mm3, mm3 */
    _mm[7] = _mm[2]; /* 0x17216EDA: movq mm7, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x17216EDD: punpcklwd mm2, mm3 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[3]); /* 0x17216EE0: punpckhwd mm7, mm3 */
    { uint64_t _v = _mm[2]; _xmm[3].f32[0] = (float)(int32_t)_v; _xmm[3].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x17216EE3: cvtpi2ps xmm3, mm2 */
    { uint64_t _v = _mm[7]; _xmm[2].f32[0] = (float)(int32_t)_v; _xmm[2].f32[1] = (float)(int32_t)(_v >> 32); } /* 0x17216EE6: cvtpi2ps xmm2, mm7 */
    _xmm[3].u64[1] = _xmm[2].u64[0]; /* 0x17216EE9: movlhps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17216EEC: mulps xmm3, xmm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x17216EEF: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* emms */ /* 0x17216EF2: emms  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17216EF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_17216EFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17216EFAu);

L_17216EFA:
    edi = edi; /* 0x17216EFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17216EFC: push ebp */
    ebp = esp; /* 0x17216EFD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17216EFF: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 8 */ /* 0x17216F02: cmp dword ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17216F06: push ebx */
    PUSH32(esp, esi); /* 0x17216F07: push esi */
    PUSH32(esp, edi); /* 0x17216F08: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17216F09: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x17216F0C: mov dword ptr [ebp - 8], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_17216F5D; /* 0x17216F0F: jb 0x17216f5d */
L_17216F11:
    esi = MEM32(ebp + 0x10); /* 0x17216F11: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esi = esi & 0xFFFFFFF8u; /* 0x17216F14: and esi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x17216F17: mov dword ptr [ebp - 4], esi */
    edx = MEM32(ebp + (-0x4)); /* 0x17216F1A: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x17216F1D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17216F20: mov ecx, dword ptr [ebp + 8] */
L_17216F23:
    _mm[0] = MEM64(eax); /* 0x17216F23: movq mm0, qword ptr [eax] */
    _mm[1] = MEM64(eax + 0x8); /* 0x17216F26: movq mm1, qword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17216F2A: add eax, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17216DCB); /* 0x17216F2D: call 0x17216dcb */
    RECOMP_FLAGS_IN();
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x17216F32: movlps qword ptr [ecx], xmm0 */
    MEM64(ecx + 0x8) = _xmm[0].u64[1]; /* 0x17216F35: movhps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + 0x10) = _xmm[3].u64[0]; /* 0x17216F39: movlps qword ptr [ecx + 0x10], xmm3 */
    MEM64(ecx + 0x18) = _xmm[3].u64[1]; /* 0x17216F3D: movhps qword ptr [ecx + 0x18], xmm3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x17216F41: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x17216F44: sub edx, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_17216F23; /* 0x17216F47: jne 0x17216f23 */
L_17216F49:
    /* emms */ /* 0x17216F49: emms  */
    eax = MEM32(ebp + 0xC); /* 0x17216F4B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - esi; /* 0x17216F4E: sub dword ptr [ebp + 0x10], esi */
    _flag_k = FK_CMP;
    eax = eax + esi * 2; /* 0x17216F51: lea eax, [eax + esi*2] */
    MEM32(ebp + 0xC) = eax; /* 0x17216F54: mov dword ptr [ebp + 0xc], eax */
    eax = edi + esi * 4; /* 0x17216F57: lea eax, [edi + esi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x17216F5A: mov dword ptr [ebp + 8], eax */
L_17216F5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17216F5D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17216F5F: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17216FC6; /* 0x17216F62: jbe 0x17216fc6 */
L_17216F64:
    edi = 0x400u; /* 0x17216F64: mov edi, 0x400 */
L_17216F69:
    eax = MEM32(ebp + 0xC); /* 0x17216F69: mov eax, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM16(eax + ebx * 2); /* 0x17216F6C: movzx ecx, word ptr [eax + ebx*2] */
    edx = ecx; /* 0x17216F70: mov edx, ecx */
    esi = ecx; /* 0x17216F72: mov esi, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7C00u);
    edx = edx & 0x7C00u; /* 0x17216F74: and edx, 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF8000u);
    esi = esi & 0xFFFF8000u; /* 0x17216F7A: and esi, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((esi) >> 16) & 1u); /* 0x17216F80: shl esi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((esi << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 16u; /* 0x17216F80: shl esi, 0x10 */
    eax = edx; /* 0x17216F83: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17216F85: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17216F87: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x17216F89: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x17216F8B: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17216F91: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x17216F93: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17216F99; /* 0x17216F95: ja 0x17216f99 */
L_17216F97:
    edx = edi; /* 0x17216F97: mov edx, edi */
L_17216F99:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00019800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00019800u; /* 0x17216F99: add edx, 0x19800 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((edx) >> 19) & 1u); /* 0x17216F9F: shl edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 13u; /* 0x17216F9F: shl edx, 0xd */
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x17216FA2: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17216FA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x17216FA6: mov dword ptr [ebp - 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x17216FA9: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edx; /* 0x17216FAC: mov dword ptr [ebp - 4], edx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17216FB7; /* 0x17216FAF: jge 0x17216fb7 */
L_17216FB1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17216FB1: fadd dword ptr [0x1700142c] */
L_17216FB7:
    eax = MEM32(ebp + 0x8); /* 0x17216FB7: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17216FBA: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ebx * 4) = _v; } /* 0x17216FBD: fstp dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17216FC0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x17216FC1: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17216F69; /* 0x17216FC4: jb 0x17216f69 */
L_17216FC6:
    eax = MEM32(ebp + (-0x8)); /* 0x17216FC6: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x17216FC9: pop edi */
    esi = POP32_VAL(esp); /* 0x17216FCA: pop esi */
    ebx = POP32_VAL(esp); /* 0x17216FCB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17216FCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17216FCD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17216FD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17216FD5u);

L_17216FD5:
    edi = edi; /* 0x17216FD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17216FD7: push ebp */
    ebp = esp; /* 0x17216FD8: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x17216FDA: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17216FDD: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3] = xmm_ld(ecx); /* 0x17216FE0: movups xmm3, xmmword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x17216FE3: movss xmm2, dword ptr [eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17216FE7: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x17216FEB: movups xmm4, xmmword ptr [ecx + 0x10] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17216FEF: mulps xmm2, xmm3 */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x17216FF2: movss xmm1, dword ptr [eax + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17216FF7: shufps xmm1, xmm1, 0 */
    _xmm[3] = xmm_ld(ecx + 0x30); /* 0x17216FFB: movups xmm3, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17216FFF: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x17217002: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17217005: addps xmm2, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17217008: addps xmm2, xmm1 */
    xmm_st(eax, _xmm[2]); /* 0x1721700B: movups xmmword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x1721700E: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217011: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217012: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721701A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721701Au);

L_1721701A:
    edi = edi; /* 0x1721701A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721701C: push ebp */
    ebp = esp; /* 0x1721701D: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1721701F: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17217022: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3] = xmm_ld(ecx); /* 0x17217025: movups xmm3, xmmword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x17217028: movss xmm2, dword ptr [eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721702C: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x17217030: movups xmm4, xmmword ptr [ecx + 0x10] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217034: mulps xmm2, xmm3 */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x17217037: movss xmm1, dword ptr [eax + 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721703C: shufps xmm1, xmm1, 0 */
    _xmm[3] = xmm_ld(ecx + 0x30); /* 0x17217040: movups xmm3, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217044: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x17217047: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721704A: addps xmm2, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721704D: addps xmm2, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[0] = _d; } /* 0x17217050: rcpps xmm0, xmm2 */
    _xmm[1] = _xmm[0]; /* 0x17217053: movaps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217056: mulps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217059: addps xmm0, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721705C: mulps xmm1, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x1721705F: subps xmm0, xmm1 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x17217062: shufps xmm0, xmm0, 0xff */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217066: mulps xmm2, xmm0 */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x17217069: movlps qword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x1721706C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1721706F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217070: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217078(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217078u);

L_17217078:
    edi = edi; /* 0x17217078: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721707A: push ebp */
    ebp = esp; /* 0x1721707B: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1721707D: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17217080: mov eax, dword ptr [ebp + 0xc] */
    _xmm[2].u64[0] = MEM32(eax); _xmm[2].u64[1] = 0; /* 0x17217083: movss xmm2, dword ptr [eax] */
    _xmm[3] = xmm_ld(ecx); /* 0x17217087: movups xmm3, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721708A: shufps xmm2, xmm2, 0 */
    _xmm[4] = xmm_ld(ecx + 0x10); /* 0x1721708E: movups xmm4, xmmword ptr [ecx + 0x10] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x17217092: movss xmm1, dword ptr [eax + 4] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217097: mulps xmm2, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721709A: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721709E: mulps xmm1, xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x172170A1: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172170A4: addps xmm2, xmm1 */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x172170A7: movlps qword ptr [eax], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x172170AA: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172170AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x172170AE: ret 0xc */
    RECOMP_REGS_OUT();
}
