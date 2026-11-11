#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005D6C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6C80u);

L_005D6C80:
    PUSH32(esp, ebp); /* 0x005D6C80: push ebp */
    ebp = esp; /* 0x005D6C81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6C83: push -1 */
    PUSH32(esp, 0x007AE8CCu); /* 0x005D6C85: push 0x7ae8cc */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6C8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6C90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005D6C91: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005D6C94: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6C99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6C9B: push eax */
    eax = ebp + (-0xC); /* 0x005D6C9C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D6C9F: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005D6CA5: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ecx) = 0; /* 0x005D6CA8: mov dword ptr [ecx], 0 */
    eax = ecx + 0x8; /* 0x005D6CAE: lea eax, [ecx + 8] */
    MEM32(ecx + 0x4) = 0; /* 0x005D6CB1: mov dword ptr [ecx + 4], 0 */
    MEM32(eax) = 0; /* 0x005D6CB8: mov dword ptr [eax], 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x005D6CBE: mov dword ptr [ebp - 0x14], eax */
    MEM32(eax + 0x4) = 0; /* 0x005D6CC1: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005D6CC8: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x005D6CCF: mov dword ptr [eax + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x005D6CD6: mov dword ptr [ebp - 4], 1 */
    eax = ecx + 0x18; /* 0x005D6CDD: lea eax, [ecx + 0x18] */
    MEM32(eax) = 0; /* 0x005D6CE0: mov dword ptr [eax], 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x005D6CE6: mov dword ptr [ebp - 0x14], eax */
    MEM32(eax + 0x4) = 0; /* 0x005D6CE9: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005D6CF0: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x005D6CF7: mov dword ptr [eax + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6CFE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x005D6D05: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D6D07: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D6D0A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D6D11: pop ecx */
    esp = ebp; /* 0x005D6D12: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D6D14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D6D15: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D6D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6D20u);

L_005D6D20:
    PUSH32(esp, ebp); /* 0x005D6D20: push ebp */
    ebp = esp; /* 0x005D6D21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6D23: push -1 */
    PUSH32(esp, 0x007AE91Cu); /* 0x005D6D25: push 0x7ae91c */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6D2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6D30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005D6D31: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D6D34: push esi */
    PUSH32(esp, edi); /* 0x005D6D35: push edi */
    eax = MEM32(0x855000); /* 0x005D6D36: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6D3B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6D3D: push eax */
    eax = ebp + (-0xC); /* 0x005D6D3E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D6D41: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D6D47: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005D6D49: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005D6D4C: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x18; /* 0x005D6D53: lea esi, [edi + 0x18] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D6D56: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005D6D59: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x4); /* 0x005D6D5D: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x005D6D60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D6D91; /* 0x005D6D62: je 0x5d6d91 */
L_005D6D64:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005D6D64: push dword ptr [ebp - 0x14] */
    edx = MEM32(esi + 0x8); /* 0x005D6D67: mov edx, dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x005D6D6A: push ecx */
    RECOMP_CALL(sub_005DCBC0); /* 0x005D6D6B: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005D6D70: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D6D73: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005D6D79: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = 0; /* 0x005D6D7C: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005D6D83: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005D6D8A: mov dword ptr [esi + 0xc], 0 */
L_005D6D91:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6D91: mov dword ptr [ebp - 4], 0xffffffff */
    esi = edi + 0x8; /* 0x005D6D98: lea esi, [edi + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D6D9B: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6D9E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4); /* 0x005D6DA5: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x005D6DA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D6DD9; /* 0x005D6DAA: je 0x5d6dd9 */
L_005D6DAC:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005D6DAC: push dword ptr [ebp - 0x14] */
    edx = MEM32(esi + 0x8); /* 0x005D6DAF: mov edx, dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x005D6DB2: push ecx */
    RECOMP_CALL(sub_005DCBC0); /* 0x005D6DB3: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005D6DB8: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D6DBB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005D6DC1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = 0; /* 0x005D6DC4: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005D6DCB: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005D6DD2: mov dword ptr [esi + 0xc], 0 */
L_005D6DD9:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D6DD9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D6DDC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D6DE3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D6DE4: pop edi */
    esi = POP32_VAL(esp); /* 0x005D6DE5: pop esi */
    esp = ebp; /* 0x005D6DE6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D6DE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D6DE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D6DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6DF0u);

L_005D6DF0:
    PUSH32(esp, ebp); /* 0x005D6DF0: push ebp */
    ebp = esp; /* 0x005D6DF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6DF3: push -1 */
    PUSH32(esp, 0x007AE94Bu); /* 0x005D6DF5: push 0x7ae94b */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6DFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6E00: push eax */
    PUSH32(esp, ecx); /* 0x005D6E01: push ecx */
    PUSH32(esp, esi); /* 0x005D6E02: push esi */
    eax = MEM32(0x855000); /* 0x005D6E03: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6E08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6E0A: push eax */
    eax = ebp + (-0xC); /* 0x005D6E0B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D6E0E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D6E14: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005D6E16: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6E19: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4); /* 0x005D6E20: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x005D6E23: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D6E54; /* 0x005D6E25: je 0x5d6e54 */
L_005D6E27:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005D6E27: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0x8); /* 0x005D6E2A: mov edx, dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x005D6E2D: push ecx */
    RECOMP_CALL(sub_005DCBC0); /* 0x005D6E2E: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005D6E33: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D6E36: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005D6E3C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = 0; /* 0x005D6E3F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005D6E46: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005D6E4D: mov dword ptr [esi + 0xc], 0 */
L_005D6E54:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D6E54: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D6E57: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D6E5E: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D6E5F: pop esi */
    esp = ebp; /* 0x005D6E60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D6E62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D6E63: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D6E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6E70u);

L_005D6E70:
    PUSH32(esp, ebp); /* 0x005D6E70: push ebp */
    ebp = esp; /* 0x005D6E71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6E73: push -1 */
    PUSH32(esp, 0x007AEA7Eu); /* 0x005D6E75: push 0x7aea7e */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6E7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6E80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005D6E81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D6E84: push esi */
    PUSH32(esp, edi); /* 0x005D6E85: push edi */
    eax = MEM32(0x855000); /* 0x005D6E86: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6E8B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6E8D: push eax */
    eax = ebp + (-0xC); /* 0x005D6E8E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D6E91: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D6E97: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005D6E99: mov dword ptr [ebp - 0x10], edi */
    MEM32(0x927AE0) = edi; /* 0x005D6E9C: mov dword ptr [0x927ae0], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005D6EA2: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x14; /* 0x005D6EA9: lea esi, [edi + 0x14] */
    MEM32(edi + 0x8) = 0; /* 0x005D6EAC: mov dword ptr [edi + 8], 0 */
    PUSH32(esp, 0); /* 0x005D6EB3: push 0 */
    MEM32(edi + 0x10) = 0; /* 0x005D6EB5: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, 0); /* 0x005D6EBC: push 0 */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D6EBE: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005D6EC1: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005D6EC7: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0046EE50); /* 0x005D6ECE: call 0x46ee50 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005D6ED3: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005D6ED5: mov byte ptr [ebp - 4], 3 */
    esi = edi + 0x1C; /* 0x005D6ED9: lea esi, [edi + 0x1c] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D6EDC: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005D6EDF: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005D6EE5: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005DC320); /* 0x005D6EEC: call 0x5dc320 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005D6EF1: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005D6EF3: mov byte ptr [ebp - 4], 8 */
    eax = edi + 0x28; /* 0x005D6EF7: lea eax, [edi + 0x28] */
    MEM32(eax + 0x14) = 0xFu; /* 0x005D6EFA: mov dword ptr [eax + 0x14], 0xf */
    MEM32(eax + 0x10) = 0; /* 0x005D6F01: mov dword ptr [eax + 0x10], 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x005D6F08: mov dword ptr [ebp - 0x14], eax */
    MEM8(eax) = (uint8_t)(0); /* 0x005D6F0B: mov byte ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005D6F0E: mov byte ptr [ebp - 4], 9 */
    MEM32(eax + 0x1C) = 0; /* 0x005D6F12: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x005D6F19: mov dword ptr [eax + 0x20], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005D6F20: mov byte ptr [ebp - 4], 0xa */
    edx = MEM32(ebp + 0xC); /* 0x005D6F24: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x005D6F27: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F0700); /* 0x005D6F2A: call 0x5f0700 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x005D6F2F: mov dword ptr [edi + 0xc], eax */
    ecx = edi; /* 0x005D6F32: mov ecx, edi */
    MEM16(edi) = (uint16_t)(0); /* 0x005D6F34: mov word ptr [edi], 0 */
    MEM8(edi + 0x2) = (uint8_t)(0); /* 0x005D6F39: mov byte ptr [edi + 2], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005D6F3D: mov dword ptr [edi + 4], 0 */
    MEM8(edi + 0x24) = (uint8_t)(0); /* 0x005D6F44: mov byte ptr [edi + 0x24], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005D6F48: mov dword ptr [edi + 8], 0 */
    RECOMP_CALL(sub_005DA3C0); /* 0x005D6F4F: call 0x5da3c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6F54: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005D6F5B: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D6F5D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D6F60: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D6F67: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D6F68: pop edi */
    esi = POP32_VAL(esp); /* 0x005D6F69: pop esi */
    esp = ebp; /* 0x005D6F6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D6F6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005D6F6D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005D6F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6F70u);

L_005D6F70:
    PUSH32(esp, ebp); /* 0x005D6F70: push ebp */
    ebp = esp; /* 0x005D6F71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6F73: push -1 */
    PUSH32(esp, 0x007AEAC0u); /* 0x005D6F75: push 0x7aeac0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6F7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6F80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005D6F81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D6F84: push esi */
    eax = MEM32(0x855000); /* 0x005D6F85: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6F8A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6F8C: push eax */
    eax = ebp + (-0xC); /* 0x005D6F8D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D6F90: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D6F96: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005D6F98: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005D6F9B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x005D6FA2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005D6FA4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005D6FA5: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005D6FA7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005D6FAA: push eax */
    RECOMP_CALL(sub_005DC260); /* 0x005D6FAB: call 0x5dc260 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D6FB0: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005D6FB7: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D6FB9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D6FBF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005D6FC2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D6FC5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D6FCC: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D6FCD: pop esi */
    esp = ebp; /* 0x005D6FCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D6FD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D6FD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D6FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D6FE0u);

L_005D6FE0:
    PUSH32(esp, ebp); /* 0x005D6FE0: push ebp */
    ebp = esp; /* 0x005D6FE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D6FE3: push -1 */
    PUSH32(esp, 0x007AEB2Eu); /* 0x005D6FE5: push 0x7aeb2e */
    eax = MEM32(FS_BASE + (0)); /* 0x005D6FEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D6FF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005D6FF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D6FF4: push esi */
    PUSH32(esp, edi); /* 0x005D6FF5: push edi */
    eax = MEM32(0x855000); /* 0x005D6FF6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D6FFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D6FFD: push eax */
    eax = ebp + (-0xC); /* 0x005D6FFE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7001: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D7007: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005D7009: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 3; /* 0x005D700C: mov dword ptr [ebp - 4], 3 */
    ecx = MEM32(edi + 0xC); /* 0x005D7013: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005D7016: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005D7018: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005D701B: mov byte ptr [ebp - 4], 2 */
    esi = edi + 0x28; /* 0x005D701F: lea esi, [edi + 0x28] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D7022: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005D7025: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005D7029: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D703A; /* 0x005D702D: jb 0x5d703a */
L_005D702F:
    PUSH32(esp, MEM32(esi)); /* 0x005D702F: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D7031: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D7037: add esp, 4 */
    _flag_k = FK_ADD;
L_005D703A:
    MEM32(esi + 0x14) = 0xFu; /* 0x005D703A: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005D7041: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005D7048: mov byte ptr [esi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005D704B: mov byte ptr [ebp - 4], 1 */
    esi = edi + 0x1C; /* 0x005D704F: lea esi, [edi + 0x1c] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005D7052: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005D7055: mov byte ptr [ebp - 4], 6 */
    ecx = esi; /* 0x005D7059: mov ecx, esi */
    eax = MEM32(esi); /* 0x005D705B: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005D705D: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005D705E: push dword ptr [eax] */
    eax = ebp + (-0x18); /* 0x005D7060: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005D7063: push eax */
    RECOMP_CALL(sub_005DC260); /* 0x005D7064: call 0x5dc260 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005D7069: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x005D706D: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D706F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D7075: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005D7078: mov byte ptr [ebp - 4], 0 */
    ecx = edi + 0x14; /* 0x005D707C: lea ecx, [edi + 0x14] */
    RECOMP_CALL(sub_005DBCB0); /* 0x005D707F: call 0x5dbcb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7084: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x927AE0) = 0; /* 0x005D708B: mov dword ptr [0x927ae0], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7095: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7098: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D709F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D70A0: pop edi */
    esi = POP32_VAL(esp); /* 0x005D70A1: pop esi */
    esp = ebp; /* 0x005D70A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D70A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D70A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D70B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D70B0u);

L_005D70B0:
    PUSH32(esp, ebp); /* 0x005D70B0: push ebp */
    ebp = esp; /* 0x005D70B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005D70B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D70B6: push ebx */
    PUSH32(esp, esi); /* 0x005D70B7: push esi */
    esi = ecx; /* 0x005D70B8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005D70BA: push edi */
    ecx = MEM32(esi + 0xC); /* 0x005D70BB: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D70BE: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D70C0: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D70C3: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D70C5: mov ecx, dword ptr [esi + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x005D70C8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ecx); /* 0x005D70CA: mov eax, dword ptr [ecx] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D70E0; /* 0x005D70CC: jne 0x5d70e0 */
L_005D70CE:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005D70CE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005D70D1: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D70D4: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005D70D7: pop edi */
    esi = POP32_VAL(esp); /* 0x005D70D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D70D9: pop ebx */
    esp = ebp; /* 0x005D70DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D70DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005D70DD: ret 0x10 */
L_005D70E0:
    eax = MEM32(eax + 0x2C); /* 0x005D70E0: mov eax, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005D70E3: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005D70E5: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(eax); /* 0x005D70E8: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D70EA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D717D; /* 0x005D70EC: je 0x5d717d */
L_005D70F2:
    SET_HI8(ebx, MEM8(ebp + 0x10)); /* 0x005D70F2: mov bh, byte ptr [ebp + 0x10] */
L_005D70F5:
    ecx = MEM32(esi + 0xC); /* 0x005D70F5: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005D70F8: push dword ptr [ebp - 4] */
    eax = MEM32(ecx); /* 0x005D70FB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005D70FD: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005D7100: mov ecx, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x005D7102: mov edi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = ecx; /* 0x005D7105: mov dword ptr [ebp + 0x10], ecx */
    /* test HI8(ebx), HI8(ebx) */ /* 0x005D7108: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7118; /* 0x005D710A: je 0x5d7118 */
L_005D710C:
    eax = MEM32(ebp + 0x8); /* 0x005D710C: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax) */ /* 0x005D710F: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7118; /* 0x005D7111: jne 0x5d7118 */
L_005D7113:
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005D7113: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7166; /* 0x005D7116: je 0x5d7166 */
L_005D7118:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D7118: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D711E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7126; /* 0x005D7120: jne 0x5d7126 */
L_005D7122:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D7122: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D7140; /* 0x005D7124: jmp 0x5d7140 */
L_005D7126:
    ecx = MEM32(0x927AEC); /* 0x005D7126: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D712C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7140; /* 0x005D712E: jne 0x5d7140 */
L_005D7130:
    ecx = 0x00927AE8u; /* 0x005D7130: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D7135: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D713A: mov ecx, dword ptr [0x927aec] */
L_005D7140:
    eax = MEM32(ecx); /* 0x005D7140: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xC); /* 0x005D7142: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x005D7145: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D7146: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x005D7149: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(eax) */ /* 0x005D714C: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7155; /* 0x005D714E: jne 0x5d7155 */
L_005D7150:
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005D7150: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7166; /* 0x005D7153: je 0x5d7166 */
L_005D7155:
    ecx = MEM32(esi + 0xC); /* 0x005D7155: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005D7158: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005D715B: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x005D715E: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005D7160: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x005D7163: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
L_005D7166:
    ecx = MEM32(esi + 0xC); /* 0x005D7166: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005D7169: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005D716B: mov byte ptr [ebp - 4], bl */
    eax = MEM32(ecx); /* 0x005D716E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x005D7170: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(eax); /* 0x005D7173: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(ebx), LO8(eax) */ /* 0x005D7175: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005D70F5; /* 0x005D7177: jb 0x5d70f5 */
L_005D717D:
    edi = POP32_VAL(esp); /* 0x005D717D: pop edi */
    esi = POP32_VAL(esp); /* 0x005D717E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D717F: pop ebx */
    esp = ebp; /* 0x005D7180: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7182: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005D7183: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005D7190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7190u);

L_005D7190:
    PUSH32(esp, ebp); /* 0x005D7190: push ebp */
    ebp = esp; /* 0x005D7191: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7193: push -1 */
    PUSH32(esp, 0x007AEB60u); /* 0x005D7195: push 0x7aeb60 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D719A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D71A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005D71A1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D71A4: push esi */
    eax = MEM32(0x855000); /* 0x005D71A5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D71AA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D71AC: push eax */
    eax = ebp + (-0xC); /* 0x005D71AD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D71B0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D71B6: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D71B8: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D71BB: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D71BD: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D71C0: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D71C2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D71EF; /* 0x005D71C4: je 0x5d71ef */
L_005D71C6:
    ecx = MEM32(esi + 0xC); /* 0x005D71C6: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x10); /* 0x005D71C9: lea edx, [ebp - 0x10] */
    MEM8(esi + 0x1) = (uint8_t)(4); /* 0x005D71CC: mov byte ptr [esi + 1], 4 */
    PUSH32(esp, edx); /* 0x005D71D0: push edx */
    eax = MEM32(ecx); /* 0x005D71D1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D71D3: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005D71D9: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x005D71DC: mov dword ptr [esi + 8], eax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D71DF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D71E2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D71E9: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D71EA: pop esi */
    esp = ebp; /* 0x005D71EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D71ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D71EE: ret  */
L_005D71EF:
    ecx = ebp + (-0x34); /* 0x005D71EF: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D71F2: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D71F7: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005D71FE: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x32Cu; /* 0x005D7202: mov dword ptr [ebp - 0x10], 0x32c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D722D; /* 0x005D7209: jne 0x5d722d */
L_005D720B:
    PUSH32(esp, 0x20u); /* 0x005D720B: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005D720D: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7210: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005D7215: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7218: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D721B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D721B: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005D721E: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x32Cu; /* 0x005D7221: mov dword ptr [eax], 0x32c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x005D7227: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D723C; /* 0x005D722B: jmp 0x5d723c */
L_005D722D:
    PUSH32(esp, ecx); /* 0x005D722D: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D722E: push 0x20 */
    eax = ebp + (-0x10); /* 0x005D7230: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005D7233: push eax */
    ecx = ebp + (-0x34); /* 0x005D7234: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7237: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D723C:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D723C: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D7242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D724A; /* 0x005D7244: jne 0x5d724a */
L_005D7246:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D7246: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D7264; /* 0x005D7248: jmp 0x5d7264 */
L_005D724A:
    ecx = MEM32(0x927AEC); /* 0x005D724A: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D7250: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7264; /* 0x005D7252: jne 0x5d7264 */
L_005D7254:
    ecx = 0x00927AE8u; /* 0x005D7254: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D7259: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D725E: mov ecx, dword ptr [0x927aec] */
L_005D7264:
    eax = MEM32(ecx); /* 0x005D7264: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x14); /* 0x005D7266: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005D7269: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D726A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005D726D: push eax */
    ecx = ebp + (-0x34); /* 0x005D726E: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F4D80); /* 0x005D7271: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D7276: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x34); /* 0x005D7279: lea edx, [ebp - 0x34] */
    PUSH32(esp, 2); /* 0x005D727C: push 2 */
    PUSH32(esp, edx); /* 0x005D727E: push edx */
    eax = MEM32(ecx); /* 0x005D727F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D7281: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7284: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005D728B: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005D728E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D72B1; /* 0x005D7290: je 0x5d72b1 */
L_005D7292:
    PUSH32(esp, eax); /* 0x005D7292: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D7293: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D7299: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005D729C: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D72A3: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005D72AA: mov dword ptr [ebp - 0x18], 0 */
L_005D72B1:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D72B1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D72B4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D72BB: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D72BC: pop esi */
    esp = ebp; /* 0x005D72BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D72BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D72C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D72D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D72D0u);

L_005D72D0:
    PUSH32(esp, ebp); /* 0x005D72D0: push ebp */
    ebp = esp; /* 0x005D72D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D72D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D72D6: push -1 */
    PUSH32(esp, 0x007AEB90u); /* 0x005D72D8: push 0x7aeb90 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D72DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D72E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x005D72E4: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D72E7: push esi */
    PUSH32(esp, edi); /* 0x005D72E8: push edi */
    eax = MEM32(0x855000); /* 0x005D72E9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D72EE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D72F0: push eax */
    eax = esp + 0x40; /* 0x005D72F1: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D72F5: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D72FB: mov edi, ecx */
    ecx = MEM32(edi + 0xC); /* 0x005D72FD: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005D7300: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D7302: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7305: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7307: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D74D9; /* 0x005D7309: je 0x5d74d9 */
L_005D730F:
    ecx = esp + 0x1C; /* 0x005D730F: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D7313: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005D7318: mov dword ptr [esp + 0x48], 0 */
    ecx = MEM32(edi + 0x1C); /* 0x005D7320: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x005D7323: mov eax, dword ptr [ecx] */
    /* cmp eax, ecx */ /* 0x005D7325: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D737B; /* 0x005D7327: je 0x5d737b */
L_005D7329:
    esp = esp; /* 0x005D7329: lea esp, [esp] */
L_005D7330:
    MEM8(eax + 0x18) = (uint8_t)(3); /* 0x005D7330: mov byte ptr [eax + 0x18], 3 */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7334: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7377; /* 0x005D7338: jne 0x5d7377 */
L_005D733A:
    edx = MEM32(eax + 0x8); /* 0x005D733A: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D733D: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D735C; /* 0x005D7341: jne 0x5d735c */
L_005D7343:
    eax = edx; /* 0x005D7343: mov eax, edx */
    edx = MEM32(eax); /* 0x005D7345: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D7347: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7377; /* 0x005D734B: jne 0x5d7377 */
L_005D734D:
    ecx = ecx; /* 0x005D734D: lea ecx, [ecx] */
L_005D7350:
    eax = edx; /* 0x005D7350: mov eax, edx */
    edx = MEM32(eax); /* 0x005D7352: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D7354: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7350; /* 0x005D7358: je 0x5d7350 */
L_005D735A:
    goto L_005D7377; /* 0x005D735A: jmp 0x5d7377 */
L_005D735C:
    edx = MEM32(eax + 0x4); /* 0x005D735C: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D735F: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7375; /* 0x005D7363: jne 0x5d7375 */
L_005D7365:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005D7365: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7375; /* 0x005D7368: jne 0x5d7375 */
L_005D736A:
    eax = edx; /* 0x005D736A: mov eax, edx */
    edx = MEM32(edx + 0x4); /* 0x005D736C: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D736F: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7365; /* 0x005D7373: je 0x5d7365 */
L_005D7375:
    eax = edx; /* 0x005D7375: mov eax, edx */
L_005D7377:
    /* cmp eax, ecx */ /* 0x005D7377: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7330; /* 0x005D7379: jne 0x5d7330 */
L_005D737B:
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D737B: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x1) = (uint8_t)(3); /* 0x005D7380: mov byte ptr [edi + 1], 3 */
    MEM32(esp + 0xC) = 0x332u; /* 0x005D7384: mov dword ptr [esp + 0xc], 0x332 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D73B4; /* 0x005D738C: jne 0x5d73b4 */
L_005D738E:
    PUSH32(esp, 0x20u); /* 0x005D738E: push 0x20 */
    ecx = esp + 0x20; /* 0x005D7390: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7394: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D7399: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D739D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D73A0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D73A0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D73A3: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x332u; /* 0x005D73A7: mov dword ptr [eax], 0x332 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x20u; /* 0x005D73AD: add dword ptr [esp + 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D73C5; /* 0x005D73B2: jmp 0x5d73c5 */
L_005D73B4:
    PUSH32(esp, ecx); /* 0x005D73B4: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D73B5: push 0x20 */
    eax = esp + 0x14; /* 0x005D73B7: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005D73BB: push eax */
    ecx = esp + 0x28; /* 0x005D73BC: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D73C0: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D73C5:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D73C5: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D73CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D73D3; /* 0x005D73CD: jne 0x5d73d3 */
L_005D73CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D73CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D73ED; /* 0x005D73D1: jmp 0x5d73ed */
L_005D73D3:
    ecx = MEM32(0x927AEC); /* 0x005D73D3: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D73D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D73ED; /* 0x005D73DB: jne 0x5d73ed */
L_005D73DD:
    ecx = 0x00927AE8u; /* 0x005D73DD: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D73E2: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D73E7: mov ecx, dword ptr [0x927aec] */
L_005D73ED:
    eax = MEM32(ecx); /* 0x005D73ED: mov eax, dword ptr [ecx] */
    edx = esp + 0xC; /* 0x005D73EF: lea edx, [esp + 0xc] */
    PUSH32(esp, edx); /* 0x005D73F3: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D73F4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D73F7: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(eax); /* 0x005D73FC: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005D73FE: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x14) = ecx; /* 0x005D7401: mov dword ptr [esp + 0x14], ecx */
    MEM32(esp + 0x18) = eax; /* 0x005D7405: mov dword ptr [esp + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7435; /* 0x005D7409: jne 0x5d7435 */
L_005D740B:
    PUSH32(esp, 0x40u); /* 0x005D740B: push 0x40 */
    ecx = esp + 0x20; /* 0x005D740D: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7411: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D7416: mov eax, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0x14); _xmm[0].u64[1] = 0; /* 0x005D741A: movq xmm0, qword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7420: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7423: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7423: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D7426: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D742A: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x40u; /* 0x005D742E: add dword ptr [esp + 0x28], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D7446; /* 0x005D7433: jmp 0x5d7446 */
L_005D7435:
    PUSH32(esp, ecx); /* 0x005D7435: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D7436: push 0x40 */
    eax = esp + 0x1C; /* 0x005D7438: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D743C: push eax */
    ecx = esp + 0x28; /* 0x005D743D: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7441: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D7446:
    ecx = MEM32(edi + 0xC); /* 0x005D7446: mov ecx, dword ptr [edi + 0xc] */
    edx = esp + 0xC; /* 0x005D7449: lea edx, [esp + 0xc] */
    PUSH32(esp, edx); /* 0x005D744D: push edx */
    eax = MEM32(ecx); /* 0x005D744E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D7450: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D7456: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(esp + 0xC); /* 0x005D745B: mov esi, dword ptr [esp + 0xc] */
    MEM32(esp + 0x14) = esi; /* 0x005D745F: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7487; /* 0x005D7463: jne 0x5d7487 */
L_005D7465:
    PUSH32(esp, 0x20u); /* 0x005D7465: push 0x20 */
    ecx = esp + 0x20; /* 0x005D7467: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D746B: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D7470: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7474: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7477: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7477: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D747A: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D747E: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x20u; /* 0x005D7480: add dword ptr [esp + 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D7498; /* 0x005D7485: jmp 0x5d7498 */
L_005D7487:
    PUSH32(esp, ecx); /* 0x005D7487: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D7488: push 0x20 */
    eax = esp + 0x1C; /* 0x005D748A: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D748E: push eax */
    ecx = esp + 0x28; /* 0x005D748F: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7493: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D7498:
    ecx = MEM32(edi + 0xC); /* 0x005D7498: mov ecx, dword ptr [edi + 0xc] */
    edx = esp + 0x1C; /* 0x005D749B: lea edx, [esp + 0x1c] */
    PUSH32(esp, 2); /* 0x005D749F: push 2 */
    PUSH32(esp, edx); /* 0x005D74A1: push edx */
    eax = MEM32(ecx); /* 0x005D74A2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D74A4: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005D74A7: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005D74AF: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005D74B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D74D9; /* 0x005D74B5: je 0x5d74d9 */
L_005D74B7:
    PUSH32(esp, eax); /* 0x005D74B7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D74B8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D74BE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005D74C1: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005D74C9: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005D74D1: mov dword ptr [esp + 0x38], 0 */
L_005D74D9:
    ecx = MEM32(esp + 0x40); /* 0x005D74D9: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D74DD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D74E4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D74E5: pop edi */
    esi = POP32_VAL(esp); /* 0x005D74E6: pop esi */
    esp = ebp; /* 0x005D74E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D74E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D74EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D74F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D74F0u);

L_005D74F0:
    PUSH32(esp, ebp); /* 0x005D74F0: push ebp */
    ebp = esp; /* 0x005D74F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D74F3: push -1 */
    PUSH32(esp, 0x007AEBC0u); /* 0x005D74F5: push 0x7aebc0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D74FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7500: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005D7501: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D7504: push esi */
    PUSH32(esp, edi); /* 0x005D7505: push edi */
    eax = MEM32(0x855000); /* 0x005D7506: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D750B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D750D: push eax */
    eax = ebp + (-0xC); /* 0x005D750E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7511: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D7517: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D7519: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D751C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D751E: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7521: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7523: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7635; /* 0x005D7525: je 0x5d7635 */
L_005D752B:
    ecx = ebp + (-0x38); /* 0x005D752B: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D752E: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D7533: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x2C)), 7 */ /* 0x005D753A: test byte ptr [ebp - 0x2c], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x331u; /* 0x005D753E: mov dword ptr [ebp - 0x10], 0x331 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7569; /* 0x005D7545: jne 0x5d7569 */
L_005D7547:
    PUSH32(esp, 0x20u); /* 0x005D7547: push 0x20 */
    ecx = ebp + (-0x38); /* 0x005D7549: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D754C: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x005D7551: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7554: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7557: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7557: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x005D755A: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x331u; /* 0x005D755D: mov dword ptr [eax], 0x331 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x20u; /* 0x005D7563: add dword ptr [ebp - 0x2c], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D7578; /* 0x005D7567: jmp 0x5d7578 */
L_005D7569:
    PUSH32(esp, ecx); /* 0x005D7569: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D756A: push 0x20 */
    eax = ebp + (-0x10); /* 0x005D756C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005D756F: push eax */
    ecx = ebp + (-0x38); /* 0x005D7570: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7573: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D7578:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D7578: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D757E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7586; /* 0x005D7580: jne 0x5d7586 */
L_005D7582:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D7582: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D75A0; /* 0x005D7584: jmp 0x5d75a0 */
L_005D7586:
    ecx = MEM32(0x927AEC); /* 0x005D7586: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D758C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D75A0; /* 0x005D758E: jne 0x5d75a0 */
L_005D7590:
    ecx = 0x00927AE8u; /* 0x005D7590: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D7595: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D759A: mov ecx, dword ptr [0x927aec] */
L_005D75A0:
    eax = MEM32(ecx); /* 0x005D75A0: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x005D75A2: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x005D75A5: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D75A6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005D75A9: push eax */
    ecx = ebp + (-0x38); /* 0x005D75AA: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F4D80); /* 0x005D75AD: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D75B2: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x10); /* 0x005D75B5: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x005D75B8: push edx */
    eax = MEM32(ecx); /* 0x005D75B9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D75BB: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x2C)), 7 */ /* 0x005D75C1: test byte ptr [ebp - 0x2c], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + (-0x10)); /* 0x005D75C5: mov edi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = edi; /* 0x005D75C8: mov dword ptr [ebp - 0x14], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D75EB; /* 0x005D75CB: jne 0x5d75eb */
L_005D75CD:
    PUSH32(esp, 0x20u); /* 0x005D75CD: push 0x20 */
    ecx = ebp + (-0x38); /* 0x005D75CF: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D75D2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x005D75D7: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D75DA: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D75DD: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D75DD: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x005D75E0: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005D75E3: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x20u; /* 0x005D75E5: add dword ptr [ebp - 0x2c], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D75FA; /* 0x005D75E9: jmp 0x5d75fa */
L_005D75EB:
    PUSH32(esp, ecx); /* 0x005D75EB: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D75EC: push 0x20 */
    eax = ebp + (-0x14); /* 0x005D75EE: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005D75F1: push eax */
    ecx = ebp + (-0x38); /* 0x005D75F2: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F5800); /* 0x005D75F5: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D75FA:
    ecx = MEM32(esi + 0xC); /* 0x005D75FA: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x38); /* 0x005D75FD: lea edx, [ebp - 0x38] */
    PUSH32(esp, 2); /* 0x005D7600: push 2 */
    PUSH32(esp, edx); /* 0x005D7602: push edx */
    eax = MEM32(ecx); /* 0x005D7603: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D7605: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7608: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x24)); /* 0x005D760F: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x005D7612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7635; /* 0x005D7614: je 0x5d7635 */
L_005D7616:
    PUSH32(esp, eax); /* 0x005D7616: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D7617: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D761D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005D7620: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005D7627: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D762E: mov dword ptr [ebp - 0x1c], 0 */
L_005D7635:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7635: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7638: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D763F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7640: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7641: pop esi */
    esp = ebp; /* 0x005D7642: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7644: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7645: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D7650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7650u);

L_005D7650:
    PUSH32(esp, ebp); /* 0x005D7650: push ebp */
    ebp = esp; /* 0x005D7651: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7653: push -1 */
    PUSH32(esp, 0x007AEBF0u); /* 0x005D7655: push 0x7aebf0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D765A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7660: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x005D7661: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D7664: push esi */
    PUSH32(esp, edi); /* 0x005D7665: push edi */
    eax = MEM32(0x855000); /* 0x005D7666: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D766B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D766D: push eax */
    eax = ebp + (-0xC); /* 0x005D766E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7671: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D7677: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D7679: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D767C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D767E: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7681: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7683: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D77A0; /* 0x005D7685: jne 0x5d77a0 */
L_005D768B:
    ecx = ebp + (-0x3C); /* 0x005D768B: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D768E: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D7693: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x30)), 7 */ /* 0x005D769A: test byte ptr [ebp - 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x14)) = 0x32Au; /* 0x005D769E: mov dword ptr [ebp - 0x14], 0x32a */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D76C9; /* 0x005D76A5: jne 0x5d76c9 */
L_005D76A7:
    PUSH32(esp, 0x20u); /* 0x005D76A7: push 0x20 */
    ecx = ebp + (-0x3C); /* 0x005D76A9: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D76AC: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x005D76B1: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D76B4: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D76B7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D76B7: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x005D76BA: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x32Au; /* 0x005D76BD: mov dword ptr [eax], 0x32a */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0x20u; /* 0x005D76C3: add dword ptr [ebp - 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D76D8; /* 0x005D76C7: jmp 0x5d76d8 */
L_005D76C9:
    PUSH32(esp, ecx); /* 0x005D76C9: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D76CA: push 0x20 */
    eax = ebp + (-0x14); /* 0x005D76CC: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005D76CF: push eax */
    ecx = ebp + (-0x3C); /* 0x005D76D0: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F5800); /* 0x005D76D3: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D76D8:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D76D8: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D76DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D76E6; /* 0x005D76E0: jne 0x5d76e6 */
L_005D76E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D76E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D7700; /* 0x005D76E4: jmp 0x5d7700 */
L_005D76E6:
    ecx = MEM32(0x927AEC); /* 0x005D76E6: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D76EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7700; /* 0x005D76EE: jne 0x5d7700 */
L_005D76F0:
    ecx = 0x00927AE8u; /* 0x005D76F0: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D76F5: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D76FA: mov ecx, dword ptr [0x927aec] */
L_005D7700:
    eax = MEM32(ecx); /* 0x005D7700: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x1C); /* 0x005D7702: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x005D7705: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D7706: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005D7709: push eax */
    ecx = ebp + (-0x3C); /* 0x005D770A: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F4D80); /* 0x005D770D: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D7712: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x14); /* 0x005D7715: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005D7718: push edx */
    eax = MEM32(ecx); /* 0x005D7719: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D771B: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x30)), 7 */ /* 0x005D7721: test byte ptr [ebp - 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + (-0x14)); /* 0x005D7725: mov edi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = edi; /* 0x005D7728: mov dword ptr [ebp - 0x18], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D774B; /* 0x005D772B: jne 0x5d774b */
L_005D772D:
    PUSH32(esp, 0x20u); /* 0x005D772D: push 0x20 */
    ecx = ebp + (-0x3C); /* 0x005D772F: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7732: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x005D7737: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D773A: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D773D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D773D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x005D7740: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005D7743: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0x20u; /* 0x005D7745: add dword ptr [ebp - 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D775A; /* 0x005D7749: jmp 0x5d775a */
L_005D774B:
    PUSH32(esp, ecx); /* 0x005D774B: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D774C: push 0x20 */
    eax = ebp + (-0x18); /* 0x005D774E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005D7751: push eax */
    ecx = ebp + (-0x3C); /* 0x005D7752: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7755: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D775A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D775A: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x3C); /* 0x005D775D: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F56D0); /* 0x005D7760: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D7765: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x3C); /* 0x005D7768: lea edx, [ebp - 0x3c] */
    PUSH32(esp, 2); /* 0x005D776B: push 2 */
    PUSH32(esp, edx); /* 0x005D776D: push edx */
    eax = MEM32(ecx); /* 0x005D776E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D7770: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7773: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x28)); /* 0x005D777A: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x005D777D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D77A0; /* 0x005D777F: je 0x5d77a0 */
L_005D7781:
    PUSH32(esp, eax); /* 0x005D7781: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D7782: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D7788: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = 0; /* 0x005D778B: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005D7792: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005D7799: mov dword ptr [ebp - 0x20], 0 */
L_005D77A0:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D77A0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D77A3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D77AA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D77AB: pop edi */
    esi = POP32_VAL(esp); /* 0x005D77AC: pop esi */
    esp = ebp; /* 0x005D77AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D77AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D77B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D77C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D77C0u);

L_005D77C0:
    PUSH32(esp, ebp); /* 0x005D77C0: push ebp */
    ebp = esp; /* 0x005D77C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D77C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D77C6: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005D77C8: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D77CD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D77D3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005D77D4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D77D7: push esi */
    PUSH32(esp, edi); /* 0x005D77D8: push edi */
    eax = MEM32(0x855000); /* 0x005D77D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D77DE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D77E0: push eax */
    eax = esp + 0x38; /* 0x005D77E1: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D77E5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D77EB: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D77ED: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D77F0: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D77F2: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D77F5: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D77F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7901; /* 0x005D77F9: je 0x5d7901 */
L_005D77FF:
    ecx = esp + 0x14; /* 0x005D77FF: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D7803: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005D7808: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005D7810: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0xC) = 0x329u; /* 0x005D7815: mov dword ptr [esp + 0xc], 0x329 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7845; /* 0x005D781D: jne 0x5d7845 */
L_005D781F:
    PUSH32(esp, 0x20u); /* 0x005D781F: push 0x20 */
    ecx = esp + 0x18; /* 0x005D7821: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7825: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005D782A: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D782E: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7831: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7831: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005D7834: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x329u; /* 0x005D7838: mov dword ptr [eax], 0x329 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005D783E: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D7856; /* 0x005D7843: jmp 0x5d7856 */
L_005D7845:
    PUSH32(esp, ecx); /* 0x005D7845: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D7846: push 0x20 */
    eax = esp + 0x14; /* 0x005D7848: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005D784C: push eax */
    ecx = esp + 0x20; /* 0x005D784D: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7851: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D7856:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D7856: push dword ptr [ebp + 8] */
    ecx = esp + 0x18; /* 0x005D7859: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F4D80); /* 0x005D785D: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D7862: mov ecx, dword ptr [esi + 0xc] */
    edx = esp + 0xC; /* 0x005D7865: lea edx, [esp + 0xc] */
    PUSH32(esp, edx); /* 0x005D7869: push edx */
    eax = MEM32(ecx); /* 0x005D786A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D786C: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x20), 7 */ /* 0x005D7872: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(esp + 0xC); /* 0x005D7877: mov edi, dword ptr [esp + 0xc] */
    MEM32(esp + 0x10) = edi; /* 0x005D787B: mov dword ptr [esp + 0x10], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D78A3; /* 0x005D787F: jne 0x5d78a3 */
L_005D7881:
    PUSH32(esp, 0x20u); /* 0x005D7881: push 0x20 */
    ecx = esp + 0x18; /* 0x005D7883: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7887: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005D788C: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7890: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7893: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7893: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005D7896: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005D789A: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005D789C: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D78B4; /* 0x005D78A1: jmp 0x5d78b4 */
L_005D78A3:
    PUSH32(esp, ecx); /* 0x005D78A3: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D78A4: push 0x20 */
    eax = esp + 0x18; /* 0x005D78A6: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D78AA: push eax */
    ecx = esp + 0x20; /* 0x005D78AB: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005D78AF: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D78B4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005D78B4: push dword ptr [ebp + 0xc] */
    ecx = esp + 0x18; /* 0x005D78B7: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F56D0); /* 0x005D78BB: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D78C0: mov ecx, dword ptr [esi + 0xc] */
    edx = esp + 0x14; /* 0x005D78C3: lea edx, [esp + 0x14] */
    PUSH32(esp, 2); /* 0x005D78C7: push 2 */
    PUSH32(esp, edx); /* 0x005D78C9: push edx */
    eax = MEM32(ecx); /* 0x005D78CA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D78CC: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005D78CF: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005D78D7: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005D78DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7901; /* 0x005D78DD: je 0x5d7901 */
L_005D78DF:
    PUSH32(esp, eax); /* 0x005D78DF: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D78E0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D78E6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005D78E9: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005D78F1: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005D78F9: mov dword ptr [esp + 0x30], 0 */
L_005D7901:
    ecx = MEM32(esp + 0x38); /* 0x005D7901: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7905: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D790C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D790D: pop edi */
    esi = POP32_VAL(esp); /* 0x005D790E: pop esi */
    esp = ebp; /* 0x005D790F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005D7912: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005D7920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7920u);

L_005D7920:
    PUSH32(esp, ebp); /* 0x005D7920: push ebp */
    ebp = esp; /* 0x005D7921: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7923: push -1 */
    PUSH32(esp, 0x007AEC50u); /* 0x005D7925: push 0x7aec50 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D792A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7930: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005D7931: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D7934: push ebx */
    PUSH32(esp, esi); /* 0x005D7935: push esi */
    PUSH32(esp, edi); /* 0x005D7936: push edi */
    eax = MEM32(0x855000); /* 0x005D7937: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D793C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D793E: push eax */
    eax = ebp + (-0xC); /* 0x005D793F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7942: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D7948: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D794A: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D794D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D794F: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7952: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7954: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7A6D; /* 0x005D7956: je 0x5d7a6d */
L_005D795C:
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x005D795C: mov bl, byte ptr [ebp + 8] */
    ecx = ebp + (-0x34); /* 0x005D795F: lea ecx, [ebp - 0x34] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x005D7962: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_005F3C60); /* 0x005D7964: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D7969: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005D7970: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0x8) = 0x32Du; /* 0x005D7974: mov dword ptr [ebp + 8], 0x32d */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D799F; /* 0x005D797B: jne 0x5d799f */
L_005D797D:
    PUSH32(esp, 0x20u); /* 0x005D797D: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005D797F: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7982: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005D7987: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D798A: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D798D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D798D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005D7990: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x32Du; /* 0x005D7993: mov dword ptr [eax], 0x32d */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x005D7999: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D79AE; /* 0x005D799D: jmp 0x5d79ae */
L_005D799F:
    PUSH32(esp, ecx); /* 0x005D799F: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D79A0: push 0x20 */
    eax = ebp + 0x8; /* 0x005D79A2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005D79A5: push eax */
    ecx = ebp + (-0x34); /* 0x005D79A6: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005D79A9: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D79AE:
    ecx = MEM32(esi + 0xC); /* 0x005D79AE: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + 0x8; /* 0x005D79B1: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x005D79B4: push edx */
    eax = MEM32(ecx); /* 0x005D79B5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D79B7: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005D79BD: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005D79C1: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = edi; /* 0x005D79C4: mov dword ptr [ebp - 0x14], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D79EC; /* 0x005D79C7: jne 0x5d79ec */
L_005D79C9:
    PUSH32(esp, 0x20u); /* 0x005D79C9: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005D79CB: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D79CE: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005D79D3: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D79D6: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D79D9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D79D9: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005D79DC: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005D79DF: mov dword ptr [eax], edi */
    eax = MEM32(ebp + (-0x28)); /* 0x005D79E1: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D79E4: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x005D79E7: mov dword ptr [ebp - 0x28], eax */
    goto L_005D79FE; /* 0x005D79EA: jmp 0x5d79fe */
L_005D79EC:
    PUSH32(esp, ecx); /* 0x005D79EC: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D79ED: push 0x20 */
    eax = ebp + (-0x14); /* 0x005D79EF: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005D79F2: push eax */
    ecx = ebp + (-0x34); /* 0x005D79F3: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005D79F6: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005D79FB: mov eax, dword ptr [ebp - 0x28] */
L_005D79FE:
    MEM8(ebp + 0x8) = (uint8_t)(LO8(ebx)); /* 0x005D79FE: mov byte ptr [ebp + 8], bl */
    /* test LO8(eax), 7 */ /* 0x005D7A01: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D7A23; /* 0x005D7A03: jne 0x5d7a23 */
L_005D7A05:
    PUSH32(esp, 8); /* 0x005D7A05: push 8 */
    ecx = ebp + (-0x34); /* 0x005D7A07: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D7A0A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005D7A0F: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D7A12: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D7A15: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D7A15: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005D7A18: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x005D7A1B: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 8; /* 0x005D7A1D: add dword ptr [ebp - 0x28], 8 */
    _flag_k = FK_ADD;
    goto L_005D7A32; /* 0x005D7A21: jmp 0x5d7a32 */
L_005D7A23:
    PUSH32(esp, ecx); /* 0x005D7A23: push ecx */
    PUSH32(esp, 8); /* 0x005D7A24: push 8 */
    eax = ebp + 0x8; /* 0x005D7A26: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005D7A29: push eax */
    ecx = ebp + (-0x34); /* 0x005D7A2A: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005D7A2D: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D7A32:
    ecx = MEM32(esi + 0xC); /* 0x005D7A32: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x34); /* 0x005D7A35: lea edx, [ebp - 0x34] */
    PUSH32(esp, 2); /* 0x005D7A38: push 2 */
    PUSH32(esp, edx); /* 0x005D7A3A: push edx */
    eax = MEM32(ecx); /* 0x005D7A3B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D7A3D: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7A40: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005D7A47: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005D7A4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7A6D; /* 0x005D7A4C: je 0x5d7a6d */
L_005D7A4E:
    PUSH32(esp, eax); /* 0x005D7A4E: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D7A4F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D7A55: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005D7A58: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D7A5F: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005D7A66: mov dword ptr [ebp - 0x18], 0 */
L_005D7A6D:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7A6D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7A70: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7A77: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7A78: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7A79: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D7A7A: pop ebx */
    esp = ebp; /* 0x005D7A7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7A7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D7A7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D7A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7A90u);

L_005D7A90:
    PUSH32(esp, ebp); /* 0x005D7A90: push ebp */
    ebp = esp; /* 0x005D7A91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005D7A93: push ecx */
    PUSH32(esp, esi); /* 0x005D7A94: push esi */
    PUSH32(esp, edi); /* 0x005D7A95: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D7A96: push dword ptr [ebp + 8] */
    edi = ecx; /* 0x005D7A99: mov edi, ecx */
    eax = ebp + (-0x4); /* 0x005D7A9B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x005D7A9E: push eax */
    ecx = edi + 0x1C; /* 0x005D7A9F: lea ecx, [edi + 0x1c] */
    RECOMP_CALL(sub_005DC0D0); /* 0x005D7AA2: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x005D7AA7: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(edi + 0x1C) */ /* 0x005D7AAA: cmp eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7AD1; /* 0x005D7AAD: je 0x5d7ad1 */
L_005D7AAF:
    /* cmp MEM8(eax + 0x19), 0 */ /* 0x005D7AAF: cmp byte ptr [eax + 0x19], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x19)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7AD1; /* 0x005D7AB3: jne 0x5d7ad1 */
L_005D7AB5:
    MEM8(eax + 0x19) = (uint8_t)(1); /* 0x005D7AB5: mov byte ptr [eax + 0x19], 1 */
    ecx = MEM32(edi + 0xC); /* 0x005D7AB9: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005D7ABC: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D7ABE: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7AC1: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7AC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7AD1; /* 0x005D7AC5: je 0x5d7ad1 */
L_005D7AC7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D7AC7: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x005D7ACA: mov ecx, edi */
    RECOMP_CALL(sub_005DA0A0); /* 0x005D7ACC: call 0x5da0a0 */
    RECOMP_FLAGS_IN();
L_005D7AD1:
    edi = POP32_VAL(esp); /* 0x005D7AD1: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7AD2: pop esi */
    esp = ebp; /* 0x005D7AD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D7AD6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D7AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7AE0u);

L_005D7AE0:
    PUSH32(esp, ebp); /* 0x005D7AE0: push ebp */
    ebp = esp; /* 0x005D7AE1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005D7AE3: push esi */
    esi = ecx; /* 0x005D7AE4: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D7AE6: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D7AE9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005D7AEB: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005D7AEE: mov ecx, eax */
    RECOMP_CALL(sub_0046D220); /* 0x005D7AF0: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7AF5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7B18; /* 0x005D7AF7: je 0x5d7b18 */
L_005D7AF9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D7AF9: push dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x005D7AFC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005D7AFF: push eax */
    ecx = esi + 0x1C; /* 0x005D7B00: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_005DC0D0); /* 0x005D7B03: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005D7B08: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x1C) */ /* 0x005D7B0B: cmp eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7B18; /* 0x005D7B0E: je 0x5d7b18 */
L_005D7B10:
    SET_LO8(eax, MEM8(eax + 0x19)); /* 0x005D7B10: mov al, byte ptr [eax + 0x19] */
    esi = POP32_VAL(esp); /* 0x005D7B13: pop esi */
    ebp = POP32_VAL(esp); /* 0x005D7B14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D7B15: ret 4 */
L_005D7B18:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005D7B18: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005D7B1A: pop esi */
    ebp = POP32_VAL(esp); /* 0x005D7B1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D7B1C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D7B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7B20u);

L_005D7B20:
    PUSH32(esp, ebp); /* 0x005D7B20: push ebp */
    ebp = esp; /* 0x005D7B21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7B23: push -1 */
    PUSH32(esp, 0x007AECCAu); /* 0x005D7B25: push 0x7aecca */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7B2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7B30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x005D7B31: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D7B34: push esi */
    PUSH32(esp, edi); /* 0x005D7B35: push edi */
    eax = MEM32(0x855000); /* 0x005D7B36: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7B3B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7B3D: push eax */
    eax = ebp + (-0xC); /* 0x005D7B3E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7B41: mov dword ptr fs:[0], eax */
    edi = MEM32(ecx + 0x1C); /* 0x005D7B47: mov edi, dword ptr [ecx + 0x1c] */
    esi = MEM32(edi); /* 0x005D7B4A: mov esi, dword ptr [edi] */
    /* cmp esi, edi */ /* 0x005D7B4C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7C2F; /* 0x005D7B4E: je 0x5d7c2f */
L_005D7B54:
    eax = ebp + (-0x4C); /* 0x005D7B54: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005D7B57: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x48); /* 0x005D7B5A: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005D7B5D: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x40); /* 0x005D7B60: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005D7B63: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x30); /* 0x005D7B66: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x005D7B69: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x4C); /* 0x005D7B6C: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x005D7B6F: mov dword ptr [ebp - 0x20], eax */
L_005D7B72:
    eax = MEM32(esi + 0x10); /* 0x005D7B72: mov eax, dword ptr [esi + 0x10] */
    ecx = ebp + (-0x3C); /* 0x005D7B75: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x54)) = eax; /* 0x005D7B78: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(esi + 0x14); /* 0x005D7B7B: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005D7B7E: mov dword ptr [ebp - 0x50], eax */
    eax = (uint32_t)MEM8(esi + 0x18); /* 0x005D7B81: movzx eax, byte ptr [esi + 0x18] */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(eax)); /* 0x005D7B85: mov byte ptr [ebp - 0x4c], al */
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x005D7B88: movzx eax, byte ptr [esi + 0x19] */
    MEM8(ebp + (-0x4B)) = (uint8_t)(LO8(eax)); /* 0x005D7B8C: mov byte ptr [ebp - 0x4b], al */
    eax = (uint32_t)MEM8(esi + 0x1A); /* 0x005D7B8F: movzx eax, byte ptr [esi + 0x1a] */
    MEM8(ebp + (-0x4A)) = (uint8_t)(LO8(eax)); /* 0x005D7B93: mov byte ptr [ebp - 0x4a], al */
    eax = MEM32(esi + 0x1C); /* 0x005D7B96: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x005D7B99: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(esi + 0x20); /* 0x005D7B9C: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x44)) = eax; /* 0x005D7B9F: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(esi + 0x24); /* 0x005D7BA2: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x005D7BA5: mov dword ptr [ebp - 0x40], eax */
    eax = esi + 0x28; /* 0x005D7BA8: lea eax, [esi + 0x28] */
    PUSH32(esp, eax); /* 0x005D7BAB: push eax */
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7BAC: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005D7BB1: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x2C); /* 0x005D7BB8: lea ecx, [ebp - 0x2c] */
    eax = MEM32(esi + 0x34); /* 0x005D7BBB: mov eax, dword ptr [esi + 0x34] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005D7BBE: mov dword ptr [ebp - 0x30], eax */
    eax = esi + 0x38; /* 0x005D7BC1: lea eax, [esi + 0x38] */
    PUSH32(esp, eax); /* 0x005D7BC4: push eax */
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7BC5: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x005D7BCA: mov dword ptr [ebp - 4], 6 */
    MEM8(ebp + (-0x4B)) = (uint8_t)(0); /* 0x005D7BD1: mov byte ptr [ebp - 0x4b], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7BD5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x48); /* 0x005D7BDC: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_005D6D20); /* 0x005D7BDF: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005D7BE4: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7C27; /* 0x005D7BE8: jne 0x5d7c27 */
L_005D7BEA:
    eax = MEM32(esi + 0x8); /* 0x005D7BEA: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7BED: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7C0C; /* 0x005D7BF1: jne 0x5d7c0c */
L_005D7BF3:
    esi = eax; /* 0x005D7BF3: mov esi, eax */
    eax = MEM32(esi); /* 0x005D7BF5: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7BF7: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7C27; /* 0x005D7BFB: jne 0x5d7c27 */
L_005D7BFD:
    ecx = ecx; /* 0x005D7BFD: lea ecx, [ecx] */
L_005D7C00:
    esi = eax; /* 0x005D7C00: mov esi, eax */
    eax = MEM32(esi); /* 0x005D7C02: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7C04: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7C00; /* 0x005D7C08: je 0x5d7c00 */
L_005D7C0A:
    goto L_005D7C27; /* 0x005D7C0A: jmp 0x5d7c27 */
L_005D7C0C:
    eax = MEM32(esi + 0x4); /* 0x005D7C0C: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7C0F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7C25; /* 0x005D7C13: jne 0x5d7c25 */
L_005D7C15:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005D7C15: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7C25; /* 0x005D7C18: jne 0x5d7c25 */
L_005D7C1A:
    esi = eax; /* 0x005D7C1A: mov esi, eax */
    eax = MEM32(eax + 0x4); /* 0x005D7C1C: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7C1F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7C15; /* 0x005D7C23: je 0x5d7c15 */
L_005D7C25:
    esi = eax; /* 0x005D7C25: mov esi, eax */
L_005D7C27:
    /* cmp esi, edi */ /* 0x005D7C27: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7B72; /* 0x005D7C29: jne 0x5d7b72 */
L_005D7C2F:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7C2F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7C32: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7C39: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7C3A: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7C3B: pop esi */
    esp = ebp; /* 0x005D7C3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7C3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7C3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D7C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7C40u);

L_005D7C40:
    PUSH32(esp, ebp); /* 0x005D7C40: push ebp */
    ebp = esp; /* 0x005D7C41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7C43: push -1 */
    PUSH32(esp, 0x007AED06u); /* 0x005D7C45: push 0x7aed06 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7C4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7C50: push eax */
    PUSH32(esp, ecx); /* 0x005D7C51: push ecx */
    eax = MEM32(0x855000); /* 0x005D7C52: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7C57: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7C59: push eax */
    eax = ebp + (-0xC); /* 0x005D7C5A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7C5D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005D7C63: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7C66: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005D7C6D: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x005D7C70: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7C73: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005D7C7A: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005D7C7D: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7C82: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7C85: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7C8C: pop ecx */
    esp = ebp; /* 0x005D7C8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7C8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7C90: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D7CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7CA0u);

L_005D7CA0:
    PUSH32(esp, ebp); /* 0x005D7CA0: push ebp */
    ebp = esp; /* 0x005D7CA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7CA3: push -1 */
    PUSH32(esp, 0x007AED67u); /* 0x005D7CA5: push 0x7aed67 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7CAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7CB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005D7CB1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D7CB4: push ebx */
    PUSH32(esp, esi); /* 0x005D7CB5: push esi */
    PUSH32(esp, edi); /* 0x005D7CB6: push edi */
    eax = MEM32(0x855000); /* 0x005D7CB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7CBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7CBE: push eax */
    eax = ebp + (-0xC); /* 0x005D7CBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7CC2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D7CC8: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x005D7CCA: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x005D7CCD: mov edi, dword ptr [ebp + 8] */
    esi = ebx + 0x4; /* 0x005D7CD0: lea esi, [ebx + 4] */
    ecx = esi + 0x8; /* 0x005D7CD3: lea ecx, [esi + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x005D7CD6: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005D7CD9: mov dword ptr [ebp - 0x14], ecx */
    eax = (uint32_t)MEM8(edi); /* 0x005D7CDC: movzx eax, byte ptr [edi] */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x005D7CDF: mov byte ptr [ebx], al */
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x005D7CE1: movzx eax, byte ptr [edi + 1] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(eax)); /* 0x005D7CE5: mov byte ptr [ebx + 1], al */
    eax = (uint32_t)MEM8(edi + 0x2); /* 0x005D7CE8: movzx eax, byte ptr [edi + 2] */
    MEM8(ebx + 0x2) = (uint8_t)(LO8(eax)); /* 0x005D7CEC: mov byte ptr [ebx + 2], al */
    eax = MEM32(edi + 0x4); /* 0x005D7CEF: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x005D7CF2: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x8); /* 0x005D7CF4: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x4) = eax; /* 0x005D7CF7: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0xC); /* 0x005D7CFA: mov eax, dword ptr [edi + 0xc] */
    MEM32(ecx) = eax; /* 0x005D7CFD: mov dword ptr [ecx], eax */
    eax = edi + 0x10; /* 0x005D7CFF: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x005D7D02: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005D7D03: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7D06: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005D7D0B: mov dword ptr [ebp - 4], 1 */
    ecx = esi + 0x18; /* 0x005D7D12: lea ecx, [esi + 0x18] */
    eax = MEM32(edi + 0x1C); /* 0x005D7D15: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ecx) = eax; /* 0x005D7D18: mov dword ptr [ecx], eax */
    eax = edi + 0x20; /* 0x005D7D1A: lea eax, [edi + 0x20] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005D7D1D: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005D7D20: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005D7D23: push eax */
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7D24: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7D29: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005D7D30: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7D32: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7D35: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7D3C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7D3D: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7D3E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D7D3F: pop ebx */
    esp = ebp; /* 0x005D7D40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7D42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D7D43: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D7D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7D50u);

L_005D7D50:
    PUSH32(esp, ebp); /* 0x005D7D50: push ebp */
    ebp = esp; /* 0x005D7D51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7D53: push -1 */
    PUSH32(esp, 0x007AED9Bu); /* 0x005D7D55: push 0x7aed9b */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7D5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7D60: push eax */
    PUSH32(esp, ecx); /* 0x005D7D61: push ecx */
    eax = MEM32(0x855000); /* 0x005D7D62: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7D67: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7D69: push eax */
    eax = ebp + (-0xC); /* 0x005D7D6A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7D6D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005D7D73: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7D76: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005D7D7D: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005D7D80: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7D85: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7D88: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7D8F: pop ecx */
    esp = ebp; /* 0x005D7D90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7D92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7D93: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D7DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7DA0u);

L_005D7DA0:
    PUSH32(esp, ebp); /* 0x005D7DA0: push ebp */
    ebp = esp; /* 0x005D7DA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7DA3: push -1 */
    PUSH32(esp, 0x007AEE3Du); /* 0x005D7DA5: push 0x7aee3d */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7DAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7DB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x005D7DB1: sub esp, 0x54 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D7DB4: push ebx */
    PUSH32(esp, esi); /* 0x005D7DB5: push esi */
    PUSH32(esp, edi); /* 0x005D7DB6: push edi */
    eax = MEM32(0x855000); /* 0x005D7DB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7DBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7DBE: push eax */
    eax = ebp + (-0xC); /* 0x005D7DBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7DC2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D7DC8: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005D7DCA: mov dword ptr [ebp - 0x14], ebx */
    edi = MEM32(ebx + 0x1C); /* 0x005D7DCD: mov edi, dword ptr [ebx + 0x1c] */
    MEM8(ebp + (-0xD)) = (uint8_t)(0); /* 0x005D7DD0: mov byte ptr [ebp - 0xd], 0 */
    MEM8(ebp + (-0xE)) = (uint8_t)(0); /* 0x005D7DD4: mov byte ptr [ebp - 0xe], 0 */
    esi = MEM32(edi); /* 0x005D7DD8: mov esi, dword ptr [edi] */
    /* cmp esi, edi */ /* 0x005D7DDA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7EC5; /* 0x005D7DDC: je 0x5d7ec5 */
L_005D7DE2:
    SET_LO8(ebx, MEM8(ebp + (-0xE))); /* 0x005D7DE2: mov bl, byte ptr [ebp - 0xe] */
    eax = ebp + (-0x54); /* 0x005D7DE5: lea eax, [ebp - 0x54] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005D7DE8: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x50); /* 0x005D7DEB: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x005D7DEE: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x48); /* 0x005D7DF1: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0x20)) = eax; /* 0x005D7DF4: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x38); /* 0x005D7DF7: lea eax, [ebp - 0x38] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005D7DFA: mov dword ptr [ebp - 0x24], eax */
    eax = ebp + (-0x54); /* 0x005D7DFD: lea eax, [ebp - 0x54] */
    MEM32(ebp + (-0x28)) = eax; /* 0x005D7E00: mov dword ptr [ebp - 0x28], eax */
L_005D7E03:
    eax = MEM32(esi + 0x10); /* 0x005D7E03: mov eax, dword ptr [esi + 0x10] */
    ecx = ebp + (-0x44); /* 0x005D7E06: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x005D7E09: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(esi + 0x14); /* 0x005D7E0C: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x58)) = eax; /* 0x005D7E0F: mov dword ptr [ebp - 0x58], eax */
    SET_LO8(eax, MEM8(esi + 0x18)); /* 0x005D7E12: mov al, byte ptr [esi + 0x18] */
    MEM8(ebp + (-0x54)) = (uint8_t)(LO8(eax)); /* 0x005D7E15: mov byte ptr [ebp - 0x54], al */
    SET_LO8(eax, MEM8(esi + 0x19)); /* 0x005D7E18: mov al, byte ptr [esi + 0x19] */
    MEM8(ebp + (-0x53)) = (uint8_t)(LO8(eax)); /* 0x005D7E1B: mov byte ptr [ebp - 0x53], al */
    SET_LO8(eax, MEM8(esi + 0x1A)); /* 0x005D7E1E: mov al, byte ptr [esi + 0x1a] */
    MEM8(ebp + (-0x52)) = (uint8_t)(LO8(eax)); /* 0x005D7E21: mov byte ptr [ebp - 0x52], al */
    eax = MEM32(esi + 0x1C); /* 0x005D7E24: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005D7E27: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(esi + 0x20); /* 0x005D7E2A: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005D7E2D: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(esi + 0x24); /* 0x005D7E30: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x48)) = eax; /* 0x005D7E33: mov dword ptr [ebp - 0x48], eax */
    eax = esi + 0x28; /* 0x005D7E36: lea eax, [esi + 0x28] */
    PUSH32(esp, eax); /* 0x005D7E39: push eax */
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7E3A: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005D7E3F: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x34); /* 0x005D7E46: lea ecx, [ebp - 0x34] */
    eax = MEM32(esi + 0x34); /* 0x005D7E49: mov eax, dword ptr [esi + 0x34] */
    MEM32(ebp + (-0x38)) = eax; /* 0x005D7E4C: mov dword ptr [ebp - 0x38], eax */
    eax = esi + 0x38; /* 0x005D7E4F: lea eax, [esi + 0x38] */
    PUSH32(esp, eax); /* 0x005D7E52: push eax */
    RECOMP_CALL(sub_005DB9E0); /* 0x005D7E53: call 0x5db9e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x005D7E58: mov dword ptr [ebp - 4], 6 */
    /* cmp MEM8(ebp + (-0x54)), 4 */ /* 0x005D7E5F: cmp byte ptr [ebp - 0x54], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x54))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7E67; /* 0x005D7E63: jne 0x5d7e67 */
L_005D7E65:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005D7E65: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
L_005D7E67:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7E67: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x50); /* 0x005D7E6E: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_005D6D20); /* 0x005D7E71: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005D7E76: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7EB7; /* 0x005D7E7A: jne 0x5d7eb7 */
L_005D7E7C:
    eax = MEM32(esi + 0x8); /* 0x005D7E7C: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7E7F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7E9C; /* 0x005D7E83: jne 0x5d7e9c */
L_005D7E85:
    esi = eax; /* 0x005D7E85: mov esi, eax */
    eax = MEM32(esi); /* 0x005D7E87: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7E89: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7EB7; /* 0x005D7E8D: jne 0x5d7eb7 */
L_005D7E8F:
    /* nop */ /* 0x005D7E8F: nop  */
L_005D7E90:
    esi = eax; /* 0x005D7E90: mov esi, eax */
    eax = MEM32(esi); /* 0x005D7E92: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7E94: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7E90; /* 0x005D7E98: je 0x5d7e90 */
L_005D7E9A:
    goto L_005D7EB7; /* 0x005D7E9A: jmp 0x5d7eb7 */
L_005D7E9C:
    eax = MEM32(esi + 0x4); /* 0x005D7E9C: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7E9F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7EB5; /* 0x005D7EA3: jne 0x5d7eb5 */
L_005D7EA5:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005D7EA5: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7EB5; /* 0x005D7EA8: jne 0x5d7eb5 */
L_005D7EAA:
    esi = eax; /* 0x005D7EAA: mov esi, eax */
    eax = MEM32(eax + 0x4); /* 0x005D7EAC: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D7EAF: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7EA5; /* 0x005D7EB3: je 0x5d7ea5 */
L_005D7EB5:
    esi = eax; /* 0x005D7EB5: mov esi, eax */
L_005D7EB7:
    /* cmp esi, edi */ /* 0x005D7EB7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7E03; /* 0x005D7EB9: jne 0x5d7e03 */
L_005D7EBF:
    MEM8(ebp + (-0xE)) = (uint8_t)(LO8(ebx)); /* 0x005D7EBF: mov byte ptr [ebp - 0xe], bl */
    ebx = MEM32(ebp + (-0x14)); /* 0x005D7EC2: mov ebx, dword ptr [ebp - 0x14] */
L_005D7EC5:
    ecx = MEM32(ebx + 0xC); /* 0x005D7EC5: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x005D7EC8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x005D7ECA: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(eax); /* 0x005D7ECD: call eax */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO8(eax); /* 0x005D7ECF: movzx ecx, al */
    eax = (uint32_t)MEM8(ebp + (-0xE)); /* 0x005D7ED2: movzx eax, byte ptr [ebp - 0xe] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005D7ED6: dec ecx */
    _flag_k = FK_DEC;
    /* cmp eax, ecx */ /* 0x005D7ED7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7F09; /* 0x005D7ED9: jne 0x5d7f09 */
L_005D7EDB:
    /* cmp MEM8(ebx + 0x2), 0 */ /* 0x005D7EDB: cmp byte ptr [ebx + 2], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, 1); /* 0x005D7EDF: mov al, 1 */
    MEM8(ebp + (-0xE)) = (uint8_t)(LO8(eax)); /* 0x005D7EE1: mov byte ptr [ebp - 0xe], al */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7FAD; /* 0x005D7EE4: jne 0x5d7fad */
L_005D7EEA:
    ecx = ebx; /* 0x005D7EEA: mov ecx, ebx */
    MEM8(ebx + 0x2) = (uint8_t)(LO8(eax)); /* 0x005D7EEC: mov byte ptr [ebx + 2], al */
    RECOMP_CALL(sub_005D7FC0); /* 0x005D7EEF: call 0x5d7fc0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0xE))); /* 0x005D7EF4: mov al, byte ptr [ebp - 0xe] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7EF7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7EFA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7F01: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7F02: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7F03: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D7F04: pop ebx */
    esp = ebp; /* 0x005D7F05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7F07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7F08: ret  */
L_005D7F09:
    /* cmp MEM8(ebx + 0x1), 4 */ /* 0x005D7F09: cmp byte ptr [ebx + 1], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7FAA; /* 0x005D7F0D: jne 0x5d7faa */
L_005D7F13:
    ecx = MEM32(ebx + 0xC); /* 0x005D7F13: mov ecx, dword ptr [ebx + 0xc] */
    edx = ebp + (-0x14); /* 0x005D7F16: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005D7F19: push edx */
    eax = MEM32(ecx); /* 0x005D7F1A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D7F1C: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x8); /* 0x005D7F22: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x005D7F25: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, ecx */ /* 0x005D7F28: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D7F30; /* 0x005D7F2A: jae 0x5d7f30 */
L_005D7F2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005D7F2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D7F32; /* 0x005D7F2E: jmp 0x5d7f32 */
L_005D7F30:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005D7F30: sub eax, ecx */
    _flag_k = FK_CMP;
L_005D7F32:
    /* cmp eax, MEM32(0x865684) */ /* 0x005D7F32: cmp eax, dword ptr [0x865684] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x865684));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D7FAA; /* 0x005D7F38: jb 0x5d7faa */
L_005D7F3A:
    /* test ecx, ecx */ /* 0x005D7F3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D7FAA; /* 0x005D7F3C: je 0x5d7faa */
L_005D7F3E:
    esi = MEM32(ebx + 0x1C); /* 0x005D7F3E: mov esi, dword ptr [ebx + 0x1c] */
    eax = MEM32(esi); /* 0x005D7F41: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005D7F43: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x005D7F46: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7F9F; /* 0x005D7F48: je 0x5d7f9f */
L_005D7F4A:
    ecx = ebp + (-0x54); /* 0x005D7F4A: lea ecx, [ebp - 0x54] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x005D7F4D: mov dword ptr [ebp - 0x28], ecx */
L_005D7F50:
    ecx = MEM32(eax + 0x10); /* 0x005D7F50: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x005D7F53: mov dword ptr [ebp - 0x5c], ecx */
    ecx = MEM32(eax + 0x14); /* 0x005D7F56: mov ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x005D7F59: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = ecx; /* 0x005D7F5C: mov dword ptr [ebp - 0x58], ecx */
    ecx = ebp + (-0x54); /* 0x005D7F5F: lea ecx, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x005D7F62: push eax */
    RECOMP_CALL(sub_005D7CA0); /* 0x005D7F63: call 0x5d7ca0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x005D7F68: mov dword ptr [ebp - 4], 0xa */
    /* cmp MEM8(ebp + (-0x54)), 4 */ /* 0x005D7F6F: cmp byte ptr [ebp - 0x54], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x54))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D7F81; /* 0x005D7F73: je 0x5d7f81 */
L_005D7F75:
    ecx = MEM32(ebx + 0xC); /* 0x005D7F75: mov ecx, dword ptr [ebx + 0xc] */
    edx = ebp + (-0x5C); /* 0x005D7F78: lea edx, [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x005D7F7B: push edx */
    eax = MEM32(ecx); /* 0x005D7F7C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x005D7F7E: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_005D7F81:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D7F81: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x50); /* 0x005D7F88: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_005D6D20); /* 0x005D7F8B: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x005D7F90: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x005D7F93: call 0x40b880 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x005D7F98: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, esi */ /* 0x005D7F9B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D7F50; /* 0x005D7F9D: jne 0x5d7f50 */
L_005D7F9F:
    ecx = ebx; /* 0x005D7F9F: mov ecx, ebx */
    MEM8(ebx + 0x2) = (uint8_t)(1); /* 0x005D7FA1: mov byte ptr [ebx + 2], 1 */
    RECOMP_CALL(sub_005D7FC0); /* 0x005D7FA5: call 0x5d7fc0 */
    RECOMP_FLAGS_IN();
L_005D7FAA:
    SET_LO8(eax, MEM8(ebp + (-0xD))); /* 0x005D7FAA: mov al, byte ptr [ebp - 0xd] */
L_005D7FAD:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D7FAD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D7FB0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D7FB7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D7FB8: pop edi */
    esi = POP32_VAL(esp); /* 0x005D7FB9: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D7FBA: pop ebx */
    esp = ebp; /* 0x005D7FBB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D7FBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D7FBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D7FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D7FC0u);

L_005D7FC0:
    PUSH32(esp, ebp); /* 0x005D7FC0: push ebp */
    ebp = esp; /* 0x005D7FC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D7FC3: push -1 */
    PUSH32(esp, 0x007AEE70u); /* 0x005D7FC5: push 0x7aee70 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D7FCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D7FD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005D7FD1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D7FD4: push esi */
    eax = MEM32(0x855000); /* 0x005D7FD5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D7FDA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D7FDC: push eax */
    eax = ebp + (-0xC); /* 0x005D7FDD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D7FE0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D7FE6: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005D7FE8: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D7FEB: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D7FED: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D7FF0: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D7FF2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8082; /* 0x005D7FF4: je 0x5d8082 */
L_005D7FFA:
    ecx = ebp + (-0x30); /* 0x005D7FFA: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D7FFD: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D8002: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x24)), 7 */ /* 0x005D8009: test byte ptr [ebp - 0x24], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x328u; /* 0x005D800D: mov dword ptr [ebp - 0x10], 0x328 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8038; /* 0x005D8014: jne 0x5d8038 */
L_005D8016:
    PUSH32(esp, 0x20u); /* 0x005D8016: push 0x20 */
    ecx = ebp + (-0x30); /* 0x005D8018: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D801B: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x005D8020: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8023: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8026: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8026: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x005D8029: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x328u; /* 0x005D802C: mov dword ptr [eax], 0x328 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0x20u; /* 0x005D8032: add dword ptr [ebp - 0x24], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D8047; /* 0x005D8036: jmp 0x5d8047 */
L_005D8038:
    PUSH32(esp, ecx); /* 0x005D8038: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8039: push 0x20 */
    eax = ebp + (-0x10); /* 0x005D803B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005D803E: push eax */
    ecx = ebp + (-0x30); /* 0x005D803F: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8042: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8047:
    ecx = MEM32(esi + 0xC); /* 0x005D8047: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x30); /* 0x005D804A: lea edx, [ebp - 0x30] */
    PUSH32(esp, 2); /* 0x005D804D: push 2 */
    PUSH32(esp, edx); /* 0x005D804F: push edx */
    eax = MEM32(ecx); /* 0x005D8050: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D8052: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D8055: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x1C)); /* 0x005D805C: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005D805F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8082; /* 0x005D8061: je 0x5d8082 */
L_005D8063:
    PUSH32(esp, eax); /* 0x005D8063: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D8064: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D806A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D806D: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005D8074: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005D807B: mov dword ptr [ebp - 0x14], 0 */
L_005D8082:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D8082: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D8085: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D808C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D808D: pop esi */
    esp = ebp; /* 0x005D808E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D8090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D8091: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D80A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D80A0u);

L_005D80A0:
    PUSH32(esp, ebp); /* 0x005D80A0: push ebp */
    ebp = esp; /* 0x005D80A1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x005D80A3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005D80A6: push ebx */
    ebx = ecx; /* 0x005D80A7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005D80A9: push esi */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005D80AA: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005D80AE: push edi */
    edi = MEM32(edx + 0x10); /* 0x005D80AF: mov edi, dword ptr [edx + 0x10] */
    ecx = ebx + 0x28; /* 0x005D80B2: lea ecx, [ebx + 0x28] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005D80B9; /* 0x005D80B5: jb 0x5d80b9 */
L_005D80B7:
    edx = MEM32(edx); /* 0x005D80B7: mov edx, dword ptr [edx] */
L_005D80B9:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005D80B9: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ecx + 0x10); /* 0x005D80BD: mov esi, dword ptr [ecx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005D80C4; /* 0x005D80C0: jb 0x5d80c4 */
L_005D80C2:
    ecx = MEM32(ecx); /* 0x005D80C2: mov ecx, dword ptr [ecx] */
L_005D80C4:
    /* cmp esi, edi */ /* 0x005D80C4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x005D80C6: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005D80C8: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005D80CB: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005D80CC: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D80D1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005D80D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D811A; /* 0x005D80D6: jne 0x5d811a */
L_005D80D8:
    /* cmp esi, edi */ /* 0x005D80D8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D811A; /* 0x005D80DA: jb 0x5d811a */
L_005D80DC:
    /* cmp esi, edi */ /* 0x005D80DC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005D80DE: setne al */
    /* test eax, eax */ /* 0x005D80E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D811A; /* 0x005D80E3: jne 0x5d811a */
L_005D80E5:
    /* cmp MEM8(ebx + 0x40), LO8(eax) */ /* 0x005D80E5: cmp byte ptr [ebx + 0x40], al */
    _flag_a = (uint32_t)(MEM8(ebx + 0x40)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D811A; /* 0x005D80E8: je 0x5d811a */
L_005D80EA:
    ecx = MEM32(ebx + 0xC); /* 0x005D80EA: mov ecx, dword ptr [ebx + 0xc] */
    edx = ebp + 0x8; /* 0x005D80ED: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x005D80F0: push edx */
    eax = MEM32(ecx); /* 0x005D80F1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D80F3: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x44); /* 0x005D80F9: mov ecx, dword ptr [ebx + 0x44] */
    eax = MEM32(ebp + 0x8); /* 0x005D80FC: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x005D80FF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D8107; /* 0x005D8101: jae 0x5d8107 */
L_005D8103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005D8103: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D8109; /* 0x005D8105: jmp 0x5d8109 */
L_005D8107:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005D8107: sub eax, ecx */
    _flag_k = FK_CMP;
L_005D8109:
    /* cmp eax, MEM32(0x865404) */ /* 0x005D8109: cmp eax, dword ptr [0x865404] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x865404));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D811A; /* 0x005D810F: jb 0x5d811a */
L_005D8111:
    edi = POP32_VAL(esp); /* 0x005D8111: pop edi */
    esi = POP32_VAL(esp); /* 0x005D8112: pop esi */
    SET_LO8(eax, 1); /* 0x005D8113: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x005D8115: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005D8116: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D8117: ret 4 */
L_005D811A:
    edi = POP32_VAL(esp); /* 0x005D811A: pop edi */
    esi = POP32_VAL(esp); /* 0x005D811B: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005D811C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005D811E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005D811F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005D8120: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005D8130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8130u);

L_005D8130:
    PUSH32(esp, ebp); /* 0x005D8130: push ebp */
    ebp = esp; /* 0x005D8131: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8133: push -1 */
    PUSH32(esp, 0x0079F898u); /* 0x005D8135: push 0x79f898 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D813A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D8140: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005D8141: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005D8144: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D8149: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005D814B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005D814E: push ebx */
    PUSH32(esp, esi); /* 0x005D814F: push esi */
    PUSH32(esp, edi); /* 0x005D8150: push edi */
    PUSH32(esp, eax); /* 0x005D8151: push eax */
    eax = ebp + (-0xC); /* 0x005D8152: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D8155: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D815B: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005D815D: mov ebx, dword ptr [ebp + 8] */
    eax = edi + 0x28; /* 0x005D8160: lea eax, [edi + 0x28] */
    esi = MEM32(ebp + 0x10); /* 0x005D8163: mov esi, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x2C); /* 0x005D8166: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8169: push -1 */
    PUSH32(esp, 0); /* 0x005D816B: push 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D816D: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005D8174: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x005D817B: push eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005D817C: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D8183: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005D818A: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005D818E: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D8193: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x005D819A: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D81AE; /* 0x005D819E: je 0x5d81ae */
L_005D81A0:
    edx = esi; /* 0x005D81A0: mov edx, esi */
    ecx = ebp + (-0x2C); /* 0x005D81A2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F700); /* 0x005D81A5: call 0x45f700 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D81AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D81CA; /* 0x005D81AC: jne 0x5d81ca */
L_005D81AE:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x005D81AE: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D81CA; /* 0x005D81B2: je 0x5d81ca */
L_005D81B4:
    /* cmp MEM32(edi + 0x44), 0 */ /* 0x005D81B4: cmp dword ptr [edi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D81CA; /* 0x005D81B8: jne 0x5d81ca */
L_005D81BA:
    PUSH32(esp, esi); /* 0x005D81BA: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005D81BB: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x005D81BE: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x005D81C0: push ebx */
    RECOMP_CALL(sub_005D8430); /* 0x005D81C1: call 0x5d8430 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005D81C6: mov bl, al */
    goto L_005D81CC; /* 0x005D81C8: jmp 0x5d81cc */
L_005D81CA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005D81CA: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_005D81CC:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D81CC: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005D81D3: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D81E5; /* 0x005D81D7: jb 0x5d81e5 */
L_005D81D9:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005D81D9: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D81DC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D81E2: add esp, 4 */
    _flag_k = FK_ADD;
L_005D81E5:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005D81E5: mov dword ptr [ebp - 0x18], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x005D81EC: mov al, bl */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D81EE: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005D81F5: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D81F9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D81FC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D8203: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D8204: pop edi */
    esi = POP32_VAL(esp); /* 0x005D8205: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D8206: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005D8207: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005D820A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005D820C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005D8211: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D8213: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005D8214: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005D8220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8220u);

L_005D8220:
    PUSH32(esp, ebp); /* 0x005D8220: push ebp */
    ebp = esp; /* 0x005D8221: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005D8223: push ebx */
    PUSH32(esp, esi); /* 0x005D8224: push esi */
    PUSH32(esp, edi); /* 0x005D8225: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005D8226: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x005D8229: mov ebx, ecx */
    /* test edi, edi */ /* 0x005D822B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8232; /* 0x005D822D: je 0x5d8232 */
L_005D822F:
    MEM8(edi) = (uint8_t)(0); /* 0x005D822F: mov byte ptr [edi], 0 */
L_005D8232:
    esi = MEM32(ebp + 0xC); /* 0x005D8232: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x005D8235: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D823C; /* 0x005D8237: je 0x5d823c */
L_005D8239:
    MEM8(esi) = (uint8_t)(0); /* 0x005D8239: mov byte ptr [esi], 0 */
L_005D823C:
    ecx = MEM32(ebx + 0x1C); /* 0x005D823C: mov ecx, dword ptr [ebx + 0x1c] */
    eax = MEM32(ecx); /* 0x005D823F: mov eax, dword ptr [ecx] */
    /* cmp eax, ecx */ /* 0x005D8241: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D82A6; /* 0x005D8243: je 0x5d82a6 */
L_005D8245:
    /* test edi, edi */ /* 0x005D8245: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8253; /* 0x005D8247: je 0x5d8253 */
L_005D8249:
    /* cmp MEM8(eax + 0x1A), 0 */ /* 0x005D8249: cmp byte ptr [eax + 0x1a], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D8253; /* 0x005D824D: jne 0x5d8253 */
L_005D824F:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) + 1); /* 0x005D824F: inc byte ptr [edi] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_005D825F; /* 0x005D8251: jmp 0x5d825f */
L_005D8253:
    /* test esi, esi */ /* 0x005D8253: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D825F; /* 0x005D8255: je 0x5d825f */
L_005D8257:
    /* cmp MEM8(eax + 0x1A), 1 */ /* 0x005D8257: cmp byte ptr [eax + 0x1a], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1A)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D825F; /* 0x005D825B: jne 0x5d825f */
L_005D825D:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) + 1); /* 0x005D825D: inc byte ptr [esi] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_005D825F:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005D825F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D82A2; /* 0x005D8263: jne 0x5d82a2 */
L_005D8265:
    edx = MEM32(eax + 0x8); /* 0x005D8265: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D8268: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D8284; /* 0x005D826C: jne 0x5d8284 */
L_005D826E:
    eax = edx; /* 0x005D826E: mov eax, edx */
    edx = MEM32(eax); /* 0x005D8270: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D8272: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D82A2; /* 0x005D8276: jne 0x5d82a2 */
L_005D8278:
    eax = edx; /* 0x005D8278: mov eax, edx */
    edx = MEM32(eax); /* 0x005D827A: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D827C: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D8278; /* 0x005D8280: je 0x5d8278 */
L_005D8282:
    goto L_005D82A2; /* 0x005D8282: jmp 0x5d82a2 */
L_005D8284:
    edx = MEM32(eax + 0x4); /* 0x005D8284: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D8287: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D82A0; /* 0x005D828B: jne 0x5d82a0 */
L_005D828D:
    ecx = ecx; /* 0x005D828D: lea ecx, [ecx] */
L_005D8290:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005D8290: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D82A0; /* 0x005D8293: jne 0x5d82a0 */
L_005D8295:
    eax = edx; /* 0x005D8295: mov eax, edx */
    edx = MEM32(edx + 0x4); /* 0x005D8297: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005D829A: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D8290; /* 0x005D829E: je 0x5d8290 */
L_005D82A0:
    eax = edx; /* 0x005D82A0: mov eax, edx */
L_005D82A2:
    /* cmp eax, ecx */ /* 0x005D82A2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D8245; /* 0x005D82A4: jne 0x5d8245 */
L_005D82A6:
    esi = MEM32(ebp + 0x10); /* 0x005D82A6: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x005D82A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D82BD; /* 0x005D82AB: je 0x5d82bd */
L_005D82AD:
    ecx = MEM32(ebx + 0xC); /* 0x005D82AD: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x005D82B0: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x005D82B2: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(eax); /* 0x005D82B5: call eax */
    RECOMP_FLAGS_IN();
    if (1u) _cf = (((LO8(eax)) >> 0) & 1u); /* 0x005D82B7: shr al, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 1u); /* 0x005D82B7: shr al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x005D82B9: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x005D82BB: mov byte ptr [esi], al */
L_005D82BD:
    edi = POP32_VAL(esp); /* 0x005D82BD: pop edi */
    esi = POP32_VAL(esp); /* 0x005D82BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D82BF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005D82C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005D82C1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005D82D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D82D0u);

L_005D82D0:
    PUSH32(esp, ebp); /* 0x005D82D0: push ebp */
    ebp = esp; /* 0x005D82D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D82D3: push -1 */
    PUSH32(esp, 0x007AEBC0u); /* 0x005D82D5: push 0x7aebc0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D82DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D82E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005D82E1: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D82E4: push ebx */
    PUSH32(esp, esi); /* 0x005D82E5: push esi */
    eax = MEM32(0x855000); /* 0x005D82E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D82EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D82ED: push eax */
    eax = ebp + (-0xC); /* 0x005D82EE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D82F1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005D82F7: mov esi, ecx */
    eax = ebp + (-0xF); /* 0x005D82F9: lea eax, [ebp - 0xf] */
    MEM8(ebp + (-0xD)) = (uint8_t)(0); /* 0x005D82FC: mov byte ptr [ebp - 0xd], 0 */
    PUSH32(esp, eax); /* 0x005D8300: push eax */
    eax = ebp + (-0xE); /* 0x005D8301: lea eax, [ebp - 0xe] */
    MEM8(ebp + (-0xE)) = (uint8_t)(0); /* 0x005D8304: mov byte ptr [ebp - 0xe], 0 */
    PUSH32(esp, eax); /* 0x005D8308: push eax */
    eax = ebp + (-0xD); /* 0x005D8309: lea eax, [ebp - 0xd] */
    MEM8(ebp + (-0xF)) = (uint8_t)(0); /* 0x005D830C: mov byte ptr [ebp - 0xf], 0 */
    PUSH32(esp, eax); /* 0x005D8310: push eax */
    RECOMP_CALL(sub_005D8220); /* 0x005D8311: call 0x5d8220 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0xF))); /* 0x005D8316: mov al, byte ptr [ebp - 0xf] */
    SET_HI8(ebx, MEM8(ebp + (-0xE))); /* 0x005D8319: mov bh, byte ptr [ebp - 0xe] */
    /* cmp HI8(ebx), LO8(eax) */ /* 0x005D831C: cmp bh, al */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_AE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005D831E: setae cl */
    /* cmp MEM8(ebp + (-0xD)), LO8(eax) */ /* 0x005D8321: cmp byte ptr [ebp - 0xd], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005D832E; /* 0x005D8324: jb 0x5d832e */
L_005D8326:
    /* test LO8(ecx), LO8(ecx) */ /* 0x005D8326: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D832E; /* 0x005D8328: jne 0x5d832e */
L_005D832A:
    SET_LO8(ebx, 1); /* 0x005D832A: mov bl, 1 */
    goto L_005D8352; /* 0x005D832C: jmp 0x5d8352 */
L_005D832E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005D832E: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(ecx), LO8(ecx) */ /* 0x005D8330: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8352; /* 0x005D8332: jne 0x5d8352 */
L_005D8334:
    ecx = MEM32(esi + 0xC); /* 0x005D8334: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D8337: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x005D8339: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(eax); /* 0x005D833C: call eax */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM8(ebp + (-0xD)); /* 0x005D833E: movzx ecx, byte ptr [ebp - 0xd] */
    edx = (uint32_t)HI8(ebx); /* 0x005D8342: movzx edx, bh */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005D8345: add edx, ecx */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO8(eax); /* 0x005D8347: movzx eax, al */
    /* cmp edx, eax */ /* 0x005D834A: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D8417; /* 0x005D834C: jne 0x5d8417 */
L_005D8352:
    ecx = MEM32(esi + 0xC); /* 0x005D8352: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005D8355: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D8357: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D835A: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D835C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8417; /* 0x005D835E: je 0x5d8417 */
L_005D8364:
    ecx = MEM32(esi + 0xC); /* 0x005D8364: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x14); /* 0x005D8367: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005D836A: push edx */
    eax = MEM32(ecx); /* 0x005D836B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D836D: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x005D8373: mov eax, dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x18); /* 0x005D8376: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005D8379: mov dword ptr [ebp - 0x18], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x005D837C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8387; /* 0x005D837E: jne 0x5d8387 */
L_005D8380:
    MEM32(ebp + (-0x18)) = 0; /* 0x005D8380: mov dword ptr [ebp - 0x18], 0 */
L_005D8387:
    ecx = MEM32(ecx); /* 0x005D8387: mov ecx, dword ptr [ecx] */
    MEM32(esi + 0x44) = ecx; /* 0x005D8389: mov dword ptr [esi + 0x44], ecx */
    MEM8(esi + 0x40) = (uint8_t)(LO8(ebx)); /* 0x005D838C: mov byte ptr [esi + 0x40], bl */
    MEM32(ebp + (-0x18)) = eax; /* 0x005D838F: mov dword ptr [ebp - 0x18], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x005D8392: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D839D; /* 0x005D8394: jne 0x5d839d */
L_005D8396:
    MEM32(ebp + (-0x18)) = 0; /* 0x005D8396: mov dword ptr [ebp - 0x18], 0 */
L_005D839D:
    eax = ebp + (-0x18); /* 0x005D839D: lea eax, [ebp - 0x18] */
    eax = MEM32(eax); /* 0x005D83A0: mov eax, dword ptr [eax] */
    ecx = ebp + (-0x38); /* 0x005D83A2: lea ecx, [ebp - 0x38] */
    MEM32(esi + 0x48) = eax; /* 0x005D83A5: mov dword ptr [esi + 0x48], eax */
    MEM8(esi + 0x4C) = (uint8_t)(1); /* 0x005D83A8: mov byte ptr [esi + 0x4c], 1 */
    RECOMP_CALL(sub_005F3C60); /* 0x005D83AC: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D83B1: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x38); /* 0x005D83B8: lea ecx, [ebp - 0x38] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x005D83BB: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D83C6; /* 0x005D83BD: je 0x5d83c6 */
L_005D83BF:
    PUSH32(esp, 0x334u); /* 0x005D83BF: push 0x334 */
    goto L_005D83CB; /* 0x005D83C4: jmp 0x5d83cb */
L_005D83C6:
    PUSH32(esp, 0x335u); /* 0x005D83C6: push 0x335 */
L_005D83CB:
    RECOMP_CALL(sub_005F5560); /* 0x005D83CB: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x28; /* 0x005D83D0: lea eax, [esi + 0x28] */
    PUSH32(esp, eax); /* 0x005D83D3: push eax */
    ecx = ebp + (-0x38); /* 0x005D83D4: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F56D0); /* 0x005D83D7: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005D83DC: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x38); /* 0x005D83DF: lea edx, [ebp - 0x38] */
    PUSH32(esp, 2); /* 0x005D83E2: push 2 */
    PUSH32(esp, edx); /* 0x005D83E4: push edx */
    eax = MEM32(ecx); /* 0x005D83E5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D83E7: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D83EA: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x24)); /* 0x005D83F1: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x005D83F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8417; /* 0x005D83F6: je 0x5d8417 */
L_005D83F8:
    PUSH32(esp, eax); /* 0x005D83F8: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D83F9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D83FF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005D8402: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005D8409: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D8410: mov dword ptr [ebp - 0x1c], 0 */
L_005D8417:
    ecx = MEM32(ebp + (-0xC)); /* 0x005D8417: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D841A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D8421: pop ecx */
    esi = POP32_VAL(esp); /* 0x005D8422: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D8423: pop ebx */
    esp = ebp; /* 0x005D8424: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D8426: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D8427: ret  */
    RECOMP_REGS_OUT();
}

void sub_005D8430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8430u);

L_005D8430:
    PUSH32(esp, ebp); /* 0x005D8430: push ebp */
    ebp = esp; /* 0x005D8431: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8433: push -1 */
    PUSH32(esp, 0x007AEC50u); /* 0x005D8435: push 0x7aec50 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D843A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D8440: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005D8441: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D8444: push ebx */
    PUSH32(esp, esi); /* 0x005D8445: push esi */
    PUSH32(esp, edi); /* 0x005D8446: push edi */
    eax = MEM32(0x855000); /* 0x005D8447: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005D844C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D844E: push eax */
    eax = ebp + (-0xC); /* 0x005D844F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D8452: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D8458: mov ebx, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005D845A: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x14); /* 0x005D845D: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x005D8460: push esi */
    PUSH32(esp, eax); /* 0x005D8461: push eax */
    ecx = ebx + 0x1C; /* 0x005D8462: lea ecx, [ebx + 0x1c] */
    RECOMP_CALL(sub_005DC0D0); /* 0x005D8465: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x005D846A: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x005D846D: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005D8481; /* 0x005D8470: je 0x5d8481 */
L_005D8472:
    /* cmp MEM8(eax + 0x1A), 2 */ /* 0x005D8472: cmp byte ptr [eax + 0x1a], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1A)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005D8476: setne al */
    /* test LO8(eax), LO8(eax) */ /* 0x005D8479: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D855E; /* 0x005D847B: jne 0x5d855e */
L_005D8481:
    /* cmp MEM8(ebx + 0x4C), 0 */ /* 0x005D8481: cmp byte ptr [ebx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D855E; /* 0x005D8485: jne 0x5d855e */
L_005D848B:
    PUSH32(esp, esi); /* 0x005D848B: push esi */
    ecx = ebx + 0x1C; /* 0x005D848C: lea ecx, [ebx + 0x1c] */
    RECOMP_CALL(sub_005DBD30); /* 0x005D848F: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x2), 2 */ /* 0x005D8494: cmp byte ptr [eax + 2], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D84A0; /* 0x005D8498: jne 0x5d84a0 */
L_005D849A:
    /* cmp MEM32(ebx + 0x48), 0 */ /* 0x005D849A: cmp dword ptr [ebx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005D84B5; /* 0x005D849E: jne 0x5d84b5 */
L_005D84A0:
    ecx = MEM32(ebx + 0xC); /* 0x005D84A0: mov ecx, dword ptr [ebx + 0xc] */
    edx = ebp + (-0x14); /* 0x005D84A3: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005D84A6: push edx */
    eax = MEM32(ecx); /* 0x005D84A7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D84A9: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x005D84AF: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebx + 0x48) = eax; /* 0x005D84B2: mov dword ptr [ebx + 0x48], eax */
L_005D84B5:
    ecx = ebp + (-0x34); /* 0x005D84B5: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D84B8: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005D84BD: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x34); /* 0x005D84C4: lea ecx, [ebp - 0x34] */
    PUSH32(esp, 0x333u); /* 0x005D84C7: push 0x333 */
    RECOMP_CALL(sub_005F5560); /* 0x005D84CC: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005D84D1: push esi */
    ecx = ebp + (-0x34); /* 0x005D84D2: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F4D80); /* 0x005D84D5: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x005D84DA: mov edi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x34); /* 0x005D84DD: lea ecx, [ebp - 0x34] */
    PUSH32(esp, 1); /* 0x005D84E0: push 1 */
    PUSH32(esp, 0); /* 0x005D84E2: push 0 */
    PUSH32(esp, edi); /* 0x005D84E4: push edi */
    RECOMP_CALL(sub_005DC3D0); /* 0x005D84E5: call 0x5dc3d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x005D84EA: mov esi, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x34); /* 0x005D84ED: lea ecx, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x005D84F0: push esi */
    RECOMP_CALL(sub_005F56D0); /* 0x005D84F1: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x005D84F6: push 2 */
    PUSH32(esp, 1); /* 0x005D84F8: push 1 */
    eax = ebp + (-0x34); /* 0x005D84FA: lea eax, [ebp - 0x34] */
    ecx = ebx; /* 0x005D84FD: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005D84FF: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D8500: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005D70B0); /* 0x005D8503: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005D8508: push esi */
    PUSH32(esp, edi); /* 0x005D8509: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005D850A: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x005D850D: mov ecx, ebx */
    RECOMP_CALL(sub_005DA810); /* 0x005D850F: call 0x5da810 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x005D8514: mov ecx, ebx */
    RECOMP_CALL(sub_005D82D0); /* 0x005D8516: call 0x5d82d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005D851B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005D8522: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005D8525: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8548; /* 0x005D8527: je 0x5d8548 */
L_005D8529:
    PUSH32(esp, eax); /* 0x005D8529: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D852A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D8530: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005D8533: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005D853A: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005D8541: mov dword ptr [ebp - 0x18], 0 */
L_005D8548:
    SET_LO8(eax, 1); /* 0x005D8548: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005D854A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D854D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D8554: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D8555: pop edi */
    esi = POP32_VAL(esp); /* 0x005D8556: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D8557: pop ebx */
    esp = ebp; /* 0x005D8558: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D855A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005D855B: ret 0xc */
L_005D855E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005D855E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0xC)); /* 0x005D8560: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D8563: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D856A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D856B: pop edi */
    esi = POP32_VAL(esp); /* 0x005D856C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D856D: pop ebx */
    esp = ebp; /* 0x005D856E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D8570: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005D8571: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005D8580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8580u);

L_005D8580:
    PUSH32(esp, ebp); /* 0x005D8580: push ebp */
    ebp = esp; /* 0x005D8581: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D8583: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8586: push -1 */
    PUSH32(esp, 0x007AEEB0u); /* 0x005D8588: push 0x7aeeb0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D858D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D8593: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x005D8594: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D8597: push ebx */
    PUSH32(esp, esi); /* 0x005D8598: push esi */
    PUSH32(esp, edi); /* 0x005D8599: push edi */
    eax = MEM32(0x855000); /* 0x005D859A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D859F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D85A1: push eax */
    eax = esp + 0x48; /* 0x005D85A2: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D85A6: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x005D85AC: mov eax, ecx */
    MEM32(esp + 0x18) = eax; /* 0x005D85AE: mov dword ptr [esp + 0x18], eax */
    ecx = MEM32(eax + 0xC); /* 0x005D85B2: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x005D85B5: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D85B7: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D85BA: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D85BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D860E; /* 0x005D85BE: jne 0x5d860e */
L_005D85C0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D85C0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D85C3: mov ecx, esp */
    MEM32(esp + 0x2C) = esp; /* 0x005D85C5: mov dword ptr [esp + 0x2c], esp */
    PUSH32(esp, 0x007F5F3Cu); /* 0x005D85C9: push 0x7f5f3c */
    RECOMP_CALL(sub_00409FA0); /* 0x005D85CE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x68) = 0; /* 0x005D85D3: mov dword ptr [esp + 0x68], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D85DB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D85DE: mov ecx, esp */
    MEM32(esp + 0x4C) = esp; /* 0x005D85E0: mov dword ptr [esp + 0x4c], esp */
    PUSH32(esp, 0x007F5F2Cu); /* 0x005D85E4: push 0x7f5f2c */
    RECOMP_CALL(sub_00409FA0); /* 0x005D85E9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x80) = (uint8_t)(1); /* 0x005D85EE: mov byte ptr [esp + 0x80], 1 */
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005D85F6: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = 0x1BDu; /* 0x005D8601: mov ecx, 0x1bd */
    RECOMP_CALL(sub_00668DA0); /* 0x005D8606: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005D860B: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005D860E:
    ecx = esp + 0x24; /* 0x005D860E: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D8612: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 2; /* 0x005D8617: mov dword ptr [esp + 0x50], 2 */
    /* test MEM8(esp + 0x30), 7 */ /* 0x005D861F: test byte ptr [esp + 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x30)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x14) = 0x33Bu; /* 0x005D8624: mov dword ptr [esp + 0x14], 0x33b */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D865A; /* 0x005D862C: jne 0x5d865a */
L_005D862E:
    PUSH32(esp, 0x20u); /* 0x005D862E: push 0x20 */
    ecx = esp + 0x28; /* 0x005D8630: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8634: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005D8639: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D863D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8640: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8640: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005D8643: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x33Bu; /* 0x005D8647: mov dword ptr [eax], 0x33b */
    ecx = MEM32(esp + 0x30); /* 0x005D864D: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D8651: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = ecx; /* 0x005D8654: mov dword ptr [esp + 0x30], ecx */
    goto L_005D866F; /* 0x005D8658: jmp 0x5d866f */
L_005D865A:
    PUSH32(esp, ecx); /* 0x005D865A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D865B: push 0x20 */
    eax = esp + 0x1C; /* 0x005D865D: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8661: push eax */
    ecx = esp + 0x30; /* 0x005D8662: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8666: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x30); /* 0x005D866B: mov ecx, dword ptr [esp + 0x30] */
L_005D866F:
    esi = MEM32(ebp + 0x8); /* 0x005D866F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x005D8672: mov eax, dword ptr [esi] */
    MEM32(esp + 0x1C) = eax; /* 0x005D8674: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(esi + 0x4); /* 0x005D8678: mov eax, dword ptr [esi + 4] */
    MEM32(esp + 0x20) = eax; /* 0x005D867B: mov dword ptr [esp + 0x20], eax */
    /* test LO8(ecx), 7 */ /* 0x005D867F: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D86B4; /* 0x005D8682: jne 0x5d86b4 */
L_005D8684:
    PUSH32(esp, 0x40u); /* 0x005D8684: push 0x40 */
    ecx = esp + 0x28; /* 0x005D8686: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D868A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005D868F: mov eax, dword ptr [esp + 0x30] */
    _xmm[0].u64[0] = MEM64(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x005D8693: movq xmm0, qword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8699: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D869C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D869C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005D869F: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D86A3: movq qword ptr [eax], xmm0 */
    eax = MEM32(esp + 0x30); /* 0x005D86A7: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x005D86AB: add eax, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = eax; /* 0x005D86AE: mov dword ptr [esp + 0x30], eax */
    goto L_005D86C9; /* 0x005D86B2: jmp 0x5d86c9 */
L_005D86B4:
    PUSH32(esp, ecx); /* 0x005D86B4: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D86B5: push 0x40 */
    eax = esp + 0x24; /* 0x005D86B7: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x005D86BB: push eax */
    ecx = esp + 0x30; /* 0x005D86BC: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005D86C0: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005D86C5: mov eax, dword ptr [esp + 0x30] */
L_005D86C9:
    edi = MEM32(ebp + 0xC); /* 0x005D86C9: mov edi, dword ptr [ebp + 0xc] */
    SET_LO8(ebx, MEM8(edi + 0x4)); /* 0x005D86CC: mov bl, byte ptr [edi + 4] */
    MEM8(esp + 0x10) = (uint8_t)(LO8(ebx)); /* 0x005D86CF: mov byte ptr [esp + 0x10], bl */
    /* test LO8(eax), 7 */ /* 0x005D86D3: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D86FF; /* 0x005D86D5: jne 0x5d86ff */
L_005D86D7:
    PUSH32(esp, 8); /* 0x005D86D7: push 8 */
    ecx = esp + 0x28; /* 0x005D86D9: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D86DD: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005D86E2: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D86E6: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D86E9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D86E9: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005D86EC: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x005D86F0: mov byte ptr [eax], bl */
    eax = MEM32(esp + 0x30); /* 0x005D86F2: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x005D86F6: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = eax; /* 0x005D86F9: mov dword ptr [esp + 0x30], eax */
    goto L_005D8714; /* 0x005D86FD: jmp 0x5d8714 */
L_005D86FF:
    PUSH32(esp, ecx); /* 0x005D86FF: push ecx */
    PUSH32(esp, 8); /* 0x005D8700: push 8 */
    eax = esp + 0x18; /* 0x005D8702: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D8706: push eax */
    ecx = esp + 0x30; /* 0x005D8707: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005D870B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005D8710: mov eax, dword ptr [esp + 0x30] */
L_005D8714:
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x005D8714: movss xmm0, dword ptr [edi] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D8718: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D871E: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8748; /* 0x005D8720: jne 0x5d8748 */
L_005D8722:
    PUSH32(esp, 0x20u); /* 0x005D8722: push 0x20 */
    ecx = esp + 0x28; /* 0x005D8724: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8728: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x30); /* 0x005D872D: mov ecx, dword ptr [esp + 0x30] */
    eax = MEM32(esp + 0x14); /* 0x005D8731: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D8735: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D8738: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D8738: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x38); /* 0x005D873B: add ecx, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D873F: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x20u; /* 0x005D8741: add dword ptr [esp + 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D8759; /* 0x005D8746: jmp 0x5d8759 */
L_005D8748:
    PUSH32(esp, ecx); /* 0x005D8748: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8749: push 0x20 */
    eax = esp + 0x1C; /* 0x005D874B: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D874F: push eax */
    ecx = esp + 0x30; /* 0x005D8750: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8754: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8759:
    ecx = MEM32(esp + 0x18); /* 0x005D8759: mov ecx, dword ptr [esp + 0x18] */
    eax = esp + 0x24; /* 0x005D875D: lea eax, [esp + 0x24] */
    PUSH32(esp, 2); /* 0x005D8761: push 2 */
    PUSH32(esp, 0); /* 0x005D8763: push 0 */
    PUSH32(esp, eax); /* 0x005D8765: push eax */
    PUSH32(esp, esi); /* 0x005D8766: push esi */
    RECOMP_CALL(sub_005D70B0); /* 0x005D8767: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x005D876C: mov dword ptr [esp + 0x50], 0xffffffff */
    eax = MEM32(esp + 0x38); /* 0x005D8774: mov eax, dword ptr [esp + 0x38] */
    /* test eax, eax */ /* 0x005D8778: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D879E; /* 0x005D877A: je 0x5d879e */
L_005D877C:
    PUSH32(esp, eax); /* 0x005D877C: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D877D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D8783: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x38) = 0; /* 0x005D8786: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x005D878E: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x005D8796: mov dword ptr [esp + 0x40], 0 */
L_005D879E:
    ecx = MEM32(esp + 0x48); /* 0x005D879E: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D87A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D87A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D87AA: pop edi */
    esi = POP32_VAL(esp); /* 0x005D87AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D87AC: pop ebx */
    esp = ebp; /* 0x005D87AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D87AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005D87B0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005D87C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D87C0u);

L_005D87C0:
    PUSH32(esp, ebp); /* 0x005D87C0: push ebp */
    ebp = esp; /* 0x005D87C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D87C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D87C6: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005D87C8: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D87CD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D87D3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005D87D4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005D87D7: push esi */
    PUSH32(esp, edi); /* 0x005D87D8: push edi */
    eax = MEM32(0x855000); /* 0x005D87D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D87DE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D87E0: push eax */
    eax = esp + 0x38; /* 0x005D87E1: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D87E5: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005D87EB: mov edi, ecx */
    ecx = esp + 0x14; /* 0x005D87ED: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D87F1: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005D87F6: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005D87FE: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0xC) = 0x33Cu; /* 0x005D8803: mov dword ptr [esp + 0xc], 0x33c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8839; /* 0x005D880B: jne 0x5d8839 */
L_005D880D:
    PUSH32(esp, 0x20u); /* 0x005D880D: push 0x20 */
    ecx = esp + 0x18; /* 0x005D880F: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8813: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005D8818: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D881C: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D881F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D881F: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005D8822: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x33Cu; /* 0x005D8826: mov dword ptr [eax], 0x33c */
    ecx = MEM32(esp + 0x20); /* 0x005D882C: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D8830: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = ecx; /* 0x005D8833: mov dword ptr [esp + 0x20], ecx */
    goto L_005D884E; /* 0x005D8837: jmp 0x5d884e */
L_005D8839:
    PUSH32(esp, ecx); /* 0x005D8839: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D883A: push 0x20 */
    eax = esp + 0x14; /* 0x005D883C: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005D8840: push eax */
    ecx = esp + 0x20; /* 0x005D8841: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8845: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x005D884A: mov ecx, dword ptr [esp + 0x20] */
L_005D884E:
    esi = MEM32(ebp + 0x8); /* 0x005D884E: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x005D8851: mov eax, dword ptr [esi] */
    MEM32(esp + 0xC) = eax; /* 0x005D8853: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(esi + 0x4); /* 0x005D8857: mov eax, dword ptr [esi + 4] */
    MEM32(esp + 0x10) = eax; /* 0x005D885A: mov dword ptr [esp + 0x10], eax */
    /* test LO8(ecx), 7 */ /* 0x005D885E: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8893; /* 0x005D8861: jne 0x5d8893 */
L_005D8863:
    PUSH32(esp, 0x40u); /* 0x005D8863: push 0x40 */
    ecx = esp + 0x18; /* 0x005D8865: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8869: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005D886E: mov eax, dword ptr [esp + 0x20] */
    _xmm[0].u64[0] = MEM64(esp + 0xC); _xmm[0].u64[1] = 0; /* 0x005D8872: movq xmm0, qword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8878: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D887B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D887B: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005D887E: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D8882: movq qword ptr [eax], xmm0 */
    eax = MEM32(esp + 0x20); /* 0x005D8886: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x005D888A: add eax, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = eax; /* 0x005D888D: mov dword ptr [esp + 0x20], eax */
    goto L_005D88A8; /* 0x005D8891: jmp 0x5d88a8 */
L_005D8893:
    PUSH32(esp, ecx); /* 0x005D8893: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D8894: push 0x40 */
    eax = esp + 0x14; /* 0x005D8896: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005D889A: push eax */
    ecx = esp + 0x20; /* 0x005D889B: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005D889F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005D88A4: mov eax, dword ptr [esp + 0x20] */
L_005D88A8:
    /* test LO8(eax), 7 */ /* 0x005D88A8: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D88D7; /* 0x005D88AA: jne 0x5d88d7 */
L_005D88AC:
    PUSH32(esp, 0x40u); /* 0x005D88AC: push 0x40 */
    ecx = esp + 0x18; /* 0x005D88AE: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D88B2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x005D88B7: mov ecx, dword ptr [esp + 0x20] */
    eax = MEM32(ebp + 0xC); /* 0x005D88BB: mov eax, dword ptr [ebp + 0xc] */
    ecx = ecx + 0x7; /* 0x005D88BE: lea ecx, [ecx + 7] */
    _xmm[0].u64[0] = MEM64(eax); _xmm[0].u64[1] = 0; /* 0x005D88C1: movq xmm0, qword ptr [eax] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D88C5: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D88C5: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x28); /* 0x005D88C8: add ecx, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x005D88CC: movq qword ptr [ecx], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x40u; /* 0x005D88D0: add dword ptr [esp + 0x20], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D88E6; /* 0x005D88D5: jmp 0x5d88e6 */
L_005D88D7:
    PUSH32(esp, ecx); /* 0x005D88D7: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D88D8: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005D88DA: push dword ptr [ebp + 0xc] */
    ecx = esp + 0x20; /* 0x005D88DD: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005D88E1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D88E6:
    PUSH32(esp, 2); /* 0x005D88E6: push 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005D88E8: push dword ptr [ebp + 0x10] */
    eax = esp + 0x1C; /* 0x005D88EB: lea eax, [esp + 0x1c] */
    ecx = edi; /* 0x005D88EF: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005D88F1: push eax */
    PUSH32(esp, esi); /* 0x005D88F2: push esi */
    RECOMP_CALL(sub_005D70B0); /* 0x005D88F3: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005D88F8: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005D8900: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005D8904: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D892A; /* 0x005D8906: je 0x5d892a */
L_005D8908:
    PUSH32(esp, eax); /* 0x005D8908: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D8909: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D890F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005D8912: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005D891A: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005D8922: mov dword ptr [esp + 0x30], 0 */
L_005D892A:
    ecx = MEM32(esp + 0x38); /* 0x005D892A: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D892E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D8935: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D8936: pop edi */
    esi = POP32_VAL(esp); /* 0x005D8937: pop esi */
    esp = ebp; /* 0x005D8938: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D893A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005D893B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005D8940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8940u);

L_005D8940:
    PUSH32(esp, ebp); /* 0x005D8940: push ebp */
    ebp = esp; /* 0x005D8941: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D8943: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8946: push -1 */
    PUSH32(esp, 0x007AEB90u); /* 0x005D8948: push 0x7aeb90 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D894D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D8953: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005D8954: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D8957: push ebx */
    PUSH32(esp, esi); /* 0x005D8958: push esi */
    PUSH32(esp, edi); /* 0x005D8959: push edi */
    eax = MEM32(0x855000); /* 0x005D895A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D895F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D8961: push eax */
    eax = esp + 0x40; /* 0x005D8962: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D8966: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D896C: mov ebx, ecx */
    ecx = esp + 0x1C; /* 0x005D896E: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D8972: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005D8977: mov dword ptr [esp + 0x48], 0 */
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D897F: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x337u; /* 0x005D8984: mov dword ptr [esp + 0x10], 0x337 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D89BA; /* 0x005D898C: jne 0x5d89ba */
L_005D898E:
    PUSH32(esp, 0x20u); /* 0x005D898E: push 0x20 */
    ecx = esp + 0x20; /* 0x005D8990: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8994: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D8999: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D899D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D89A0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D89A0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D89A3: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x337u; /* 0x005D89A7: mov dword ptr [eax], 0x337 */
    ecx = MEM32(esp + 0x28); /* 0x005D89AD: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D89B1: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005D89B4: mov dword ptr [esp + 0x28], ecx */
    goto L_005D89CF; /* 0x005D89B8: jmp 0x5d89cf */
L_005D89BA:
    PUSH32(esp, ecx); /* 0x005D89BA: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D89BB: push 0x20 */
    eax = esp + 0x18; /* 0x005D89BD: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D89C1: push eax */
    ecx = esp + 0x28; /* 0x005D89C2: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D89C6: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D89CB: mov ecx, dword ptr [esp + 0x28] */
L_005D89CF:
    edi = MEM32(ebp + 0x8); /* 0x005D89CF: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x005D89D2: mov eax, dword ptr [edi] */
    MEM32(esp + 0x14) = eax; /* 0x005D89D4: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(edi + 0x4); /* 0x005D89D8: mov eax, dword ptr [edi + 4] */
    MEM32(esp + 0x18) = eax; /* 0x005D89DB: mov dword ptr [esp + 0x18], eax */
    /* test LO8(ecx), 7 */ /* 0x005D89DF: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8A0E; /* 0x005D89E2: jne 0x5d8a0e */
L_005D89E4:
    PUSH32(esp, 0x40u); /* 0x005D89E4: push 0x40 */
    ecx = esp + 0x20; /* 0x005D89E6: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D89EA: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D89EF: mov eax, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0x14); _xmm[0].u64[1] = 0; /* 0x005D89F3: movq xmm0, qword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D89F9: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D89FC: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D89FC: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D89FF: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D8A03: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x40u; /* 0x005D8A07: add dword ptr [esp + 0x28], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D8A1F; /* 0x005D8A0C: jmp 0x5d8a1f */
L_005D8A0E:
    PUSH32(esp, ecx); /* 0x005D8A0E: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D8A0F: push 0x40 */
    eax = esp + 0x1C; /* 0x005D8A11: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8A15: push eax */
    ecx = esp + 0x28; /* 0x005D8A16: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8A1A: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8A1F:
    ecx = MEM32(ebx + 0xC); /* 0x005D8A1F: mov ecx, dword ptr [ebx + 0xc] */
    edx = esp + 0x10; /* 0x005D8A22: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x005D8A26: push edx */
    eax = MEM32(ecx); /* 0x005D8A27: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D8A29: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D8A2F: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(esp + 0x10); /* 0x005D8A34: mov esi, dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = esi; /* 0x005D8A38: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8A66; /* 0x005D8A3C: jne 0x5d8a66 */
L_005D8A3E:
    PUSH32(esp, 0x20u); /* 0x005D8A3E: push 0x20 */
    ecx = esp + 0x20; /* 0x005D8A40: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8A44: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D8A49: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8A4D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8A50: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8A50: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D8A53: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D8A57: mov dword ptr [eax], esi */
    ecx = MEM32(esp + 0x28); /* 0x005D8A59: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D8A5D: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005D8A60: mov dword ptr [esp + 0x28], ecx */
    goto L_005D8A7B; /* 0x005D8A64: jmp 0x5d8a7b */
L_005D8A66:
    PUSH32(esp, ecx); /* 0x005D8A66: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8A67: push 0x20 */
    eax = esp + 0x1C; /* 0x005D8A69: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8A6D: push eax */
    ecx = esp + 0x28; /* 0x005D8A6E: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8A72: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8A77: mov ecx, dword ptr [esp + 0x28] */
L_005D8A7B:
    esi = MEM32(ebp + 0xC); /* 0x005D8A7B: mov esi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(esi); /* 0x005D8A7E: movzx eax, word ptr [esi] */
    MEM32(esp + 0x10) = eax; /* 0x005D8A81: mov dword ptr [esp + 0x10], eax */
    /* test LO8(ecx), 7 */ /* 0x005D8A85: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8AB8; /* 0x005D8A88: jne 0x5d8ab8 */
L_005D8A8A:
    PUSH32(esp, 0x10u); /* 0x005D8A8A: push 0x10 */
    ecx = esp + 0x20; /* 0x005D8A8C: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8A90: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8A95: mov ecx, dword ptr [esp + 0x28] */
    SET_LO16(eax, MEM16(esp + 0x10)); /* 0x005D8A99: mov ax, word ptr [esp + 0x10] */
    ecx = ecx + 0x7; /* 0x005D8A9E: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D8AA1: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D8AA1: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x30); /* 0x005D8AA4: add ecx, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x005D8AA8: mov word ptr [ecx], ax */
    ecx = MEM32(esp + 0x28); /* 0x005D8AAB: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x005D8AAF: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005D8AB2: mov dword ptr [esp + 0x28], ecx */
    goto L_005D8ACD; /* 0x005D8AB6: jmp 0x5d8acd */
L_005D8AB8:
    PUSH32(esp, ecx); /* 0x005D8AB8: push ecx */
    PUSH32(esp, 0x10u); /* 0x005D8AB9: push 0x10 */
    eax = esp + 0x18; /* 0x005D8ABB: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D8ABF: push eax */
    ecx = esp + 0x28; /* 0x005D8AC0: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8AC4: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8AC9: mov ecx, dword ptr [esp + 0x28] */
L_005D8ACD:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x005D8ACD: movzx eax, word ptr [esi + 2] */
    MEM32(esp + 0x10) = eax; /* 0x005D8AD1: mov dword ptr [esp + 0x10], eax */
    /* test LO8(ecx), 7 */ /* 0x005D8AD5: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8B08; /* 0x005D8AD8: jne 0x5d8b08 */
L_005D8ADA:
    PUSH32(esp, 0x10u); /* 0x005D8ADA: push 0x10 */
    ecx = esp + 0x20; /* 0x005D8ADC: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8AE0: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8AE5: mov ecx, dword ptr [esp + 0x28] */
    SET_LO16(eax, MEM16(esp + 0x10)); /* 0x005D8AE9: mov ax, word ptr [esp + 0x10] */
    ecx = ecx + 0x7; /* 0x005D8AEE: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D8AF1: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D8AF1: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x30); /* 0x005D8AF4: add ecx, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x005D8AF8: mov word ptr [ecx], ax */
    eax = MEM32(esp + 0x28); /* 0x005D8AFB: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005D8AFF: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = eax; /* 0x005D8B02: mov dword ptr [esp + 0x28], eax */
    goto L_005D8B1D; /* 0x005D8B06: jmp 0x5d8b1d */
L_005D8B08:
    PUSH32(esp, ecx); /* 0x005D8B08: push ecx */
    PUSH32(esp, 0x10u); /* 0x005D8B09: push 0x10 */
    eax = esp + 0x18; /* 0x005D8B0B: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D8B0F: push eax */
    ecx = esp + 0x28; /* 0x005D8B10: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8B14: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D8B19: mov eax, dword ptr [esp + 0x28] */
L_005D8B1D:
    _xmm[0].u64[0] = MEM32(esi + 0x4); _xmm[0].u64[1] = 0; /* 0x005D8B1D: movss xmm0, dword ptr [esi + 4] */
    MEM32(esp + 0x10) = _xmm[0].u32[0]; /* 0x005D8B22: movss dword ptr [esp + 0x10], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D8B28: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8B58; /* 0x005D8B2A: jne 0x5d8b58 */
L_005D8B2C:
    PUSH32(esp, 0x20u); /* 0x005D8B2C: push 0x20 */
    ecx = esp + 0x20; /* 0x005D8B2E: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8B32: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8B37: mov ecx, dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x10); /* 0x005D8B3B: mov eax, dword ptr [esp + 0x10] */
    ecx = ecx + 0x7; /* 0x005D8B3F: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D8B42: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D8B42: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x30); /* 0x005D8B45: add ecx, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D8B49: mov dword ptr [ecx], eax */
    ecx = MEM32(esp + 0x28); /* 0x005D8B4B: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D8B4F: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005D8B52: mov dword ptr [esp + 0x28], ecx */
    goto L_005D8B6D; /* 0x005D8B56: jmp 0x5d8b6d */
L_005D8B58:
    PUSH32(esp, ecx); /* 0x005D8B58: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8B59: push 0x20 */
    eax = esp + 0x18; /* 0x005D8B5B: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D8B5F: push eax */
    ecx = esp + 0x28; /* 0x005D8B60: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8B64: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D8B69: mov ecx, dword ptr [esp + 0x28] */
L_005D8B6D:
    eax = MEM32(esi + 0x8); /* 0x005D8B6D: mov eax, dword ptr [esi + 8] */
    MEM32(esp + 0x14) = eax; /* 0x005D8B70: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(esi + 0xC); /* 0x005D8B74: mov eax, dword ptr [esi + 0xc] */
    MEM32(esp + 0x18) = eax; /* 0x005D8B77: mov dword ptr [esp + 0x18], eax */
    /* test LO8(ecx), 7 */ /* 0x005D8B7B: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8BAA; /* 0x005D8B7E: jne 0x5d8baa */
L_005D8B80:
    PUSH32(esp, 0x40u); /* 0x005D8B80: push 0x40 */
    ecx = esp + 0x20; /* 0x005D8B82: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8B86: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D8B8B: mov eax, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0x14); _xmm[0].u64[1] = 0; /* 0x005D8B8F: movq xmm0, qword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8B95: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8B98: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8B98: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D8B9B: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D8B9F: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x40u; /* 0x005D8BA3: add dword ptr [esp + 0x28], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D8BBB; /* 0x005D8BA8: jmp 0x5d8bbb */
L_005D8BAA:
    PUSH32(esp, ecx); /* 0x005D8BAA: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D8BAB: push 0x40 */
    eax = esp + 0x1C; /* 0x005D8BAD: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8BB1: push eax */
    ecx = esp + 0x28; /* 0x005D8BB2: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8BB6: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8BBB:
    PUSH32(esp, 2); /* 0x005D8BBB: push 2 */
    PUSH32(esp, 0); /* 0x005D8BBD: push 0 */
    eax = esp + 0x24; /* 0x005D8BBF: lea eax, [esp + 0x24] */
    ecx = ebx; /* 0x005D8BC3: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005D8BC5: push eax */
    PUSH32(esp, edi); /* 0x005D8BC6: push edi */
    RECOMP_CALL(sub_005D70B0); /* 0x005D8BC7: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005D8BCC: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005D8BD4: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005D8BD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8BFE; /* 0x005D8BDA: je 0x5d8bfe */
L_005D8BDC:
    PUSH32(esp, eax); /* 0x005D8BDC: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D8BDD: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D8BE3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005D8BE6: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005D8BEE: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005D8BF6: mov dword ptr [esp + 0x38], 0 */
L_005D8BFE:
    ecx = MEM32(esp + 0x40); /* 0x005D8BFE: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D8C02: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D8C09: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D8C0A: pop edi */
    esi = POP32_VAL(esp); /* 0x005D8C0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D8C0C: pop ebx */
    esp = ebp; /* 0x005D8C0D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D8C0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005D8C10: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005D8C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D8C20u);

L_005D8C20:
    PUSH32(esp, ebp); /* 0x005D8C20: push ebp */
    ebp = esp; /* 0x005D8C21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D8C23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D8C26: push -1 */
    PUSH32(esp, 0x007AEF00u); /* 0x005D8C28: push 0x7aef00 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D8C2D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D8C33: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x005D8C34: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D8C37: push ebx */
    PUSH32(esp, esi); /* 0x005D8C38: push esi */
    PUSH32(esp, edi); /* 0x005D8C39: push edi */
    eax = MEM32(0x855000); /* 0x005D8C3A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D8C3F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D8C41: push eax */
    eax = esp + 0x58; /* 0x005D8C42: lea eax, [esp + 0x58] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D8C46: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D8C4C: mov ebx, ecx */
    MEM32(esp + 0x28) = ebx; /* 0x005D8C4E: mov dword ptr [esp + 0x28], ebx */
    ecx = MEM32(ebx + 0xC); /* 0x005D8C52: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x005D8C55: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005D8C57: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005D8C5A: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005D8C5C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8CAE; /* 0x005D8C5E: jne 0x5d8cae */
L_005D8C60:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D8C60: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D8C63: mov ecx, esp */
    MEM32(esp + 0x34) = esp; /* 0x005D8C65: mov dword ptr [esp + 0x34], esp */
    PUSH32(esp, 0x007F5F3Cu); /* 0x005D8C69: push 0x7f5f3c */
    RECOMP_CALL(sub_00409FA0); /* 0x005D8C6E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x78) = 0; /* 0x005D8C73: mov dword ptr [esp + 0x78], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D8C7B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D8C7E: mov ecx, esp */
    MEM32(esp + 0x48) = esp; /* 0x005D8C80: mov dword ptr [esp + 0x48], esp */
    PUSH32(esp, 0x007F5F2Cu); /* 0x005D8C84: push 0x7f5f2c */
    RECOMP_CALL(sub_00409FA0); /* 0x005D8C89: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(1); /* 0x005D8C8E: mov byte ptr [esp + 0x90], 1 */
    MEM32(esp + 0x90) = 0xFFFFFFFFu; /* 0x005D8C96: mov dword ptr [esp + 0x90], 0xffffffff */
    ecx = 0x1E5u; /* 0x005D8CA1: mov ecx, 0x1e5 */
    RECOMP_CALL(sub_00668DA0); /* 0x005D8CA6: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005D8CAB: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005D8CAE:
    ecx = esp + 0x34; /* 0x005D8CAE: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D8CB2: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x60) = 2; /* 0x005D8CB7: mov dword ptr [esp + 0x60], 2 */
    /* test MEM8(esp + 0x40), 7 */ /* 0x005D8CBF: test byte ptr [esp + 0x40], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x40)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x14) = 0x33Au; /* 0x005D8CC4: mov dword ptr [esp + 0x14], 0x33a */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8CF4; /* 0x005D8CCC: jne 0x5d8cf4 */
L_005D8CCE:
    PUSH32(esp, 0x20u); /* 0x005D8CCE: push 0x20 */
    ecx = esp + 0x38; /* 0x005D8CD0: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8CD4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D8CD9: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8CDD: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8CE0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8CE0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D8CE3: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x33Au; /* 0x005D8CE7: mov dword ptr [eax], 0x33a */
    _flag_a = (uint32_t)(MEM32(esp + 0x40)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 0x20u; /* 0x005D8CED: add dword ptr [esp + 0x40], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D8D05; /* 0x005D8CF2: jmp 0x5d8d05 */
L_005D8CF4:
    PUSH32(esp, ecx); /* 0x005D8CF4: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8CF5: push 0x20 */
    eax = esp + 0x1C; /* 0x005D8CF7: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8CFB: push eax */
    ecx = esp + 0x40; /* 0x005D8CFC: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8D00: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8D05:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005D8D05: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005D8D0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8D13; /* 0x005D8D0D: jne 0x5d8d13 */
L_005D8D0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005D8D0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D8D2D; /* 0x005D8D11: jmp 0x5d8d2d */
L_005D8D13:
    ecx = MEM32(0x927AEC); /* 0x005D8D13: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005D8D19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8D2D; /* 0x005D8D1B: jne 0x5d8d2d */
L_005D8D1D:
    ecx = 0x00927AE8u; /* 0x005D8D1D: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005D8D22: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005D8D27: mov ecx, dword ptr [0x927aec] */
L_005D8D2D:
    eax = MEM32(ecx); /* 0x005D8D2D: mov eax, dword ptr [ecx] */
    edx = esp + 0x2C; /* 0x005D8D2F: lea edx, [esp + 0x2c] */
    PUSH32(esp, edx); /* 0x005D8D33: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005D8D34: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x40), 7 */ /* 0x005D8D37: test byte ptr [esp + 0x40], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x40)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(eax); /* 0x005D8D3C: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005D8D3E: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x1C) = ecx; /* 0x005D8D41: mov dword ptr [esp + 0x1c], ecx */
    MEM32(esp + 0x20) = eax; /* 0x005D8D45: mov dword ptr [esp + 0x20], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8D75; /* 0x005D8D49: jne 0x5d8d75 */
L_005D8D4B:
    PUSH32(esp, 0x40u); /* 0x005D8D4B: push 0x40 */
    ecx = esp + 0x38; /* 0x005D8D4D: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8D51: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D8D56: mov eax, dword ptr [esp + 0x40] */
    _xmm[0].u64[0] = MEM64(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x005D8D5A: movq xmm0, qword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8D60: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8D63: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8D63: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D8D66: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D8D6A: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x40)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 0x40u; /* 0x005D8D6E: add dword ptr [esp + 0x40], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D8D86; /* 0x005D8D73: jmp 0x5d8d86 */
L_005D8D75:
    PUSH32(esp, ecx); /* 0x005D8D75: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D8D76: push 0x40 */
    eax = esp + 0x24; /* 0x005D8D78: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x005D8D7C: push eax */
    ecx = esp + 0x40; /* 0x005D8D7D: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8D81: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8D86:
    ecx = MEM32(ebx + 0xC); /* 0x005D8D86: mov ecx, dword ptr [ebx + 0xc] */
    edx = esp + 0x14; /* 0x005D8D89: lea edx, [esp + 0x14] */
    PUSH32(esp, edx); /* 0x005D8D8D: push edx */
    eax = MEM32(ecx); /* 0x005D8D8E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D8D90: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x40), 7 */ /* 0x005D8D96: test byte ptr [esp + 0x40], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x40)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(esp + 0x14); /* 0x005D8D9B: mov esi, dword ptr [esp + 0x14] */
    MEM32(esp + 0x18) = esi; /* 0x005D8D9F: mov dword ptr [esp + 0x18], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8DC7; /* 0x005D8DA3: jne 0x5d8dc7 */
L_005D8DA5:
    PUSH32(esp, 0x20u); /* 0x005D8DA5: push 0x20 */
    ecx = esp + 0x38; /* 0x005D8DA7: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D8DAB: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D8DB0: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D8DB4: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8DB7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8DB7: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D8DBA: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D8DBE: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(esp + 0x40)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 0x20u; /* 0x005D8DC0: add dword ptr [esp + 0x40], 0x20 */
    _flag_k = FK_ADD;
    goto L_005D8DD8; /* 0x005D8DC5: jmp 0x5d8dd8 */
L_005D8DC7:
    PUSH32(esp, ecx); /* 0x005D8DC7: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8DC8: push 0x20 */
    eax = esp + 0x20; /* 0x005D8DCA: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D8DCE: push eax */
    ecx = esp + 0x40; /* 0x005D8DCF: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8DD3: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D8DD8:
    RECOMP_CALL(sub_0040A630); /* 0x005D8DD8: call 0x40a630 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005D8DDD: mov edi, eax */
    MEM32(esp + 0x1C) = edi; /* 0x005D8DDF: mov dword ptr [esp + 0x1c], edi */
    ecx = MEM32(edi + 0x4); /* 0x005D8DE3: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005D8DE6: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x005D8DE8: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    esi = (uint32_t)LO8(ecx); /* 0x005D8DEB: movzx esi, cl */
    /* cmp esi, 0x10u */ /* 0x005D8DEE: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D8E3B; /* 0x005D8DF1: jbe 0x5d8e3b */
L_005D8DF3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D8DF3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D8DF6: mov ecx, esp */
    MEM32(esp + 0x30) = esp; /* 0x005D8DF8: mov dword ptr [esp + 0x30], esp */
    PUSH32(esp, 0x007E13C8u); /* 0x005D8DFC: push 0x7e13c8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005D8E01: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x78) = (uint8_t)(7); /* 0x005D8E06: mov byte ptr [esp + 0x78], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005D8E0B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005D8E0E: mov ecx, esp */
    MEM32(esp + 0x44) = esp; /* 0x005D8E10: mov dword ptr [esp + 0x44], esp */
    PUSH32(esp, 0x007E13F0u); /* 0x005D8E14: push 0x7e13f0 */
    RECOMP_CALL(sub_00409FA0); /* 0x005D8E19: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(8); /* 0x005D8E1E: mov byte ptr [esp + 0x90], 8 */
    MEM8(esp + 0x90) = (uint8_t)(2); /* 0x005D8E26: mov byte ptr [esp + 0x90], 2 */
    ecx = 0x58u; /* 0x005D8E2E: mov ecx, 0x58 */
    RECOMP_CALL(sub_00668DA0); /* 0x005D8E33: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005D8E38: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005D8E3B:
    ecx = 0x10u; /* 0x005D8E3B: mov ecx, 0x10 */
    RECOMP_CALL(sub_0046D3D0); /* 0x005D8E40: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x005D8E45: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005D8E46: inc eax */
    _flag_k = FK_INC;
    MEM32(esp + 0x1C) = esi; /* 0x005D8E47: mov dword ptr [esp + 0x1c], esi */
    PUSH32(esp, eax); /* 0x005D8E4B: push eax */
    eax = esp + 0x20; /* 0x005D8E4C: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D8E50: push eax */
    ecx = esp + 0x40; /* 0x005D8E51: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8E55: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x005D8E5A: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005D8E5D: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(edi); /* 0x005D8E5F: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005D8E61: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005D8E63: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM8(esp + 0x13) = (uint8_t)(LO8(ebx)); /* 0x005D8E66: mov byte ptr [esp + 0x13], bl */
    /* test LO8(eax), LO8(eax) */ /* 0x005D8E6A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9E5D; /* 0x005D8E6C: je 0x5d9e5d */
L_005D8E72:
    edx = MEM32(esp + 0x40); /* 0x005D8E72: mov edx, dword ptr [esp + 0x40] */
L_005D8E76:
    esi = (uint32_t)LO8(ebx); /* 0x005D8E76: movzx esi, bl */
    /* cmp esi, eax */ /* 0x005D8E79: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005D8E81; /* 0x005D8E7B: jb 0x5d8e81 */
L_005D8E7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005D8E7D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005D8E84; /* 0x005D8E7F: jmp 0x5d8e84 */
L_005D8E81:
    edi = MEM32(ecx + esi * 4); /* 0x005D8E81: mov edi, dword ptr [ecx + esi*4] */
L_005D8E84:
    edi = MEM32(edi + 0xCAB0); /* 0x005D8E84: mov edi, dword ptr [edi + 0xcab0] */
    eax = MEM32(edi + 0x6B70); /* 0x005D8E8A: mov eax, dword ptr [edi + 0x6b70] */
    MEM32(esp + 0x2C) = eax; /* 0x005D8E90: mov dword ptr [esp + 0x2c], eax */
    eax = MEM32(edi + 0x6B74); /* 0x005D8E94: mov eax, dword ptr [edi + 0x6b74] */
    MEM32(esp + 0x30) = eax; /* 0x005D8E9A: mov dword ptr [esp + 0x30], eax */
    /* test LO8(edx), 7 */ /* 0x005D8E9E: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8F1D; /* 0x005D8EA1: jne 0x5d8f1d */
L_005D8EA3:
    ebx = MEM32(esp + 0x3C); /* 0x005D8EA3: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x40; /* 0x005D8EA7: lea esi, [edx + 0x40] */
    /* test esi, esi */ /* 0x005D8EAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8EF3; /* 0x005D8EAC: je 0x5d8ef3 */
L_005D8EAE:
    ecx = esi + (-0x1); /* 0x005D8EAE: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D8EB1: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D8EB4: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D8EB7: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D8EBA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D8EF3; /* 0x005D8EBC: jae 0x5d8ef3 */
L_005D8EBE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D8EBE: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D8EC0: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D8EC2: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x40u; /* 0x005D8EC4: sub eax, 0x40 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D8EC7: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D8ED4; /* 0x005D8ECC: jbe 0x5d8ed4 */
L_005D8ECE:
    esi = edx + 0x100040; /* 0x005D8ECE: lea esi, [edx + 0x100040] */
L_005D8ED4:
    eax = esi + 0x7; /* 0x005D8ED4: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8ED7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8ED7: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D8EDA: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D8EF3; /* 0x005D8EDF: jbe 0x5d8ef3 */
L_005D8EE1:
    PUSH32(esp, eax); /* 0x005D8EE1: push eax */
    ecx = esp + 0x4C; /* 0x005D8EE2: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D8EE6: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D8EEB: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D8EEF: mov ebx, dword ptr [esp + 0x3c] */
L_005D8EF3:
    _xmm[0].u64[0] = MEM64(esp + 0x2C); _xmm[0].u64[1] = 0; /* 0x005D8EF3: movq xmm0, qword ptr [esp + 0x2c] */
    eax = edx + 0x7; /* 0x005D8EF9: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D8EFC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D8EFE: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8F01: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8F01: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D8F04: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D8F08: mov dword ptr [esp + 0x3c], ebx */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D8F0C: movq qword ptr [eax], xmm0 */
    edx = MEM32(esp + 0x40); /* 0x005D8F10: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x40u; /* 0x005D8F14: add edx, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D8F17: mov dword ptr [esp + 0x40], edx */
    goto L_005D8F32; /* 0x005D8F1B: jmp 0x5d8f32 */
L_005D8F1D:
    PUSH32(esp, ecx); /* 0x005D8F1D: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D8F1E: push 0x40 */
    eax = esp + 0x34; /* 0x005D8F20: lea eax, [esp + 0x34] */
    PUSH32(esp, eax); /* 0x005D8F24: push eax */
    ecx = esp + 0x40; /* 0x005D8F25: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8F29: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D8F2E: mov edx, dword ptr [esp + 0x40] */
L_005D8F32:
    _xmm[0].u64[0] = MEM32(edi + 0x7CA8); _xmm[0].u64[1] = 0; /* 0x005D8F32: movss xmm0, dword ptr [edi + 0x7ca8] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D8F3A: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D8F40: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D8FBB; /* 0x005D8F43: jne 0x5d8fbb */
L_005D8F45:
    ebx = MEM32(esp + 0x3C); /* 0x005D8F45: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D8F49: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D8F4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D8F95; /* 0x005D8F4E: je 0x5d8f95 */
L_005D8F50:
    ecx = esi + (-0x1); /* 0x005D8F50: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D8F53: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D8F56: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D8F59: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D8F5C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D8F95; /* 0x005D8F5E: jae 0x5d8f95 */
L_005D8F60:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D8F60: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D8F62: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D8F64: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D8F66: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D8F69: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D8F76; /* 0x005D8F6E: jbe 0x5d8f76 */
L_005D8F70:
    esi = edx + 0x100020; /* 0x005D8F70: lea esi, [edx + 0x100020] */
L_005D8F76:
    eax = esi + 0x7; /* 0x005D8F76: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D8F79: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D8F79: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D8F7C: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D8F95; /* 0x005D8F81: jbe 0x5d8f95 */
L_005D8F83:
    PUSH32(esp, eax); /* 0x005D8F83: push eax */
    ecx = esp + 0x4C; /* 0x005D8F84: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D8F88: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D8F8D: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D8F91: mov ebx, dword ptr [esp + 0x3c] */
L_005D8F95:
    eax = MEM32(esp + 0x14); /* 0x005D8F95: mov eax, dword ptr [esp + 0x14] */
    ecx = edx + 0x7; /* 0x005D8F99: lea ecx, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D8F9C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D8F9E: cmova ebx, esi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D8FA1: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D8FA1: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D8FA4: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D8FA8: mov dword ptr [esp + 0x3c], ebx */
    MEM32(ecx) = eax; /* 0x005D8FAC: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D8FAE: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D8FB2: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D8FB5: mov dword ptr [esp + 0x40], edx */
    goto L_005D8FD0; /* 0x005D8FB9: jmp 0x5d8fd0 */
L_005D8FBB:
    PUSH32(esp, ecx); /* 0x005D8FBB: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D8FBC: push 0x20 */
    eax = esp + 0x1C; /* 0x005D8FBE: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D8FC2: push eax */
    ecx = esp + 0x40; /* 0x005D8FC3: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D8FC7: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D8FCC: mov edx, dword ptr [esp + 0x40] */
L_005D8FD0:
    _xmm[0].u64[0] = MEM32(edi + 0x7CAC); _xmm[0].u64[1] = 0; /* 0x005D8FD0: movss xmm0, dword ptr [edi + 0x7cac] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D8FD8: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D8FDE: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9059; /* 0x005D8FE1: jne 0x5d9059 */
L_005D8FE3:
    ebx = MEM32(esp + 0x3C); /* 0x005D8FE3: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D8FE7: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D8FEA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9033; /* 0x005D8FEC: je 0x5d9033 */
L_005D8FEE:
    ecx = esi + (-0x1); /* 0x005D8FEE: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D8FF1: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D8FF4: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D8FF7: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D8FFA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D9033; /* 0x005D8FFC: jae 0x5d9033 */
L_005D8FFE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D8FFE: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D9000: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D9002: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D9004: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D9007: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9014; /* 0x005D900C: jbe 0x5d9014 */
L_005D900E:
    esi = edx + 0x100020; /* 0x005D900E: lea esi, [edx + 0x100020] */
L_005D9014:
    eax = esi + 0x7; /* 0x005D9014: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9017: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9017: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D901A: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9033; /* 0x005D901F: jbe 0x5d9033 */
L_005D9021:
    PUSH32(esp, eax); /* 0x005D9021: push eax */
    ecx = esp + 0x4C; /* 0x005D9022: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D9026: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D902B: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D902F: mov ebx, dword ptr [esp + 0x3c] */
L_005D9033:
    eax = MEM32(esp + 0x14); /* 0x005D9033: mov eax, dword ptr [esp + 0x14] */
    ecx = edx + 0x7; /* 0x005D9037: lea ecx, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D903A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D903C: cmova ebx, esi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D903F: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D903F: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9042: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D9046: mov dword ptr [esp + 0x3c], ebx */
    MEM32(ecx) = eax; /* 0x005D904A: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D904C: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D9050: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D9053: mov dword ptr [esp + 0x40], edx */
    goto L_005D906E; /* 0x005D9057: jmp 0x5d906e */
L_005D9059:
    PUSH32(esp, ecx); /* 0x005D9059: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D905A: push 0x20 */
    eax = esp + 0x1C; /* 0x005D905C: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9060: push eax */
    ecx = esp + 0x40; /* 0x005D9061: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9065: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D906A: mov edx, dword ptr [esp + 0x40] */
L_005D906E:
    _xmm[0].u64[0] = MEM32(edi + 0x7CB0); _xmm[0].u64[1] = 0; /* 0x005D906E: movss xmm0, dword ptr [edi + 0x7cb0] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9076: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D907C: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D90F7; /* 0x005D907F: jne 0x5d90f7 */
L_005D9081:
    ebx = MEM32(esp + 0x3C); /* 0x005D9081: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D9085: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D9088: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D90D1; /* 0x005D908A: je 0x5d90d1 */
L_005D908C:
    ecx = esi + (-0x1); /* 0x005D908C: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D908F: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D9092: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D9095: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D9098: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D90D1; /* 0x005D909A: jae 0x5d90d1 */
L_005D909C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D909C: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D909E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D90A0: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D90A2: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D90A5: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D90B2; /* 0x005D90AA: jbe 0x5d90b2 */
L_005D90AC:
    esi = edx + 0x100020; /* 0x005D90AC: lea esi, [edx + 0x100020] */
L_005D90B2:
    eax = esi + 0x7; /* 0x005D90B2: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D90B5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D90B5: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D90B8: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D90D1; /* 0x005D90BD: jbe 0x5d90d1 */
L_005D90BF:
    PUSH32(esp, eax); /* 0x005D90BF: push eax */
    ecx = esp + 0x4C; /* 0x005D90C0: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D90C4: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D90C9: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D90CD: mov ebx, dword ptr [esp + 0x3c] */
L_005D90D1:
    eax = MEM32(esp + 0x14); /* 0x005D90D1: mov eax, dword ptr [esp + 0x14] */
    ecx = edx + 0x7; /* 0x005D90D5: lea ecx, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D90D8: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D90DA: cmova ebx, esi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D90DD: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D90DD: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D90E0: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D90E4: mov dword ptr [esp + 0x3c], ebx */
    MEM32(ecx) = eax; /* 0x005D90E8: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D90EA: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D90EE: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D90F1: mov dword ptr [esp + 0x40], edx */
    goto L_005D910C; /* 0x005D90F5: jmp 0x5d910c */
L_005D90F7:
    PUSH32(esp, ecx); /* 0x005D90F7: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D90F8: push 0x20 */
    eax = esp + 0x1C; /* 0x005D90FA: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D90FE: push eax */
    ecx = esp + 0x40; /* 0x005D90FF: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9103: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9108: mov edx, dword ptr [esp + 0x40] */
L_005D910C:
    _xmm[0].u64[0] = MEM32(edi + 0x7CB4); _xmm[0].u64[1] = 0; /* 0x005D910C: movss xmm0, dword ptr [edi + 0x7cb4] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9114: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D911A: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9195; /* 0x005D911D: jne 0x5d9195 */
L_005D911F:
    ebx = MEM32(esp + 0x3C); /* 0x005D911F: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D9123: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D9126: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D916F; /* 0x005D9128: je 0x5d916f */
L_005D912A:
    ecx = esi + (-0x1); /* 0x005D912A: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D912D: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D9130: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D9133: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D9136: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D916F; /* 0x005D9138: jae 0x5d916f */
L_005D913A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D913A: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D913C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D913E: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D9140: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D9143: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9150; /* 0x005D9148: jbe 0x5d9150 */
L_005D914A:
    esi = edx + 0x100020; /* 0x005D914A: lea esi, [edx + 0x100020] */
L_005D9150:
    eax = esi + 0x7; /* 0x005D9150: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9153: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9153: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D9156: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D916F; /* 0x005D915B: jbe 0x5d916f */
L_005D915D:
    PUSH32(esp, eax); /* 0x005D915D: push eax */
    ecx = esp + 0x4C; /* 0x005D915E: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D9162: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9167: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D916B: mov ebx, dword ptr [esp + 0x3c] */
L_005D916F:
    eax = MEM32(esp + 0x14); /* 0x005D916F: mov eax, dword ptr [esp + 0x14] */
    ecx = edx + 0x7; /* 0x005D9173: lea ecx, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D9176: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D9178: cmova ebx, esi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D917B: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D917B: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D917E: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D9182: mov dword ptr [esp + 0x3c], ebx */
    MEM32(ecx) = eax; /* 0x005D9186: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D9188: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D918C: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D918F: mov dword ptr [esp + 0x40], edx */
    goto L_005D91AA; /* 0x005D9193: jmp 0x5d91aa */
L_005D9195:
    PUSH32(esp, ecx); /* 0x005D9195: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9196: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9198: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D919C: push eax */
    ecx = esp + 0x40; /* 0x005D919D: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D91A1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D91A6: mov edx, dword ptr [esp + 0x40] */
L_005D91AA:
    eax = MEM32(edi + 0x7CB8); /* 0x005D91AA: mov eax, dword ptr [edi + 0x7cb8] */
    MEM32(esp + 0x18) = eax; /* 0x005D91B0: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = eax; /* 0x005D91B4: mov dword ptr [esp + 0x14], eax */
    /* test LO8(edx), 7 */ /* 0x005D91B8: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9233; /* 0x005D91BB: jne 0x5d9233 */
L_005D91BD:
    ebx = MEM32(esp + 0x3C); /* 0x005D91BD: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D91C1: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D91C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D920D; /* 0x005D91C6: je 0x5d920d */
L_005D91C8:
    ecx = esi + (-0x1); /* 0x005D91C8: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D91CB: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D91CE: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D91D1: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D91D4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D920D; /* 0x005D91D6: jae 0x5d920d */
L_005D91D8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D91D8: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D91DA: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D91DC: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D91DE: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D91E1: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D91EE; /* 0x005D91E6: jbe 0x5d91ee */
L_005D91E8:
    esi = edx + 0x100020; /* 0x005D91E8: lea esi, [edx + 0x100020] */
L_005D91EE:
    eax = esi + 0x7; /* 0x005D91EE: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D91F1: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D91F1: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D91F4: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D920D; /* 0x005D91F9: jbe 0x5d920d */
L_005D91FB:
    PUSH32(esp, eax); /* 0x005D91FB: push eax */
    ecx = esp + 0x4C; /* 0x005D91FC: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D9200: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9205: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D9209: mov ebx, dword ptr [esp + 0x3c] */
L_005D920D:
    ecx = MEM32(esp + 0x18); /* 0x005D920D: mov ecx, dword ptr [esp + 0x18] */
    eax = edx + 0x7; /* 0x005D9211: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D9214: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D9216: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9219: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9219: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D921C: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D9220: mov dword ptr [esp + 0x3c], ebx */
    MEM32(eax) = ecx; /* 0x005D9224: mov dword ptr [eax], ecx */
    edx = MEM32(esp + 0x40); /* 0x005D9226: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D922A: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D922D: mov dword ptr [esp + 0x40], edx */
    goto L_005D9248; /* 0x005D9231: jmp 0x5d9248 */
L_005D9233:
    PUSH32(esp, ecx); /* 0x005D9233: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9234: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9236: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D923A: push eax */
    ecx = esp + 0x40; /* 0x005D923B: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D923F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9244: mov edx, dword ptr [esp + 0x40] */
L_005D9248:
    _xmm[0].u64[0] = MEM32(edi + 0x7CBC); _xmm[0].u64[1] = 0; /* 0x005D9248: movss xmm0, dword ptr [edi + 0x7cbc] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9250: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D9256: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D92D1; /* 0x005D9259: jne 0x5d92d1 */
L_005D925B:
    ebx = MEM32(esp + 0x3C); /* 0x005D925B: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D925F: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D9262: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D92AB; /* 0x005D9264: je 0x5d92ab */
L_005D9266:
    ecx = esi + (-0x1); /* 0x005D9266: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D9269: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D926C: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D926F: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D9272: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D92AB; /* 0x005D9274: jae 0x5d92ab */
L_005D9276:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D9276: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D9278: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D927A: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D927C: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D927F: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D928C; /* 0x005D9284: jbe 0x5d928c */
L_005D9286:
    esi = edx + 0x100020; /* 0x005D9286: lea esi, [edx + 0x100020] */
L_005D928C:
    eax = esi + 0x7; /* 0x005D928C: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D928F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D928F: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D9292: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D92AB; /* 0x005D9297: jbe 0x5d92ab */
L_005D9299:
    PUSH32(esp, eax); /* 0x005D9299: push eax */
    ecx = esp + 0x4C; /* 0x005D929A: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D929E: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D92A3: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D92A7: mov ebx, dword ptr [esp + 0x3c] */
L_005D92AB:
    eax = MEM32(esp + 0x14); /* 0x005D92AB: mov eax, dword ptr [esp + 0x14] */
    ecx = edx + 0x7; /* 0x005D92AF: lea ecx, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D92B2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D92B4: cmova ebx, esi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D92B7: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D92B7: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D92BA: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D92BE: mov dword ptr [esp + 0x3c], ebx */
    MEM32(ecx) = eax; /* 0x005D92C2: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D92C4: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D92C8: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D92CB: mov dword ptr [esp + 0x40], edx */
    goto L_005D92E6; /* 0x005D92CF: jmp 0x5d92e6 */
L_005D92D1:
    PUSH32(esp, ecx); /* 0x005D92D1: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D92D2: push 0x20 */
    eax = esp + 0x1C; /* 0x005D92D4: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D92D8: push eax */
    ecx = esp + 0x40; /* 0x005D92D9: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D92DD: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D92E2: mov edx, dword ptr [esp + 0x40] */
L_005D92E6:
    { extern void crashday_lan_stats_observe(unsigned, uint32_t, uint32_t);
      crashday_lan_stats_observe(0, edi, 0); }
    eax = MEM32(edi + 0x7CC0); /* 0x005D92E6: mov eax, dword ptr [edi + 0x7cc0] */
    MEM32(esp + 0x18) = eax; /* 0x005D92EC: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = eax; /* 0x005D92F0: mov dword ptr [esp + 0x14], eax */
    /* test LO8(edx), 7 */ /* 0x005D92F4: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D936F; /* 0x005D92F7: jne 0x5d936f */
L_005D92F9:
    ebx = MEM32(esp + 0x3C); /* 0x005D92F9: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D92FD: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D9300: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9349; /* 0x005D9302: je 0x5d9349 */
L_005D9304:
    ecx = esi + (-0x1); /* 0x005D9304: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D9307: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D930A: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D930D: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D9310: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D9349; /* 0x005D9312: jae 0x5d9349 */
L_005D9314:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D9314: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D9316: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D9318: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D931A: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D931D: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D932A; /* 0x005D9322: jbe 0x5d932a */
L_005D9324:
    esi = edx + 0x100020; /* 0x005D9324: lea esi, [edx + 0x100020] */
L_005D932A:
    eax = esi + 0x7; /* 0x005D932A: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D932D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D932D: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D9330: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9349; /* 0x005D9335: jbe 0x5d9349 */
L_005D9337:
    PUSH32(esp, eax); /* 0x005D9337: push eax */
    ecx = esp + 0x4C; /* 0x005D9338: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D933C: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9341: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D9345: mov ebx, dword ptr [esp + 0x3c] */
L_005D9349:
    ecx = MEM32(esp + 0x18); /* 0x005D9349: mov ecx, dword ptr [esp + 0x18] */
    eax = edx + 0x7; /* 0x005D934D: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D9350: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D9352: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9355: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9355: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9358: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D935C: mov dword ptr [esp + 0x3c], ebx */
    MEM32(eax) = ecx; /* 0x005D9360: mov dword ptr [eax], ecx */
    edx = MEM32(esp + 0x40); /* 0x005D9362: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D9366: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D9369: mov dword ptr [esp + 0x40], edx */
    goto L_005D9384; /* 0x005D936D: jmp 0x5d9384 */
L_005D936F:
    PUSH32(esp, ecx); /* 0x005D936F: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9370: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9372: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9376: push eax */
    ecx = esp + 0x40; /* 0x005D9377: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D937B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9380: mov edx, dword ptr [esp + 0x40] */
L_005D9384:
    eax = MEM32(edi + 0x7CC8); /* 0x005D9384: mov eax, dword ptr [edi + 0x7cc8] */
    MEM32(esp + 0x18) = eax; /* 0x005D938A: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = eax; /* 0x005D938E: mov dword ptr [esp + 0x14], eax */
    /* test LO8(edx), 7 */ /* 0x005D9392: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D940D; /* 0x005D9395: jne 0x5d940d */
L_005D9397:
    ebx = MEM32(esp + 0x3C); /* 0x005D9397: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D939B: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D939E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D93E7; /* 0x005D93A0: je 0x5d93e7 */
L_005D93A2:
    ecx = esi + (-0x1); /* 0x005D93A2: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D93A5: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D93A8: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D93AB: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D93AE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D93E7; /* 0x005D93B0: jae 0x5d93e7 */
L_005D93B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D93B2: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D93B4: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D93B6: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D93B8: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D93BB: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D93C8; /* 0x005D93C0: jbe 0x5d93c8 */
L_005D93C2:
    esi = edx + 0x100020; /* 0x005D93C2: lea esi, [edx + 0x100020] */
L_005D93C8:
    eax = esi + 0x7; /* 0x005D93C8: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D93CB: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D93CB: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D93CE: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D93E7; /* 0x005D93D3: jbe 0x5d93e7 */
L_005D93D5:
    PUSH32(esp, eax); /* 0x005D93D5: push eax */
    ecx = esp + 0x4C; /* 0x005D93D6: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D93DA: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D93DF: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D93E3: mov ebx, dword ptr [esp + 0x3c] */
L_005D93E7:
    ecx = MEM32(esp + 0x18); /* 0x005D93E7: mov ecx, dword ptr [esp + 0x18] */
    eax = edx + 0x7; /* 0x005D93EB: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D93EE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D93F0: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D93F3: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D93F3: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D93F6: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D93FA: mov dword ptr [esp + 0x3c], ebx */
    MEM32(eax) = ecx; /* 0x005D93FE: mov dword ptr [eax], ecx */
    edx = MEM32(esp + 0x40); /* 0x005D9400: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D9404: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D9407: mov dword ptr [esp + 0x40], edx */
    goto L_005D9422; /* 0x005D940B: jmp 0x5d9422 */
L_005D940D:
    PUSH32(esp, ecx); /* 0x005D940D: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D940E: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9410: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9414: push eax */
    ecx = esp + 0x40; /* 0x005D9415: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9419: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D941E: mov edx, dword ptr [esp + 0x40] */
L_005D9422:
    eax = MEM32(edi + 0x7CCC); /* 0x005D9422: mov eax, dword ptr [edi + 0x7ccc] */
    MEM32(esp + 0x18) = eax; /* 0x005D9428: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = eax; /* 0x005D942C: mov dword ptr [esp + 0x14], eax */
    /* test LO8(edx), 7 */ /* 0x005D9430: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D94AB; /* 0x005D9433: jne 0x5d94ab */
L_005D9435:
    ebx = MEM32(esp + 0x3C); /* 0x005D9435: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D9439: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D943C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9485; /* 0x005D943E: je 0x5d9485 */
L_005D9440:
    ecx = esi + (-0x1); /* 0x005D9440: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D9443: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D9446: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D9449: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D944C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D9485; /* 0x005D944E: jae 0x5d9485 */
L_005D9450:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D9450: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D9452: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D9454: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D9456: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D9459: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9466; /* 0x005D945E: jbe 0x5d9466 */
L_005D9460:
    esi = edx + 0x100020; /* 0x005D9460: lea esi, [edx + 0x100020] */
L_005D9466:
    eax = esi + 0x7; /* 0x005D9466: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9469: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9469: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D946C: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9485; /* 0x005D9471: jbe 0x5d9485 */
L_005D9473:
    PUSH32(esp, eax); /* 0x005D9473: push eax */
    ecx = esp + 0x4C; /* 0x005D9474: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D9478: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D947D: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D9481: mov ebx, dword ptr [esp + 0x3c] */
L_005D9485:
    ecx = MEM32(esp + 0x18); /* 0x005D9485: mov ecx, dword ptr [esp + 0x18] */
    eax = edx + 0x7; /* 0x005D9489: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D948C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D948E: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9491: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9491: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9494: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D9498: mov dword ptr [esp + 0x3c], ebx */
    MEM32(eax) = ecx; /* 0x005D949C: mov dword ptr [eax], ecx */
    edx = MEM32(esp + 0x40); /* 0x005D949E: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D94A2: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D94A5: mov dword ptr [esp + 0x40], edx */
    goto L_005D94C0; /* 0x005D94A9: jmp 0x5d94c0 */
L_005D94AB:
    PUSH32(esp, ecx); /* 0x005D94AB: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D94AC: push 0x20 */
    eax = esp + 0x1C; /* 0x005D94AE: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D94B2: push eax */
    ecx = esp + 0x40; /* 0x005D94B3: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D94B7: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D94BC: mov edx, dword ptr [esp + 0x40] */
L_005D94C0:
    eax = MEM32(edi + 0x7CD4); /* 0x005D94C0: mov eax, dword ptr [edi + 0x7cd4] */
    MEM32(esp + 0x18) = eax; /* 0x005D94C6: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = eax; /* 0x005D94CA: mov dword ptr [esp + 0x14], eax */
    /* test LO8(edx), 7 */ /* 0x005D94CE: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9549; /* 0x005D94D1: jne 0x5d9549 */
L_005D94D3:
    ebx = MEM32(esp + 0x3C); /* 0x005D94D3: mov ebx, dword ptr [esp + 0x3c] */
    esi = edx + 0x20; /* 0x005D94D7: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005D94DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9523; /* 0x005D94DC: je 0x5d9523 */
L_005D94DE:
    ecx = esi + (-0x1); /* 0x005D94DE: lea ecx, [esi - 1] */
    eax = ebx + (-0x1); /* 0x005D94E1: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005D94E4: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005D94E7: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x005D94EA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005D9523; /* 0x005D94EC: jae 0x5d9523 */
L_005D94EE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005D94EE: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005D94F0: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005D94F2: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005D94F4: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005D94F7: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9504; /* 0x005D94FC: jbe 0x5d9504 */
L_005D94FE:
    esi = edx + 0x100020; /* 0x005D94FE: lea esi, [edx + 0x100020] */
L_005D9504:
    eax = esi + 0x7; /* 0x005D9504: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9507: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9507: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005D950A: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005D9523; /* 0x005D950F: jbe 0x5d9523 */
L_005D9511:
    PUSH32(esp, eax); /* 0x005D9511: push eax */
    ecx = esp + 0x4C; /* 0x005D9512: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005D9516: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D951B: mov edx, dword ptr [esp + 0x40] */
    ebx = MEM32(esp + 0x3C); /* 0x005D951F: mov ebx, dword ptr [esp + 0x3c] */
L_005D9523:
    ecx = MEM32(esp + 0x18); /* 0x005D9523: mov ecx, dword ptr [esp + 0x18] */
    eax = edx + 0x7; /* 0x005D9527: lea eax, [edx + 7] */
    /* cmp esi, ebx */ /* 0x005D952A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005D952C: cmova ebx, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D952F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D952F: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9532: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = ebx; /* 0x005D9536: mov dword ptr [esp + 0x3c], ebx */
    MEM32(eax) = ecx; /* 0x005D953A: mov dword ptr [eax], ecx */
    edx = MEM32(esp + 0x40); /* 0x005D953C: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D9540: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D9543: mov dword ptr [esp + 0x40], edx */
    goto L_005D955E; /* 0x005D9547: jmp 0x5d955e */
L_005D9549:
    PUSH32(esp, ecx); /* 0x005D9549: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D954A: push 0x20 */
    eax = esp + 0x1C; /* 0x005D954C: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9550: push eax */
    ecx = esp + 0x40; /* 0x005D9551: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9555: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D955A: mov edx, dword ptr [esp + 0x40] */
L_005D955E:
    eax = MEM32(0x8692E8); /* 0x005D955E: mov eax, dword ptr [0x8692e8] */
    eax = MEM32(eax); /* 0x005D9563: mov eax, dword ptr [eax] */
    /* cmp eax, 6 */ /* 0x005D9565: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005D9E3D; /* 0x005D9568: ja 0x5d9e3d */
L_005D956E:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5D9EB8)); goto _ljump; }
L_005D9575:
    _xmm[0].u64[0] = MEM32(edi + 0x7EDC); _xmm[0].u64[1] = 0; /* 0x005D9575: movss xmm0, dword ptr [edi + 0x7edc] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D957D: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D9583: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D95B4; /* 0x005D9586: jne 0x5d95b4 */
L_005D9588:
    PUSH32(esp, 0x20u); /* 0x005D9588: push 0x20 */
    ecx = esp + 0x38; /* 0x005D958A: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D958E: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9593: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9597: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D959B: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D959E: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D959E: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D95A1: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D95A5: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D95A7: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D95AB: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D95AE: mov dword ptr [esp + 0x40], eax */
    goto L_005D95C9; /* 0x005D95B2: jmp 0x5d95c9 */
L_005D95B4:
    PUSH32(esp, ecx); /* 0x005D95B4: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D95B5: push 0x20 */
    eax = esp + 0x1C; /* 0x005D95B7: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D95BB: push eax */
    ecx = esp + 0x40; /* 0x005D95BC: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D95C0: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D95C5: mov eax, dword ptr [esp + 0x40] */
L_005D95C9:
    esi = MEM32(edi + 0x7EEC); /* 0x005D95C9: mov esi, dword ptr [edi + 0x7eec] */
    MEM32(esp + 0x18) = esi; /* 0x005D95CF: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D95D3: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D95FF; /* 0x005D95D5: jne 0x5d95ff */
L_005D95D7:
    PUSH32(esp, 0x20u); /* 0x005D95D7: push 0x20 */
    ecx = esp + 0x38; /* 0x005D95D9: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D95DD: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D95E2: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D95E6: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D95E9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D95E9: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D95EC: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D95F0: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D95F2: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D95F6: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D95F9: mov dword ptr [esp + 0x40], eax */
    goto L_005D9614; /* 0x005D95FD: jmp 0x5d9614 */
L_005D95FF:
    PUSH32(esp, ecx); /* 0x005D95FF: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9600: push 0x20 */
    eax = esp + 0x20; /* 0x005D9602: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9606: push eax */
    ecx = esp + 0x40; /* 0x005D9607: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D960B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9610: mov eax, dword ptr [esp + 0x40] */
L_005D9614:
    esi = MEM32(edi + 0x7EF0); /* 0x005D9614: mov esi, dword ptr [edi + 0x7ef0] */
    MEM32(esp + 0x18) = esi; /* 0x005D961A: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D961E: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D964A; /* 0x005D9620: jne 0x5d964a */
L_005D9622:
    PUSH32(esp, 0x20u); /* 0x005D9622: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9624: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9628: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D962D: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9631: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9634: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9634: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9637: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D963B: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D963D: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9641: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9644: mov dword ptr [esp + 0x40], eax */
    goto L_005D965F; /* 0x005D9648: jmp 0x5d965f */
L_005D964A:
    PUSH32(esp, ecx); /* 0x005D964A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D964B: push 0x20 */
    eax = esp + 0x20; /* 0x005D964D: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9651: push eax */
    ecx = esp + 0x40; /* 0x005D9652: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9656: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D965B: mov eax, dword ptr [esp + 0x40] */
L_005D965F:
    esi = MEM32(edi + 0x7EF4); /* 0x005D965F: mov esi, dword ptr [edi + 0x7ef4] */
    MEM32(esp + 0x18) = esi; /* 0x005D9665: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9669: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9695; /* 0x005D966B: jne 0x5d9695 */
L_005D966D:
    PUSH32(esp, 0x20u); /* 0x005D966D: push 0x20 */
    ecx = esp + 0x38; /* 0x005D966F: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9673: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9678: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D967C: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D967F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D967F: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9682: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9686: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9688: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D968C: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D968F: mov dword ptr [esp + 0x40], eax */
    goto L_005D96AA; /* 0x005D9693: jmp 0x5d96aa */
L_005D9695:
    PUSH32(esp, ecx); /* 0x005D9695: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9696: push 0x20 */
    eax = esp + 0x20; /* 0x005D9698: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D969C: push eax */
    ecx = esp + 0x40; /* 0x005D969D: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D96A1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D96A6: mov eax, dword ptr [esp + 0x40] */
L_005D96AA:
    esi = MEM32(edi + 0x7EF8); /* 0x005D96AA: mov esi, dword ptr [edi + 0x7ef8] */
    MEM32(esp + 0x18) = esi; /* 0x005D96B0: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D96B4: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D96E3; /* 0x005D96B6: jne 0x5d96e3 */
L_005D96B8:
    PUSH32(esp, 0x20u); /* 0x005D96B8: push 0x20 */
    ecx = esp + 0x38; /* 0x005D96BA: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D96BE: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D96C3: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D96C7: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D96CA: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D96CA: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D96CD: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D96D1: mov dword ptr [eax], esi */
    edx = MEM32(esp + 0x40); /* 0x005D96D3: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D96D7: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D96DA: mov dword ptr [esp + 0x40], edx */
    goto L_005D9E3D; /* 0x005D96DE: jmp 0x5d9e3d */
L_005D96E3:
    eax = esp + 0x18; /* 0x005D96E3: lea eax, [esp + 0x18] */
    goto L_005D9E2C; /* 0x005D96E7: jmp 0x5d9e2c */
L_005D96EC:
    esi = MEM32(edi + 0x7E94); /* 0x005D96EC: mov esi, dword ptr [edi + 0x7e94] */
    MEM32(esp + 0x18) = esi; /* 0x005D96F2: mov dword ptr [esp + 0x18], esi */
    /* test LO8(edx), 7 */ /* 0x005D96F6: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9723; /* 0x005D96F9: jne 0x5d9723 */
L_005D96FB:
    PUSH32(esp, 0x20u); /* 0x005D96FB: push 0x20 */
    ecx = esp + 0x38; /* 0x005D96FD: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9701: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9706: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D970A: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D970D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D970D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9710: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9714: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9716: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D971A: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D971D: mov dword ptr [esp + 0x40], eax */
    goto L_005D9738; /* 0x005D9721: jmp 0x5d9738 */
L_005D9723:
    PUSH32(esp, ecx); /* 0x005D9723: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9724: push 0x20 */
    eax = esp + 0x20; /* 0x005D9726: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D972A: push eax */
    ecx = esp + 0x40; /* 0x005D972B: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D972F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9734: mov eax, dword ptr [esp + 0x40] */
L_005D9738:
    esi = MEM32(edi + 0x7E98); /* 0x005D9738: mov esi, dword ptr [edi + 0x7e98] */
    MEM32(esp + 0x18) = esi; /* 0x005D973E: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9742: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D976E; /* 0x005D9744: jne 0x5d976e */
L_005D9746:
    PUSH32(esp, 0x20u); /* 0x005D9746: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9748: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D974C: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9751: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9755: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9758: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9758: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D975B: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D975F: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9761: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9765: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9768: mov dword ptr [esp + 0x40], eax */
    goto L_005D9783; /* 0x005D976C: jmp 0x5d9783 */
L_005D976E:
    PUSH32(esp, ecx); /* 0x005D976E: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D976F: push 0x20 */
    eax = esp + 0x20; /* 0x005D9771: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9775: push eax */
    ecx = esp + 0x40; /* 0x005D9776: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D977A: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D977F: mov eax, dword ptr [esp + 0x40] */
L_005D9783:
    _xmm[0].u64[0] = MEM32(edi + 0x7EA0); _xmm[0].u64[1] = 0; /* 0x005D9783: movss xmm0, dword ptr [edi + 0x7ea0] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D978B: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9791: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D97CC; /* 0x005D9793: jne 0x5d97cc */
L_005D9795:
    PUSH32(esp, 0x20u); /* 0x005D9795: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9797: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D979B: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D97A0: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D97A4: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D97A8: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D97AB: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D97AB: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D97AE: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D97B2: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D97B4: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D97B8: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D97BB: mov dword ptr [esp + 0x40], eax */
    _xmm[0].u64[0] = MEM32(edi + 0x7EAC); _xmm[0].u64[1] = 0; /* 0x005D97BF: movss xmm0, dword ptr [edi + 0x7eac] */
    goto L_005D9DF2; /* 0x005D97C7: jmp 0x5d9df2 */
L_005D97CC:
    PUSH32(esp, ecx); /* 0x005D97CC: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D97CD: push 0x20 */
    eax = esp + 0x1C; /* 0x005D97CF: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D97D3: push eax */
    ecx = esp + 0x40; /* 0x005D97D4: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D97D8: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D97DD: mov eax, dword ptr [esp + 0x40] */
    _xmm[0].u64[0] = MEM32(edi + 0x7EAC); _xmm[0].u64[1] = 0; /* 0x005D97E1: movss xmm0, dword ptr [edi + 0x7eac] */
    goto L_005D9DF2; /* 0x005D97E9: jmp 0x5d9df2 */
L_005D97EE:
    _xmm[0].u64[0] = MEM32(edi + 0x7F00); _xmm[0].u64[1] = 0; /* 0x005D97EE: movss xmm0, dword ptr [edi + 0x7f00] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D97F6: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D97FC: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D982D; /* 0x005D97FF: jne 0x5d982d */
L_005D9801:
    PUSH32(esp, 0x20u); /* 0x005D9801: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9803: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9807: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D980C: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9810: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9814: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9817: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9817: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D981A: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D981E: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9820: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9824: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9827: mov dword ptr [esp + 0x40], eax */
    goto L_005D9842; /* 0x005D982B: jmp 0x5d9842 */
L_005D982D:
    PUSH32(esp, ecx); /* 0x005D982D: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D982E: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9830: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9834: push eax */
    ecx = esp + 0x40; /* 0x005D9835: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9839: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D983E: mov eax, dword ptr [esp + 0x40] */
L_005D9842:
    _xmm[0].u64[0] = MEM32(edi + 0x7F04); _xmm[0].u64[1] = 0; /* 0x005D9842: movss xmm0, dword ptr [edi + 0x7f04] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D984A: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9850: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9880; /* 0x005D9852: jne 0x5d9880 */
L_005D9854:
    PUSH32(esp, 0x20u); /* 0x005D9854: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9856: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D985A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D985F: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9863: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9867: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D986A: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D986A: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D986D: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9871: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9873: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9877: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D987A: mov dword ptr [esp + 0x40], eax */
    goto L_005D9895; /* 0x005D987E: jmp 0x5d9895 */
L_005D9880:
    PUSH32(esp, ecx); /* 0x005D9880: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9881: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9883: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9887: push eax */
    ecx = esp + 0x40; /* 0x005D9888: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D988C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9891: mov eax, dword ptr [esp + 0x40] */
L_005D9895:
    esi = MEM32(edi + 0x7F0C); /* 0x005D9895: mov esi, dword ptr [edi + 0x7f0c] */
    MEM32(esp + 0x18) = esi; /* 0x005D989B: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D989F: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D98CB; /* 0x005D98A1: jne 0x5d98cb */
L_005D98A3:
    PUSH32(esp, 0x20u); /* 0x005D98A3: push 0x20 */
    ecx = esp + 0x38; /* 0x005D98A5: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D98A9: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D98AE: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D98B2: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D98B5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D98B5: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D98B8: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D98BC: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D98BE: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D98C2: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D98C5: mov dword ptr [esp + 0x40], eax */
    goto L_005D98E0; /* 0x005D98C9: jmp 0x5d98e0 */
L_005D98CB:
    PUSH32(esp, ecx); /* 0x005D98CB: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D98CC: push 0x20 */
    eax = esp + 0x20; /* 0x005D98CE: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D98D2: push eax */
    ecx = esp + 0x40; /* 0x005D98D3: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D98D7: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D98DC: mov eax, dword ptr [esp + 0x40] */
L_005D98E0:
    esi = MEM32(edi + 0x7F10); /* 0x005D98E0: mov esi, dword ptr [edi + 0x7f10] */
    MEM32(esp + 0x18) = esi; /* 0x005D98E6: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D98EA: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9916; /* 0x005D98EC: jne 0x5d9916 */
L_005D98EE:
    PUSH32(esp, 0x20u); /* 0x005D98EE: push 0x20 */
    ecx = esp + 0x38; /* 0x005D98F0: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D98F4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D98F9: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D98FD: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9900: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9900: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9903: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9907: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9909: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D990D: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9910: mov dword ptr [esp + 0x40], eax */
    goto L_005D992B; /* 0x005D9914: jmp 0x5d992b */
L_005D9916:
    PUSH32(esp, ecx); /* 0x005D9916: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9917: push 0x20 */
    eax = esp + 0x20; /* 0x005D9919: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D991D: push eax */
    ecx = esp + 0x40; /* 0x005D991E: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9922: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9927: mov eax, dword ptr [esp + 0x40] */
L_005D992B:
    esi = MEM32(edi + 0x7F14); /* 0x005D992B: mov esi, dword ptr [edi + 0x7f14] */
    MEM32(esp + 0x18) = esi; /* 0x005D9931: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9935: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9961; /* 0x005D9937: jne 0x5d9961 */
L_005D9939:
    PUSH32(esp, 0x20u); /* 0x005D9939: push 0x20 */
    ecx = esp + 0x38; /* 0x005D993B: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D993F: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9944: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9948: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D994B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D994B: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D994E: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9952: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9954: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9958: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D995B: mov dword ptr [esp + 0x40], eax */
    goto L_005D9976; /* 0x005D995F: jmp 0x5d9976 */
L_005D9961:
    PUSH32(esp, ecx); /* 0x005D9961: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9962: push 0x20 */
    eax = esp + 0x20; /* 0x005D9964: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9968: push eax */
    ecx = esp + 0x40; /* 0x005D9969: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D996D: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9972: mov eax, dword ptr [esp + 0x40] */
L_005D9976:
    esi = MEM32(edi + 0x7F18); /* 0x005D9976: mov esi, dword ptr [edi + 0x7f18] */
    MEM32(esp + 0x18) = esi; /* 0x005D997C: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9980: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D99B7; /* 0x005D9982: jne 0x5d99b7 */
L_005D9984:
    PUSH32(esp, 0x20u); /* 0x005D9984: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9986: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D998A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D998F: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9993: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9996: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9996: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9999: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D999D: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D999F: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D99A3: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D99A6: mov dword ptr [esp + 0x40], eax */
    _xmm[0].u64[0] = MEM32(edi + 0x7F1C); _xmm[0].u64[1] = 0; /* 0x005D99AA: movss xmm0, dword ptr [edi + 0x7f1c] */
    goto L_005D9DF2; /* 0x005D99B2: jmp 0x5d9df2 */
L_005D99B7:
    PUSH32(esp, ecx); /* 0x005D99B7: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D99B8: push 0x20 */
    eax = esp + 0x20; /* 0x005D99BA: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D99BE: push eax */
    ecx = esp + 0x40; /* 0x005D99BF: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D99C3: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D99C8: mov eax, dword ptr [esp + 0x40] */
    _xmm[0].u64[0] = MEM32(edi + 0x7F1C); _xmm[0].u64[1] = 0; /* 0x005D99CC: movss xmm0, dword ptr [edi + 0x7f1c] */
    goto L_005D9DF2; /* 0x005D99D4: jmp 0x5d9df2 */
L_005D99D9:
    esi = MEM32(edi + 0x7EC4); /* 0x005D99D9: mov esi, dword ptr [edi + 0x7ec4] */
    MEM32(esp + 0x18) = esi; /* 0x005D99DF: mov dword ptr [esp + 0x18], esi */
    /* test LO8(edx), 7 */ /* 0x005D99E3: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9A10; /* 0x005D99E6: jne 0x5d9a10 */
L_005D99E8:
    PUSH32(esp, 0x20u); /* 0x005D99E8: push 0x20 */
    ecx = esp + 0x38; /* 0x005D99EA: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D99EE: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D99F3: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D99F7: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D99FA: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D99FA: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D99FD: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9A01: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9A03: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9A07: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9A0A: mov dword ptr [esp + 0x40], eax */
    goto L_005D9A25; /* 0x005D9A0E: jmp 0x5d9a25 */
L_005D9A10:
    PUSH32(esp, ecx); /* 0x005D9A10: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9A11: push 0x20 */
    eax = esp + 0x20; /* 0x005D9A13: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9A17: push eax */
    ecx = esp + 0x40; /* 0x005D9A18: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9A1C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9A21: mov eax, dword ptr [esp + 0x40] */
L_005D9A25:
    _xmm[0].u64[0] = MEM32(edi + 0x7EC8); _xmm[0].u64[1] = 0; /* 0x005D9A25: movss xmm0, dword ptr [edi + 0x7ec8] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9A2D: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9A33: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9A63; /* 0x005D9A35: jne 0x5d9a63 */
L_005D9A37:
    PUSH32(esp, 0x20u); /* 0x005D9A37: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9A39: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9A3D: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9A42: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9A46: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9A4A: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9A4D: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9A4D: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9A50: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9A54: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9A56: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9A5A: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9A5D: mov dword ptr [esp + 0x40], eax */
    goto L_005D9A78; /* 0x005D9A61: jmp 0x5d9a78 */
L_005D9A63:
    PUSH32(esp, ecx); /* 0x005D9A63: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9A64: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9A66: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9A6A: push eax */
    ecx = esp + 0x40; /* 0x005D9A6B: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9A6F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9A74: mov eax, dword ptr [esp + 0x40] */
L_005D9A78:
    _xmm[0].u64[0] = MEM32(edi + 0x7ECC); _xmm[0].u64[1] = 0; /* 0x005D9A78: movss xmm0, dword ptr [edi + 0x7ecc] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9A80: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9A86: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9AC1; /* 0x005D9A88: jne 0x5d9ac1 */
L_005D9A8A:
    PUSH32(esp, 0x20u); /* 0x005D9A8A: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9A8C: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9A90: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9A95: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9A99: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9A9D: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9AA0: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9AA0: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9AA3: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9AA7: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9AA9: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9AAD: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9AB0: mov dword ptr [esp + 0x40], eax */
    _xmm[0].u64[0] = MEM32(edi + 0x7ED0); _xmm[0].u64[1] = 0; /* 0x005D9AB4: movss xmm0, dword ptr [edi + 0x7ed0] */
    goto L_005D9DF2; /* 0x005D9ABC: jmp 0x5d9df2 */
L_005D9AC1:
    PUSH32(esp, ecx); /* 0x005D9AC1: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9AC2: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9AC4: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9AC8: push eax */
    ecx = esp + 0x40; /* 0x005D9AC9: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9ACD: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9AD2: mov eax, dword ptr [esp + 0x40] */
    _xmm[0].u64[0] = MEM32(edi + 0x7ED0); _xmm[0].u64[1] = 0; /* 0x005D9AD6: movss xmm0, dword ptr [edi + 0x7ed0] */
    goto L_005D9DF2; /* 0x005D9ADE: jmp 0x5d9df2 */
L_005D9AE3:
    _xmm[0].u64[0] = MEM32(edi + 0x7DB4); _xmm[0].u64[1] = 0; /* 0x005D9AE3: movss xmm0, dword ptr [edi + 0x7db4] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9AEB: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(edx), 7 */ /* 0x005D9AF1: test dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9B22; /* 0x005D9AF4: jne 0x5d9b22 */
L_005D9AF6:
    PUSH32(esp, 0x20u); /* 0x005D9AF6: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9AF8: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9AFC: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9B01: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9B05: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9B09: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9B0C: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9B0C: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9B0F: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9B13: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9B15: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9B19: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9B1C: mov dword ptr [esp + 0x40], eax */
    goto L_005D9B37; /* 0x005D9B20: jmp 0x5d9b37 */
L_005D9B22:
    PUSH32(esp, ecx); /* 0x005D9B22: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9B23: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9B25: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9B29: push eax */
    ecx = esp + 0x40; /* 0x005D9B2A: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9B2E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9B33: mov eax, dword ptr [esp + 0x40] */
L_005D9B37:
    esi = MEM32(edi + 0x7DB8); /* 0x005D9B37: mov esi, dword ptr [edi + 0x7db8] */
    MEM32(esp + 0x18) = esi; /* 0x005D9B3D: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9B41: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9B6D; /* 0x005D9B43: jne 0x5d9b6d */
L_005D9B45:
    PUSH32(esp, 0x20u); /* 0x005D9B45: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9B47: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9B4B: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9B50: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9B54: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9B57: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9B57: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9B5A: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9B5E: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9B60: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9B64: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9B67: mov dword ptr [esp + 0x40], eax */
    goto L_005D9B82; /* 0x005D9B6B: jmp 0x5d9b82 */
L_005D9B6D:
    PUSH32(esp, ecx); /* 0x005D9B6D: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9B6E: push 0x20 */
    eax = esp + 0x20; /* 0x005D9B70: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9B74: push eax */
    ecx = esp + 0x40; /* 0x005D9B75: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9B79: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9B7E: mov eax, dword ptr [esp + 0x40] */
L_005D9B82:
    esi = MEM32(edi + 0x7DBC); /* 0x005D9B82: mov esi, dword ptr [edi + 0x7dbc] */
    MEM32(esp + 0x18) = esi; /* 0x005D9B88: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9B8C: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9BB8; /* 0x005D9B8E: jne 0x5d9bb8 */
L_005D9B90:
    PUSH32(esp, 0x20u); /* 0x005D9B90: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9B92: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9B96: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9B9B: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9B9F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9BA2: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9BA2: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9BA5: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9BA9: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9BAB: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9BAF: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9BB2: mov dword ptr [esp + 0x40], eax */
    goto L_005D9BCD; /* 0x005D9BB6: jmp 0x5d9bcd */
L_005D9BB8:
    PUSH32(esp, ecx); /* 0x005D9BB8: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9BB9: push 0x20 */
    eax = esp + 0x20; /* 0x005D9BBB: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9BBF: push eax */
    ecx = esp + 0x40; /* 0x005D9BC0: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9BC4: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9BC9: mov eax, dword ptr [esp + 0x40] */
L_005D9BCD:
    _xmm[0].u64[0] = MEM32(edi + 0x7DC0); _xmm[0].u64[1] = 0; /* 0x005D9BCD: movss xmm0, dword ptr [edi + 0x7dc0] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9BD5: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9BDB: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9C0B; /* 0x005D9BDD: jne 0x5d9c0b */
L_005D9BDF:
    PUSH32(esp, 0x20u); /* 0x005D9BDF: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9BE1: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9BE5: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9BEA: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9BEE: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9BF2: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9BF5: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9BF5: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9BF8: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9BFC: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9BFE: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9C02: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9C05: mov dword ptr [esp + 0x40], eax */
    goto L_005D9C20; /* 0x005D9C09: jmp 0x5d9c20 */
L_005D9C0B:
    PUSH32(esp, ecx); /* 0x005D9C0B: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9C0C: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9C0E: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9C12: push eax */
    ecx = esp + 0x40; /* 0x005D9C13: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9C17: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9C1C: mov eax, dword ptr [esp + 0x40] */
L_005D9C20:
    _xmm[0].u64[0] = MEM32(edi + 0x7DC4); _xmm[0].u64[1] = 0; /* 0x005D9C20: movss xmm0, dword ptr [edi + 0x7dc4] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9C28: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9C2E: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9C5E; /* 0x005D9C30: jne 0x5d9c5e */
L_005D9C32:
    PUSH32(esp, 0x20u); /* 0x005D9C32: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9C34: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9C38: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9C3D: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9C41: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9C45: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9C48: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9C48: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9C4B: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9C4F: mov dword ptr [ecx], eax */
    eax = MEM32(esp + 0x40); /* 0x005D9C51: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9C55: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9C58: mov dword ptr [esp + 0x40], eax */
    goto L_005D9C73; /* 0x005D9C5C: jmp 0x5d9c73 */
L_005D9C5E:
    PUSH32(esp, ecx); /* 0x005D9C5E: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9C5F: push 0x20 */
    eax = esp + 0x1C; /* 0x005D9C61: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9C65: push eax */
    ecx = esp + 0x40; /* 0x005D9C66: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9C6A: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9C6F: mov eax, dword ptr [esp + 0x40] */
L_005D9C73:
    esi = MEM32(edi + 0x7DC8); /* 0x005D9C73: mov esi, dword ptr [edi + 0x7dc8] */
    MEM32(esp + 0x18) = esi; /* 0x005D9C79: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9C7D: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9CA9; /* 0x005D9C7F: jne 0x5d9ca9 */
L_005D9C81:
    PUSH32(esp, 0x20u); /* 0x005D9C81: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9C83: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9C87: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9C8C: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9C90: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9C93: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9C93: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9C96: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9C9A: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9C9C: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9CA0: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9CA3: mov dword ptr [esp + 0x40], eax */
    goto L_005D9CBE; /* 0x005D9CA7: jmp 0x5d9cbe */
L_005D9CA9:
    PUSH32(esp, ecx); /* 0x005D9CA9: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9CAA: push 0x20 */
    eax = esp + 0x20; /* 0x005D9CAC: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9CB0: push eax */
    ecx = esp + 0x40; /* 0x005D9CB1: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9CB5: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9CBA: mov eax, dword ptr [esp + 0x40] */
L_005D9CBE:
    esi = MEM32(edi + 0x7DCC); /* 0x005D9CBE: mov esi, dword ptr [edi + 0x7dcc] */
    MEM32(esp + 0x18) = esi; /* 0x005D9CC4: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9CC8: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9CF4; /* 0x005D9CCA: jne 0x5d9cf4 */
L_005D9CCC:
    PUSH32(esp, 0x20u); /* 0x005D9CCC: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9CCE: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9CD2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9CD7: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9CDB: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9CDE: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9CDE: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9CE1: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9CE5: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9CE7: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9CEB: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9CEE: mov dword ptr [esp + 0x40], eax */
    goto L_005D9D09; /* 0x005D9CF2: jmp 0x5d9d09 */
L_005D9CF4:
    PUSH32(esp, ecx); /* 0x005D9CF4: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9CF5: push 0x20 */
    eax = esp + 0x20; /* 0x005D9CF7: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9CFB: push eax */
    ecx = esp + 0x40; /* 0x005D9CFC: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9D00: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9D05: mov eax, dword ptr [esp + 0x40] */
L_005D9D09:
    esi = MEM32(edi + 0x7DD0); /* 0x005D9D09: mov esi, dword ptr [edi + 0x7dd0] */
    MEM32(esp + 0x18) = esi; /* 0x005D9D0F: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9D13: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9D3F; /* 0x005D9D15: jne 0x5d9d3f */
L_005D9D17:
    PUSH32(esp, 0x20u); /* 0x005D9D17: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9D19: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9D1D: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9D22: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9D26: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9D29: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9D29: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9D2C: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9D30: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9D32: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9D36: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9D39: mov dword ptr [esp + 0x40], eax */
    goto L_005D9D54; /* 0x005D9D3D: jmp 0x5d9d54 */
L_005D9D3F:
    PUSH32(esp, ecx); /* 0x005D9D3F: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9D40: push 0x20 */
    eax = esp + 0x20; /* 0x005D9D42: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9D46: push eax */
    ecx = esp + 0x40; /* 0x005D9D47: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9D4B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9D50: mov eax, dword ptr [esp + 0x40] */
L_005D9D54:
    esi = MEM32(edi + 0x7DD4); /* 0x005D9D54: mov esi, dword ptr [edi + 0x7dd4] */
    MEM32(esp + 0x18) = esi; /* 0x005D9D5A: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9D5E: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9D8A; /* 0x005D9D60: jne 0x5d9d8a */
L_005D9D62:
    PUSH32(esp, 0x20u); /* 0x005D9D62: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9D64: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9D68: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9D6D: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9D71: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9D74: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9D74: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9D77: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9D7B: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9D7D: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9D81: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9D84: mov dword ptr [esp + 0x40], eax */
    goto L_005D9D9F; /* 0x005D9D88: jmp 0x5d9d9f */
L_005D9D8A:
    PUSH32(esp, ecx); /* 0x005D9D8A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9D8B: push 0x20 */
    eax = esp + 0x20; /* 0x005D9D8D: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9D91: push eax */
    ecx = esp + 0x40; /* 0x005D9D92: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9D96: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9D9B: mov eax, dword ptr [esp + 0x40] */
L_005D9D9F:
    esi = MEM32(edi + 0x7DD8); /* 0x005D9D9F: mov esi, dword ptr [edi + 0x7dd8] */
    MEM32(esp + 0x18) = esi; /* 0x005D9DA5: mov dword ptr [esp + 0x18], esi */
    /* test LO8(eax), 7 */ /* 0x005D9DA9: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9DD5; /* 0x005D9DAB: jne 0x5d9dd5 */
L_005D9DAD:
    PUSH32(esp, 0x20u); /* 0x005D9DAD: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9DAF: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9DB3: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9DB8: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9DBC: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9DBF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9DBF: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x48); /* 0x005D9DC2: add eax, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005D9DC6: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x40); /* 0x005D9DC8: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005D9DCC: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = eax; /* 0x005D9DCF: mov dword ptr [esp + 0x40], eax */
    goto L_005D9DEA; /* 0x005D9DD3: jmp 0x5d9dea */
L_005D9DD5:
    PUSH32(esp, ecx); /* 0x005D9DD5: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9DD6: push 0x20 */
    eax = esp + 0x20; /* 0x005D9DD8: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005D9DDC: push eax */
    ecx = esp + 0x40; /* 0x005D9DDD: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9DE1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x40); /* 0x005D9DE6: mov eax, dword ptr [esp + 0x40] */
L_005D9DEA:
    _xmm[0].u64[0] = MEM32(edi + 0x7DDC); _xmm[0].u64[1] = 0; /* 0x005D9DEA: movss xmm0, dword ptr [edi + 0x7ddc] */
L_005D9DF2:
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x005D9DF2: movss dword ptr [esp + 0x14], xmm0 */
    /* test LO8(eax), 7 */ /* 0x005D9DF8: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9E28; /* 0x005D9DFA: jne 0x5d9e28 */
L_005D9DFC:
    PUSH32(esp, 0x20u); /* 0x005D9DFC: push 0x20 */
    ecx = esp + 0x38; /* 0x005D9DFE: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9E02: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x005D9E07: mov ecx, dword ptr [esp + 0x40] */
    eax = MEM32(esp + 0x14); /* 0x005D9E0B: mov eax, dword ptr [esp + 0x14] */
    ecx = ecx + 0x7; /* 0x005D9E0F: lea ecx, [ecx + 7] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005D9E12: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005D9E12: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x48); /* 0x005D9E15: add ecx, dword ptr [esp + 0x48] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005D9E19: mov dword ptr [ecx], eax */
    edx = MEM32(esp + 0x40); /* 0x005D9E1B: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005D9E1F: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = edx; /* 0x005D9E22: mov dword ptr [esp + 0x40], edx */
    goto L_005D9E3D; /* 0x005D9E26: jmp 0x5d9e3d */
L_005D9E28:
    eax = esp + 0x14; /* 0x005D9E28: lea eax, [esp + 0x14] */
L_005D9E2C:
    PUSH32(esp, ecx); /* 0x005D9E2C: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9E2D: push 0x20 */
    PUSH32(esp, eax); /* 0x005D9E2F: push eax */
    ecx = esp + 0x40; /* 0x005D9E30: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9E34: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x005D9E39: mov edx, dword ptr [esp + 0x40] */
L_005D9E3D:
    edi = MEM32(esp + 0x1C); /* 0x005D9E3D: mov edi, dword ptr [esp + 0x1c] */
    SET_LO8(ebx, MEM8(esp + 0x13)); /* 0x005D9E41: mov bl, byte ptr [esp + 0x13] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005D9E45: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(esp + 0x13) = (uint8_t)(LO8(ebx)); /* 0x005D9E47: mov byte ptr [esp + 0x13], bl */
    eax = MEM32(edi + 0x4); /* 0x005D9E4B: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005D9E4E: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005D9E50: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005D9E52: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp LO8(ebx), LO8(eax) */ /* 0x005D9E55: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005D8E76; /* 0x005D9E57: jb 0x5d8e76 */
L_005D9E5D:
    ecx = MEM32(esp + 0x28); /* 0x005D9E5D: mov ecx, dword ptr [esp + 0x28] */
    edx = esp + 0x34; /* 0x005D9E61: lea edx, [esp + 0x34] */
    PUSH32(esp, 2); /* 0x005D9E65: push 2 */
    PUSH32(esp, edx); /* 0x005D9E67: push edx */
    ecx = MEM32(ecx + 0xC); /* 0x005D9E68: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x005D9E6B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005D9E6D: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x60) = 0xFFFFFFFFu; /* 0x005D9E70: mov dword ptr [esp + 0x60], 0xffffffff */
    eax = MEM32(esp + 0x48); /* 0x005D9E78: mov eax, dword ptr [esp + 0x48] */
    /* test eax, eax */ /* 0x005D9E7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005D9EA2; /* 0x005D9E7E: je 0x5d9ea2 */
L_005D9E80:
    PUSH32(esp, eax); /* 0x005D9E80: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005D9E81: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005D9E87: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x48) = 0; /* 0x005D9E8A: mov dword ptr [esp + 0x48], 0 */
    MEM32(esp + 0x4C) = 0; /* 0x005D9E92: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0x50) = 0; /* 0x005D9E9A: mov dword ptr [esp + 0x50], 0 */
L_005D9EA2:
    ecx = MEM32(esp + 0x58); /* 0x005D9EA2: mov ecx, dword ptr [esp + 0x58] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005D9EA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005D9EAD: pop ecx */
    edi = POP32_VAL(esp); /* 0x005D9EAE: pop edi */
    esi = POP32_VAL(esp); /* 0x005D9EAF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005D9EB0: pop ebx */
    esp = ebp; /* 0x005D9EB1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005D9EB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005D9EB4: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x005D9575u: goto L_005D9575;
      case 0x005D96ECu: goto L_005D96EC;
      case 0x005D97EEu: goto L_005D97EE;
      case 0x005D99D9u: goto L_005D99D9;
      case 0x005D9AE3u: goto L_005D9AE3;
      case 0x005D9E3Du: goto L_005D9E3D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005D9EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005D9EE0u);

L_005D9EE0:
    PUSH32(esp, ebp); /* 0x005D9EE0: push ebp */
    ebp = esp; /* 0x005D9EE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005D9EE3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005D9EE6: push -1 */
    PUSH32(esp, 0x007AEB90u); /* 0x005D9EE8: push 0x7aeb90 */
    eax = MEM32(FS_BASE + (0)); /* 0x005D9EED: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005D9EF3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005D9EF4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005D9EF7: push ebx */
    PUSH32(esp, esi); /* 0x005D9EF8: push esi */
    PUSH32(esp, edi); /* 0x005D9EF9: push edi */
    eax = MEM32(0x855000); /* 0x005D9EFA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005D9EFF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005D9F01: push eax */
    eax = esp + 0x40; /* 0x005D9F02: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005D9F06: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005D9F0C: mov ebx, ecx */
    ecx = esp + 0x1C; /* 0x005D9F0E: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005D9F12: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005D9F17: mov dword ptr [esp + 0x48], 0 */
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D9F1F: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x330u; /* 0x005D9F24: mov dword ptr [esp + 0x10], 0x330 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9F5A; /* 0x005D9F2C: jne 0x5d9f5a */
L_005D9F2E:
    PUSH32(esp, 0x20u); /* 0x005D9F2E: push 0x20 */
    ecx = esp + 0x20; /* 0x005D9F30: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9F34: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D9F39: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9F3D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9F40: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9F40: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D9F43: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x330u; /* 0x005D9F47: mov dword ptr [eax], 0x330 */
    ecx = MEM32(esp + 0x28); /* 0x005D9F4D: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005D9F51: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005D9F54: mov dword ptr [esp + 0x28], ecx */
    goto L_005D9F6F; /* 0x005D9F58: jmp 0x5d9f6f */
L_005D9F5A:
    PUSH32(esp, ecx); /* 0x005D9F5A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005D9F5B: push 0x20 */
    eax = esp + 0x18; /* 0x005D9F5D: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005D9F61: push eax */
    ecx = esp + 0x28; /* 0x005D9F62: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9F66: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005D9F6B: mov ecx, dword ptr [esp + 0x28] */
L_005D9F6F:
    esi = MEM32(ebp + 0x8); /* 0x005D9F6F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x005D9F72: mov eax, dword ptr [esi] */
    MEM32(esp + 0x14) = eax; /* 0x005D9F74: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(esi + 0x4); /* 0x005D9F78: mov eax, dword ptr [esi + 4] */
    MEM32(esp + 0x18) = eax; /* 0x005D9F7B: mov dword ptr [esp + 0x18], eax */
    /* test LO8(ecx), 7 */ /* 0x005D9F7F: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005D9FAE; /* 0x005D9F82: jne 0x5d9fae */
L_005D9F84:
    PUSH32(esp, 0x40u); /* 0x005D9F84: push 0x40 */
    ecx = esp + 0x20; /* 0x005D9F86: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9F8A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D9F8F: mov eax, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0x14); _xmm[0].u64[1] = 0; /* 0x005D9F93: movq xmm0, qword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9F99: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9F9C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9F9C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D9F9F: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005D9FA3: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x40u; /* 0x005D9FA7: add dword ptr [esp + 0x28], 0x40 */
    _flag_k = FK_ADD;
    goto L_005D9FBF; /* 0x005D9FAC: jmp 0x5d9fbf */
L_005D9FAE:
    PUSH32(esp, ecx); /* 0x005D9FAE: push ecx */
    PUSH32(esp, 0x40u); /* 0x005D9FAF: push 0x40 */
    eax = esp + 0x1C; /* 0x005D9FB1: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005D9FB5: push eax */
    ecx = esp + 0x28; /* 0x005D9FB6: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005D9FBA: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005D9FBF:
    ecx = MEM32(ebx + 0xC); /* 0x005D9FBF: mov ecx, dword ptr [ebx + 0xc] */
    edx = esp + 0x10; /* 0x005D9FC2: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x005D9FC6: push edx */
    eax = MEM32(ecx); /* 0x005D9FC7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005D9FC9: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x28), 7 */ /* 0x005D9FCF: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(esp + 0x10); /* 0x005D9FD4: mov edi, dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = edi; /* 0x005D9FD8: mov dword ptr [esp + 0x14], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA000; /* 0x005D9FDC: jne 0x5da000 */
L_005D9FDE:
    PUSH32(esp, 0x20u); /* 0x005D9FDE: push 0x20 */
    ecx = esp + 0x20; /* 0x005D9FE0: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005D9FE4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005D9FE9: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005D9FED: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005D9FF0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005D9FF0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005D9FF3: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005D9FF7: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x20u; /* 0x005D9FF9: add dword ptr [esp + 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005DA011; /* 0x005D9FFE: jmp 0x5da011 */
L_005DA000:
    PUSH32(esp, ecx); /* 0x005DA000: push ecx */
    PUSH32(esp, 0x20u); /* 0x005DA001: push 0x20 */
    eax = esp + 0x1C; /* 0x005DA003: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005DA007: push eax */
    ecx = esp + 0x28; /* 0x005DA008: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA00C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005DA011:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DA011: push dword ptr [ebp + 0xc] */
    ecx = esp + 0x20; /* 0x005DA014: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F4EF0); /* 0x005DA018: call 0x5f4ef0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DA01D: push dword ptr [ebp + 0x10] */
    ecx = esp + 0x20; /* 0x005DA020: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F4DF0); /* 0x005DA024: call 0x5f4df0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x005DA029: push 2 */
    PUSH32(esp, 1); /* 0x005DA02B: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DA02D: push dword ptr [ebp + 0x14] */
    ecx = esp + 0x28; /* 0x005DA030: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005DC3D0); /* 0x005DA034: call 0x5dc3d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005DA039: push 1 */
    PUSH32(esp, 0); /* 0x005DA03B: push 0 */
    eax = esp + 0x24; /* 0x005DA03D: lea eax, [esp + 0x24] */
    ecx = ebx; /* 0x005DA041: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DA043: push eax */
    PUSH32(esp, esi); /* 0x005DA044: push esi */
    RECOMP_CALL(sub_005D70B0); /* 0x005DA045: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005DA04A: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005DA052: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005DA056: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA07C; /* 0x005DA058: je 0x5da07c */
L_005DA05A:
    PUSH32(esp, eax); /* 0x005DA05A: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DA05B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA061: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005DA064: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005DA06C: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005DA074: mov dword ptr [esp + 0x38], 0 */
L_005DA07C:
    ecx = MEM32(esp + 0x40); /* 0x005DA07C: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA080: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA087: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA088: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA089: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DA08A: pop ebx */
    esp = ebp; /* 0x005DA08B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA08D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DA08E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005DA0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA0A0u);

L_005DA0A0:
    PUSH32(esp, ebp); /* 0x005DA0A0: push ebp */
    ebp = esp; /* 0x005DA0A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA0A3: push -1 */
    PUSH32(esp, 0x007AEF30u); /* 0x005DA0A5: push 0x7aef30 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA0AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA0B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005DA0B1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DA0B4: push esi */
    PUSH32(esp, edi); /* 0x005DA0B5: push edi */
    eax = MEM32(0x855000); /* 0x005DA0B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA0BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA0BD: push eax */
    eax = ebp + (-0xC); /* 0x005DA0BE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA0C1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DA0C7: mov edi, ecx */
    ecx = MEM32(edi + 0xC); /* 0x005DA0C9: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005DA0CC: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005DA0CE: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005DA0D1: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DA0D3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA179; /* 0x005DA0D5: je 0x5da179 */
L_005DA0DB:
    esi = MEM32(ebp + 0x8); /* 0x005DA0DB: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x005DA0DE: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005DA0E0: push esi */
    RECOMP_CALL(sub_005DAB60); /* 0x005DA0E1: call 0x5dab60 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x005DA0E6: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DA0E9: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA0EE: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x24)), 7 */ /* 0x005DA0F5: test byte ptr [ebp - 0x24], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0x8) = 0x32Bu; /* 0x005DA0F9: mov dword ptr [ebp + 8], 0x32b */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA124; /* 0x005DA100: jne 0x5da124 */
L_005DA102:
    PUSH32(esp, 0x20u); /* 0x005DA102: push 0x20 */
    ecx = ebp + (-0x30); /* 0x005DA104: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D70); /* 0x005DA107: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x005DA10C: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA10F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA112: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA112: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x005DA115: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x32Bu; /* 0x005DA118: mov dword ptr [eax], 0x32b */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0x20u; /* 0x005DA11E: add dword ptr [ebp - 0x24], 0x20 */
    _flag_k = FK_ADD;
    goto L_005DA133; /* 0x005DA122: jmp 0x5da133 */
L_005DA124:
    PUSH32(esp, ecx); /* 0x005DA124: push ecx */
    PUSH32(esp, 0x20u); /* 0x005DA125: push 0x20 */
    eax = ebp + 0x8; /* 0x005DA127: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005DA12A: push eax */
    ecx = ebp + (-0x30); /* 0x005DA12B: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA12E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005DA133:
    PUSH32(esp, esi); /* 0x005DA133: push esi */
    ecx = ebp + (-0x30); /* 0x005DA134: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DA137: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x005DA13C: push 2 */
    PUSH32(esp, 0); /* 0x005DA13E: push 0 */
    eax = ebp + (-0x30); /* 0x005DA140: lea eax, [ebp - 0x30] */
    ecx = edi; /* 0x005DA143: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DA145: push eax */
    PUSH32(esp, esi); /* 0x005DA146: push esi */
    RECOMP_CALL(sub_005D70B0); /* 0x005DA147: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA14C: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x1C)); /* 0x005DA153: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005DA156: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA179; /* 0x005DA158: je 0x5da179 */
L_005DA15A:
    PUSH32(esp, eax); /* 0x005DA15A: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DA15B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA161: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DA164: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DA16B: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005DA172: mov dword ptr [ebp - 0x14], 0 */
L_005DA179:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA179: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA17C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA183: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA184: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA185: pop esi */
    esp = ebp; /* 0x005DA186: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA188: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA189: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DA190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA190u);

L_005DA190:
    PUSH32(esp, ebp); /* 0x005DA190: push ebp */
    ebp = esp; /* 0x005DA191: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA193: push -1 */
    PUSH32(esp, 0x007AEF60u); /* 0x005DA195: push 0x7aef60 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA19A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA1A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005DA1A1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DA1A4: push ebx */
    PUSH32(esp, esi); /* 0x005DA1A5: push esi */
    PUSH32(esp, edi); /* 0x005DA1A6: push edi */
    eax = MEM32(0x855000); /* 0x005DA1A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA1AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA1AE: push eax */
    eax = ebp + (-0xC); /* 0x005DA1AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA1B2: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DA1B8: mov edi, ecx */
    ecx = MEM32(edi + 0xC); /* 0x005DA1BA: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005DA1BD: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005DA1BF: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005DA1C2: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DA1C4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA2F8; /* 0x005DA1C6: je 0x5da2f8 */
L_005DA1CC:
    ecx = ebp + (-0x34); /* 0x005DA1CC: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DA1CF: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA1D4: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005DA1DB: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x338u; /* 0x005DA1DF: mov dword ptr [ebp - 0x10], 0x338 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA20A; /* 0x005DA1E6: jne 0x5da20a */
L_005DA1E8:
    PUSH32(esp, 0x20u); /* 0x005DA1E8: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005DA1EA: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005DA1ED: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005DA1F2: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA1F5: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA1F8: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA1F8: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005DA1FB: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x338u; /* 0x005DA1FE: mov dword ptr [eax], 0x338 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x005DA204: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005DA219; /* 0x005DA208: jmp 0x5da219 */
L_005DA20A:
    PUSH32(esp, ecx); /* 0x005DA20A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005DA20B: push 0x20 */
    eax = ebp + (-0x10); /* 0x005DA20D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005DA210: push eax */
    ecx = ebp + (-0x34); /* 0x005DA211: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA214: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005DA219:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA219: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x34); /* 0x005DA21C: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DA21F: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xC); /* 0x005DA224: mov ecx, dword ptr [edi + 0xc] */
    edx = ebp + (-0x10); /* 0x005DA227: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x005DA22A: push edx */
    eax = MEM32(ecx); /* 0x005DA22B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005DA22D: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005DA233: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + (-0x10)); /* 0x005DA237: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DA23A: mov dword ptr [ebp - 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA262; /* 0x005DA23D: jne 0x5da262 */
L_005DA23F:
    PUSH32(esp, 0x20u); /* 0x005DA23F: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005DA241: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005DA244: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005DA249: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA24C: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA24F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA24F: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005DA252: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005DA255: mov dword ptr [eax], esi */
    eax = MEM32(ebp + (-0x28)); /* 0x005DA257: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005DA25A: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x005DA25D: mov dword ptr [ebp - 0x28], eax */
    goto L_005DA274; /* 0x005DA260: jmp 0x5da274 */
L_005DA262:
    PUSH32(esp, ecx); /* 0x005DA262: push ecx */
    PUSH32(esp, 0x20u); /* 0x005DA263: push 0x20 */
    eax = ebp + (-0x14); /* 0x005DA265: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DA268: push eax */
    ecx = ebp + (-0x34); /* 0x005DA269: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA26C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005DA271: mov eax, dword ptr [ebp - 0x28] */
L_005DA274:
    esi = MEM32(ebp + 0xC); /* 0x005DA274: mov esi, dword ptr [ebp + 0xc] */
    SET_LO8(ebx, MEM8(esi)); /* 0x005DA277: mov bl, byte ptr [esi] */
    MEM8(ebp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x005DA279: mov byte ptr [ebp + 0xc], bl */
    /* test LO8(eax), 7 */ /* 0x005DA27C: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA29E; /* 0x005DA27E: jne 0x5da29e */
L_005DA280:
    PUSH32(esp, 8); /* 0x005DA280: push 8 */
    ecx = ebp + (-0x34); /* 0x005DA282: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005DA285: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005DA28A: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA28D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA290: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA290: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005DA293: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x005DA296: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 8; /* 0x005DA298: add dword ptr [ebp - 0x28], 8 */
    _flag_k = FK_ADD;
    goto L_005DA2AD; /* 0x005DA29C: jmp 0x5da2ad */
L_005DA29E:
    PUSH32(esp, ecx); /* 0x005DA29E: push ecx */
    PUSH32(esp, 8); /* 0x005DA29F: push 8 */
    eax = ebp + 0xC; /* 0x005DA2A1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005DA2A4: push eax */
    ecx = ebp + (-0x34); /* 0x005DA2A5: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA2A8: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005DA2AD:
    eax = esi + 0x1; /* 0x005DA2AD: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x005DA2B0: push eax */
    ecx = ebp + (-0x34); /* 0x005DA2B1: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DA2B4: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x005DA2B9: push 2 */
    PUSH32(esp, 0); /* 0x005DA2BB: push 0 */
    eax = ebp + (-0x34); /* 0x005DA2BD: lea eax, [ebp - 0x34] */
    ecx = edi; /* 0x005DA2C0: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DA2C2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA2C3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005D70B0); /* 0x005DA2C6: call 0x5d70b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA2CB: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005DA2D2: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005DA2D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA2F8; /* 0x005DA2D7: je 0x5da2f8 */
L_005DA2D9:
    PUSH32(esp, eax); /* 0x005DA2D9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DA2DA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA2E0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005DA2E3: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DA2EA: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DA2F1: mov dword ptr [ebp - 0x18], 0 */
L_005DA2F8:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA2F8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA2FB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA302: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA303: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA304: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DA305: pop ebx */
    esp = ebp; /* 0x005DA306: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA308: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DA309: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DA310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA310u);

L_005DA310:
    PUSH32(esp, ebp); /* 0x005DA310: push ebp */
    ebp = esp; /* 0x005DA311: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005DA313: push esi */
    esi = ecx; /* 0x005DA314: mov esi, ecx */
    edx = MEM32(esi + 0x14); /* 0x005DA316: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(edx); /* 0x005DA319: mov eax, dword ptr [edx] */
    /* cmp eax, edx */ /* 0x005DA31B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA32D; /* 0x005DA31D: je 0x5da32d */
L_005DA31F:
    ecx = MEM32(ebp + 0x8); /* 0x005DA31F: mov ecx, dword ptr [ebp + 8] */
L_005DA322:
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x005DA322: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA366; /* 0x005DA325: je 0x5da366 */
L_005DA327:
    eax = MEM32(eax); /* 0x005DA327: mov eax, dword ptr [eax] */
    /* cmp eax, edx */ /* 0x005DA329: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA322; /* 0x005DA32B: jne 0x5da322 */
L_005DA32D:
    PUSH32(esp, edi); /* 0x005DA32D: push edi */
    edi = edx; /* 0x005DA32E: mov edi, edx */
    eax = ebp + 0x8; /* 0x005DA330: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005DA333: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005DA334: push dword ptr [edi + 4] */
    PUSH32(esp, edi); /* 0x005DA337: push edi */
    RECOMP_CALL(sub_005DC8C0); /* 0x005DA338: call 0x5dc8c0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005DA33D: mov edx, eax */
    ecx = 0x15555554u; /* 0x005DA33F: mov ecx, 0x15555554 */
    eax = MEM32(esi + 0x18); /* 0x005DA344: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005DA347: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x005DA349: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DA359; /* 0x005DA34C: jae 0x5da359 */
L_005DA34E:
    PUSH32(esp, 0x007E1400u); /* 0x005DA34E: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005DA353: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005DA359:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005DA359: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x005DA35A: mov dword ptr [esi + 0x18], eax */
    MEM32(edi + 0x4) = edx; /* 0x005DA35D: mov dword ptr [edi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x005DA360: mov eax, dword ptr [edx + 4] */
    edi = POP32_VAL(esp); /* 0x005DA363: pop edi */
    MEM32(eax) = edx; /* 0x005DA364: mov dword ptr [eax], edx */
L_005DA366:
    esi = POP32_VAL(esp); /* 0x005DA366: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DA367: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA368: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DA370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA370u);

L_005DA370:
    PUSH32(esp, ebp); /* 0x005DA370: push ebp */
    ebp = esp; /* 0x005DA371: mov ebp, esp */
    PUSH32(esp, edi); /* 0x005DA373: push edi */
    edi = ecx; /* 0x005DA374: mov edi, ecx */
    edx = MEM32(edi + 0x14); /* 0x005DA376: mov edx, dword ptr [edi + 0x14] */
    eax = MEM32(edx); /* 0x005DA379: mov eax, dword ptr [edx] */
    /* cmp eax, edx */ /* 0x005DA37B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA3B8; /* 0x005DA37D: je 0x5da3b8 */
L_005DA37F:
    PUSH32(esp, esi); /* 0x005DA37F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005DA380: mov esi, dword ptr [ebp + 8] */
L_005DA383:
    /* cmp MEM32(eax + 0x8), esi */ /* 0x005DA383: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA394; /* 0x005DA386: je 0x5da394 */
L_005DA388:
    eax = MEM32(eax); /* 0x005DA388: mov eax, dword ptr [eax] */
    /* cmp eax, edx */ /* 0x005DA38A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA383; /* 0x005DA38C: jne 0x5da383 */
L_005DA38E:
    esi = POP32_VAL(esp); /* 0x005DA38E: pop esi */
    edi = POP32_VAL(esp); /* 0x005DA38F: pop edi */
    ebp = POP32_VAL(esp); /* 0x005DA390: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA391: ret 4 */
L_005DA394:
    MEM8(edi + 0x24) = (uint8_t)(1); /* 0x005DA394: mov byte ptr [edi + 0x24], 1 */
    ecx = MEM32(eax + 0x4); /* 0x005DA398: mov ecx, dword ptr [eax + 4] */
    esi = MEM32(eax); /* 0x005DA39B: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x005DA39D: push eax */
    MEM32(ecx) = esi; /* 0x005DA39E: mov dword ptr [ecx], esi */
    edx = MEM32(eax); /* 0x005DA3A0: mov edx, dword ptr [eax] */
    ecx = MEM32(eax + 0x4); /* 0x005DA3A2: mov ecx, dword ptr [eax + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x005DA3A5: mov dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - 1; /* 0x005DA3A8: dec dword ptr [edi + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DA3AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA3B1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = esi; /* 0x005DA3B4: mov dword ptr [edi + 0x10], esi */
    esi = POP32_VAL(esp); /* 0x005DA3B7: pop esi */
L_005DA3B8:
    edi = POP32_VAL(esp); /* 0x005DA3B8: pop edi */
    ebp = POP32_VAL(esp); /* 0x005DA3B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA3BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DA3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA3C0u);

L_005DA3C0:
    MEM32(ecx + 0x48) = 0; /* 0x005DA3C0: mov dword ptr [ecx + 0x48], 0 */
    eax = ecx + 0x28; /* 0x005DA3C7: lea eax, [ecx + 0x28] */
    MEM32(ecx + 0x44) = 0; /* 0x005DA3CA: mov dword ptr [ecx + 0x44], 0 */
    MEM8(ecx + 0x40) = (uint8_t)(0); /* 0x005DA3D1: mov byte ptr [ecx + 0x40], 0 */
    MEM8(ecx + 0x4C) = (uint8_t)(0); /* 0x005DA3D5: mov byte ptr [ecx + 0x4c], 0 */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x005DA3D9: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax + 0x10) = 0; /* 0x005DA3DD: mov dword ptr [eax + 0x10], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_005DA3E8; /* 0x005DA3E4: jb 0x5da3e8 */
L_005DA3E6:
    eax = MEM32(eax); /* 0x005DA3E6: mov eax, dword ptr [eax] */
L_005DA3E8:
    MEM8(eax) = (uint8_t)(0); /* 0x005DA3E8: mov byte ptr [eax], 0 */
    ecx = MEM32(ecx + 0x1C); /* 0x005DA3EB: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x005DA3EE: mov eax, dword ptr [ecx] */
    /* cmp eax, ecx */ /* 0x005DA3F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA43C; /* 0x005DA3F2: je 0x5da43c */
L_005DA3F4:
    MEM8(eax + 0x1A) = (uint8_t)(2); /* 0x005DA3F4: mov byte ptr [eax + 0x1a], 2 */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DA3F8: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA438; /* 0x005DA3FC: jne 0x5da438 */
L_005DA3FE:
    edx = MEM32(eax + 0x8); /* 0x005DA3FE: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DA401: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA41D; /* 0x005DA405: jne 0x5da41d */
L_005DA407:
    eax = edx; /* 0x005DA407: mov eax, edx */
    edx = MEM32(eax); /* 0x005DA409: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DA40B: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA438; /* 0x005DA40F: jne 0x5da438 */
L_005DA411:
    eax = edx; /* 0x005DA411: mov eax, edx */
    edx = MEM32(eax); /* 0x005DA413: mov edx, dword ptr [eax] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DA415: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA411; /* 0x005DA419: je 0x5da411 */
L_005DA41B:
    goto L_005DA438; /* 0x005DA41B: jmp 0x5da438 */
L_005DA41D:
    edx = MEM32(eax + 0x4); /* 0x005DA41D: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DA420: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA436; /* 0x005DA424: jne 0x5da436 */
L_005DA426:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005DA426: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA436; /* 0x005DA429: jne 0x5da436 */
L_005DA42B:
    eax = edx; /* 0x005DA42B: mov eax, edx */
    edx = MEM32(edx + 0x4); /* 0x005DA42D: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DA430: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA426; /* 0x005DA434: je 0x5da426 */
L_005DA436:
    eax = edx; /* 0x005DA436: mov eax, edx */
L_005DA438:
    /* cmp eax, ecx */ /* 0x005DA438: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA3F4; /* 0x005DA43A: jne 0x5da3f4 */
L_005DA43C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DA43C: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DA440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA440u);

L_005DA440:
    PUSH32(esp, ebp); /* 0x005DA440: push ebp */
    ebp = esp; /* 0x005DA441: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005DA443: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA444: push dword ptr [ebp + 8] */
    esi = ecx + 0x1C; /* 0x005DA447: lea esi, [ecx + 0x1c] */
    eax = ebp + 0x8; /* 0x005DA44A: lea eax, [ebp + 8] */
    ecx = esi; /* 0x005DA44D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005DA44F: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005DA450: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005DA455: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi) */ /* 0x005DA458: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005DA45A: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA463; /* 0x005DA45B: jne 0x5da463 */
L_005DA45D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DA45D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x005DA45F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA460: ret 4 */
L_005DA463:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DA463: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax + 0x1A), 2 */ /* 0x005DA465: cmp byte ptr [eax + 0x1a], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1A)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005DA469: setne al */
    ebp = POP32_VAL(esp); /* 0x005DA46C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DA46D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DA470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA470u);

L_005DA470:
    PUSH32(esp, ebp); /* 0x005DA470: push ebp */
    ebp = esp; /* 0x005DA471: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA473: push -1 */
    PUSH32(esp, 0x007AEF88u); /* 0x005DA475: push 0x7aef88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA47A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA480: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005DA481: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DA484: push esi */
    eax = MEM32(0x855000); /* 0x005DA485: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA48A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA48C: push eax */
    eax = ebp + (-0xC); /* 0x005DA48D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA490: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DA496: mov esi, ecx */
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x005DA498: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA510; /* 0x005DA49C: je 0x5da510 */
L_005DA49E:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x005DA49E: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA510; /* 0x005DA4A2: je 0x5da510 */
L_005DA4A4:
    ecx = MEM32(esi + 0xC); /* 0x005DA4A4: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x10); /* 0x005DA4A7: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x005DA4AA: push edx */
    eax = MEM32(ecx); /* 0x005DA4AB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005DA4AD: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x48); /* 0x005DA4B3: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ebp + (-0x10)); /* 0x005DA4B6: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, ecx */ /* 0x005DA4B9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DA4C1; /* 0x005DA4BB: jae 0x5da4c1 */
L_005DA4BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DA4BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DA4C3; /* 0x005DA4BF: jmp 0x5da4c3 */
L_005DA4C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005DA4C1: sub eax, ecx */
    _flag_k = FK_CMP;
L_005DA4C3:
    /* cmp eax, MEM32(0x86598C) */ /* 0x005DA4C3: cmp eax, dword ptr [0x86598c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x86598C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DA510; /* 0x005DA4C9: jb 0x5da510 */
L_005DA4CB:
    ecx = ebp + (-0x30); /* 0x005DA4CB: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DA4CE: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA4D3: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x30); /* 0x005DA4DA: lea ecx, [ebp - 0x30] */
    PUSH32(esp, 0x336u); /* 0x005DA4DD: push 0x336 */
    RECOMP_CALL(sub_005F5560); /* 0x005DA4E2: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x28; /* 0x005DA4E7: lea eax, [esi + 0x28] */
    PUSH32(esp, eax); /* 0x005DA4EA: push eax */
    ecx = ebp + (-0x30); /* 0x005DA4EB: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F56D0); /* 0x005DA4EE: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005DA4F3: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x30); /* 0x005DA4F6: lea edx, [ebp - 0x30] */
    PUSH32(esp, 2); /* 0x005DA4F9: push 2 */
    PUSH32(esp, edx); /* 0x005DA4FB: push edx */
    eax = MEM32(ecx); /* 0x005DA4FC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005DA4FE: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA501: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x30); /* 0x005DA508: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D00); /* 0x005DA50B: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
L_005DA510:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA510: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA513: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA51A: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DA51B: pop esi */
    esp = ebp; /* 0x005DA51C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA51E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DA51F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DA520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA520u);

L_005DA520:
    PUSH32(esp, ebp); /* 0x005DA520: push ebp */
    ebp = esp; /* 0x005DA521: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA523: push -1 */
    PUSH32(esp, 0x007AEFE3u); /* 0x005DA525: push 0x7aefe3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA52A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA530: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x005DA531: sub esp, 0x54 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DA534: push ebx */
    PUSH32(esp, esi); /* 0x005DA535: push esi */
    PUSH32(esp, edi); /* 0x005DA536: push edi */
    eax = MEM32(0x855000); /* 0x005DA537: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA53C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA53E: push eax */
    eax = ebp + (-0xC); /* 0x005DA53F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA542: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DA548: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x005DA54A: mov dword ptr [ebp - 0x18], edi */
    ecx = MEM32(edi + 0xC); /* 0x005DA54D: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x005DA550: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005DA552: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005DA555: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DA557: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA562; /* 0x005DA559: je 0x5da562 */
L_005DA55B:
    ecx = edi; /* 0x005DA55B: mov ecx, edi */
    RECOMP_CALL(sub_005DA470); /* 0x005DA55D: call 0x5da470 */
    RECOMP_FLAGS_IN();
L_005DA562:
    ecx = ebp + (-0x3C); /* 0x005DA562: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DA565: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA56A: mov dword ptr [ebp - 4], 0 */
L_005DA571:
    ecx = MEM32(edi + 0xC); /* 0x005DA571: mov ecx, dword ptr [edi + 0xc] */
    edx = ebp + (-0x5C); /* 0x005DA574: lea edx, [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x005DA577: push edx */
    eax = MEM32(ecx); /* 0x005DA578: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x005DA57A: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005DA57D: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DA57F: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DA582: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x28); /* 0x005DA586: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0x100u); /* 0x005DA589: push 0x100 */
    MEM32(ebp + (-0x34)) = 0x800u; /* 0x005DA58E: mov dword ptr [ebp - 0x34], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005DA595: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = 0; /* 0x005DA59A: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x005DA5A1: mov dword ptr [ebp - 0x2c], 0 */
    ebx = MEM32(esi + 0xC); /* 0x005DA5A8: mov ebx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 7; /* 0x005DA5AB: add ebx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ebx) >> 2) & 1u); /* 0x005DA5AE: shr ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 3u; /* 0x005DA5AE: shr ebx, 3 */
    /* test ebx, ebx */ /* 0x005DA5B1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA63C; /* 0x005DA5B3: je 0x5da63c */
L_005DA5B9:
    edx = MEM32(esi + 0x14); /* 0x005DA5B9: mov edx, dword ptr [esi + 0x14] */
    esi = ebx * 8; /* 0x005DA5BC: lea esi, [ebx*8] */
    MEM32(ebp + (-0x10)) = edx; /* 0x005DA5C3: mov dword ptr [ebp - 0x10], edx */
    edi = esi; /* 0x005DA5C6: mov edi, esi */
    edx = MEM32(ebp + (-0x34)); /* 0x005DA5C8: mov edx, dword ptr [ebp - 0x34] */
    /* test esi, esi */ /* 0x005DA5CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA60C; /* 0x005DA5CD: je 0x5da60c */
L_005DA5CF:
    ecx = edx + (-0x1); /* 0x005DA5CF: lea ecx, [edx - 1] */
    eax = esi + (-0x1); /* 0x005DA5D2: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005DA5D5: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005DA5D8: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x005DA5DB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DA60C; /* 0x005DA5DD: jae 0x5da60c */
L_005DA5DF:
    edi = esi + esi; /* 0x005DA5DF: lea edi, [esi + esi] */
    eax = edi; /* 0x005DA5E2: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005DA5E4: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005DA5E6: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DA5F3; /* 0x005DA5EB: jbe 0x5da5f3 */
L_005DA5ED:
    edi = esi + 0x100000; /* 0x005DA5ED: lea edi, [esi + 0x100000] */
L_005DA5F3:
    eax = edi + 0x7; /* 0x005DA5F3: lea eax, [edi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA5F6: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA5F6: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005DA5F9: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DA60C; /* 0x005DA5FE: jbe 0x5da60c */
L_005DA600:
    PUSH32(esp, eax); /* 0x005DA600: push eax */
    ecx = ebp + (-0x28); /* 0x005DA601: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005DA604: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x34)); /* 0x005DA609: mov edx, dword ptr [ebp - 0x34] */
L_005DA60C:
    eax = MEM32(ebp + (-0x30)); /* 0x005DA60C: mov eax, dword ptr [ebp - 0x30] */
    /* cmp edi, edx */ /* 0x005DA60F: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DA611: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005DA612: push dword ptr [ebp - 0x10] */
    if (CMP_A(_flag_a, _flag_b)) { edx = edi; } /* 0x005DA615: cmova edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA618: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA61B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA61B: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x005DA61E: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DA621: push eax */
    MEM32(ebp + (-0x34)) = edx; /* 0x005DA622: mov dword ptr [ebp - 0x34], edx */
    RECOMP_CALL(sub_00780838); /* 0x005DA625: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x005DA62A: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DA62D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x14)); /* 0x005DA630: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x005DA633: mov edi, dword ptr [ebp - 0x18] */
    eax = eax + ebx * 8; /* 0x005DA636: lea eax, [eax + ebx*8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005DA639: mov dword ptr [ebp - 0x30], eax */
L_005DA63C:
    eax = MEM32(esi); /* 0x005DA63C: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x005DA63E: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(esi + 0x4); /* 0x005DA641: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x38)) = eax; /* 0x005DA644: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(esi + 0x8); /* 0x005DA647: mov eax, dword ptr [esi + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x005DA64A: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(esi + 0x10); /* 0x005DA64D: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x005DA650: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(esi + 0xC); /* 0x005DA653: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005DA656: mov dword ptr [ebp - 0x30], eax */
    esi = eax + 0x7; /* 0x005DA659: lea esi, [eax + 7] */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x005DA65C: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x005DA65C: shr esi, 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DA65F: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x48)); /* 0x005DA663: mov eax, dword ptr [ebp - 0x48] */
    ebx = MEM32(0x7CC694); /* 0x005DA666: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005DA66C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA68B; /* 0x005DA66E: je 0x5da68b */
L_005DA670:
    PUSH32(esp, eax); /* 0x005DA670: push eax */
    RECOMP_ICALL(ebx); /* 0x005DA671: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA673: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x48)) = 0; /* 0x005DA676: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x005DA67D: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x005DA684: mov dword ptr [ebp - 0x40], 0 */
L_005DA68B:
    /* test esi, esi */ /* 0x005DA68B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA6FB; /* 0x005DA68D: je 0x5da6fb */
L_005DA68F:
    eax = ebp + (-0x1C); /* 0x005DA68F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x005DA692: push eax */
    ecx = ebp + (-0x3C); /* 0x005DA693: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F5260); /* 0x005DA696: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x005DA69B: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005DA69E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DA6A1: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x005DA6A3: mov dword ptr [ebp - 0x14], esp */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005DA6A6: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ecx) = eax; /* 0x005DA6A9: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x005DA6AB: mov eax, dword ptr [ebp - 0x38] */
    MEM32(ecx + 0x4) = eax; /* 0x005DA6AE: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x005DA6B1: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ecx + 0x8) = eax; /* 0x005DA6B4: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x005DA6B7: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ecx + 0xC) = eax; /* 0x005DA6BA: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005DA6BD: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ecx + 0x10) = eax; /* 0x005DA6C0: mov dword ptr [ecx + 0x10], eax */
    eax = ebp + (-0x28); /* 0x005DA6C3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005DA6C6: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005DA6C7: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_004E6D70); /* 0x005DA6CA: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005DA6CF: mov byte ptr [ebp - 4], 4 */
    esi = MEM32(ebp + (-0x1C)); /* 0x005DA6D3: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x005DA6D6: push esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DA6D7: mov byte ptr [ebp - 4], 0 */
    ecx = edi; /* 0x005DA6DB: mov ecx, edi */
    RECOMP_CALL(sub_005DAC00); /* 0x005DA6DD: call 0x5dac00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DA6E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA571; /* 0x005DA6E4: je 0x5da571 */
L_005DA6EA:
    eax = ebp + (-0x3C); /* 0x005DA6EA: lea eax, [ebp - 0x3c] */
    ecx = edi; /* 0x005DA6ED: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DA6EF: push eax */
    PUSH32(esp, esi); /* 0x005DA6F0: push esi */
    RECOMP_CALL(sub_005DA750); /* 0x005DA6F1: call 0x5da750 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005DA571; /* 0x005DA6F6: jmp 0x5da571 */
L_005DA6FB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA6FB: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x28)); /* 0x005DA702: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x005DA705: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA724; /* 0x005DA707: je 0x5da724 */
L_005DA709:
    PUSH32(esp, eax); /* 0x005DA709: push eax */
    RECOMP_ICALL(ebx); /* 0x005DA70A: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA70C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = 0; /* 0x005DA70F: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005DA716: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005DA71D: mov dword ptr [ebp - 0x20], 0 */
L_005DA724:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA724: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA727: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA72E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA72F: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA730: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DA731: pop ebx */
    esp = ebp; /* 0x005DA732: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA734: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DA735: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DA740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA740u);

L_005DA740:
    ecx = MEM32(ecx + 0xC); /* 0x005DA740: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x005DA743: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005DA745: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DA748: mov ecx, eax */
    goto L_0046D220; /* 0x005DA74A: jmp 0x46d220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0046D220: RECOMP_ITAIL(0x0046D220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_005DA750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA750u);

L_005DA750:
    PUSH32(esp, ebp); /* 0x005DA750: push ebp */
    ebp = esp; /* 0x005DA751: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA753: push -1 */
    PUSH32(esp, 0x007AF013u); /* 0x005DA755: push 0x7af013 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA75A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA760: push eax */
    PUSH32(esp, ecx); /* 0x005DA761: push ecx */
    PUSH32(esp, ebx); /* 0x005DA762: push ebx */
    PUSH32(esp, esi); /* 0x005DA763: push esi */
    PUSH32(esp, edi); /* 0x005DA764: push edi */
    eax = MEM32(0x855000); /* 0x005DA765: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA76A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA76C: push eax */
    eax = ebp + (-0xC); /* 0x005DA76D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA770: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DA776: mov esi, ecx */
    /* cmp MEM8(esi + 0x24), 0 */ /* 0x005DA778: cmp byte ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x24)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA782; /* 0x005DA77C: je 0x5da782 */
L_005DA77E:
    MEM8(esi + 0x24) = (uint8_t)(0); /* 0x005DA77E: mov byte ptr [esi + 0x24], 0 */
L_005DA782:
    eax = MEM32(esi + 0x14); /* 0x005DA782: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(eax); /* 0x005DA785: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x10) = ecx; /* 0x005DA787: mov dword ptr [esi + 0x10], ecx */
    /* cmp ecx, eax */ /* 0x005DA78A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA7FB; /* 0x005DA78C: je 0x5da7fb */
L_005DA78E:
    ebx = MEM32(ebp + 0xC); /* 0x005DA78E: mov ebx, dword ptr [ebp + 0xc] */
    edx = ebx + 0x14; /* 0x005DA791: lea edx, [ebx + 0x14] */
L_005DA794:
    eax = MEM32(esi + 0x10); /* 0x005DA794: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005DA797: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DA79A: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x005DA79C: mov dword ptr [ebp + 0xc], esp */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005DA79F: mov dword ptr [ebp - 0x10], ecx */
    edi = MEM32(eax + 0x8); /* 0x005DA7A2: mov edi, dword ptr [eax + 8] */
    eax = MEM32(ebx); /* 0x005DA7A5: mov eax, dword ptr [ebx] */
    MEM32(ecx) = eax; /* 0x005DA7A7: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x005DA7A9: mov eax, dword ptr [ebx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005DA7AC: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebx + 0x8); /* 0x005DA7AF: mov eax, dword ptr [ebx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005DA7B2: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebx + 0xC); /* 0x005DA7B5: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x005DA7B8: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebx + 0x10); /* 0x005DA7BB: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x005DA7BE: mov dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005DA7C1: add ecx, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x005DA7C4: push edx */
    RECOMP_CALL(sub_004E6D70); /* 0x005DA7C5: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005DA7CA: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi); /* 0x005DA7D1: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA7D3: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA7D6: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = edi; /* 0x005DA7DD: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005DA7DF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x24), 0 */ /* 0x005DA7E2: cmp byte ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x24)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA7F0; /* 0x005DA7E6: jne 0x5da7f0 */
L_005DA7E8:
    eax = MEM32(esi + 0x10); /* 0x005DA7E8: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax); /* 0x005DA7EB: mov eax, dword ptr [eax] */
    MEM32(esi + 0x10) = eax; /* 0x005DA7ED: mov dword ptr [esi + 0x10], eax */
L_005DA7F0:
    eax = MEM32(esi + 0x10); /* 0x005DA7F0: mov eax, dword ptr [esi + 0x10] */
    edx = ebx + 0x14; /* 0x005DA7F3: lea edx, [ebx + 0x14] */
    /* cmp eax, MEM32(esi + 0x14) */ /* 0x005DA7F6: cmp eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA794; /* 0x005DA7F9: jne 0x5da794 */
L_005DA7FB:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA7FB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA7FE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA805: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA806: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA807: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DA808: pop ebx */
    esp = ebp; /* 0x005DA809: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA80B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DA80C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DA810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA810u);

L_005DA810:
    PUSH32(esp, ebp); /* 0x005DA810: push ebp */
    ebp = esp; /* 0x005DA811: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA813: push -1 */
    PUSH32(esp, 0x007AF040u); /* 0x005DA815: push 0x7af040 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA81A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA820: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005DA821: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DA824: push ebx */
    PUSH32(esp, esi); /* 0x005DA825: push esi */
    PUSH32(esp, edi); /* 0x005DA826: push edi */
    eax = MEM32(0x855000); /* 0x005DA827: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA82C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DA82E: push eax */
    eax = ebp + (-0xC); /* 0x005DA82F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA832: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DA838: mov edi, ecx */
    esi = MEM32(ebp + 0x10); /* 0x005DA83A: mov esi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x005DA83D: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA908; /* 0x005DA841: je 0x5da908 */
L_005DA847:
    SET_LO8(ebx, MEM8(ebp + 0xC)); /* 0x005DA847: mov bl, byte ptr [ebp + 0xc] */
    /* cmp LO8(ebx), 2 */ /* 0x005DA84A: cmp bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA908; /* 0x005DA84D: je 0x5da908 */
L_005DA853:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA853: push dword ptr [ebp + 8] */
    ecx = edi + 0x1C; /* 0x005DA856: lea ecx, [edi + 0x1c] */
    RECOMP_CALL(sub_005DBD30); /* 0x005DA859: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x28; /* 0x005DA85E: lea ecx, [edi + 0x28] */
    MEM8(eax + 0x2) = (uint8_t)(LO8(ebx)); /* 0x005DA861: mov byte ptr [eax + 2], bl */
    /* cmp ecx, esi */ /* 0x005DA864: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DA872; /* 0x005DA866: je 0x5da872 */
L_005DA868:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA868: push -1 */
    PUSH32(esp, 0); /* 0x005DA86A: push 0 */
    PUSH32(esp, esi); /* 0x005DA86C: push esi */
    RECOMP_CALL(sub_0040A030); /* 0x005DA86D: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005DA872:
    ecx = ebp + (-0x30); /* 0x005DA872: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DA875: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA87A: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x30); /* 0x005DA881: lea ecx, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DA884: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DA887: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x24)), 7 */ /* 0x005DA88C: test byte ptr [ebp - 0x24], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x005DA890: mov byte ptr [ebp + 0xc], bl */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DA8B3; /* 0x005DA893: jne 0x5da8b3 */
L_005DA895:
    PUSH32(esp, 8); /* 0x005DA895: push 8 */
    ecx = ebp + (-0x30); /* 0x005DA897: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D70); /* 0x005DA89A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x005DA89F: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005DA8A2: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005DA8A5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005DA8A5: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x005DA8A8: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x005DA8AB: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 8; /* 0x005DA8AD: add dword ptr [ebp - 0x24], 8 */
    _flag_k = FK_ADD;
    goto L_005DA8C2; /* 0x005DA8B1: jmp 0x5da8c2 */
L_005DA8B3:
    PUSH32(esp, ecx); /* 0x005DA8B3: push ecx */
    PUSH32(esp, 8); /* 0x005DA8B4: push 8 */
    eax = ebp + 0xC; /* 0x005DA8B6: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005DA8B9: push eax */
    ecx = ebp + (-0x30); /* 0x005DA8BA: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005DA8BD: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005DA8C2:
    PUSH32(esp, esi); /* 0x005DA8C2: push esi */
    ecx = ebp + (-0x30); /* 0x005DA8C3: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F56D0); /* 0x005DA8C6: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x005DA8CB: lea eax, [ebp - 0x30] */
    ecx = edi; /* 0x005DA8CE: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DA8D0: push eax */
    PUSH32(esp, 0x333u); /* 0x005DA8D1: push 0x333 */
    RECOMP_CALL(sub_005DA750); /* 0x005DA8D6: call 0x5da750 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DA8DB: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x1C)); /* 0x005DA8E2: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005DA8E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DA908; /* 0x005DA8E7: je 0x5da908 */
L_005DA8E9:
    PUSH32(esp, eax); /* 0x005DA8E9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DA8EA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DA8F0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DA8F3: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DA8FA: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005DA901: mov dword ptr [ebp - 0x14], 0 */
L_005DA908:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DA908: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DA90B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DA912: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DA913: pop edi */
    esi = POP32_VAL(esp); /* 0x005DA914: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DA915: pop ebx */
    esp = ebp; /* 0x005DA916: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DA918: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DA919: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DA920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DA920u);

L_005DA920:
    PUSH32(esp, ebp); /* 0x005DA920: push ebp */
    ebp = esp; /* 0x005DA921: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DA923: push -1 */
    PUSH32(esp, 0x007AF0C1u); /* 0x005DA925: push 0x7af0c1 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DA92A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DA930: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB4u; /* 0x005DA931: sub esp, 0xb4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DA937: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DA93C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005DA93E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005DA941: push ebx */
    PUSH32(esp, esi); /* 0x005DA942: push esi */
    PUSH32(esp, edi); /* 0x005DA943: push edi */
    PUSH32(esp, eax); /* 0x005DA944: push eax */
    eax = ebp + (-0xC); /* 0x005DA945: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DA948: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DA94E: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x005DA950: mov eax, dword ptr [esi + 0x1c] */
    ebx = esi + 0x1C; /* 0x005DA953: lea ebx, [esi + 0x1c] */
    ecx = ebx; /* 0x005DA956: mov ecx, ebx */
    MEM32(ebp + (-0xB0)) = ebx; /* 0x005DA958: mov dword ptr [ebp - 0xb0], ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005DA95E: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_005DC1C0); /* 0x005DA961: call 0x5dc1c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005DA966: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x4) = eax; /* 0x005DA968: mov dword ptr [eax + 4], eax */
    eax = MEM32(ebx); /* 0x005DA96B: mov eax, dword ptr [ebx] */
    MEM32(eax) = eax; /* 0x005DA96D: mov dword ptr [eax], eax */
    eax = MEM32(ebx); /* 0x005DA96F: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x8) = eax; /* 0x005DA971: mov dword ptr [eax + 8], eax */
    MEM32(ebx + 0x4) = 0; /* 0x005DA974: mov dword ptr [ebx + 4], 0 */
    ecx = MEM32(esi + 0xC); /* 0x005DA97B: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005DA97E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x005DA980: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x005DA983: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x005DA985: mov edi, dword ptr [eax + 4] */
    /* cmp esi, edi */ /* 0x005DA988: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DAADF; /* 0x005DA98A: je 0x5daadf */
L_005DA990:
    eax = ebp + (-0xA8); /* 0x005DA990: lea eax, [ebp - 0xa8] */
    MEM32(ebp + (-0xB8)) = eax; /* 0x005DA996: mov dword ptr [ebp - 0xb8], eax */
    eax = ebp + (-0xA0); /* 0x005DA99C: lea eax, [ebp - 0xa0] */
    MEM32(ebp + (-0xB4)) = eax; /* 0x005DA9A2: mov dword ptr [ebp - 0xb4], eax */
    eax = ebp + (-0x90); /* 0x005DA9A8: lea eax, [ebp - 0x90] */
    MEM32(ebp + (-0xBC)) = eax; /* 0x005DA9AE: mov dword ptr [ebp - 0xbc], eax */
L_005DA9B4:
    PUSH32(esp, esi); /* 0x005DA9B4: push esi */
    ecx = ebp + (-0x80); /* 0x005DA9B5: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005DA9B8: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DA9BD: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x005DA9C4: mov dword ptr [ebp - 0xa8], 0 */
    MEM32(ebp + (-0xA4)) = 0; /* 0x005DA9CE: mov dword ptr [ebp - 0xa4], 0 */
    MEM32(ebp + (-0xA0)) = 0; /* 0x005DA9D8: mov dword ptr [ebp - 0xa0], 0 */
    MEM32(ebp + (-0x9C)) = 0; /* 0x005DA9E2: mov dword ptr [ebp - 0x9c], 0 */
    MEM32(ebp + (-0x98)) = 0; /* 0x005DA9EC: mov dword ptr [ebp - 0x98], 0 */
    MEM32(ebp + (-0x94)) = 0; /* 0x005DA9F6: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DAA00: mov byte ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x90)) = 0; /* 0x005DAA04: mov dword ptr [ebp - 0x90], 0 */
    MEM32(ebp + (-0x8C)) = 0; /* 0x005DAA0E: mov dword ptr [ebp - 0x8c], 0 */
    MEM32(ebp + (-0x88)) = 0; /* 0x005DAA18: mov dword ptr [ebp - 0x88], 0 */
    MEM32(ebp + (-0x84)) = 0; /* 0x005DAA22: mov dword ptr [ebp - 0x84], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005DAA2C: mov byte ptr [ebp - 4], 5 */
    MEM16(ebp + (-0xAC)) = (uint16_t)(1); /* 0x005DAA30: mov word ptr [ebp - 0xac], 1 */
    MEM8(ebp + (-0xAA)) = (uint8_t)(2); /* 0x005DAA39: mov byte ptr [ebp - 0xaa], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005DAA40: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x80); /* 0x005DAA44: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x005DAA47: push eax */
    ecx = ebx; /* 0x005DAA48: mov ecx, ebx */
    RECOMP_CALL(sub_005DBD30); /* 0x005DAA4A: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM8(ebp + (-0xAC)); /* 0x005DAA4F: movzx ecx, byte ptr [ebp - 0xac] */
    ebx = eax; /* 0x005DAA56: mov ebx, eax */
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x005DAA58: mov byte ptr [ebx], cl */
    ecx = (uint32_t)MEM8(ebp + (-0xAB)); /* 0x005DAA5A: movzx ecx, byte ptr [ebp - 0xab] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x005DAA61: mov byte ptr [ebx + 1], cl */
    ecx = (uint32_t)MEM8(ebp + (-0xAA)); /* 0x005DAA64: movzx ecx, byte ptr [ebp - 0xaa] */
    MEM8(ebx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x005DAA6B: mov byte ptr [ebx + 2], cl */
    ecx = MEM32(ebp + (-0xA8)); /* 0x005DAA6E: mov ecx, dword ptr [ebp - 0xa8] */
    MEM32(ebx + 0x4) = ecx; /* 0x005DAA74: mov dword ptr [ebx + 4], ecx */
    ecx = ebx + 0x10; /* 0x005DAA77: lea ecx, [ebx + 0x10] */
    eax = MEM32(ebp + (-0xA4)); /* 0x005DAA7A: mov eax, dword ptr [ebp - 0xa4] */
    MEM32(ebx + 0x8) = eax; /* 0x005DAA80: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0xA0)); /* 0x005DAA83: mov eax, dword ptr [ebp - 0xa0] */
    MEM32(ebx + 0xC) = eax; /* 0x005DAA89: mov dword ptr [ebx + 0xc], eax */
    eax = ebp + (-0x9C); /* 0x005DAA8C: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x005DAA92: push eax */
    RECOMP_CALL(sub_005DBAE0); /* 0x005DAA93: call 0x5dbae0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x90)); /* 0x005DAA98: mov eax, dword ptr [ebp - 0x90] */
    ecx = ebx + 0x20; /* 0x005DAA9E: lea ecx, [ebx + 0x20] */
    MEM32(ebx + 0x1C) = eax; /* 0x005DAAA1: mov dword ptr [ebx + 0x1c], eax */
    eax = ebp + (-0x8C); /* 0x005DAAA4: lea eax, [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x005DAAAA: push eax */
    RECOMP_CALL(sub_005DBAE0); /* 0x005DAAAB: call 0x5dbae0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DAAB0: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0xA8); /* 0x005DAAB4: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_005D6D20); /* 0x005DAABA: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DAABF: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005DAAC6: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005DAAC9: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xB0)); /* 0x005DAACE: mov ebx, dword ptr [ebp - 0xb0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005DAAD4: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005DAAD7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DA9B4; /* 0x005DAAD9: jne 0x5da9b4 */
L_005DAADF:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DAADF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DAAE2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DAAE9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DAAEA: pop edi */
    esi = POP32_VAL(esp); /* 0x005DAAEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DAAEC: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005DAAED: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DAAF0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DAAF2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DAAF7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DAAF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DAAFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DAB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DAB00u);

L_005DAB00:
    PUSH32(esp, ebp); /* 0x005DAB00: push ebp */
    ebp = esp; /* 0x005DAB01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005DAB03: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005DAB04: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005DAB07: push edi */
    edi = ecx; /* 0x005DAB08: mov edi, ecx */
    eax = (uint32_t)MEM8(esi); /* 0x005DAB0A: movzx eax, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x005DAB0D: mov byte ptr [edi], al */
    ecx = edi + 0x10; /* 0x005DAB0F: lea ecx, [edi + 0x10] */
    eax = (uint32_t)MEM8(esi + 0x1); /* 0x005DAB12: movzx eax, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x005DAB16: mov byte ptr [edi + 1], al */
    eax = (uint32_t)MEM8(esi + 0x2); /* 0x005DAB19: movzx eax, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x005DAB1D: mov byte ptr [edi + 2], al */
    eax = MEM32(esi + 0x4); /* 0x005DAB20: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x005DAB23: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi + 0x8); /* 0x005DAB26: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x005DAB29: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x005DAB2C: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x005DAB2F: mov dword ptr [edi + 0xc], eax */
    eax = esi + 0x10; /* 0x005DAB32: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DAB35: push eax */
    RECOMP_CALL(sub_005DBAE0); /* 0x005DAB36: call 0x5dbae0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x005DAB3B: mov eax, dword ptr [esi + 0x1c] */
    ecx = edi + 0x20; /* 0x005DAB3E: lea ecx, [edi + 0x20] */
    MEM32(edi + 0x1C) = eax; /* 0x005DAB41: mov dword ptr [edi + 0x1c], eax */
    eax = esi + 0x20; /* 0x005DAB44: lea eax, [esi + 0x20] */
    PUSH32(esp, eax); /* 0x005DAB47: push eax */
    RECOMP_CALL(sub_005DBAE0); /* 0x005DAB48: call 0x5dbae0 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x005DAB4D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005DAB4F: pop edi */
    esi = POP32_VAL(esp); /* 0x005DAB50: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DAB51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DAB52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DAB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DAB60u);

L_005DAB60:
    PUSH32(esp, ebp); /* 0x005DAB60: push ebp */
    ebp = esp; /* 0x005DAB61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DAB63: push -1 */
    PUSH32(esp, 0x007AEF30u); /* 0x005DAB65: push 0x7aef30 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DAB6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DAB70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005DAB71: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DAB74: push esi */
    eax = MEM32(0x855000); /* 0x005DAB75: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DAB7A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DAB7C: push eax */
    eax = ebp + (-0xC); /* 0x005DAB7D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DAB80: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DAB86: mov esi, ecx */
    ecx = ebp + (-0x30); /* 0x005DAB88: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DAB8B: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DAB90: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x30); /* 0x005DAB97: lea ecx, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DAB9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DAB9D: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x005DABA2: lea eax, [ebp - 0x30] */
    ecx = esi; /* 0x005DABA5: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005DABA7: push eax */
    PUSH32(esp, 0x32Bu); /* 0x005DABA8: push 0x32b */
    RECOMP_CALL(sub_005DA750); /* 0x005DABAD: call 0x5da750 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DABB2: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x1C)); /* 0x005DABB9: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005DABBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DABDF; /* 0x005DABBE: je 0x5dabdf */
L_005DABC0:
    PUSH32(esp, eax); /* 0x005DABC0: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DABC1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DABC7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DABCA: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DABD1: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005DABD8: mov dword ptr [ebp - 0x14], 0 */
L_005DABDF:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DABDF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DABE2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DABE9: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DABEA: pop esi */
    esp = ebp; /* 0x005DABEB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DABED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DABEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DAC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DAC00u);

L_005DAC00:
    PUSH32(esp, ebp); /* 0x005DAC00: push ebp */
    ebp = esp; /* 0x005DAC01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DAC03: push -1 */
    PUSH32(esp, 0x007AF190u); /* 0x005DAC05: push 0x7af190 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DAC0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DAC10: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x138u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x138u; /* 0x005DAC11: sub esp, 0x138 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DAC17: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DAC1C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005DAC1E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005DAC21: push ebx */
    PUSH32(esp, esi); /* 0x005DAC22: push esi */
    PUSH32(esp, edi); /* 0x005DAC23: push edi */
    PUSH32(esp, eax); /* 0x005DAC24: push eax */
    eax = ebp + (-0xC); /* 0x005DAC25: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DAC28: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005DAC2E: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DAC30: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + 0x8); /* 0x005DAC37: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x328u */ /* 0x005DAC3A: cmp eax, 0x328 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DB16C; /* 0x005DAC3F: ja 0x5db16c */
L_005DAC45:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB159; /* 0x005DAC45: je 0x5db159 */
L_005DAC4B:
    /* cmp eax, 0x208u */ /* 0x005DAC4B: cmp eax, 0x208 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DACEC; /* 0x005DAC50: ja 0x5dacec */
L_005DAC56:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DACE3; /* 0x005DAC56: je 0x5dace3 */
L_005DAC5C:
    /* cmp eax, 9 */ /* 0x005DAC5C: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DACCC; /* 0x005DAC5F: je 0x5daccc */
L_005DAC61:
    /* cmp eax, 0x1FEu */ /* 0x005DAC61: cmp eax, 0x1fe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DAC66: jne 0x5db3eb */
L_005DAC6C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DAC6C: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xD4); /* 0x005DAC76: lea eax, [ebp - 0xd4] */
    MEM8(ebp + (-0xCD)) = (uint8_t)(0); /* 0x005DAC7C: mov byte ptr [ebp - 0xcd], 0 */
    ecx = ebp + 0xC; /* 0x005DAC83: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DAC86: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DAC90: push eax */
    MEM32(ebp + (-0xD4)) = 0; /* 0x005DAC91: mov dword ptr [ebp - 0xd4], 0 */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DAC9B: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_00431EA0); /* 0x005DACA0: call 0x431ea0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x118); /* 0x005DACA5: lea ecx, [ebp - 0x118] */
    PUSH32(esp, ecx); /* 0x005DACAB: push ecx */
    ecx = eax; /* 0x005DACAC: mov ecx, eax */
    edx = MEM32(eax); /* 0x005DACAE: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DACB0: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005DACB3: push eax */
    ecx = ebp + (-0xD4); /* 0x005DACB4: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_00431E80); /* 0x005DACBA: call 0x431e80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DACBF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB1E0; /* 0x005DACC1: jne 0x5db1e0 */
L_005DACC7:
    goto L_005DB3EB; /* 0x005DACC7: jmp 0x5db3eb */
L_005DACCC:
    ecx = ebx; /* 0x005DACCC: mov ecx, ebx */
    MEM8(ebx + 0x2) = (uint8_t)(0); /* 0x005DACCE: mov byte ptr [ebx + 2], 0 */
    RECOMP_CALL(sub_005DA3C0); /* 0x005DACD2: call 0x5da3c0 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x005DACD7: mov ecx, ebx */
    RECOMP_CALL(sub_005DA920); /* 0x005DACD9: call 0x5da920 */
    RECOMP_FLAGS_IN();
    goto L_005DB3E6; /* 0x005DACDE: jmp 0x5db3e6 */
L_005DACE3:
    MEM8(ebx + 0x1) = (uint8_t)(0); /* 0x005DACE3: mov byte ptr [ebx + 1], 0 */
    goto L_005DB3EB; /* 0x005DACE7: jmp 0x5db3eb */
L_005DACEC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20Au; /* 0x005DACEC: sub eax, 0x20a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005DB0C8; /* 0x005DACF1: je 0x5db0c8 */
L_005DACF7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005DACF7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_005DAF91; /* 0x005DACF8: je 0x5daf91 */
L_005DACFE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005DACFE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DACFF: jne 0x5db3eb */
L_005DAD05:
    MEM32(ebp + (-0x1C)) = eax; /* 0x005DAD05: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x005DAD08: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DAD0B: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = eax; /* 0x005DAD12: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x2C)) = (uint8_t)(LO8(eax)); /* 0x005DAD15: mov byte ptr [ebp - 0x2c], al */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005DAD18: mov byte ptr [ebp - 4], 0xc */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005DAD1C: mov dword ptr [ebp - 0x4c], eax */
    MEM32(ebp + (-0x48)) = eax; /* 0x005DAD1F: mov dword ptr [ebp - 0x48], eax */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005DAD22: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005DAD29: mov dword ptr [ebp - 0x4c], eax */
    MEM8(ebp + (-0x5C)) = (uint8_t)(LO8(eax)); /* 0x005DAD2C: mov byte ptr [ebp - 0x5c], al */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005DAD2F: mov byte ptr [ebp - 4], 0xd */
    ecx = ebp + 0xC; /* 0x005DAD33: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DAD36: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0xCD)) = (uint8_t)(LO8(eax)); /* 0x005DAD40: mov byte ptr [ebp - 0xcd], al */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DAD46: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD4)) = eax; /* 0x005DAD50: mov dword ptr [ebp - 0xd4], eax */
    eax = ebp + (-0xD4); /* 0x005DAD56: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DAD5C: push eax */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DAD5D: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xD8); /* 0x005DAD62: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x005DAD68: push eax */
    ecx = ebp + 0xC; /* 0x005DAD69: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5260); /* 0x005DAD6C: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x005DAD71: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DAD74: push eax */
    ecx = ebp + 0xC; /* 0x005DAD75: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5420); /* 0x005DAD78: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x5C); /* 0x005DAD7D: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x005DAD80: push eax */
    ecx = ebp + 0xC; /* 0x005DAD81: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5420); /* 0x005DAD84: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD4); /* 0x005DAD89: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_0046D220); /* 0x005DAD8F: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DAD94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DAE8C; /* 0x005DAD96: je 0x5dae8c */
L_005DAD9C:
    edi = MEM32(ebp + (-0xD8)); /* 0x005DAD9C: mov edi, dword ptr [ebp - 0xd8] */
    /* cmp edi, 3 */ /* 0x005DADA2: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DAE8C; /* 0x005DADA5: ja 0x5dae8c */
L_005DADAB:
    eax = ebp + (-0xD4); /* 0x005DADAB: lea eax, [ebp - 0xd4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x1Cu; /* 0x005DADB1: add ebx, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DADB4: push eax */
    eax = ebp + (-0xD8); /* 0x005DADB5: lea eax, [ebp - 0xd8] */
    ecx = ebx; /* 0x005DADBB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DADBD: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005DADBE: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD8)); /* 0x005DADC3: mov eax, dword ptr [ebp - 0xd8] */
    /* cmp eax, MEM32(ebx) */ /* 0x005DADC9: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DADDC; /* 0x005DADCB: je 0x5daddc */
L_005DADCD:
    PUSH32(esp, eax); /* 0x005DADCD: push eax */
    eax = ebp + (-0xDC); /* 0x005DADCE: lea eax, [ebp - 0xdc] */
    ecx = ebx; /* 0x005DADD4: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DADD6: push eax */
    RECOMP_CALL(sub_005DBE30); /* 0x005DADD7: call 0x5dbe30 */
    RECOMP_FLAGS_IN();
L_005DADDC:
    eax = MEM32(0x8692E8); /* 0x005DADDC: mov eax, dword ptr [0x8692e8] */
    /* test eax, eax */ /* 0x005DADE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DADF5; /* 0x005DADE3: je 0x5dadf5 */
L_005DADE5:
    /* cmp MEM8(eax + 0xB0), 0 */ /* 0x005DADE5: cmp byte ptr [eax + 0xb0], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xB0)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DADF5; /* 0x005DADEC: je 0x5dadf5 */
L_005DADEE:
    esi = 1; /* 0x005DADEE: mov esi, 1 */
    goto L_005DADF7; /* 0x005DADF3: jmp 0x5dadf7 */
L_005DADF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005DADF5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_005DADF7:
    eax = MEM32(esi * 4 + 0x7CEF18); /* 0x005DADF7: mov eax, dword ptr [esi*4 + 0x7cef18] */
    ecx = edi + edi * 2; /* 0x005DADFE: lea ecx, [edi + edi*2] */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005DAE01: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + (-0x2C); /* 0x005DAE05: lea edx, [ebp - 0x2c] */
    ecx = eax + ecx * 8; /* 0x005DAE08: lea ecx, [eax + ecx*8] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x2C)); } /* 0x005DAE0B: cmovae edx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005DAE0F: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DAE17; /* 0x005DAE13: jb 0x5dae17 */
L_005DAE15:
    ecx = MEM32(ecx); /* 0x005DAE15: mov ecx, dword ptr [ecx] */
L_005DAE17:
    eax = esi + esi * 2; /* 0x005DAE17: lea eax, [esi + esi*2] */
    /* cmp MEM32(eax * 8 + 0x865CCC), 0x10u */ /* 0x005DAE1A: cmp dword ptr [eax*8 + 0x865ccc], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax * 8 + 0x865CCC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = eax * 8 + 0x865CB8; /* 0x005DAE22: lea eax, [eax*8 + 0x865cb8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005DAE2D; /* 0x005DAE29: jb 0x5dae2d */
L_005DAE2B:
    eax = MEM32(eax); /* 0x005DAE2B: mov eax, dword ptr [eax] */
L_005DAE2D:
    PUSH32(esp, edx); /* 0x005DAE2D: push edx */
    PUSH32(esp, 0); /* 0x005DAE2E: push 0 */
    PUSH32(esp, ecx); /* 0x005DAE30: push ecx */
    PUSH32(esp, eax); /* 0x005DAE31: push eax */
    PUSH32(esp, MEM32(0x8759B0)); /* 0x005DAE32: push dword ptr [0x8759b0] */
    RECOMP_CALL(sub_0066F780); /* 0x005DAE38: call 0x66f780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x005DAE3D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x44); /* 0x005DAE40: lea ecx, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x005DAE43: push eax */
    RECOMP_CALL(sub_00409FA0); /* 0x005DAE44: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005DAE49: mov byte ptr [ebp - 4], 0xe */
    /* cmp MEM32(0x871984), 0 */ /* 0x005DAE4D: cmp dword ptr [0x871984], 0 */
    _flag_a = (uint32_t)(MEM32(0x871984)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DAE7C; /* 0x005DAE54: je 0x5dae7c */
L_005DAE56:
    PUSH32(esp, 0x00FFA800u); /* 0x005DAE56: push 0xffa800 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DAE5B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x44); /* 0x005DAE5E: lea eax, [ebp - 0x44] */
    ecx = esp; /* 0x005DAE61: mov ecx, esp */
    MEM32(ebp + (-0xDC)) = esp; /* 0x005DAE63: mov dword ptr [ebp - 0xdc], esp */
    PUSH32(esp, eax); /* 0x005DAE69: push eax */
    RECOMP_CALL(sub_00419630); /* 0x005DAE6A: call 0x419630 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x005DAE6F: mov byte ptr [ebp - 4], 0xf */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005DAE73: mov byte ptr [ebp - 4], 0xe */
    RECOMP_CALL(sub_006644D0); /* 0x005DAE77: call 0x6644d0 */
    RECOMP_FLAGS_IN();
L_005DAE7C:
    /* test esi, esi */ /* 0x005DAE7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DAE98; /* 0x005DAE7E: jne 0x5dae98 */
L_005DAE80:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005DAE80: mov byte ptr [ebp - 4], 0xd */
    ecx = ebp + (-0x44); /* 0x005DAE84: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0040A000); /* 0x005DAE87: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_005DAE8C:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005DAE8C: mov byte ptr [ebp - 4], 0xc */
    ecx = ebp + (-0x5C); /* 0x005DAE90: lea ecx, [ebp - 0x5c] */
    goto L_005DB0B2; /* 0x005DAE93: jmp 0x5db0b2 */
L_005DAE98:
    RECOMP_CALL(sub_0040A630); /* 0x005DAE98: call 0x40a630 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005DAE9D: mov edi, eax */
    eax = ebp + (-0xD4); /* 0x005DAE9F: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DAEA5: push eax */
    ecx = edi; /* 0x005DAEA6: mov ecx, edi */
    RECOMP_CALL(sub_0047A810); /* 0x005DAEA8: call 0x47a810 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x4); /* 0x005DAEAD: mov ecx, dword ptr [edi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x005DAEB0: mov bl, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005DAEB2: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x005DAEB4: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    MEM8(ebp + (-0xDC)) = (uint8_t)(LO8(ebx)); /* 0x005DAEB7: mov byte ptr [ebp - 0xdc], bl */
    /* cmp LO8(ebx), LO8(ecx) */ /* 0x005DAEBD: cmp bl, cl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DAE80; /* 0x005DAEBF: jae 0x5dae80 */
L_005DAEC1:
    eax = MEM32(0x87C79C); /* 0x005DAEC1: mov eax, dword ptr [0x87c79c] */
    ecx = edi; /* 0x005DAEC6: mov ecx, edi */
    eax = MEM32(eax + 0x64); /* 0x005DAEC8: mov eax, dword ptr [eax + 0x64] */
    eax = MEM32(eax + 0x4); /* 0x005DAECB: mov eax, dword ptr [eax + 4] */
    SET_LO8(eax, MEM8(eax + 0x10)); /* 0x005DAECE: mov al, byte ptr [eax + 0x10] */
    MEM8(ebp + (-0xD8)) = (uint8_t)(LO8(eax)); /* 0x005DAED1: mov byte ptr [ebp - 0xd8], al */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005DAED7: push dword ptr [ebp - 0xd8] */
    RECOMP_CALL(sub_0047A7E0); /* 0x005DAEDD: call 0x47a7e0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x8692E8); /* 0x005DAEE2: mov edx, dword ptr [0x8692e8] */
    ecx = MEM32(eax + 0xCAB0); /* 0x005DAEE8: mov ecx, dword ptr [eax + 0xcab0] */
    /* cmp MEM32(edx), 5 */ /* 0x005DAEEE: cmp dword ptr [edx], 5 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x6B70); /* 0x005DAEF1: mov eax, dword ptr [ecx + 0x6b70] */
    MEM32(ebp + (-0xD4)) = eax; /* 0x005DAEF7: mov dword ptr [ebp - 0xd4], eax */
    eax = MEM32(ecx + 0x6B74); /* 0x005DAEFD: mov eax, dword ptr [ecx + 0x6b74] */
    MEM32(ebp + (-0xD0)) = eax; /* 0x005DAF03: mov dword ptr [ebp - 0xd0], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DAF29; /* 0x005DAF09: jne 0x5daf29 */
L_005DAF0B:
    eax = (int32_t)(int8_t)MEM8(edx + 0xC4); /* 0x005DAF0B: movsx eax, byte ptr [edx + 0xc4] */
    ecx = (uint32_t)LO8(ebx); /* 0x005DAF12: movzx ecx, bl */
    /* cmp eax, ecx */ /* 0x005DAF15: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DAF29; /* 0x005DAF17: jne 0x5daf29 */
L_005DAF19:
    MEM8(edx + 0xC4) = (uint8_t)(0xFFu); /* 0x005DAF19: mov byte ptr [edx + 0xc4], 0xff */
    MEM16(edx + 0xD4) = (uint16_t)(0x101u); /* 0x005DAF20: mov word ptr [edx + 0xd4], 0x101 */
L_005DAF29:
    PUSH32(esp, MEM32(ebp + (-0xDC))); /* 0x005DAF29: push dword ptr [ebp - 0xdc] */
    ecx = edi; /* 0x005DAF2F: mov ecx, edi */
    RECOMP_CALL(sub_0047A710); /* 0x005DAF31: call 0x47a710 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xD4); /* 0x005DAF36: lea eax, [ebp - 0xd4] */
    ecx = edi; /* 0x005DAF3C: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DAF3E: push eax */
    RECOMP_CALL(sub_0047A810); /* 0x005DAF3F: call 0x47a810 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005DAF44: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)LO8(eax); /* 0x005DAF46: movzx ecx, al */
    /* cmp LO8(eax), 0x10u */ /* 0x005DAF49: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x005DAF4B: cmove ecx, edx */
    MEM8(ebp + (-0xDC)) = (uint8_t)(LO8(ecx)); /* 0x005DAF4E: mov byte ptr [ebp - 0xdc], cl */
    ecx = edi; /* 0x005DAF54: mov ecx, edi */
    esi = MEM32(ebp + (-0xDC)); /* 0x005DAF56: mov esi, dword ptr [ebp - 0xdc] */
    PUSH32(esp, esi); /* 0x005DAF5C: push esi */
    RECOMP_CALL(sub_0047A7E0); /* 0x005DAF5D: call 0x47a7e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005DAF62: push 1 */
    ecx = MEM32(eax + 0xCAB0); /* 0x005DAF64: mov ecx, dword ptr [eax + 0xcab0] */
    eax = MEM32(0x87C79C); /* 0x005DAF6A: mov eax, dword ptr [0x87c79c] */
    PUSH32(esp, ecx); /* 0x005DAF6F: push ecx */
    eax = MEM32(eax + 0x64); /* 0x005DAF70: mov eax, dword ptr [eax + 0x64] */
    ecx = MEM32(eax + 0xC); /* 0x005DAF73: mov ecx, dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_0042A9F0); /* 0x005DAF76: call 0x42a9f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87C79C); /* 0x005DAF7B: mov eax, dword ptr [0x87c79c] */
    PUSH32(esp, esi); /* 0x005DAF80: push esi */
    eax = MEM32(eax + 0x64); /* 0x005DAF81: mov eax, dword ptr [eax + 0x64] */
    ecx = MEM32(eax + 0x4); /* 0x005DAF84: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_005ABD40); /* 0x005DAF87: call 0x5abd40 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005DAE80; /* 0x005DAF8C: jmp 0x5dae80 */
L_005DAF91:
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DAF91: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DAF98: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DAF9F: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DAFA6: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DAFAD: mov byte ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005DAFB1: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0xD4); /* 0x005DAFB5: lea eax, [ebp - 0xd4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DAFBB: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0xC; /* 0x005DAFC5: lea ecx, [ebp + 0xc] */
    MEM8(ebp + (-0xCD)) = (uint8_t)(0); /* 0x005DAFC8: mov byte ptr [ebp - 0xcd], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DAFCF: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DAFD9: push eax */
    MEM32(ebp + (-0xD4)) = 0; /* 0x005DAFDA: mov dword ptr [ebp - 0xd4], 0 */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DAFE4: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x005DAFE9: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DAFEC: push eax */
    ecx = ebp + 0xC; /* 0x005DAFED: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5420); /* 0x005DAFF0: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD4); /* 0x005DAFF5: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_0046D220); /* 0x005DAFFB: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB000: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB014; /* 0x005DB002: jne 0x5db014 */
L_005DB004:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x005DB004: mov byte ptr [ebp - 4], al */
    ecx = ebp + (-0x2C); /* 0x005DB007: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0040A000); /* 0x005DB00A: call 0x40a000 */
    RECOMP_FLAGS_IN();
    goto L_005DB3EB; /* 0x005DB00F: jmp 0x5db3eb */
L_005DB014:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005DB014: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x005DB018: lea eax, [ebp - 0x2c] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x2C)); } /* 0x005DB01B: cmovae eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DB01F: push eax */
    PUSH32(esp, 0); /* 0x005DB020: push 0 */
    PUSH32(esp, 0x007F5F1Cu); /* 0x005DB022: push 0x7f5f1c */
    PUSH32(esp, 0x007ED340u); /* 0x005DB027: push 0x7ed340 */
    PUSH32(esp, MEM32(0x8759B0)); /* 0x005DB02C: push dword ptr [0x8759b0] */
    RECOMP_CALL(sub_0066F780); /* 0x005DB032: call 0x66f780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x005DB037: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x44); /* 0x005DB03A: lea ecx, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x005DB03D: push eax */
    RECOMP_CALL(sub_00409FA0); /* 0x005DB03E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005DB043: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(0x871984), 0 */ /* 0x005DB047: cmp dword ptr [0x871984], 0 */
    _flag_a = (uint32_t)(MEM32(0x871984)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB076; /* 0x005DB04E: je 0x5db076 */
L_005DB050:
    PUSH32(esp, 0x00FFA800u); /* 0x005DB050: push 0xffa800 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DB055: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x44); /* 0x005DB058: lea eax, [ebp - 0x44] */
    ecx = esp; /* 0x005DB05B: mov ecx, esp */
    MEM32(ebp + (-0xDC)) = esp; /* 0x005DB05D: mov dword ptr [ebp - 0xdc], esp */
    PUSH32(esp, eax); /* 0x005DB063: push eax */
    RECOMP_CALL(sub_00419630); /* 0x005DB064: call 0x419630 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005DB069: mov byte ptr [ebp - 4], 9 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005DB06D: mov byte ptr [ebp - 4], 8 */
    RECOMP_CALL(sub_006644D0); /* 0x005DB071: call 0x6644d0 */
    RECOMP_FLAGS_IN();
L_005DB076:
    ecx = ebp + (-0x144); /* 0x005DB076: lea ecx, [ebp - 0x144] */
    RECOMP_CALL(sub_005D6C20); /* 0x005DB07C: call 0x5d6c20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005DB081: mov byte ptr [ebp - 4], 0xa */
    ecx = ebx + 0x1C; /* 0x005DB085: lea ecx, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x005DB088: push eax */
    eax = ebp + (-0xD4); /* 0x005DB089: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DB08F: push eax */
    RECOMP_CALL(sub_005DBD30); /* 0x005DB090: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB095: mov ecx, eax */
    RECOMP_CALL(sub_005DAB00); /* 0x005DB097: call 0x5dab00 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005DB09C: mov byte ptr [ebp - 4], 8 */
    ecx = ebp + (-0x140); /* 0x005DB0A0: lea ecx, [ebp - 0x140] */
    RECOMP_CALL(sub_005D6D20); /* 0x005DB0A6: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005DB0AB: mov byte ptr [ebp - 4], 7 */
    ecx = ebp + (-0x44); /* 0x005DB0AF: lea ecx, [ebp - 0x44] */
L_005DB0B2:
    RECOMP_CALL(sub_0040A000); /* 0x005DB0B2: call 0x40a000 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DB0B7: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x005DB0BB: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0040A000); /* 0x005DB0BE: call 0x40a000 */
    RECOMP_FLAGS_IN();
    goto L_005DB3EB; /* 0x005DB0C3: jmp 0x5db3eb */
L_005DB0C8:
    ecx = MEM32(ebx + 0xC); /* 0x005DB0C8: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x005DB0CB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x005DB0CD: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x005DB0D0: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x005DB0D2: mov edi, dword ptr [eax + 4] */
    /* cmp esi, edi */ /* 0x005DB0D5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB0D7: je 0x5db3eb */
L_005DB0DD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x1Cu; /* 0x005DB0DD: add ebx, 0x1c */
    _flag_k = FK_ADD;
L_005DB0E0:
    PUSH32(esp, esi); /* 0x005DB0E0: push esi */
    ecx = ebp + (-0xCC); /* 0x005DB0E1: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005DB0E7: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DB0EC: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x10C); /* 0x005DB0F0: lea ecx, [ebp - 0x10c] */
    RECOMP_CALL(sub_005D6C80); /* 0x005DB0F6: call 0x5d6c80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005DB0FB: mov byte ptr [ebp - 4], 4 */
    MEM16(ebp + (-0x110)) = (uint16_t)(1); /* 0x005DB0FF: mov word ptr [ebp - 0x110], 1 */
    MEM8(ebp + (-0x10E)) = (uint8_t)(2); /* 0x005DB108: mov byte ptr [ebp - 0x10e], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005DB10F: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x110); /* 0x005DB113: lea eax, [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x005DB119: push eax */
    eax = ebp + (-0xCC); /* 0x005DB11A: lea eax, [ebp - 0xcc] */
    ecx = ebx; /* 0x005DB120: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DB122: push eax */
    RECOMP_CALL(sub_005DBD30); /* 0x005DB123: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB128: mov ecx, eax */
    RECOMP_CALL(sub_005DAB00); /* 0x005DB12A: call 0x5dab00 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DB12F: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x10C); /* 0x005DB133: lea ecx, [ebp - 0x10c] */
    RECOMP_CALL(sub_005D6D20); /* 0x005DB139: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DB13E: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0xCC); /* 0x005DB142: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005DB148: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005DB14D: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005DB150: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB0E0; /* 0x005DB152: jne 0x5db0e0 */
L_005DB154:
    goto L_005DB3EB; /* 0x005DB154: jmp 0x5db3eb */
L_005DB159:
    /* cmp MEM8(ebx + 0x2), 0 */ /* 0x005DB159: cmp byte ptr [ebx + 2], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB15D: jne 0x5db3eb */
L_005DB163:
    MEM8(ebx + 0x2) = (uint8_t)(1); /* 0x005DB163: mov byte ptr [ebx + 2], 1 */
    goto L_005DB3EB; /* 0x005DB167: jmp 0x5db3eb */
L_005DB16C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFCD5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFCD5u; /* 0x005DB16C: add eax, 0xfffffcd5 */
    _flag_k = FK_ADD;
    /* cmp eax, 8 */ /* 0x005DB171: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB174: ja 0x5db3eb */
L_005DB17A:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5DB43C)); goto _ljump; }
L_005DB181:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DB181: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xD4); /* 0x005DB18B: lea eax, [ebp - 0xd4] */
    MEM8(ebp + (-0xCD)) = (uint8_t)(0); /* 0x005DB191: mov byte ptr [ebp - 0xcd], 0 */
    ecx = ebp + 0xC; /* 0x005DB198: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DB19B: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB1A5: push eax */
    MEM32(ebp + (-0xD4)) = 0; /* 0x005DB1A6: mov dword ptr [ebp - 0xd4], 0 */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DB1B0: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD4); /* 0x005DB1B5: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_0046D220); /* 0x005DB1BB: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB1C0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB1E0; /* 0x005DB1C2: je 0x5db1e0 */
L_005DB1C4:
    eax = ebp + (-0xD4); /* 0x005DB1C4: lea eax, [ebp - 0xd4] */
    ecx = ebx; /* 0x005DB1CA: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DB1CC: push eax */
    RECOMP_CALL(sub_005D7A90); /* 0x005DB1CD: call 0x5d7a90 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xD4); /* 0x005DB1D2: lea eax, [ebp - 0xd4] */
    ecx = ebx; /* 0x005DB1D8: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DB1DA: push eax */
    RECOMP_CALL(sub_005DAB60); /* 0x005DB1DB: call 0x5dab60 */
    RECOMP_FLAGS_IN();
L_005DB1E0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005DB1E0: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_005DB3ED; /* 0x005DB1E2: jmp 0x5db3ed */
L_005DB1E7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DB1E7: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0xCD)) = (uint8_t)(0); /* 0x005DB1F1: mov byte ptr [ebp - 0xcd], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DB1F8: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB202: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DB209: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0xD4)) = 0; /* 0x005DB210: mov dword ptr [ebp - 0xd4], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DB21A: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB221: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DB228: mov byte ptr [ebp - 0x2c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DB22C: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0xD4); /* 0x005DB230: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DB236: push eax */
    ecx = ebp + 0xC; /* 0x005DB237: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DB23A: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005DB23F: push 1 */
    PUSH32(esp, 0); /* 0x005DB241: push 0 */
    ecx = ebp + 0xC; /* 0x005DB243: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005DC520); /* 0x005DB246: call 0x5dc520 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0xD8)) = (uint8_t)(LO8(eax)); /* 0x005DB24B: mov byte ptr [ebp - 0xd8], al */
    ecx = ebp + 0xC; /* 0x005DB251: lea ecx, [ebp + 0xc] */
    eax = ebp + (-0x2C); /* 0x005DB254: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DB257: push eax */
    RECOMP_CALL(sub_005F5420); /* 0x005DB258: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD4); /* 0x005DB25D: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_0046D220); /* 0x005DB263: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB268: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB2D6; /* 0x005DB26A: je 0x5db2d6 */
L_005DB26C:
    eax = ebx + 0x28; /* 0x005DB26C: lea eax, [ebx + 0x28] */
    PUSH32(esp, eax); /* 0x005DB26F: push eax */
    ecx = ebp + (-0x44); /* 0x005DB270: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_00419630); /* 0x005DB273: call 0x419630 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DB278: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x005DB27C: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB291; /* 0x005DB280: je 0x5db291 */
L_005DB282:
    edx = ebp + (-0x2C); /* 0x005DB282: lea edx, [ebp - 0x2c] */
    ecx = ebp + (-0x44); /* 0x005DB285: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0045F700); /* 0x005DB288: call 0x45f700 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB28D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB2CA; /* 0x005DB28F: jne 0x5db2ca */
L_005DB291:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x005DB291: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB2CA; /* 0x005DB295: je 0x5db2ca */
L_005DB297:
    /* cmp MEM32(ebx + 0x44), 0 */ /* 0x005DB297: cmp dword ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB2CA; /* 0x005DB29B: jne 0x5db2ca */
L_005DB29D:
    ecx = MEM32(ebx + 0xC); /* 0x005DB29D: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x005DB2A0: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005DB2A2: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005DB2A5: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB2A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = ebx; /* 0x005DB2A9: mov ecx, ebx */
    eax = ebp + (-0x2C); /* 0x005DB2AB: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DB2AE: push eax */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005DB2AF: push dword ptr [ebp - 0xd8] */
    eax = ebp + (-0xD4); /* 0x005DB2B5: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DB2BB: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB2C5; /* 0x005DB2BC: je 0x5db2c5 */
L_005DB2BE:
    RECOMP_CALL(sub_005D8130); /* 0x005DB2BE: call 0x5d8130 */
    RECOMP_FLAGS_IN();
    goto L_005DB2CA; /* 0x005DB2C3: jmp 0x5db2ca */
L_005DB2C5:
    RECOMP_CALL(sub_005DA810); /* 0x005DB2C5: call 0x5da810 */
    RECOMP_FLAGS_IN();
L_005DB2CA:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DB2CA: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x44); /* 0x005DB2CE: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0040A000); /* 0x005DB2D1: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_005DB2D6:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DB2D6: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x005DB2DA: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0040A000); /* 0x005DB2DD: call 0x40a000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005DB2E2: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_005DB3ED; /* 0x005DB2E4: jmp 0x5db3ed */
L_005DB2E9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFF0FFFFFu; /* 0x005DB2E9: and dword ptr [ebp - 0xd0], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xD4); /* 0x005DB2F3: lea eax, [ebp - 0xd4] */
    MEM8(ebp + (-0xCD)) = (uint8_t)(0); /* 0x005DB2F9: mov byte ptr [ebp - 0xcd], 0 */
    ecx = ebp + 0xC; /* 0x005DB300: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) & 0xFFF00000u; /* 0x005DB303: and dword ptr [ebp - 0xd0], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB30D: push eax */
    MEM32(ebp + (-0xD4)) = 0; /* 0x005DB30E: mov dword ptr [ebp - 0xd4], 0 */
    RECOMP_CALL(sub_005F4AC0); /* 0x005DB318: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD4); /* 0x005DB31D: lea ecx, [ebp - 0xd4] */
    RECOMP_CALL(sub_0046D220); /* 0x005DB323: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB328: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB32A: je 0x5db3eb */
L_005DB330:
    eax = ebp + (-0xD4); /* 0x005DB330: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005DB336: push eax */
    ecx = ebx + 0x1C; /* 0x005DB337: lea ecx, [ebx + 0x1c] */
    RECOMP_CALL(sub_005DBD30); /* 0x005DB33A: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    MEM8(eax) = (uint8_t)(4); /* 0x005DB33F: mov byte ptr [eax], 4 */
    goto L_005DB3EB; /* 0x005DB342: jmp 0x5db3eb */
L_005DB347:
    eax = ebp + (-0xDC); /* 0x005DB347: lea eax, [ebp - 0xdc] */
    PUSH32(esp, eax); /* 0x005DB34D: push eax */
    ecx = ebp + 0xC; /* 0x005DB34E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5260); /* 0x005DB351: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xDD); /* 0x005DB356: lea eax, [ebp - 0xdd] */
    PUSH32(esp, eax); /* 0x005DB35C: push eax */
    ecx = ebp + 0xC; /* 0x005DB35D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F50A0); /* 0x005DB360: call 0x5f50a0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0xDD))); /* 0x005DB365: mov al, byte ptr [ebp - 0xdd] */
    /* cmp LO8(eax), 4 */ /* 0x005DB36B: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB36D: ja 0x5db3eb */
L_005DB373:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x005DB373: mov byte ptr [ebx], al */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB375: je 0x5db3eb */
L_005DB377:
    ecx = MEM32(ebx + 0xC); /* 0x005DB377: mov ecx, dword ptr [ebx + 0xc] */
    edx = ebp + (-0xE4); /* 0x005DB37A: lea edx, [ebp - 0xe4] */
    PUSH32(esp, edx); /* 0x005DB380: push edx */
    eax = MEM32(ecx); /* 0x005DB381: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x005DB383: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xE4)); /* 0x005DB389: mov eax, dword ptr [ebp - 0xe4] */
    ecx = 0xC8u; /* 0x005DB38F: mov ecx, 0xc8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xDC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xDC)); /* 0x005DB394: sub eax, dword ptr [ebp - 0xdc] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x005DB39A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x005DB39C: cmova eax, ecx */
    /* cmp MEM8(ebx), 2 */ /* 0x005DB39F: cmp byte ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x4) = eax; /* 0x005DB3A2: mov dword ptr [ebx + 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB3A5: jne 0x5db3eb */
L_005DB3A7:
    MEM8(ebx + 0x1) = (uint8_t)(5); /* 0x005DB3A7: mov byte ptr [ebx + 1], 5 */
    goto L_005DB3EB; /* 0x005DB3AB: jmp 0x5db3eb */
L_005DB3AD:
    esi = MEM32(ebx + 0x1C); /* 0x005DB3AD: mov esi, dword ptr [ebx + 0x1c] */
    eax = MEM32(esi); /* 0x005DB3B0: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x005DB3B2: mov dword ptr [ebp - 0xd8], eax */
    /* cmp eax, esi */ /* 0x005DB3B8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB3D9; /* 0x005DB3BA: je 0x5db3d9 */
L_005DB3BC:
    esp = esp; /* 0x005DB3BC: lea esp, [esp] */
L_005DB3C0:
    ecx = ebp + (-0xD8); /* 0x005DB3C0: lea ecx, [ebp - 0xd8] */
    MEM8(eax + 0x19) = (uint8_t)(0); /* 0x005DB3C6: mov byte ptr [eax + 0x19], 0 */
    RECOMP_CALL(sub_0040B880); /* 0x005DB3CA: call 0x40b880 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD8)); /* 0x005DB3CF: mov eax, dword ptr [ebp - 0xd8] */
    /* cmp eax, esi */ /* 0x005DB3D5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB3C0; /* 0x005DB3D7: jne 0x5db3c0 */
L_005DB3D9:
    ecx = ebx; /* 0x005DB3D9: mov ecx, ebx */
    RECOMP_CALL(sub_005DA3C0); /* 0x005DB3DB: call 0x5da3c0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x1), 7 */ /* 0x005DB3E0: cmp byte ptr [ebx + 1], 7 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB3EB; /* 0x005DB3E4: je 0x5db3eb */
L_005DB3E6:
    MEM16(ebx) = (uint16_t)(0x301u); /* 0x005DB3E6: mov word ptr [ebx], 0x301 */
L_005DB3EB:
    SET_LO8(ebx, 1); /* 0x005DB3EB: mov bl, 1 */
L_005DB3ED:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DB3ED: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x20); /* 0x005DB3F4: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x005DB3F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB41A; /* 0x005DB3F9: je 0x5db41a */
L_005DB3FB:
    PUSH32(esp, eax); /* 0x005DB3FB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DB3FC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DB402: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = 0; /* 0x005DB405: mov dword ptr [ebp + 0x20], 0 */
    MEM32(ebp + 0x24) = 0; /* 0x005DB40C: mov dword ptr [ebp + 0x24], 0 */
    MEM32(ebp + 0x28) = 0; /* 0x005DB413: mov dword ptr [ebp + 0x28], 0 */
L_005DB41A:
    SET_LO8(eax, LO8(ebx)); /* 0x005DB41A: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB41C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB41F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB426: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DB427: pop edi */
    esi = POP32_VAL(esp); /* 0x005DB428: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB429: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005DB42A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DB42D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DB42F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DB434: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB436: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x005DB437: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005DB181u: goto L_005DB181;
      case 0x005DB1E7u: goto L_005DB1E7;
      case 0x005DB2E9u: goto L_005DB2E9;
      case 0x005DB347u: goto L_005DB347;
      case 0x005DB3ADu: goto L_005DB3AD;
      case 0x005DB3EBu: goto L_005DB3EB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005DB460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB460u);

L_005DB460:
    PUSH32(esp, ebp); /* 0x005DB460: push ebp */
    ebp = esp; /* 0x005DB461: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB463: push -1 */
    PUSH32(esp, 0x007AF1D0u); /* 0x005DB465: push 0x7af1d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB46A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB470: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005DB471: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DB474: push ebx */
    PUSH32(esp, esi); /* 0x005DB475: push esi */
    eax = MEM32(0x855000); /* 0x005DB476: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB47B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB47D: push eax */
    eax = ebp + (-0xC); /* 0x005DB47E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DB481: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DB487: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005DB489: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005DB48C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005DB48E: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB491: mov ecx, eax */
    RECOMP_CALL(sub_0046D220); /* 0x005DB493: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB498: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB4AF; /* 0x005DB49A: jne 0x5db4af */
L_005DB49C:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB49C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB49F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB4A6: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DB4A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB4A8: pop ebx */
    esp = ebp; /* 0x005DB4A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB4AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DB4AC: ret 4 */
L_005DB4AF:
    ecx = MEM32(esi + 0xC); /* 0x005DB4AF: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB4B2: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005DB4B5: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x18); /* 0x005DB4B7: mov eax, dword ptr [eax + 0x18] */
    RECOMP_ICALL(eax); /* 0x005DB4BA: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005DB4BC: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x005DB4BE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB557; /* 0x005DB4C0: je 0x5db557 */
L_005DB4C6:
    ecx = ebp + (-0x38); /* 0x005DB4C6: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3C60); /* 0x005DB4C9: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DB4CE: mov dword ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DB4D5: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB4DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB4E3; /* 0x005DB4DD: jne 0x5db4e3 */
L_005DB4DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DB4DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB4FD; /* 0x005DB4E1: jmp 0x5db4fd */
L_005DB4E3:
    ecx = MEM32(0x927AEC); /* 0x005DB4E3: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005DB4E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB4FD; /* 0x005DB4EB: jne 0x5db4fd */
L_005DB4ED:
    ecx = 0x00927AE8u; /* 0x005DB4ED: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB4F2: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005DB4F7: mov ecx, dword ptr [0x927aec] */
L_005DB4FD:
    eax = MEM32(ecx); /* 0x005DB4FD: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x005DB4FF: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x005DB502: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005DB503: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005DB506: push eax */
    ecx = ebp + (-0x38); /* 0x005DB507: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F4D80); /* 0x005DB50A: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB50F: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x38); /* 0x005DB512: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F56D0); /* 0x005DB515: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x38); /* 0x005DB51A: lea eax, [ebp - 0x38] */
    ecx = esi; /* 0x005DB51D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005DB51F: push eax */
    PUSH32(esp, 0x1FEu); /* 0x005DB520: push 0x1fe */
    RECOMP_CALL(sub_005DA750); /* 0x005DB525: call 0x5da750 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DB52A: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x24)); /* 0x005DB531: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x005DB534: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB557; /* 0x005DB536: je 0x5db557 */
L_005DB538:
    PUSH32(esp, eax); /* 0x005DB538: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DB539: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DB53F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005DB542: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005DB549: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB550: mov dword ptr [ebp - 0x1c], 0 */
L_005DB557:
    SET_LO8(eax, LO8(ebx)); /* 0x005DB557: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB559: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB55C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB563: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DB564: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB565: pop ebx */
    esp = ebp; /* 0x005DB566: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB568: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DB569: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DB570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB570u);

L_005DB570:
    PUSH32(esp, ebp); /* 0x005DB570: push ebp */
    ebp = esp; /* 0x005DB571: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB573: push -1 */
    PUSH32(esp, 0x0078A0A9u); /* 0x005DB575: push 0x78a0a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB57A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB580: push eax */
    PUSH32(esp, ecx); /* 0x005DB581: push ecx */
    eax = MEM32(0x855000); /* 0x005DB582: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB587: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB589: push eax */
    eax = ebp + (-0xC); /* 0x005DB58A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DB58D: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DB593: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005DB596: mov dword ptr [ebp - 0x10], 0 */
    ecx = MEM32(ecx + 0xC); /* 0x005DB59D: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB5A0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB5A3: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x005DB5A6: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x3C)); /* 0x005DB5A8: call dword ptr [edx + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DB5AB: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005DB5B2: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005DB5B9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB5BC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB5BF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB5C6: pop ecx */
    esp = ebp; /* 0x005DB5C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB5C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DB5CA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DB5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB5D0u);

L_005DB5D0:
    PUSH32(esp, ebp); /* 0x005DB5D0: push ebp */
    ebp = esp; /* 0x005DB5D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB5D3: push -1 */
    PUSH32(esp, 0x0078A0A9u); /* 0x005DB5D5: push 0x78a0a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB5DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB5E0: push eax */
    PUSH32(esp, ecx); /* 0x005DB5E1: push ecx */
    eax = MEM32(0x855000); /* 0x005DB5E2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB5E7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB5E9: push eax */
    eax = ebp + (-0xC); /* 0x005DB5EA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DB5ED: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB5F3: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005DB5F6: mov dword ptr [ebp - 0x10], 0 */
    ecx = MEM32(ecx + 0xC); /* 0x005DB5FD: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB600: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x005DB603: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x44)); /* 0x005DB605: call dword ptr [edx + 0x44] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DB608: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005DB60F: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005DB616: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB619: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB61C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB623: pop ecx */
    esp = ebp; /* 0x005DB624: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB626: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DB627: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DB630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB630u);

L_005DB630:
    PUSH32(esp, ebp); /* 0x005DB630: push ebp */
    ebp = esp; /* 0x005DB631: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB633: push -1 */
    PUSH32(esp, 0x0078D528u); /* 0x005DB635: push 0x78d528 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB63A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB640: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005DB641: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DB644: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB649: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005DB64B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005DB64E: push ebx */
    PUSH32(esp, esi); /* 0x005DB64F: push esi */
    PUSH32(esp, edi); /* 0x005DB650: push edi */
    PUSH32(esp, eax); /* 0x005DB651: push eax */
    eax = ebp + (-0xC); /* 0x005DB652: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DB655: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x005DB65B: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(0x7CC9AC); /* 0x005DB65E: mov ebx, dword ptr [0x7cc9ac] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005DB664: mov dword ptr [ebp - 0x30], eax */
    RECOMP_ICALL(ebx); /* 0x005DB667: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB669: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB671; /* 0x005DB66B: jne 0x5db671 */
L_005DB66D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005DB66D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB68B; /* 0x005DB66F: jmp 0x5db68b */
L_005DB671:
    esi = MEM32(0x927AF8); /* 0x005DB671: mov esi, dword ptr [0x927af8] */
    /* test esi, esi */ /* 0x005DB677: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB68B; /* 0x005DB679: jne 0x5db68b */
L_005DB67B:
    ecx = 0x00927AE8u; /* 0x005DB67B: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB680: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x927AF8); /* 0x005DB685: mov esi, dword ptr [0x927af8] */
L_005DB68B:
    RECOMP_ICALL(ebx); /* 0x005DB68B: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB68D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB695; /* 0x005DB68F: jne 0x5db695 */
L_005DB691:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005DB691: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB6AF; /* 0x005DB693: jmp 0x5db6af */
L_005DB695:
    edi = MEM32(0x927AF8); /* 0x005DB695: mov edi, dword ptr [0x927af8] */
    /* test edi, edi */ /* 0x005DB69B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB6AF; /* 0x005DB69D: jne 0x5db6af */
L_005DB69F:
    ecx = 0x00927AE8u; /* 0x005DB69F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB6A4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x927AF8); /* 0x005DB6A9: mov edi, dword ptr [0x927af8] */
L_005DB6AF:
    ecx = MEM32(ebp + (-0x30)); /* 0x005DB6AF: mov ecx, dword ptr [ebp - 0x30] */
    eax = MEM32(esi); /* 0x005DB6B2: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005DB6B4: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x005DB6B7: push dword ptr [ecx] */
    ecx = esi; /* 0x005DB6B9: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x005DB6BB: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x005DB6BE: mov edx, dword ptr [edi] */
    esi = eax; /* 0x005DB6C0: mov esi, eax */
    eax = MEM32(ebp + (-0x30)); /* 0x005DB6C2: mov eax, dword ptr [ebp - 0x30] */
    ecx = edi; /* 0x005DB6C5: mov ecx, edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005DB6C7: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005DB6CA: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x80)); /* 0x005DB6CC: call dword ptr [edx + 0x80] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x005DB6D2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB6DD; /* 0x005DB6D4: jne 0x5db6dd */
L_005DB6D6:
    SET_LO8(eax, 1); /* 0x005DB6D6: mov al, 1 */
    goto L_005DB791; /* 0x005DB6D8: jmp 0x5db791 */
L_005DB6DD:
    PUSH32(esp, 0xBu); /* 0x005DB6DD: push 0xb */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB6DF: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x005DB6E6: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DB6E9: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007F5F10u); /* 0x005DB6F0: push 0x7f5f10 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DB6F5: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB6FC: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DB703: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DB707: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DB70C: mov dword ptr [ebp - 4], 0 */
    RECOMP_ICALL(ebx); /* 0x005DB713: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB715: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB71D; /* 0x005DB717: jne 0x5db71d */
L_005DB719:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DB719: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB737; /* 0x005DB71B: jmp 0x5db737 */
L_005DB71D:
    ecx = MEM32(0x927AF8); /* 0x005DB71D: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005DB723: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB737; /* 0x005DB725: jne 0x5db737 */
L_005DB727:
    ecx = 0x00927AE8u; /* 0x005DB727: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB72C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005DB731: mov ecx, dword ptr [0x927af8] */
L_005DB737:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005DB737: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x005DB73B: lea eax, [ebp - 0x2c] */
    edx = MEM32(ecx); /* 0x005DB73E: mov edx, dword ptr [ecx] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x2C)); } /* 0x005DB740: cmovae eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005DB744: push eax */
    eax = MEM32(ebp + (-0x30)); /* 0x005DB745: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005DB748: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005DB74B: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x005DB74D: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB750: mov ecx, eax */
    RECOMP_CALL(sub_005DC5E0); /* 0x005DB752: call 0x5dc5e0 */
    RECOMP_FLAGS_IN();
    ebx = eax + (-0x1); /* 0x005DB757: lea ebx, [eax - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x005DB75A: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(ebx), _sb = LO8(ebx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x005DB75C: sbb bl, bl */
      SET_LO8(ebx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xFEu); /* 0x005DB75E: and bl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 2); /* 0x005DB761: add bl, 2 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DB764: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005DB76B: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DB77D; /* 0x005DB76F: jb 0x5db77d */
L_005DB771:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005DB771: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DB774: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DB77A: add esp, 4 */
    _flag_k = FK_ADD;
L_005DB77D:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DB77D: mov dword ptr [ebp - 0x18], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x005DB784: mov al, bl */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DB786: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DB78D: mov byte ptr [ebp - 0x2c], 0 */
L_005DB791:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB791: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB794: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB79B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DB79C: pop edi */
    esi = POP32_VAL(esp); /* 0x005DB79D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB79E: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005DB79F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DB7A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DB7A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DB7A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB7AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DB7AC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DB7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB7B0u);

L_005DB7B0:
    PUSH32(esp, ebp); /* 0x005DB7B0: push ebp */
    ebp = esp; /* 0x005DB7B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB7B3: push -1 */
    PUSH32(esp, 0x0078A0A9u); /* 0x005DB7B5: push 0x78a0a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB7BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB7C0: push eax */
    PUSH32(esp, ecx); /* 0x005DB7C1: push ecx */
    eax = MEM32(0x855000); /* 0x005DB7C2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB7C7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB7C9: push eax */
    eax = ebp + (-0xC); /* 0x005DB7CA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DB7CD: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB7D3: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005DB7D6: mov dword ptr [ebp - 0x10], 0 */
    ecx = MEM32(ecx + 0xC); /* 0x005DB7DD: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB7E0: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x005DB7E3: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x48)); /* 0x005DB7E5: call dword ptr [edx + 0x48] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DB7E8: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005DB7EF: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005DB7F6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB7F9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DB7FC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DB803: pop ecx */
    esp = ebp; /* 0x005DB804: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB806: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DB807: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DB810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB810u);

L_005DB810:
    PUSH32(esp, ebp); /* 0x005DB810: push ebp */
    ebp = esp; /* 0x005DB811: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005DB813: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DB816: push ebx */
    PUSH32(esp, esi); /* 0x005DB817: push esi */
    esi = ecx; /* 0x005DB818: mov esi, ecx */
    SET_HI8(ebx, 1); /* 0x005DB81A: mov bh, 1 */
    PUSH32(esp, edi); /* 0x005DB81C: push edi */
    ecx = MEM32(esi + 0xC); /* 0x005DB81D: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005DB820: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x1C); /* 0x005DB822: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005DB825: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005DB827: mov ecx, dword ptr [esi + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x005DB82A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ecx); /* 0x005DB82C: mov eax, dword ptr [ecx] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB844; /* 0x005DB82E: jne 0x5db844 */
L_005DB830:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB830: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x60); /* 0x005DB833: mov eax, dword ptr [eax + 0x60] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB836: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x005DB839: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DB83B: pop edi */
    esi = POP32_VAL(esp); /* 0x005DB83C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB83D: pop ebx */
    esp = ebp; /* 0x005DB83E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB840: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DB841: ret 8 */
L_005DB844:
    eax = MEM32(eax + 0x2C); /* 0x005DB844: mov eax, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005DB847: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005DB849: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(eax); /* 0x005DB84C: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DB84E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DB8EC; /* 0x005DB850: je 0x5db8ec */
L_005DB856:
    ecx = MEM32(esi + 0xC); /* 0x005DB856: mov ecx, dword ptr [esi + 0xc] */
    edi = MEM32(ebp + (-0x4)); /* 0x005DB859: mov edi, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x005DB85C: push edi */
    eax = MEM32(ecx); /* 0x005DB85D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005DB85F: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB862: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005DB864: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x005DB866: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x005DB869: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x005DB86C: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DB86F: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB87D; /* 0x005DB877: jne 0x5db87d */
L_005DB879:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DB879: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB897; /* 0x005DB87B: jmp 0x5db897 */
L_005DB87D:
    ecx = MEM32(0x927AEC); /* 0x005DB87D: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005DB883: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB897; /* 0x005DB885: jne 0x5db897 */
L_005DB887:
    ecx = 0x00927AE8u; /* 0x005DB887: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB88C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005DB891: mov ecx, dword ptr [0x927aec] */
L_005DB897:
    eax = MEM32(ecx); /* 0x005DB897: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x14); /* 0x005DB899: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005DB89C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005DB89D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DB8A0: mov ecx, eax */
    eax = MEM32(ebp + (-0xC)); /* 0x005DB8A2: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ecx) */ /* 0x005DB8A5: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB8B1; /* 0x005DB8A7: jne 0x5db8b1 */
L_005DB8A9:
    eax = MEM32(ebp + (-0x8)); /* 0x005DB8A9: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x005DB8AC: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB8D5; /* 0x005DB8AF: je 0x5db8d5 */
L_005DB8B1:
    eax = ebp + (-0xC); /* 0x005DB8B1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x005DB8B4: push eax */
    ecx = esi + 0x1C; /* 0x005DB8B5: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_005DBD30); /* 0x005DB8B8: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax), 3 */ /* 0x005DB8BD: cmp byte ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DB8D5; /* 0x005DB8C0: jbe 0x5db8d5 */
L_005DB8C2:
    ecx = MEM32(esi + 0xC); /* 0x005DB8C2: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB8C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB8C8: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005DB8CB: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x005DB8CD: push edi */
    eax = MEM32(eax + 0x5C); /* 0x005DB8CE: mov eax, dword ptr [eax + 0x5c] */
    RECOMP_ICALL(eax); /* 0x005DB8D1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    SET_HI8(ebx, HI8(ebx) & LO8(eax)); /* 0x005DB8D3: and bh, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_005DB8D5:
    ecx = MEM32(esi + 0xC); /* 0x005DB8D5: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005DB8D8: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005DB8DA: mov byte ptr [ebp - 4], bl */
    edx = MEM32(ecx); /* 0x005DB8DD: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x2C); /* 0x005DB8DF: mov edx, dword ptr [edx + 0x2c] */
    RECOMP_ICALL(edx); /* 0x005DB8E2: call edx */
    RECOMP_FLAGS_IN();
    /* cmp LO8(ebx), LO8(eax) */ /* 0x005DB8E4: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005DB856; /* 0x005DB8E6: jb 0x5db856 */
L_005DB8EC:
    edi = POP32_VAL(esp); /* 0x005DB8EC: pop edi */
    esi = POP32_VAL(esp); /* 0x005DB8ED: pop esi */
    SET_LO8(eax, HI8(ebx)); /* 0x005DB8EE: mov al, bh */
    ebx = POP32_VAL(esp); /* 0x005DB8F0: pop ebx */
    esp = ebp; /* 0x005DB8F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB8F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DB8F4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DB900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB900u);

L_005DB900:
    PUSH32(esp, ebp); /* 0x005DB900: push ebp */
    ebp = esp; /* 0x005DB901: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DB903: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DB906: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB907: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x005DB90A: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005DB90C: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005DB90F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005DB911: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005DB914: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x005DB916: mov dword ptr [ebp - 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x005DB919: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x005DB91C: mov dword ptr [ebp - 8], eax */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DB91F: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DB925: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB92D; /* 0x005DB927: jne 0x5db92d */
L_005DB929:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DB929: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DB947; /* 0x005DB92B: jmp 0x5db947 */
L_005DB92D:
    ecx = MEM32(0x927AEC); /* 0x005DB92D: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005DB933: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DB947; /* 0x005DB935: jne 0x5db947 */
L_005DB937:
    ecx = 0x00927AE8u; /* 0x005DB937: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DB93C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005DB941: mov ecx, dword ptr [0x927aec] */
L_005DB947:
    eax = MEM32(ecx); /* 0x005DB947: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x14); /* 0x005DB949: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x005DB94C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005DB94D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005DB950: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x005DB953: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DB95F; /* 0x005DB955: jne 0x5db95f */
L_005DB957:
    ecx = MEM32(ebp + (-0x8)); /* 0x005DB957: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005DB95A: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DB989; /* 0x005DB95D: je 0x5db989 */
L_005DB95F:
    eax = ebp + (-0xC); /* 0x005DB95F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x005DB962: push eax */
    ecx = esi + 0x1C; /* 0x005DB963: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_005DBD30); /* 0x005DB966: call 0x5dbd30 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax), 3 */ /* 0x005DB96B: cmp byte ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DB989; /* 0x005DB96E: jbe 0x5db989 */
L_005DB970:
    ecx = MEM32(esi + 0xC); /* 0x005DB970: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, 1); /* 0x005DB973: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DB975: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x005DB978: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB97A: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x5C); /* 0x005DB97D: mov eax, dword ptr [eax + 0x5c] */
    RECOMP_ICALL(eax); /* 0x005DB980: call eax */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005DB982: pop esi */
    esp = ebp; /* 0x005DB983: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB985: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DB986: ret 0xc */
L_005DB989:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DB989: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005DB98B: pop esi */
    esp = ebp; /* 0x005DB98C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DB98E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DB98F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DB9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB9A0u);

L_005DB9A0:
    PUSH32(esp, ebp); /* 0x005DB9A0: push ebp */
    ebp = esp; /* 0x005DB9A1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005DB9A3: push ebx */
    PUSH32(esp, esi); /* 0x005DB9A4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB9A5: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x005DB9A8: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x005DB9AA: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x005DB9AD: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x30); /* 0x005DB9AF: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005DB9B2: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005DB9B4: mov ecx, dword ptr [esi + 0xc] */
    SET_LO8(ebx, LO8(eax)); /* 0x005DB9B7: mov bl, al */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(ebx)); /* 0x005DB9B9: mov byte ptr [ebp + 8], bl */
    edx = MEM32(ecx); /* 0x005DB9BC: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x2C); /* 0x005DB9BE: mov edx, dword ptr [edx + 0x2c] */
    RECOMP_ICALL(edx); /* 0x005DB9C1: call edx */
    RECOMP_FLAGS_IN();
    /* cmp LO8(ebx), LO8(eax) */ /* 0x005DB9C3: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005DB9CF; /* 0x005DB9C5: jb 0x5db9cf */
L_005DB9C7:
    esi = POP32_VAL(esp); /* 0x005DB9C7: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DB9C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x005DB9CA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005DB9CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DB9CC: ret 4 */
L_005DB9CF:
    ecx = MEM32(esi + 0xC); /* 0x005DB9CF: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DB9D2: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005DB9D5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005DB9D7: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005DB9DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DB9DB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005DB9DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DB9DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DB9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DB9E0u);

L_005DB9E0:
    PUSH32(esp, ebp); /* 0x005DB9E0: push ebp */
    ebp = esp; /* 0x005DB9E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DB9E3: push -1 */
    PUSH32(esp, 0x007AF1F0u); /* 0x005DB9E5: push 0x7af1f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DB9EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DB9F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DB9F1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DB9F4: push ebx */
    PUSH32(esp, esi); /* 0x005DB9F5: push esi */
    PUSH32(esp, edi); /* 0x005DB9F6: push edi */
    eax = MEM32(0x855000); /* 0x005DB9F7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DB9FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DB9FE: push eax */
    eax = ebp + (-0xC); /* 0x005DB9FF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DBA02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DBA08: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005DBA0B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DBA0D: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005DBA10: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005DBA16: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005DBA1D: mov dword ptr [esi + 8], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005DBA24: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x4); /* 0x005DBA27: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x005DBA2A: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBA2C: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005DBA31: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBA33: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBA36: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBA38: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBA38: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBA3B: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DBA3D: push eax */
    RECOMP_CALL(sub_005DC150); /* 0x005DBA3E: call 0x5dc150 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DBA43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DBA6B; /* 0x005DBA45: je 0x5dba6b */
L_005DBA47:
    MEM32(ebp + (-0x4)) = 0; /* 0x005DBA47: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBA4E: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBA51: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x005DBA52: push dword ptr [esi] */
    edx = MEM32(edi + 0x4); /* 0x005DBA54: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005DBA57: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005DD2F0); /* 0x005DBA59: call 0x5dd2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DBA5E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x005DBA61: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DBA64: mov dword ptr [ebp - 4], 0xffffffff */
L_005DBA6B:
    eax = esi; /* 0x005DBA6B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DBA6D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DBA70: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DBA77: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DBA78: pop edi */
    esi = POP32_VAL(esp); /* 0x005DBA79: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DBA7A: pop ebx */
    esp = ebp; /* 0x005DBA7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBA7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DBA7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DBA81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBA81u);

L_005DBA81:
    ecx = MEM32(ebp + (-0x14)); /* 0x005DBA81: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_005DBAA0); /* 0x005DBA84: call 0x5dbaa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DBA89: push 0 */
    PUSH32(esp, 0); /* 0x005DBA8B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DBA8D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DBA92u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DBAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBAA0u);

L_005DBAA0:
    PUSH32(esp, ebp); /* 0x005DBAA0: push ebp */
    ebp = esp; /* 0x005DBAA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DBAA3: push ecx */
    PUSH32(esp, esi); /* 0x005DBAA4: push esi */
    esi = ecx; /* 0x005DBAA5: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005DBAA7: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x005DBAA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DBAD8; /* 0x005DBAAB: je 0x5dbad8 */
L_005DBAAD:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005DBAAD: push dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x4); /* 0x005DBAB0: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x005DBAB3: push ecx */
    RECOMP_CALL(sub_005DCBC0); /* 0x005DBAB4: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x005DBAB9: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DBABB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DBAC1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005DBAC4: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005DBACA: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005DBAD1: mov dword ptr [esi + 8], 0 */
L_005DBAD8:
    esi = POP32_VAL(esp); /* 0x005DBAD8: pop esi */
    esp = ebp; /* 0x005DBAD9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DBADC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DBAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBAE0u);

L_005DBAE0:
    PUSH32(esp, ebp); /* 0x005DBAE0: push ebp */
    ebp = esp; /* 0x005DBAE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DBAE3: push -1 */
    PUSH32(esp, 0x007AF210u); /* 0x005DBAE5: push 0x7af210 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DBAEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DBAF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005DBAF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DBAF4: push ebx */
    PUSH32(esp, esi); /* 0x005DBAF5: push esi */
    PUSH32(esp, edi); /* 0x005DBAF6: push edi */
    eax = MEM32(0x855000); /* 0x005DBAF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DBAFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DBAFE: push eax */
    eax = ebp + (-0xC); /* 0x005DBAFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DBB02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DBB08: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005DBB0B: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x005DBB0D: mov dword ptr [ebp - 0x18], edi */
    ebx = MEM32(ebp + 0x8); /* 0x005DBB10: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x005DBB13: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBB36; /* 0x005DBB15: je 0x5dbb36 */
L_005DBB17:
    esi = MEM32(ebx); /* 0x005DBB17: mov esi, dword ptr [ebx] */
    eax = MEM32(ebx + 0x4); /* 0x005DBB19: mov eax, dword ptr [ebx + 4] */
    /* cmp esi, eax */ /* 0x005DBB1C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBB4C; /* 0x005DBB1E: jne 0x5dbb4c */
L_005DBB20:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBB20: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBB23: push ecx */
    edx = MEM32(edi + 0x4); /* 0x005DBB24: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005DBB27: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005DCBC0); /* 0x005DBB29: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DBB2E: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x005DBB31: mov eax, dword ptr [edi] */
L_005DBB33:
    MEM32(edi + 0x4) = eax; /* 0x005DBB33: mov dword ptr [edi + 4], eax */
L_005DBB36:
    eax = edi; /* 0x005DBB36: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DBB38: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DBB3B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DBB42: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DBB43: pop edi */
    esi = POP32_VAL(esp); /* 0x005DBB44: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DBB45: pop ebx */
    esp = ebp; /* 0x005DBB46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBB48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DBB49: ret 4 */
L_005DBB4C:
    ecx = eax; /* 0x005DBB4C: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DBB4E: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBB50: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DBB55: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBB57: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBB5A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBB5C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBB5C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBB5F: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x005DBB61: mov dword ptr [ebp + 8], eax */
    ecx = MEM32(edi + 0x4); /* 0x005DBB64: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005DBB67: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBB69: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DBB6E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBB70: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBB73: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBB75: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBB75: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBB78: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005DBB7A: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005DBB7D: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DBBC9; /* 0x005DBB80: ja 0x5dbbc9 */
L_005DBB82:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBB82: push dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x005DBB85: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x005DBB87: push eax */
    edx = MEM32(ebx + 0x4); /* 0x005DBB88: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x005DBB8B: mov ecx, esi */
    RECOMP_CALL(sub_005DC6C0); /* 0x005DBB8D: call 0x5dc6c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DBB92: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBB95: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBB98: push ecx */
    edx = MEM32(edi + 0x4); /* 0x005DBB99: mov edx, dword ptr [edi + 4] */
    ecx = eax; /* 0x005DBB9C: mov ecx, eax */
    RECOMP_CALL(sub_005DCBC0); /* 0x005DBB9E: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DBBA3: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x4); /* 0x005DBBA6: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005DBBA9: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBBAB: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DBBB0: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBBB2: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBBB5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBBB7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBBB7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBBBA: add eax, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8u); /* 0x005DBBBC: imul eax, eax, 0xd8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x005DBBC2: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005DBB33; /* 0x005DBBC4: jmp 0x5dbb33 */
L_005DBBC9:
    ecx = MEM32(edi + 0x8); /* 0x005DBBC9: mov ecx, dword ptr [edi + 8] */
    esi = MEM32(edi); /* 0x005DBBCC: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DBBCE: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBBD0: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DBBD5: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBBD7: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBBDA: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBBDC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBBDC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBBDF: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005DBBE1: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DBC1A; /* 0x005DBBE4: ja 0x5dbc1a */
L_005DBBE6:
    esi = (uint32_t)((int32_t)MEM32(ebp + (-0x14)) * (int32_t)0xD8u); /* 0x005DBBE6: imul esi, dword ptr [ebp - 0x14], 0xd8 */
    ecx = MEM32(ebx); /* 0x005DBBED: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005DBBEF: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBBF1: push dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x005DBBF4: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x005DBBF6: push eax */
    edx = esi; /* 0x005DBBF7: mov edx, esi */
    RECOMP_CALL(sub_005DC6C0); /* 0x005DBBF9: call 0x5dc6c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DBBFE: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBC01: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBC04: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005DBC05: push dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x4); /* 0x005DBC08: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x005DBC0B: mov ecx, esi */
    RECOMP_CALL(sub_005DD2F0); /* 0x005DBC0D: call 0x5dd2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DBC12: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005DBB33; /* 0x005DBC15: jmp 0x5dbb33 */
L_005DBC1A:
    /* test esi, esi */ /* 0x005DBC1A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DBC37; /* 0x005DBC1C: je 0x5dbc37 */
L_005DBC1E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBC1E: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBC21: push ecx */
    edx = MEM32(edi + 0x4); /* 0x005DBC22: mov edx, dword ptr [edi + 4] */
    ecx = esi; /* 0x005DBC25: mov ecx, esi */
    RECOMP_CALL(sub_005DCBC0); /* 0x005DBC27: call 0x5dcbc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x005DBC2C: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DBC2E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DBC34: add esp, 0xc */
    _flag_k = FK_ADD;
L_005DBC37:
    ecx = MEM32(ebx + 0x4); /* 0x005DBC37: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005DBC3A: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x4BDA12F7u; /* 0x005DBC3C: mov eax, 0x4bda12f7 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DBC41: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005DBC43: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005DBC46: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DBC48: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DBC48: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DBC4B: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DBC4D: push eax */
    ecx = edi; /* 0x005DBC4E: mov ecx, edi */
    RECOMP_CALL(sub_005DC150); /* 0x005DBC50: call 0x5dc150 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DBC55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DBB36; /* 0x005DBC57: je 0x5dbb36 */
L_005DBC5D:
    MEM32(ebp + (-0x4)) = 0; /* 0x005DBC5D: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DBC64: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DBC67: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x005DBC68: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x005DBC6A: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005DBC6D: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005DD2F0); /* 0x005DBC6F: call 0x5dd2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DBC74: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005DBC77: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DBC7A: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_005DBB36; /* 0x005DBC81: jmp 0x5dbb36 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DBC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBC86u);

L_005DBC86:
    ecx = MEM32(ebp + (-0x18)); /* 0x005DBC86: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_005DBAA0); /* 0x005DBC89: call 0x5dbaa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DBC8E: push 0 */
    PUSH32(esp, 0); /* 0x005DBC90: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DBC92: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DBC97u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DBCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBCA0u);

L_005DBCA0:
    MEM32(0x927AE0) = 0; /* 0x005DBCA0: mov dword ptr [0x927ae0], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DBCAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DBCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBCB0u);

L_005DBCB0:
    PUSH32(esp, ebp); /* 0x005DBCB0: push ebp */
    ebp = esp; /* 0x005DBCB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DBCB3: push -1 */
    PUSH32(esp, 0x007AF240u); /* 0x005DBCB5: push 0x7af240 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DBCBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DBCC0: push eax */
    PUSH32(esp, ecx); /* 0x005DBCC1: push ecx */
    PUSH32(esp, ebx); /* 0x005DBCC2: push ebx */
    PUSH32(esp, esi); /* 0x005DBCC3: push esi */
    PUSH32(esp, edi); /* 0x005DBCC4: push edi */
    eax = MEM32(0x855000); /* 0x005DBCC5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DBCCA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DBCCC: push eax */
    eax = ebp + (-0xC); /* 0x005DBCCD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DBCD0: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DBCD6: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005DBCD8: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DBCDB: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(edi); /* 0x005DBCE2: mov eax, dword ptr [edi] */
    ebx = MEM32(0x7CC694); /* 0x005DBCE4: mov ebx, dword ptr [0x7cc694] */
    edx = MEM32(eax); /* 0x005DBCEA: mov edx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x005DBCEC: mov dword ptr [eax], eax */
    eax = MEM32(edi); /* 0x005DBCEE: mov eax, dword ptr [edi] */
    MEM32(eax + 0x4) = eax; /* 0x005DBCF0: mov dword ptr [eax + 4], eax */
    MEM32(edi + 0x4) = 0; /* 0x005DBCF3: mov dword ptr [edi + 4], 0 */
    /* cmp edx, MEM32(edi) */ /* 0x005DBCFA: cmp edx, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBD0E; /* 0x005DBCFC: je 0x5dbd0e */
L_005DBCFE:
    edi = edi; /* 0x005DBCFE: mov edi, edi */
L_005DBD00:
    esi = MEM32(edx); /* 0x005DBD00: mov esi, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x005DBD02: push edx */
    RECOMP_ICALL(ebx); /* 0x005DBD03: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DBD05: add esp, 4 */
    _flag_k = FK_ADD;
    edx = esi; /* 0x005DBD08: mov edx, esi */
    /* cmp esi, MEM32(edi) */ /* 0x005DBD0A: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBD00; /* 0x005DBD0C: jne 0x5dbd00 */
L_005DBD0E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DBD0E: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(edi)); /* 0x005DBD15: push dword ptr [edi] */
    RECOMP_ICALL(ebx); /* 0x005DBD17: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DBD19: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005DBD1C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DBD1F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DBD26: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DBD27: pop edi */
    esi = POP32_VAL(esp); /* 0x005DBD28: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DBD29: pop ebx */
    esp = ebp; /* 0x005DBD2A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBD2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DBD2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DBD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBD30u);

L_005DBD30:
    PUSH32(esp, ebp); /* 0x005DBD30: push ebp */
    ebp = esp; /* 0x005DBD31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DBD33: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x005DBD34: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005DBD37: push ebx */
    PUSH32(esp, esi); /* 0x005DBD38: push esi */
    PUSH32(esp, edi); /* 0x005DBD39: push edi */
    edi = ecx; /* 0x005DBD3A: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x005DBD3C: mov dword ptr [ebp - 4], edi */
    ebx = MEM32(edi); /* 0x005DBD3F: mov ebx, dword ptr [edi] */
    esi = ebx; /* 0x005DBD41: mov esi, ebx */
    eax = MEM32(ebx + 0x4); /* 0x005DBD43: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DBD46: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBD6F; /* 0x005DBD4A: jne 0x5dbd6f */
L_005DBD4C:
    edi = MEM32(edx); /* 0x005DBD4C: mov edi, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x005DBD4E: mov ecx, dword ptr [edx + 4] */
L_005DBD51:
    /* cmp MEM32(eax + 0x14), ecx */ /* 0x005DBD51: cmp dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DBD62; /* 0x005DBD54: ja 0x5dbd62 */
L_005DBD56:
    if (CMP_B(_flag_a, _flag_b)) goto L_005DBD5D; /* 0x005DBD56: jb 0x5dbd5d */
L_005DBD58:
    /* cmp MEM32(eax + 0x10), edi */ /* 0x005DBD58: cmp dword ptr [eax + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DBD62; /* 0x005DBD5B: jae 0x5dbd62 */
L_005DBD5D:
    eax = MEM32(eax + 0x8); /* 0x005DBD5D: mov eax, dword ptr [eax + 8] */
    goto L_005DBD66; /* 0x005DBD60: jmp 0x5dbd66 */
L_005DBD62:
    esi = eax; /* 0x005DBD62: mov esi, eax */
    eax = MEM32(eax); /* 0x005DBD64: mov eax, dword ptr [eax] */
L_005DBD66:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DBD66: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBD51; /* 0x005DBD6A: je 0x5dbd51 */
L_005DBD6C:
    edi = MEM32(ebp + (-0x4)); /* 0x005DBD6C: mov edi, dword ptr [ebp - 4] */
L_005DBD6F:
    /* cmp esi, ebx */ /* 0x005DBD6F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBD90; /* 0x005DBD71: je 0x5dbd90 */
L_005DBD73:
    eax = MEM32(edx + 0x4); /* 0x005DBD73: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(esi + 0x14) */ /* 0x005DBD76: cmp eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DBD84; /* 0x005DBD79: ja 0x5dbd84 */
L_005DBD7B:
    if (CMP_B(_flag_a, _flag_b)) goto L_005DBD90; /* 0x005DBD7B: jb 0x5dbd90 */
L_005DBD7D:
    eax = MEM32(edx); /* 0x005DBD7D: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x005DBD7F: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DBD90; /* 0x005DBD82: jb 0x5dbd90 */
L_005DBD84:
    edi = POP32_VAL(esp); /* 0x005DBD84: pop edi */
    eax = esi + 0x18; /* 0x005DBD85: lea eax, [esi + 0x18] */
    esi = POP32_VAL(esp); /* 0x005DBD88: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DBD89: pop ebx */
    esp = ebp; /* 0x005DBD8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBD8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DBD8D: ret 4 */
L_005DBD90:
    PUSH32(esp, ecx); /* 0x005DBD90: push ecx */
    eax = ebp + 0x8; /* 0x005DBD91: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edx; /* 0x005DBD94: mov dword ptr [ebp + 8], edx */
    PUSH32(esp, eax); /* 0x005DBD97: push eax */
    PUSH32(esp, ecx); /* 0x005DBD98: push ecx */
    ecx = edi; /* 0x005DBD99: mov ecx, edi */
    RECOMP_CALL(sub_005DC950); /* 0x005DBD9B: call 0x5dc950 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005DBDA0: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005DBDA1: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005DBDA4: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DBDA6: push eax */
    PUSH32(esp, esi); /* 0x005DBDA7: push esi */
    eax = ebp + 0x8; /* 0x005DBDA8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005DBDAB: push eax */
    RECOMP_CALL(sub_005DCA20); /* 0x005DBDAC: call 0x5dca20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005DBDB1: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x005DBDB4: pop edi */
    esi = POP32_VAL(esp); /* 0x005DBDB5: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x005DBDB6: add eax, 0x18 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x005DBDB9: pop ebx */
    esp = ebp; /* 0x005DBDBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBDBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DBDBD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DBDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBDC0u);

L_005DBDC0:
    PUSH32(esp, ebp); /* 0x005DBDC0: push ebp */
    ebp = esp; /* 0x005DBDC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DBDC3: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x005DBDC5: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DBDCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DBDD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DBDD1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DBDD4: push esi */
    eax = MEM32(0x855000); /* 0x005DBDD5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DBDDA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DBDDC: push eax */
    eax = ebp + (-0xC); /* 0x005DBDDD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DBDE0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DBDE6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005DBDE8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DBDEB: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x005DBDF2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005DBDF4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005DBDF5: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005DBDF7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DBDFA: push eax */
    RECOMP_CALL(sub_005DC260); /* 0x005DBDFB: call 0x5dc260 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DBE00: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005DBE07: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DBE09: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DBE0F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005DBE12: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DBE15: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DBE1C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DBE1D: pop esi */
    esp = ebp; /* 0x005DBE1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DBE20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DBE21: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DBE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DBE30u);

L_005DBE30:
    PUSH32(esp, ebp); /* 0x005DBE30: push ebp */
    ebp = esp; /* 0x005DBE31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DBE33: push -1 */
    PUSH32(esp, 0x007AF276u); /* 0x005DBE35: push 0x7af276 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DBE3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DBE40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DBE41: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DBE44: push ebx */
    PUSH32(esp, esi); /* 0x005DBE45: push esi */
    PUSH32(esp, edi); /* 0x005DBE46: push edi */
    eax = MEM32(0x855000); /* 0x005DBE47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DBE4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DBE4E: push eax */
    eax = ebp + (-0xC); /* 0x005DBE4F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DBE52: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005DBE58: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005DBE5A: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x005DBE5D: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005DBE60: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x005DBE63: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x005DBE68: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(edx); /* 0x005DBE6B: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005DBE6D: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBE78; /* 0x005DBE71: je 0x5dbe78 */
L_005DBE73:
    edi = MEM32(edx + 0x8); /* 0x005DBE73: mov edi, dword ptr [edx + 8] */
    goto L_005DBE92; /* 0x005DBE76: jmp 0x5dbe92 */
L_005DBE78:
    eax = MEM32(edx + 0x8); /* 0x005DBE78: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DBE7B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBE85; /* 0x005DBE7F: je 0x5dbe85 */
L_005DBE81:
    edi = esi; /* 0x005DBE81: mov edi, esi */
    goto L_005DBE92; /* 0x005DBE83: jmp 0x5dbe92 */
L_005DBE85:
    ecx = MEM32(ebp + 0xC); /* 0x005DBE85: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005DBE88: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x8); /* 0x005DBE8B: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x005DBE8E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF05; /* 0x005DBE90: jne 0x5dbf05 */
L_005DBE92:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005DBE92: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x005DBE96: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBE9E; /* 0x005DBE99: jne 0x5dbe9e */
L_005DBE9B:
    MEM32(edi + 0x4) = esi; /* 0x005DBE9B: mov dword ptr [edi + 4], esi */
L_005DBE9E:
    eax = MEM32(ebx); /* 0x005DBE9E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005DBEA0: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBEAA; /* 0x005DBEA3: jne 0x5dbeaa */
L_005DBEA5:
    MEM32(eax + 0x4) = edi; /* 0x005DBEA5: mov dword ptr [eax + 4], edi */
    goto L_005DBEB5; /* 0x005DBEA8: jmp 0x5dbeb5 */
L_005DBEAA:
    /* cmp MEM32(esi), edx */ /* 0x005DBEAA: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBEB2; /* 0x005DBEAC: jne 0x5dbeb2 */
L_005DBEAE:
    MEM32(esi) = edi; /* 0x005DBEAE: mov dword ptr [esi], edi */
    goto L_005DBEB5; /* 0x005DBEB0: jmp 0x5dbeb5 */
L_005DBEB2:
    MEM32(esi + 0x8) = edi; /* 0x005DBEB2: mov dword ptr [esi + 8], edi */
L_005DBEB5:
    eax = MEM32(ebx); /* 0x005DBEB5: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x005DBEB7: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBEDE; /* 0x005DBEB9: jne 0x5dbede */
L_005DBEBB:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005DBEBB: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBEC5; /* 0x005DBEBF: je 0x5dbec5 */
L_005DBEC1:
    ecx = esi; /* 0x005DBEC1: mov ecx, esi */
    goto L_005DBEDC; /* 0x005DBEC3: jmp 0x5dbedc */
L_005DBEC5:
    eax = MEM32(edi); /* 0x005DBEC5: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005DBEC7: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DBEC9: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBEDA; /* 0x005DBECD: jne 0x5dbeda */
L_005DBECF:
    /* nop */ /* 0x005DBECF: nop  */
L_005DBED0:
    ecx = eax; /* 0x005DBED0: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005DBED2: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DBED4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBED0; /* 0x005DBED8: je 0x5dbed0 */
L_005DBEDA:
    eax = MEM32(ebx); /* 0x005DBEDA: mov eax, dword ptr [ebx] */
L_005DBEDC:
    MEM32(eax) = ecx; /* 0x005DBEDC: mov dword ptr [eax], ecx */
L_005DBEDE:
    eax = MEM32(ebx); /* 0x005DBEDE: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x005DBEE0: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF61; /* 0x005DBEE3: jne 0x5dbf61 */
L_005DBEE5:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005DBEE5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DBEF4; /* 0x005DBEE9: je 0x5dbef4 */
L_005DBEEB:
    ecx = MEM32(ebx); /* 0x005DBEEB: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x005DBEED: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x005DBEEF: mov dword ptr [ecx + 8], eax */
    goto L_005DBF61; /* 0x005DBEF2: jmp 0x5dbf61 */
L_005DBEF4:
    ecx = edi; /* 0x005DBEF4: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x005DBEF6: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x005DBEFB: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x005DBEFD: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x005DBF00: mov dword ptr [ecx + 8], eax */
    goto L_005DBF61; /* 0x005DBF03: jmp 0x5dbf61 */
L_005DBF05:
    MEM32(esi + 0x4) = ecx; /* 0x005DBF05: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x005DBF08: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x005DBF0A: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x005DBF0C: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF15; /* 0x005DBF0F: jne 0x5dbf15 */
L_005DBF11:
    esi = ecx; /* 0x005DBF11: mov esi, ecx */
    goto L_005DBF2F; /* 0x005DBF13: jmp 0x5dbf2f */
L_005DBF15:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005DBF15: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x005DBF19: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF21; /* 0x005DBF1C: jne 0x5dbf21 */
L_005DBF1E:
    MEM32(edi + 0x4) = esi; /* 0x005DBF1E: mov dword ptr [edi + 4], esi */
L_005DBF21:
    MEM32(esi) = edi; /* 0x005DBF21: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x005DBF23: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005DBF26: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x005DBF29: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x005DBF2C: mov dword ptr [eax + 4], ecx */
L_005DBF2F:
    eax = MEM32(ebx); /* 0x005DBF2F: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005DBF31: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF3B; /* 0x005DBF34: jne 0x5dbf3b */
L_005DBF36:
    MEM32(eax + 0x4) = ecx; /* 0x005DBF36: mov dword ptr [eax + 4], ecx */
    goto L_005DBF49; /* 0x005DBF39: jmp 0x5dbf49 */
L_005DBF3B:
    eax = MEM32(edx + 0x4); /* 0x005DBF3B: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x005DBF3E: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF46; /* 0x005DBF40: jne 0x5dbf46 */
L_005DBF42:
    MEM32(eax) = ecx; /* 0x005DBF42: mov dword ptr [eax], ecx */
    goto L_005DBF49; /* 0x005DBF44: jmp 0x5dbf49 */
L_005DBF46:
    MEM32(eax + 0x8) = ecx; /* 0x005DBF46: mov dword ptr [eax + 8], ecx */
L_005DBF49:
    eax = MEM32(edx + 0x4); /* 0x005DBF49: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005DBF4C: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x005DBF4F: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x005DBF52: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x005DBF55: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005DBF58: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x10)); /* 0x005DBF5B: mov edx, dword ptr [ebp - 0x10] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x005DBF5E: mov byte ptr [edx + 0xc], cl */
L_005DBF61:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x005DBF61: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC073; /* 0x005DBF65: jne 0x5dc073 */
L_005DBF6B:
    eax = MEM32(ebx); /* 0x005DBF6B: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005DBF6D: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC06F; /* 0x005DBF70: je 0x5dc06f */
L_005DBF76:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x005DBF76: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC06C; /* 0x005DBF7A: jne 0x5dc06c */
L_005DBF80:
    ecx = MEM32(esi); /* 0x005DBF80: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x005DBF82: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBFF2; /* 0x005DBF84: jne 0x5dbff2 */
L_005DBF86:
    ecx = MEM32(esi + 0x8); /* 0x005DBF86: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005DBF89: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBFA2; /* 0x005DBF8D: jne 0x5dbfa2 */
L_005DBF8F:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005DBF8F: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005DBF93: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005DBF95: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005DBF96: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005DBF9A: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005DBF9F: mov ecx, dword ptr [esi + 8] */
L_005DBFA2:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005DBFA2: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC025; /* 0x005DBFA6: jne 0x5dc025 */
L_005DBFA8:
    eax = MEM32(ecx); /* 0x005DBFA8: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DBFAA: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBFB9; /* 0x005DBFAE: jne 0x5dbfb9 */
L_005DBFB0:
    eax = MEM32(ecx + 0x8); /* 0x005DBFB0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DBFB3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC021; /* 0x005DBFB7: je 0x5dc021 */
L_005DBFB9:
    eax = MEM32(ecx + 0x8); /* 0x005DBFB9: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DBFBC: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBFD7; /* 0x005DBFC0: jne 0x5dbfd7 */
L_005DBFC2:
    eax = MEM32(ecx); /* 0x005DBFC2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x005DBFC4: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DBFC5: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005DBFC9: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005DBFCD: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x005DBFCF: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005DBFD4: mov ecx, dword ptr [esi + 8] */
L_005DBFD7:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005DBFD7: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005DBFDA: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005DBFDD: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x005DBFE1: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x005DBFE4: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005DBFE6: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DBFE7: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005DBFEB: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_005DC06C; /* 0x005DBFF0: jmp 0x5dc06c */
L_005DBFF2:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005DBFF2: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC00A; /* 0x005DBFF6: jne 0x5dc00a */
L_005DBFF8:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005DBFF8: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005DBFFC: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005DBFFE: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005DBFFF: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x005DC003: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005DC008: mov ecx, dword ptr [esi] */
L_005DC00A:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005DC00A: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC025; /* 0x005DC00E: jne 0x5dc025 */
L_005DC010:
    eax = MEM32(ecx + 0x8); /* 0x005DC010: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DC013: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC037; /* 0x005DC017: jne 0x5dc037 */
L_005DC019:
    eax = MEM32(ecx); /* 0x005DC019: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DC01B: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC037; /* 0x005DC01F: jne 0x5dc037 */
L_005DC021:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005DC021: mov byte ptr [ecx + 0xc], 0 */
L_005DC025:
    eax = MEM32(ebx); /* 0x005DC025: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x005DC027: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x005DC029: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005DC02C: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DBF76; /* 0x005DC02F: jne 0x5dbf76 */
L_005DC035:
    goto L_005DC06C; /* 0x005DC035: jmp 0x5dc06c */
L_005DC037:
    eax = MEM32(ecx); /* 0x005DC037: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005DC039: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC054; /* 0x005DC03D: jne 0x5dc054 */
L_005DC03F:
    eax = MEM32(ecx + 0x8); /* 0x005DC03F: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x005DC042: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DC043: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005DC047: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005DC04B: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x005DC04D: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005DC052: mov ecx, dword ptr [esi] */
L_005DC054:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005DC054: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005DC057: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005DC05A: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x005DC05E: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x005DC060: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005DC062: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DC063: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x005DC067: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005DC06C:
    edx = MEM32(ebp + (-0x10)); /* 0x005DC06C: mov edx, dword ptr [ebp - 0x10] */
L_005DC06F:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x005DC06F: mov byte ptr [edi + 0xc], 1 */
L_005DC073:
    eax = edx + 0x10; /* 0x005DC073: lea eax, [edx + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005DC076: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC079: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = eax + 0x8; /* 0x005DC080: lea ecx, [eax + 8] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005DC083: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC086: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005DC08D: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005DC090: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005DC095: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005DC098: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DC099: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x005DC09F: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC0A2: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005DC0A5: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x005DC0A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DC0B0; /* 0x005DC0AA: je 0x5dc0b0 */
L_005DC0AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005DC0AC: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x005DC0AD: mov dword ptr [ebx + 4], eax */
L_005DC0B0:
    eax = MEM32(ebp + 0x8); /* 0x005DC0B0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005DC0B3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC0B5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC0B8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC0BF: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC0C0: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC0C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC0C2: pop ebx */
    esp = ebp; /* 0x005DC0C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC0C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DC0C6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DC0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC0D0u);

L_005DC0D0:
    PUSH32(esp, ebp); /* 0x005DC0D0: push ebp */
    ebp = esp; /* 0x005DC0D1: mov ebp, esp */
    edx = MEM32(ecx); /* 0x005DC0D3: mov edx, dword ptr [ecx] */
    ecx = edx; /* 0x005DC0D5: mov ecx, edx */
    PUSH32(esp, esi); /* 0x005DC0D7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x005DC0D8: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x4); /* 0x005DC0DB: mov eax, dword ptr [edx + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DC0DE: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC10D; /* 0x005DC0E2: jne 0x5dc10d */
L_005DC0E4:
    PUSH32(esp, ebx); /* 0x005DC0E4: push ebx */
    ebx = MEM32(esi + 0x4); /* 0x005DC0E5: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x005DC0E8: push edi */
    edi = MEM32(esi); /* 0x005DC0E9: mov edi, dword ptr [esi] */
    goto L_005DC0F0; /* 0x005DC0EB: jmp 0x5dc0f0 */
L_005DC0F0:
    /* cmp MEM32(eax + 0x14), ebx */ /* 0x005DC0F0: cmp dword ptr [eax + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DC101; /* 0x005DC0F3: ja 0x5dc101 */
L_005DC0F5:
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC0FC; /* 0x005DC0F5: jb 0x5dc0fc */
L_005DC0F7:
    /* cmp MEM32(eax + 0x10), edi */ /* 0x005DC0F7: cmp dword ptr [eax + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DC101; /* 0x005DC0FA: jae 0x5dc101 */
L_005DC0FC:
    eax = MEM32(eax + 0x8); /* 0x005DC0FC: mov eax, dword ptr [eax + 8] */
    goto L_005DC105; /* 0x005DC0FF: jmp 0x5dc105 */
L_005DC101:
    ecx = eax; /* 0x005DC101: mov ecx, eax */
    eax = MEM32(eax); /* 0x005DC103: mov eax, dword ptr [eax] */
L_005DC105:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DC105: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC0F0; /* 0x005DC109: je 0x5dc0f0 */
L_005DC10B:
    edi = POP32_VAL(esp); /* 0x005DC10B: pop edi */
    ebx = POP32_VAL(esp); /* 0x005DC10C: pop ebx */
L_005DC10D:
    /* cmp ecx, edx */ /* 0x005DC10D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC134; /* 0x005DC10F: je 0x5dc134 */
L_005DC111:
    eax = MEM32(esi + 0x4); /* 0x005DC111: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(ecx + 0x14) */ /* 0x005DC114: cmp eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC134; /* 0x005DC117: jb 0x5dc134 */
L_005DC119:
    if (CMP_A(_flag_a, _flag_b)) goto L_005DC122; /* 0x005DC119: ja 0x5dc122 */
L_005DC11B:
    eax = MEM32(esi); /* 0x005DC11B: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x005DC11D: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC134; /* 0x005DC120: jb 0x5dc134 */
L_005DC122:
    eax = MEM32(ebp + 0x8); /* 0x005DC122: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x005DC125: mov dword ptr [ebp + 0xc], ecx */
    ecx = ebp + 0xC; /* 0x005DC128: lea ecx, [ebp + 0xc] */
    ecx = MEM32(ecx); /* 0x005DC12B: mov ecx, dword ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x005DC12D: pop esi */
    MEM32(eax) = ecx; /* 0x005DC12E: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x005DC130: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DC131: ret 8 */
L_005DC134:
    eax = MEM32(ebp + 0x8); /* 0x005DC134: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x005DC137: lea ecx, [ebp + 0xc] */
    MEM32(ebp + 0xC) = edx; /* 0x005DC13A: mov dword ptr [ebp + 0xc], edx */
    ecx = MEM32(ecx); /* 0x005DC13D: mov ecx, dword ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x005DC13F: pop esi */
    MEM32(eax) = ecx; /* 0x005DC140: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x005DC142: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DC143: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DC150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC150u);

L_005DC150:
    PUSH32(esp, ebp); /* 0x005DC150: push ebp */
    ebp = esp; /* 0x005DC151: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005DC153: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DC156: push esi */
    esi = ecx; /* 0x005DC157: mov esi, ecx */
    MEM32(esi) = 0; /* 0x005DC159: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005DC15F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005DC166: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x005DC16D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DC178; /* 0x005DC16F: jne 0x5dc178 */
L_005DC171:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DC171: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005DC173: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DC174: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DC175: ret 4 */
L_005DC178:
    /* cmp eax, 0x012F684Bu */ /* 0x005DC178: cmp eax, 0x12f684b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x012F684Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DC18A; /* 0x005DC17D: jbe 0x5dc18a */
L_005DC17F:
    PUSH32(esp, 0x007DFAB0u); /* 0x005DC17F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005DC184: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005DC18A:
    PUSH32(esp, edi); /* 0x005DC18A: push edi */
    edi = (uint32_t)((int32_t)eax * (int32_t)0xD8u); /* 0x005DC18B: imul edi, eax, 0xd8 */
    PUSH32(esp, edi); /* 0x005DC191: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005DC192: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC198: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005DC19B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DC1B1; /* 0x005DC19D: je 0x5dc1b1 */
L_005DC19F:
    MEM32(esi) = eax; /* 0x005DC19F: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005DC1A1: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005DC1A4: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005DC1A6: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005DC1A9: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005DC1AB: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC1AC: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DC1AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DC1AE: ret 4 */
L_005DC1B1:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005DC1B1: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DC1B7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DC1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC1C0u);

L_005DC1C0:
    PUSH32(esp, ebp); /* 0x005DC1C0: push ebp */
    ebp = esp; /* 0x005DC1C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC1C3: push -1 */
    PUSH32(esp, 0x007AF2B6u); /* 0x005DC1C5: push 0x7af2b6 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC1CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC1D0: push eax */
    PUSH32(esp, ecx); /* 0x005DC1D1: push ecx */
    PUSH32(esp, ebx); /* 0x005DC1D2: push ebx */
    PUSH32(esp, esi); /* 0x005DC1D3: push esi */
    PUSH32(esp, edi); /* 0x005DC1D4: push edi */
    eax = MEM32(0x855000); /* 0x005DC1D5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC1DA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC1DC: push eax */
    eax = ebp + (-0xC); /* 0x005DC1DD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC1E0: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x005DC1E6: mov eax, ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x005DC1E8: mov dword ptr [ebp - 0x10], eax */
    edi = MEM32(ebp + 0x8); /* 0x005DC1EB: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x005DC1EE: mov esi, edi */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005DC1F0: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC23F; /* 0x005DC1F4: jne 0x5dc23f */
L_005DC1F6:
    ebx = MEM32(0x7CC694); /* 0x005DC1F6: mov ebx, dword ptr [0x7cc694] */
    esp = esp; /* 0x005DC1FC: lea esp, [esp] */
L_005DC200:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005DC200: push dword ptr [esi + 8] */
    ecx = eax; /* 0x005DC203: mov ecx, eax */
    RECOMP_CALL(sub_005DC1C0); /* 0x005DC205: call 0x5dc1c0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x005DC20A: mov esi, dword ptr [esi] */
    eax = edi + 0x10; /* 0x005DC20C: lea eax, [edi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x005DC20F: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC212: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = eax + 0x8; /* 0x005DC219: lea ecx, [eax + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x005DC21C: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC21F: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005DC226: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005DC229: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005DC22E: push edi */
    RECOMP_ICALL(ebx); /* 0x005DC22F: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005DC231: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC234: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005DC237: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = esi; /* 0x005DC23B: mov edi, esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC200; /* 0x005DC23D: je 0x5dc200 */
L_005DC23F:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC23F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC242: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC249: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC24A: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC24B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC24C: pop ebx */
    esp = ebp; /* 0x005DC24D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC24F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DC250: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DC260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC260u);

L_005DC260:
    PUSH32(esp, ebp); /* 0x005DC260: push ebp */
    ebp = esp; /* 0x005DC261: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DC263: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x005DC264: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x005DC267: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005DC26A: push esi */
    esi = ecx; /* 0x005DC26B: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005DC26D: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005DC26F: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2A6; /* 0x005DC271: jne 0x5dc2a6 */
L_005DC273:
    /* cmp edx, ecx */ /* 0x005DC273: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2A6; /* 0x005DC275: jne 0x5dc2a6 */
L_005DC277:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005DC277: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x005DC27A: mov ecx, esi */
    RECOMP_CALL(sub_005DC1C0); /* 0x005DC27C: call 0x5dc1c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005DC281: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005DC283: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005DC286: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005DC288: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005DC28A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005DC28C: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x005DC28F: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x005DC291: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x005DC298: pop esi */
    ecx = MEM32(eax); /* 0x005DC299: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005DC29B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005DC29E: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x005DC2A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC2A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DC2A3: ret 0xc */
L_005DC2A6:
    /* cmp eax, edx */ /* 0x005DC2A6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC30F; /* 0x005DC2A8: je 0x5dc30f */
L_005DC2AA:
    ebx = ebx; /* 0x005DC2AA: lea ebx, [ebx] */
L_005DC2B0:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DC2B0: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x005DC2B4: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2FB; /* 0x005DC2B6: jne 0x5dc2fb */
L_005DC2B8:
    edx = MEM32(eax + 0x8); /* 0x005DC2B8: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DC2BB: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2DC; /* 0x005DC2BF: jne 0x5dc2dc */
L_005DC2C1:
    eax = MEM32(edx); /* 0x005DC2C1: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DC2C3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2F8; /* 0x005DC2C7: jne 0x5dc2f8 */
L_005DC2C9:
    esp = esp; /* 0x005DC2C9: lea esp, [esp] */
L_005DC2D0:
    edx = eax; /* 0x005DC2D0: mov edx, eax */
    eax = MEM32(edx); /* 0x005DC2D2: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DC2D4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC2D0; /* 0x005DC2D8: je 0x5dc2d0 */
L_005DC2DA:
    goto L_005DC2F8; /* 0x005DC2DA: jmp 0x5dc2f8 */
L_005DC2DC:
    edx = MEM32(eax + 0x4); /* 0x005DC2DC: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DC2DF: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2F8; /* 0x005DC2E3: jne 0x5dc2f8 */
L_005DC2E5:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005DC2E5: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2F8; /* 0x005DC2E8: jne 0x5dc2f8 */
L_005DC2EA:
    eax = edx; /* 0x005DC2EA: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x005DC2EC: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x005DC2EF: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005DC2F2: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC2E5; /* 0x005DC2F6: je 0x5dc2e5 */
L_005DC2F8:
    MEM32(ebp + 0xC) = edx; /* 0x005DC2F8: mov dword ptr [ebp + 0xc], edx */
L_005DC2FB:
    PUSH32(esp, ecx); /* 0x005DC2FB: push ecx */
    eax = ebp + (-0x4); /* 0x005DC2FC: lea eax, [ebp - 4] */
    ecx = esi; /* 0x005DC2FF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005DC301: push eax */
    RECOMP_CALL(sub_005DBE30); /* 0x005DC302: call 0x5dbe30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005DC307: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x005DC30A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC2B0; /* 0x005DC30D: jne 0x5dc2b0 */
L_005DC30F:
    ecx = MEM32(ebp + 0x8); /* 0x005DC30F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x005DC312: pop esi */
    MEM32(ecx) = eax; /* 0x005DC313: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x005DC315: mov eax, ecx */
    esp = ebp; /* 0x005DC317: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC319: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DC31A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DC320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC320u);

L_005DC320:
    PUSH32(esp, ebp); /* 0x005DC320: push ebp */
    ebp = esp; /* 0x005DC321: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC323: push -1 */
    PUSH32(esp, 0x007AF2E0u); /* 0x005DC325: push 0x7af2e0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC32A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC330: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005DC331: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DC334: push ebx */
    PUSH32(esp, esi); /* 0x005DC335: push esi */
    PUSH32(esp, edi); /* 0x005DC336: push edi */
    eax = MEM32(0x855000); /* 0x005DC337: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC33C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC33E: push eax */
    eax = ebp + (-0xC); /* 0x005DC33F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC342: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DC348: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x44u); /* 0x005DC34B: push 0x44 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005DC34D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC353: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005DC356: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x005DC358: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x005DC35B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DC365; /* 0x005DC35D: jne 0x5dc365 */
L_005DC35F:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005DC35F: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005DC365:
    MEM32(ebp + (-0x14)) = esi; /* 0x005DC365: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC368: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x005DC36F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DC372: push eax */
    PUSH32(esp, esi); /* 0x005DC373: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DC374: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005DC379: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DC37C: push eax */
    eax = esi + 0x4; /* 0x005DC37D: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005DC380: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DC381: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005DC386: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DC389: push eax */
    eax = esi + 0x8; /* 0x005DC38A: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005DC38D: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DC38E: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC393: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x005DC39A: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x005DC3A0: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC3A2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC3A5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC3AC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC3AD: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC3AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC3AF: pop ebx */
    esp = ebp; /* 0x005DC3B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC3B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DC3B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DC3B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC3B4u);

L_005DC3B4:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005DC3B4: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DC3B7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC3BD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005DC3C0: push 0 */
    PUSH32(esp, 0); /* 0x005DC3C2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DC3C4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DC3C9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DC3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC3D0u);

L_005DC3D0:
    PUSH32(esp, ebp); /* 0x005DC3D0: push ebp */
    ebp = esp; /* 0x005DC3D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC3D3: push -1 */
    PUSH32(esp, 0x007AF330u); /* 0x005DC3D5: push 0x7af330 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC3DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC3E0: push eax */
    PUSH32(esp, ecx); /* 0x005DC3E1: push ecx */
    PUSH32(esp, ebx); /* 0x005DC3E2: push ebx */
    PUSH32(esp, esi); /* 0x005DC3E3: push esi */
    eax = MEM32(0x855000); /* 0x005DC3E4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC3E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC3EB: push eax */
    eax = ebp + (-0xC); /* 0x005DC3EC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC3EF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DC3F5: mov esi, ecx */
    SET_HI8(ebx, MEM8(ebp + 0xC)); /* 0x005DC3F7: mov bh, byte ptr [ebp + 0xc] */
    /* cmp HI8(ebx), MEM8(ebp + 0x10) */ /* 0x005DC3FA: cmp bh, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x10)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC442; /* 0x005DC3FD: jb 0x5dc442 */
L_005DC3FF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC3FF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC402: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x005DC404: mov dword ptr [ebp + 0xc], esp */
    PUSH32(esp, 0x007E13C8u); /* 0x005DC407: push 0x7e13c8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC40C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC411: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC418: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC41B: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DC41D: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007E13ACu); /* 0x005DC420: push 0x7e13ac */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC425: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DC42A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC42E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x56u; /* 0x005DC435: mov ecx, 0x56 */
    RECOMP_CALL(sub_00668DA0); /* 0x005DC43A: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005DC43F: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005DC442:
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x005DC442: mov bl, byte ptr [ebp + 8] */
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x005DC445: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_005DC48C; /* 0x005DC447: jae 0x5dc48c */
L_005DC449:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC449: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC44C: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x005DC44E: mov dword ptr [ebp + 0xc], esp */
    PUSH32(esp, 0x007E13C8u); /* 0x005DC451: push 0x7e13c8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC456: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005DC45B: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC462: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC465: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x005DC467: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007E13B8u); /* 0x005DC46A: push 0x7e13b8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC46F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DC474: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC478: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x57u; /* 0x005DC47F: mov ecx, 0x57 */
    RECOMP_CALL(sub_00668DA0); /* 0x005DC484: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005DC489: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005DC48C:
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x005DC48C: mov al, byte ptr [ebp + 0x10] */
    /* cmp LO8(ebx), LO8(eax) */ /* 0x005DC48F: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DC4D9; /* 0x005DC491: jbe 0x5dc4d9 */
L_005DC493:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC493: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC496: mov ecx, esp */
    MEM32(ebp + 0xC) = esp; /* 0x005DC498: mov dword ptr [ebp + 0xc], esp */
    PUSH32(esp, 0x007E13C8u); /* 0x005DC49B: push 0x7e13c8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC4A0: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x005DC4A5: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC4AC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC4AF: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x005DC4B1: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007E13F0u); /* 0x005DC4B4: push 0x7e13f0 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC4B9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005DC4BE: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC4C2: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x58u; /* 0x005DC4C9: mov ecx, 0x58 */
    RECOMP_CALL(sub_00668DA0); /* 0x005DC4CE: call 0x668da0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x005DC4D3: mov al, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005DC4D6: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005DC4D9:
    ecx = (uint32_t)LO8(eax); /* 0x005DC4D9: movzx ecx, al */
    eax = (uint32_t)HI8(ebx); /* 0x005DC4DC: movzx eax, bh */
    /* cmp eax, ecx */ /* 0x005DC4DF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC4E7; /* 0x005DC4E1: jne 0x5dc4e7 */
L_005DC4E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DC4E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DC4EF; /* 0x005DC4E5: jmp 0x5dc4ef */
L_005DC4E7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005DC4E7: sub ecx, eax */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0046D3D0); /* 0x005DC4E9: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005DC4EE: inc eax */
    _flag_k = FK_INC;
L_005DC4EF:
    PUSH32(esp, ecx); /* 0x005DC4EF: push ecx */
    PUSH32(esp, eax); /* 0x005DC4F0: push eax */
    eax = ebp + 0x13; /* 0x005DC4F1: lea eax, [ebp + 0x13] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - HI8(ebx)); /* 0x005DC4F4: sub bl, bh */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x005DC4F6: push eax */
    ecx = esi; /* 0x005DC4F7: mov ecx, esi */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(ebx)); /* 0x005DC4F9: mov byte ptr [ebp + 0x13], bl */
    RECOMP_CALL(sub_005F5800); /* 0x005DC4FC: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC501: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC504: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC50B: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DC50C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC50D: pop ebx */
    esp = ebp; /* 0x005DC50E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC510: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DC511: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DC520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC520u);

L_005DC520:
    PUSH32(esp, ebp); /* 0x005DC520: push ebp */
    ebp = esp; /* 0x005DC521: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC523: push -1 */
    PUSH32(esp, 0x00783C70u); /* 0x005DC525: push 0x783c70 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC52A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC530: push eax */
    PUSH32(esp, ecx); /* 0x005DC531: push ecx */
    PUSH32(esp, ebx); /* 0x005DC532: push ebx */
    PUSH32(esp, esi); /* 0x005DC533: push esi */
    PUSH32(esp, edi); /* 0x005DC534: push edi */
    eax = MEM32(0x855000); /* 0x005DC535: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC53A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC53C: push eax */
    eax = ebp + (-0xC); /* 0x005DC53D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC540: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DC546: mov edi, ecx */
    SET_HI8(ebx, MEM8(ebp + 0x8)); /* 0x005DC548: mov bh, byte ptr [ebp + 8] */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x005DC54B: mov al, byte ptr [ebp + 0xc] */
    /* cmp HI8(ebx), LO8(eax) */ /* 0x005DC54E: cmp bh, al */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC598; /* 0x005DC550: jb 0x5dc598 */
L_005DC552:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC552: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC555: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x005DC557: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007E13C8u); /* 0x005DC55A: push 0x7e13c8 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC55F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC564: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DC56B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DC56E: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DC570: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007E13ACu); /* 0x005DC573: push 0x7e13ac */
    RECOMP_CALL(sub_00409FA0); /* 0x005DC578: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DC57D: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC581: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x68u; /* 0x005DC588: mov ecx, 0x68 */
    RECOMP_CALL(sub_00668DA0); /* 0x005DC58D: call 0x668da0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x005DC592: mov al, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005DC595: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005DC598:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005DC598: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)LO8(eax); /* 0x005DC59A: movzx ecx, al */
    esi = (uint32_t)HI8(ebx); /* 0x005DC59D: movzx esi, bh */
    MEM8(ebp + 0xF) = (uint8_t)(LO8(ebx)); /* 0x005DC5A0: mov byte ptr [ebp + 0xf], bl */
    /* cmp esi, ecx */ /* 0x005DC5A3: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC5C0; /* 0x005DC5A5: je 0x5dc5c0 */
L_005DC5A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DC5A7: sub ecx, esi */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0046D3D0); /* 0x005DC5A9: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005DC5AE: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005DC5C0; /* 0x005DC5AF: je 0x5dc5c0 */
L_005DC5B1:
    PUSH32(esp, eax); /* 0x005DC5B1: push eax */
    eax = ebp + 0xF; /* 0x005DC5B2: lea eax, [ebp + 0xf] */
    ecx = edi; /* 0x005DC5B5: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005DC5B7: push eax */
    RECOMP_CALL(sub_005F58E0); /* 0x005DC5B8: call 0x5f58e0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(ebp + 0xF)); /* 0x005DC5BD: mov bl, byte ptr [ebp + 0xf] */
L_005DC5C0:
    eax = (uint32_t)LO8(ebx); /* 0x005DC5C0: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005DC5C3: add eax, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC5C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC5C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC5CF: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC5D0: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC5D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC5D2: pop ebx */
    esp = ebp; /* 0x005DC5D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC5D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DC5D6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DC5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC5E0u);

L_005DC5E0:
    PUSH32(esp, ebp); /* 0x005DC5E0: push ebp */
    ebp = esp; /* 0x005DC5E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC5E3: push -1 */
    PUSH32(esp, 0x00793FC8u); /* 0x005DC5E5: push 0x793fc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC5EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC5F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x005DC5F1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DC5F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC5F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005DC5FB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x005DC5FE: push esi */
    PUSH32(esp, eax); /* 0x005DC5FF: push eax */
    eax = ebp + (-0xC); /* 0x005DC600: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC603: mov dword ptr fs:[0], eax */
    edx = ecx; /* 0x005DC609: mov edx, ecx */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DC60B: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005DC612: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005DC619: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DC620: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005DC627: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC62B: mov dword ptr [ebp - 4], 0 */
    /* test edx, edx */ /* 0x005DC632: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DC648; /* 0x005DC634: jne 0x5dc648 */
L_005DC636:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005DC636: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005DC63A: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005DC63D: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005DC640: cmovae eax, dword ptr [ebp - 0x28] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x005DC644: mov byte ptr [eax], cl */
    goto L_005DC669; /* 0x005DC646: jmp 0x5dc669 */
L_005DC648:
    /* cmp MEM8(edx), 0 */ /* 0x005DC648: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC651; /* 0x005DC64B: jne 0x5dc651 */
L_005DC64D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DC64D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DC65F; /* 0x005DC64F: jmp 0x5dc65f */
L_005DC651:
    ecx = edx; /* 0x005DC651: mov ecx, edx */
    esi = ecx + 0x1; /* 0x005DC653: lea esi, [ecx + 1] */
L_005DC656:
    SET_LO8(eax, MEM8(ecx)); /* 0x005DC656: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005DC658: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005DC659: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DC656; /* 0x005DC65B: jne 0x5dc656 */
L_005DC65D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DC65D: sub ecx, esi */
    _flag_k = FK_CMP;
L_005DC65F:
    PUSH32(esp, ecx); /* 0x005DC65F: push ecx */
    PUSH32(esp, edx); /* 0x005DC660: push edx */
    ecx = ebp + (-0x28); /* 0x005DC661: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DC664: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
L_005DC669:
    ecx = ebp + (-0x28); /* 0x005DC669: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_00521720); /* 0x005DC66C: call 0x521720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005DC671: mov esi, eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC673: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005DC67A: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DC68C; /* 0x005DC67E: jb 0x5dc68c */
L_005DC680:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005DC680: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DC683: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC689: add esp, 4 */
    _flag_k = FK_ADD;
L_005DC68C:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005DC68C: mov dword ptr [ebp - 0x14], 0xf */
    eax = esi; /* 0x005DC693: mov eax, esi */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DC695: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005DC69C: mov byte ptr [ebp - 0x28], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC6A0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC6A3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC6AA: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DC6AB: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x005DC6AC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DC6AF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DC6B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DC6B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC6B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DC6B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DC6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC6C0u);

L_005DC6C0:
    PUSH32(esp, ebp); /* 0x005DC6C0: push ebp */
    ebp = esp; /* 0x005DC6C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DC6C3: push ecx */
    eax = edx; /* 0x005DC6C4: mov eax, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005DC6C6: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x005DC6C9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DC8AF; /* 0x005DC6CB: je 0x5dc8af */
L_005DC6D1:
    PUSH32(esp, ebx); /* 0x005DC6D1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005DC6D2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DC6D5: push esi */
    PUSH32(esp, edi); /* 0x005DC6D6: push edi */
    esi = ecx + 0xC; /* 0x005DC6D7: lea esi, [ecx + 0xc] */
    edi = ebx + 0xC; /* 0x005DC6DA: lea edi, [ebx + 0xc] */
    ecx = ecx; /* 0x005DC6DD: lea ecx, [ecx] */
L_005DC6E0:
    eax = MEM32(esi + (-0xC)); /* 0x005DC6E0: mov eax, dword ptr [esi - 0xc] */
    MEM32(ebx) = eax; /* 0x005DC6E3: mov dword ptr [ebx], eax */
    eax = MEM32(esi + (-0x8)); /* 0x005DC6E5: mov eax, dword ptr [esi - 8] */
    MEM32(ebx + 0x4) = eax; /* 0x005DC6E8: mov dword ptr [ebx + 4], eax */
    eax = MEM32(esi + (-0x4)); /* 0x005DC6EB: mov eax, dword ptr [esi - 4] */
    MEM32(edi + (-0x4)) = eax; /* 0x005DC6EE: mov dword ptr [edi - 4], eax */
    _xmm[0].u64[0] = MEM64(esi); _xmm[0].u64[1] = 0; /* 0x005DC6F1: movq xmm0, qword ptr [esi] */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x005DC6F5: movq qword ptr [edi], xmm0 */
    eax = MEM32(esi + 0x8); /* 0x005DC6F9: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x005DC6FC: mov dword ptr [edi + 8], eax */
    _xmm[0] = xmm_ld(esi + 0xC); /* 0x005DC6FF: movdqu xmm0, xmmword ptr [esi + 0xc] */
    xmm_st(edi + 0xC, _xmm[0]); /* 0x005DC704: movdqu xmmword ptr [edi + 0xc], xmm0 */
    _xmm[0].u64[0] = MEM64(esi + 0x1C); _xmm[0].u64[1] = 0; /* 0x005DC709: movq xmm0, qword ptr [esi + 0x1c] */
    MEM64(edi + 0x1C) = _xmm[0].u64[0]; /* 0x005DC70E: movq qword ptr [edi + 0x1c], xmm0 */
    eax = MEM32(esi + 0x24); /* 0x005DC713: mov eax, dword ptr [esi + 0x24] */
    MEM32(edi + 0x24) = eax; /* 0x005DC716: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(esi + 0x28); /* 0x005DC719: mov eax, dword ptr [esi + 0x28] */
    MEM32(edi + 0x28) = eax; /* 0x005DC71C: mov dword ptr [edi + 0x28], eax */
    eax = (uint32_t)MEM8(esi + 0x2C); /* 0x005DC71F: movzx eax, byte ptr [esi + 0x2c] */
    MEM8(edi + 0x2C) = (uint8_t)(LO8(eax)); /* 0x005DC723: mov byte ptr [edi + 0x2c], al */
    SET_LO16(eax, MEM16(esi + 0x2E)); /* 0x005DC726: mov ax, word ptr [esi + 0x2e] */
    MEM16(edi + 0x2E) = (uint16_t)(LO16(eax)); /* 0x005DC72A: mov word ptr [edi + 0x2e], ax */
    eax = MEM32(esi + 0x30); /* 0x005DC72E: mov eax, dword ptr [esi + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x005DC731: mov dword ptr [edi + 0x30], eax */
    eax = (uint32_t)MEM8(esi + 0x34); /* 0x005DC734: movzx eax, byte ptr [esi + 0x34] */
    MEM8(edi + 0x34) = (uint8_t)(LO8(eax)); /* 0x005DC738: mov byte ptr [edi + 0x34], al */
    eax = (uint32_t)MEM8(esi + 0x35); /* 0x005DC73B: movzx eax, byte ptr [esi + 0x35] */
    MEM8(edi + 0x35) = (uint8_t)(LO8(eax)); /* 0x005DC73F: mov byte ptr [edi + 0x35], al */
    eax = (uint32_t)MEM8(esi + 0x36); /* 0x005DC742: movzx eax, byte ptr [esi + 0x36] */
    MEM8(edi + 0x36) = (uint8_t)(LO8(eax)); /* 0x005DC746: mov byte ptr [edi + 0x36], al */
    eax = (uint32_t)MEM8(esi + 0x37); /* 0x005DC749: movzx eax, byte ptr [esi + 0x37] */
    MEM8(edi + 0x37) = (uint8_t)(LO8(eax)); /* 0x005DC74D: mov byte ptr [edi + 0x37], al */
    eax = (uint32_t)MEM8(esi + 0x38); /* 0x005DC750: movzx eax, byte ptr [esi + 0x38] */
    MEM8(edi + 0x38) = (uint8_t)(LO8(eax)); /* 0x005DC754: mov byte ptr [edi + 0x38], al */
    eax = (uint32_t)MEM8(esi + 0x39); /* 0x005DC757: movzx eax, byte ptr [esi + 0x39] */
    MEM8(edi + 0x39) = (uint8_t)(LO8(eax)); /* 0x005DC75B: mov byte ptr [edi + 0x39], al */
    eax = (uint32_t)MEM8(esi + 0x3A); /* 0x005DC75E: movzx eax, byte ptr [esi + 0x3a] */
    MEM8(edi + 0x3A) = (uint8_t)(LO8(eax)); /* 0x005DC762: mov byte ptr [edi + 0x3a], al */
    eax = (uint32_t)MEM8(esi + 0x3B); /* 0x005DC765: movzx eax, byte ptr [esi + 0x3b] */
    MEM8(edi + 0x3B) = (uint8_t)(LO8(eax)); /* 0x005DC769: mov byte ptr [edi + 0x3b], al */
    eax = (uint32_t)MEM8(esi + 0x3C); /* 0x005DC76C: movzx eax, byte ptr [esi + 0x3c] */
    MEM8(edi + 0x3C) = (uint8_t)(LO8(eax)); /* 0x005DC770: mov byte ptr [edi + 0x3c], al */
    eax = (uint32_t)MEM8(esi + 0x3D); /* 0x005DC773: movzx eax, byte ptr [esi + 0x3d] */
    MEM8(edi + 0x3D) = (uint8_t)(LO8(eax)); /* 0x005DC777: mov byte ptr [edi + 0x3d], al */
    eax = (uint32_t)MEM8(esi + 0x3E); /* 0x005DC77A: movzx eax, byte ptr [esi + 0x3e] */
    MEM8(edi + 0x3E) = (uint8_t)(LO8(eax)); /* 0x005DC77E: mov byte ptr [edi + 0x3e], al */
    eax = (uint32_t)MEM8(esi + 0x3F); /* 0x005DC781: movzx eax, byte ptr [esi + 0x3f] */
    MEM8(edi + 0x3F) = (uint8_t)(LO8(eax)); /* 0x005DC785: mov byte ptr [edi + 0x3f], al */
    eax = (uint32_t)MEM8(esi + 0x40); /* 0x005DC788: movzx eax, byte ptr [esi + 0x40] */
    MEM8(edi + 0x40) = (uint8_t)(LO8(eax)); /* 0x005DC78C: mov byte ptr [edi + 0x40], al */
    _xmm[0] = xmm_ld(esi + 0x44); /* 0x005DC78F: movdqu xmm0, xmmword ptr [esi + 0x44] */
    xmm_st(edi + 0x44, _xmm[0]); /* 0x005DC794: movdqu xmmword ptr [edi + 0x44], xmm0 */
    _xmm[0].u64[0] = MEM64(esi + 0x54); _xmm[0].u64[1] = 0; /* 0x005DC799: movq xmm0, qword ptr [esi + 0x54] */
    MEM64(edi + 0x54) = _xmm[0].u64[0]; /* 0x005DC79E: movq qword ptr [edi + 0x54], xmm0 */
    eax = MEM32(esi + 0x5C); /* 0x005DC7A3: mov eax, dword ptr [esi + 0x5c] */
    MEM32(edi + 0x5C) = eax; /* 0x005DC7A6: mov dword ptr [edi + 0x5c], eax */
    eax = (uint32_t)MEM8(esi + 0x60); /* 0x005DC7A9: movzx eax, byte ptr [esi + 0x60] */
    MEM8(edi + 0x60) = (uint8_t)(LO8(eax)); /* 0x005DC7AD: mov byte ptr [edi + 0x60], al */
    _xmm[0].u64[0] = MEM64(esi + 0x64); _xmm[0].u64[1] = 0; /* 0x005DC7B0: movq xmm0, qword ptr [esi + 0x64] */
    MEM64(edi + 0x64) = _xmm[0].u64[0]; /* 0x005DC7B5: movq qword ptr [edi + 0x64], xmm0 */
    eax = MEM32(esi + 0x6C); /* 0x005DC7BA: mov eax, dword ptr [esi + 0x6c] */
    MEM32(edi + 0x6C) = eax; /* 0x005DC7BD: mov dword ptr [edi + 0x6c], eax */
    _xmm[0].u64[0] = MEM64(esi + 0x70); _xmm[0].u64[1] = 0; /* 0x005DC7C0: movq xmm0, qword ptr [esi + 0x70] */
    MEM64(edi + 0x70) = _xmm[0].u64[0]; /* 0x005DC7C5: movq qword ptr [edi + 0x70], xmm0 */
    eax = MEM32(esi + 0x78); /* 0x005DC7CA: mov eax, dword ptr [esi + 0x78] */
    MEM32(edi + 0x78) = eax; /* 0x005DC7CD: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(esi + 0x7C); /* 0x005DC7D0: mov eax, dword ptr [esi + 0x7c] */
    MEM32(edi + 0x7C) = eax; /* 0x005DC7D3: mov dword ptr [edi + 0x7c], eax */
    eax = MEM32(esi + 0x80); /* 0x005DC7D6: mov eax, dword ptr [esi + 0x80] */
    MEM32(edi + 0x80) = eax; /* 0x005DC7DC: mov dword ptr [edi + 0x80], eax */
    eax = MEM32(esi + 0x84); /* 0x005DC7E2: mov eax, dword ptr [esi + 0x84] */
    MEM32(edi + 0x84) = eax; /* 0x005DC7E8: mov dword ptr [edi + 0x84], eax */
    eax = MEM32(esi + 0x88); /* 0x005DC7EE: mov eax, dword ptr [esi + 0x88] */
    MEM32(edi + 0x88) = eax; /* 0x005DC7F4: mov dword ptr [edi + 0x88], eax */
    eax = MEM32(esi + 0x8C); /* 0x005DC7FA: mov eax, dword ptr [esi + 0x8c] */
    MEM32(edi + 0x8C) = eax; /* 0x005DC800: mov dword ptr [edi + 0x8c], eax */
    _xmm[0].u64[0] = MEM64(esi + 0x90); _xmm[0].u64[1] = 0; /* 0x005DC806: movq xmm0, qword ptr [esi + 0x90] */
    MEM64(edi + 0x90) = _xmm[0].u64[0]; /* 0x005DC80E: movq qword ptr [edi + 0x90], xmm0 */
    eax = MEM32(esi + 0x98); /* 0x005DC816: mov eax, dword ptr [esi + 0x98] */
    MEM32(edi + 0x98) = eax; /* 0x005DC81C: mov dword ptr [edi + 0x98], eax */
    _xmm[0].u64[0] = MEM64(esi + 0x9C); _xmm[0].u64[1] = 0; /* 0x005DC822: movq xmm0, qword ptr [esi + 0x9c] */
    MEM64(edi + 0x9C) = _xmm[0].u64[0]; /* 0x005DC82A: movq qword ptr [edi + 0x9c], xmm0 */
    ecx = edi + 0xC0; /* 0x005DC832: lea ecx, [edi + 0xc0] */
    eax = MEM32(esi + 0xA4); /* 0x005DC838: mov eax, dword ptr [esi + 0xa4] */
    MEM32(edi + 0xA4) = eax; /* 0x005DC83E: mov dword ptr [edi + 0xa4], eax */
    _xmm[0].u64[0] = MEM64(esi + 0xA8); _xmm[0].u64[1] = 0; /* 0x005DC844: movq xmm0, qword ptr [esi + 0xa8] */
    MEM64(edi + 0xA8) = _xmm[0].u64[0]; /* 0x005DC84C: movq qword ptr [edi + 0xa8], xmm0 */
    eax = MEM32(esi + 0xB0); /* 0x005DC854: mov eax, dword ptr [esi + 0xb0] */
    MEM32(edi + 0xB0) = eax; /* 0x005DC85A: mov dword ptr [edi + 0xb0], eax */
    _xmm[0].u64[0] = MEM64(esi + 0xB4); _xmm[0].u64[1] = 0; /* 0x005DC860: movq xmm0, qword ptr [esi + 0xb4] */
    MEM64(edi + 0xB4) = _xmm[0].u64[0]; /* 0x005DC868: movq qword ptr [edi + 0xb4], xmm0 */
    eax = MEM32(esi + 0xBC); /* 0x005DC870: mov eax, dword ptr [esi + 0xbc] */
    MEM32(edi + 0xBC) = eax; /* 0x005DC876: mov dword ptr [edi + 0xbc], eax */
    eax = esi + 0xC0; /* 0x005DC87C: lea eax, [esi + 0xc0] */
    PUSH32(esp, eax); /* 0x005DC882: push eax */
    RECOMP_CALL(sub_005DCC60); /* 0x005DC883: call 0x5dcc60 */
    RECOMP_FLAGS_IN();
    esi = esi + 0xD8; /* 0x005DC888: lea esi, [esi + 0xd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xD8u; /* 0x005DC88E: add ebx, 0xd8 */
    _flag_k = FK_ADD;
    ecx = esi + (-0xC); /* 0x005DC894: lea ecx, [esi - 0xc] */
    edi = edi + 0xD8; /* 0x005DC897: lea edi, [edi + 0xd8] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005DC89D: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DC6E0; /* 0x005DC8A0: jne 0x5dc6e0 */
L_005DC8A6:
    edi = POP32_VAL(esp); /* 0x005DC8A6: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC8A7: pop esi */
    eax = ebx; /* 0x005DC8A8: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005DC8AA: pop ebx */
    esp = ebp; /* 0x005DC8AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC8AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DC8AE: ret  */
L_005DC8AF:
    eax = MEM32(ebp + 0x8); /* 0x005DC8AF: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005DC8B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC8B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DC8B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DC8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC8C0u);

L_005DC8C0:
    PUSH32(esp, ebp); /* 0x005DC8C0: push ebp */
    ebp = esp; /* 0x005DC8C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC8C3: push -1 */
    PUSH32(esp, 0x007AF355u); /* 0x005DC8C5: push 0x7af355 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC8CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC8D0: push eax */
    PUSH32(esp, ecx); /* 0x005DC8D1: push ecx */
    PUSH32(esp, ebx); /* 0x005DC8D2: push ebx */
    PUSH32(esp, esi); /* 0x005DC8D3: push esi */
    PUSH32(esp, edi); /* 0x005DC8D4: push edi */
    eax = MEM32(0x855000); /* 0x005DC8D5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC8DA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC8DC: push eax */
    eax = ebp + (-0xC); /* 0x005DC8DD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC8E0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DC8E6: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DC8E9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DC8EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0046EE50); /* 0x005DC8EF: call 0x46ee50 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DC8F4: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x005DC8F6: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC8F9: mov dword ptr [ebp - 4], 0 */
    edx = ecx + 0x8; /* 0x005DC900: lea edx, [ecx + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DC903: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x005DC907: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DC912; /* 0x005DC909: je 0x5dc912 */
L_005DC90B:
    eax = MEM32(ebp + 0x10); /* 0x005DC90B: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x005DC90E: mov eax, dword ptr [eax] */
    MEM32(edx) = eax; /* 0x005DC910: mov dword ptr [edx], eax */
L_005DC912:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DC912: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC916: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x005DC91D: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC91F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC922: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC929: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC92A: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC92B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC92C: pop ebx */
    esp = ebp; /* 0x005DC92D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC92F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DC930: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DC933(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC933u);

L_005DC933:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005DC933: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DC936: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DC93C: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005DC93F: push 0 */
    PUSH32(esp, 0); /* 0x005DC941: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DC943: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DC948u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DC950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC950u);

L_005DC950:
    PUSH32(esp, ebp); /* 0x005DC950: push ebp */
    ebp = esp; /* 0x005DC951: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DC953: push -1 */
    PUSH32(esp, 0x007AF393u); /* 0x005DC955: push 0x7af393 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DC95A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DC960: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005DC961: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DC964: push ebx */
    PUSH32(esp, esi); /* 0x005DC965: push esi */
    PUSH32(esp, edi); /* 0x005DC966: push edi */
    eax = MEM32(0x855000); /* 0x005DC967: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DC96C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DC96E: push eax */
    eax = ebp + (-0xC); /* 0x005DC96F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DC972: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DC978: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005DCE50); /* 0x005DC97B: call 0x5dce50 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005DC980: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x005DC982: mov dword ptr [ebp - 0x14], edi */
    MEM16(edi + 0xC) = (uint16_t)(0); /* 0x005DC985: mov word ptr [edi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DC98B: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x10; /* 0x005DC992: lea esi, [edi + 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x005DC995: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DC998: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005DC99C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DC9DB; /* 0x005DC99E: je 0x5dc9db */
L_005DC9A0:
    eax = MEM32(ebp + 0xC); /* 0x005DC9A0: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x005DC9A3: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x005DC9A5: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(ecx); /* 0x005DC9A8: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x005DC9AA: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x005DC9AC: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005DC9AF: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x005DC9B2: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x005DC9B5: mov dword ptr [ebp - 0x1c], esi */
    ecx = esi + 0x4; /* 0x005DC9B8: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_005D6C80); /* 0x005DC9BB: call 0x5d6c80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DC9C0: mov byte ptr [ebp - 4], 2 */
    MEM8(esi) = (uint8_t)(1); /* 0x005DC9C4: mov byte ptr [esi], 1 */
    MEM8(esi + 0x1) = (uint8_t)(0); /* 0x005DC9C7: mov byte ptr [esi + 1], 0 */
    MEM8(esi + 0x2) = (uint8_t)(2); /* 0x005DC9CB: mov byte ptr [esi + 2], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DC9CF: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005DC9D3: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DC9D7: mov byte ptr [ebp - 4], 1 */
L_005DC9DB:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DC9DB: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DC9DF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005DC9E6: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DC9E8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DC9EB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DC9F2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DC9F3: pop edi */
    esi = POP32_VAL(esp); /* 0x005DC9F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DC9F5: pop ebx */
    esp = ebp; /* 0x005DC9F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DC9F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DC9F9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DC9FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DC9FCu);

L_005DC9FC:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005DC9FC: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DC9FF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCA05: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005DCA08: push 0 */
    PUSH32(esp, 0); /* 0x005DCA0A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DCA0C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DCA11u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCA20u);

L_005DCA20:
    PUSH32(esp, ebp); /* 0x005DCA20: push ebp */
    ebp = esp; /* 0x005DCA21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCA23: push -1 */
    PUSH32(esp, 0x007AF3B0u); /* 0x005DCA25: push 0x7af3b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCA2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCA30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005DCA31: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DCA34: push ebx */
    PUSH32(esp, esi); /* 0x005DCA35: push esi */
    PUSH32(esp, edi); /* 0x005DCA36: push edi */
    eax = MEM32(0x855000); /* 0x005DCA37: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCA3C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCA3E: push eax */
    eax = ebp + (-0xC); /* 0x005DCA3F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCA42: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DCA48: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005DCA4B: mov ebx, ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x005DCA4D: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DCA50: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x005DCA57: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCA86; /* 0x005DCA5B: jne 0x5dca86 */
L_005DCA5D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCA5D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DCA60: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x005DCA61: push dword ptr [ebx] */
L_005DCA63:
    PUSH32(esp, 1); /* 0x005DCA63: push 1 */
L_005DCA65:
    ecx = ebx; /* 0x005DCA65: mov ecx, ebx */
L_005DCA67:
    esi = MEM32(ebp + 0x8); /* 0x005DCA67: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DCA6A: push esi */
    RECOMP_CALL(sub_005DCF60); /* 0x005DCA6B: call 0x5dcf60 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005DCA70: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCA72: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCA75: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCA7C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DCA7D: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCA7E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DCA7F: pop ebx */
    esp = ebp; /* 0x005DCA80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCA82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DCA83: ret 0x10 */
L_005DCA86:
    edi = MEM32(ebx); /* 0x005DCA86: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + 0xC); /* 0x005DCA88: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edi) */ /* 0x005DCA8B: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCAAA; /* 0x005DCA8D: jne 0x5dcaaa */
L_005DCA8F:
    eax = esi + 0x10; /* 0x005DCA8F: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DCA92: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DCA93: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00546F00); /* 0x005DCA96: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCA9B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB6E; /* 0x005DCA9D: je 0x5dcb6e */
L_005DCAA3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCAA3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DCAA6: push ecx */
    PUSH32(esp, esi); /* 0x005DCAA7: push esi */
    RECOMP_BACKEDGE();
    goto L_005DCA63; /* 0x005DCAA8: jmp 0x5dca63 */
L_005DCAAA:
    /* cmp esi, edi */ /* 0x005DCAAA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCACE; /* 0x005DCAAC: jne 0x5dcace */
L_005DCAAE:
    esi = MEM32(edi + 0x8); /* 0x005DCAAE: mov esi, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DCAB1: push dword ptr [ebp + 0x10] */
    eax = esi + 0x10; /* 0x005DCAB4: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DCAB7: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005DCAB8: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCABD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB6E; /* 0x005DCABF: je 0x5dcb6e */
L_005DCAC5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCAC5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DCAC8: push ecx */
    PUSH32(esp, esi); /* 0x005DCAC9: push esi */
    PUSH32(esp, 0); /* 0x005DCACA: push 0 */
    RECOMP_BACKEDGE();
    goto L_005DCA65; /* 0x005DCACC: jmp 0x5dca65 */
L_005DCACE:
    eax = esi + 0x10; /* 0x005DCACE: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DCAD1: push eax */
    ebx = MEM32(ebp + 0x10); /* 0x005DCAD2: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x005DCAD5: push ebx */
    RECOMP_CALL(sub_00546F00); /* 0x005DCAD6: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCADB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB1E; /* 0x005DCADD: je 0x5dcb1e */
L_005DCADF:
    MEM32(ebp + (-0x14)) = esi; /* 0x005DCADF: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005DCAE2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x005DCAE5: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x005DCAEA: push ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x005DCAEB: mov ebx, dword ptr [ebp - 0x14] */
    eax = ebx + 0x10; /* 0x005DCAEE: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x005DCAF1: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005DCAF2: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCAF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB1B; /* 0x005DCAF9: je 0x5dcb1b */
L_005DCAFB:
    eax = MEM32(ebx + 0x8); /* 0x005DCAFB: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCAFE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DCB01: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005DCB02: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DCB05: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCB13; /* 0x005DCB09: je 0x5dcb13 */
L_005DCB0B:
    PUSH32(esp, ebx); /* 0x005DCB0B: push ebx */
    PUSH32(esp, 0); /* 0x005DCB0C: push 0 */
    RECOMP_BACKEDGE();
    goto L_005DCA67; /* 0x005DCB0E: jmp 0x5dca67 */
L_005DCB13:
    PUSH32(esp, esi); /* 0x005DCB13: push esi */
    PUSH32(esp, 1); /* 0x005DCB14: push 1 */
    RECOMP_BACKEDGE();
    goto L_005DCA67; /* 0x005DCB16: jmp 0x5dca67 */
L_005DCB1B:
    ebx = MEM32(ebp + 0x10); /* 0x005DCB1B: mov ebx, dword ptr [ebp + 0x10] */
L_005DCB1E:
    PUSH32(esp, ebx); /* 0x005DCB1E: push ebx */
    eax = esi + 0x10; /* 0x005DCB1F: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DCB22: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005DCB23: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCB28: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB71; /* 0x005DCB2A: je 0x5dcb71 */
L_005DCB2C:
    MEM32(ebp + (-0x14)) = esi; /* 0x005DCB2C: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005DCB2F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x005DCB32: call 0x40b880 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x14)); /* 0x005DCB37: mov ebx, dword ptr [ebp - 0x14] */
    /* cmp ebx, edi */ /* 0x005DCB3A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCB4E; /* 0x005DCB3C: je 0x5dcb4e */
L_005DCB3E:
    eax = ebx + 0x10; /* 0x005DCB3E: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x005DCB41: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DCB42: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00546F00); /* 0x005DCB45: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCB4A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCB6E; /* 0x005DCB4C: je 0x5dcb6e */
L_005DCB4E:
    eax = MEM32(esi + 0x8); /* 0x005DCB4E: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCB51: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DCB54: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005DCB55: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DCB58: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCB66; /* 0x005DCB5C: je 0x5dcb66 */
L_005DCB5E:
    PUSH32(esp, esi); /* 0x005DCB5E: push esi */
    PUSH32(esp, 0); /* 0x005DCB5F: push 0 */
    RECOMP_BACKEDGE();
    goto L_005DCA67; /* 0x005DCB61: jmp 0x5dca67 */
L_005DCB66:
    PUSH32(esp, ebx); /* 0x005DCB66: push ebx */
    PUSH32(esp, 1); /* 0x005DCB67: push 1 */
    RECOMP_BACKEDGE();
    goto L_005DCA67; /* 0x005DCB69: jmp 0x5dca67 */
L_005DCB6E:
    ebx = MEM32(ebp + 0x10); /* 0x005DCB6E: mov ebx, dword ptr [ebp + 0x10] */
L_005DCB71:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCB71: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCB78: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x005DCB7B: push ebx */
    PUSH32(esp, 0); /* 0x005DCB7C: push 0 */
    eax = ebp + (-0x18); /* 0x005DCB7E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005DCB81: push eax */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005DCB82: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_005DD150); /* 0x005DCB85: call 0x5dd150 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005DCB8A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005DCB8C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005DCB8F: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCB91: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCB94: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCB9B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DCB9C: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCB9D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DCB9E: pop ebx */
    esp = ebp; /* 0x005DCB9F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCBA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DCBA2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005DCBA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCBA5u);

L_005DCBA5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DCBA5: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005DCDE0); /* 0x005DCBA8: call 0x5dcde0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DCBAD: push 0 */
    PUSH32(esp, 0); /* 0x005DCBAF: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DCBB1: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DCBB6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCBC0u);

L_005DCBC0:
    PUSH32(esp, ebp); /* 0x005DCBC0: push ebp */
    ebp = esp; /* 0x005DCBC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCBC3: push -1 */
    PUSH32(esp, 0x007AF3DEu); /* 0x005DCBC5: push 0x7af3de */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCBCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCBD0: push eax */
    PUSH32(esp, ecx); /* 0x005DCBD1: push ecx */
    PUSH32(esp, ebx); /* 0x005DCBD2: push ebx */
    PUSH32(esp, esi); /* 0x005DCBD3: push esi */
    PUSH32(esp, edi); /* 0x005DCBD4: push edi */
    eax = MEM32(0x855000); /* 0x005DCBD5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCBDA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCBDC: push eax */
    eax = ebp + (-0xC); /* 0x005DCBDD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCBE0: mov dword ptr fs:[0], eax */
    edi = edx; /* 0x005DCBE6: mov edi, edx */
    esi = ecx; /* 0x005DCBE8: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005DCBEA: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, edi */ /* 0x005DCBED: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCC42; /* 0x005DCBEF: je 0x5dcc42 */
L_005DCBF1:
    ebx = MEM32(0x7CC694); /* 0x005DCBF1: mov ebx, dword ptr [0x7cc694] */
    goto L_005DCC00; /* 0x005DCBF7: jmp 0x5dcc00 */
L_005DCC00:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCC00: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi + 0xCC); /* 0x005DCC07: mov eax, dword ptr [esi + 0xcc] */
    /* test eax, eax */ /* 0x005DCC0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCC35; /* 0x005DCC0F: je 0x5dcc35 */
L_005DCC11:
    PUSH32(esp, eax); /* 0x005DCC11: push eax */
    RECOMP_ICALL(ebx); /* 0x005DCC12: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCC14: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xCC) = 0; /* 0x005DCC17: mov dword ptr [esi + 0xcc], 0 */
    MEM32(esi + 0xD0) = 0; /* 0x005DCC21: mov dword ptr [esi + 0xd0], 0 */
    MEM32(esi + 0xD4) = 0; /* 0x005DCC2B: mov dword ptr [esi + 0xd4], 0 */
L_005DCC35:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xD8u; /* 0x005DCC35: add esi, 0xd8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005DCC3B: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, edi */ /* 0x005DCC3E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCC00; /* 0x005DCC40: jne 0x5dcc00 */
L_005DCC42:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCC42: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCC45: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCC4C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DCC4D: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCC4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DCC4F: pop ebx */
    esp = ebp; /* 0x005DCC50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCC52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DCC53: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DCC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCC60u);

L_005DCC60:
    PUSH32(esp, ebp); /* 0x005DCC60: push ebp */
    ebp = esp; /* 0x005DCC61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCC63: push -1 */
    PUSH32(esp, 0x007AF400u); /* 0x005DCC65: push 0x7af400 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCC6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCC70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005DCC71: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DCC74: push ebx */
    PUSH32(esp, esi); /* 0x005DCC75: push esi */
    PUSH32(esp, edi); /* 0x005DCC76: push edi */
    eax = MEM32(0x855000); /* 0x005DCC77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCC7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCC7E: push eax */
    eax = ebp + (-0xC); /* 0x005DCC7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCC82: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DCC88: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005DCC8B: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x005DCC8D: mov dword ptr [ebp - 0x18], edi */
    ebx = MEM32(ebp + 0x8); /* 0x005DCC90: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x005DCC93: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCCA5; /* 0x005DCC95: je 0x5dcca5 */
L_005DCC97:
    eax = MEM32(ebx); /* 0x005DCC97: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebx + 0x4); /* 0x005DCC99: mov ecx, dword ptr [ebx + 4] */
    /* cmp eax, ecx */ /* 0x005DCC9C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCCBB; /* 0x005DCC9E: jne 0x5dccbb */
L_005DCCA0:
    eax = MEM32(edi); /* 0x005DCCA0: mov eax, dword ptr [edi] */
L_005DCCA2:
    MEM32(edi + 0x4) = eax; /* 0x005DCCA2: mov dword ptr [edi + 4], eax */
L_005DCCA5:
    eax = edi; /* 0x005DCCA5: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCCA7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCCAA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCCB1: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DCCB2: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCCB3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DCCB4: pop ebx */
    esp = ebp; /* 0x005DCCB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCCB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DCCB8: ret 4 */
L_005DCCBB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005DCCBB: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DCCBD: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DCCC2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DCCC4: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DCCC7: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DCCC9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DCCC9: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DCCCC: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x005DCCCE: mov dword ptr [ebp + 8], eax */
    esi = MEM32(edi); /* 0x005DCCD1: mov esi, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x005DCCD3: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DCCD6: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DCCD8: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DCCDD: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DCCDF: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DCCE2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DCCE4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DCCE4: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DCCE7: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005DCCE9: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005DCCEC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DCD1F; /* 0x005DCCEF: ja 0x5dcd1f */
L_005DCCF1:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DCCF1: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DCCF4: push esi */
    edx = MEM32(ebx + 0x4); /* 0x005DCCF5: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005DCCF8: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005DD3A0); /* 0x005DCCFA: call 0x5dd3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DCCFF: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x4); /* 0x005DCD02: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005DCD05: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DCD07: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DCD0C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DCD0E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DCD11: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DCD13: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DCD13: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DCD16: add eax, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x005DCD18: imul eax, eax, 0x2c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x005DCD1B: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005DCCA2; /* 0x005DCD1D: jmp 0x5dcca2 */
L_005DCD1F:
    ecx = MEM32(edi + 0x8); /* 0x005DCD1F: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DCD22: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DCD24: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DCD29: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DCD2B: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DCD2E: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DCD30: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DCD30: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DCD33: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005DCD35: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DCD6A; /* 0x005DCD38: ja 0x5dcd6a */
L_005DCD3A:
    esi = (uint32_t)((int32_t)MEM32(ebp + (-0x14)) * (int32_t)0x2Cu); /* 0x005DCD3A: imul esi, dword ptr [ebp - 0x14], 0x2c */
    ecx = MEM32(ebx); /* 0x005DCD3E: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005DCD40: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DCD42: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi)); /* 0x005DCD45: push dword ptr [edi] */
    edx = esi; /* 0x005DCD47: mov edx, esi */
    RECOMP_CALL(sub_005DD3A0); /* 0x005DCD49: call 0x5dd3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005DCD4E: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DCD51: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DCD54: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005DCD55: push dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x4); /* 0x005DCD58: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x005DCD5B: mov ecx, esi */
    RECOMP_CALL(sub_005DD460); /* 0x005DCD5D: call 0x5dd460 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DCD62: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005DCCA2; /* 0x005DCD65: jmp 0x5dcca2 */
L_005DCD6A:
    /* test esi, esi */ /* 0x005DCD6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCD78; /* 0x005DCD6C: je 0x5dcd78 */
L_005DCD6E:
    PUSH32(esp, esi); /* 0x005DCD6E: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DCD6F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCD75: add esp, 4 */
    _flag_k = FK_ADD;
L_005DCD78:
    ecx = MEM32(ebx + 0x4); /* 0x005DCD78: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005DCD7B: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DCD7D: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DCD82: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DCD84: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DCD87: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DCD89: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DCD89: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DCD8C: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DCD8E: push eax */
    ecx = edi; /* 0x005DCD8F: mov ecx, edi */
    RECOMP_CALL(sub_005DCEF0); /* 0x005DCD91: call 0x5dcef0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DCD96: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCCA5; /* 0x005DCD98: je 0x5dcca5 */
L_005DCD9E:
    MEM32(ebp + (-0x4)) = 0; /* 0x005DCD9E: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DCDA5: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DCDA8: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x005DCDA9: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x005DCDAB: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005DCDAE: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005DD460); /* 0x005DCDB0: call 0x5dd460 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DCDB5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005DCDB8: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCDBB: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_005DCCA5; /* 0x005DCDC2: jmp 0x5dcca5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCDC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCDC7u);

L_005DCDC7:
    ecx = MEM32(ebp + (-0x18)); /* 0x005DCDC7: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_00419790); /* 0x005DCDCA: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DCDCF: push 0 */
    PUSH32(esp, 0); /* 0x005DCDD1: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DCDD3: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DCDD8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCDE0u);

L_005DCDE0:
    PUSH32(esp, ebp); /* 0x005DCDE0: push ebp */
    ebp = esp; /* 0x005DCDE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCDE3: push -1 */
    PUSH32(esp, 0x007AF436u); /* 0x005DCDE5: push 0x7af436 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCDEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCDF0: push eax */
    PUSH32(esp, esi); /* 0x005DCDF1: push esi */
    eax = MEM32(0x855000); /* 0x005DCDF2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCDF7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCDF9: push eax */
    eax = ebp + (-0xC); /* 0x005DCDFA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCDFD: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x005DCE03: mov esi, dword ptr [ebp + 8] */
    eax = esi + 0x10; /* 0x005DCE06: lea eax, [esi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x005DCE09: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCE0C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = eax + 0x8; /* 0x005DCE13: lea ecx, [eax + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x005DCE16: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCE19: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005DCE20: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005DCE23: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005DCE28: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DCE29: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCE2F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCE32: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCE35: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCE3C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DCE3D: pop esi */
    esp = ebp; /* 0x005DCE3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCE40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DCE41: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DCE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCE50u);

L_005DCE50:
    PUSH32(esp, ebp); /* 0x005DCE50: push ebp */
    ebp = esp; /* 0x005DCE51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCE53: push -1 */
    PUSH32(esp, 0x007AF460u); /* 0x005DCE55: push 0x7af460 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCE5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCE60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DCE61: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DCE64: push ebx */
    PUSH32(esp, esi); /* 0x005DCE65: push esi */
    PUSH32(esp, edi); /* 0x005DCE66: push edi */
    eax = MEM32(0x855000); /* 0x005DCE67: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCE6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCE6E: push eax */
    eax = ebp + (-0xC); /* 0x005DCE6F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCE72: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DCE78: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005DCE7B: mov edi, ecx */
    PUSH32(esp, 0x44u); /* 0x005DCE7D: push 0x44 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005DCE7F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCE85: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005DCE88: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DCE8A: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005DCE8D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DCE97; /* 0x005DCE8F: jne 0x5dce97 */
L_005DCE91:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005DCE91: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005DCE97:
    MEM32(ebp + (-0x4)) = 0; /* 0x005DCE97: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x005DCE9E: push edi */
    PUSH32(esp, esi); /* 0x005DCE9F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DCEA0: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005DCEA5: push edi */
    eax = esi + 0x4; /* 0x005DCEA6: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005DCEA9: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DCEAA: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005DCEAF: push edi */
    eax = esi + 0x8; /* 0x005DCEB0: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005DCEB3: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005DCEB4: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCEB9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005DCEC0: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DCEC2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DCEC5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DCECC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DCECD: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCECE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DCECF: pop ebx */
    esp = ebp; /* 0x005DCED0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DCED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DCED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DCED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCED4u);

L_005DCED4:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005DCED4: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DCED7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCEDD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005DCEE0: push 0 */
    PUSH32(esp, 0); /* 0x005DCEE2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DCEE4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DCEE9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCEF0u);

L_005DCEF0:
    PUSH32(esp, ebp); /* 0x005DCEF0: push ebp */
    ebp = esp; /* 0x005DCEF1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005DCEF3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DCEF6: push esi */
    esi = ecx; /* 0x005DCEF7: mov esi, ecx */
    MEM32(esi) = 0; /* 0x005DCEF9: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005DCEFF: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005DCF06: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x005DCF0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DCF18; /* 0x005DCF0F: jne 0x5dcf18 */
L_005DCF11:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DCF11: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005DCF13: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DCF14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DCF15: ret 4 */
L_005DCF18:
    /* cmp eax, 0x05D1745Du */ /* 0x005DCF18: cmp eax, 0x5d1745d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05D1745Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005DCF2A; /* 0x005DCF1D: jbe 0x5dcf2a */
L_005DCF1F:
    PUSH32(esp, 0x007DFAB0u); /* 0x005DCF1F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005DCF24: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005DCF2A:
    PUSH32(esp, edi); /* 0x005DCF2A: push edi */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x005DCF2B: imul edi, eax, 0x2c */
    PUSH32(esp, edi); /* 0x005DCF2E: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005DCF2F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCF35: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005DCF38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DCF4E; /* 0x005DCF3A: je 0x5dcf4e */
L_005DCF3C:
    MEM32(esi) = eax; /* 0x005DCF3C: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005DCF3E: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005DCF41: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005DCF43: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005DCF46: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005DCF48: pop edi */
    esi = POP32_VAL(esp); /* 0x005DCF49: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DCF4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DCF4B: ret 4 */
L_005DCF4E:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005DCF4E: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DCF54u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DCF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DCF60u);

L_005DCF60:
    PUSH32(esp, ebp); /* 0x005DCF60: push ebp */
    ebp = esp; /* 0x005DCF61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DCF63: push -1 */
    PUSH32(esp, 0x007AF496u); /* 0x005DCF65: push 0x7af496 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DCF6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DCF70: push eax */
    PUSH32(esp, ebx); /* 0x005DCF71: push ebx */
    PUSH32(esp, esi); /* 0x005DCF72: push esi */
    PUSH32(esp, edi); /* 0x005DCF73: push edi */
    eax = MEM32(0x855000); /* 0x005DCF74: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DCF79: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DCF7B: push eax */
    eax = ebp + (-0xC); /* 0x005DCF7C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DCF7F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DCF85: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x005DCF87: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 0x03C3C3C2u */ /* 0x005DCF8A: cmp eax, 0x3c3c3c2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x03C3C3C2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DCFCB; /* 0x005DCF8F: jb 0x5dcfcb */
L_005DCF91:
    esi = MEM32(ebp + 0x18); /* 0x005DCF91: mov esi, dword ptr [ebp + 0x18] */
    eax = esi + 0x10; /* 0x005DCF94: lea eax, [esi + 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x005DCF97: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCF9A: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = eax + 0x8; /* 0x005DCFA1: lea ecx, [eax + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x005DCFA4: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DCFA7: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005DCFAE: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005D6D20); /* 0x005DCFB1: call 0x5d6d20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005DCFB6: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DCFB7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DCFBD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x005DCFC0: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005DCFC5: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005DCFCB:
    ebx = MEM32(ebp + 0x18); /* 0x005DCFCB: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005DCFCE: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x005DCFCF: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x005DCFD2: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x005DCFD5: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x005DCFD8: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x005DCFDA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DCFEC; /* 0x005DCFDC: jne 0x5dcfec */
L_005DCFDE:
    MEM32(ecx + 0x4) = ebx; /* 0x005DCFDE: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x005DCFE1: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x005DCFE3: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x005DCFE5: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x005DCFE7: mov dword ptr [eax + 8], ebx */
    goto L_005DD00B; /* 0x005DCFEA: jmp 0x5dd00b */
L_005DCFEC:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005DCFEC: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DCFFE; /* 0x005DCFF0: je 0x5dcffe */
L_005DCFF2:
    MEM32(eax) = ebx; /* 0x005DCFF2: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x005DCFF4: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005DCFF6: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD00B; /* 0x005DCFF8: jne 0x5dd00b */
L_005DCFFA:
    MEM32(ecx) = ebx; /* 0x005DCFFA: mov dword ptr [ecx], ebx */
    goto L_005DD00B; /* 0x005DCFFC: jmp 0x5dd00b */
L_005DCFFE:
    MEM32(eax + 0x8) = ebx; /* 0x005DCFFE: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x005DD001: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x005DD003: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD00B; /* 0x005DD006: jne 0x5dd00b */
L_005DD008:
    MEM32(ecx + 0x8) = ebx; /* 0x005DD008: mov dword ptr [ecx + 8], ebx */
L_005DD00B:
    eax = MEM32(ebx + 0x4); /* 0x005DD00B: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x005DD00E: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005DD010: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD12A; /* 0x005DD014: jne 0x5dd12a */
L_005DD01A:
    ebx = ebx; /* 0x005DD01A: lea ebx, [ebx] */
L_005DD020:
    eax = MEM32(esi + 0x4); /* 0x005DD020: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x005DD023: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x005DD026: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x005DD028: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD0A0; /* 0x005DD02A: jne 0x5dd0a0 */
L_005DD02C:
    ecx = MEM32(edx + 0x8); /* 0x005DD02C: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005DD02F: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD0A6; /* 0x005DD033: je 0x5dd0a6 */
L_005DD035:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005DD035: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD044; /* 0x005DD038: jne 0x5dd044 */
L_005DD03A:
    esi = eax; /* 0x005DD03A: mov esi, eax */
    ecx = edi; /* 0x005DD03C: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005DD03E: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x005DD03F: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_005DD044:
    eax = MEM32(esi + 0x4); /* 0x005DD044: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DD047: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005DD04B: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005DD04E: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005DD051: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005DD055: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005DD058: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x005DD05B: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x005DD05D: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x005DD060: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x005DD062: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DD065: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD06E; /* 0x005DD069: jne 0x5dd06e */
L_005DD06B:
    MEM32(eax + 0x4) = ecx; /* 0x005DD06B: mov dword ptr [eax + 4], ecx */
L_005DD06E:
    eax = MEM32(ecx + 0x4); /* 0x005DD06E: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005DD071: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005DD074: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005DD076: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD086; /* 0x005DD079: jne 0x5dd086 */
L_005DD07B:
    MEM32(eax + 0x4) = edx; /* 0x005DD07B: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005DD07E: mov dword ptr [edx + 8], ecx */
    goto L_005DD11A; /* 0x005DD081: jmp 0x5dd11a */
L_005DD086:
    eax = MEM32(ecx + 0x4); /* 0x005DD086: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x005DD089: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD099; /* 0x005DD08C: jne 0x5dd099 */
L_005DD08E:
    MEM32(eax + 0x8) = edx; /* 0x005DD08E: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005DD091: mov dword ptr [edx + 8], ecx */
    goto L_005DD11A; /* 0x005DD094: jmp 0x5dd11a */
L_005DD099:
    MEM32(eax) = edx; /* 0x005DD099: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005DD09B: mov dword ptr [edx + 8], ecx */
    goto L_005DD11A; /* 0x005DD09E: jmp 0x5dd11a */
L_005DD0A0:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005DD0A0: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD0C0; /* 0x005DD0A4: jne 0x5dd0c0 */
L_005DD0A6:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DD0A6: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005DD0AA: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005DD0AE: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005DD0B1: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005DD0B4: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005DD0B8: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x005DD0BB: mov esi, dword ptr [eax + 4] */
    goto L_005DD11D; /* 0x005DD0BE: jmp 0x5dd11d */
L_005DD0C0:
    /* cmp esi, MEM32(eax) */ /* 0x005DD0C0: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD0CE; /* 0x005DD0C2: jne 0x5dd0ce */
L_005DD0C4:
    esi = eax; /* 0x005DD0C4: mov esi, eax */
    ecx = edi; /* 0x005DD0C6: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005DD0C8: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x005DD0C9: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005DD0CE:
    eax = MEM32(esi + 0x4); /* 0x005DD0CE: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DD0D1: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005DD0D5: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005DD0D8: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005DD0DB: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005DD0DF: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005DD0E2: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x005DD0E5: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x005DD0E8: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x005DD0EA: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x005DD0ED: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DD0EF: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD0F8; /* 0x005DD0F3: jne 0x5dd0f8 */
L_005DD0F5:
    MEM32(eax + 0x4) = ecx; /* 0x005DD0F5: mov dword ptr [eax + 4], ecx */
L_005DD0F8:
    eax = MEM32(ecx + 0x4); /* 0x005DD0F8: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005DD0FB: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005DD0FE: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005DD100: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD10A; /* 0x005DD103: jne 0x5dd10a */
L_005DD105:
    MEM32(eax + 0x4) = edx; /* 0x005DD105: mov dword ptr [eax + 4], edx */
    goto L_005DD118; /* 0x005DD108: jmp 0x5dd118 */
L_005DD10A:
    eax = MEM32(ecx + 0x4); /* 0x005DD10A: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x005DD10D: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD115; /* 0x005DD10F: jne 0x5dd115 */
L_005DD111:
    MEM32(eax) = edx; /* 0x005DD111: mov dword ptr [eax], edx */
    goto L_005DD118; /* 0x005DD113: jmp 0x5dd118 */
L_005DD115:
    MEM32(eax + 0x8) = edx; /* 0x005DD115: mov dword ptr [eax + 8], edx */
L_005DD118:
    MEM32(edx) = ecx; /* 0x005DD118: mov dword ptr [edx], ecx */
L_005DD11A:
    MEM32(ecx + 0x4) = edx; /* 0x005DD11A: mov dword ptr [ecx + 4], edx */
L_005DD11D:
    eax = MEM32(esi + 0x4); /* 0x005DD11D: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005DD120: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD020; /* 0x005DD124: je 0x5dd020 */
L_005DD12A:
    eax = MEM32(edi); /* 0x005DD12A: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x005DD12C: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005DD12F: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005DD133: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x005DD136: mov dword ptr [eax], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD138: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD13B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD142: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD143: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD144: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD145: pop ebx */
    esp = ebp; /* 0x005DD146: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD148: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x005DD149: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_005DD150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD150u);

L_005DD150:
    PUSH32(esp, ebp); /* 0x005DD150: push ebp */
    ebp = esp; /* 0x005DD151: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD153: push -1 */
    PUSH32(esp, 0x007AF4C0u); /* 0x005DD155: push 0x7af4c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD15A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD160: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005DD161: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DD164: push ebx */
    PUSH32(esp, esi); /* 0x005DD165: push esi */
    PUSH32(esp, edi); /* 0x005DD166: push edi */
    eax = MEM32(0x855000); /* 0x005DD167: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD16C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD16E: push eax */
    eax = ebp + (-0xC); /* 0x005DD16F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD172: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DD178: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005DD17B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD17E: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x005DD185: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x005DD187: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x005DD18A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005DD18C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x005DD18F: mov ebx, dword ptr [ebp + 0x10] */
L_005DD192:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005DD192: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD1C8; /* 0x005DD196: jne 0x5dd1c8 */
L_005DD198:
    edi = esi; /* 0x005DD198: mov edi, esi */
    eax = esi + 0x10; /* 0x005DD19A: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005DD19D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD1B1; /* 0x005DD1A1: je 0x5dd1b1 */
L_005DD1A3:
    PUSH32(esp, ebx); /* 0x005DD1A3: push ebx */
    PUSH32(esp, eax); /* 0x005DD1A4: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005DD1A5: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DD1AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005DD1AC: sete al */
    goto L_005DD1B8; /* 0x005DD1AF: jmp 0x5dd1b8 */
L_005DD1B1:
    PUSH32(esp, eax); /* 0x005DD1B1: push eax */
    PUSH32(esp, ebx); /* 0x005DD1B2: push ebx */
    RECOMP_CALL(sub_00546F00); /* 0x005DD1B3: call 0x546f00 */
    RECOMP_FLAGS_IN();
L_005DD1B8:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005DD1B8: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x005DD1BB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD1C3; /* 0x005DD1BD: je 0x5dd1c3 */
L_005DD1BF:
    esi = MEM32(esi); /* 0x005DD1BF: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_005DD192; /* 0x005DD1C1: jmp 0x5dd192 */
L_005DD1C3:
    esi = MEM32(esi + 0x8); /* 0x005DD1C3: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_005DD192; /* 0x005DD1C6: jmp 0x5dd192 */
L_005DD1C8:
    esi = edi; /* 0x005DD1C8: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x005DD1CA: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x005DD1CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD214; /* 0x005DD1CF: je 0x5dd214 */
L_005DD1D1:
    ecx = MEM32(ebp + (-0x18)); /* 0x005DD1D1: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x005DD1D4: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x005DD1D6: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD209; /* 0x005DD1D8: jne 0x5dd209 */
L_005DD1DA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DD1DA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005DD1DD: push ecx */
    PUSH32(esp, edi); /* 0x005DD1DE: push edi */
    PUSH32(esp, 1); /* 0x005DD1DF: push 1 */
L_005DD1E1:
    eax = ebp + 0xC; /* 0x005DD1E1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005DD1E4: push eax */
    RECOMP_CALL(sub_005DCF60); /* 0x005DD1E5: call 0x5dcf60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005DD1EA: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005DD1EC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005DD1EF: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x005DD1F1: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD1F5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD1F8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD1FF: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD200: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD201: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD202: pop ebx */
    esp = ebp; /* 0x005DD203: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DD206: ret 0x10 */
L_005DD209:
    ecx = ebp + 0xC; /* 0x005DD209: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x005DD20C: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x005DD211: mov esi, dword ptr [ebp + 0xc] */
L_005DD214:
    PUSH32(esp, ebx); /* 0x005DD214: push ebx */
    eax = esi + 0x10; /* 0x005DD215: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DD218: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005DD219: call 0x546f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DD21E: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x005DD221: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD22F; /* 0x005DD223: je 0x5dd22f */
L_005DD225:
    PUSH32(esp, ecx); /* 0x005DD225: push ecx */
    PUSH32(esp, edi); /* 0x005DD226: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005DD227: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005DD22A: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_005DD1E1; /* 0x005DD22D: jmp 0x5dd1e1 */
L_005DD22F:
    RECOMP_CALL(sub_005DCDE0); /* 0x005DD22F: call 0x5dcde0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005DD234: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x005DD237: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005DD239: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD23D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD240: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD247: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD248: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD249: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD24A: pop ebx */
    esp = ebp; /* 0x005DD24B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD24D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DD24E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005DD251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD251u);

L_005DD251:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005DD251: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005DCDE0); /* 0x005DD254: call 0x5dcde0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DD259: push 0 */
    PUSH32(esp, 0); /* 0x005DD25B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DD25D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DD262u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DD270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD270u);

L_005DD270:
    PUSH32(esp, ebp); /* 0x005DD270: push ebp */
    ebp = esp; /* 0x005DD271: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD273: push -1 */
    PUSH32(esp, 0x007AF4EEu); /* 0x005DD275: push 0x7af4ee */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD27A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD280: push eax */
    PUSH32(esp, esi); /* 0x005DD281: push esi */
    eax = MEM32(0x855000); /* 0x005DD282: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD287: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD289: push eax */
    eax = ebp + (-0xC); /* 0x005DD28A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD28D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD293: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + 0x8); /* 0x005DD29A: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xCC); /* 0x005DD29D: mov eax, dword ptr [esi + 0xcc] */
    /* test eax, eax */ /* 0x005DD2A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD2CF; /* 0x005DD2A5: je 0x5dd2cf */
L_005DD2A7:
    PUSH32(esp, eax); /* 0x005DD2A7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DD2A8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD2AE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xCC) = 0; /* 0x005DD2B1: mov dword ptr [esi + 0xcc], 0 */
    MEM32(esi + 0xD0) = 0; /* 0x005DD2BB: mov dword ptr [esi + 0xd0], 0 */
    MEM32(esi + 0xD4) = 0; /* 0x005DD2C5: mov dword ptr [esi + 0xd4], 0 */
L_005DD2CF:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD2CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD2D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD2D9: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DD2DA: pop esi */
    esp = ebp; /* 0x005DD2DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD2DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DD2DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DD2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD2F0u);

L_005DD2F0:
    PUSH32(esp, ebp); /* 0x005DD2F0: push ebp */
    ebp = esp; /* 0x005DD2F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD2F3: push -1 */
    PUSH32(esp, 0x007AF515u); /* 0x005DD2F5: push 0x7af515 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD2FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD300: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005DD301: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DD304: push ebx */
    PUSH32(esp, esi); /* 0x005DD305: push esi */
    PUSH32(esp, edi); /* 0x005DD306: push edi */
    eax = MEM32(0x855000); /* 0x005DD307: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD30C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD30E: push eax */
    eax = ebp + (-0xC); /* 0x005DD30F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD312: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DD318: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005DD31B: mov ebx, edx */
    edi = ecx; /* 0x005DD31D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005DD31F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DD322: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD325: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005DD32C: lea esp, [esp] */
L_005DD330:
    /* cmp edi, ebx */ /* 0x005DD330: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD35C; /* 0x005DD332: je 0x5dd35c */
L_005DD334:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DD334: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005DD338: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD344; /* 0x005DD33A: je 0x5dd344 */
L_005DD33C:
    PUSH32(esp, edi); /* 0x005DD33C: push edi */
    ecx = esi; /* 0x005DD33D: mov ecx, esi */
    RECOMP_CALL(sub_005DD4E0); /* 0x005DD33F: call 0x5dd4e0 */
    RECOMP_FLAGS_IN();
L_005DD344:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DD344: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xD8u; /* 0x005DD348: add esi, 0xd8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005DD34E: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xD8u; /* 0x005DD351: add edi, 0xd8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005DD357: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005DD330; /* 0x005DD35A: jmp 0x5dd330 */
L_005DD35C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD35C: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005DD363: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD365: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD368: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD36F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD370: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD371: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD372: pop ebx */
    esp = ebp; /* 0x005DD373: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD375: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD376: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD377(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD377u);

L_005DD377:
    esi = MEM32(ebp + (-0x14)); /* 0x005DD377: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005DD37A: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005DD37D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD391; /* 0x005DD37F: je 0x5dd391 */
L_005DD381:
    PUSH32(esp, esi); /* 0x005DD381: push esi */
    RECOMP_CALL(sub_005DD270); /* 0x005DD382: call 0x5dd270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xD8u; /* 0x005DD387: add esi, 0xd8 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005DD38D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD381; /* 0x005DD38F: jne 0x5dd381 */
L_005DD391:
    PUSH32(esp, 0); /* 0x005DD391: push 0 */
    PUSH32(esp, 0); /* 0x005DD393: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DD395: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DD39Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DD3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD3A0u);

L_005DD3A0:
    PUSH32(esp, ebp); /* 0x005DD3A0: push ebp */
    ebp = esp; /* 0x005DD3A1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005DD3A3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DD3A6: push esi */
    esi = edx; /* 0x005DD3A7: mov esi, edx */
    /* cmp ecx, esi */ /* 0x005DD3A9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD3DC; /* 0x005DD3AB: je 0x5dd3dc */
L_005DD3AD:
    ecx = ecx; /* 0x005DD3AD: lea ecx, [ecx] */
L_005DD3B0:
    _xmm[0] = xmm_ld(ecx); /* 0x005DD3B0: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(eax, _xmm[0]); /* 0x005DD3B4: movdqu xmmword ptr [eax], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x10); /* 0x005DD3B8: movdqu xmm0, xmmword ptr [ecx + 0x10] */
    xmm_st(eax + 0x10, _xmm[0]); /* 0x005DD3BD: movdqu xmmword ptr [eax + 0x10], xmm0 */
    _xmm[0].u64[0] = MEM64(ecx + 0x20); _xmm[0].u64[1] = 0; /* 0x005DD3C2: movq xmm0, qword ptr [ecx + 0x20] */
    MEM64(eax + 0x20) = _xmm[0].u64[0]; /* 0x005DD3C7: movq qword ptr [eax + 0x20], xmm0 */
    edx = MEM32(ecx + 0x28); /* 0x005DD3CC: mov edx, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2Cu; /* 0x005DD3CF: add ecx, 0x2c */
    _flag_k = FK_ADD;
    MEM32(eax + 0x28) = edx; /* 0x005DD3D2: mov dword ptr [eax + 0x28], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x005DD3D5: add eax, 0x2c */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x005DD3D8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DD3B0; /* 0x005DD3DA: jne 0x5dd3b0 */
L_005DD3DC:
    esi = POP32_VAL(esp); /* 0x005DD3DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DD3DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD3DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD3E0u);

L_005DD3E0:
    PUSH32(esp, ebp); /* 0x005DD3E0: push ebp */
    ebp = esp; /* 0x005DD3E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD3E3: push -1 */
    PUSH32(esp, 0x007AF53Eu); /* 0x005DD3E5: push 0x7af53e */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD3EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD3F0: push eax */
    PUSH32(esp, ecx); /* 0x005DD3F1: push ecx */
    PUSH32(esp, esi); /* 0x005DD3F2: push esi */
    eax = MEM32(0x855000); /* 0x005DD3F3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD3F8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD3FA: push eax */
    eax = ebp + (-0xC); /* 0x005DD3FB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD3FE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DD404: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005DD406: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD409: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi + 0xCC); /* 0x005DD410: mov eax, dword ptr [esi + 0xcc] */
    /* test eax, eax */ /* 0x005DD416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD442; /* 0x005DD418: je 0x5dd442 */
L_005DD41A:
    PUSH32(esp, eax); /* 0x005DD41A: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DD41B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD421: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xCC) = 0; /* 0x005DD424: mov dword ptr [esi + 0xcc], 0 */
    MEM32(esi + 0xD0) = 0; /* 0x005DD42E: mov dword ptr [esi + 0xd0], 0 */
    MEM32(esi + 0xD4) = 0; /* 0x005DD438: mov dword ptr [esi + 0xd4], 0 */
L_005DD442:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD442: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD445: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD44C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DD44D: pop esi */
    esp = ebp; /* 0x005DD44E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD450: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD451: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD460u);

L_005DD460:
    PUSH32(esp, ebp); /* 0x005DD460: push ebp */
    ebp = esp; /* 0x005DD461: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD463: push -1 */
    PUSH32(esp, 0x007AF560u); /* 0x005DD465: push 0x7af560 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD46A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD470: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DD471: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DD474: push ebx */
    PUSH32(esp, esi); /* 0x005DD475: push esi */
    PUSH32(esp, edi); /* 0x005DD476: push edi */
    eax = MEM32(0x855000); /* 0x005DD477: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD47C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD47E: push eax */
    eax = ebp + (-0xC); /* 0x005DD47F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD482: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DD488: mov dword ptr [ebp - 0x10], esp */
    esi = edx; /* 0x005DD48B: mov esi, edx */
    edi = ecx; /* 0x005DD48D: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD48F: mov dword ptr [ebp - 4], 0 */
    ebx = MEM32(ebp + 0x8); /* 0x005DD496: mov ebx, dword ptr [ebp + 8] */
    esp = esp; /* 0x005DD499: lea esp, [esp] */
L_005DD4A0:
    /* cmp edi, esi */ /* 0x005DD4A0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD4B9; /* 0x005DD4A2: je 0x5dd4b9 */
L_005DD4A4:
    PUSH32(esp, edi); /* 0x005DD4A4: push edi */
    PUSH32(esp, ebx); /* 0x005DD4A5: push ebx */
    RECOMP_CALL(sub_005DD740); /* 0x005DD4A6: call 0x5dd740 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2Cu; /* 0x005DD4AB: add ebx, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x005DD4AE: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2Cu; /* 0x005DD4B1: add edi, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edi; /* 0x005DD4B4: mov dword ptr [ebp - 0x14], edi */
    RECOMP_BACKEDGE();
    goto L_005DD4A0; /* 0x005DD4B7: jmp 0x5dd4a0 */
L_005DD4B9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD4B9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005DD4C0: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD4C2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD4C5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD4CC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD4CD: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD4CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD4CF: pop ebx */
    esp = ebp; /* 0x005DD4D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD4D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD4D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD4D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD4D4u);

L_005DD4D4:
    PUSH32(esp, 0); /* 0x005DD4D4: push 0 */
    PUSH32(esp, 0); /* 0x005DD4D6: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DD4D8: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DD4DDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DD4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD4E0u);

L_005DD4E0:
    PUSH32(esp, ebp); /* 0x005DD4E0: push ebp */
    ebp = esp; /* 0x005DD4E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD4E3: push -1 */
    PUSH32(esp, 0x007AF53Eu); /* 0x005DD4E5: push 0x7af53e */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD4EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD4F0: push eax */
    PUSH32(esp, ecx); /* 0x005DD4F1: push ecx */
    PUSH32(esp, esi); /* 0x005DD4F2: push esi */
    eax = MEM32(0x855000); /* 0x005DD4F3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD4F8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD4FA: push eax */
    eax = ebp + (-0xC); /* 0x005DD4FB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD4FE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DD504: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005DD506: mov dword ptr [ebp - 0x10], esi */
    edx = MEM32(ebp + 0x8); /* 0x005DD509: mov edx, dword ptr [ebp + 8] */
    ecx = esi + 0xCC; /* 0x005DD50C: lea ecx, [esi + 0xcc] */
    eax = MEM32(edx); /* 0x005DD512: mov eax, dword ptr [edx] */
    MEM32(esi) = eax; /* 0x005DD514: mov dword ptr [esi], eax */
    eax = MEM32(edx + 0x4); /* 0x005DD516: mov eax, dword ptr [edx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005DD519: mov dword ptr [esi + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x005DD51C: mov eax, dword ptr [edx + 8] */
    MEM32(esi + 0x8) = eax; /* 0x005DD51F: mov dword ptr [esi + 8], eax */
    _xmm[0].u64[0] = MEM64(edx + 0xC); _xmm[0].u64[1] = 0; /* 0x005DD522: movq xmm0, qword ptr [edx + 0xc] */
    MEM64(esi + 0xC) = _xmm[0].u64[0]; /* 0x005DD527: movq qword ptr [esi + 0xc], xmm0 */
    eax = MEM32(edx + 0x14); /* 0x005DD52C: mov eax, dword ptr [edx + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x005DD52F: mov dword ptr [esi + 0x14], eax */
    _xmm[0] = xmm_ld(edx + 0x18); /* 0x005DD532: movdqu xmm0, xmmword ptr [edx + 0x18] */
    xmm_st(esi + 0x18, _xmm[0]); /* 0x005DD537: movdqu xmmword ptr [esi + 0x18], xmm0 */
    _xmm[0].u64[0] = MEM64(edx + 0x28); _xmm[0].u64[1] = 0; /* 0x005DD53C: movq xmm0, qword ptr [edx + 0x28] */
    MEM64(esi + 0x28) = _xmm[0].u64[0]; /* 0x005DD541: movq qword ptr [esi + 0x28], xmm0 */
    eax = MEM32(edx + 0x30); /* 0x005DD546: mov eax, dword ptr [edx + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x005DD549: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(edx + 0x34); /* 0x005DD54C: mov eax, dword ptr [edx + 0x34] */
    MEM32(esi + 0x34) = eax; /* 0x005DD54F: mov dword ptr [esi + 0x34], eax */
    eax = (uint32_t)MEM8(edx + 0x38); /* 0x005DD552: movzx eax, byte ptr [edx + 0x38] */
    MEM8(esi + 0x38) = (uint8_t)(LO8(eax)); /* 0x005DD556: mov byte ptr [esi + 0x38], al */
    SET_LO16(eax, MEM16(edx + 0x3A)); /* 0x005DD559: mov ax, word ptr [edx + 0x3a] */
    MEM16(esi + 0x3A) = (uint16_t)(LO16(eax)); /* 0x005DD55D: mov word ptr [esi + 0x3a], ax */
    eax = MEM32(edx + 0x3C); /* 0x005DD561: mov eax, dword ptr [edx + 0x3c] */
    MEM32(esi + 0x3C) = eax; /* 0x005DD564: mov dword ptr [esi + 0x3c], eax */
    eax = (uint32_t)MEM8(edx + 0x40); /* 0x005DD567: movzx eax, byte ptr [edx + 0x40] */
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x005DD56B: mov byte ptr [esi + 0x40], al */
    eax = (uint32_t)MEM8(edx + 0x41); /* 0x005DD56E: movzx eax, byte ptr [edx + 0x41] */
    MEM8(esi + 0x41) = (uint8_t)(LO8(eax)); /* 0x005DD572: mov byte ptr [esi + 0x41], al */
    eax = (uint32_t)MEM8(edx + 0x42); /* 0x005DD575: movzx eax, byte ptr [edx + 0x42] */
    MEM8(esi + 0x42) = (uint8_t)(LO8(eax)); /* 0x005DD579: mov byte ptr [esi + 0x42], al */
    eax = (uint32_t)MEM8(edx + 0x43); /* 0x005DD57C: movzx eax, byte ptr [edx + 0x43] */
    MEM8(esi + 0x43) = (uint8_t)(LO8(eax)); /* 0x005DD580: mov byte ptr [esi + 0x43], al */
    eax = (uint32_t)MEM8(edx + 0x44); /* 0x005DD583: movzx eax, byte ptr [edx + 0x44] */
    MEM8(esi + 0x44) = (uint8_t)(LO8(eax)); /* 0x005DD587: mov byte ptr [esi + 0x44], al */
    eax = (uint32_t)MEM8(edx + 0x45); /* 0x005DD58A: movzx eax, byte ptr [edx + 0x45] */
    MEM8(esi + 0x45) = (uint8_t)(LO8(eax)); /* 0x005DD58E: mov byte ptr [esi + 0x45], al */
    eax = (uint32_t)MEM8(edx + 0x46); /* 0x005DD591: movzx eax, byte ptr [edx + 0x46] */
    MEM8(esi + 0x46) = (uint8_t)(LO8(eax)); /* 0x005DD595: mov byte ptr [esi + 0x46], al */
    eax = (uint32_t)MEM8(edx + 0x47); /* 0x005DD598: movzx eax, byte ptr [edx + 0x47] */
    MEM8(esi + 0x47) = (uint8_t)(LO8(eax)); /* 0x005DD59C: mov byte ptr [esi + 0x47], al */
    eax = (uint32_t)MEM8(edx + 0x48); /* 0x005DD59F: movzx eax, byte ptr [edx + 0x48] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x005DD5A3: mov byte ptr [esi + 0x48], al */
    eax = (uint32_t)MEM8(edx + 0x49); /* 0x005DD5A6: movzx eax, byte ptr [edx + 0x49] */
    MEM8(esi + 0x49) = (uint8_t)(LO8(eax)); /* 0x005DD5AA: mov byte ptr [esi + 0x49], al */
    eax = (uint32_t)MEM8(edx + 0x4A); /* 0x005DD5AD: movzx eax, byte ptr [edx + 0x4a] */
    MEM8(esi + 0x4A) = (uint8_t)(LO8(eax)); /* 0x005DD5B1: mov byte ptr [esi + 0x4a], al */
    eax = (uint32_t)MEM8(edx + 0x4B); /* 0x005DD5B4: movzx eax, byte ptr [edx + 0x4b] */
    MEM8(esi + 0x4B) = (uint8_t)(LO8(eax)); /* 0x005DD5B8: mov byte ptr [esi + 0x4b], al */
    eax = (uint32_t)MEM8(edx + 0x4C); /* 0x005DD5BB: movzx eax, byte ptr [edx + 0x4c] */
    MEM8(esi + 0x4C) = (uint8_t)(LO8(eax)); /* 0x005DD5BF: mov byte ptr [esi + 0x4c], al */
    _xmm[0] = xmm_ld(edx + 0x50); /* 0x005DD5C2: movdqu xmm0, xmmword ptr [edx + 0x50] */
    xmm_st(esi + 0x50, _xmm[0]); /* 0x005DD5C7: movdqu xmmword ptr [esi + 0x50], xmm0 */
    _xmm[0].u64[0] = MEM64(edx + 0x60); _xmm[0].u64[1] = 0; /* 0x005DD5CC: movq xmm0, qword ptr [edx + 0x60] */
    MEM64(esi + 0x60) = _xmm[0].u64[0]; /* 0x005DD5D1: movq qword ptr [esi + 0x60], xmm0 */
    eax = MEM32(edx + 0x68); /* 0x005DD5D6: mov eax, dword ptr [edx + 0x68] */
    MEM32(esi + 0x68) = eax; /* 0x005DD5D9: mov dword ptr [esi + 0x68], eax */
    eax = (uint32_t)MEM8(edx + 0x6C); /* 0x005DD5DC: movzx eax, byte ptr [edx + 0x6c] */
    MEM8(esi + 0x6C) = (uint8_t)(LO8(eax)); /* 0x005DD5E0: mov byte ptr [esi + 0x6c], al */
    _xmm[0].u64[0] = MEM64(edx + 0x70); _xmm[0].u64[1] = 0; /* 0x005DD5E3: movq xmm0, qword ptr [edx + 0x70] */
    MEM64(esi + 0x70) = _xmm[0].u64[0]; /* 0x005DD5E8: movq qword ptr [esi + 0x70], xmm0 */
    eax = MEM32(edx + 0x78); /* 0x005DD5ED: mov eax, dword ptr [edx + 0x78] */
    MEM32(esi + 0x78) = eax; /* 0x005DD5F0: mov dword ptr [esi + 0x78], eax */
    _xmm[0].u64[0] = MEM64(edx + 0x7C); _xmm[0].u64[1] = 0; /* 0x005DD5F3: movq xmm0, qword ptr [edx + 0x7c] */
    MEM64(esi + 0x7C) = _xmm[0].u64[0]; /* 0x005DD5F8: movq qword ptr [esi + 0x7c], xmm0 */
    eax = MEM32(edx + 0x84); /* 0x005DD5FD: mov eax, dword ptr [edx + 0x84] */
    MEM32(esi + 0x84) = eax; /* 0x005DD603: mov dword ptr [esi + 0x84], eax */
    eax = MEM32(edx + 0x88); /* 0x005DD609: mov eax, dword ptr [edx + 0x88] */
    MEM32(esi + 0x88) = eax; /* 0x005DD60F: mov dword ptr [esi + 0x88], eax */
    eax = edx + 0xCC; /* 0x005DD615: lea eax, [edx + 0xcc] */
    _xmm[0] = xmm_ld(edx + 0x8C); /* 0x005DD61B: movdqu xmm0, xmmword ptr [edx + 0x8c] */
    PUSH32(esp, eax); /* 0x005DD623: push eax */
    xmm_st(esi + 0x8C, _xmm[0]); /* 0x005DD624: movdqu xmmword ptr [esi + 0x8c], xmm0 */
    _xmm[0] = xmm_ld(edx + 0x9C); /* 0x005DD62C: movdqu xmm0, xmmword ptr [edx + 0x9c] */
    xmm_st(esi + 0x9C, _xmm[0]); /* 0x005DD634: movdqu xmmword ptr [esi + 0x9c], xmm0 */
    _xmm[0] = xmm_ld(edx + 0xAC); /* 0x005DD63C: movdqu xmm0, xmmword ptr [edx + 0xac] */
    xmm_st(esi + 0xAC, _xmm[0]); /* 0x005DD644: movdqu xmmword ptr [esi + 0xac], xmm0 */
    _xmm[0] = xmm_ld(edx + 0xBC); /* 0x005DD64C: movdqu xmm0, xmmword ptr [edx + 0xbc] */
    xmm_st(esi + 0xBC, _xmm[0]); /* 0x005DD654: movdqu xmmword ptr [esi + 0xbc], xmm0 */
    RECOMP_CALL(sub_005DD680); /* 0x005DD65C: call 0x5dd680 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD661: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005DD668: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD66A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD66D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD674: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DD675: pop esi */
    esp = ebp; /* 0x005DD676: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD678: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DD679: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DD680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD680u);

L_005DD680:
    PUSH32(esp, ebp); /* 0x005DD680: push ebp */
    ebp = esp; /* 0x005DD681: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD683: push -1 */
    PUSH32(esp, 0x007AF580u); /* 0x005DD685: push 0x7af580 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD68A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD690: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DD691: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DD694: push ebx */
    PUSH32(esp, esi); /* 0x005DD695: push esi */
    PUSH32(esp, edi); /* 0x005DD696: push edi */
    eax = MEM32(0x855000); /* 0x005DD697: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD69C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD69E: push eax */
    eax = ebp + (-0xC); /* 0x005DD69F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD6A2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DD6A8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005DD6AB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DD6AD: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005DD6B0: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005DD6B6: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005DD6BD: mov dword ptr [esi + 8], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005DD6C4: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x4); /* 0x005DD6C7: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x005DD6CA: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005DD6CC: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005DD6D1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005DD6D3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005DD6D6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DD6D8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DD6D8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DD6DB: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DD6DD: push eax */
    RECOMP_CALL(sub_005DCEF0); /* 0x005DD6DE: call 0x5dcef0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DD6E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD70B; /* 0x005DD6E5: je 0x5dd70b */
L_005DD6E7:
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD6E7: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005DD6EE: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005DD6F1: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x005DD6F2: push dword ptr [esi] */
    edx = MEM32(edi + 0x4); /* 0x005DD6F4: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005DD6F7: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005DD7B0); /* 0x005DD6F9: call 0x5dd7b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DD6FE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x005DD701: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD704: mov dword ptr [ebp - 4], 0xffffffff */
L_005DD70B:
    eax = esi; /* 0x005DD70B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD70D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD710: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD717: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD718: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD719: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD71A: pop ebx */
    esp = ebp; /* 0x005DD71B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD71D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DD71E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DD721(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD721u);

L_005DD721:
    ecx = MEM32(ebp + (-0x14)); /* 0x005DD721: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x005DD724: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005DD729: push 0 */
    PUSH32(esp, 0); /* 0x005DD72B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DD72D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DD732u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
