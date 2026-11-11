#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007C7860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7860u);

L_007C7860:
    PUSH32(esp, ebp); /* 0x007C7860: push ebp */
    ebp = esp; /* 0x007C7861: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7863: push ecx */
    /* cmp MEM32(0x865118), 0x10u */ /* 0x007C7864: cmp dword ptr [0x865118], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865118)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7895; /* 0x007C786B: jb 0x7c7895 */
L_007C786D:
    PUSH32(esp, esi); /* 0x007C786D: push esi */
    esi = MEM32(0x865104); /* 0x007C786E: mov esi, dword ptr [0x865104] */
    ecx = ebp + (-0x1); /* 0x007C7874: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7877: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C787C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C787D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7882: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7885: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C788A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C788B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7891: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7894: pop esi */
L_007C7895:
    MEM32(0x865118) = 0xFu; /* 0x007C7895: mov dword ptr [0x865118], 0xf */
    MEM32(0x865114) = 0; /* 0x007C789F: mov dword ptr [0x865114], 0 */
    MEM8(0x865104) = (uint8_t)(0); /* 0x007C78A9: mov byte ptr [0x865104], 0 */
    esp = ebp; /* 0x007C78B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C78B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C78B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C78C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C78C0u);

L_007C78C0:
    PUSH32(esp, ebp); /* 0x007C78C0: push ebp */
    ebp = esp; /* 0x007C78C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C78C3: push ecx */
    /* cmp MEM32(0x865070), 0x10u */ /* 0x007C78C4: cmp dword ptr [0x865070], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865070)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C78F5; /* 0x007C78CB: jb 0x7c78f5 */
L_007C78CD:
    PUSH32(esp, esi); /* 0x007C78CD: push esi */
    esi = MEM32(0x86505C); /* 0x007C78CE: mov esi, dword ptr [0x86505c] */
    ecx = ebp + (-0x1); /* 0x007C78D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C78D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C78DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C78DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C78E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C78E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C78EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C78EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C78F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C78F4: pop esi */
L_007C78F5:
    MEM32(0x865070) = 0xFu; /* 0x007C78F5: mov dword ptr [0x865070], 0xf */
    MEM32(0x86506C) = 0; /* 0x007C78FF: mov dword ptr [0x86506c], 0 */
    MEM8(0x86505C) = (uint8_t)(0); /* 0x007C7909: mov byte ptr [0x86505c], 0 */
    esp = ebp; /* 0x007C7910: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7913: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7920u);

L_007C7920:
    PUSH32(esp, ebp); /* 0x007C7920: push ebp */
    ebp = esp; /* 0x007C7921: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7923: push ecx */
    /* cmp MEM32(0x8650A0), 0x10u */ /* 0x007C7924: cmp dword ptr [0x8650a0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8650A0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7955; /* 0x007C792B: jb 0x7c7955 */
L_007C792D:
    PUSH32(esp, esi); /* 0x007C792D: push esi */
    esi = MEM32(0x86508C); /* 0x007C792E: mov esi, dword ptr [0x86508c] */
    ecx = ebp + (-0x1); /* 0x007C7934: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7937: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C793C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C793D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7942: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7945: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C794A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C794B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7951: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7954: pop esi */
L_007C7955:
    MEM32(0x8650A0) = 0xFu; /* 0x007C7955: mov dword ptr [0x8650a0], 0xf */
    MEM32(0x86509C) = 0; /* 0x007C795F: mov dword ptr [0x86509c], 0 */
    MEM8(0x86508C) = (uint8_t)(0); /* 0x007C7969: mov byte ptr [0x86508c], 0 */
    esp = ebp; /* 0x007C7970: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7972: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7973: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7980u);

L_007C7980:
    PUSH32(esp, ebp); /* 0x007C7980: push ebp */
    ebp = esp; /* 0x007C7981: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7983: push ecx */
    /* cmp MEM32(0x8650B8), 0x10u */ /* 0x007C7984: cmp dword ptr [0x8650b8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8650B8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C79B5; /* 0x007C798B: jb 0x7c79b5 */
L_007C798D:
    PUSH32(esp, esi); /* 0x007C798D: push esi */
    esi = MEM32(0x8650A4); /* 0x007C798E: mov esi, dword ptr [0x8650a4] */
    ecx = ebp + (-0x1); /* 0x007C7994: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7997: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C799C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C799D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C79A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C79A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C79AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C79AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C79B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C79B4: pop esi */
L_007C79B5:
    MEM32(0x8650B8) = 0xFu; /* 0x007C79B5: mov dword ptr [0x8650b8], 0xf */
    MEM32(0x8650B4) = 0; /* 0x007C79BF: mov dword ptr [0x8650b4], 0 */
    MEM8(0x8650A4) = (uint8_t)(0); /* 0x007C79C9: mov byte ptr [0x8650a4], 0 */
    esp = ebp; /* 0x007C79D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C79D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C79D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C79E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C79E0u);

L_007C79E0:
    PUSH32(esp, ebp); /* 0x007C79E0: push ebp */
    ebp = esp; /* 0x007C79E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C79E3: push ecx */
    /* cmp MEM32(0x865058), 0x10u */ /* 0x007C79E4: cmp dword ptr [0x865058], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865058)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7A15; /* 0x007C79EB: jb 0x7c7a15 */
L_007C79ED:
    PUSH32(esp, esi); /* 0x007C79ED: push esi */
    esi = MEM32(0x865044); /* 0x007C79EE: mov esi, dword ptr [0x865044] */
    ecx = ebp + (-0x1); /* 0x007C79F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C79F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C79FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C79FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7A02: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7A05: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7A0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7A0B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7A11: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7A14: pop esi */
L_007C7A15:
    MEM32(0x865058) = 0xFu; /* 0x007C7A15: mov dword ptr [0x865058], 0xf */
    MEM32(0x865054) = 0; /* 0x007C7A1F: mov dword ptr [0x865054], 0 */
    MEM8(0x865044) = (uint8_t)(0); /* 0x007C7A29: mov byte ptr [0x865044], 0 */
    esp = ebp; /* 0x007C7A30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7A32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7A33: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7A40u);

L_007C7A40:
    PUSH32(esp, ebp); /* 0x007C7A40: push ebp */
    ebp = esp; /* 0x007C7A41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7A43: push ecx */
    /* cmp MEM32(0x865088), 0x10u */ /* 0x007C7A44: cmp dword ptr [0x865088], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865088)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7A75; /* 0x007C7A4B: jb 0x7c7a75 */
L_007C7A4D:
    PUSH32(esp, esi); /* 0x007C7A4D: push esi */
    esi = MEM32(0x865074); /* 0x007C7A4E: mov esi, dword ptr [0x865074] */
    ecx = ebp + (-0x1); /* 0x007C7A54: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7A57: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7A5C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7A5D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7A62: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7A65: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7A6A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7A6B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7A71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7A74: pop esi */
L_007C7A75:
    MEM32(0x865088) = 0xFu; /* 0x007C7A75: mov dword ptr [0x865088], 0xf */
    MEM32(0x865084) = 0; /* 0x007C7A7F: mov dword ptr [0x865084], 0 */
    MEM8(0x865074) = (uint8_t)(0); /* 0x007C7A89: mov byte ptr [0x865074], 0 */
    esp = ebp; /* 0x007C7A90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7A92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7A93: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7AA0u);

L_007C7AA0:
    PUSH32(esp, ebp); /* 0x007C7AA0: push ebp */
    ebp = esp; /* 0x007C7AA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C7AA3: push -1 */
    PUSH32(esp, 0x0079599Eu); /* 0x007C7AA5: push 0x79599e */
    eax = MEM32(FS_BASE + (0)); /* 0x007C7AAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C7AB0: push eax */
    eax = MEM32(0x855000); /* 0x007C7AB1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C7AB6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C7AB8: push eax */
    eax = ebp + (-0xC); /* 0x007C7AB9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C7ABC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007C7AC2: mov dword ptr [ebp - 4], 1 */
    ecx = 0x008F8C30u; /* 0x007C7AC9: mov ecx, 0x8f8c30 */
    RECOMP_CALL(sub_00502790); /* 0x007C7ACE: call 0x502790 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x007C7AD3: mov byte ptr [ebp - 4], 0 */
    ecx = 0x008F8544u; /* 0x007C7AD7: mov ecx, 0x8f8544 */
    RECOMP_CALL(sub_005026F0); /* 0x007C7ADC: call 0x5026f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C7AE1: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x005025D0u); /* 0x007C7AE8: push 0x5025d0 */
    PUSH32(esp, 0x80u); /* 0x007C7AED: push 0x80 */
    PUSH32(esp, 0xA4u); /* 0x007C7AF2: push 0xa4 */
    PUSH32(esp, 0x008F3334u); /* 0x007C7AF7: push 0x8f3334 */
    RECOMP_CALL(sub_0077F628); /* 0x007C7AFC: call 0x77f628 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x007C7B01: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C7B04: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C7B0B: pop ecx */
    esp = ebp; /* 0x007C7B0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7B0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7B0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7B10u);

L_007C7B10:
    PUSH32(esp, ebp); /* 0x007C7B10: push ebp */
    ebp = esp; /* 0x007C7B11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7B13: push ecx */
    /* cmp MEM32(0x8650D0), 0x10u */ /* 0x007C7B14: cmp dword ptr [0x8650d0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8650D0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7B45; /* 0x007C7B1B: jb 0x7c7b45 */
L_007C7B1D:
    PUSH32(esp, esi); /* 0x007C7B1D: push esi */
    esi = MEM32(0x8650BC); /* 0x007C7B1E: mov esi, dword ptr [0x8650bc] */
    ecx = ebp + (-0x1); /* 0x007C7B24: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7B27: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7B2C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7B2D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7B32: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7B35: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7B3A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7B3B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7B41: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7B44: pop esi */
L_007C7B45:
    MEM32(0x8650D0) = 0xFu; /* 0x007C7B45: mov dword ptr [0x8650d0], 0xf */
    MEM32(0x8650CC) = 0; /* 0x007C7B4F: mov dword ptr [0x8650cc], 0 */
    MEM8(0x8650BC) = (uint8_t)(0); /* 0x007C7B59: mov byte ptr [0x8650bc], 0 */
    esp = ebp; /* 0x007C7B60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7B62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7B63: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7B70u);

L_007C7B70:
    PUSH32(esp, ebp); /* 0x007C7B70: push ebp */
    ebp = esp; /* 0x007C7B71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007C7B73: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x007C7B76: push edi */
    edi = MEM32(0x8F8C90); /* 0x007C7B77: mov edi, dword ptr [0x8f8c90] */
    /* test edi, edi */ /* 0x007C7B7D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C7BD7; /* 0x007C7B7F: je 0x7c7bd7 */
L_007C7B81:
    PUSH32(esp, esi); /* 0x007C7B81: push esi */
    esi = MEM32(0x8F8C94); /* 0x007C7B82: mov esi, dword ptr [0x8f8c94] */
    eax = ebp + (-0x1); /* 0x007C7B88: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x007C7B8B: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x007C7B8C: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x5))); /* 0x007C7B91: push dword ptr [ebp - 5] */
    edx = esi; /* 0x007C7B94: mov edx, esi */
    PUSH32(esp, ecx); /* 0x007C7B96: push ecx */
    ecx = edi; /* 0x007C7B97: mov ecx, edi */
    RECOMP_CALL(sub_005217F0); /* 0x007C7B99: call 0x5217f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007C7B9E: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x1); /* 0x007C7BA1: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7BA4: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x8F8C90)); /* 0x007C7BA9: push dword ptr [0x8f8c90] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7BAF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7BB5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8F8C90) = 0; /* 0x007C7BB8: mov dword ptr [0x8f8c90], 0 */
    MEM32(0x8F8C94) = 0; /* 0x007C7BC2: mov dword ptr [0x8f8c94], 0 */
    MEM32(0x8F8C98) = 0; /* 0x007C7BCC: mov dword ptr [0x8f8c98], 0 */
    esi = POP32_VAL(esp); /* 0x007C7BD6: pop esi */
L_007C7BD7:
    edi = POP32_VAL(esp); /* 0x007C7BD7: pop edi */
    esp = ebp; /* 0x007C7BD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7BDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7BDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7BE0u);

L_007C7BE0:
    PUSH32(esp, ebp); /* 0x007C7BE0: push ebp */
    ebp = esp; /* 0x007C7BE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7BE3: push ecx */
    /* cmp MEM32(0x86519C), 0x10u */ /* 0x007C7BE4: cmp dword ptr [0x86519c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86519C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7C15; /* 0x007C7BEB: jb 0x7c7c15 */
L_007C7BED:
    PUSH32(esp, esi); /* 0x007C7BED: push esi */
    esi = MEM32(0x865188); /* 0x007C7BEE: mov esi, dword ptr [0x865188] */
    ecx = ebp + (-0x1); /* 0x007C7BF4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7BF7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7BFC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7BFD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7C02: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7C05: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7C0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7C0B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7C11: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7C14: pop esi */
L_007C7C15:
    MEM32(0x86519C) = 0xFu; /* 0x007C7C15: mov dword ptr [0x86519c], 0xf */
    MEM32(0x865198) = 0; /* 0x007C7C1F: mov dword ptr [0x865198], 0 */
    MEM8(0x865188) = (uint8_t)(0); /* 0x007C7C29: mov byte ptr [0x865188], 0 */
    esp = ebp; /* 0x007C7C30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7C32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7C33: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7C40u);

L_007C7C40:
    PUSH32(esp, ebp); /* 0x007C7C40: push ebp */
    ebp = esp; /* 0x007C7C41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7C43: push ecx */
    /* cmp MEM32(0x8651B4), 0x10u */ /* 0x007C7C44: cmp dword ptr [0x8651b4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8651B4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7C75; /* 0x007C7C4B: jb 0x7c7c75 */
L_007C7C4D:
    PUSH32(esp, esi); /* 0x007C7C4D: push esi */
    esi = MEM32(0x8651A0); /* 0x007C7C4E: mov esi, dword ptr [0x8651a0] */
    ecx = ebp + (-0x1); /* 0x007C7C54: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7C57: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7C5C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7C5D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7C62: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7C65: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7C6A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7C6B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7C71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7C74: pop esi */
L_007C7C75:
    MEM32(0x8651B4) = 0xFu; /* 0x007C7C75: mov dword ptr [0x8651b4], 0xf */
    MEM32(0x8651B0) = 0; /* 0x007C7C7F: mov dword ptr [0x8651b0], 0 */
    MEM8(0x8651A0) = (uint8_t)(0); /* 0x007C7C89: mov byte ptr [0x8651a0], 0 */
    esp = ebp; /* 0x007C7C90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7C92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7C93: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7CA0u);

L_007C7CA0:
    PUSH32(esp, ebp); /* 0x007C7CA0: push ebp */
    ebp = esp; /* 0x007C7CA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7CA3: push ecx */
    /* cmp MEM32(0x865214), 0x10u */ /* 0x007C7CA4: cmp dword ptr [0x865214], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865214)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7CD5; /* 0x007C7CAB: jb 0x7c7cd5 */
L_007C7CAD:
    PUSH32(esp, esi); /* 0x007C7CAD: push esi */
    esi = MEM32(0x865200); /* 0x007C7CAE: mov esi, dword ptr [0x865200] */
    ecx = ebp + (-0x1); /* 0x007C7CB4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7CB7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7CBC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7CBD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7CC2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7CC5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7CCA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7CCB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7CD1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7CD4: pop esi */
L_007C7CD5:
    MEM32(0x865214) = 0xFu; /* 0x007C7CD5: mov dword ptr [0x865214], 0xf */
    MEM32(0x865210) = 0; /* 0x007C7CDF: mov dword ptr [0x865210], 0 */
    MEM8(0x865200) = (uint8_t)(0); /* 0x007C7CE9: mov byte ptr [0x865200], 0 */
    esp = ebp; /* 0x007C7CF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7CF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7CF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7D00u);

L_007C7D00:
    PUSH32(esp, ebp); /* 0x007C7D00: push ebp */
    ebp = esp; /* 0x007C7D01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7D03: push ecx */
    /* cmp MEM32(0x8651CC), 0x10u */ /* 0x007C7D04: cmp dword ptr [0x8651cc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8651CC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7D35; /* 0x007C7D0B: jb 0x7c7d35 */
L_007C7D0D:
    PUSH32(esp, esi); /* 0x007C7D0D: push esi */
    esi = MEM32(0x8651B8); /* 0x007C7D0E: mov esi, dword ptr [0x8651b8] */
    ecx = ebp + (-0x1); /* 0x007C7D14: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7D17: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7D1C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7D1D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7D22: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7D25: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7D2A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7D2B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7D31: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7D34: pop esi */
L_007C7D35:
    MEM32(0x8651CC) = 0xFu; /* 0x007C7D35: mov dword ptr [0x8651cc], 0xf */
    MEM32(0x8651C8) = 0; /* 0x007C7D3F: mov dword ptr [0x8651c8], 0 */
    MEM8(0x8651B8) = (uint8_t)(0); /* 0x007C7D49: mov byte ptr [0x8651b8], 0 */
    esp = ebp; /* 0x007C7D50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7D52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7D53: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7D60u);

L_007C7D60:
    PUSH32(esp, ebp); /* 0x007C7D60: push ebp */
    ebp = esp; /* 0x007C7D61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7D63: push ecx */
    /* cmp MEM32(0x865230), 0x10u */ /* 0x007C7D64: cmp dword ptr [0x865230], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865230)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7D95; /* 0x007C7D6B: jb 0x7c7d95 */
L_007C7D6D:
    PUSH32(esp, esi); /* 0x007C7D6D: push esi */
    esi = MEM32(0x86521C); /* 0x007C7D6E: mov esi, dword ptr [0x86521c] */
    ecx = ebp + (-0x1); /* 0x007C7D74: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7D77: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7D7C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7D7D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7D82: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7D85: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7D8A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7D8B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7D91: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7D94: pop esi */
L_007C7D95:
    MEM32(0x865230) = 0xFu; /* 0x007C7D95: mov dword ptr [0x865230], 0xf */
    MEM32(0x86522C) = 0; /* 0x007C7D9F: mov dword ptr [0x86522c], 0 */
    MEM8(0x86521C) = (uint8_t)(0); /* 0x007C7DA9: mov byte ptr [0x86521c], 0 */
    esp = ebp; /* 0x007C7DB0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7DB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7DB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7DC0u);

L_007C7DC0:
    PUSH32(esp, ebp); /* 0x007C7DC0: push ebp */
    ebp = esp; /* 0x007C7DC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7DC3: push ecx */
    /* cmp MEM32(0x8651FC), 0x10u */ /* 0x007C7DC4: cmp dword ptr [0x8651fc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8651FC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7DF5; /* 0x007C7DCB: jb 0x7c7df5 */
L_007C7DCD:
    PUSH32(esp, esi); /* 0x007C7DCD: push esi */
    esi = MEM32(0x8651E8); /* 0x007C7DCE: mov esi, dword ptr [0x8651e8] */
    ecx = ebp + (-0x1); /* 0x007C7DD4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7DD7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7DDC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7DDD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7DE2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7DE5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7DEA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7DEB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7DF1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7DF4: pop esi */
L_007C7DF5:
    MEM32(0x8651FC) = 0xFu; /* 0x007C7DF5: mov dword ptr [0x8651fc], 0xf */
    MEM32(0x8651F8) = 0; /* 0x007C7DFF: mov dword ptr [0x8651f8], 0 */
    MEM8(0x8651E8) = (uint8_t)(0); /* 0x007C7E09: mov byte ptr [0x8651e8], 0 */
    esp = ebp; /* 0x007C7E10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7E13: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7E20u);

L_007C7E20:
    PUSH32(esp, ebp); /* 0x007C7E20: push ebp */
    ebp = esp; /* 0x007C7E21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7E23: push ecx */
    /* cmp MEM32(0x8651E4), 0x10u */ /* 0x007C7E24: cmp dword ptr [0x8651e4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8651E4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7E55; /* 0x007C7E2B: jb 0x7c7e55 */
L_007C7E2D:
    PUSH32(esp, esi); /* 0x007C7E2D: push esi */
    esi = MEM32(0x8651D0); /* 0x007C7E2E: mov esi, dword ptr [0x8651d0] */
    ecx = ebp + (-0x1); /* 0x007C7E34: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7E37: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7E3C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7E3D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7E42: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7E45: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7E4A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7E4B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7E51: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7E54: pop esi */
L_007C7E55:
    MEM32(0x8651E4) = 0xFu; /* 0x007C7E55: mov dword ptr [0x8651e4], 0xf */
    MEM32(0x8651E0) = 0; /* 0x007C7E5F: mov dword ptr [0x8651e0], 0 */
    MEM8(0x8651D0) = (uint8_t)(0); /* 0x007C7E69: mov byte ptr [0x8651d0], 0 */
    esp = ebp; /* 0x007C7E70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7E72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7E73: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7E80u);

L_007C7E80:
    PUSH32(esp, ebp); /* 0x007C7E80: push ebp */
    ebp = esp; /* 0x007C7E81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7E83: push ecx */
    /* cmp MEM32(0x865248), 0x10u */ /* 0x007C7E84: cmp dword ptr [0x865248], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865248)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7EB5; /* 0x007C7E8B: jb 0x7c7eb5 */
L_007C7E8D:
    PUSH32(esp, esi); /* 0x007C7E8D: push esi */
    esi = MEM32(0x865234); /* 0x007C7E8E: mov esi, dword ptr [0x865234] */
    ecx = ebp + (-0x1); /* 0x007C7E94: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7E97: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7E9C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7E9D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7EA2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7EA5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7EAA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7EAB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7EB1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7EB4: pop esi */
L_007C7EB5:
    MEM32(0x865248) = 0xFu; /* 0x007C7EB5: mov dword ptr [0x865248], 0xf */
    MEM32(0x865244) = 0; /* 0x007C7EBF: mov dword ptr [0x865244], 0 */
    MEM8(0x865234) = (uint8_t)(0); /* 0x007C7EC9: mov byte ptr [0x865234], 0 */
    esp = ebp; /* 0x007C7ED0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7ED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7ED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7EE0u);

L_007C7EE0:
    PUSH32(esp, ebp); /* 0x007C7EE0: push ebp */
    ebp = esp; /* 0x007C7EE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7EE3: push ecx */
    /* cmp MEM32(0x86530C), 0x10u */ /* 0x007C7EE4: cmp dword ptr [0x86530c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86530C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7F15; /* 0x007C7EEB: jb 0x7c7f15 */
L_007C7EED:
    PUSH32(esp, esi); /* 0x007C7EED: push esi */
    esi = MEM32(0x8652F8); /* 0x007C7EEE: mov esi, dword ptr [0x8652f8] */
    ecx = ebp + (-0x1); /* 0x007C7EF4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7EF7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7EFC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7EFD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7F02: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7F05: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7F0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7F0B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7F11: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7F14: pop esi */
L_007C7F15:
    MEM32(0x86530C) = 0xFu; /* 0x007C7F15: mov dword ptr [0x86530c], 0xf */
    MEM32(0x865308) = 0; /* 0x007C7F1F: mov dword ptr [0x865308], 0 */
    MEM8(0x8652F8) = (uint8_t)(0); /* 0x007C7F29: mov byte ptr [0x8652f8], 0 */
    esp = ebp; /* 0x007C7F30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7F32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7F33: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7F40u);

L_007C7F40:
    PUSH32(esp, ebp); /* 0x007C7F40: push ebp */
    ebp = esp; /* 0x007C7F41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7F43: push ecx */
    /* cmp MEM32(0x865290), 0x10u */ /* 0x007C7F44: cmp dword ptr [0x865290], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865290)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7F75; /* 0x007C7F4B: jb 0x7c7f75 */
L_007C7F4D:
    PUSH32(esp, esi); /* 0x007C7F4D: push esi */
    esi = MEM32(0x86527C); /* 0x007C7F4E: mov esi, dword ptr [0x86527c] */
    ecx = ebp + (-0x1); /* 0x007C7F54: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7F57: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7F5C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7F5D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7F62: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7F65: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7F6A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7F6B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7F71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7F74: pop esi */
L_007C7F75:
    MEM32(0x865290) = 0xFu; /* 0x007C7F75: mov dword ptr [0x865290], 0xf */
    MEM32(0x86528C) = 0; /* 0x007C7F7F: mov dword ptr [0x86528c], 0 */
    MEM8(0x86527C) = (uint8_t)(0); /* 0x007C7F89: mov byte ptr [0x86527c], 0 */
    esp = ebp; /* 0x007C7F90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7F92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7F93: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7FA0u);

L_007C7FA0:
    PUSH32(esp, ebp); /* 0x007C7FA0: push ebp */
    ebp = esp; /* 0x007C7FA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7FA3: push ecx */
    /* cmp MEM32(0x8652A8), 0x10u */ /* 0x007C7FA4: cmp dword ptr [0x8652a8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8652A8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7FD5; /* 0x007C7FAB: jb 0x7c7fd5 */
L_007C7FAD:
    PUSH32(esp, esi); /* 0x007C7FAD: push esi */
    esi = MEM32(0x865294); /* 0x007C7FAE: mov esi, dword ptr [0x865294] */
    ecx = ebp + (-0x1); /* 0x007C7FB4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7FB7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7FBC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7FBD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7FC2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7FC5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7FCA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7FCB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7FD1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7FD4: pop esi */
L_007C7FD5:
    MEM32(0x8652A8) = 0xFu; /* 0x007C7FD5: mov dword ptr [0x8652a8], 0xf */
    MEM32(0x8652A4) = 0; /* 0x007C7FDF: mov dword ptr [0x8652a4], 0 */
    MEM8(0x865294) = (uint8_t)(0); /* 0x007C7FE9: mov byte ptr [0x865294], 0 */
    esp = ebp; /* 0x007C7FF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7FF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8000u);

L_007C8000:
    PUSH32(esp, ebp); /* 0x007C8000: push ebp */
    ebp = esp; /* 0x007C8001: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8003: push ecx */
    /* cmp MEM32(0x8652F4), 0x10u */ /* 0x007C8004: cmp dword ptr [0x8652f4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8652F4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8035; /* 0x007C800B: jb 0x7c8035 */
L_007C800D:
    PUSH32(esp, esi); /* 0x007C800D: push esi */
    esi = MEM32(0x8652E0); /* 0x007C800E: mov esi, dword ptr [0x8652e0] */
    ecx = ebp + (-0x1); /* 0x007C8014: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8017: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C801C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C801D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8022: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8025: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C802A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C802B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8031: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8034: pop esi */
L_007C8035:
    MEM32(0x8652F4) = 0xFu; /* 0x007C8035: mov dword ptr [0x8652f4], 0xf */
    MEM32(0x8652F0) = 0; /* 0x007C803F: mov dword ptr [0x8652f0], 0 */
    MEM8(0x8652E0) = (uint8_t)(0); /* 0x007C8049: mov byte ptr [0x8652e0], 0 */
    esp = ebp; /* 0x007C8050: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8053: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8060u);

L_007C8060:
    PUSH32(esp, ebp); /* 0x007C8060: push ebp */
    ebp = esp; /* 0x007C8061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8063: push ecx */
    /* cmp MEM32(0x865260), 0x10u */ /* 0x007C8064: cmp dword ptr [0x865260], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865260)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8095; /* 0x007C806B: jb 0x7c8095 */
L_007C806D:
    PUSH32(esp, esi); /* 0x007C806D: push esi */
    esi = MEM32(0x86524C); /* 0x007C806E: mov esi, dword ptr [0x86524c] */
    ecx = ebp + (-0x1); /* 0x007C8074: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8077: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C807C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C807D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8082: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8085: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C808A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C808B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8091: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8094: pop esi */
L_007C8095:
    MEM32(0x865260) = 0xFu; /* 0x007C8095: mov dword ptr [0x865260], 0xf */
    MEM32(0x86525C) = 0; /* 0x007C809F: mov dword ptr [0x86525c], 0 */
    MEM8(0x86524C) = (uint8_t)(0); /* 0x007C80A9: mov byte ptr [0x86524c], 0 */
    esp = ebp; /* 0x007C80B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C80B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C80B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C80C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C80C0u);

L_007C80C0:
    PUSH32(esp, ebp); /* 0x007C80C0: push ebp */
    ebp = esp; /* 0x007C80C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C80C3: push ecx */
    /* cmp MEM32(0x865324), 0x10u */ /* 0x007C80C4: cmp dword ptr [0x865324], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865324)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C80F5; /* 0x007C80CB: jb 0x7c80f5 */
L_007C80CD:
    PUSH32(esp, esi); /* 0x007C80CD: push esi */
    esi = MEM32(0x865310); /* 0x007C80CE: mov esi, dword ptr [0x865310] */
    ecx = ebp + (-0x1); /* 0x007C80D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C80D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C80DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C80DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C80E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C80E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C80EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C80EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C80F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C80F4: pop esi */
L_007C80F5:
    MEM32(0x865324) = 0xFu; /* 0x007C80F5: mov dword ptr [0x865324], 0xf */
    MEM32(0x865320) = 0; /* 0x007C80FF: mov dword ptr [0x865320], 0 */
    MEM8(0x865310) = (uint8_t)(0); /* 0x007C8109: mov byte ptr [0x865310], 0 */
    esp = ebp; /* 0x007C8110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8113: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8120u);

L_007C8120:
    PUSH32(esp, ebp); /* 0x007C8120: push ebp */
    ebp = esp; /* 0x007C8121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8123: push ecx */
    /* cmp MEM32(0x8652C4), 0x10u */ /* 0x007C8124: cmp dword ptr [0x8652c4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8652C4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8155; /* 0x007C812B: jb 0x7c8155 */
L_007C812D:
    PUSH32(esp, esi); /* 0x007C812D: push esi */
    esi = MEM32(0x8652B0); /* 0x007C812E: mov esi, dword ptr [0x8652b0] */
    ecx = ebp + (-0x1); /* 0x007C8134: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8137: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C813C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C813D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8142: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8145: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C814A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C814B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8151: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8154: pop esi */
L_007C8155:
    MEM32(0x8652C4) = 0xFu; /* 0x007C8155: mov dword ptr [0x8652c4], 0xf */
    MEM32(0x8652C0) = 0; /* 0x007C815F: mov dword ptr [0x8652c0], 0 */
    MEM8(0x8652B0) = (uint8_t)(0); /* 0x007C8169: mov byte ptr [0x8652b0], 0 */
    esp = ebp; /* 0x007C8170: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8172: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8173: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8180u);

L_007C8180:
    PUSH32(esp, ebp); /* 0x007C8180: push ebp */
    ebp = esp; /* 0x007C8181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8183: push ecx */
    /* cmp MEM32(0x865278), 0x10u */ /* 0x007C8184: cmp dword ptr [0x865278], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865278)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C81B5; /* 0x007C818B: jb 0x7c81b5 */
L_007C818D:
    PUSH32(esp, esi); /* 0x007C818D: push esi */
    esi = MEM32(0x865264); /* 0x007C818E: mov esi, dword ptr [0x865264] */
    ecx = ebp + (-0x1); /* 0x007C8194: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8197: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C819C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C819D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C81A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C81A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C81AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C81AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C81B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C81B4: pop esi */
L_007C81B5:
    MEM32(0x865278) = 0xFu; /* 0x007C81B5: mov dword ptr [0x865278], 0xf */
    MEM32(0x865274) = 0; /* 0x007C81BF: mov dword ptr [0x865274], 0 */
    MEM8(0x865264) = (uint8_t)(0); /* 0x007C81C9: mov byte ptr [0x865264], 0 */
    esp = ebp; /* 0x007C81D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C81D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C81D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C81E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C81E0u);

L_007C81E0:
    PUSH32(esp, ebp); /* 0x007C81E0: push ebp */
    ebp = esp; /* 0x007C81E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C81E3: push ecx */
    /* cmp MEM32(0x8652DC), 0x10u */ /* 0x007C81E4: cmp dword ptr [0x8652dc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8652DC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8215; /* 0x007C81EB: jb 0x7c8215 */
L_007C81ED:
    PUSH32(esp, esi); /* 0x007C81ED: push esi */
    esi = MEM32(0x8652C8); /* 0x007C81EE: mov esi, dword ptr [0x8652c8] */
    ecx = ebp + (-0x1); /* 0x007C81F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C81F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C81FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C81FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8202: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8205: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C820A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C820B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8211: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8214: pop esi */
L_007C8215:
    MEM32(0x8652DC) = 0xFu; /* 0x007C8215: mov dword ptr [0x8652dc], 0xf */
    MEM32(0x8652D8) = 0; /* 0x007C821F: mov dword ptr [0x8652d8], 0 */
    MEM8(0x8652C8) = (uint8_t)(0); /* 0x007C8229: mov byte ptr [0x8652c8], 0 */
    esp = ebp; /* 0x007C8230: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8232: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8233: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8240u);

L_007C8240:
    PUSH32(esp, ebp); /* 0x007C8240: push ebp */
    ebp = esp; /* 0x007C8241: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8243: push ecx */
    /* cmp MEM32(0x86533C), 0x10u */ /* 0x007C8244: cmp dword ptr [0x86533c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86533C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8275; /* 0x007C824B: jb 0x7c8275 */
L_007C824D:
    PUSH32(esp, esi); /* 0x007C824D: push esi */
    esi = MEM32(0x865328); /* 0x007C824E: mov esi, dword ptr [0x865328] */
    ecx = ebp + (-0x1); /* 0x007C8254: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8257: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C825C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C825D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8262: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8265: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C826A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C826B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8271: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8274: pop esi */
L_007C8275:
    MEM32(0x86533C) = 0xFu; /* 0x007C8275: mov dword ptr [0x86533c], 0xf */
    MEM32(0x865338) = 0; /* 0x007C827F: mov dword ptr [0x865338], 0 */
    MEM8(0x865328) = (uint8_t)(0); /* 0x007C8289: mov byte ptr [0x865328], 0 */
    esp = ebp; /* 0x007C8290: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8292: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8293: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C82A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C82A0u);

L_007C82A0:
    PUSH32(esp, ebp); /* 0x007C82A0: push ebp */
    ebp = esp; /* 0x007C82A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C82A3: push ecx */
    /* cmp MEM32(0x86536C), 0x10u */ /* 0x007C82A4: cmp dword ptr [0x86536c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86536C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C82D5; /* 0x007C82AB: jb 0x7c82d5 */
L_007C82AD:
    PUSH32(esp, esi); /* 0x007C82AD: push esi */
    esi = MEM32(0x865358); /* 0x007C82AE: mov esi, dword ptr [0x865358] */
    ecx = ebp + (-0x1); /* 0x007C82B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C82B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C82BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C82BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C82C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C82C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C82CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C82CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C82D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C82D4: pop esi */
L_007C82D5:
    MEM32(0x86536C) = 0xFu; /* 0x007C82D5: mov dword ptr [0x86536c], 0xf */
    MEM32(0x865368) = 0; /* 0x007C82DF: mov dword ptr [0x865368], 0 */
    MEM8(0x865358) = (uint8_t)(0); /* 0x007C82E9: mov byte ptr [0x865358], 0 */
    esp = ebp; /* 0x007C82F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C82F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C82F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8300u);

L_007C8300:
    PUSH32(esp, ebp); /* 0x007C8300: push ebp */
    ebp = esp; /* 0x007C8301: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8303: push ecx */
    /* cmp MEM32(0x865354), 0x10u */ /* 0x007C8304: cmp dword ptr [0x865354], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865354)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8335; /* 0x007C830B: jb 0x7c8335 */
L_007C830D:
    PUSH32(esp, esi); /* 0x007C830D: push esi */
    esi = MEM32(0x865340); /* 0x007C830E: mov esi, dword ptr [0x865340] */
    ecx = ebp + (-0x1); /* 0x007C8314: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8317: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C831C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C831D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8322: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8325: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C832A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C832B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8331: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8334: pop esi */
L_007C8335:
    MEM32(0x865354) = 0xFu; /* 0x007C8335: mov dword ptr [0x865354], 0xf */
    MEM32(0x865350) = 0; /* 0x007C833F: mov dword ptr [0x865350], 0 */
    MEM8(0x865340) = (uint8_t)(0); /* 0x007C8349: mov byte ptr [0x865340], 0 */
    esp = ebp; /* 0x007C8350: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8352: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8353: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8360u);

L_007C8360:
    PUSH32(esp, ebp); /* 0x007C8360: push ebp */
    ebp = esp; /* 0x007C8361: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8363: push ecx */
    /* cmp MEM32(0x8653D0), 0x10u */ /* 0x007C8364: cmp dword ptr [0x8653d0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8653D0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8395; /* 0x007C836B: jb 0x7c8395 */
L_007C836D:
    PUSH32(esp, esi); /* 0x007C836D: push esi */
    esi = MEM32(0x8653BC); /* 0x007C836E: mov esi, dword ptr [0x8653bc] */
    ecx = ebp + (-0x1); /* 0x007C8374: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8377: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C837C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C837D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8382: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8385: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C838A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C838B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8391: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8394: pop esi */
L_007C8395:
    MEM32(0x8653D0) = 0xFu; /* 0x007C8395: mov dword ptr [0x8653d0], 0xf */
    MEM32(0x8653CC) = 0; /* 0x007C839F: mov dword ptr [0x8653cc], 0 */
    MEM8(0x8653BC) = (uint8_t)(0); /* 0x007C83A9: mov byte ptr [0x8653bc], 0 */
    esp = ebp; /* 0x007C83B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C83B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C83B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C83C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C83C0u);

L_007C83C0:
    PUSH32(esp, ebp); /* 0x007C83C0: push ebp */
    ebp = esp; /* 0x007C83C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C83C3: push -1 */
    PUSH32(esp, 0x0079A664u); /* 0x007C83C5: push 0x79a664 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C83CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C83D0: push eax */
    PUSH32(esp, ecx); /* 0x007C83D1: push ecx */
    PUSH32(esp, esi); /* 0x007C83D2: push esi */
    eax = MEM32(0x855000); /* 0x007C83D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C83D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C83DA: push eax */
    eax = ebp + (-0xC); /* 0x007C83DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C83DE: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007C83E4: mov dword ptr [ebp - 4], 0 */
    ecx = 0x008F8CB8u; /* 0x007C83EB: mov ecx, 0x8f8cb8 */
    RECOMP_CALL(sub_0053CDD0); /* 0x007C83F0: call 0x53cdd0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C83F5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007C83FC: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x8F8CB8); /* 0x007C83FF: mov esi, dword ptr [0x8f8cb8] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8405: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C840A: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C840B: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8410: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8413: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8418: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8419: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C841E: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8421: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8426: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8427: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C842D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007C8430: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C8433: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C843A: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C843B: pop esi */
    esp = ebp; /* 0x007C843C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C843E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C843F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8440u);

L_007C8440:
    goto L_0052DF80; /* 0x007C8440: jmp 0x52df80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DF80: RECOMP_ITAIL(0x0052DF80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C8450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8450u);

L_007C8450:
    PUSH32(esp, ebp); /* 0x007C8450: push ebp */
    ebp = esp; /* 0x007C8451: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C8453: push -1 */
    PUSH32(esp, 0x0079A7CAu); /* 0x007C8455: push 0x79a7ca */
    eax = MEM32(FS_BASE + (0)); /* 0x007C845A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C8460: push eax */
    PUSH32(esp, ecx); /* 0x007C8461: push ecx */
    PUSH32(esp, esi); /* 0x007C8462: push esi */
    eax = MEM32(0x855000); /* 0x007C8463: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C8468: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C846A: push eax */
    eax = ebp + (-0xC); /* 0x007C846B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C846E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C8474: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(0x865398), 0x10u */ /* 0x007C847B: cmp dword ptr [0x865398], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865398)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C84AA; /* 0x007C8482: jb 0x7c84aa */
L_007C8484:
    esi = MEM32(0x865384); /* 0x007C8484: mov esi, dword ptr [0x865384] */
    ecx = ebp + (-0xD); /* 0x007C848A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C848D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8492: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8493: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8498: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C849B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C84A0: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C84A1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C84A7: add esp, 4 */
    _flag_k = FK_ADD;
L_007C84AA:
    MEM32(0x865398) = 0xFu; /* 0x007C84AA: mov dword ptr [0x865398], 0xf */
    MEM32(0x865394) = 0; /* 0x007C84B4: mov dword ptr [0x865394], 0 */
    MEM8(0x865384) = (uint8_t)(0); /* 0x007C84BE: mov byte ptr [0x865384], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C84C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C84C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C84CF: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C84D0: pop esi */
    esp = ebp; /* 0x007C84D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C84D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C84D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C84E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C84E0u);

L_007C84E0:
    PUSH32(esp, ebp); /* 0x007C84E0: push ebp */
    ebp = esp; /* 0x007C84E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C84E3: push ecx */
    /* cmp MEM32(0x8653B8), 0x10u */ /* 0x007C84E4: cmp dword ptr [0x8653b8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8653B8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8515; /* 0x007C84EB: jb 0x7c8515 */
L_007C84ED:
    PUSH32(esp, esi); /* 0x007C84ED: push esi */
    esi = MEM32(0x8653A4); /* 0x007C84EE: mov esi, dword ptr [0x8653a4] */
    ecx = ebp + (-0x1); /* 0x007C84F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C84F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C84FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C84FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8502: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8505: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C850A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C850B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8511: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8514: pop esi */
L_007C8515:
    MEM32(0x8653B8) = 0xFu; /* 0x007C8515: mov dword ptr [0x8653b8], 0xf */
    MEM32(0x8653B4) = 0; /* 0x007C851F: mov dword ptr [0x8653b4], 0 */
    MEM8(0x8653A4) = (uint8_t)(0); /* 0x007C8529: mov byte ptr [0x8653a4], 0 */
    esp = ebp; /* 0x007C8530: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8533: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8540u);

L_007C8540:
    PUSH32(esp, ebp); /* 0x007C8540: push ebp */
    ebp = esp; /* 0x007C8541: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8543: push ecx */
    /* cmp MEM32(0x8653E8), 0x10u */ /* 0x007C8544: cmp dword ptr [0x8653e8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8653E8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8575; /* 0x007C854B: jb 0x7c8575 */
L_007C854D:
    PUSH32(esp, esi); /* 0x007C854D: push esi */
    esi = MEM32(0x8653D4); /* 0x007C854E: mov esi, dword ptr [0x8653d4] */
    ecx = ebp + (-0x1); /* 0x007C8554: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8557: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C855C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C855D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8562: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8565: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C856A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C856B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8571: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8574: pop esi */
L_007C8575:
    MEM32(0x8653E8) = 0xFu; /* 0x007C8575: mov dword ptr [0x8653e8], 0xf */
    MEM32(0x8653E4) = 0; /* 0x007C857F: mov dword ptr [0x8653e4], 0 */
    MEM8(0x8653D4) = (uint8_t)(0); /* 0x007C8589: mov byte ptr [0x8653d4], 0 */
    esp = ebp; /* 0x007C8590: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8592: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8593: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C85A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C85A0u);

L_007C85A0:
    PUSH32(esp, ebp); /* 0x007C85A0: push ebp */
    ebp = esp; /* 0x007C85A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C85A3: push ecx */
    /* cmp MEM32(0x9280F8), 0x10u */ /* 0x007C85A4: cmp dword ptr [0x9280f8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x9280F8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C85D5; /* 0x007C85AB: jb 0x7c85d5 */
L_007C85AD:
    PUSH32(esp, esi); /* 0x007C85AD: push esi */
    esi = MEM32(0x9280E4); /* 0x007C85AE: mov esi, dword ptr [0x9280e4] */
    ecx = ebp + (-0x1); /* 0x007C85B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C85B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C85BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C85BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C85C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C85C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C85CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C85CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C85D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C85D4: pop esi */
L_007C85D5:
    MEM32(0x9280F8) = 0xFu; /* 0x007C85D5: mov dword ptr [0x9280f8], 0xf */
    MEM32(0x9280F4) = 0; /* 0x007C85DF: mov dword ptr [0x9280f4], 0 */
    MEM8(0x9280E4) = (uint8_t)(0); /* 0x007C85E9: mov byte ptr [0x9280e4], 0 */
    esp = ebp; /* 0x007C85F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C85F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C85F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8600u);

L_007C8600:
    PUSH32(esp, ebp); /* 0x007C8600: push ebp */
    ebp = esp; /* 0x007C8601: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8603: push ecx */
    /* cmp MEM32(0x9280E0), 0x10u */ /* 0x007C8604: cmp dword ptr [0x9280e0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x9280E0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8635; /* 0x007C860B: jb 0x7c8635 */
L_007C860D:
    PUSH32(esp, esi); /* 0x007C860D: push esi */
    esi = MEM32(0x9280CC); /* 0x007C860E: mov esi, dword ptr [0x9280cc] */
    ecx = ebp + (-0x1); /* 0x007C8614: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8617: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C861C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C861D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8622: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8625: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C862A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C862B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8631: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8634: pop esi */
L_007C8635:
    MEM32(0x9280E0) = 0xFu; /* 0x007C8635: mov dword ptr [0x9280e0], 0xf */
    MEM32(0x9280DC) = 0; /* 0x007C863F: mov dword ptr [0x9280dc], 0 */
    MEM8(0x9280CC) = (uint8_t)(0); /* 0x007C8649: mov byte ptr [0x9280cc], 0 */
    esp = ebp; /* 0x007C8650: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8652: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8653: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8660u);

L_007C8660:
    PUSH32(esp, ebp); /* 0x007C8660: push ebp */
    ebp = esp; /* 0x007C8661: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8663: push ecx */
    /* cmp MEM32(0x865400), 0x10u */ /* 0x007C8664: cmp dword ptr [0x865400], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865400)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8695; /* 0x007C866B: jb 0x7c8695 */
L_007C866D:
    PUSH32(esp, esi); /* 0x007C866D: push esi */
    esi = MEM32(0x8653EC); /* 0x007C866E: mov esi, dword ptr [0x8653ec] */
    ecx = ebp + (-0x1); /* 0x007C8674: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8677: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C867C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C867D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8682: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8685: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C868A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C868B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8691: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8694: pop esi */
L_007C8695:
    MEM32(0x865400) = 0xFu; /* 0x007C8695: mov dword ptr [0x865400], 0xf */
    MEM32(0x8653FC) = 0; /* 0x007C869F: mov dword ptr [0x8653fc], 0 */
    MEM8(0x8653EC) = (uint8_t)(0); /* 0x007C86A9: mov byte ptr [0x8653ec], 0 */
    esp = ebp; /* 0x007C86B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C86B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C86B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C86C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C86C0u);

L_007C86C0:
    PUSH32(esp, ebp); /* 0x007C86C0: push ebp */
    ebp = esp; /* 0x007C86C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C86C3: push ecx */
    /* cmp MEM32(0x86543C), 0x10u */ /* 0x007C86C4: cmp dword ptr [0x86543c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86543C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C86F5; /* 0x007C86CB: jb 0x7c86f5 */
L_007C86CD:
    PUSH32(esp, esi); /* 0x007C86CD: push esi */
    esi = MEM32(0x865428); /* 0x007C86CE: mov esi, dword ptr [0x865428] */
    ecx = ebp + (-0x1); /* 0x007C86D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C86D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C86DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C86DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C86E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C86E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C86EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C86EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C86F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C86F4: pop esi */
L_007C86F5:
    MEM32(0x86543C) = 0xFu; /* 0x007C86F5: mov dword ptr [0x86543c], 0xf */
    MEM32(0x865438) = 0; /* 0x007C86FF: mov dword ptr [0x865438], 0 */
    MEM8(0x865428) = (uint8_t)(0); /* 0x007C8709: mov byte ptr [0x865428], 0 */
    esp = ebp; /* 0x007C8710: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8712: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8713: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8720u);

L_007C8720:
    goto L_00541330; /* 0x007C8720: jmp 0x541330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00541330: RECOMP_ITAIL(0x00541330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C8730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8730u);

L_007C8730:
    PUSH32(esp, ebp); /* 0x007C8730: push ebp */
    ebp = esp; /* 0x007C8731: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C8733: push -1 */
    PUSH32(esp, 0x0079CE15u); /* 0x007C8735: push 0x79ce15 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C873A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C8740: push eax */
    eax = MEM32(0x855000); /* 0x007C8741: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C8746: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C8748: push eax */
    eax = ebp + (-0xC); /* 0x007C8749: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C874C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C8752: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(0x865418); /* 0x007C8759: mov ecx, dword ptr [0x865418] */
    eax = ecx; /* 0x007C875F: mov eax, ecx */
    edx = MEM32(0x86541C); /* 0x007C8761: mov edx, dword ptr [0x86541c] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x007C8767: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x865408) = 0x007EEA14u; /* 0x007C8769: mov dword ptr [0x865408], 0x7eea14 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C8790; /* 0x007C8773: je 0x7c8790 */
L_007C8775:
    PUSH32(esp, edx); /* 0x007C8775: push edx */
    PUSH32(esp, ecx); /* 0x007C8776: push ecx */
    PUSH32(esp, 0x00865408u); /* 0x007C8777: push 0x865408 */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x007C877C: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007C8782: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007C8785: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM64(0x865418) = _xmm[0].u64[0]; /* 0x007C8788: movlpd qword ptr [0x865418], xmm0 */
L_007C8790:
    ecx = MEM32(ebp + (-0xC)); /* 0x007C8790: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C8793: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C879A: pop ecx */
    esp = ebp; /* 0x007C879B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C879D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C879E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C87A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C87A0u);

L_007C87A0:
    PUSH32(esp, ebp); /* 0x007C87A0: push ebp */
    ebp = esp; /* 0x007C87A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C87A3: push ecx */
    /* cmp MEM32(0x8654D4), 0x10u */ /* 0x007C87A4: cmp dword ptr [0x8654d4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8654D4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C87D5; /* 0x007C87AB: jb 0x7c87d5 */
L_007C87AD:
    PUSH32(esp, esi); /* 0x007C87AD: push esi */
    esi = MEM32(0x8654C0); /* 0x007C87AE: mov esi, dword ptr [0x8654c0] */
    ecx = ebp + (-0x1); /* 0x007C87B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C87B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C87BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C87BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C87C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C87C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C87CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C87CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C87D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C87D4: pop esi */
L_007C87D5:
    MEM32(0x8654D4) = 0xFu; /* 0x007C87D5: mov dword ptr [0x8654d4], 0xf */
    MEM32(0x8654D0) = 0; /* 0x007C87DF: mov dword ptr [0x8654d0], 0 */
    MEM8(0x8654C0) = (uint8_t)(0); /* 0x007C87E9: mov byte ptr [0x8654c0], 0 */
    esp = ebp; /* 0x007C87F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C87F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C87F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8800u);

L_007C8800:
    PUSH32(esp, ebp); /* 0x007C8800: push ebp */
    ebp = esp; /* 0x007C8801: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8803: push ecx */
    /* cmp MEM32(0x865534), 0x10u */ /* 0x007C8804: cmp dword ptr [0x865534], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865534)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8835; /* 0x007C880B: jb 0x7c8835 */
L_007C880D:
    PUSH32(esp, esi); /* 0x007C880D: push esi */
    esi = MEM32(0x865520); /* 0x007C880E: mov esi, dword ptr [0x865520] */
    ecx = ebp + (-0x1); /* 0x007C8814: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8817: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C881C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C881D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8822: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8825: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C882A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C882B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8831: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8834: pop esi */
L_007C8835:
    MEM32(0x865534) = 0xFu; /* 0x007C8835: mov dword ptr [0x865534], 0xf */
    MEM32(0x865530) = 0; /* 0x007C883F: mov dword ptr [0x865530], 0 */
    MEM8(0x865520) = (uint8_t)(0); /* 0x007C8849: mov byte ptr [0x865520], 0 */
    esp = ebp; /* 0x007C8850: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8852: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8853: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8860u);

L_007C8860:
    PUSH32(esp, ebp); /* 0x007C8860: push ebp */
    ebp = esp; /* 0x007C8861: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8863: push ecx */
    /* cmp MEM32(0x86551C), 0x10u */ /* 0x007C8864: cmp dword ptr [0x86551c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86551C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8895; /* 0x007C886B: jb 0x7c8895 */
L_007C886D:
    PUSH32(esp, esi); /* 0x007C886D: push esi */
    esi = MEM32(0x865508); /* 0x007C886E: mov esi, dword ptr [0x865508] */
    ecx = ebp + (-0x1); /* 0x007C8874: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8877: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C887C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C887D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8882: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8885: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C888A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C888B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8891: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8894: pop esi */
L_007C8895:
    MEM32(0x86551C) = 0xFu; /* 0x007C8895: mov dword ptr [0x86551c], 0xf */
    MEM32(0x865518) = 0; /* 0x007C889F: mov dword ptr [0x865518], 0 */
    MEM8(0x865508) = (uint8_t)(0); /* 0x007C88A9: mov byte ptr [0x865508], 0 */
    esp = ebp; /* 0x007C88B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C88B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C88B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C88C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C88C0u);

L_007C88C0:
    PUSH32(esp, ebp); /* 0x007C88C0: push ebp */
    ebp = esp; /* 0x007C88C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C88C3: push ecx */
    /* cmp MEM32(0x86548C), 0x10u */ /* 0x007C88C4: cmp dword ptr [0x86548c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86548C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C88F5; /* 0x007C88CB: jb 0x7c88f5 */
L_007C88CD:
    PUSH32(esp, esi); /* 0x007C88CD: push esi */
    esi = MEM32(0x865478); /* 0x007C88CE: mov esi, dword ptr [0x865478] */
    ecx = ebp + (-0x1); /* 0x007C88D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C88D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C88DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C88DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C88E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C88E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C88EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C88EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C88F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C88F4: pop esi */
L_007C88F5:
    MEM32(0x86548C) = 0xFu; /* 0x007C88F5: mov dword ptr [0x86548c], 0xf */
    MEM32(0x865488) = 0; /* 0x007C88FF: mov dword ptr [0x865488], 0 */
    MEM8(0x865478) = (uint8_t)(0); /* 0x007C8909: mov byte ptr [0x865478], 0 */
    esp = ebp; /* 0x007C8910: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8913: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8920u);

L_007C8920:
    PUSH32(esp, ebp); /* 0x007C8920: push ebp */
    ebp = esp; /* 0x007C8921: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8923: push ecx */
    /* cmp MEM32(0x86554C), 0x10u */ /* 0x007C8924: cmp dword ptr [0x86554c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86554C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8955; /* 0x007C892B: jb 0x7c8955 */
L_007C892D:
    PUSH32(esp, esi); /* 0x007C892D: push esi */
    esi = MEM32(0x865538); /* 0x007C892E: mov esi, dword ptr [0x865538] */
    ecx = ebp + (-0x1); /* 0x007C8934: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8937: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C893C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C893D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8942: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8945: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C894A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C894B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8951: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8954: pop esi */
L_007C8955:
    MEM32(0x86554C) = 0xFu; /* 0x007C8955: mov dword ptr [0x86554c], 0xf */
    MEM32(0x865548) = 0; /* 0x007C895F: mov dword ptr [0x865548], 0 */
    MEM8(0x865538) = (uint8_t)(0); /* 0x007C8969: mov byte ptr [0x865538], 0 */
    esp = ebp; /* 0x007C8970: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8972: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8973: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8980u);

L_007C8980:
    PUSH32(esp, ebp); /* 0x007C8980: push ebp */
    ebp = esp; /* 0x007C8981: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8983: push ecx */
    /* cmp MEM32(0x865504), 0x10u */ /* 0x007C8984: cmp dword ptr [0x865504], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865504)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C89B5; /* 0x007C898B: jb 0x7c89b5 */
L_007C898D:
    PUSH32(esp, esi); /* 0x007C898D: push esi */
    esi = MEM32(0x8654F0); /* 0x007C898E: mov esi, dword ptr [0x8654f0] */
    ecx = ebp + (-0x1); /* 0x007C8994: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8997: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C899C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C899D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C89A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C89A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C89AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C89AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C89B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C89B4: pop esi */
L_007C89B5:
    MEM32(0x865504) = 0xFu; /* 0x007C89B5: mov dword ptr [0x865504], 0xf */
    MEM32(0x865500) = 0; /* 0x007C89BF: mov dword ptr [0x865500], 0 */
    MEM8(0x8654F0) = (uint8_t)(0); /* 0x007C89C9: mov byte ptr [0x8654f0], 0 */
    esp = ebp; /* 0x007C89D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C89D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C89D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C89E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C89E0u);

L_007C89E0:
    PUSH32(esp, ebp); /* 0x007C89E0: push ebp */
    ebp = esp; /* 0x007C89E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C89E3: push ecx */
    /* cmp MEM32(0x8654A4), 0x10u */ /* 0x007C89E4: cmp dword ptr [0x8654a4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8654A4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8A15; /* 0x007C89EB: jb 0x7c8a15 */
L_007C89ED:
    PUSH32(esp, esi); /* 0x007C89ED: push esi */
    esi = MEM32(0x865490); /* 0x007C89EE: mov esi, dword ptr [0x865490] */
    ecx = ebp + (-0x1); /* 0x007C89F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C89F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C89FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C89FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8A02: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8A05: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8A0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8A0B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8A11: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8A14: pop esi */
L_007C8A15:
    MEM32(0x8654A4) = 0xFu; /* 0x007C8A15: mov dword ptr [0x8654a4], 0xf */
    MEM32(0x8654A0) = 0; /* 0x007C8A1F: mov dword ptr [0x8654a0], 0 */
    MEM8(0x865490) = (uint8_t)(0); /* 0x007C8A29: mov byte ptr [0x865490], 0 */
    esp = ebp; /* 0x007C8A30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8A32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8A33: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8A40u);

L_007C8A40:
    PUSH32(esp, ebp); /* 0x007C8A40: push ebp */
    ebp = esp; /* 0x007C8A41: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8A43: push ecx */
    /* cmp MEM32(0x865454), 0x10u */ /* 0x007C8A44: cmp dword ptr [0x865454], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865454)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8A75; /* 0x007C8A4B: jb 0x7c8a75 */
L_007C8A4D:
    PUSH32(esp, esi); /* 0x007C8A4D: push esi */
    esi = MEM32(0x865440); /* 0x007C8A4E: mov esi, dword ptr [0x865440] */
    ecx = ebp + (-0x1); /* 0x007C8A54: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8A57: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8A5C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8A5D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8A62: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8A65: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8A6A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8A6B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8A71: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8A74: pop esi */
L_007C8A75:
    MEM32(0x865454) = 0xFu; /* 0x007C8A75: mov dword ptr [0x865454], 0xf */
    MEM32(0x865450) = 0; /* 0x007C8A7F: mov dword ptr [0x865450], 0 */
    MEM8(0x865440) = (uint8_t)(0); /* 0x007C8A89: mov byte ptr [0x865440], 0 */
    esp = ebp; /* 0x007C8A90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8A92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8A93: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8AA0u);

L_007C8AA0:
    PUSH32(esp, ebp); /* 0x007C8AA0: push ebp */
    ebp = esp; /* 0x007C8AA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8AA3: push ecx */
    /* cmp MEM32(0x865474), 0x10u */ /* 0x007C8AA4: cmp dword ptr [0x865474], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865474)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8AD5; /* 0x007C8AAB: jb 0x7c8ad5 */
L_007C8AAD:
    PUSH32(esp, esi); /* 0x007C8AAD: push esi */
    esi = MEM32(0x865460); /* 0x007C8AAE: mov esi, dword ptr [0x865460] */
    ecx = ebp + (-0x1); /* 0x007C8AB4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8AB7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8ABC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8ABD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8AC2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8AC5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8ACA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8ACB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8AD1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8AD4: pop esi */
L_007C8AD5:
    MEM32(0x865474) = 0xFu; /* 0x007C8AD5: mov dword ptr [0x865474], 0xf */
    MEM32(0x865470) = 0; /* 0x007C8ADF: mov dword ptr [0x865470], 0 */
    MEM8(0x865460) = (uint8_t)(0); /* 0x007C8AE9: mov byte ptr [0x865460], 0 */
    esp = ebp; /* 0x007C8AF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8AF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8AF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8B00u);

L_007C8B00:
    PUSH32(esp, ebp); /* 0x007C8B00: push ebp */
    ebp = esp; /* 0x007C8B01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C8B03: push -1 */
    PUSH32(esp, 0x0079D484u); /* 0x007C8B05: push 0x79d484 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C8B0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C8B10: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007C8B11: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007C8B14: push esi */
    eax = MEM32(0x855000); /* 0x007C8B15: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C8B1A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C8B1C: push eax */
    eax = ebp + (-0xC); /* 0x007C8B1D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C8B20: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007C8B26: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(0x8F8FC8); /* 0x007C8B2D: mov eax, dword ptr [0x8f8fc8] */
    PUSH32(esp, eax); /* 0x007C8B32: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x007C8B33: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x007C8B35: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007C8B38: push eax */
    RECOMP_CALL(sub_0055A590); /* 0x007C8B39: call 0x55a590 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C8B3E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007C8B45: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x8F8FC8); /* 0x007C8B48: mov esi, dword ptr [0x8f8fc8] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8B4E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8B53: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8B54: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8B59: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8B5C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8B61: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8B62: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8B67: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8B6A: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8B6F: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8B70: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8B75: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8B78: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8B7D: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8B7E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8B84: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007C8B87: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C8B8A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C8B91: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C8B92: pop esi */
    esp = ebp; /* 0x007C8B93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8B95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8B96: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8BA0u);

L_007C8BA0:
    ecx = 0x008F8FD0u; /* 0x007C8BA0: mov ecx, 0x8f8fd0 */
    goto L_0052DD40; /* 0x007C8BA5: jmp 0x52dd40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DD40: RECOMP_ITAIL(0x0052DD40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C8BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8BB0u);

L_007C8BB0:
    PUSH32(esp, ebp); /* 0x007C8BB0: push ebp */
    ebp = esp; /* 0x007C8BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C8BB3: push -1 */
    PUSH32(esp, 0x0079E76Au); /* 0x007C8BB5: push 0x79e76a */
    eax = MEM32(FS_BASE + (0)); /* 0x007C8BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C8BC0: push eax */
    eax = MEM32(0x855000); /* 0x007C8BC1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C8BC6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C8BC8: push eax */
    eax = ebp + (-0xC); /* 0x007C8BC9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C8BCC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C8BD2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x865458) = 0x007E1254u; /* 0x007C8BD9: mov dword ptr [0x865458], 0x7e1254 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C8BE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C8BE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C8BED: pop ecx */
    esp = ebp; /* 0x007C8BEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8BF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8BF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8C00u);

L_007C8C00:
    PUSH32(esp, ebp); /* 0x007C8C00: push ebp */
    ebp = esp; /* 0x007C8C01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8C03: push ecx */
    /* cmp MEM32(0x8654BC), 0x10u */ /* 0x007C8C04: cmp dword ptr [0x8654bc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8654BC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8C35; /* 0x007C8C0B: jb 0x7c8c35 */
L_007C8C0D:
    PUSH32(esp, esi); /* 0x007C8C0D: push esi */
    esi = MEM32(0x8654A8); /* 0x007C8C0E: mov esi, dword ptr [0x8654a8] */
    ecx = ebp + (-0x1); /* 0x007C8C14: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8C17: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8C1C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8C1D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8C22: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8C25: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8C2A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8C2B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8C31: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8C34: pop esi */
L_007C8C35:
    MEM32(0x8654BC) = 0xFu; /* 0x007C8C35: mov dword ptr [0x8654bc], 0xf */
    MEM32(0x8654B8) = 0; /* 0x007C8C3F: mov dword ptr [0x8654b8], 0 */
    MEM8(0x8654A8) = (uint8_t)(0); /* 0x007C8C49: mov byte ptr [0x8654a8], 0 */
    esp = ebp; /* 0x007C8C50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8C52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8C53: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8C60u);

L_007C8C60:
    ecx = 0x008F8E80u; /* 0x007C8C60: mov ecx, 0x8f8e80 */
    goto L_0054F150; /* 0x007C8C65: jmp 0x54f150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054F150: RECOMP_ITAIL(0x0054F150u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C8C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8C70u);

L_007C8C70:
    PUSH32(esp, ebp); /* 0x007C8C70: push ebp */
    ebp = esp; /* 0x007C8C71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8C73: push ecx */
    /* cmp MEM32(0x8654EC), 0x10u */ /* 0x007C8C74: cmp dword ptr [0x8654ec], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8654EC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8CA5; /* 0x007C8C7B: jb 0x7c8ca5 */
L_007C8C7D:
    PUSH32(esp, esi); /* 0x007C8C7D: push esi */
    esi = MEM32(0x8654D8); /* 0x007C8C7E: mov esi, dword ptr [0x8654d8] */
    ecx = ebp + (-0x1); /* 0x007C8C84: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8C87: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8C8C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8C8D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8C92: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8C95: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8C9A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8C9B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8CA1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8CA4: pop esi */
L_007C8CA5:
    MEM32(0x8654EC) = 0xFu; /* 0x007C8CA5: mov dword ptr [0x8654ec], 0xf */
    MEM32(0x8654E8) = 0; /* 0x007C8CAF: mov dword ptr [0x8654e8], 0 */
    MEM8(0x8654D8) = (uint8_t)(0); /* 0x007C8CB9: mov byte ptr [0x8654d8], 0 */
    esp = ebp; /* 0x007C8CC0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8CC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8CC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8CD0u);

L_007C8CD0:
    PUSH32(esp, ebp); /* 0x007C8CD0: push ebp */
    ebp = esp; /* 0x007C8CD1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8CD3: push ecx */
    /* cmp MEM32(0x865564), 0x10u */ /* 0x007C8CD4: cmp dword ptr [0x865564], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865564)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8D05; /* 0x007C8CDB: jb 0x7c8d05 */
L_007C8CDD:
    PUSH32(esp, esi); /* 0x007C8CDD: push esi */
    esi = MEM32(0x865550); /* 0x007C8CDE: mov esi, dword ptr [0x865550] */
    ecx = ebp + (-0x1); /* 0x007C8CE4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8CE7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8CEC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8CED: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8CF2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8CF5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8CFA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8CFB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8D01: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8D04: pop esi */
L_007C8D05:
    MEM32(0x865564) = 0xFu; /* 0x007C8D05: mov dword ptr [0x865564], 0xf */
    MEM32(0x865560) = 0; /* 0x007C8D0F: mov dword ptr [0x865560], 0 */
    MEM8(0x865550) = (uint8_t)(0); /* 0x007C8D19: mov byte ptr [0x865550], 0 */
    esp = ebp; /* 0x007C8D20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8D22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8D23: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8D30u);

L_007C8D30:
    PUSH32(esp, ebp); /* 0x007C8D30: push ebp */
    ebp = esp; /* 0x007C8D31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C8D33: push -1 */
    PUSH32(esp, 0x0079FE7Au); /* 0x007C8D35: push 0x79fe7a */
    eax = MEM32(FS_BASE + (0)); /* 0x007C8D3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C8D40: push eax */
    PUSH32(esp, ecx); /* 0x007C8D41: push ecx */
    PUSH32(esp, esi); /* 0x007C8D42: push esi */
    eax = MEM32(0x855000); /* 0x007C8D43: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C8D48: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C8D4A: push eax */
    eax = ebp + (-0xC); /* 0x007C8D4B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C8D4E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C8D54: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(0x865580), 0x10u */ /* 0x007C8D5B: cmp dword ptr [0x865580], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865580)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8D8A; /* 0x007C8D62: jb 0x7c8d8a */
L_007C8D64:
    esi = MEM32(0x86556C); /* 0x007C8D64: mov esi, dword ptr [0x86556c] */
    ecx = ebp + (-0xD); /* 0x007C8D6A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8D6D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8D72: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8D73: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C8D78: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8D7B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8D80: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8D81: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8D87: add esp, 4 */
    _flag_k = FK_ADD;
L_007C8D8A:
    MEM32(0x865580) = 0xFu; /* 0x007C8D8A: mov dword ptr [0x865580], 0xf */
    MEM32(0x86557C) = 0; /* 0x007C8D94: mov dword ptr [0x86557c], 0 */
    MEM8(0x86556C) = (uint8_t)(0); /* 0x007C8D9E: mov byte ptr [0x86556c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C8DA5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C8DA8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C8DAF: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C8DB0: pop esi */
    esp = ebp; /* 0x007C8DB1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8DB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8DB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8DC0u);

L_007C8DC0:
    PUSH32(esp, ebp); /* 0x007C8DC0: push ebp */
    ebp = esp; /* 0x007C8DC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8DC3: push ecx */
    /* cmp MEM32(0x865708), 0x10u */ /* 0x007C8DC4: cmp dword ptr [0x865708], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865708)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8DF5; /* 0x007C8DCB: jb 0x7c8df5 */
L_007C8DCD:
    PUSH32(esp, esi); /* 0x007C8DCD: push esi */
    esi = MEM32(0x8656F4); /* 0x007C8DCE: mov esi, dword ptr [0x8656f4] */
    ecx = ebp + (-0x1); /* 0x007C8DD4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8DD7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8DDC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8DDD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8DE2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8DE5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8DEA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8DEB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8DF1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8DF4: pop esi */
L_007C8DF5:
    MEM32(0x865708) = 0xFu; /* 0x007C8DF5: mov dword ptr [0x865708], 0xf */
    MEM32(0x865704) = 0; /* 0x007C8DFF: mov dword ptr [0x865704], 0 */
    MEM8(0x8656F4) = (uint8_t)(0); /* 0x007C8E09: mov byte ptr [0x8656f4], 0 */
    esp = ebp; /* 0x007C8E10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8E12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8E13: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8E20u);

L_007C8E20:
    PUSH32(esp, ebp); /* 0x007C8E20: push ebp */
    ebp = esp; /* 0x007C8E21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8E23: push ecx */
    /* cmp MEM32(0x865680), 0x10u */ /* 0x007C8E24: cmp dword ptr [0x865680], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865680)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8E55; /* 0x007C8E2B: jb 0x7c8e55 */
L_007C8E2D:
    PUSH32(esp, esi); /* 0x007C8E2D: push esi */
    esi = MEM32(0x86566C); /* 0x007C8E2E: mov esi, dword ptr [0x86566c] */
    ecx = ebp + (-0x1); /* 0x007C8E34: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8E37: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8E3C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8E3D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8E42: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8E45: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8E4A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8E4B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8E51: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8E54: pop esi */
L_007C8E55:
    MEM32(0x865680) = 0xFu; /* 0x007C8E55: mov dword ptr [0x865680], 0xf */
    MEM32(0x86567C) = 0; /* 0x007C8E5F: mov dword ptr [0x86567c], 0 */
    MEM8(0x86566C) = (uint8_t)(0); /* 0x007C8E69: mov byte ptr [0x86566c], 0 */
    esp = ebp; /* 0x007C8E70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8E72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8E73: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8E80u);

L_007C8E80:
    PUSH32(esp, ebp); /* 0x007C8E80: push ebp */
    ebp = esp; /* 0x007C8E81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8E83: push ecx */
    /* cmp MEM32(0x8655B4), 0x10u */ /* 0x007C8E84: cmp dword ptr [0x8655b4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8655B4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8EB5; /* 0x007C8E8B: jb 0x7c8eb5 */
L_007C8E8D:
    PUSH32(esp, esi); /* 0x007C8E8D: push esi */
    esi = MEM32(0x8655A0); /* 0x007C8E8E: mov esi, dword ptr [0x8655a0] */
    ecx = ebp + (-0x1); /* 0x007C8E94: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8E97: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8E9C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8E9D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8EA2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8EA5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8EAA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8EAB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8EB1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8EB4: pop esi */
L_007C8EB5:
    MEM32(0x8655B4) = 0xFu; /* 0x007C8EB5: mov dword ptr [0x8655b4], 0xf */
    MEM32(0x8655B0) = 0; /* 0x007C8EBF: mov dword ptr [0x8655b0], 0 */
    MEM8(0x8655A0) = (uint8_t)(0); /* 0x007C8EC9: mov byte ptr [0x8655a0], 0 */
    esp = ebp; /* 0x007C8ED0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8ED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8ED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8EE0u);

L_007C8EE0:
    PUSH32(esp, 0x00561AC0u); /* 0x007C8EE0: push 0x561ac0 */
    PUSH32(esp, 0x21u); /* 0x007C8EE5: push 0x21 */
    PUSH32(esp, 0x34u); /* 0x007C8EE7: push 0x34 */
    PUSH32(esp, 0x008F9080u); /* 0x007C8EE9: push 0x8f9080 */
    RECOMP_CALL(sub_0077F628); /* 0x007C8EEE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8EF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8F00u);

L_007C8F00:
    PUSH32(esp, ebp); /* 0x007C8F00: push ebp */
    ebp = esp; /* 0x007C8F01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8F03: push ecx */
    /* cmp MEM32(0x8656F0), 0x10u */ /* 0x007C8F04: cmp dword ptr [0x8656f0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8656F0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8F35; /* 0x007C8F0B: jb 0x7c8f35 */
L_007C8F0D:
    PUSH32(esp, esi); /* 0x007C8F0D: push esi */
    esi = MEM32(0x8656DC); /* 0x007C8F0E: mov esi, dword ptr [0x8656dc] */
    ecx = ebp + (-0x1); /* 0x007C8F14: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8F17: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8F1C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8F1D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8F22: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8F25: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8F2A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8F2B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8F31: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8F34: pop esi */
L_007C8F35:
    MEM32(0x8656F0) = 0xFu; /* 0x007C8F35: mov dword ptr [0x8656f0], 0xf */
    MEM32(0x8656EC) = 0; /* 0x007C8F3F: mov dword ptr [0x8656ec], 0 */
    MEM8(0x8656DC) = (uint8_t)(0); /* 0x007C8F49: mov byte ptr [0x8656dc], 0 */
    esp = ebp; /* 0x007C8F50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8F52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8F53: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8F60u);

L_007C8F60:
    PUSH32(esp, ebp); /* 0x007C8F60: push ebp */
    ebp = esp; /* 0x007C8F61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8F63: push ecx */
    /* cmp MEM32(0x8655E4), 0x10u */ /* 0x007C8F64: cmp dword ptr [0x8655e4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8655E4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C8F95; /* 0x007C8F6B: jb 0x7c8f95 */
L_007C8F6D:
    PUSH32(esp, esi); /* 0x007C8F6D: push esi */
    esi = MEM32(0x8655D0); /* 0x007C8F6E: mov esi, dword ptr [0x8655d0] */
    ecx = ebp + (-0x1); /* 0x007C8F74: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8F77: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8F7C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8F7D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C8F82: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8F85: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C8F8A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C8F8B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C8F91: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C8F94: pop esi */
L_007C8F95:
    MEM32(0x8655E4) = 0xFu; /* 0x007C8F95: mov dword ptr [0x8655e4], 0xf */
    MEM32(0x8655E0) = 0; /* 0x007C8F9F: mov dword ptr [0x8655e0], 0 */
    MEM8(0x8655D0) = (uint8_t)(0); /* 0x007C8FA9: mov byte ptr [0x8655d0], 0 */
    esp = ebp; /* 0x007C8FB0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C8FB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8FB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8FC0u);

L_007C8FC0:
    PUSH32(esp, 0x0052DEC0u); /* 0x007C8FC0: push 0x52dec0 */
    PUSH32(esp, 0x24u); /* 0x007C8FC5: push 0x24 */
    PUSH32(esp, 0x54u); /* 0x007C8FC7: push 0x54 */
    PUSH32(esp, 0x008F9740u); /* 0x007C8FC9: push 0x8f9740 */
    RECOMP_CALL(sub_0077F628); /* 0x007C8FCE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C8FD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C8FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C8FE0u);

L_007C8FE0:
    PUSH32(esp, ebp); /* 0x007C8FE0: push ebp */
    ebp = esp; /* 0x007C8FE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C8FE3: push ecx */
    /* cmp MEM32(0x865720), 0x10u */ /* 0x007C8FE4: cmp dword ptr [0x865720], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865720)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9015; /* 0x007C8FEB: jb 0x7c9015 */
L_007C8FED:
    PUSH32(esp, esi); /* 0x007C8FED: push esi */
    esi = MEM32(0x86570C); /* 0x007C8FEE: mov esi, dword ptr [0x86570c] */
    ecx = ebp + (-0x1); /* 0x007C8FF4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C8FF7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C8FFC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C8FFD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9002: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9005: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C900A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C900B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9011: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9014: pop esi */
L_007C9015:
    MEM32(0x865720) = 0xFu; /* 0x007C9015: mov dword ptr [0x865720], 0xf */
    MEM32(0x86571C) = 0; /* 0x007C901F: mov dword ptr [0x86571c], 0 */
    MEM8(0x86570C) = (uint8_t)(0); /* 0x007C9029: mov byte ptr [0x86570c], 0 */
    esp = ebp; /* 0x007C9030: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9032: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9033: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9040u);

L_007C9040:
    ecx = 0x00865600u; /* 0x007C9040: mov ecx, 0x865600 */
    goto L_0052DEC0; /* 0x007C9045: jmp 0x52dec0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DEC0: RECOMP_ITAIL(0x0052DEC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C9050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9050u);

L_007C9050:
    ecx = 0x00865688u; /* 0x007C9050: mov ecx, 0x865688 */
    goto L_0052DEC0; /* 0x007C9055: jmp 0x52dec0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DEC0: RECOMP_ITAIL(0x0052DEC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C9060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9060u);

L_007C9060:
    PUSH32(esp, ebp); /* 0x007C9060: push ebp */
    ebp = esp; /* 0x007C9061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9063: push ecx */
    /* cmp MEM32(0x865668), 0x10u */ /* 0x007C9064: cmp dword ptr [0x865668], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865668)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9095; /* 0x007C906B: jb 0x7c9095 */
L_007C906D:
    PUSH32(esp, esi); /* 0x007C906D: push esi */
    esi = MEM32(0x865654); /* 0x007C906E: mov esi, dword ptr [0x865654] */
    ecx = ebp + (-0x1); /* 0x007C9074: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9077: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C907C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C907D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9082: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9085: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C908A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C908B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9091: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9094: pop esi */
L_007C9095:
    MEM32(0x865668) = 0xFu; /* 0x007C9095: mov dword ptr [0x865668], 0xf */
    MEM32(0x865664) = 0; /* 0x007C909F: mov dword ptr [0x865664], 0 */
    MEM8(0x865654) = (uint8_t)(0); /* 0x007C90A9: mov byte ptr [0x865654], 0 */
    esp = ebp; /* 0x007C90B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C90B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C90B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C90C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C90C0u);

L_007C90C0:
    PUSH32(esp, ebp); /* 0x007C90C0: push ebp */
    ebp = esp; /* 0x007C90C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C90C3: push ecx */
    /* cmp MEM32(0x8655FC), 0x10u */ /* 0x007C90C4: cmp dword ptr [0x8655fc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8655FC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C90F5; /* 0x007C90CB: jb 0x7c90f5 */
L_007C90CD:
    PUSH32(esp, esi); /* 0x007C90CD: push esi */
    esi = MEM32(0x8655E8); /* 0x007C90CE: mov esi, dword ptr [0x8655e8] */
    ecx = ebp + (-0x1); /* 0x007C90D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C90D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C90DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C90DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C90E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C90E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C90EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C90EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C90F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C90F4: pop esi */
L_007C90F5:
    MEM32(0x8655FC) = 0xFu; /* 0x007C90F5: mov dword ptr [0x8655fc], 0xf */
    MEM32(0x8655F8) = 0; /* 0x007C90FF: mov dword ptr [0x8655f8], 0 */
    MEM8(0x8655E8) = (uint8_t)(0); /* 0x007C9109: mov byte ptr [0x8655e8], 0 */
    esp = ebp; /* 0x007C9110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9113: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9120u);

L_007C9120:
    PUSH32(esp, ebp); /* 0x007C9120: push ebp */
    ebp = esp; /* 0x007C9121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9123: push ecx */
    /* cmp MEM32(0x865750), 0x10u */ /* 0x007C9124: cmp dword ptr [0x865750], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865750)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9155; /* 0x007C912B: jb 0x7c9155 */
L_007C912D:
    PUSH32(esp, esi); /* 0x007C912D: push esi */
    esi = MEM32(0x86573C); /* 0x007C912E: mov esi, dword ptr [0x86573c] */
    ecx = ebp + (-0x1); /* 0x007C9134: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9137: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C913C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C913D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9142: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9145: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C914A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C914B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9151: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9154: pop esi */
L_007C9155:
    MEM32(0x865750) = 0xFu; /* 0x007C9155: mov dword ptr [0x865750], 0xf */
    MEM32(0x86574C) = 0; /* 0x007C915F: mov dword ptr [0x86574c], 0 */
    MEM8(0x86573C) = (uint8_t)(0); /* 0x007C9169: mov byte ptr [0x86573c], 0 */
    esp = ebp; /* 0x007C9170: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9172: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9173: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9180u);

L_007C9180:
    PUSH32(esp, ebp); /* 0x007C9180: push ebp */
    ebp = esp; /* 0x007C9181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9183: push ecx */
    /* cmp MEM32(0x865738), 0x10u */ /* 0x007C9184: cmp dword ptr [0x865738], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865738)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C91B5; /* 0x007C918B: jb 0x7c91b5 */
L_007C918D:
    PUSH32(esp, esi); /* 0x007C918D: push esi */
    esi = MEM32(0x865724); /* 0x007C918E: mov esi, dword ptr [0x865724] */
    ecx = ebp + (-0x1); /* 0x007C9194: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9197: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C919C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C919D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C91A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C91A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C91AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C91AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C91B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C91B4: pop esi */
L_007C91B5:
    MEM32(0x865738) = 0xFu; /* 0x007C91B5: mov dword ptr [0x865738], 0xf */
    MEM32(0x865734) = 0; /* 0x007C91BF: mov dword ptr [0x865734], 0 */
    MEM8(0x865724) = (uint8_t)(0); /* 0x007C91C9: mov byte ptr [0x865724], 0 */
    esp = ebp; /* 0x007C91D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C91D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C91D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C91E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C91E0u);

L_007C91E0:
    PUSH32(esp, ebp); /* 0x007C91E0: push ebp */
    ebp = esp; /* 0x007C91E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C91E3: push ecx */
    /* cmp MEM32(0x8655CC), 0x10u */ /* 0x007C91E4: cmp dword ptr [0x8655cc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8655CC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9215; /* 0x007C91EB: jb 0x7c9215 */
L_007C91ED:
    PUSH32(esp, esi); /* 0x007C91ED: push esi */
    esi = MEM32(0x8655B8); /* 0x007C91EE: mov esi, dword ptr [0x8655b8] */
    ecx = ebp + (-0x1); /* 0x007C91F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C91F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C91FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C91FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9202: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9205: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C920A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C920B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9211: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9214: pop esi */
L_007C9215:
    MEM32(0x8655CC) = 0xFu; /* 0x007C9215: mov dword ptr [0x8655cc], 0xf */
    MEM32(0x8655C8) = 0; /* 0x007C921F: mov dword ptr [0x8655c8], 0 */
    MEM8(0x8655B8) = (uint8_t)(0); /* 0x007C9229: mov byte ptr [0x8655b8], 0 */
    esp = ebp; /* 0x007C9230: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9232: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9233: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9240u);

L_007C9240:
    PUSH32(esp, ebp); /* 0x007C9240: push ebp */
    ebp = esp; /* 0x007C9241: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9243: push ecx */
    /* cmp MEM32(0x86559C), 0x10u */ /* 0x007C9244: cmp dword ptr [0x86559c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86559C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9275; /* 0x007C924B: jb 0x7c9275 */
L_007C924D:
    PUSH32(esp, esi); /* 0x007C924D: push esi */
    esi = MEM32(0x865588); /* 0x007C924E: mov esi, dword ptr [0x865588] */
    ecx = ebp + (-0x1); /* 0x007C9254: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9257: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C925C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C925D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9262: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9265: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C926A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C926B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9271: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9274: pop esi */
L_007C9275:
    MEM32(0x86559C) = 0xFu; /* 0x007C9275: mov dword ptr [0x86559c], 0xf */
    MEM32(0x865598) = 0; /* 0x007C927F: mov dword ptr [0x865598], 0 */
    MEM8(0x865588) = (uint8_t)(0); /* 0x007C9289: mov byte ptr [0x865588], 0 */
    esp = ebp; /* 0x007C9290: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9292: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9293: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C92A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C92A0u);

L_007C92A0:
    ecx = 0x008FA550u; /* 0x007C92A0: mov ecx, 0x8fa550 */
    goto L_0054F150; /* 0x007C92A5: jmp 0x54f150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054F150: RECOMP_ITAIL(0x0054F150u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C92B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C92B0u);

L_007C92B0:
    ecx = 0x008FA690u; /* 0x007C92B0: mov ecx, 0x8fa690 */
    goto L_0054F150; /* 0x007C92B5: jmp 0x54f150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054F150: RECOMP_ITAIL(0x0054F150u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C92C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C92C0u);

L_007C92C0:
    ecx = 0x00865940u; /* 0x007C92C0: mov ecx, 0x865940 */
    goto L_0052DEC0; /* 0x007C92C5: jmp 0x52dec0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DEC0: RECOMP_ITAIL(0x0052DEC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C92D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C92D0u);

L_007C92D0:
    ecx = 0x00865990u; /* 0x007C92D0: mov ecx, 0x865990 */
    goto L_004A74F0; /* 0x007C92D5: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C92E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C92E0u);

L_007C92E0:
    PUSH32(esp, ebp); /* 0x007C92E0: push ebp */
    ebp = esp; /* 0x007C92E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C92E3: push ecx */
    /* cmp MEM32(0x8657E4), 0x10u */ /* 0x007C92E4: cmp dword ptr [0x8657e4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8657E4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9315; /* 0x007C92EB: jb 0x7c9315 */
L_007C92ED:
    PUSH32(esp, esi); /* 0x007C92ED: push esi */
    esi = MEM32(0x8657D0); /* 0x007C92EE: mov esi, dword ptr [0x8657d0] */
    ecx = ebp + (-0x1); /* 0x007C92F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C92F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C92FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C92FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9302: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9305: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C930A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C930B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9311: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9314: pop esi */
L_007C9315:
    MEM32(0x8657E4) = 0xFu; /* 0x007C9315: mov dword ptr [0x8657e4], 0xf */
    MEM32(0x8657E0) = 0; /* 0x007C931F: mov dword ptr [0x8657e0], 0 */
    MEM8(0x8657D0) = (uint8_t)(0); /* 0x007C9329: mov byte ptr [0x8657d0], 0 */
    esp = ebp; /* 0x007C9330: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9332: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9333: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9340u);

L_007C9340:
    PUSH32(esp, ebp); /* 0x007C9340: push ebp */
    ebp = esp; /* 0x007C9341: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9343: push ecx */
    /* cmp MEM32(0x865768), 0x10u */ /* 0x007C9344: cmp dword ptr [0x865768], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865768)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9375; /* 0x007C934B: jb 0x7c9375 */
L_007C934D:
    PUSH32(esp, esi); /* 0x007C934D: push esi */
    esi = MEM32(0x865754); /* 0x007C934E: mov esi, dword ptr [0x865754] */
    ecx = ebp + (-0x1); /* 0x007C9354: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9357: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C935C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C935D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9362: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9365: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C936A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C936B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9371: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9374: pop esi */
L_007C9375:
    MEM32(0x865768) = 0xFu; /* 0x007C9375: mov dword ptr [0x865768], 0xf */
    MEM32(0x865764) = 0; /* 0x007C937F: mov dword ptr [0x865764], 0 */
    MEM8(0x865754) = (uint8_t)(0); /* 0x007C9389: mov byte ptr [0x865754], 0 */
    esp = ebp; /* 0x007C9390: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9392: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9393: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C93A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C93A0u);

L_007C93A0:
    PUSH32(esp, ebp); /* 0x007C93A0: push ebp */
    ebp = esp; /* 0x007C93A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C93A3: push ecx */
    /* cmp MEM32(0x86579C), 0x10u */ /* 0x007C93A4: cmp dword ptr [0x86579c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86579C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C93D5; /* 0x007C93AB: jb 0x7c93d5 */
L_007C93AD:
    PUSH32(esp, esi); /* 0x007C93AD: push esi */
    esi = MEM32(0x865788); /* 0x007C93AE: mov esi, dword ptr [0x865788] */
    ecx = ebp + (-0x1); /* 0x007C93B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C93B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C93BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C93BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C93C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C93C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C93CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C93CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C93D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C93D4: pop esi */
L_007C93D5:
    MEM32(0x86579C) = 0xFu; /* 0x007C93D5: mov dword ptr [0x86579c], 0xf */
    MEM32(0x865798) = 0; /* 0x007C93DF: mov dword ptr [0x865798], 0 */
    MEM8(0x865788) = (uint8_t)(0); /* 0x007C93E9: mov byte ptr [0x865788], 0 */
    esp = ebp; /* 0x007C93F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C93F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C93F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9400u);

L_007C9400:
    PUSH32(esp, ebp); /* 0x007C9400: push ebp */
    ebp = esp; /* 0x007C9401: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9403: push ecx */
    /* cmp MEM32(0x8658AC), 0x10u */ /* 0x007C9404: cmp dword ptr [0x8658ac], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8658AC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9435; /* 0x007C940B: jb 0x7c9435 */
L_007C940D:
    PUSH32(esp, esi); /* 0x007C940D: push esi */
    esi = MEM32(0x865898); /* 0x007C940E: mov esi, dword ptr [0x865898] */
    ecx = ebp + (-0x1); /* 0x007C9414: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9417: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C941C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C941D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9422: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9425: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C942A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C942B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9431: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9434: pop esi */
L_007C9435:
    MEM32(0x8658AC) = 0xFu; /* 0x007C9435: mov dword ptr [0x8658ac], 0xf */
    MEM32(0x8658A8) = 0; /* 0x007C943F: mov dword ptr [0x8658a8], 0 */
    MEM8(0x865898) = (uint8_t)(0); /* 0x007C9449: mov byte ptr [0x865898], 0 */
    esp = ebp; /* 0x007C9450: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9452: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9453: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9460u);

L_007C9460:
    PUSH32(esp, ebp); /* 0x007C9460: push ebp */
    ebp = esp; /* 0x007C9461: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9463: push ecx */
    /* cmp MEM32(0x865894), 0x10u */ /* 0x007C9464: cmp dword ptr [0x865894], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865894)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9495; /* 0x007C946B: jb 0x7c9495 */
L_007C946D:
    PUSH32(esp, esi); /* 0x007C946D: push esi */
    esi = MEM32(0x865880); /* 0x007C946E: mov esi, dword ptr [0x865880] */
    ecx = ebp + (-0x1); /* 0x007C9474: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9477: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C947C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C947D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9482: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9485: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C948A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C948B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9491: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9494: pop esi */
L_007C9495:
    MEM32(0x865894) = 0xFu; /* 0x007C9495: mov dword ptr [0x865894], 0xf */
    MEM32(0x865890) = 0; /* 0x007C949F: mov dword ptr [0x865890], 0 */
    MEM8(0x865880) = (uint8_t)(0); /* 0x007C94A9: mov byte ptr [0x865880], 0 */
    esp = ebp; /* 0x007C94B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C94B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C94B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C94C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C94C0u);

L_007C94C0:
    PUSH32(esp, ebp); /* 0x007C94C0: push ebp */
    ebp = esp; /* 0x007C94C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C94C3: push ecx */
    /* cmp MEM32(0x865878), 0x10u */ /* 0x007C94C4: cmp dword ptr [0x865878], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865878)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C94F5; /* 0x007C94CB: jb 0x7c94f5 */
L_007C94CD:
    PUSH32(esp, esi); /* 0x007C94CD: push esi */
    esi = MEM32(0x865864); /* 0x007C94CE: mov esi, dword ptr [0x865864] */
    ecx = ebp + (-0x1); /* 0x007C94D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C94D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C94DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C94DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C94E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C94E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C94EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C94EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C94F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C94F4: pop esi */
L_007C94F5:
    MEM32(0x865878) = 0xFu; /* 0x007C94F5: mov dword ptr [0x865878], 0xf */
    MEM32(0x865874) = 0; /* 0x007C94FF: mov dword ptr [0x865874], 0 */
    MEM8(0x865864) = (uint8_t)(0); /* 0x007C9509: mov byte ptr [0x865864], 0 */
    esp = ebp; /* 0x007C9510: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9512: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9513: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9520u);

L_007C9520:
    PUSH32(esp, ebp); /* 0x007C9520: push ebp */
    ebp = esp; /* 0x007C9521: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9523: push ecx */
    /* cmp MEM32(0x86593C), 0x10u */ /* 0x007C9524: cmp dword ptr [0x86593c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86593C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9555; /* 0x007C952B: jb 0x7c9555 */
L_007C952D:
    PUSH32(esp, esi); /* 0x007C952D: push esi */
    esi = MEM32(0x865928); /* 0x007C952E: mov esi, dword ptr [0x865928] */
    ecx = ebp + (-0x1); /* 0x007C9534: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9537: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C953C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C953D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9542: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9545: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C954A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C954B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9551: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9554: pop esi */
L_007C9555:
    MEM32(0x86593C) = 0xFu; /* 0x007C9555: mov dword ptr [0x86593c], 0xf */
    MEM32(0x865938) = 0; /* 0x007C955F: mov dword ptr [0x865938], 0 */
    MEM8(0x865928) = (uint8_t)(0); /* 0x007C9569: mov byte ptr [0x865928], 0 */
    esp = ebp; /* 0x007C9570: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9572: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9573: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9580u);

L_007C9580:
    PUSH32(esp, ebp); /* 0x007C9580: push ebp */
    ebp = esp; /* 0x007C9581: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9583: push ecx */
    /* cmp MEM32(0x86590C), 0x10u */ /* 0x007C9584: cmp dword ptr [0x86590c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86590C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C95B5; /* 0x007C958B: jb 0x7c95b5 */
L_007C958D:
    PUSH32(esp, esi); /* 0x007C958D: push esi */
    esi = MEM32(0x8658F8); /* 0x007C958E: mov esi, dword ptr [0x8658f8] */
    ecx = ebp + (-0x1); /* 0x007C9594: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9597: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C959C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C959D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C95A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C95A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C95AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C95AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C95B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C95B4: pop esi */
L_007C95B5:
    MEM32(0x86590C) = 0xFu; /* 0x007C95B5: mov dword ptr [0x86590c], 0xf */
    MEM32(0x865908) = 0; /* 0x007C95BF: mov dword ptr [0x865908], 0 */
    MEM8(0x8658F8) = (uint8_t)(0); /* 0x007C95C9: mov byte ptr [0x8658f8], 0 */
    esp = ebp; /* 0x007C95D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C95D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C95D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C95E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C95E0u);

L_007C95E0:
    PUSH32(esp, ebp); /* 0x007C95E0: push ebp */
    ebp = esp; /* 0x007C95E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C95E3: push ecx */
    /* cmp MEM32(0x8657B4), 0x10u */ /* 0x007C95E4: cmp dword ptr [0x8657b4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8657B4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9615; /* 0x007C95EB: jb 0x7c9615 */
L_007C95ED:
    PUSH32(esp, esi); /* 0x007C95ED: push esi */
    esi = MEM32(0x8657A0); /* 0x007C95EE: mov esi, dword ptr [0x8657a0] */
    ecx = ebp + (-0x1); /* 0x007C95F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C95F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C95FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C95FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9602: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9605: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C960A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C960B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9611: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9614: pop esi */
L_007C9615:
    MEM32(0x8657B4) = 0xFu; /* 0x007C9615: mov dword ptr [0x8657b4], 0xf */
    MEM32(0x8657B0) = 0; /* 0x007C961F: mov dword ptr [0x8657b0], 0 */
    MEM8(0x8657A0) = (uint8_t)(0); /* 0x007C9629: mov byte ptr [0x8657a0], 0 */
    esp = ebp; /* 0x007C9630: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9633: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9640u);

L_007C9640:
    PUSH32(esp, ebp); /* 0x007C9640: push ebp */
    ebp = esp; /* 0x007C9641: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9643: push ecx */
    /* cmp MEM32(0x8658DC), 0x10u */ /* 0x007C9644: cmp dword ptr [0x8658dc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8658DC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9675; /* 0x007C964B: jb 0x7c9675 */
L_007C964D:
    PUSH32(esp, esi); /* 0x007C964D: push esi */
    esi = MEM32(0x8658C8); /* 0x007C964E: mov esi, dword ptr [0x8658c8] */
    ecx = ebp + (-0x1); /* 0x007C9654: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9657: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C965C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C965D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9662: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9665: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C966A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C966B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9671: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9674: pop esi */
L_007C9675:
    MEM32(0x8658DC) = 0xFu; /* 0x007C9675: mov dword ptr [0x8658dc], 0xf */
    MEM32(0x8658D8) = 0; /* 0x007C967F: mov dword ptr [0x8658d8], 0 */
    MEM8(0x8658C8) = (uint8_t)(0); /* 0x007C9689: mov byte ptr [0x8658c8], 0 */
    esp = ebp; /* 0x007C9690: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9693: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C96A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C96A0u);

L_007C96A0:
    PUSH32(esp, ebp); /* 0x007C96A0: push ebp */
    ebp = esp; /* 0x007C96A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C96A3: push ecx */
    /* cmp MEM32(0x8658C4), 0x10u */ /* 0x007C96A4: cmp dword ptr [0x8658c4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8658C4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C96D5; /* 0x007C96AB: jb 0x7c96d5 */
L_007C96AD:
    PUSH32(esp, esi); /* 0x007C96AD: push esi */
    esi = MEM32(0x8658B0); /* 0x007C96AE: mov esi, dword ptr [0x8658b0] */
    ecx = ebp + (-0x1); /* 0x007C96B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C96B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C96BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C96BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C96C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C96C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C96CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C96CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C96D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C96D4: pop esi */
L_007C96D5:
    MEM32(0x8658C4) = 0xFu; /* 0x007C96D5: mov dword ptr [0x8658c4], 0xf */
    MEM32(0x8658C0) = 0; /* 0x007C96DF: mov dword ptr [0x8658c0], 0 */
    MEM8(0x8658B0) = (uint8_t)(0); /* 0x007C96E9: mov byte ptr [0x8658b0], 0 */
    esp = ebp; /* 0x007C96F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C96F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C96F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9700u);

L_007C9700:
    PUSH32(esp, ebp); /* 0x007C9700: push ebp */
    ebp = esp; /* 0x007C9701: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9703: push ecx */
    eax = MEM32(0x8F9734); /* 0x007C9704: mov eax, dword ptr [0x8f9734] */
    /* test eax, eax */ /* 0x007C9709: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C974E; /* 0x007C970B: je 0x7c974e */
L_007C970D:
    PUSH32(esp, MEM32(0x8F9738)); /* 0x007C970D: push dword ptr [0x8f9738] */
    PUSH32(esp, eax); /* 0x007C9713: push eax */
    RECOMP_CALL(sub_0042A0E0); /* 0x007C9714: call 0x42a0e0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9719: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C971C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x8F9734)); /* 0x007C9721: push dword ptr [0x8f9734] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C9727: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C972D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8F9734) = 0; /* 0x007C9730: mov dword ptr [0x8f9734], 0 */
    MEM32(0x8F9738) = 0; /* 0x007C973A: mov dword ptr [0x8f9738], 0 */
    MEM32(0x8F973C) = 0; /* 0x007C9744: mov dword ptr [0x8f973c], 0 */
L_007C974E:
    esp = ebp; /* 0x007C974E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9750: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9751: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9760u);

L_007C9760:
    PUSH32(esp, 0x0040A000u); /* 0x007C9760: push 0x40a000 */
    PUSH32(esp, 7); /* 0x007C9765: push 7 */
    PUSH32(esp, 0x18u); /* 0x007C9767: push 0x18 */
    PUSH32(esp, 0x008FA310u); /* 0x007C9769: push 0x8fa310 */
    RECOMP_CALL(sub_0077F628); /* 0x007C976E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9773: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9780u);

L_007C9780:
    PUSH32(esp, 0x0040A000u); /* 0x007C9780: push 0x40a000 */
    PUSH32(esp, 0xAu); /* 0x007C9785: push 0xa */
    PUSH32(esp, 0x18u); /* 0x007C9787: push 0x18 */
    PUSH32(esp, 0x008FA460u); /* 0x007C9789: push 0x8fa460 */
    RECOMP_CALL(sub_0077F628); /* 0x007C978E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9793: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C97A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C97A0u);

L_007C97A0:
    PUSH32(esp, ebp); /* 0x007C97A0: push ebp */
    ebp = esp; /* 0x007C97A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C97A3: push ecx */
    /* cmp MEM32(0x865784), 0x10u */ /* 0x007C97A4: cmp dword ptr [0x865784], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865784)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C97D5; /* 0x007C97AB: jb 0x7c97d5 */
L_007C97AD:
    PUSH32(esp, esi); /* 0x007C97AD: push esi */
    esi = MEM32(0x865770); /* 0x007C97AE: mov esi, dword ptr [0x865770] */
    ecx = ebp + (-0x1); /* 0x007C97B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C97B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C97BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C97BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C97C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C97C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C97CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C97CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C97D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C97D4: pop esi */
L_007C97D5:
    MEM32(0x865784) = 0xFu; /* 0x007C97D5: mov dword ptr [0x865784], 0xf */
    MEM32(0x865780) = 0; /* 0x007C97DF: mov dword ptr [0x865780], 0 */
    MEM8(0x865770) = (uint8_t)(0); /* 0x007C97E9: mov byte ptr [0x865770], 0 */
    esp = ebp; /* 0x007C97F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C97F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C97F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9800u);

L_007C9800:
    PUSH32(esp, ebp); /* 0x007C9800: push ebp */
    ebp = esp; /* 0x007C9801: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9803: push ecx */
    /* cmp MEM32(0x8658F4), 0x10u */ /* 0x007C9804: cmp dword ptr [0x8658f4], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8658F4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9835; /* 0x007C980B: jb 0x7c9835 */
L_007C980D:
    PUSH32(esp, esi); /* 0x007C980D: push esi */
    esi = MEM32(0x8658E0); /* 0x007C980E: mov esi, dword ptr [0x8658e0] */
    ecx = ebp + (-0x1); /* 0x007C9814: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9817: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C981C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C981D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9822: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9825: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C982A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C982B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9831: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9834: pop esi */
L_007C9835:
    MEM32(0x8658F4) = 0xFu; /* 0x007C9835: mov dword ptr [0x8658f4], 0xf */
    MEM32(0x8658F0) = 0; /* 0x007C983F: mov dword ptr [0x8658f0], 0 */
    MEM8(0x8658E0) = (uint8_t)(0); /* 0x007C9849: mov byte ptr [0x8658e0], 0 */
    esp = ebp; /* 0x007C9850: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9852: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9853: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9860u);

L_007C9860:
    PUSH32(esp, ebp); /* 0x007C9860: push ebp */
    ebp = esp; /* 0x007C9861: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9863: push ecx */
    /* cmp MEM32(0x865924), 0x10u */ /* 0x007C9864: cmp dword ptr [0x865924], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865924)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9895; /* 0x007C986B: jb 0x7c9895 */
L_007C986D:
    PUSH32(esp, esi); /* 0x007C986D: push esi */
    esi = MEM32(0x865910); /* 0x007C986E: mov esi, dword ptr [0x865910] */
    ecx = ebp + (-0x1); /* 0x007C9874: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9877: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C987C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C987D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9882: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9885: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C988A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C988B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9891: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9894: pop esi */
L_007C9895:
    MEM32(0x865924) = 0xFu; /* 0x007C9895: mov dword ptr [0x865924], 0xf */
    MEM32(0x865920) = 0; /* 0x007C989F: mov dword ptr [0x865920], 0 */
    MEM8(0x865910) = (uint8_t)(0); /* 0x007C98A9: mov byte ptr [0x865910], 0 */
    esp = ebp; /* 0x007C98B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C98B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C98B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C98C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C98C0u);

L_007C98C0:
    PUSH32(esp, ebp); /* 0x007C98C0: push ebp */
    ebp = esp; /* 0x007C98C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C98C3: push ecx */
    /* cmp MEM32(0x865860), 0x10u */ /* 0x007C98C4: cmp dword ptr [0x865860], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865860)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C98F5; /* 0x007C98CB: jb 0x7c98f5 */
L_007C98CD:
    PUSH32(esp, esi); /* 0x007C98CD: push esi */
    esi = MEM32(0x86584C); /* 0x007C98CE: mov esi, dword ptr [0x86584c] */
    ecx = ebp + (-0x1); /* 0x007C98D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C98D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C98DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C98DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C98E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C98E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C98EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C98EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C98F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C98F4: pop esi */
L_007C98F5:
    MEM32(0x865860) = 0xFu; /* 0x007C98F5: mov dword ptr [0x865860], 0xf */
    MEM32(0x86585C) = 0; /* 0x007C98FF: mov dword ptr [0x86585c], 0 */
    MEM8(0x86584C) = (uint8_t)(0); /* 0x007C9909: mov byte ptr [0x86584c], 0 */
    esp = ebp; /* 0x007C9910: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9913: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9920u);

L_007C9920:
    PUSH32(esp, ebp); /* 0x007C9920: push ebp */
    ebp = esp; /* 0x007C9921: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C9923: push ecx */
    /* cmp MEM32(0x865848), 0x10u */ /* 0x007C9924: cmp dword ptr [0x865848], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865848)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C9955; /* 0x007C992B: jb 0x7c9955 */
L_007C992D:
    PUSH32(esp, esi); /* 0x007C992D: push esi */
    esi = MEM32(0x865834); /* 0x007C992E: mov esi, dword ptr [0x865834] */
    ecx = ebp + (-0x1); /* 0x007C9934: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9937: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C993C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C993D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C9942: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C9945: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C994A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C994B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C9951: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C9954: pop esi */
L_007C9955:
    MEM32(0x865848) = 0xFu; /* 0x007C9955: mov dword ptr [0x865848], 0xf */
    MEM32(0x865844) = 0; /* 0x007C995F: mov dword ptr [0x865844], 0 */
    MEM8(0x865834) = (uint8_t)(0); /* 0x007C9969: mov byte ptr [0x865834], 0 */
    esp = ebp; /* 0x007C9970: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9972: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9973: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C9980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9980u);

L_007C9980:
    ecx = 0x008657E8u; /* 0x007C9980: mov ecx, 0x8657e8 */
    goto L_0052DEC0; /* 0x007C9985: jmp 0x52dec0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DEC0: RECOMP_ITAIL(0x0052DEC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C9990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C9990u);

L_007C9990:
    PUSH32(esp, 0x0040A000u); /* 0x007C9990: push 0x40a000 */
    PUSH32(esp, 7); /* 0x007C9995: push 7 */
    PUSH32(esp, 0x18u); /* 0x007C9997: push 0x18 */
    PUSH32(esp, 0x008FA3B8u); /* 0x007C9999: push 0x8fa3b8 */
    RECOMP_CALL(sub_0077F628); /* 0x007C999E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C99A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C99B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C99B0u);

L_007C99B0:
    PUSH32(esp, ebp); /* 0x007C99B0: push ebp */
    ebp = esp; /* 0x007C99B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C99B3: push ecx */
    /* cmp MEM32(0x8657CC), 0x10u */ /* 0x007C99B4: cmp dword ptr [0x8657cc], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8657CC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C99E5; /* 0x007C99BB: jb 0x7c99e5 */
L_007C99BD:
    PUSH32(esp, esi); /* 0x007C99BD: push esi */
    esi = MEM32(0x8657B8); /* 0x007C99BE: mov esi, dword ptr [0x8657b8] */
    ecx = ebp + (-0x1); /* 0x007C99C4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C99C7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C99CC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C99CD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C99D2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C99D5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C99DA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C99DB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C99E1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C99E4: pop esi */
L_007C99E5:
    MEM32(0x8657CC) = 0xFu; /* 0x007C99E5: mov dword ptr [0x8657cc], 0xf */
    MEM32(0x8657C8) = 0; /* 0x007C99EF: mov dword ptr [0x8657c8], 0 */
    MEM8(0x8657B8) = (uint8_t)(0); /* 0x007C99F9: mov byte ptr [0x8657b8], 0 */
    esp = ebp; /* 0x007C9A00: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C9A02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C9A03: ret  */
    RECOMP_REGS_OUT();
}
