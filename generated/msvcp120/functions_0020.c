#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1102BAD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BAD4u);

L_1102BAD4:
    PUSH32(esp, 8); /* 0x1102BAD4: push 8 */
    eax = 0x1103ECD7u; /* 0x1102BAD6: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102BADB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BAE0: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102BAE2: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102BAE4: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102BAE7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BAEA: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BAEE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BAF7; /* 0x1102BAF0: je 0x1102baf7 */
L_1102BAF2:
    eax = MEM32(ecx); /* 0x1102BAF2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102BAF4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102BAF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BAF7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102BAF9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102BAFB: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102BAFC: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x1102BAFF: push edi */
    ecx = esi; /* 0x1102BB00: mov ecx, esi */
    RECOMP_CALL(sub_11010810); /* 0x1102BB02: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102BB07: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102BB0A: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102BB0C: mov dword ptr [ebp - 4], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102BB0F: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102BB12: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BB44; /* 0x1102BB17: jne 0x1102bb44 */
L_1102BB19:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BB19: mov ecx, dword ptr [ecx + esi + 0x38] */
    PUSH32(esp, edi); /* 0x1102BB1D: push edi */
    PUSH32(esp, edi); /* 0x1102BB1E: push edi */
    PUSH32(esp, ebx); /* 0x1102BB1F: push ebx */
    eax = MEM32(ecx); /* 0x1102BB20: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1102BB22: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BB23: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102BB26: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BB29: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BB2B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102BB2F: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BB32: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BB36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BB3F; /* 0x1102BB38: je 0x1102bb3f */
L_1102BB3A:
    edx = MEM32(ecx); /* 0x1102BB3A: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102BB3C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102BB3F:
    eax = MEM32(ebp + 0x8); /* 0x1102BB3F: mov eax, dword ptr [ebp + 8] */
    goto L_1102BB77; /* 0x1102BB42: jmp 0x1102bb77 */
L_1102BB44:
    edi = MEM32(ebp + 0x8); /* 0x1102BB44: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(0x110032C8); /* 0x1102BB47: mov eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BB4C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x1102BB50: mov dword ptr [edi], eax */
    eax = MEM32(0x110032CC); /* 0x1102BB52: mov eax, dword ptr [0x110032cc] */
    MEM32(edi + 0x4) = eax; /* 0x1102BB57: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = ebx; /* 0x1102BB5A: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0xC) = ebx; /* 0x1102BB5D: mov dword ptr [edi + 0xc], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1102BB60: mov dword ptr [edi + 0x10], ebx */
    eax = MEM32(esi); /* 0x1102BB63: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102BB65: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BB68: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BB6C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BB75; /* 0x1102BB6E: je 0x1102bb75 */
L_1102BB70:
    edx = MEM32(ecx); /* 0x1102BB70: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102BB72: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102BB75:
    eax = edi; /* 0x1102BB75: mov eax, edi */
L_1102BB77:
    RECOMP_CALL(sub_1103B340); /* 0x1102BB77: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BB7C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BB7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BB7Fu);

L_1102BB7F:
    PUSH32(esp, 8); /* 0x1102BB7F: push 8 */
    eax = 0x1103ECFAu; /* 0x1102BB81: mov eax, 0x1103ecfa */
    RECOMP_CALL(sub_1103B372); /* 0x1102BB86: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BB8B: mov esi, ecx */
    PUSH32(esp, esi); /* 0x1102BB8D: push esi */
    ecx = ebp + (-0x14); /* 0x1102BB8E: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E19); /* 0x1102BB91: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BB96: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102BB98: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1102BB9A: mov dword ptr [ebp - 4], edx */
    ecx = MEM32(eax + 0x4); /* 0x1102BB9D: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102BBA0: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BBC6; /* 0x1102BBA5: jne 0x1102bbc6 */
L_1102BBA7:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BBA7: mov ecx, dword ptr [ecx + esi + 0x38] */
    PUSH32(esp, 2); /* 0x1102BBAB: push 2 */
    PUSH32(esp, 1); /* 0x1102BBAD: push 1 */
    PUSH32(esp, edx); /* 0x1102BBAF: push edx */
    eax = MEM32(ecx); /* 0x1102BBB0: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1102BBB2: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BBB3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102BBB6: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1102BBB9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E6E); /* 0x1102BBBC: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102BBC1: mov eax, dword ptr [ebp + 8] */
    goto L_1102BBED; /* 0x1102BBC4: jmp 0x1102bbed */
L_1102BBC6:
    esi = MEM32(ebp + 0x8); /* 0x1102BBC6: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x1102BBC9: mov ecx, dword ptr [0x110032c8] */
    MEM32(esi) = ecx; /* 0x1102BBCF: mov dword ptr [esi], ecx */
    ecx = MEM32(0x110032CC); /* 0x1102BBD1: mov ecx, dword ptr [0x110032cc] */
    MEM32(esi + 0x4) = ecx; /* 0x1102BBD7: mov dword ptr [esi + 4], ecx */
    ecx = ebp + (-0x14); /* 0x1102BBDA: lea ecx, [ebp - 0x14] */
    MEM32(esi + 0x8) = edx; /* 0x1102BBDD: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x1102BBE0: mov dword ptr [esi + 0xc], edx */
    MEM32(esi + 0x10) = edx; /* 0x1102BBE3: mov dword ptr [esi + 0x10], edx */
    RECOMP_CALL(sub_11010E6E); /* 0x1102BBE6: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102BBEB: mov eax, esi */
L_1102BBED:
    RECOMP_CALL(sub_1103B340); /* 0x1102BBED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BBF2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BBF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BBF5u);

L_1102BBF5:
    PUSH32(esp, ebp); /* 0x1102BBF5: push ebp */
    ebp = esp; /* 0x1102BBF6: mov ebp, esp */
    eax = MEM32(ecx + 0x3C); /* 0x1102BBF8: mov eax, dword ptr [ecx + 0x3c] */
    edx = MEM32(ebp + 0x8); /* 0x1102BBFB: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x3C) = edx; /* 0x1102BBFE: mov dword ptr [ecx + 0x3c], edx */
    ebp = POP32_VAL(esp); /* 0x1102BC01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BC02: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BC05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BC05u);

L_1102BC05:
    PUSH32(esp, ebp); /* 0x1102BC05: push ebp */
    ebp = esp; /* 0x1102BC06: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102BC08: push ecx */
    edx = MEM32(ecx); /* 0x1102BC09: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BC0B: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102BC0E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1102BC12: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102BC15: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1102BC18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102BC1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BC1B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BC1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BC1Eu);

L_1102BC1E:
    PUSH32(esp, esi); /* 0x1102BC1E: push esi */
    esi = ecx; /* 0x1102BC1F: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102BC21: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1102BC23: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edx = 0xFFFFu; /* 0x1102BC26: mov edx, 0xffff */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1102BC2B: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102BC42; /* 0x1102BC2E: je 0x1102bc42 */
L_1102BC30:
    eax = MEM32(esi + 0x2C); /* 0x1102BC30: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1102BC33: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x1C); /* 0x1102BC35: mov ecx, dword ptr [esi + 0x1c] */
    edx = MEM32(ecx); /* 0x1102BC38: mov edx, dword ptr [ecx] */
    eax = edx + 0x2; /* 0x1102BC3A: lea eax, [edx + 2] */
    MEM32(ecx) = eax; /* 0x1102BC3D: mov dword ptr [ecx], eax */
    edx = (uint32_t)MEM16(edx); /* 0x1102BC3F: movzx edx, word ptr [edx] */
L_1102BC42:
    SET_LO16(eax, LO16(edx)); /* 0x1102BC42: mov ax, dx */
    esi = POP32_VAL(esp); /* 0x1102BC45: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BC46: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102BC47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BC47u);

L_1102BC47:
    eax = 0xFFFFu; /* 0x1102BC47: mov eax, 0xffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BC4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102BC4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BC4Du);
    RECOMP_EH_ENTER();

L_1102BC4D:
    PUSH32(esp, 0x18u); /* 0x1102BC4D: push 0x18 */
    eax = 0x1103ED25u; /* 0x1102BC4F: mov eax, 0x1103ed25 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102BC54: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BC59: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102BC5B: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102BC5E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BC60: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102BC62: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102BC65: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102BC67: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102BC6A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BC6D: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102BC6F: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102BC72: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102BC75: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102BC78: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BC80; /* 0x1102BC7B: jne 0x1102bc80 */
L_1102BC7D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BC7D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BC80:
    PUSH32(esp, edi); /* 0x1102BC80: push edi */
    PUSH32(esp, eax); /* 0x1102BC81: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102BC82: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BC87: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102BC89: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102BC8C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BC8F: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BC93: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BC9C; /* 0x1102BC95: je 0x1102bc9c */
L_1102BC97:
    eax = MEM32(ecx); /* 0x1102BC97: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102BC99: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102BC9C:
    PUSH32(esp, 1); /* 0x1102BC9C: push 1 */
    ecx = esi; /* 0x1102BC9E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102BCA0: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x1102BCA3: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102BCA8: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BCAB: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102BCB2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BCDA; /* 0x1102BCB4: je 0x1102bcda */
L_1102BCB6:
    eax = MEM32(esi); /* 0x1102BCB6: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102BCB8: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102BCBC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BCBF: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B471); /* 0x1102BCC3: call 0x1102b471 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102BCC8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BCD3; /* 0x1102BCCB: jne 0x1102bcd3 */
L_1102BCCD:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102BCCD: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102BCD0: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BCD3:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BCD3: mov dword ptr [ebp - 4], 1 */
L_1102BCDA:
    eax = MEM32(esi); /* 0x1102BCDA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BCDC: push edi */
    PUSH32(esp, ebx); /* 0x1102BCDD: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BCDE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BCE1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BCE3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BCE8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BCEA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BCEE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BCF1: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BCF5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BCFE; /* 0x1102BCF7: je 0x1102bcfe */
L_1102BCF9:
    eax = MEM32(ecx); /* 0x1102BCF9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BCFB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BCFE:
    eax = esi; /* 0x1102BCFE: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BD00: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102BD05: ret  */
L_1102BD31:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BD31: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BD34: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BD36: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BD3D: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BCDA; /* 0x1102BD3F: jmp 0x1102bcda */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102BD31u: goto L_1102BD31;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102BD06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BD06u);

L_1102BD06:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102BD06: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BD09: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102BD0B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102BD0D: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102BD10: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102BD12: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BD15: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102BD18: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BD20; /* 0x1102BD1B: jne 0x1102bd20 */
L_1102BD1D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BD1D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BD20:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102BD20: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102BD23: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102BD26: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BD41; /* 0x1102BD29: jne 0x1102bd41 */
L_1102BD2B:
    eax = 0x1102BD31u; /* 0x1102BD2B: mov eax, 0x1102bd31 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BD30: ret  */
L_1102BD41:
    PUSH32(esp, edi); /* 0x1102BD41: push edi */
    PUSH32(esp, edi); /* 0x1102BD42: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102BD43: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102BD48u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BD31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BD31u);

    goto L_1102BD31;
L_1102BCDA:
    eax = MEM32(esi); /* 0x1102BCDA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BCDC: push edi */
    PUSH32(esp, ebx); /* 0x1102BCDD: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BCDE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BCE1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BCE3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BCE8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BCEA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BCEE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BCF1: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BCF5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BCFE; /* 0x1102BCF7: je 0x1102bcfe */
L_1102BCF9:
    eax = MEM32(ecx); /* 0x1102BCF9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BCFB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BCFE:
    eax = esi; /* 0x1102BCFE: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BD00: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BD05: ret  */
L_1102BD31:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BD31: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BD34: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BD36: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BD3D: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BCDA; /* 0x1102BD3F: jmp 0x1102bcda */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BD49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BD49u);
    RECOMP_EH_ENTER();

L_1102BD49:
    PUSH32(esp, 0x18u); /* 0x1102BD49: push 0x18 */
    eax = 0x1103ED50u; /* 0x1102BD4B: mov eax, 0x1103ed50 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102BD50: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BD55: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102BD57: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102BD5A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BD5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102BD5E: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102BD61: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102BD63: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102BD66: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BD69: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102BD6B: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102BD6E: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102BD71: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102BD74: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BD7C; /* 0x1102BD77: jne 0x1102bd7c */
L_1102BD79:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BD79: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BD7C:
    PUSH32(esp, edi); /* 0x1102BD7C: push edi */
    PUSH32(esp, eax); /* 0x1102BD7D: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102BD7E: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BD83: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102BD85: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102BD88: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BD8B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BD8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BD98; /* 0x1102BD91: je 0x1102bd98 */
L_1102BD93:
    eax = MEM32(ecx); /* 0x1102BD93: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102BD95: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102BD98:
    PUSH32(esp, 1); /* 0x1102BD98: push 1 */
    ecx = esi; /* 0x1102BD9A: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102BD9C: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x1102BD9F: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102BDA4: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BDA7: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102BDAE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BDDE; /* 0x1102BDB0: je 0x1102bdde */
L_1102BDB2:
    eax = MEM32(esi); /* 0x1102BDB2: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102BDB4: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102BDB8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BDBB: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B49A); /* 0x1102BDBF: call 0x1102b49a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102BDC4: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1102BDC7: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102BDCC: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BDD7; /* 0x1102BDCF: jne 0x1102bdd7 */
L_1102BDD1:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102BDD1: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102BDD4: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BDD7:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BDD7: mov dword ptr [ebp - 4], 1 */
L_1102BDDE:
    eax = MEM32(esi); /* 0x1102BDDE: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BDE0: push edi */
    PUSH32(esp, ebx); /* 0x1102BDE1: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BDE2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BDE5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BDE7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BDEC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BDEE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BDF2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BDF5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BDF9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BE02; /* 0x1102BDFB: je 0x1102be02 */
L_1102BDFD:
    eax = MEM32(ecx); /* 0x1102BDFD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BDFF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BE02:
    eax = esi; /* 0x1102BE02: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BE04: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102BE09: ret  */
L_1102BE35:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BE35: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BE38: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BE3A: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BE41: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BDDE; /* 0x1102BE43: jmp 0x1102bdde */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102BE35u: goto L_1102BE35;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102BE0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BE0Au);

L_1102BE0A:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102BE0A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BE0D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102BE0F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102BE11: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102BE14: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102BE16: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BE19: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102BE1C: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BE24; /* 0x1102BE1F: jne 0x1102be24 */
L_1102BE21:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BE21: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BE24:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102BE24: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102BE27: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102BE2A: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BE45; /* 0x1102BE2D: jne 0x1102be45 */
L_1102BE2F:
    eax = 0x1102BE35u; /* 0x1102BE2F: mov eax, 0x1102be35 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BE34: ret  */
L_1102BE45:
    PUSH32(esp, edi); /* 0x1102BE45: push edi */
    PUSH32(esp, edi); /* 0x1102BE46: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102BE47: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102BE4Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BE35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BE35u);

    goto L_1102BE35;
L_1102BDDE:
    eax = MEM32(esi); /* 0x1102BDDE: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BDE0: push edi */
    PUSH32(esp, ebx); /* 0x1102BDE1: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BDE2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BDE5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BDE7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BDEC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BDEE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BDF2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BDF5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BDF9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BE02; /* 0x1102BDFB: je 0x1102be02 */
L_1102BDFD:
    eax = MEM32(ecx); /* 0x1102BDFD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BDFF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BE02:
    eax = esi; /* 0x1102BE02: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BE04: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BE09: ret  */
L_1102BE35:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BE35: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BE38: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BE3A: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BE41: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BDDE; /* 0x1102BE43: jmp 0x1102bdde */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BE4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BE4Du);
    RECOMP_EH_ENTER();

L_1102BE4D:
    PUSH32(esp, 0x18u); /* 0x1102BE4D: push 0x18 */
    eax = 0x1103ED7Bu; /* 0x1102BE4F: mov eax, 0x1103ed7b */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102BE54: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BE59: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102BE5B: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102BE5E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BE60: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102BE62: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102BE65: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102BE67: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102BE6A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BE6D: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102BE6F: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102BE72: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102BE75: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102BE78: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BE80; /* 0x1102BE7B: jne 0x1102be80 */
L_1102BE7D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BE7D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BE80:
    PUSH32(esp, edi); /* 0x1102BE80: push edi */
    PUSH32(esp, eax); /* 0x1102BE81: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102BE82: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BE87: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102BE89: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102BE8C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BE8F: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BE93: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BE9C; /* 0x1102BE95: je 0x1102be9c */
L_1102BE97:
    eax = MEM32(ecx); /* 0x1102BE97: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102BE99: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102BE9C:
    PUSH32(esp, 1); /* 0x1102BE9C: push 1 */
    ecx = esi; /* 0x1102BE9E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102BEA0: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1102BEA3: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102BEA8: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BEAB: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102BEB2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BEE2; /* 0x1102BEB4: je 0x1102bee2 */
L_1102BEB6:
    eax = MEM32(esi); /* 0x1102BEB6: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102BEB8: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102BEBC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BEBF: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B49A); /* 0x1102BEC3: call 0x1102b49a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102BEC8: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1102BECB: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102BED0: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BEDB; /* 0x1102BED3: jne 0x1102bedb */
L_1102BED5:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102BED5: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102BED8: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BEDB:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BEDB: mov dword ptr [ebp - 4], 1 */
L_1102BEE2:
    eax = MEM32(esi); /* 0x1102BEE2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BEE4: push edi */
    PUSH32(esp, ebx); /* 0x1102BEE5: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BEE6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BEE9: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BEEB: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BEF0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BEF2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BEF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BEF9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BEFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BF06; /* 0x1102BEFF: je 0x1102bf06 */
L_1102BF01:
    eax = MEM32(ecx); /* 0x1102BF01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BF03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BF06:
    eax = esi; /* 0x1102BF06: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BF08: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102BF0D: ret  */
L_1102BF39:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BF39: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BF3C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BF3E: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BF45: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BEE2; /* 0x1102BF47: jmp 0x1102bee2 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102BF39u: goto L_1102BF39;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102BF0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BF0Eu);

L_1102BF0E:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102BF0E: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BF11: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102BF13: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102BF15: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102BF18: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102BF1A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BF1D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102BF20: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BF28; /* 0x1102BF23: jne 0x1102bf28 */
L_1102BF25:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102BF25: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102BF28:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102BF28: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102BF2B: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102BF2E: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BF49; /* 0x1102BF31: jne 0x1102bf49 */
L_1102BF33:
    eax = 0x1102BF39u; /* 0x1102BF33: mov eax, 0x1102bf39 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BF38: ret  */
L_1102BF49:
    PUSH32(esp, edi); /* 0x1102BF49: push edi */
    PUSH32(esp, edi); /* 0x1102BF4A: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102BF4B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102BF50u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BF39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BF39u);

    goto L_1102BF39;
L_1102BEE2:
    eax = MEM32(esi); /* 0x1102BEE2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102BEE4: push edi */
    PUSH32(esp, ebx); /* 0x1102BEE5: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102BEE6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102BEE9: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102BEEB: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BEF0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BEF2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102BEF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BEF9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BEFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BF06; /* 0x1102BEFF: je 0x1102bf06 */
L_1102BF01:
    eax = MEM32(ecx); /* 0x1102BF01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102BF03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102BF06:
    eax = esi; /* 0x1102BF06: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102BF08: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102BF0D: ret  */
L_1102BF39:
    esi = MEM32(ebp + (-0x14)); /* 0x1102BF39: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BF3C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102BF3E: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102BF45: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102BEE2; /* 0x1102BF47: jmp 0x1102bee2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102BF51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BF51u);

L_1102BF51:
    PUSH32(esp, 4); /* 0x1102BF51: push 4 */
    eax = 0x1103D313u; /* 0x1102BF53: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x1102BF58: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1102BF5D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102BF60: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102BF61: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102BF66: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102BF6A: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x1102BF6B: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BF70: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1102BF74: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102BF76: pop ecx */
    ecx = ebp + (-0x10); /* 0x1102BF77: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x1102BF7A: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1102BF7F: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1102BF81: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BF83: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x1102BF86: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1102BF89: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BF8E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BF91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BF91u);

L_1102BF91:
    PUSH32(esp, 4); /* 0x1102BF91: push 4 */
    eax = 0x1103D313u; /* 0x1102BF93: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x1102BF98: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1102BF9D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102BFA0: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102BFA1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102BFA6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102BFAA: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x1102BFAB: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BFB0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1102BFB4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102BFB6: pop ecx */
    ecx = ebp + (-0x10); /* 0x1102BFB7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x1102BFBA: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1102BFBF: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1102BFC1: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BFC3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x1102BFC6: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1102BFC9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BFCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BFD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BFD1u);
    RECOMP_EH_ENTER();

L_1102BFD1:
    PUSH32(esp, 0x14u); /* 0x1102BFD1: push 0x14 */
    eax = 0x1103ED9Eu; /* 0x1102BFD3: mov eax, 0x1103ed9e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102BFD8: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102BFDD: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1102BFDF: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102BFE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x1102BFE4: lea ecx, [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x1102BFE7: push edi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102BFE8: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1102BFEB: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1102BFF0: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x1C)), LO8(ebx) */ /* 0x1102BFF3: cmp byte ptr [ebp - 0x1c], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102BFFD; /* 0x1102BFF6: jne 0x1102bffd */
L_1102BFF8:
    PUSH32(esp, 4); /* 0x1102BFF8: push 4 */
    ebx = POP32_VAL(esp); /* 0x1102BFFA: pop ebx */
    goto L_1102C05B; /* 0x1102BFFB: jmp 0x1102c05b */
L_1102BFFD:
    eax = MEM32(edi); /* 0x1102BFFD: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102BFFF: push dword ptr [ebp + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1102C002: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102C006: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1102C009: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C00C: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + edi + 0x38); /* 0x1102C00F: mov ecx, dword ptr [eax + edi + 0x38] */
    eax = MEM32(ecx); /* 0x1102C013: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1102C015: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102C018: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C022; /* 0x1102C01B: jne 0x1102c022 */
L_1102C01D:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102C01D: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C057; /* 0x1102C020: je 0x1102c057 */
L_1102C022:
    PUSH32(esp, 4); /* 0x1102C022: push 4 */
    ebx = POP32_VAL(esp); /* 0x1102C024: pop ebx */
    goto L_1102C057; /* 0x1102C025: jmp 0x1102c057 */
L_1102C051:
    edi = MEM32(ebp + (-0x14)); /* 0x1102C051: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102C054: mov ebx, dword ptr [ebp - 0x18] */
L_1102C057:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102C057: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C05B:
    eax = MEM32(edi); /* 0x1102C05B: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x1102C05D: push 0 */
    PUSH32(esp, ebx); /* 0x1102C05F: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102C060: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1102C063: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102C065: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1102C06A: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x1102C06D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1102C072: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102C074: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102C079: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102C051u: goto L_1102C051;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102C027(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C027u);

L_1102C027:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102C027: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1102C02A: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102C02C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102C02F: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102C031: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102C034: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1102C037: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C040; /* 0x1102C03B: jne 0x1102c040 */
L_1102C03D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102C03D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C040:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102C040: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102C043: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102C046: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C07C; /* 0x1102C049: jne 0x1102c07c */
L_1102C04B:
    eax = 0x1102C051u; /* 0x1102C04B: mov eax, 0x1102c051 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C050: ret  */
L_1102C07C:
    PUSH32(esp, 0); /* 0x1102C07C: push 0 */
    PUSH32(esp, 0); /* 0x1102C07E: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1102C080: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102C085u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102C051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C051u);

L_1102C051:
    edi = MEM32(ebp + (-0x14)); /* 0x1102C051: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102C054: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102C057: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x1102C05B: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x1102C05D: push 0 */
    PUSH32(esp, ebx); /* 0x1102C05F: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102C060: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1102C063: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102C065: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1102C06A: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x1102C06D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1102C072: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102C074: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102C079: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102C086(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C086u);

L_1102C086:
    PUSH32(esp, ebp); /* 0x1102C086: push ebp */
    ebp = esp; /* 0x1102C087: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1102C089: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1102C08C: push ebx */
    PUSH32(esp, edi); /* 0x1102C08D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1102C08E: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102C091: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102C093: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1102C095: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1102C098: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1102C09B: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x1102C09E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C168; /* 0x1102C0A0: jl 0x1102c168 */
L_1102C0A6:
    PUSH32(esp, esi); /* 0x1102C0A6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102C0A7: mov esi, dword ptr [ebp + 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C0B4; /* 0x1102C0AA: jg 0x1102c0b4 */
L_1102C0AC:
    /* test esi, esi */ /* 0x1102C0AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C167; /* 0x1102C0AE: je 0x1102c167 */
L_1102C0B4:
    eax = MEM32(ecx + 0x1C); /* 0x1102C0B4: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax); /* 0x1102C0B7: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1102C0B9: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1102C0BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C0C7; /* 0x1102C0BE: je 0x1102c0c7 */
L_1102C0C0:
    eax = MEM32(ecx + 0x2C); /* 0x1102C0C0: mov eax, dword ptr [ecx + 0x2c] */
    eax = MEM32(eax); /* 0x1102C0C3: mov eax, dword ptr [eax] */
    goto L_1102C0C9; /* 0x1102C0C5: jmp 0x1102c0c9 */
L_1102C0C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C0C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C0C9:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1102C0C9: cdq  */
    ebx = eax; /* 0x1102C0CA: mov ebx, eax */
    eax = edx; /* 0x1102C0CC: mov eax, edx */
    MEM32(ebp + 0x10) = eax; /* 0x1102C0CE: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x1102C0D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C11B; /* 0x1102C0D3: jl 0x1102c11b */
L_1102C0D5:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C0DB; /* 0x1102C0D5: jg 0x1102c0db */
L_1102C0D7:
    /* test ebx, ebx */ /* 0x1102C0D7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C11B; /* 0x1102C0D9: je 0x1102c11b */
L_1102C0DB:
    /* cmp edi, eax */ /* 0x1102C0DB: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102C0EA; /* 0x1102C0DD: jg 0x1102c0ea */
L_1102C0DF:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102C0E5; /* 0x1102C0DF: jl 0x1102c0e5 */
L_1102C0E1:
    /* cmp esi, ebx */ /* 0x1102C0E1: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102C0EA; /* 0x1102C0E3: jae 0x1102c0ea */
L_1102C0E5:
    ebx = esi; /* 0x1102C0E5: mov ebx, esi */
    MEM32(ebp + 0x10) = edi; /* 0x1102C0E7: mov dword ptr [ebp + 0x10], edi */
L_1102C0EA:
    PUSH32(esp, ebx); /* 0x1102C0EA: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1102C0EB: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C0EE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102294B); /* 0x1102C0F1: call 0x1102294b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1102C0F6: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebx + ebx; /* 0x1102C0F9: lea ecx, [ebx + ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ecx; /* 0x1102C0FC: add dword ptr [ebp + 8], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C0FF: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + ebx; /* 0x1102C102: add dword ptr [ebp - 4], ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0xC)); /* 0x1102C105: mov edx, dword ptr [ebp - 0xc] */
    { uint32_t _aa = MEM32(ebp + (-0x8)), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C108: adc dword ptr [ebp - 8], eax */
      MEM32(ebp + (-0x8)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1102C10B: sub esi, ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C10D: sbb edi, eax */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(edx + 0x2C); /* 0x1102C10F: mov eax, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ebx; /* 0x1102C112: sub dword ptr [eax], ebx */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x1C); /* 0x1102C114: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x1102C117: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_1102C14C; /* 0x1102C119: jmp 0x1102c14c */
L_1102C11B:
    eax = MEM32(ecx); /* 0x1102C11B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1102C11D: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x1102C120: movzx ecx, ax */
    eax = 0xFFFFu; /* 0x1102C123: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1102C128: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C161; /* 0x1102C12B: je 0x1102c161 */
L_1102C12D:
    eax = MEM32(ebp + 0x8); /* 0x1102C12D: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1102C130: mov ebx, dword ptr [ebp - 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1102C133: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1102C136: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1102C139: add dword ptr [ebp - 4], 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1102C13D: mov dword ptr [ebp + 8], eax */
    { uint32_t _aa = ebx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C140: adc ebx, 0 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x1102C143: add esi, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1102C146: mov dword ptr [ebp - 8], ebx */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C149: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1102C14C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1102C14C: mov ecx, dword ptr [ebp - 0xc] */
    /* test edi, edi */ /* 0x1102C14F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C0B4; /* 0x1102C151: jg 0x1102c0b4 */
L_1102C157:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C161; /* 0x1102C157: jl 0x1102c161 */
L_1102C159:
    /* test esi, esi */ /* 0x1102C159: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C0B4; /* 0x1102C15B: jne 0x1102c0b4 */
L_1102C161:
    edx = MEM32(ebp + (-0x4)); /* 0x1102C161: mov edx, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1102C164: mov ebx, dword ptr [ebp - 8] */
L_1102C167:
    esi = POP32_VAL(esp); /* 0x1102C167: pop esi */
L_1102C168:
    eax = edx; /* 0x1102C168: mov eax, edx */
    edx = ebx; /* 0x1102C16A: mov edx, ebx */
    edi = POP32_VAL(esp); /* 0x1102C16C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1102C16D: pop ebx */
    esp = ebp; /* 0x1102C16E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102C170: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102C171: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102C174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C174u);

L_1102C174:
    PUSH32(esp, ebp); /* 0x1102C174: push ebp */
    ebp = esp; /* 0x1102C175: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1102C177: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1102C17A: push ebx */
    ebx = ecx; /* 0x1102C17B: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102C17D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1102C17F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1102C180: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102C183: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1102C185: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1102C188: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102C18B: mov dword ptr [ebp - 8], ecx */
    /* test edi, edi */ /* 0x1102C18E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C255; /* 0x1102C190: jl 0x1102c255 */
L_1102C196:
    PUSH32(esp, esi); /* 0x1102C196: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102C197: mov esi, dword ptr [ebp + 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C1A4; /* 0x1102C19A: jg 0x1102c1a4 */
L_1102C19C:
    /* test esi, esi */ /* 0x1102C19C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C254; /* 0x1102C19E: je 0x1102c254 */
L_1102C1A4:
    eax = MEM32(ebx + 0x20); /* 0x1102C1A4: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(eax); /* 0x1102C1A7: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x1102C1A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C1B4; /* 0x1102C1AB: je 0x1102c1b4 */
L_1102C1AD:
    eax = MEM32(ebx + 0x30); /* 0x1102C1AD: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x1102C1B0: mov eax, dword ptr [eax] */
    goto L_1102C1B6; /* 0x1102C1B2: jmp 0x1102c1b6 */
L_1102C1B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C1B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C1B6:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1102C1B6: cdq  */
    ebx = eax; /* 0x1102C1B7: mov ebx, eax */
    eax = edx; /* 0x1102C1B9: mov eax, edx */
    MEM32(ebp + 0x10) = eax; /* 0x1102C1BB: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x1102C1BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C20A; /* 0x1102C1C0: jl 0x1102c20a */
L_1102C1C2:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C1C8; /* 0x1102C1C2: jg 0x1102c1c8 */
L_1102C1C4:
    /* test ebx, ebx */ /* 0x1102C1C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C20A; /* 0x1102C1C6: je 0x1102c20a */
L_1102C1C8:
    /* cmp edi, eax */ /* 0x1102C1C8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102C1D7; /* 0x1102C1CA: jg 0x1102c1d7 */
L_1102C1CC:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102C1D2; /* 0x1102C1CC: jl 0x1102c1d2 */
L_1102C1CE:
    /* cmp esi, ebx */ /* 0x1102C1CE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102C1D7; /* 0x1102C1D0: jae 0x1102c1d7 */
L_1102C1D2:
    ebx = esi; /* 0x1102C1D2: mov ebx, esi */
    MEM32(ebp + 0x10) = edi; /* 0x1102C1D4: mov dword ptr [ebp + 0x10], edi */
L_1102C1D7:
    eax = MEM32(ebp + 0x8); /* 0x1102C1D7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1102C1DA: push ebx */
    PUSH32(esp, eax); /* 0x1102C1DB: push eax */
    PUSH32(esp, ecx); /* 0x1102C1DC: push ecx */
    RECOMP_CALL(sub_1102294B); /* 0x1102C1DD: call 0x1102294b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1102C1E2: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebx + ebx; /* 0x1102C1E5: lea ecx, [ebx + ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ecx; /* 0x1102C1E8: add dword ptr [ebp + 8], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C1EB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + ebx; /* 0x1102C1EE: add dword ptr [ebp - 4], ebx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ebp + (-0x8)), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C1F1: adc dword ptr [ebp - 8], eax */
      MEM32(ebp + (-0x8)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1102C1F4: sub esi, ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C1F6: sbb edi, eax */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(ebp + (-0xC)); /* 0x1102C1F8: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax + 0x30); /* 0x1102C1FB: mov eax, dword ptr [eax + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ebx; /* 0x1102C1FE: sub dword ptr [eax], ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x1102C200: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebx + 0x20); /* 0x1102C203: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x1102C206: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_1102C23C; /* 0x1102C208: jmp 0x1102c23c */
L_1102C20A:
    ebx = MEM32(ebp + (-0xC)); /* 0x1102C20A: mov ebx, dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x1102C20D: mov ecx, ebx */
    eax = MEM32(ebp + 0x8); /* 0x1102C20F: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebx); /* 0x1102C212: mov edx, dword ptr [ebx] */
    eax = (uint32_t)MEM16(eax); /* 0x1102C214: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x1102C217: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1102C218: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = 0xFFFFu; /* 0x1102C21B: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102C220: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C24E; /* 0x1102C223: je 0x1102c24e */
L_1102C225:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 2; /* 0x1102C225: add dword ptr [ebp + 8], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1102C229: add dword ptr [ebp - 4], 1 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x1102C22D: mov ecx, dword ptr [ebp - 8] */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C230: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x1102C233: add esi, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102C236: mov dword ptr [ebp - 8], ecx */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C239: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1102C23C:
    /* test edi, edi */ /* 0x1102C23C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102C1A4; /* 0x1102C23E: jg 0x1102c1a4 */
L_1102C244:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C24E; /* 0x1102C244: jl 0x1102c24e */
L_1102C246:
    /* test esi, esi */ /* 0x1102C246: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C1A4; /* 0x1102C248: jne 0x1102c1a4 */
L_1102C24E:
    edx = MEM32(ebp + (-0x4)); /* 0x1102C24E: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102C251: mov ecx, dword ptr [ebp - 8] */
L_1102C254:
    esi = POP32_VAL(esp); /* 0x1102C254: pop esi */
L_1102C255:
    edi = POP32_VAL(esp); /* 0x1102C255: pop edi */
    eax = edx; /* 0x1102C256: mov eax, edx */
    edx = ecx; /* 0x1102C258: mov edx, ecx */
    ebx = POP32_VAL(esp); /* 0x1102C25A: pop ebx */
    esp = ebp; /* 0x1102C25B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102C25D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102C25E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102C261(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C261u);

L_1102C261:
    PUSH32(esp, ebp); /* 0x1102C261: push ebp */
    ebp = esp; /* 0x1102C262: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102C264: push dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1102C267: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1102C26A: push ecx */
    PUSH32(esp, ecx); /* 0x1102C26B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1102C26C: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x1102C26F: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1102C275: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1102C278: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C27B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102C27E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C27F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C280u);

L_1102C280:
    PUSH32(esp, ebp); /* 0x1102C280: push ebp */
    ebp = esp; /* 0x1102C281: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1102C283: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1102C286: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C2A5; /* 0x1102C288: je 0x1102c2a5 */
L_1102C28A:
    eax = MEM32(ebp + 0xC); /* 0x1102C28A: mov eax, dword ptr [ebp + 0xc] */
    edx = (uint32_t)LO16(eax); /* 0x1102C28D: movzx edx, ax */
    eax = edx; /* 0x1102C290: mov eax, edx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1102C292: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1102C292: shl edx, 0x10 */
    PUSH32(esp, edi); /* 0x1102C295: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102C296: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1102C299: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1102C29B: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1102C29B: shr ecx, 1 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1102C29D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { uint32_t _aa = ecx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102C29F: adc ecx, ecx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _n = ecx, _b = _n * 2u; /* 0x1102C2A1: rep stosw word ptr es:[edi], ax */ if (_df > 0) { MEMSET16((void*)ADDR(edi), (uint16_t)LO16(eax), _n); edi += _b; } else { MEMSET16((void*)ADDR(edi - _b + 2u), (uint16_t)LO16(eax), _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x1102C2A4: pop edi */
L_1102C2A5:
    eax = MEM32(ebp + 0x8); /* 0x1102C2A5: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102C2A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C2A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C2AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C2AAu);

L_1102C2AA:
    PUSH32(esp, ebp); /* 0x1102C2AA: push ebp */
    ebp = esp; /* 0x1102C2AB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102C2AD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102C2B0: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1102C2BEu; /* 0x1102C2B3: mov dword ptr [eax], 0x1102c2be */
    MEM32(eax + 0x4) = ecx; /* 0x1102C2B9: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C2BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C2BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C2BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C2BEu);

L_1102C2BE:
    PUSH32(esp, ebp); /* 0x1102C2BE: push ebp */
    ebp = esp; /* 0x1102C2BF: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102C2C1: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1102C2C4: mov eax, dword ptr [ebp + 0xc] */
    eax = ~eax; /* 0x1102C2C7: not eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(eax);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & eax; /* 0x1102C2C9: and dword ptr [ecx + 0x14], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102C2CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C2CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C2CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C2CEu);

L_1102C2CE:
    PUSH32(esp, ebp); /* 0x1102C2CE: push ebp */
    ebp = esp; /* 0x1102C2CF: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 8 */ /* 0x1102C2D1: cmp dword ptr [ebp + 0xc], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C2DE; /* 0x1102C2D5: jne 0x1102c2de */
L_1102C2D7:
    edx = 0x400u; /* 0x1102C2D7: mov edx, 0x400 */
    goto L_1102C2FA; /* 0x1102C2DC: jmp 0x1102c2fa */
L_1102C2DE:
    /* cmp MEM32(ebp + 0xC), 0xAu */ /* 0x1102C2DE: cmp dword ptr [ebp + 0xc], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C2EB; /* 0x1102C2E2: jne 0x1102c2eb */
L_1102C2E4:
    edx = 0x200u; /* 0x1102C2E4: mov edx, 0x200 */
    goto L_1102C2FA; /* 0x1102C2E9: jmp 0x1102c2fa */
L_1102C2EB:
    /* cmp MEM32(ebp + 0xC), 0x10u */ /* 0x1102C2EB: cmp dword ptr [ebp + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C2F8; /* 0x1102C2EF: jne 0x1102c2f8 */
L_1102C2F1:
    edx = 0x800u; /* 0x1102C2F1: mov edx, 0x800 */
    goto L_1102C2FA; /* 0x1102C2F6: jmp 0x1102c2fa */
L_1102C2F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102C2F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C2FA:
    ecx = MEM32(ebp + 0x8); /* 0x1102C2FA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x14); /* 0x1102C2FD: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1102C300: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE00u);
    eax = eax & 0xE00u; /* 0x1102C302: and eax, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x14) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x14) ^ eax));
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) ^ eax; /* 0x1102C307: xor dword ptr [ecx + 0x14], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102C30A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C30B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C30C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C30Cu);

L_1102C30C:
    PUSH32(esp, ebp); /* 0x1102C30C: push ebp */
    ebp = esp; /* 0x1102C30D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102C30F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102C312: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1102C2CEu; /* 0x1102C315: mov dword ptr [eax], 0x1102c2ce */
    MEM32(eax + 0x4) = ecx; /* 0x1102C31B: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C31E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C31F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C320u);

L_1102C320:
    PUSH32(esp, ebp); /* 0x1102C320: push ebp */
    ebp = esp; /* 0x1102C321: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102C323: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102C326: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1102C368u; /* 0x1102C329: mov dword ptr [eax], 0x1102c368 */
    MEM32(eax + 0x4) = ecx; /* 0x1102C32F: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C332: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C333: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C334(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C334u);

L_1102C334:
    PUSH32(esp, ebp); /* 0x1102C334: push ebp */
    ebp = esp; /* 0x1102C335: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102C337: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102C33A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x1102C33D: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102C340: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0x1102C382u; /* 0x1102C343: mov dword ptr [eax], 0x1102c382 */
    MEM32(eax + 0xC) = ecx; /* 0x1102C349: mov dword ptr [eax + 0xc], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C34C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C34D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C34E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C34Eu);

L_1102C34E:
    PUSH32(esp, ebp); /* 0x1102C34E: push ebp */
    ebp = esp; /* 0x1102C34F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102C351: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102C354: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x1102C357: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102C35A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0x1102C396u; /* 0x1102C35D: mov dword ptr [eax], 0x1102c396 */
    MEM32(eax + 0xC) = ecx; /* 0x1102C363: mov dword ptr [eax + 0xc], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C366: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C367: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C368(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C368u);

L_1102C368:
    PUSH32(esp, ebp); /* 0x1102C368: push ebp */
    ebp = esp; /* 0x1102C369: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1102C36B: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1102C36E: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1102C371: mov ecx, eax */
    ecx = ~ecx; /* 0x1102C373: not ecx */
    eax = (uint32_t)LO16(eax); /* 0x1102C375: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    ecx = ecx & MEM32(edx + 0x14); /* 0x1102C378: and ecx, dword ptr [edx + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1102C37B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x14) = ecx; /* 0x1102C37D: mov dword ptr [edx + 0x14], ecx */
    ebp = POP32_VAL(esp); /* 0x1102C380: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C381: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C382(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C382u);

L_1102C382:
    PUSH32(esp, ebp); /* 0x1102C382: push ebp */
    ebp = esp; /* 0x1102C383: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102C385: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1102C388: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x18) = eax; /* 0x1102C38B: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102C38E: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x1C) = eax; /* 0x1102C391: mov dword ptr [ecx + 0x1c], eax */
    ebp = POP32_VAL(esp); /* 0x1102C394: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C395: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C396(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C396u);

L_1102C396:
    PUSH32(esp, ebp); /* 0x1102C396: push ebp */
    ebp = esp; /* 0x1102C397: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102C399: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1102C39C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x20) = eax; /* 0x1102C39F: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102C3A2: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x24) = eax; /* 0x1102C3A5: mov dword ptr [ecx + 0x24], eax */
    ebp = POP32_VAL(esp); /* 0x1102C3A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C3A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C3D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C3D3u);

L_1102C3D3:
    PUSH32(esp, ebp); /* 0x1102C3D3: push ebp */
    ebp = esp; /* 0x1102C3D4: mov ebp, esp */
    eax = MEM32(0x11063064); /* 0x1102C3D6: mov eax, dword ptr [0x11063064] */
    /* test eax, eax */ /* 0x1102C3DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C3E5; /* 0x1102C3DD: jne 0x1102c3e5 */
L_1102C3DF:
    { _itail_tgt = (uint32_t)(MEM32(0x11069320)); goto _ljump; }
L_1102C3E5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C3E5: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102C3E8: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x11063064) = eax; /* 0x1102C3E9: mov dword ptr [0x11063064], eax */
    RECOMP_ICALL(MEM32(0x1106906C)); /* 0x1102C3EE: call dword ptr [0x1106906c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x11063064); /* 0x1102C3F4: mov ecx, dword ptr [0x11063064] */
    MEM32(ecx * 4 + 0x110662B4) = eax; /* 0x1102C3FA: mov dword ptr [ecx*4 + 0x110662b4], eax */
    ebp = POP32_VAL(esp); /* 0x1102C401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C402: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102C403(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C403u);

L_1102C403:
    eax = 0x11063068u; /* 0x1102C403: mov eax, 0x11063068 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C408: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C409(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C409u);

L_1102C409:
    eax = MEM32(0x11063068); /* 0x1102C409: mov eax, dword ptr [0x11063068] */
    /* test eax, eax */ /* 0x1102C40E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102C419; /* 0x1102C410: js 0x1102c419 */
L_1102C412:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102C412: inc eax */
    _flag_k = FK_INC;
    MEM32(0x11063068) = eax; /* 0x1102C413: mov dword ptr [0x11063068], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C418: ret  */
L_1102C419:
    MEM32(0x11063068) = 1; /* 0x1102C419: mov dword ptr [0x11063068], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C423: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C424(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C424u);

    goto L_1102C424;
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
L_1102C424:
    _flag_a = (uint32_t)(MEM32(0x11063068)); _flag_b = (uint32_t)(1);
    MEM32(0x11063068) = MEM32(0x11063068) - 1; /* 0x1102C424: dec dword ptr [0x11063068] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102C458; /* 0x1102C42A: jne 0x1102c458 */
L_1102C42C:
    ecx = MEM32(0x1106629C); /* 0x1102C42C: mov ecx, dword ptr [0x1106629c] */
    /* test ecx, ecx */ /* 0x1102C432: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C43B; /* 0x1102C434: je 0x1102c43b */
L_1102C436:
    RECOMP_CALL(sub_11010C82); /* 0x1102C436: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102C43B:
    ecx = MEM32(0x110662A0); /* 0x1102C43B: mov ecx, dword ptr [0x110662a0] */
    /* test ecx, ecx */ /* 0x1102C441: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C44A; /* 0x1102C443: je 0x1102c44a */
L_1102C445:
    RECOMP_CALL(sub_11010C82); /* 0x1102C445: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102C44A:
    ecx = MEM32(0x11066298); /* 0x1102C44A: mov ecx, dword ptr [0x11066298] */
    /* test ecx, ecx */ /* 0x1102C450: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010C82; /* 0x1102C452: jne 0x11010c82 */
L_1102C458:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C458: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C459(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C459u);

L_1102C459:
    PUSH32(esp, 4); /* 0x1102C459: push 4 */
    eax = 0x1103EFACu; /* 0x1102C45B: mov eax, 0x1103efac */
    RECOMP_CALL(sub_1103B372); /* 0x1102C460: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102C465: push 0 */
    ecx = ebp + (-0x10); /* 0x1102C467: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102C46A: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1102C46F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102C472: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x10); /* 0x1102C476: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x1102C479: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102C4BA; /* 0x1102C47C: ja 0x1102c4ba */
L_1102C47E:
    edi = ebx + 0x1; /* 0x1102C47E: lea edi, [ebx + 1] */
    /* cmp edi, 0x28u */ /* 0x1102C481: cmp edi, 0x28 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102C489; /* 0x1102C484: jae 0x1102c489 */
L_1102C486:
    PUSH32(esp, 0x28u); /* 0x1102C486: push 0x28 */
    edi = POP32_VAL(esp); /* 0x1102C488: pop edi */
L_1102C489:
    eax = edi; /* 0x1102C489: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1102C48B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1102C48B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1102C48E: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1102C48F: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x11069128)); /* 0x1102C492: call dword ptr [0x11069128] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C498: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C499: pop ecx */
    /* test eax, eax */ /* 0x1102C49A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C4A3; /* 0x1102C49C: jne 0x1102c4a3 */
L_1102C49E:
    RECOMP_CALL(sub_1101163C); /* 0x1102C49E: call 0x1101163c */
    RECOMP_FLAGS_IN();
L_1102C4A3:
    MEM32(esi + 0x8) = eax; /* 0x1102C4A3: mov dword ptr [esi + 8], eax */
    goto L_1102C4B5; /* 0x1102C4A6: jmp 0x1102c4b5 */
L_1102C4A8:
    ecx = MEM32(esi + 0xC); /* 0x1102C4A8: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x1102C4AB: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x1102C4AE: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x1102C4B2: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
L_1102C4B5:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x1102C4B5: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1102C4A8; /* 0x1102C4B8: jb 0x1102c4a8 */
L_1102C4BA:
    edi = MEM32(ebp + 0xC); /* 0x1102C4BA: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x1102C4BD: mov ecx, edi */
    eax = MEM32(edi); /* 0x1102C4BF: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102C4C1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x1102C4C4: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax + ebx * 4); /* 0x1102C4C7: mov ecx, dword ptr [eax + ebx*4] */
    /* test ecx, ecx */ /* 0x1102C4CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C4DF; /* 0x1102C4CC: je 0x1102c4df */
L_1102C4CE:
    eax = MEM32(ecx); /* 0x1102C4CE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102C4D0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102C4D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C4DF; /* 0x1102C4D5: je 0x1102c4df */
L_1102C4D7:
    edx = MEM32(eax); /* 0x1102C4D7: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1102C4D9: mov ecx, eax */
    PUSH32(esp, 1); /* 0x1102C4DB: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x1102C4DD: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_1102C4DF:
    eax = MEM32(esi + 0x8); /* 0x1102C4DF: mov eax, dword ptr [esi + 8] */
    ecx = ebp + (-0x10); /* 0x1102C4E2: lea ecx, [ebp - 0x10] */
    MEM32(eax + ebx * 4) = edi; /* 0x1102C4E5: mov dword ptr [eax + ebx*4], edi */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102C4E8: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1102C4ED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C4F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C4F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C4F3u);

L_1102C4F3:
    PUSH32(esp, 0x34u); /* 0x1102C4F3: push 0x34 */
    eax = 0x1103EDC9u; /* 0x1102C4F5: mov eax, 0x1103edc9 */
    RECOMP_CALL(sub_1103B372); /* 0x1102C4FA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1102C4FF: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, MEM32(0x11068A70) */ /* 0x1102C502: cmp ebx, dword ptr [0x11068a70] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x11068A70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C538; /* 0x1102C508: jne 0x1102c538 */
L_1102C50A:
    PUSH32(esp, 0x110048B0u); /* 0x1102C50A: push 0x110048b0 */
    ecx = ebp + (-0x40); /* 0x1102C50F: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1102C512: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102C517: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x40); /* 0x1102C51B: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x1102C51E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C520: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x3Fu); /* 0x1102C523: push 0x3f */
    PUSH32(esp, eax); /* 0x1102C525: push eax */
    RECOMP_CALL(sub_1102C66C); /* 0x1102C526: call 0x1102c66c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C52B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x40); /* 0x1102C52E: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1102C531: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    goto L_1102C591; /* 0x1102C536: jmp 0x1102c591 */
L_1102C538:
    PUSH32(esp, 0); /* 0x1102C538: push 0 */
    ecx = ebp + 0xC; /* 0x1102C53A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102C53D: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1102C542: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102C545: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi + 0xC); /* 0x1102C54C: mov eax, dword ptr [edi + 0xc] */
    /* test eax, eax */ /* 0x1102C54F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C589; /* 0x1102C551: je 0x1102c589 */
L_1102C553:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1102C553: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1102C553: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1102C556: push eax */
    RECOMP_ICALL(MEM32(0x11069124)); /* 0x1102C557: call dword ptr [0x11069124] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x1102C55D: mov dword ptr [edi + 8], eax */
    ecx = POP32_VAL(esp); /* 0x1102C560: pop ecx */
    /* test eax, eax */ /* 0x1102C561: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C56A; /* 0x1102C563: jne 0x1102c56a */
L_1102C565:
    RECOMP_CALL(sub_1101163C); /* 0x1102C565: call 0x1101163c */
    RECOMP_FLAGS_IN();
L_1102C56A:
    esi = MEM32(edi + 0xC); /* 0x1102C56A: mov esi, dword ptr [edi + 0xc] */
    goto L_1102C585; /* 0x1102C56D: jmp 0x1102c585 */
L_1102C56F:
    eax = MEM32(ebx + 0x8); /* 0x1102C56F: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1102C572: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + esi * 4); /* 0x1102C573: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(edi + 0x8); /* 0x1102C576: mov eax, dword ptr [edi + 8] */
    MEM32(eax + esi * 4) = ecx; /* 0x1102C579: mov dword ptr [eax + esi*4], ecx */
    /* test ecx, ecx */ /* 0x1102C57C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C585; /* 0x1102C57E: je 0x1102c585 */
L_1102C580:
    eax = MEM32(ecx); /* 0x1102C580: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102C582: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102C585:
    /* test esi, esi */ /* 0x1102C585: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C56F; /* 0x1102C587: jne 0x1102c56f */
L_1102C589:
    ecx = ebp + 0xC; /* 0x1102C589: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102C58C: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
L_1102C591:
    RECOMP_CALL(sub_1103B340); /* 0x1102C591: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C596: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C597(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C597u);

L_1102C597:
    PUSH32(esp, ebp); /* 0x1102C597: push ebp */
    ebp = esp; /* 0x1102C598: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1102C59A: push ebx */
    PUSH32(esp, esi); /* 0x1102C59B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1102C59C: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1102C59F: push edi */
    /* test esi, esi */ /* 0x1102C5A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C62A; /* 0x1102C5A2: je 0x1102c62a */
L_1102C5A8:
    /* cmp MEM8(esi), 0x2Au */ /* 0x1102C5A8: cmp byte ptr [esi], 0x2a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C5B3; /* 0x1102C5AB: jne 0x1102c5b3 */
L_1102C5AD:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x1102C5AD: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C5F2; /* 0x1102C5B1: je 0x1102c5f2 */
L_1102C5B3:
    ebx = MEM32(ebp + 0xC); /* 0x1102C5B3: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1102C5B6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C5BD; /* 0x1102C5B8: jne 0x1102c5bd */
L_1102C5BA:
    PUSH32(esp, ebx); /* 0x1102C5BA: push ebx */
    goto L_1102C5E2; /* 0x1102C5BB: jmp 0x1102c5e2 */
L_1102C5BD:
    /* cmp ebx, 0x3Fu */ /* 0x1102C5BD: cmp ebx, 0x3f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C5E1; /* 0x1102C5C0: je 0x1102c5e1 */
L_1102C5C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102C5C2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C5C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C5C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1102C5C6: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102C5C8: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102C5C9: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1102C5C9: shl eax, cl */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1102C5CB: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* test ebx, eax */ /* 0x1102C5CD: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C5DB; /* 0x1102C5CF: je 0x1102c5db */
L_1102C5D1:
    PUSH32(esp, esi); /* 0x1102C5D1: push esi */
    PUSH32(esp, edi); /* 0x1102C5D2: push edi */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1102C5D3: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C5D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C5DA: pop ecx */
L_1102C5DB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102C5DB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 5 */ /* 0x1102C5DC: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102C5C4; /* 0x1102C5DF: jle 0x1102c5c4 */
L_1102C5E1:
    PUSH32(esp, esi); /* 0x1102C5E1: push esi */
L_1102C5E2:
    PUSH32(esp, 0); /* 0x1102C5E2: push 0 */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1102C5E4: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C5EA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102C5EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C5ED: pop ecx */
    /* test esi, esi */ /* 0x1102C5EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C5FC; /* 0x1102C5F0: jne 0x1102c5fc */
L_1102C5F2:
    edi = MEM32(ebp + 0x8); /* 0x1102C5F2: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x110048B4u); /* 0x1102C5F5: push 0x110048b4 */
    goto L_1102C61B; /* 0x1102C5FA: jmp 0x1102c61b */
L_1102C5FC:
    edi = MEM32(ebp + 0x8); /* 0x1102C5FC: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x2C); /* 0x1102C5FF: mov eax, dword ptr [edi + 0x2c] */
    /* test eax, eax */ /* 0x1102C602: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C609; /* 0x1102C604: jne 0x1102c609 */
L_1102C606:
    eax = edi + 0x30; /* 0x1102C606: lea eax, [edi + 0x30] */
L_1102C609:
    PUSH32(esp, 0x110048B4u); /* 0x1102C609: push 0x110048b4 */
    PUSH32(esp, eax); /* 0x1102C60E: push eax */
    RECOMP_CALL(sub_1103B4A0); /* 0x1102C60F: call 0x1103b4a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C614: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C615: pop ecx */
    /* test eax, eax */ /* 0x1102C616: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C623; /* 0x1102C618: je 0x1102c623 */
L_1102C61A:
    PUSH32(esp, esi); /* 0x1102C61A: push esi */
L_1102C61B:
    ecx = edi + 0x2C; /* 0x1102C61B: lea ecx, [edi + 0x2c] */
    RECOMP_CALL(sub_11010213); /* 0x1102C61E: call 0x11010213 */
    RECOMP_FLAGS_IN();
L_1102C623:
    eax = edi; /* 0x1102C623: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102C625: pop edi */
    esi = POP32_VAL(esp); /* 0x1102C626: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102C627: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102C628: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C629: ret  */
L_1102C62A:
    PUSH32(esp, 0x110045F0u); /* 0x1102C62A: push 0x110045f0 */
    RECOMP_CALL(sub_11013A8A); /* 0x1102C62F: call 0x11013a8a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102C634u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102C635(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C635u);

L_1102C635:
    PUSH32(esp, ebp); /* 0x1102C635: push ebp */
    ebp = esp; /* 0x1102C636: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1102C638: push 0 */
    PUSH32(esp, 0); /* 0x1102C63A: push 0 */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1102C63C: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C642: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C643: pop ecx */
    /* test eax, eax */ /* 0x1102C644: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C64D; /* 0x1102C646: jne 0x1102c64d */
L_1102C648:
    eax = 0x110048B6u; /* 0x1102C648: mov eax, 0x110048b6 */
L_1102C64D:
    PUSH32(esp, esi); /* 0x1102C64D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102C64E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102C651: push eax */
    ecx = esi + 0x24; /* 0x1102C652: lea ecx, [esi + 0x24] */
    RECOMP_CALL(sub_11010213); /* 0x1102C655: call 0x11010213 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102C65A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102C65D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102C660: push esi */
    RECOMP_CALL(sub_1102C597); /* 0x1102C661: call 0x1102c597 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C666: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1102C669: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102C66A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C66B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C66C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C66Cu);

L_1102C66C:
    PUSH32(esp, 4); /* 0x1102C66C: push 4 */
    eax = 0x1103EDF6u; /* 0x1102C66E: mov eax, 0x1103edf6 */
    RECOMP_CALL(sub_1103B372); /* 0x1102C673: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1102C678: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1102C67C: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x14); /* 0x1102C67F: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1102C682: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x10); /* 0x1102C685: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1102C688: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C6E2; /* 0x1102C68B: je 0x1102c6e2 */
L_1102C68D:
    /* test ebx, ebx */ /* 0x1102C68D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C6C5; /* 0x1102C68F: jne 0x1102c6c5 */
L_1102C691:
    PUSH32(esp, 0x18u); /* 0x1102C691: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1102C693: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C698: pop ecx */
    /* test eax, eax */ /* 0x1102C699: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C6AC; /* 0x1102C69B: je 0x1102c6ac */
L_1102C69D:
    PUSH32(esp, ebx); /* 0x1102C69D: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C69E: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1102C6A1: mov ecx, eax */
    RECOMP_CALL(sub_1100EC4C); /* 0x1102C6A3: call 0x1100ec4c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C6A8: mov esi, eax */
    goto L_1102C6AE; /* 0x1102C6AA: jmp 0x1102c6ae */
L_1102C6AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C6AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C6AE:
    ecx = 0x11068A7Cu; /* 0x1102C6AE: mov ecx, 0x11068a7c */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C6B3: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102C6B8: push eax */
    PUSH32(esp, esi); /* 0x1102C6B9: push esi */
    PUSH32(esp, edi); /* 0x1102C6BA: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C6BB: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C6C0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102C6E2; /* 0x1102C6C3: jmp 0x1102c6e2 */
L_1102C6C5:
    ecx = 0x11068A7Cu; /* 0x1102C6C5: mov ecx, 0x11068a7c */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C6CA: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C6CF: push ebx */
    esi = eax; /* 0x1102C6D0: mov esi, eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1102C6D2: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102C6D7: push esi */
    PUSH32(esp, eax); /* 0x1102C6D8: push eax */
    PUSH32(esp, edi); /* 0x1102C6D9: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C6DA: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C6DF: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102C6E2:
    eax = MEM32(ebp + 0xC); /* 0x1102C6E2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1102C6E5: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x1102C6E8: mov dword ptr [ebp + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C743; /* 0x1102C6EB: je 0x1102c743 */
L_1102C6ED:
    /* test ebx, ebx */ /* 0x1102C6ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C723; /* 0x1102C6EF: jne 0x1102c723 */
L_1102C6F1:
    PUSH32(esp, 8); /* 0x1102C6F1: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1102C6F3: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C6F8: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102C6FA: pop ecx */
    /* test esi, esi */ /* 0x1102C6FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C70A; /* 0x1102C6FD: je 0x1102c70a */
L_1102C6FF:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & ebx; /* 0x1102C6FF: and dword ptr [esi + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11001FA4u; /* 0x1102C702: mov dword ptr [esi], 0x11001fa4 */
    goto L_1102C70C; /* 0x1102C708: jmp 0x1102c70c */
L_1102C70A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C70A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C70C:
    ecx = 0x110661F0u; /* 0x1102C70C: mov ecx, 0x110661f0 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C711: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102C716: push eax */
    PUSH32(esp, esi); /* 0x1102C717: push esi */
    PUSH32(esp, edi); /* 0x1102C718: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C719: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C71E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102C740; /* 0x1102C721: jmp 0x1102c740 */
L_1102C723:
    ecx = 0x110661F0u; /* 0x1102C723: mov ecx, 0x110661f0 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C728: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C72D: push ebx */
    esi = eax; /* 0x1102C72E: mov esi, eax */
    RECOMP_CALL(sub_110157D5); /* 0x1102C730: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102C735: push esi */
    PUSH32(esp, eax); /* 0x1102C736: push eax */
    PUSH32(esp, edi); /* 0x1102C737: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C738: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C73D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102C740:
    eax = MEM32(ebp + 0x10); /* 0x1102C740: mov eax, dword ptr [ebp + 0x10] */
L_1102C743:
    /* test eax, eax */ /* 0x1102C743: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C815; /* 0x1102C745: je 0x1102c815 */
L_1102C74B:
    /* test ebx, ebx */ /* 0x1102C74B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C781; /* 0x1102C74D: jne 0x1102c781 */
L_1102C74F:
    PUSH32(esp, 8); /* 0x1102C74F: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1102C751: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C756: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102C758: pop ecx */
    /* test esi, esi */ /* 0x1102C759: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C768; /* 0x1102C75B: je 0x1102c768 */
L_1102C75D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & ebx; /* 0x1102C75D: and dword ptr [esi + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11001FE0u; /* 0x1102C760: mov dword ptr [esi], 0x11001fe0 */
    goto L_1102C76A; /* 0x1102C766: jmp 0x1102c76a */
L_1102C768:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C768: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C76A:
    ecx = 0x110661F4u; /* 0x1102C76A: mov ecx, 0x110661f4 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C76F: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102C774: push eax */
    PUSH32(esp, esi); /* 0x1102C775: push esi */
    PUSH32(esp, edi); /* 0x1102C776: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C777: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C77C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102C79E; /* 0x1102C77F: jmp 0x1102c79e */
L_1102C781:
    ecx = 0x110661F4u; /* 0x1102C781: mov ecx, 0x110661f4 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C786: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C78B: push ebx */
    esi = eax; /* 0x1102C78C: mov esi, eax */
    RECOMP_CALL(sub_110159A3); /* 0x1102C78E: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102C793: push esi */
    PUSH32(esp, eax); /* 0x1102C794: push eax */
    PUSH32(esp, edi); /* 0x1102C795: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C796: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C79B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102C79E:
    eax = MEM32(ebp + 0x10); /* 0x1102C79E: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1102C7A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C815; /* 0x1102C7A3: je 0x1102c815 */
L_1102C7A5:
    /* test ebx, ebx */ /* 0x1102C7A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C7F8; /* 0x1102C7A7: jne 0x1102c7f8 */
L_1102C7A9:
    PUSH32(esp, 0x18u); /* 0x1102C7A9: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1102C7AB: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C7B0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102C7B2: pop ecx */
    MEM32(ebp + 0x10) = esi; /* 0x1102C7B3: mov dword ptr [ebp + 0x10], esi */
    MEM32(ebp + (-0x4)) = 7; /* 0x1102C7B6: mov dword ptr [ebp - 4], 7 */
    /* test esi, esi */ /* 0x1102C7BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C7DB; /* 0x1102C7BF: je 0x1102c7db */
L_1102C7C1:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & ebx; /* 0x1102C7C1: and dword ptr [esi + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1102C7C4: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102C7C5: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1102C7C8: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x1102C7CA: mov byte ptr [ebp - 4], 8 */
    MEM32(esi) = 0x11001F80u; /* 0x1102C7CE: mov dword ptr [esi], 0x11001f80 */
    RECOMP_CALL(sub_110218A3); /* 0x1102C7D4: call 0x110218a3 */
    RECOMP_FLAGS_IN();
    goto L_1102C7DD; /* 0x1102C7D9: jmp 0x1102c7dd */
L_1102C7DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C7DB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C7DD:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102C7DD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11065F10u; /* 0x1102C7E1: mov ecx, 0x11065f10 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C7E6: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102C7EB: push eax */
    PUSH32(esp, esi); /* 0x1102C7EC: push esi */
    PUSH32(esp, edi); /* 0x1102C7ED: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C7EE: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C7F3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102C815; /* 0x1102C7F6: jmp 0x1102c815 */
L_1102C7F8:
    ecx = 0x11065F10u; /* 0x1102C7F8: mov ecx, 0x11065f10 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C7FD: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C802: push ebx */
    esi = eax; /* 0x1102C803: mov esi, eax */
    RECOMP_CALL(sub_11015B71); /* 0x1102C805: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102C80A: push esi */
    PUSH32(esp, eax); /* 0x1102C80B: push eax */
    PUSH32(esp, edi); /* 0x1102C80C: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C80D: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C812: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102C815:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1102C815: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C86E; /* 0x1102C819: je 0x1102c86e */
L_1102C81B:
    /* test ebx, ebx */ /* 0x1102C81B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C851; /* 0x1102C81D: jne 0x1102c851 */
L_1102C81F:
    PUSH32(esp, 8); /* 0x1102C81F: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1102C821: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102C826: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102C828: pop ecx */
    /* test esi, esi */ /* 0x1102C829: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C838; /* 0x1102C82B: je 0x1102c838 */
L_1102C82D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & ebx; /* 0x1102C82D: and dword ptr [esi + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11001CBCu; /* 0x1102C830: mov dword ptr [esi], 0x11001cbc */
    goto L_1102C83A; /* 0x1102C836: jmp 0x1102c83a */
L_1102C838:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C838: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102C83A:
    ecx = 0x11065FC0u; /* 0x1102C83A: mov ecx, 0x11065fc0 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C83F: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102C844: push eax */
    PUSH32(esp, esi); /* 0x1102C845: push esi */
    PUSH32(esp, edi); /* 0x1102C846: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C847: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102C84C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102C86E; /* 0x1102C84F: jmp 0x1102c86e */
L_1102C851:
    ecx = 0x11065FC0u; /* 0x1102C851: mov ecx, 0x11065fc0 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102C856: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C85B: push ebx */
    esi = eax; /* 0x1102C85C: mov esi, eax */
    RECOMP_CALL(sub_11013B1E); /* 0x1102C85E: call 0x11013b1e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102C863: push esi */
    PUSH32(esp, eax); /* 0x1102C864: push eax */
    PUSH32(esp, edi); /* 0x1102C865: push edi */
    RECOMP_CALL(sub_1102C459); /* 0x1102C866: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102C86B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102C86E:
    esi = MEM32(ebp + 0x8); /* 0x1102C86E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1102C871: push ebx */
    PUSH32(esp, edi); /* 0x1102C872: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102C873: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102C876: push esi */
    RECOMP_CALL(sub_110371DA); /* 0x1102C877: call 0x110371da */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C87C: push ebx */
    PUSH32(esp, edi); /* 0x1102C87D: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102C87E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102C881: push esi */
    RECOMP_CALL(sub_110341E8); /* 0x1102C882: call 0x110341e8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1102C887: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1102C888: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102C88B: push edi */
    PUSH32(esp, ebx); /* 0x1102C88C: push ebx */
    PUSH32(esp, esi); /* 0x1102C88D: push esi */
    RECOMP_CALL(sub_11033C3E); /* 0x1102C88E: call 0x11033c3e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi + 0x10) | ebx)); _flag_b = (uint32_t)((MEM32(edi + 0x10) | ebx));
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | ebx; /* 0x1102C893: or dword ptr [edi + 0x10], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1102C896: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x2C); /* 0x1102C899: mov eax, dword ptr [esi + 0x2c] */
    /* test eax, eax */ /* 0x1102C89C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C8A3; /* 0x1102C89E: jne 0x1102c8a3 */
L_1102C8A0:
    eax = esi + 0x30; /* 0x1102C8A0: lea eax, [esi + 0x30] */
L_1102C8A3:
    PUSH32(esp, eax); /* 0x1102C8A3: push eax */
    ecx = edi + 0x18; /* 0x1102C8A4: lea ecx, [edi + 0x18] */
    RECOMP_CALL(sub_11010213); /* 0x1102C8A7: call 0x11010213 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1102C8AC: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102C8AE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C8B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C8B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C8B4u);

L_1102C8B4:
    PUSH32(esp, 8); /* 0x1102C8B4: push 8 */
    eax = 0x1103EE32u; /* 0x1102C8B6: mov eax, 0x1103ee32 */
    RECOMP_CALL(sub_1103B372); /* 0x1102C8BB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102C8C0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102C8C2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102C8C4: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1102C8C5: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, ebx); /* 0x1102C8C8: push ebx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1102C8C9: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_11030421); /* 0x1102C8CC: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C8D1: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1102C8D2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1102C8D5: mov dword ptr [ecx], eax */
    PUSH32(esp, esi); /* 0x1102C8D7: push esi */
    ecx = ebp + (-0x14); /* 0x1102C8D8: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102C8DB: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1102C8DE: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1102FE81); /* 0x1102C8E1: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102C8E6: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1103041B); /* 0x1102C8E9: call 0x1103041b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1102C8EE: mov edi, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1102C8F1: mov ecx, eax */
    /* cmp ecx, MEM32(edi) */ /* 0x1102C8F3: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C95F; /* 0x1102C8F5: je 0x1102c95f */
L_1102C8F7:
    eax = MEM32(ecx); /* 0x1102C8F7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102C8F9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1102C8FC: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1102C8FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C907; /* 0x1102C900: je 0x1102c907 */
L_1102C902:
    eax = MEM32(ecx); /* 0x1102C902: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1102C904: push ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x1102C905: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1102C907:
    edi = MEM32(edi); /* 0x1102C907: mov edi, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1102C909: push edi */
    RECOMP_CALL(sub_110305B6); /* 0x1102C90A: call 0x110305b6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1102C90F: mov eax, dword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1102C911: pop ecx */
    ecx = edi; /* 0x1102C912: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102C914: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi + 0x10); /* 0x1102C917: mov ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x1102C91A: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x3Fu */ /* 0x1102C91D: cmp ebx, 0x3f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C938; /* 0x1102C920: jne 0x1102c938 */
L_1102C922:
    eax = MEM32(edi + 0x18); /* 0x1102C922: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x1102C925: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C92C; /* 0x1102C927: jne 0x1102c92c */
L_1102C929:
    eax = edi + 0x1C; /* 0x1102C929: lea eax, [edi + 0x1c] */
L_1102C92C:
    PUSH32(esp, eax); /* 0x1102C92C: push eax */
    PUSH32(esp, esi); /* 0x1102C92D: push esi */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1102C92E: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C934: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C935: pop ecx */
    goto L_1102C95F; /* 0x1102C936: jmp 0x1102c95f */
L_1102C938:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C938: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102C93A: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102C93C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102C93D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1102C93D: shl eax, cl */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1102C93F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* test ebx, eax */ /* 0x1102C941: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102C959; /* 0x1102C943: je 0x1102c959 */
L_1102C945:
    eax = MEM32(edi + 0x18); /* 0x1102C945: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x1102C948: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102C94F; /* 0x1102C94A: jne 0x1102c94f */
L_1102C94C:
    eax = edi + 0x1C; /* 0x1102C94C: lea eax, [edi + 0x1c] */
L_1102C94F:
    PUSH32(esp, eax); /* 0x1102C94F: push eax */
    PUSH32(esp, esi); /* 0x1102C950: push esi */
    RECOMP_ICALL(MEM32(0x11069120)); /* 0x1102C951: call dword ptr [0x11069120] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C957: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102C958: pop ecx */
L_1102C959:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102C959: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 5 */ /* 0x1102C95A: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102C938; /* 0x1102C95D: jle 0x1102c938 */
L_1102C95F:
    ecx = ebp + (-0x14); /* 0x1102C95F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102C962: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102C967: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B340); /* 0x1102C96A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C96F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C970u);

L_1102C970:
    RECOMP_ICALL(MEM32(0x110662E8)); /* 0x1102C970: call dword ptr [0x110662e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C976: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102C978: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C979: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C97A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C97Au);

L_1102C97A:
    PUSH32(esp, ebp); /* 0x1102C97A: push ebp */
    ebp = esp; /* 0x1102C97B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102C97D: push ecx */
    PUSH32(esp, esi); /* 0x1102C97E: push esi */
    PUSH32(esp, 1); /* 0x1102C97F: push 1 */
    ecx = ebp + (-0x4); /* 0x1102C981: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102C984: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x110662E8); /* 0x1102C989: mov esi, dword ptr [0x110662e8] */
    ecx = ebp + (-0x4); /* 0x1102C98F: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102C992: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102C997: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102C999: pop esi */
    esp = ebp; /* 0x1102C99A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102C99C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C99D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C99E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C99Eu);

L_1102C99E:
    PUSH32(esp, ebp); /* 0x1102C99E: push ebp */
    ebp = esp; /* 0x1102C99F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102C9A1: push ecx */
    PUSH32(esp, esi); /* 0x1102C9A2: push esi */
    PUSH32(esp, 1); /* 0x1102C9A3: push 1 */
    ecx = ebp + (-0x4); /* 0x1102C9A5: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102C9A8: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x110662E8); /* 0x1102C9AD: mov esi, dword ptr [0x110662e8] */
    ecx = MEM32(ebp + 0x8); /* 0x1102C9B3: mov ecx, dword ptr [ebp + 8] */
    MEM32(0x110662E8) = ecx; /* 0x1102C9B6: mov dword ptr [0x110662e8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1102C9BC: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102C9BE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1102C970u);
    ecx = ecx & 0x1102C970u; /* 0x1102C9C0: and ecx, 0x1102c970 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1102C9C6: push ecx */
    RECOMP_CALL(sub_1103B4A6); /* 0x1102C9C7: call 0x1103b4a6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102C9CC: pop ecx */
    ecx = ebp + (-0x4); /* 0x1102C9CD: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102C9D0: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102C9D5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102C9D7: pop esi */
    esp = ebp; /* 0x1102C9D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102C9DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102C9DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102C9DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102C9DCu);

L_1102C9DC:
    PUSH32(esp, ebp); /* 0x1102C9DC: push ebp */
    ebp = esp; /* 0x1102C9DD: mov ebp, esp */
    /* cmp MEM32(0x1100269C), 0 */ /* 0x1102C9DF: cmp dword ptr [0x1100269c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1100269C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x11002698u; /* 0x1102C9E6: mov eax, 0x11002698 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102C9FD; /* 0x1102C9EB: je 0x1102c9fd */
L_1102C9ED:
    ecx = MEM32(ebp + 0x8); /* 0x1102C9ED: mov ecx, dword ptr [ebp + 8] */
L_1102C9F0:
    /* cmp MEM32(eax), ecx */ /* 0x1102C9F0: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CA01; /* 0x1102C9F2: je 0x1102ca01 */
L_1102C9F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1102C9F4: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1102C9F7: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102C9F0; /* 0x1102C9FB: jne 0x1102c9f0 */
L_1102C9FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102C9FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102C9FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CA00: ret  */
L_1102CA01:
    eax = MEM32(eax + 0x4); /* 0x1102CA01: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1102CA04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CA05: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CA06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CA06u);

L_1102CA06:
    PUSH32(esp, ebp); /* 0x1102CA06: push ebp */
    ebp = esp; /* 0x1102CA07: mov ebp, esp */
    /* cmp MEM32(0x11002444), 0 */ /* 0x1102CA09: cmp dword ptr [0x11002444], 0 */
    _flag_a = (uint32_t)(MEM32(0x11002444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x11002440u; /* 0x1102CA10: mov eax, 0x11002440 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CA27; /* 0x1102CA15: je 0x1102ca27 */
L_1102CA17:
    ecx = MEM32(ebp + 0x8); /* 0x1102CA17: mov ecx, dword ptr [ebp + 8] */
L_1102CA1A:
    /* cmp MEM32(eax), ecx */ /* 0x1102CA1A: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CA2B; /* 0x1102CA1C: je 0x1102ca2b */
L_1102CA1E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1102CA1E: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1102CA21: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CA1A; /* 0x1102CA25: jne 0x1102ca1a */
L_1102CA27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102CA27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102CA29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CA2A: ret  */
L_1102CA2B:
    eax = MEM32(eax + 0x4); /* 0x1102CA2B: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1102CA2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CA2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CA30u);

L_1102CA30:
    PUSH32(esp, 0x14u); /* 0x1102CA30: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1102CA32: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1102CA37: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102CA3C: push 0 */
    ecx = ebp + (-0x14); /* 0x1102CA3E: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102CA41: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x110663A4); /* 0x1102CA46: mov edi, dword ptr [0x110663a4] */
    ecx = 0x11068A80u; /* 0x1102CA4C: mov ecx, 0x11068a80 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102CA51: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1102CA55: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102CA58: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1102CA5D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102CA60: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1102CA61: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102CA66: mov esi, eax */
    /* test esi, esi */ /* 0x1102CA68: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CABA; /* 0x1102CA6A: jne 0x1102caba */
L_1102CA6C:
    /* test edi, edi */ /* 0x1102CA6C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CA74; /* 0x1102CA6E: je 0x1102ca74 */
L_1102CA70:
    esi = edi; /* 0x1102CA70: mov esi, edi */
    goto L_1102CABA; /* 0x1102CA72: jmp 0x1102caba */
L_1102CA74:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102CA74: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x1102CA77: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102CA7A: push eax */
    RECOMP_CALL(sub_1100EA5B); /* 0x1102CA7B: call 0x1100ea5b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CA80: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102CA81: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102CA82: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CAA3; /* 0x1102CA85: jne 0x1102caa3 */
L_1102CA87:
    PUSH32(esp, 0x11004970u); /* 0x1102CA87: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1102CA8C: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1102CA8F: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x1102CA95: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1102CA9A: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1102CA9D: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1102CA9E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1102CAA3:
    esi = MEM32(ebp + (-0x10)); /* 0x1102CAA3: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1102CAA6: mov ecx, esi */
    MEM32(0x110663A4) = esi; /* 0x1102CAA8: mov dword ptr [0x110663a4], esi */
    eax = MEM32(esi); /* 0x1102CAAE: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102CAB0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102CAB3: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1102CAB4: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CAB9: pop ecx */
L_1102CABA:
    ecx = ebp + (-0x14); /* 0x1102CABA: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102CABD: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102CAC2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102CAC4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CAC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CACA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CACAu);

L_1102CACA:
    PUSH32(esp, ebp); /* 0x1102CACA: push ebp */
    ebp = esp; /* 0x1102CACB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102CACD: push esi */
    esi = ecx; /* 0x1102CACE: mov esi, ecx */
    RECOMP_CALL(sub_11016BB5); /* 0x1102CAD0: call 0x11016bb5 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1102CAD5: mov ecx, esi */
    MEM32(esi) = 0x1100319Cu; /* 0x1102CAD7: mov dword ptr [esi], 0x1100319c */
    MEM8(esi + 0x4C) = (uint8_t)(0); /* 0x1102CADD: mov byte ptr [esi + 0x4c], 0 */
    MEM8(esi + 0x46) = (uint8_t)(0); /* 0x1102CAE1: mov byte ptr [esi + 0x46], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x1102CAE5: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102CAEA: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x50) = eax; /* 0x1102CAED: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(0x110663A0); /* 0x1102CAF0: mov eax, dword ptr [0x110663a0] */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x1102CAF5: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = eax; /* 0x1102CAF9: mov dword ptr [esi + 0x48], eax */
    eax = esi; /* 0x1102CAFC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102CAFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102CAFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102CB00: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102CB33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CB33u);

    goto L_1102CB33;
L_11017509:
    PUSH32(esp, esi); /* 0x11017509: push esi */
    esi = MEM32(ecx + 0x34); /* 0x1101750A: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001F40u; /* 0x1101750D: mov dword ptr [ecx], 0x11001f40 */
    /* test esi, esi */ /* 0x11017513: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017525; /* 0x11017515: je 0x11017525 */
L_11017517:
    ecx = esi; /* 0x11017517: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11017519: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101751E: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101751F: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017524: pop ecx */
L_11017525:
    esi = POP32_VAL(esp); /* 0x11017525: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017526: ret  */
L_1102CB33:
    PUSH32(esp, esi); /* 0x1102CB33: push esi */
    esi = ecx; /* 0x1102CB34: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1102CB36: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x1100319Cu; /* 0x1102CB3A: mov dword ptr [esi], 0x1100319c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CB47; /* 0x1102CB40: je 0x1102cb47 */
L_1102CB42:
    RECOMP_CALL(sub_1102CC8D); /* 0x1102CB42: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
L_1102CB47:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x1102CB47: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CB54; /* 0x1102CB4B: je 0x1102cb54 */
L_1102CB4D:
    ecx = esi; /* 0x1102CB4D: mov ecx, esi */
    RECOMP_CALL(sub_1102CCC3); /* 0x1102CB4F: call 0x1102ccc3 */
    RECOMP_FLAGS_IN();
L_1102CB54:
    ecx = esi; /* 0x1102CB54: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1102CB56: pop esi */
    RECOMP_BACKEDGE();
    goto L_11017509; /* 0x1102CB57: jmp 0x11017509 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102CB5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CB5Cu);

L_1102CB5C:
    PUSH32(esp, ebp); /* 0x1102CB5C: push ebp */
    ebp = esp; /* 0x1102CB5D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102CB5F: push esi */
    esi = ecx; /* 0x1102CB60: mov esi, ecx */
    RECOMP_CALL(sub_1102CB33); /* 0x1102CB62: call 0x1102cb33 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1102CB67: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CB74; /* 0x1102CB6B: je 0x1102cb74 */
L_1102CB6D:
    PUSH32(esp, esi); /* 0x1102CB6D: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1102CB6E: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CB73: pop ecx */
L_1102CB74:
    eax = esi; /* 0x1102CB74: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102CB76: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102CB77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102CB78: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102CB7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CB7Bu);

L_1102CB7B:
    PUSH32(esp, 0x20u); /* 0x1102CB7B: push 0x20 */
    eax = 0x1103EE55u; /* 0x1102CB7D: mov eax, 0x1103ee55 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102CB82: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102CB87: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102CB89: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x40), ebx */ /* 0x1102CB8B: cmp dword ptr [esi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CC74; /* 0x1102CB8E: je 0x1102cc74 */
L_1102CB94:
    /* cmp MEM8(esi + 0x46), LO8(ebx) */ /* 0x1102CB94: cmp byte ptr [esi + 0x46], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x46)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CC74; /* 0x1102CB97: je 0x1102cc74 */
L_1102CB9D:
    eax = MEM32(esi); /* 0x1102CB9D: mov eax, dword ptr [esi] */
    edi = 0xFFFFu; /* 0x1102CB9F: mov edi, 0xffff */
    PUSH32(esp, edi); /* 0x1102CBA4: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102CBA5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102CBA8: movzx eax, ax */
    /* cmp LO16(edi), LO16(eax) */ /* 0x1102CBAB: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CBB7; /* 0x1102CBAE: jne 0x1102cbb7 */
L_1102CBB0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1102CBB0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1102CC76; /* 0x1102CBB2: jmp 0x1102cc76 */
L_1102CBB7:
    PUSH32(esp, ebx); /* 0x1102CBB7: push ebx */
    PUSH32(esp, 8); /* 0x1102CBB8: push 8 */
    ecx = ebp + (-0x28); /* 0x1102CBBA: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1102CBBD: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102CBC4: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x1102CBC7: mov byte ptr [ebp - 0x28], bl */
    RECOMP_CALL(sub_11014076); /* 0x1102CBCA: call 0x11014076 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102CBCF: mov dword ptr [ebp - 4], ebx */
L_1102CBD2:
    edi = MEM32(ebp + (-0x28)); /* 0x1102CBD2: mov edi, dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x14)); /* 0x1102CBD5: mov eax, dword ptr [ebp - 0x14] */
L_1102CBD8:
    ebx = edi; /* 0x1102CBD8: mov ebx, edi */
    /* cmp eax, 0x10u */ /* 0x1102CBDA: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102CBE4; /* 0x1102CBDD: jae 0x1102cbe4 */
L_1102CBDF:
    ebx = ebp + (-0x28); /* 0x1102CBDF: lea ebx, [ebp - 0x28] */
    edi = ebx; /* 0x1102CBE2: mov edi, ebx */
L_1102CBE4:
    ecx = MEM32(esi + 0x40); /* 0x1102CBE4: mov ecx, dword ptr [esi + 0x40] */
    eax = ebp + (-0x2C); /* 0x1102CBE7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1102CBEA: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1102CBEB: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1102CBEE: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x1102CBF0: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1102CBF2: push eax */
    PUSH32(esp, edi); /* 0x1102CBF3: push edi */
    eax = esi + 0x48; /* 0x1102CBF4: lea eax, [esi + 0x48] */
    PUSH32(esp, eax); /* 0x1102CBF7: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1102CBF8: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1102CBFB: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102CC0B; /* 0x1102CBFE: je 0x1102cc0b */
L_1102CC00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102CC00: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102CC0F; /* 0x1102CC01: je 0x1102cc0f */
L_1102CC03:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102CC03: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1102CC04: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102CC62; /* 0x1102CC05: je 0x1102cc62 */
L_1102CC07:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1102CC07: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1102CC64; /* 0x1102CC09: jmp 0x1102cc64 */
L_1102CC0B:
    MEM8(esi + 0x46) = (uint8_t)(0); /* 0x1102CC0B: mov byte ptr [esi + 0x46], 0 */
L_1102CC0F:
    eax = MEM32(ebp + (-0x14)); /* 0x1102CC0F: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x28)); /* 0x1102CC12: mov edi, dword ptr [ebp - 0x28] */
    ecx = edi; /* 0x1102CC15: mov ecx, edi */
    /* cmp eax, 0x10u */ /* 0x1102CC17: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102CC1F; /* 0x1102CC1A: jae 0x1102cc1f */
L_1102CC1C:
    ecx = ebp + (-0x28); /* 0x1102CC1C: lea ecx, [ebp - 0x28] */
L_1102CC1F:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1102CC1F: mov ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1102CC22: sub ebx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102CC48; /* 0x1102CC24: je 0x1102cc48 */
L_1102CC26:
    /* cmp eax, 0x10u */ /* 0x1102CC26: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102CC2E; /* 0x1102CC29: jae 0x1102cc2e */
L_1102CC2B:
    edi = ebp + (-0x28); /* 0x1102CC2B: lea edi, [ebp - 0x28] */
L_1102CC2E:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CC2E: push dword ptr [esi + 0x50] */
    PUSH32(esp, ebx); /* 0x1102CC31: push ebx */
    PUSH32(esp, 1); /* 0x1102CC32: push 1 */
    PUSH32(esp, edi); /* 0x1102CC34: push edi */
    RECOMP_ICALL(MEM32(0x110690A8)); /* 0x1102CC35: call dword ptr [0x110690a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102CC3B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x1102CC3E: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CC07; /* 0x1102CC40: jne 0x1102cc07 */
L_1102CC42:
    eax = MEM32(ebp + (-0x14)); /* 0x1102CC42: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x28)); /* 0x1102CC45: mov edi, dword ptr [ebp - 0x28] */
L_1102CC48:
    /* cmp MEM8(esi + 0x46), 0 */ /* 0x1102CC48: cmp byte ptr [esi + 0x46], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x46)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CC62; /* 0x1102CC4C: je 0x1102cc62 */
L_1102CC4E:
    /* test ebx, ebx */ /* 0x1102CC4E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CBD8; /* 0x1102CC50: jne 0x1102cbd8 */
L_1102CC52:
    PUSH32(esp, ebx); /* 0x1102CC52: push ebx */
    PUSH32(esp, 8); /* 0x1102CC53: push 8 */
    ecx = ebp + (-0x28); /* 0x1102CC55: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x1102CC58: call 0x11014015 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102CBD2; /* 0x1102CC5D: jmp 0x1102cbd2 */
L_1102CC62:
    SET_LO8(ebx, 1); /* 0x1102CC62: mov bl, 1 */
L_1102CC64:
    PUSH32(esp, 0); /* 0x1102CC64: push 0 */
    PUSH32(esp, 1); /* 0x1102CC66: push 1 */
    ecx = ebp + (-0x28); /* 0x1102CC68: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1102CC6B: call 0x11010630 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x1102CC70: mov al, bl */
    goto L_1102CC76; /* 0x1102CC72: jmp 0x1102cc76 */
L_1102CC74:
    SET_LO8(eax, 1); /* 0x1102CC74: mov al, 1 */
L_1102CC76:
    RECOMP_CALL(sub_1103B354); /* 0x1102CC76: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CC7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CC7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CC7Cu);

L_1102CC7C:
    /* cmp MEM32(ecx + 0x50), 0 */ /* 0x1102CC7C: cmp dword ptr [ecx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CC8C; /* 0x1102CC80: je 0x1102cc8c */
L_1102CC82:
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x1102CC82: push dword ptr [ecx + 0x50] */
    RECOMP_ICALL(MEM32(0x110690B4)); /* 0x1102CC85: call dword ptr [0x110690b4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CC8B: pop ecx */
L_1102CC8C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CC8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CC8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CC8Du);

L_1102CC8D:
    PUSH32(esp, edi); /* 0x1102CC8D: push edi */
    edi = MEM32(ecx + 0xC); /* 0x1102CC8E: mov edi, dword ptr [ecx + 0xc] */
    eax = ecx + 0x44; /* 0x1102CC91: lea eax, [ecx + 0x44] */
    /* cmp MEM32(edi), eax */ /* 0x1102CC94: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CCB0; /* 0x1102CC96: jne 0x1102ccb0 */
L_1102CC98:
    edx = MEM32(ecx + 0x38); /* 0x1102CC98: mov edx, dword ptr [ecx + 0x38] */
    PUSH32(esp, esi); /* 0x1102CC9B: push esi */
    esi = MEM32(ecx + 0x3C); /* 0x1102CC9C: mov esi, dword ptr [ecx + 0x3c] */
    MEM32(edi) = edx; /* 0x1102CC9F: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1102CCA1: sub esi, edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x1102CCA3: mov eax, dword ptr [ecx + 0x1c] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1102CCA6: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    MEM32(eax) = edx; /* 0x1102CCA8: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x2C); /* 0x1102CCAA: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x1102CCAD: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1102CCAF: pop esi */
L_1102CCB0:
    edi = POP32_VAL(esp); /* 0x1102CCB0: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CCB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CCB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CCB2u);

L_1102CCB2:
    /* cmp MEM32(ecx + 0x50), 0 */ /* 0x1102CCB2: cmp dword ptr [ecx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CCC2; /* 0x1102CCB6: je 0x1102ccc2 */
L_1102CCB8:
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x1102CCB8: push dword ptr [ecx + 0x50] */
    RECOMP_ICALL(MEM32(0x110690B8)); /* 0x1102CCBB: call dword ptr [0x110690b8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CCC1: pop ecx */
L_1102CCC2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CCC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CCC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CCC3u);

L_1102CCC3:
    PUSH32(esp, ebx); /* 0x1102CCC3: push ebx */
    PUSH32(esp, edi); /* 0x1102CCC4: push edi */
    edi = ecx; /* 0x1102CCC5: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102CCC7: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CCD1; /* 0x1102CCCB: jne 0x1102ccd1 */
L_1102CCCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102CCCD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102CCF5; /* 0x1102CCCF: jmp 0x1102ccf5 */
L_1102CCD1:
    PUSH32(esp, esi); /* 0x1102CCD1: push esi */
    RECOMP_CALL(sub_1102CB7B); /* 0x1102CCD2: call 0x1102cb7b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102CCD7: push dword ptr [edi + 0x50] */
    esi = (uint32_t)LO8(eax); /* 0x1102CCDA: movzx esi, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1102CCDD: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102CCDF: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x1102CCE1: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x1102CCE3: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1102CCE9: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1102CCEB: neg ebx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102CCED: pop ecx */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102CCEE: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = ~ebx; /* 0x1102CCF0: not ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x1102CCF2: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102CCF4: pop esi */
L_1102CCF5:
    ecx = edi; /* 0x1102CCF5: mov ecx, edi */
    MEM8(edi + 0x4C) = (uint8_t)(0); /* 0x1102CCF7: mov byte ptr [edi + 0x4c], 0 */
    MEM8(edi + 0x46) = (uint8_t)(0); /* 0x1102CCFB: mov byte ptr [edi + 0x46], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x1102CCFF: call 0x1102185f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0; /* 0x1102CD04: and dword ptr [edi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1102CD08: mov eax, ebx */
    ecx = MEM32(0x110663A0); /* 0x1102CD0A: mov ecx, dword ptr [0x110663a0] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x1102CD10: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x48) = ecx; /* 0x1102CD14: mov dword ptr [edi + 0x48], ecx */
    edi = POP32_VAL(esp); /* 0x1102CD17: pop edi */
    ebx = POP32_VAL(esp); /* 0x1102CD18: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CD19: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102CD1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CD1Au);

L_1102CD1A:
    PUSH32(esp, ebp); /* 0x1102CD1A: push ebp */
    ebp = esp; /* 0x1102CD1B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102CD1D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102CD1E: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1102CD21: mov esi, ecx */
    RECOMP_CALL(sub_1102CA30); /* 0x1102CD23: call 0x1102ca30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CD28: pop ecx */
    PUSH32(esp, eax); /* 0x1102CD29: push eax */
    ecx = esi; /* 0x1102CD2A: mov ecx, esi */
    RECOMP_CALL(sub_11013F81); /* 0x1102CD2C: call 0x11013f81 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1102CD31: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102CD32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102CD33: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102CD36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CD36u);

L_1102CD36:
    PUSH32(esp, ebp); /* 0x1102CD36: push ebp */
    ebp = esp; /* 0x1102CD37: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1102CD39: push ebx */
    PUSH32(esp, esi); /* 0x1102CD3A: push esi */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x1102CD3B: mov si, word ptr [ebp + 8] */
    ebx = 0xFFFFu; /* 0x1102CD3F: mov ebx, 0xffff */
    PUSH32(esp, edi); /* 0x1102CD44: push edi */
    edi = ecx; /* 0x1102CD45: mov edi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x1102CD47: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(eax); /* 0x1102CD4A: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x1102CD4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CD7B; /* 0x1102CD4E: je 0x1102cd7b */
L_1102CD50:
    eax = MEM32(edi + 0xC); /* 0x1102CD50: mov eax, dword ptr [edi + 0xc] */
    /* cmp MEM32(eax), ecx */ /* 0x1102CD53: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102CD7B; /* 0x1102CD55: jae 0x1102cd7b */
L_1102CD57:
    /* cmp LO16(ebx), LO16(esi) */ /* 0x1102CD57: cmp bx, si */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CD62; /* 0x1102CD5A: je 0x1102cd62 */
L_1102CD5C:
    /* cmp MEM16(ecx + (-0x2)), LO16(esi) */ /* 0x1102CD5C: cmp word ptr [ecx - 2], si */
    _flag_a = (uint32_t)(MEM16(ecx + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CD7B; /* 0x1102CD60: jne 0x1102cd7b */
L_1102CD62:
    eax = MEM32(edi + 0x2C); /* 0x1102CD62: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102CD65: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x1C); /* 0x1102CD67: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0xFFFFFFFEu; /* 0x1102CD6A: add dword ptr [eax], -2 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(ebx) */ /* 0x1102CD6D: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CD77; /* 0x1102CD70: je 0x1102cd77 */
L_1102CD72:
    eax = (uint32_t)LO16(esi); /* 0x1102CD72: movzx eax, si */
    goto L_1102CDC2; /* 0x1102CD75: jmp 0x1102cdc2 */
L_1102CD77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102CD77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102CDC2; /* 0x1102CD79: jmp 0x1102cdc2 */
L_1102CD7B:
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102CD7B: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CDBF; /* 0x1102CD7F: je 0x1102cdbf */
L_1102CD81:
    /* cmp LO16(ebx), LO16(esi) */ /* 0x1102CD81: cmp bx, si */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CDBF; /* 0x1102CD84: je 0x1102cdbf */
L_1102CD86:
    /* cmp MEM32(edi + 0x40), 0 */ /* 0x1102CD86: cmp dword ptr [edi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CDA9; /* 0x1102CD8A: jne 0x1102cda9 */
L_1102CD8C:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102CD8C: push dword ptr [edi + 0x50] */
    eax = ebp + 0x8; /* 0x1102CD8F: lea eax, [ebp + 8] */
    ecx = (uint32_t)LO16(esi); /* 0x1102CD92: movzx ecx, si */
    PUSH32(esp, eax); /* 0x1102CD95: push eax */
    MEM32(ebp + 0x8) = ecx; /* 0x1102CD96: mov dword ptr [ebp + 8], ecx */
    RECOMP_CALL(sub_1102D0D6); /* 0x1102CD99: call 0x1102d0d6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CD9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102CD9F: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1102CDA0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CDA9; /* 0x1102CDA2: je 0x1102cda9 */
L_1102CDA4:
    SET_LO16(eax, LO16(esi)); /* 0x1102CDA4: mov ax, si */
    goto L_1102CDC2; /* 0x1102CDA7: jmp 0x1102cdc2 */
L_1102CDA9:
    eax = MEM32(edi + 0x1C); /* 0x1102CDA9: mov eax, dword ptr [edi + 0x1c] */
    ecx = edi + 0x44; /* 0x1102CDAC: lea ecx, [edi + 0x44] */
    /* cmp MEM32(eax), ecx */ /* 0x1102CDAF: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CDBF; /* 0x1102CDB1: je 0x1102cdbf */
L_1102CDB3:
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x1102CDB3: mov word ptr [ecx], si */
    ecx = edi; /* 0x1102CDB6: mov ecx, edi */
    RECOMP_CALL(sub_1102D245); /* 0x1102CDB8: call 0x1102d245 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102CDA4; /* 0x1102CDBD: jmp 0x1102cda4 */
L_1102CDBF:
    SET_LO16(eax, LO16(ebx)); /* 0x1102CDBF: mov ax, bx */
L_1102CDC2:
    edi = POP32_VAL(esp); /* 0x1102CDC2: pop edi */
    esi = POP32_VAL(esp); /* 0x1102CDC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102CDC4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102CDC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102CDC6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102CDC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CDC9u);

L_1102CDC9:
    PUSH32(esp, ebp); /* 0x1102CDC9: push ebp */
    ebp = esp; /* 0x1102CDCA: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1102CDCC: push ebx */
    PUSH32(esp, esi); /* 0x1102CDCD: push esi */
    esi = ecx; /* 0x1102CDCE: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1102CDD0: push edi */
    edx = MEM32(esi + 0x1C); /* 0x1102CDD1: mov edx, dword ptr [esi + 0x1c] */
    eax = esi + 0x44; /* 0x1102CDD4: lea eax, [esi + 0x44] */
    /* cmp MEM32(edx), eax */ /* 0x1102CDD7: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CDF5; /* 0x1102CDD9: jne 0x1102cdf5 */
L_1102CDDB:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x1102CDDB: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CDF5; /* 0x1102CDDF: jne 0x1102cdf5 */
L_1102CDE1:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x1102CDE1: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CDF5; /* 0x1102CDE5: jne 0x1102cdf5 */
L_1102CDE7:
    edi = MEM32(ebp + 0xC); /* 0x1102CDE7: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x1102CDEA: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x1102CDED: add edi, -2 */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102CDF0: adc ebx, -1 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1102CDFB; /* 0x1102CDF3: jmp 0x1102cdfb */
L_1102CDF5:
    ebx = MEM32(ebp + 0x10); /* 0x1102CDF5: mov ebx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1102CDF8: mov edi, dword ptr [ebp + 0xc] */
L_1102CDFB:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1102CDFB: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CE60; /* 0x1102CDFF: je 0x1102ce60 */
L_1102CE01:
    RECOMP_CALL(sub_1102CB7B); /* 0x1102CE01: call 0x1102cb7b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102CE06: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CE60; /* 0x1102CE08: je 0x1102ce60 */
L_1102CE0A:
    eax = edi; /* 0x1102CE0A: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1102CE0C: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CE16; /* 0x1102CE0E: jne 0x1102ce16 */
L_1102CE10:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x1102CE10: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CE2B; /* 0x1102CE14: je 0x1102ce2b */
L_1102CE16:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102CE16: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1102CE19: push ebx */
    PUSH32(esp, edi); /* 0x1102CE1A: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CE1B: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A4)); /* 0x1102CE1E: call dword ptr [0x110690a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102CE24: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102CE27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CE60; /* 0x1102CE29: jne 0x1102ce60 */
L_1102CE2B:
    eax = ebp + 0xC; /* 0x1102CE2B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102CE2E: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CE2F: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x1106909C)); /* 0x1102CE32: call dword ptr [0x1106909c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CE38: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102CE39: pop ecx */
    /* test eax, eax */ /* 0x1102CE3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CE60; /* 0x1102CE3C: jne 0x1102ce60 */
L_1102CE3E:
    ecx = esi; /* 0x1102CE3E: mov ecx, esi */
    RECOMP_CALL(sub_1102CC8D); /* 0x1102CE40: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102CE45: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102CE48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1102CE4A: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x1102CE4C: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1102CE4F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x1102CE52: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102CE55: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0xC) = ecx; /* 0x1102CE58: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x1102CE5B: mov ecx, dword ptr [esi + 0x48] */
    goto L_1102CE7C; /* 0x1102CE5E: jmp 0x1102ce7c */
L_1102CE60:
    eax = MEM32(ebp + 0x8); /* 0x1102CE60: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x1102CE63: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x1102CE69: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x1102CE6B: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x1102CE71: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102CE74: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x1102CE76: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1102CE79: mov dword ptr [eax + 0xc], ecx */
L_1102CE7C:
    edi = POP32_VAL(esp); /* 0x1102CE7C: pop edi */
    esi = POP32_VAL(esp); /* 0x1102CE7D: pop esi */
    MEM32(eax + 0x10) = ecx; /* 0x1102CE7E: mov dword ptr [eax + 0x10], ecx */
    ebx = POP32_VAL(esp); /* 0x1102CE81: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102CE82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1102CE83: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1102CE86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CE86u);

L_1102CE86:
    PUSH32(esp, ebp); /* 0x1102CE86: push ebp */
    ebp = esp; /* 0x1102CE87: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102CE89: push ecx */
    PUSH32(esp, ecx); /* 0x1102CE8A: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x1102CE8B: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1102CE8E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1102CE8F: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1102CE92: push esi */
    esi = ecx; /* 0x1102CE93: mov esi, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1102CE95: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x18); /* 0x1102CE98: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1102CE9B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1102CE9C: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1102CE9F: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102CEA3: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CF19; /* 0x1102CEA6: je 0x1102cf19 */
L_1102CEA8:
    RECOMP_CALL(sub_1102CB7B); /* 0x1102CEA8: call 0x1102cb7b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102CEAD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CF19; /* 0x1102CEAF: je 0x1102cf19 */
L_1102CEB1:
    eax = ebp + (-0x8); /* 0x1102CEB1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1102CEB4: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CEB5: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A0)); /* 0x1102CEB8: call dword ptr [0x110690a0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CEBE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102CEBF: pop ecx */
    /* test eax, eax */ /* 0x1102CEC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CF19; /* 0x1102CEC2: jne 0x1102cf19 */
L_1102CEC4:
    eax = edi; /* 0x1102CEC4: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1102CEC6: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102CEDE; /* 0x1102CEC8: je 0x1102cede */
L_1102CECA:
    PUSH32(esp, 1); /* 0x1102CECA: push 1 */
    PUSH32(esp, ebx); /* 0x1102CECC: push ebx */
    PUSH32(esp, edi); /* 0x1102CECD: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CECE: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A4)); /* 0x1102CED1: call dword ptr [0x110690a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102CED7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102CEDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CF19; /* 0x1102CEDC: jne 0x1102cf19 */
L_1102CEDE:
    eax = ebp + (-0x8); /* 0x1102CEDE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1102CEE1: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1102CEE2: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x1106909C)); /* 0x1102CEE5: call dword ptr [0x1106909c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CEEB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102CEEC: pop ecx */
    /* test eax, eax */ /* 0x1102CEED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CF19; /* 0x1102CEEF: jne 0x1102cf19 */
L_1102CEF1:
    eax = MEM32(ebp + 0x1C); /* 0x1102CEF1: mov eax, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1102CEF4: mov ecx, esi */
    MEM32(esi + 0x48) = eax; /* 0x1102CEF6: mov dword ptr [esi + 0x48], eax */
    RECOMP_CALL(sub_1102CC8D); /* 0x1102CEF9: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102CEFE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102CF01: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1102CF03: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x1102CF05: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102CF08: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x8) = ecx; /* 0x1102CF0B: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102CF0E: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0xC) = ecx; /* 0x1102CF11: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x1102CF14: mov ecx, dword ptr [esi + 0x48] */
    goto L_1102CF35; /* 0x1102CF17: jmp 0x1102cf35 */
L_1102CF19:
    eax = MEM32(ebp + 0x8); /* 0x1102CF19: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x1102CF1C: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x1102CF22: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x1102CF24: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x1102CF2A: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102CF2D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x1102CF2F: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1102CF32: mov dword ptr [eax + 0xc], ecx */
L_1102CF35:
    edi = POP32_VAL(esp); /* 0x1102CF35: pop edi */
    esi = POP32_VAL(esp); /* 0x1102CF36: pop esi */
    MEM32(eax + 0x10) = ecx; /* 0x1102CF37: mov dword ptr [eax + 0x10], ecx */
    ebx = POP32_VAL(esp); /* 0x1102CF3A: pop ebx */
    esp = ebp; /* 0x1102CF3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102CF3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102CF3E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102CF41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CF41u);

L_1102CF41:
    PUSH32(esp, ebp); /* 0x1102CF41: push ebp */
    ebp = esp; /* 0x1102CF42: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1102CF44: push edi */
    edi = ecx; /* 0x1102CF45: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102CF47: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CFA2; /* 0x1102CF4B: je 0x1102cfa2 */
L_1102CF4D:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1102CF4D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1102CF51: mov edx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102CF62; /* 0x1102CF54: jne 0x1102cf62 */
L_1102CF56:
    eax = edx; /* 0x1102CF56: mov eax, edx */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x1102CF58: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CF62; /* 0x1102CF5B: jne 0x1102cf62 */
L_1102CF5D:
    PUSH32(esp, 4); /* 0x1102CF5D: push 4 */
    ecx = POP32_VAL(esp); /* 0x1102CF5F: pop ecx */
    goto L_1102CF64; /* 0x1102CF60: jmp 0x1102cf64 */
L_1102CF62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102CF62: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102CF64:
    eax = edx + edx; /* 0x1102CF64: lea eax, [edx + edx] */
    PUSH32(esp, eax); /* 0x1102CF67: push eax */
    PUSH32(esp, ecx); /* 0x1102CF68: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102CF69: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102CF6C: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690AC)); /* 0x1102CF6F: call dword ptr [0x110690ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102CF75: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102CF78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102CFA2; /* 0x1102CF7A: jne 0x1102cfa2 */
L_1102CF7C:
    PUSH32(esp, esi); /* 0x1102CF7C: push esi */
    esi = MEM32(edi + 0x50); /* 0x1102CF7D: mov esi, dword ptr [edi + 0x50] */
    ecx = edi; /* 0x1102CF80: mov ecx, edi */
    MEM8(edi + 0x4C) = (uint8_t)(1); /* 0x1102CF82: mov byte ptr [edi + 0x4c], 1 */
    MEM8(edi + 0x46) = (uint8_t)(LO8(eax)); /* 0x1102CF86: mov byte ptr [edi + 0x46], al */
    RECOMP_CALL(sub_1102185F); /* 0x1102CF89: call 0x1102185f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x50) = esi; /* 0x1102CF8E: mov dword ptr [edi + 0x50], esi */
    eax = MEM32(0x110663A0); /* 0x1102CF91: mov eax, dword ptr [0x110663a0] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x1102CF96: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x48) = eax; /* 0x1102CF9A: mov dword ptr [edi + 0x48], eax */
    eax = edi; /* 0x1102CF9D: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x1102CF9F: pop esi */
    goto L_1102CFA4; /* 0x1102CFA0: jmp 0x1102cfa4 */
L_1102CFA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102CFA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102CFA4:
    edi = POP32_VAL(esp); /* 0x1102CFA4: pop edi */
    ebp = POP32_VAL(esp); /* 0x1102CFA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102CFA6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102CFA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102CFA9u);

L_1102CFA9:
    PUSH32(esp, esi); /* 0x1102CFA9: push esi */
    PUSH32(esp, edi); /* 0x1102CFAA: push edi */
    edi = ecx; /* 0x1102CFAB: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102CFAD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x50), esi */ /* 0x1102CFAF: cmp dword ptr [edi + 0x50], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CFD7; /* 0x1102CFB2: je 0x1102cfd7 */
L_1102CFB4:
    eax = MEM32(edi); /* 0x1102CFB4: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1102CFB6: push ebx */
    ebx = 0xFFFFu; /* 0x1102CFB7: mov ebx, 0xffff */
    PUSH32(esp, ebx); /* 0x1102CFBC: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102CFBD: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp LO16(ebx), LO16(eax) */ /* 0x1102CFC0: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = POP32_VAL(esp); /* 0x1102CFC3: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102CFD7; /* 0x1102CFC4: je 0x1102cfd7 */
L_1102CFC6:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102CFC6: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x11069094)); /* 0x1102CFC9: call dword ptr [0x11069094] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102CFCF: pop ecx */
    /* test eax, eax */ /* 0x1102CFD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102CFD7; /* 0x1102CFD2: jns 0x1102cfd7 */
L_1102CFD4:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1102CFD4: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102CFD7:
    edi = POP32_VAL(esp); /* 0x1102CFD7: pop edi */
    eax = esi; /* 0x1102CFD8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102CFDA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CFDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D035(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D035u);

L_1102D035:
    eax = MEM32(0x1106306C); /* 0x1102D035: mov eax, dword ptr [0x1106306c] */
    /* test eax, eax */ /* 0x1102D03A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D046; /* 0x1102D03C: js 0x1102d046 */
L_1102D03E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102D03E: inc eax */
    _flag_k = FK_INC;
    MEM32(0x1106306C) = eax; /* 0x1102D03F: mov dword ptr [0x1106306c], eax */
    goto L_1102D050; /* 0x1102D044: jmp 0x1102d050 */
L_1102D046:
    MEM32(0x1106306C) = 1; /* 0x1102D046: mov dword ptr [0x1106306c], 1 */
L_1102D050:
    eax = ecx; /* 0x1102D050: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D052: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D053(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D053u);

    goto L_1102D053;
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
L_1102D053:
    _flag_a = (uint32_t)(MEM32(0x1106306C)); _flag_b = (uint32_t)(1);
    MEM32(0x1106306C) = MEM32(0x1106306C) - 1; /* 0x1102D053: dec dword ptr [0x1106306c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102D087; /* 0x1102D059: jne 0x1102d087 */
L_1102D05B:
    ecx = MEM32(0x110665C8); /* 0x1102D05B: mov ecx, dword ptr [0x110665c8] */
    /* test ecx, ecx */ /* 0x1102D061: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D06A; /* 0x1102D063: je 0x1102d06a */
L_1102D065:
    RECOMP_CALL(sub_11010C82); /* 0x1102D065: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102D06A:
    ecx = MEM32(0x110665CC); /* 0x1102D06A: mov ecx, dword ptr [0x110665cc] */
    /* test ecx, ecx */ /* 0x1102D070: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D079; /* 0x1102D072: je 0x1102d079 */
L_1102D074:
    RECOMP_CALL(sub_11010C82); /* 0x1102D074: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102D079:
    ecx = MEM32(0x110665D0); /* 0x1102D079: mov ecx, dword ptr [0x110665d0] */
    /* test ecx, ecx */ /* 0x1102D07F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010C82; /* 0x1102D081: jne 0x11010c82 */
L_1102D087:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D087: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D088(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D088u);

L_1102D088:
    { _itail_tgt = (uint32_t)(MEM32(0x1106913C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102D08E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D08Eu);

L_1102D08E:
    PUSH32(esp, ebp); /* 0x1102D08E: push ebp */
    ebp = esp; /* 0x1102D08F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102D091: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x11069130)); /* 0x1102D094: call dword ptr [0x11069130] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D09A: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1102D09B: movzx ecx, ax */
    eax = 0xFFFFu; /* 0x1102D09E: mov eax, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102D0A3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D0AC; /* 0x1102D0A6: jne 0x1102d0ac */
L_1102D0A8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1102D0A8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x1102D0AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D0AB: ret  */
L_1102D0AC:
    eax = MEM32(ebp + 0x8); /* 0x1102D0AC: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1102D0AF: mov word ptr [eax], cx */
    SET_LO8(eax, 1); /* 0x1102D0B2: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x1102D0B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D0B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D0B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D0B6u);

L_1102D0B6:
    PUSH32(esp, ebp); /* 0x1102D0B6: push ebp */
    ebp = esp; /* 0x1102D0B7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102D0B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D0BC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069134)); /* 0x1102D0BF: call dword ptr [0x11069134] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D0C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D0C6: pop ecx */
    edx = 0xFFFFu; /* 0x1102D0C7: mov edx, 0xffff */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102D0CC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(edx) */ /* 0x1102D0CE: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D0D1: setne al */
    ebp = POP32_VAL(esp); /* 0x1102D0D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D0D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D0D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D0D6u);

L_1102D0D6:
    PUSH32(esp, ebp); /* 0x1102D0D6: push ebp */
    ebp = esp; /* 0x1102D0D7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102D0D9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102D0DC: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax); /* 0x1102D0DF: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x1102D0E2: push eax */
    RECOMP_ICALL(MEM32(0x11069138)); /* 0x1102D0E3: call dword ptr [0x11069138] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D0E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D0EA: pop ecx */
    edx = 0xFFFFu; /* 0x1102D0EB: mov edx, 0xffff */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102D0F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(edx) */ /* 0x1102D0F2: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D0F5: setne al */
    ebp = POP32_VAL(esp); /* 0x1102D0F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D0F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D0FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D0FAu);

L_1102D0FA:
    PUSH32(esp, 0x14u); /* 0x1102D0FA: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1102D0FC: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1102D101: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102D106: push 0 */
    ecx = ebp + (-0x14); /* 0x1102D108: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x1102D10B: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x1106668C); /* 0x1102D110: mov edi, dword ptr [0x1106668c] */
    ecx = 0x11068A8Cu; /* 0x1102D116: mov ecx, 0x11068a8c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102D11B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1102D11F: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1102D122: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1102D127: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102D12A: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1102D12B: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102D130: mov esi, eax */
    /* test esi, esi */ /* 0x1102D132: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D184; /* 0x1102D134: jne 0x1102d184 */
L_1102D136:
    /* test edi, edi */ /* 0x1102D136: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D13E; /* 0x1102D138: je 0x1102d13e */
L_1102D13A:
    esi = edi; /* 0x1102D13A: mov esi, edi */
    goto L_1102D184; /* 0x1102D13C: jmp 0x1102d184 */
L_1102D13E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D13E: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x1102D141: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102D144: push eax */
    RECOMP_CALL(sub_1100E653); /* 0x1102D145: call 0x1100e653 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D14A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D14B: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102D14C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D16D; /* 0x1102D14F: jne 0x1102d16d */
L_1102D151:
    PUSH32(esp, 0x11004970u); /* 0x1102D151: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1102D156: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1102D159: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x1102D15F: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1102D164: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1102D167: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1102D168: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1102D16D:
    esi = MEM32(ebp + (-0x10)); /* 0x1102D16D: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1102D170: mov ecx, esi */
    MEM32(0x1106668C) = esi; /* 0x1102D172: mov dword ptr [0x1106668c], esi */
    eax = MEM32(esi); /* 0x1102D178: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102D17A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102D17D: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1102D17E: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D183: pop ecx */
L_1102D184:
    ecx = ebp + (-0x14); /* 0x1102D184: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1102D187: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102D18C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102D18E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D193: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D194(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D194u);

L_1102D194:
    PUSH32(esp, ebp); /* 0x1102D194: push ebp */
    ebp = esp; /* 0x1102D195: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102D197: push esi */
    esi = ecx; /* 0x1102D198: mov esi, ecx */
    RECOMP_CALL(sub_11016C88); /* 0x1102D19A: call 0x11016c88 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1102D19F: mov ecx, esi */
    MEM32(esi) = 0x110031DCu; /* 0x1102D1A1: mov dword ptr [esi], 0x110031dc */
    MEM8(esi + 0x4C) = (uint8_t)(0); /* 0x1102D1A7: mov byte ptr [esi + 0x4c], 0 */
    MEM8(esi + 0x46) = (uint8_t)(0); /* 0x1102D1AB: mov byte ptr [esi + 0x46], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x1102D1AF: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102D1B4: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x50) = eax; /* 0x1102D1B7: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(0x11066688); /* 0x1102D1BA: mov eax, dword ptr [0x11066688] */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x1102D1BF: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = eax; /* 0x1102D1C3: mov dword ptr [esi + 0x48], eax */
    eax = esi; /* 0x1102D1C6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102D1C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102D1C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102D1CA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102D1FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D1FDu);

    goto L_1102D1FD;
L_11017527:
    PUSH32(esp, esi); /* 0x11017527: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11017528: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001F00u; /* 0x1101752B: mov dword ptr [ecx], 0x11001f00 */
    /* test esi, esi */ /* 0x11017531: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017543; /* 0x11017533: je 0x11017543 */
L_11017535:
    ecx = esi; /* 0x11017535: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11017537: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101753C: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101753D: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017542: pop ecx */
L_11017543:
    esi = POP32_VAL(esp); /* 0x11017543: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017544: ret  */
L_1102D1FD:
    PUSH32(esp, esi); /* 0x1102D1FD: push esi */
    esi = ecx; /* 0x1102D1FE: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1102D200: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x110031DCu; /* 0x1102D204: mov dword ptr [esi], 0x110031dc */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D211; /* 0x1102D20A: je 0x1102d211 */
L_1102D20C:
    RECOMP_CALL(sub_1102CC8D); /* 0x1102D20C: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
L_1102D211:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x1102D211: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D21E; /* 0x1102D215: je 0x1102d21e */
L_1102D217:
    ecx = esi; /* 0x1102D217: mov ecx, esi */
    RECOMP_CALL(sub_1102D280); /* 0x1102D219: call 0x1102d280 */
    RECOMP_FLAGS_IN();
L_1102D21E:
    ecx = esi; /* 0x1102D21E: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1102D220: pop esi */
    RECOMP_BACKEDGE();
    goto L_11017527; /* 0x1102D221: jmp 0x11017527 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102D226(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D226u);

L_1102D226:
    PUSH32(esp, ebp); /* 0x1102D226: push ebp */
    ebp = esp; /* 0x1102D227: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102D229: push esi */
    esi = ecx; /* 0x1102D22A: mov esi, ecx */
    RECOMP_CALL(sub_1102D1FD); /* 0x1102D22C: call 0x1102d1fd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1102D231: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D23E; /* 0x1102D235: je 0x1102d23e */
L_1102D237:
    PUSH32(esp, esi); /* 0x1102D237: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1102D238: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D23D: pop ecx */
L_1102D23E:
    eax = esi; /* 0x1102D23E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102D240: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102D241: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102D242: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102D245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D245u);

L_1102D245:
    edx = ecx; /* 0x1102D245: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1102D247: push esi */
    PUSH32(esp, edi); /* 0x1102D248: push edi */
    edi = MEM32(edx + 0xC); /* 0x1102D249: mov edi, dword ptr [edx + 0xc] */
    esi = edx + 0x44; /* 0x1102D24C: lea esi, [edx + 0x44] */
    eax = MEM32(edi); /* 0x1102D24F: mov eax, dword ptr [edi] */
    /* cmp eax, esi */ /* 0x1102D251: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D268; /* 0x1102D253: je 0x1102d268 */
L_1102D255:
    MEM32(edx + 0x38) = eax; /* 0x1102D255: mov dword ptr [edx + 0x38], eax */
    eax = MEM32(edx + 0x2C); /* 0x1102D258: mov eax, dword ptr [edx + 0x2c] */
    ecx = MEM32(eax); /* 0x1102D25B: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x1C); /* 0x1102D25D: mov eax, dword ptr [edx + 0x1c] */
    eax = MEM32(eax); /* 0x1102D260: mov eax, dword ptr [eax] */
    eax = eax + ecx * 2; /* 0x1102D262: lea eax, [eax + ecx*2] */
    MEM32(edx + 0x3C) = eax; /* 0x1102D265: mov dword ptr [edx + 0x3c], eax */
L_1102D268:
    MEM32(edi) = esi; /* 0x1102D268: mov dword ptr [edi], esi */
    ecx = edx; /* 0x1102D26A: mov ecx, edx */
    eax = MEM32(edx + 0x1C); /* 0x1102D26C: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1102D26F: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x46u; /* 0x1102D271: add ecx, 0x46 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1102D274: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    edi = POP32_VAL(esp); /* 0x1102D276: pop edi */
    MEM32(eax) = esi; /* 0x1102D277: mov dword ptr [eax], esi */
    eax = MEM32(edx + 0x2C); /* 0x1102D279: mov eax, dword ptr [edx + 0x2c] */
    esi = POP32_VAL(esp); /* 0x1102D27C: pop esi */
    MEM32(eax) = ecx; /* 0x1102D27D: mov dword ptr [eax], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D27F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D280u);

L_1102D280:
    PUSH32(esp, ebx); /* 0x1102D280: push ebx */
    PUSH32(esp, edi); /* 0x1102D281: push edi */
    edi = ecx; /* 0x1102D282: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102D284: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D28E; /* 0x1102D288: jne 0x1102d28e */
L_1102D28A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102D28A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102D2B2; /* 0x1102D28C: jmp 0x1102d2b2 */
L_1102D28E:
    PUSH32(esp, esi); /* 0x1102D28E: push esi */
    RECOMP_CALL(sub_1102CB7B); /* 0x1102D28F: call 0x1102cb7b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D294: push dword ptr [edi + 0x50] */
    esi = (uint32_t)LO8(eax); /* 0x1102D297: movzx esi, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1102D29A: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102D29C: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x1102D29E: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x1102D2A0: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1102D2A6: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1102D2A8: neg ebx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102D2AA: pop ecx */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102D2AB: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = ~ebx; /* 0x1102D2AD: not ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x1102D2AF: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102D2B1: pop esi */
L_1102D2B2:
    ecx = edi; /* 0x1102D2B2: mov ecx, edi */
    MEM8(edi + 0x4C) = (uint8_t)(0); /* 0x1102D2B4: mov byte ptr [edi + 0x4c], 0 */
    MEM8(edi + 0x46) = (uint8_t)(0); /* 0x1102D2B8: mov byte ptr [edi + 0x46], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x1102D2BC: call 0x1102185f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0; /* 0x1102D2C1: and dword ptr [edi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1102D2C5: mov eax, ebx */
    ecx = MEM32(0x11066688); /* 0x1102D2C7: mov ecx, dword ptr [0x11066688] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x1102D2CD: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x48) = ecx; /* 0x1102D2D1: mov dword ptr [edi + 0x48], ecx */
    edi = POP32_VAL(esp); /* 0x1102D2D4: pop edi */
    ebx = POP32_VAL(esp); /* 0x1102D2D5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D2D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D2D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D2D7u);

L_1102D2D7:
    PUSH32(esp, ebp); /* 0x1102D2D7: push ebp */
    ebp = esp; /* 0x1102D2D8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102D2DA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D2DB: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1102D2DE: mov esi, ecx */
    RECOMP_CALL(sub_1102D0FA); /* 0x1102D2E0: call 0x1102d0fa */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D2E5: pop ecx */
    PUSH32(esp, eax); /* 0x1102D2E6: push eax */
    ecx = esi; /* 0x1102D2E7: mov ecx, esi */
    RECOMP_CALL(sub_11013F81); /* 0x1102D2E9: call 0x11013f81 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1102D2EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102D2EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102D2F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102D2F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D2F3u);

L_1102D2F3:
    PUSH32(esp, 0x30u); /* 0x1102D2F3: push 0x30 */
    eax = 0x1103EE82u; /* 0x1102D2F5: mov eax, 0x1103ee82 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102D2FA: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102D2FF: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x1102D301: mov ebx, dword ptr [ebp + 8] */
    esi = 0xFFFFu; /* 0x1102D304: mov esi, 0xffff */
    /* cmp LO16(esi), LO16(ebx) */ /* 0x1102D309: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D315; /* 0x1102D30C: jne 0x1102d315 */
L_1102D30E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D30E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102D49E; /* 0x1102D310: jmp 0x1102d49e */
L_1102D315:
    eax = MEM32(edi + 0x20); /* 0x1102D315: mov eax, dword ptr [edi + 0x20] */
    ecx = MEM32(eax); /* 0x1102D318: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x1102D31A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D341; /* 0x1102D31C: je 0x1102d341 */
L_1102D31E:
    edx = MEM32(edi + 0x30); /* 0x1102D31E: mov edx, dword ptr [edi + 0x30] */
    eax = MEM32(edx); /* 0x1102D321: mov eax, dword ptr [edx] */
    eax = ecx + eax * 2; /* 0x1102D323: lea eax, [ecx + eax*2] */
    /* cmp ecx, eax */ /* 0x1102D326: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D341; /* 0x1102D328: jae 0x1102d341 */
L_1102D32A:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1102D32A: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    SET_LO16(eax, LO16(ebx)); /* 0x1102D32C: mov ax, bx */
    edx = MEM32(edi + 0x20); /* 0x1102D32F: mov edx, dword ptr [edi + 0x20] */
    esi = MEM32(edx); /* 0x1102D332: mov esi, dword ptr [edx] */
    ecx = esi + 0x2; /* 0x1102D334: lea ecx, [esi + 2] */
    MEM32(edx) = ecx; /* 0x1102D337: mov dword ptr [edx], ecx */
    MEM16(esi) = (uint16_t)(LO16(ebx)); /* 0x1102D339: mov word ptr [esi], bx */
    goto L_1102D49E; /* 0x1102D33C: jmp 0x1102d49e */
L_1102D341:
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102D341: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D49B; /* 0x1102D345: je 0x1102d49b */
L_1102D34B:
    ecx = edi; /* 0x1102D34B: mov ecx, edi */
    RECOMP_CALL(sub_1102CC8D); /* 0x1102D34D: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102D352: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x40), ecx */ /* 0x1102D354: cmp dword ptr [edi + 0x40], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D374; /* 0x1102D357: jne 0x1102d374 */
L_1102D359:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D359: push dword ptr [edi + 0x50] */
    PUSH32(esp, ebx); /* 0x1102D35C: push ebx */
    RECOMP_CALL(sub_1102D0B6); /* 0x1102D35D: call 0x1102d0b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D362: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D363: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1102D364: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D49B; /* 0x1102D366: je 0x1102d49b */
L_1102D36C:
    esi = (uint32_t)LO16(ebx); /* 0x1102D36C: movzx esi, bx */
    goto L_1102D49B; /* 0x1102D36F: jmp 0x1102d49b */
L_1102D374:
    PUSH32(esp, ecx); /* 0x1102D374: push ecx */
    eax = (uint32_t)LO16(ebx); /* 0x1102D375: movzx eax, bx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1102D378: mov dword ptr [ebp - 0x18], ecx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ecx)); /* 0x1102D37B: mov byte ptr [ebp - 0x28], cl */
    ecx = ebp + (-0x28); /* 0x1102D37E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 8); /* 0x1102D381: push 8 */
    MEM32(ebp + (-0x34)) = eax; /* 0x1102D383: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1102D386: mov dword ptr [ebp - 0x14], 0xf */
    RECOMP_CALL(sub_11014076); /* 0x1102D38D: call 0x11014076 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102D392: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D396:
    eax = MEM32(ebp + (-0x28)); /* 0x1102D396: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1102D399: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1102D39C: mov dword ptr [ebp - 0x30], eax */
L_1102D39F:
    /* cmp ecx, 0x10u */ /* 0x1102D39F: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D3A7; /* 0x1102D3A2: jae 0x1102d3a7 */
L_1102D3A4:
    eax = ebp + (-0x28); /* 0x1102D3A4: lea eax, [ebp - 0x28] */
L_1102D3A7:
    MEM32(ebp + (-0x2C)) = eax; /* 0x1102D3A7: mov dword ptr [ebp - 0x2c], eax */
    /* cmp ecx, 0x10u */ /* 0x1102D3AA: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D3B5; /* 0x1102D3AD: jae 0x1102d3b5 */
L_1102D3AF:
    eax = ebp + (-0x28); /* 0x1102D3AF: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1102D3B2: mov dword ptr [ebp - 0x30], eax */
L_1102D3B5:
    ecx = MEM32(edi + 0x40); /* 0x1102D3B5: mov ecx, dword ptr [edi + 0x40] */
    eax = ebp + (-0x38); /* 0x1102D3B8: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1102D3BB: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1102D3BC: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1102D3BF: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x1102D3C2: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1102D3C4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1102D3C5: push dword ptr [ebp - 0x30] */
    eax = ebp + (-0x3C); /* 0x1102D3C8: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1102D3CB: push eax */
    eax = ebp + (-0x32); /* 0x1102D3CC: lea eax, [ebp - 0x32] */
    PUSH32(esp, eax); /* 0x1102D3CF: push eax */
    eax = ebp + (-0x34); /* 0x1102D3D0: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1102D3D3: push eax */
    eax = edi + 0x48; /* 0x1102D3D4: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x1102D3D7: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1102D3D8: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1102D3DB: mov ebx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1102D3DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D48F; /* 0x1102D3E0: js 0x1102d48f */
L_1102D3E6:
    /* cmp eax, 1 */ /* 0x1102D3E6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102D473; /* 0x1102D3E9: jg 0x1102d473 */
L_1102D3EF:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102D3EF: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x1102D3F2: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1102D3F5: mov dword ptr [ebp - 0x30], eax */
    /* cmp ecx, 0x10u */ /* 0x1102D3F8: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102D402; /* 0x1102D3FB: jb 0x1102d402 */
L_1102D3FD:
    MEM32(ebp + (-0x2C)) = eax; /* 0x1102D3FD: mov dword ptr [ebp - 0x2c], eax */
    goto L_1102D408; /* 0x1102D400: jmp 0x1102d408 */
L_1102D402:
    edx = ebp + (-0x28); /* 0x1102D402: lea edx, [ebp - 0x28] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1102D405: mov dword ptr [ebp - 0x2c], edx */
L_1102D408:
    edx = MEM32(ebp + (-0x38)); /* 0x1102D408: mov edx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x2C)); /* 0x1102D40B: sub edx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = edx; /* 0x1102D40E: mov dword ptr [ebp - 0x2c], edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1102D43B; /* 0x1102D411: je 0x1102d43b */
L_1102D413:
    /* cmp ecx, 0x10u */ /* 0x1102D413: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D41B; /* 0x1102D416: jae 0x1102d41b */
L_1102D418:
    eax = ebp + (-0x28); /* 0x1102D418: lea eax, [ebp - 0x28] */
L_1102D41B:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D41B: push dword ptr [edi + 0x50] */
    PUSH32(esp, edx); /* 0x1102D41E: push edx */
    PUSH32(esp, 1); /* 0x1102D41F: push 1 */
    PUSH32(esp, eax); /* 0x1102D421: push eax */
    RECOMP_ICALL(MEM32(0x110690A8)); /* 0x1102D422: call dword ptr [0x110690a8] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x1102D428: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102D42B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x1102D42E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D46B; /* 0x1102D430: jne 0x1102d46b */
L_1102D432:
    eax = MEM32(ebp + (-0x28)); /* 0x1102D432: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1102D435: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1102D438: mov dword ptr [ebp - 0x30], eax */
L_1102D43B:
    ebx = ebp + (-0x34); /* 0x1102D43B: lea ebx, [ebp - 0x34] */
    MEM8(edi + 0x46) = (uint8_t)(1); /* 0x1102D43E: mov byte ptr [edi + 0x46], 1 */
    /* cmp MEM32(ebp + (-0x3C)), ebx */ /* 0x1102D442: cmp dword ptr [ebp - 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1102D445: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D468; /* 0x1102D448: jne 0x1102d468 */
L_1102D44A:
    /* test edx, edx */ /* 0x1102D44A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D39F; /* 0x1102D44C: jne 0x1102d39f */
L_1102D452:
    /* cmp MEM32(ebp + (-0x18)), 0x20u */ /* 0x1102D452: cmp dword ptr [ebp - 0x18], 0x20 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D46E; /* 0x1102D456: jae 0x1102d46e */
L_1102D458:
    PUSH32(esp, edx); /* 0x1102D458: push edx */
    PUSH32(esp, 8); /* 0x1102D459: push 8 */
    ecx = ebp + (-0x28); /* 0x1102D45B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x1102D45E: call 0x11014015 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102D396; /* 0x1102D463: jmp 0x1102d396 */
L_1102D468:
    esi = (uint32_t)LO16(ebx); /* 0x1102D468: movzx esi, bx */
L_1102D46B:
    esi = (uint32_t)LO16(esi); /* 0x1102D46B: movzx esi, si */
L_1102D46E:
    esi = (uint32_t)LO16(esi); /* 0x1102D46E: movzx esi, si */
    goto L_1102D48C; /* 0x1102D471: jmp 0x1102d48c */
L_1102D473:
    /* cmp eax, 3 */ /* 0x1102D473: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D48F; /* 0x1102D476: jne 0x1102d48f */
L_1102D478:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D478: push dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1102D47B: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1102D0B6); /* 0x1102D47E: call 0x1102d0b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D483: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D484: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1102D485: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D48C; /* 0x1102D487: je 0x1102d48c */
L_1102D489:
    esi = (uint32_t)LO16(ebx); /* 0x1102D489: movzx esi, bx */
L_1102D48C:
    esi = (uint32_t)LO16(esi); /* 0x1102D48C: movzx esi, si */
L_1102D48F:
    PUSH32(esp, 0); /* 0x1102D48F: push 0 */
    PUSH32(esp, 1); /* 0x1102D491: push 1 */
    ecx = ebp + (-0x28); /* 0x1102D493: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1102D496: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_1102D49B:
    SET_LO16(eax, LO16(esi)); /* 0x1102D49B: mov ax, si */
L_1102D49E:
    RECOMP_CALL(sub_1103B354); /* 0x1102D49E: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102D4A3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102D4A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D4A6u);

L_1102D4A6:
    PUSH32(esp, ebp); /* 0x1102D4A6: push ebp */
    ebp = esp; /* 0x1102D4A7: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1102D4A9: push edi */
    edi = ecx; /* 0x1102D4AA: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1102D4AC: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D507; /* 0x1102D4B0: je 0x1102d507 */
L_1102D4B2:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1102D4B2: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1102D4B6: mov edx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D4C7; /* 0x1102D4B9: jne 0x1102d4c7 */
L_1102D4BB:
    eax = edx; /* 0x1102D4BB: mov eax, edx */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x1102D4BD: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D4C7; /* 0x1102D4C0: jne 0x1102d4c7 */
L_1102D4C2:
    PUSH32(esp, 4); /* 0x1102D4C2: push 4 */
    ecx = POP32_VAL(esp); /* 0x1102D4C4: pop ecx */
    goto L_1102D4C9; /* 0x1102D4C5: jmp 0x1102d4c9 */
L_1102D4C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102D4C7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D4C9:
    eax = edx + edx; /* 0x1102D4C9: lea eax, [edx + edx] */
    PUSH32(esp, eax); /* 0x1102D4CC: push eax */
    PUSH32(esp, ecx); /* 0x1102D4CD: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D4CE: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D4D1: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690AC)); /* 0x1102D4D4: call dword ptr [0x110690ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102D4DA: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102D4DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D507; /* 0x1102D4DF: jne 0x1102d507 */
L_1102D4E1:
    PUSH32(esp, esi); /* 0x1102D4E1: push esi */
    esi = MEM32(edi + 0x50); /* 0x1102D4E2: mov esi, dword ptr [edi + 0x50] */
    ecx = edi; /* 0x1102D4E5: mov ecx, edi */
    MEM8(edi + 0x4C) = (uint8_t)(1); /* 0x1102D4E7: mov byte ptr [edi + 0x4c], 1 */
    MEM8(edi + 0x46) = (uint8_t)(LO8(eax)); /* 0x1102D4EB: mov byte ptr [edi + 0x46], al */
    RECOMP_CALL(sub_1102185F); /* 0x1102D4EE: call 0x1102185f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x50) = esi; /* 0x1102D4F3: mov dword ptr [edi + 0x50], esi */
    eax = MEM32(0x11066688); /* 0x1102D4F6: mov eax, dword ptr [0x11066688] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x1102D4FB: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x48) = eax; /* 0x1102D4FF: mov dword ptr [edi + 0x48], eax */
    eax = edi; /* 0x1102D502: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x1102D504: pop esi */
    goto L_1102D509; /* 0x1102D505: jmp 0x1102d509 */
L_1102D507:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D507: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D509:
    edi = POP32_VAL(esp); /* 0x1102D509: pop edi */
    ebp = POP32_VAL(esp); /* 0x1102D50A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102D50B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102D50E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D50Eu);

L_1102D50E:
    PUSH32(esp, 0x28u); /* 0x1102D50E: push 0x28 */
    eax = 0x1103EEAFu; /* 0x1102D510: mov eax, 0x1103eeaf */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102D515: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102D51A: mov edi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x1102D51C: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(eax); /* 0x1102D51F: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x1102D521: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D548; /* 0x1102D523: je 0x1102d548 */
L_1102D525:
    edx = MEM32(edi + 0x2C); /* 0x1102D525: mov edx, dword ptr [edi + 0x2c] */
    esi = MEM32(edx); /* 0x1102D528: mov esi, dword ptr [edx] */
    eax = ecx + esi * 2; /* 0x1102D52A: lea eax, [ecx + esi*2] */
    /* cmp ecx, eax */ /* 0x1102D52D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D548; /* 0x1102D52F: jae 0x1102d548 */
L_1102D531:
    eax = esi + (-0x1); /* 0x1102D531: lea eax, [esi - 1] */
    MEM32(edx) = eax; /* 0x1102D534: mov dword ptr [edx], eax */
    edx = MEM32(edi + 0x1C); /* 0x1102D536: mov edx, dword ptr [edi + 0x1c] */
    eax = MEM32(edx); /* 0x1102D539: mov eax, dword ptr [edx] */
    ecx = eax + 0x2; /* 0x1102D53B: lea ecx, [eax + 2] */
    MEM32(edx) = ecx; /* 0x1102D53E: mov dword ptr [edx], ecx */
    SET_LO16(eax, MEM16(eax)); /* 0x1102D540: mov ax, word ptr [eax] */
    goto L_1102D668; /* 0x1102D543: jmp 0x1102d668 */
L_1102D548:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102D548: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x50), ebx */ /* 0x1102D54A: cmp dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D559; /* 0x1102D54D: jne 0x1102d559 */
L_1102D54F:
    eax = 0xFFFFu; /* 0x1102D54F: mov eax, 0xffff */
    goto L_1102D668; /* 0x1102D554: jmp 0x1102d668 */
L_1102D559:
    ecx = edi; /* 0x1102D559: mov ecx, edi */
    RECOMP_CALL(sub_1102CC8D); /* 0x1102D55B: call 0x1102cc8d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x40), ebx */ /* 0x1102D560: cmp dword ptr [edi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D584; /* 0x1102D563: jne 0x1102d584 */
L_1102D565:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D565: push dword ptr [edi + 0x50] */
    eax = ebp + (-0x30); /* 0x1102D568: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1102D56B: mov dword ptr [ebp - 0x30], ebx */
    PUSH32(esp, eax); /* 0x1102D56E: push eax */
    RECOMP_CALL(sub_1102D08E); /* 0x1102D56F: call 0x1102d08e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D574: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1102D575: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)MEM16(ebp + (-0x30)); /* 0x1102D577: movzx eax, word ptr [ebp - 0x30] */
    ecx = POP32_VAL(esp); /* 0x1102D57B: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D668; /* 0x1102D57C: jne 0x1102d668 */
L_1102D582:
    RECOMP_BACKEDGE();
    goto L_1102D54F; /* 0x1102D582: jmp 0x1102d54f */
L_1102D584:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1102D584: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102D58B: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x1102D58E: mov byte ptr [ebp - 0x28], bl */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102D591: mov dword ptr [ebp - 4], ebx */
    goto L_1102D63B; /* 0x1102D594: jmp 0x1102d63b */
L_1102D599:
    PUSH32(esp, eax); /* 0x1102D599: push eax */
    PUSH32(esp, 1); /* 0x1102D59A: push 1 */
    ecx = ebp + (-0x28); /* 0x1102D59C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x1102D59F: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1102D5A4: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x1102D5A8: mov esi, dword ptr [ebp - 0x28] */
    ebx = esi; /* 0x1102D5AB: mov ebx, esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D5B4; /* 0x1102D5AD: jae 0x1102d5b4 */
L_1102D5AF:
    ebx = ebp + (-0x28); /* 0x1102D5AF: lea ebx, [ebp - 0x28] */
    esi = ebx; /* 0x1102D5B2: mov esi, ebx */
L_1102D5B4:
    ecx = MEM32(edi + 0x40); /* 0x1102D5B4: mov ecx, dword ptr [edi + 0x40] */
    eax = ebp + (-0x34); /* 0x1102D5B7: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1102D5BA: push eax */
    eax = ebp + (-0x2A); /* 0x1102D5BB: lea eax, [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1102D5BE: push eax */
    edx = MEM32(ecx); /* 0x1102D5BF: mov edx, dword ptr [ecx] */
    eax = ebp + (-0x2C); /* 0x1102D5C1: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1102D5C4: push eax */
    eax = ebp + (-0x30); /* 0x1102D5C5: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102D5C8: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1102D5C9: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1102D5CC: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102D5CE: push eax */
    PUSH32(esp, esi); /* 0x1102D5CF: push esi */
    eax = edi + 0x48; /* 0x1102D5D0: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x1102D5D3: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1102D5D4: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102D5D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D6A6; /* 0x1102D5D9: js 0x1102d6a6 */
L_1102D5DF:
    /* cmp eax, 1 */ /* 0x1102D5DF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102D617; /* 0x1102D5E2: jle 0x1102d617 */
L_1102D5E4:
    /* cmp eax, 3 */ /* 0x1102D5E4: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D6A6; /* 0x1102D5E7: jne 0x1102d6a6 */
L_1102D5ED:
    /* cmp MEM32(ebp + (-0x18)), 2 */ /* 0x1102D5ED: cmp dword ptr [ebp - 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102D63B; /* 0x1102D5F1: jb 0x1102d63b */
L_1102D5F3:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1102D5F3: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1102D5F7: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D5FF; /* 0x1102D5FA: jae 0x1102d5ff */
L_1102D5FC:
    eax = ebp + (-0x28); /* 0x1102D5FC: lea eax, [ebp - 0x28] */
L_1102D5FF:
    PUSH32(esp, 2); /* 0x1102D5FF: push 2 */
    PUSH32(esp, eax); /* 0x1102D601: push eax */
    eax = ebp + (-0x2C); /* 0x1102D602: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 2); /* 0x1102D605: push 2 */
    PUSH32(esp, eax); /* 0x1102D607: push eax */
    RECOMP_ICALL(MEM32(0x110690BC)); /* 0x1102D608: call dword ptr [0x110690bc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1102D60E: movzx eax, word ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102D612: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1102D656; /* 0x1102D615: jmp 0x1102d656 */
L_1102D617:
    eax = ebp + (-0x2C); /* 0x1102D617: lea eax, [ebp - 0x2c] */
    /* cmp MEM32(ebp + (-0x34)), eax */ /* 0x1102D61A: cmp dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D66E; /* 0x1102D61D: jne 0x1102d66e */
L_1102D61F:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1102D61F: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102D623: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D62B; /* 0x1102D626: jae 0x1102d62b */
L_1102D628:
    ecx = ebp + (-0x28); /* 0x1102D628: lea ecx, [ebp - 0x28] */
L_1102D62B:
    eax = MEM32(ebp + (-0x30)); /* 0x1102D62B: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1102D62E: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x1102D630: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1102D633: push eax */
    PUSH32(esp, 0); /* 0x1102D634: push 0 */
    RECOMP_CALL(sub_11010B5C); /* 0x1102D636: call 0x11010b5c */
    RECOMP_FLAGS_IN();
L_1102D63B:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D63B: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x11069098)); /* 0x1102D63E: call dword ptr [0x11069098] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D644: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102D645: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D599; /* 0x1102D648: jne 0x1102d599 */
L_1102D64E:
    eax = 0xFFFFu; /* 0x1102D64E: mov eax, 0xffff */
L_1102D653:
    eax = (uint32_t)LO16(eax); /* 0x1102D653: movzx eax, ax */
L_1102D656:
    esi = (uint32_t)LO16(eax); /* 0x1102D656: movzx esi, ax */
L_1102D659:
    PUSH32(esp, 0); /* 0x1102D659: push 0 */
    PUSH32(esp, 1); /* 0x1102D65B: push 1 */
    ecx = ebp + (-0x28); /* 0x1102D65D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1102D660: call 0x11010630 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1102D665: mov ax, si */
L_1102D668:
    RECOMP_CALL(sub_1103B354); /* 0x1102D668: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D66D: ret  */
L_1102D66E:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1102D66E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x1102D672: mov esi, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D67A; /* 0x1102D675: jae 0x1102d67a */
L_1102D677:
    esi = ebp + (-0x28); /* 0x1102D677: lea esi, [ebp - 0x28] */
L_1102D67A:
    eax = MEM32(ebp + (-0x30)); /* 0x1102D67A: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102D67D: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x18)); /* 0x1102D67F: add esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1102D682: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D6A0; /* 0x1102D684: jle 0x1102d6a0 */
L_1102D686:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1102D686: push dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1102D689: dec esi */
    _flag_k = FK_DEC;
    eax = (int32_t)(int8_t)MEM8(esi + eax); /* 0x1102D68A: movsx eax, byte ptr [esi + eax] */
    PUSH32(esp, eax); /* 0x1102D68E: push eax */
    RECOMP_ICALL(MEM32(0x110690B0)); /* 0x1102D68F: call dword ptr [0x110690b0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D695: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102D696: pop ecx */
    /* test esi, esi */ /* 0x1102D697: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D6A0; /* 0x1102D699: jle 0x1102d6a0 */
L_1102D69B:
    eax = MEM32(ebp + (-0x30)); /* 0x1102D69B: mov eax, dword ptr [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1102D686; /* 0x1102D69E: jmp 0x1102d686 */
L_1102D6A0:
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1102D6A0: movzx eax, word ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_1102D653; /* 0x1102D6A4: jmp 0x1102d653 */
L_1102D6A6:
    esi = 0xFFFFu; /* 0x1102D6A6: mov esi, 0xffff */
    RECOMP_BACKEDGE();
    goto L_1102D659; /* 0x1102D6AB: jmp 0x1102d659 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102D6AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D6ADu);

L_1102D6AD:
    PUSH32(esp, esi); /* 0x1102D6AD: push esi */
    esi = ecx; /* 0x1102D6AE: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x1102D6B0: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax); /* 0x1102D6B3: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1102D6B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D6CA; /* 0x1102D6B7: je 0x1102d6ca */
L_1102D6B9:
    edx = MEM32(esi + 0x2C); /* 0x1102D6B9: mov edx, dword ptr [esi + 0x2c] */
    edx = MEM32(edx); /* 0x1102D6BC: mov edx, dword ptr [edx] */
    edx = eax + edx * 2; /* 0x1102D6BE: lea edx, [eax + edx*2] */
    /* cmp eax, edx */ /* 0x1102D6C1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D6CA; /* 0x1102D6C3: jae 0x1102d6ca */
L_1102D6C5:
    SET_LO16(eax, MEM16(eax)); /* 0x1102D6C5: mov ax, word ptr [eax] */
    esi = POP32_VAL(esp); /* 0x1102D6C8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D6C9: ret  */
L_1102D6CA:
    eax = MEM32(esi); /* 0x1102D6CA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102D6CC: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1102D6CD: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x1102D6D0: movzx edi, ax */
    eax = 0xFFFFu; /* 0x1102D6D3: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1102D6D8: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D6E8; /* 0x1102D6DB: je 0x1102d6e8 */
L_1102D6DD:
    edx = MEM32(esi); /* 0x1102D6DD: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1102D6DF: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1102D6E1: push edi */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1102D6E2: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1102D6E5: mov ax, di */
L_1102D6E8:
    edi = POP32_VAL(esp); /* 0x1102D6E8: pop edi */
    esi = POP32_VAL(esp); /* 0x1102D6E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D6EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D744(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D744u);

L_1102D744:
    eax = MEM32(0x11063070); /* 0x1102D744: mov eax, dword ptr [0x11063070] */
    /* test eax, eax */ /* 0x1102D749: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102D755; /* 0x1102D74B: js 0x1102d755 */
L_1102D74D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102D74D: inc eax */
    _flag_k = FK_INC;
    MEM32(0x11063070) = eax; /* 0x1102D74E: mov dword ptr [0x11063070], eax */
    goto L_1102D75F; /* 0x1102D753: jmp 0x1102d75f */
L_1102D755:
    MEM32(0x11063070) = 1; /* 0x1102D755: mov dword ptr [0x11063070], 1 */
L_1102D75F:
    eax = ecx; /* 0x1102D75F: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D761: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D762(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D762u);

    goto L_1102D762;
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
L_1102D762:
    _flag_a = (uint32_t)(MEM32(0x11063070)); _flag_b = (uint32_t)(1);
    MEM32(0x11063070) = MEM32(0x11063070) - 1; /* 0x1102D762: dec dword ptr [0x11063070] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102D796; /* 0x1102D768: jne 0x1102d796 */
L_1102D76A:
    ecx = MEM32(0x110662A8); /* 0x1102D76A: mov ecx, dword ptr [0x110662a8] */
    /* test ecx, ecx */ /* 0x1102D770: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D779; /* 0x1102D772: je 0x1102d779 */
L_1102D774:
    RECOMP_CALL(sub_11010C82); /* 0x1102D774: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102D779:
    ecx = MEM32(0x110662AC); /* 0x1102D779: mov ecx, dword ptr [0x110662ac] */
    /* test ecx, ecx */ /* 0x1102D77F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D788; /* 0x1102D781: je 0x1102d788 */
L_1102D783:
    RECOMP_CALL(sub_11010C82); /* 0x1102D783: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_1102D788:
    ecx = MEM32(0x110662B0); /* 0x1102D788: mov ecx, dword ptr [0x110662b0] */
    /* test ecx, ecx */ /* 0x1102D78E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11010C82; /* 0x1102D790: jne 0x11010c82 */
L_1102D796:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D796: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D797(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D797u);

L_1102D797:
    PUSH32(esp, ebp); /* 0x1102D797: push ebp */
    ebp = esp; /* 0x1102D798: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x1102D79A: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102D79D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102D7A2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102D7A4: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x14); /* 0x1102D7A7: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1102D7AA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102D7AB: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102D7AE: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1102D7AF: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1102D7B2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1102D7B3: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1102D7B6: mov dword ptr [ebp - 0x3c], edi */
    MEM32(ebp + (-0x38)) = ecx; /* 0x1102D7B9: mov dword ptr [ebp - 0x38], ecx */
    /* test edi, edi */ /* 0x1102D7BC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D7D4; /* 0x1102D7BE: je 0x1102d7d4 */
L_1102D7C0:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1102D7C0: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D7D4; /* 0x1102D7C4: je 0x1102d7d4 */
L_1102D7C6:
    /* cmp MEM8(edi), 0 */ /* 0x1102D7C6: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D7E7; /* 0x1102D7C9: jne 0x1102d7e7 */
L_1102D7CB:
    /* test ebx, ebx */ /* 0x1102D7CB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D7D4; /* 0x1102D7CD: je 0x1102d7d4 */
L_1102D7CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D7CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1102D7D1: mov word ptr [ebx], ax */
L_1102D7D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D7D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D7D6:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102D7D6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102D7D9: pop edi */
    esi = POP32_VAL(esp); /* 0x1102D7DA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102D7DB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102D7DD: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102D7DE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102D7E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102D7E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D7E6: ret  */
L_1102D7E7:
    /* test esi, esi */ /* 0x1102D7E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D808; /* 0x1102D7E9: jne 0x1102d808 */
L_1102D7EB:
    eax = ebp + (-0x68); /* 0x1102D7EB: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1102D7EE: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x1102D7EF: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D7F4: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1102D7F5: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1102D7F7: pop ecx */
    esi = eax; /* 0x1102D7F8: mov esi, eax */
    edi = ebp + (-0x30); /* 0x1102D7FA: lea edi, [ebp - 0x30] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102D7FD: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x3C)); /* 0x1102D7FF: mov edi, dword ptr [ebp - 0x3c] */
    esi = ebp + (-0x30); /* 0x1102D802: lea esi, [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1102D805: mov ecx, dword ptr [ebp - 0x38] */
L_1102D808:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x1102D808: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D81D; /* 0x1102D80C: je 0x1102d81d */
L_1102D80E:
    /* test ebx, ebx */ /* 0x1102D80E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D818; /* 0x1102D810: je 0x1102d818 */
L_1102D812:
    eax = (uint32_t)MEM8(edi); /* 0x1102D812: movzx eax, byte ptr [edi] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1102D815: mov word ptr [ebx], ax */
L_1102D818:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D818: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102D81A: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1102D7D6; /* 0x1102D81B: jmp 0x1102d7d6 */
L_1102D81D:
    /* cmp MEM32(ecx), 0 */ /* 0x1102D81D: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(edi)); /* 0x1102D820: mov al, byte ptr [edi] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D86C; /* 0x1102D822: je 0x1102d86c */
L_1102D824:
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x1102D824: mov byte ptr [ecx + 1], al */
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1102D827: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102D855; /* 0x1102D82B: jbe 0x1102d855 */
L_1102D82D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D82D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1102D82F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D831: setne al */
    PUSH32(esp, eax); /* 0x1102D834: push eax */
    PUSH32(esp, ebx); /* 0x1102D835: push ebx */
    PUSH32(esp, 2); /* 0x1102D836: push 2 */
    PUSH32(esp, ecx); /* 0x1102D838: push ecx */
    PUSH32(esp, 9); /* 0x1102D839: push 9 */
    PUSH32(esp, MEM32(esi)); /* 0x1102D83B: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069064)); /* 0x1102D83D: call dword ptr [0x11069064] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102D843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D852; /* 0x1102D845: je 0x1102d852 */
L_1102D847:
    eax = MEM32(ebp + (-0x38)); /* 0x1102D847: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1102D84A: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D84D:
    eax = MEM32(esi + 0x4); /* 0x1102D84D: mov eax, dword ptr [esi + 4] */
    RECOMP_BACKEDGE();
    goto L_1102D7D6; /* 0x1102D850: jmp 0x1102d7d6 */
L_1102D852:
    ecx = MEM32(ebp + (-0x38)); /* 0x1102D852: mov ecx, dword ptr [ebp - 0x38] */
L_1102D855:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1102D855: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102D858:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102D858: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1102D85E: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102D864: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1102D7D6; /* 0x1102D867: jmp 0x1102d7d6 */
L_1102D86C:
    edx = (uint32_t)LO8(eax); /* 0x1102D86C: movzx edx, al */
    MEM8(ebp + (-0x31)) = (uint8_t)(LO8(eax)); /* 0x1102D86F: mov byte ptr [ebp - 0x31], al */
    ecx = edx; /* 0x1102D872: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1102D876: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1102D876: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1102D879: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102D87C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102D87D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1102D87D: shl eax, cl */
    /* test MEM8(edx + esi + 0xC), LO8(eax) */ /* 0x1102D87F: test byte ptr [edx + esi + 0xc], al */
    _flag_a = (uint32_t)(MEM8(edx + esi + 0xC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D8CC; /* 0x1102D883: je 0x1102d8cc */
L_1102D885:
    eax = MEM32(ebp + 0x10); /* 0x1102D885: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1102D888: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102D89D; /* 0x1102D88B: jae 0x1102d89d */
L_1102D88D:
    eax = MEM32(ebp + (-0x38)); /* 0x1102D88D: mov eax, dword ptr [ebp - 0x38] */
    SET_LO8(ecx, MEM8(ebp + (-0x31))); /* 0x1102D890: mov cl, byte ptr [ebp - 0x31] */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1102D893: push -2 */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1102D895: mov byte ptr [eax], cl */
    eax = POP32_VAL(esp); /* 0x1102D897: pop eax */
    RECOMP_BACKEDGE();
    goto L_1102D7D6; /* 0x1102D898: jmp 0x1102d7d6 */
L_1102D89D:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1102D89D: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102D8BE; /* 0x1102D8A1: jbe 0x1102d8be */
L_1102D8A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D8A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1102D8A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D8A7: setne al */
    PUSH32(esp, eax); /* 0x1102D8AA: push eax */
    PUSH32(esp, ebx); /* 0x1102D8AB: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1102D8AC: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1102D8AF: push edi */
    PUSH32(esp, 9); /* 0x1102D8B0: push 9 */
    PUSH32(esp, MEM32(esi)); /* 0x1102D8B2: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069064)); /* 0x1102D8B4: call dword ptr [0x11069064] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102D8BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D84D; /* 0x1102D8BC: jne 0x1102d84d */
L_1102D8BE:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x1102D8BE: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102D84D; /* 0x1102D8C2: jne 0x1102d84d */
L_1102D8C4:
    eax = MEM32(ebp + (-0x38)); /* 0x1102D8C4: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1102D8C7: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1102D858; /* 0x1102D8CA: jmp 0x1102d858 */
L_1102D8CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102D8CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1102D8CE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D8D0: setne al */
    PUSH32(esp, eax); /* 0x1102D8D3: push eax */
    PUSH32(esp, ebx); /* 0x1102D8D4: push ebx */
    PUSH32(esp, 1); /* 0x1102D8D5: push 1 */
    PUSH32(esp, edi); /* 0x1102D8D7: push edi */
    PUSH32(esp, 9); /* 0x1102D8D8: push 9 */
    PUSH32(esp, MEM32(esi)); /* 0x1102D8DA: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069064)); /* 0x1102D8DC: call dword ptr [0x11069064] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102D8E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D818; /* 0x1102D8E4: jne 0x1102d818 */
L_1102D8EA:
    RECOMP_BACKEDGE();
    goto L_1102D858; /* 0x1102D8EA: jmp 0x1102d858 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102D8EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D8EFu);

L_1102D8EF:
    PUSH32(esp, esi); /* 0x1102D8EF: push esi */
    RECOMP_ICALL(MEM32(0x11069150)); /* 0x1102D8F0: call dword ptr [0x11069150] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102D8F6: mov esi, eax */
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1102D8F8: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax + 0x4); /* 0x1102D8FE: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x1102D901: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D90F; /* 0x1102D903: je 0x1102d90f */
L_1102D905:
    PUSH32(esp, edx); /* 0x1102D905: push edx */
    RECOMP_ICALL(MEM32(0x11069148)); /* 0x1102D906: call dword ptr [0x11069148] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102D90C: pop ecx */
    edx = eax; /* 0x1102D90D: mov edx, eax */
L_1102D90F:
    eax = esi; /* 0x1102D90F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102D911: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D912: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D913(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D913u);

L_1102D913:
    PUSH32(esp, ebp); /* 0x1102D913: push ebp */
    ebp = esp; /* 0x1102D914: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x1102D916: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1102D919: push ebx */
    PUSH32(esp, esi); /* 0x1102D91A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102D91B: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x8); /* 0x1102D91E: sub esi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1102D921: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1102D922: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x10); /* 0x1102D925: sub edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1102D928: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D93D; /* 0x1102D92A: jne 0x1102d93d */
L_1102D92C:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1102D92C: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax + 0x4); /* 0x1102D932: mov ebx, dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x11069150)); /* 0x1102D935: call dword ptr [0x11069150] */
    RECOMP_FLAGS_IN();
    goto L_1102D942; /* 0x1102D93B: jmp 0x1102d942 */
L_1102D93D:
    ebx = MEM32(eax + 0x4); /* 0x1102D93D: mov ebx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1102D940: mov eax, dword ptr [eax] */
L_1102D942:
    /* test ebx, ebx */ /* 0x1102D942: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D973; /* 0x1102D944: jne 0x1102d973 */
L_1102D946:
    eax = esi; /* 0x1102D946: mov eax, esi */
    /* cmp esi, edi */ /* 0x1102D948: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102D94E; /* 0x1102D94A: jl 0x1102d94e */
L_1102D94C:
    eax = edi; /* 0x1102D94C: mov eax, edi */
L_1102D94E:
    PUSH32(esp, eax); /* 0x1102D94E: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102D94F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D952: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B4AC); /* 0x1102D955: call 0x1103b4ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102D95A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102D95D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D9A6; /* 0x1102D95F: jne 0x1102d9a6 */
L_1102D961:
    /* cmp esi, edi */ /* 0x1102D961: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102D9A6; /* 0x1102D963: je 0x1102d9a6 */
L_1102D965:
    /* cmp esi, edi */ /* 0x1102D965: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102D967: setge al */
    eax = eax * 2 + (-0x1); /* 0x1102D96A: lea eax, [eax*2 - 1] */
    goto L_1102D9A6; /* 0x1102D971: jmp 0x1102d9a6 */
L_1102D973:
    PUSH32(esp, eax); /* 0x1102D973: push eax */
    PUSH32(esp, edi); /* 0x1102D974: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102D975: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1102D978: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D979: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x1102D97C: push 0x1000 */
    PUSH32(esp, ebx); /* 0x1102D981: push ebx */
    PUSH32(esp, 0); /* 0x1102D982: push 0 */
    RECOMP_CALL(sub_1103B4B2); /* 0x1102D984: call 0x1103b4b2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1102D989: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102D98C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D9A3; /* 0x1102D98E: jne 0x1102d9a3 */
L_1102D990:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102D990: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1102D996: mov dword ptr [eax], 0x16 */
    eax = 0x7FFFFFFFu; /* 0x1102D99C: mov eax, 0x7fffffff */
    goto L_1102D9A6; /* 0x1102D9A1: jmp 0x1102d9a6 */
L_1102D9A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1102D9A3: sub eax, 2 */
    _flag_k = FK_CMP;
L_1102D9A6:
    edi = POP32_VAL(esp); /* 0x1102D9A6: pop edi */
    esi = POP32_VAL(esp); /* 0x1102D9A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102D9A8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102D9A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D9AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102D9AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102D9ABu);

L_1102D9AB:
    PUSH32(esp, ebp); /* 0x1102D9AB: push ebp */
    ebp = esp; /* 0x1102D9AC: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x1102D9AE: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1102D9B1: push ebx */
    PUSH32(esp, esi); /* 0x1102D9B2: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102D9B3: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1102D9B6: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x10); /* 0x1102D9B9: sub esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1102D9BC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1102D9BD: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x8); /* 0x1102D9C0: sub edi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1102D9C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102D9DE; /* 0x1102D9C5: jne 0x1102d9de */
L_1102D9C7:
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1102D9C7: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x4); /* 0x1102D9CD: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x1102D9D0: mov dword ptr [ebp + 0xc], eax */
    RECOMP_ICALL(MEM32(0x11069150)); /* 0x1102D9D3: call dword ptr [0x11069150] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1102D9D9: mov ecx, dword ptr [ebp + 0xc] */
    goto L_1102D9E6; /* 0x1102D9DC: jmp 0x1102d9e6 */
L_1102D9DE:
    ecx = MEM32(eax + 0x4); /* 0x1102D9DE: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1102D9E1: mov eax, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102D9E3: mov dword ptr [ebp + 0xc], ecx */
L_1102D9E6:
    MEM32(ebp + 0x14) = eax; /* 0x1102D9E6: mov dword ptr [ebp + 0x14], eax */
    /* test ecx, ecx */ /* 0x1102D9E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DA08; /* 0x1102D9EB: jne 0x1102da08 */
L_1102D9ED:
    /* test eax, eax */ /* 0x1102D9ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DA08; /* 0x1102D9EF: jne 0x1102da08 */
L_1102D9F1:
    /* cmp esi, edi */ /* 0x1102D9F1: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102DA04; /* 0x1102D9F3: ja 0x1102da04 */
L_1102D9F5:
    PUSH32(esp, esi); /* 0x1102D9F5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102D9F6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102D9F9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B300); /* 0x1102D9FC: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102DA01: add esp, 0xc */
    _flag_k = FK_ADD;
L_1102DA04:
    ebx = esi; /* 0x1102DA04: mov ebx, esi */
    goto L_1102DA4C; /* 0x1102DA06: jmp 0x1102da4c */
L_1102DA08:
    PUSH32(esp, 1); /* 0x1102DA08: push 1 */
    PUSH32(esp, eax); /* 0x1102DA0A: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DA0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102DA0D: push eax */
    PUSH32(esp, eax); /* 0x1102DA0E: push eax */
    PUSH32(esp, esi); /* 0x1102DA0F: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102DA10: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x400u); /* 0x1102DA13: push 0x400 */
    PUSH32(esp, ecx); /* 0x1102DA18: push ecx */
    PUSH32(esp, eax); /* 0x1102DA19: push eax */
    RECOMP_CALL(sub_1103B4B8); /* 0x1102DA1A: call 0x1103b4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1102DA1F: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102DA22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DA4C; /* 0x1102DA24: je 0x1102da4c */
L_1102DA26:
    ebx = eax; /* 0x1102DA26: mov ebx, eax */
    /* cmp eax, edi */ /* 0x1102DA28: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102DA4C; /* 0x1102DA2A: jg 0x1102da4c */
L_1102DA2C:
    eax = MEM32(ebp + 0xC); /* 0x1102DA2C: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1102DA2F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102DA31: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1102DA34: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102DA35: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102DA38: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102DA39: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x400u); /* 0x1102DA3C: push 0x400 */
    PUSH32(esp, eax); /* 0x1102DA41: push eax */
    PUSH32(esp, 0); /* 0x1102DA42: push 0 */
    RECOMP_CALL(sub_1103B4B8); /* 0x1102DA44: call 0x1103b4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1102DA49: add esp, 0x24 */
    _flag_k = FK_ADD;
L_1102DA4C:
    edi = POP32_VAL(esp); /* 0x1102DA4C: pop edi */
    esi = POP32_VAL(esp); /* 0x1102DA4D: pop esi */
    eax = ebx; /* 0x1102DA4E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1102DA50: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102DA51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DA52: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DA53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DA53u);

L_1102DA53:
    PUSH32(esp, ebp); /* 0x1102DA53: push ebp */
    ebp = esp; /* 0x1102DA54: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1102DA56: push ebx */
    PUSH32(esp, esi); /* 0x1102DA57: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102DA58: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102DA5B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1102DA5D: push edi */
    PUSH32(esp, 0xAu); /* 0x1102DA5E: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1102DA60: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DA61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x1102DA63: mov dword ptr [esi], ebx */
    edi = esi + 0x4; /* 0x1102DA65: lea edi, [esi + 4] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1102DA68: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    RECOMP_ICALL(MEM32(0x1106915C)); /* 0x1102DA6A: call dword ptr [0x1106915c] */
    RECOMP_FLAGS_IN();
    edi = esi; /* 0x1102DA70: mov edi, esi */
    MEM32(edi) = eax; /* 0x1102DA72: mov dword ptr [edi], eax */
    RECOMP_ICALL(MEM32(0x11069308)); /* 0x1102DA74: call dword ptr [0x11069308] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1102DA7A: mov dword ptr [esi + 4], eax */
    RECOMP_ICALL(MEM32(0x1106914C)); /* 0x1102DA7D: call dword ptr [0x1106914c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102DA83: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1102DA85: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102DA88: sete cl */
    MEM32(edi + 0x8) = ecx; /* 0x1102DA8B: mov dword ptr [edi + 8], ecx */
    /* test ecx, ecx */ /* 0x1102DA8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DAB9; /* 0x1102DA90: jne 0x1102dab9 */
L_1102DA92:
    PUSH32(esp, ebx); /* 0x1102DA92: push ebx */
    RECOMP_ICALL(MEM32(0x11069160)); /* 0x1102DA93: call dword ptr [0x11069160] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DA99: pop ecx */
    /* test eax, eax */ /* 0x1102DA9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DAB0; /* 0x1102DA9C: je 0x1102dab0 */
L_1102DA9E:
    esi = ebx; /* 0x1102DA9E: mov esi, ebx */
    ecx = ebx; /* 0x1102DAA0: mov ecx, ebx */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x1102DAA2: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1102DAA5: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, 1); /* 0x1102DAA8: mov dl, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1102DAAA: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x1102DAAA: shl dl, cl */
    _flag_a = (uint32_t)((MEM8(esi + edi + 0xC) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(esi + edi + 0xC) | LO8(edx))) << 24;
    MEM8(esi + edi + 0xC) = (uint8_t)(MEM8(esi + edi + 0xC) | LO8(edx)); /* 0x1102DAAC: or byte ptr [esi + edi + 0xc], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1102DAB0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102DAB0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 0x100u */ /* 0x1102DAB1: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102DA92; /* 0x1102DAB7: jl 0x1102da92 */
L_1102DAB9:
    eax = edi; /* 0x1102DAB9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102DABB: pop edi */
    esi = POP32_VAL(esp); /* 0x1102DABC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102DABD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102DABE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DABF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DAC0u);

L_1102DAC0:
    PUSH32(esp, ebp); /* 0x1102DAC0: push ebp */
    ebp = esp; /* 0x1102DAC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102DAC3: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x1102DAC4: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1102DAC7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102DACA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102DACB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1102DACD: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DAE7; /* 0x1102DAD0: je 0x1102dae7 */
L_1102DAD2:
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1102DAD2: mov ax, word ptr [ebp + 0xc] */
    edx = 0xFFu; /* 0x1102DAD6: mov edx, 0xff */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1102DADB: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1102DB0B; /* 0x1102DADE: ja 0x1102db0b */
L_1102DAE0:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1102DAE0: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DAE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102DAE4: inc eax */
    _flag_k = FK_INC;
    goto L_1102DB1A; /* 0x1102DAE5: jmp 0x1102db1a */
L_1102DAE7:
    edx = ebp + (-0x4); /* 0x1102DAE7: lea edx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102DAEA: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edx); /* 0x1102DAED: push edx */
    PUSH32(esp, esi); /* 0x1102DAEE: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1102DAEF: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1102DAF2: push ecx */
    PUSH32(esp, 1); /* 0x1102DAF3: push 1 */
    ecx = ebp + 0xC; /* 0x1102DAF5: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102DAF8: push ecx */
    PUSH32(esp, esi); /* 0x1102DAF9: push esi */
    PUSH32(esp, MEM32(eax)); /* 0x1102DAFA: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x11069060)); /* 0x1102DAFC: call dword ptr [0x11069060] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DB02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DB0B; /* 0x1102DB04: je 0x1102db0b */
L_1102DB06:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1102DB06: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DB1A; /* 0x1102DB09: je 0x1102db1a */
L_1102DB0B:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102DB0B: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1102DB11: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102DB17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102DB1A:
    esi = POP32_VAL(esp); /* 0x1102DB1A: pop esi */
    esp = ebp; /* 0x1102DB1B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DB1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DB1E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DB1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DB1Fu);

    goto L_1102DB1F;
L_1102DAC0:
    PUSH32(esp, ebp); /* 0x1102DAC0: push ebp */
    ebp = esp; /* 0x1102DAC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102DAC3: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x1102DAC4: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1102DAC7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102DACA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102DACB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1102DACD: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DAE7; /* 0x1102DAD0: je 0x1102dae7 */
L_1102DAD2:
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1102DAD2: mov ax, word ptr [ebp + 0xc] */
    edx = 0xFFu; /* 0x1102DAD6: mov edx, 0xff */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1102DADB: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1102DB0B; /* 0x1102DADE: ja 0x1102db0b */
L_1102DAE0:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1102DAE0: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DAE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102DAE4: inc eax */
    _flag_k = FK_INC;
    goto L_1102DB1A; /* 0x1102DAE5: jmp 0x1102db1a */
L_1102DAE7:
    edx = ebp + (-0x4); /* 0x1102DAE7: lea edx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102DAEA: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edx); /* 0x1102DAED: push edx */
    PUSH32(esp, esi); /* 0x1102DAEE: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1102DAEF: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1102DAF2: push ecx */
    PUSH32(esp, 1); /* 0x1102DAF3: push 1 */
    ecx = ebp + 0xC; /* 0x1102DAF5: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102DAF8: push ecx */
    PUSH32(esp, esi); /* 0x1102DAF9: push esi */
    PUSH32(esp, MEM32(eax)); /* 0x1102DAFA: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x11069060)); /* 0x1102DAFC: call dword ptr [0x11069060] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DB02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DB0B; /* 0x1102DB04: je 0x1102db0b */
L_1102DB06:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1102DB06: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DB1A; /* 0x1102DB09: je 0x1102db1a */
L_1102DB0B:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102DB0B: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1102DB11: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102DB17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102DB1A:
    esi = POP32_VAL(esp); /* 0x1102DB1A: pop esi */
    esp = ebp; /* 0x1102DB1B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DB1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DB1E: ret  */
L_1102DB1F:
    PUSH32(esp, ebp); /* 0x1102DB1F: push ebp */
    ebp = esp; /* 0x1102DB20: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102DB22: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1102DAC0; /* 0x1102DB23: jmp 0x1102dac0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102DB28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DB28u);

L_1102DB28:
    PUSH32(esp, ebp); /* 0x1102DB28: push ebp */
    ebp = esp; /* 0x1102DB29: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102DB2B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069058)); /* 0x1102DB2E: call dword ptr [0x11069058] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102DB34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DB35: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DB36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DB36u);

L_1102DB36:
    PUSH32(esp, ebp); /* 0x1102DB36: push ebp */
    ebp = esp; /* 0x1102DB37: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1102DB39: sub esp, 0x414 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DB3F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DB44: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DB46: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DB49: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x414); /* 0x1102DB4C: lea ecx, [ebp - 0x414] */
    PUSH32(esp, esi); /* 0x1102DB52: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102DB53: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102DB56: push ecx */
    PUSH32(esp, eax); /* 0x1102DB57: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102DB58: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DB5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DB5E: pop ecx */
    /* test eax, eax */ /* 0x1102DB5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DB91; /* 0x1102DB61: je 0x1102db91 */
L_1102DB63:
    eax = ebp + (-0x20C); /* 0x1102DB63: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DB69: push eax */
    PUSH32(esp, esi); /* 0x1102DB6A: push esi */
    RECOMP_CALL(sub_1102E813); /* 0x1102DB6B: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DB70: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DB71: pop ecx */
    /* test eax, eax */ /* 0x1102DB72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DB91; /* 0x1102DB74: je 0x1102db91 */
L_1102DB76:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102DB76: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20C); /* 0x1102DB79: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DB7F: push eax */
    eax = ebp + (-0x414); /* 0x1102DB80: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102DB86: push eax */
    RECOMP_CALL(sub_1102DBA6); /* 0x1102DB87: call 0x1102dba6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102DB8C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102DB97; /* 0x1102DB8F: jmp 0x1102db97 */
L_1102DB91:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102DB91: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
L_1102DB97:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DB97: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DB9A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102DB9C: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DB9D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DBA2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DBA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DBA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DBA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DBA6u);

L_1102DBA6:
    PUSH32(esp, ebp); /* 0x1102DBA6: push ebp */
    ebp = esp; /* 0x1102DBA7: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1102DBA9: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO8(eax); /* 0x1102DBAC: movzx eax, al */
    PUSH32(esp, eax); /* 0x1102DBAF: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102DBB0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102DBB3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069038)); /* 0x1102DBB6: call dword ptr [0x11069038] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DBBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DBC4; /* 0x1102DBBE: je 0x1102dbc4 */
L_1102DBC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DBC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102DBC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DBC3: ret  */
L_1102DBC4:
    ebp = POP32_VAL(esp); /* 0x1102DBC4: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1106903C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102DBCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DBCBu);

L_1102DBCB:
    PUSH32(esp, ebp); /* 0x1102DBCB: push ebp */
    ebp = esp; /* 0x1102DBCC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x1102DBCE: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DBD4: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DBD9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DBDB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102DBDE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102DBDF: mov esi, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102DBE2: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DBE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DBF3; /* 0x1102DBEA: je 0x1102dbf3 */
L_1102DBEC:
    PUSH32(esp, 0x110048B6u); /* 0x1102DBEC: push 0x110048b6 */
    goto L_1102DC17; /* 0x1102DBF1: jmp 0x1102dc17 */
L_1102DBF3:
    eax = ebp + (-0x108); /* 0x1102DBF3: lea eax, [ebp - 0x108] */
    PUSH32(esp, 0x104u); /* 0x1102DBF9: push 0x104 */
    PUSH32(esp, eax); /* 0x1102DBFE: push eax */
    RECOMP_ICALL(MEM32(0x1106918C)); /* 0x1102DBFF: call dword ptr [0x1106918c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DC05: pop ecx */
    /* test eax, eax */ /* 0x1102DC06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x110048B6u; /* 0x1102DC08: mov eax, 0x110048b6 */
    ecx = POP32_VAL(esp); /* 0x1102DC0D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DC16; /* 0x1102DC0E: je 0x1102dc16 */
L_1102DC10:
    eax = ebp + (-0x108); /* 0x1102DC10: lea eax, [ebp - 0x108] */
L_1102DC16:
    PUSH32(esp, eax); /* 0x1102DC16: push eax */
L_1102DC17:
    PUSH32(esp, esi); /* 0x1102DC17: push esi */
    RECOMP_CALL(sub_1102E6F1); /* 0x1102DC18: call 0x1102e6f1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DC1D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DC1E: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DC1F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DC22: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102DC24: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DC25: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DC2A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DC2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DC2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DC2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DC2Eu);

L_1102DC2E:
    PUSH32(esp, ebp); /* 0x1102DC2E: push ebp */
    ebp = esp; /* 0x1102DC2F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102DC31: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DC37: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DC3C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DC3E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102DC41: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102DC42: mov esi, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102DC45: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DC4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DC56; /* 0x1102DC4D: je 0x1102dc56 */
L_1102DC4F:
    PUSH32(esp, 0x11003218u); /* 0x1102DC4F: push 0x11003218 */
    goto L_1102DC7A; /* 0x1102DC54: jmp 0x1102dc7a */
L_1102DC56:
    eax = ebp + (-0x20C); /* 0x1102DC56: lea eax, [ebp - 0x20c] */
    PUSH32(esp, 0x104u); /* 0x1102DC5C: push 0x104 */
    PUSH32(esp, eax); /* 0x1102DC61: push eax */
    RECOMP_ICALL(MEM32(0x11069178)); /* 0x1102DC62: call dword ptr [0x11069178] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DC68: pop ecx */
    /* test eax, eax */ /* 0x1102DC69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x11003218u; /* 0x1102DC6B: mov eax, 0x11003218 */
    ecx = POP32_VAL(esp); /* 0x1102DC70: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DC79; /* 0x1102DC71: je 0x1102dc79 */
L_1102DC73:
    eax = ebp + (-0x20C); /* 0x1102DC73: lea eax, [ebp - 0x20c] */
L_1102DC79:
    PUSH32(esp, eax); /* 0x1102DC79: push eax */
L_1102DC7A:
    PUSH32(esp, esi); /* 0x1102DC7A: push esi */
    RECOMP_CALL(sub_1102E70D); /* 0x1102DC7B: call 0x1102e70d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DC80: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DC81: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DC82: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DC85: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102DC87: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DC88: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DC8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DC8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DC90: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DC91u);

L_1102DC91:
    PUSH32(esp, ebp); /* 0x1102DC91: push ebp */
    ebp = esp; /* 0x1102DC92: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102DC94: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DC9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DCA2; /* 0x1102DC9C: je 0x1102dca2 */
L_1102DC9E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1102DC9E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x1102DCA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DCA1: ret  */
L_1102DCA2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102DCA2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069190)); /* 0x1102DCA5: call dword ptr [0x11069190] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102DCAB: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102DCAD: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102DCAE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102DCB0: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1102DCB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DCB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DCB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DCB3u);

L_1102DCB3:
    PUSH32(esp, ebp); /* 0x1102DCB3: push ebp */
    ebp = esp; /* 0x1102DCB4: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102DCB6: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DCBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DCC4; /* 0x1102DCBE: je 0x1102dcc4 */
L_1102DCC0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1102DCC0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x1102DCC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DCC3: ret  */
L_1102DCC4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102DCC4: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106917C)); /* 0x1102DCC7: call dword ptr [0x1106917c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102DCCD: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102DCCF: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102DCD0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102DCD2: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1102DCD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DCD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DCD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DCD5u);

L_1102DCD5:
    PUSH32(esp, ebp); /* 0x1102DCD5: push ebp */
    ebp = esp; /* 0x1102DCD6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1102DCD8: sub esp, 0x414 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DCDE: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DCE3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DCE5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DCE8: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x414); /* 0x1102DCEB: lea ecx, [ebp - 0x414] */
    PUSH32(esp, esi); /* 0x1102DCF1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102DCF2: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102DCF5: push ecx */
    PUSH32(esp, eax); /* 0x1102DCF6: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102DCF7: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DCFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DCFD: pop ecx */
    /* test eax, eax */ /* 0x1102DCFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DD2C; /* 0x1102DD00: je 0x1102dd2c */
L_1102DD02:
    eax = ebp + (-0x20C); /* 0x1102DD02: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DD08: push eax */
    PUSH32(esp, esi); /* 0x1102DD09: push esi */
    RECOMP_CALL(sub_1102E813); /* 0x1102DD0A: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DD0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DD10: pop ecx */
    /* test eax, eax */ /* 0x1102DD11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DD2C; /* 0x1102DD13: je 0x1102dd2c */
L_1102DD15:
    eax = ebp + (-0x20C); /* 0x1102DD15: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DD1B: push eax */
    eax = ebp + (-0x414); /* 0x1102DD1C: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102DD22: push eax */
    RECOMP_CALL(sub_1102DD3E); /* 0x1102DD23: call 0x1102dd3e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DD28: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DD29: pop ecx */
    goto L_1102DD2F; /* 0x1102DD2A: jmp 0x1102dd2f */
L_1102DD2C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102DD2C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102DD2F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DD2F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DD32: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102DD34: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DD35: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DD3A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DD3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DD3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DD3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DD3Eu);

L_1102DD3E:
    PUSH32(esp, ebp); /* 0x1102DD3E: push ebp */
    ebp = esp; /* 0x1102DD3F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x1102DD41: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DD44: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DD49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DD4B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1102DD4E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1102DD51: push ebx */
    PUSH32(esp, esi); /* 0x1102DD52: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102DD53: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102DD56: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x30u); /* 0x1102DD58: push 0x30 */
    MEM32(ebp + (-0x74)) = eax; /* 0x1102DD5A: mov dword ptr [ebp - 0x74], eax */
    eax = ebp + (-0x68); /* 0x1102DD5D: lea eax, [ebp - 0x68] */
    PUSH32(esp, ebx); /* 0x1102DD60: push ebx */
    PUSH32(esp, eax); /* 0x1102DD61: push eax */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x1102DD62: mov dword ptr [ebp - 0x6c], ebx */
    RECOMP_CALL(sub_1103B49A); /* 0x1102DD65: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x30u); /* 0x1102DD6A: push 0x30 */
    eax = ebp + (-0x34); /* 0x1102DD6C: lea eax, [ebp - 0x34] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1102DD6F: mov dword ptr [ebp - 0x38], ebx */
    PUSH32(esp, ebx); /* 0x1102DD72: push ebx */
    PUSH32(esp, eax); /* 0x1102DD73: push eax */
    RECOMP_CALL(sub_1103B49A); /* 0x1102DD74: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102DD79: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x6E)) = (uint8_t)(LO8(ebx)); /* 0x1102DD7C: mov byte ptr [ebp - 0x6e], bl */
    MEM8(ebp + (-0x6D)) = (uint8_t)(LO8(ebx)); /* 0x1102DD7F: mov byte ptr [ebp - 0x6d], bl */
    PUSH32(esp, ebx); /* 0x1102DD82: push ebx */
    PUSH32(esp, ebx); /* 0x1102DD83: push ebx */
    PUSH32(esp, 3); /* 0x1102DD84: push 3 */
    PUSH32(esp, ebx); /* 0x1102DD86: push ebx */
    PUSH32(esp, 7); /* 0x1102DD87: push 7 */
    PUSH32(esp, 0x80u); /* 0x1102DD89: push 0x80 */
    PUSH32(esp, esi); /* 0x1102DD8E: push esi */
    RECOMP_ICALL(MEM32(0x1106905C)); /* 0x1102DD8F: call dword ptr [0x1106905c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102DD95: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1102DD97: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DDB4; /* 0x1102DD9A: je 0x1102ddb4 */
L_1102DD9C:
    eax = ebp + (-0x6C); /* 0x1102DD9C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1102DD9F: push eax */
    PUSH32(esp, esi); /* 0x1102DDA0: push esi */
    RECOMP_ICALL(MEM32(0x11069044)); /* 0x1102DDA1: call dword ptr [0x11069044] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DDA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102DDA9: push esi */
    MEM8(ebp + (-0x6E)) = (uint8_t)((TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102DDAA: setne byte ptr [ebp - 0x6e] */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102DDAE: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
L_1102DDB4:
    PUSH32(esp, ebx); /* 0x1102DDB4: push ebx */
    PUSH32(esp, ebx); /* 0x1102DDB5: push ebx */
    PUSH32(esp, 3); /* 0x1102DDB6: push 3 */
    PUSH32(esp, ebx); /* 0x1102DDB8: push ebx */
    PUSH32(esp, 7); /* 0x1102DDB9: push 7 */
    PUSH32(esp, 0x80u); /* 0x1102DDBB: push 0x80 */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x1102DDC0: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(MEM32(0x1106905C)); /* 0x1102DDC3: call dword ptr [0x1106905c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102DDC9: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1102DDCB: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DDE8; /* 0x1102DDCE: je 0x1102dde8 */
L_1102DDD0:
    eax = ebp + (-0x38); /* 0x1102DDD0: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1102DDD3: push eax */
    PUSH32(esp, esi); /* 0x1102DDD4: push esi */
    RECOMP_ICALL(MEM32(0x11069044)); /* 0x1102DDD5: call dword ptr [0x11069044] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DDDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102DDDD: push esi */
    MEM8(ebp + (-0x6D)) = (uint8_t)((TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102DDDE: setne byte ptr [ebp - 0x6d] */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102DDE2: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
L_1102DDE8:
    /* cmp MEM8(ebp + (-0x6E)), LO8(ebx) */ /* 0x1102DDE8: cmp byte ptr [ebp - 0x6e], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x6E))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102DDF7; /* 0x1102DDEB: jne 0x1102ddf7 */
L_1102DDED:
    /* cmp MEM8(ebp + (-0x6D)), LO8(ebx) */ /* 0x1102DDED: cmp byte ptr [ebp - 0x6d], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x6D))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102DE1B; /* 0x1102DDF0: jne 0x1102de1b */
L_1102DDF2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102DDF2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102DE1D; /* 0x1102DDF5: jmp 0x1102de1d */
L_1102DDF7:
    /* cmp MEM8(ebp + (-0x6D)), LO8(ebx) */ /* 0x1102DDF7: cmp byte ptr [ebp - 0x6d], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x6D))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DE1B; /* 0x1102DDFA: je 0x1102de1b */
L_1102DDFC:
    eax = MEM32(ebp + (-0x50)); /* 0x1102DDFC: mov eax, dword ptr [ebp - 0x50] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1102DDFF: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102DE17; /* 0x1102DE02: jne 0x1102de17 */
L_1102DE04:
    eax = MEM32(ebp + (-0x40)); /* 0x1102DE04: mov eax, dword ptr [ebp - 0x40] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1102DE07: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102DE17; /* 0x1102DE0A: jne 0x1102de17 */
L_1102DE0C:
    eax = MEM32(ebp + (-0x3C)); /* 0x1102DE0C: mov eax, dword ptr [ebp - 0x3c] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1102DE0F: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102DE17; /* 0x1102DE12: jne 0x1102de17 */
L_1102DE14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102DE14: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102DE16: inc ebx */
    _flag_k = FK_INC;
L_1102DE17:
    eax = ebx; /* 0x1102DE17: mov eax, ebx */
    goto L_1102DE1D; /* 0x1102DE19: jmp 0x1102de1d */
L_1102DE1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DE1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102DE1D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DE1D: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1102DE20: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DE21: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102DE23: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DE24: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DE29: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DE2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DE2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DE2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DE2Du);

L_1102DE2D:
    PUSH32(esp, ebp); /* 0x1102DE2D: push ebp */
    ebp = esp; /* 0x1102DE2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102DE30: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DE36: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DE3B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DE3D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DE40: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20C); /* 0x1102DE43: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x1102DE49: push ecx */
    PUSH32(esp, eax); /* 0x1102DE4A: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102DE4B: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DE50: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DE51: pop ecx */
    /* test eax, eax */ /* 0x1102DE52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DE5A; /* 0x1102DE54: jne 0x1102de5a */
L_1102DE56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102DE56: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102DE67; /* 0x1102DE58: jmp 0x1102de67 */
L_1102DE5A:
    eax = ebp + (-0x20C); /* 0x1102DE5A: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DE60: push eax */
    RECOMP_CALL(sub_1102DE75); /* 0x1102DE61: call 0x1102de75 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DE66: pop ecx */
L_1102DE67:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DE67: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DE6A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102DE6C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DE71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DE73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DE74: ret  */
    RECOMP_REGS_OUT();
}
