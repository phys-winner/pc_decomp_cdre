#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1100FA2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FA2Eu);

L_1100FA2E:
    PUSH32(esp, ebp); /* 0x1100FA2E: push ebp */
    ebp = esp; /* 0x1100FA2F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100FA31: push esi */
    PUSH32(esp, edi); /* 0x1100FA32: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100FA33: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100FA36: mov esi, ecx */
    /* cmp esi, edi */ /* 0x1100FA38: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100FADE; /* 0x1100FA3A: je 0x1100fade */
L_1100FA40:
    PUSH32(esp, ebx); /* 0x1100FA40: push ebx */
    RECOMP_CALL(sub_1100FC9C); /* 0x1100FA41: call 0x1100fc9c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1100FA46: push dword ptr [edi + 0x30] */
    ecx = MEM32(esi + 0x30); /* 0x1100FA49: mov ecx, dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_1100E449); /* 0x1100FA4C: call 0x1100e449 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x14); /* 0x1100FA51: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x1100FA54: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x18); /* 0x1100FA57: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x1100FA5A: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x1100FA5D: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x1100FA60: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x20); /* 0x1100FA63: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x1100FA66: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(edi + 0x24); /* 0x1100FA69: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = eax; /* 0x1100FA6C: mov dword ptr [esi + 0x24], eax */
    ebx = MEM32(edi + 0x28); /* 0x1100FA6F: mov ebx, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x1100FA72: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100FAA6; /* 0x1100FA76: jmp 0x1100faa6 */
L_1100FA78:
    /* cmp MEM32(ebx + 0x8), 0 */ /* 0x1100FA78: cmp dword ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FA84; /* 0x1100FA7C: jne 0x1100fa84 */
L_1100FA7E:
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x1100FA7E: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100FAA4; /* 0x1100FA82: je 0x1100faa4 */
L_1100FA84:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1100FA84: push dword ptr [ebx + 4] */
    ecx = esi; /* 0x1100FA87: mov ecx, esi */
    RECOMP_CALL(sub_1100FC33); /* 0x1100FA89: call 0x1100fc33 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x8); /* 0x1100FA8E: mov ecx, dword ptr [ebx + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x1100FA91: mov dword ptr [eax + 8], ecx */
    ecx = esi; /* 0x1100FA94: mov ecx, esi */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1100FA96: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1100FC33); /* 0x1100FA99: call 0x1100fc33 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xC); /* 0x1100FA9E: mov ecx, dword ptr [ebx + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x1100FAA1: mov dword ptr [eax + 0xc], ecx */
L_1100FAA4:
    ebx = MEM32(ebx); /* 0x1100FAA4: mov ebx, dword ptr [ebx] */
L_1100FAA6:
    /* test ebx, ebx */ /* 0x1100FAA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FA78; /* 0x1100FAA8: jne 0x1100fa78 */
L_1100FAAA:
    ebx = MEM32(edi + 0x2C); /* 0x1100FAAA: mov ebx, dword ptr [edi + 0x2c] */
    goto L_1100FABC; /* 0x1100FAAD: jmp 0x1100fabc */
L_1100FAAF:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1100FAAF: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1100FAB2: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_1100F9FE); /* 0x1100FAB5: call 0x1100f9fe */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebx); /* 0x1100FABA: mov ebx, dword ptr [ebx] */
L_1100FABC:
    ecx = esi; /* 0x1100FABC: mov ecx, esi */
    /* test ebx, ebx */ /* 0x1100FABE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FAAF; /* 0x1100FAC0: jne 0x1100faaf */
L_1100FAC2:
    PUSH32(esp, 2); /* 0x1100FAC2: push 2 */
    RECOMP_CALL(sub_1100FC0E); /* 0x1100FAC4: call 0x1100fc0e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x1100FAC9: mov eax, dword ptr [edi + 0x10] */
    ecx = esi; /* 0x1100FACC: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x1100FACE: push ebx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100FACF: push dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1100FAD2: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x1100FAD5: mov dword ptr [esi + 0x10], eax */
    RECOMP_CALL(sub_1100F771); /* 0x1100FAD8: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1100FADD: pop ebx */
L_1100FADE:
    edi = POP32_VAL(esp); /* 0x1100FADE: pop edi */
    eax = esi; /* 0x1100FADF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100FAE1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100FAE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100FAE3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100FAE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FAE6u);

L_1100FAE6:
    PUSH32(esp, ebp); /* 0x1100FAE6: push ebp */
    ebp = esp; /* 0x1100FAE7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100FAE9: push ecx */
    PUSH32(esp, ebx); /* 0x1100FAEA: push ebx */
    PUSH32(esp, 2); /* 0x1100FAEB: push 2 */
    ecx = ebp + (-0x4); /* 0x1100FAED: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x1100FAF0: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(0x110631C4)); /* 0x1100FAF5: mov bl, byte ptr [0x110631c4] */
    ecx = MEM32(ebp + 0x8); /* 0x1100FAFB: mov ecx, dword ptr [ebp + 8] */
    MEM8(0x110631C4) = (uint8_t)(LO8(ecx)); /* 0x1100FAFE: mov byte ptr [0x110631c4], cl */
    ecx = ebp + (-0x4); /* 0x1100FB04: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1100FB07: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x1100FB0C: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1100FB0E: pop ebx */
    esp = ebp; /* 0x1100FB0F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100FB11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FB12: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FB13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FB13u);

L_1100FB13:
    PUSH32(esp, ebp); /* 0x1100FB13: push ebp */
    ebp = esp; /* 0x1100FB14: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100FB16: push esi */
    PUSH32(esp, edi); /* 0x1100FB17: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100FB18: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100FB1B: mov esi, ecx */
    /* cmp esi, edi */ /* 0x1100FB1D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100FB99; /* 0x1100FB1F: je 0x1100fb99 */
L_1100FB21:
    ecx = MEM32(esi + 0xC); /* 0x1100FB21: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(edi + 0xC); /* 0x1100FB24: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1100FB27: mov dword ptr [esi + 0xc], eax */
    MEM32(edi + 0xC) = ecx; /* 0x1100FB2A: mov dword ptr [edi + 0xc], ecx */
    ecx = MEM32(esi + 0x10); /* 0x1100FB2D: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(edi + 0x10); /* 0x1100FB30: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1100FB33: mov dword ptr [esi + 0x10], eax */
    MEM32(edi + 0x10) = ecx; /* 0x1100FB36: mov dword ptr [edi + 0x10], ecx */
    ecx = MEM32(esi + 0x14); /* 0x1100FB39: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(edi + 0x14); /* 0x1100FB3C: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x1100FB3F: mov dword ptr [esi + 0x14], eax */
    MEM32(edi + 0x14) = ecx; /* 0x1100FB42: mov dword ptr [edi + 0x14], ecx */
    ecx = MEM32(esi + 0x18); /* 0x1100FB45: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(edi + 0x18); /* 0x1100FB48: mov eax, dword ptr [edi + 0x18] */
    edx = MEM32(esi + 0x1C); /* 0x1100FB4B: mov edx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x18) = eax; /* 0x1100FB4E: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x1100FB51: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x1100FB54: mov dword ptr [esi + 0x1c], eax */
    MEM32(edi + 0x18) = ecx; /* 0x1100FB57: mov dword ptr [edi + 0x18], ecx */
    MEM32(edi + 0x1C) = edx; /* 0x1100FB5A: mov dword ptr [edi + 0x1c], edx */
    ecx = MEM32(esi + 0x20); /* 0x1100FB5D: mov ecx, dword ptr [esi + 0x20] */
    eax = MEM32(edi + 0x20); /* 0x1100FB60: mov eax, dword ptr [edi + 0x20] */
    edx = MEM32(esi + 0x24); /* 0x1100FB63: mov edx, dword ptr [esi + 0x24] */
    MEM32(esi + 0x20) = eax; /* 0x1100FB66: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(edi + 0x24); /* 0x1100FB69: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = eax; /* 0x1100FB6C: mov dword ptr [esi + 0x24], eax */
    MEM32(edi + 0x20) = ecx; /* 0x1100FB6F: mov dword ptr [edi + 0x20], ecx */
    MEM32(edi + 0x24) = edx; /* 0x1100FB72: mov dword ptr [edi + 0x24], edx */
    ecx = MEM32(esi + 0x28); /* 0x1100FB75: mov ecx, dword ptr [esi + 0x28] */
    eax = MEM32(edi + 0x28); /* 0x1100FB78: mov eax, dword ptr [edi + 0x28] */
    MEM32(esi + 0x28) = eax; /* 0x1100FB7B: mov dword ptr [esi + 0x28], eax */
    MEM32(edi + 0x28) = ecx; /* 0x1100FB7E: mov dword ptr [edi + 0x28], ecx */
    ecx = MEM32(esi + 0x2C); /* 0x1100FB81: mov ecx, dword ptr [esi + 0x2c] */
    eax = MEM32(edi + 0x2C); /* 0x1100FB84: mov eax, dword ptr [edi + 0x2c] */
    MEM32(esi + 0x2C) = eax; /* 0x1100FB87: mov dword ptr [esi + 0x2c], eax */
    MEM32(edi + 0x2C) = ecx; /* 0x1100FB8A: mov dword ptr [edi + 0x2c], ecx */
    ecx = MEM32(esi + 0x30); /* 0x1100FB8D: mov ecx, dword ptr [esi + 0x30] */
    eax = MEM32(edi + 0x30); /* 0x1100FB90: mov eax, dword ptr [edi + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x1100FB93: mov dword ptr [esi + 0x30], eax */
    MEM32(edi + 0x30) = ecx; /* 0x1100FB96: mov dword ptr [edi + 0x30], ecx */
L_1100FB99:
    edi = POP32_VAL(esp); /* 0x1100FB99: pop edi */
    esi = POP32_VAL(esp); /* 0x1100FB9A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100FB9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100FB9C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100FB9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FB9Fu);

L_1100FB9F:
    PUSH32(esp, ecx); /* 0x1100FB9F: push ecx */
    MEM32(ecx) = 0x110016C4u; /* 0x1100FBA0: mov dword ptr [ecx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1100FBA6: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FBAB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FBAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FBAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FBADu);

L_1100FBAD:
    MEM32(ecx) = 0x110016C4u; /* 0x1100FBAD: mov dword ptr [ecx], 0x110016c4 */
    eax = ecx; /* 0x1100FBB3: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FBB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FBB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FBB6u);

L_1100FBB6:
    PUSH32(esp, ebx); /* 0x1100FBB6: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100FBB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100FBB9: push esi */
    esi = ecx; /* 0x1100FBBA: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100FBBC: push edi */
    PUSH32(esp, ebx); /* 0x1100FBBD: push ebx */
    PUSH32(esp, ebx); /* 0x1100FBBE: push ebx */
    MEM32(esi + 0x30) = ebx; /* 0x1100FBBF: mov dword ptr [esi + 0x30], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x1100FBC2: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x1100FBC5: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = 0x201u; /* 0x1100FBC8: mov dword ptr [esi + 0x14], 0x201 */
    MEM32(esi + 0x18) = 6; /* 0x1100FBCF: mov dword ptr [esi + 0x18], 6 */
    MEM32(esi + 0x1C) = ebx; /* 0x1100FBD6: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x1100FBD9: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = ebx; /* 0x1100FBDC: mov dword ptr [esi + 0x24], ebx */
    MEM32(esi + 0x28) = ebx; /* 0x1100FBDF: mov dword ptr [esi + 0x28], ebx */
    MEM32(esi + 0x2C) = ebx; /* 0x1100FBE2: mov dword ptr [esi + 0x2c], ebx */
    RECOMP_CALL(sub_1100F771); /* 0x1100FBE5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x1100FBEA: push 4 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100FBEC: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100FBF2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1100FBF4: pop ecx */
    /* test edi, edi */ /* 0x1100FBF5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FC05; /* 0x1100FBF7: je 0x1100fc05 */
L_1100FBF9:
    PUSH32(esp, 1); /* 0x1100FBF9: push 1 */
    RECOMP_CALL(sub_11030421); /* 0x1100FBFB: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FC00: pop ecx */
    MEM32(edi) = eax; /* 0x1100FC01: mov dword ptr [edi], eax */
    goto L_1100FC07; /* 0x1100FC03: jmp 0x1100fc07 */
L_1100FC05:
    edi = ebx; /* 0x1100FC05: mov edi, ebx */
L_1100FC07:
    MEM32(esi + 0x30) = edi; /* 0x1100FC07: mov dword ptr [esi + 0x30], edi */
    edi = POP32_VAL(esp); /* 0x1100FC0A: pop edi */
    esi = POP32_VAL(esp); /* 0x1100FC0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100FC0C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FC0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FC0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FC0Eu);

L_1100FC0E:
    PUSH32(esp, ebp); /* 0x1100FC0E: push ebp */
    ebp = esp; /* 0x1100FC0F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100FC11: push esi */
    PUSH32(esp, edi); /* 0x1100FC12: push edi */
    edi = ecx; /* 0x1100FC13: mov edi, ecx */
    esi = MEM32(edi + 0x2C); /* 0x1100FC15: mov esi, dword ptr [edi + 0x2c] */
    goto L_1100FC29; /* 0x1100FC18: jmp 0x1100fc29 */
L_1100FC1A:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1100FC1A: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1100FC1D: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100FC1E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x1100FC21: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x1100FC24: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100FC26: add esp, 0xc */
    _flag_k = FK_ADD;
L_1100FC29:
    /* test esi, esi */ /* 0x1100FC29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FC1A; /* 0x1100FC2B: jne 0x1100fc1a */
L_1100FC2D:
    edi = POP32_VAL(esp); /* 0x1100FC2D: pop edi */
    esi = POP32_VAL(esp); /* 0x1100FC2E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100FC2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100FC30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100FC33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FC33u);

L_1100FC33:
    PUSH32(esp, ebp); /* 0x1100FC33: push ebp */
    ebp = esp; /* 0x1100FC34: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1100FC36: push ebx */
    PUSH32(esp, esi); /* 0x1100FC37: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100FC38: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100FC3B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1100FC3D: push edi */
    edi = ecx; /* 0x1100FC3E: mov edi, ecx */
    edx = ebx; /* 0x1100FC40: mov edx, ebx */
    eax = MEM32(edi + 0x28); /* 0x1100FC42: mov eax, dword ptr [edi + 0x28] */
    /* test eax, eax */ /* 0x1100FC45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FC6F; /* 0x1100FC47: je 0x1100fc6f */
L_1100FC49:
    /* cmp MEM32(eax + 0x4), esi */ /* 0x1100FC49: cmp dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100FC95; /* 0x1100FC4C: je 0x1100fc95 */
L_1100FC4E:
    /* test edx, edx */ /* 0x1100FC4E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FC5E; /* 0x1100FC50: jne 0x1100fc5e */
L_1100FC52:
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1100FC52: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FC5E; /* 0x1100FC55: jne 0x1100fc5e */
L_1100FC57:
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x1100FC57: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FC5E; /* 0x1100FC5A: jne 0x1100fc5e */
L_1100FC5C:
    edx = eax; /* 0x1100FC5C: mov edx, eax */
L_1100FC5E:
    eax = MEM32(eax); /* 0x1100FC5E: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1100FC60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FC49; /* 0x1100FC62: jne 0x1100fc49 */
L_1100FC64:
    /* test edx, edx */ /* 0x1100FC64: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FC6F; /* 0x1100FC66: je 0x1100fc6f */
L_1100FC68:
    MEM32(edx + 0x4) = esi; /* 0x1100FC68: mov dword ptr [edx + 4], esi */
    eax = edx; /* 0x1100FC6B: mov eax, edx */
    goto L_1100FC95; /* 0x1100FC6D: jmp 0x1100fc95 */
L_1100FC6F:
    PUSH32(esp, 0x10u); /* 0x1100FC6F: push 0x10 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100FC71: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FC77: pop ecx */
    ecx = eax; /* 0x1100FC78: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1100FC7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FC8E; /* 0x1100FC7C: je 0x1100fc8e */
L_1100FC7E:
    eax = MEM32(edi + 0x28); /* 0x1100FC7E: mov eax, dword ptr [edi + 0x28] */
    MEM32(ecx) = eax; /* 0x1100FC81: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = esi; /* 0x1100FC83: mov dword ptr [ecx + 4], esi */
    MEM32(ecx + 0x8) = ebx; /* 0x1100FC86: mov dword ptr [ecx + 8], ebx */
    MEM32(ecx + 0xC) = ebx; /* 0x1100FC89: mov dword ptr [ecx + 0xc], ebx */
    goto L_1100FC90; /* 0x1100FC8C: jmp 0x1100fc90 */
L_1100FC8E:
    ecx = ebx; /* 0x1100FC8E: mov ecx, ebx */
L_1100FC90:
    MEM32(edi + 0x28) = ecx; /* 0x1100FC90: mov dword ptr [edi + 0x28], ecx */
    eax = ecx; /* 0x1100FC93: mov eax, ecx */
L_1100FC95:
    edi = POP32_VAL(esp); /* 0x1100FC95: pop edi */
    esi = POP32_VAL(esp); /* 0x1100FC96: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100FC97: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100FC98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100FC99: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100FC9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FC9Cu);

L_1100FC9C:
    PUSH32(esp, esi); /* 0x1100FC9C: push esi */
    PUSH32(esp, edi); /* 0x1100FC9D: push edi */
    PUSH32(esp, 0); /* 0x1100FC9E: push 0 */
    edi = ecx; /* 0x1100FCA0: mov edi, ecx */
    RECOMP_CALL(sub_1100FC0E); /* 0x1100FCA2: call 0x1100fc0e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x28); /* 0x1100FCA7: mov eax, dword ptr [edi + 0x28] */
    /* test eax, eax */ /* 0x1100FCAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FCBE; /* 0x1100FCAC: je 0x1100fcbe */
L_1100FCAE:
    esi = MEM32(eax); /* 0x1100FCAE: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1100FCB0: push eax */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100FCB1: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100FCB7: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x1100FCB9: pop ecx */
    /* test esi, esi */ /* 0x1100FCBA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FCAE; /* 0x1100FCBC: jne 0x1100fcae */
L_1100FCBE:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x1100FCBE: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x2C); /* 0x1100FCC2: mov eax, dword ptr [edi + 0x2c] */
    /* test eax, eax */ /* 0x1100FCC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FCD9; /* 0x1100FCC7: je 0x1100fcd9 */
L_1100FCC9:
    esi = MEM32(eax); /* 0x1100FCC9: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1100FCCB: push eax */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100FCCC: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100FCD2: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x1100FCD4: pop ecx */
    /* test esi, esi */ /* 0x1100FCD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FCC9; /* 0x1100FCD7: jne 0x1100fcc9 */
L_1100FCD9:
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0; /* 0x1100FCD9: and dword ptr [edi + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1100FCDD: pop edi */
    esi = POP32_VAL(esp); /* 0x1100FCDE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FCDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FCE0u);

L_1100FCE0:
    PUSH32(esp, ebp); /* 0x1100FCE0: push ebp */
    ebp = esp; /* 0x1100FCE1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100FCE3: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100FCE7: push esi */
    esi = ecx; /* 0x1100FCE8: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FD12; /* 0x1100FCEA: je 0x1100fd12 */
L_1100FCEC:
    PUSH32(esp, edi); /* 0x1100FCEC: push edi */
    PUSH32(esp, 0x1100FB9Fu); /* 0x1100FCED: push 0x1100fb9f */
    edi = esi + (-0x4); /* 0x1100FCF2: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100FCF5: push dword ptr [edi] */
    PUSH32(esp, 0x38u); /* 0x1100FCF7: push 0x38 */
    PUSH32(esp, esi); /* 0x1100FCF9: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100FCFA: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100FCFF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FD0D; /* 0x1100FD03: je 0x1100fd0d */
L_1100FD05:
    PUSH32(esp, edi); /* 0x1100FD05: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100FD06: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FD0C: pop ecx */
L_1100FD0D:
    eax = edi; /* 0x1100FD0D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100FD0F: pop edi */
    goto L_1100FD2F; /* 0x1100FD10: jmp 0x1100fd2f */
L_1100FD12:
    PUSH32(esp, esi); /* 0x1100FD12: push esi */
    MEM32(esi) = 0x110016C4u; /* 0x1100FD13: mov dword ptr [esi], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x1100FD19: call 0x110306ab */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100FD1E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x1100FD22: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FD2D; /* 0x1100FD23: je 0x1100fd2d */
L_1100FD25:
    PUSH32(esp, esi); /* 0x1100FD25: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100FD26: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FD2C: pop ecx */
L_1100FD2D:
    eax = esi; /* 0x1100FD2D: mov eax, esi */
L_1100FD2F:
    esi = POP32_VAL(esp); /* 0x1100FD2F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100FD30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100FD31: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100FD95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FD95u);
    RECOMP_EH_ENTER();

L_1100FD95:
    PUSH32(esp, 0x18u); /* 0x1100FD95: push 0x18 */
    eax = 0x1103CD42u; /* 0x1100FD97: mov eax, 0x1103cd42 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1100FD9C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1100FDA1: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1100FDA4: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1100FDA6: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 1 */ /* 0x1100FDA9: test byte ptr [ecx + esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FEB2; /* 0x1100FDAE: jne 0x1100feb2 */
L_1100FDB4:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1100FDB4: mov ecx, dword ptr [ecx + esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100FDB8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1100FDBA: mov dword ptr [ebp - 0x1c], edi */
    ebx = esi; /* 0x1100FDBD: mov ebx, esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1100FDBF: mov dword ptr [ebp - 0x24], ebx */
    /* test ecx, ecx */ /* 0x1100FDC2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FDCB; /* 0x1100FDC4: je 0x1100fdcb */
L_1100FDC6:
    eax = MEM32(ecx); /* 0x1100FDC6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100FDC8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100FDCB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100FDCB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100FDCF: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1100FDD1: push 1 */
    RECOMP_CALL(sub_11010675); /* 0x1100FDD3: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1100FDD8: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FDDB: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1100FDE2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FE8D; /* 0x1100FDE4: je 0x1100fe8d */
L_1100FDEA:
    eax = ebp + (-0x14); /* 0x1100FDEA: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1100FDED: push eax */
    eax = MEM32(esi); /* 0x1100FDEE: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1100FDF0: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FDF3: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1100FDF5: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100FDFA: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100FDFB: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11010F0A); /* 0x1100FDFF: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FE04: pop ecx */
    ecx = ebp + (-0x14); /* 0x1100FE05: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100FE08: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1100FE0B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100FE10: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(esi); /* 0x1100FE14: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1100FE16: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1100FE19: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x1100FE1D: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_1100FE22:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1100FE22: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FE2C; /* 0x1100FE25: jne 0x1100fe2c */
L_1100FE27:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1100FE27: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100FE3B; /* 0x1100FE2A: jmp 0x1100fe3b */
L_1100FE2C:
    ecx = (uint32_t)LO8(eax); /* 0x1100FE2C: movzx ecx, al */
    eax = MEM32(ebp + (-0x18)); /* 0x1100FE2F: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0xC); /* 0x1100FE32: mov eax, dword ptr [eax + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x1100FE35: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FE44; /* 0x1100FE39: jne 0x1100fe44 */
L_1100FE3B:
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FE3B: mov dword ptr [ebp - 4], 1 */
    goto L_1100FE8D; /* 0x1100FE42: jmp 0x1100fe8d */
L_1100FE44:
    eax = MEM32(esi); /* 0x1100FE44: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1100FE46: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1100FE49: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x1100FE4D: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1100FE22; /* 0x1100FE52: jmp 0x1100fe22 */
L_1100FE7D:
    esi = MEM32(ebp + 0x8); /* 0x1100FE7D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1100FE80: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FE83: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x1100FE8A: mov ebx, dword ptr [ebp - 0x24] */
L_1100FE8D:
    eax = MEM32(esi); /* 0x1100FE8D: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1100FE8F: push 0 */
    PUSH32(esp, edi); /* 0x1100FE91: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1100FE92: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FE95: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1100FE97: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100FE9C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x1100FEA0: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1100FEA2: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1100FEA5: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1100FEA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FEB2; /* 0x1100FEAB: je 0x1100feb2 */
L_1100FEAD:
    edx = MEM32(ecx); /* 0x1100FEAD: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100FEAF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1100FEB2:
    eax = esi; /* 0x1100FEB2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100FEB4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1100FEB9: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1100FE7Du: goto L_1100FE7D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1100FE54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FE54u);

L_1100FE54:
    ecx = MEM32(ebp + 0x8); /* 0x1100FE54: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1100FE57: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1100FE59: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1100FE5C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1100FE5E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1100FE61: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1100FE64: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FE6D; /* 0x1100FE68: jne 0x1100fe6d */
L_1100FE6A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1100FE6A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100FE6D:
    PUSH32(esp, 1); /* 0x1100FE6D: push 1 */
    PUSH32(esp, eax); /* 0x1100FE6F: push eax */
    ecx = edx; /* 0x1100FE70: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1100FE72: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x1100FE7Du; /* 0x1100FE77: mov eax, 0x1100fe7d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FE7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FE7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FE7Du);

L_1100FE7D:
    esi = MEM32(ebp + 0x8); /* 0x1100FE7D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1100FE80: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FE83: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x1100FE8A: mov ebx, dword ptr [ebp - 0x24] */
    eax = MEM32(esi); /* 0x1100FE8D: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1100FE8F: push 0 */
    PUSH32(esp, edi); /* 0x1100FE91: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1100FE92: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FE95: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1100FE97: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100FE9C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x1100FEA0: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1100FEA2: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1100FEA5: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1100FEA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FEB2; /* 0x1100FEAB: je 0x1100feb2 */
L_1100FEAD:
    edx = MEM32(ecx); /* 0x1100FEAD: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100FEAF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1100FEB2:
    eax = esi; /* 0x1100FEB2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100FEB4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FEB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FEBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FEBFu);
    RECOMP_EH_ENTER();

L_1100FEBF:
    PUSH32(esp, 0x18u); /* 0x1100FEBF: push 0x18 */
    eax = 0x1103CD75u; /* 0x1100FEC1: mov eax, 0x1103cd75 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1100FEC6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1100FECB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1100FECE: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1100FED0: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 1 */ /* 0x1100FED3: test byte ptr [ecx + esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FFE8; /* 0x1100FED8: jne 0x1100ffe8 */
L_1100FEDE:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1100FEDE: mov ecx, dword ptr [ecx + esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100FEE2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1100FEE4: mov dword ptr [ebp - 0x1c], edi */
    ebx = esi; /* 0x1100FEE7: mov ebx, esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1100FEE9: mov dword ptr [ebp - 0x24], ebx */
    /* test ecx, ecx */ /* 0x1100FEEC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FEF5; /* 0x1100FEEE: je 0x1100fef5 */
L_1100FEF0:
    eax = MEM32(ecx); /* 0x1100FEF0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100FEF2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100FEF5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100FEF5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100FEF9: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1100FEFB: push 1 */
    RECOMP_CALL(sub_11010810); /* 0x1100FEFD: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1100FF02: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FF05: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1100FF0C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FFC3; /* 0x1100FF0E: je 0x1100ffc3 */
L_1100FF14:
    eax = ebp + (-0x14); /* 0x1100FF14: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1100FF17: push eax */
    eax = MEM32(esi); /* 0x1100FF18: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1100FF1A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FF1D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1100FF1F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100FF24: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100FF25: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11010FA4); /* 0x1100FF29: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FF2E: pop ecx */
    ecx = ebp + (-0x14); /* 0x1100FF2F: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100FF32: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1100FF35: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100FF3A: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(esi); /* 0x1100FF3E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1100FF40: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1100FF43: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x1100FF47: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1100FF4C:
    eax = (uint32_t)LO16(eax); /* 0x1100FF4C: movzx eax, ax */
    ecx = eax; /* 0x1100FF4F: mov ecx, eax */
    eax = 0xFFFFu; /* 0x1100FF51: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1100FF56: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FF60; /* 0x1100FF59: jne 0x1100ff60 */
L_1100FF5B:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1100FF5B: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100FF71; /* 0x1100FF5E: jmp 0x1100ff71 */
L_1100FF60:
    edx = MEM32(ebp + (-0x18)); /* 0x1100FF60: mov edx, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1100FF63: push ecx */
    PUSH32(esp, 0x48u); /* 0x1100FF64: push 0x48 */
    ecx = edx; /* 0x1100FF66: mov ecx, edx */
    eax = MEM32(edx); /* 0x1100FF68: mov eax, dword ptr [edx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100FF6A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100FF6D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100FF7A; /* 0x1100FF6F: jne 0x1100ff7a */
L_1100FF71:
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FF71: mov dword ptr [ebp - 4], 1 */
    goto L_1100FFC3; /* 0x1100FF78: jmp 0x1100ffc3 */
L_1100FF7A:
    eax = MEM32(esi); /* 0x1100FF7A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1100FF7C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1100FF7F: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x1100FF83: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1100FF4C; /* 0x1100FF88: jmp 0x1100ff4c */
L_1100FFB3:
    esi = MEM32(ebp + 0x8); /* 0x1100FFB3: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1100FFB6: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FFB9: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x1100FFC0: mov ebx, dword ptr [ebp - 0x24] */
L_1100FFC3:
    eax = MEM32(esi); /* 0x1100FFC3: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1100FFC5: push 0 */
    PUSH32(esp, edi); /* 0x1100FFC7: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1100FFC8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FFCB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1100FFCD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100FFD2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x1100FFD6: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1100FFD8: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1100FFDB: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1100FFDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FFE8; /* 0x1100FFE1: je 0x1100ffe8 */
L_1100FFE3:
    edx = MEM32(ecx); /* 0x1100FFE3: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100FFE5: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1100FFE8:
    eax = esi; /* 0x1100FFE8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100FFEA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1100FFEF: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1100FFB3u: goto L_1100FFB3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1100FF8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FF8Au);

L_1100FF8A:
    ecx = MEM32(ebp + 0x8); /* 0x1100FF8A: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1100FF8D: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1100FF8F: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1100FF92: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1100FF94: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1100FF97: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1100FF9A: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100FFA3; /* 0x1100FF9E: jne 0x1100ffa3 */
L_1100FFA0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1100FFA0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100FFA3:
    PUSH32(esp, 1); /* 0x1100FFA3: push 1 */
    PUSH32(esp, eax); /* 0x1100FFA5: push eax */
    ecx = edx; /* 0x1100FFA6: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1100FFA8: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x1100FFB3u; /* 0x1100FFAD: mov eax, 0x1100ffb3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FFB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FFB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FFB3u);

L_1100FFB3:
    esi = MEM32(ebp + 0x8); /* 0x1100FFB3: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1100FFB6: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100FFB9: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x1100FFC0: mov ebx, dword ptr [ebp - 0x24] */
    eax = MEM32(esi); /* 0x1100FFC3: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1100FFC5: push 0 */
    PUSH32(esp, edi); /* 0x1100FFC7: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1100FFC8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1100FFCB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1100FFCD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100FFD2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x1100FFD6: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1100FFD8: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1100FFDB: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1100FFDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FFE8; /* 0x1100FFE1: je 0x1100ffe8 */
L_1100FFE3:
    edx = MEM32(ecx); /* 0x1100FFE3: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100FFE5: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1100FFE8:
    eax = esi; /* 0x1100FFE8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100FFEA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100FFEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100FFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100FFF0u);
    RECOMP_EH_ENTER();

L_1100FFF0:
    PUSH32(esp, 0x18u); /* 0x1100FFF0: push 0x18 */
    eax = 0x1103CDA8u; /* 0x1100FFF2: mov eax, 0x1103cda8 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1100FFF7: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1100FFFC: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1100FFFF: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010001: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 1 */ /* 0x11010004: test byte ptr [ecx + esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010119; /* 0x11010009: jne 0x11010119 */
L_1101000F:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1101000F: mov ecx, dword ptr [ecx + esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11010013: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x11010015: mov dword ptr [ebp - 0x1c], edi */
    ebx = esi; /* 0x11010018: mov ebx, esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1101001A: mov dword ptr [ebp - 0x24], ebx */
    /* test ecx, ecx */ /* 0x1101001D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010026; /* 0x1101001F: je 0x11010026 */
L_11010021:
    eax = MEM32(ecx); /* 0x11010021: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11010023: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11010026:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010026: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101002A: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1101002C: push 1 */
    RECOMP_CALL(sub_11010989); /* 0x1101002E: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11010033: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11010036: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101003D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110100F4; /* 0x1101003F: je 0x110100f4 */
L_11010045:
    eax = ebp + (-0x14); /* 0x11010045: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x11010048: push eax */
    eax = MEM32(esi); /* 0x11010049: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101004B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101004E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11010050: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11010055: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11010056: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101103E); /* 0x1101005A: call 0x1101103e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101005F: pop ecx */
    ecx = ebp + (-0x14); /* 0x11010060: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x11010063: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11010066: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101006B: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(esi); /* 0x1101006F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010071: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010074: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11010078: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1101007D:
    eax = (uint32_t)LO16(eax); /* 0x1101007D: movzx eax, ax */
    ecx = eax; /* 0x11010080: mov ecx, eax */
    eax = 0xFFFFu; /* 0x11010082: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11010087: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010091; /* 0x1101008A: jne 0x11010091 */
L_1101008C:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1101008C: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110100A2; /* 0x1101008F: jmp 0x110100a2 */
L_11010091:
    edx = MEM32(ebp + (-0x18)); /* 0x11010091: mov edx, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x11010094: push ecx */
    PUSH32(esp, 0x48u); /* 0x11010095: push 0x48 */
    ecx = edx; /* 0x11010097: mov ecx, edx */
    eax = MEM32(edx); /* 0x11010099: mov eax, dword ptr [edx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101009B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101009E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110100AB; /* 0x110100A0: jne 0x110100ab */
L_110100A2:
    MEM32(ebp + (-0x4)) = 1; /* 0x110100A2: mov dword ptr [ebp - 4], 1 */
    goto L_110100F4; /* 0x110100A9: jmp 0x110100f4 */
L_110100AB:
    eax = MEM32(esi); /* 0x110100AB: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110100AD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110100B0: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x110100B4: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101007D; /* 0x110100B9: jmp 0x1101007d */
L_110100E4:
    esi = MEM32(ebp + 0x8); /* 0x110100E4: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x110100E7: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110100EA: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x110100F1: mov ebx, dword ptr [ebp - 0x24] */
L_110100F4:
    eax = MEM32(esi); /* 0x110100F4: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110100F6: push 0 */
    PUSH32(esp, edi); /* 0x110100F8: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110100F9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110100FC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110100FE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010103: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x11010107: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x11010109: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1101010C: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x11010110: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010119; /* 0x11010112: je 0x11010119 */
L_11010114:
    edx = MEM32(ecx); /* 0x11010114: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11010116: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11010119:
    eax = esi; /* 0x11010119: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101011B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010120: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x110100E4u: goto L_110100E4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110100BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110100BBu);

L_110100BB:
    ecx = MEM32(ebp + 0x8); /* 0x110100BB: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x110100BE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110100C0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110100C3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110100C5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110100C8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x110100CB: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110100D4; /* 0x110100CF: jne 0x110100d4 */
L_110100D1:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110100D1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110100D4:
    PUSH32(esp, 1); /* 0x110100D4: push 1 */
    PUSH32(esp, eax); /* 0x110100D6: push eax */
    ecx = edx; /* 0x110100D7: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x110100D9: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x110100E4u; /* 0x110100DE: mov eax, 0x110100e4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110100E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110100E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110100E4u);

L_110100E4:
    esi = MEM32(ebp + 0x8); /* 0x110100E4: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x110100E7: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110100EA: mov dword ptr [ebp - 4], 1 */
    ebx = MEM32(ebp + (-0x24)); /* 0x110100F1: mov ebx, dword ptr [ebp - 0x24] */
    eax = MEM32(esi); /* 0x110100F4: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110100F6: push 0 */
    PUSH32(esp, edi); /* 0x110100F8: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110100F9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110100FC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110100FE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010103: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x11010107: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x11010109: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + ebx + 0x38); /* 0x1101010C: mov ecx, dword ptr [ecx + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x11010110: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010119; /* 0x11010112: je 0x11010119 */
L_11010114:
    edx = MEM32(ecx); /* 0x11010114: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11010116: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11010119:
    eax = esi; /* 0x11010119: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101011B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010120: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010121(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010121u);

L_11010121:
    RECOMP_ICALL(MEM32(0x11069238)); /* 0x11010121: call dword ptr [0x11069238] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010127: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010153; /* 0x1101012A: je 0x11010153 */
L_1101012C:
    ecx = eax + eax; /* 0x1101012C: lea ecx, [eax + eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101012F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010131:
    /* cmp ecx, MEM32(eax * 4 + 0x11004980) */ /* 0x11010131: cmp ecx, dword ptr [eax*4 + 0x11004980] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x11004980));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010140; /* 0x11010138: jb 0x11010140 */
L_1101013A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101013A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 7 */ /* 0x1101013B: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11010131; /* 0x1101013E: jl 0x11010131 */
L_11010140:
    /* cmp eax, 7 */ /* 0x11010140: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1101014D; /* 0x11010143: jge 0x1101014d */
L_11010145:
    eax = MEM32(eax * 4 + 0x11004980); /* 0x11010145: mov eax, dword ptr [eax*4 + 0x11004980] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101014C: ret  */
L_1101014D:
    eax = 0x119u; /* 0x1101014D: mov eax, 0x119 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010152: ret  */
L_11010153:
    PUSH32(esp, 0xBu); /* 0x11010153: push 0xb */
    eax = POP32_VAL(esp); /* 0x11010155: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010156: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010157(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010157u);

L_11010157:
    { _itail_tgt = (uint32_t)(MEM32(0x1106923C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1101015D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101015Du);

L_1101015D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101015D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11068E74u; /* 0x1101015F: mov ecx, 0x11068e74 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11010164: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x11010165: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11010169: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101016A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101016B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101016Bu);

L_1101016B:
    PUSH32(esp, ebp); /* 0x1101016B: push ebp */
    ebp = esp; /* 0x1101016C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101016E: push esi */
    esi = ecx; /* 0x1101016F: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11010171: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11010173: push -1 */
    PUSH32(esp, eax); /* 0x11010175: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11010176: push dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x11010179: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = eax; /* 0x11010180: mov dword ptr [esi + 0x10], eax */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x11010183: mov byte ptr [esi], al */
    RECOMP_CALL(sub_1101059B); /* 0x11010185: call 0x1101059b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101018A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101018C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101018D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101018E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010191u);

L_11010191:
    PUSH32(esp, ebp); /* 0x11010191: push ebp */
    ebp = esp; /* 0x11010192: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11010194: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11010195: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11010198: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1101019A: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 0xFu; /* 0x1101019E: mov dword ptr [esi + 0x14], 0xf */
    MEM8(esi) = (uint8_t)(0); /* 0x110101A5: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_1100DE61); /* 0x110101A8: call 0x1100de61 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110101AD: pop ecx */
    PUSH32(esp, eax); /* 0x110101AE: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110101AF: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x110101B2: mov ecx, esi */
    RECOMP_CALL(sub_11010AB4); /* 0x110101B4: call 0x11010ab4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110101B9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110101BB: pop esi */
    ebp = POP32_VAL(esp); /* 0x110101BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110101BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110101C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110101C0u);

L_110101C0:
    PUSH32(esp, ebp); /* 0x110101C0: push ebp */
    ebp = esp; /* 0x110101C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110101C3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110101C4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x110101C7: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x110101C9: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 0xFu; /* 0x110101CD: mov dword ptr [esi + 0x14], 0xf */
    MEM8(esi) = (uint8_t)(0); /* 0x110101D4: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_11010405); /* 0x110101D7: call 0x11010405 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110101DC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110101DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x110101DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110101E0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110101ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110101EDu);

L_110101ED:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x110101ED: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x110101F0: mov eax, ecx */
    MEM8(ecx + 0x4) = (uint8_t)(0); /* 0x110101F2: mov byte ptr [ecx + 4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110101F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110101F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110101F7u);

L_110101F7:
    PUSH32(esp, ebp); /* 0x110101F7: push ebp */
    ebp = esp; /* 0x110101F8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110101FA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110101FB: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x110101FE: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11010200: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x11010203: mov byte ptr [esi + 4], 0 */
    RECOMP_CALL(sub_11010213); /* 0x11010207: call 0x11010213 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101020C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101020E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101020F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010210: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010213(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010213u);

L_11010213:
    PUSH32(esp, ebp); /* 0x11010213: push ebp */
    ebp = esp; /* 0x11010214: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11010216: push ebx */
    ebx = ecx; /* 0x11010217: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x11010219: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1101021A: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx), edi */ /* 0x1101021D: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010261; /* 0x1101021F: je 0x11010261 */
L_11010221:
    /* cmp MEM32(ebx), 0 */ /* 0x11010221: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101022F; /* 0x11010224: je 0x1101022f */
L_11010226:
    PUSH32(esp, MEM32(ebx)); /* 0x11010226: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11010228: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101022E: pop ecx */
L_1101022F:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1101022F: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x11010232: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010261; /* 0x11010234: je 0x11010261 */
L_11010236:
    /* cmp MEM8(edi), 0 */ /* 0x11010236: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x11010239: push esi */
    esi = edi; /* 0x1101023A: mov esi, edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010244; /* 0x1101023C: je 0x11010244 */
L_1101023E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101023E: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1101023F: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101023E; /* 0x11010242: jne 0x1101023e */
L_11010244:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x11010244: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11010246: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x11010247: push esi */
    RECOMP_ICALL(MEM32(0x11069300)); /* 0x11010248: call dword ptr [0x11069300] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x1101024E: mov dword ptr [ebx], eax */
    ecx = POP32_VAL(esp); /* 0x11010250: pop ecx */
    /* test eax, eax */ /* 0x11010251: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010260; /* 0x11010253: je 0x11010260 */
L_11010255:
    PUSH32(esp, esi); /* 0x11010255: push esi */
    PUSH32(esp, edi); /* 0x11010256: push edi */
    PUSH32(esp, eax); /* 0x11010257: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x11010258: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101025D: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010260:
    esi = POP32_VAL(esp); /* 0x11010260: pop esi */
L_11010261:
    edi = POP32_VAL(esp); /* 0x11010261: pop edi */
    eax = ebx; /* 0x11010262: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x11010264: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11010265: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010266: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010269(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010269u);

L_11010269:
    PUSH32(esp, esi); /* 0x11010269: push esi */
    esi = ecx; /* 0x1101026A: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1101026C: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101027A; /* 0x1101026F: je 0x1101027a */
L_11010271:
    PUSH32(esp, MEM32(esi)); /* 0x11010271: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11010273: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11010279: pop ecx */
L_1101027A:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1101027A: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1101027D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101027E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101027F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101027Fu);

L_1101027F:
    eax = MEM32(ecx); /* 0x1101027F: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x11010281: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010288; /* 0x11010283: jne 0x11010288 */
L_11010285:
    eax = ecx + 0x4; /* 0x11010285: lea eax, [ecx + 4] */
L_11010288:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010288: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010289(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010289u);

L_11010289:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11010289: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), eax */ /* 0x1101028B: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101028D: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010290: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010291u);

L_11010291:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x11010291: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11010294: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + 0x4) = (uint16_t)(LO16(eax)); /* 0x11010296: mov word ptr [ecx + 4], ax */
    eax = ecx; /* 0x1101029A: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101029C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101029D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101029Du);

L_1101029D:
    PUSH32(esp, ebp); /* 0x1101029D: push ebp */
    ebp = esp; /* 0x1101029E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x110102A0: push ebx */
    ebx = ecx; /* 0x110102A1: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x110102A3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110102A4: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx), edi */ /* 0x110102A7: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110102F0; /* 0x110102A9: je 0x110102f0 */
L_110102AB:
    /* cmp MEM32(ebx), 0 */ /* 0x110102AB: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110102B9; /* 0x110102AE: je 0x110102b9 */
L_110102B0:
    PUSH32(esp, MEM32(ebx)); /* 0x110102B0: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x110102B2: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110102B8: pop ecx */
L_110102B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110102B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x110102BB: mov dword ptr [ebx], eax */
    /* test edi, edi */ /* 0x110102BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110102F0; /* 0x110102BF: je 0x110102f0 */
L_110102C1:
    PUSH32(esp, esi); /* 0x110102C1: push esi */
    esi = edi; /* 0x110102C2: mov esi, edi */
    /* cmp MEM16(edi), LO16(eax) */ /* 0x110102C4: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110102D1; /* 0x110102C7: je 0x110102d1 */
L_110102C9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x110102C9: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x110102CC: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110102C9; /* 0x110102CF: jne 0x110102c9 */
L_110102D1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x110102D1: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x110102D3: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x110102D6: push esi */
    RECOMP_ICALL(MEM32(0x11069300)); /* 0x110102D7: call dword ptr [0x11069300] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x110102DD: mov dword ptr [ebx], eax */
    ecx = POP32_VAL(esp); /* 0x110102DF: pop ecx */
    /* test eax, eax */ /* 0x110102E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110102EF; /* 0x110102E2: je 0x110102ef */
L_110102E4:
    PUSH32(esp, esi); /* 0x110102E4: push esi */
    PUSH32(esp, edi); /* 0x110102E5: push edi */
    PUSH32(esp, eax); /* 0x110102E6: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x110102E7: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110102EC: add esp, 0xc */
    _flag_k = FK_ADD;
L_110102EF:
    esi = POP32_VAL(esp); /* 0x110102EF: pop esi */
L_110102F0:
    edi = POP32_VAL(esp); /* 0x110102F0: pop edi */
    eax = ebx; /* 0x110102F1: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x110102F3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110102F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110102F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110102F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110102F8u);

L_110102F8:
    PUSH32(esp, ebp); /* 0x110102F8: push ebp */
    ebp = esp; /* 0x110102F9: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x110102FB: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010319; /* 0x110102FF: je 0x11010319 */
L_11010301:
    eax = MEM32(ecx + 0xC); /* 0x11010301: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x11010304: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010307: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010310; /* 0x1101030B: jne 0x11010310 */
L_1101030D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101030D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010310:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11010310: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11010313: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010314: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_11010319:
    ebp = POP32_VAL(esp); /* 0x11010319: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101031A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101031D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101031Du);

L_1101031D:
    eax = MEM32(ecx + 0x38); /* 0x1101031D: mov eax, dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010320: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010336(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010336u);

L_11010336:
    eax = MEM32(ecx + 0x1C); /* 0x11010336: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(eax); /* 0x11010339: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1101033B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010346; /* 0x1101033D: je 0x11010346 */
L_1101033F:
    eax = MEM32(ecx + 0x2C); /* 0x1101033F: mov eax, dword ptr [ecx + 0x2c] */
    eax = MEM32(eax); /* 0x11010342: mov eax, dword ptr [eax] */
    goto L_11010348; /* 0x11010344: jmp 0x11010348 */
L_11010346:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11010346: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010348:
    /* test eax, eax */ /* 0x11010348: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11010350; /* 0x1101034A: jle 0x11010350 */
L_1101034C:
    eax = (uint32_t)MEM8(edx); /* 0x1101034C: movzx eax, byte ptr [edx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101034F: ret  */
L_11010350:
    eax = MEM32(ecx); /* 0x11010350: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x18)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11010355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010355u);

L_11010355:
    PUSH32(esp, esi); /* 0x11010355: push esi */
    esi = ecx; /* 0x11010356: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11010358: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x1C); /* 0x1101035A: mov eax, dword ptr [esi + 0x1c] */
    /* cmp MEM32(eax), ecx */ /* 0x1101035D: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010366; /* 0x1101035F: je 0x11010366 */
L_11010361:
    eax = MEM32(esi + 0x2C); /* 0x11010361: mov eax, dword ptr [esi + 0x2c] */
    ecx = MEM32(eax); /* 0x11010364: mov ecx, dword ptr [eax] */
L_11010366:
    /* cmp ecx, 1 */ /* 0x11010366: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101037D; /* 0x11010369: jle 0x1101037d */
L_1101036B:
    eax = MEM32(esi + 0x2C); /* 0x1101036B: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1101036E: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = MEM32(esi + 0x1C); /* 0x11010370: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x11010373: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11010375: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x11010376: mov dword ptr [eax], ecx */
    ecx = (uint32_t)MEM8(ecx); /* 0x11010378: movzx ecx, byte ptr [ecx] */
    goto L_11010394; /* 0x1101037B: jmp 0x11010394 */
L_1101037D:
    ecx = esi; /* 0x1101037D: mov ecx, esi */
    RECOMP_CALL(sub_110107B0); /* 0x1101037F: call 0x110107b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x11010384: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x11010387: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010394; /* 0x11010389: je 0x11010394 */
L_1101038B:
    ecx = esi; /* 0x1101038B: mov ecx, esi */
    RECOMP_CALL(sub_11010336); /* 0x1101038D: call 0x11010336 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11010392: mov ecx, eax */
L_11010394:
    eax = ecx; /* 0x11010394: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x11010396: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010397: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010398u);

L_11010398:
    eax = MEM32(ecx + 0x1C); /* 0x11010398: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(eax); /* 0x1101039B: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1101039D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110103A8; /* 0x1101039F: je 0x110103a8 */
L_110103A1:
    eax = MEM32(ecx + 0x2C); /* 0x110103A1: mov eax, dword ptr [ecx + 0x2c] */
    eax = MEM32(eax); /* 0x110103A4: mov eax, dword ptr [eax] */
    goto L_110103AA; /* 0x110103A6: jmp 0x110103aa */
L_110103A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110103A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110103AA:
    /* test eax, eax */ /* 0x110103AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110103B2; /* 0x110103AC: jle 0x110103b2 */
L_110103AE:
    eax = (uint32_t)MEM16(edx); /* 0x110103AE: movzx eax, word ptr [edx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110103B1: ret  */
L_110103B2:
    eax = MEM32(ecx); /* 0x110103B2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x110103B4: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110103B7: movzx eax, ax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110103BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110103BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110103BBu);

L_110103BB:
    PUSH32(esp, esi); /* 0x110103BB: push esi */
    esi = ecx; /* 0x110103BC: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110103BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x1C); /* 0x110103C0: mov eax, dword ptr [esi + 0x1c] */
    /* cmp MEM32(eax), ecx */ /* 0x110103C3: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110103CC; /* 0x110103C5: je 0x110103cc */
L_110103C7:
    eax = MEM32(esi + 0x2C); /* 0x110103C7: mov eax, dword ptr [esi + 0x2c] */
    ecx = MEM32(eax); /* 0x110103CA: mov ecx, dword ptr [eax] */
L_110103CC:
    /* cmp ecx, 1 */ /* 0x110103CC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110103E5; /* 0x110103CF: jle 0x110103e5 */
L_110103D1:
    eax = MEM32(esi + 0x2C); /* 0x110103D1: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x110103D4: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = MEM32(esi + 0x1C); /* 0x110103D6: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x110103D9: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x110103DB: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x110103DE: mov dword ptr [eax], ecx */
    ecx = (uint32_t)MEM16(ecx); /* 0x110103E0: movzx ecx, word ptr [ecx] */
    goto L_11010400; /* 0x110103E3: jmp 0x11010400 */
L_110103E5:
    ecx = esi; /* 0x110103E5: mov ecx, esi */
    RECOMP_CALL(sub_1101093B); /* 0x110103E7: call 0x1101093b */
    RECOMP_FLAGS_IN();
    ecx = 0xFFFFu; /* 0x110103EC: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110103F1: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010400; /* 0x110103F4: je 0x11010400 */
L_110103F6:
    ecx = esi; /* 0x110103F6: mov ecx, esi */
    RECOMP_CALL(sub_11010398); /* 0x110103F8: call 0x11010398 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x110103FD: movzx ecx, ax */
L_11010400:
    SET_LO16(eax, LO16(ecx)); /* 0x11010400: mov ax, cx */
    esi = POP32_VAL(esp); /* 0x11010403: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010404: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010405(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010405u);

L_11010405:
    PUSH32(esp, ebp); /* 0x11010405: push ebp */
    ebp = esp; /* 0x11010406: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11010408: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11010409: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101040C: push edi */
    edi = ecx; /* 0x1101040D: mov edi, ecx */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x1101040F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11010429; /* 0x11010413: jae 0x11010429 */
L_11010415:
    eax = MEM32(esi + 0x10); /* 0x11010415: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11010418: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11010434; /* 0x11010419: je 0x11010434 */
L_1101041B:
    PUSH32(esp, eax); /* 0x1101041B: push eax */
    PUSH32(esp, esi); /* 0x1101041C: push esi */
    PUSH32(esp, edi); /* 0x1101041D: push edi */
    RECOMP_ICALL(MEM32(0x110692F4)); /* 0x1101041E: call dword ptr [0x110692f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010424: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11010434; /* 0x11010427: jmp 0x11010434 */
L_11010429:
    /* test edi, edi */ /* 0x11010429: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010431; /* 0x1101042B: je 0x11010431 */
L_1101042D:
    eax = MEM32(esi); /* 0x1101042D: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1101042F: mov dword ptr [edi], eax */
L_11010431:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11010431: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010434:
    eax = MEM32(esi + 0x10); /* 0x11010434: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x10) = eax; /* 0x11010437: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x14); /* 0x1101043A: mov eax, dword ptr [esi + 0x14] */
    MEM32(edi + 0x14) = eax; /* 0x1101043D: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x11010440: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 0xFu; /* 0x11010444: mov dword ptr [esi + 0x14], 0xf */
    edi = POP32_VAL(esp); /* 0x1101044B: pop edi */
    MEM8(esi) = (uint8_t)(0); /* 0x1101044C: mov byte ptr [esi], 0 */
    esi = POP32_VAL(esp); /* 0x1101044F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11010450: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010451: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010454(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010454u);

L_11010454:
    PUSH32(esp, ebp); /* 0x11010454: push ebp */
    ebp = esp; /* 0x11010455: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11010457: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11010458: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1101045B: push esi */
    esi = ecx; /* 0x1101045C: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1101045E: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11010461: push edi */
    eax = MEM32(ebx + 0x10); /* 0x11010462: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, ecx */ /* 0x11010465: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110104E4; /* 0x11010467: jb 0x110104e4 */
L_11010469:
    edi = MEM32(ebp + 0x10); /* 0x11010469: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1101046C: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1101046E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11010474; /* 0x11010470: jae 0x11010474 */
L_11010472:
    edi = eax; /* 0x11010472: mov edi, eax */
L_11010474:
    ecx = MEM32(esi + 0x10); /* 0x11010474: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11010477: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1101047A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1101047C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110104EE; /* 0x1101047E: jbe 0x110104ee */
L_11010480:
    /* test edi, edi */ /* 0x11010480: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110104DB; /* 0x11010482: je 0x110104db */
L_11010484:
    eax = ecx + edi; /* 0x11010484: lea eax, [ecx + edi] */
    ecx = esi; /* 0x11010487: mov ecx, esi */
    PUSH32(esp, 0); /* 0x11010489: push 0 */
    PUSH32(esp, eax); /* 0x1101048B: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1101048C: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_11010BDF); /* 0x1101048F: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010494: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110104DB; /* 0x11010496: je 0x110104db */
L_11010498:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x11010498: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110104A0; /* 0x1101049C: jb 0x110104a0 */
L_1101049E:
    ebx = MEM32(ebx); /* 0x1101049E: mov ebx, dword ptr [ebx] */
L_110104A0:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x110104A0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110104AA; /* 0x110104A4: jb 0x110104aa */
L_110104A6:
    ecx = MEM32(esi); /* 0x110104A6: mov ecx, dword ptr [esi] */
    goto L_110104AC; /* 0x110104A8: jmp 0x110104ac */
L_110104AA:
    ecx = esi; /* 0x110104AA: mov ecx, esi */
L_110104AC:
    /* test edi, edi */ /* 0x110104AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110104C5; /* 0x110104AE: je 0x110104c5 */
L_110104B0:
    eax = MEM32(ebp + 0xC); /* 0x110104B0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x110104B3: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x110104B5: push edi */
    PUSH32(esp, eax); /* 0x110104B6: push eax */
    eax = MEM32(esi + 0x10); /* 0x110104B7: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x110104BA: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110104BC: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x110104BD: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110104C2: add esp, 0xc */
    _flag_k = FK_ADD;
L_110104C5:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x110104C5: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x110104C9: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = ecx; /* 0x110104CC: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_110104D5; /* 0x110104CF: jb 0x110104d5 */
L_110104D1:
    eax = MEM32(esi); /* 0x110104D1: mov eax, dword ptr [esi] */
    goto L_110104D7; /* 0x110104D3: jmp 0x110104d7 */
L_110104D5:
    eax = esi; /* 0x110104D5: mov eax, esi */
L_110104D7:
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x110104D7: mov byte ptr [eax + ecx], 0 */
L_110104DB:
    edi = POP32_VAL(esp); /* 0x110104DB: pop edi */
    eax = esi; /* 0x110104DC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110104DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x110104DF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110104E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x110104E1: ret 0xc */
L_110104E4:
    PUSH32(esp, 0x11004958u); /* 0x110104E4: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x110104E9: call 0x11013a0c */
    RECOMP_FLAGS_IN();
L_110104EE:
    PUSH32(esp, 0x11004948u); /* 0x110104EE: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x110104F3: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110104F8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110104F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110104F9u);

L_110104F9:
    PUSH32(esp, ebp); /* 0x110104F9: push ebp */
    ebp = esp; /* 0x110104FA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110104FC: push esi */
    PUSH32(esp, edi); /* 0x110104FD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110104FE: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x11010501: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11010503: push edi */
    RECOMP_CALL(sub_11010C43); /* 0x11010504: call 0x11010c43 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010509: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010529; /* 0x1101050B: je 0x11010529 */
L_1101050D:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x1101050D: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010517; /* 0x11010511: jb 0x11010517 */
L_11010513:
    eax = MEM32(esi); /* 0x11010513: mov eax, dword ptr [esi] */
    goto L_11010519; /* 0x11010515: jmp 0x11010519 */
L_11010517:
    eax = esi; /* 0x11010517: mov eax, esi */
L_11010519:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11010519: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1101051C: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x1101051E: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11010520: push edi */
    PUSH32(esp, esi); /* 0x11010521: push esi */
    RECOMP_CALL(sub_11010454); /* 0x11010522: call 0x11010454 */
    RECOMP_FLAGS_IN();
    goto L_1101058A; /* 0x11010527: jmp 0x1101058a */
L_11010529:
    ecx = MEM32(esi + 0x10); /* 0x11010529: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1101052C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1101052F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x11010530: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11010533: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x11010535: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11010590; /* 0x11010537: jbe 0x11010590 */
L_11010539:
    /* test ebx, ebx */ /* 0x11010539: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010587; /* 0x1101053B: je 0x11010587 */
L_1101053D:
    eax = ecx + ebx; /* 0x1101053D: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x11010540: mov ecx, esi */
    PUSH32(esp, 0); /* 0x11010542: push 0 */
    PUSH32(esp, eax); /* 0x11010544: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x11010545: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_11010BDF); /* 0x11010548: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101054D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010587; /* 0x1101054F: je 0x11010587 */
L_11010551:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010551: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101055B; /* 0x11010555: jb 0x1101055b */
L_11010557:
    ecx = MEM32(esi); /* 0x11010557: mov ecx, dword ptr [esi] */
    goto L_1101055D; /* 0x11010559: jmp 0x1101055d */
L_1101055B:
    ecx = esi; /* 0x1101055B: mov ecx, esi */
L_1101055D:
    /* test ebx, ebx */ /* 0x1101055D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010571; /* 0x1101055F: je 0x11010571 */
L_11010561:
    eax = MEM32(esi + 0x10); /* 0x11010561: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x11010564: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x11010565: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x11010567: push edi */
    PUSH32(esp, eax); /* 0x11010568: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x11010569: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101056E: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010571:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010571: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x11010575: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x10) = ecx; /* 0x11010578: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010581; /* 0x1101057B: jb 0x11010581 */
L_1101057D:
    eax = MEM32(esi); /* 0x1101057D: mov eax, dword ptr [esi] */
    goto L_11010583; /* 0x1101057F: jmp 0x11010583 */
L_11010581:
    eax = esi; /* 0x11010581: mov eax, esi */
L_11010583:
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x11010583: mov byte ptr [eax + ecx], 0 */
L_11010587:
    eax = esi; /* 0x11010587: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x11010589: pop ebx */
L_1101058A:
    edi = POP32_VAL(esp); /* 0x1101058A: pop edi */
    esi = POP32_VAL(esp); /* 0x1101058B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101058C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101058D: ret 8 */
L_11010590:
    PUSH32(esp, 0x11004948u); /* 0x11010590: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11010595: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101059Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101059B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101059Bu);

L_1101059B:
    PUSH32(esp, ebp); /* 0x1101059B: push ebp */
    ebp = esp; /* 0x1101059C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1101059E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110105A1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110105A2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110105A5: push esi */
    PUSH32(esp, edi); /* 0x110105A6: push edi */
    esi = ecx; /* 0x110105A7: mov esi, ecx */
    edi = MEM32(ebx + 0x10); /* 0x110105A9: mov edi, dword ptr [ebx + 0x10] */
    /* cmp edi, eax */ /* 0x110105AC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010625; /* 0x110105AE: jb 0x11010625 */
L_110105B0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x110105B0: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x110105B2: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110105BA; /* 0x110105B5: jae 0x110105ba */
L_110105B7:
    edi = MEM32(ebp + 0x10); /* 0x110105B7: mov edi, dword ptr [ebp + 0x10] */
L_110105BA:
    /* cmp esi, ebx */ /* 0x110105BA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110105D5; /* 0x110105BC: jne 0x110105d5 */
L_110105BE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x110105BE: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110105C0: push eax */
    RECOMP_CALL(sub_11010B2D); /* 0x110105C1: call 0x11010b2d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110105C6: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x110105C9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110105CB: push eax */
    PUSH32(esp, 0); /* 0x110105CC: push 0 */
    RECOMP_CALL(sub_11010B5C); /* 0x110105CE: call 0x11010b5c */
    RECOMP_FLAGS_IN();
    goto L_1101061C; /* 0x110105D3: jmp 0x1101061c */
L_110105D5:
    PUSH32(esp, 0); /* 0x110105D5: push 0 */
    PUSH32(esp, edi); /* 0x110105D7: push edi */
    RECOMP_CALL(sub_11010BDF); /* 0x110105D8: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110105DD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101061C; /* 0x110105DF: je 0x1101061c */
L_110105E1:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x110105E1: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110105E9; /* 0x110105E5: jb 0x110105e9 */
L_110105E7:
    ebx = MEM32(ebx); /* 0x110105E7: mov ebx, dword ptr [ebx] */
L_110105E9:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x110105E9: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110105F3; /* 0x110105ED: jb 0x110105f3 */
L_110105EF:
    ecx = MEM32(esi); /* 0x110105EF: mov ecx, dword ptr [esi] */
    goto L_110105F5; /* 0x110105F1: jmp 0x110105f5 */
L_110105F3:
    ecx = esi; /* 0x110105F3: mov ecx, esi */
L_110105F5:
    /* test edi, edi */ /* 0x110105F5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010609; /* 0x110105F7: je 0x11010609 */
L_110105F9:
    eax = MEM32(ebp + 0xC); /* 0x110105F9: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x110105FC: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x110105FD: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110105FF: push eax */
    PUSH32(esp, ecx); /* 0x11010600: push ecx */
    RECOMP_CALL(sub_1103B300); /* 0x11010601: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010606: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010609:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010609: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x1101060D: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010616; /* 0x11010610: jb 0x11010616 */
L_11010612:
    eax = MEM32(esi); /* 0x11010612: mov eax, dword ptr [esi] */
    goto L_11010618; /* 0x11010614: jmp 0x11010618 */
L_11010616:
    eax = esi; /* 0x11010616: mov eax, esi */
L_11010618:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x11010618: mov byte ptr [eax + edi], 0 */
L_1101061C:
    edi = POP32_VAL(esp); /* 0x1101061C: pop edi */
    eax = esi; /* 0x1101061D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101061F: pop esi */
    ebx = POP32_VAL(esp); /* 0x11010620: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11010621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11010622: ret 0xc */
L_11010625:
    PUSH32(esp, 0x11004958u); /* 0x11010625: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x1101062A: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101062Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11010630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010630u);

L_11010630:
    PUSH32(esp, ebp); /* 0x11010630: push ebp */
    ebp = esp; /* 0x11010631: mov ebp, esp */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x11010633: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x11010637: push esi */
    PUSH32(esp, edi); /* 0x11010638: push edi */
    edi = MEM32(ebp + 0xC); /* 0x11010639: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1101063C: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010661; /* 0x1101063E: je 0x11010661 */
L_11010640:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010640: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010661; /* 0x11010644: jb 0x11010661 */
L_11010646:
    PUSH32(esp, ebx); /* 0x11010646: push ebx */
    ebx = MEM32(esi); /* 0x11010647: mov ebx, dword ptr [esi] */
    /* test edi, edi */ /* 0x11010649: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010658; /* 0x1101064B: je 0x11010658 */
L_1101064D:
    PUSH32(esp, edi); /* 0x1101064D: push edi */
    PUSH32(esp, ebx); /* 0x1101064E: push ebx */
    PUSH32(esp, esi); /* 0x1101064F: push esi */
    RECOMP_CALL(sub_1103B300); /* 0x11010650: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010655: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010658:
    PUSH32(esp, ebx); /* 0x11010658: push ebx */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x11010659: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101065F: pop ecx */
    ebx = POP32_VAL(esp); /* 0x11010660: pop ebx */
L_11010661:
    MEM32(esi + 0x10) = edi; /* 0x11010661: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = 0xFu; /* 0x11010664: mov dword ptr [esi + 0x14], 0xf */
    MEM8(edi + esi) = (uint8_t)(0); /* 0x1101066B: mov byte ptr [edi + esi], 0 */
    edi = POP32_VAL(esp); /* 0x1101066F: pop edi */
    esi = POP32_VAL(esp); /* 0x11010670: pop esi */
    ebp = POP32_VAL(esp); /* 0x11010671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11010672: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11010675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010675u);
    RECOMP_EH_ENTER();

L_11010675:
    PUSH32(esp, 8); /* 0x11010675: push 8 */
    eax = 0x1103CDCBu; /* 0x11010677: mov eax, 0x1103cdcb */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101067C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010681: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11010683: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x11010686: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010688: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101068B: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x1101068D: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010773; /* 0x11010691: jne 0x11010773 */
L_11010697:
    ecx = MEM32(ecx + 0x3C); /* 0x11010697: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x1101069A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110106A3; /* 0x1101069C: je 0x110106a3 */
L_1101069E:
    RECOMP_CALL(sub_11010C82); /* 0x1101069E: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_110106A3:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x110106A3: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010762; /* 0x110106A7: jne 0x11010762 */
L_110106AD:
    eax = MEM32(esi); /* 0x110106AD: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110106AF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110106B2: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x110106B4: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010762; /* 0x110106B8: je 0x11010762 */
L_110106BE:
    eax = ebp + 0x8; /* 0x110106BE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110106C1: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110106C2: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110106C7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110106CB: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x110106CC: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110106D1: pop ecx */
    ecx = ebp + 0x8; /* 0x110106D2: lea ecx, [ebp + 8] */
    edi = eax; /* 0x110106D5: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110106D7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110106DC: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x110106E3: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x110106E5: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110106E8: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x110106EC: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_110106F1:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110106F1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010716; /* 0x110106F4: jne 0x11010716 */
L_110106F6:
    eax = MEM32(esi); /* 0x110106F6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110106F8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110106FB: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x110106FD: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x11010700: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010703: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101070C; /* 0x11010707: jne 0x1101070c */
L_11010709:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010709: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101070C:
    PUSH32(esp, 0); /* 0x1101070C: push 0 */
    PUSH32(esp, eax); /* 0x1101070E: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1101070F: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_1101075E; /* 0x11010714: jmp 0x1101075e */
L_11010716:
    ecx = (uint32_t)LO8(eax); /* 0x11010716: movzx ecx, al */
    eax = MEM32(edi + 0xC); /* 0x11010719: mov eax, dword ptr [edi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x1101071C: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101075E; /* 0x11010720: je 0x1101075e */
L_11010722:
    eax = MEM32(esi); /* 0x11010722: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010724: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010727: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x1101072B: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_110106F1; /* 0x11010730: jmp 0x110106f1 */
L_1101075B:
    esi = MEM32(ebp + (-0x14)); /* 0x1101075B: mov esi, dword ptr [ebp - 0x14] */
L_1101075E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101075E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010762:
    ecx = MEM32(esi); /* 0x11010762: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010764: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010767: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010769: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010773; /* 0x1101076D: jne 0x11010773 */
L_1101076F:
    SET_LO8(eax, 1); /* 0x1101076F: mov al, 1 */
    goto L_1101078C; /* 0x11010771: jmp 0x1101078c */
L_11010773:
    eax = MEM32(ecx + 0xC); /* 0x11010773: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010776: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010779: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010782; /* 0x1101077D: jne 0x11010782 */
L_1101077F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101077F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010782:
    PUSH32(esp, 0); /* 0x11010782: push 0 */
    PUSH32(esp, eax); /* 0x11010784: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010785: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1101078A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1101078C:
    RECOMP_CALL(sub_1103B340); /* 0x1101078C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010791: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101075Bu: goto L_1101075B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11010732(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010732u);

L_11010732:
    ecx = MEM32(ebp + (-0x14)); /* 0x11010732: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11010735: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11010737: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101073A: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101073C: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101073F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11010742: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101074B; /* 0x11010746: jne 0x1101074b */
L_11010748:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010748: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101074B:
    PUSH32(esp, 1); /* 0x1101074B: push 1 */
    PUSH32(esp, eax); /* 0x1101074D: push eax */
    ecx = edx; /* 0x1101074E: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x11010750: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x1101075Bu; /* 0x11010755: mov eax, 0x1101075b */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101075A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101075B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101075Bu);

L_1101075B:
    esi = MEM32(ebp + (-0x14)); /* 0x1101075B: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101075E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x11010762: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010764: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010767: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010769: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010773; /* 0x1101076D: jne 0x11010773 */
L_1101076F:
    SET_LO8(eax, 1); /* 0x1101076F: mov al, 1 */
    goto L_1101078C; /* 0x11010771: jmp 0x1101078c */
L_11010773:
    eax = MEM32(ecx + 0xC); /* 0x11010773: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010776: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010779: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010782; /* 0x1101077D: jne 0x11010782 */
L_1101077F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101077F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010782:
    PUSH32(esp, 0); /* 0x11010782: push 0 */
    PUSH32(esp, eax); /* 0x11010784: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010785: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1101078A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1101078C:
    RECOMP_CALL(sub_1103B340); /* 0x1101078C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010791: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010794(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010794u);

L_11010794:
    PUSH32(esp, ebp); /* 0x11010794: push ebp */
    ebp = esp; /* 0x11010795: mov ebp, esp */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010797: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1101079B: mov eax, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110107A3; /* 0x1101079E: jne 0x110107a3 */
L_110107A0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110107A0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110107A3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110107A3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110107A6: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x110107A7: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x110107AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110107AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110107B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110107B0u);

L_110107B0:
    eax = MEM32(ecx + 0x1C); /* 0x110107B0: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110107B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x110107B5: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110107BE; /* 0x110107B7: je 0x110107be */
L_110107B9:
    eax = MEM32(ecx + 0x2C); /* 0x110107B9: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x110107BC: mov edx, dword ptr [eax] */
L_110107BE:
    /* test edx, edx */ /* 0x110107BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110107D5; /* 0x110107C0: jle 0x110107d5 */
L_110107C2:
    eax = MEM32(ecx + 0x2C); /* 0x110107C2: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x110107C5: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x1C); /* 0x110107C7: mov ecx, dword ptr [ecx + 0x1c] */
    edx = MEM32(ecx); /* 0x110107CA: mov edx, dword ptr [ecx] */
    eax = edx + 0x1; /* 0x110107CC: lea eax, [edx + 1] */
    MEM32(ecx) = eax; /* 0x110107CF: mov dword ptr [ecx], eax */
    eax = (uint32_t)MEM8(edx); /* 0x110107D1: movzx eax, byte ptr [edx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110107D4: ret  */
L_110107D5:
    eax = MEM32(ecx); /* 0x110107D5: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_110107DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110107DAu);

L_110107DA:
    eax = MEM32(ecx + 0x1C); /* 0x110107DA: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax); /* 0x110107DD: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110107DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_110107E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110107E0u);

L_110107E0:
    eax = MEM32(ecx + 0x2C); /* 0x110107E0: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x110107E3: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x1C); /* 0x110107E5: mov edx, dword ptr [ecx + 0x1c] */
    eax = MEM32(edx); /* 0x110107E8: mov eax, dword ptr [edx] */
    ecx = eax + 0x1; /* 0x110107EA: lea ecx, [eax + 1] */
    MEM32(edx) = ecx; /* 0x110107ED: mov dword ptr [edx], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110107EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_110107F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110107F0u);

L_110107F0:
    eax = MEM32(ecx + 0x2C); /* 0x110107F0: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x110107F3: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x1C); /* 0x110107F5: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x110107F8: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110107FA: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x110107FB: mov dword ptr [ecx], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110107FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110107FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110107FEu);

L_110107FE:
    eax = MEM32(ecx + 0x1C); /* 0x110107FE: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11010801: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x11010803: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101080C; /* 0x11010805: je 0x1101080c */
L_11010807:
    eax = MEM32(ecx + 0x2C); /* 0x11010807: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x1101080A: mov edx, dword ptr [eax] */
L_1101080C:
    eax = edx; /* 0x1101080C: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1101080E: cdq  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101080F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010810u);
    RECOMP_EH_ENTER();

L_11010810:
    PUSH32(esp, 8); /* 0x11010810: push 8 */
    eax = 0x1103CDEEu; /* 0x11010812: mov eax, 0x1103cdee */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010817: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101081C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101081E: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x11010821: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010823: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010826: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010828: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101091A; /* 0x1101082C: jne 0x1101091a */
L_11010832:
    ecx = MEM32(ecx + 0x3C); /* 0x11010832: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x11010835: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101083E; /* 0x11010837: je 0x1101083e */
L_11010839:
    RECOMP_CALL(sub_11010C82); /* 0x11010839: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1101083E:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1101083E: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010909; /* 0x11010842: jne 0x11010909 */
L_11010848:
    eax = MEM32(esi); /* 0x11010848: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101084A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101084D: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x1101084F: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010909; /* 0x11010853: je 0x11010909 */
L_11010859:
    eax = ebp + 0x8; /* 0x11010859: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101085C: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1101085D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010862: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11010866: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11010867: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101086C: pop ecx */
    ecx = ebp + 0x8; /* 0x1101086D: lea ecx, [ebp + 8] */
    edi = eax; /* 0x11010870: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11010872: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11010877: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x1101087E: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010880: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11010883: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11010887: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1101088C:
    eax = (uint32_t)LO16(eax); /* 0x1101088C: movzx eax, ax */
    ecx = eax; /* 0x1101088F: mov ecx, eax */
    eax = 0xFFFFu; /* 0x11010891: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11010896: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110108BB; /* 0x11010899: jne 0x110108bb */
L_1101089B:
    eax = MEM32(esi); /* 0x1101089B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101089D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110108A0: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x110108A2: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x110108A5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110108A8: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110108B1; /* 0x110108AC: jne 0x110108b1 */
L_110108AE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110108AE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110108B1:
    PUSH32(esp, 0); /* 0x110108B1: push 0 */
    PUSH32(esp, eax); /* 0x110108B3: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x110108B4: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_11010905; /* 0x110108B9: jmp 0x11010905 */
L_110108BB:
    eax = MEM32(edi); /* 0x110108BB: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x110108BD: push ecx */
    PUSH32(esp, 0x48u); /* 0x110108BE: push 0x48 */
    ecx = edi; /* 0x110108C0: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110108C2: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110108C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010905; /* 0x110108C7: je 0x11010905 */
L_110108C9:
    eax = MEM32(esi); /* 0x110108C9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110108CB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110108CE: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x110108D2: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101088C; /* 0x110108D7: jmp 0x1101088c */
L_11010902:
    esi = MEM32(ebp + (-0x14)); /* 0x11010902: mov esi, dword ptr [ebp - 0x14] */
L_11010905:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010905: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010909:
    ecx = MEM32(esi); /* 0x11010909: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x1101090B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101090E: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010910: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101091A; /* 0x11010914: jne 0x1101091a */
L_11010916:
    SET_LO8(eax, 1); /* 0x11010916: mov al, 1 */
    goto L_11010933; /* 0x11010918: jmp 0x11010933 */
L_1101091A:
    eax = MEM32(ecx + 0xC); /* 0x1101091A: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101091D: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010920: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010929; /* 0x11010924: jne 0x11010929 */
L_11010926:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010926: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010929:
    PUSH32(esp, 0); /* 0x11010929: push 0 */
    PUSH32(esp, eax); /* 0x1101092B: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1101092C: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010931: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010933:
    RECOMP_CALL(sub_1103B340); /* 0x11010933: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010938: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010902u: goto L_11010902;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110108D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110108D9u);

L_110108D9:
    ecx = MEM32(ebp + (-0x14)); /* 0x110108D9: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x110108DC: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110108DE: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110108E1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110108E3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110108E6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x110108E9: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110108F2; /* 0x110108ED: jne 0x110108f2 */
L_110108EF:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110108EF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110108F2:
    PUSH32(esp, 1); /* 0x110108F2: push 1 */
    PUSH32(esp, eax); /* 0x110108F4: push eax */
    ecx = edx; /* 0x110108F5: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x110108F7: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x11010902u; /* 0x110108FC: mov eax, 0x11010902 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010901: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010902(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010902u);

L_11010902:
    esi = MEM32(ebp + (-0x14)); /* 0x11010902: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010905: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x11010909: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x1101090B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101090E: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010910: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101091A; /* 0x11010914: jne 0x1101091a */
L_11010916:
    SET_LO8(eax, 1); /* 0x11010916: mov al, 1 */
    goto L_11010933; /* 0x11010918: jmp 0x11010933 */
L_1101091A:
    eax = MEM32(ecx + 0xC); /* 0x1101091A: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101091D: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010920: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010929; /* 0x11010924: jne 0x11010929 */
L_11010926:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010926: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010929:
    PUSH32(esp, 0); /* 0x11010929: push 0 */
    PUSH32(esp, eax); /* 0x1101092B: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1101092C: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010931: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010933:
    RECOMP_CALL(sub_1103B340); /* 0x11010933: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010938: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101093B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101093Bu);

L_1101093B:
    eax = MEM32(ecx + 0x1C); /* 0x1101093B: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101093E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x11010940: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010949; /* 0x11010942: je 0x11010949 */
L_11010944:
    eax = MEM32(ecx + 0x2C); /* 0x11010944: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x11010947: mov edx, dword ptr [eax] */
L_11010949:
    /* test edx, edx */ /* 0x11010949: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11010960; /* 0x1101094B: jle 0x11010960 */
L_1101094D:
    eax = MEM32(ecx + 0x2C); /* 0x1101094D: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x11010950: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x1C); /* 0x11010952: mov ecx, dword ptr [ecx + 0x1c] */
    edx = MEM32(ecx); /* 0x11010955: mov edx, dword ptr [ecx] */
    eax = edx + 0x2; /* 0x11010957: lea eax, [edx + 2] */
    MEM32(ecx) = eax; /* 0x1101095A: mov dword ptr [ecx], eax */
    eax = (uint32_t)MEM16(edx); /* 0x1101095C: movzx eax, word ptr [edx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101095F: ret  */
L_11010960:
    eax = MEM32(ecx); /* 0x11010960: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11010962: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11010965: movzx eax, ax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010968: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010969(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010969u);

L_11010969:
    eax = MEM32(ecx + 0x2C); /* 0x11010969: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1101096C: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x1C); /* 0x1101096E: mov edx, dword ptr [ecx + 0x1c] */
    eax = MEM32(edx); /* 0x11010971: mov eax, dword ptr [edx] */
    ecx = eax + 0x2; /* 0x11010973: lea ecx, [eax + 2] */
    MEM32(edx) = ecx; /* 0x11010976: mov dword ptr [edx], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010978: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010979(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010979u);

L_11010979:
    eax = MEM32(ecx + 0x2C); /* 0x11010979: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1101097C: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x1C); /* 0x1101097E: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x11010981: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x11010983: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x11010986: mov dword ptr [ecx], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010988: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010989(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010989u);
    RECOMP_EH_ENTER();

L_11010989:
    PUSH32(esp, 8); /* 0x11010989: push 8 */
    eax = 0x1103CE11u; /* 0x1101098B: mov eax, 0x1103ce11 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010990: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010995: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11010997: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1101099A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101099C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101099F: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x110109A1: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A93; /* 0x110109A5: jne 0x11010a93 */
L_110109AB:
    ecx = MEM32(ecx + 0x3C); /* 0x110109AB: mov ecx, dword ptr [ecx + 0x3c] */
    /* test ecx, ecx */ /* 0x110109AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110109B7; /* 0x110109B0: je 0x110109b7 */
L_110109B2:
    RECOMP_CALL(sub_11010C82); /* 0x110109B2: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_110109B7:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x110109B7: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A82; /* 0x110109BB: jne 0x11010a82 */
L_110109C1:
    eax = MEM32(esi); /* 0x110109C1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110109C3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110109C6: add ecx, esi */
    _flag_k = FK_ADD;
    /* test MEM8(ecx + 0x14), 1 */ /* 0x110109C8: test byte ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010A82; /* 0x110109CC: je 0x11010a82 */
L_110109D2:
    eax = ebp + 0x8; /* 0x110109D2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110109D5: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110109D6: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110109DB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110109DF: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110109E0: call 0x1101103e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110109E5: pop ecx */
    ecx = ebp + 0x8; /* 0x110109E6: lea ecx, [ebp + 8] */
    edi = eax; /* 0x110109E9: mov edi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110109EB: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110109F0: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi); /* 0x110109F7: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x110109F9: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x110109FC: mov ecx, dword ptr [ecx + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11010A00: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_11010A05:
    eax = (uint32_t)LO16(eax); /* 0x11010A05: movzx eax, ax */
    ecx = eax; /* 0x11010A08: mov ecx, eax */
    eax = 0xFFFFu; /* 0x11010A0A: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x11010A0F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A34; /* 0x11010A12: jne 0x11010a34 */
L_11010A14:
    eax = MEM32(esi); /* 0x11010A14: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010A16: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010A19: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x11010A1B: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x11010A1E: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010A21: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A2A; /* 0x11010A25: jne 0x11010a2a */
L_11010A27:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A27: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010A2A:
    PUSH32(esp, 0); /* 0x11010A2A: push 0 */
    PUSH32(esp, eax); /* 0x11010A2C: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010A2D: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    goto L_11010A7E; /* 0x11010A32: jmp 0x11010a7e */
L_11010A34:
    eax = MEM32(edi); /* 0x11010A34: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x11010A36: push ecx */
    PUSH32(esp, 0x48u); /* 0x11010A37: push 0x48 */
    ecx = edi; /* 0x11010A39: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11010A3B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010A3E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010A7E; /* 0x11010A40: je 0x11010a7e */
L_11010A42:
    eax = MEM32(esi); /* 0x11010A42: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010A44: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010A47: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x11010A4B: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11010A05; /* 0x11010A50: jmp 0x11010a05 */
L_11010A7B:
    esi = MEM32(ebp + (-0x14)); /* 0x11010A7B: mov esi, dword ptr [ebp - 0x14] */
L_11010A7E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010A7E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010A82:
    ecx = MEM32(esi); /* 0x11010A82: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010A84: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010A87: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010A89: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A93; /* 0x11010A8D: jne 0x11010a93 */
L_11010A8F:
    SET_LO8(eax, 1); /* 0x11010A8F: mov al, 1 */
    goto L_11010AAC; /* 0x11010A91: jmp 0x11010aac */
L_11010A93:
    eax = MEM32(ecx + 0xC); /* 0x11010A93: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010A96: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010A99: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010AA2; /* 0x11010A9D: jne 0x11010aa2 */
L_11010A9F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A9F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010AA2:
    PUSH32(esp, 0); /* 0x11010AA2: push 0 */
    PUSH32(esp, eax); /* 0x11010AA4: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010AA5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010AAA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010AAC:
    RECOMP_CALL(sub_1103B340); /* 0x11010AAC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010AB1: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010A7Bu: goto L_11010A7B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11010A52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010A52u);

L_11010A52:
    ecx = MEM32(ebp + (-0x14)); /* 0x11010A52: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11010A55: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11010A57: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11010A5A: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11010A5C: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A5F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11010A62: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A6B; /* 0x11010A66: jne 0x11010a6b */
L_11010A68:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A68: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010A6B:
    PUSH32(esp, 1); /* 0x11010A6B: push 1 */
    PUSH32(esp, eax); /* 0x11010A6D: push eax */
    ecx = edx; /* 0x11010A6E: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x11010A70: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = 0x11010A7Bu; /* 0x11010A75: mov eax, 0x11010a7b */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010A7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010A7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010A7Bu);

L_11010A7B:
    esi = MEM32(ebp + (-0x14)); /* 0x11010A7B: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11010A7E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x11010A82: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx + 0x4); /* 0x11010A84: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010A87: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x11010A89: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010A93; /* 0x11010A8D: jne 0x11010a93 */
L_11010A8F:
    SET_LO8(eax, 1); /* 0x11010A8F: mov al, 1 */
    goto L_11010AAC; /* 0x11010A91: jmp 0x11010aac */
L_11010A93:
    eax = MEM32(ecx + 0xC); /* 0x11010A93: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11010A96: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010A99: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010AA2; /* 0x11010A9D: jne 0x11010aa2 */
L_11010A9F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010A9F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010AA2:
    PUSH32(esp, 0); /* 0x11010AA2: push 0 */
    PUSH32(esp, eax); /* 0x11010AA4: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010AA5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010AAA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010AAC:
    RECOMP_CALL(sub_1103B340); /* 0x11010AAC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010AB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010AB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010AB4u);

L_11010AB4:
    PUSH32(esp, ebp); /* 0x11010AB4: push ebp */
    ebp = esp; /* 0x11010AB5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11010AB7: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11010AB8: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11010ABB: push esi */
    PUSH32(esp, ebx); /* 0x11010ABC: push ebx */
    esi = ecx; /* 0x11010ABD: mov esi, ecx */
    RECOMP_CALL(sub_11010C43); /* 0x11010ABF: call 0x11010c43 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010AC4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010AE4; /* 0x11010AC6: je 0x11010ae4 */
L_11010AC8:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010AC8: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010AD2; /* 0x11010ACC: jb 0x11010ad2 */
L_11010ACE:
    eax = MEM32(esi); /* 0x11010ACE: mov eax, dword ptr [esi] */
    goto L_11010AD4; /* 0x11010AD0: jmp 0x11010ad4 */
L_11010AD2:
    eax = esi; /* 0x11010AD2: mov eax, esi */
L_11010AD4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11010AD4: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x11010AD7: sub ebx, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x11010AD9: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11010ADB: push ebx */
    PUSH32(esp, esi); /* 0x11010ADC: push esi */
    RECOMP_CALL(sub_1101059B); /* 0x11010ADD: call 0x1101059b */
    RECOMP_FLAGS_IN();
    goto L_11010B27; /* 0x11010AE2: jmp 0x11010b27 */
L_11010AE4:
    PUSH32(esp, edi); /* 0x11010AE4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x11010AE5: mov edi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x11010AE8: mov ecx, esi */
    PUSH32(esp, 0); /* 0x11010AEA: push 0 */
    PUSH32(esp, edi); /* 0x11010AEC: push edi */
    RECOMP_CALL(sub_11010BDF); /* 0x11010AED: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010AF2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010B24; /* 0x11010AF4: je 0x11010b24 */
L_11010AF6:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010AF6: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B00; /* 0x11010AFA: jb 0x11010b00 */
L_11010AFC:
    eax = MEM32(esi); /* 0x11010AFC: mov eax, dword ptr [esi] */
    goto L_11010B02; /* 0x11010AFE: jmp 0x11010b02 */
L_11010B00:
    eax = esi; /* 0x11010B00: mov eax, esi */
L_11010B02:
    /* test edi, edi */ /* 0x11010B02: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010B11; /* 0x11010B04: je 0x11010b11 */
L_11010B06:
    PUSH32(esp, edi); /* 0x11010B06: push edi */
    PUSH32(esp, ebx); /* 0x11010B07: push ebx */
    PUSH32(esp, eax); /* 0x11010B08: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x11010B09: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010B0E: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010B11:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010B11: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x11010B15: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B1E; /* 0x11010B18: jb 0x11010b1e */
L_11010B1A:
    eax = MEM32(esi); /* 0x11010B1A: mov eax, dword ptr [esi] */
    goto L_11010B20; /* 0x11010B1C: jmp 0x11010b20 */
L_11010B1E:
    eax = esi; /* 0x11010B1E: mov eax, esi */
L_11010B20:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x11010B20: mov byte ptr [eax + edi], 0 */
L_11010B24:
    eax = esi; /* 0x11010B24: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x11010B26: pop edi */
L_11010B27:
    esi = POP32_VAL(esp); /* 0x11010B27: pop esi */
    ebx = POP32_VAL(esp); /* 0x11010B28: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11010B29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11010B2A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11010B2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010B2Du);

L_11010B2D:
    PUSH32(esp, ebp); /* 0x11010B2D: push ebp */
    ebp = esp; /* 0x11010B2E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11010B30: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x11010B33: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B51; /* 0x11010B36: jb 0x11010b51 */
L_11010B38:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x11010B38: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = eax; /* 0x11010B3C: mov dword ptr [ecx + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B45; /* 0x11010B3F: jb 0x11010b45 */
L_11010B41:
    edx = MEM32(ecx); /* 0x11010B41: mov edx, dword ptr [ecx] */
    goto L_11010B47; /* 0x11010B43: jmp 0x11010b47 */
L_11010B45:
    edx = ecx; /* 0x11010B45: mov edx, ecx */
L_11010B47:
    MEM8(edx + eax) = (uint8_t)(0); /* 0x11010B47: mov byte ptr [edx + eax], 0 */
    eax = ecx; /* 0x11010B4B: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11010B4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010B4E: ret 4 */
L_11010B51:
    PUSH32(esp, 0x11004958u); /* 0x11010B51: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x11010B56: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11010B5Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11010B5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010B5Cu);

L_11010B5C:
    PUSH32(esp, ebp); /* 0x11010B5C: push ebp */
    ebp = esp; /* 0x11010B5D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11010B5F: push esi */
    esi = ecx; /* 0x11010B60: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x11010B62: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11010B65: push edi */
    edi = MEM32(esi + 0x10); /* 0x11010B66: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, ecx */ /* 0x11010B69: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010BD4; /* 0x11010B6B: jb 0x11010bd4 */
L_11010B6D:
    edx = MEM32(ebp + 0xC); /* 0x11010B6D: mov edx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11010B70: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11010B72: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x11010B74: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11010B8D; /* 0x11010B76: ja 0x11010b8d */
L_11010B78:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010B78: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x11010B7C: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B85; /* 0x11010B7F: jb 0x11010b85 */
L_11010B81:
    eax = MEM32(esi); /* 0x11010B81: mov eax, dword ptr [esi] */
    goto L_11010B87; /* 0x11010B83: jmp 0x11010b87 */
L_11010B85:
    eax = esi; /* 0x11010B85: mov eax, esi */
L_11010B87:
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x11010B87: mov byte ptr [eax + ecx], 0 */
    goto L_11010BCC; /* 0x11010B8B: jmp 0x11010bcc */
L_11010B8D:
    /* test edx, edx */ /* 0x11010B8D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010BCC; /* 0x11010B8F: je 0x11010bcc */
L_11010B91:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010B91: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010B9B; /* 0x11010B95: jb 0x11010b9b */
L_11010B97:
    eax = MEM32(esi); /* 0x11010B97: mov eax, dword ptr [esi] */
    goto L_11010B9D; /* 0x11010B99: jmp 0x11010b9d */
L_11010B9B:
    eax = esi; /* 0x11010B9B: mov eax, esi */
L_11010B9D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x11010B9D: sub edi, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11010B9F: push ebx */
    ebx = eax + ecx; /* 0x11010BA0: lea ebx, [eax + ecx] */
    eax = edi; /* 0x11010BA3: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11010BA5: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11010BB8; /* 0x11010BA7: je 0x11010bb8 */
L_11010BA9:
    PUSH32(esp, eax); /* 0x11010BA9: push eax */
    eax = ebx + edx; /* 0x11010BAA: lea eax, [ebx + edx] */
    PUSH32(esp, eax); /* 0x11010BAD: push eax */
    PUSH32(esp, ebx); /* 0x11010BAE: push ebx */
    RECOMP_ICALL(MEM32(0x110692F4)); /* 0x11010BAF: call dword ptr [0x110692f4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010BB5: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010BB8:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010BB8: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x11010BBC: mov dword ptr [esi + 0x10], edi */
    ebx = POP32_VAL(esp); /* 0x11010BBF: pop ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010BC6; /* 0x11010BC0: jb 0x11010bc6 */
L_11010BC2:
    eax = MEM32(esi); /* 0x11010BC2: mov eax, dword ptr [esi] */
    goto L_11010BC8; /* 0x11010BC4: jmp 0x11010bc8 */
L_11010BC6:
    eax = esi; /* 0x11010BC6: mov eax, esi */
L_11010BC8:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x11010BC8: mov byte ptr [eax + edi], 0 */
L_11010BCC:
    edi = POP32_VAL(esp); /* 0x11010BCC: pop edi */
    eax = esi; /* 0x11010BCD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11010BCF: pop esi */
    ebp = POP32_VAL(esp); /* 0x11010BD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11010BD1: ret 8 */
L_11010BD4:
    PUSH32(esp, 0x11004958u); /* 0x11010BD4: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x11010BD9: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11010BDEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11010BDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010BDFu);

L_11010BDF:
    PUSH32(esp, ebp); /* 0x11010BDF: push ebp */
    ebp = esp; /* 0x11010BE0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11010BE2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11010BE3: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x11010BE6: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11010C38; /* 0x11010BE9: ja 0x11010c38 */
L_11010BEB:
    /* cmp MEM32(ecx + 0x14), esi */ /* 0x11010BEB: cmp dword ptr [ecx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11010BFB; /* 0x11010BEE: jae 0x11010bfb */
L_11010BF0:
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x11010BF0: push dword ptr [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x11010BF3: push esi */
    RECOMP_CALL(sub_11010D1D); /* 0x11010BF4: call 0x11010d1d */
    RECOMP_FLAGS_IN();
    goto L_11010C2B; /* 0x11010BF9: jmp 0x11010c2b */
L_11010BFB:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11010BFB: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010C19; /* 0x11010BFF: je 0x11010c19 */
L_11010C01:
    /* cmp esi, 0x10u */ /* 0x11010C01: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11010C19; /* 0x11010C04: jae 0x11010c19 */
L_11010C06:
    eax = MEM32(ecx + 0x10); /* 0x11010C06: mov eax, dword ptr [ecx + 0x10] */
    /* cmp esi, eax */ /* 0x11010C09: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11010C0F; /* 0x11010C0B: jae 0x11010c0f */
L_11010C0D:
    eax = esi; /* 0x11010C0D: mov eax, esi */
L_11010C0F:
    PUSH32(esp, eax); /* 0x11010C0F: push eax */
    PUSH32(esp, 1); /* 0x11010C10: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11010C12: call 0x11010630 */
    RECOMP_FLAGS_IN();
    goto L_11010C2B; /* 0x11010C17: jmp 0x11010c2b */
L_11010C19:
    /* test esi, esi */ /* 0x11010C19: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010C2B; /* 0x11010C1B: jne 0x11010c2b */
L_11010C1D:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(esi);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & esi; /* 0x11010C1D: and dword ptr [ecx + 0x10], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x11010C20: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010C28; /* 0x11010C24: jb 0x11010c28 */
L_11010C26:
    ecx = MEM32(ecx); /* 0x11010C26: mov ecx, dword ptr [ecx] */
L_11010C28:
    MEM8(ecx) = (uint8_t)(0); /* 0x11010C28: mov byte ptr [ecx], 0 */
L_11010C2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11010C2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x11010C2D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x11010C2F: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11010C30: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11010C32: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x11010C34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11010C35: ret 8 */
L_11010C38:
    PUSH32(esp, 0x11004948u); /* 0x11010C38: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11010C3D: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11010C42u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11010C43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010C43u);

L_11010C43:
    PUSH32(esp, ebp); /* 0x11010C43: push ebp */
    ebp = esp; /* 0x11010C44: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11010C46: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x11010C49: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010C78; /* 0x11010C4B: je 0x11010c78 */
L_11010C4D:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x11010C4D: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010C57; /* 0x11010C51: jb 0x11010c57 */
L_11010C53:
    eax = MEM32(ecx); /* 0x11010C53: mov eax, dword ptr [ecx] */
    goto L_11010C59; /* 0x11010C55: jmp 0x11010c59 */
L_11010C57:
    eax = ecx; /* 0x11010C57: mov eax, ecx */
L_11010C59:
    /* cmp edx, eax */ /* 0x11010C59: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010C78; /* 0x11010C5B: jb 0x11010c78 */
L_11010C5D:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x11010C5D: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11010C61: push esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_11010C68; /* 0x11010C62: jb 0x11010c68 */
L_11010C64:
    esi = MEM32(ecx); /* 0x11010C64: mov esi, dword ptr [ecx] */
    goto L_11010C6A; /* 0x11010C66: jmp 0x11010c6a */
L_11010C68:
    esi = ecx; /* 0x11010C68: mov esi, ecx */
L_11010C6A:
    eax = MEM32(ecx + 0x10); /* 0x11010C6A: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11010C6D: add eax, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x11010C6F: pop esi */
    /* cmp eax, edx */ /* 0x11010C70: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11010C78; /* 0x11010C72: jbe 0x11010c78 */
L_11010C74:
    SET_LO8(eax, 1); /* 0x11010C74: mov al, 1 */
    goto L_11010C7A; /* 0x11010C76: jmp 0x11010c7a */
L_11010C78:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11010C78: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11010C7A:
    ebp = POP32_VAL(esp); /* 0x11010C7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010C7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010C7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010C7Eu);

L_11010C7E:
    eax = MEM32(ecx + 0x3C); /* 0x11010C7E: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010C81: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010C82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010C82u);

L_11010C82:
    PUSH32(esp, ebp); /* 0x11010C82: push ebp */
    ebp = esp; /* 0x11010C83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11010C85: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11010C88: push -1 */
    PUSH32(esp, 0x1103CE34u); /* 0x11010C8A: push 0x1103ce34 */
    eax = MEM32(FS_BASE + (0)); /* 0x11010C8F: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11010C95: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11010C96: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11010C99: push esi */
    eax = MEM32(0x110631D0); /* 0x11010C9A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11010C9F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11010CA1: push eax */
    eax = esp + 0x18; /* 0x11010CA2: lea eax, [esp + 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x11010CA6: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x11010CAC: mov esi, ecx */
    eax = MEM32(esi); /* 0x11010CAE: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010CB0: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + esi + 0x38), 0 */ /* 0x11010CB3: cmp dword ptr [eax + esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010D0A; /* 0x11010CB8: je 0x11010d0a */
L_11010CBA:
    PUSH32(esp, esi); /* 0x11010CBA: push esi */
    ecx = esp + 0x10; /* 0x11010CBB: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_11010E19); /* 0x11010CBF: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0; /* 0x11010CC4: and dword ptr [esp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esp + 0x10), 0 */ /* 0x11010CC9: cmp byte ptr [esp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010D01; /* 0x11010CCE: je 0x11010d01 */
L_11010CD0:
    eax = MEM32(esi); /* 0x11010CD0: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010CD2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11010CD5: mov ecx, dword ptr [eax + esi + 0x38] */
    eax = MEM32(ecx); /* 0x11010CD9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11010CDB: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010CDE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010D01; /* 0x11010CE1: jne 0x11010d01 */
L_11010CE3:
    eax = MEM32(esi); /* 0x11010CE3: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010CE5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010CE8: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x11010CEA: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010CED: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010CF0: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010CF9; /* 0x11010CF4: jne 0x11010cf9 */
L_11010CF6:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010CF6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010CF9:
    PUSH32(esp, 0); /* 0x11010CF9: push 0 */
    PUSH32(esp, eax); /* 0x11010CFB: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010CFC: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_11010D01:
    ecx = esp + 0xC; /* 0x11010D01: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_11010E6E); /* 0x11010D05: call 0x11010e6e */
    RECOMP_FLAGS_IN();
L_11010D0A:
    eax = esi; /* 0x11010D0A: mov eax, esi */
    ecx = MEM32(esp + 0x18); /* 0x11010D0C: mov ecx, dword ptr [esp + 0x18] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x11010D10: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x11010D17: pop ecx */
    esi = POP32_VAL(esp); /* 0x11010D18: pop esi */
    esp = ebp; /* 0x11010D19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11010D1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010D1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010D1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010D1Du);

L_11010D1D:
    PUSH32(esp, 0xCu); /* 0x11010D1D: push 0xc */
    eax = 0x1103CE4Fu; /* 0x11010D1F: mov eax, 0x1103ce4f */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010D24: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010D29: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11010D2B: mov dword ptr [ebp - 0x18], esi */
    edi = MEM32(ebp + 0x8); /* 0x11010D2E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi | 0xFu)); _flag_b = (uint32_t)((edi | 0xFu));
    edi = edi | 0xFu; /* 0x11010D31: or edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFFFFEu */ /* 0x11010D34: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11010D3E; /* 0x11010D37: jbe 0x11010d3e */
L_11010D39:
    edi = MEM32(ebp + 0x8); /* 0x11010D39: mov edi, dword ptr [ebp + 8] */
    goto L_11010D68; /* 0x11010D3C: jmp 0x11010d68 */
L_11010D3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11010D3E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 3; /* 0x11010D40: mov dword ptr [ebp - 0x14], 3 */
    eax = edi; /* 0x11010D47: mov eax, edi */
    ebx = MEM32(esi + 0x14); /* 0x11010D49: mov ebx, dword ptr [esi + 0x14] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x14)); /* 0x11010D4C: div dword ptr [ebp - 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = ebx; /* 0x11010D4F: mov ecx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x11010D51: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x11010D51: shr ecx, 1 */
    /* cmp ecx, eax */ /* 0x11010D53: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11010D68; /* 0x11010D55: jbe 0x11010d68 */
L_11010D57:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x11010D57: push -2 */
    eax = POP32_VAL(esp); /* 0x11010D59: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11010D5A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x11010D5C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11010D65; /* 0x11010D5E: ja 0x11010d65 */
L_11010D60:
    edi = ecx + ebx; /* 0x11010D60: lea edi, [ecx + ebx] */
    goto L_11010D68; /* 0x11010D63: jmp 0x11010d68 */
L_11010D65:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x11010D65: push -2 */
    edi = POP32_VAL(esp); /* 0x11010D67: pop edi */
L_11010D68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11010D68: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x1; /* 0x11010D6A: lea eax, [edi + 1] */
    PUSH32(esp, ebx); /* 0x11010D6D: push ebx */
    PUSH32(esp, eax); /* 0x11010D6E: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11010D6F: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1100CB62); /* 0x11010D72: call 0x1100cb62 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11010D77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11010D78: pop ecx */
    ecx = eax; /* 0x11010D79: mov ecx, eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x11010D7B: mov dword ptr [ebp - 0x14], eax */
    goto L_11010DAF; /* 0x11010D7E: jmp 0x11010daf */
L_11010DAF:
    eax = MEM32(ebp + 0xC); /* 0x11010DAF: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x11010DB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010DD1; /* 0x11010DB4: je 0x11010dd1 */
L_11010DB6:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11010DB6: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010DC0; /* 0x11010DBA: jb 0x11010dc0 */
L_11010DBC:
    edx = MEM32(esi); /* 0x11010DBC: mov edx, dword ptr [esi] */
    goto L_11010DC2; /* 0x11010DBE: jmp 0x11010dc2 */
L_11010DC0:
    edx = esi; /* 0x11010DC0: mov edx, esi */
L_11010DC2:
    /* test eax, eax */ /* 0x11010DC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010DD1; /* 0x11010DC4: je 0x11010dd1 */
L_11010DC6:
    PUSH32(esp, eax); /* 0x11010DC6: push eax */
    PUSH32(esp, edx); /* 0x11010DC7: push edx */
    PUSH32(esp, ecx); /* 0x11010DC8: push ecx */
    RECOMP_CALL(sub_1103B300); /* 0x11010DC9: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11010DCE: add esp, 0xc */
    _flag_k = FK_ADD;
L_11010DD1:
    PUSH32(esp, ebx); /* 0x11010DD1: push ebx */
    PUSH32(esp, 1); /* 0x11010DD2: push 1 */
    ecx = esi; /* 0x11010DD4: mov ecx, esi */
    RECOMP_CALL(sub_11010630); /* 0x11010DD6: call 0x11010630 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x11010DDB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010DE4; /* 0x11010DDD: je 0x11010de4 */
L_11010DDF:
    eax = MEM32(ebp + (-0x14)); /* 0x11010DDF: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x11010DE2: mov dword ptr [esi], eax */
L_11010DE4:
    eax = MEM32(ebp + 0xC); /* 0x11010DE4: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x14) = edi; /* 0x11010DE7: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = eax; /* 0x11010DEA: mov dword ptr [esi + 0x10], eax */
    /* cmp edi, 0x10u */ /* 0x11010DED: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11010DF4; /* 0x11010DF0: jb 0x11010df4 */
L_11010DF2:
    esi = MEM32(esi); /* 0x11010DF2: mov esi, dword ptr [esi] */
L_11010DF4:
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x11010DF4: mov byte ptr [esi + eax], bl */
    RECOMP_CALL(sub_1103B340); /* 0x11010DF7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11010DFC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11010E14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010E14u);

L_11010E14:
    eax = MEM32(ecx); /* 0x11010E14: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x34)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11010E19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010E19u);

L_11010E19:
    PUSH32(esp, 4); /* 0x11010E19: push 4 */
    eax = 0x1103CE72u; /* 0x11010E1B: mov eax, 0x1103ce72 */
    RECOMP_CALL(sub_1103B372); /* 0x11010E20: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11010E25: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x11010E27: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x11010E2A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11010E2D: push esi */
    RECOMP_CALL(sub_11010EE6); /* 0x11010E2E: call 0x11010ee6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010E33: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11010E37: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010E39: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + esi + 0xC), 0 */ /* 0x11010E3C: cmp dword ptr [ecx + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010E54; /* 0x11010E41: jne 0x11010e54 */
L_11010E43:
    ecx = MEM32(ecx + esi + 0x3C); /* 0x11010E43: mov ecx, dword ptr [ecx + esi + 0x3c] */
    /* test ecx, ecx */ /* 0x11010E47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010E54; /* 0x11010E49: je 0x11010e54 */
L_11010E4B:
    /* cmp ecx, esi */ /* 0x11010E4B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11010E54; /* 0x11010E4D: je 0x11010e54 */
L_11010E4F:
    RECOMP_CALL(sub_11010C82); /* 0x11010E4F: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_11010E54:
    eax = MEM32(esi); /* 0x11010E54: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11010E56: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + esi + 0xC), 0 */ /* 0x11010E59: cmp dword ptr [eax + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11010E5E: sete al */
    MEM8(edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x11010E61: mov byte ptr [edi + 4], al */
    eax = edi; /* 0x11010E64: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11010E66: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010E6B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010E6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010E6Eu);

    goto L_11010E6E;
L_11010321:
    ecx = MEM32(ecx); /* 0x11010321: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx); /* 0x11010323: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11010325: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11010328: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x1101032C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010335; /* 0x1101032E: je 0x11010335 */
L_11010330:
    eax = MEM32(ecx); /* 0x11010330: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x8)); goto _ljump; }
L_11010335:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010335: ret  */
L_11010E6E:
    PUSH32(esp, esi); /* 0x11010E6E: push esi */
    esi = ecx; /* 0x11010E6F: mov esi, ecx */
    RECOMP_CALL(sub_1102D088); /* 0x11010E71: call 0x1102d088 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11010E76: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010E81; /* 0x11010E78: jne 0x11010e81 */
L_11010E7A:
    ecx = MEM32(esi); /* 0x11010E7A: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_11010E89); /* 0x11010E7C: call 0x11010e89 */
    RECOMP_FLAGS_IN();
L_11010E81:
    ecx = esi; /* 0x11010E81: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x11010E83: pop esi */
    RECOMP_BACKEDGE();
    goto L_11010321; /* 0x11010E84: jmp 0x11010321 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11010E89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010E89u);
    RECOMP_EH_ENTER();

L_11010E89:
    PUSH32(esp, 4); /* 0x11010E89: push 4 */
    eax = 0x1103CE8Du; /* 0x11010E8B: mov eax, 0x1103ce8d */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010E90: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010E95: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010E97: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11010E9B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010E9D: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + esi + 0xC), 0 */ /* 0x11010EA0: cmp dword ptr [ecx + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EA5: jne 0x11010eda */
L_11010EA7:
    /* test MEM8(ecx + esi + 0x14), 2 */ /* 0x11010EA7: test byte ptr [ecx + esi + 0x14], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0x14)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EAC: je 0x11010eda */
L_11010EAE:
    ecx = MEM32(ecx + esi + 0x38); /* 0x11010EAE: mov ecx, dword ptr [ecx + esi + 0x38] */
    eax = MEM32(ecx); /* 0x11010EB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11010EB4: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010EB7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EBA: jne 0x11010eda */
L_11010EBC:
    eax = MEM32(esi); /* 0x11010EBC: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010EBE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010EC1: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x11010EC3: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010EC6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010EC9: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010ED2; /* 0x11010ECD: jne 0x11010ed2 */
L_11010ECF:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010ECF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010ED2:
    PUSH32(esp, 0); /* 0x11010ED2: push 0 */
    PUSH32(esp, eax); /* 0x11010ED4: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010ED5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_11010EDA:
    RECOMP_CALL(sub_1103B340); /* 0x11010EDA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010EDF: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010EDAu: goto L_11010EDA;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11010EDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010EDAu);

L_11010EDA:
    RECOMP_CALL(sub_1103B340); /* 0x11010EDA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010EDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010EE0u);

L_11010EE0:
    eax = 0x11010EDAu; /* 0x11010EE0: mov eax, 0x11010eda */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010EE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010EE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010EE6u);

L_11010EE6:
    PUSH32(esp, ebp); /* 0x11010EE6: push ebp */
    ebp = esp; /* 0x11010EE7: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11010EE9: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11010EEC: push esi */
    esi = ecx; /* 0x11010EED: mov esi, ecx */
    MEM32(esi) = edx; /* 0x11010EEF: mov dword ptr [esi], edx */
    eax = MEM32(edx); /* 0x11010EF1: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x11010EF3: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edx + 0x38); /* 0x11010EF6: mov ecx, dword ptr [eax + edx + 0x38] */
    /* test ecx, ecx */ /* 0x11010EFA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010F03; /* 0x11010EFC: je 0x11010f03 */
L_11010EFE:
    eax = MEM32(ecx); /* 0x11010EFE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11010F00: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11010F03:
    eax = esi; /* 0x11010F03: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11010F05: pop esi */
    ebp = POP32_VAL(esp); /* 0x11010F06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11010F07: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11010F0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010F0Au);

L_11010F0A:
    PUSH32(esp, 0x14u); /* 0x11010F0A: push 0x14 */
    eax = 0x1103CEB0u; /* 0x11010F0C: mov eax, 0x1103ceb0 */
    RECOMP_CALL(sub_1103B372); /* 0x11010F11: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11010F16: push 0 */
    ecx = ebp + (-0x14); /* 0x11010F18: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11010F1B: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010F20: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11068A7Cu; /* 0x11010F24: mov ecx, 0x11068a7c */
    edi = MEM32(0x11068E8C); /* 0x11010F29: mov edi, dword ptr [0x11068e8c] */
    MEM32(ebp + (-0x10)) = edi; /* 0x11010F2F: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11010F32: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11010F37: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11010F3A: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11010F3B: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11010F40: mov esi, eax */
    /* test esi, esi */ /* 0x11010F42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010F94; /* 0x11010F44: jne 0x11010f94 */
L_11010F46:
    /* test edi, edi */ /* 0x11010F46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010F4E; /* 0x11010F48: je 0x11010f4e */
L_11010F4A:
    esi = edi; /* 0x11010F4A: mov esi, edi */
    goto L_11010F94; /* 0x11010F4C: jmp 0x11010f94 */
L_11010F4E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11010F4E: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11010F51: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11010F54: push eax */
    RECOMP_CALL(sub_1100EC81); /* 0x11010F55: call 0x1100ec81 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11010F5A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11010F5B: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010F5C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010F7D; /* 0x11010F5F: jne 0x11010f7d */
L_11010F61:
    PUSH32(esp, 0x11004970u); /* 0x11010F61: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11010F66: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11010F69: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11010F6F: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11010F74: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11010F77: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11010F78: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11010F7D:
    esi = MEM32(ebp + (-0x10)); /* 0x11010F7D: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11010F80: mov ecx, esi */
    MEM32(0x11068E8C) = esi; /* 0x11010F82: mov dword ptr [0x11068e8c], esi */
    eax = MEM32(esi); /* 0x11010F88: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11010F8A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11010F8D: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11010F8E: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11010F93: pop ecx */
L_11010F94:
    ecx = ebp + (-0x14); /* 0x11010F94: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11010F97: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11010F9C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11010F9E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11010FA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_11010FA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11010FA4u);

L_11010FA4:
    PUSH32(esp, 0x14u); /* 0x11010FA4: push 0x14 */
    eax = 0x1103CEB0u; /* 0x11010FA6: mov eax, 0x1103ceb0 */
    RECOMP_CALL(sub_1103B372); /* 0x11010FAB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11010FB0: push 0 */
    ecx = ebp + (-0x14); /* 0x11010FB2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11010FB5: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010FBA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11068A88u; /* 0x11010FBE: mov ecx, 0x11068a88 */
    edi = MEM32(0x11068E94); /* 0x11010FC3: mov edi, dword ptr [0x11068e94] */
    MEM32(ebp + (-0x10)) = edi; /* 0x11010FC9: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11010FCC: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11010FD1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11010FD4: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11010FD5: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11010FDA: mov esi, eax */
    /* test esi, esi */ /* 0x11010FDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101102E; /* 0x11010FDE: jne 0x1101102e */
L_11010FE0:
    /* test edi, edi */ /* 0x11010FE0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010FE8; /* 0x11010FE2: je 0x11010fe8 */
L_11010FE4:
    esi = edi; /* 0x11010FE4: mov esi, edi */
    goto L_1101102E; /* 0x11010FE6: jmp 0x1101102e */
L_11010FE8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11010FE8: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11010FEB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11010FEE: push eax */
    RECOMP_CALL(sub_1100EF54); /* 0x11010FEF: call 0x1100ef54 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11010FF4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11010FF5: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010FF6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011017; /* 0x11010FF9: jne 0x11011017 */
L_11010FFB:
    PUSH32(esp, 0x11004970u); /* 0x11010FFB: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11011000: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11011003: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11011009: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1101100E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11011011: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011012: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11011017:
    esi = MEM32(ebp + (-0x10)); /* 0x11011017: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1101101A: mov ecx, esi */
    MEM32(0x11068E94) = esi; /* 0x1101101C: mov dword ptr [0x11068e94], esi */
    eax = MEM32(esi); /* 0x11011022: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11011024: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11011027: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11011028: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101102D: pop ecx */
L_1101102E:
    ecx = ebp + (-0x14); /* 0x1101102E: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11011031: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11011036: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11011038: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101103D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101103E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101103Eu);

L_1101103E:
    PUSH32(esp, 0x14u); /* 0x1101103E: push 0x14 */
    eax = 0x1103CEB0u; /* 0x11011040: mov eax, 0x1103ceb0 */
    RECOMP_CALL(sub_1103B372); /* 0x11011045: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1101104A: push 0 */
    ecx = ebp + (-0x14); /* 0x1101104C: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x1101104F: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11011054: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11068A94u; /* 0x11011058: mov ecx, 0x11068a94 */
    edi = MEM32(0x11068E90); /* 0x1101105D: mov edi, dword ptr [0x11068e90] */
    MEM32(ebp + (-0x10)) = edi; /* 0x11011063: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11011066: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101106B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101106E: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1101106F: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11011074: mov esi, eax */
    /* test esi, esi */ /* 0x11011076: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110110C8; /* 0x11011078: jne 0x110110c8 */
L_1101107A:
    /* test edi, edi */ /* 0x1101107A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011082; /* 0x1101107C: je 0x11011082 */
L_1101107E:
    esi = edi; /* 0x1101107E: mov esi, edi */
    goto L_110110C8; /* 0x11011080: jmp 0x110110c8 */
L_11011082:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11011082: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11011085: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11011088: push eax */
    RECOMP_CALL(sub_1100F36B); /* 0x11011089: call 0x1100f36b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101108E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101108F: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11011090: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110110B1; /* 0x11011093: jne 0x110110b1 */
L_11011095:
    PUSH32(esp, 0x11004970u); /* 0x11011095: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1101109A: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1101109D: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110110A3: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110110A8: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110110AB: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110110AC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110110B1:
    esi = MEM32(ebp + (-0x10)); /* 0x110110B1: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110110B4: mov ecx, esi */
    MEM32(0x11068E90) = esi; /* 0x110110B6: mov dword ptr [0x11068e90], esi */
    eax = MEM32(esi); /* 0x110110BC: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110110BE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110110C1: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110110C2: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110110C7: pop ecx */
L_110110C8:
    ecx = ebp + (-0x14); /* 0x110110C8: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110110CB: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110110D0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110110D2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110110D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110110E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110110E4u);

L_110110E4:
    PUSH32(esp, ebp); /* 0x110110E4: push ebp */
    ebp = esp; /* 0x110110E5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110110E7: push esi */
    esi = ecx; /* 0x110110E8: mov esi, ecx */
    MEM32(esi) = 0x11001458u; /* 0x110110EA: mov dword ptr [esi], 0x11001458 */
    RECOMP_ICALL(MEM32(0x110692E0)); /* 0x110110F0: call dword ptr [0x110692e0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x110110F6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011104; /* 0x110110FA: je 0x11011104 */
L_110110FC:
    PUSH32(esp, esi); /* 0x110110FC: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x110110FD: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011103: pop ecx */
L_11011104:
    eax = esi; /* 0x11011104: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11011106: pop esi */
    ebp = POP32_VAL(esp); /* 0x11011107: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11011108: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11011127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011127u);

L_11011127:
    PUSH32(esp, 0x40u); /* 0x11011127: push 0x40 */
    eax = POP32_VAL(esp); /* 0x11011129: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101112A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101112B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101112Bu);

L_1101112B:
    PUSH32(esp, ebp); /* 0x1101112B: push ebp */
    ebp = esp; /* 0x1101112C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1101112E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11011131: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x11011134: imul eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x11011138: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101115F; /* 0x1101113B: jb 0x1101115f */
L_1101113D:
    ecx = eax + 0x40; /* 0x1101113D: lea ecx, [eax + 0x40] */
    /* cmp ecx, eax */ /* 0x11011140: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101115F; /* 0x11011142: jb 0x1101115f */
L_11011144:
    PUSH32(esp, ecx); /* 0x11011144: push ecx */
    RECOMP_ICALL(MEM32(0x11069300)); /* 0x11011145: call dword ptr [0x11069300] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101114B: pop ecx */
    ecx = eax; /* 0x1101114C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1101114E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101115F; /* 0x11011150: je 0x1101115f */
L_11011152:
    eax = ecx + 0x40; /* 0x11011152: lea eax, [ecx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFC0u);
    eax = eax & 0xFFFFFFC0u; /* 0x11011155: and eax, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + (-0x4)) = ecx; /* 0x11011158: mov dword ptr [eax - 4], ecx */
    esp = ebp; /* 0x1101115B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1101115D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101115E: ret  */
L_1101115F:
    PUSH32(esp, 1); /* 0x1101115F: push 1 */
    eax = ebp + 0x8; /* 0x11011161: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110049A0u; /* 0x11011164: mov dword ptr [ebp + 8], 0x110049a0 */
    PUSH32(esp, eax); /* 0x1101116B: push eax */
    ecx = ebp + (-0xC); /* 0x1101116C: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x1101116F: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011175: push 0x11045724 */
    eax = ebp + (-0xC); /* 0x1101117A: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001458u; /* 0x1101117D: mov dword ptr [ebp - 0xc], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011184: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011185: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101118Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101118B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101118Bu);

L_1101118B:
    PUSH32(esp, ebp); /* 0x1101118B: push ebp */
    ebp = esp; /* 0x1101118C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1101118E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x11011191: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101119F; /* 0x11011193: je 0x1101119f */
L_11011195:
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x11011195: push dword ptr [eax - 4] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x11011198: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101119E: pop ecx */
L_1101119F:
    ebp = POP32_VAL(esp); /* 0x1101119F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110111A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_110111A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110111A1u);

L_110111A1:
    PUSH32(esp, ebp); /* 0x110111A1: push ebp */
    ebp = esp; /* 0x110111A2: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x110111A4: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x110111A8: push esi */
    esi = ecx; /* 0x110111A9: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110111D3; /* 0x110111AB: je 0x110111d3 */
L_110111AD:
    PUSH32(esp, edi); /* 0x110111AD: push edi */
    PUSH32(esp, 0x110114DCu); /* 0x110111AE: push 0x110114dc */
    edi = esi + (-0x4); /* 0x110111B3: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x110111B6: push dword ptr [edi] */
    PUSH32(esp, 0x10u); /* 0x110111B8: push 0x10 */
    PUSH32(esp, esi); /* 0x110111BA: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x110111BB: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x110111C0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110111CE; /* 0x110111C4: je 0x110111ce */
L_110111C6:
    PUSH32(esp, edi); /* 0x110111C6: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x110111C7: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110111CD: pop ecx */
L_110111CE:
    eax = edi; /* 0x110111CE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110111D0: pop edi */
    goto L_110111E8; /* 0x110111D1: jmp 0x110111e8 */
L_110111D3:
    RECOMP_CALL(sub_110114DC); /* 0x110111D3: call 0x110114dc */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x110111D8: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110111E6; /* 0x110111DC: je 0x110111e6 */
L_110111DE:
    PUSH32(esp, esi); /* 0x110111DE: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x110111DF: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110111E5: pop ecx */
L_110111E6:
    eax = esi; /* 0x110111E6: mov eax, esi */
L_110111E8:
    esi = POP32_VAL(esp); /* 0x110111E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110111E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110111EA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110111F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110111F6u);

L_110111F6:
    PUSH32(esp, ebp); /* 0x110111F6: push ebp */
    ebp = esp; /* 0x110111F7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110111F9: push ecx */
    PUSH32(esp, esi); /* 0x110111FA: push esi */
    esi = ecx; /* 0x110111FB: mov esi, ecx */
    PUSH32(esp, edi); /* 0x110111FD: push edi */
    edi = MEM32(esi + 0x8); /* 0x110111FE: mov edi, dword ptr [esi + 8] */
    /* test edi, edi */ /* 0x11011201: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101122F; /* 0x11011203: je 0x1101122f */
L_11011205:
    eax = MEM32(esi + 0x4); /* 0x11011205: mov eax, dword ptr [esi + 4] */
    ecx = ebp + (-0x4); /* 0x11011208: lea ecx, [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1101120B: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1101120E: push eax */
    RECOMP_ICALL(MEM32(0x11069244)); /* 0x1101120F: call dword ptr [0x11069244] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x11011215: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(edi); /* 0x11011218: mov ecx, dword ptr [edi] */
    MEM32(eax) = ecx; /* 0x1101121A: mov dword ptr [eax], ecx */
    /* test ecx, ecx */ /* 0x1101121C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11011226; /* 0x1101121E: jne 0x11011226 */
L_11011220:
    eax = MEM32(esi + 0x4); /* 0x11011220: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x8) = ecx; /* 0x11011223: mov dword ptr [eax + 8], ecx */
L_11011226:
    ecx = ebp + (-0x4); /* 0x11011226: lea ecx, [ebp - 4] */
    RECOMP_ICALL(MEM32(0x11069240)); /* 0x11011229: call dword ptr [0x11069240] */
    RECOMP_FLAGS_IN();
L_1101122F:
    eax = MEM32(esi + 0x4); /* 0x1101122F: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x11011232: mov ecx, dword ptr [esi] */
    MEM32(eax + 0x4) = ecx; /* 0x11011234: mov dword ptr [eax + 4], ecx */
    /* test edi, edi */ /* 0x11011237: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011244; /* 0x11011239: je 0x11011244 */
L_1101123B:
    ecx = MEM32(esi + 0xC); /* 0x1101123B: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x1101123E: push edi */
    eax = MEM32(ecx); /* 0x1101123F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11011241: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_11011244:
    edi = POP32_VAL(esp); /* 0x11011244: pop edi */
    esi = POP32_VAL(esp); /* 0x11011245: pop esi */
    esp = ebp; /* 0x11011246: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11011249: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101124A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101124Au);

L_1101124A:
    PUSH32(esp, 0x38u); /* 0x1101124A: push 0x38 */
    eax = 0x1103CEDCu; /* 0x1101124C: mov eax, 0x1103cedc */
    RECOMP_CALL(sub_1103B3DB); /* 0x11011251: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11011256: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x11011258: mov dword ptr [ebp - 0x14], ebx */
    ecx = MEM32(ebp + 0xC); /* 0x1101125B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101125E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x11011260: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x11011263: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x11011266: mov eax, ecx */
    MEM32(ebp + 0xC) = ecx; /* 0x11011268: mov dword ptr [ebp + 0xc], ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1101126B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1101126B: shr eax, 3 */
    esi = edi; /* 0x1101126E: mov esi, edi */
    edx = MEM32(edx + 0x8); /* 0x11011270: mov edx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x11011273: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x11011274: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x11011276: mov dword ptr [ebp - 0x1c], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11011290; /* 0x11011279: jne 0x11011290 */
L_1101127B:
    ecx = MEM32(ebp + 0x10); /* 0x1101127B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101127E: mov dword ptr [ebp - 4], edi */
    eax = MEM32(ecx); /* 0x11011281: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11011283: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x11011286: mov ecx, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x11011289: mov esi, eax */
    MEM32(esi + 0x4) = edi; /* 0x1101128B: mov dword ptr [esi + 4], edi */
    MEM32(esi) = edi; /* 0x1101128E: mov dword ptr [esi], edi */
L_11011290:
    eax = ecx + 0x8; /* 0x11011290: lea eax, [ecx + 8] */
    MEM32(ebp + (-0x24)) = ebx; /* 0x11011293: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x28)) = eax; /* 0x11011296: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x4)) = 3; /* 0x11011299: mov dword ptr [ebp - 4], 3 */
    /* cmp MEM32(ebx + 0xC), ecx */ /* 0x110112A0: cmp dword ptr [ebx + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110112C8; /* 0x110112A3: je 0x110112c8 */
L_110112A5:
    eax = MEM32(0x11069230); /* 0x110112A5: mov eax, dword ptr [0x11069230] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x110112AA: mov dword ptr [ebp - 0x3c], edi */
    edi = MEM32(ebp + 0xC); /* 0x110112AD: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x110112B0: mov dword ptr [ebp - 0x38], eax */
L_110112B3:
    ecx = ebp + (-0x44); /* 0x110112B3: lea ecx, [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x110112B6: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x110112BC: mov eax, dword ptr [ebx + 0xc] */
    /* test LO8(eax), 1 */ /* 0x110112BF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101132D; /* 0x110112C1: jne 0x1101132d */
L_110112C3:
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x110112C3: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110112B3; /* 0x110112C6: jne 0x110112b3 */
L_110112C8:
    /* test esi, esi */ /* 0x110112C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011365; /* 0x110112CA: je 0x11011365 */
L_110112D0:
    eax = ebx + 0x10; /* 0x110112D0: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x110112D3: push eax */
    ecx = ebp + (-0x18); /* 0x110112D4: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069244)); /* 0x110112D7: call dword ptr [0x11069244] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x8); /* 0x110112DD: mov eax, dword ptr [ebx + 8] */
    /* test eax, eax */ /* 0x110112E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011355; /* 0x110112E2: je 0x11011355 */
L_110112E4:
    MEM32(eax) = esi; /* 0x110112E4: mov dword ptr [eax], esi */
    goto L_11011357; /* 0x110112E6: jmp 0x11011357 */
L_11011328:
    RECOMP_CALL(sub_1103B33A); /* 0x11011328: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1101132D:
    PUSH32(esp, 1); /* 0x1101132D: push 1 */
    eax = ebp + (-0x14); /* 0x1101132F: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x110049A0u; /* 0x11011332: mov dword ptr [ebp - 0x14], 0x110049a0 */
    PUSH32(esp, eax); /* 0x11011339: push eax */
    ecx = ebp + (-0x34); /* 0x1101133A: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x1101133D: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011343: push 0x11045724 */
    eax = ebp + (-0x34); /* 0x11011348: lea eax, [ebp - 0x34] */
    MEM32(ebp + (-0x34)) = 0x11001458u; /* 0x1101134B: mov dword ptr [ebp - 0x34], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011352: push eax */
    RECOMP_BACKEDGE();
    goto L_11011328; /* 0x11011353: jmp 0x11011328 */
L_11011355:
    MEM32(ebx) = esi; /* 0x11011355: mov dword ptr [ebx], esi */
L_11011357:
    ecx = ebp + (-0x18); /* 0x11011357: lea ecx, [ebp - 0x18] */
    MEM32(ebx + 0x8) = esi; /* 0x1101135A: mov dword ptr [ebx + 8], esi */
    RECOMP_ICALL(MEM32(0x11069240)); /* 0x1101135D: call dword ptr [0x11069240] */
    RECOMP_FLAGS_IN();
    goto L_11011368; /* 0x11011363: jmp 0x11011368 */
L_11011365:
    esi = MEM32(ebx + 0x8); /* 0x11011365: mov esi, dword ptr [ebx + 8] */
L_11011368:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11011368: push dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1101136B: mov edi, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + 0x10); /* 0x1101136E: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x11011371: push edi */
    PUSH32(esp, esi); /* 0x11011372: push esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x11011373: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011376: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x11011378: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101137A: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101137B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1101137B: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | eax)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | eax));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | eax; /* 0x1101137D: or dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x28)); /* 0x11011380: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebx + 0xC) = eax; /* 0x11011383: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_1103B340); /* 0x11011386: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1101138B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1101138E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101138Eu);

L_1101138E:
    PUSH32(esp, 0x38u); /* 0x1101138E: push 0x38 */
    eax = 0x1103CEFFu; /* 0x11011390: mov eax, 0x1103ceff */
    RECOMP_CALL(sub_1103B372); /* 0x11011395: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101139A: mov esi, ecx */
    edi = MEM32(ebp + 0xC); /* 0x1101139C: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(0x11069230); /* 0x1101139F: mov ebx, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    edi = edi & 0xFFFFFFF8u; /* 0x110113A5: and edi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x110113A8: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ebx; /* 0x110113AC: mov dword ptr [ebp - 0x28], ebx */
    goto L_110113BA; /* 0x110113AF: jmp 0x110113ba */
L_110113B1:
    ecx = ebp + (-0x34); /* 0x110113B1: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x110113B4: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_110113BA:
    /* cmp MEM32(esi + 0x4), edi */ /* 0x110113BA: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110113B1; /* 0x110113BD: jne 0x110113b1 */
L_110113BF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & 0; /* 0x110113BF: and dword ptr [ebp - 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ebx; /* 0x110113C3: mov dword ptr [ebp - 0x38], ebx */
    goto L_110113D1; /* 0x110113C6: jmp 0x110113d1 */
L_110113C8:
    ecx = ebp + (-0x44); /* 0x110113C8: lea ecx, [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x110113CB: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_110113D1:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x110113D1: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110113C8; /* 0x110113D4: je 0x110113c8 */
L_110113D6:
    edx = MEM32(esi); /* 0x110113D6: mov edx, dword ptr [esi] */
    ecx = edi; /* 0x110113D8: mov ecx, edi */
    eax = MEM32(ebp + 0x10); /* 0x110113DA: mov eax, dword ptr [ebp + 0x10] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x110113DD: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x110113DD: shr ecx, 3 */
    MEM8(ebp + 0xF) = (uint8_t)(0); /* 0x110113E0: mov byte ptr [ebp + 0xf], 0 */
    MEM32(ebp + (-0x20)) = esi; /* 0x110113E4: mov dword ptr [ebp - 0x20], esi */
    eax = MEM32(eax + 0x8); /* 0x110113E7: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110113EA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x110113EB: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x110113ED: mov ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x110113EF: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = edi + 0x8; /* 0x110113F1: lea eax, [edi + 8] */
    edi = MEM32(ebp + 0x10); /* 0x110113F4: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x110113F7: neg ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x110113F9: mov dword ptr [ebp - 0x14], eax */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110113FC: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x24)) = eax; /* 0x110113FE: mov dword ptr [ebp - 0x24], eax */
    ebx = ~ebx; /* 0x11011401: not ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x11011403: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x11011406: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x11011408: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101140B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101140F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11011411: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011412: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x11011412: shl eax, cl */
    /* test MEM32(edx + 0x4), eax */ /* 0x11011414: test dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011429; /* 0x11011417: je 0x11011429 */
L_11011419:
    eax = MEM32(edi); /* 0x11011419: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1101141B: push ecx */
    PUSH32(esp, edx); /* 0x1101141C: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101141D: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x11011420: mov ecx, edi */
    MEM8(ebp + 0xF) = (uint8_t)(1); /* 0x11011422: mov byte ptr [ebp + 0xf], 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11011426: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11011429:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11011429: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1101142D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011452; /* 0x1101142F: je 0x11011452 */
L_11011431:
    eax = esi + 0x10; /* 0x11011431: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x11011434: push eax */
    ecx = ebp + (-0x10); /* 0x11011435: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069244)); /* 0x11011438: call dword ptr [0x11069244] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1101143E: mov eax, dword ptr [ebx] */
    MEM32(esi) = eax; /* 0x11011440: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x11011442: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11011449; /* 0x11011444: jne 0x11011449 */
L_11011446:
    MEM32(esi + 0x8) = eax; /* 0x11011446: mov dword ptr [esi + 8], eax */
L_11011449:
    ecx = ebp + (-0x10); /* 0x11011449: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069240)); /* 0x1101144C: call dword ptr [0x11069240] */
    RECOMP_FLAGS_IN();
L_11011452:
    eax = MEM32(ebp + (-0x14)); /* 0x11011452: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x4) = eax; /* 0x11011455: mov dword ptr [esi + 4], eax */
    /* test ebx, ebx */ /* 0x11011458: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011464; /* 0x1101145A: je 0x11011464 */
L_1101145C:
    edx = MEM32(edi); /* 0x1101145C: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x1101145E: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x11011460: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x11011461: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
L_11011464:
    SET_LO8(eax, MEM8(ebp + 0xF)); /* 0x11011464: mov al, byte ptr [ebp + 0xf] */
    RECOMP_CALL(sub_1103B340); /* 0x11011467: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1101146C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1101146F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101146Fu);

L_1101146F:
    PUSH32(esp, ebp); /* 0x1101146F: push ebp */
    ebp = esp; /* 0x11011470: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11011472: push ebx */
    PUSH32(esp, esi); /* 0x11011473: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11011474: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11011477: push edi */
    edi = ecx; /* 0x11011478: mov edi, ecx */
    MEM32(edi) = 0x11004ABCu; /* 0x1101147A: mov dword ptr [edi], 0x11004abc */
    /* cmp esi, 8 */ /* 0x11011480: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11011489; /* 0x11011483: ja 0x11011489 */
L_11011485:
    PUSH32(esp, 0x20u); /* 0x11011485: push 0x20 */
    goto L_110114A0; /* 0x11011487: jmp 0x110114a0 */
L_11011489:
    PUSH32(esp, 0x10u); /* 0x11011489: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1101148B: pop eax */
    /* cmp esi, eax */ /* 0x1101148C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110114AF; /* 0x1101148E: jbe 0x110114af */
L_11011490:
    /* cmp esi, 0x20u */ /* 0x11011490: cmp esi, 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11011499; /* 0x11011493: ja 0x11011499 */
L_11011495:
    PUSH32(esp, 8); /* 0x11011495: push 8 */
    goto L_110114A0; /* 0x11011497: jmp 0x110114a0 */
L_11011499:
    /* cmp esi, 0x40u */ /* 0x11011499: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110114A3; /* 0x1101149C: ja 0x110114a3 */
L_1101149E:
    PUSH32(esp, 4); /* 0x1101149E: push 4 */
L_110114A0:
    eax = POP32_VAL(esp); /* 0x110114A0: pop eax */
    goto L_110114AF; /* 0x110114A1: jmp 0x110114af */
L_110114A3:
    eax = 0x80u; /* 0x110114A3: mov eax, 0x80 */
    /* cmp eax, esi */ /* 0x110114A8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110114AA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x110114AC: add eax, 2 */
    _flag_k = FK_ADD;
L_110114AF:
    PUSH32(esp, 0); /* 0x110114AF: push 0 */
    ebx = 0x140u; /* 0x110114B1: mov ebx, 0x140 */
    MEM32(edi + 0x8) = eax; /* 0x110114B6: mov dword ptr [edi + 8], eax */
    PUSH32(esp, ebx); /* 0x110114B9: push ebx */
    PUSH32(esp, 1); /* 0x110114BA: push 1 */
    RECOMP_CALL(sub_1101112B); /* 0x110114BC: call 0x1101112b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x110114C1: push ebx */
    PUSH32(esp, 0); /* 0x110114C2: push 0 */
    PUSH32(esp, eax); /* 0x110114C4: push eax */
    MEM32(edi + 0x4) = eax; /* 0x110114C5: mov dword ptr [edi + 4], eax */
    RECOMP_CALL(sub_1103B49A); /* 0x110114C8: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110114CD: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(edi + 0xC) = esi; /* 0x110114D0: mov dword ptr [edi + 0xc], esi */
    eax = edi; /* 0x110114D3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110114D5: pop edi */
    esi = POP32_VAL(esp); /* 0x110114D6: pop esi */
    ebx = POP32_VAL(esp); /* 0x110114D7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110114D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110114D9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110114DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110114DCu);

L_110114DC:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x110114DC: push dword ptr [ecx + 4] */
    MEM32(ecx) = 0x11004ABCu; /* 0x110114DF: mov dword ptr [ecx], 0x11004abc */
    RECOMP_CALL(sub_1101118B); /* 0x110114E5: call 0x1101118b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110114EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110114EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110114EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110114ECu);

L_110114EC:
    PUSH32(esp, ebp); /* 0x110114EC: push ebp */
    ebp = esp; /* 0x110114ED: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110114EF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110114F0: mov esi, dword ptr [ebp + 8] */
    edx = ecx; /* 0x110114F3: mov edx, ecx */
    eax = MEM32(edx + 0x4); /* 0x110114F5: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x110114F8: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011508; /* 0x110114FB: je 0x11011508 */
L_110114FD:
    ecx = eax; /* 0x110114FD: mov ecx, eax */
    eax = MEM32(esi + 0x4); /* 0x110114FF: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x11011502: mov dword ptr [edx + 4], eax */
    MEM32(esi + 0x4) = ecx; /* 0x11011505: mov dword ptr [esi + 4], ecx */
L_11011508:
    esi = POP32_VAL(esp); /* 0x11011508: pop esi */
    ebp = POP32_VAL(esp); /* 0x11011509: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101150A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101150D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101150Du);

L_1101150D:
    PUSH32(esp, ebp); /* 0x1101150D: push ebp */
    ebp = esp; /* 0x1101150E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11011510: push esi */
    esi = MEM32(ecx + 0x4); /* 0x11011511: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011514: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011516: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x40; /* 0x11011517: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1101151A: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1101151E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1101151F: dec edx */
    _flag_k = FK_DEC;
    eax = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x11011520: imul eax, edx, 3 */
    PUSH32(esp, 0x110117A4u); /* 0x11011523: push 0x110117a4 */
    PUSH32(esp, ecx); /* 0x11011528: push ecx */
    PUSH32(esp, edx); /* 0x11011529: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101152A: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1101152D: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x80; /* 0x11011530: lea ecx, [esi + 0x80] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x11011536: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11011539: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1101124A); /* 0x1101153B: call 0x1101124a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11011540: pop esi */
    ebp = POP32_VAL(esp); /* 0x11011541: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11011542: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11011545(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011545u);

L_11011545:
    PUSH32(esp, ebp); /* 0x11011545: push ebp */
    ebp = esp; /* 0x11011546: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11011548: push esi */
    esi = MEM32(ecx + 0x4); /* 0x11011549: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101154C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1101154E: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x40; /* 0x1101154F: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x11011552: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011556: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x11011557: dec edx */
    _flag_k = FK_DEC;
    eax = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x11011558: imul eax, edx, 3 */
    PUSH32(esp, 0x110117A0u); /* 0x1101155B: push 0x110117a0 */
    PUSH32(esp, ecx); /* 0x11011560: push ecx */
    PUSH32(esp, edx); /* 0x11011561: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11011562: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x11011565: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x80; /* 0x11011568: lea ecx, [esi + 0x80] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1101156E: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11011571: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1101124A); /* 0x11011573: call 0x1101124a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11011578: pop esi */
    ebp = POP32_VAL(esp); /* 0x11011579: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101157A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101157D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101157Du);

L_1101157D:
    PUSH32(esp, ebp); /* 0x1101157D: push ebp */
    ebp = esp; /* 0x1101157E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11011580: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11011583: push esi */
    PUSH32(esp, edi); /* 0x11011584: push edi */
    edi = ecx; /* 0x11011585: mov edi, ecx */
    esi = MEM32(edi + 0x4); /* 0x11011587: mov esi, dword ptr [edi + 4] */
L_1101158A:
    eax = MEM32(esi); /* 0x1101158A: mov eax, dword ptr [esi] */
L_1101158C:
    /* cmp eax, MEM32(esi + 0x40) */ /* 0x1101158C: cmp eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110115C1; /* 0x1101158F: je 0x110115c1 */
L_11011591:
    edx = eax; /* 0x11011591: mov edx, eax */
    ecx = eax + 0x1; /* 0x11011593: lea ecx, [eax + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x11011596: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1101159A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101158C; /* 0x1101159C: jne 0x1101158c */
L_1101159E:
    PUSH32(esp, edi); /* 0x1101159E: push edi */
    PUSH32(esp, eax); /* 0x1101159F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110115A0: push dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x110115A3: imul eax, eax, 3 */
    ecx = esi + 0x80; /* 0x110115A6: lea ecx, [esi + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x110115AC: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x110115AF: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x110115B2: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1101138E); /* 0x110115B4: call 0x1101138e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110115B9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101158A; /* 0x110115BB: je 0x1101158a */
L_110115BD:
    SET_LO8(eax, 1); /* 0x110115BD: mov al, 1 */
    goto L_110115C3; /* 0x110115BF: jmp 0x110115c3 */
L_110115C1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x110115C1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_110115C3:
    edi = POP32_VAL(esp); /* 0x110115C3: pop edi */
    esi = POP32_VAL(esp); /* 0x110115C4: pop esi */
    esp = ebp; /* 0x110115C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110115C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110115C8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110115CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110115CBu);

L_110115CB:
    eax = MEM32(ecx + 0x4); /* 0x110115CB: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x110115CE: mov eax, dword ptr [eax + 0x40] */
    ecx = MEM32(ecx + 0x4); /* 0x110115D1: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x110115D4: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x110115D6: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110115D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110115D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110115D9u);

L_110115D9:
    eax = MEM32(ecx + 0x4); /* 0x110115D9: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x110115DC: push esi */
    edx = MEM32(eax + 0x40); /* 0x110115DD: mov edx, dword ptr [eax + 0x40] */
    eax = MEM32(ecx + 0x4); /* 0x110115E0: mov eax, dword ptr [ecx + 4] */
    esi = MEM32(eax); /* 0x110115E3: mov esi, dword ptr [eax] */
    eax = MEM32(ecx + 0x4); /* 0x110115E5: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x110115E8: mov eax, dword ptr [eax + 0x40] */
    /* cmp edx, eax */ /* 0x110115EB: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110115F8; /* 0x110115ED: jne 0x110115f8 */
L_110115EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110115EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x110115F1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x110115F3: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110115F4: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110115F7: ret  */
L_110115F8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x110115F8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x110115FA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110115FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110115FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110115FCu);

L_110115FC:
    PUSH32(esp, esi); /* 0x110115FC: push esi */
    PUSH32(esp, edi); /* 0x110115FD: push edi */
    edi = ecx; /* 0x110115FE: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11011600: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11011602:
    eax = MEM32(edi + 0x4); /* 0x11011602: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + esi + 0x88); /* 0x11011605: mov ecx, dword ptr [eax + esi + 0x88] */
    /* test ecx, ecx */ /* 0x1101160C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101162E; /* 0x1101160E: je 0x1101162e */
L_11011610:
    /* cmp ecx, MEM32(0x11068E88) */ /* 0x11011610: cmp ecx, dword ptr [0x11068e88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x11068E88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011620; /* 0x11011616: je 0x11011620 */
L_11011618:
    eax = MEM32(edi); /* 0x11011618: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1101161A: push ecx */
    ecx = edi; /* 0x1101161B: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1101161D: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_11011620:
    eax = MEM32(edi + 0x4); /* 0x11011620: mov eax, dword ptr [edi + 4] */
    MEM32(eax + esi + 0x88) = 0; /* 0x11011623: mov dword ptr [eax + esi + 0x88], 0 */
L_1101162E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1101162E: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xA0u */ /* 0x11011631: cmp esi, 0xa0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11011602; /* 0x11011637: jb 0x11011602 */
L_11011639:
    edi = POP32_VAL(esp); /* 0x11011639: pop edi */
    esi = POP32_VAL(esp); /* 0x1101163A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101163B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101163C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101163Cu);

L_1101163C:
    PUSH32(esp, ebp); /* 0x1101163C: push ebp */
    ebp = esp; /* 0x1101163D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1101163F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x11011642: push 1 */
    eax = ebp + (-0x4); /* 0x11011644: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110049A0u; /* 0x11011647: mov dword ptr [ebp - 4], 0x110049a0 */
    PUSH32(esp, eax); /* 0x1101164E: push eax */
    ecx = ebp + (-0x10); /* 0x1101164F: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11011652: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011658: push 0x11045724 */
    eax = ebp + (-0x10); /* 0x1101165D: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x11001458u; /* 0x11011660: mov dword ptr [ebp - 0x10], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011667: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011668: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101166Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101166E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101166Eu);

L_1101166E:
    PUSH32(esp, ebp); /* 0x1101166E: push ebp */
    ebp = esp; /* 0x1101166F: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x11011671: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x11011674: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11011675: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x11011678: mov eax, dword ptr [eax + 4] */
    /* cmp esi, MEM32(eax + 0x40) */ /* 0x1101167B: cmp esi, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011684; /* 0x1101167E: jne 0x11011684 */
L_11011680:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011680: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110116A3; /* 0x11011682: jmp 0x110116a3 */
L_11011684:
    eax = (uint32_t)((int32_t)esi * (int32_t)3); /* 0x11011684: imul eax, esi, 3 */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x11011687: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x11011687: shr esi, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1101168A: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx + eax * 4 + 0x8); /* 0x1101168D: mov edx, dword ptr [ecx + eax*4 + 8] */
    eax = MEM32(ecx + 0x4); /* 0x11011691: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x8); /* 0x11011694: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11011697: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x11011698: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0xC)); /* 0x1101169A: imul ecx, dword ptr [eax + 0xc] */
    eax = edx + 0x8; /* 0x1101169E: lea eax, [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x110116A1: add eax, ecx */
    _flag_k = FK_ADD;
L_110116A3:
    esi = POP32_VAL(esp); /* 0x110116A3: pop esi */
    ebp = POP32_VAL(esp); /* 0x110116A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110116A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110116A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110116A8u);

L_110116A8:
    PUSH32(esp, ebp); /* 0x110116A8: push ebp */
    ebp = esp; /* 0x110116A9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110116AB: push esi */
    PUSH32(esp, 0); /* 0x110116AC: push 0 */
    PUSH32(esp, 0x28u); /* 0x110116AE: push 0x28 */
    PUSH32(esp, 1); /* 0x110116B0: push 1 */
    esi = ecx; /* 0x110116B2: mov esi, ecx */
    RECOMP_CALL(sub_1101112B); /* 0x110116B4: call 0x1101112b */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x110116B9: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110116BB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = edx; /* 0x110116BE: mov dword ptr [esi], edx */
    /* test edx, edx */ /* 0x110116C0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110116EC; /* 0x110116C2: je 0x110116ec */
L_110116C4:
    eax = MEM32(ebp + 0x8); /* 0x110116C4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110116C7: push edi */
    PUSH32(esp, 8); /* 0x110116C8: push 8 */
    ecx = MEM32(eax + 0x4); /* 0x110116CA: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx); /* 0x110116CD: mov ecx, dword ptr [ecx] */
    MEM32(edx) = ecx; /* 0x110116CF: mov dword ptr [edx], ecx */
    MEM32(edx + 0x4) = eax; /* 0x110116D1: mov dword ptr [edx + 4], eax */
    edi = MEM32(eax + 0x4); /* 0x110116D4: mov edi, dword ptr [eax + 4] */
    ecx = POP32_VAL(esp); /* 0x110116D7: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0xFFFFFF80u; /* 0x110116D8: sub edi, -0x80 */
    _flag_k = FK_CMP;
L_110116DB:
    eax = MEM32(edi); /* 0x110116DB: mov eax, dword ptr [edi] */
    edi = edi + 0x14; /* 0x110116DD: lea edi, [edi + 0x14] */
    MEM32(ecx + edx) = eax; /* 0x110116E0: mov dword ptr [ecx + edx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x110116E3: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x28u */ /* 0x110116E6: cmp ecx, 0x28 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110116DB; /* 0x110116E9: jb 0x110116db */
L_110116EB:
    edi = POP32_VAL(esp); /* 0x110116EB: pop edi */
L_110116EC:
    ecx = MEM32(esi); /* 0x110116EC: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ecx)); /* 0x110116EE: push dword ptr [ecx] */
    RECOMP_CALL(sub_1101166E); /* 0x110116F0: call 0x1101166e */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x110116F5: mov dword ptr [esi + 4], eax */
    eax = esi; /* 0x110116F8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110116FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x110116FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110116FC: ret 4 */
    RECOMP_REGS_OUT();
}
