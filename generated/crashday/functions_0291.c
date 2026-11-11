#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007C9A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9A10u);

L_007C9A10:
    PUSH32(esp, 0x00441610u); /* 0x007C9A10: push 0x441610 */
    PUSH32(esp, 0x14u); /* 0x007C9A15: push 0x14 */
    PUSH32(esp, 0x30u); /* 0x007C9A17: push 0x30 */
    PUSH32(esp, 0x008FA7D0u); /* 0x007C9A19: push 0x8fa7d0 */
    RECOMP_CALL(sub_0077F628); /* 0x007C9A1E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9A23: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9A30u);

L_007C9A30:
    PUSH32(esp, ebp); /* 0x007C9A30: push ebp */
    ebp = esp; /* 0x007C9A31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9A33: push ecx */
    /* cmp MEM32(0x865A0C), 0x10u */ /* 0x007C9A34: cmp dword ptr [0x865a0c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A0C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9A65; /* 0x007C9A3B: jb 0x7c9a65 */
L_007C9A3D:
    PUSH32(esp, esi); /* 0x007C9A3D: push esi */
    esi = MEM32(0x8659F8); /* 0x007C9A3E: mov esi, dword ptr [0x8659f8] */
    ecx = ebp + (-0x1); /* 0x007C9A44: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9A47: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9A4C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9A4D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9A52: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9A55: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9A5A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9A5B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9A61: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9A64: pop esi */
L_007C9A65:
    MEM32(0x865A0C) = 0xFu; /* 0x007C9A65: mov dword ptr [0x865a0c], 0xf */
    MEM32(0x865A08) = 0; /* 0x007C9A6F: mov dword ptr [0x865a08], 0 */
    MEM8(0x8659F8) = (uint8_t)(0); /* 0x007C9A79: mov byte ptr [0x8659f8], 0 */
    esp = ebp; /* 0x007C9A80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9A82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9A83: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9A90u);

L_007C9A90:
    PUSH32(esp, ebp); /* 0x007C9A90: push ebp */
    ebp = esp; /* 0x007C9A91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9A93: push ecx */
    /* cmp MEM32(0x865A54), 0x10u */ /* 0x007C9A94: cmp dword ptr [0x865a54], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9AC5; /* 0x007C9A9B: jb 0x7c9ac5 */
L_007C9A9D:
    PUSH32(esp, esi); /* 0x007C9A9D: push esi */
    esi = MEM32(0x865A40); /* 0x007C9A9E: mov esi, dword ptr [0x865a40] */
    ecx = ebp + (-0x1); /* 0x007C9AA4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9AA7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9AAC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9AAD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9AB2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9AB5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9ABA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9ABB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9AC1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9AC4: pop esi */
L_007C9AC5:
    MEM32(0x865A54) = 0xFu; /* 0x007C9AC5: mov dword ptr [0x865a54], 0xf */
    MEM32(0x865A50) = 0; /* 0x007C9ACF: mov dword ptr [0x865a50], 0 */
    MEM8(0x865A40) = (uint8_t)(0); /* 0x007C9AD9: mov byte ptr [0x865a40], 0 */
    esp = ebp; /* 0x007C9AE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9AE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9AE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9AF0u);

L_007C9AF0:
    PUSH32(esp, ebp); /* 0x007C9AF0: push ebp */
    ebp = esp; /* 0x007C9AF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9AF3: push ecx */
    /* cmp MEM32(0x8659F4), 0x10u */ /* 0x007C9AF4: cmp dword ptr [0x8659f4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8659F4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9B25; /* 0x007C9AFB: jb 0x7c9b25 */
L_007C9AFD:
    PUSH32(esp, esi); /* 0x007C9AFD: push esi */
    esi = MEM32(0x8659E0); /* 0x007C9AFE: mov esi, dword ptr [0x8659e0] */
    ecx = ebp + (-0x1); /* 0x007C9B04: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9B07: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9B0C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9B0D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9B12: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9B15: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9B1A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9B1B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9B21: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9B24: pop esi */
L_007C9B25:
    MEM32(0x8659F4) = 0xFu; /* 0x007C9B25: mov dword ptr [0x8659f4], 0xf */
    MEM32(0x8659F0) = 0; /* 0x007C9B2F: mov dword ptr [0x8659f0], 0 */
    MEM8(0x8659E0) = (uint8_t)(0); /* 0x007C9B39: mov byte ptr [0x8659e0], 0 */
    esp = ebp; /* 0x007C9B40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9B42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9B43: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9B50u);

L_007C9B50:
    PUSH32(esp, ebp); /* 0x007C9B50: push ebp */
    ebp = esp; /* 0x007C9B51: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9B53: push ecx */
    /* cmp MEM32(0x865AB4), 0x10u */ /* 0x007C9B54: cmp dword ptr [0x865ab4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865AB4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9B85; /* 0x007C9B5B: jb 0x7c9b85 */
L_007C9B5D:
    PUSH32(esp, esi); /* 0x007C9B5D: push esi */
    esi = MEM32(0x865AA0); /* 0x007C9B5E: mov esi, dword ptr [0x865aa0] */
    ecx = ebp + (-0x1); /* 0x007C9B64: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9B67: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9B6C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9B6D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9B72: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9B75: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9B7A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9B7B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9B81: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9B84: pop esi */
L_007C9B85:
    MEM32(0x865AB4) = 0xFu; /* 0x007C9B85: mov dword ptr [0x865ab4], 0xf */
    MEM32(0x865AB0) = 0; /* 0x007C9B8F: mov dword ptr [0x865ab0], 0 */
    MEM8(0x865AA0) = (uint8_t)(0); /* 0x007C9B99: mov byte ptr [0x865aa0], 0 */
    esp = ebp; /* 0x007C9BA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9BA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9BA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9BB0u);

L_007C9BB0:
    PUSH32(esp, ebp); /* 0x007C9BB0: push ebp */
    ebp = esp; /* 0x007C9BB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9BB3: push ecx */
    /* cmp MEM32(0x865A84), 0x10u */ /* 0x007C9BB4: cmp dword ptr [0x865a84], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A84)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9BE5; /* 0x007C9BBB: jb 0x7c9be5 */
L_007C9BBD:
    PUSH32(esp, esi); /* 0x007C9BBD: push esi */
    esi = MEM32(0x865A70); /* 0x007C9BBE: mov esi, dword ptr [0x865a70] */
    ecx = ebp + (-0x1); /* 0x007C9BC4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9BC7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9BCC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9BCD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9BD2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9BD5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9BDA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9BDB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9BE1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9BE4: pop esi */
L_007C9BE5:
    MEM32(0x865A84) = 0xFu; /* 0x007C9BE5: mov dword ptr [0x865a84], 0xf */
    MEM32(0x865A80) = 0; /* 0x007C9BEF: mov dword ptr [0x865a80], 0 */
    MEM8(0x865A70) = (uint8_t)(0); /* 0x007C9BF9: mov byte ptr [0x865a70], 0 */
    esp = ebp; /* 0x007C9C00: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9C02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9C03: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9C10u);

L_007C9C10:
    PUSH32(esp, ebp); /* 0x007C9C10: push ebp */
    ebp = esp; /* 0x007C9C11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9C13: push ecx */
    /* cmp MEM32(0x865B04), 0x10u */ /* 0x007C9C14: cmp dword ptr [0x865b04], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B04)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9C45; /* 0x007C9C1B: jb 0x7c9c45 */
L_007C9C1D:
    PUSH32(esp, esi); /* 0x007C9C1D: push esi */
    esi = MEM32(0x865AF0); /* 0x007C9C1E: mov esi, dword ptr [0x865af0] */
    ecx = ebp + (-0x1); /* 0x007C9C24: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9C27: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9C2C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9C2D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9C32: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9C35: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9C3A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9C3B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9C41: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9C44: pop esi */
L_007C9C45:
    MEM32(0x865B04) = 0xFu; /* 0x007C9C45: mov dword ptr [0x865b04], 0xf */
    MEM32(0x865B00) = 0; /* 0x007C9C4F: mov dword ptr [0x865b00], 0 */
    MEM8(0x865AF0) = (uint8_t)(0); /* 0x007C9C59: mov byte ptr [0x865af0], 0 */
    esp = ebp; /* 0x007C9C60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9C62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9C63: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9C70u);

L_007C9C70:
    PUSH32(esp, ebp); /* 0x007C9C70: push ebp */
    ebp = esp; /* 0x007C9C71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9C73: push ecx */
    /* cmp MEM32(0x865ACC), 0x10u */ /* 0x007C9C74: cmp dword ptr [0x865acc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865ACC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9CA5; /* 0x007C9C7B: jb 0x7c9ca5 */
L_007C9C7D:
    PUSH32(esp, esi); /* 0x007C9C7D: push esi */
    esi = MEM32(0x865AB8); /* 0x007C9C7E: mov esi, dword ptr [0x865ab8] */
    ecx = ebp + (-0x1); /* 0x007C9C84: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9C87: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9C8C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9C8D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9C92: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9C95: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9C9A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9C9B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9CA1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9CA4: pop esi */
L_007C9CA5:
    MEM32(0x865ACC) = 0xFu; /* 0x007C9CA5: mov dword ptr [0x865acc], 0xf */
    MEM32(0x865AC8) = 0; /* 0x007C9CAF: mov dword ptr [0x865ac8], 0 */
    MEM8(0x865AB8) = (uint8_t)(0); /* 0x007C9CB9: mov byte ptr [0x865ab8], 0 */
    esp = ebp; /* 0x007C9CC0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9CC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9CC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9CD0u);

L_007C9CD0:
    PUSH32(esp, ebp); /* 0x007C9CD0: push ebp */
    ebp = esp; /* 0x007C9CD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C9CD3: push -1 */
    PUSH32(esp, 0x007A748Au); /* 0x007C9CD5: push 0x7a748a */
    eax = MEM32(FS_BASE + (0)); /* 0x007C9CDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C9CE0: push eax */
    PUSH32(esp, ecx); /* 0x007C9CE1: push ecx */
    PUSH32(esp, esi); /* 0x007C9CE2: push esi */
    eax = MEM32(0x855000); /* 0x007C9CE3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C9CE8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C9CEA: push eax */
    eax = ebp + (-0xC); /* 0x007C9CEB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C9CEE: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C9CF4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(0x865AE8), 0x10u */ /* 0x007C9CFB: cmp dword ptr [0x865ae8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865AE8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9D2A; /* 0x007C9D02: jb 0x7c9d2a */
L_007C9D04:
    esi = MEM32(0x865AD4); /* 0x007C9D04: mov esi, dword ptr [0x865ad4] */
    ecx = ebp + (-0xD); /* 0x007C9D0A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9D0D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9D12: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9D13: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C9D18: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9D1B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9D20: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9D21: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9D27: add esp, 4 */
    _flag_k = FK_ADD;
L_007C9D2A:
    MEM32(0x865AE8) = 0xFu; /* 0x007C9D2A: mov dword ptr [0x865ae8], 0xf */
    MEM32(0x865AE4) = 0; /* 0x007C9D34: mov dword ptr [0x865ae4], 0 */
    MEM8(0x865AD4) = (uint8_t)(0); /* 0x007C9D3E: mov byte ptr [0x865ad4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C9D45: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C9D48: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C9D4F: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C9D50: pop esi */
    esp = ebp; /* 0x007C9D51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9D53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9D54: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9D60u);

L_007C9D60:
    PUSH32(esp, ebp); /* 0x007C9D60: push ebp */
    ebp = esp; /* 0x007C9D61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9D63: push ecx */
    /* cmp MEM32(0x865A24), 0x10u */ /* 0x007C9D64: cmp dword ptr [0x865a24], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9D95; /* 0x007C9D6B: jb 0x7c9d95 */
L_007C9D6D:
    PUSH32(esp, esi); /* 0x007C9D6D: push esi */
    esi = MEM32(0x865A10); /* 0x007C9D6E: mov esi, dword ptr [0x865a10] */
    ecx = ebp + (-0x1); /* 0x007C9D74: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9D77: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9D7C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9D7D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9D82: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9D85: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9D8A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9D8B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9D91: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9D94: pop esi */
L_007C9D95:
    MEM32(0x865A24) = 0xFu; /* 0x007C9D95: mov dword ptr [0x865a24], 0xf */
    MEM32(0x865A20) = 0; /* 0x007C9D9F: mov dword ptr [0x865a20], 0 */
    MEM8(0x865A10) = (uint8_t)(0); /* 0x007C9DA9: mov byte ptr [0x865a10], 0 */
    esp = ebp; /* 0x007C9DB0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9DB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9DB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9DC0u);

L_007C9DC0:
    PUSH32(esp, ebp); /* 0x007C9DC0: push ebp */
    ebp = esp; /* 0x007C9DC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9DC3: push ecx */
    /* cmp MEM32(0x865A3C), 0x10u */ /* 0x007C9DC4: cmp dword ptr [0x865a3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9DF5; /* 0x007C9DCB: jb 0x7c9df5 */
L_007C9DCD:
    PUSH32(esp, esi); /* 0x007C9DCD: push esi */
    esi = MEM32(0x865A28); /* 0x007C9DCE: mov esi, dword ptr [0x865a28] */
    ecx = ebp + (-0x1); /* 0x007C9DD4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9DD7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9DDC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9DDD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9DE2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9DE5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9DEA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9DEB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9DF1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9DF4: pop esi */
L_007C9DF5:
    MEM32(0x865A3C) = 0xFu; /* 0x007C9DF5: mov dword ptr [0x865a3c], 0xf */
    MEM32(0x865A38) = 0; /* 0x007C9DFF: mov dword ptr [0x865a38], 0 */
    MEM8(0x865A28) = (uint8_t)(0); /* 0x007C9E09: mov byte ptr [0x865a28], 0 */
    esp = ebp; /* 0x007C9E10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9E13: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9E20u);

L_007C9E20:
    PUSH32(esp, ebp); /* 0x007C9E20: push ebp */
    ebp = esp; /* 0x007C9E21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9E23: push ecx */
    /* cmp MEM32(0x865A6C), 0x10u */ /* 0x007C9E24: cmp dword ptr [0x865a6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A6C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9E55; /* 0x007C9E2B: jb 0x7c9e55 */
L_007C9E2D:
    PUSH32(esp, esi); /* 0x007C9E2D: push esi */
    esi = MEM32(0x865A58); /* 0x007C9E2E: mov esi, dword ptr [0x865a58] */
    ecx = ebp + (-0x1); /* 0x007C9E34: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9E37: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9E3C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9E3D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9E42: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9E45: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9E4A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9E4B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9E51: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9E54: pop esi */
L_007C9E55:
    MEM32(0x865A6C) = 0xFu; /* 0x007C9E55: mov dword ptr [0x865a6c], 0xf */
    MEM32(0x865A68) = 0; /* 0x007C9E5F: mov dword ptr [0x865a68], 0 */
    MEM8(0x865A58) = (uint8_t)(0); /* 0x007C9E69: mov byte ptr [0x865a58], 0 */
    esp = ebp; /* 0x007C9E70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9E72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9E73: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9E80u);

L_007C9E80:
    PUSH32(esp, ebp); /* 0x007C9E80: push ebp */
    ebp = esp; /* 0x007C9E81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9E83: push ecx */
    /* cmp MEM32(0x865A9C), 0x10u */ /* 0x007C9E84: cmp dword ptr [0x865a9c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865A9C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9EB5; /* 0x007C9E8B: jb 0x7c9eb5 */
L_007C9E8D:
    PUSH32(esp, esi); /* 0x007C9E8D: push esi */
    esi = MEM32(0x865A88); /* 0x007C9E8E: mov esi, dword ptr [0x865a88] */
    ecx = ebp + (-0x1); /* 0x007C9E94: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9E97: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9E9C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9E9D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9EA2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9EA5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9EAA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9EAB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9EB1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9EB4: pop esi */
L_007C9EB5:
    MEM32(0x865A9C) = 0xFu; /* 0x007C9EB5: mov dword ptr [0x865a9c], 0xf */
    MEM32(0x865A98) = 0; /* 0x007C9EBF: mov dword ptr [0x865a98], 0 */
    MEM8(0x865A88) = (uint8_t)(0); /* 0x007C9EC9: mov byte ptr [0x865a88], 0 */
    esp = ebp; /* 0x007C9ED0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9ED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9ED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9EE0u);

L_007C9EE0:
    PUSH32(esp, ebp); /* 0x007C9EE0: push ebp */
    ebp = esp; /* 0x007C9EE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9EE3: push ecx */
    /* cmp MEM32(0x865B4C), 0x10u */ /* 0x007C9EE4: cmp dword ptr [0x865b4c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B4C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9F15; /* 0x007C9EEB: jb 0x7c9f15 */
L_007C9EED:
    PUSH32(esp, esi); /* 0x007C9EED: push esi */
    esi = MEM32(0x865B38); /* 0x007C9EEE: mov esi, dword ptr [0x865b38] */
    ecx = ebp + (-0x1); /* 0x007C9EF4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9EF7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9EFC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9EFD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9F02: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9F05: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9F0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9F0B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9F11: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9F14: pop esi */
L_007C9F15:
    MEM32(0x865B4C) = 0xFu; /* 0x007C9F15: mov dword ptr [0x865b4c], 0xf */
    MEM32(0x865B48) = 0; /* 0x007C9F1F: mov dword ptr [0x865b48], 0 */
    MEM8(0x865B38) = (uint8_t)(0); /* 0x007C9F29: mov byte ptr [0x865b38], 0 */
    esp = ebp; /* 0x007C9F30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9F32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9F33: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9F40u);

L_007C9F40:
    PUSH32(esp, ebp); /* 0x007C9F40: push ebp */
    ebp = esp; /* 0x007C9F41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9F43: push ecx */
    /* cmp MEM32(0x865B7C), 0x10u */ /* 0x007C9F44: cmp dword ptr [0x865b7c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B7C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9F75; /* 0x007C9F4B: jb 0x7c9f75 */
L_007C9F4D:
    PUSH32(esp, esi); /* 0x007C9F4D: push esi */
    esi = MEM32(0x865B68); /* 0x007C9F4E: mov esi, dword ptr [0x865b68] */
    ecx = ebp + (-0x1); /* 0x007C9F54: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9F57: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9F5C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9F5D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9F62: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9F65: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9F6A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9F6B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9F71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9F74: pop esi */
L_007C9F75:
    MEM32(0x865B7C) = 0xFu; /* 0x007C9F75: mov dword ptr [0x865b7c], 0xf */
    MEM32(0x865B78) = 0; /* 0x007C9F7F: mov dword ptr [0x865b78], 0 */
    MEM8(0x865B68) = (uint8_t)(0); /* 0x007C9F89: mov byte ptr [0x865b68], 0 */
    esp = ebp; /* 0x007C9F90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9F92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9F93: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9FA0u);

L_007C9FA0:
    PUSH32(esp, ebp); /* 0x007C9FA0: push ebp */
    ebp = esp; /* 0x007C9FA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9FA3: push ecx */
    /* cmp MEM32(0x865BC4), 0x10u */ /* 0x007C9FA4: cmp dword ptr [0x865bc4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865BC4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9FD5; /* 0x007C9FAB: jb 0x7c9fd5 */
L_007C9FAD:
    PUSH32(esp, esi); /* 0x007C9FAD: push esi */
    esi = MEM32(0x865BB0); /* 0x007C9FAE: mov esi, dword ptr [0x865bb0] */
    ecx = ebp + (-0x1); /* 0x007C9FB4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9FB7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C9FBC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C9FBD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9FC2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9FC5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C9FCA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9FCB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9FD1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9FD4: pop esi */
L_007C9FD5:
    MEM32(0x865BC4) = 0xFu; /* 0x007C9FD5: mov dword ptr [0x865bc4], 0xf */
    MEM32(0x865BC0) = 0; /* 0x007C9FDF: mov dword ptr [0x865bc0], 0 */
    MEM8(0x865BB0) = (uint8_t)(0); /* 0x007C9FE9: mov byte ptr [0x865bb0], 0 */
    esp = ebp; /* 0x007C9FF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9FF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA000u);

L_007CA000:
    PUSH32(esp, ebp); /* 0x007CA000: push ebp */
    ebp = esp; /* 0x007CA001: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA003: push ecx */
    /* cmp MEM32(0x865B1C), 0x10u */ /* 0x007CA004: cmp dword ptr [0x865b1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA035; /* 0x007CA00B: jb 0x7ca035 */
L_007CA00D:
    PUSH32(esp, esi); /* 0x007CA00D: push esi */
    esi = MEM32(0x865B08); /* 0x007CA00E: mov esi, dword ptr [0x865b08] */
    ecx = ebp + (-0x1); /* 0x007CA014: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA017: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA01C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA01D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA022: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA025: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA02A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA02B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA031: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA034: pop esi */
L_007CA035:
    MEM32(0x865B1C) = 0xFu; /* 0x007CA035: mov dword ptr [0x865b1c], 0xf */
    MEM32(0x865B18) = 0; /* 0x007CA03F: mov dword ptr [0x865b18], 0 */
    MEM8(0x865B08) = (uint8_t)(0); /* 0x007CA049: mov byte ptr [0x865b08], 0 */
    esp = ebp; /* 0x007CA050: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA053: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA060u);

L_007CA060:
    PUSH32(esp, ebp); /* 0x007CA060: push ebp */
    ebp = esp; /* 0x007CA061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA063: push ecx */
    /* cmp MEM32(0x865BAC), 0x10u */ /* 0x007CA064: cmp dword ptr [0x865bac], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865BAC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA095; /* 0x007CA06B: jb 0x7ca095 */
L_007CA06D:
    PUSH32(esp, esi); /* 0x007CA06D: push esi */
    esi = MEM32(0x865B98); /* 0x007CA06E: mov esi, dword ptr [0x865b98] */
    ecx = ebp + (-0x1); /* 0x007CA074: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA077: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA07C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA07D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA082: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA085: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA08A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA08B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA091: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA094: pop esi */
L_007CA095:
    MEM32(0x865BAC) = 0xFu; /* 0x007CA095: mov dword ptr [0x865bac], 0xf */
    MEM32(0x865BA8) = 0; /* 0x007CA09F: mov dword ptr [0x865ba8], 0 */
    MEM8(0x865B98) = (uint8_t)(0); /* 0x007CA0A9: mov byte ptr [0x865b98], 0 */
    esp = ebp; /* 0x007CA0B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA0B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA0B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA0C0u);

L_007CA0C0:
    PUSH32(esp, ebp); /* 0x007CA0C0: push ebp */
    ebp = esp; /* 0x007CA0C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA0C3: push ecx */
    /* cmp MEM32(0x865B94), 0x10u */ /* 0x007CA0C4: cmp dword ptr [0x865b94], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B94)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA0F5; /* 0x007CA0CB: jb 0x7ca0f5 */
L_007CA0CD:
    PUSH32(esp, esi); /* 0x007CA0CD: push esi */
    esi = MEM32(0x865B80); /* 0x007CA0CE: mov esi, dword ptr [0x865b80] */
    ecx = ebp + (-0x1); /* 0x007CA0D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA0D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA0DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA0DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA0E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA0E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA0EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA0EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA0F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA0F4: pop esi */
L_007CA0F5:
    MEM32(0x865B94) = 0xFu; /* 0x007CA0F5: mov dword ptr [0x865b94], 0xf */
    MEM32(0x865B90) = 0; /* 0x007CA0FF: mov dword ptr [0x865b90], 0 */
    MEM8(0x865B80) = (uint8_t)(0); /* 0x007CA109: mov byte ptr [0x865b80], 0 */
    esp = ebp; /* 0x007CA110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA113: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA120u);

L_007CA120:
    PUSH32(esp, ebp); /* 0x007CA120: push ebp */
    ebp = esp; /* 0x007CA121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA123: push ecx */
    /* cmp MEM32(0x865B64), 0x10u */ /* 0x007CA124: cmp dword ptr [0x865b64], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA155; /* 0x007CA12B: jb 0x7ca155 */
L_007CA12D:
    PUSH32(esp, esi); /* 0x007CA12D: push esi */
    esi = MEM32(0x865B50); /* 0x007CA12E: mov esi, dword ptr [0x865b50] */
    ecx = ebp + (-0x1); /* 0x007CA134: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA137: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA13C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA13D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA142: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA145: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA14A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA14B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA151: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA154: pop esi */
L_007CA155:
    MEM32(0x865B64) = 0xFu; /* 0x007CA155: mov dword ptr [0x865b64], 0xf */
    MEM32(0x865B60) = 0; /* 0x007CA15F: mov dword ptr [0x865b60], 0 */
    MEM8(0x865B50) = (uint8_t)(0); /* 0x007CA169: mov byte ptr [0x865b50], 0 */
    esp = ebp; /* 0x007CA170: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA172: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA173: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA180u);

L_007CA180:
    PUSH32(esp, ebp); /* 0x007CA180: push ebp */
    ebp = esp; /* 0x007CA181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA183: push ecx */
    /* cmp MEM32(0x865B34), 0x10u */ /* 0x007CA184: cmp dword ptr [0x865b34], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865B34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA1B5; /* 0x007CA18B: jb 0x7ca1b5 */
L_007CA18D:
    PUSH32(esp, esi); /* 0x007CA18D: push esi */
    esi = MEM32(0x865B20); /* 0x007CA18E: mov esi, dword ptr [0x865b20] */
    ecx = ebp + (-0x1); /* 0x007CA194: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA197: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA19C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA19D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA1A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA1A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA1AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA1AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA1B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA1B4: pop esi */
L_007CA1B5:
    MEM32(0x865B34) = 0xFu; /* 0x007CA1B5: mov dword ptr [0x865b34], 0xf */
    MEM32(0x865B30) = 0; /* 0x007CA1BF: mov dword ptr [0x865b30], 0 */
    MEM8(0x865B20) = (uint8_t)(0); /* 0x007CA1C9: mov byte ptr [0x865b20], 0 */
    esp = ebp; /* 0x007CA1D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA1D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA1D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA1E0u);

L_007CA1E0:
    PUSH32(esp, ebp); /* 0x007CA1E0: push ebp */
    ebp = esp; /* 0x007CA1E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA1E3: push ecx */
    /* cmp MEM32(0x865BDC), 0x10u */ /* 0x007CA1E4: cmp dword ptr [0x865bdc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865BDC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA215; /* 0x007CA1EB: jb 0x7ca215 */
L_007CA1ED:
    PUSH32(esp, esi); /* 0x007CA1ED: push esi */
    esi = MEM32(0x865BC8); /* 0x007CA1EE: mov esi, dword ptr [0x865bc8] */
    ecx = ebp + (-0x1); /* 0x007CA1F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA1F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA1FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA1FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA202: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA205: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA20A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA20B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA211: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA214: pop esi */
L_007CA215:
    MEM32(0x865BDC) = 0xFu; /* 0x007CA215: mov dword ptr [0x865bdc], 0xf */
    MEM32(0x865BD8) = 0; /* 0x007CA21F: mov dword ptr [0x865bd8], 0 */
    MEM8(0x865BC8) = (uint8_t)(0); /* 0x007CA229: mov byte ptr [0x865bc8], 0 */
    esp = ebp; /* 0x007CA230: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA232: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA233: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA240u);

L_007CA240:
    ecx = 0x008FABA0u; /* 0x007CA240: mov ecx, 0x8faba0 */
    goto L_0048A640; /* 0x007CA245: jmp 0x48a640 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A640: RECOMP_ITAIL(0x0048A640u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007CA250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA250u);

L_007CA250:
    PUSH32(esp, ebp); /* 0x007CA250: push ebp */
    ebp = esp; /* 0x007CA251: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA253: push ecx */
    /* cmp MEM32(0x865C0C), 0x10u */ /* 0x007CA254: cmp dword ptr [0x865c0c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C0C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA285; /* 0x007CA25B: jb 0x7ca285 */
L_007CA25D:
    PUSH32(esp, esi); /* 0x007CA25D: push esi */
    esi = MEM32(0x865BF8); /* 0x007CA25E: mov esi, dword ptr [0x865bf8] */
    ecx = ebp + (-0x1); /* 0x007CA264: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA267: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA26C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA26D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA272: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA275: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA27A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA27B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA281: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA284: pop esi */
L_007CA285:
    MEM32(0x865C0C) = 0xFu; /* 0x007CA285: mov dword ptr [0x865c0c], 0xf */
    MEM32(0x865C08) = 0; /* 0x007CA28F: mov dword ptr [0x865c08], 0 */
    MEM8(0x865BF8) = (uint8_t)(0); /* 0x007CA299: mov byte ptr [0x865bf8], 0 */
    esp = ebp; /* 0x007CA2A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA2A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA2A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA2B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA2B0u);

L_007CA2B0:
    PUSH32(esp, ebp); /* 0x007CA2B0: push ebp */
    ebp = esp; /* 0x007CA2B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA2B3: push ecx */
    /* cmp MEM32(0x865BF4), 0x10u */ /* 0x007CA2B4: cmp dword ptr [0x865bf4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865BF4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA2E5; /* 0x007CA2BB: jb 0x7ca2e5 */
L_007CA2BD:
    PUSH32(esp, esi); /* 0x007CA2BD: push esi */
    esi = MEM32(0x865BE0); /* 0x007CA2BE: mov esi, dword ptr [0x865be0] */
    ecx = ebp + (-0x1); /* 0x007CA2C4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA2C7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA2CC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA2CD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA2D2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA2D5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA2DA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA2DB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA2E1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA2E4: pop esi */
L_007CA2E5:
    MEM32(0x865BF4) = 0xFu; /* 0x007CA2E5: mov dword ptr [0x865bf4], 0xf */
    MEM32(0x865BF0) = 0; /* 0x007CA2EF: mov dword ptr [0x865bf0], 0 */
    MEM8(0x865BE0) = (uint8_t)(0); /* 0x007CA2F9: mov byte ptr [0x865be0], 0 */
    esp = ebp; /* 0x007CA300: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA303: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA310u);

L_007CA310:
    ecx = 0x0091A450u; /* 0x007CA310: mov ecx, 0x91a450 */
    goto L_005A3EE0; /* 0x007CA315: jmp 0x5a3ee0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005A3EE0: RECOMP_ITAIL(0x005A3EE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007CA320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA320u);

L_007CA320:
    PUSH32(esp, ebp); /* 0x007CA320: push ebp */
    ebp = esp; /* 0x007CA321: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA323: push ecx */
    /* cmp MEM32(0x865C24), 0x10u */ /* 0x007CA324: cmp dword ptr [0x865c24], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA355; /* 0x007CA32B: jb 0x7ca355 */
L_007CA32D:
    PUSH32(esp, esi); /* 0x007CA32D: push esi */
    esi = MEM32(0x865C10); /* 0x007CA32E: mov esi, dword ptr [0x865c10] */
    ecx = ebp + (-0x1); /* 0x007CA334: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA337: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA33C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA33D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA342: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA345: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA34A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA34B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA351: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA354: pop esi */
L_007CA355:
    MEM32(0x865C24) = 0xFu; /* 0x007CA355: mov dword ptr [0x865c24], 0xf */
    MEM32(0x865C20) = 0; /* 0x007CA35F: mov dword ptr [0x865c20], 0 */
    MEM8(0x865C10) = (uint8_t)(0); /* 0x007CA369: mov byte ptr [0x865c10], 0 */
    esp = ebp; /* 0x007CA370: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA372: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA373: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA380u);

L_007CA380:
    PUSH32(esp, ebp); /* 0x007CA380: push ebp */
    ebp = esp; /* 0x007CA381: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA383: push ecx */
    /* cmp MEM32(0x865C3C), 0x10u */ /* 0x007CA384: cmp dword ptr [0x865c3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA3B5; /* 0x007CA38B: jb 0x7ca3b5 */
L_007CA38D:
    PUSH32(esp, esi); /* 0x007CA38D: push esi */
    esi = MEM32(0x865C28); /* 0x007CA38E: mov esi, dword ptr [0x865c28] */
    ecx = ebp + (-0x1); /* 0x007CA394: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA397: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA39C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA39D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA3A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA3A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA3AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA3AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA3B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA3B4: pop esi */
L_007CA3B5:
    MEM32(0x865C3C) = 0xFu; /* 0x007CA3B5: mov dword ptr [0x865c3c], 0xf */
    MEM32(0x865C38) = 0; /* 0x007CA3BF: mov dword ptr [0x865c38], 0 */
    MEM8(0x865C28) = (uint8_t)(0); /* 0x007CA3C9: mov byte ptr [0x865c28], 0 */
    esp = ebp; /* 0x007CA3D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA3D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA3D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA3E0u);

L_007CA3E0:
    PUSH32(esp, ebp); /* 0x007CA3E0: push ebp */
    ebp = esp; /* 0x007CA3E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA3E3: push ecx */
    /* cmp MEM32(0x865C6C), 0x10u */ /* 0x007CA3E4: cmp dword ptr [0x865c6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C6C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA415; /* 0x007CA3EB: jb 0x7ca415 */
L_007CA3ED:
    PUSH32(esp, esi); /* 0x007CA3ED: push esi */
    esi = MEM32(0x865C58); /* 0x007CA3EE: mov esi, dword ptr [0x865c58] */
    ecx = ebp + (-0x1); /* 0x007CA3F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA3F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA3FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA3FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA402: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA405: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA40A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA40B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA411: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA414: pop esi */
L_007CA415:
    MEM32(0x865C6C) = 0xFu; /* 0x007CA415: mov dword ptr [0x865c6c], 0xf */
    MEM32(0x865C68) = 0; /* 0x007CA41F: mov dword ptr [0x865c68], 0 */
    MEM8(0x865C58) = (uint8_t)(0); /* 0x007CA429: mov byte ptr [0x865c58], 0 */
    esp = ebp; /* 0x007CA430: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA432: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA433: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA440u);

L_007CA440:
    PUSH32(esp, ebp); /* 0x007CA440: push ebp */
    ebp = esp; /* 0x007CA441: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA443: push ecx */
    /* cmp MEM32(0x865C54), 0x10u */ /* 0x007CA444: cmp dword ptr [0x865c54], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA475; /* 0x007CA44B: jb 0x7ca475 */
L_007CA44D:
    PUSH32(esp, esi); /* 0x007CA44D: push esi */
    esi = MEM32(0x865C40); /* 0x007CA44E: mov esi, dword ptr [0x865c40] */
    ecx = ebp + (-0x1); /* 0x007CA454: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA457: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA45C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA45D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA462: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA465: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA46A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA46B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA471: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA474: pop esi */
L_007CA475:
    MEM32(0x865C54) = 0xFu; /* 0x007CA475: mov dword ptr [0x865c54], 0xf */
    MEM32(0x865C50) = 0; /* 0x007CA47F: mov dword ptr [0x865c50], 0 */
    MEM8(0x865C40) = (uint8_t)(0); /* 0x007CA489: mov byte ptr [0x865c40], 0 */
    esp = ebp; /* 0x007CA490: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA492: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA493: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA4A0u);

L_007CA4A0:
    PUSH32(esp, ebp); /* 0x007CA4A0: push ebp */
    ebp = esp; /* 0x007CA4A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA4A3: push ecx */
    /* cmp MEM32(0x865C84), 0x10u */ /* 0x007CA4A4: cmp dword ptr [0x865c84], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C84)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA4D5; /* 0x007CA4AB: jb 0x7ca4d5 */
L_007CA4AD:
    PUSH32(esp, esi); /* 0x007CA4AD: push esi */
    esi = MEM32(0x865C70); /* 0x007CA4AE: mov esi, dword ptr [0x865c70] */
    ecx = ebp + (-0x1); /* 0x007CA4B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA4B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA4BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA4BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA4C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA4C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA4CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA4CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA4D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA4D4: pop esi */
L_007CA4D5:
    MEM32(0x865C84) = 0xFu; /* 0x007CA4D5: mov dword ptr [0x865c84], 0xf */
    MEM32(0x865C80) = 0; /* 0x007CA4DF: mov dword ptr [0x865c80], 0 */
    MEM8(0x865C70) = (uint8_t)(0); /* 0x007CA4E9: mov byte ptr [0x865c70], 0 */
    esp = ebp; /* 0x007CA4F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA4F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA4F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA500u);

L_007CA500:
    PUSH32(esp, ebp); /* 0x007CA500: push ebp */
    ebp = esp; /* 0x007CA501: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA503: push ecx */
    /* cmp MEM32(0x865C9C), 0x10u */ /* 0x007CA504: cmp dword ptr [0x865c9c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865C9C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA535; /* 0x007CA50B: jb 0x7ca535 */
L_007CA50D:
    PUSH32(esp, esi); /* 0x007CA50D: push esi */
    esi = MEM32(0x865C88); /* 0x007CA50E: mov esi, dword ptr [0x865c88] */
    ecx = ebp + (-0x1); /* 0x007CA514: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA517: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA51C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA51D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA522: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA525: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA52A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA52B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA531: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA534: pop esi */
L_007CA535:
    MEM32(0x865C9C) = 0xFu; /* 0x007CA535: mov dword ptr [0x865c9c], 0xf */
    MEM32(0x865C98) = 0; /* 0x007CA53F: mov dword ptr [0x865c98], 0 */
    MEM8(0x865C88) = (uint8_t)(0); /* 0x007CA549: mov byte ptr [0x865c88], 0 */
    esp = ebp; /* 0x007CA550: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA552: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA553: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA560u);

L_007CA560:
    PUSH32(esp, ebp); /* 0x007CA560: push ebp */
    ebp = esp; /* 0x007CA561: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA563: push ecx */
    /* cmp MEM32(0x865CB4), 0x10u */ /* 0x007CA564: cmp dword ptr [0x865cb4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865CB4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA595; /* 0x007CA56B: jb 0x7ca595 */
L_007CA56D:
    PUSH32(esp, esi); /* 0x007CA56D: push esi */
    esi = MEM32(0x865CA0); /* 0x007CA56E: mov esi, dword ptr [0x865ca0] */
    ecx = ebp + (-0x1); /* 0x007CA574: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA577: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA57C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA57D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA582: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA585: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA58A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA58B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA591: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA594: pop esi */
L_007CA595:
    MEM32(0x865CB4) = 0xFu; /* 0x007CA595: mov dword ptr [0x865cb4], 0xf */
    MEM32(0x865CB0) = 0; /* 0x007CA59F: mov dword ptr [0x865cb0], 0 */
    MEM8(0x865CA0) = (uint8_t)(0); /* 0x007CA5A9: mov byte ptr [0x865ca0], 0 */
    esp = ebp; /* 0x007CA5B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA5B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA5B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA5C0u);

L_007CA5C0:
    PUSH32(esp, ebp); /* 0x007CA5C0: push ebp */
    ebp = esp; /* 0x007CA5C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA5C3: push ecx */
    /* cmp MEM32(0x865DD4), 0x10u */ /* 0x007CA5C4: cmp dword ptr [0x865dd4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865DD4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA5F5; /* 0x007CA5CB: jb 0x7ca5f5 */
L_007CA5CD:
    PUSH32(esp, esi); /* 0x007CA5CD: push esi */
    esi = MEM32(0x865DC0); /* 0x007CA5CE: mov esi, dword ptr [0x865dc0] */
    ecx = ebp + (-0x1); /* 0x007CA5D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA5D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA5DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA5DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA5E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA5E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA5EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA5EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA5F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA5F4: pop esi */
L_007CA5F5:
    MEM32(0x865DD4) = 0xFu; /* 0x007CA5F5: mov dword ptr [0x865dd4], 0xf */
    MEM32(0x865DD0) = 0; /* 0x007CA5FF: mov dword ptr [0x865dd0], 0 */
    MEM8(0x865DC0) = (uint8_t)(0); /* 0x007CA609: mov byte ptr [0x865dc0], 0 */
    esp = ebp; /* 0x007CA610: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA612: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA613: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA620u);

L_007CA620:
    PUSH32(esp, ebp); /* 0x007CA620: push ebp */
    ebp = esp; /* 0x007CA621: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA623: push ecx */
    /* cmp MEM32(0x865DBC), 0x10u */ /* 0x007CA624: cmp dword ptr [0x865dbc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865DBC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA655; /* 0x007CA62B: jb 0x7ca655 */
L_007CA62D:
    PUSH32(esp, esi); /* 0x007CA62D: push esi */
    esi = MEM32(0x865DA8); /* 0x007CA62E: mov esi, dword ptr [0x865da8] */
    ecx = ebp + (-0x1); /* 0x007CA634: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA637: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA63C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA63D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA642: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA645: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA64A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA64B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA651: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA654: pop esi */
L_007CA655:
    MEM32(0x865DBC) = 0xFu; /* 0x007CA655: mov dword ptr [0x865dbc], 0xf */
    MEM32(0x865DB8) = 0; /* 0x007CA65F: mov dword ptr [0x865db8], 0 */
    MEM8(0x865DA8) = (uint8_t)(0); /* 0x007CA669: mov byte ptr [0x865da8], 0 */
    esp = ebp; /* 0x007CA670: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA672: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA673: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA680u);

L_007CA680:
    PUSH32(esp, 0x0040A000u); /* 0x007CA680: push 0x40a000 */
    PUSH32(esp, 2); /* 0x007CA685: push 2 */
    PUSH32(esp, 0x18u); /* 0x007CA687: push 0x18 */
    PUSH32(esp, 0x00865CB8u); /* 0x007CA689: push 0x865cb8 */
    RECOMP_CALL(sub_0077F628); /* 0x007CA68E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA693: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA6A0u);

L_007CA6A0:
    PUSH32(esp, 0x0040A000u); /* 0x007CA6A0: push 0x40a000 */
    PUSH32(esp, 4); /* 0x007CA6A5: push 4 */
    PUSH32(esp, 0x18u); /* 0x007CA6A7: push 0x18 */
    PUSH32(esp, 0x00865CE8u); /* 0x007CA6A9: push 0x865ce8 */
    RECOMP_CALL(sub_0077F628); /* 0x007CA6AE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA6B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA6C0u);

L_007CA6C0:
    PUSH32(esp, 0x0040A000u); /* 0x007CA6C0: push 0x40a000 */
    PUSH32(esp, 4); /* 0x007CA6C5: push 4 */
    PUSH32(esp, 0x18u); /* 0x007CA6C7: push 0x18 */
    PUSH32(esp, 0x00865D48u); /* 0x007CA6C9: push 0x865d48 */
    RECOMP_CALL(sub_0077F628); /* 0x007CA6CE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA6D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA6E0u);

L_007CA6E0:
    PUSH32(esp, ebp); /* 0x007CA6E0: push ebp */
    ebp = esp; /* 0x007CA6E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA6E3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x007CA6E6: push edi */
    edi = MEM32(0x91FFB8); /* 0x007CA6E7: mov edi, dword ptr [0x91ffb8] */
    /* test edi, edi */ /* 0x007CA6ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007CA747; /* 0x007CA6EF: je 0x7ca747 */
L_007CA6F1:
    PUSH32(esp, esi); /* 0x007CA6F1: push esi */
    esi = MEM32(0x91FFBC); /* 0x007CA6F2: mov esi, dword ptr [0x91ffbc] */
    eax = ebp + (-0x1); /* 0x007CA6F8: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x007CA6FB: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x007CA6FC: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x5))); /* 0x007CA701: push dword ptr [ebp - 5] */
    edx = esi; /* 0x007CA704: mov edx, esi */
    PUSH32(esp, ecx); /* 0x007CA706: push ecx */
    ecx = edi; /* 0x007CA707: mov ecx, edi */
    RECOMP_CALL(sub_005E10E0); /* 0x007CA709: call 0x5e10e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007CA70E: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x1); /* 0x007CA711: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA714: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x91FFB8)); /* 0x007CA719: push dword ptr [0x91ffb8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA71F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA725: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x91FFB8) = 0; /* 0x007CA728: mov dword ptr [0x91ffb8], 0 */
    MEM32(0x91FFBC) = 0; /* 0x007CA732: mov dword ptr [0x91ffbc], 0 */
    MEM32(0x91FFC0) = 0; /* 0x007CA73C: mov dword ptr [0x91ffc0], 0 */
    esi = POP32_VAL(esp); /* 0x007CA746: pop esi */
L_007CA747:
    edi = POP32_VAL(esp); /* 0x007CA747: pop edi */
    esp = ebp; /* 0x007CA748: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA74A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA74B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA750u);

L_007CA750:
    PUSH32(esp, ebp); /* 0x007CA750: push ebp */
    ebp = esp; /* 0x007CA751: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA753: push ecx */
    /* cmp MEM32(0x865DEC), 0x10u */ /* 0x007CA754: cmp dword ptr [0x865dec], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865DEC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA785; /* 0x007CA75B: jb 0x7ca785 */
L_007CA75D:
    PUSH32(esp, esi); /* 0x007CA75D: push esi */
    esi = MEM32(0x865DD8); /* 0x007CA75E: mov esi, dword ptr [0x865dd8] */
    ecx = ebp + (-0x1); /* 0x007CA764: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA767: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA76C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA76D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA772: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA775: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA77A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA77B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA781: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA784: pop esi */
L_007CA785:
    MEM32(0x865DEC) = 0xFu; /* 0x007CA785: mov dword ptr [0x865dec], 0xf */
    MEM32(0x865DE8) = 0; /* 0x007CA78F: mov dword ptr [0x865de8], 0 */
    MEM8(0x865DD8) = (uint8_t)(0); /* 0x007CA799: mov byte ptr [0x865dd8], 0 */
    esp = ebp; /* 0x007CA7A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA7A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA7A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA7B0u);

L_007CA7B0:
    PUSH32(esp, 0x0040A000u); /* 0x007CA7B0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007CA7B5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007CA7B7: push 0x18 */
    PUSH32(esp, 0x00865DF0u); /* 0x007CA7B9: push 0x865df0 */
    RECOMP_CALL(sub_0077F628); /* 0x007CA7BE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA7C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA7D0u);

L_007CA7D0:
    PUSH32(esp, ebp); /* 0x007CA7D0: push ebp */
    ebp = esp; /* 0x007CA7D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CA7D3: push -1 */
    PUSH32(esp, 0x007B4C3Au); /* 0x007CA7D5: push 0x7b4c3a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CA7DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CA7E0: push eax */
    eax = MEM32(0x855000); /* 0x007CA7E1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CA7E6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CA7E8: push eax */
    eax = ebp + (-0xC); /* 0x007CA7E9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CA7EC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CA7F2: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x00920010u; /* 0x007CA7F9: mov ecx, 0x920010 */
    RECOMP_CALL(sub_0060CF00); /* 0x007CA7FE: call 0x60cf00 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x007CA803: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CA806: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CA80D: pop ecx */
    esp = ebp; /* 0x007CA80E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA810: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA811: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA820u);

L_007CA820:
    PUSH32(esp, ebp); /* 0x007CA820: push ebp */
    ebp = esp; /* 0x007CA821: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA823: push ecx */
    /* cmp MEM32(0x865E64), 0x10u */ /* 0x007CA824: cmp dword ptr [0x865e64], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865E64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CA855; /* 0x007CA82B: jb 0x7ca855 */
L_007CA82D:
    PUSH32(esp, esi); /* 0x007CA82D: push esi */
    esi = MEM32(0x865E50); /* 0x007CA82E: mov esi, dword ptr [0x865e50] */
    ecx = ebp + (-0x1); /* 0x007CA834: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA837: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CA83C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CA83D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA842: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA845: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CA84A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA84B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA851: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CA854: pop esi */
L_007CA855:
    MEM32(0x865E64) = 0xFu; /* 0x007CA855: mov dword ptr [0x865e64], 0xf */
    MEM32(0x865E60) = 0; /* 0x007CA85F: mov dword ptr [0x865e60], 0 */
    MEM8(0x865E50) = (uint8_t)(0); /* 0x007CA869: mov byte ptr [0x865e50], 0 */
    esp = ebp; /* 0x007CA870: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA872: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA873: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA880u);

L_007CA880:
    PUSH32(esp, ebp); /* 0x007CA880: push ebp */
    ebp = esp; /* 0x007CA881: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA883: push ecx */
    /* cmp MEM32(0x9281A4), 0 */ /* 0x007CA884: cmp dword ptr [0x9281a4], 0 */
    _flag_a = (uint32_t)(MEM32(0x9281A4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CA8CA; /* 0x007CA88B: je 0x7ca8ca */
L_007CA88D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA88D: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CA890: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA895: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA898: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x9281A4)); /* 0x007CA89D: push dword ptr [0x9281a4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA8A3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA8A9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x9281A4) = 0; /* 0x007CA8AC: mov dword ptr [0x9281a4], 0 */
    MEM32(0x9281A8) = 0; /* 0x007CA8B6: mov dword ptr [0x9281a8], 0 */
    MEM32(0x9281AC) = 0; /* 0x007CA8C0: mov dword ptr [0x9281ac], 0 */
L_007CA8CA:
    esp = ebp; /* 0x007CA8CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA8CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA8CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA8D0u);

L_007CA8D0:
    PUSH32(esp, ebp); /* 0x007CA8D0: push ebp */
    ebp = esp; /* 0x007CA8D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA8D3: push ecx */
    /* cmp MEM32(0x92815C), 0 */ /* 0x007CA8D4: cmp dword ptr [0x92815c], 0 */
    _flag_a = (uint32_t)(MEM32(0x92815C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CA91A; /* 0x007CA8DB: je 0x7ca91a */
L_007CA8DD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA8DD: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CA8E0: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA8E5: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA8E8: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x92815C)); /* 0x007CA8ED: push dword ptr [0x92815c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA8F3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA8F9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x92815C) = 0; /* 0x007CA8FC: mov dword ptr [0x92815c], 0 */
    MEM32(0x928160) = 0; /* 0x007CA906: mov dword ptr [0x928160], 0 */
    MEM32(0x928164) = 0; /* 0x007CA910: mov dword ptr [0x928164], 0 */
L_007CA91A:
    esp = ebp; /* 0x007CA91A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA91C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA91D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA920u);

L_007CA920:
    PUSH32(esp, ebp); /* 0x007CA920: push ebp */
    ebp = esp; /* 0x007CA921: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA923: push ecx */
    /* cmp MEM32(0x928170), 0 */ /* 0x007CA924: cmp dword ptr [0x928170], 0 */
    _flag_a = (uint32_t)(MEM32(0x928170)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CA96A; /* 0x007CA92B: je 0x7ca96a */
L_007CA92D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA92D: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CA930: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA935: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA938: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x928170)); /* 0x007CA93D: push dword ptr [0x928170] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA943: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA949: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x928170) = 0; /* 0x007CA94C: mov dword ptr [0x928170], 0 */
    MEM32(0x928174) = 0; /* 0x007CA956: mov dword ptr [0x928174], 0 */
    MEM32(0x928178) = 0; /* 0x007CA960: mov dword ptr [0x928178], 0 */
L_007CA96A:
    esp = ebp; /* 0x007CA96A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA96C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA96D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA970u);

L_007CA970:
    PUSH32(esp, ebp); /* 0x007CA970: push ebp */
    ebp = esp; /* 0x007CA971: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA973: push ecx */
    /* cmp MEM32(0x92817C), 0 */ /* 0x007CA974: cmp dword ptr [0x92817c], 0 */
    _flag_a = (uint32_t)(MEM32(0x92817C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CA9BA; /* 0x007CA97B: je 0x7ca9ba */
L_007CA97D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA97D: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CA980: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA985: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA988: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x92817C)); /* 0x007CA98D: push dword ptr [0x92817c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA993: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA999: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x92817C) = 0; /* 0x007CA99C: mov dword ptr [0x92817c], 0 */
    MEM32(0x928180) = 0; /* 0x007CA9A6: mov dword ptr [0x928180], 0 */
    MEM32(0x928184) = 0; /* 0x007CA9B0: mov dword ptr [0x928184], 0 */
L_007CA9BA:
    esp = ebp; /* 0x007CA9BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CA9BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CA9BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CA9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CA9C0u);

L_007CA9C0:
    PUSH32(esp, ebp); /* 0x007CA9C0: push ebp */
    ebp = esp; /* 0x007CA9C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CA9C3: push ecx */
    /* cmp MEM32(0x928190), 0 */ /* 0x007CA9C4: cmp dword ptr [0x928190], 0 */
    _flag_a = (uint32_t)(MEM32(0x928190)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CAA0A; /* 0x007CA9CB: je 0x7caa0a */
L_007CA9CD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CA9CD: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CA9D0: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CA9D5: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CA9D8: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x928190)); /* 0x007CA9DD: push dword ptr [0x928190] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CA9E3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CA9E9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x928190) = 0; /* 0x007CA9EC: mov dword ptr [0x928190], 0 */
    MEM32(0x928194) = 0; /* 0x007CA9F6: mov dword ptr [0x928194], 0 */
    MEM32(0x928198) = 0; /* 0x007CAA00: mov dword ptr [0x928198], 0 */
L_007CAA0A:
    esp = ebp; /* 0x007CAA0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAA0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAA0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAA10u);

L_007CAA10:
    PUSH32(esp, ebp); /* 0x007CAA10: push ebp */
    ebp = esp; /* 0x007CAA11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CAA13: push ecx */
    /* cmp MEM32(0x928150), 0 */ /* 0x007CAA14: cmp dword ptr [0x928150], 0 */
    _flag_a = (uint32_t)(MEM32(0x928150)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CAA5A; /* 0x007CAA1B: je 0x7caa5a */
L_007CAA1D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CAA1D: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CAA20: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CAA25: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CAA28: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x928150)); /* 0x007CAA2D: push dword ptr [0x928150] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CAA33: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CAA39: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x928150) = 0; /* 0x007CAA3C: mov dword ptr [0x928150], 0 */
    MEM32(0x928154) = 0; /* 0x007CAA46: mov dword ptr [0x928154], 0 */
    MEM32(0x928158) = 0; /* 0x007CAA50: mov dword ptr [0x928158], 0 */
L_007CAA5A:
    esp = ebp; /* 0x007CAA5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAA5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAA5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAA60u);

L_007CAA60:
    PUSH32(esp, ebp); /* 0x007CAA60: push ebp */
    ebp = esp; /* 0x007CAA61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAA63: push -1 */
    PUSH32(esp, 0x007B6CEAu); /* 0x007CAA65: push 0x7b6cea */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAA6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAA70: push eax */
    eax = MEM32(0x855000); /* 0x007CAA71: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAA76: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAA78: push eax */
    eax = ebp + (-0xC); /* 0x007CAA79: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAA7C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAA82: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927BEC) = 0x007F8E20u; /* 0x007CAA89: mov dword ptr [0x927bec], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAA93: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAA96: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAA9D: pop ecx */
    esp = ebp; /* 0x007CAA9E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAAA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAAA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAAB0u);

L_007CAAB0:
    PUSH32(esp, ebp); /* 0x007CAAB0: push ebp */
    ebp = esp; /* 0x007CAAB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAAB3: push -1 */
    PUSH32(esp, 0x007B6D5Au); /* 0x007CAAB5: push 0x7b6d5a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAABA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAAC0: push eax */
    eax = MEM32(0x855000); /* 0x007CAAC1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAAC6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAAC8: push eax */
    eax = ebp + (-0xC); /* 0x007CAAC9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAACC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAAD2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927C04) = 0x007F8E20u; /* 0x007CAAD9: mov dword ptr [0x927c04], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAAE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAAE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAAED: pop ecx */
    esp = ebp; /* 0x007CAAEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAAF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAAF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAB00u);

L_007CAB00:
    PUSH32(esp, ebp); /* 0x007CAB00: push ebp */
    ebp = esp; /* 0x007CAB01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAB03: push -1 */
    PUSH32(esp, 0x007B6DCAu); /* 0x007CAB05: push 0x7b6dca */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAB0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAB10: push eax */
    eax = MEM32(0x855000); /* 0x007CAB11: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAB16: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAB18: push eax */
    eax = ebp + (-0xC); /* 0x007CAB19: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAB1C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAB22: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927BDC) = 0x007F8E20u; /* 0x007CAB29: mov dword ptr [0x927bdc], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAB33: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAB36: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAB3D: pop ecx */
    esp = ebp; /* 0x007CAB3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAB40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAB41: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAB50u);

L_007CAB50:
    PUSH32(esp, ebp); /* 0x007CAB50: push ebp */
    ebp = esp; /* 0x007CAB51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAB53: push -1 */
    PUSH32(esp, 0x007B6E3Au); /* 0x007CAB55: push 0x7b6e3a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAB5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAB60: push eax */
    eax = MEM32(0x855000); /* 0x007CAB61: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAB66: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAB68: push eax */
    eax = ebp + (-0xC); /* 0x007CAB69: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAB6C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAB72: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927BF8) = 0x007F8E20u; /* 0x007CAB79: mov dword ptr [0x927bf8], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAB83: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAB86: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAB8D: pop ecx */
    esp = ebp; /* 0x007CAB8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAB90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAB91: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CABA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CABA0u);

L_007CABA0:
    PUSH32(esp, ebp); /* 0x007CABA0: push ebp */
    ebp = esp; /* 0x007CABA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CABA3: push -1 */
    PUSH32(esp, 0x007B6EAAu); /* 0x007CABA5: push 0x7b6eaa */
    eax = MEM32(FS_BASE + (0)); /* 0x007CABAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CABB0: push eax */
    eax = MEM32(0x855000); /* 0x007CABB1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CABB6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CABB8: push eax */
    eax = ebp + (-0xC); /* 0x007CABB9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CABBC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CABC2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927C1C) = 0x007F8E20u; /* 0x007CABC9: mov dword ptr [0x927c1c], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CABD3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CABD6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CABDD: pop ecx */
    esp = ebp; /* 0x007CABDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CABE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CABE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CABF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CABF0u);

L_007CABF0:
    PUSH32(esp, ebp); /* 0x007CABF0: push ebp */
    ebp = esp; /* 0x007CABF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CABF3: push -1 */
    PUSH32(esp, 0x007B6F1Au); /* 0x007CABF5: push 0x7b6f1a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CABFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAC00: push eax */
    eax = MEM32(0x855000); /* 0x007CAC01: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAC06: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAC08: push eax */
    eax = ebp + (-0xC); /* 0x007CAC09: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAC0C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAC12: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927C30) = 0x007F8E20u; /* 0x007CAC19: mov dword ptr [0x927c30], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAC23: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAC26: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAC2D: pop ecx */
    esp = ebp; /* 0x007CAC2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAC30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAC31: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAC40u);

L_007CAC40:
    PUSH32(esp, ebp); /* 0x007CAC40: push ebp */
    ebp = esp; /* 0x007CAC41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAC43: push -1 */
    PUSH32(esp, 0x007B6F84u); /* 0x007CAC45: push 0x7b6f84 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAC4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAC50: push eax */
    PUSH32(esp, ecx); /* 0x007CAC51: push ecx */
    eax = MEM32(0x855000); /* 0x007CAC52: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAC57: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAC59: push eax */
    eax = ebp + (-0xC); /* 0x007CAC5A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAC5D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007CAC63: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(0x865E8C), 0 */ /* 0x007CAC6A: cmp dword ptr [0x865e8c], 0 */
    _flag_a = (uint32_t)(MEM32(0x865E8C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CACB0; /* 0x007CAC71: je 0x7cacb0 */
L_007CAC73:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CAC73: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CAC76: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CAC7B: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CAC7E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x865E8C)); /* 0x007CAC83: push dword ptr [0x865e8c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CAC89: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CAC8F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x865E8C) = 0; /* 0x007CAC92: mov dword ptr [0x865e8c], 0 */
    MEM32(0x865E90) = 0; /* 0x007CAC9C: mov dword ptr [0x865e90], 0 */
    MEM32(0x865E94) = 0; /* 0x007CACA6: mov dword ptr [0x865e94], 0 */
L_007CACB0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CACB0: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x865E80) = 0x007F8E20u; /* 0x007CACB7: mov dword ptr [0x865e80], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CACC1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CACC4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CACCB: pop ecx */
    esp = ebp; /* 0x007CACCC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CACCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CACCF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CACD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CACD0u);

L_007CACD0:
    PUSH32(esp, ebp); /* 0x007CACD0: push ebp */
    ebp = esp; /* 0x007CACD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CACD3: push -1 */
    PUSH32(esp, 0x007B7644u); /* 0x007CACD5: push 0x7b7644 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CACDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CACE0: push eax */
    PUSH32(esp, ecx); /* 0x007CACE1: push ecx */
    eax = MEM32(0x855000); /* 0x007CACE2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CACE7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CACE9: push eax */
    eax = ebp + (-0xC); /* 0x007CACEA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CACED: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007CACF3: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(0x865EA4), 0 */ /* 0x007CACFA: cmp dword ptr [0x865ea4], 0 */
    _flag_a = (uint32_t)(MEM32(0x865EA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CAD40; /* 0x007CAD01: je 0x7cad40 */
L_007CAD03:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CAD03: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CAD06: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CAD0B: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CAD0E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x865EA4)); /* 0x007CAD13: push dword ptr [0x865ea4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CAD19: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CAD1F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x865EA4) = 0; /* 0x007CAD22: mov dword ptr [0x865ea4], 0 */
    MEM32(0x865EA8) = 0; /* 0x007CAD2C: mov dword ptr [0x865ea8], 0 */
    MEM32(0x865EAC) = 0; /* 0x007CAD36: mov dword ptr [0x865eac], 0 */
L_007CAD40:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAD40: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x865E98) = 0x007F8E20u; /* 0x007CAD47: mov dword ptr [0x865e98], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAD51: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAD54: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAD5B: pop ecx */
    esp = ebp; /* 0x007CAD5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAD5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAD5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAD60u);

L_007CAD60:
    PUSH32(esp, ebp); /* 0x007CAD60: push ebp */
    ebp = esp; /* 0x007CAD61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAD63: push -1 */
    PUSH32(esp, 0x007B7994u); /* 0x007CAD65: push 0x7b7994 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAD6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAD70: push eax */
    PUSH32(esp, ecx); /* 0x007CAD71: push ecx */
    eax = MEM32(0x855000); /* 0x007CAD72: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAD77: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAD79: push eax */
    eax = ebp + (-0xC); /* 0x007CAD7A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAD7D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007CAD83: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(0x865E44), 0 */ /* 0x007CAD8A: cmp dword ptr [0x865e44], 0 */
    _flag_a = (uint32_t)(MEM32(0x865E44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CADD0; /* 0x007CAD91: je 0x7cadd0 */
L_007CAD93:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CAD93: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CAD96: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CAD9B: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CAD9E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x865E44)); /* 0x007CADA3: push dword ptr [0x865e44] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CADA9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CADAF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x865E44) = 0; /* 0x007CADB2: mov dword ptr [0x865e44], 0 */
    MEM32(0x865E48) = 0; /* 0x007CADBC: mov dword ptr [0x865e48], 0 */
    MEM32(0x865E4C) = 0; /* 0x007CADC6: mov dword ptr [0x865e4c], 0 */
L_007CADD0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CADD0: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x865E38) = 0x007F8E20u; /* 0x007CADD7: mov dword ptr [0x865e38], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CADE1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CADE4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CADEB: pop ecx */
    esp = ebp; /* 0x007CADEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CADEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CADEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CADF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CADF0u);

L_007CADF0:
    PUSH32(esp, ebp); /* 0x007CADF0: push ebp */
    ebp = esp; /* 0x007CADF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CADF3: push -1 */
    PUSH32(esp, 0x007B7A24u); /* 0x007CADF5: push 0x7b7a24 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CADFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAE00: push eax */
    PUSH32(esp, ecx); /* 0x007CAE01: push ecx */
    eax = MEM32(0x855000); /* 0x007CAE02: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAE07: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAE09: push eax */
    eax = ebp + (-0xC); /* 0x007CAE0A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAE0D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007CAE13: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(0x865E74), 0 */ /* 0x007CAE1A: cmp dword ptr [0x865e74], 0 */
    _flag_a = (uint32_t)(MEM32(0x865E74)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007CAE60; /* 0x007CAE21: je 0x7cae60 */
L_007CAE23:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CAE23: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007CAE26: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CAE2B: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CAE2E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x865E74)); /* 0x007CAE33: push dword ptr [0x865e74] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CAE39: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CAE3F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x865E74) = 0; /* 0x007CAE42: mov dword ptr [0x865e74], 0 */
    MEM32(0x865E78) = 0; /* 0x007CAE4C: mov dword ptr [0x865e78], 0 */
    MEM32(0x865E7C) = 0; /* 0x007CAE56: mov dword ptr [0x865e7c], 0 */
L_007CAE60:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAE60: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x865E68) = 0x007F8E20u; /* 0x007CAE67: mov dword ptr [0x865e68], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAE71: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAE74: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAE7B: pop ecx */
    esp = ebp; /* 0x007CAE7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAE7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAE7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAE80u);

L_007CAE80:
    PUSH32(esp, ebp); /* 0x007CAE80: push ebp */
    ebp = esp; /* 0x007CAE81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAE83: push -1 */
    PUSH32(esp, 0x007B7ADAu); /* 0x007CAE85: push 0x7b7ada */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAE8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAE90: push eax */
    eax = MEM32(0x855000); /* 0x007CAE91: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAE96: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAE98: push eax */
    eax = ebp + (-0xC); /* 0x007CAE99: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAE9C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAEA2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x9281EC) = 0x007F8E20u; /* 0x007CAEA9: mov dword ptr [0x9281ec], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAEB3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAEB6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAEBD: pop ecx */
    esp = ebp; /* 0x007CAEBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAEC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAEC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAED0u);

L_007CAED0:
    PUSH32(esp, ebp); /* 0x007CAED0: push ebp */
    ebp = esp; /* 0x007CAED1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAED3: push -1 */
    PUSH32(esp, 0x007B7B0Au); /* 0x007CAED5: push 0x7b7b0a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAEDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAEE0: push eax */
    eax = MEM32(0x855000); /* 0x007CAEE1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAEE6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAEE8: push eax */
    eax = ebp + (-0xC); /* 0x007CAEE9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAEEC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAEF2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x9281D0) = 0x007F8E20u; /* 0x007CAEF9: mov dword ptr [0x9281d0], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAF03: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAF06: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAF0D: pop ecx */
    esp = ebp; /* 0x007CAF0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAF10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAF11: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAF20u);

L_007CAF20:
    PUSH32(esp, ebp); /* 0x007CAF20: push ebp */
    ebp = esp; /* 0x007CAF21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAF23: push -1 */
    PUSH32(esp, 0x007B7B3Au); /* 0x007CAF25: push 0x7b7b3a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAF2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAF30: push eax */
    eax = MEM32(0x855000); /* 0x007CAF31: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAF36: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAF38: push eax */
    eax = ebp + (-0xC); /* 0x007CAF39: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAF3C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAF42: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x9281B0) = 0x007F8E20u; /* 0x007CAF49: mov dword ptr [0x9281b0], 0x7f8e20 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAF53: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAF56: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAF5D: pop ecx */
    esp = ebp; /* 0x007CAF5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAF60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAF61: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAF70u);

L_007CAF70:
    PUSH32(esp, ebp); /* 0x007CAF70: push ebp */
    ebp = esp; /* 0x007CAF71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAF73: push -1 */
    PUSH32(esp, 0x007B823Au); /* 0x007CAF75: push 0x7b823a */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAF7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAF80: push eax */
    eax = MEM32(0x855000); /* 0x007CAF81: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAF86: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAF88: push eax */
    eax = ebp + (-0xC); /* 0x007CAF89: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAF8C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAF92: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x00920060u; /* 0x007CAF99: mov ecx, 0x920060 */
    RECOMP_CALL(sub_0060CF00); /* 0x007CAF9E: call 0x60cf00 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAFA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAFA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAFAD: pop ecx */
    esp = ebp; /* 0x007CAFAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAFB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAFB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CAFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CAFC0u);

L_007CAFC0:
    PUSH32(esp, ebp); /* 0x007CAFC0: push ebp */
    ebp = esp; /* 0x007CAFC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CAFC3: push -1 */
    PUSH32(esp, 0x007B9155u); /* 0x007CAFC5: push 0x7b9155 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CAFCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CAFD0: push eax */
    eax = MEM32(0x855000); /* 0x007CAFD1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CAFD6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CAFD8: push eax */
    eax = ebp + (-0xC); /* 0x007CAFD9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CAFDC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CAFE2: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_006382A0); /* 0x007CAFE9: call 0x6382a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x007CAFEE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CAFF1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CAFF8: pop ecx */
    esp = ebp; /* 0x007CAFF9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CAFFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CAFFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB000u);

L_007CB000:
    PUSH32(esp, ebp); /* 0x007CB000: push ebp */
    ebp = esp; /* 0x007CB001: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB003: push ecx */
    /* cmp MEM32(0x865EC4), 0x10u */ /* 0x007CB004: cmp dword ptr [0x865ec4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865EC4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB035; /* 0x007CB00B: jb 0x7cb035 */
L_007CB00D:
    PUSH32(esp, esi); /* 0x007CB00D: push esi */
    esi = MEM32(0x865EB0); /* 0x007CB00E: mov esi, dword ptr [0x865eb0] */
    ecx = ebp + (-0x1); /* 0x007CB014: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB017: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB01C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB01D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB022: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB025: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB02A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB02B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB031: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB034: pop esi */
L_007CB035:
    MEM32(0x865EC4) = 0xFu; /* 0x007CB035: mov dword ptr [0x865ec4], 0xf */
    MEM32(0x865EC0) = 0; /* 0x007CB03F: mov dword ptr [0x865ec0], 0 */
    MEM8(0x865EB0) = (uint8_t)(0); /* 0x007CB049: mov byte ptr [0x865eb0], 0 */
    esp = ebp; /* 0x007CB050: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB053: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB060u);

L_007CB060:
    PUSH32(esp, ebp); /* 0x007CB060: push ebp */
    ebp = esp; /* 0x007CB061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB063: push ecx */
    /* cmp MEM32(0x865EDC), 0x10u */ /* 0x007CB064: cmp dword ptr [0x865edc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865EDC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB095; /* 0x007CB06B: jb 0x7cb095 */
L_007CB06D:
    PUSH32(esp, esi); /* 0x007CB06D: push esi */
    esi = MEM32(0x865EC8); /* 0x007CB06E: mov esi, dword ptr [0x865ec8] */
    ecx = ebp + (-0x1); /* 0x007CB074: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB077: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB07C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB07D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB082: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB085: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB08A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB08B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB091: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB094: pop esi */
L_007CB095:
    MEM32(0x865EDC) = 0xFu; /* 0x007CB095: mov dword ptr [0x865edc], 0xf */
    MEM32(0x865ED8) = 0; /* 0x007CB09F: mov dword ptr [0x865ed8], 0 */
    MEM8(0x865EC8) = (uint8_t)(0); /* 0x007CB0A9: mov byte ptr [0x865ec8], 0 */
    esp = ebp; /* 0x007CB0B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB0B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB0B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB0C0u);

L_007CB0C0:
    PUSH32(esp, ebp); /* 0x007CB0C0: push ebp */
    ebp = esp; /* 0x007CB0C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB0C3: push ecx */
    /* cmp MEM32(0x865EF4), 0x10u */ /* 0x007CB0C4: cmp dword ptr [0x865ef4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865EF4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB0F5; /* 0x007CB0CB: jb 0x7cb0f5 */
L_007CB0CD:
    PUSH32(esp, esi); /* 0x007CB0CD: push esi */
    esi = MEM32(0x865EE0); /* 0x007CB0CE: mov esi, dword ptr [0x865ee0] */
    ecx = ebp + (-0x1); /* 0x007CB0D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB0D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB0DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB0DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB0E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB0E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB0EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB0EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB0F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB0F4: pop esi */
L_007CB0F5:
    MEM32(0x865EF4) = 0xFu; /* 0x007CB0F5: mov dword ptr [0x865ef4], 0xf */
    MEM32(0x865EF0) = 0; /* 0x007CB0FF: mov dword ptr [0x865ef0], 0 */
    MEM8(0x865EE0) = (uint8_t)(0); /* 0x007CB109: mov byte ptr [0x865ee0], 0 */
    esp = ebp; /* 0x007CB110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB113: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB120u);

L_007CB120:
    PUSH32(esp, ebp); /* 0x007CB120: push ebp */
    ebp = esp; /* 0x007CB121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB123: push ecx */
    /* cmp MEM32(0x865F0C), 0x10u */ /* 0x007CB124: cmp dword ptr [0x865f0c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F0C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB155; /* 0x007CB12B: jb 0x7cb155 */
L_007CB12D:
    PUSH32(esp, esi); /* 0x007CB12D: push esi */
    esi = MEM32(0x865EF8); /* 0x007CB12E: mov esi, dword ptr [0x865ef8] */
    ecx = ebp + (-0x1); /* 0x007CB134: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB137: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB13C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB13D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB142: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB145: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB14A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB14B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB151: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB154: pop esi */
L_007CB155:
    MEM32(0x865F0C) = 0xFu; /* 0x007CB155: mov dword ptr [0x865f0c], 0xf */
    MEM32(0x865F08) = 0; /* 0x007CB15F: mov dword ptr [0x865f08], 0 */
    MEM8(0x865EF8) = (uint8_t)(0); /* 0x007CB169: mov byte ptr [0x865ef8], 0 */
    esp = ebp; /* 0x007CB170: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB172: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB173: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB180u);

L_007CB180:
    PUSH32(esp, ebp); /* 0x007CB180: push ebp */
    ebp = esp; /* 0x007CB181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB183: push ecx */
    /* cmp MEM32(0x865F24), 0x10u */ /* 0x007CB184: cmp dword ptr [0x865f24], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB1B5; /* 0x007CB18B: jb 0x7cb1b5 */
L_007CB18D:
    PUSH32(esp, esi); /* 0x007CB18D: push esi */
    esi = MEM32(0x865F10); /* 0x007CB18E: mov esi, dword ptr [0x865f10] */
    ecx = ebp + (-0x1); /* 0x007CB194: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB197: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB19C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB19D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB1A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB1A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB1AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB1AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB1B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB1B4: pop esi */
L_007CB1B5:
    MEM32(0x865F24) = 0xFu; /* 0x007CB1B5: mov dword ptr [0x865f24], 0xf */
    MEM32(0x865F20) = 0; /* 0x007CB1BF: mov dword ptr [0x865f20], 0 */
    MEM8(0x865F10) = (uint8_t)(0); /* 0x007CB1C9: mov byte ptr [0x865f10], 0 */
    esp = ebp; /* 0x007CB1D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB1D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB1D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB1E0u);

L_007CB1E0:
    PUSH32(esp, ebp); /* 0x007CB1E0: push ebp */
    ebp = esp; /* 0x007CB1E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CB1E3: push -1 */
    PUSH32(esp, 0x007BC2D8u); /* 0x007CB1E5: push 0x7bc2d8 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CB1EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CB1F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CB1F1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007CB1F4: push esi */
    eax = MEM32(0x855000); /* 0x007CB1F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CB1FA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CB1FC: push eax */
    eax = ebp + (-0xC); /* 0x007CB1FD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CB200: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007CB206: mov dword ptr [ebp - 4], 1 */
    ecx = 0x00921990u; /* 0x007CB20D: mov ecx, 0x921990 */
    eax = MEM32(0x921990); /* 0x007CB212: mov eax, dword ptr [0x921990] */
    PUSH32(esp, eax); /* 0x007CB217: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x007CB218: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x007CB21A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007CB21D: push eax */
    RECOMP_CALL(sub_00666AC0); /* 0x007CB21E: call 0x666ac0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CB223: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007CB22A: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x921990); /* 0x007CB22D: mov esi, dword ptr [0x921990] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB233: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB238: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB239: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB23E: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB241: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB246: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB247: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB24C: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB24F: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB254: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB255: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB25A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB25D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB262: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB263: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB269: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007CB26C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CB26F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CB276: pop ecx */
    esi = POP32_VAL(esp); /* 0x007CB277: pop esi */
    esp = ebp; /* 0x007CB278: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB27A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB27B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB280u);

L_007CB280:
    PUSH32(esp, ebp); /* 0x007CB280: push ebp */
    ebp = esp; /* 0x007CB281: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB283: push ecx */
    /* cmp MEM32(0x865F3C), 0x10u */ /* 0x007CB284: cmp dword ptr [0x865f3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB2B5; /* 0x007CB28B: jb 0x7cb2b5 */
L_007CB28D:
    PUSH32(esp, esi); /* 0x007CB28D: push esi */
    esi = MEM32(0x865F28); /* 0x007CB28E: mov esi, dword ptr [0x865f28] */
    ecx = ebp + (-0x1); /* 0x007CB294: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB297: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB29C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB29D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB2A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB2A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB2AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB2AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB2B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB2B4: pop esi */
L_007CB2B5:
    MEM32(0x865F3C) = 0xFu; /* 0x007CB2B5: mov dword ptr [0x865f3c], 0xf */
    MEM32(0x865F38) = 0; /* 0x007CB2BF: mov dword ptr [0x865f38], 0 */
    MEM8(0x865F28) = (uint8_t)(0); /* 0x007CB2C9: mov byte ptr [0x865f28], 0 */
    esp = ebp; /* 0x007CB2D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB2D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB2D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB2E0u);

L_007CB2E0:
    PUSH32(esp, 0x00489930u); /* 0x007CB2E0: push 0x489930 */
    PUSH32(esp, 0x64u); /* 0x007CB2E5: push 0x64 */
    PUSH32(esp, 0x34u); /* 0x007CB2E7: push 0x34 */
    PUSH32(esp, 0x009219C0u); /* 0x007CB2E9: push 0x9219c0 */
    RECOMP_CALL(sub_0077F628); /* 0x007CB2EE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB2F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB300u);

L_007CB300:
    PUSH32(esp, ebp); /* 0x007CB300: push ebp */
    ebp = esp; /* 0x007CB301: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB303: push ecx */
    /* cmp MEM32(0x865F6C), 0x10u */ /* 0x007CB304: cmp dword ptr [0x865f6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F6C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB335; /* 0x007CB30B: jb 0x7cb335 */
L_007CB30D:
    PUSH32(esp, esi); /* 0x007CB30D: push esi */
    esi = MEM32(0x865F58); /* 0x007CB30E: mov esi, dword ptr [0x865f58] */
    ecx = ebp + (-0x1); /* 0x007CB314: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB317: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB31C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB31D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB322: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB325: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB32A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB32B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB331: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB334: pop esi */
L_007CB335:
    MEM32(0x865F6C) = 0xFu; /* 0x007CB335: mov dword ptr [0x865f6c], 0xf */
    MEM32(0x865F68) = 0; /* 0x007CB33F: mov dword ptr [0x865f68], 0 */
    MEM8(0x865F58) = (uint8_t)(0); /* 0x007CB349: mov byte ptr [0x865f58], 0 */
    esp = ebp; /* 0x007CB350: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB352: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB353: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB360u);

L_007CB360:
    PUSH32(esp, ebp); /* 0x007CB360: push ebp */
    ebp = esp; /* 0x007CB361: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB363: push ecx */
    /* cmp MEM32(0x865F54), 0x10u */ /* 0x007CB364: cmp dword ptr [0x865f54], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865F54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB395; /* 0x007CB36B: jb 0x7cb395 */
L_007CB36D:
    PUSH32(esp, esi); /* 0x007CB36D: push esi */
    esi = MEM32(0x865F40); /* 0x007CB36E: mov esi, dword ptr [0x865f40] */
    ecx = ebp + (-0x1); /* 0x007CB374: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB377: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB37C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB37D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB382: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB385: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB38A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB38B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB391: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB394: pop esi */
L_007CB395:
    MEM32(0x865F54) = 0xFu; /* 0x007CB395: mov dword ptr [0x865f54], 0xf */
    MEM32(0x865F50) = 0; /* 0x007CB39F: mov dword ptr [0x865f50], 0 */
    MEM8(0x865F40) = (uint8_t)(0); /* 0x007CB3A9: mov byte ptr [0x865f40], 0 */
    esp = ebp; /* 0x007CB3B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB3B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB3B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB3C0u);

L_007CB3C0:
    PUSH32(esp, ebp); /* 0x007CB3C0: push ebp */
    ebp = esp; /* 0x007CB3C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CB3C3: push -1 */
    PUSH32(esp, 0x007BE8D5u); /* 0x007CB3C5: push 0x7be8d5 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CB3CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CB3D0: push eax */
    eax = MEM32(0x855000); /* 0x007CB3D1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CB3D6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CB3D8: push eax */
    eax = ebp + (-0xC); /* 0x007CB3D9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CB3DC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CB3E2: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_006832B0); /* 0x007CB3E9: call 0x6832b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x007CB3EE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CB3F1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CB3F8: pop ecx */
    esp = ebp; /* 0x007CB3F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB3FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB3FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB400u);

L_007CB400:
    /* cmp MEM32(0x92854C), 0 */ /* 0x007CB400: cmp dword ptr [0x92854c], 0 */
    _flag_a = (uint32_t)(MEM32(0x92854C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_007CB422; /* 0x007CB407: jbe 0x7cb422 */
L_007CB409:
    PUSH32(esp, MEM32(0x928544)); /* 0x007CB409: push dword ptr [0x928544] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007CB40F: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB415: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x92854C) = 0; /* 0x007CB418: mov dword ptr [0x92854c], 0 */
L_007CB422:
    MEM32(0x928548) = 0; /* 0x007CB422: mov dword ptr [0x928548], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB42C: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB430u);

L_007CB430:
    /* cmp MEM32(0x928540), 0 */ /* 0x007CB430: cmp dword ptr [0x928540], 0 */
    _flag_a = (uint32_t)(MEM32(0x928540)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_007CB452; /* 0x007CB437: jbe 0x7cb452 */
L_007CB439:
    PUSH32(esp, MEM32(0x928538)); /* 0x007CB439: push dword ptr [0x928538] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007CB43F: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB445: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x928540) = 0; /* 0x007CB448: mov dword ptr [0x928540], 0 */
L_007CB452:
    MEM32(0x92853C) = 0; /* 0x007CB452: mov dword ptr [0x92853c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB45C: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB460u);

L_007CB460:
    PUSH32(esp, 0x0040A000u); /* 0x007CB460: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007CB465: push 3 */
    PUSH32(esp, 0x18u); /* 0x007CB467: push 0x18 */
    PUSH32(esp, 0x00865F70u); /* 0x007CB469: push 0x865f70 */
    RECOMP_CALL(sub_0077F628); /* 0x007CB46E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB473: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB480u);

L_007CB480:
    PUSH32(esp, 0x0040A000u); /* 0x007CB480: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007CB485: push 3 */
    PUSH32(esp, 0x18u); /* 0x007CB487: push 0x18 */
    PUSH32(esp, 0x00866008u); /* 0x007CB489: push 0x866008 */
    RECOMP_CALL(sub_0077F628); /* 0x007CB48E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB493: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB4A0u);

L_007CB4A0:
    PUSH32(esp, ebp); /* 0x007CB4A0: push ebp */
    ebp = esp; /* 0x007CB4A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007CB4A3: push -1 */
    PUSH32(esp, 0x007C45D8u); /* 0x007CB4A5: push 0x7c45d8 */
    eax = MEM32(FS_BASE + (0)); /* 0x007CB4AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007CB4B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007CB4B1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007CB4B4: push esi */
    eax = MEM32(0x855000); /* 0x007CB4B5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007CB4BA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007CB4BC: push eax */
    eax = ebp + (-0xC); /* 0x007CB4BD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007CB4C0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007CB4C6: mov dword ptr [ebp - 4], 1 */
    ecx = 0x00922EB4u; /* 0x007CB4CD: mov ecx, 0x922eb4 */
    eax = MEM32(0x922EB4); /* 0x007CB4D2: mov eax, dword ptr [0x922eb4] */
    PUSH32(esp, eax); /* 0x007CB4D7: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x007CB4D8: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x007CB4DA: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007CB4DD: push eax */
    RECOMP_CALL(sub_00666AC0); /* 0x007CB4DE: call 0x666ac0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007CB4E3: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007CB4EA: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x922EB4); /* 0x007CB4ED: mov esi, dword ptr [0x922eb4] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB4F3: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB4F8: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB4F9: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB4FE: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB501: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB506: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB507: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB50C: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB50F: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB514: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB515: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007CB51A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB51D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB522: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB523: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB529: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007CB52C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007CB52F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007CB536: pop ecx */
    esi = POP32_VAL(esp); /* 0x007CB537: pop esi */
    esp = ebp; /* 0x007CB538: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB53A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB53B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB540u);

L_007CB540:
    PUSH32(esp, ebp); /* 0x007CB540: push ebp */
    ebp = esp; /* 0x007CB541: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007CB543: push ecx */
    /* cmp MEM32(0x866064), 0x10u */ /* 0x007CB544: cmp dword ptr [0x866064], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x866064)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007CB575; /* 0x007CB54B: jb 0x7cb575 */
L_007CB54D:
    PUSH32(esp, esi); /* 0x007CB54D: push esi */
    esi = MEM32(0x866050); /* 0x007CB54E: mov esi, dword ptr [0x866050] */
    ecx = ebp + (-0x1); /* 0x007CB554: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB557: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007CB55C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007CB55D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007CB562: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007CB565: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007CB56A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007CB56B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007CB571: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007CB574: pop esi */
L_007CB575:
    MEM32(0x866064) = 0xFu; /* 0x007CB575: mov dword ptr [0x866064], 0xf */
    MEM32(0x866060) = 0; /* 0x007CB57F: mov dword ptr [0x866060], 0 */
    MEM8(0x866050) = (uint8_t)(0); /* 0x007CB589: mov byte ptr [0x866050], 0 */
    esp = ebp; /* 0x007CB590: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007CB592: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007CB593: ret  */
    RECOMP_REGS_OUT();
}

void sub_007CB594(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007CB594u);

    goto L_007CB594;
L_0077F433:
    PUSH32(esp, esi); /* 0x0077F433: push esi */
    goto L_0077F44B; /* 0x0077F434: jmp 0x77f44b */
L_0077F436:
    eax = MEM32(esi); /* 0x0077F436: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0077F438: mov ecx, esi */
    MEM32(0x868A60) = eax; /* 0x0077F43A: mov dword ptr [0x868a60], eax */
    RECOMP_CALL(sub_0077F41E); /* 0x0077F43F: call 0x77f41e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0077F444: push esi */
    RECOMP_CALL(sub_0077F5D2); /* 0x0077F445: call 0x77f5d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F44A: pop ecx */
L_0077F44B:
    esi = MEM32(0x868A60); /* 0x0077F44B: mov esi, dword ptr [0x868a60] */
    /* test esi, esi */ /* 0x0077F451: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077F436; /* 0x0077F453: jne 0x77f436 */
L_0077F455:
    esi = POP32_VAL(esp); /* 0x0077F455: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F456: ret  */
L_007CB594:
    ecx = 0x00868A64u; /* 0x007CB594: mov ecx, 0x868a64 */
    RECOMP_BACKEDGE();
    goto L_0077F433; /* 0x007CB599: jmp 0x77f433 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
