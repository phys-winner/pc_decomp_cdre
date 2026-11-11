#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121C2E76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2E76u);

L_121C2E76:
    edx = MEM32(esp + 0x8); /* 0x121C2E76: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2E7A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x121C2E7D: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2E80: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2E82: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5598u; /* 0x121C2E87: mov eax, 0x121c5598 */
    goto L_12018725; /* 0x121C2E8C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2EB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2EB1u);

L_121C2EB1:
    edx = MEM32(esp + 0x8); /* 0x121C2EB1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2EB5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x121C2EB8: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2EBE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2EC0: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C55D4u; /* 0x121C2EC5: mov eax, 0x121c55d4 */
    goto L_12018725; /* 0x121C2ECA: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2EEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2EECu);

L_121C2EEC:
    edx = MEM32(esp + 0x8); /* 0x121C2EEC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2EF0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x121C2EF3: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2EF6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2EF8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5608u; /* 0x121C2EFD: mov eax, 0x121c5608 */
    goto L_12018725; /* 0x121C2F02: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2F1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2F1Cu);

L_121C2F1C:
    edx = MEM32(esp + 0x8); /* 0x121C2F1C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2F20: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x121C2F23: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2F26: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2F28: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C563Cu; /* 0x121C2F2D: mov eax, 0x121c563c */
    goto L_12018725; /* 0x121C2F32: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2F44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2F44u);

L_121C2F44:
    edx = MEM32(esp + 0x8); /* 0x121C2F44: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2F48: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x121C2F4B: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2F4E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2F50: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5668u; /* 0x121C2F55: mov eax, 0x121c5668 */
    goto L_12018725; /* 0x121C2F5A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2F6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2F6Fu);

L_121C2F6F:
    edx = MEM32(esp + 0x8); /* 0x121C2F6F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2F73: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x121C2F76: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2F7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2F7E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2F83: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2F86: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2F88: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5694u; /* 0x121C2F8D: mov eax, 0x121c5694 */
    goto L_12018725; /* 0x121C2F92: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2FBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2FBCu);

L_121C2FBC:
    edx = MEM32(esp + 0x8); /* 0x121C2FBC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2FC0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x70)); /* 0x121C2FC3: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2FC6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2FC8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C56D8u; /* 0x121C2FCD: mov eax, 0x121c56d8 */
    goto L_12018725; /* 0x121C2FD2: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2FF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2FF4u);

L_121C2FF4:
    edx = MEM32(esp + 0x8); /* 0x121C2FF4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2FF8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x70)); /* 0x121C2FFB: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2FFE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C3000: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5714u; /* 0x121C3005: mov eax, 0x121c5714 */
    goto L_12018725; /* 0x121C300A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C3052(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3052u);

L_121C3052:
    edx = MEM32(esp + 0x8); /* 0x121C3052: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3056: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB0)); /* 0x121C3059: mov ecx, dword ptr [edx - 0xb0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C305F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C3061: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5738u; /* 0x121C3066: mov eax, 0x121c5738 */
    goto L_12018725; /* 0x121C306B: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C3085(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3085u);

L_121C3085:
    edx = MEM32(esp + 0x8); /* 0x121C3085: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3089: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x121C308C: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C308F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C3091: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C57A4u; /* 0x121C3096: mov eax, 0x121c57a4 */
    goto L_12018725; /* 0x121C309B: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C30B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C30B8u);

L_121C30B8:
    edx = MEM32(esp + 0x8); /* 0x121C30B8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C30BC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD0)); /* 0x121C30BF: mov ecx, dword ptr [edx - 0xd0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C30C5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C30C7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C57D8u; /* 0x121C30CC: mov eax, 0x121c57d8 */
    goto L_12018725; /* 0x121C30D1: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C30EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C30EEu);

L_121C30EE:
    edx = MEM32(esp + 0x8); /* 0x121C30EE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C30F2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD0)); /* 0x121C30F5: mov ecx, dword ptr [edx - 0xd0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C30FB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C30FD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C580Cu; /* 0x121C3102: mov eax, 0x121c580c */
    goto L_12018725; /* 0x121C3107: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C313F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C313Fu);

L_121C313F:
    edx = MEM32(esp + 0x8); /* 0x121C313F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3143: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA4)); /* 0x121C3146: mov ecx, dword ptr [edx - 0xa4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C314C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C314E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5830u; /* 0x121C3153: mov eax, 0x121c5830 */
    goto L_12018725; /* 0x121C3158: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C316D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C316Du);

L_121C316D:
    edx = MEM32(esp + 0x8); /* 0x121C316D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3171: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C3174: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C3177: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C3179: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5884u; /* 0x121C317E: mov eax, 0x121c5884 */
    goto L_12018725; /* 0x121C3183: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C31AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C31AEu);

L_121C31AE:
    edx = MEM32(esp + 0x8); /* 0x121C31AE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C31B2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C31B5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C31B8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C31BA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C58C0u; /* 0x121C31BF: mov eax, 0x121c58c0 */
    goto L_12018725; /* 0x121C31C4: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C31D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C31D6u);

L_121C31D6:
    edx = MEM32(esp + 0x8); /* 0x121C31D6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C31DA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C31DD: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C31E0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C31E2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C58ECu; /* 0x121C31E7: mov eax, 0x121c58ec */
    goto L_12018725; /* 0x121C31EC: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C31FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C31FEu);

L_121C31FE:
    edx = MEM32(esp + 0x8); /* 0x121C31FE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3202: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x134)); /* 0x121C3205: mov ecx, dword ptr [edx - 0x134] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C320B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C320D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5918u; /* 0x121C3212: mov eax, 0x121c5918 */
    goto L_12018725; /* 0x121C3217: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C324D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C324Du);

L_121C324D:
    edx = MEM32(esp + 0x8); /* 0x121C324D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C3251: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x138)); /* 0x121C3254: mov ecx, dword ptr [edx - 0x138] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C325A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C325C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C595Cu; /* 0x121C3261: mov eax, 0x121c595c */
    goto L_12018725; /* 0x121C3266: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C3270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3270u);

L_121C3270:
    edi = edi; /* 0x121C3270: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3272: push ebp */
    ebp = esp; /* 0x121C3273: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x121C3275: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x121C3278: fldz  */
    PUSH32(esp, esi); /* 0x121C327A: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x121C327B: fstp dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x121C327E: push edi */
    fp_push(1.0); /* 0x121C327F: fld1  */
    esi = ebp + (-0xC); /* 0x121C3281: lea esi, [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x121C3284: fst dword ptr [ebp - 0xc] */
    edi = ebp + (-0x18); /* 0x121C3287: lea edi, [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C328A: fst dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C328D: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3290: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3291: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3292: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x1C); /* 0x121C3293: lea esi, [ebp - 0x1c] */
    edi = 0x121D9994u; /* 0x121C3296: mov edi, 0x121d9994 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C329B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C329C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C329D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C329E: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C329F: pop edi */
    esi = POP32_VAL(esp); /* 0x121C32A0: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C32A1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C32A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C32A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C32A8u);

L_121C32A8:
    edi = edi; /* 0x121C32A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C32AA: push ebp */
    ebp = esp; /* 0x121C32AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x121C32AD: sub esp, 0x24 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x121C32B0: fldz  */
    PUSH32(esp, esi); /* 0x121C32B2: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x121C32B3: fst dword ptr [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x121C32B6: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x121C32B7: fst dword ptr [ebp - 0x10] */
    esi = ebp + (-0x10); /* 0x121C32BA: lea esi, [ebp - 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x121C32BD: fst dword ptr [ebp - 0xc] */
    edi = ebp + (-0x20); /* 0x121C32C0: lea edi, [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C32C3: fstp dword ptr [ebp - 8] */
    PUSH32(esp, 5); /* 0x121C32C6: push 5 */
    fp_push(1.0); /* 0x121C32C8: fld1  */
    ecx = POP32_VAL(esp); /* 0x121C32CA: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C32CB: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C32CE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C32CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C32D0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C32D1: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x24); /* 0x121C32D2: lea esi, [ebp - 0x24] */
    edi = 0x121D99A4u; /* 0x121C32D5: mov edi, 0x121d99a4 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121C32DA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C32DC: pop edi */
    esi = POP32_VAL(esp); /* 0x121C32DD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C32DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C32DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C32E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C32E5u);

L_121C32E5:
    edi = edi; /* 0x121C32E5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C32E7: push ebp */
    ebp = esp; /* 0x121C32E8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x121C32EA: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x121C32ED: fldz  */
    PUSH32(esp, esi); /* 0x121C32EF: push esi */
    PUSH32(esp, edi); /* 0x121C32F0: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x121C32F1: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x121C32F4: fst dword ptr [ebp - 0xc] */
    esi = ebp + (-0xC); /* 0x121C32F7: lea esi, [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C32FA: fst dword ptr [ebp - 8] */
    edi = ebp + (-0x18); /* 0x121C32FD: lea edi, [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3300: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3303: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3304: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3305: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x1C); /* 0x121C3306: lea esi, [ebp - 0x1c] */
    edi = 0x121D99B8u; /* 0x121C3309: mov edi, 0x121d99b8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C330E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C330F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3310: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3311: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C3312: pop edi */
    esi = POP32_VAL(esp); /* 0x121C3313: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3314: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3315: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C331B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C331Bu);

L_121C331B:
    edi = edi; /* 0x121C331B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C331D: push ebp */
    ebp = esp; /* 0x121C331E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3320: push ecx */
    PUSH32(esp, ecx); /* 0x121C3321: push ecx */
    fp_push(*(double*)ADDR(0x12005B68)); /* 0x121C3322: fld qword ptr [0x12005b68] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3328: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C332D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3330: fld dword ptr [ebp - 4] */
    _st[0] += _st[0]; /* 0x121C3333: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9ABC) = _v; } /* 0x121C3335: fstp dword ptr [0x121d9abc] */
    fp_push(*(double*)ADDR(0x12005C20)); /* 0x121C333B: fld qword ptr [0x12005c20] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3341: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C3346: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x121C3349: fld dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x12005C18); /* 0x121C334C: fmul qword ptr [0x12005c18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AC0) = _v; } /* 0x121C3352: fstp dword ptr [0x121d9ac0] */
    fp_push(*(double*)ADDR(0x12005C10)); /* 0x121C3358: fld qword ptr [0x12005c10] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C335E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C3363: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x121C3366: fld dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x12005C08); /* 0x121C3369: fmul qword ptr [0x12005c08] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AC4) = _v; } /* 0x121C336F: fstp dword ptr [0x121d9ac4] */
    fp_push(*(double*)ADDR(0x12005C00)); /* 0x121C3375: fld qword ptr [0x12005c00] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C337B: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C3380: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x121C3383: fld dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x12005BF8); /* 0x121C3386: fmul qword ptr [0x12005bf8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AC8) = _v; } /* 0x121C338C: fstp dword ptr [0x121d9ac8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3392: fld dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x12005C18); /* 0x121C3395: fmul qword ptr [0x12005c18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9ACC) = _v; } /* 0x121C339B: fstp dword ptr [0x121d9acc] */
    fp_push(*(double*)ADDR(0x12005BF0)); /* 0x121C33A1: fld qword ptr [0x12005bf0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C33A7: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x121C33AC: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x121C33AF: fld dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x12005BE8); /* 0x121C33B2: fmul qword ptr [0x12005be8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AD0) = _v; } /* 0x121C33B8: fstp dword ptr [0x121d9ad0] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C33BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C33BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C33C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C33C5u);

L_121C33C5:
    edi = edi; /* 0x121C33C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C33C7: push ebp */
    ebp = esp; /* 0x121C33C8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C33CA: push ecx */
    fp_push(*(double*)ADDR(0x12005B68)); /* 0x121C33CB: fld qword ptr [0x12005b68] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C33D1: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C33D6: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C33D9: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99CC) = _v; } /* 0x121C33DC: fstp dword ptr [0x121d99cc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C33E2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C33E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C33E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C33E9u);

L_121C33E9:
    edi = edi; /* 0x121C33E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C33EB: push ebp */
    ebp = esp; /* 0x121C33EC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C33EE: push ecx */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x121C33EF: fld qword ptr [0x12001ea8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C33F5: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C33FA: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C33FD: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99D0) = _v; } /* 0x121C3400: fstp dword ptr [0x121d99d0] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3406: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3407: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C340D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C340Du);

L_121C340D:
    edi = edi; /* 0x121C340D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C340F: push ebp */
    ebp = esp; /* 0x121C3410: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3412: push ecx */
    fp_push(*(double*)ADDR(0x12005420)); /* 0x121C3413: fld qword ptr [0x12005420] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3419: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C341E: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3421: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99D4) = _v; } /* 0x121C3424: fstp dword ptr [0x121d99d4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C342A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C342B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3431(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3431u);

L_121C3431:
    edi = edi; /* 0x121C3431: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3433: push ebp */
    ebp = esp; /* 0x121C3434: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3436: push ecx */
    fp_push(*(double*)ADDR(0x12005B90)); /* 0x121C3437: fld qword ptr [0x12005b90] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C343D: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3442: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3445: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99D8) = _v; } /* 0x121C3448: fstp dword ptr [0x121d99d8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C344E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C344F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3455(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3455u);

L_121C3455:
    edi = edi; /* 0x121C3455: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3457: push ebp */
    ebp = esp; /* 0x121C3458: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C345A: push ecx */
    fp_push(*(double*)ADDR(0x12005C28)); /* 0x121C345B: fld qword ptr [0x12005c28] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3461: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3466: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3469: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99DC) = _v; } /* 0x121C346C: fstp dword ptr [0x121d99dc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3472: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3473: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3479(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3479u);

L_121C3479:
    fp_push(1.0); /* 0x121C3479: fld1  */
    RECOMP_CALL(sub_121BF518); /* 0x121C347B: call 0x121bf518 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005418); /* 0x121C3480: fmul qword ptr [0x12005418] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99E0) = _v; } /* 0x121C3486: fstp dword ptr [0x121d99e0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C348C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3492u);

L_121C3492:
    fp_push(*(float*)&MEM32(0x121D99E0)); /* 0x121C3492: fld dword ptr [0x121d99e0] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x121C3498: fmul qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99E4) = _v; } /* 0x121C349E: fstp dword ptr [0x121d99e4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C34A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C34AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C34AAu);

L_121C34AA:
    fp_push(1.0); /* 0x121C34AA: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C34AC: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99E8) = _v; } /* 0x121C34B1: fstp dword ptr [0x121d99e8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C34B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C34BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C34BDu);

L_121C34BD:
    fp_push(1.0); /* 0x121C34BD: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C34BF: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] = -_st[0]; /* 0x121C34C4: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99EC) = _v; } /* 0x121C34C6: fstp dword ptr [0x121d99ec] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C34CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C34D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C34D2u);

L_121C34D2:
    fp_push(*(double*)ADDR(0x12005418)); /* 0x121C34D2: fld qword ptr [0x12005418] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C34D8: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x121C34DD: fmul qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99F0) = _v; } /* 0x121C34E3: fstp dword ptr [0x121d99f0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C34E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C34EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C34EFu);

L_121C34EF:
    fp_push(*(double*)ADDR(0x12005418)); /* 0x121C34EF: fld qword ptr [0x12005418] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C34F5: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001A60); /* 0x121C34FA: fmul qword ptr [0x12001a60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99F4) = _v; } /* 0x121C3500: fstp dword ptr [0x121d99f4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3506: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C350C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C350Cu);

L_121C350C:
    fp_push(1.0); /* 0x121C350C: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C350E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001A60); /* 0x121C3513: fmul qword ptr [0x12001a60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99F8) = _v; } /* 0x121C3519: fstp dword ptr [0x121d99f8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C351F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3525(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3525u);

L_121C3525:
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x121C3525: fld qword ptr [0x12001ea8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C352B: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001A60); /* 0x121C3530: fmul qword ptr [0x12001a60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D99FC) = _v; } /* 0x121C3536: fstp dword ptr [0x121d99fc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C353C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3542(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3542u);

L_121C3542:
    fp_push(1.0); /* 0x121C3542: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3544: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x121C3549: fmul qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A00) = _v; } /* 0x121C354F: fstp dword ptr [0x121d9a00] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3555: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C355B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C355Bu);

L_121C355B:
    fp_push(*(double*)ADDR(0x120055C0)); /* 0x121C355B: fld qword ptr [0x120055c0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3561: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005460); /* 0x121C3566: fmul qword ptr [0x12005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A04) = _v; } /* 0x121C356C: fstp dword ptr [0x121d9a04] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3572: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3578u);

L_121C3578:
    fp_push(*(double*)ADDR(0x120055D0)); /* 0x121C3578: fld qword ptr [0x120055d0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C357E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001950); /* 0x121C3583: fmul qword ptr [0x12001950] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A08) = _v; } /* 0x121C3589: fstp dword ptr [0x121d9a08] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C358F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3595(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3595u);

L_121C3595:
    fp_push(*(double*)ADDR(0x12005C30)); /* 0x121C3595: fld qword ptr [0x12005c30] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C359B: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005460); /* 0x121C35A0: fmul qword ptr [0x12005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A0C) = _v; } /* 0x121C35A6: fstp dword ptr [0x121d9a0c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C35AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C35B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C35B2u);

L_121C35B2:
    fp_push(*(double*)ADDR(0x120055D0)); /* 0x121C35B2: fld qword ptr [0x120055d0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C35B8: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005460); /* 0x121C35BD: fmul qword ptr [0x12005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A10) = _v; } /* 0x121C35C3: fstp dword ptr [0x121d9a10] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C35C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C35CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C35CFu);

L_121C35CF:
    fp_push(1.0); /* 0x121C35CF: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C35D1: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005460); /* 0x121C35D6: fmul qword ptr [0x12005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A14) = _v; } /* 0x121C35DC: fstp dword ptr [0x121d9a14] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C35E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C35E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C35E8u);

L_121C35E8:
    fp_push(*(double*)ADDR(0x12005C38)); /* 0x121C35E8: fld qword ptr [0x12005c38] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C35EE: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005460); /* 0x121C35F3: fmul qword ptr [0x12005460] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A18) = _v; } /* 0x121C35F9: fstp dword ptr [0x121d9a18] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C35FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3605(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3605u);

L_121C3605:
    fp_push(1.0); /* 0x121C3605: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3607: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001950); /* 0x121C360C: fmul qword ptr [0x12001950] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A1C) = _v; } /* 0x121C3612: fstp dword ptr [0x121d9a1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3618: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C361E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C361Eu);

L_121C361E:
    fp_push(*(double*)ADDR(0x120055C0)); /* 0x121C361E: fld qword ptr [0x120055c0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3624: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001950); /* 0x121C3629: fmul qword ptr [0x12001950] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A20) = _v; } /* 0x121C362F: fstp dword ptr [0x121d9a20] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3635: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C363B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C363Bu);

L_121C363B:
    fp_push(*(double*)ADDR(0x12005C48)); /* 0x121C363B: fld qword ptr [0x12005c48] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3641: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C40); /* 0x121C3646: fmul qword ptr [0x12005c40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A24) = _v; } /* 0x121C364C: fstp dword ptr [0x121d9a24] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3652: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3658u);

L_121C3658:
    fp_push(*(double*)ADDR(0x12005C50)); /* 0x121C3658: fld qword ptr [0x12005c50] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C365E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C3663: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A28) = _v; } /* 0x121C3669: fstp dword ptr [0x121d9a28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C366F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3675u);

L_121C3675:
    fp_push(*(double*)ADDR(0x12005C58)); /* 0x121C3675: fld qword ptr [0x12005c58] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C367B: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C40); /* 0x121C3680: fmul qword ptr [0x12005c40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A2C) = _v; } /* 0x121C3686: fstp dword ptr [0x121d9a2c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C368C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3692(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3692u);

L_121C3692:
    fp_push(*(double*)ADDR(0x12005C60)); /* 0x121C3692: fld qword ptr [0x12005c60] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3698: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C369D: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A30) = _v; } /* 0x121C36A3: fstp dword ptr [0x121d9a30] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C36A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C36AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C36AFu);

L_121C36AF:
    fp_push(*(double*)ADDR(0x12005C50)); /* 0x121C36AF: fld qword ptr [0x12005c50] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C36B5: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C40); /* 0x121C36BA: fmul qword ptr [0x12005c40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A34) = _v; } /* 0x121C36C0: fstp dword ptr [0x121d9a34] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C36C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C36CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C36CCu);

L_121C36CC:
    fp_push(*(double*)ADDR(0x12005C58)); /* 0x121C36CC: fld qword ptr [0x12005c58] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C36D2: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C36D7: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A38) = _v; } /* 0x121C36DD: fstp dword ptr [0x121d9a38] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C36E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C36E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C36E9u);

L_121C36E9:
    fp_push(*(double*)ADDR(0x12005C68)); /* 0x121C36E9: fld qword ptr [0x12005c68] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C36EF: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C36F4: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A3C) = _v; } /* 0x121C36FA: fstp dword ptr [0x121d9a3c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3700: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3706(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3706u);

L_121C3706:
    fp_push(*(double*)ADDR(0x12005C70)); /* 0x121C3706: fld qword ptr [0x12005c70] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C370C: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C3711: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A40) = _v; } /* 0x121C3717: fstp dword ptr [0x121d9a40] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C371D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3723u);

L_121C3723:
    fp_push(*(double*)ADDR(0x12005C78)); /* 0x121C3723: fld qword ptr [0x12005c78] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3729: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C372E: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A44) = _v; } /* 0x121C3734: fstp dword ptr [0x121d9a44] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C373A: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3740u);

L_121C3740:
    fp_push(*(double*)ADDR(0x12005C30)); /* 0x121C3740: fld qword ptr [0x12005c30] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3746: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C374B: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A48) = _v; } /* 0x121C3751: fstp dword ptr [0x121d9a48] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3757: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C375D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C375Du);

L_121C375D:
    fp_push(*(double*)ADDR(0x12005C60)); /* 0x121C375D: fld qword ptr [0x12005c60] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3763: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C40); /* 0x121C3768: fmul qword ptr [0x12005c40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A4C) = _v; } /* 0x121C376E: fstp dword ptr [0x121d9a4c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3774: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C377A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C377Au);

L_121C377A:
    fp_push(1.0); /* 0x121C377A: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C377C: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C3781: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A50) = _v; } /* 0x121C3787: fstp dword ptr [0x121d9a50] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C378D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3793u);

L_121C3793:
    fp_push(*(double*)ADDR(0x12005C48)); /* 0x121C3793: fld qword ptr [0x12005c48] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3799: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x121C379E: fmul qword ptr [0x12005b98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A54) = _v; } /* 0x121C37A4: fstp dword ptr [0x121d9a54] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C37AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C37B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C37B0u);

L_121C37B0:
    fp_push(*(double*)ADDR(0x12005C80)); /* 0x121C37B0: fld qword ptr [0x12005c80] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C37B6: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C37BB: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A58) = _v; } /* 0x121C37C1: fstp dword ptr [0x121d9a58] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C37C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C37CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C37CDu);

L_121C37CD:
    fp_push(*(double*)ADDR(0x12005C90)); /* 0x121C37CD: fld qword ptr [0x12005c90] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C37D3: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C37D8: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A5C) = _v; } /* 0x121C37DE: fstp dword ptr [0x121d9a5c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C37E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C37EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C37EAu);

L_121C37EA:
    fp_push(*(double*)ADDR(0x120055C0)); /* 0x121C37EA: fld qword ptr [0x120055c0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C37F0: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C37F5: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A60) = _v; } /* 0x121C37FB: fstp dword ptr [0x121d9a60] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3801: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3807(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3807u);

L_121C3807:
    fp_push(*(double*)ADDR(0x12001A38)); /* 0x121C3807: fld qword ptr [0x12001a38] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C380D: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C3812: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A64) = _v; } /* 0x121C3818: fstp dword ptr [0x121d9a64] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C381E: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3824u);

L_121C3824:
    fp_push(*(double*)ADDR(0x12005C98)); /* 0x121C3824: fld qword ptr [0x12005c98] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C382A: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C382F: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A68) = _v; } /* 0x121C3835: fstp dword ptr [0x121d9a68] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C383B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3841(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3841u);

L_121C3841:
    fp_push(*(double*)ADDR(0x12005CA0)); /* 0x121C3841: fld qword ptr [0x12005ca0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3847: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C384C: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A6C) = _v; } /* 0x121C3852: fstp dword ptr [0x121d9a6c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3858: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C385E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C385Eu);

L_121C385E:
    fp_push(*(double*)ADDR(0x12005CA8)); /* 0x121C385E: fld qword ptr [0x12005ca8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3864: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C3869: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A70) = _v; } /* 0x121C386F: fstp dword ptr [0x121d9a70] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3875: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C387B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C387Bu);

L_121C387B:
    fp_push(*(double*)ADDR(0x12005CB0)); /* 0x121C387B: fld qword ptr [0x12005cb0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3881: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C3886: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A74) = _v; } /* 0x121C388C: fstp dword ptr [0x121d9a74] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3892: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3898u);

L_121C3898:
    fp_push(*(double*)ADDR(0x12001A38)); /* 0x121C3898: fld qword ptr [0x12001a38] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C389E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C38A3: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A78) = _v; } /* 0x121C38A9: fstp dword ptr [0x121d9a78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C38AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C38B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C38B5u);

L_121C38B5:
    fp_push(*(double*)ADDR(0x12005CB8)); /* 0x121C38B5: fld qword ptr [0x12005cb8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C38BB: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C38C0: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A7C) = _v; } /* 0x121C38C6: fstp dword ptr [0x121d9a7c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C38CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C38D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C38D2u);

L_121C38D2:
    fp_push(*(double*)ADDR(0x12005CC0)); /* 0x121C38D2: fld qword ptr [0x12005cc0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C38D8: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C38DD: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A80) = _v; } /* 0x121C38E3: fstp dword ptr [0x121d9a80] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C38E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C38EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C38EFu);

L_121C38EF:
    fp_push(*(double*)ADDR(0x12005CC8)); /* 0x121C38EF: fld qword ptr [0x12005cc8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C38F5: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C38FA: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A84) = _v; } /* 0x121C3900: fstp dword ptr [0x121d9a84] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3906: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C390C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C390Cu);

L_121C390C:
    fp_push(*(double*)ADDR(0x12005418)); /* 0x121C390C: fld qword ptr [0x12005418] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3912: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C3917: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A88) = _v; } /* 0x121C391D: fstp dword ptr [0x121d9a88] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3923: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3929(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3929u);

L_121C3929:
    fp_push(*(double*)ADDR(0x12005CD0)); /* 0x121C3929: fld qword ptr [0x12005cd0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C392F: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C3934: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A8C) = _v; } /* 0x121C393A: fstp dword ptr [0x121d9a8c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3940: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3946(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3946u);

L_121C3946:
    fp_push(*(double*)ADDR(0x12005CD8)); /* 0x121C3946: fld qword ptr [0x12005cd8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C394C: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C3951: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A90) = _v; } /* 0x121C3957: fstp dword ptr [0x121d9a90] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C395D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3963u);

L_121C3963:
    fp_push(*(double*)ADDR(0x12005CE0)); /* 0x121C3963: fld qword ptr [0x12005ce0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3969: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C396E: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A94) = _v; } /* 0x121C3974: fstp dword ptr [0x121d9a94] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C397A: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3980u);

L_121C3980:
    fp_push(*(double*)ADDR(0x12005CE8)); /* 0x121C3980: fld qword ptr [0x12005ce8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3986: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C398B: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A98) = _v; } /* 0x121C3991: fstp dword ptr [0x121d9a98] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3997: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C399D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C399Du);

L_121C399D:
    fp_push(1.0); /* 0x121C399D: fld1  */
    RECOMP_CALL(sub_121BF44C); /* 0x121C399F: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C39A4: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9A9C) = _v; } /* 0x121C39AA: fstp dword ptr [0x121d9a9c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C39B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C39B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C39B6u);

L_121C39B6:
    fp_push(*(double*)ADDR(0x12005C80)); /* 0x121C39B6: fld qword ptr [0x12005c80] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C39BC: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C39C1: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AA0) = _v; } /* 0x121C39C7: fstp dword ptr [0x121d9aa0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C39CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C39D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C39D3u);

L_121C39D3:
    fp_push(*(double*)ADDR(0x12005C90)); /* 0x121C39D3: fld qword ptr [0x12005c90] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C39D9: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x121C39DE: fmul qword ptr [0x120019c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AA4) = _v; } /* 0x121C39E4: fstp dword ptr [0x121d9aa4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C39EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C39F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C39F0u);

L_121C39F0:
    fp_push(*(double*)ADDR(0x120055C0)); /* 0x121C39F0: fld qword ptr [0x120055c0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C39F6: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C39FB: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AA8) = _v; } /* 0x121C3A01: fstp dword ptr [0x121d9aa8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3A07: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3A0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3A0Du);

L_121C3A0D:
    fp_push(*(double*)ADDR(0x12005CA0)); /* 0x121C3A0D: fld qword ptr [0x12005ca0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3A13: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C3A18: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AAC) = _v; } /* 0x121C3A1E: fstp dword ptr [0x121d9aac] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3A24: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3A2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3A2Au);

L_121C3A2A:
    fp_push(*(double*)ADDR(0x12005CB8)); /* 0x121C3A2A: fld qword ptr [0x12005cb8] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3A30: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005C88); /* 0x121C3A35: fmul qword ptr [0x12005c88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AB0) = _v; } /* 0x121C3A3B: fstp dword ptr [0x121d9ab0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3A41: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3A47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3A47u);

L_121C3A47:
    edi = edi; /* 0x121C3A47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3A49: push ebp */
    ebp = esp; /* 0x121C3A4A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3A4C: push ecx */
    fp_push(*(double*)ADDR(0x12005B68)); /* 0x121C3A4D: fld qword ptr [0x12005b68] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3A53: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3A58: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3A5B: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AB4) = _v; } /* 0x121C3A5E: fstp dword ptr [0x121d9ab4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3A64: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3A65: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3A6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3A6Bu);

L_121C3A6B:
    edi = edi; /* 0x121C3A6B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3A6D: push ebp */
    ebp = esp; /* 0x121C3A6E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3A70: push ecx */
    fp_push(*(double*)ADDR(0x12005CF0)); /* 0x121C3A71: fld qword ptr [0x12005cf0] */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3A77: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3A7C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3A7F: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AB8) = _v; } /* 0x121C3A82: fstp dword ptr [0x121d9ab8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3A88: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3A89: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3A8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3A8Fu);

L_121C3A8F:
    PUSH32(esp, 0x120086B8u); /* 0x121C3A8F: push 0x120086b8 */
    ecx = 0x121D9AF8u; /* 0x121C3A94: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188EE); /* 0x121C3A99: call 0x120188ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x121C4162u); /* 0x121C3A9E: push 0x121c4162 */
    RECOMP_CALL(sub_121BF6FF); /* 0x121C3AA3: call 0x121bf6ff */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C3AA8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3AA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3AAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3AAFu);

L_121C3AAF:
    fp_push(*(double*)ADDR(0x12010C98)); /* 0x121C3AAF: fld qword ptr [0x12010c98] */
    fp_push(*(double*)ADDR(0x121D6F00)); /* 0x121C3AB5: fld qword ptr [0x121d6f00] */
    _st[1] /= _st[0]; /* 0x121C3ABB: fdiv st(1), st(0) */
    fp_push(_st[0]); /* 0x121C3ABD: fld st(0) */
    _st[0] *= _st[1]; /* 0x121C3ABF: fmul st(1) */
    _st[0] = *(double*)ADDR(0x12010C90) / _st[0]; /* 0x121C3AC1: fdivr qword ptr [0x12010c90] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x121C3AC7: fsubp st(2) */
    fp_xch(1); /* 0x121C3AC9: fxch st(1) */
    _st[0] += *(double*)ADDR(0x12010C88); /* 0x121C3ACB: fadd qword ptr [0x12010c88] */
    fp_xch(1); /* 0x121C3AD1: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x12010C80); /* 0x121C3AD3: fmul qword ptr [0x12010c80] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x121C3AD9: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(0x121D9FB0) = _v; } /* 0x121C3ADB: fstp qword ptr [0x121d9fb0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3AE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3AE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3AE7u);

L_121C3AE7:
    fp_push(*(double*)ADDR(0x121D9FB0)); /* 0x121C3AE7: fld qword ptr [0x121d9fb0] */
    fp_push(_st[0]); /* 0x121C3AED: fld st(0) */
    fp_push(1.0); /* 0x121C3AEF: fld1  */
    _st[1] += _st[0]; /* 0x121C3AF1: fadd st(1), st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x121C3AF3: fsubrp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x121C3AF5: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(0x121D9FB8) = _v; } /* 0x121C3AF7: fstp qword ptr [0x121d9fb8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3AFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3B03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3B03u);

L_121C3B03:
    fp_push(*(double*)ADDR(0x121D6F10)); /* 0x121C3B03: fld qword ptr [0x121d6f10] */
    _st[0] += *(double*)ADDR(0x121D6F08); /* 0x121C3B09: fadd qword ptr [0x121d6f08] */
    { double _v = fp_pop(); *(double*)ADDR(0x121D9FC0) = _v; } /* 0x121C3B0F: fstp qword ptr [0x121d9fc0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3B15: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3B1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3B1Bu);

L_121C3B1B:
    fp_push(*(double*)ADDR(0x121D6F08)); /* 0x121C3B1B: fld qword ptr [0x121d6f08] */
    fp_push(*(double*)ADDR(0x121D6F10)); /* 0x121C3B21: fld qword ptr [0x121d6f10] */
    _st[1] += _st[0]; /* 0x121C3B27: fadd st(1), st(0) */
    _st[0] *= *(double*)ADDR(0x12001EA8); /* 0x121C3B29: fmul qword ptr [0x12001ea8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x121C3B2F: fmulp st(1) */
    RECOMP_CALL(sub_121BF44C); /* 0x121C3B31: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(0x121D9FC8) = _v; } /* 0x121C3B36: fstp qword ptr [0x121d9fc8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3B3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3B42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3B42u);

L_121C3B42:
    fp_push(1.0); /* 0x121C3B42: fld1  */
    _st[0] /= *(double*)ADDR(0x121D9FC0); /* 0x121C3B44: fdiv qword ptr [0x121d9fc0] */
    { double _v = fp_pop(); *(double*)ADDR(0x121D9FD0) = _v; } /* 0x121C3B4A: fstp qword ptr [0x121d9fd0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3B50: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3B56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3B56u);

L_121C3B56:
    PUSH32(esp, 0x121EB394u); /* 0x121C3B56: push 0x121eb394 */
    RECOMP_ICALL(MEM32(0x120010BC)); /* 0x121C3B5B: call dword ptr [0x120010bc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x121C4171u); /* 0x121C3B61: push 0x121c4171 */
    RECOMP_CALL(sub_121BF6FF); /* 0x121C3B66: call 0x121bf6ff */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C3B6B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3B6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3B72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3B72u);

L_121C3B72:
    edi = edi; /* 0x121C3B72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3B74: push ebp */
    ebp = esp; /* 0x121C3B75: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3B77: push ecx */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3B78: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3B7E: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3B84: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3B87: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x121D88A8) = _v; } /* 0x121C3B8A: fst dword ptr [0x121d88a8] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x121D88AC) = _v; } /* 0x121C3B90: fst dword ptr [0x121d88ac] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88B0) = _v; } /* 0x121C3B96: fstp dword ptr [0x121d88b0] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3B9C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3B9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3BA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3BA3u);

L_121C3BA3:
    edi = edi; /* 0x121C3BA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3BA5: push ebp */
    ebp = esp; /* 0x121C3BA6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3BA8: push ecx */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3BA9: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3BAF: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3BB5: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3BB8: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x121D88BC) = _v; } /* 0x121C3BBB: fst dword ptr [0x121d88bc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88C0) = _v; } /* 0x121C3BC1: fstp dword ptr [0x121d88c0] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3BC7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3BC8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3BCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3BCEu);

L_121C3BCE:
    edi = edi; /* 0x121C3BCE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3BD0: push ebp */
    ebp = esp; /* 0x121C3BD1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3BD3: push ecx */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3BD4: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3BDA: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3BE0: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3BE3: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x121D88C8) = _v; } /* 0x121C3BE6: fst dword ptr [0x121d88c8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88D0) = _v; } /* 0x121C3BEC: fstp dword ptr [0x121d88d0] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3BF2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3BF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3BF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3BF9u);

L_121C3BF9:
    edi = edi; /* 0x121C3BF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3BFB: push ebp */
    ebp = esp; /* 0x121C3BFC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C3BFE: push ecx */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3BFF: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3C05: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121C3C0B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121C3C0E: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x121D88D8) = _v; } /* 0x121C3C11: fst dword ptr [0x121d88d8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88DC) = _v; } /* 0x121C3C17: fstp dword ptr [0x121d88dc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3C1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3C1E: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3C24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3C24u);

L_121C3C24:
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3C24: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3C2A: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88F0) = _v; } /* 0x121C3C30: fstp dword ptr [0x121d88f0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3C36: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3C3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3C3Cu);

L_121C3C3C:
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3C3C: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3C42: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D88F8) = _v; } /* 0x121C3C48: fstp dword ptr [0x121d88f8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3C4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3C54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3C54u);

L_121C3C54:
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x121C3C54: fld qword ptr [0x120014d8] */
    _st[0] *= *(double*)ADDR(0x12001A48); /* 0x121C3C5A: fmul qword ptr [0x12001a48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D890C) = _v; } /* 0x121C3C60: fstp dword ptr [0x121d890c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3C66: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3C6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3C6Cu);

L_121C3C6C:
    edi = edi; /* 0x121C3C6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3C6E: push ebp */
    ebp = esp; /* 0x121C3C6F: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x120019D0)); /* 0x121C3C71: fld dword ptr [0x120019d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121C3C77: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121C3C7A: push esi */
    PUSH32(esp, edi); /* 0x121C3C7B: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121C3C7C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x10) = _v; } /* 0x121C3C7F: fstp dword ptr [esp + 0x10] */
    edi = esp; /* 0x121C3C83: mov edi, esp */
    esi = 0x121D88A8u; /* 0x121C3C85: mov esi, 0x121d88a8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C8C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C8D: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3C8E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = 0x121D8898u; /* 0x121C3C91: mov eax, 0x121d8898 */
    edi = esp; /* 0x121C3C96: mov edi, esp */
    esi = eax; /* 0x121C3C98: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C9A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C9B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C9C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3C9D: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3C9E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edi = esp; /* 0x121C3CA1: mov edi, esp */
    esi = eax; /* 0x121C3CA3: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CA5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CA6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CA7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CA8: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3CA9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = eax; /* 0x121C3CAC: mov esi, eax */
    edi = esp; /* 0x121C3CAE: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CB0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CB1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CB2: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x44); /* 0x121C3CB3: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121C3CB6: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CB7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_121AC2C9); /* 0x121C3CB8: call 0x121ac2c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x121C3CBD: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x121C3CBF: pop ecx */
    esi = eax; /* 0x121C3CC0: mov esi, eax */
    edi = 0x121EEA90u; /* 0x121C3CC2: mov edi, 0x121eea90 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121C3CC7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C3CC9: pop edi */
    esi = POP32_VAL(esp); /* 0x121C3CCA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3CCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3CCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3CD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3CD2u);

L_121C3CD2:
    edi = edi; /* 0x121C3CD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3CD4: push ebp */
    ebp = esp; /* 0x121C3CD5: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x120019D0)); /* 0x121C3CD7: fld dword ptr [0x120019d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121C3CDD: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121C3CE0: push esi */
    PUSH32(esp, edi); /* 0x121C3CE1: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121C3CE2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x10) = _v; } /* 0x121C3CE5: fstp dword ptr [esp + 0x10] */
    edi = esp; /* 0x121C3CE9: mov edi, esp */
    esi = 0x121D88A8u; /* 0x121C3CEB: mov esi, 0x121d88a8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CF0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CF1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CF2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3CF3: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3CF4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = 0x121D88B8u; /* 0x121C3CF7: mov eax, 0x121d88b8 */
    edi = esp; /* 0x121C3CFC: mov edi, esp */
    esi = eax; /* 0x121C3CFE: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D00: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D01: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D03: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3D04: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edi = esp; /* 0x121C3D07: mov edi, esp */
    esi = eax; /* 0x121C3D09: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D0B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D0C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D0D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D0E: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3D0F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = eax; /* 0x121C3D12: mov esi, eax */
    edi = esp; /* 0x121C3D14: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D16: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D17: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D18: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x44); /* 0x121C3D19: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121C3D1C: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D1D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_121AC2C9); /* 0x121C3D1E: call 0x121ac2c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x121C3D23: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x121C3D25: pop ecx */
    esi = eax; /* 0x121C3D26: mov esi, eax */
    edi = 0x121EEAD8u; /* 0x121C3D28: mov edi, 0x121eead8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121C3D2D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C3D2F: pop edi */
    esi = POP32_VAL(esp); /* 0x121C3D30: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3D31: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3D32: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3D38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3D38u);

L_121C3D38:
    edi = edi; /* 0x121C3D38: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3D3A: push ebp */
    ebp = esp; /* 0x121C3D3B: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x120019D0)); /* 0x121C3D3D: fld dword ptr [0x120019d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121C3D43: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121C3D46: push esi */
    PUSH32(esp, edi); /* 0x121C3D47: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121C3D48: sub esp, 0x14 */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x10) = _v; } /* 0x121C3D4B: fstp dword ptr [esp + 0x10] */
    edi = esp; /* 0x121C3D4F: mov edi, esp */
    esi = 0x121D88A8u; /* 0x121C3D51: mov esi, 0x121d88a8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D56: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D57: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D58: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D59: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3D5A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = 0x121D88C8u; /* 0x121C3D5D: mov eax, 0x121d88c8 */
    edi = esp; /* 0x121C3D62: mov edi, esp */
    esi = eax; /* 0x121C3D64: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D66: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D67: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D68: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D69: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3D6A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edi = esp; /* 0x121C3D6D: mov edi, esp */
    esi = eax; /* 0x121C3D6F: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D71: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D72: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D73: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D74: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3D75: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = eax; /* 0x121C3D78: mov esi, eax */
    edi = esp; /* 0x121C3D7A: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D7C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D7D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D7E: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x44); /* 0x121C3D7F: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121C3D82: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3D83: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_121AC2C9); /* 0x121C3D84: call 0x121ac2c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x121C3D89: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x121C3D8B: pop ecx */
    esi = eax; /* 0x121C3D8C: mov esi, eax */
    edi = 0x121EEB20u; /* 0x121C3D8E: mov edi, 0x121eeb20 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121C3D93: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C3D95: pop edi */
    esi = POP32_VAL(esp); /* 0x121C3D96: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3D97: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3D98: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C3D9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C3D9Eu);

L_121C3D9E:
    edi = edi; /* 0x121C3D9E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C3DA0: push ebp */
    ebp = esp; /* 0x121C3DA1: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x120019D0)); /* 0x121C3DA3: fld dword ptr [0x120019d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x121C3DA9: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121C3DAC: push esi */
    PUSH32(esp, edi); /* 0x121C3DAD: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121C3DAE: sub esp, 0x14 */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x10) = _v; } /* 0x121C3DB1: fstp dword ptr [esp + 0x10] */
    edi = esp; /* 0x121C3DB5: mov edi, esp */
    esi = 0x121D88A8u; /* 0x121C3DB7: mov esi, 0x121d88a8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DBC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DBD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DBE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DBF: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3DC0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = 0x121D88D8u; /* 0x121C3DC3: mov eax, 0x121d88d8 */
    edi = esp; /* 0x121C3DC8: mov edi, esp */
    esi = eax; /* 0x121C3DCA: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DCC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DCD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DCE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DCF: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3DD0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edi = esp; /* 0x121C3DD3: mov edi, esp */
    esi = eax; /* 0x121C3DD5: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DD7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DD8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DD9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DDA: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121C3DDB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = eax; /* 0x121C3DDE: mov esi, eax */
    edi = esp; /* 0x121C3DE0: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DE2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DE3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DE4: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x44); /* 0x121C3DE5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x121C3DE8: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121C3DE9: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_121AC2C9); /* 0x121C3DEA: call 0x121ac2c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x121C3DEF: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x121C3DF1: pop ecx */
    esi = eax; /* 0x121C3DF2: mov esi, eax */
    edi = 0x121EEB68u; /* 0x121C3DF4: mov edi, 0x121eeb68 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121C3DF9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121C3DFB: pop edi */
    esi = POP32_VAL(esp); /* 0x121C3DFC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C3DFD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C3DFE: ret  */
    RECOMP_REGS_OUT();
}
