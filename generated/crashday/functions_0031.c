#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005E3E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3E00u);

L_005E3E00:
    PUSH32(esp, ebp); /* 0x005E3E00: push ebp */
    ebp = esp; /* 0x005E3E01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3E03: push -1 */
    PUSH32(esp, 0x007B0980u); /* 0x005E3E05: push 0x7b0980 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3E0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3E10: push eax */
    PUSH32(esp, ecx); /* 0x005E3E11: push ecx */
    eax = MEM32(0x855000); /* 0x005E3E12: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3E17: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3E19: push eax */
    eax = ebp + (-0xC); /* 0x005E3E1A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3E1D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3E23: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3E26: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3E2D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6644u; /* 0x005E3E31: mov dword ptr [ecx], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3E43; /* 0x005E3E37: je 0x5e3e43 */
L_005E3E39:
    PUSH32(esp, ecx); /* 0x005E3E39: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3E3A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3E40: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3E43:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3E43: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3E46: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3E4D: pop ecx */
    esp = ebp; /* 0x005E3E4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3E50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3E51: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3E60u);

L_005E3E60:
    PUSH32(esp, ebp); /* 0x005E3E60: push ebp */
    ebp = esp; /* 0x005E3E61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3E63: push -1 */
    PUSH32(esp, 0x007B09B0u); /* 0x005E3E65: push 0x7b09b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3E6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3E70: push eax */
    PUSH32(esp, ecx); /* 0x005E3E71: push ecx */
    eax = MEM32(0x855000); /* 0x005E3E72: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3E77: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3E79: push eax */
    eax = ebp + (-0xC); /* 0x005E3E7A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3E7D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3E83: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3E86: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3E8D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6874u; /* 0x005E3E91: mov dword ptr [ecx], 0x7f6874 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3EA3; /* 0x005E3E97: je 0x5e3ea3 */
L_005E3E99:
    PUSH32(esp, ecx); /* 0x005E3E99: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3E9A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3EA0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3EA3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3EA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3EA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3EAD: pop ecx */
    esp = ebp; /* 0x005E3EAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3EB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3EB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3EC0u);

L_005E3EC0:
    PUSH32(esp, ebp); /* 0x005E3EC0: push ebp */
    ebp = esp; /* 0x005E3EC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3EC3: push -1 */
    PUSH32(esp, 0x007B0A0Eu); /* 0x005E3EC5: push 0x7b0a0e */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3ECA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3ED0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E3ED1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E3ED4: push esi */
    eax = MEM32(0x855000); /* 0x005E3ED5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3EDA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3EDC: push eax */
    eax = ebp + (-0xC); /* 0x005E3EDD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3EE0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E3EE6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3EE8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E3EEB: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005E3EEE: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005E3EF4: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005ED4A0); /* 0x005E3EFB: call 0x5ed4a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005E3F00: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 4; /* 0x005E3F02: mov dword ptr [ebp - 4], 4 */
    MEM32(esi + 0x8) = 0; /* 0x005E3F09: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005E3F10: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E3F17: mov dword ptr [esi + 0x10], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E3F1E: mov byte ptr [ebp - 4], 5 */
    MEM32(esi + 0x14) = 0; /* 0x005E3F22: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x005E3F29: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005E3F30: mov dword ptr [esi + 0x1c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3F37: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E3F3E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3F40: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3F43: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3F4A: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E3F4B: pop esi */
    esp = ebp; /* 0x005E3F4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3F4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3F4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3F50u);

L_005E3F50:
    PUSH32(esp, ebp); /* 0x005E3F50: push ebp */
    ebp = esp; /* 0x005E3F51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3F53: push -1 */
    PUSH32(esp, 0x007B0A50u); /* 0x005E3F55: push 0x7b0a50 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3F5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3F60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E3F61: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E3F64: push esi */
    eax = MEM32(0x855000); /* 0x005E3F65: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3F6A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3F6C: push eax */
    eax = ebp + (-0xC); /* 0x005E3F6D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3F70: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E3F76: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3F78: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005E3F7B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x005E3F82: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E3F84: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E3F85: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005E3F87: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E3F8A: push eax */
    RECOMP_CALL(sub_005EC980); /* 0x005E3F8B: call 0x5ec980 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3F90: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005E3F97: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3F99: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3F9F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3FA2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3FA5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3FAC: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E3FAD: pop esi */
    esp = ebp; /* 0x005E3FAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3FB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3FB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3FC0u);

L_005E3FC0:
    PUSH32(esp, ebp); /* 0x005E3FC0: push ebp */
    ebp = esp; /* 0x005E3FC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3FC3: push -1 */
    PUSH32(esp, 0x007B0A78u); /* 0x005E3FC5: push 0x7b0a78 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3FCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3FD0: push eax */
    PUSH32(esp, ecx); /* 0x005E3FD1: push ecx */
    eax = MEM32(0x855000); /* 0x005E3FD2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3FD7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3FD9: push eax */
    eax = ebp + (-0xC); /* 0x005E3FDA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3FDD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3FE3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3FE6: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3FED: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6654u; /* 0x005E3FF1: mov dword ptr [ecx], 0x7f6654 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4003; /* 0x005E3FF7: je 0x5e4003 */
L_005E3FF9:
    PUSH32(esp, ecx); /* 0x005E3FF9: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3FFA: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4000: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4003:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4003: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4006: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E400D: pop ecx */
    esp = ebp; /* 0x005E400E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4010: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4011: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4020u);

L_005E4020:
    PUSH32(esp, ebp); /* 0x005E4020: push ebp */
    ebp = esp; /* 0x005E4021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4023: push -1 */
    PUSH32(esp, 0x007B0AA8u); /* 0x005E4025: push 0x7b0aa8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E402A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4030: push eax */
    PUSH32(esp, ecx); /* 0x005E4031: push ecx */
    eax = MEM32(0x855000); /* 0x005E4032: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E4037: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E4039: push eax */
    eax = ebp + (-0xC); /* 0x005E403A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E403D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E4043: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4046: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E404D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6644u; /* 0x005E4051: mov dword ptr [ecx], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4063; /* 0x005E4057: je 0x5e4063 */
L_005E4059:
    PUSH32(esp, ecx); /* 0x005E4059: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E405A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4060: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4063:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4063: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4066: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E406D: pop ecx */
    esp = ebp; /* 0x005E406E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4071: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4080u);

L_005E4080:
    PUSH32(esp, ebp); /* 0x005E4080: push ebp */
    ebp = esp; /* 0x005E4081: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4083: push -1 */
    PUSH32(esp, 0x007B0AD8u); /* 0x005E4085: push 0x7b0ad8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E408A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4090: push eax */
    PUSH32(esp, ecx); /* 0x005E4091: push ecx */
    eax = MEM32(0x855000); /* 0x005E4092: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E4097: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E4099: push eax */
    eax = ebp + (-0xC); /* 0x005E409A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E409D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E40A3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E40A6: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E40AD: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6874u; /* 0x005E40B1: mov dword ptr [ecx], 0x7f6874 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E40C3; /* 0x005E40B7: je 0x5e40c3 */
L_005E40B9:
    PUSH32(esp, ecx); /* 0x005E40B9: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E40BA: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E40C0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E40C3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E40C3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E40C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E40CD: pop ecx */
    esp = ebp; /* 0x005E40CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E40D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E40D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E40E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E40E0u);

L_005E40E0:
    PUSH32(esp, ebp); /* 0x005E40E0: push ebp */
    ebp = esp; /* 0x005E40E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E40E3: push -1 */
    PUSH32(esp, 0x007B0B20u); /* 0x005E40E5: push 0x7b0b20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E40EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E40F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E40F1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E40F4: push esi */
    eax = MEM32(0x855000); /* 0x005E40F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E40FA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E40FC: push eax */
    eax = ebp + (-0xC); /* 0x005E40FD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4100: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E4106: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E4108: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005E410B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x005E4112: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E4114: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E4115: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005E4117: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E411A: push eax */
    RECOMP_CALL(sub_005ECCA0); /* 0x005E411B: call 0x5ecca0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4120: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005E4127: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E4129: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E412F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4132: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4135: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E413C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E413D: pop esi */
    esp = ebp; /* 0x005E413E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4140: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4141: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4150u);

L_005E4150:
    PUSH32(esp, ebp); /* 0x005E4150: push ebp */
    ebp = esp; /* 0x005E4151: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4153: push -1 */
    PUSH32(esp, 0x007B0CE7u); /* 0x005E4155: push 0x7b0ce7 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E415A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4160: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E4161: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E4164: push ebx */
    PUSH32(esp, esi); /* 0x005E4165: push esi */
    PUSH32(esp, edi); /* 0x005E4166: push edi */
    eax = MEM32(0x855000); /* 0x005E4167: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E416C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E416E: push eax */
    eax = ebp + (-0xC); /* 0x005E416F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4172: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E4178: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005E417A: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x007F676Cu; /* 0x005E417D: mov dword ptr [edi], 0x7f676c */
    MEM32(ebp + (-0x4)) = 0xEu; /* 0x005E4183: mov dword ptr [ebp - 4], 0xe */
    RECOMP_CALL(sub_005E8680); /* 0x005E418A: call 0x5e8680 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x18); /* 0x005E418F: mov esi, dword ptr [edi + 0x18] */
    ebx = MEM32(0x7CC694); /* 0x005E4192: mov ebx, dword ptr [0x7cc694] */
    /* test esi, esi */ /* 0x005E4198: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E41A9; /* 0x005E419A: je 0x5e41a9 */
L_005E419C:
    ecx = esi; /* 0x005E419C: mov ecx, esi */
    RECOMP_CALL(sub_005F6260); /* 0x005E419E: call 0x5f6260 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005E41A3: push esi */
    RECOMP_ICALL(ebx); /* 0x005E41A4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E41A6: add esp, 4 */
    _flag_k = FK_ADD;
L_005E41A9:
    esi = MEM32(edi + 0x1C); /* 0x005E41A9: mov esi, dword ptr [edi + 0x1c] */
    /* test esi, esi */ /* 0x005E41AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E41BD; /* 0x005E41AE: je 0x5e41bd */
L_005E41B0:
    ecx = esi; /* 0x005E41B0: mov ecx, esi */
    RECOMP_CALL(sub_005E4410); /* 0x005E41B2: call 0x5e4410 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005E41B7: push esi */
    RECOMP_ICALL(ebx); /* 0x005E41B8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E41BA: add esp, 4 */
    _flag_k = FK_ADD;
L_005E41BD:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x005E41BD: push dword ptr [edi + 8] */
    RECOMP_ICALL(ebx); /* 0x005E41C0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E41C2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005E41C5: mov byte ptr [ebp - 4], 0xd */
    eax = edi + 0x190; /* 0x005E41C9: lea eax, [edi + 0x190] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E41CF: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005E41D2: mov byte ptr [ebp - 4], 0xd */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E41D6: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(0x7CC998); /* 0x005E41DA: mov esi, dword ptr [0x7cc998] */
    MEM32(eax) = 0x007F6874u; /* 0x005E41E0: mov dword ptr [eax], 0x7f6874 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E41EE; /* 0x005E41E6: je 0x5e41ee */
L_005E41E8:
    PUSH32(esp, eax); /* 0x005E41E8: push eax */
    RECOMP_ICALL(esi); /* 0x005E41E9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E41EB: add esp, 4 */
    _flag_k = FK_ADD;
L_005E41EE:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005E41EE: mov byte ptr [ebp - 4], 0xc */
    eax = edi + 0x178; /* 0x005E41F2: lea eax, [edi + 0x178] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E41F8: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005E41FB: mov byte ptr [ebp - 4], 0xc */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E41FF: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F6644u; /* 0x005E4203: mov dword ptr [eax], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4211; /* 0x005E4209: je 0x5e4211 */
L_005E420B:
    PUSH32(esp, eax); /* 0x005E420B: push eax */
    RECOMP_ICALL(esi); /* 0x005E420C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E420E: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4211:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005E4211: mov byte ptr [ebp - 4], 0xb */
    eax = edi + 0x160; /* 0x005E4215: lea eax, [edi + 0x160] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E421B: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005E421E: mov byte ptr [ebp - 4], 0xb */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E4222: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007EDA74u; /* 0x005E4226: mov dword ptr [eax], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4234; /* 0x005E422C: je 0x5e4234 */
L_005E422E:
    PUSH32(esp, eax); /* 0x005E422E: push eax */
    RECOMP_ICALL(esi); /* 0x005E422F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4231: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4234:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005E4234: mov byte ptr [ebp - 4], 0xa */
    eax = edi + 0x148; /* 0x005E4238: lea eax, [edi + 0x148] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E423E: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005E4241: mov byte ptr [ebp - 4], 0xa */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E4245: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007EDA74u; /* 0x005E4249: mov dword ptr [eax], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4257; /* 0x005E424F: je 0x5e4257 */
L_005E4251:
    PUSH32(esp, eax); /* 0x005E4251: push eax */
    RECOMP_ICALL(esi); /* 0x005E4252: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4254: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4257:
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005E4257: mov byte ptr [ebp - 4], 9 */
    eax = edi + 0x130; /* 0x005E425B: lea eax, [edi + 0x130] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E4261: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005E4264: mov byte ptr [ebp - 4], 9 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E4268: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F6654u; /* 0x005E426C: mov dword ptr [eax], 0x7f6654 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E427A; /* 0x005E4272: je 0x5e427a */
L_005E4274:
    PUSH32(esp, eax); /* 0x005E4274: push eax */
    RECOMP_ICALL(esi); /* 0x005E4275: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4277: add esp, 4 */
    _flag_k = FK_ADD;
L_005E427A:
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005E427A: mov byte ptr [ebp - 4], 8 */
    eax = edi + 0x118; /* 0x005E427E: lea eax, [edi + 0x118] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E4284: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005E4287: mov byte ptr [ebp - 4], 8 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E428B: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007E3468u; /* 0x005E428F: mov dword ptr [eax], 0x7e3468 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E429D; /* 0x005E4295: je 0x5e429d */
L_005E4297:
    PUSH32(esp, eax); /* 0x005E4297: push eax */
    RECOMP_ICALL(esi); /* 0x005E4298: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E429A: add esp, 4 */
    _flag_k = FK_ADD;
L_005E429D:
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005E429D: mov byte ptr [ebp - 4], 7 */
    eax = edi + 0x100; /* 0x005E42A1: lea eax, [edi + 0x100] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E42A7: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005E42AA: mov byte ptr [ebp - 4], 7 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E42AE: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007EDA74u; /* 0x005E42B2: mov dword ptr [eax], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E42C0; /* 0x005E42B8: je 0x5e42c0 */
L_005E42BA:
    PUSH32(esp, eax); /* 0x005E42BA: push eax */
    RECOMP_ICALL(esi); /* 0x005E42BB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E42BD: add esp, 4 */
    _flag_k = FK_ADD;
L_005E42C0:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E42C0: mov byte ptr [ebp - 4], 6 */
    eax = edi + 0xE8; /* 0x005E42C4: lea eax, [edi + 0xe8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E42CA: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E42CD: mov byte ptr [ebp - 4], 6 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E42D1: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007EDA74u; /* 0x005E42D5: mov dword ptr [eax], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E42E3; /* 0x005E42DB: je 0x5e42e3 */
L_005E42DD:
    PUSH32(esp, eax); /* 0x005E42DD: push eax */
    RECOMP_ICALL(esi); /* 0x005E42DE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E42E0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E42E3:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E42E3: mov byte ptr [ebp - 4], 5 */
    eax = edi + 0xD0; /* 0x005E42E7: lea eax, [edi + 0xd0] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E42ED: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E42F0: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005E42F4: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F6508u; /* 0x005E42F8: mov dword ptr [eax], 0x7f6508 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4306; /* 0x005E42FE: je 0x5e4306 */
L_005E4300:
    PUSH32(esp, eax); /* 0x005E4300: push eax */
    RECOMP_ICALL(esi); /* 0x005E4301: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4303: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4306:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E4306: mov byte ptr [ebp - 4], 4 */
    esi = edi + 0xBC; /* 0x005E430A: lea esi, [edi + 0xbc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E4310: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E4313: mov byte ptr [ebp - 4], 4 */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E4317: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x22u); /* 0x005E431A: mov byte ptr [ebp - 4], 0x22 */
    ecx = esi; /* 0x005E431E: mov ecx, esi */
    RECOMP_CALL(sub_005EC790); /* 0x005E4320: call 0x5ec790 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x23u); /* 0x005E4325: mov byte ptr [ebp - 4], 0x23 */
    PUSH32(esp, MEM32(esi)); /* 0x005E4329: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x005E432B: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E432D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005E4330: mov dword ptr [esi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E4336: mov byte ptr [ebp - 4], 3 */
    esi = edi + 0xA0; /* 0x005E433A: lea esi, [edi + 0xa0] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E4340: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x25u); /* 0x005E4343: mov byte ptr [ebp - 4], 0x25 */
    ecx = esi + 0xC; /* 0x005E4347: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_005EC440); /* 0x005E434A: call 0x5ec440 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E434F: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005E4353: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = esi; /* 0x005E4356: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005E4359: mov byte ptr [ebp - 4], 0x28 */
    ecx = esi; /* 0x005E435D: mov ecx, esi */
    eax = MEM32(esi); /* 0x005E435F: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E4361: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E4362: push dword ptr [eax] */
    eax = ebp + (-0x18); /* 0x005E4364: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005E4367: push eax */
    RECOMP_CALL(sub_005EC980); /* 0x005E4368: call 0x5ec980 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E436D: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, MEM32(esi)); /* 0x005E4371: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x005E4373: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4375: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E4378: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(edi + 0x9C), 0x10u */ /* 0x005E437C: cmp dword ptr [edi + 0x9c], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x9C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4390; /* 0x005E4383: jb 0x5e4390 */
L_005E4385:
    PUSH32(esp, MEM32(edi + 0x88)); /* 0x005E4385: push dword ptr [edi + 0x88] */
    RECOMP_ICALL(ebx); /* 0x005E438B: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E438D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4390:
    MEM32(edi + 0x9C) = 0xFu; /* 0x005E4390: mov dword ptr [edi + 0x9c], 0xf */
    MEM32(edi + 0x98) = 0; /* 0x005E439A: mov dword ptr [edi + 0x98], 0 */
    MEM8(edi + 0x88) = (uint8_t)(0); /* 0x005E43A4: mov byte ptr [edi + 0x88], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E43AB: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(edi + 0x84), 0x10u */ /* 0x005E43AF: cmp dword ptr [edi + 0x84], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x84)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E43C0; /* 0x005E43B6: jb 0x5e43c0 */
L_005E43B8:
    PUSH32(esp, MEM32(edi + 0x70)); /* 0x005E43B8: push dword ptr [edi + 0x70] */
    RECOMP_ICALL(ebx); /* 0x005E43BB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E43BD: add esp, 4 */
    _flag_k = FK_ADD;
L_005E43C0:
    MEM32(edi + 0x84) = 0xFu; /* 0x005E43C0: mov dword ptr [edi + 0x84], 0xf */
    MEM32(edi + 0x80) = 0; /* 0x005E43CA: mov dword ptr [edi + 0x80], 0 */
    MEM8(edi + 0x70) = (uint8_t)(0); /* 0x005E43D4: mov byte ptr [edi + 0x70], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E43D8: mov byte ptr [ebp - 4], 0 */
    MEM32(0x927BD8) = 0; /* 0x005E43DC: mov dword ptr [0x927bd8], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E43E6: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(edi) = 0x007F6674u; /* 0x005E43ED: mov dword ptr [edi], 0x7f6674 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E43F3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E43F6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E43FD: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E43FE: pop edi */
    esi = POP32_VAL(esp); /* 0x005E43FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E4400: pop ebx */
    esp = ebp; /* 0x005E4401: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4403: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4404: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4410u);

L_005E4410:
    PUSH32(esp, ebp); /* 0x005E4410: push ebp */
    ebp = esp; /* 0x005E4411: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4413: push -1 */
    PUSH32(esp, 0x007B0D4Eu); /* 0x005E4415: push 0x7b0d4e */
    eax = MEM32(FS_BASE + (0)); /* 0x005E441A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4420: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E4421: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E4424: push esi */
    PUSH32(esp, edi); /* 0x005E4425: push edi */
    eax = MEM32(0x855000); /* 0x005E4426: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E442B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E442D: push eax */
    eax = ebp + (-0xC); /* 0x005E442E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4431: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E4437: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E4439: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005E443C: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi + 0x14); /* 0x005E4443: mov ecx, dword ptr [esi + 0x14] */
    edi = MEM32(0x7CC694); /* 0x005E4446: mov edi, dword ptr [0x7cc694] */
    /* test ecx, ecx */ /* 0x005E444C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4479; /* 0x005E444E: je 0x5e4479 */
L_005E4450:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005E4450: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0x18); /* 0x005E4453: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, ecx); /* 0x005E4456: push ecx */
    RECOMP_CALL(sub_005EE380); /* 0x005E4457: call 0x5ee380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x005E445C: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(edi); /* 0x005E445F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E4461: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = 0; /* 0x005E4464: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x005E446B: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005E4472: mov dword ptr [esi + 0x1c], 0 */
L_005E4479:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E4479: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x8); /* 0x005E447D: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x005E4480: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E44AD; /* 0x005E4482: je 0x5e44ad */
L_005E4484:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005E4484: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0xC); /* 0x005E4487: mov edx, dword ptr [esi + 0xc] */
    PUSH32(esp, ecx); /* 0x005E448A: push ecx */
    RECOMP_CALL(sub_005EE2A0); /* 0x005E448B: call 0x5ee2a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005E4490: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x005E4493: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E4495: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x005E4498: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005E449F: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E44A6: mov dword ptr [esi + 0x10], 0 */
L_005E44AD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E44AD: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E44B4: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 4; /* 0x005E44B7: mov dword ptr [ebp - 4], 4 */
    ecx = esi; /* 0x005E44BE: mov ecx, esi */
    eax = MEM32(esi); /* 0x005E44C0: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E44C2: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E44C3: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005E44C5: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E44C8: push eax */
    RECOMP_CALL(sub_005ECCA0); /* 0x005E44C9: call 0x5ecca0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E44CE: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005E44D5: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005E44D7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E44D9: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E44DC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E44DF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E44E6: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E44E7: pop edi */
    esi = POP32_VAL(esp); /* 0x005E44E8: pop esi */
    esp = ebp; /* 0x005E44E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E44EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E44EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E44F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E44F0u);

L_005E44F0:
    PUSH32(esp, ebp); /* 0x005E44F0: push ebp */
    ebp = esp; /* 0x005E44F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E44F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x005E44F6: push esi */
    esi = ecx; /* 0x005E44F7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005E44F9: push edi */
    ecx = esi + 0x38; /* 0x005E44FA: lea ecx, [esi + 0x38] */
    RECOMP_CALL(sub_0046D220); /* 0x005E44FD: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E4502: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4559; /* 0x005E4504: je 0x5e4559 */
L_005E4506:
    eax = MEM32(esi); /* 0x005E4506: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E4508: mov ecx, esi */
    edi = MEM32(ebp + 0x8); /* 0x005E450A: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005E450D: push edi */
    eax = MEM32(eax + 0x30); /* 0x005E450E: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E4511: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E4513: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E4559; /* 0x005E4515: je 0x5e4559 */
L_005E4517:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E4517: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E451D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4535; /* 0x005E451F: jne 0x5e4535 */
L_005E4521:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005E4521: push dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4524: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edi)); /* 0x005E4526: push dword ptr [edi] */
    eax = MEM32(ecx); /* 0x005E4528: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005E452A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E452D: pop edi */
    esi = POP32_VAL(esp); /* 0x005E452E: pop esi */
    esp = ebp; /* 0x005E452F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4531: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E4532: ret 4 */
L_005E4535:
    ecx = MEM32(0x927B08); /* 0x005E4535: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E453B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E454F; /* 0x005E453D: jne 0x5e454f */
L_005E453F:
    ecx = 0x00927AE8u; /* 0x005E453F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E4544: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E4549: mov ecx, dword ptr [0x927b08] */
L_005E454F:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005E454F: push dword ptr [edi + 4] */
    eax = MEM32(ecx); /* 0x005E4552: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi)); /* 0x005E4554: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005E4556: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_005E4559:
    edi = POP32_VAL(esp); /* 0x005E4559: pop edi */
    esi = POP32_VAL(esp); /* 0x005E455A: pop esi */
    esp = ebp; /* 0x005E455B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E455D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E455E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E4570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4570u);

L_005E4570:
    PUSH32(esp, ebp); /* 0x005E4570: push ebp */
    ebp = esp; /* 0x005E4571: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x005E4573: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x005E4576: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(ecx + 0x40) */ /* 0x005E4578: cmp eax, dword ptr [ecx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E4590; /* 0x005E457B: jne 0x5e4590 */
L_005E457D:
    eax = MEM32(edx + 0x4); /* 0x005E457D: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ecx + 0x44) */ /* 0x005E4580: cmp eax, dword ptr [ecx + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E4590; /* 0x005E4583: jne 0x5e4590 */
L_005E4585:
    /* cmp MEM32(ecx + 0x6C), 0 */ /* 0x005E4585: cmp dword ptr [ecx + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E4590; /* 0x005E4589: je 0x5e4590 */
L_005E458B:
    RECOMP_CALL(sub_005E92B0); /* 0x005E458B: call 0x5e92b0 */
    RECOMP_FLAGS_IN();
L_005E4590:
    ebp = POP32_VAL(esp); /* 0x005E4590: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E4591: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E45A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E45A0u);

L_005E45A0:
    PUSH32(esp, ebp); /* 0x005E45A0: push ebp */
    ebp = esp; /* 0x005E45A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E45A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E45A6: push -1 */
    PUSH32(esp, 0x007B0DA5u); /* 0x005E45A8: push 0x7b0da5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E45AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E45B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005E45B4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E45B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E45BC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x005E45BE: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x005E45C2: push ebx */
    PUSH32(esp, esi); /* 0x005E45C3: push esi */
    PUSH32(esp, edi); /* 0x005E45C4: push edi */
    eax = MEM32(0x855000); /* 0x005E45C5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E45CA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E45CC: push eax */
    eax = esp + 0x40; /* 0x005E45CD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E45D1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E45D7: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E45D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = ebx; /* 0x005E45DB: mov dword ptr [esp + 0x18], ebx */
    eax = MEM32(edi); /* 0x005E45DF: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x1C); /* 0x005E45E1: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E45E4: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E45E6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E46E7; /* 0x005E45E8: je 0x5e46e7 */
L_005E45EE:
    /* cmp MEM32(edi + 0x14), ebx */ /* 0x005E45EE: cmp dword ptr [edi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E4635; /* 0x005E45F1: je 0x5e4635 */
L_005E45F3:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005E45F3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005E45F6: mov ecx, esp */
    MEM32(esp + 0x2C) = esp; /* 0x005E45F8: mov dword ptr [esp + 0x2c], esp */
    PUSH32(esp, 0x007F652Cu); /* 0x005E45FC: push 0x7f652c */
    RECOMP_CALL(sub_00409FA0); /* 0x005E4601: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x60) = ebx; /* 0x005E4606: mov dword ptr [esp + 0x60], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005E460A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005E460D: mov ecx, esp */
    MEM32(esp + 0x4C) = esp; /* 0x005E460F: mov dword ptr [esp + 0x4c], esp */
    PUSH32(esp, 0x007F654Cu); /* 0x005E4613: push 0x7f654c */
    RECOMP_CALL(sub_00409FA0); /* 0x005E4618: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x78) = (uint8_t)(1); /* 0x005E461D: mov byte ptr [esp + 0x78], 1 */
    MEM32(esp + 0x78) = 0xFFFFFFFFu; /* 0x005E4622: mov dword ptr [esp + 0x78], 0xffffffff */
    ecx = ebx + 0x4F; /* 0x005E462A: lea ecx, [ebx + 0x4f] */
    RECOMP_CALL(sub_00668410); /* 0x005E462D: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005E4632: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005E4635:
    PUSH32(esp, 0xFCu); /* 0x005E4635: push 0xfc */
    MEM8(edi + 0xD) = (uint8_t)(0); /* 0x005E463A: mov byte ptr [edi + 0xd], 0 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005E463E: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4644: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = eax; /* 0x005E4647: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x48) = 2; /* 0x005E464B: mov dword ptr [esp + 0x48], 2 */
    /* test eax, eax */ /* 0x005E4653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E468C; /* 0x005E4655: je 0x5e468c */
L_005E4657:
    edx = MEM32(edi); /* 0x005E4657: mov edx, dword ptr [edi] */
    eax = esp + 0x20; /* 0x005E4659: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005E465D: push eax */
    ecx = edi; /* 0x005E465E: mov ecx, edi */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x005E4660: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E4663: mov esi, eax */
    MEM8(esp + 0x48) = (uint8_t)(3); /* 0x005E4665: mov byte ptr [esp + 0x48], 3 */
    ebx = 1; /* 0x005E466A: mov ebx, 1 */
    MEM32(esp + 0x18) = ebx; /* 0x005E466F: mov dword ptr [esp + 0x18], ebx */
    ecx = edi; /* 0x005E4673: mov ecx, edi */
    edx = MEM32(edi); /* 0x005E4675: mov edx, dword ptr [edi] */
    edx = MEM32(edx + 0x28); /* 0x005E4677: mov edx, dword ptr [edx + 0x28] */
    RECOMP_ICALL(edx); /* 0x005E467A: call edx */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO8(eax); /* 0x005E467C: movzx ecx, al */
    PUSH32(esp, ecx); /* 0x005E467F: push ecx */
    ecx = MEM32(esp + 0x18); /* 0x005E4680: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, esi); /* 0x005E4684: push esi */
    RECOMP_CALL(sub_005F08E0); /* 0x005E4685: call 0x5f08e0 */
    RECOMP_FLAGS_IN();
    goto L_005E468E; /* 0x005E468A: jmp 0x5e468e */
L_005E468C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E468C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E468E:
    MEM32(esp + 0x48) = 4; /* 0x005E468E: mov dword ptr [esp + 0x48], 4 */
    MEM32(edi + 0x14) = eax; /* 0x005E4696: mov dword ptr [edi + 0x14], eax */
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005E4699: mov dword ptr [esp + 0x48], 0xffffffff */
    /* test LO8(ebx), 1 */ /* 0x005E46A1: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E46D6; /* 0x005E46A4: je 0x5e46d6 */
L_005E46A6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x005E46A6: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = ebx; /* 0x005E46A9: mov dword ptr [esp + 0x18], ebx */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x005E46AD: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E46C1; /* 0x005E46B2: jb 0x5e46c1 */
L_005E46B4:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x005E46B4: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E46B8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E46BE: add esp, 4 */
    _flag_k = FK_ADD;
L_005E46C1:
    MEM32(esp + 0x34) = 0xFu; /* 0x005E46C1: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x005E46C9: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x005E46D1: mov byte ptr [esp + 0x20], 0 */
L_005E46D6:
    PUSH32(esp, 1); /* 0x005E46D6: push 1 */
    ecx = edi; /* 0x005E46D8: mov ecx, edi */
    RECOMP_CALL(sub_005E4D90); /* 0x005E46DA: call 0x5e4d90 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006EE000); /* 0x005E46DF: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x5C) = eax; /* 0x005E46E4: mov dword ptr [edi + 0x5c], eax */
L_005E46E7:
    ecx = MEM32(esp + 0x40); /* 0x005E46E7: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E46EB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E46F2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E46F3: pop edi */
    esi = POP32_VAL(esp); /* 0x005E46F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E46F5: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x005E46F6: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E46FA: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E46FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E4701: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4703: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4704: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4710u);

L_005E4710:
    PUSH32(esp, ebp); /* 0x005E4710: push ebp */
    ebp = esp; /* 0x005E4711: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E4713: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E4716: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E4719: push esi */
    esi = ecx; /* 0x005E471A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005E471C: push edi */
    eax = MEM32(esi); /* 0x005E471D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x1C); /* 0x005E471F: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E4722: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E4724: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4784; /* 0x005E4726: je 0x5e4784 */
L_005E4728:
    PUSH32(esp, 0); /* 0x005E4728: push 0 */
    ecx = esi; /* 0x005E472A: mov ecx, esi */
    MEM32(esi + 0x5C) = 0; /* 0x005E472C: mov dword ptr [esi + 0x5c], 0 */
    MEM8(esi + 0xD) = (uint8_t)(0); /* 0x005E4733: mov byte ptr [esi + 0xd], 0 */
    RECOMP_CALL(sub_005E4D90); /* 0x005E4737: call 0x5e4d90 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x14); /* 0x005E473C: mov edi, dword ptr [esi + 0x14] */
    /* test edi, edi */ /* 0x005E473F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4784; /* 0x005E4741: je 0x5e4784 */
L_005E4743:
    ecx = edi; /* 0x005E4743: mov ecx, edi */
    RECOMP_CALL(sub_005F0DC0); /* 0x005E4745: call 0x5f0dc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005E474A: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E474B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0xFF0FFFFFu; /* 0x005E4751: and dword ptr [esp + 0x10], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0xC; /* 0x005E4759: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E475D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0xF) = (uint8_t)(0); /* 0x005E4760: mov byte ptr [esp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) & 0xFFF00000u; /* 0x005E4765: and dword ptr [esp + 0xc], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x005E476D: mov ecx, esi */
    MEM32(esi + 0x14) = 0; /* 0x005E476F: mov dword ptr [esi + 0x14], 0 */
    MEM32(esp + 0x8) = 0; /* 0x005E4776: mov dword ptr [esp + 8], 0 */
    PUSH32(esp, eax); /* 0x005E477E: push eax */
    RECOMP_CALL(sub_005E8D30); /* 0x005E477F: call 0x5e8d30 */
    RECOMP_FLAGS_IN();
L_005E4784:
    edi = POP32_VAL(esp); /* 0x005E4784: pop edi */
    esi = POP32_VAL(esp); /* 0x005E4785: pop esi */
    esp = ebp; /* 0x005E4786: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4788: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4789: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4790u);

L_005E4790:
    PUSH32(esp, ebp); /* 0x005E4790: push ebp */
    ebp = esp; /* 0x005E4791: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005E4793: push esi */
    PUSH32(esp, edi); /* 0x005E4794: push edi */
    edi = ecx; /* 0x005E4795: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E4797: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E479D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E47A5; /* 0x005E479F: jne 0x5e47a5 */
L_005E47A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E47A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E47BF; /* 0x005E47A3: jmp 0x5e47bf */
L_005E47A5:
    ecx = MEM32(0x927AF8); /* 0x005E47A5: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E47AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E47BF; /* 0x005E47AD: jne 0x5e47bf */
L_005E47AF:
    ecx = 0x00927AE8u; /* 0x005E47AF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E47B4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E47B9: mov ecx, dword ptr [0x927af8] */
L_005E47BF:
    esi = MEM32(ebp + 0x8); /* 0x005E47BF: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E47C2: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E47CC; /* 0x005E47C6: jb 0x5e47cc */
L_005E47C8:
    edx = MEM32(esi); /* 0x005E47C8: mov edx, dword ptr [esi] */
    goto L_005E47CE; /* 0x005E47CA: jmp 0x5e47ce */
L_005E47CC:
    edx = esi; /* 0x005E47CC: mov edx, esi */
L_005E47CE:
    eax = MEM32(ecx); /* 0x005E47CE: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x007CD0C4u); /* 0x005E47D0: push 0x7cd0c4 */
    PUSH32(esp, edx); /* 0x005E47D5: push edx */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E47D6: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E47D9: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x005E47DC: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E47DF: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E47E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E47ED; /* 0x005E47E7: jne 0x5e47ed */
L_005E47E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E47E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4807; /* 0x005E47EB: jmp 0x5e4807 */
L_005E47ED:
    ecx = MEM32(0x927AF8); /* 0x005E47ED: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E47F3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4807; /* 0x005E47F5: jne 0x5e4807 */
L_005E47F7:
    ecx = 0x00927AE8u; /* 0x005E47F7: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E47FC: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E4801: mov ecx, dword ptr [0x927af8] */
L_005E4807:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E4807: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E480F; /* 0x005E480B: jb 0x5e480f */
L_005E480D:
    esi = MEM32(esi); /* 0x005E480D: mov esi, dword ptr [esi] */
L_005E480F:
    eax = MEM32(ecx); /* 0x005E480F: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x005E4811: push esi */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E4812: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E4815: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x005E4818: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E481B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E481C: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E481D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E481E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E4830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4830u);

L_005E4830:
    PUSH32(esp, ebp); /* 0x005E4830: push ebp */
    ebp = esp; /* 0x005E4831: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E4833: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4836: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005E4838: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E483D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4843: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005E4844: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E4847: push ebx */
    PUSH32(esp, esi); /* 0x005E4848: push esi */
    eax = MEM32(0x855000); /* 0x005E4849: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E484E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E4850: push eax */
    eax = esp + 0x30; /* 0x005E4851: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4855: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E485B: mov ebx, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E485D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E4863: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E486B; /* 0x005E4865: jne 0x5e486b */
L_005E4867:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4867: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4885; /* 0x005E4869: jmp 0x5e4885 */
L_005E486B:
    ecx = MEM32(0x927AF4); /* 0x005E486B: mov ecx, dword ptr [0x927af4] */
    /* test ecx, ecx */ /* 0x005E4871: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4885; /* 0x005E4873: jne 0x5e4885 */
L_005E4875:
    ecx = 0x00927AE8u; /* 0x005E4875: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E487A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF4); /* 0x005E487F: mov ecx, dword ptr [0x927af4] */
L_005E4885:
    eax = MEM32(ecx); /* 0x005E4885: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005E4887: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x005E488A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E488D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(esi) */ /* 0x005E488F: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E494D; /* 0x005E4891: jne 0x5e494d */
L_005E4897:
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x005E4897: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E494D; /* 0x005E489A: jne 0x5e494d */
L_005E48A0:
    /* cmp MEM32(esi + 0x90), ecx */ /* 0x005E48A0: cmp dword ptr [esi + 0x90], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E494D; /* 0x005E48A6: jne 0x5e494d */
L_005E48AC:
    ecx = esp + 0xC; /* 0x005E48AC: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E48B0: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E48B5: mov dword ptr [esp + 0x38], 0 */
    ecx = esp + 0xC; /* 0x005E48BD: lea ecx, [esp + 0xc] */
    PUSH32(esp, 0x1FFu); /* 0x005E48C1: push 0x1ff */
    RECOMP_CALL(sub_005F5560); /* 0x005E48C6: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x9; /* 0x005E48CB: lea eax, [esi + 9] */
    PUSH32(esp, eax); /* 0x005E48CE: push eax */
    ecx = esp + 0x10; /* 0x005E48CF: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F5660); /* 0x005E48D3: call 0x5f5660 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E48D8: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E48DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E48E6; /* 0x005E48E0: jne 0x5e48e6 */
L_005E48E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E48E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4900; /* 0x005E48E4: jmp 0x5e4900 */
L_005E48E6:
    ecx = MEM32(0x927AF8); /* 0x005E48E6: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E48EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4900; /* 0x005E48EE: jne 0x5e4900 */
L_005E48F0:
    ecx = 0x00927AE8u; /* 0x005E48F0: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E48F5: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E48FA: mov ecx, dword ptr [0x927af8] */
L_005E4900:
    eax = MEM32(esp + 0x18); /* 0x005E4900: mov eax, dword ptr [esp + 0x18] */
    edx = MEM32(ecx); /* 0x005E4904: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E4906: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E4909: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E4909: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005E490C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x005E490D: push eax */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E490E: push dword ptr [esp + 0x24] */
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x005E4912: push dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebx + 0x38)); /* 0x005E4915: push dword ptr [ebx + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E4918: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005E491B: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005E4923: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005E4927: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E494D; /* 0x005E4929: je 0x5e494d */
L_005E492B:
    PUSH32(esp, eax); /* 0x005E492B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E492C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4932: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005E4935: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005E493D: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E4945: mov dword ptr [esp + 0x28], 0 */
L_005E494D:
    ecx = MEM32(esp + 0x30); /* 0x005E494D: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4951: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E4958: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E4959: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E495A: pop ebx */
    esp = ebp; /* 0x005E495B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E495D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E495E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E4970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4970u);

L_005E4970:
    PUSH32(esp, ebp); /* 0x005E4970: push ebp */
    ebp = esp; /* 0x005E4971: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4973: push -1 */
    PUSH32(esp, 0x007B0E20u); /* 0x005E4975: push 0x7b0e20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E497A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4980: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x005E4981: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E4984: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E4989: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E498B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005E498E: push ebx */
    PUSH32(esp, esi); /* 0x005E498F: push esi */
    PUSH32(esp, edi); /* 0x005E4990: push edi */
    PUSH32(esp, eax); /* 0x005E4991: push eax */
    eax = ebp + (-0xC); /* 0x005E4992: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4995: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E499B: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E499D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E49A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E49AB; /* 0x005E49A5: jne 0x5e49ab */
L_005E49A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E49A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E49C5; /* 0x005E49A9: jmp 0x5e49c5 */
L_005E49AB:
    ecx = MEM32(0x927AF8); /* 0x005E49AB: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E49B1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E49C5; /* 0x005E49B3: jne 0x5e49c5 */
L_005E49B5:
    ecx = 0x00927AE8u; /* 0x005E49B5: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E49BA: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E49BF: mov ecx, dword ptr [0x927af8] */
L_005E49C5:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E49C5: push dword ptr [edi + 0x3c] */
    eax = MEM32(ecx); /* 0x005E49C8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x54); /* 0x005E49CA: lea edx, [ebp - 0x54] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E49CD: push dword ptr [edi + 0x38] */
    PUSH32(esp, edx); /* 0x005E49D0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8C)); /* 0x005E49D1: call dword ptr [eax + 0x8c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x005E49D7: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = edi + 0x28; /* 0x005E49DB: lea esi, [edi + 0x28] */
    ebx = MEM32(0x7CC694); /* 0x005E49DE: mov ebx, dword ptr [0x7cc694] */
    ecx = MEM32(eax); /* 0x005E49E4: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x005E49E6: mov dword ptr [esi], ecx */
    eax = MEM32(eax + 0x4); /* 0x005E49E8: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005E49EB: mov dword ptr [esi + 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E4A82; /* 0x005E49EE: je 0x5e4a82 */
L_005E49F4:
    ecx = ebp + (-0x34); /* 0x005E49F4: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E49F7: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E49FC: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005E4A03: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x50)) = 0x1FAu; /* 0x005E4A07: mov dword ptr [ebp - 0x50], 0x1fa */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4A32; /* 0x005E4A0E: jne 0x5e4a32 */
L_005E4A10:
    PUSH32(esp, 0x20u); /* 0x005E4A10: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005E4A12: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E4A15: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005E4A1A: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E4A1D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E4A20: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E4A20: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005E4A23: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1FAu; /* 0x005E4A26: mov dword ptr [eax], 0x1fa */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x005E4A2C: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E4A41; /* 0x005E4A30: jmp 0x5e4a41 */
L_005E4A32:
    PUSH32(esp, ecx); /* 0x005E4A32: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E4A33: push 0x20 */
    eax = ebp + (-0x50); /* 0x005E4A35: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x005E4A38: push eax */
    ecx = ebp + (-0x34); /* 0x005E4A39: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005E4A3C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E4A41:
    PUSH32(esp, esi); /* 0x005E4A41: push esi */
    ecx = ebp + (-0x34); /* 0x005E4A42: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F4D80); /* 0x005E4A45: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x005E4A4A: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x005E4A4D: push eax */
    ecx = edi + 0xBC; /* 0x005E4A4E: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E4A54: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4A59: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005E4A60: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005E4A63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4A82; /* 0x005E4A65: je 0x5e4a82 */
L_005E4A67:
    PUSH32(esp, eax); /* 0x005E4A67: push eax */
    RECOMP_ICALL(ebx); /* 0x005E4A68: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4A6A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005E4A6D: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E4A74: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4A7B: mov dword ptr [ebp - 0x18], 0 */
L_005E4A82:
    eax = MEM32(edi); /* 0x005E4A82: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E4A84: mov ecx, edi */
    eax = MEM32(eax + 0x1C); /* 0x005E4A86: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E4A89: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E4A8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E4B06; /* 0x005E4A8D: je 0x5e4b06 */
L_005E4A8F:
    eax = MEM32(edi); /* 0x005E4A8F: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x005E4A91: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x005E4A94: push ecx */
    ecx = edi; /* 0x005E4A95: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x70)); /* 0x005E4A97: call dword ptr [eax + 0x70] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E4A9A: mov esi, eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x005E4A9C: mov dword ptr [ebp - 4], 2 */
    eax = ebp + (-0x4C); /* 0x005E4AA3: lea eax, [ebp - 0x4c] */
    edx = MEM32(edi); /* 0x005E4AA6: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x005E4AA8: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E4AAA: push eax */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x005E4AAB: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E4AAE: mov byte ptr [ebp - 4], 3 */
    ecx = edi; /* 0x005E4AB2: mov ecx, edi */
    edx = MEM32(edi); /* 0x005E4AB4: mov edx, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x005E4AB6: push esi */
    PUSH32(esp, eax); /* 0x005E4AB7: push eax */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E4AB8: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E4ABB: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x38)), 0x10u */ /* 0x005E4ABF: cmp dword ptr [ebp - 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4ACD; /* 0x005E4AC3: jb 0x5e4acd */
L_005E4AC5:
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x005E4AC5: push dword ptr [ebp - 0x4c] */
    RECOMP_ICALL(ebx); /* 0x005E4AC8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4ACA: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4ACD:
    MEM32(ebp + (-0x38)) = 0xFu; /* 0x005E4ACD: mov dword ptr [ebp - 0x38], 0xf */
    MEM32(ebp + (-0x3C)) = 0; /* 0x005E4AD4: mov dword ptr [ebp - 0x3c], 0 */
    MEM8(ebp + (-0x4C)) = (uint8_t)(0); /* 0x005E4ADB: mov byte ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4ADF: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E4AE6: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4AF4; /* 0x005E4AEA: jb 0x5e4af4 */
L_005E4AEC:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E4AEC: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(ebx); /* 0x005E4AEF: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4AF1: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4AF4:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E4AF4: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E4AFB: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E4B02: mov byte ptr [ebp - 0x2c], 0 */
L_005E4B06:
    ecx = edi; /* 0x005E4B06: mov ecx, edi */
    RECOMP_CALL(sub_005E4B30); /* 0x005E4B08: call 0x5e4b30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4B0D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4B10: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E4B17: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E4B18: pop edi */
    esi = POP32_VAL(esp); /* 0x005E4B19: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E4B1A: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005E4B1B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E4B1E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E4B20: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E4B25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4B27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E4B28: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E4B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4B30u);

L_005E4B30:
    PUSH32(esp, ebp); /* 0x005E4B30: push ebp */
    ebp = esp; /* 0x005E4B31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4B33: push -1 */
    PUSH32(esp, 0x007B0E70u); /* 0x005E4B35: push 0x7b0e70 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E4B3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4B40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x005E4B41: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E4B44: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E4B49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E4B4B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E4B4E: push ebx */
    PUSH32(esp, esi); /* 0x005E4B4F: push esi */
    PUSH32(esp, edi); /* 0x005E4B50: push edi */
    PUSH32(esp, eax); /* 0x005E4B51: push eax */
    eax = ebp + (-0xC); /* 0x005E4B52: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4B55: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x005E4B5B: mov dword ptr [ebp - 0x5c], ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E4B5E: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E4B64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4B6C; /* 0x005E4B66: jne 0x5e4b6c */
L_005E4B68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4B68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4B86; /* 0x005E4B6A: jmp 0x5e4b86 */
L_005E4B6C:
    ecx = MEM32(0x927AF0); /* 0x005E4B6C: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E4B72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4B86; /* 0x005E4B74: jne 0x5e4b86 */
L_005E4B76:
    ecx = 0x00927AE8u; /* 0x005E4B76: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E4B7B: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E4B80: mov ecx, dword ptr [0x927af0] */
L_005E4B86:
    eax = MEM32(ecx); /* 0x005E4B86: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x600u); /* 0x005E4B88: push 0x600 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005E4B8D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = 0; /* 0x005E4B90: mov dword ptr [ebp - 0x30], 0 */
    ebx = eax; /* 0x005E4B97: mov ebx, eax */
    MEM32(ebp + (-0x2C)) = 0; /* 0x005E4B99: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x005E4BA0: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x005E4BA7: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x005E4BAE: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E4BB2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E4BB9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(0x7CC694); /* 0x005E4BBB: mov edi, dword ptr [0x7cc694] */
    /* test ebx, ebx */ /* 0x005E4BC1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005E4C6C; /* 0x005E4BC3: jle 0x5e4c6c */
L_005E4BC9:
    esp = esp; /* 0x005E4BC9: lea esp, [esp] */
L_005E4BD0:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E4BD0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E4BD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4BDE; /* 0x005E4BD8: jne 0x5e4bde */
L_005E4BDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4BDA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4BF8; /* 0x005E4BDC: jmp 0x5e4bf8 */
L_005E4BDE:
    ecx = MEM32(0x927AF0); /* 0x005E4BDE: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E4BE4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4BF8; /* 0x005E4BE6: jne 0x5e4bf8 */
L_005E4BE8:
    ecx = 0x00927AE8u; /* 0x005E4BE8: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E4BED: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E4BF2: mov ecx, dword ptr [0x927af0] */
L_005E4BF8:
    eax = MEM32(ecx); /* 0x005E4BF8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x64); /* 0x005E4BFA: lea edx, [ebp - 0x64] */
    PUSH32(esp, 0x600u); /* 0x005E4BFD: push 0x600 */
    PUSH32(esp, esi); /* 0x005E4C02: push esi */
    PUSH32(esp, edx); /* 0x005E4C03: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005E4C04: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x005E4C07: push dword ptr [ebp - 0x60] */
    ecx = ebp + (-0x28); /* 0x005E4C0A: lea ecx, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x005E4C0D: push dword ptr [ebp - 0x64] */
    RECOMP_CALL(sub_0051C670); /* 0x005E4C10: call 0x51c670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E4C15: add esp, 8 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E4C18: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x40); /* 0x005E4C1C: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4C1F: push -1 */
    PUSH32(esp, 0); /* 0x005E4C21: push 0 */
    PUSH32(esp, eax); /* 0x005E4C23: push eax */
    RECOMP_CALL(sub_00419920); /* 0x005E4C24: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E4C29: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E4C2D: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4C3B; /* 0x005E4C31: jb 0x5e4c3b */
L_005E4C33:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005E4C33: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x005E4C36: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4C38: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4C3B:
    eax = ebx + (-0x1); /* 0x005E4C3B: lea eax, [ebx - 1] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E4C3E: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4C45: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E4C4C: mov byte ptr [ebp - 0x28], 0 */
    /* cmp esi, eax */ /* 0x005E4C50: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E4C63; /* 0x005E4C52: jge 0x5e4c63 */
L_005E4C54:
    PUSH32(esp, 1); /* 0x005E4C54: push 1 */
    PUSH32(esp, 0x007E5E84u); /* 0x005E4C56: push 0x7e5e84 */
    ecx = ebp + (-0x40); /* 0x005E4C5B: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_004199E0); /* 0x005E4C5E: call 0x4199e0 */
    RECOMP_FLAGS_IN();
L_005E4C63:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005E4C63: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x005E4C64: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_005E4BD0; /* 0x005E4C66: jl 0x5e4bd0 */
L_005E4C6C:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x005E4C6C: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + (-0x40); /* 0x005E4C70: lea edx, [ebp - 0x40] */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4C73: mov dword ptr [ebp - 0x18], 0 */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x40)); } /* 0x005E4C7A: cmovae edx, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x14)) = 0; /* 0x005E4C7E: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E4C85: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4C8C: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E4C93: mov byte ptr [ebp - 0x28], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x005E4C97: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E4CA0; /* 0x005E4C9A: jne 0x5e4ca0 */
L_005E4C9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4C9C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4CAE; /* 0x005E4C9E: jmp 0x5e4cae */
L_005E4CA0:
    ecx = edx; /* 0x005E4CA0: mov ecx, edx */
    esi = ecx + 0x1; /* 0x005E4CA2: lea esi, [ecx + 1] */
L_005E4CA5:
    SET_LO8(eax, MEM8(ecx)); /* 0x005E4CA5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005E4CA7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005E4CA8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4CA5; /* 0x005E4CAA: jne 0x5e4ca5 */
L_005E4CAC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005E4CAC: sub ecx, esi */
    _flag_k = FK_CMP;
L_005E4CAE:
    PUSH32(esp, ecx); /* 0x005E4CAE: push ecx */
    PUSH32(esp, edx); /* 0x005E4CAF: push edx */
    ecx = ebp + (-0x28); /* 0x005E4CB0: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E4CB3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E4CB8: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x58); /* 0x005E4CBC: lea ecx, [ebp - 0x58] */
    PUSH32(esp, 5); /* 0x005E4CBF: push 5 */
    MEM32(ebp + (-0x48)) = 0; /* 0x005E4CC1: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x005E4CC8: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007ED358u); /* 0x005E4CCF: push 0x7ed358 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x005E4CD4: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x005E4CDB: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x005E4CE2: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E4CE6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E4CEB: mov byte ptr [ebp - 4], 3 */
    edx = ebp + (-0x28); /* 0x005E4CEF: lea edx, [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x5C)); /* 0x005E4CF2: mov ecx, dword ptr [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x005E4CF5: push edx */
    edx = ebp + (-0x58); /* 0x005E4CF6: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x005E4CF9: push edx */
    eax = MEM32(ecx); /* 0x005E4CFA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005E4CFC: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E4CFF: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x005E4D03: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4D11; /* 0x005E4D07: jb 0x5e4d11 */
L_005E4D09:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005E4D09: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x005E4D0C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4D0E: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4D11:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x005E4D11: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x005E4D18: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x005E4D1F: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E4D23: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E4D27: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4D35; /* 0x005E4D2B: jb 0x5e4d35 */
L_005E4D2D:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005E4D2D: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x005E4D30: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4D32: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4D35:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E4D35: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4D3C: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E4D43: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4D47: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x005E4D4E: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4D5C; /* 0x005E4D52: jb 0x5e4d5c */
L_005E4D54:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005E4D54: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x005E4D57: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4D59: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4D5C:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x005E4D5C: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x005E4D63: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x005E4D6A: mov byte ptr [ebp - 0x40], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4D6E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4D71: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E4D78: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E4D79: pop edi */
    esi = POP32_VAL(esp); /* 0x005E4D7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E4D7B: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E4D7C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E4D7F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E4D81: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E4D86: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4D88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4D89: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4D90u);

L_005E4D90:
    PUSH32(esp, ebp); /* 0x005E4D90: push ebp */
    ebp = esp; /* 0x005E4D91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4D93: push -1 */
    PUSH32(esp, 0x007B0EB0u); /* 0x005E4D95: push 0x7b0eb0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E4D9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4DA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x005E4DA1: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E4DA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E4DA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E4DAB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x005E4DAE: push esi */
    PUSH32(esp, edi); /* 0x005E4DAF: push edi */
    PUSH32(esp, eax); /* 0x005E4DB0: push eax */
    eax = ebp + (-0xC); /* 0x005E4DB1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4DB4: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E4DBA: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005E4DBC: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x005E4DBF: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 0xBu); /* 0x005E4DC2: push 0xb */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E4DC4: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E4DCB: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007F5F10u); /* 0x005E4DD2: push 0x7f5f10 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E4DD7: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E4DDE: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E4DE5: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E4DE9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E4DEE: mov dword ptr [ebp - 4], 0 */
    edx = esi; /* 0x005E4DF5: mov edx, esi */
    ecx = ebp + (-0x44); /* 0x005E4DF7: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0047CC80); /* 0x005E4DFA: call 0x47cc80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E4DFF: mov byte ptr [ebp - 4], 1 */
    ecx = edi; /* 0x005E4E03: mov ecx, edi */
    edx = MEM32(edi); /* 0x005E4E05: mov edx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x005E4E07: push eax */
    eax = ebp + (-0x2C); /* 0x005E4E08: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005E4E0B: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x005E4E0C: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E4E0F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E4E13: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x005E4E17: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4E27; /* 0x005E4E1D: jb 0x5e4e27 */
L_005E4E1F:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005E4E1F: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x005E4E22: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4E24: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4E27:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005E4E27: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005E4E2E: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005E4E35: mov byte ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E4E39: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E4E40: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4E4E; /* 0x005E4E44: jb 0x5e4e4e */
L_005E4E46:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E4E46: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x005E4E49: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4E4B: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4E4E:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E4E4E: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E4E55: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E4E5C: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E4E60: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4E63: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E4E6A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E4E6B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E4E6C: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x005E4E6D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E4E70: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E4E72: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E4E77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4E79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E4E7A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E4E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4E80u);

L_005E4E80:
    PUSH32(esp, ebp); /* 0x005E4E80: push ebp */
    ebp = esp; /* 0x005E4E81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E4E83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E4E86: push -1 */
    PUSH32(esp, 0x007B0EF0u); /* 0x005E4E88: push 0x7b0ef0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E4E8D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E4E93: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x005E4E94: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E4E97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E4E9C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x34) = eax; /* 0x005E4E9E: mov dword ptr [esp + 0x34], eax */
    PUSH32(esp, esi); /* 0x005E4EA2: push esi */
    PUSH32(esp, edi); /* 0x005E4EA3: push edi */
    eax = MEM32(0x855000); /* 0x005E4EA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E4EA9: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E4EAB: push eax */
    eax = esp + 0x48; /* 0x005E4EAC: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E4EB0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E4EB6: mov esi, ecx */
    PUSH32(esp, 0xBu); /* 0x005E4EB8: push 0xb */
    MEM32(esp + 0x24) = 0; /* 0x005E4EBA: mov dword ptr [esp + 0x24], 0 */
    ecx = esp + 0x14; /* 0x005E4EC2: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x28) = 0; /* 0x005E4EC6: mov dword ptr [esp + 0x28], 0 */
    PUSH32(esp, 0x007F5F10u); /* 0x005E4ECE: push 0x7f5f10 */
    MEM32(esp + 0x2C) = 0xFu; /* 0x005E4ED3: mov dword ptr [esp + 0x2c], 0xf */
    MEM32(esp + 0x28) = 0; /* 0x005E4EDB: mov dword ptr [esp + 0x28], 0 */
    MEM8(esp + 0x18) = (uint8_t)(0); /* 0x005E4EE3: mov byte ptr [esp + 0x18], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E4EE8: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0; /* 0x005E4EED: mov dword ptr [esp + 0x50], 0 */
    ecx = esp + 0x10; /* 0x005E4EF5: lea ecx, [esp + 0x10] */
    eax = MEM32(esi); /* 0x005E4EF9: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005E4EFB: push ecx */
    ecx = esp + 0x2C; /* 0x005E4EFC: lea ecx, [esp + 0x2c] */
    PUSH32(esp, ecx); /* 0x005E4F00: push ecx */
    ecx = esi; /* 0x005E4F01: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x005E4F03: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x50) = (uint8_t)(1); /* 0x005E4F06: mov byte ptr [esp + 0x50], 1 */
    ecx = eax; /* 0x005E4F0B: mov ecx, eax */
    RECOMP_CALL(sub_00521720); /* 0x005E4F0D: call 0x521720 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E4F12: mov edi, eax */
    MEM8(esp + 0x50) = (uint8_t)(0); /* 0x005E4F14: mov byte ptr [esp + 0x50], 0 */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x005E4F19: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x005E4F1E: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4F2F; /* 0x005E4F24: jb 0x5e4f2f */
L_005E4F26:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x005E4F26: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(esi); /* 0x005E4F2A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4F2C: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4F2F:
    MEM32(esp + 0x3C) = 0xFu; /* 0x005E4F2F: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x005E4F37: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x005E4F3F: mov byte ptr [esp + 0x28], 0 */
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x005E4F44: mov dword ptr [esp + 0x50], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x005E4F4C: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4F5C; /* 0x005E4F51: jb 0x5e4f5c */
L_005E4F53:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005E4F53: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(esi); /* 0x005E4F57: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E4F59: add esp, 4 */
    _flag_k = FK_ADD;
L_005E4F5C:
    MEM32(esp + 0x24) = 0xFu; /* 0x005E4F5C: mov dword ptr [esp + 0x24], 0xf */
    eax = edi; /* 0x005E4F64: mov eax, edi */
    MEM32(esp + 0x20) = 0; /* 0x005E4F66: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x005E4F6E: mov byte ptr [esp + 0x10], 0 */
    ecx = MEM32(esp + 0x48); /* 0x005E4F73: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E4F77: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E4F7E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E4F7F: pop edi */
    esi = POP32_VAL(esp); /* 0x005E4F80: pop esi */
    ecx = MEM32(esp + 0x34); /* 0x005E4F81: mov ecx, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E4F85: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E4F87: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E4F8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E4F8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4F8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4F90u);

L_005E4F90:
    eax = ecx + 0x28; /* 0x005E4F90: lea eax, [ecx + 0x28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E4F93: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E4FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E4FA0u);

L_005E4FA0:
    PUSH32(esp, ebp); /* 0x005E4FA0: push ebp */
    ebp = esp; /* 0x005E4FA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E4FA3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005E4FA6: mov eax, 0x92492493 */
    PUSH32(esp, ebx); /* 0x005E4FAB: push ebx */
    PUSH32(esp, esi); /* 0x005E4FAC: push esi */
    PUSH32(esp, edi); /* 0x005E4FAD: push edi */
    edi = ecx; /* 0x005E4FAE: mov edi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E4FB0: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi + 0xB0); /* 0x005E4FB2: mov esi, dword ptr [edi + 0xb0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0xAC); /* 0x005E4FB8: sub esi, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E4FBE: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E4FC0: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E4FC2: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E4FC5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E4FC7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E4FC7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E4FCA: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E5042; /* 0x005E4FCC: je 0x5e5042 */
L_005E4FCE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E4FCE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E4FD0:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E4FD0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E4FD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4FDE; /* 0x005E4FD8: jne 0x5e4fde */
L_005E4FDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E4FDA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E4FF8; /* 0x005E4FDC: jmp 0x5e4ff8 */
L_005E4FDE:
    ecx = MEM32(0x927AEC); /* 0x005E4FDE: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E4FE4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E4FF8; /* 0x005E4FE6: jne 0x5e4ff8 */
L_005E4FE8:
    ecx = 0x00927AE8u; /* 0x005E4FE8: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E4FED: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E4FF2: mov ecx, dword ptr [0x927aec] */
L_005E4FF8:
    eax = MEM32(ecx); /* 0x005E4FF8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x005E4FFA: lea edx, [ebp - 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005E4FFD: imul esi, esi, 0x70 */
    PUSH32(esp, edx); /* 0x005E5000: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0xAC); /* 0x005E5001: add esi, dword ptr [edi + 0xac] */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E5007: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005E500A: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005E500C: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(esi) */ /* 0x005E500E: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E501A; /* 0x005E5010: jne 0x5e501a */
L_005E5012:
    eax = MEM32(ecx + 0x4); /* 0x005E5012: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x005E5015: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E504B; /* 0x005E5018: je 0x5e504b */
L_005E501A:
    ecx = MEM32(edi + 0xB0); /* 0x005E501A: mov ecx, dword ptr [edi + 0xb0] */
    eax = 0x92492493u; /* 0x005E5020: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E5025: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005E502B: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E502D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = (uint32_t)LO8(ebx); /* 0x005E502F: movzx esi, bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E5032: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E5034: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E5037: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E5039: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E5039: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E503C: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E503E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E4FD0; /* 0x005E5040: jb 0x5e4fd0 */
L_005E5042:
    edi = POP32_VAL(esp); /* 0x005E5042: pop edi */
    esi = POP32_VAL(esp); /* 0x005E5043: pop esi */
    SET_LO8(eax, 0x10u); /* 0x005E5044: mov al, 0x10 */
    ebx = POP32_VAL(esp); /* 0x005E5046: pop ebx */
    esp = ebp; /* 0x005E5047: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5049: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E504A: ret  */
L_005E504B:
    edi = POP32_VAL(esp); /* 0x005E504B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E504C: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x005E504D: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x005E504F: pop ebx */
    esp = ebp; /* 0x005E5050: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E5053: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E5060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5060u);

L_005E5060:
    PUSH32(esp, ebp); /* 0x005E5060: push ebp */
    ebp = esp; /* 0x005E5061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E5063: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5066: push -1 */
    PUSH32(esp, 0x007B0F28u); /* 0x005E5068: push 0x7b0f28 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E506D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5073: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005E5074: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E5077: push esi */
    PUSH32(esp, edi); /* 0x005E5078: push edi */
    eax = MEM32(0x855000); /* 0x005E5079: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E507E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E5080: push eax */
    eax = esp + 0x38; /* 0x005E5081: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5085: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E508B: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005E508D: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x005E5090: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x005E5092: mov ecx, dword ptr [edi + 4] */
    /* cmp MEM32(esi + 0x38), eax */ /* 0x005E5095: cmp dword ptr [esi + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E51D0; /* 0x005E5098: jne 0x5e51d0 */
L_005E509E:
    /* cmp MEM32(esi + 0x3C), ecx */ /* 0x005E509E: cmp dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E51D0; /* 0x005E50A1: jne 0x5e51d0 */
L_005E50A7:
    eax = MEM32(edi + 0x18); /* 0x005E50A7: mov eax, dword ptr [edi + 0x18] */
    /* test LO8(eax), 1 */ /* 0x005E50AA: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E51B2; /* 0x005E50AC: je 0x5e51b2 */
L_005E50B2:
    ecx = MEM32(esi + 0xB0); /* 0x005E50B2: mov ecx, dword ptr [esi + 0xb0] */
    eax = 0x92492493u; /* 0x005E50B8: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xAC); /* 0x005E50BD: sub ecx, dword ptr [esi + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E50C3: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = (uint32_t)MEM8(esi + 0xA0); /* 0x005E50C5: movzx eax, byte ptr [esi + 0xa0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E50CC: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E50CE: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005E50D1: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005E50D3: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005E50D3: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005E50D6: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x005E50D8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E51D0; /* 0x005E50DA: je 0x5e51d0 */
L_005E50E0:
    eax = MEM32(edi + 0x8); /* 0x005E50E0: mov eax, dword ptr [edi + 8] */
    ecx = esp + 0xC; /* 0x005E50E3: lea ecx, [esp + 0xc] */
    MEM32(esp + 0xC) = eax; /* 0x005E50E7: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(edi + 0xC); /* 0x005E50EB: mov eax, dword ptr [edi + 0xc] */
    MEM32(esp + 0x10) = eax; /* 0x005E50EE: mov dword ptr [esp + 0x10], eax */
    eax = MEM32(esi); /* 0x005E50F2: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005E50F4: push ecx */
    ecx = esi; /* 0x005E50F5: mov ecx, esi */
    eax = MEM32(eax + 0x30); /* 0x005E50F7: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E50FA: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E50FC: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E51D0; /* 0x005E50FE: jne 0x5e51d0 */
L_005E5104:
    eax = MEM32(edi + 0x8); /* 0x005E5104: mov eax, dword ptr [edi + 8] */
    ecx = esi; /* 0x005E5107: mov ecx, esi */
    MEM32(esp + 0xC) = eax; /* 0x005E5109: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(edi + 0xC); /* 0x005E510D: mov eax, dword ptr [edi + 0xc] */
    MEM32(esp + 0x10) = eax; /* 0x005E5110: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0xC; /* 0x005E5114: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x005E5118: push eax */
    RECOMP_CALL(sub_005E78B0); /* 0x005E5119: call 0x5e78b0 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x14; /* 0x005E511E: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E5122: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005E5127: mov dword ptr [esp + 0x40], 0 */
    ecx = esp + 0x14; /* 0x005E512F: lea ecx, [esp + 0x14] */
    PUSH32(esp, 0x20Bu); /* 0x005E5133: push 0x20b */
    RECOMP_CALL(sub_005F5560); /* 0x005E5138: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x005E513D: mov eax, dword ptr [esi + 0xb0] */
    ecx = esp + 0x14; /* 0x005E5143: lea ecx, [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF90u; /* 0x005E5147: add eax, -0x70 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E514A: push eax */
    RECOMP_CALL(sub_005F4D80); /* 0x005E514B: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x005E5150: mov eax, dword ptr [esi + 0xb0] */
    ecx = esp + 0x14; /* 0x005E5156: lea ecx, [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF98u; /* 0x005E515A: add eax, -0x68 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E515D: push eax */
    RECOMP_CALL(sub_005F56D0); /* 0x005E515E: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x005E5163: mov eax, dword ptr [esi + 0xb0] */
    ecx = esp + 0x14; /* 0x005E5169: lea ecx, [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFB0u; /* 0x005E516D: add eax, -0x50 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E5170: push eax */
    RECOMP_CALL(sub_005F56D0); /* 0x005E5171: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x14; /* 0x005E5176: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E517A: push eax */
    ecx = esi + 0xBC; /* 0x005E517B: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E5181: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005E5186: mov ecx, esi */
    RECOMP_CALL(sub_005E51F0); /* 0x005E5188: call 0x5e51f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005E518D: mov dword ptr [esp + 0x40], 0xffffffff */
    ecx = esp + 0x14; /* 0x005E5195: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E5199: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x38); /* 0x005E519E: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E51A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E51A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E51AA: pop edi */
    esi = POP32_VAL(esp); /* 0x005E51AB: pop esi */
    esp = ebp; /* 0x005E51AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E51AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E51AF: ret 4 */
L_005E51B2:
    /* test LO8(eax), 0x1Eu */ /* 0x005E51B2: test al, 0x1e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Eu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E51D0; /* 0x005E51B4: je 0x5e51d0 */
L_005E51B6:
    eax = MEM32(edi + 0x8); /* 0x005E51B6: mov eax, dword ptr [edi + 8] */
    ecx = esi; /* 0x005E51B9: mov ecx, esi */
    MEM32(esp + 0xC) = eax; /* 0x005E51BB: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(edi + 0xC); /* 0x005E51BF: mov eax, dword ptr [edi + 0xc] */
    MEM32(esp + 0x10) = eax; /* 0x005E51C2: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0xC; /* 0x005E51C6: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x005E51CA: push eax */
    RECOMP_CALL(sub_005E6910); /* 0x005E51CB: call 0x5e6910 */
    RECOMP_FLAGS_IN();
L_005E51D0:
    ecx = MEM32(esp + 0x38); /* 0x005E51D0: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E51D4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E51DB: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E51DC: pop edi */
    esi = POP32_VAL(esp); /* 0x005E51DD: pop esi */
    esp = ebp; /* 0x005E51DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E51E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E51E1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E51F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E51F0u);

L_005E51F0:
    PUSH32(esp, ebp); /* 0x005E51F0: push ebp */
    ebp = esp; /* 0x005E51F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E51F3: push -1 */
    PUSH32(esp, 0x007B0F5Eu); /* 0x005E51F5: push 0x7b0f5e */
    eax = MEM32(FS_BASE + (0)); /* 0x005E51FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5200: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E5201: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E5204: push esi */
    PUSH32(esp, edi); /* 0x005E5205: push edi */
    eax = MEM32(0x855000); /* 0x005E5206: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E520B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E520D: push eax */
    eax = ebp + (-0xC); /* 0x005E520E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5211: mov dword ptr fs:[0], eax */
    eax = MEM32(0x928128); /* 0x005E5217: mov eax, dword ptr [0x928128] */
    /* test LO8(eax), 1 */ /* 0x005E521C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E525B; /* 0x005E521E: jne 0x5e525b */
L_005E5220:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x005E5220: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928128) = eax; /* 0x005E5223: mov dword ptr [0x928128], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E5228: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(0x928124)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(0x928124) = MEM32(0x928124) & 0xFF0FFFFFu; /* 0x005E522F: and dword ptr [0x928124], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x928127) = (uint8_t)(0); /* 0x005E5239: mov byte ptr [0x928127], 0 */
    _flag_a = (uint32_t)(MEM32(0x928124)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(0x928124) = MEM32(0x928124) & 0xFFF00000u; /* 0x005E5240: and dword ptr [0x928124], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928120) = 0; /* 0x005E524A: mov dword ptr [0x928120], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E5254: mov dword ptr [ebp - 4], 0xffffffff */
L_005E525B:
    eax = MEM32(ecx + 0x38); /* 0x005E525B: mov eax, dword ptr [ecx + 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005E525E: push dword ptr [ebp - 0x10] */
    MEM32(0x928120) = eax; /* 0x005E5261: mov dword ptr [0x928120], eax */
    eax = MEM32(ecx + 0x3C); /* 0x005E5266: mov eax, dword ptr [ecx + 0x3c] */
    MEM32(0x928124) = eax; /* 0x005E5269: mov dword ptr [0x928124], eax */
    eax = 0x92492493u; /* 0x005E526E: mov eax, 0x92492493 */
    esi = MEM32(ecx + 0xB0); /* 0x005E5273: mov esi, dword ptr [ecx + 0xb0] */
    edi = esi; /* 0x005E5279: mov edi, esi */
    ecx = MEM32(ecx + 0xAC); /* 0x005E527B: mov ecx, dword ptr [ecx + 0xac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x005E5281: sub edi, ecx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005E5283: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005E5285: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E5287: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E528A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E528C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E528C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E528F: add eax, edx */
    _flag_k = FK_ADD;
    edx = esi; /* 0x005E5291: mov edx, esi */
    PUSH32(esp, eax); /* 0x005E5293: push eax */
    RECOMP_CALL(sub_005ED910); /* 0x005E5294: call 0x5ed910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E5299: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E529C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E529F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E52A6: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E52A7: pop edi */
    esi = POP32_VAL(esp); /* 0x005E52A8: pop esi */
    esp = ebp; /* 0x005E52A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E52AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E52AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E52B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E52B0u);

L_005E52B0:
    PUSH32(esp, ebp); /* 0x005E52B0: push ebp */
    ebp = esp; /* 0x005E52B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E52B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005E52B6: push edi */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E52B7: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E52BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E52C5; /* 0x005E52BF: jne 0x5e52c5 */
L_005E52C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E52C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E52DF; /* 0x005E52C3: jmp 0x5e52df */
L_005E52C5:
    ecx = MEM32(0x927AF8); /* 0x005E52C5: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E52CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E52DF; /* 0x005E52CD: jne 0x5e52df */
L_005E52CF:
    ecx = 0x00927AE8u; /* 0x005E52CF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E52D4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E52D9: mov ecx, dword ptr [0x927af8] */
L_005E52DF:
    PUSH32(esp, MEM32(0x928124)); /* 0x005E52DF: push dword ptr [0x928124] */
    eax = MEM32(ecx); /* 0x005E52E5: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x005E52E7: lea edx, [ebp - 8] */
    PUSH32(esp, MEM32(0x928120)); /* 0x005E52EA: push dword ptr [0x928120] */
    PUSH32(esp, edx); /* 0x005E52F0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8C)); /* 0x005E52F1: call dword ptr [eax + 0x8c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005E52F7: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(eax); /* 0x005E52FA: mov edi, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x005E52FC: mov edx, dword ptr [eax + 4] */
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x005E52FF: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5312; /* 0x005E5302: jne 0x5e5312 */
L_005E5304:
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x005E5304: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5312; /* 0x005E5307: jne 0x5e5312 */
L_005E5309:
    SET_LO8(eax, 1); /* 0x005E5309: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005E530B: pop edi */
    esp = ebp; /* 0x005E530C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E530E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E530F: ret 8 */
L_005E5312:
    eax = MEM32(ebp + 0xC); /* 0x005E5312: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x005E5315: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005E5317: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x005E531A: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E532D; /* 0x005E531D: jne 0x5e532d */
L_005E531F:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x005E531F: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E532D; /* 0x005E5322: jne 0x5e532d */
L_005E5324:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E5324: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x005E5326: pop edi */
    esp = ebp; /* 0x005E5327: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5329: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E532A: ret 8 */
L_005E532D:
    /* cmp edx, eax */ /* 0x005E532D: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005E5343; /* 0x005E532F: ja 0x5e5343 */
L_005E5331:
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5337; /* 0x005E5331: jb 0x5e5337 */
L_005E5333:
    /* cmp edi, ecx */ /* 0x005E5333: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E5343; /* 0x005E5335: jae 0x5e5343 */
L_005E5337:
    eax = 1; /* 0x005E5337: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x005E533C: pop edi */
    esp = ebp; /* 0x005E533D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E533F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E5340: ret 8 */
L_005E5343:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5343: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005E5345: pop edi */
    esp = ebp; /* 0x005E5346: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5348: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E5349: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E5350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5350u);

L_005E5350:
    PUSH32(esp, ebp); /* 0x005E5350: push ebp */
    ebp = esp; /* 0x005E5351: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5353: push -1 */
    PUSH32(esp, 0x007B0F88u); /* 0x005E5355: push 0x7b0f88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E535A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5360: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005E5361: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E5364: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E5369: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E536B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E536E: push ebx */
    PUSH32(esp, esi); /* 0x005E536F: push esi */
    PUSH32(esp, edi); /* 0x005E5370: push edi */
    PUSH32(esp, eax); /* 0x005E5371: push eax */
    eax = ebp + (-0xC); /* 0x005E5372: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5375: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E537B: mov ebx, ecx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x005E537D: mov dword ptr [ebp - 0x34], ebx */
    esi = MEM32(ebx + 0xB0); /* 0x005E5380: mov esi, dword ptr [ebx + 0xb0] */
    eax = 0x92492493u; /* 0x005E5386: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx + 0xAC); /* 0x005E538B: sub esi, dword ptr [ebx + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E5391: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x30)) = 0; /* 0x005E5393: mov dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E539A: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E539C: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E539F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E53A1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E53A1: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E53A4: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E5512; /* 0x005E53A6: je 0x5e5512 */
L_005E53AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E53AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = esi; /* 0x005E53AE: mov dword ptr [ebp - 0x2c], esi */
L_005E53B1:
    eax = MEM32(ebx + 0xAC); /* 0x005E53B1: mov eax, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E53B7: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x1C), 0x10u */ /* 0x005E53B9: cmp dword ptr [eax + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(eax + 0x18); /* 0x005E53BD: mov ebx, dword ptr [eax + 0x18] */
    esi = eax + 0x8; /* 0x005E53C0: lea esi, [eax + 8] */
    MEM32(ebp + (-0x38)) = eax; /* 0x005E53C3: mov dword ptr [ebp - 0x38], eax */
    ecx = eax + 0x20; /* 0x005E53C6: lea ecx, [eax + 0x20] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E53CD; /* 0x005E53C9: jb 0x5e53cd */
L_005E53CB:
    esi = MEM32(esi); /* 0x005E53CB: mov esi, dword ptr [esi] */
L_005E53CD:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005E53CD: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ecx + 0x10); /* 0x005E53D1: mov edi, dword ptr [ecx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E53D8; /* 0x005E53D4: jb 0x5e53d8 */
L_005E53D6:
    ecx = MEM32(ecx); /* 0x005E53D6: mov ecx, dword ptr [ecx] */
L_005E53D8:
    /* cmp edi, ebx */ /* 0x005E53D8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebx; /* 0x005E53DA: mov edx, ebx */
    if (CMP_B(_flag_a, _flag_b)) { edx = edi; } /* 0x005E53DC: cmovb edx, edi */
    /* test edx, edx */ /* 0x005E53DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5438; /* 0x005E53E1: je 0x5e5438 */
L_005E53E3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x005E53E3: sub edx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_005E53F9; /* 0x005E53E6: jb 0x5e53f9 */
L_005E53E8:
    eax = MEM32(ecx); /* 0x005E53E8: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(esi) */ /* 0x005E53EA: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E53FE; /* 0x005E53EC: jne 0x5e53fe */
L_005E53EE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005E53EE: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005E53F1: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x005E53F4: sub edx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E53E8; /* 0x005E53F7: jae 0x5e53e8 */
L_005E53F9:
    /* cmp edx, 0xFFFFFFFCu */ /* 0x005E53F9: cmp edx, -4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5432; /* 0x005E53FC: je 0x5e5432 */
L_005E53FE:
    SET_LO8(eax, MEM8(ecx)); /* 0x005E53FE: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x005E5400: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E542B; /* 0x005E5402: jne 0x5e542b */
L_005E5404:
    /* cmp edx, 0xFFFFFFFDu */ /* 0x005E5404: cmp edx, -3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5432; /* 0x005E5407: je 0x5e5432 */
L_005E5409:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x005E5409: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x005E540C: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E542B; /* 0x005E540F: jne 0x5e542b */
L_005E5411:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x005E5411: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5432; /* 0x005E5414: je 0x5e5432 */
L_005E5416:
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x005E5416: mov al, byte ptr [ecx + 2] */
    /* cmp LO8(eax), MEM8(esi + 0x2) */ /* 0x005E5419: cmp al, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E542B; /* 0x005E541C: jne 0x5e542b */
L_005E541E:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x005E541E: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5432; /* 0x005E5421: je 0x5e5432 */
L_005E5423:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x005E5423: mov al, byte ptr [ecx + 3] */
    /* cmp LO8(eax), MEM8(esi + 0x3) */ /* 0x005E5426: cmp al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5432; /* 0x005E5429: je 0x5e5432 */
L_005E542B:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005E542B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x005E542D: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5434; /* 0x005E5430: jmp 0x5e5434 */
L_005E5432:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5432: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5434:
    /* test eax, eax */ /* 0x005E5434: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E544A; /* 0x005E5436: jne 0x5e544a */
L_005E5438:
    /* cmp edi, ebx */ /* 0x005E5438: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E5441; /* 0x005E543A: jae 0x5e5441 */
L_005E543C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005E543C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5448; /* 0x005E543F: jmp 0x5e5448 */
L_005E5441:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5441: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x005E5443: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5445: setne al */
L_005E5448:
    /* test eax, eax */ /* 0x005E5448: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E544A:
    ebx = MEM32(ebp + (-0x34)); /* 0x005E544A: mov ebx, dword ptr [ebp - 0x34] */
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x005E544D: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5450: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5452: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5455: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E54DB; /* 0x005E5457: je 0x5e54db */
L_005E545D:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x005E545D: push dword ptr [ebp - 0x38] */
    eax = ebp + (-0x28); /* 0x005E5460: lea eax, [ebp - 0x28] */
    ecx = ebx; /* 0x005E5463: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E5465: push eax */
    RECOMP_CALL(sub_005EAB30); /* 0x005E5466: call 0x5eab30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E546B: mov edi, eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E546D: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x2C)); /* 0x005E5474: mov eax, dword ptr [ebp - 0x2c] */
    esi = MEM32(ebx + 0xAC); /* 0x005E5477: mov esi, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x005E547D: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x005E5480: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005E5482: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E54B0; /* 0x005E5484: je 0x5e54b0 */
L_005E5486:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E5486: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5497; /* 0x005E548A: jb 0x5e5497 */
L_005E548C:
    PUSH32(esp, MEM32(esi)); /* 0x005E548C: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E548E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5494: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5497:
    MEM32(esi + 0x14) = 0xFu; /* 0x005E5497: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x005E549E: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x005E54A0: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, edi); /* 0x005E54A7: push edi */
    MEM8(esi) = (uint8_t)(0); /* 0x005E54A8: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E54AB: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E54B0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E54B0: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E54B7: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E54C9; /* 0x005E54BB: jb 0x5e54c9 */
L_005E54BD:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005E54BD: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E54C0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E54C6: add esp, 4 */
    _flag_k = FK_ADD;
L_005E54C9:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E54C9: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E54D0: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E54D7: mov byte ptr [ebp - 0x28], 0 */
L_005E54DB:
    ecx = MEM32(ebx + 0xB0); /* 0x005E54DB: mov ecx, dword ptr [ebx + 0xb0] */
    eax = 0x92492493u; /* 0x005E54E1: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0xAC); /* 0x005E54E6: sub ecx, dword ptr [ebx + 0xac] */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x30)); /* 0x005E54EC: mov edi, dword ptr [ebp - 0x30] */
    esi = MEM32(ebp + (-0x2C)); /* 0x005E54EF: mov esi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005E54F2: inc edi */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E54F3: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005E54F5: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = edi; /* 0x005E54F8: mov dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E54FB: add edx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = esi; /* 0x005E54FD: mov dword ptr [ebp - 0x2c], esi */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E5500: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E5503: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E5505: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E5505: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E5508: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005E550A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E53B1; /* 0x005E550C: jb 0x5e53b1 */
L_005E5512:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E5512: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E5515: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E551C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E551D: pop edi */
    esi = POP32_VAL(esp); /* 0x005E551E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E551F: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E5520: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E5523: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E5525: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E552A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E552C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E552D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E5530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5530u);

L_005E5530:
    PUSH32(esp, ebp); /* 0x005E5530: push ebp */
    ebp = esp; /* 0x005E5531: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E5533: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5536: push -1 */
    PUSH32(esp, 0x007B0FF8u); /* 0x005E5538: push 0x7b0ff8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E553D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5543: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x005E5544: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E554A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E554F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x78) = eax; /* 0x005E5551: mov dword ptr [esp + 0x78], eax */
    PUSH32(esp, ebx); /* 0x005E5555: push ebx */
    PUSH32(esp, esi); /* 0x005E5556: push esi */
    PUSH32(esp, edi); /* 0x005E5557: push edi */
    eax = MEM32(0x855000); /* 0x005E5558: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E555D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E555F: push eax */
    eax = esp + 0x90; /* 0x005E5560: lea eax, [esp + 0x90] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5567: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x005E556D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005E5570: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(0x7CC9AC); /* 0x005E5572: mov ebx, dword ptr [0x7cc9ac] */
    esi = MEM32(0x7CC694); /* 0x005E5578: mov esi, dword ptr [0x7cc694] */
    MEM32(esp + 0x14) = eax; /* 0x005E557E: mov dword ptr [esp + 0x14], eax */
L_005E5582:
    MEM32(esp + 0x10) = edi; /* 0x005E5582: mov dword ptr [esp + 0x10], edi */
    RECOMP_ICALL(ebx); /* 0x005E5586: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5588: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5590; /* 0x005E558A: jne 0x5e5590 */
L_005E558C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E558C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E55AA; /* 0x005E558E: jmp 0x5e55aa */
L_005E5590:
    ecx = MEM32(0x927AF0); /* 0x005E5590: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E5596: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E55AA; /* 0x005E5598: jne 0x5e55aa */
L_005E559A:
    ecx = 0x00927AE8u; /* 0x005E559A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E559F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E55A4: mov ecx, dword ptr [0x927af0] */
L_005E55AA:
    eax = MEM32(ecx); /* 0x005E55AA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x005E55AC: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x005E55AF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E5856; /* 0x005E55B1: jge 0x5e5856 */
L_005E55B7:
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFF0FFFFFu; /* 0x005E55B7: and dword ptr [esp + 0x24], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x27) = (uint16_t)(0); /* 0x005E55BF: mov word ptr [esp + 0x27], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFF00000u; /* 0x005E55C6: and dword ptr [esp + 0x24], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = 0; /* 0x005E55CE: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x005E55D6: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x20) = 0; /* 0x005E55DE: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x3C) = 0xFu; /* 0x005E55E6: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x005E55EE: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x98) = 0; /* 0x005E55F6: mov dword ptr [esp + 0x98], 0 */
    MEM32(esp + 0x50) = 0; /* 0x005E5601: mov dword ptr [esp + 0x50], 0 */
    MEM32(esp + 0x54) = 0; /* 0x005E5609: mov dword ptr [esp + 0x54], 0 */
    MEM32(esp + 0x54) = 0xFu; /* 0x005E5611: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x005E5619: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x005E5621: mov byte ptr [esp + 0x40], 0 */
    MEM32(esp + 0x98) = 2; /* 0x005E5626: mov dword ptr [esp + 0x98], 2 */
    RECOMP_ICALL(ebx); /* 0x005E5631: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5633: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E563B; /* 0x005E5635: jne 0x5e563b */
L_005E5637:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5637: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5655; /* 0x005E5639: jmp 0x5e5655 */
L_005E563B:
    ecx = MEM32(0x927AF0); /* 0x005E563B: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E5641: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5655; /* 0x005E5643: jne 0x5e5655 */
L_005E5645:
    ecx = 0x00927AE8u; /* 0x005E5645: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E564A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E564F: mov ecx, dword ptr [0x927af0] */
L_005E5655:
    eax = MEM32(ecx); /* 0x005E5655: mov eax, dword ptr [ecx] */
    edx = esp + 0x18; /* 0x005E5657: lea edx, [esp + 0x18] */
    PUSH32(esp, edi); /* 0x005E565B: push edi */
    PUSH32(esp, edx); /* 0x005E565C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005E565D: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005E5660: mov ecx, dword ptr [eax] */
    MEM32(esp + 0x20) = ecx; /* 0x005E5662: mov dword ptr [esp + 0x20], ecx */
    eax = MEM32(eax + 0x4); /* 0x005E5666: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x24) = eax; /* 0x005E5669: mov dword ptr [esp + 0x24], eax */
    RECOMP_ICALL(ebx); /* 0x005E566D: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E566F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5677; /* 0x005E5671: jne 0x5e5677 */
L_005E5673:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5673: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5691; /* 0x005E5675: jmp 0x5e5691 */
L_005E5677:
    ecx = MEM32(0x927AF0); /* 0x005E5677: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E567D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5691; /* 0x005E567F: jne 0x5e5691 */
L_005E5681:
    ecx = 0x00927AE8u; /* 0x005E5681: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E5686: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E568B: mov ecx, dword ptr [0x927af0] */
L_005E5691:
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E5691: push dword ptr [esp + 0x24] */
    eax = MEM32(ecx); /* 0x005E5695: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E5697: push dword ptr [esp + 0x24] */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x005E569B: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E569E: mov edx, eax */
    ecx = esp + 0x70; /* 0x005E56A0: lea ecx, [esp + 0x70] */
    RECOMP_CALL(sub_00541450); /* 0x005E56A4: call 0x541450 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E56A9: mov edi, eax */
    MEM8(esp + 0x98) = (uint8_t)(3); /* 0x005E56AB: mov byte ptr [esp + 0x98], 3 */
    eax = esp + 0x28; /* 0x005E56B3: lea eax, [esp + 0x28] */
    /* cmp eax, edi */ /* 0x005E56B7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E56EA; /* 0x005E56B9: je 0x5e56ea */
L_005E56BB:
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x005E56BB: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E56CB; /* 0x005E56C0: jb 0x5e56cb */
L_005E56C2:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x005E56C2: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(esi); /* 0x005E56C6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E56C8: add esp, 4 */
    _flag_k = FK_ADD;
L_005E56CB:
    PUSH32(esp, edi); /* 0x005E56CB: push edi */
    ecx = esp + 0x2C; /* 0x005E56CC: lea ecx, [esp + 0x2c] */
    MEM32(esp + 0x40) = 0xFu; /* 0x005E56D0: mov dword ptr [esp + 0x40], 0xf */
    MEM32(esp + 0x3C) = 0; /* 0x005E56D8: mov dword ptr [esp + 0x3c], 0 */
    MEM8(esp + 0x2C) = (uint8_t)(0); /* 0x005E56E0: mov byte ptr [esp + 0x2c], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E56E5: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E56EA:
    MEM8(esp + 0x98) = (uint8_t)(2); /* 0x005E56EA: mov byte ptr [esp + 0x98], 2 */
    /* cmp MEM32(esp + 0x84), 0x10u */ /* 0x005E56F2: cmp dword ptr [esp + 0x84], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x84)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5705; /* 0x005E56FA: jb 0x5e5705 */
L_005E56FC:
    PUSH32(esp, MEM32(esp + 0x70)); /* 0x005E56FC: push dword ptr [esp + 0x70] */
    RECOMP_ICALL(esi); /* 0x005E5700: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5702: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5705:
    MEM32(esp + 0x84) = 0xFu; /* 0x005E5705: mov dword ptr [esp + 0x84], 0xf */
    MEM32(esp + 0x80) = 0; /* 0x005E5710: mov dword ptr [esp + 0x80], 0 */
    MEM8(esp + 0x70) = (uint8_t)(0); /* 0x005E571B: mov byte ptr [esp + 0x70], 0 */
    RECOMP_ICALL(ebx); /* 0x005E5720: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5722: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E572A; /* 0x005E5724: jne 0x5e572a */
L_005E5726:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5726: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5744; /* 0x005E5728: jmp 0x5e5744 */
L_005E572A:
    ecx = MEM32(0x927AF0); /* 0x005E572A: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E5730: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5744; /* 0x005E5732: jne 0x5e5744 */
L_005E5734:
    ecx = 0x00927AE8u; /* 0x005E5734: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E5739: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E573E: mov ecx, dword ptr [0x927af0] */
L_005E5744:
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E5744: push dword ptr [esp + 0x24] */
    eax = MEM32(ecx); /* 0x005E5748: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E574A: push dword ptr [esp + 0x24] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005E574E: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E5751: mov edx, eax */
    ecx = esp + 0x58; /* 0x005E5753: lea ecx, [esp + 0x58] */
    RECOMP_CALL(sub_00541450); /* 0x005E5757: call 0x541450 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E575C: mov edi, eax */
    MEM8(esp + 0x98) = (uint8_t)(4); /* 0x005E575E: mov byte ptr [esp + 0x98], 4 */
    eax = esp + 0x40; /* 0x005E5766: lea eax, [esp + 0x40] */
    /* cmp eax, edi */ /* 0x005E576A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E579D; /* 0x005E576C: je 0x5e579d */
L_005E576E:
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x005E576E: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E577E; /* 0x005E5773: jb 0x5e577e */
L_005E5775:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x005E5775: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(esi); /* 0x005E5779: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E577B: add esp, 4 */
    _flag_k = FK_ADD;
L_005E577E:
    PUSH32(esp, edi); /* 0x005E577E: push edi */
    ecx = esp + 0x44; /* 0x005E577F: lea ecx, [esp + 0x44] */
    MEM32(esp + 0x58) = 0xFu; /* 0x005E5783: mov dword ptr [esp + 0x58], 0xf */
    MEM32(esp + 0x54) = 0; /* 0x005E578B: mov dword ptr [esp + 0x54], 0 */
    MEM8(esp + 0x44) = (uint8_t)(0); /* 0x005E5793: mov byte ptr [esp + 0x44], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E5798: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E579D:
    MEM8(esp + 0x98) = (uint8_t)(2); /* 0x005E579D: mov byte ptr [esp + 0x98], 2 */
    /* cmp MEM32(esp + 0x6C), 0x10u */ /* 0x005E57A5: cmp dword ptr [esp + 0x6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E57B5; /* 0x005E57AA: jb 0x5e57b5 */
L_005E57AC:
    PUSH32(esp, MEM32(esp + 0x58)); /* 0x005E57AC: push dword ptr [esp + 0x58] */
    RECOMP_ICALL(esi); /* 0x005E57B0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E57B2: add esp, 4 */
    _flag_k = FK_ADD;
L_005E57B5:
    /* cmp MEM32(esp + 0x50), 0 */ /* 0x005E57B5: cmp dword ptr [esp + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x6C) = 0xFu; /* 0x005E57BA: mov dword ptr [esp + 0x6c], 0xf */
    MEM32(esp + 0x68) = 0; /* 0x005E57C2: mov dword ptr [esp + 0x68], 0 */
    MEM8(esp + 0x58) = (uint8_t)(0); /* 0x005E57CA: mov byte ptr [esp + 0x58], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E57DE; /* 0x005E57CF: jne 0x5e57de */
L_005E57D1:
    MEM32(esp + 0x98) = 5; /* 0x005E57D1: mov dword ptr [esp + 0x98], 5 */
    goto L_005E57F7; /* 0x005E57DC: jmp 0x5e57f7 */
L_005E57DE:
    ecx = MEM32(esp + 0x14); /* 0x005E57DE: mov ecx, dword ptr [esp + 0x14] */
    eax = esp + 0x20; /* 0x005E57E2: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005E57E6: push eax */
    RECOMP_CALL(sub_005EC1A0); /* 0x005E57E7: call 0x5ec1a0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x98) = 7; /* 0x005E57EC: mov dword ptr [esp + 0x98], 7 */
L_005E57F7:
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x005E57F7: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5807; /* 0x005E57FC: jb 0x5e5807 */
L_005E57FE:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x005E57FE: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(esi); /* 0x005E5802: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5804: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5807:
    MEM32(esp + 0x54) = 0xFu; /* 0x005E5807: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x005E580F: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x005E5817: mov byte ptr [esp + 0x40], 0 */
    MEM32(esp + 0x98) = 0xFFFFFFFFu; /* 0x005E581C: mov dword ptr [esp + 0x98], 0xffffffff */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x005E5827: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5837; /* 0x005E582C: jb 0x5e5837 */
L_005E582E:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x005E582E: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(esi); /* 0x005E5832: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5834: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5837:
    edi = MEM32(esp + 0x10); /* 0x005E5837: mov edi, dword ptr [esp + 0x10] */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x005E583B: mov byte ptr [esp + 0x28], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005E5840: inc edi */
    _flag_k = FK_INC;
    MEM32(esp + 0x38) = 0; /* 0x005E5841: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0xFu; /* 0x005E5849: mov dword ptr [esp + 0x3c], 0xf */
    RECOMP_BACKEDGE();
    goto L_005E5582; /* 0x005E5851: jmp 0x5e5582 */
L_005E5856:
    ecx = MEM32(esp + 0x90); /* 0x005E5856: mov ecx, dword ptr [esp + 0x90] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E585D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E5864: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E5865: pop edi */
    esi = POP32_VAL(esp); /* 0x005E5866: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E5867: pop ebx */
    ecx = MEM32(esp + 0x78); /* 0x005E5868: mov ecx, dword ptr [esp + 0x78] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E586C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E586E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E5873: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5875: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E5876: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E5880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5880u);

L_005E5880:
    PUSH32(esp, ebp); /* 0x005E5880: push ebp */
    ebp = esp; /* 0x005E5881: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E5883: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5886: push -1 */
    PUSH32(esp, 0x007B1040u); /* 0x005E5888: push 0x7b1040 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E588D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5893: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x005E5894: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E5897: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E589C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = eax; /* 0x005E589E: mov dword ptr [esp + 0x30], eax */
    PUSH32(esp, ebx); /* 0x005E58A2: push ebx */
    PUSH32(esp, esi); /* 0x005E58A3: push esi */
    PUSH32(esp, edi); /* 0x005E58A4: push edi */
    eax = MEM32(0x855000); /* 0x005E58A5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E58AA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E58AC: push eax */
    eax = esp + 0x48; /* 0x005E58AD: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E58B1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E58B7: mov edi, ecx */
    MEM32(esp + 0x14) = 0; /* 0x005E58B9: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x005E58C1: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x005E58C9: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x50) = 0; /* 0x005E58D1: mov dword ptr [esp + 0x50], 0 */
    ecx = esp + 0x14; /* 0x005E58D9: lea ecx, [esp + 0x14] */
    eax = MEM32(edi); /* 0x005E58DD: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x005E58DF: push ecx */
    ecx = edi; /* 0x005E58E0: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0xB0)); /* 0x005E58E2: call dword ptr [eax + 0xb0] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x005E58E8: mov esi, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x005E58EC: mov ecx, dword ptr [esp + 0x18] */
    /* cmp esi, ecx */ /* 0x005E58F0: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5921; /* 0x005E58F2: je 0x5e5921 */
L_005E58F4:
    eax = MEM32(ebp + 0x8); /* 0x005E58F4: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x005E58F7: mov edx, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x005E58F9: mov ebx, dword ptr [eax + 4] */
    esp = esp; /* 0x005E58FC: lea esp, [esp] */
L_005E5900:
    /* cmp edx, MEM32(esi) */ /* 0x005E5900: cmp edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5910; /* 0x005E5902: jne 0x5e5910 */
L_005E5904:
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x005E5904: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5910; /* 0x005E5907: jne 0x5e5910 */
L_005E5909:
    eax = 1; /* 0x005E5909: mov eax, 1 */
    goto L_005E5912; /* 0x005E590E: jmp 0x5e5912 */
L_005E5910:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5910: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5912:
    /* test LO8(eax), LO8(eax) */ /* 0x005E5912: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E59A6; /* 0x005E5914: jne 0x5e59a6 */
L_005E591A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x005E591A: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x005E591D: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5900; /* 0x005E591F: jne 0x5e5900 */
L_005E5921:
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFF0FFFFFu; /* 0x005E5921: and dword ptr [esp + 0x24], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(0x7CC694); /* 0x005E5929: mov ebx, dword ptr [0x7cc694] */
    MEM8(esp + 0x27) = (uint8_t)(0); /* 0x005E592F: mov byte ptr [esp + 0x27], 0 */
    eax = MEM32(esp + 0x24); /* 0x005E5934: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E5938: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x20) = 0; /* 0x005E593D: mov dword ptr [edi + 0x20], 0 */
L_005E5944:
    MEM32(edi + 0x24) = eax; /* 0x005E5944: mov dword ptr [edi + 0x24], eax */
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x005E5947: mov dword ptr [esp + 0x50], 0xffffffff */
    ecx = MEM32(esp + 0x14); /* 0x005E594F: mov ecx, dword ptr [esp + 0x14] */
    /* test ecx, ecx */ /* 0x005E5953: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5986; /* 0x005E5955: je 0x5e5986 */
L_005E5957:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x005E5957: push dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x1C); /* 0x005E595B: mov edx, dword ptr [esp + 0x1c] */
    PUSH32(esp, ecx); /* 0x005E595F: push ecx */
    RECOMP_CALL(sub_0051C750); /* 0x005E5960: call 0x51c750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005E5965: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(ebx); /* 0x005E5969: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E596B: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = 0; /* 0x005E596E: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x005E5976: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x005E597E: mov dword ptr [esp + 0x1c], 0 */
L_005E5986:
    ecx = MEM32(esp + 0x48); /* 0x005E5986: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E598A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E5991: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E5992: pop edi */
    esi = POP32_VAL(esp); /* 0x005E5993: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E5994: pop ebx */
    ecx = MEM32(esp + 0x30); /* 0x005E5995: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E5999: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E599B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E59A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E59A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E59A3: ret 4 */
L_005E59A6:
    PUSH32(esp, 7); /* 0x005E59A6: push 7 */
    MEM32(esp + 0x3C) = 0; /* 0x005E59A8: mov dword ptr [esp + 0x3c], 0 */
    ecx = esp + 0x2C; /* 0x005E59B0: lea ecx, [esp + 0x2c] */
    MEM32(esp + 0x40) = 0; /* 0x005E59B4: mov dword ptr [esp + 0x40], 0 */
    PUSH32(esp, 0x007F6564u); /* 0x005E59BC: push 0x7f6564 */
    MEM32(esp + 0x44) = 0xFu; /* 0x005E59C1: mov dword ptr [esp + 0x44], 0xf */
    MEM32(esp + 0x40) = 0; /* 0x005E59C9: mov dword ptr [esp + 0x40], 0 */
    MEM8(esp + 0x30) = (uint8_t)(0); /* 0x005E59D1: mov byte ptr [esp + 0x30], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E59D6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x50) = (uint8_t)(1); /* 0x005E59DB: mov byte ptr [esp + 0x50], 1 */
    eax = esi + 0x20; /* 0x005E59E0: lea eax, [esi + 0x20] */
    edx = MEM32(edi); /* 0x005E59E3: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x005E59E5: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E59E7: push eax */
    eax = esp + 0x2C; /* 0x005E59E8: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E59EC: push eax */
    RECOMP_ICALL(MEM32(edx + 0x40)); /* 0x005E59ED: call dword ptr [edx + 0x40] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x50) = (uint8_t)(0); /* 0x005E59F0: mov byte ptr [esp + 0x50], 0 */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x005E59F5: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005E59FA: mov ebx, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5A0B; /* 0x005E5A00: jb 0x5e5a0b */
L_005E5A02:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x005E5A02: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(ebx); /* 0x005E5A06: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5A08: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5A0B:
    eax = MEM32(esi); /* 0x005E5A0B: mov eax, dword ptr [esi] */
    MEM32(edi + 0x20) = eax; /* 0x005E5A0D: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(esi + 0x4); /* 0x005E5A10: mov eax, dword ptr [esi + 4] */
    MEM32(esp + 0x3C) = 0xFu; /* 0x005E5A13: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x005E5A1B: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x005E5A23: mov byte ptr [esp + 0x28], 0 */
    RECOMP_BACKEDGE();
    goto L_005E5944; /* 0x005E5A28: jmp 0x5e5944 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E5A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5A30u);

L_005E5A30:
    eax = ecx + 0x20; /* 0x005E5A30: lea eax, [ecx + 0x20] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E5A33: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E5A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5A40u);

L_005E5A40:
    ecx = MEM32(ecx + 0x18); /* 0x005E5A40: mov ecx, dword ptr [ecx + 0x18] */
    goto L_005F6B90; /* 0x005E5A43: jmp 0x5f6b90 */
L_005F6B90:
    PUSH32(esp, ebp); /* 0x005F6B90: push ebp */
    ebp = esp; /* 0x005F6B91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F6B93: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005F6B96: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F6B99: push esi */
    esi = ecx; /* 0x005F6B9A: mov esi, ecx */
    RECOMP_CALL(sub_0055B360); /* 0x005F6B9C: call 0x55b360 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x4), 0 */ /* 0x005F6BA1: cmp byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6BFE; /* 0x005F6BA5: je 0x5f6bfe */
L_005F6BA7:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F6BA7: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F6BAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6BB5; /* 0x005F6BAF: jne 0x5f6bb5 */
L_005F6BB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F6BB1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F6BCF; /* 0x005F6BB3: jmp 0x5f6bcf */
L_005F6BB5:
    ecx = MEM32(0x927AEC); /* 0x005F6BB5: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F6BBB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6BCF; /* 0x005F6BBD: jne 0x5f6bcf */
L_005F6BBF:
    ecx = 0x00927AE8u; /* 0x005F6BBF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F6BC4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F6BC9: mov ecx, dword ptr [0x927aec] */
L_005F6BCF:
    eax = MEM32(ecx); /* 0x005F6BCF: mov eax, dword ptr [ecx] */
    edx = esp + 0x8; /* 0x005F6BD1: lea edx, [esp + 8] */
    PUSH32(esp, edx); /* 0x005F6BD5: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005F6BD6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005F6BD9: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x30) = ecx; /* 0x005F6BDB: mov dword ptr [esi + 0x30], ecx */
    eax = MEM32(eax + 0x4); /* 0x005F6BDE: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x34) = eax; /* 0x005F6BE1: mov dword ptr [esi + 0x34], eax */
    RECOMP_CALL(sub_0055B360); /* 0x005F6BE4: call 0x55b360 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x5), 0 */ /* 0x005F6BE9: cmp byte ptr [eax + 5], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6BFE; /* 0x005F6BED: je 0x5f6bfe */
L_005F6BEF:
    RECOMP_CALL(sub_0055B360); /* 0x005F6BEF: call 0x55b360 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F6BF4: mov ecx, eax */
    RECOMP_CALL(sub_0061D020); /* 0x005F6BF6: call 0x61d020 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x40) = eax; /* 0x005F6BFB: mov dword ptr [esi + 0x40], eax */
L_005F6BFE:
    SET_LO8(eax, 1); /* 0x005F6BFE: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x005F6C00: pop esi */
    esp = ebp; /* 0x005F6C01: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6C03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F6C04: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E5A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5A50u);

L_005E5A50:
    ecx = MEM32(ecx + 0x18); /* 0x005E5A50: mov ecx, dword ptr [ecx + 0x18] */
    goto L_005F6C10; /* 0x005E5A53: jmp 0x5f6c10 */
L_005F6C10:
    PUSH32(esp, ebp); /* 0x005F6C10: push ebp */
    ebp = esp; /* 0x005F6C11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F6C13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F6C16: push -1 */
    PUSH32(esp, 0x007B2CA0u); /* 0x005F6C18: push 0x7b2ca0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F6C1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F6C23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F6C24: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F6C27: push ebx */
    PUSH32(esp, esi); /* 0x005F6C28: push esi */
    PUSH32(esp, edi); /* 0x005F6C29: push edi */
    eax = MEM32(0x855000); /* 0x005F6C2A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F6C2F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F6C31: push eax */
    eax = esp + 0x28; /* 0x005F6C32: lea eax, [esp + 0x28] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F6C36: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005F6C3C: mov ebx, ecx */
    MEM32(esp + 0x18) = ebx; /* 0x005F6C3E: mov dword ptr [esp + 0x18], ebx */
    RECOMP_CALL(sub_0055B360); /* 0x005F6C42: call 0x55b360 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x005F6C47: mov al, byte ptr [eax + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x005F6C4A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F6DD7; /* 0x005F6C4C: je 0x5f6dd7 */
L_005F6C52:
    eax = MEM32(ebx + 0x28); /* 0x005F6C52: mov eax, dword ptr [ebx + 0x28] */
    esi = MEM32(eax); /* 0x005F6C55: mov esi, dword ptr [eax] */
    /* cmp esi, eax */ /* 0x005F6C57: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6D70; /* 0x005F6C59: je 0x5f6d70 */
L_005F6C5F:
    /* nop */ /* 0x005F6C5F: nop  */
L_005F6C60:
    ecx = MEM32(0x927BA0); /* 0x005F6C60: mov ecx, dword ptr [0x927ba0] */
    eax = MEM32(esi + 0x14); /* 0x005F6C66: mov eax, dword ptr [esi + 0x14] */
    edi = MEM32(esi + 0x10); /* 0x005F6C69: mov edi, dword ptr [esi + 0x10] */
    MEM32(esp + 0x14) = eax; /* 0x005F6C6C: mov dword ptr [esp + 0x14], eax */
    /* test ecx, ecx */ /* 0x005F6C70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6CE8; /* 0x005F6C72: jne 0x5f6ce8 */
L_005F6C74:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F6C74: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F6C77: mov ecx, esp */
    MEM32(esp + 0x34) = esp; /* 0x005F6C79: mov dword ptr [esp + 0x34], esp */
    PUSH32(esp, 0x3Du); /* 0x005F6C7D: push 0x3d */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F6C7F: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F6C86: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007CCE84u); /* 0x005F6C8D: push 0x7cce84 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F6C92: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F6C95: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005F6C9A: mov dword ptr [esp + 0x48], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F6CA2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F6CA5: mov ecx, esp */
    MEM32(esp + 0x50) = esp; /* 0x005F6CA7: mov dword ptr [esp + 0x50], esp */
    PUSH32(esp, 0xCu); /* 0x005F6CAB: push 0xc */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F6CAD: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F6CB4: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007CCEC4u); /* 0x005F6CBB: push 0x7ccec4 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F6CC0: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F6CC3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x60) = (uint8_t)(1); /* 0x005F6CC8: mov byte ptr [esp + 0x60], 1 */
    MEM32(esp + 0x60) = 0xFFFFFFFFu; /* 0x005F6CCD: mov dword ptr [esp + 0x60], 0xffffffff */
    ecx = 0x15u; /* 0x005F6CD5: mov ecx, 0x15 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F6CDA: call 0x668da0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927BA0); /* 0x005F6CDF: mov ecx, dword ptr [0x927ba0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F6CE5: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F6CE8:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x005F6CE8: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_0061D270); /* 0x005F6CEB: call 0x61d270 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F6CF0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F6CF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6CFE; /* 0x005F6CF8: jne 0x5f6cfe */
L_005F6CFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F6CFA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F6D18; /* 0x005F6CFC: jmp 0x5f6d18 */
L_005F6CFE:
    ecx = MEM32(0x927B08); /* 0x005F6CFE: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005F6D04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6D18; /* 0x005F6D06: jne 0x5f6d18 */
L_005F6D08:
    ecx = 0x00927AE8u; /* 0x005F6D08: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F6D0D: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005F6D12: mov ecx, dword ptr [0x927b08] */
L_005F6D18:
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x005F6D18: push dword ptr [esp + 0x14] */
    eax = MEM32(ecx); /* 0x005F6D1C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x005F6D1E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005F6D1F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005F6D22: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D67; /* 0x005F6D26: jne 0x5f6d67 */
L_005F6D28:
    eax = MEM32(esi + 0x8); /* 0x005F6D28: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005F6D2B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D4C; /* 0x005F6D2F: jne 0x5f6d4c */
L_005F6D31:
    esi = eax; /* 0x005F6D31: mov esi, eax */
    eax = MEM32(esi); /* 0x005F6D33: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005F6D35: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D67; /* 0x005F6D39: jne 0x5f6d67 */
L_005F6D3B:
    goto L_005F6D40; /* 0x005F6D3B: jmp 0x5f6d40 */
L_005F6D40:
    esi = eax; /* 0x005F6D40: mov esi, eax */
    eax = MEM32(esi); /* 0x005F6D42: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005F6D44: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6D40; /* 0x005F6D48: je 0x5f6d40 */
L_005F6D4A:
    goto L_005F6D67; /* 0x005F6D4A: jmp 0x5f6d67 */
L_005F6D4C:
    eax = MEM32(esi + 0x4); /* 0x005F6D4C: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005F6D4F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D65; /* 0x005F6D53: jne 0x5f6d65 */
L_005F6D55:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005F6D55: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D65; /* 0x005F6D58: jne 0x5f6d65 */
L_005F6D5A:
    esi = eax; /* 0x005F6D5A: mov esi, eax */
    eax = MEM32(eax + 0x4); /* 0x005F6D5C: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005F6D5F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6D55; /* 0x005F6D63: je 0x5f6d55 */
L_005F6D65:
    esi = eax; /* 0x005F6D65: mov esi, eax */
L_005F6D67:
    /* cmp esi, MEM32(ebx + 0x28) */ /* 0x005F6D67: cmp esi, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6C60; /* 0x005F6D6A: jne 0x5f6c60 */
L_005F6D70:
    eax = MEM32(ebx + 0x28); /* 0x005F6D70: mov eax, dword ptr [ebx + 0x28] */
    edi = MEM32(eax + 0x4); /* 0x005F6D73: mov edi, dword ptr [eax + 4] */
    esi = edi; /* 0x005F6D76: mov esi, edi */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005F6D78: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6D9F; /* 0x005F6D7C: jne 0x5f6d9f */
L_005F6D7E:
    edi = edi; /* 0x005F6D7E: mov edi, edi */
L_005F6D80:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005F6D80: push dword ptr [esi + 8] */
    ecx = ebx + 0x28; /* 0x005F6D83: lea ecx, [ebx + 0x28] */
    RECOMP_CALL(sub_0040B6A0); /* 0x005F6D86: call 0x40b6a0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x005F6D8B: mov esi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x005F6D8D: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F6D8E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F6D94: add esp, 4 */
    _flag_k = FK_ADD;
    edi = esi; /* 0x005F6D97: mov edi, esi */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005F6D99: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6D80; /* 0x005F6D9D: je 0x5f6d80 */
L_005F6D9F:
    eax = MEM32(ebx + 0x28); /* 0x005F6D9F: mov eax, dword ptr [ebx + 0x28] */
    MEM32(eax + 0x4) = eax; /* 0x005F6DA2: mov dword ptr [eax + 4], eax */
    eax = MEM32(ebx + 0x28); /* 0x005F6DA5: mov eax, dword ptr [ebx + 0x28] */
    MEM32(eax) = eax; /* 0x005F6DA8: mov dword ptr [eax], eax */
    eax = MEM32(ebx + 0x28); /* 0x005F6DAA: mov eax, dword ptr [ebx + 0x28] */
    MEM32(eax + 0x8) = eax; /* 0x005F6DAD: mov dword ptr [eax + 8], eax */
    MEM32(ebx + 0x2C) = 0; /* 0x005F6DB0: mov dword ptr [ebx + 0x2c], 0 */
    ebx = MEM32(esp + 0x18); /* 0x005F6DB7: mov ebx, dword ptr [esp + 0x18] */
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x005F6DBB: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6DD7; /* 0x005F6DBF: je 0x5f6dd7 */
L_005F6DC1:
    RECOMP_CALL(sub_0055B360); /* 0x005F6DC1: call 0x55b360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x40)); /* 0x005F6DC6: push dword ptr [ebx + 0x40] */
    ecx = eax; /* 0x005F6DC9: mov ecx, eax */
    RECOMP_CALL(sub_0061D270); /* 0x005F6DCB: call 0x61d270 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x40) = 0; /* 0x005F6DD0: mov dword ptr [ebx + 0x40], 0 */
L_005F6DD7:
    ecx = MEM32(esp + 0x28); /* 0x005F6DD7: mov ecx, dword ptr [esp + 0x28] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F6DDB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F6DE2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F6DE3: pop edi */
    esi = POP32_VAL(esp); /* 0x005F6DE4: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F6DE5: pop ebx */
    esp = ebp; /* 0x005F6DE6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6DE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F6DE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E5A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5A60u);

L_005E5A60:
    PUSH32(esp, ebp); /* 0x005E5A60: push ebp */
    ebp = esp; /* 0x005E5A61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E5A63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E5A66: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x005E5A69: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005E5A6C: push ebx */
    PUSH32(esp, esi); /* 0x005E5A6D: push esi */
    PUSH32(esp, edi); /* 0x005E5A6E: push edi */
    edi = MEM32(eax + 0x8); /* 0x005E5A6F: mov edi, dword ptr [eax + 8] */
    esi = ecx; /* 0x005E5A72: mov esi, ecx */
    ebx = MEM32(eax + 0xC); /* 0x005E5A74: mov ebx, dword ptr [eax + 0xc] */
    ecx = esp + 0x10; /* 0x005E5A77: lea ecx, [esp + 0x10] */
    MEM32(esp + 0x10) = edi; /* 0x005E5A7B: mov dword ptr [esp + 0x10], edi */
    MEM32(esp + 0x14) = ebx; /* 0x005E5A7F: mov dword ptr [esp + 0x14], ebx */
    RECOMP_CALL(sub_0046D220); /* 0x005E5A83: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E5A88: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5AA6; /* 0x005E5A8A: je 0x5e5aa6 */
L_005E5A8C:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x005E5A8C: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5AA6; /* 0x005E5A90: jne 0x5e5aa6 */
L_005E5A92:
    eax = esp + 0x10; /* 0x005E5A92: lea eax, [esp + 0x10] */
    MEM32(esp + 0x10) = edi; /* 0x005E5A96: mov dword ptr [esp + 0x10], edi */
    PUSH32(esp, eax); /* 0x005E5A9A: push eax */
    ecx = esi; /* 0x005E5A9B: mov ecx, esi */
    MEM32(esp + 0x18) = ebx; /* 0x005E5A9D: mov dword ptr [esp + 0x18], ebx */
    RECOMP_CALL(sub_005E5AB0); /* 0x005E5AA1: call 0x5e5ab0 */
    RECOMP_FLAGS_IN();
L_005E5AA6:
    edi = POP32_VAL(esp); /* 0x005E5AA6: pop edi */
    esi = POP32_VAL(esp); /* 0x005E5AA7: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E5AA8: pop ebx */
    esp = ebp; /* 0x005E5AA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5AAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E5AAC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E5AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5AB0u);

L_005E5AB0:
    PUSH32(esp, ebp); /* 0x005E5AB0: push ebp */
    ebp = esp; /* 0x005E5AB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5AB3: push -1 */
    PUSH32(esp, 0x007AEF30u); /* 0x005E5AB5: push 0x7aef30 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E5ABA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5AC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E5AC1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E5AC4: push esi */
    eax = MEM32(0x855000); /* 0x005E5AC5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E5ACA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E5ACC: push eax */
    eax = ebp + (-0xC); /* 0x005E5ACD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5AD0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E5AD6: mov esi, ecx */
    ecx = esi + 0x38; /* 0x005E5AD8: lea ecx, [esi + 0x38] */
    RECOMP_CALL(sub_0046D220); /* 0x005E5ADB: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E5AE0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5B6C; /* 0x005E5AE2: je 0x5e5b6c */
L_005E5AE8:
    ecx = MEM32(ebp + 0x8); /* 0x005E5AE8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005E5AEB: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax | MEM32(ecx + 0x4))); _flag_b = (uint32_t)((eax | MEM32(ecx + 0x4)));
    eax = eax | MEM32(ecx + 0x4); /* 0x005E5AED: or eax, dword ptr [ecx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5B6C; /* 0x005E5AF0: je 0x5e5b6c */
L_005E5AF2:
    eax = MEM32(ecx); /* 0x005E5AF2: mov eax, dword ptr [ecx] */
    MEM32(esi + 0x40) = eax; /* 0x005E5AF4: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ecx + 0x4); /* 0x005E5AF7: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x44) = eax; /* 0x005E5AFA: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x58) = 0; /* 0x005E5AFD: mov dword ptr [esi + 0x58], 0 */
    MEM32(esi + 0x54) = 0; /* 0x005E5B04: mov dword ptr [esi + 0x54], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005E5B0B: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x005E5B10: lea ecx, [ebp - 0x30] */
    MEM32(esi + 0x48) = eax; /* 0x005E5B13: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = eax; /* 0x005E5B16: mov dword ptr [esi + 0x4c], eax */
    RECOMP_CALL(sub_005F3C60); /* 0x005E5B19: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E5B1E: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x30); /* 0x005E5B25: lea ecx, [ebp - 0x30] */
    PUSH32(esp, 0x1F5u); /* 0x005E5B28: push 0x1f5 */
    RECOMP_CALL(sub_005F5560); /* 0x005E5B2D: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005E5B32: push 0 */
    eax = ebp + (-0x30); /* 0x005E5B34: lea eax, [ebp - 0x30] */
    ecx = esi; /* 0x005E5B37: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E5B39: push eax */
    RECOMP_CALL(sub_005E9220); /* 0x005E5B3A: call 0x5e9220 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E5B3F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x1C)); /* 0x005E5B46: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005E5B49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5B6C; /* 0x005E5B4B: je 0x5e5b6c */
L_005E5B4D:
    PUSH32(esp, eax); /* 0x005E5B4D: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E5B4E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5B54: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E5B57: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E5B5E: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005E5B65: mov dword ptr [ebp - 0x14], 0 */
L_005E5B6C:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E5B6C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E5B6F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E5B76: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E5B77: pop esi */
    esp = ebp; /* 0x005E5B78: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E5B7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E5B7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E5B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E5B80u);

L_005E5B80:
    PUSH32(esp, ebp); /* 0x005E5B80: push ebp */
    ebp = esp; /* 0x005E5B81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5B83: push -1 */
    PUSH32(esp, 0x007B10E9u); /* 0x005E5B85: push 0x7b10e9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E5B8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E5B90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1E4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1E4u; /* 0x005E5B91: sub esp, 0x1e4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E5B97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E5B9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E5B9E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E5BA1: push ebx */
    PUSH32(esp, esi); /* 0x005E5BA2: push esi */
    PUSH32(esp, edi); /* 0x005E5BA3: push edi */
    PUSH32(esp, eax); /* 0x005E5BA4: push eax */
    eax = ebp + (-0xC); /* 0x005E5BA5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E5BA8: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E5BAE: mov esi, ecx */
    MEM32(ebp + (-0x1A0)) = esi; /* 0x005E5BB0: mov dword ptr [ebp - 0x1a0], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E5BB6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5BB8:
    edi = MEM32(0x7CC9AC); /* 0x005E5BB8: mov edi, dword ptr [0x7cc9ac] */
    MEM32(ebp + (-0x1A4)) = ebx; /* 0x005E5BBE: mov dword ptr [ebp - 0x1a4], ebx */
    RECOMP_ICALL(edi); /* 0x005E5BC4: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5BC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5BCE; /* 0x005E5BC8: jne 0x5e5bce */
L_005E5BCA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5BCA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5BE8; /* 0x005E5BCC: jmp 0x5e5be8 */
L_005E5BCE:
    ecx = MEM32(0x927AF8); /* 0x005E5BCE: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E5BD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5BE8; /* 0x005E5BD6: jne 0x5e5be8 */
L_005E5BD8:
    ecx = 0x00927AE8u; /* 0x005E5BD8: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E5BDD: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E5BE2: mov ecx, dword ptr [0x927af8] */
L_005E5BE8:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E5BE8: push dword ptr [esi + 0x3c] */
    eax = MEM32(ecx); /* 0x005E5BEB: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E5BED: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005E5BF0: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    /* cmp ebx, eax */ /* 0x005E5BF3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E62BD; /* 0x005E5BF5: jge 0x5e62bd */
L_005E5BFB:
    RECOMP_ICALL(edi); /* 0x005E5BFB: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5BFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5C05; /* 0x005E5BFF: jne 0x5e5c05 */
L_005E5C01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5C01: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5C1F; /* 0x005E5C03: jmp 0x5e5c1f */
L_005E5C05:
    ecx = MEM32(0x927AF8); /* 0x005E5C05: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E5C0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5C1F; /* 0x005E5C0D: jne 0x5e5c1f */
L_005E5C0F:
    ecx = 0x00927AE8u; /* 0x005E5C0F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E5C14: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E5C19: mov ecx, dword ptr [0x927af8] */
L_005E5C1F:
    eax = MEM32(ecx); /* 0x005E5C1F: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x130); /* 0x005E5C21: lea edx, [ebp - 0x130] */
    PUSH32(esp, 0xFFu); /* 0x005E5C27: push 0xff */
    PUSH32(esp, edx); /* 0x005E5C2C: push edx */
    PUSH32(esp, 0x1Fu); /* 0x005E5C2D: push 0x1f */
    edx = ebp + (-0x30); /* 0x005E5C2F: lea edx, [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x005E5C32: push edx */
    PUSH32(esp, ebx); /* 0x005E5C33: push ebx */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E5C34: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E5C37: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x005E5C3A: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x005E5C3D: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E5C3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5C47; /* 0x005E5C41: jne 0x5e5c47 */
L_005E5C43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5C43: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5C61; /* 0x005E5C45: jmp 0x5e5c61 */
L_005E5C47:
    ecx = MEM32(0x927AF8); /* 0x005E5C47: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E5C4D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5C61; /* 0x005E5C4F: jne 0x5e5c61 */
L_005E5C51:
    ecx = 0x00927AE8u; /* 0x005E5C51: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E5C56: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E5C5B: mov ecx, dword ptr [0x927af8] */
L_005E5C61:
    eax = MEM32(ecx); /* 0x005E5C61: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x30); /* 0x005E5C63: lea edx, [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x005E5C66: push edx */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E5C67: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E5C6A: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005E5C6D: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E5C70: mov edx, eax */
    ecx = ebp + (-0x168); /* 0x005E5C72: lea ecx, [ebp - 0x168] */
    RECOMP_CALL(sub_0053DD90); /* 0x005E5C78: call 0x53dd90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E5C7D: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x005E5C84: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x170)) = 0; /* 0x005E5C88: mov dword ptr [ebp - 0x170], 0 */
    MEM32(ebp + (-0x16C)) = 0; /* 0x005E5C92: mov dword ptr [ebp - 0x16c], 0 */
    MEM32(ebp + (-0x16C)) = 0xFu; /* 0x005E5C9C: mov dword ptr [ebp - 0x16c], 0xf */
    MEM32(ebp + (-0x170)) = 0; /* 0x005E5CA6: mov dword ptr [ebp - 0x170], 0 */
    MEM8(ebp + (-0x180)) = (uint8_t)(0); /* 0x005E5CB0: mov byte ptr [ebp - 0x180], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5CBD; /* 0x005E5CB7: jne 0x5e5cbd */
L_005E5CB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5CB9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5CCC; /* 0x005E5CBB: jmp 0x5e5ccc */
L_005E5CBD:
    ecx = ebp + (-0x30); /* 0x005E5CBD: lea ecx, [ebp - 0x30] */
    edx = ecx + 0x1; /* 0x005E5CC0: lea edx, [ecx + 1] */
L_005E5CC3:
    SET_LO8(eax, MEM8(ecx)); /* 0x005E5CC3: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005E5CC5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005E5CC6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5CC3; /* 0x005E5CC8: jne 0x5e5cc3 */
L_005E5CCA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x005E5CCA: sub ecx, edx */
    _flag_k = FK_CMP;
L_005E5CCC:
    PUSH32(esp, ecx); /* 0x005E5CCC: push ecx */
    eax = ebp + (-0x30); /* 0x005E5CCD: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x005E5CD0: push eax */
    ecx = ebp + (-0x180); /* 0x005E5CD1: lea ecx, [ebp - 0x180] */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E5CD7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E5CDC: mov byte ptr [ebp - 4], 1 */
    edi = esi + 0xA4; /* 0x005E5CE0: lea edi, [esi + 0xa4] */
    eax = ebp + (-0x180); /* 0x005E5CE6: lea eax, [ebp - 0x180] */
    MEM32(ebp + (-0x19C)) = edi; /* 0x005E5CEC: mov dword ptr [ebp - 0x19c], edi */
    PUSH32(esp, eax); /* 0x005E5CF2: push eax */
    ecx = edi; /* 0x005E5CF3: mov ecx, edi */
    RECOMP_CALL(sub_005E04A0); /* 0x005E5CF5: call 0x5e04a0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi); /* 0x005E5CFA: mov edi, dword ptr [edi] */
    esi = eax; /* 0x005E5CFC: mov esi, eax */
    /* cmp esi, edi */ /* 0x005E5CFE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5D6D; /* 0x005E5D00: je 0x5e5d6d */
L_005E5D02:
    /* cmp MEM32(esi + 0x24), 0x10u */ /* 0x005E5D02: cmp dword ptr [esi + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esi + 0x10; /* 0x005E5D06: lea edx, [esi + 0x10] */
    ebx = MEM32(edx + 0x10); /* 0x005E5D09: mov ebx, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5D10; /* 0x005E5D0C: jb 0x5e5d10 */
L_005E5D0E:
    edx = MEM32(edx); /* 0x005E5D0E: mov edx, dword ptr [edx] */
L_005E5D10:
    /* cmp MEM32(ebp + (-0x16C)), 0x10u */ /* 0x005E5D10: cmp dword ptr [ebp - 0x16c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x16C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x180); /* 0x005E5D17: lea ecx, [ebp - 0x180] */
    eax = ebx; /* 0x005E5D1D: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x180)); } /* 0x005E5D1F: cmovae ecx, dword ptr [ebp - 0x180] */
    /* cmp MEM32(ebp + (-0x170)), ebx */ /* 0x005E5D26: cmp dword ptr [ebp - 0x170], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x170))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x170)); } /* 0x005E5D2C: cmovb eax, dword ptr [ebp - 0x170] */
    PUSH32(esp, eax); /* 0x005E5D33: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005E5D34: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5D39: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005E5D3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5D58; /* 0x005E5D3E: jne 0x5e5d58 */
L_005E5D40:
    ecx = MEM32(ebp + (-0x170)); /* 0x005E5D40: mov ecx, dword ptr [ebp - 0x170] */
    /* cmp ecx, ebx */ /* 0x005E5D46: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E5D4F; /* 0x005E5D48: jae 0x5e5d4f */
L_005E5D4A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005E5D4A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5D56; /* 0x005E5D4D: jmp 0x5e5d56 */
L_005E5D4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5D4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x005E5D51: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5D53: setne al */
L_005E5D56:
    /* test eax, eax */ /* 0x005E5D56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5D58:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) ? 1 : 0); /* 0x005E5D58: sets al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5D5B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5D6D; /* 0x005E5D5D: jne 0x5e5d6d */
L_005E5D5F:
    MEM32(ebp + (-0x1AC)) = esi; /* 0x005E5D5F: mov dword ptr [ebp - 0x1ac], esi */
    esi = ebp + (-0x1AC); /* 0x005E5D65: lea esi, [ebp - 0x1ac] */
    goto L_005E5D79; /* 0x005E5D6B: jmp 0x5e5d79 */
L_005E5D6D:
    MEM32(ebp + (-0x1B0)) = edi; /* 0x005E5D6D: mov dword ptr [ebp - 0x1b0], edi */
    esi = ebp + (-0x1B0); /* 0x005E5D73: lea esi, [ebp - 0x1b0] */
L_005E5D79:
    esi = MEM32(esi); /* 0x005E5D79: mov esi, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E5D7B: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x16C)), 0x10u */ /* 0x005E5D7F: cmp dword ptr [ebp - 0x16c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x16C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5D97; /* 0x005E5D86: jb 0x5e5d97 */
L_005E5D88:
    PUSH32(esp, MEM32(ebp + (-0x180))); /* 0x005E5D88: push dword ptr [ebp - 0x180] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E5D8E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5D94: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5D97:
    ebx = MEM32(ebp + (-0x19C)); /* 0x005E5D97: mov ebx, dword ptr [ebp - 0x19c] */
    MEM32(ebp + (-0x16C)) = 0xFu; /* 0x005E5D9D: mov dword ptr [ebp - 0x16c], 0xf */
    MEM32(ebp + (-0x170)) = 0; /* 0x005E5DA7: mov dword ptr [ebp - 0x170], 0 */
    MEM8(ebp + (-0x180)) = (uint8_t)(0); /* 0x005E5DB1: mov byte ptr [ebp - 0x180], 0 */
    /* cmp esi, MEM32(ebx) */ /* 0x005E5DB8: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5F12; /* 0x005E5DBA: jne 0x5e5f12 */
L_005E5DC0:
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x005E5DC0: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x188)) = 0; /* 0x005E5DC4: mov dword ptr [ebp - 0x188], 0 */
    MEM32(ebp + (-0x184)) = 0; /* 0x005E5DCE: mov dword ptr [ebp - 0x184], 0 */
    MEM32(ebp + (-0x184)) = 0xFu; /* 0x005E5DD8: mov dword ptr [ebp - 0x184], 0xf */
    MEM32(ebp + (-0x188)) = 0; /* 0x005E5DE2: mov dword ptr [ebp - 0x188], 0 */
    MEM8(ebp + (-0x198)) = (uint8_t)(0); /* 0x005E5DEC: mov byte ptr [ebp - 0x198], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5DF9; /* 0x005E5DF3: jne 0x5e5df9 */
L_005E5DF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E5DF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5E09; /* 0x005E5DF7: jmp 0x5e5e09 */
L_005E5DF9:
    ecx = ebp + (-0x30); /* 0x005E5DF9: lea ecx, [ebp - 0x30] */
    edx = ecx + 0x1; /* 0x005E5DFC: lea edx, [ecx + 1] */
    /* nop */ /* 0x005E5DFF: nop  */
L_005E5E00:
    SET_LO8(eax, MEM8(ecx)); /* 0x005E5E00: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005E5E02: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005E5E03: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5E00; /* 0x005E5E05: jne 0x5e5e00 */
L_005E5E07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x005E5E07: sub ecx, edx */
    _flag_k = FK_CMP;
L_005E5E09:
    PUSH32(esp, ecx); /* 0x005E5E09: push ecx */
    eax = ebp + (-0x30); /* 0x005E5E0A: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x005E5E0D: push eax */
    ecx = ebp + (-0x198); /* 0x005E5E0E: lea ecx, [ebp - 0x198] */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E5E14: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E5E19: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x198); /* 0x005E5E1D: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x005E5E23: push eax */
    ecx = ebx; /* 0x005E5E24: mov ecx, ebx */
    RECOMP_CALL(sub_005E04A0); /* 0x005E5E26: call 0x5e04a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E5E2B: mov esi, eax */
    /* cmp esi, MEM32(ebx) */ /* 0x005E5E2D: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5E8C; /* 0x005E5E2F: je 0x5e5e8c */
L_005E5E31:
    /* cmp MEM32(esi + 0x24), 0x10u */ /* 0x005E5E31: cmp dword ptr [esi + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esi + 0x10; /* 0x005E5E35: lea edx, [esi + 0x10] */
    edi = MEM32(edx + 0x10); /* 0x005E5E38: mov edi, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5E3F; /* 0x005E5E3B: jb 0x5e5e3f */
L_005E5E3D:
    edx = MEM32(edx); /* 0x005E5E3D: mov edx, dword ptr [edx] */
L_005E5E3F:
    /* cmp MEM32(ebp + (-0x184)), 0x10u */ /* 0x005E5E3F: cmp dword ptr [ebp - 0x184], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x184))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x198); /* 0x005E5E46: lea ecx, [ebp - 0x198] */
    ebx = MEM32(ebp + (-0x188)); /* 0x005E5E4C: mov ebx, dword ptr [ebp - 0x188] */
    eax = edi; /* 0x005E5E52: mov eax, edi */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x198)); } /* 0x005E5E54: cmovae ecx, dword ptr [ebp - 0x198] */
    /* cmp ebx, edi */ /* 0x005E5E5B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ebx; } /* 0x005E5E5D: cmovb eax, ebx */
    PUSH32(esp, eax); /* 0x005E5E60: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005E5E61: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5E66: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005E5E69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5E7F; /* 0x005E5E6B: jne 0x5e5e7f */
L_005E5E6D:
    /* cmp ebx, edi */ /* 0x005E5E6D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E5E76; /* 0x005E5E6F: jae 0x5e5e76 */
L_005E5E71:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005E5E71: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5E7D; /* 0x005E5E74: jmp 0x5e5e7d */
L_005E5E76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5E76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x005E5E78: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5E7A: setne al */
L_005E5E7D:
    /* test eax, eax */ /* 0x005E5E7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5E7F:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) ? 1 : 0); /* 0x005E5E7F: sets al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5E82: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5EC2; /* 0x005E5E84: je 0x5e5ec2 */
L_005E5E86:
    ebx = MEM32(ebp + (-0x19C)); /* 0x005E5E86: mov ebx, dword ptr [ebp - 0x19c] */
L_005E5E8C:
    eax = ebp + (-0x198); /* 0x005E5E8C: lea eax, [ebp - 0x198] */
    PUSH32(esp, ecx); /* 0x005E5E92: push ecx */
    MEM32(ebp + (-0x19C)) = eax; /* 0x005E5E93: mov dword ptr [ebp - 0x19c], eax */
    eax = ebp + (-0x19C); /* 0x005E5E99: lea eax, [ebp - 0x19c] */
    PUSH32(esp, eax); /* 0x005E5E9F: push eax */
    PUSH32(esp, ecx); /* 0x005E5EA0: push ecx */
    ecx = ebx; /* 0x005E5EA1: mov ecx, ebx */
    RECOMP_CALL(sub_005EDA50); /* 0x005E5EA3: call 0x5eda50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E5EA8: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E5EA9: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x005E5EAC: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E5EAE: push eax */
    PUSH32(esp, esi); /* 0x005E5EAF: push esi */
    eax = ebp + (-0x1A8); /* 0x005E5EB0: lea eax, [ebp - 0x1a8] */
    PUSH32(esp, eax); /* 0x005E5EB6: push eax */
    RECOMP_CALL(sub_005EDB50); /* 0x005E5EB7: call 0x5edb50 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1A8)); /* 0x005E5EBC: mov esi, dword ptr [ebp - 0x1a8] */
L_005E5EC2:
    ecx = esi + 0x28; /* 0x005E5EC2: lea ecx, [esi + 0x28] */
    eax = ebp + (-0x168); /* 0x005E5EC5: lea eax, [ebp - 0x168] */
    /* cmp ecx, eax */ /* 0x005E5ECB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5ED9; /* 0x005E5ECD: je 0x5e5ed9 */
L_005E5ECF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5ECF: push -1 */
    PUSH32(esp, 0); /* 0x005E5ED1: push 0 */
    PUSH32(esp, eax); /* 0x005E5ED3: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E5ED4: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E5ED9:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E5ED9: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x184)), 0x10u */ /* 0x005E5EDD: cmp dword ptr [ebp - 0x184], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x184))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5EF5; /* 0x005E5EE4: jb 0x5e5ef5 */
L_005E5EE6:
    PUSH32(esp, MEM32(ebp + (-0x198))); /* 0x005E5EE6: push dword ptr [ebp - 0x198] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E5EEC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5EF2: add esp, 4 */
    _flag_k = FK_ADD;
L_005E5EF5:
    MEM32(ebp + (-0x184)) = 0xFu; /* 0x005E5EF5: mov dword ptr [ebp - 0x184], 0xf */
    MEM32(ebp + (-0x188)) = 0; /* 0x005E5EFF: mov dword ptr [ebp - 0x188], 0 */
    MEM8(ebp + (-0x198)) = (uint8_t)(0); /* 0x005E5F09: mov byte ptr [ebp - 0x198], 0 */
    goto L_005E5F87; /* 0x005E5F10: jmp 0x5e5f87 */
L_005E5F12:
    /* cmp MEM32(esi + 0x3C), 0x10u */ /* 0x005E5F12: cmp dword ptr [esi + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esi + 0x28; /* 0x005E5F16: lea edx, [esi + 0x28] */
    edi = MEM32(edx + 0x10); /* 0x005E5F19: mov edi, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E5F20; /* 0x005E5F1C: jb 0x5e5f20 */
L_005E5F1E:
    edx = MEM32(edx); /* 0x005E5F1E: mov edx, dword ptr [edx] */
L_005E5F20:
    /* cmp MEM32(ebp + (-0x154)), 0x10u */ /* 0x005E5F20: cmp dword ptr [ebp - 0x154], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x168); /* 0x005E5F27: lea ecx, [ebp - 0x168] */
    ebx = MEM32(ebp + (-0x158)); /* 0x005E5F2D: mov ebx, dword ptr [ebp - 0x158] */
    eax = edi; /* 0x005E5F33: mov eax, edi */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x168)); } /* 0x005E5F35: cmovae ecx, dword ptr [ebp - 0x168] */
    /* cmp ebx, edi */ /* 0x005E5F3C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ebx; } /* 0x005E5F3E: cmovb eax, ebx */
    PUSH32(esp, eax); /* 0x005E5F41: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005E5F42: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E5F47: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005E5F4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5F60; /* 0x005E5F4C: jne 0x5e5f60 */
L_005E5F4E:
    /* cmp ebx, edi */ /* 0x005E5F4E: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E5F57; /* 0x005E5F50: jae 0x5e5f57 */
L_005E5F52:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005E5F52: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5F5E; /* 0x005E5F55: jmp 0x5e5f5e */
L_005E5F57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5F57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x005E5F59: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5F5B: setne al */
L_005E5F5E:
    /* test eax, eax */ /* 0x005E5F5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5F60:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x005E5F60: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5F63: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E5F65: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E5F68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6271; /* 0x005E5F6A: je 0x5e6271 */
L_005E5F70:
    ecx = esi + 0x28; /* 0x005E5F70: lea ecx, [esi + 0x28] */
    eax = ebp + (-0x168); /* 0x005E5F73: lea eax, [ebp - 0x168] */
    /* cmp ecx, eax */ /* 0x005E5F79: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E5F87; /* 0x005E5F7B: je 0x5e5f87 */
L_005E5F7D:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E5F7D: push -1 */
    PUSH32(esp, 0); /* 0x005E5F7F: push 0 */
    PUSH32(esp, eax); /* 0x005E5F81: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E5F82: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E5F87:
    ecx = 0x007F5F10u; /* 0x005E5F87: mov ecx, 0x7f5f10 */
    eax = ebp + (-0x30); /* 0x005E5F8C: lea eax, [ebp - 0x30] */
    /* nop */ /* 0x005E5F8F: nop  */
L_005E5F90:
    SET_LO8(edx, MEM8(eax)); /* 0x005E5F90: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x005E5F92: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5FB0; /* 0x005E5F94: jne 0x5e5fb0 */
L_005E5F96:
    /* test LO8(edx), LO8(edx) */ /* 0x005E5F96: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E5FAC; /* 0x005E5F98: je 0x5e5fac */
L_005E5F9A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x005E5F9A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x005E5F9D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E5FB0; /* 0x005E5FA0: jne 0x5e5fb0 */
L_005E5FA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x005E5FA2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x005E5FA5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x005E5FA8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E5F90; /* 0x005E5FAA: jne 0x5e5f90 */
L_005E5FAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E5FAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E5FB5; /* 0x005E5FAE: jmp 0x5e5fb5 */
L_005E5FB0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005E5FB0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x005E5FB2: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E5FB5:
    /* test eax, eax */ /* 0x005E5FB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6092; /* 0x005E5FB7: jne 0x5e6092 */
L_005E5FBD:
    ebx = MEM32(ebp + (-0x1A0)); /* 0x005E5FBD: mov ebx, dword ptr [ebp - 0x1a0] */
    ecx = ebx; /* 0x005E5FC3: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x005E5FC5: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x74)); /* 0x005E5FC7: call dword ptr [eax + 0x74] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x005E5FCA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6251; /* 0x005E5FCD: jne 0x5e6251 */
L_005E5FD3:
    ecx = ebp + (-0x1F0); /* 0x005E5FD3: lea ecx, [ebp - 0x1f0] */
    MEM32(ebx + 0x48) = 0; /* 0x005E5FD9: mov dword ptr [ebx + 0x48], 0 */
    RECOMP_CALL(sub_005F3C60); /* 0x005E5FE0: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E5FE5: mov byte ptr [ebp - 4], 3 */
    /* test MEM8(ebp + (-0x1E4)), 7 */ /* 0x005E5FE9: test byte ptr [ebp - 0x1e4], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1E4))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x19C)) = 0x201u; /* 0x005E5FF0: mov dword ptr [ebp - 0x19c], 0x201 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E602A; /* 0x005E5FFA: jne 0x5e602a */
L_005E5FFC:
    PUSH32(esp, 0x20u); /* 0x005E5FFC: push 0x20 */
    ecx = ebp + (-0x1F0); /* 0x005E5FFE: lea ecx, [ebp - 0x1f0] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E6004: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1E4)); /* 0x005E6009: mov eax, dword ptr [ebp - 0x1e4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E600F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E6012: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E6012: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1DC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1DC)); /* 0x005E6015: add eax, dword ptr [ebp - 0x1dc] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x201u; /* 0x005E601B: mov dword ptr [eax], 0x201 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1E4))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1E4)) = MEM32(ebp + (-0x1E4)) + 0x20u; /* 0x005E6021: add dword ptr [ebp - 0x1e4], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E603F; /* 0x005E6028: jmp 0x5e603f */
L_005E602A:
    PUSH32(esp, ecx); /* 0x005E602A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E602B: push 0x20 */
    eax = ebp + (-0x19C); /* 0x005E602D: lea eax, [ebp - 0x19c] */
    PUSH32(esp, eax); /* 0x005E6033: push eax */
    ecx = ebp + (-0x1F0); /* 0x005E6034: lea ecx, [ebp - 0x1f0] */
    RECOMP_CALL(sub_005F5800); /* 0x005E603A: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E603F:
    eax = ebp + (-0x1F0); /* 0x005E603F: lea eax, [ebp - 0x1f0] */
    PUSH32(esp, eax); /* 0x005E6045: push eax */
    ecx = ebx + 0xBC; /* 0x005E6046: lea ecx, [ebx + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E604C: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E6051: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x1DC)); /* 0x005E6055: mov eax, dword ptr [ebp - 0x1dc] */
    ebx = MEM32(0x7CC694); /* 0x005E605B: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005E6061: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6257; /* 0x005E6063: je 0x5e6257 */
L_005E6069:
    PUSH32(esp, eax); /* 0x005E6069: push eax */
    RECOMP_ICALL(ebx); /* 0x005E606A: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E606C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1DC)) = 0; /* 0x005E606F: mov dword ptr [ebp - 0x1dc], 0 */
    MEM32(ebp + (-0x1D8)) = 0; /* 0x005E6079: mov dword ptr [ebp - 0x1d8], 0 */
    MEM32(ebp + (-0x1D4)) = 0; /* 0x005E6083: mov dword ptr [ebp - 0x1d4], 0 */
    goto L_005E6257; /* 0x005E608D: jmp 0x5e6257 */
L_005E6092:
    ecx = ebp + (-0x1D0); /* 0x005E6092: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6098: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E609D: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(ebp + (-0x1C4)), 7 */ /* 0x005E60A1: test byte ptr [ebp - 0x1c4], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C4))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x19C)) = 0x1FCu; /* 0x005E60A8: mov dword ptr [ebp - 0x19c], 0x1fc */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E60E2; /* 0x005E60B2: jne 0x5e60e2 */
L_005E60B4:
    PUSH32(esp, 0x20u); /* 0x005E60B4: push 0x20 */
    ecx = ebp + (-0x1D0); /* 0x005E60B6: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E60BC: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C4)); /* 0x005E60C1: mov eax, dword ptr [ebp - 0x1c4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E60C7: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E60CA: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E60CA: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1BC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1BC)); /* 0x005E60CD: add eax, dword ptr [ebp - 0x1bc] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1FCu; /* 0x005E60D3: mov dword ptr [eax], 0x1fc */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C4))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C4)) = MEM32(ebp + (-0x1C4)) + 0x20u; /* 0x005E60D9: add dword ptr [ebp - 0x1c4], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E60F7; /* 0x005E60E0: jmp 0x5e60f7 */
L_005E60E2:
    PUSH32(esp, ecx); /* 0x005E60E2: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E60E3: push 0x20 */
    eax = ebp + (-0x19C); /* 0x005E60E5: lea eax, [ebp - 0x19c] */
    PUSH32(esp, eax); /* 0x005E60EB: push eax */
    ecx = ebp + (-0x1D0); /* 0x005E60EC: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_005F5800); /* 0x005E60F2: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E60F7:
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x005E60F7: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x138)) = 0; /* 0x005E60FB: mov dword ptr [ebp - 0x138], 0 */
    MEM32(ebp + (-0x134)) = 0; /* 0x005E6105: mov dword ptr [ebp - 0x134], 0 */
    MEM32(ebp + (-0x134)) = 0xFu; /* 0x005E610F: mov dword ptr [ebp - 0x134], 0xf */
    MEM32(ebp + (-0x138)) = 0; /* 0x005E6119: mov dword ptr [ebp - 0x138], 0 */
    MEM8(ebp + (-0x148)) = (uint8_t)(0); /* 0x005E6123: mov byte ptr [ebp - 0x148], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6130; /* 0x005E612A: jne 0x5e6130 */
L_005E612C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E612C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E613F; /* 0x005E612E: jmp 0x5e613f */
L_005E6130:
    ecx = ebp + (-0x30); /* 0x005E6130: lea ecx, [ebp - 0x30] */
    edx = ecx + 0x1; /* 0x005E6133: lea edx, [ecx + 1] */
L_005E6136:
    SET_LO8(eax, MEM8(ecx)); /* 0x005E6136: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005E6138: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005E6139: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6136; /* 0x005E613B: jne 0x5e6136 */
L_005E613D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x005E613D: sub ecx, edx */
    _flag_k = FK_CMP;
L_005E613F:
    PUSH32(esp, ecx); /* 0x005E613F: push ecx */
    eax = ebp + (-0x30); /* 0x005E6140: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x005E6143: push eax */
    ecx = ebp + (-0x148); /* 0x005E6144: lea ecx, [ebp - 0x148] */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E614A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E614F: mov byte ptr [ebp - 4], 6 */
    /* test MEM8(ebp + (-0x1C4)), 7 */ /* 0x005E6153: test byte ptr [ebp - 0x1c4], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C4))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + (-0x138)); /* 0x005E615A: mov esi, dword ptr [ebp - 0x138] */
    MEM32(ebp + (-0x19C)) = esi; /* 0x005E6160: mov dword ptr [ebp - 0x19c], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6192; /* 0x005E6166: jne 0x5e6192 */
L_005E6168:
    PUSH32(esp, 0x20u); /* 0x005E6168: push 0x20 */
    ecx = ebp + (-0x1D0); /* 0x005E616A: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E6170: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C4)); /* 0x005E6175: mov eax, dword ptr [ebp - 0x1c4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E617B: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E617E: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E617E: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1BC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1BC)); /* 0x005E6181: add eax, dword ptr [ebp - 0x1bc] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005E6187: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C4))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C4)) = MEM32(ebp + (-0x1C4)) + 0x20u; /* 0x005E6189: add dword ptr [ebp - 0x1c4], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E61A7; /* 0x005E6190: jmp 0x5e61a7 */
L_005E6192:
    PUSH32(esp, ecx); /* 0x005E6192: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E6193: push 0x20 */
    eax = ebp + (-0x19C); /* 0x005E6195: lea eax, [ebp - 0x19c] */
    PUSH32(esp, eax); /* 0x005E619B: push eax */
    ecx = ebp + (-0x1D0); /* 0x005E619C: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_005F5800); /* 0x005E61A2: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E61A7:
    /* test esi, esi */ /* 0x005E61A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E61CC; /* 0x005E61A9: je 0x5e61cc */
L_005E61AB:
    /* cmp MEM32(ebp + (-0x134)), 0x10u */ /* 0x005E61AB: cmp dword ptr [ebp - 0x134], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x148); /* 0x005E61B2: lea eax, [ebp - 0x148] */
    PUSH32(esp, esi); /* 0x005E61B8: push esi */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x148)); } /* 0x005E61B9: cmovae eax, dword ptr [ebp - 0x148] */
    ecx = ebp + (-0x1D0); /* 0x005E61C0: lea ecx, [ebp - 0x1d0] */
    PUSH32(esp, eax); /* 0x005E61C6: push eax */
    RECOMP_CALL(sub_005F5730); /* 0x005E61C7: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005E61CC:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E61CC: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x134)), 0x10u */ /* 0x005E61D0: cmp dword ptr [ebp - 0x134], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005E61D7: mov ebx, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E61EA; /* 0x005E61DD: jb 0x5e61ea */
L_005E61DF:
    PUSH32(esp, MEM32(ebp + (-0x148))); /* 0x005E61DF: push dword ptr [ebp - 0x148] */
    RECOMP_ICALL(ebx); /* 0x005E61E5: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E61E7: add esp, 4 */
    _flag_k = FK_ADD;
L_005E61EA:
    ecx = MEM32(ebp + (-0x1A0)); /* 0x005E61EA: mov ecx, dword ptr [ebp - 0x1a0] */
    eax = ebp + (-0x1D0); /* 0x005E61F0: lea eax, [ebp - 0x1d0] */
    PUSH32(esp, eax); /* 0x005E61F6: push eax */
    MEM32(ebp + (-0x134)) = 0xFu; /* 0x005E61F7: mov dword ptr [ebp - 0x134], 0xf */
    MEM32(ebp + (-0x138)) = 0; /* 0x005E6201: mov dword ptr [ebp - 0x138], 0 */
    ecx = ecx + 0xBC; /* 0x005E620B: lea ecx, [ecx + 0xbc] */
    MEM8(ebp + (-0x148)) = (uint8_t)(0); /* 0x005E6211: mov byte ptr [ebp - 0x148], 0 */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6218: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E621D: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x1BC)); /* 0x005E6221: mov eax, dword ptr [ebp - 0x1bc] */
    /* test eax, eax */ /* 0x005E6227: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6257; /* 0x005E6229: je 0x5e6257 */
L_005E622B:
    PUSH32(esp, eax); /* 0x005E622B: push eax */
    RECOMP_ICALL(ebx); /* 0x005E622C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E622E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1BC)) = 0; /* 0x005E6231: mov dword ptr [ebp - 0x1bc], 0 */
    MEM32(ebp + (-0x1B8)) = 0; /* 0x005E623B: mov dword ptr [ebp - 0x1b8], 0 */
    MEM32(ebp + (-0x1B4)) = 0; /* 0x005E6245: mov dword ptr [ebp - 0x1b4], 0 */
    goto L_005E6257; /* 0x005E624F: jmp 0x5e6257 */
L_005E6251:
    ebx = MEM32(0x7CC694); /* 0x005E6251: mov ebx, dword ptr [0x7cc694] */
L_005E6257:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E6257: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x154)), 0x10u */ /* 0x005E625E: cmp dword ptr [ebp - 0x154], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6290; /* 0x005E6265: jb 0x5e6290 */
L_005E6267:
    PUSH32(esp, MEM32(ebp + (-0x168))); /* 0x005E6267: push dword ptr [ebp - 0x168] */
    RECOMP_ICALL(ebx); /* 0x005E626D: call ebx */
    RECOMP_FLAGS_IN();
    goto L_005E628D; /* 0x005E626F: jmp 0x5e628d */
L_005E6271:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E6271: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x154)), 0x10u */ /* 0x005E6278: cmp dword ptr [ebp - 0x154], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6290; /* 0x005E627F: jb 0x5e6290 */
L_005E6281:
    PUSH32(esp, MEM32(ebp + (-0x168))); /* 0x005E6281: push dword ptr [ebp - 0x168] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E6287: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
L_005E628D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E628D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E6290:
    ebx = MEM32(ebp + (-0x1A4)); /* 0x005E6290: mov ebx, dword ptr [ebp - 0x1a4] */
    esi = MEM32(ebp + (-0x1A0)); /* 0x005E6296: mov esi, dword ptr [ebp - 0x1a0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005E629C: inc ebx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x168)) = (uint8_t)(0); /* 0x005E629D: mov byte ptr [ebp - 0x168], 0 */
    MEM32(ebp + (-0x158)) = 0; /* 0x005E62A4: mov dword ptr [ebp - 0x158], 0 */
    MEM32(ebp + (-0x154)) = 0xFu; /* 0x005E62AE: mov dword ptr [ebp - 0x154], 0xf */
    RECOMP_BACKEDGE();
    goto L_005E5BB8; /* 0x005E62B8: jmp 0x5e5bb8 */
L_005E62BD:
    eax = MEM32(esi + 0xA4); /* 0x005E62BD: mov eax, dword ptr [esi + 0xa4] */
    esi = MEM32(eax); /* 0x005E62C3: mov esi, dword ptr [eax] */
    /* cmp esi, eax */ /* 0x005E62C5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6384; /* 0x005E62C7: je 0x5e6384 */
L_005E62CD:
    ecx = ecx; /* 0x005E62CD: lea ecx, [ecx] */
L_005E62D0:
    RECOMP_ICALL(edi); /* 0x005E62D0: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E62D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E62DA; /* 0x005E62D4: jne 0x5e62da */
L_005E62D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E62D6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E62F4; /* 0x005E62D8: jmp 0x5e62f4 */
L_005E62DA:
    ecx = MEM32(0x927AF8); /* 0x005E62DA: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E62E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E62F4; /* 0x005E62E2: jne 0x5e62f4 */
L_005E62E4:
    ecx = 0x00927AE8u; /* 0x005E62E4: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E62E9: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E62EE: mov ecx, dword ptr [0x927af8] */
L_005E62F4:
    /* cmp MEM32(esi + 0x24), 0x10u */ /* 0x005E62F4: cmp dword ptr [esi + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi + 0x10; /* 0x005E62F8: lea eax, [esi + 0x10] */
    MEM32(ebp + (-0x19C)) = eax; /* 0x005E62FB: mov dword ptr [ebp - 0x19c], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6307; /* 0x005E6301: jb 0x5e6307 */
L_005E6303:
    edx = MEM32(eax); /* 0x005E6303: mov edx, dword ptr [eax] */
    goto L_005E6309; /* 0x005E6305: jmp 0x5e6309 */
L_005E6307:
    edx = eax; /* 0x005E6307: mov edx, eax */
L_005E6309:
    eax = MEM32(ecx); /* 0x005E6309: mov eax, dword ptr [ecx] */
    edi = 0x007CD0C4u; /* 0x005E630B: mov edi, 0x7cd0c4 */
    PUSH32(esp, edx); /* 0x005E6310: push edx */
    edx = MEM32(ebp + (-0x1A0)); /* 0x005E6311: mov edx, dword ptr [ebp - 0x1a0] */
    PUSH32(esp, MEM32(edx + 0x3C)); /* 0x005E6317: push dword ptr [edx + 0x3c] */
    PUSH32(esp, MEM32(edx + 0x38)); /* 0x005E631A: push dword ptr [edx + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005E631D: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
L_005E6320:
    SET_LO8(ecx, MEM8(eax)); /* 0x005E6320: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(edi) */ /* 0x005E6322: cmp cl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6340; /* 0x005E6324: jne 0x5e6340 */
L_005E6326:
    /* test LO8(ecx), LO8(ecx) */ /* 0x005E6326: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E633C; /* 0x005E6328: je 0x5e633c */
L_005E632A:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x005E632A: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(edi + 0x1) */ /* 0x005E632D: cmp cl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6340; /* 0x005E6330: jne 0x5e6340 */
L_005E6332:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x005E6332: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x005E6335: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x005E6338: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6320; /* 0x005E633A: jne 0x5e6320 */
L_005E633C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E633C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E6345; /* 0x005E633E: jmp 0x5e6345 */
L_005E6340:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005E6340: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x005E6342: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E6345:
    /* test eax, eax */ /* 0x005E6345: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E63C4; /* 0x005E6347: je 0x5e63c4 */
L_005E6349:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005E6349: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E636C; /* 0x005E634D: jne 0x5e636c */
L_005E634F:
    eax = MEM32(esi + 0x8); /* 0x005E634F: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E6352: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E63A0; /* 0x005E6356: jne 0x5e63a0 */
L_005E6358:
    esi = eax; /* 0x005E6358: mov esi, eax */
    eax = MEM32(esi); /* 0x005E635A: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E635C: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E636C; /* 0x005E6360: jne 0x5e636c */
L_005E6362:
    esi = eax; /* 0x005E6362: mov esi, eax */
    eax = MEM32(esi); /* 0x005E6364: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E6366: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6362; /* 0x005E636A: je 0x5e6362 */
L_005E636C:
    edi = MEM32(ebp + (-0x1A0)); /* 0x005E636C: mov edi, dword ptr [ebp - 0x1a0] */
L_005E6372:
    /* cmp esi, MEM32(edi + 0xA4) */ /* 0x005E6372: cmp esi, dword ptr [edi + 0xa4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0xA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC9AC); /* 0x005E6378: mov edi, dword ptr [0x7cc9ac] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E62D0; /* 0x005E637E: jne 0x5e62d0 */
L_005E6384:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E6384: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E6387: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E638E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E638F: pop edi */
    esi = POP32_VAL(esp); /* 0x005E6390: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E6391: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E6392: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E6395: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E6397: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E639C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E639E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E639F: ret  */
L_005E63A0:
    eax = MEM32(esi + 0x4); /* 0x005E63A0: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E63A3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E63C0; /* 0x005E63A7: jne 0x5e63c0 */
L_005E63A9:
    esp = esp; /* 0x005E63A9: lea esp, [esp] */
L_005E63B0:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005E63B0: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E63C0; /* 0x005E63B3: jne 0x5e63c0 */
L_005E63B5:
    esi = eax; /* 0x005E63B5: mov esi, eax */
    eax = MEM32(eax + 0x4); /* 0x005E63B7: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E63BA: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E63B0; /* 0x005E63BE: je 0x5e63b0 */
L_005E63C0:
    esi = eax; /* 0x005E63C0: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_005E636C; /* 0x005E63C2: jmp 0x5e636c */
L_005E63C4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14C))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x14C)) = MEM32(ebp + (-0x14C)) & 0xFF0FFFFFu; /* 0x005E63C4: and dword ptr [ebp - 0x14c], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x149)) = (uint8_t)(0); /* 0x005E63CE: mov byte ptr [ebp - 0x149], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14C))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x14C)) = MEM32(ebp + (-0x14C)) & 0xFFF00000u; /* 0x005E63D5: and dword ptr [ebp - 0x14c], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x150)) = 0; /* 0x005E63DF: mov dword ptr [ebp - 0x150], 0 */
    MEM32(ebp + (-0x148)) = 0x800u; /* 0x005E63E9: mov dword ptr [ebp - 0x148], 0x800 */
    MEM32(ebp + (-0x144)) = 0; /* 0x005E63F3: mov dword ptr [ebp - 0x144], 0 */
    MEM32(ebp + (-0x140)) = 0; /* 0x005E63FD: mov dword ptr [ebp - 0x140], 0 */
    MEM32(ebp + (-0x13C)) = 0; /* 0x005E6407: mov dword ptr [ebp - 0x13c], 0 */
    MEM32(ebp + (-0x138)) = 0; /* 0x005E6411: mov dword ptr [ebp - 0x138], 0 */
    MEM32(ebp + (-0x134)) = 0; /* 0x005E641B: mov dword ptr [ebp - 0x134], 0 */
    MEM32(ebp + (-0x4)) = 8; /* 0x005E6425: mov dword ptr [ebp - 4], 8 */
    ecx = ebp + (-0x13C); /* 0x005E642C: lea ecx, [ebp - 0x13c] */
    PUSH32(esp, 0x100u); /* 0x005E6432: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E6437: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 9; /* 0x005E643C: mov dword ptr [ebp - 4], 9 */
    /* test MEM8(ebp + (-0x144)), 7 */ /* 0x005E6443: test byte ptr [ebp - 0x144], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x144))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x1A8)) = 0x1FDu; /* 0x005E644A: mov dword ptr [ebp - 0x1a8], 0x1fd */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E64E0; /* 0x005E6454: jne 0x5e64e0 */
L_005E645A:
    edi = MEM32(ebp + (-0x144)); /* 0x005E645A: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E6460: mov edx, dword ptr [ebp - 0x148] */
    ebx = edi + 0x20; /* 0x005E6466: lea ebx, [edi + 0x20] */
    /* test ebx, ebx */ /* 0x005E6469: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E64B8; /* 0x005E646B: je 0x5e64b8 */
L_005E646D:
    ecx = edx + (-0x1); /* 0x005E646D: lea ecx, [edx - 1] */
    eax = ebx + (-0x1); /* 0x005E6470: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005E6473: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005E6476: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x005E6479: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E64B8; /* 0x005E647B: jae 0x5e64b8 */
L_005E647D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x005E647D: add ebx, ebx */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x005E647F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005E6481: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005E6483: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005E6486: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E6493; /* 0x005E648B: jbe 0x5e6493 */
L_005E648D:
    ebx = edi + 0x100020; /* 0x005E648D: lea ebx, [edi + 0x100020] */
L_005E6493:
    eax = ebx + 0x7; /* 0x005E6493: lea eax, [ebx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E6496: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E6496: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005E6499: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E64B8; /* 0x005E649E: jbe 0x5e64b8 */
L_005E64A0:
    PUSH32(esp, eax); /* 0x005E64A0: push eax */
    ecx = ebp + (-0x13C); /* 0x005E64A1: lea ecx, [ebp - 0x13c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E64A7: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x144)); /* 0x005E64AC: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E64B2: mov edx, dword ptr [ebp - 0x148] */
L_005E64B8:
    /* cmp ebx, edx */ /* 0x005E64B8: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x7; /* 0x005E64BA: lea eax, [edi + 7] */
    if (CMP_A(_flag_a, _flag_b)) { edx = ebx; } /* 0x005E64BD: cmova edx, ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E64C0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E64C0: shr eax, 3 */
    MEM32(ebp + (-0x148)) = edx; /* 0x005E64C3: mov dword ptr [ebp - 0x148], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x13C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x13C)); /* 0x005E64C9: add eax, dword ptr [ebp - 0x13c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x005E64CF: add edi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x144)) = edi; /* 0x005E64D2: mov dword ptr [ebp - 0x144], edi */
    MEM32(eax) = 0x1FDu; /* 0x005E64D8: mov dword ptr [eax], 0x1fd */
    goto L_005E6501; /* 0x005E64DE: jmp 0x5e6501 */
L_005E64E0:
    PUSH32(esp, ecx); /* 0x005E64E0: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E64E1: push 0x20 */
    eax = ebp + (-0x1A8); /* 0x005E64E3: lea eax, [ebp - 0x1a8] */
    PUSH32(esp, eax); /* 0x005E64E9: push eax */
    ecx = ebp + (-0x150); /* 0x005E64EA: lea ecx, [ebp - 0x150] */
    RECOMP_CALL(sub_005F5800); /* 0x005E64F0: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x144)); /* 0x005E64F5: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E64FB: mov edx, dword ptr [ebp - 0x148] */
L_005E6501:
    /* test MEM8(ebp + (-0x144)), 7 */ /* 0x005E6501: test byte ptr [ebp - 0x144], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x144))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x19C)); /* 0x005E6508: mov ebx, dword ptr [ebp - 0x19c] */
    ebx = MEM32(ebx + 0x10); /* 0x005E650E: mov ebx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x1AC)) = ebx; /* 0x005E6511: mov dword ptr [ebp - 0x1ac], ebx */
    MEM32(ebp + (-0x1A8)) = ebx; /* 0x005E6517: mov dword ptr [ebp - 0x1a8], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E659B; /* 0x005E651D: jne 0x5e659b */
L_005E651F:
    ebx = edi + 0x20; /* 0x005E651F: lea ebx, [edi + 0x20] */
    /* test ebx, ebx */ /* 0x005E6522: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6571; /* 0x005E6524: je 0x5e6571 */
L_005E6526:
    ecx = edx + (-0x1); /* 0x005E6526: lea ecx, [edx - 1] */
    eax = ebx + (-0x1); /* 0x005E6529: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005E652C: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005E652F: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x005E6532: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E6571; /* 0x005E6534: jae 0x5e6571 */
L_005E6536:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x005E6536: add ebx, ebx */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x005E6538: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005E653A: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005E653C: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005E653F: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E654C; /* 0x005E6544: jbe 0x5e654c */
L_005E6546:
    ebx = edi + 0x100020; /* 0x005E6546: lea ebx, [edi + 0x100020] */
L_005E654C:
    eax = ebx + 0x7; /* 0x005E654C: lea eax, [ebx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E654F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E654F: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005E6552: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E6571; /* 0x005E6557: jbe 0x5e6571 */
L_005E6559:
    PUSH32(esp, eax); /* 0x005E6559: push eax */
    ecx = ebp + (-0x13C); /* 0x005E655A: lea ecx, [ebp - 0x13c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E6560: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x144)); /* 0x005E6565: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E656B: mov edx, dword ptr [ebp - 0x148] */
L_005E6571:
    /* cmp ebx, edx */ /* 0x005E6571: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x7; /* 0x005E6573: lea eax, [edi + 7] */
    if (CMP_A(_flag_a, _flag_b)) { edx = ebx; } /* 0x005E6576: cmova edx, ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E6579: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E6579: shr eax, 3 */
    MEM32(ebp + (-0x148)) = edx; /* 0x005E657C: mov dword ptr [ebp - 0x148], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x13C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x13C)); /* 0x005E6582: add eax, dword ptr [ebp - 0x13c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x005E6588: add edi, 0x20 */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x1AC)); /* 0x005E658B: mov ebx, dword ptr [ebp - 0x1ac] */
    MEM32(ebp + (-0x144)) = edi; /* 0x005E6591: mov dword ptr [ebp - 0x144], edi */
    MEM32(eax) = ebx; /* 0x005E6597: mov dword ptr [eax], ebx */
    goto L_005E65BC; /* 0x005E6599: jmp 0x5e65bc */
L_005E659B:
    PUSH32(esp, ecx); /* 0x005E659B: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E659C: push 0x20 */
    eax = ebp + (-0x1A8); /* 0x005E659E: lea eax, [ebp - 0x1a8] */
    PUSH32(esp, eax); /* 0x005E65A4: push eax */
    ecx = ebp + (-0x150); /* 0x005E65A5: lea ecx, [ebp - 0x150] */
    RECOMP_CALL(sub_005F5800); /* 0x005E65AB: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x144)); /* 0x005E65B0: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E65B6: mov edx, dword ptr [ebp - 0x148] */
L_005E65BC:
    /* test ebx, ebx */ /* 0x005E65BC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6696; /* 0x005E65BE: je 0x5e6696 */
L_005E65C4:
    ecx = MEM32(ebp + (-0x19C)); /* 0x005E65C4: mov ecx, dword ptr [ebp - 0x19c] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005E65CA: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E65D8; /* 0x005E65CE: jb 0x5e65d8 */
L_005E65D0:
    ecx = MEM32(ecx); /* 0x005E65D0: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x19C)) = ecx; /* 0x005E65D2: mov dword ptr [ebp - 0x19c], ecx */
L_005E65D8:
    /* test MEM8(ebp + (-0x144)), 7 */ /* 0x005E65D8: test byte ptr [ebp - 0x144], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x144))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx * 8; /* 0x005E65DF: lea eax, [ebx*8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6688; /* 0x005E65E6: jne 0x5e6688 */
L_005E65EC:
    MEM32(ebp + (-0x1A4)) = eax; /* 0x005E65EC: mov dword ptr [ebp - 0x1a4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005E65F2: add eax, edi */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x005E65F4: mov ebx, eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E6655; /* 0x005E65F6: je 0x5e6655 */
L_005E65F8:
    ecx = edx + (-0x1); /* 0x005E65F8: lea ecx, [edx - 1] */
    eax = ebx + (-0x1); /* 0x005E65FB: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005E65FE: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005E6601: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x005E6604: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E664F; /* 0x005E6606: jae 0x5e664f */
L_005E6608:
    ecx = MEM32(ebp + (-0x1A4)); /* 0x005E6608: mov ecx, dword ptr [ebp - 0x1a4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005E660E: add ecx, edi */
    _flag_k = FK_ADD;
    ebx = ecx + ecx; /* 0x005E6610: lea ebx, [ecx + ecx] */
    eax = ebx; /* 0x005E6613: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005E6615: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1A4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1A4)); /* 0x005E6617: sub eax, dword ptr [ebp - 0x1a4] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005E661D: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E662A; /* 0x005E6622: jbe 0x5e662a */
L_005E6624:
    ebx = ecx + 0x100000; /* 0x005E6624: lea ebx, [ecx + 0x100000] */
L_005E662A:
    eax = ebx + 0x7; /* 0x005E662A: lea eax, [ebx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E662D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E662D: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005E6630: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E664F; /* 0x005E6635: jbe 0x5e664f */
L_005E6637:
    PUSH32(esp, eax); /* 0x005E6637: push eax */
    ecx = ebp + (-0x13C); /* 0x005E6638: lea ecx, [ebp - 0x13c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E663E: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x144)); /* 0x005E6643: mov edi, dword ptr [ebp - 0x144] */
    edx = MEM32(ebp + (-0x148)); /* 0x005E6649: mov edx, dword ptr [ebp - 0x148] */
L_005E664F:
    ecx = MEM32(ebp + (-0x19C)); /* 0x005E664F: mov ecx, dword ptr [ebp - 0x19c] */
L_005E6655:
    /* cmp ebx, edx */ /* 0x005E6655: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x7; /* 0x005E6657: lea eax, [edi + 7] */
    if (CMP_A(_flag_a, _flag_b)) { edx = ebx; } /* 0x005E665A: cmova edx, ebx */
    ebx = MEM32(ebp + (-0x1AC)); /* 0x005E665D: mov ebx, dword ptr [ebp - 0x1ac] */
    PUSH32(esp, ebx); /* 0x005E6663: push ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E6664: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E6664: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x13C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x13C)); /* 0x005E6667: add eax, dword ptr [ebp - 0x13c] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x005E666D: push ecx */
    PUSH32(esp, eax); /* 0x005E666E: push eax */
    MEM32(ebp + (-0x148)) = edx; /* 0x005E666F: mov dword ptr [ebp - 0x148], edx */
    RECOMP_CALL(sub_00780838); /* 0x005E6675: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = edi + ebx * 8; /* 0x005E667A: lea eax, [edi + ebx*8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E667D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x144)) = eax; /* 0x005E6680: mov dword ptr [ebp - 0x144], eax */
    goto L_005E6696; /* 0x005E6686: jmp 0x5e6696 */
L_005E6688:
    PUSH32(esp, ecx); /* 0x005E6688: push ecx */
    PUSH32(esp, eax); /* 0x005E6689: push eax */
    PUSH32(esp, ecx); /* 0x005E668A: push ecx */
    ecx = ebp + (-0x150); /* 0x005E668B: lea ecx, [ebp - 0x150] */
    RECOMP_CALL(sub_005F5800); /* 0x005E6691: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E6696:
    edi = MEM32(ebp + (-0x1A0)); /* 0x005E6696: mov edi, dword ptr [ebp - 0x1a0] */
    eax = ebp + (-0x150); /* 0x005E669C: lea eax, [ebp - 0x150] */
    PUSH32(esp, eax); /* 0x005E66A2: push eax */
    ecx = edi + 0xBC; /* 0x005E66A3: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E66A9: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005E66AE: push esi */
    eax = ebp + (-0x1B0); /* 0x005E66AF: lea eax, [ebp - 0x1b0] */
    PUSH32(esp, eax); /* 0x005E66B5: push eax */
    ecx = edi + 0xA4; /* 0x005E66B6: lea ecx, [edi + 0xa4] */
    RECOMP_CALL(sub_005EB5D0); /* 0x005E66BC: call 0x5eb5d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x005E66C1: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E66C3: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x13C)); /* 0x005E66CA: mov eax, dword ptr [ebp - 0x13c] */
    /* test eax, eax */ /* 0x005E66D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6372; /* 0x005E66D2: je 0x5e6372 */
L_005E66D8:
    PUSH32(esp, eax); /* 0x005E66D8: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E66D9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E66DF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x13C)) = 0; /* 0x005E66E2: mov dword ptr [ebp - 0x13c], 0 */
    MEM32(ebp + (-0x138)) = 0; /* 0x005E66EC: mov dword ptr [ebp - 0x138], 0 */
    MEM32(ebp + (-0x134)) = 0; /* 0x005E66F6: mov dword ptr [ebp - 0x134], 0 */
    RECOMP_BACKEDGE();
    goto L_005E6372; /* 0x005E6700: jmp 0x5e6372 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E6710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E6710u);

L_005E6710:
    PUSH32(esp, ebp); /* 0x005E6710: push ebp */
    ebp = esp; /* 0x005E6711: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E6713: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E6716: push -1 */
    PUSH32(esp, 0x007B1140u); /* 0x005E6718: push 0x7b1140 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E671D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E6723: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x005E6724: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E6727: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E672C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x60) = eax; /* 0x005E672E: mov dword ptr [esp + 0x60], eax */
    PUSH32(esp, ebx); /* 0x005E6732: push ebx */
    PUSH32(esp, esi); /* 0x005E6733: push esi */
    PUSH32(esp, edi); /* 0x005E6734: push edi */
    eax = MEM32(0x855000); /* 0x005E6735: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E673A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E673C: push eax */
    eax = esp + 0x78; /* 0x005E673D: lea eax, [esp + 0x78] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E6741: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E6747: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005E6749: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x005E674C: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x005E674E: mov ecx, dword ptr [edi + 4] */
    /* cmp MEM32(esi + 0x38), eax */ /* 0x005E6751: cmp dword ptr [esi + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E68EF; /* 0x005E6754: jne 0x5e68ef */
L_005E675A:
    /* cmp MEM32(esi + 0x3C), ecx */ /* 0x005E675A: cmp dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E68EF; /* 0x005E675D: jne 0x5e68ef */
L_005E6763:
    eax = MEM32(edi + 0x8); /* 0x005E6763: mov eax, dword ptr [edi + 8] */
    ecx = esp + 0x18; /* 0x005E6766: lea ecx, [esp + 0x18] */
    MEM32(esp + 0x18) = eax; /* 0x005E676A: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(edi + 0xC); /* 0x005E676E: mov eax, dword ptr [edi + 0xc] */
    MEM32(esp + 0x1C) = eax; /* 0x005E6771: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(esi); /* 0x005E6775: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005E6777: push ecx */
    ecx = esi; /* 0x005E6778: mov ecx, esi */
    eax = MEM32(eax + 0x30); /* 0x005E677A: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E677D: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005E677F: mov bl, al */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x005E6781: mov byte ptr [esp + 0x14], bl */
    /* cmp LO8(ebx), 0x10u */ /* 0x005E6785: cmp bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E68D8; /* 0x005E6788: je 0x5e68d8 */
L_005E678E:
    ecx = esp + 0x20; /* 0x005E678E: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6792: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0; /* 0x005E6797: mov dword ptr [esp + 0x80], 0 */
    ecx = esp + 0x20; /* 0x005E67A2: lea ecx, [esp + 0x20] */
    PUSH32(esp, 0x1FBu); /* 0x005E67A6: push 0x1fb */
    RECOMP_CALL(sub_005F5560); /* 0x005E67AB: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x005E67B0: push dword ptr [edi + 0xc] */
    ecx = esp + 0x24; /* 0x005E67B3: lea ecx, [esp + 0x24] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x005E67B7: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E67BA: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x20; /* 0x005E67BF: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005E67C3: push eax */
    ecx = esi + 0xBC; /* 0x005E67C4: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E67CA: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007F6564u); /* 0x005E67CF: push 0x7f6564 */
    ecx = esp + 0x44; /* 0x005E67D4: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_00409FA0); /* 0x005E67D8: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x80) = (uint8_t)(1); /* 0x005E67DD: mov byte ptr [esp + 0x80], 1 */
    ecx = esp + 0x40; /* 0x005E67E5: lea ecx, [esp + 0x40] */
    eax = MEM32(esi); /* 0x005E67E9: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005E67EB: push ecx */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x005E67EC: push dword ptr [esp + 0x18] */
    ecx = esp + 0x60; /* 0x005E67F0: lea ecx, [esp + 0x60] */
    PUSH32(esp, ecx); /* 0x005E67F4: push ecx */
    ecx = esi; /* 0x005E67F5: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x005E67F7: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = eax; /* 0x005E67FA: mov dword ptr [esp + 0x14], eax */
    MEM8(esp + 0x80) = (uint8_t)(2); /* 0x005E67FE: mov byte ptr [esp + 0x80], 2 */
    esi = MEM32(esi + 0xAC); /* 0x005E6806: mov esi, dword ptr [esi + 0xac] */
    edi = MEM32(0x7CC694); /* 0x005E680C: mov edi, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x50u; /* 0x005E6812: add esi, 0x50 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO8(ebx); /* 0x005E6815: movzx ecx, bl */
    edx = (uint32_t)((int32_t)ecx * (int32_t)0x70u); /* 0x005E6818: imul edx, ecx, 0x70 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005E681B: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E681D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E684B; /* 0x005E681F: je 0x5e684b */
L_005E6821:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E6821: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6832; /* 0x005E6825: jb 0x5e6832 */
L_005E6827:
    PUSH32(esp, MEM32(esi)); /* 0x005E6827: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005E6829: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x005E682B: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E682F: add esp, 4 */
    _flag_k = FK_ADD;
L_005E6832:
    MEM32(esi + 0x14) = 0xFu; /* 0x005E6832: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x005E6839: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x005E683B: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005E6842: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x005E6843: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E6846: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E684B:
    MEM8(esp + 0x80) = (uint8_t)(1); /* 0x005E684B: mov byte ptr [esp + 0x80], 1 */
    /* cmp MEM32(esp + 0x6C), 0x10u */ /* 0x005E6853: cmp dword ptr [esp + 0x6c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6863; /* 0x005E6858: jb 0x5e6863 */
L_005E685A:
    PUSH32(esp, MEM32(esp + 0x58)); /* 0x005E685A: push dword ptr [esp + 0x58] */
    RECOMP_ICALL(edi); /* 0x005E685E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E6860: add esp, 4 */
    _flag_k = FK_ADD;
L_005E6863:
    MEM32(esp + 0x6C) = 0xFu; /* 0x005E6863: mov dword ptr [esp + 0x6c], 0xf */
    MEM32(esp + 0x68) = 0; /* 0x005E686B: mov dword ptr [esp + 0x68], 0 */
    MEM8(esp + 0x58) = (uint8_t)(0); /* 0x005E6873: mov byte ptr [esp + 0x58], 0 */
    MEM8(esp + 0x80) = (uint8_t)(0); /* 0x005E6878: mov byte ptr [esp + 0x80], 0 */
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x005E6880: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E6890; /* 0x005E6885: jb 0x5e6890 */
L_005E6887:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x005E6887: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(edi); /* 0x005E688B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E688D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E6890:
    MEM32(esp + 0x54) = 0xFu; /* 0x005E6890: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x005E6898: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x005E68A0: mov byte ptr [esp + 0x40], 0 */
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005E68A5: mov dword ptr [esp + 0x80], 0xffffffff */
    eax = MEM32(esp + 0x34); /* 0x005E68B0: mov eax, dword ptr [esp + 0x34] */
    /* test eax, eax */ /* 0x005E68B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E68EF; /* 0x005E68B6: je 0x5e68ef */
L_005E68B8:
    PUSH32(esp, eax); /* 0x005E68B8: push eax */
    RECOMP_ICALL(edi); /* 0x005E68B9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E68BB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x34) = 0; /* 0x005E68BE: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005E68C6: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x005E68CE: mov dword ptr [esp + 0x3c], 0 */
    goto L_005E68EF; /* 0x005E68D6: jmp 0x5e68ef */
L_005E68D8:
    eax = MEM32(edi + 0x8); /* 0x005E68D8: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(edi + 0xC); /* 0x005E68DB: mov ecx, dword ptr [edi + 0xc] */
    /* cmp MEM32(esi + 0x38), eax */ /* 0x005E68DE: cmp dword ptr [esi + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E68EF; /* 0x005E68E1: jne 0x5e68ef */
L_005E68E3:
    /* cmp MEM32(esi + 0x3C), ecx */ /* 0x005E68E3: cmp dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E68EF; /* 0x005E68E6: jne 0x5e68ef */
L_005E68E8:
    ecx = esi; /* 0x005E68E8: mov ecx, esi */
    RECOMP_CALL(sub_005E5B80); /* 0x005E68EA: call 0x5e5b80 */
    RECOMP_FLAGS_IN();
L_005E68EF:
    ecx = MEM32(esp + 0x78); /* 0x005E68EF: mov ecx, dword ptr [esp + 0x78] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E68F3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E68FA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E68FB: pop edi */
    esi = POP32_VAL(esp); /* 0x005E68FC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E68FD: pop ebx */
    ecx = MEM32(esp + 0x60); /* 0x005E68FE: mov ecx, dword ptr [esp + 0x60] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E6902: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E6904: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E6909: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E690B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E690C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E6910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E6910u);

L_005E6910:
    PUSH32(esp, ebp); /* 0x005E6910: push ebp */
    ebp = esp; /* 0x005E6911: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E6913: push -1 */
    PUSH32(esp, 0x007B1180u); /* 0x005E6915: push 0x7b1180 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E691A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E6920: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005E6921: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E6924: push ebx */
    PUSH32(esp, esi); /* 0x005E6925: push esi */
    PUSH32(esp, edi); /* 0x005E6926: push edi */
    eax = MEM32(0x855000); /* 0x005E6927: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E692C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E692E: push eax */
    eax = ebp + (-0xC); /* 0x005E692F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E6932: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E6938: mov esi, ecx */
    eax = MEM32(esi); /* 0x005E693A: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x005E693C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005E693F: push edi */
    eax = MEM32(eax + 0x30); /* 0x005E6940: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E6943: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005E6945: mov bl, al */
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(ebx)); /* 0x005E6947: mov byte ptr [ebp - 0x18], bl */
    /* cmp LO8(ebx), 0x10u */ /* 0x005E694A: cmp bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6AEF; /* 0x005E694D: je 0x5e6aef */
L_005E6953:
    ecx = ebp + (-0x38); /* 0x005E6953: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6956: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E695B: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x2C)), 7 */ /* 0x005E6962: test byte ptr [ebp - 0x2c], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0x8) = 0x20Cu; /* 0x005E6966: mov dword ptr [ebp + 8], 0x20c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6991; /* 0x005E696D: jne 0x5e6991 */
L_005E696F:
    PUSH32(esp, 0x20u); /* 0x005E696F: push 0x20 */
    ecx = ebp + (-0x38); /* 0x005E6971: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E6974: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x005E6979: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E697C: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E697F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E697F: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x005E6982: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x20Cu; /* 0x005E6985: mov dword ptr [eax], 0x20c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x20u; /* 0x005E698B: add dword ptr [ebp - 0x2c], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E69A0; /* 0x005E698F: jmp 0x5e69a0 */
L_005E6991:
    PUSH32(esp, ecx); /* 0x005E6991: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E6992: push 0x20 */
    eax = ebp + 0x8; /* 0x005E6994: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005E6997: push eax */
    ecx = ebp + (-0x38); /* 0x005E6998: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F5800); /* 0x005E699B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E69A0:
    eax = (uint32_t)LO8(ebx); /* 0x005E69A0: movzx eax, bl */
    ecx = ebp + (-0x38); /* 0x005E69A3: lea ecx, [ebp - 0x38] */
    ebx = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E69A6: imul ebx, eax, 0x70 */
    eax = MEM32(esi + 0xAC); /* 0x005E69A9: mov eax, dword ptr [esi + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E69AF: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E69B1: push eax */
    RECOMP_CALL(sub_005F4D80); /* 0x005E69B2: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x2C)), 7 */ /* 0x005E69B7: test byte ptr [ebp - 0x2c], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi + 0xAC); /* 0x005E69BB: mov eax, dword ptr [esi + 0xac] */
    eax = MEM32(eax + ebx + 0x6C); /* 0x005E69C1: mov eax, dword ptr [eax + ebx + 0x6c] */
    MEM32(ebp + 0x8) = eax; /* 0x005E69C5: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E69C8: mov dword ptr [ebp - 0x14], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E69EE; /* 0x005E69CB: jne 0x5e69ee */
L_005E69CD:
    PUSH32(esp, 0x20u); /* 0x005E69CD: push 0x20 */
    ecx = ebp + (-0x38); /* 0x005E69CF: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E69D2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x005E69D7: mov eax, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + 0x8); /* 0x005E69DA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E69DD: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E69E0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E69E0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x005E69E3: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x005E69E6: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x20u; /* 0x005E69E8: add dword ptr [ebp - 0x2c], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E69FD; /* 0x005E69EC: jmp 0x5e69fd */
L_005E69EE:
    PUSH32(esp, ecx); /* 0x005E69EE: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E69EF: push 0x20 */
    eax = ebp + (-0x14); /* 0x005E69F1: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E69F4: push eax */
    ecx = ebp + (-0x38); /* 0x005E69F5: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F5800); /* 0x005E69F8: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E69FD:
    eax = MEM32(esi + 0xAC); /* 0x005E69FD: mov eax, dword ptr [esi + 0xac] */
    ecx = ebp + (-0x38); /* 0x005E6A03: lea ecx, [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x005E6A06: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E6A09: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E6A0B: push eax */
    RECOMP_CALL(sub_005F56D0); /* 0x005E6A0C: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xAC); /* 0x005E6A11: mov eax, dword ptr [esi + 0xac] */
    ecx = ebp + (-0x38); /* 0x005E6A17: lea ecx, [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005E6A1A: add eax, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E6A1D: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E6A1F: push eax */
    RECOMP_CALL(sub_005F56D0); /* 0x005E6A20: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x38); /* 0x005E6A25: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x005E6A28: push eax */
    ecx = esi + 0xBC; /* 0x005E6A29: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6A2F: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xAC); /* 0x005E6A34: mov eax, dword ptr [esi + 0xac] */
    ecx = MEM32(esi + 0x18); /* 0x005E6A3A: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E6A3D: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E6A3F: push eax */
    RECOMP_CALL(sub_005F6A00); /* 0x005E6A40: call 0x5f6a00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xAC); /* 0x005E6A45: mov eax, dword ptr [esi + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E6A4B: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(esi + 0x1C); /* 0x005E6A4D: mov ebx, dword ptr [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x005E6A50: push eax */
    eax = ebp + 0x8; /* 0x005E6A51: lea eax, [ebp + 8] */
    ecx = ebx; /* 0x005E6A54: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E6A56: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E6A57: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005E6A5C: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebx) */ /* 0x005E6A5F: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6A6F; /* 0x005E6A61: je 0x5e6a6f */
L_005E6A63:
    PUSH32(esp, eax); /* 0x005E6A63: push eax */
    eax = ebp + 0x8; /* 0x005E6A64: lea eax, [ebp + 8] */
    ecx = ebx; /* 0x005E6A67: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E6A69: push eax */
    RECOMP_CALL(sub_005EBBE0); /* 0x005E6A6A: call 0x5ebbe0 */
    RECOMP_FLAGS_IN();
L_005E6A6F:
    eax = MEM32(esi); /* 0x005E6A6F: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E6A71: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x005E6A73: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005E6A76: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(edi) */ /* 0x005E6A78: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6AAA; /* 0x005E6A7A: jne 0x5e6aaa */
L_005E6A7C:
    eax = MEM32(eax + 0x4); /* 0x005E6A7C: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x005E6A7F: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6AAA; /* 0x005E6A82: jne 0x5e6aaa */
L_005E6A84:
    PUSH32(esp, 1); /* 0x005E6A84: push 1 */
    ecx = esi; /* 0x005E6A86: mov ecx, esi */
    RECOMP_CALL(sub_005E4970); /* 0x005E6A88: call 0x5e4970 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E6A8D: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E6A8F: mov ecx, esi */
    eax = MEM32(eax + 0x1C); /* 0x005E6A91: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E6A94: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E6A96: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6AAA; /* 0x005E6A98: je 0x5e6aaa */
L_005E6A9A:
    SET_LO8(eax, MEM8(esi + 0xD)); /* 0x005E6A9A: mov al, byte ptr [esi + 0xd] */
    /* test LO8(eax), LO8(eax) */ /* 0x005E6A9D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6AAA; /* 0x005E6A9F: je 0x5e6aaa */
L_005E6AA1:
    PUSH32(esp, 0); /* 0x005E6AA1: push 0 */
    ecx = esi; /* 0x005E6AA3: mov ecx, esi */
    RECOMP_CALL(sub_005E9900); /* 0x005E6AA5: call 0x5e9900 */
    RECOMP_FLAGS_IN();
L_005E6AAA:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005E6AAA: push dword ptr [ebp - 0x18] */
    ecx = esi; /* 0x005E6AAD: mov ecx, esi */
    RECOMP_CALL(sub_005E81E0); /* 0x005E6AAF: call 0x5e81e0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005E6AB4: mov ecx, esi */
    RECOMP_CALL(sub_005E5350); /* 0x005E6AB6: call 0x5e5350 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005E6ABB: mov ecx, esi */
    RECOMP_CALL(sub_005E51F0); /* 0x005E6ABD: call 0x5e51f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E6AC2: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x24)); /* 0x005E6AC9: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x005E6ACC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6AEF; /* 0x005E6ACE: je 0x5e6aef */
L_005E6AD0:
    PUSH32(esp, eax); /* 0x005E6AD0: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E6AD1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E6AD7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005E6ADA: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005E6AE1: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E6AE8: mov dword ptr [ebp - 0x1c], 0 */
L_005E6AEF:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E6AEF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E6AF2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E6AF9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E6AFA: pop edi */
    esi = POP32_VAL(esp); /* 0x005E6AFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E6AFC: pop ebx */
    esp = ebp; /* 0x005E6AFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E6AFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E6B00: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E6B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E6B10u);

L_005E6B10:
    PUSH32(esp, ebp); /* 0x005E6B10: push ebp */
    ebp = esp; /* 0x005E6B11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E6B13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E6B16: push -1 */
    PUSH32(esp, 0x007B11F8u); /* 0x005E6B18: push 0x7b11f8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E6B1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E6B23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x170u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x170u; /* 0x005E6B24: sub esp, 0x170 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E6B2A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E6B2F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x168) = eax; /* 0x005E6B31: mov dword ptr [esp + 0x168], eax */
    PUSH32(esp, ebx); /* 0x005E6B38: push ebx */
    PUSH32(esp, esi); /* 0x005E6B39: push esi */
    PUSH32(esp, edi); /* 0x005E6B3A: push edi */
    eax = MEM32(0x855000); /* 0x005E6B3B: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E6B40: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E6B42: push eax */
    eax = esp + 0x180; /* 0x005E6B43: lea eax, [esp + 0x180] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E6B4A: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E6B50: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005E6B52: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x005E6B55: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebx + 0x4); /* 0x005E6B57: mov ecx, dword ptr [ebx + 4] */
    /* cmp MEM32(edi + 0x38), eax */ /* 0x005E6B5A: cmp dword ptr [edi + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E7022; /* 0x005E6B5D: jne 0x5e7022 */
L_005E6B63:
    /* cmp MEM32(edi + 0x3C), ecx */ /* 0x005E6B63: cmp dword ptr [edi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E7022; /* 0x005E6B66: jne 0x5e7022 */
L_005E6B6C:
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0xFF0FFFFFu; /* 0x005E6B6C: and dword ptr [esp + 0x28], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0x2B) = (uint8_t)(0); /* 0x005E6B74: mov byte ptr [esp + 0x2b], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0xFFF00000u; /* 0x005E6B79: and dword ptr [esp + 0x28], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = 0; /* 0x005E6B81: mov dword ptr [esp + 0x24], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E6B89: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E6B8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6B97; /* 0x005E6B91: jne 0x5e6b97 */
L_005E6B93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E6B93: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E6BB1; /* 0x005E6B95: jmp 0x5e6bb1 */
L_005E6B97:
    ecx = MEM32(0x927AF8); /* 0x005E6B97: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E6B9D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6BB1; /* 0x005E6B9F: jne 0x5e6bb1 */
L_005E6BA1:
    ecx = 0x00927AE8u; /* 0x005E6BA1: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E6BA6: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E6BAB: mov ecx, dword ptr [0x927af8] */
L_005E6BB1:
    eax = MEM32(ecx); /* 0x005E6BB1: mov eax, dword ptr [ecx] */
    edx = esp + 0xA4; /* 0x005E6BB3: lea edx, [esp + 0xa4] */
    PUSH32(esp, 0); /* 0x005E6BBA: push 0 */
    PUSH32(esp, 0xC8u); /* 0x005E6BBC: push 0xc8 */
    PUSH32(esp, edx); /* 0x005E6BC1: push edx */
    edx = esp + 0x30; /* 0x005E6BC2: lea edx, [esp + 0x30] */
    PUSH32(esp, edx); /* 0x005E6BC6: push edx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x005E6BC7: push dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E6BCA: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E6BCD: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x005E6BD0: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x4C; /* 0x005E6BD3: lea ecx, [esp + 0x4c] */
    esi = eax; /* 0x005E6BD7: mov esi, eax */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6BD9: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x188) = 0; /* 0x005E6BDE: mov dword ptr [esp + 0x188], 0 */
    /* test esi, esi */ /* 0x005E6BE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6BFF; /* 0x005E6BEB: je 0x5e6bff */
L_005E6BED:
    PUSH32(esp, esi); /* 0x005E6BED: push esi */
    eax = esp + 0xA8; /* 0x005E6BEE: lea eax, [esp + 0xa8] */
    PUSH32(esp, eax); /* 0x005E6BF5: push eax */
    ecx = esp + 0x54; /* 0x005E6BF6: lea ecx, [esp + 0x54] */
    RECOMP_CALL(sub_005F5730); /* 0x005E6BFA: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005E6BFF:
    eax = esp + 0x1C; /* 0x005E6BFF: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005E6C03: push eax */
    ecx = esp + 0x50; /* 0x005E6C04: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5260); /* 0x005E6C08: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x005E6C0D: mov eax, dword ptr [esp + 0x1c] */
    /* cmp eax, 0x1FEu */ /* 0x005E6C11: cmp eax, 0x1fe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005E6DD5; /* 0x005E6C16: ja 0x5e6dd5 */
L_005E6C1C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6D13; /* 0x005E6C1C: je 0x5e6d13 */
L_005E6C22:
    /* cmp eax, 9 */ /* 0x005E6C22: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6C68; /* 0x005E6C25: je 0x5e6c68 */
L_005E6C27:
    /* cmp eax, 0x190u */ /* 0x005E6C27: cmp eax, 0x190 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x190u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6C2C: jne 0x5e6fed */
L_005E6C32:
    eax = esp + 0x14; /* 0x005E6C32: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E6C36: push eax */
    ecx = esp + 0x50; /* 0x005E6C37: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5340); /* 0x005E6C3B: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x005E6C40: mov eax, dword ptr [esp + 0x14] */
    ecx = edi; /* 0x005E6C44: mov ecx, edi */
    MEM32(esp + 0x1C) = eax; /* 0x005E6C46: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(esp + 0x18); /* 0x005E6C4A: mov eax, dword ptr [esp + 0x18] */
    MEM32(esp + 0x20) = eax; /* 0x005E6C4E: mov dword ptr [esp + 0x20], eax */
    RECOMP_CALL(sub_005E92B0); /* 0x005E6C52: call 0x5e92b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1C; /* 0x005E6C57: lea eax, [esp + 0x1c] */
    ecx = edi; /* 0x005E6C5B: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E6C5D: push eax */
    RECOMP_CALL(sub_005E5AB0); /* 0x005E6C5E: call 0x5e5ab0 */
    RECOMP_FLAGS_IN();
    goto L_005E6FED; /* 0x005E6C63: jmp 0x5e6fed */
L_005E6C68:
    eax = MEM32(edi); /* 0x005E6C68: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E6C6A: mov ecx, edi */
    eax = MEM32(eax + 0x1C); /* 0x005E6C6C: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E6C6F: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E6C71: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6C73: jne 0x5e6fed */
L_005E6C79:
    esi = edi + 0xD; /* 0x005E6C79: lea esi, [edi + 0xd] */
    PUSH32(esp, esi); /* 0x005E6C7C: push esi */
    ecx = esp + 0x50; /* 0x005E6C7D: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5060); /* 0x005E6C81: call 0x5f5060 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x84; /* 0x005E6C86: lea ecx, [esp + 0x84] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6C8D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(4); /* 0x005E6C92: mov byte ptr [esp + 0x188], 4 */
    ecx = esp + 0x84; /* 0x005E6C9A: lea ecx, [esp + 0x84] */
    /* cmp MEM8(esi), 0 */ /* 0x005E6CA1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6CE0; /* 0x005E6CA4: jne 0x5e6ce0 */
L_005E6CA6:
    PUSH32(esp, 0xAu); /* 0x005E6CA6: push 0xa */
    RECOMP_CALL(sub_005F5560); /* 0x005E6CA8: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x84; /* 0x005E6CAD: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6CB4: push eax */
    ecx = edi + 0xBC; /* 0x005E6CB5: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6CBB: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005E6CC0: mov ecx, edi */
    RECOMP_CALL(sub_005E9380); /* 0x005E6CC2: call 0x5e9380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(0); /* 0x005E6CC7: mov byte ptr [esp + 0x188], 0 */
    ecx = esp + 0x84; /* 0x005E6CCF: lea ecx, [esp + 0x84] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E6CD6: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    goto L_005E6FED; /* 0x005E6CDB: jmp 0x5e6fed */
L_005E6CE0:
    PUSH32(esp, 9); /* 0x005E6CE0: push 9 */
    RECOMP_CALL(sub_005F5560); /* 0x005E6CE2: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x84; /* 0x005E6CE7: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6CEE: push eax */
    ecx = edi + 0xBC; /* 0x005E6CEF: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6CF5: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(0); /* 0x005E6CFA: mov byte ptr [esp + 0x188], 0 */
    ecx = esp + 0x84; /* 0x005E6D02: lea ecx, [esp + 0x84] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E6D09: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    goto L_005E6FED; /* 0x005E6D0E: jmp 0x5e6fed */
L_005E6D13:
    /* cmp esi, 0xC9u */ /* 0x005E6D13: cmp esi, 0xc9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E6DD0; /* 0x005E6D19: jae 0x5e6dd0 */
L_005E6D1F:
    MEM32(esp + 0x94) = 0; /* 0x005E6D1F: mov dword ptr [esp + 0x94], 0 */
    MEM32(esp + 0x98) = 0; /* 0x005E6D2A: mov dword ptr [esp + 0x98], 0 */
    MEM8(esp + esi + 0xA4) = (uint8_t)(0); /* 0x005E6D35: mov byte ptr [esp + esi + 0xa4], 0 */
    MEM32(esp + 0x98) = 0xFu; /* 0x005E6D3D: mov dword ptr [esp + 0x98], 0xf */
    MEM32(esp + 0x94) = 0; /* 0x005E6D48: mov dword ptr [esp + 0x94], 0 */
    MEM8(esp + 0x84) = (uint8_t)(0); /* 0x005E6D53: mov byte ptr [esp + 0x84], 0 */
    MEM8(esp + 0x188) = (uint8_t)(1); /* 0x005E6D5B: mov byte ptr [esp + 0x188], 1 */
    eax = esp + 0x84; /* 0x005E6D63: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6D6A: push eax */
    ecx = esp + 0x50; /* 0x005E6D6B: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5420); /* 0x005E6D6F: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x2C; /* 0x005E6D74: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6D78: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(2); /* 0x005E6D7D: mov byte ptr [esp + 0x188], 2 */
    ecx = esp + 0x2C; /* 0x005E6D85: lea ecx, [esp + 0x2c] */
    PUSH32(esp, 0x1FEu); /* 0x005E6D89: push 0x1fe */
    RECOMP_CALL(sub_005F5560); /* 0x005E6D8E: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x005E6D93: push dword ptr [ebx + 0xc] */
    ecx = esp + 0x30; /* 0x005E6D96: lea ecx, [esp + 0x30] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x005E6D9A: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E6D9D: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x84; /* 0x005E6DA2: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6DA9: push eax */
    ecx = esp + 0x30; /* 0x005E6DAA: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F56D0); /* 0x005E6DAE: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x2C; /* 0x005E6DB3: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E6DB7: push eax */
    ecx = edi + 0xBC; /* 0x005E6DB8: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6DBE: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(1); /* 0x005E6DC3: mov byte ptr [esp + 0x188], 1 */
    goto L_005E6FD0; /* 0x005E6DCB: jmp 0x5e6fd0 */
L_005E6DD0:
    RECOMP_CALL(sub_0077F8A2); /* 0x005E6DD0: call 0x77f8a2 */
    RECOMP_FLAGS_IN();
L_005E6DD5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1FFu; /* 0x005E6DD5: sub eax, 0x1ff */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005E6F00; /* 0x005E6DDA: je 0x5e6f00 */
L_005E6DE0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x005E6DE0: sub eax, 0xd */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6DE3: jne 0x5e6fed */
L_005E6DE9:
    eax = esp + 0x1C; /* 0x005E6DE9: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005E6DED: push eax */
    ecx = esp + 0x50; /* 0x005E6DEE: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5260); /* 0x005E6DF2: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFF0FFFFFu; /* 0x005E6DF7: and dword ptr [esp + 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x6C; /* 0x005E6DFF: lea eax, [esp + 0x6c] */
    MEM8(esp + 0x1B) = (uint8_t)(0); /* 0x005E6E03: mov byte ptr [esp + 0x1b], 0 */
    ecx = esp + 0x4C; /* 0x005E6E08: lea ecx, [esp + 0x4c] */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFFF00000u; /* 0x005E6E0C: and dword ptr [esp + 0x18], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E6E14: push eax */
    MEM32(esp + 0x18) = 0; /* 0x005E6E15: mov dword ptr [esp + 0x18], 0 */
    RECOMP_CALL(sub_005F5340); /* 0x005E6E1D: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x6C); /* 0x005E6E22: mov eax, dword ptr [esp + 0x6c] */
    ecx = esp + 0x14; /* 0x005E6E26: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x14) = eax; /* 0x005E6E2A: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(esp + 0x70); /* 0x005E6E2E: mov eax, dword ptr [esp + 0x70] */
    MEM32(esp + 0x18) = eax; /* 0x005E6E32: mov dword ptr [esp + 0x18], eax */
    RECOMP_CALL(sub_0046D220); /* 0x005E6E36: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E6E3B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6E3D: je 0x5e6fed */
L_005E6E43:
    eax = MEM32(edi); /* 0x005E6E43: mov eax, dword ptr [edi] */
    ecx = esp + 0x14; /* 0x005E6E45: lea ecx, [esp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E6E49: push ecx */
    ecx = edi; /* 0x005E6E4A: mov ecx, edi */
    eax = MEM32(eax + 0x30); /* 0x005E6E4C: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E6E4F: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E6E51: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6E6E; /* 0x005E6E53: jne 0x5e6e6e */
L_005E6E55:
    MEM32(esp + 0x188) = 0xFFFFFFFFu; /* 0x005E6E55: mov dword ptr [esp + 0x188], 0xffffffff */
    ecx = esp + 0x4C; /* 0x005E6E60: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E6E64: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    goto L_005E7022; /* 0x005E6E69: jmp 0x5e7022 */
L_005E6E6E:
    esi = MEM32(esp + 0x1C); /* 0x005E6E6E: mov esi, dword ptr [esp + 0x1c] */
    eax = (uint32_t)LO8(eax); /* 0x005E6E72: movzx eax, al */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E6E75: imul ecx, eax, 0x70 */
    eax = MEM32(edi + 0xAC); /* 0x005E6E78: mov eax, dword ptr [edi + 0xac] */
    MEM32(ecx + eax + 0x6C) = esi; /* 0x005E6E7E: mov dword ptr [ecx + eax + 0x6c], esi */
    RECOMP_CALL(sub_00431EA0); /* 0x005E6E82: call 0x431ea0 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x74; /* 0x005E6E87: lea ecx, [esp + 0x74] */
    PUSH32(esp, ecx); /* 0x005E6E8B: push ecx */
    ecx = eax; /* 0x005E6E8C: mov ecx, eax */
    edx = MEM32(eax); /* 0x005E6E8E: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005E6E90: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E6E93: push eax */
    ecx = esp + 0x18; /* 0x005E6E94: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_004364C0); /* 0x005E6E98: call 0x4364c0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E6E9D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E6EB2; /* 0x005E6E9F: je 0x5e6eb2 */
L_005E6EA1:
    eax = esp + 0x14; /* 0x005E6EA1: lea eax, [esp + 0x14] */
    ecx = edi; /* 0x005E6EA5: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E6EA7: push eax */
    RECOMP_CALL(sub_005E6910); /* 0x005E6EA8: call 0x5e6910 */
    RECOMP_FLAGS_IN();
    goto L_005E6FED; /* 0x005E6EAD: jmp 0x5e6fed */
L_005E6EB2:
    /* cmp esi, 2 */ /* 0x005E6EB2: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6EB5: jne 0x5e6fed */
L_005E6EBB:
    ecx = esp + 0x2C; /* 0x005E6EBB: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6EBF: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(3); /* 0x005E6EC4: mov byte ptr [esp + 0x188], 3 */
    ecx = esp + 0x2C; /* 0x005E6ECC: lea ecx, [esp + 0x2c] */
    PUSH32(esp, 0x209u); /* 0x005E6ED0: push 0x209 */
    RECOMP_CALL(sub_005F5560); /* 0x005E6ED5: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x2C; /* 0x005E6EDA: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E6EDE: push eax */
    ecx = edi + 0xBC; /* 0x005E6EDF: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6EE5: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(0); /* 0x005E6EEA: mov byte ptr [esp + 0x188], 0 */
    ecx = esp + 0x2C; /* 0x005E6EF2: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E6EF6: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    goto L_005E6FED; /* 0x005E6EFB: jmp 0x5e6fed */
L_005E6F00:
    eax = MEM32(ebx + 0xC); /* 0x005E6F00: mov eax, dword ptr [ebx + 0xc] */
    esi = MEM32(ebx + 0x8); /* 0x005E6F03: mov esi, dword ptr [ebx + 8] */
    MEM32(esp + 0x1C) = eax; /* 0x005E6F06: mov dword ptr [esp + 0x1c], eax */
    RECOMP_CALL(sub_00431EA0); /* 0x005E6F0A: call 0x431ea0 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x7C; /* 0x005E6F0F: lea ecx, [esp + 0x7c] */
    PUSH32(esp, ecx); /* 0x005E6F13: push ecx */
    ecx = eax; /* 0x005E6F14: mov ecx, eax */
    edx = MEM32(eax); /* 0x005E6F16: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005E6F18: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), esi */ /* 0x005E6F1B: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E6F2C; /* 0x005E6F1D: jne 0x5e6f2c */
L_005E6F1F:
    ecx = MEM32(esp + 0x1C); /* 0x005E6F1F: mov ecx, dword ptr [esp + 0x1c] */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x005E6F23: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E6FED; /* 0x005E6F26: je 0x5e6fed */
L_005E6F2C:
    MEM32(esp + 0x94) = 0; /* 0x005E6F2C: mov dword ptr [esp + 0x94], 0 */
    MEM32(esp + 0x98) = 0; /* 0x005E6F37: mov dword ptr [esp + 0x98], 0 */
    MEM32(esp + 0x98) = 0xFu; /* 0x005E6F42: mov dword ptr [esp + 0x98], 0xf */
    MEM32(esp + 0x94) = 0; /* 0x005E6F4D: mov dword ptr [esp + 0x94], 0 */
    MEM8(esp + 0x84) = (uint8_t)(0); /* 0x005E6F58: mov byte ptr [esp + 0x84], 0 */
    MEM8(esp + 0x188) = (uint8_t)(5); /* 0x005E6F60: mov byte ptr [esp + 0x188], 5 */
    eax = esp + 0x84; /* 0x005E6F68: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6F6F: push eax */
    ecx = esp + 0x50; /* 0x005E6F70: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F5420); /* 0x005E6F74: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x2C; /* 0x005E6F79: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E6F7D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(6); /* 0x005E6F82: mov byte ptr [esp + 0x188], 6 */
    ecx = esp + 0x2C; /* 0x005E6F8A: lea ecx, [esp + 0x2c] */
    PUSH32(esp, 0x1FFu); /* 0x005E6F8E: push 0x1ff */
    RECOMP_CALL(sub_005F5560); /* 0x005E6F93: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x005E6F98: push dword ptr [ebx + 0xc] */
    ecx = esp + 0x30; /* 0x005E6F9B: lea ecx, [esp + 0x30] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x005E6F9F: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E6FA2: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x84; /* 0x005E6FA7: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x005E6FAE: push eax */
    ecx = esp + 0x30; /* 0x005E6FAF: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F56D0); /* 0x005E6FB3: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x2C; /* 0x005E6FB8: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E6FBC: push eax */
    ecx = edi + 0xBC; /* 0x005E6FBD: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E6FC3: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(5); /* 0x005E6FC8: mov byte ptr [esp + 0x188], 5 */
L_005E6FD0:
    ecx = esp + 0x2C; /* 0x005E6FD0: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E6FD4: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x188) = (uint8_t)(0); /* 0x005E6FD9: mov byte ptr [esp + 0x188], 0 */
    ecx = esp + 0x84; /* 0x005E6FE1: lea ecx, [esp + 0x84] */
    RECOMP_CALL(sub_0040A000); /* 0x005E6FE8: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_005E6FED:
    MEM32(esp + 0x188) = 0xFFFFFFFFu; /* 0x005E6FED: mov dword ptr [esp + 0x188], 0xffffffff */
    eax = MEM32(esp + 0x60); /* 0x005E6FF8: mov eax, dword ptr [esp + 0x60] */
    /* test eax, eax */ /* 0x005E6FFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7022; /* 0x005E6FFE: je 0x5e7022 */
L_005E7000:
    PUSH32(esp, eax); /* 0x005E7000: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E7001: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7007: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x60) = 0; /* 0x005E700A: mov dword ptr [esp + 0x60], 0 */
    MEM32(esp + 0x64) = 0; /* 0x005E7012: mov dword ptr [esp + 0x64], 0 */
    MEM32(esp + 0x68) = 0; /* 0x005E701A: mov dword ptr [esp + 0x68], 0 */
L_005E7022:
    ecx = MEM32(esp + 0x180); /* 0x005E7022: mov ecx, dword ptr [esp + 0x180] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7029: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E7030: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E7031: pop edi */
    esi = POP32_VAL(esp); /* 0x005E7032: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E7033: pop ebx */
    ecx = MEM32(esp + 0x168); /* 0x005E7034: mov ecx, dword ptr [esp + 0x168] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E703B: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E703D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E7042: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E7044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E7045: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E7050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E7050u);

L_005E7050:
    PUSH32(esp, ebp); /* 0x005E7050: push ebp */
    ebp = esp; /* 0x005E7051: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E7053: push -1 */
    PUSH32(esp, 0x007B1250u); /* 0x005E7055: push 0x7b1250 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E705A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E7060: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x005E7061: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E7064: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E7069: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E706B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005E706E: push ebx */
    PUSH32(esp, esi); /* 0x005E706F: push esi */
    PUSH32(esp, edi); /* 0x005E7070: push edi */
    PUSH32(esp, eax); /* 0x005E7071: push eax */
    eax = ebp + (-0xC); /* 0x005E7072: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E7075: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E707B: mov ebx, ecx */
    MEM32(ebp + (-0x58)) = ebx; /* 0x005E707D: mov dword ptr [ebp - 0x58], ebx */
    eax = MEM32(ebp + 0x8); /* 0x005E7080: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x005E7083: lea ecx, [ebp - 0x2c] */
    eax = (uint32_t)LO8(eax); /* 0x005E7086: movzx eax, al */
    esi = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E7089: imul esi, eax, 0x70 */
    eax = MEM32(ebx + 0xAC); /* 0x005E708C: mov eax, dword ptr [ebx + 0xac] */
    MEM32(ebp + (-0x50)) = esi; /* 0x005E7092: mov dword ptr [ebp - 0x50], esi */
    PUSH32(esp, MEM32(eax + esi + 0x4)); /* 0x005E7095: push dword ptr [eax + esi + 4] */
    PUSH32(esp, MEM32(eax + esi)); /* 0x005E7099: push dword ptr [eax + esi] */
    RECOMP_CALL(sub_0051C670); /* 0x005E709C: call 0x51c670 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E70A1: mov dword ptr [ebp - 4], 0 */
    edx = 0x00865DD8u; /* 0x005E70A8: mov edx, 0x865dd8 */
    PUSH32(esp, eax); /* 0x005E70AD: push eax */
    ecx = ebp + (-0x44); /* 0x005E70AE: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0045F5C0); /* 0x005E70B1: call 0x45f5c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E70B6: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E70B9: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E70BD: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E70CF; /* 0x005E70C1: jb 0x5e70cf */
L_005E70C3:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E70C3: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E70C6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E70CC: add esp, 4 */
    _flag_k = FK_ADD;
L_005E70CF:
    eax = MEM32(ebx + 0xAC); /* 0x005E70CF: mov eax, dword ptr [ebx + 0xac] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E70D5: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E70DC: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E70E3: mov byte ptr [ebp - 0x2c], 0 */
    /* cmp MEM16(esi + eax + 0x68), 0xFFFFFFFFu */ /* 0x005E70E7: cmp word ptr [esi + eax + 0x68], -1 */
    _flag_a = (uint32_t)(MEM16(esi + eax + 0x68)) << 16; _flag_b = (uint32_t)(0xFFFFFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E710C; /* 0x005E70ED: je 0x5e710c */
L_005E70EF:
    ecx = MEM32(0x870260); /* 0x005E70EF: mov ecx, dword ptr [0x870260] */
    eax = ebp + (-0x44); /* 0x005E70F5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x005E70F8: push eax */
    RECOMP_CALL(sub_0060B140); /* 0x005E70F9: call 0x60b140 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xAC); /* 0x005E70FE: mov eax, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x005E7104: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + eax + 0x68) = (uint16_t)(LO16(ecx)); /* 0x005E7107: mov word ptr [esi + eax + 0x68], cx */
L_005E710C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E710C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = esi; /* 0x005E710E: mov dword ptr [ebp - 0x5c], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E7111: mov byte ptr [ebp - 4], 3 */
    edi = MEM32(0x7CC9AC); /* 0x005E7115: mov edi, dword ptr [0x7cc9ac] */
    MEM32(ebp + (-0x54)) = esi; /* 0x005E711B: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x4C)) = esi; /* 0x005E711E: mov dword ptr [ebp - 0x4c], esi */
    RECOMP_ICALL(edi); /* 0x005E7121: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7123: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E712B; /* 0x005E7125: jne 0x5e712b */
L_005E7127:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7127: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7145; /* 0x005E7129: jmp 0x5e7145 */
L_005E712B:
    ecx = MEM32(0x927AF0); /* 0x005E712B: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E7131: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7145; /* 0x005E7133: jne 0x5e7145 */
L_005E7135:
    ecx = 0x00927AE8u; /* 0x005E7135: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E713A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E713F: mov ecx, dword ptr [0x927af0] */
L_005E7145:
    eax = MEM32(ebx + 0xAC); /* 0x005E7145: mov eax, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x50)); /* 0x005E714B: add eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x005E714E: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E7150: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005E7153: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x8C)); /* 0x005E7155: call dword ptr [edx + 0x8c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x005E715B: mov dword ptr [ebp - 0x48], eax */
    /* test eax, eax */ /* 0x005E715E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7256; /* 0x005E7160: je 0x5e7256 */
L_005E7166:
    RECOMP_ICALL(edi); /* 0x005E7166: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7168: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7170; /* 0x005E716A: jne 0x5e7170 */
L_005E716C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E716C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E718A; /* 0x005E716E: jmp 0x5e718a */
L_005E7170:
    ecx = MEM32(0x927AF4); /* 0x005E7170: mov ecx, dword ptr [0x927af4] */
    /* test ecx, ecx */ /* 0x005E7176: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E718A; /* 0x005E7178: jne 0x5e718a */
L_005E717A:
    ecx = 0x00927AE8u; /* 0x005E717A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E717F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF4); /* 0x005E7184: mov ecx, dword ptr [0x927af4] */
L_005E718A:
    eax = MEM32(ecx); /* 0x005E718A: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4C); /* 0x005E718C: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x005E718F: push edx */
    edx = ebp + (-0x54); /* 0x005E7190: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x005E7193: push edx */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x005E7194: push dword ptr [ebp - 0x48] */
    eax = MEM32(eax + 0x14); /* 0x005E7197: mov eax, dword ptr [eax + 0x14] */
    RECOMP_ICALL(eax); /* 0x005E719A: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E719C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7256; /* 0x005E719E: je 0x5e7256 */
L_005E71A4:
    ebx = MEM32(ebp + (-0x4C)); /* 0x005E71A4: mov ebx, dword ptr [ebp - 0x4c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x54))); /* 0x005E71A7: imul ebx, dword ptr [ebp - 0x54] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x005E71AB: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x005E71AB: shl ebx, 2 */
    PUSH32(esp, ebx); /* 0x005E71AE: push ebx */
    RECOMP_CALL(sub_0077F3DF); /* 0x005E71AF: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E71B4: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005E71B7: mov esi, eax */
    MEM32(ebp + (-0x5C)) = esi; /* 0x005E71B9: mov dword ptr [ebp - 0x5c], esi */
    RECOMP_ICALL(edi); /* 0x005E71BC: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E71BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E71C6; /* 0x005E71C0: jne 0x5e71c6 */
L_005E71C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E71C2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E71E0; /* 0x005E71C4: jmp 0x5e71e0 */
L_005E71C6:
    ecx = MEM32(0x927AF4); /* 0x005E71C6: mov ecx, dword ptr [0x927af4] */
    /* test ecx, ecx */ /* 0x005E71CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E71E0; /* 0x005E71CE: jne 0x5e71e0 */
L_005E71D0:
    ecx = 0x00927AE8u; /* 0x005E71D0: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E71D5: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF4); /* 0x005E71DA: mov ecx, dword ptr [0x927af4] */
L_005E71E0:
    eax = MEM32(ecx); /* 0x005E71E0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x005E71E2: push ebx */
    PUSH32(esp, esi); /* 0x005E71E3: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x005E71E4: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005E71E7: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x005E71EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7253; /* 0x005E71EC: je 0x5e7253 */
L_005E71EE:
    /* test ebx, ebx */ /* 0x005E71EE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005E7221; /* 0x005E71F0: jle 0x5e7221 */
L_005E71F2:
    eax = ebx + (-0x1); /* 0x005E71F2: lea eax, [ebx - 1] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005E71F5: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x005E71F5: shr eax, 2 */
    edi = esi + 0x1; /* 0x005E71F8: lea edi, [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005E71FB: inc eax */
    _flag_k = FK_INC;
    esi = eax; /* 0x005E71FC: mov esi, eax */
    edi = edi; /* 0x005E71FE: mov edi, edi */
L_005E7200:
    SET_LO8(edx, MEM8(edi + 0x1)); /* 0x005E7200: mov dl, byte ptr [edi + 1] */
    edi = edi + 0x4; /* 0x005E7203: lea edi, [edi + 4] */
    SET_LO8(ebx, MEM8(edi + (-0x4))); /* 0x005E7206: mov bl, byte ptr [edi - 4] */
    SET_LO8(ecx, MEM8(edi + (-0x5))); /* 0x005E7209: mov cl, byte ptr [edi - 5] */
    SET_LO8(eax, MEM8(edi + (-0x2))); /* 0x005E720C: mov al, byte ptr [edi - 2] */
    MEM8(edi + (-0x5)) = (uint8_t)(LO8(edx)); /* 0x005E720F: mov byte ptr [edi - 5], dl */
    MEM8(edi + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005E7212: mov byte ptr [edi - 4], bl */
    MEM8(edi + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x005E7215: mov byte ptr [edi - 3], cl */
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x005E7218: mov byte ptr [edi - 2], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x005E721B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005E7200; /* 0x005E721C: jne 0x5e7200 */
L_005E721E:
    esi = MEM32(ebp + (-0x5C)); /* 0x005E721E: mov esi, dword ptr [ebp - 0x5c] */
L_005E7221:
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E7221: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x44); /* 0x005E7225: lea eax, [ebp - 0x44] */
    edi = MEM32(ebp + (-0x58)); /* 0x005E7228: mov edi, dword ptr [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x44)); } /* 0x005E722B: cmovae eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x005E722F: push 0 */
    PUSH32(esp, esi); /* 0x005E7231: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x005E7232: push dword ptr [ebp - 0x4c] */
    edi = MEM32(edi + 0xAC); /* 0x005E7235: mov edi, dword ptr [edi + 0xac] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x005E723B: push dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x50)); /* 0x005E723E: add edi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E7241: push eax */
    RECOMP_CALL(sub_00608EA0); /* 0x005E7242: call 0x608ea0 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x68) = (uint16_t)(LO16(eax)); /* 0x005E7247: mov word ptr [edi + 0x68], ax */
    edi = MEM32(0x7CC694); /* 0x005E724B: mov edi, dword ptr [0x7cc694] */
    goto L_005E72D0; /* 0x005E7251: jmp 0x5e72d0 */
L_005E7253:
    ebx = MEM32(ebp + (-0x58)); /* 0x005E7253: mov ebx, dword ptr [ebp - 0x58] */
L_005E7256:
    PUSH32(esp, 0x15u); /* 0x005E7256: push 0x15 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E7258: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x005E725F: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E7262: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007ECF58u); /* 0x005E7269: push 0x7ecf58 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E726E: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E7275: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E727C: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E7280: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E7285: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x44); /* 0x005E7289: lea eax, [ebp - 0x44] */
    edi = MEM32(ebx + 0xAC); /* 0x005E728C: mov edi, dword ptr [ebx + 0xac] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x005E7292: xorps xmm3, xmm3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x50)); /* 0x005E7295: add edi, dword ptr [ebp - 0x50] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E7298: push eax */
    eax = ebp + (-0x2C); /* 0x005E7299: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005E729C: push eax */
    RECOMP_CALL(sub_00609760); /* 0x005E729D: call 0x609760 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x68) = (uint16_t)(LO16(eax)); /* 0x005E72A2: mov word ptr [edi + 0x68], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E72A6: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E72AA: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005E72AE: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E72BE; /* 0x005E72B4: jb 0x5e72be */
L_005E72B6:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E72B6: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(edi); /* 0x005E72B9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E72BB: add esp, 4 */
    _flag_k = FK_ADD;
L_005E72BE:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E72BE: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E72C5: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E72CC: mov byte ptr [ebp - 0x2c], 0 */
L_005E72D0:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E72D0: mov byte ptr [ebp - 4], 2 */
    /* test esi, esi */ /* 0x005E72D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E72E2; /* 0x005E72D6: je 0x5e72e2 */
L_005E72D8:
    PUSH32(esp, esi); /* 0x005E72D8: push esi */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x005E72D9: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E72DF: add esp, 4 */
    _flag_k = FK_ADD;
L_005E72E2:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E72E2: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E72E9: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E72F7; /* 0x005E72ED: jb 0x5e72f7 */
L_005E72EF:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005E72EF: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(edi); /* 0x005E72F2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E72F4: add esp, 4 */
    _flag_k = FK_ADD;
L_005E72F7:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005E72F7: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005E72FE: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005E7305: mov byte ptr [ebp - 0x44], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E7309: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E730C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E7313: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E7314: pop edi */
    esi = POP32_VAL(esp); /* 0x005E7315: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E7316: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005E7317: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E731A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E731C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E7321: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E7323: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E7324: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E7330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E7330u);

L_005E7330:
    PUSH32(esp, ebp); /* 0x005E7330: push ebp */
    ebp = esp; /* 0x005E7331: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E7333: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E7336: push -1 */
    PUSH32(esp, 0x007B1298u); /* 0x005E7338: push 0x7b1298 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E733D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E7343: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x005E7344: sub esp, 0x70 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E7347: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E734C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x68) = eax; /* 0x005E734E: mov dword ptr [esp + 0x68], eax */
    PUSH32(esp, ebx); /* 0x005E7352: push ebx */
    PUSH32(esp, esi); /* 0x005E7353: push esi */
    PUSH32(esp, edi); /* 0x005E7354: push edi */
    eax = MEM32(0x855000); /* 0x005E7355: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E735A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E735C: push eax */
    eax = esp + 0x80; /* 0x005E735D: lea eax, [esp + 0x80] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E7364: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E736A: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005E736C: mov edi, dword ptr [ebp + 8] */
    /* test MEM32(edi + 0x8), 0x200u */ /* 0x005E736F: test dword ptr [edi + 8], 0x200 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E737D; /* 0x005E7376: je 0x5e737d */
L_005E7378:
    RECOMP_CALL(sub_005E4B30); /* 0x005E7378: call 0x5e4b30 */
    RECOMP_FLAGS_IN();
L_005E737D:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E737D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7383: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E738B; /* 0x005E7385: jne 0x5e738b */
L_005E7387:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E7387: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E73A5; /* 0x005E7389: jmp 0x5e73a5 */
L_005E738B:
    ebx = MEM32(0x927AF0); /* 0x005E738B: mov ebx, dword ptr [0x927af0] */
    /* test ebx, ebx */ /* 0x005E7391: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E73A5; /* 0x005E7393: jne 0x5e73a5 */
L_005E7395:
    ecx = 0x00927AE8u; /* 0x005E7395: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E739A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927AF0); /* 0x005E739F: mov ebx, dword ptr [0x927af0] */
L_005E73A5:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E73A5: push dword ptr [esi + 0x3c] */
    ecx = MEM32(edi); /* 0x005E73A8: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E73AA: push dword ptr [esi + 0x38] */
    edx = MEM32(edi + 0x4); /* 0x005E73AD: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E73B0: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = esp; /* 0x005E73B3: mov eax, esp */
    MEM32(eax) = ecx; /* 0x005E73B5: mov dword ptr [eax], ecx */
    ecx = ebx; /* 0x005E73B7: mov ecx, ebx */
    MEM32(eax + 0x4) = edx; /* 0x005E73B9: mov dword ptr [eax + 4], edx */
    eax = MEM32(ebx); /* 0x005E73BC: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x68); /* 0x005E73BE: mov eax, dword ptr [eax + 0x68] */
    RECOMP_ICALL(eax); /* 0x005E73C1: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E73C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7591; /* 0x005E73C5: je 0x5e7591 */
L_005E73CB:
    eax = MEM32(edi); /* 0x005E73CB: mov eax, dword ptr [edi] */
    ecx = esp + 0x20; /* 0x005E73CD: lea ecx, [esp + 0x20] */
    MEM32(esp + 0x20) = eax; /* 0x005E73D1: mov dword ptr [esp + 0x20], eax */
    eax = MEM32(edi + 0x4); /* 0x005E73D5: mov eax, dword ptr [edi + 4] */
    MEM32(esp + 0x24) = eax; /* 0x005E73D8: mov dword ptr [esp + 0x24], eax */
    eax = MEM32(esi); /* 0x005E73DC: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005E73DE: push ecx */
    ecx = esi; /* 0x005E73DF: mov ecx, esi */
    eax = MEM32(eax + 0x30); /* 0x005E73E1: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E73E4: call eax */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x14) = (uint8_t)(LO8(eax)); /* 0x005E73E6: mov byte ptr [esp + 0x14], al */
    /* cmp LO8(eax), 0x10u */ /* 0x005E73EA: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E7591; /* 0x005E73EC: je 0x5e7591 */
L_005E73F2:
    ecx = MEM32(edi + 0x8); /* 0x005E73F2: mov ecx, dword ptr [edi + 8] */
    /* test LO8(ecx), 1 */ /* 0x005E73F5: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7581; /* 0x005E73F8: je 0x5e7581 */
L_005E73FE:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E73FE: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7404: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E740C; /* 0x005E7406: jne 0x5e740c */
L_005E7408:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E7408: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7426; /* 0x005E740A: jmp 0x5e7426 */
L_005E740C:
    ebx = MEM32(0x927AF0); /* 0x005E740C: mov ebx, dword ptr [0x927af0] */
    /* test ebx, ebx */ /* 0x005E7412: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7426; /* 0x005E7414: jne 0x5e7426 */
L_005E7416:
    ecx = 0x00927AE8u; /* 0x005E7416: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E741B: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927AF0); /* 0x005E7420: mov ebx, dword ptr [0x927af0] */
L_005E7426:
    ecx = MEM32(edi); /* 0x005E7426: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E7428: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(edi + 0x4); /* 0x005E742B: mov edx, dword ptr [edi + 4] */
    eax = esp; /* 0x005E742E: mov eax, esp */
    MEM32(eax) = ecx; /* 0x005E7430: mov dword ptr [eax], ecx */
    ecx = ebx; /* 0x005E7432: mov ecx, ebx */
    MEM32(eax + 0x4) = edx; /* 0x005E7434: mov dword ptr [eax + 4], edx */
    eax = MEM32(ebx); /* 0x005E7437: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005E7439: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E743C: mov edx, eax */
    ecx = esp + 0x48; /* 0x005E743E: lea ecx, [esp + 0x48] */
    RECOMP_CALL(sub_00541450); /* 0x005E7442: call 0x541450 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x88) = 0; /* 0x005E7447: mov dword ptr [esp + 0x88], 0 */
    eax = (uint32_t)MEM8(esp + 0x14); /* 0x005E7452: movzx eax, byte ptr [esp + 0x14] */
    ebx = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E7457: imul ebx, eax, 0x70 */
    eax = MEM32(esi + 0xAC); /* 0x005E745A: mov eax, dword ptr [esi + 0xac] */
    ecx = ebx + 0x8; /* 0x005E7460: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005E7463: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x005E7465: add eax, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E7468: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x005E746A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E747A; /* 0x005E746C: je 0x5e747a */
L_005E746E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E746E: push -1 */
    PUSH32(esp, 0); /* 0x005E7470: push 0 */
    PUSH32(esp, ecx); /* 0x005E7472: push ecx */
    ecx = eax; /* 0x005E7473: mov ecx, eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E7475: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E747A:
    ecx = MEM32(esi + 0xAC); /* 0x005E747A: mov ecx, dword ptr [esi + 0xac] */
    eax = esp + 0x48; /* 0x005E7480: lea eax, [esp + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005E7484: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005E7487: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x005E7489: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E7497; /* 0x005E748B: je 0x5e7497 */
L_005E748D:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E748D: push -1 */
    PUSH32(esp, 0); /* 0x005E748F: push 0 */
    PUSH32(esp, eax); /* 0x005E7491: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E7492: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E7497:
    eax = MEM32(edi); /* 0x005E7497: mov eax, dword ptr [edi] */
    ecx = esi; /* 0x005E7499: mov ecx, esi */
    MEM32(esp + 0x18) = eax; /* 0x005E749B: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(edi + 0x4); /* 0x005E749F: mov eax, dword ptr [edi + 4] */
    MEM32(esp + 0x1C) = eax; /* 0x005E74A2: mov dword ptr [esp + 0x1c], eax */
    eax = esp + 0x18; /* 0x005E74A6: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E74AA: push eax */
    eax = esp + 0x64; /* 0x005E74AB: lea eax, [esp + 0x64] */
    PUSH32(esp, eax); /* 0x005E74AF: push eax */
    RECOMP_CALL(sub_005EAB30); /* 0x005E74B0: call 0x5eab30 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x88) = (uint8_t)(1); /* 0x005E74B5: mov byte ptr [esp + 0x88], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x005E74BD: add ebx, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0xAC); /* 0x005E74C0: mov ecx, dword ptr [esi + 0xac] */
    PUSH32(esp, eax); /* 0x005E74C6: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005E74C7: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_004196B0); /* 0x005E74C9: call 0x4196b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x88) = (uint8_t)(0); /* 0x005E74CE: mov byte ptr [esp + 0x88], 0 */
    /* cmp MEM32(esp + 0x74), 0x10u */ /* 0x005E74D6: cmp dword ptr [esp + 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x74)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005E74DB: mov ebx, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E74EC; /* 0x005E74E1: jb 0x5e74ec */
L_005E74E3:
    PUSH32(esp, MEM32(esp + 0x60)); /* 0x005E74E3: push dword ptr [esp + 0x60] */
    RECOMP_ICALL(ebx); /* 0x005E74E7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E74E9: add esp, 4 */
    _flag_k = FK_ADD;
L_005E74EC:
    ecx = esp + 0x28; /* 0x005E74EC: lea ecx, [esp + 0x28] */
    MEM32(esp + 0x74) = 0xFu; /* 0x005E74F0: mov dword ptr [esp + 0x74], 0xf */
    MEM32(esp + 0x70) = 0; /* 0x005E74F8: mov dword ptr [esp + 0x70], 0 */
    MEM8(esp + 0x60) = (uint8_t)(0); /* 0x005E7500: mov byte ptr [esp + 0x60], 0 */
    RECOMP_CALL(sub_005F3C60); /* 0x005E7505: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x88) = (uint8_t)(2); /* 0x005E750A: mov byte ptr [esp + 0x88], 2 */
    ecx = esp + 0x28; /* 0x005E7512: lea ecx, [esp + 0x28] */
    PUSH32(esp, 0x200u); /* 0x005E7516: push 0x200 */
    RECOMP_CALL(sub_005F5560); /* 0x005E751B: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005E7520: push dword ptr [edi + 4] */
    ecx = esp + 0x2C; /* 0x005E7523: lea ecx, [esp + 0x2c] */
    PUSH32(esp, MEM32(edi)); /* 0x005E7527: push dword ptr [edi] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E7529: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x28; /* 0x005E752E: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x005E7532: push eax */
    ecx = esi + 0xBC; /* 0x005E7533: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E7539: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x88) = (uint8_t)(0); /* 0x005E753E: mov byte ptr [esp + 0x88], 0 */
    ecx = esp + 0x28; /* 0x005E7546: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E754A: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x88) = 0xFFFFFFFFu; /* 0x005E754F: mov dword ptr [esp + 0x88], 0xffffffff */
    /* cmp MEM32(esp + 0x5C), 0x10u */ /* 0x005E755A: cmp dword ptr [esp + 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x5C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E756A; /* 0x005E755F: jb 0x5e756a */
L_005E7561:
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x005E7561: push dword ptr [esp + 0x48] */
    RECOMP_ICALL(ebx); /* 0x005E7565: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7567: add esp, 4 */
    _flag_k = FK_ADD;
L_005E756A:
    MEM32(esp + 0x5C) = 0xFu; /* 0x005E756A: mov dword ptr [esp + 0x5c], 0xf */
    MEM32(esp + 0x58) = 0; /* 0x005E7572: mov dword ptr [esp + 0x58], 0 */
    MEM8(esp + 0x48) = (uint8_t)(0); /* 0x005E757A: mov byte ptr [esp + 0x48], 0 */
    goto L_005E7591; /* 0x005E757F: jmp 0x5e7591 */
L_005E7581:
    /* test LO8(ecx), 0x40u */ /* 0x005E7581: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7591; /* 0x005E7584: je 0x5e7591 */
L_005E7586:
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x005E7586: push dword ptr [esp + 0x14] */
    ecx = esi; /* 0x005E758A: mov ecx, esi */
    RECOMP_CALL(sub_005E7050); /* 0x005E758C: call 0x5e7050 */
    RECOMP_FLAGS_IN();
L_005E7591:
    ecx = MEM32(esp + 0x80); /* 0x005E7591: mov ecx, dword ptr [esp + 0x80] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7598: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E759F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E75A0: pop edi */
    esi = POP32_VAL(esp); /* 0x005E75A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E75A2: pop ebx */
    ecx = MEM32(esp + 0x68); /* 0x005E75A3: mov ecx, dword ptr [esp + 0x68] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E75A7: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E75A9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E75AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E75B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E75B1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E75C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E75C0u);

L_005E75C0:
    PUSH32(esp, ebp); /* 0x005E75C0: push ebp */
    ebp = esp; /* 0x005E75C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E75C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E75C6: push -1 */
    PUSH32(esp, 0x007B0F28u); /* 0x005E75C8: push 0x7b0f28 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E75CD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E75D3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005E75D4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E75D7: push esi */
    PUSH32(esp, edi); /* 0x005E75D8: push edi */
    eax = MEM32(0x855000); /* 0x005E75D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E75DE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E75E0: push eax */
    eax = esp + 0x38; /* 0x005E75E1: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E75E5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E75EB: mov esi, ecx */
    eax = MEM32(esi); /* 0x005E75ED: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x1C); /* 0x005E75EF: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E75F2: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E75F4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E76FD; /* 0x005E75F6: je 0x5e76fd */
L_005E75FC:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E75FC: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7602: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E760A; /* 0x005E7604: jne 0x5e760a */
L_005E7606:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7606: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7624; /* 0x005E7608: jmp 0x5e7624 */
L_005E760A:
    ecx = MEM32(0x927AEC); /* 0x005E760A: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E7610: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7624; /* 0x005E7612: jne 0x5e7624 */
L_005E7614:
    ecx = 0x00927AE8u; /* 0x005E7614: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7619: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E761E: mov ecx, dword ptr [0x927aec] */
L_005E7624:
    eax = MEM32(ecx); /* 0x005E7624: mov eax, dword ptr [ecx] */
    edx = esp + 0xC; /* 0x005E7626: lea edx, [esp + 0xc] */
    PUSH32(esp, edx); /* 0x005E762A: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E762B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x005E762E: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi); /* 0x005E7631: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E7633: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E7643; /* 0x005E7635: jne 0x5e7643 */
L_005E7637:
    ecx = MEM32(edi + 0x4); /* 0x005E7637: mov ecx, dword ptr [edi + 4] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005E763A: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E76FD; /* 0x005E763D: je 0x5e76fd */
L_005E7643:
    eax = MEM32(esi); /* 0x005E7643: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E7645: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005E7647: push edi */
    eax = MEM32(eax + 0x30); /* 0x005E7648: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E764B: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E764D: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E76FD; /* 0x005E764F: je 0x5e76fd */
L_005E7655:
    eax = (uint32_t)LO8(eax); /* 0x005E7655: movzx eax, al */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E7658: imul ecx, eax, 0x70 */
    eax = MEM32(esi + 0xAC); /* 0x005E765B: mov eax, dword ptr [esi + 0xac] */
    MEM32(ecx + eax + 0x6C) = 2; /* 0x005E7661: mov dword ptr [ecx + eax + 0x6c], 2 */
    ecx = esp + 0x14; /* 0x005E7669: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E766D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005E7672: mov dword ptr [esp + 0x40], 0 */
    ecx = esp + 0x14; /* 0x005E767A: lea ecx, [esp + 0x14] */
    PUSH32(esp, 0x20Cu); /* 0x005E767E: push 0x20c */
    RECOMP_CALL(sub_005F5560); /* 0x005E7683: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x005E7688: push 2 */
    ecx = esp + 0x18; /* 0x005E768A: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F5560); /* 0x005E768E: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005E7693: push edi */
    ecx = esp + 0x18; /* 0x005E7694: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F4D80); /* 0x005E7698: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E769D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E76A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E76AB; /* 0x005E76A5: jne 0x5e76ab */
L_005E76A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E76A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E76C5; /* 0x005E76A9: jmp 0x5e76c5 */
L_005E76AB:
    ecx = MEM32(0x927AF8); /* 0x005E76AB: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E76B1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E76C5; /* 0x005E76B3: jne 0x5e76c5 */
L_005E76B5:
    ecx = 0x00927AE8u; /* 0x005E76B5: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E76BA: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E76BF: mov ecx, dword ptr [0x927af8] */
L_005E76C5:
    eax = MEM32(esp + 0x20); /* 0x005E76C5: mov eax, dword ptr [esp + 0x20] */
    edx = MEM32(ecx); /* 0x005E76C9: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E76CB: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E76CE: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E76CE: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E76D1: push eax */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x005E76D2: push dword ptr [esp + 0x2c] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E76D6: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E76D9: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E76DC: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x005E76DF: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x005E76E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E76EC; /* 0x005E76E4: je 0x5e76ec */
L_005E76E6:
    PUSH32(esp, edi); /* 0x005E76E6: push edi */
    RECOMP_CALL(sub_005F2980); /* 0x005E76E7: call 0x5f2980 */
    RECOMP_FLAGS_IN();
L_005E76EC:
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005E76EC: mov dword ptr [esp + 0x40], 0xffffffff */
    ecx = esp + 0x14; /* 0x005E76F4: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E76F8: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
L_005E76FD:
    ecx = MEM32(esp + 0x38); /* 0x005E76FD: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7701: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E7708: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E7709: pop edi */
    esi = POP32_VAL(esp); /* 0x005E770A: pop esi */
    esp = ebp; /* 0x005E770B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E770D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E770E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E7720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E7720u);

L_005E7720:
    PUSH32(esp, ebp); /* 0x005E7720: push ebp */
    ebp = esp; /* 0x005E7721: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E7723: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E7726: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005E7728: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E772D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E7733: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E7734: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E7737: push ebx */
    PUSH32(esp, esi); /* 0x005E7738: push esi */
    PUSH32(esp, edi); /* 0x005E7739: push edi */
    eax = MEM32(0x855000); /* 0x005E773A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E773F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E7741: push eax */
    eax = esp + 0x38; /* 0x005E7742: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E7746: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E774C: mov ebx, ecx */
    ecx = esp + 0x14; /* 0x005E774E: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E7752: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005E7757: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E775F: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x1FEu; /* 0x005E7764: mov dword ptr [esp + 0x10], 0x1fe */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E779A; /* 0x005E776C: jne 0x5e779a */
L_005E776E:
    PUSH32(esp, 0x20u); /* 0x005E776E: push 0x20 */
    ecx = esp + 0x18; /* 0x005E7770: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E7774: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E7779: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E777D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E7780: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E7780: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E7783: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1FEu; /* 0x005E7787: mov dword ptr [eax], 0x1fe */
    eax = MEM32(esp + 0x20); /* 0x005E778D: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005E7791: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = eax; /* 0x005E7794: mov dword ptr [esp + 0x20], eax */
    goto L_005E77AF; /* 0x005E7798: jmp 0x5e77af */
L_005E779A:
    PUSH32(esp, ecx); /* 0x005E779A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E779B: push 0x20 */
    eax = esp + 0x18; /* 0x005E779D: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E77A1: push eax */
    ecx = esp + 0x20; /* 0x005E77A2: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E77A6: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E77AB: mov eax, dword ptr [esp + 0x20] */
L_005E77AF:
    esi = MEM32(ebp + 0x8); /* 0x005E77AF: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(esi + 0x10); /* 0x005E77B2: mov edi, dword ptr [esi + 0x10] */
    MEM32(esp + 0x10) = edi; /* 0x005E77B5: mov dword ptr [esp + 0x10], edi */
    /* test LO8(eax), 7 */ /* 0x005E77B9: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E77DF; /* 0x005E77BB: jne 0x5e77df */
L_005E77BD:
    PUSH32(esp, 0x20u); /* 0x005E77BD: push 0x20 */
    ecx = esp + 0x18; /* 0x005E77BF: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E77C3: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E77C8: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E77CC: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E77CF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E77CF: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E77D2: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005E77D6: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005E77D8: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E77F0; /* 0x005E77DD: jmp 0x5e77f0 */
L_005E77DF:
    PUSH32(esp, ecx); /* 0x005E77DF: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E77E0: push 0x20 */
    eax = esp + 0x18; /* 0x005E77E2: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E77E6: push eax */
    ecx = esp + 0x20; /* 0x005E77E7: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E77EB: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E77F0:
    /* test edi, edi */ /* 0x005E77F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7807; /* 0x005E77F2: je 0x5e7807 */
L_005E77F4:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E77F4: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E77FC; /* 0x005E77F8: jb 0x5e77fc */
L_005E77FA:
    esi = MEM32(esi); /* 0x005E77FA: mov esi, dword ptr [esi] */
L_005E77FC:
    PUSH32(esp, edi); /* 0x005E77FC: push edi */
    PUSH32(esp, esi); /* 0x005E77FD: push esi */
    ecx = esp + 0x1C; /* 0x005E77FE: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F5730); /* 0x005E7802: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005E7807:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E7807: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E780D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7815; /* 0x005E780F: jne 0x5e7815 */
L_005E7811:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7811: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E782F; /* 0x005E7813: jmp 0x5e782f */
L_005E7815:
    ecx = MEM32(0x927AF8); /* 0x005E7815: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E781B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E782F; /* 0x005E781D: jne 0x5e782f */
L_005E781F:
    ecx = 0x00927AE8u; /* 0x005E781F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7824: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E7829: mov ecx, dword ptr [0x927af8] */
L_005E782F:
    eax = MEM32(esp + 0x20); /* 0x005E782F: mov eax, dword ptr [esp + 0x20] */
    edx = MEM32(ecx); /* 0x005E7833: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E7835: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E7838: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E7838: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005E783B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x005E783C: push eax */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x005E783D: push dword ptr [esp + 0x2c] */
    eax = MEM32(edx + 0x68); /* 0x005E7841: mov eax, dword ptr [edx + 0x68] */
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x005E7844: push dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebx + 0x38)); /* 0x005E7847: push dword ptr [ebx + 0x38] */
    RECOMP_ICALL(eax); /* 0x005E784A: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005E784C: mov bl, al */
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005E784E: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005E7856: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005E785A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7880; /* 0x005E785C: je 0x5e7880 */
L_005E785E:
    PUSH32(esp, eax); /* 0x005E785E: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E785F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7865: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005E7868: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005E7870: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E7878: mov dword ptr [esp + 0x30], 0 */
L_005E7880:
    SET_LO8(eax, LO8(ebx)); /* 0x005E7880: mov al, bl */
    ecx = MEM32(esp + 0x38); /* 0x005E7882: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7886: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E788D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E788E: pop edi */
    esi = POP32_VAL(esp); /* 0x005E788F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E7890: pop ebx */
    esp = ebp; /* 0x005E7891: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E7893: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E7894: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E78A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E78A0u);

    goto L_005E78A0;
L_005E2130:
    PUSH32(esp, ebp); /* 0x005E2130: push ebp */
    ebp = esp; /* 0x005E2131: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E2133: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E2136: push -1 */
    PUSH32(esp, 0x007B0400u); /* 0x005E2138: push 0x7b0400 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E213D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E2143: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x005E2144: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E214A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E214F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x78) = eax; /* 0x005E2151: mov dword ptr [esp + 0x78], eax */
    PUSH32(esp, ebx); /* 0x005E2155: push ebx */
    PUSH32(esp, esi); /* 0x005E2156: push esi */
    PUSH32(esp, edi); /* 0x005E2157: push edi */
    eax = MEM32(0x855000); /* 0x005E2158: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E215D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E215F: push eax */
    eax = esp + 0x90; /* 0x005E2160: lea eax, [esp + 0x90] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E2167: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E216D: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005E216F: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x005E2172: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0x8); /* 0x005E2175: mov esi, dword ptr [ebp + 8] */
    MEM32(esp + 0x14) = eax; /* 0x005E2178: mov dword ptr [esp + 0x14], eax */
    eax = esp + 0x18; /* 0x005E217C: lea eax, [esp + 0x18] */
    PUSH32(esp, edi); /* 0x005E2180: push edi */
    PUSH32(esp, eax); /* 0x005E2181: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E2182: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E2187: mov eax, dword ptr [ebx] */
    /* cmp MEM32(esp + 0x18), eax */ /* 0x005E2189: cmp dword ptr [esp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E22F3; /* 0x005E218D: je 0x5e22f3 */
L_005E2193:
    MEM32(esp + 0x4C) = 0; /* 0x005E2193: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0x50) = 0; /* 0x005E219B: mov dword ptr [esp + 0x50], 0 */
    MEM32(esp + 0x50) = 0xFu; /* 0x005E21A3: mov dword ptr [esp + 0x50], 0xf */
    MEM32(esp + 0x4C) = 0; /* 0x005E21AB: mov dword ptr [esp + 0x4c], 0 */
    MEM8(esp + 0x3C) = (uint8_t)(0); /* 0x005E21B3: mov byte ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x98) = 0; /* 0x005E21B8: mov dword ptr [esp + 0x98], 0 */
    MEM32(esp + 0x64) = 0; /* 0x005E21C3: mov dword ptr [esp + 0x64], 0 */
    MEM32(esp + 0x68) = 0; /* 0x005E21CB: mov dword ptr [esp + 0x68], 0 */
    MEM32(esp + 0x68) = 0xFu; /* 0x005E21D3: mov dword ptr [esp + 0x68], 0xf */
    MEM32(esp + 0x64) = 0; /* 0x005E21DB: mov dword ptr [esp + 0x64], 0 */
    MEM8(esp + 0x54) = (uint8_t)(0); /* 0x005E21E3: mov byte ptr [esp + 0x54], 0 */
    MEM32(esp + 0x98) = 2; /* 0x005E21E8: mov dword ptr [esp + 0x98], 2 */
    edx = esp + 0x3C; /* 0x005E21F3: lea edx, [esp + 0x3c] */
    ecx = esi; /* 0x005E21F7: mov ecx, esi */
    RECOMP_CALL(sub_00546800); /* 0x005E21F9: call 0x546800 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E21FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E22DF; /* 0x005E2200: je 0x5e22df */
L_005E2206:
    eax = MEM32(esp + 0x14); /* 0x005E2206: mov eax, dword ptr [esp + 0x14] */
    ecx = esp + 0x3C; /* 0x005E220A: lea ecx, [esp + 0x3c] */
    /* cmp ecx, eax */ /* 0x005E220E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E221C; /* 0x005E2210: je 0x5e221c */
L_005E2212:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E2212: push -1 */
    PUSH32(esp, 0); /* 0x005E2214: push 0 */
    PUSH32(esp, eax); /* 0x005E2216: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E2217: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E221C:
    eax = esp + 0x54; /* 0x005E221C: lea eax, [esp + 0x54] */
    /* cmp eax, esi */ /* 0x005E2220: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2230; /* 0x005E2222: je 0x5e2230 */
L_005E2224:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E2224: push -1 */
    PUSH32(esp, 0); /* 0x005E2226: push 0 */
    PUSH32(esp, esi); /* 0x005E2228: push esi */
    ecx = eax; /* 0x005E2229: mov ecx, eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E222B: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E2230:
    eax = esp + 0x3C; /* 0x005E2230: lea eax, [esp + 0x3c] */
    ecx = ebx; /* 0x005E2234: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2236: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005E2237: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x005E223A: push dword ptr [edi] */
    RECOMP_CALL(sub_005E2060); /* 0x005E223C: call 0x5e2060 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E2241: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E22DF; /* 0x005E2243: jne 0x5e22df */
L_005E2249:
    ecx = esp + 0x1C; /* 0x005E2249: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E224D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x98) = (uint8_t)(3); /* 0x005E2252: mov byte ptr [esp + 0x98], 3 */
    ecx = esp + 0x1C; /* 0x005E225A: lea ecx, [esp + 0x1c] */
    PUSH32(esp, 0x202u); /* 0x005E225E: push 0x202 */
    RECOMP_CALL(sub_005F5560); /* 0x005E2263: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x3C; /* 0x005E2268: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x005E226C: push eax */
    ecx = esp + 0x20; /* 0x005E226D: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E2271: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E2276: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E227C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2284; /* 0x005E227E: jne 0x5e2284 */
L_005E2280:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E2280: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E229E; /* 0x005E2282: jmp 0x5e229e */
L_005E2284:
    ecx = MEM32(0x927B08); /* 0x005E2284: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E228A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E229E; /* 0x005E228C: jne 0x5e229e */
L_005E228E:
    ecx = 0x00927AE8u; /* 0x005E228E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E2293: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E2298: mov ecx, dword ptr [0x927b08] */
L_005E229E:
    eax = MEM32(esp + 0x28); /* 0x005E229E: mov eax, dword ptr [esp + 0x28] */
    edx = MEM32(ecx); /* 0x005E22A2: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E22A4: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E22A7: push 0 */
    PUSH32(esp, 2); /* 0x005E22A9: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E22AB: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E22AB: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E22AE: push eax */
    PUSH32(esp, MEM32(esp + 0x3C)); /* 0x005E22AF: push dword ptr [esp + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005E22B3: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x005E22B6: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005E22B8: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x3C; /* 0x005E22BA: lea eax, [esp + 0x3c] */
    ecx = ebx; /* 0x005E22BE: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E22C0: push eax */
    PUSH32(esp, edi); /* 0x005E22C1: push edi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E22C2: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005E22C7: mov ecx, eax */
    RECOMP_CALL(sub_005EB9F0); /* 0x005E22C9: call 0x5eb9f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x98) = (uint8_t)(2); /* 0x005E22CE: mov byte ptr [esp + 0x98], 2 */
    ecx = esp + 0x1C; /* 0x005E22D6: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E22DA: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
L_005E22DF:
    MEM32(esp + 0x98) = 0xFFFFFFFFu; /* 0x005E22DF: mov dword ptr [esp + 0x98], 0xffffffff */
    ecx = esp + 0x3C; /* 0x005E22EA: lea ecx, [esp + 0x3c] */
    RECOMP_CALL(sub_00441610); /* 0x005E22EE: call 0x441610 */
    RECOMP_FLAGS_IN();
L_005E22F3:
    ecx = MEM32(esp + 0x90); /* 0x005E22F3: mov ecx, dword ptr [esp + 0x90] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E22FA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E2301: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E2302: pop edi */
    esi = POP32_VAL(esp); /* 0x005E2303: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E2304: pop ebx */
    ecx = MEM32(esp + 0x78); /* 0x005E2305: mov ecx, dword ptr [esp + 0x78] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E2309: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E230B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E2310: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2312: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E2313: ret 0xc */
L_005E78A0:
    PUSH32(esp, ebp); /* 0x005E78A0: push ebp */
    ebp = esp; /* 0x005E78A1: mov ebp, esp */
    ecx = MEM32(ecx + 0x1C); /* 0x005E78A3: mov ecx, dword ptr [ecx + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x005E78A6: pop ebp */
    RECOMP_BACKEDGE();
    goto L_005E2130; /* 0x005E78A7: jmp 0x5e2130 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E78B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E78B0u);

L_005E78B0:
    PUSH32(esp, ebp); /* 0x005E78B0: push ebp */
    ebp = esp; /* 0x005E78B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E78B3: push -1 */
    PUSH32(esp, 0x007B12EBu); /* 0x005E78B5: push 0x7b12eb */
    eax = MEM32(FS_BASE + (0)); /* 0x005E78BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E78C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD0u; /* 0x005E78C1: sub esp, 0xd0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E78C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E78CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E78CE: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005E78D1: push ebx */
    PUSH32(esp, esi); /* 0x005E78D2: push esi */
    PUSH32(esp, edi); /* 0x005E78D3: push edi */
    PUSH32(esp, eax); /* 0x005E78D4: push eax */
    eax = ebp + (-0xC); /* 0x005E78D5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E78D8: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E78DE: mov edi, ecx */
    MEM32(ebp + (-0xD8)) = edi; /* 0x005E78E0: mov dword ptr [ebp - 0xd8], edi */
    ebx = MEM32(ebp + 0x8); /* 0x005E78E6: mov ebx, dword ptr [ebp + 8] */
    ecx = ebp + (-0xCC); /* 0x005E78E9: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_005E7BB0); /* 0x005E78EF: call 0x5e7bb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E78F4: mov dword ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E78FB: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7901: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7909; /* 0x005E7903: jne 0x5e7909 */
L_005E7905:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7905: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7923; /* 0x005E7907: jmp 0x5e7923 */
L_005E7909:
    ecx = MEM32(0x927AF0); /* 0x005E7909: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E790F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7923; /* 0x005E7911: jne 0x5e7923 */
L_005E7913:
    ecx = 0x00927AE8u; /* 0x005E7913: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7918: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E791D: mov ecx, dword ptr [0x927af0] */
L_005E7923:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x005E7923: push dword ptr [ebx + 4] */
    eax = MEM32(ecx); /* 0x005E7926: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebx)); /* 0x005E7928: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005E792A: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E792D: mov edx, eax */
    ecx = ebp + (-0x5C); /* 0x005E792F: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_00541450); /* 0x005E7932: call 0x541450 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E7937: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0x5C); /* 0x005E793B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E793E: push -1 */
    PUSH32(esp, 0); /* 0x005E7940: push 0 */
    PUSH32(esp, eax); /* 0x005E7942: push eax */
    ecx = ebp + (-0xAC); /* 0x005E7943: lea ecx, [ebp - 0xac] */
    RECOMP_CALL(sub_0040A030); /* 0x005E7949: call 0x40a030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x005E794E: push ebx */
    eax = ebp + (-0x44); /* 0x005E794F: lea eax, [ebp - 0x44] */
    ecx = edi; /* 0x005E7952: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E7954: push eax */
    RECOMP_CALL(sub_005EAB30); /* 0x005E7955: call 0x5eab30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xD0)) = eax; /* 0x005E795A: mov dword ptr [ebp - 0xd0], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E7960: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0xC4); /* 0x005E7964: lea ecx, [ebp - 0xc4] */
    esi = MEM32(0x7CC694); /* 0x005E796A: mov esi, dword ptr [0x7cc694] */
    /* cmp ecx, eax */ /* 0x005E7970: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E79B5; /* 0x005E7972: je 0x5e79b5 */
L_005E7974:
    /* cmp MEM32(ebp + (-0xB0)), 0x10u */ /* 0x005E7974: cmp dword ptr [ebp - 0xb0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E798E; /* 0x005E797B: jb 0x5e798e */
L_005E797D:
    PUSH32(esp, MEM32(ebp + (-0xC4))); /* 0x005E797D: push dword ptr [ebp - 0xc4] */
    RECOMP_ICALL(esi); /* 0x005E7983: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD0)); /* 0x005E7985: mov eax, dword ptr [ebp - 0xd0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E798B: add esp, 4 */
    _flag_k = FK_ADD;
L_005E798E:
    PUSH32(esp, eax); /* 0x005E798E: push eax */
    ecx = ebp + (-0xC4); /* 0x005E798F: lea ecx, [ebp - 0xc4] */
    MEM32(ebp + (-0xB0)) = 0xFu; /* 0x005E7995: mov dword ptr [ebp - 0xb0], 0xf */
    MEM32(ebp + (-0xB4)) = 0; /* 0x005E799F: mov dword ptr [ebp - 0xb4], 0 */
    MEM8(ebp + (-0xC4)) = (uint8_t)(0); /* 0x005E79A9: mov byte ptr [ebp - 0xc4], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E79B0: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E79B5:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E79B5: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E79B9: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E79C7; /* 0x005E79BD: jb 0x5e79c7 */
L_005E79BF:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005E79BF: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x005E79C2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E79C4: add esp, 4 */
    _flag_k = FK_ADD;
L_005E79C7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E79C7: push -1 */
    PUSH32(esp, 0); /* 0x005E79C9: push 0 */
    eax = ebp + (-0xC4); /* 0x005E79CB: lea eax, [ebp - 0xc4] */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005E79D1: mov dword ptr [ebp - 0x30], 0xf */
    PUSH32(esp, eax); /* 0x005E79D8: push eax */
    ecx = ebp + (-0x94); /* 0x005E79D9: lea ecx, [ebp - 0x94] */
    MEM32(ebp + (-0x34)) = 0; /* 0x005E79DF: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005E79E6: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005E79EA: call 0x40a030 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E79EF: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0xCC); /* 0x005E79F1: lea ecx, [ebp - 0xcc] */
    MEM32(ebp + (-0xCC)) = eax; /* 0x005E79F7: mov dword ptr [ebp - 0xcc], eax */
    eax = MEM32(ebx + 0x4); /* 0x005E79FD: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0xC8)) = eax; /* 0x005E7A00: mov dword ptr [ebp - 0xc8], eax */
    eax = edi + 0xAC; /* 0x005E7A06: lea eax, [edi + 0xac] */
    PUSH32(esp, ecx); /* 0x005E7A0C: push ecx */
    ecx = eax; /* 0x005E7A0D: mov ecx, eax */
    MEM32(ebp + (-0x60)) = 1; /* 0x005E7A0F: mov dword ptr [ebp - 0x60], 1 */
    MEM32(ebp + (-0xD4)) = eax; /* 0x005E7A16: mov dword ptr [ebp - 0xd4], eax */
    RECOMP_CALL(sub_005EB8B0); /* 0x005E7A1C: call 0x5eb8b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x005E7A21: push 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E7A23: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x005E7A2A: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E7A2D: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007F6564u); /* 0x005E7A34: push 0x7f6564 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E7A39: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E7A40: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E7A47: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005E7A4B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E7A50: mov byte ptr [ebp - 4], 3 */
    eax = 0x92492493u; /* 0x005E7A54: mov eax, 0x92492493 */
    ecx = MEM32(edi + 0xB0); /* 0x005E7A59: mov ecx, dword ptr [edi + 0xb0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E7A5F: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E7A65: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E7A67: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x2C); /* 0x005E7A69: lea ecx, [ebp - 0x2c] */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E7A6C: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E7A6F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E7A71: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E7A71: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E7A74: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(edi); /* 0x005E7A76: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x005E7A78: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    PUSH32(esp, ecx); /* 0x005E7A7A: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x005E7A7B: movzx eax, al */
    ecx = edi; /* 0x005E7A7E: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E7A80: push eax */
    eax = ebp + (-0x44); /* 0x005E7A81: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x005E7A84: push eax */
    RECOMP_ICALL(MEM32(edx + 0x3C)); /* 0x005E7A85: call dword ptr [edx + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xD0)) = eax; /* 0x005E7A88: mov dword ptr [ebp - 0xd0], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E7A8E: mov byte ptr [ebp - 4], 4 */
    edi = MEM32(edi + 0xB0); /* 0x005E7A92: mov edi, dword ptr [edi + 0xb0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFE0u; /* 0x005E7A98: add edi, -0x20 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005E7A9B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E7ACB; /* 0x005E7A9D: je 0x5e7acb */
L_005E7A9F:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005E7A9F: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E7AB2; /* 0x005E7AA3: jb 0x5e7ab2 */
L_005E7AA5:
    PUSH32(esp, MEM32(edi)); /* 0x005E7AA5: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x005E7AA7: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD0)); /* 0x005E7AA9: mov eax, dword ptr [ebp - 0xd0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7AAF: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7AB2:
    MEM32(edi + 0x14) = 0xFu; /* 0x005E7AB2: mov dword ptr [edi + 0x14], 0xf */
    ecx = edi; /* 0x005E7AB9: mov ecx, edi */
    MEM32(edi + 0x10) = 0; /* 0x005E7ABB: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005E7AC2: push eax */
    MEM8(edi) = (uint8_t)(0); /* 0x005E7AC3: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E7AC6: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E7ACB:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E7ACB: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E7ACF: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E7ADD; /* 0x005E7AD3: jb 0x5e7add */
L_005E7AD5:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005E7AD5: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(esi); /* 0x005E7AD8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7ADA: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7ADD:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005E7ADD: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005E7AE4: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005E7AEB: mov byte ptr [ebp - 0x44], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E7AEF: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E7AF3: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E7B01; /* 0x005E7AF7: jb 0x5e7b01 */
L_005E7AF9:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E7AF9: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x005E7AFC: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7AFE: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7B01:
    eax = MEM32(ebp + (-0xD4)); /* 0x005E7B01: mov eax, dword ptr [ebp - 0xd4] */
    edi = MEM32(ebp + (-0xD8)); /* 0x005E7B07: mov edi, dword ptr [ebp - 0xd8] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E7B0D: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E7B14: mov dword ptr [ebp - 0x1c], 0 */
    ecx = MEM32(eax + 0x4); /* 0x005E7B1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E7B1E: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005E7B20: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E7B25: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E7B27: mov byte ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E7B2B: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005E7B2D: mov ecx, edi */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E7B2F: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E7B32: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E7B34: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E7B34: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E7B37: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x005E7B39: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    eax = (uint32_t)LO8(eax); /* 0x005E7B3B: movzx eax, al */
    PUSH32(esp, eax); /* 0x005E7B3E: push eax */
    RECOMP_CALL(sub_005E7050); /* 0x005E7B3F: call 0x5e7050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x18); /* 0x005E7B44: mov ecx, dword ptr [edi + 0x18] */
    PUSH32(esp, ebx); /* 0x005E7B47: push ebx */
    RECOMP_CALL(sub_005F6A60); /* 0x005E7B48: call 0x5f6a60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1C); /* 0x005E7B4D: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, ebx); /* 0x005E7B50: push ebx */
    RECOMP_CALL(sub_005E1B60); /* 0x005E7B51: call 0x5e1b60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E7B56: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x005E7B5A: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E7B68; /* 0x005E7B5E: jb 0x5e7b68 */
L_005E7B60:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005E7B60: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(esi); /* 0x005E7B63: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7B65: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7B68:
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005E7B68: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005E7B6F: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x005E7B76: mov byte ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E7B7A: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xCC); /* 0x005E7B81: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005E7B87: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E7B8C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7B8F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E7B96: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E7B97: pop edi */
    esi = POP32_VAL(esp); /* 0x005E7B98: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E7B99: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005E7B9A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E7B9D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E7B9F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E7BA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E7BA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E7BA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E7BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E7BB0u);

L_005E7BB0:
    PUSH32(esp, ebp); /* 0x005E7BB0: push ebp */
    ebp = esp; /* 0x005E7BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E7BB3: push -1 */
    PUSH32(esp, 0x007B134Cu); /* 0x005E7BB5: push 0x7b134c */
    eax = MEM32(FS_BASE + (0)); /* 0x005E7BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E7BC0: push eax */
    PUSH32(esp, ecx); /* 0x005E7BC1: push ecx */
    eax = MEM32(0x855000); /* 0x005E7BC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E7BC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E7BC9: push eax */
    eax = ebp + (-0xC); /* 0x005E7BCA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E7BCD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E7BD3: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0xFF0FFFFFu; /* 0x005E7BD6: and dword ptr [ecx + 4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + 0x7) = (uint16_t)(0); /* 0x005E7BDD: mov word ptr [ecx + 7], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0xFFF00000u; /* 0x005E7BE3: and dword ptr [ecx + 4], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0; /* 0x005E7BEA: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x1C) = 0xFu; /* 0x005E7BF0: mov dword ptr [ecx + 0x1c], 0xf */
    MEM32(ecx + 0x18) = 0; /* 0x005E7BF7: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E7BFE: mov dword ptr [ebp - 4], 0 */
    MEM32(ecx + 0x34) = 0xFu; /* 0x005E7C05: mov dword ptr [ecx + 0x34], 0xf */
    MEM32(ecx + 0x30) = 0; /* 0x005E7C0C: mov dword ptr [ecx + 0x30], 0 */
    MEM8(ecx + 0x20) = (uint8_t)(0); /* 0x005E7C13: mov byte ptr [ecx + 0x20], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E7C17: mov byte ptr [ebp - 4], 1 */
    MEM32(ecx + 0x4C) = 0xFu; /* 0x005E7C1B: mov dword ptr [ecx + 0x4c], 0xf */
    MEM32(ecx + 0x48) = 0; /* 0x005E7C22: mov dword ptr [ecx + 0x48], 0 */
    MEM8(ecx + 0x38) = (uint8_t)(0); /* 0x005E7C29: mov byte ptr [ecx + 0x38], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E7C2D: mov byte ptr [ebp - 4], 2 */
    MEM32(ecx + 0x64) = 0xFu; /* 0x005E7C31: mov dword ptr [ecx + 0x64], 0xf */
    MEM32(ecx + 0x60) = 0; /* 0x005E7C38: mov dword ptr [ecx + 0x60], 0 */
    MEM8(ecx + 0x50) = (uint8_t)(0); /* 0x005E7C3F: mov byte ptr [ecx + 0x50], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E7C43: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x005E7C4A: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E7C4C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E7C4F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E7C56: pop ecx */
    esp = ebp; /* 0x005E7C57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E7C59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E7C5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E7C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E7C60u);

L_005E7C60:
    PUSH32(esp, ebp); /* 0x005E7C60: push ebp */
    ebp = esp; /* 0x005E7C61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E7C63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E7C66: push -1 */
    PUSH32(esp, 0x007B1388u); /* 0x005E7C68: push 0x7b1388 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E7C6D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E7C73: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005E7C74: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E7C77: push ebx */
    PUSH32(esp, esi); /* 0x005E7C78: push esi */
    PUSH32(esp, edi); /* 0x005E7C79: push edi */
    eax = MEM32(0x855000); /* 0x005E7C7A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E7C7F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E7C81: push eax */
    eax = esp + 0x40; /* 0x005E7C82: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E7C86: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E7C8C: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005E7C8E: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x005E7C91: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(edi + 0x38) */ /* 0x005E7C93: cmp eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E7CA4; /* 0x005E7C96: jne 0x5e7ca4 */
L_005E7C98:
    eax = MEM32(esi + 0x4); /* 0x005E7C98: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(edi + 0x3C) */ /* 0x005E7C9B: cmp eax, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E811B; /* 0x005E7C9E: je 0x5e811b */
L_005E7CA4:
    ecx = esi; /* 0x005E7CA4: mov ecx, esi */
    RECOMP_CALL(sub_0046D220); /* 0x005E7CA6: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E7CAB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7CB3; /* 0x005E7CAD: je 0x5e7cb3 */
L_005E7CAF:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x005E7CAF: mov byte ptr [edi + 0xc], 1 */
L_005E7CB3:
    eax = MEM32(edi); /* 0x005E7CB3: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E7CB5: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005E7CB7: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E7CBA: mov eax, dword ptr [esi] */
    MEM32(edi + 0x38) = eax; /* 0x005E7CBC: mov dword ptr [edi + 0x38], eax */
    eax = MEM32(esi + 0x4); /* 0x005E7CBF: mov eax, dword ptr [esi + 4] */
    esi = MEM32(0x7CC9AC); /* 0x005E7CC2: mov esi, dword ptr [0x7cc9ac] */
    MEM32(edi + 0x3C) = eax; /* 0x005E7CC8: mov dword ptr [edi + 0x3c], eax */
    RECOMP_ICALL(esi); /* 0x005E7CCB: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7CCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7CD5; /* 0x005E7CCF: jne 0x5e7cd5 */
L_005E7CD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7CD1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7CEF; /* 0x005E7CD3: jmp 0x5e7cef */
L_005E7CD5:
    ecx = MEM32(0x927AF8); /* 0x005E7CD5: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E7CDB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7CEF; /* 0x005E7CDD: jne 0x5e7cef */
L_005E7CDF:
    ecx = 0x00927AE8u; /* 0x005E7CDF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7CE4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E7CE9: mov ecx, dword ptr [0x927af8] */
L_005E7CEF:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E7CEF: push dword ptr [edi + 0x3c] */
    eax = MEM32(ecx); /* 0x005E7CF2: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E7CF4: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x80)); /* 0x005E7CF7: call dword ptr [eax + 0x80] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7CFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)LO8(eax); /* 0x005E7CFF: movzx ecx, al */
    edx = 0x10u; /* 0x005E7D02: mov edx, 0x10 */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = ecx; } /* 0x005E7D07: cmovne edx, ecx */
    MEM8(edi + 0xA0) = (uint8_t)(LO8(edx)); /* 0x005E7D0A: mov byte ptr [edi + 0xa0], dl */
    RECOMP_ICALL(esi); /* 0x005E7D10: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7D12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7D1A; /* 0x005E7D14: jne 0x5e7d1a */
L_005E7D16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7D16: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7D34; /* 0x005E7D18: jmp 0x5e7d34 */
L_005E7D1A:
    ecx = MEM32(0x927AF8); /* 0x005E7D1A: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E7D20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7D34; /* 0x005E7D22: jne 0x5e7d34 */
L_005E7D24:
    ecx = 0x00927AE8u; /* 0x005E7D24: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7D29: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E7D2E: mov ecx, dword ptr [0x927af8] */
L_005E7D34:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E7D34: push dword ptr [edi + 0x3c] */
    eax = MEM32(ecx); /* 0x005E7D37: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E7D39: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x005E7D3C: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x005E7D3F: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x005E7D41: mov ecx, edi */
    SET_HI8(ebx, LO8(eax)); /* 0x005E7D43: mov bh, al */
    RECOMP_ICALL(MEM32(edx + 0xBC)); /* 0x005E7D45: call dword ptr [edx + 0xbc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E7D4B: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test HI8(ebx), HI8(ebx) */ /* 0x005E7D4D: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7DA0; /* 0x005E7D4F: je 0x5e7da0 */
L_005E7D51:
    /* cmp LO8(ebx), 0x10u */ /* 0x005E7D51: cmp bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E7DA0; /* 0x005E7D54: jae 0x5e7da0 */
L_005E7D56:
    RECOMP_ICALL(esi); /* 0x005E7D56: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E7D58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7D60; /* 0x005E7D5A: jne 0x5e7d60 */
L_005E7D5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E7D5C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E7D7A; /* 0x005E7D5E: jmp 0x5e7d7a */
L_005E7D60:
    ecx = MEM32(0x927AF8); /* 0x005E7D60: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E7D66: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7D7A; /* 0x005E7D68: jne 0x5e7d7a */
L_005E7D6A:
    ecx = 0x00927AE8u; /* 0x005E7D6A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E7D6F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E7D74: mov ecx, dword ptr [0x927af8] */
L_005E7D7A:
    edx = MEM32(ecx); /* 0x005E7D7A: mov edx, dword ptr [ecx] */
    eax = (uint32_t)LO8(ebx); /* 0x005E7D7C: movzx eax, bl */
    PUSH32(esp, eax); /* 0x005E7D7F: push eax */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E7D80: push dword ptr [edi + 0x3c] */
    eax = esp + 0x1C; /* 0x005E7D83: lea eax, [esp + 0x1c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E7D87: push dword ptr [edi + 0x38] */
    PUSH32(esp, eax); /* 0x005E7D8A: push eax */
    RECOMP_ICALL(MEM32(edx + 0x48)); /* 0x005E7D8B: call dword ptr [edx + 0x48] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x14; /* 0x005E7D8E: lea eax, [esp + 0x14] */
    ecx = edi; /* 0x005E7D92: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E7D94: push eax */
    RECOMP_CALL(sub_005E78B0); /* 0x005E7D95: call 0x5e78b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005E7D9A: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x005E7D9C: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E7D51; /* 0x005E7D9E: jb 0x5e7d51 */
L_005E7DA0:
    ecx = edi; /* 0x005E7DA0: mov ecx, edi */
    RECOMP_CALL(sub_005E51F0); /* 0x005E7DA2: call 0x5e51f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0xFF0FFFFFu; /* 0x005E7DA7: and dword ptr [esp + 0x20], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0x23) = (uint8_t)(0); /* 0x005E7DAF: mov byte ptr [esp + 0x23], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0xFFF00000u; /* 0x005E7DB4: and dword ptr [esp + 0x20], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0; /* 0x005E7DBC: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x24) = 0x800u; /* 0x005E7DC4: mov dword ptr [esp + 0x24], 0x800 */
    MEM32(esp + 0x28) = 0; /* 0x005E7DCC: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005E7DD4: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E7DDC: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005E7DE4: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005E7DEC: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x48) = 0; /* 0x005E7DF4: mov dword ptr [esp + 0x48], 0 */
    ecx = esp + 0x30; /* 0x005E7DFC: lea ecx, [esp + 0x30] */
    PUSH32(esp, 0x100u); /* 0x005E7E00: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E7E05: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 1; /* 0x005E7E0A: mov dword ptr [esp + 0x48], 1 */
    /* test MEM8(esp + 0x28), 7 */ /* 0x005E7E12: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x14) = 0x20Au; /* 0x005E7E17: mov dword ptr [esp + 0x14], 0x20a */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7E49; /* 0x005E7E1F: jne 0x5e7e49 */
L_005E7E21:
    PUSH32(esp, 0x20u); /* 0x005E7E21: push 0x20 */
    ecx = esp + 0x20; /* 0x005E7E23: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E7E27: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005E7E2C: mov ecx, dword ptr [esp + 0x28] */
    eax = ecx + 0x7; /* 0x005E7E30: lea eax, [ecx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E7E33: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E7E33: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005E7E36: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005E7E3A: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005E7E3D: mov dword ptr [esp + 0x28], ecx */
    MEM32(eax) = 0x20Au; /* 0x005E7E41: mov dword ptr [eax], 0x20a */
    goto L_005E7E5A; /* 0x005E7E47: jmp 0x5e7e5a */
L_005E7E49:
    PUSH32(esp, ecx); /* 0x005E7E49: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E7E4A: push 0x20 */
    eax = esp + 0x1C; /* 0x005E7E4C: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005E7E50: push eax */
    ecx = esp + 0x28; /* 0x005E7E51: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005E7E55: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E7E5A:
    eax = esp + 0x1C; /* 0x005E7E5A: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005E7E5E: push eax */
    ecx = edi + 0xBC; /* 0x005E7E5F: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E7E65: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005E7E6A: push 0 */
    ecx = edi; /* 0x005E7E6C: mov ecx, edi */
    RECOMP_CALL(sub_005E4970); /* 0x005E7E6E: call 0x5e4970 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E7E73: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E7E75: mov ecx, edi */
    eax = MEM32(eax + 0x1C); /* 0x005E7E77: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E7E7A: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E7E7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E7E87; /* 0x005E7E7E: jne 0x5e7e87 */
L_005E7E80:
    ecx = edi; /* 0x005E7E80: mov ecx, edi */
    RECOMP_CALL(sub_005E5B80); /* 0x005E7E82: call 0x5e5b80 */
    RECOMP_FLAGS_IN();
L_005E7E87:
    esi = MEM32(0x7CC998); /* 0x005E7E87: mov esi, dword ptr [0x7cc998] */
    ebx = edi + 0xD0; /* 0x005E7E8D: lea ebx, [edi + 0xd0] */
    eax = 0x005E4830u; /* 0x005E7E93: mov eax, 0x5e4830 */
    /* test eax, eax */ /* 0x005E7E98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7EC8; /* 0x005E7E9A: je 0x5e7ec8 */
L_005E7E9C:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7E9C: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7EA8; /* 0x005E7EA0: je 0x5e7ea8 */
L_005E7EA2:
    PUSH32(esp, ebx); /* 0x005E7EA2: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7EA3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7EA5: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7EA8:
    PUSH32(esp, 0x44Fu); /* 0x005E7EA8: push 0x44f */
    PUSH32(esp, ebx); /* 0x005E7EAD: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7EAE: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E4830u; /* 0x005E7EB1: mov dword ptr [ebx + 0x10], 0x5e4830 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7EB8: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7EBF: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7EC5: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7EC8:
    eax = 0x005E7330u; /* 0x005E7EC8: mov eax, 0x5e7330 */
    ebx = edi + 0x118; /* 0x005E7ECD: lea ebx, [edi + 0x118] */
    /* test eax, eax */ /* 0x005E7ED3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F03; /* 0x005E7ED5: je 0x5e7f03 */
L_005E7ED7:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7ED7: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7EE3; /* 0x005E7EDB: je 0x5e7ee3 */
L_005E7EDD:
    PUSH32(esp, ebx); /* 0x005E7EDD: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7EDE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7EE0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7EE3:
    PUSH32(esp, 0x130u); /* 0x005E7EE3: push 0x130 */
    PUSH32(esp, ebx); /* 0x005E7EE8: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7EE9: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E7330u; /* 0x005E7EEC: mov dword ptr [ebx + 0x10], 0x5e7330 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7EF3: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7EFA: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7F00: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7F03:
    eax = 0x005E6710u; /* 0x005E7F03: mov eax, 0x5e6710 */
    ebx = edi + 0x100; /* 0x005E7F08: lea ebx, [edi + 0x100] */
    /* test eax, eax */ /* 0x005E7F0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F3E; /* 0x005E7F10: je 0x5e7f3e */
L_005E7F12:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7F12: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F1E; /* 0x005E7F16: je 0x5e7f1e */
L_005E7F18:
    PUSH32(esp, ebx); /* 0x005E7F18: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7F19: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7F1B: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7F1E:
    PUSH32(esp, 0x1F9u); /* 0x005E7F1E: push 0x1f9 */
    PUSH32(esp, ebx); /* 0x005E7F23: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7F24: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E6710u; /* 0x005E7F27: mov dword ptr [ebx + 0x10], 0x5e6710 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7F2E: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7F35: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7F3B: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7F3E:
    eax = 0x005E5060u; /* 0x005E7F3E: mov eax, 0x5e5060 */
    ebx = edi + 0x130; /* 0x005E7F43: lea ebx, [edi + 0x130] */
    /* test eax, eax */ /* 0x005E7F49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F79; /* 0x005E7F4B: je 0x5e7f79 */
L_005E7F4D:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7F4D: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F59; /* 0x005E7F51: je 0x5e7f59 */
L_005E7F53:
    PUSH32(esp, ebx); /* 0x005E7F53: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7F54: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7F56: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7F59:
    PUSH32(esp, 0x1FAu); /* 0x005E7F59: push 0x1fa */
    PUSH32(esp, ebx); /* 0x005E7F5E: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7F5F: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E5060u; /* 0x005E7F62: mov dword ptr [ebx + 0x10], 0x5e5060 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7F69: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7F70: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7F76: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7F79:
    eax = 0x005E6B10u; /* 0x005E7F79: mov eax, 0x5e6b10 */
    ebx = edi + 0x148; /* 0x005E7F7E: lea ebx, [edi + 0x148] */
    /* test eax, eax */ /* 0x005E7F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7FB4; /* 0x005E7F86: je 0x5e7fb4 */
L_005E7F88:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7F88: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7F94; /* 0x005E7F8C: je 0x5e7f94 */
L_005E7F8E:
    PUSH32(esp, ebx); /* 0x005E7F8E: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7F8F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7F91: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7F94:
    PUSH32(esp, 0x1FBu); /* 0x005E7F94: push 0x1fb */
    PUSH32(esp, ebx); /* 0x005E7F99: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7F9A: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E6B10u; /* 0x005E7F9D: mov dword ptr [ebx + 0x10], 0x5e6b10 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7FA4: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7FAB: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7FB1: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7FB4:
    eax = 0x0040A620u; /* 0x005E7FB4: mov eax, 0x40a620 */
    ebx = edi + 0xE8; /* 0x005E7FB9: lea ebx, [edi + 0xe8] */
    /* test eax, eax */ /* 0x005E7FBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7FEF; /* 0x005E7FC1: je 0x5e7fef */
L_005E7FC3:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7FC3: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E7FCF; /* 0x005E7FC7: je 0x5e7fcf */
L_005E7FC9:
    PUSH32(esp, ebx); /* 0x005E7FC9: push ebx */
    RECOMP_ICALL(esi); /* 0x005E7FCA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E7FCC: add esp, 4 */
    _flag_k = FK_ADD;
L_005E7FCF:
    PUSH32(esp, 0x200u); /* 0x005E7FCF: push 0x200 */
    PUSH32(esp, ebx); /* 0x005E7FD4: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E7FD5: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x0040A620u; /* 0x005E7FD8: mov dword ptr [ebx + 0x10], 0x40a620 */
    MEM32(ebx + 0x14) = 0; /* 0x005E7FDF: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E7FE6: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E7FEC: add esp, 8 */
    _flag_k = FK_ADD;
L_005E7FEF:
    eax = 0x005E5A60u; /* 0x005E7FEF: mov eax, 0x5e5a60 */
    ebx = edi + 0x160; /* 0x005E7FF4: lea ebx, [edi + 0x160] */
    /* test eax, eax */ /* 0x005E7FFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E802A; /* 0x005E7FFC: je 0x5e802a */
L_005E7FFE:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E7FFE: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E800A; /* 0x005E8002: je 0x5e800a */
L_005E8004:
    PUSH32(esp, ebx); /* 0x005E8004: push ebx */
    RECOMP_ICALL(esi); /* 0x005E8005: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8007: add esp, 4 */
    _flag_k = FK_ADD;
L_005E800A:
    PUSH32(esp, 0x1FDu); /* 0x005E800A: push 0x1fd */
    PUSH32(esp, ebx); /* 0x005E800F: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E8010: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E5A60u; /* 0x005E8013: mov dword ptr [ebx + 0x10], 0x5e5a60 */
    MEM32(ebx + 0x14) = 0; /* 0x005E801A: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E8021: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E8027: add esp, 8 */
    _flag_k = FK_ADD;
L_005E802A:
    eax = 0x005E44F0u; /* 0x005E802A: mov eax, 0x5e44f0 */
    ebx = edi + 0x178; /* 0x005E802F: lea ebx, [edi + 0x178] */
    /* test eax, eax */ /* 0x005E8035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8065; /* 0x005E8037: je 0x5e8065 */
L_005E8039:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E8039: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8045; /* 0x005E803D: je 0x5e8045 */
L_005E803F:
    PUSH32(esp, ebx); /* 0x005E803F: push ebx */
    RECOMP_ICALL(esi); /* 0x005E8040: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8042: add esp, 4 */
    _flag_k = FK_ADD;
L_005E8045:
    PUSH32(esp, 0x4B2u); /* 0x005E8045: push 0x4b2 */
    PUSH32(esp, ebx); /* 0x005E804A: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E804B: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E44F0u; /* 0x005E804E: mov dword ptr [ebx + 0x10], 0x5e44f0 */
    MEM32(ebx + 0x14) = 0; /* 0x005E8055: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E805C: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E8062: add esp, 8 */
    _flag_k = FK_ADD;
L_005E8065:
    eax = 0x005E4570u; /* 0x005E8065: mov eax, 0x5e4570 */
    ebx = edi + 0x190; /* 0x005E806A: lea ebx, [edi + 0x190] */
    /* test eax, eax */ /* 0x005E8070: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E80A0; /* 0x005E8072: je 0x5e80a0 */
L_005E8074:
    /* test MEM8(ebx + 0x4), 1 */ /* 0x005E8074: test byte ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8080; /* 0x005E8078: je 0x5e8080 */
L_005E807A:
    PUSH32(esp, ebx); /* 0x005E807A: push ebx */
    RECOMP_ICALL(esi); /* 0x005E807B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E807D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E8080:
    PUSH32(esp, 0x4B3u); /* 0x005E8080: push 0x4b3 */
    PUSH32(esp, ebx); /* 0x005E8085: push ebx */
    MEM32(ebx + 0xC) = edi; /* 0x005E8086: mov dword ptr [ebx + 0xc], edi */
    MEM32(ebx + 0x10) = 0x005E4570u; /* 0x005E8089: mov dword ptr [ebx + 0x10], 0x5e4570 */
    MEM32(ebx + 0x14) = 0; /* 0x005E8090: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E8097: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E809D: add esp, 8 */
    _flag_k = FK_ADD;
L_005E80A0:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E80A0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E80A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E80AE; /* 0x005E80A8: jne 0x5e80ae */
L_005E80AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E80AA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E80C8; /* 0x005E80AC: jmp 0x5e80c8 */
L_005E80AE:
    ebx = MEM32(0x927AF8); /* 0x005E80AE: mov ebx, dword ptr [0x927af8] */
    /* test ebx, ebx */ /* 0x005E80B4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E80C8; /* 0x005E80B6: jne 0x5e80c8 */
L_005E80B8:
    ecx = 0x00927AE8u; /* 0x005E80B8: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E80BD: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927AF8); /* 0x005E80C2: mov ebx, dword ptr [0x927af8] */
L_005E80C8:
    eax = MEM32(edi); /* 0x005E80C8: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E80CA: mov ecx, edi */
    esi = MEM32(ebx); /* 0x005E80CC: mov esi, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005E80CE: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x005E80D1: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E80D3: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005E80D6: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(esi + 0x70)); /* 0x005E80D8: call dword ptr [esi + 0x70] */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x005E80DB: mov edx, dword ptr [edi] */
    eax = edi + 0x20; /* 0x005E80DD: lea eax, [edi + 0x20] */
    PUSH32(esp, eax); /* 0x005E80E0: push eax */
    ecx = edi; /* 0x005E80E1: mov ecx, edi */
    RECOMP_ICALL(MEM32(edx + 0xB4)); /* 0x005E80E3: call dword ptr [edx + 0xb4] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005E80E9: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005E80F1: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005E80F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E811B; /* 0x005E80F7: je 0x5e811b */
L_005E80F9:
    PUSH32(esp, eax); /* 0x005E80F9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E80FA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8100: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005E8103: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005E810B: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005E8113: mov dword ptr [esp + 0x38], 0 */
L_005E811B:
    ecx = MEM32(esp + 0x40); /* 0x005E811B: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E811F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8126: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E8127: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8128: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E8129: pop ebx */
    esp = ebp; /* 0x005E812A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E812C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E812D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E8130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8130u);

L_005E8130:
    eax = ecx + 0x38; /* 0x005E8130: lea eax, [ecx + 0x38] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8133: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8140u);

L_005E8140:
    PUSH32(esp, ebp); /* 0x005E8140: push ebp */
    ebp = esp; /* 0x005E8141: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005E8143: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E8146: push ebx */
    PUSH32(esp, esi); /* 0x005E8147: push esi */
    esi = MEM32(0x7CC9AC); /* 0x005E8148: mov esi, dword ptr [0x7cc9ac] */
    ebx = ecx; /* 0x005E814E: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x005E8150: push edi */
    RECOMP_ICALL(esi); /* 0x005E8151: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8153: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E815B; /* 0x005E8155: jne 0x5e815b */
L_005E8157:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005E8157: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8175; /* 0x005E8159: jmp 0x5e8175 */
L_005E815B:
    edi = MEM32(0x927AEC); /* 0x005E815B: mov edi, dword ptr [0x927aec] */
    /* test edi, edi */ /* 0x005E8161: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8175; /* 0x005E8163: jne 0x5e8175 */
L_005E8165:
    ecx = 0x00927AE8u; /* 0x005E8165: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E816A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x927AEC); /* 0x005E816F: mov edi, dword ptr [0x927aec] */
L_005E8175:
    RECOMP_ICALL(esi); /* 0x005E8175: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8177: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E817F; /* 0x005E8179: jne 0x5e817f */
L_005E817B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E817B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8199; /* 0x005E817D: jmp 0x5e8199 */
L_005E817F:
    esi = MEM32(0x927AF8); /* 0x005E817F: mov esi, dword ptr [0x927af8] */
    /* test esi, esi */ /* 0x005E8185: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8199; /* 0x005E8187: jne 0x5e8199 */
L_005E8189:
    ecx = 0x00927AE8u; /* 0x005E8189: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E818E: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x927AF8); /* 0x005E8193: mov esi, dword ptr [0x927af8] */
L_005E8199:
    eax = MEM32(edi); /* 0x005E8199: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x8); /* 0x005E819B: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x005E819E: push ecx */
    ecx = edi; /* 0x005E819F: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E81A1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x005E81A4: push dword ptr [ebx + 0x3c] */
    edx = MEM32(esi); /* 0x005E81A7: mov edx, dword ptr [esi] */
    edi = eax; /* 0x005E81A9: mov edi, eax */
    PUSH32(esp, MEM32(ebx + 0x38)); /* 0x005E81AB: push dword ptr [ebx + 0x38] */
    eax = ebp + (-0x10); /* 0x005E81AE: lea eax, [ebp - 0x10] */
    ecx = esi; /* 0x005E81B1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E81B3: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8C)); /* 0x005E81B4: call dword ptr [edx + 0x8c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005E81BA: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(edi) */ /* 0x005E81BC: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E81D1; /* 0x005E81BE: jne 0x5e81d1 */
L_005E81C0:
    eax = MEM32(eax + 0x4); /* 0x005E81C0: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x005E81C3: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E81D1; /* 0x005E81C6: jne 0x5e81d1 */
L_005E81C8:
    edi = POP32_VAL(esp); /* 0x005E81C8: pop edi */
    esi = POP32_VAL(esp); /* 0x005E81C9: pop esi */
    SET_LO8(eax, 1); /* 0x005E81CA: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x005E81CC: pop ebx */
    esp = ebp; /* 0x005E81CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E81CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E81D0: ret  */
L_005E81D1:
    edi = POP32_VAL(esp); /* 0x005E81D1: pop edi */
    esi = POP32_VAL(esp); /* 0x005E81D2: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E81D3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005E81D5: pop ebx */
    esp = ebp; /* 0x005E81D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E81D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E81D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E81E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E81E0u);

L_005E81E0:
    PUSH32(esp, ebp); /* 0x005E81E0: push ebp */
    ebp = esp; /* 0x005E81E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E81E3: push -1 */
    PUSH32(esp, 0x007B13C0u); /* 0x005E81E5: push 0x7b13c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E81EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E81F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x005E81F1: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E81F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E81F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E81FB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005E81FE: push ebx */
    PUSH32(esp, esi); /* 0x005E81FF: push esi */
    PUSH32(esp, edi); /* 0x005E8200: push edi */
    PUSH32(esp, eax); /* 0x005E8201: push eax */
    eax = ebp + (-0xC); /* 0x005E8202: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8205: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E820B: mov ebx, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005E820D: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x005E8210: lea ecx, [ebp - 0x44] */
    eax = (uint32_t)LO8(eax); /* 0x005E8213: movzx eax, al */
    esi = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E8216: imul esi, eax, 0x70 */
    eax = MEM32(ebx + 0xAC); /* 0x005E8219: mov eax, dword ptr [ebx + 0xac] */
    PUSH32(esp, MEM32(eax + esi + 0x4)); /* 0x005E821F: push dword ptr [eax + esi + 4] */
    PUSH32(esp, MEM32(eax + esi)); /* 0x005E8223: push dword ptr [eax + esi] */
    RECOMP_CALL(sub_0051C670); /* 0x005E8226: call 0x51c670 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E822B: mov dword ptr [ebp - 4], 0 */
    edx = 0x00865DD8u; /* 0x005E8232: mov edx, 0x865dd8 */
    PUSH32(esp, eax); /* 0x005E8237: push eax */
    ecx = ebp + (-0x2C); /* 0x005E8238: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0045F5C0); /* 0x005E823B: call 0x45f5c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E8240: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E8243: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005E8247: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8259; /* 0x005E824B: jb 0x5e8259 */
L_005E824D:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005E824D: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E8250: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8256: add esp, 4 */
    _flag_k = FK_ADD;
L_005E8259:
    eax = MEM32(ebx + 0xAC); /* 0x005E8259: mov eax, dword ptr [ebx + 0xac] */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005E825F: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005E8266: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005E826D: mov byte ptr [ebp - 0x44], 0 */
    /* cmp MEM16(eax + esi + 0x68), 0xFFFFFFFFu */ /* 0x005E8271: cmp word ptr [eax + esi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM16(eax + esi + 0x68)) << 16; _flag_b = (uint32_t)(0xFFFFFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E8288; /* 0x005E8277: je 0x5e8288 */
L_005E8279:
    ecx = MEM32(0x870260); /* 0x005E8279: mov ecx, dword ptr [0x870260] */
    eax = ebp + (-0x2C); /* 0x005E827F: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005E8282: push eax */
    RECOMP_CALL(sub_0060B140); /* 0x005E8283: call 0x60b140 */
    RECOMP_FLAGS_IN();
L_005E8288:
    eax = MEM32(ebx + 0xAC); /* 0x005E8288: mov eax, dword ptr [ebx + 0xac] */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x005E828E: push dword ptr [ebp - 0x48] */
    edx = MEM32(ebx + 0xB0); /* 0x005E8291: mov edx, dword ptr [ebx + 0xb0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E8297: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E8299: push eax */
    ecx = eax + 0x70; /* 0x005E829A: lea ecx, [eax + 0x70] */
    RECOMP_CALL(sub_005EDCF0); /* 0x005E829D: call 0x5edcf0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0xB0); /* 0x005E82A2: mov edi, dword ptr [ebx + 0xb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E82A8: add esp, 8 */
    _flag_k = FK_ADD;
    esi = edi + (-0x70); /* 0x005E82AB: lea esi, [edi - 0x70] */
    /* cmp esi, edi */ /* 0x005E82AE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E82C0; /* 0x005E82B0: je 0x5e82c0 */
L_005E82B2:
    ecx = esi; /* 0x005E82B2: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005E82B4: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005E82B9: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005E82BC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E82B2; /* 0x005E82BE: jne 0x5e82b2 */
L_005E82C0:
    _flag_a = (uint32_t)(MEM32(ebx + 0xB0)); _flag_b = (uint32_t)(0xFFFFFF90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) + 0xFFFFFF90u; /* 0x005E82C0: add dword ptr [ebx + 0xb0], -0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E82C7: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005E82CE: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E82E0; /* 0x005E82D2: jb 0x5e82e0 */
L_005E82D4:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005E82D4: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E82D7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E82DD: add esp, 4 */
    _flag_k = FK_ADD;
L_005E82E0:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005E82E0: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E82E7: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005E82EE: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E82F2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E82F5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E82FC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E82FD: pop edi */
    esi = POP32_VAL(esp); /* 0x005E82FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E82FF: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005E8300: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E8303: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E8305: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E830A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E830C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E830D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E8310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8310u);

L_005E8310:
    PUSH32(esp, ebx); /* 0x005E8310: push ebx */
    ebx = ecx; /* 0x005E8311: mov ebx, ecx */
    eax = MEM32(ebx + 0xA4); /* 0x005E8313: mov eax, dword ptr [ebx + 0xa4] */
    PUSH32(esp, esi); /* 0x005E8319: push esi */
    esi = ebx + 0xA4; /* 0x005E831A: lea esi, [ebx + 0xa4] */
    PUSH32(esp, edi); /* 0x005E8320: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E8321: push dword ptr [eax + 4] */
    ecx = esi; /* 0x005E8324: mov ecx, esi */
    RECOMP_CALL(sub_005EC300); /* 0x005E8326: call 0x5ec300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E832B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005E832D: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005E8330: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005E8332: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005E8334: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005E8336: mov dword ptr [eax + 8], eax */
    MEM32(esi + 0x4) = 0; /* 0x005E8339: mov dword ptr [esi + 4], 0 */
    edi = MEM32(ebx + 0xB0); /* 0x005E8340: mov edi, dword ptr [ebx + 0xb0] */
    esi = MEM32(ebx + 0xAC); /* 0x005E8346: mov esi, dword ptr [ebx + 0xac] */
    /* cmp esi, edi */ /* 0x005E834C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E835E; /* 0x005E834E: je 0x5e835e */
L_005E8350:
    ecx = esi; /* 0x005E8350: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005E8352: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005E8357: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005E835A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E8350; /* 0x005E835C: jne 0x5e8350 */
L_005E835E:
    eax = MEM32(ebx + 0xAC); /* 0x005E835E: mov eax, dword ptr [ebx + 0xac] */
    edi = POP32_VAL(esp); /* 0x005E8364: pop edi */
    MEM32(ebx + 0xB0) = eax; /* 0x005E8365: mov dword ptr [ebx + 0xb0], eax */
    esi = POP32_VAL(esp); /* 0x005E836B: pop esi */
    MEM8(ebx + 0xA0) = (uint8_t)(0); /* 0x005E836C: mov byte ptr [ebx + 0xa0], 0 */
    ebx = POP32_VAL(esp); /* 0x005E8373: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8374: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8380u);

L_005E8380:
    ecx = MEM32(0x86E158); /* 0x005E8380: mov ecx, dword ptr [0x86e158] */
    /* test ecx, ecx */ /* 0x005E8386: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8390; /* 0x005E8388: je 0x5e8390 */
L_005E838A:
    eax = MEM32(ecx); /* 0x005E838A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x005E838C: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x005E838E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_005E8390:
    MEM32(0x86E158) = 0; /* 0x005E8390: mov dword ptr [0x86e158], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E839A: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E83A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E83A0u);

L_005E83A0:
    PUSH32(esp, ebp); /* 0x005E83A0: push ebp */
    ebp = esp; /* 0x005E83A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E83A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E83A6: push -1 */
    PUSH32(esp, 0x007AEB90u); /* 0x005E83A8: push 0x7aeb90 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E83AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E83B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x005E83B4: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E83B7: push esi */
    PUSH32(esp, edi); /* 0x005E83B8: push edi */
    eax = MEM32(0x855000); /* 0x005E83B9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E83BE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E83C0: push eax */
    eax = esp + 0x40; /* 0x005E83C1: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E83C5: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E83CB: mov edi, ecx */
    ecx = esp + 0x1C; /* 0x005E83CD: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E83D1: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005E83D6: mov dword ptr [esp + 0x48], 0 */
    /* test MEM8(esp + 0x28), 7 */ /* 0x005E83DE: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0xC) = 0x20Cu; /* 0x005E83E3: mov dword ptr [esp + 0xc], 0x20c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8419; /* 0x005E83EB: jne 0x5e8419 */
L_005E83ED:
    PUSH32(esp, 0x20u); /* 0x005E83ED: push 0x20 */
    ecx = esp + 0x20; /* 0x005E83EF: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E83F3: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005E83F8: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E83FC: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E83FF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E83FF: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005E8402: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x20Cu; /* 0x005E8406: mov dword ptr [eax], 0x20c */
    eax = MEM32(esp + 0x28); /* 0x005E840C: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005E8410: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = eax; /* 0x005E8413: mov dword ptr [esp + 0x28], eax */
    goto L_005E842E; /* 0x005E8417: jmp 0x5e842e */
L_005E8419:
    PUSH32(esp, ecx); /* 0x005E8419: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E841A: push 0x20 */
    eax = esp + 0x14; /* 0x005E841C: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E8420: push eax */
    ecx = esp + 0x28; /* 0x005E8421: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005E8425: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005E842A: mov eax, dword ptr [esp + 0x28] */
L_005E842E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E842E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 3; /* 0x005E8430: mov ecx, 3 */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x005E8435: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x005E8439: cmovne esi, ecx */
    MEM32(esp + 0xC) = esi; /* 0x005E843C: mov dword ptr [esp + 0xc], esi */
    /* test LO8(eax), 7 */ /* 0x005E8440: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8466; /* 0x005E8442: jne 0x5e8466 */
L_005E8444:
    PUSH32(esp, 0x20u); /* 0x005E8444: push 0x20 */
    ecx = esp + 0x20; /* 0x005E8446: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E844A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005E844F: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E8453: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E8456: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E8456: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005E8459: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005E845D: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x20u; /* 0x005E845F: add dword ptr [esp + 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E8477; /* 0x005E8464: jmp 0x5e8477 */
L_005E8466:
    PUSH32(esp, ecx); /* 0x005E8466: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E8467: push 0x20 */
    eax = esp + 0x14; /* 0x005E8469: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E846D: push eax */
    ecx = esp + 0x28; /* 0x005E846E: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005E8472: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E8477:
    esi = MEM32(0x7CC9AC); /* 0x005E8477: mov esi, dword ptr [0x7cc9ac] */
    RECOMP_ICALL(esi); /* 0x005E847D: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E847F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8487; /* 0x005E8481: jne 0x5e8487 */
L_005E8483:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8483: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E84A1; /* 0x005E8485: jmp 0x5e84a1 */
L_005E8487:
    ecx = MEM32(0x927AEC); /* 0x005E8487: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E848D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E84A1; /* 0x005E848F: jne 0x5e84a1 */
L_005E8491:
    ecx = 0x00927AE8u; /* 0x005E8491: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8496: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E849B: mov ecx, dword ptr [0x927aec] */
L_005E84A1:
    eax = MEM32(ecx); /* 0x005E84A1: mov eax, dword ptr [ecx] */
    edx = esp + 0x14; /* 0x005E84A3: lea edx, [esp + 0x14] */
    PUSH32(esp, edx); /* 0x005E84A7: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E84A8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x28), 7 */ /* 0x005E84AB: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(eax); /* 0x005E84B0: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005E84B2: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = ecx; /* 0x005E84B5: mov dword ptr [esp + 0xc], ecx */
    MEM32(esp + 0x10) = eax; /* 0x005E84B9: mov dword ptr [esp + 0x10], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E84E9; /* 0x005E84BD: jne 0x5e84e9 */
L_005E84BF:
    PUSH32(esp, 0x40u); /* 0x005E84BF: push 0x40 */
    ecx = esp + 0x20; /* 0x005E84C1: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E84C5: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x005E84CA: mov eax, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0xC); _xmm[0].u64[1] = 0; /* 0x005E84CE: movq xmm0, qword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E84D4: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E84D7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E84D7: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005E84DA: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005E84DE: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x40u; /* 0x005E84E2: add dword ptr [esp + 0x28], 0x40 */
    _flag_k = FK_ADD;
    goto L_005E84FA; /* 0x005E84E7: jmp 0x5e84fa */
L_005E84E9:
    PUSH32(esp, ecx); /* 0x005E84E9: push ecx */
    PUSH32(esp, 0x40u); /* 0x005E84EA: push 0x40 */
    eax = esp + 0x14; /* 0x005E84EC: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E84F0: push eax */
    ecx = esp + 0x28; /* 0x005E84F1: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005E84F5: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E84FA:
    RECOMP_ICALL(esi); /* 0x005E84FA: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E84FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8504; /* 0x005E84FE: jne 0x5e8504 */
L_005E8500:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8500: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E851E; /* 0x005E8502: jmp 0x5e851e */
L_005E8504:
    ecx = MEM32(0x927AF8); /* 0x005E8504: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E850A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E851E; /* 0x005E850C: jne 0x5e851e */
L_005E850E:
    ecx = 0x00927AE8u; /* 0x005E850E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8513: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8518: mov ecx, dword ptr [0x927af8] */
L_005E851E:
    eax = MEM32(esp + 0x28); /* 0x005E851E: mov eax, dword ptr [esp + 0x28] */
    edx = MEM32(ecx); /* 0x005E8522: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E8524: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E8527: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E8527: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E852A: push eax */
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x005E852B: push dword ptr [esp + 0x34] */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E852F: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E8532: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E8535: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005E8538: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005E8540: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005E8544: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E856A; /* 0x005E8546: je 0x5e856a */
L_005E8548:
    PUSH32(esp, eax); /* 0x005E8548: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E8549: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E854F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005E8552: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005E855A: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005E8562: mov dword ptr [esp + 0x38], 0 */
L_005E856A:
    ecx = MEM32(esp + 0x40); /* 0x005E856A: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E856E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8575: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E8576: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8577: pop esi */
    esp = ebp; /* 0x005E8578: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E857A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E857B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E8580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8580u);

L_005E8580:
    PUSH32(esp, ebp); /* 0x005E8580: push ebp */
    ebp = esp; /* 0x005E8581: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E8583: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E8586: push esi */
    PUSH32(esp, edi); /* 0x005E8587: push edi */
    edi = ecx; /* 0x005E8588: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E858A: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8590: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8598; /* 0x005E8592: jne 0x5e8598 */
L_005E8594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8594: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E85B2; /* 0x005E8596: jmp 0x5e85b2 */
L_005E8598:
    ecx = MEM32(0x927AF8); /* 0x005E8598: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E859E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E85B2; /* 0x005E85A0: jne 0x5e85b2 */
L_005E85A2:
    ecx = 0x00927AE8u; /* 0x005E85A2: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E85A7: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E85AC: mov ecx, dword ptr [0x927af8] */
L_005E85B2:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E85B2: push dword ptr [edi + 0x3c] */
    eax = MEM32(ecx); /* 0x005E85B5: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E85B7: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x005E85BA: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC998); /* 0x005E85BD: mov esi, dword ptr [0x7cc998] */
    eax = edi + 0xD0; /* 0x005E85C3: lea eax, [edi + 0xd0] */
    PUSH32(esp, eax); /* 0x005E85C9: push eax */
    RECOMP_ICALL(esi); /* 0x005E85CA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E85CC: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x118; /* 0x005E85CF: lea eax, [edi + 0x118] */
    PUSH32(esp, eax); /* 0x005E85D5: push eax */
    RECOMP_ICALL(esi); /* 0x005E85D6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E85D8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x100; /* 0x005E85DB: lea eax, [edi + 0x100] */
    PUSH32(esp, eax); /* 0x005E85E1: push eax */
    RECOMP_ICALL(esi); /* 0x005E85E2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E85E4: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x130; /* 0x005E85E7: lea eax, [edi + 0x130] */
    PUSH32(esp, eax); /* 0x005E85ED: push eax */
    RECOMP_ICALL(esi); /* 0x005E85EE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E85F0: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x148; /* 0x005E85F3: lea eax, [edi + 0x148] */
    PUSH32(esp, eax); /* 0x005E85F9: push eax */
    RECOMP_ICALL(esi); /* 0x005E85FA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E85FC: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0xE8; /* 0x005E85FF: lea eax, [edi + 0xe8] */
    PUSH32(esp, eax); /* 0x005E8605: push eax */
    RECOMP_ICALL(esi); /* 0x005E8606: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8608: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x160; /* 0x005E860B: lea eax, [edi + 0x160] */
    PUSH32(esp, eax); /* 0x005E8611: push eax */
    RECOMP_ICALL(esi); /* 0x005E8612: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8614: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x178; /* 0x005E8617: lea eax, [edi + 0x178] */
    PUSH32(esp, eax); /* 0x005E861D: push eax */
    RECOMP_ICALL(esi); /* 0x005E861E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8620: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x190; /* 0x005E8623: lea eax, [edi + 0x190] */
    PUSH32(esp, eax); /* 0x005E8629: push eax */
    RECOMP_ICALL(esi); /* 0x005E862A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFF0FFFFFu; /* 0x005E862C: and dword ptr [ebp - 4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8633: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x005E8636: mov byte ptr [ebp - 1], 0 */
    ecx = edi; /* 0x005E863A: mov ecx, edi */
    eax = MEM32(ebp + (-0x4)); /* 0x005E863C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFF0FFFFFu; /* 0x005E863F: and dword ptr [ebp - 4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E8646: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x3C) = eax; /* 0x005E864B: mov dword ptr [edi + 0x3c], eax */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x005E864E: mov byte ptr [ebp - 1], 0 */
    eax = MEM32(ebp + (-0x4)); /* 0x005E8652: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E8655: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x38) = 0; /* 0x005E865A: mov dword ptr [edi + 0x38], 0 */
    MEM32(edi + 0x40) = 0; /* 0x005E8661: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x44) = eax; /* 0x005E8668: mov dword ptr [edi + 0x44], eax */
    RECOMP_CALL(sub_005E8310); /* 0x005E866B: call 0x5e8310 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E8670: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8671: pop esi */
    esp = ebp; /* 0x005E8672: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8675: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8680u);

L_005E8680:
    PUSH32(esp, ebp); /* 0x005E8680: push ebp */
    ebp = esp; /* 0x005E8681: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E8683: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x005E8686: push ecx */
    PUSH32(esp, ebx); /* 0x005E8687: push ebx */
    PUSH32(esp, esi); /* 0x005E8688: push esi */
    PUSH32(esp, edi); /* 0x005E8689: push edi */
    edi = ecx; /* 0x005E868A: mov edi, ecx */
    eax = MEM32(edi); /* 0x005E868C: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E868E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x18); /* 0x005E8691: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_005F6C10); /* 0x005E8694: call 0x5f6c10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x18); /* 0x005E8699: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_005F68C0); /* 0x005E869C: call 0x5f68c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xB0); /* 0x005E86A1: mov ecx, dword ptr [edi + 0xb0] */
    eax = 0x92492493u; /* 0x005E86A7: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E86AC: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC9AC); /* 0x005E86B2: mov ebx, dword ptr [0x7cc9ac] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E86B8: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(esp + 0xC) = (uint8_t)(0); /* 0x005E86BA: mov byte ptr [esp + 0xc], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E86BF: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E86C1: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E86C4: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E86C6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E86C6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E86C9: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E8741; /* 0x005E86CB: je 0x5e8741 */
L_005E86CD:
    ecx = ecx; /* 0x005E86CD: lea ecx, [ecx] */
L_005E86D0:
    RECOMP_ICALL(ebx); /* 0x005E86D0: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E86D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E86DA; /* 0x005E86D4: jne 0x5e86da */
L_005E86D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E86D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E86F4; /* 0x005E86D8: jmp 0x5e86f4 */
L_005E86DA:
    ebx = MEM32(0x927B08); /* 0x005E86DA: mov ebx, dword ptr [0x927b08] */
    /* test ebx, ebx */ /* 0x005E86E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E86F4; /* 0x005E86E2: jne 0x5e86f4 */
L_005E86E4:
    ecx = 0x00927AE8u; /* 0x005E86E4: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E86E9: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927B08); /* 0x005E86EE: mov ebx, dword ptr [0x927b08] */
L_005E86F4:
    eax = MEM32(edi); /* 0x005E86F4: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E86F6: mov ecx, edi */
    PUSH32(esp, MEM32(esp + 0xC)); /* 0x005E86F8: push dword ptr [esp + 0xc] */
    esi = MEM32(ebx); /* 0x005E86FC: mov esi, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x005E86FE: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x005E8701: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E8703: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005E8706: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(esi + 0x10)); /* 0x005E8708: call dword ptr [esi + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xB0); /* 0x005E870B: mov ecx, dword ptr [edi + 0xb0] */
    eax = 0x92492493u; /* 0x005E8711: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E8716: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    SET_LO8(ebx, MEM8(esp + 0xC)); /* 0x005E871C: mov bl, byte ptr [esp + 0xc] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E8720: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005E8722: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E8724: add edx, ecx */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO8(ebx); /* 0x005E8726: movzx eax, bl */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E8729: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005E872C: mov ecx, edx */
    MEM8(esp + 0xC) = (uint8_t)(LO8(ebx)); /* 0x005E872E: mov byte ptr [esp + 0xc], bl */
    ebx = MEM32(0x7CC9AC); /* 0x005E8732: mov ebx, dword ptr [0x7cc9ac] */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005E8738: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005E8738: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005E873B: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x005E873D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E86D0; /* 0x005E873F: jb 0x5e86d0 */
L_005E8741:
    edx = MEM32(edi + 0x3C); /* 0x005E8741: mov edx, dword ptr [edi + 0x3c] */
    ecx = edx; /* 0x005E8744: mov ecx, edx */
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x005E8746: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x005E8746: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x005E8749: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E874C: jbe 0x5e886c */
L_005E8752:
    /* cmp ecx, 0xBu */ /* 0x005E8752: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E8755: jae 0x5e886c */
L_005E875B:
    eax = edx; /* 0x005E875B: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x005E875D: sar eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 24u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 24u);
    /* test eax, eax */ /* 0x005E8760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005E886C; /* 0x005E8762: jle 0x5e886c */
L_005E8768:
    /* cmp eax, 5 */ /* 0x005E8768: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E876B: jge 0x5e886c */
L_005E8771:
    /* cmp ecx, 1 */ /* 0x005E8771: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E8790; /* 0x005E8774: jne 0x5e8790 */
L_005E8776:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x005E8776: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E877A: je 0x5e886c */
L_005E8780:
    eax = edx; /* 0x005E8780: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x005E8782: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x005E8787: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E878A: ja 0x5e886c */
L_005E8790:
    /* cmp ecx, 7 */ /* 0x005E8790: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E87AB; /* 0x005E8793: jne 0x5e87ab */
L_005E8795:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x005E8795: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E8799: je 0x5e886c */
L_005E879F:
    /* test edx, 0x000FFFFFu */ /* 0x005E879F: test edx, 0xfffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E87A5: jne 0x5e886c */
L_005E87AB:
    /* cmp ecx, 3 */ /* 0x005E87AB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E87BA; /* 0x005E87AE: jne 0x5e87ba */
L_005E87B0:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x005E87B0: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E886C; /* 0x005E87B4: je 0x5e886c */
L_005E87BA:
    edx = MEM32(edi); /* 0x005E87BA: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x005E87BC: mov ecx, edi */
    edx = MEM32(edx + 0x1C); /* 0x005E87BE: mov edx, dword ptr [edx + 0x1c] */
    RECOMP_ICALL(edx); /* 0x005E87C1: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E87C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8829; /* 0x005E87C5: je 0x5e8829 */
L_005E87C7:
    ecx = MEM32(edi + 0xB0); /* 0x005E87C7: mov ecx, dword ptr [edi + 0xb0] */
    eax = 0x92492493u; /* 0x005E87CD: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E87D2: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E87D8: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E87DA: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E87DC: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E87DF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E87E1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E87E1: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E87E4: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005E87E6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E8829; /* 0x005E87E9: jbe 0x5e8829 */
L_005E87EB:
    RECOMP_ICALL(ebx); /* 0x005E87EB: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E87ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E87F5; /* 0x005E87EF: jne 0x5e87f5 */
L_005E87F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E87F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E880F; /* 0x005E87F3: jmp 0x5e880f */
L_005E87F5:
    ecx = MEM32(0x927AF8); /* 0x005E87F5: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E87FB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E880F; /* 0x005E87FD: jne 0x5e880f */
L_005E87FF:
    ecx = 0x00927AE8u; /* 0x005E87FF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8804: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8809: mov ecx, dword ptr [0x927af8] */
L_005E880F:
    eax = MEM32(edi + 0xAC); /* 0x005E880F: mov eax, dword ptr [edi + 0xac] */
    edx = MEM32(ecx); /* 0x005E8815: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x74)); /* 0x005E8817: push dword ptr [eax + 0x74] */
    PUSH32(esp, MEM32(eax + 0x70)); /* 0x005E881A: push dword ptr [eax + 0x70] */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E881D: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E8820: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x90)); /* 0x005E8823: call dword ptr [edx + 0x90] */
    RECOMP_FLAGS_IN();
L_005E8829:
    /* cmp MEM8(0x87191A), 0 */ /* 0x005E8829: cmp byte ptr [0x87191a], 0 */
    _flag_a = (uint32_t)(MEM8(0x87191A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E883F; /* 0x005E8830: jne 0x5e883f */
L_005E8832:
    /* cmp MEM8(0x875994), 0 */ /* 0x005E8832: cmp byte ptr [0x875994], 0 */
    _flag_a = (uint32_t)(MEM8(0x875994)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E883F; /* 0x005E8839: jne 0x5e883f */
L_005E883B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E883B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8844; /* 0x005E883D: jmp 0x5e8844 */
L_005E883F:
    eax = 1; /* 0x005E883F: mov eax, 1 */
L_005E8844:
    PUSH32(esp, eax); /* 0x005E8844: push eax */
    ecx = edi; /* 0x005E8845: mov ecx, edi */
    RECOMP_CALL(sub_005E83A0); /* 0x005E8847: call 0x5e83a0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x87CBE4), 0 */ /* 0x005E884C: cmp dword ptr [0x87cbe4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E885A; /* 0x005E8853: jne 0x5e885a */
L_005E8855:
    RECOMP_CALL(sub_006EDFA0); /* 0x005E8855: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
L_005E885A:
    PUSH32(esp, 0x12Cu); /* 0x005E885A: push 0x12c */
    RECOMP_ICALL(MEM32(0x7CC134)); /* 0x005E885F: call dword ptr [0x7cc134] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005E8865: mov ecx, edi */
    RECOMP_CALL(sub_005E8580); /* 0x005E8867: call 0x5e8580 */
    RECOMP_FLAGS_IN();
L_005E886C:
    edi = POP32_VAL(esp); /* 0x005E886C: pop edi */
    esi = POP32_VAL(esp); /* 0x005E886D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E886E: pop ebx */
    esp = ebp; /* 0x005E886F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8871: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8872: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8880u);

L_005E8880:
    PUSH32(esp, ebp); /* 0x005E8880: push ebp */
    ebp = esp; /* 0x005E8881: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E8883: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E8886: push ebx */
    PUSH32(esp, esi); /* 0x005E8887: push esi */
    esi = MEM32(ecx + 0xB0); /* 0x005E8888: mov esi, dword ptr [ecx + 0xb0] */
    eax = 0x92492493u; /* 0x005E888E: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0xAC); /* 0x005E8893: sub esi, dword ptr [ecx + 0xac] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E8899: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E889B: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x4)) = ecx; /* 0x005E889D: mov dword ptr [ebp - 4], ecx */
    SET_HI8(ebx, 0x10u); /* 0x005E88A0: mov bh, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E88A2: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E88A4: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E88A7: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E88A9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E88A9: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E88AC: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E8920; /* 0x005E88AE: je 0x5e8920 */
L_005E88B0:
    eax = MEM32(ebp + 0x8); /* 0x005E88B0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E88B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x005E88B5: push edi */
    edi = MEM32(ecx + 0xAC); /* 0x005E88B6: mov edi, dword ptr [ecx + 0xac] */
    ecx = MEM32(ecx + 0xB0); /* 0x005E88BC: mov ecx, dword ptr [ecx + 0xb0] */
    edx = MEM32(eax); /* 0x005E88C2: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005E88C4: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x005E88C7: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x005E88CA: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x005E88CD: mov dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xAC); /* 0x005E88D0: sub ecx, dword ptr [eax + 0xac] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005E88D6: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E88DB: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E88DD: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E88DF: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005E88E2: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005E88E4: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005E88E4: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005E88E7: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x005E88E9: mov edx, dword ptr [ebp + 8] */
    esp = esp; /* 0x005E88EC: lea esp, [esp] */
L_005E88F0:
    eax = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005E88F0: imul eax, esi, 0x70 */
    esi = MEM32(ebp + (-0x8)); /* 0x005E88F3: mov esi, dword ptr [ebp - 8] */
    /* cmp MEM32(eax + edi), esi */ /* 0x005E88F6: cmp dword ptr [eax + edi], esi */
    _flag_a = (uint32_t)(MEM32(eax + edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E8901; /* 0x005E88F9: jne 0x5e8901 */
L_005E88FB:
    /* cmp MEM32(eax + edi + 0x4), edx */ /* 0x005E88FB: cmp dword ptr [eax + edi + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + edi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E8915; /* 0x005E88FF: je 0x5e8915 */
L_005E8901:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x005E8901: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    esi = (uint32_t)LO8(ebx); /* 0x005E8903: movzx esi, bl */
    /* cmp esi, ecx */ /* 0x005E8906: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E88F0; /* 0x005E8908: jb 0x5e88f0 */
L_005E890A:
    edi = POP32_VAL(esp); /* 0x005E890A: pop edi */
    esi = POP32_VAL(esp); /* 0x005E890B: pop esi */
    SET_LO8(eax, HI8(ebx)); /* 0x005E890C: mov al, bh */
    ebx = POP32_VAL(esp); /* 0x005E890E: pop ebx */
    esp = ebp; /* 0x005E890F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E8912: ret 4 */
L_005E8915:
    edi = POP32_VAL(esp); /* 0x005E8915: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8916: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x005E8917: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x005E8919: pop ebx */
    esp = ebp; /* 0x005E891A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E891C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E891D: ret 4 */
L_005E8920:
    esi = POP32_VAL(esp); /* 0x005E8920: pop esi */
    SET_LO8(eax, HI8(ebx)); /* 0x005E8921: mov al, bh */
    ebx = POP32_VAL(esp); /* 0x005E8923: pop ebx */
    esp = ebp; /* 0x005E8924: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8926: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E8927: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E8930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8930u);

L_005E8930:
    eax = ecx + 0xAC; /* 0x005E8930: lea eax, [ecx + 0xac] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8936: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8940u);

L_005E8940:
    PUSH32(esp, ebp); /* 0x005E8940: push ebp */
    ebp = esp; /* 0x005E8941: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8943: push -1 */
    PUSH32(esp, 0x00782DD0u); /* 0x005E8945: push 0x782dd0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E894A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8950: push eax */
    PUSH32(esp, ecx); /* 0x005E8951: push ecx */
    PUSH32(esp, ebx); /* 0x005E8952: push ebx */
    PUSH32(esp, esi); /* 0x005E8953: push esi */
    eax = MEM32(0x855000); /* 0x005E8954: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E8959: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E895B: push eax */
    eax = ebp + (-0xC); /* 0x005E895C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E895F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E8965: mov esi, ecx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x005E8967: mov bl, byte ptr [ebp + 8] */
    /* cmp LO8(ebx), 0x10u */ /* 0x005E896A: cmp bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005E89B2; /* 0x005E896D: jb 0x5e89b2 */
L_005E896F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005E896F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005E8972: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x005E8974: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007F652Cu); /* 0x005E8977: push 0x7f652c */
    RECOMP_CALL(sub_00409FA0); /* 0x005E897C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8981: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005E8988: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005E898B: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E898D: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007F656Cu); /* 0x005E8990: push 0x7f656c */
    RECOMP_CALL(sub_00409FA0); /* 0x005E8995: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E899A: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E899E: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x35Fu; /* 0x005E89A5: mov ecx, 0x35f */
    RECOMP_CALL(sub_00668DA0); /* 0x005E89AA: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005E89AF: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005E89B2:
    eax = (uint32_t)LO8(ebx); /* 0x005E89B2: movzx eax, bl */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E89B5: imul eax, eax, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xAC); /* 0x005E89B8: add eax, dword ptr [esi + 0xac] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E89BE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E89C1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E89C8: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E89C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E89CA: pop ebx */
    esp = ebp; /* 0x005E89CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E89CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E89CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E89E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E89E0u);

L_005E89E0:
    SET_LO8(eax, MEM8(ecx + 0xA0)); /* 0x005E89E0: mov al, byte ptr [ecx + 0xa0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E89E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E89F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E89F0u);

L_005E89F0:
    PUSH32(esp, esi); /* 0x005E89F0: push esi */
    esi = MEM32(ecx + 0xB0); /* 0x005E89F1: mov esi, dword ptr [ecx + 0xb0] */
    eax = 0x92492493u; /* 0x005E89F7: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0xAC); /* 0x005E89FC: sub esi, dword ptr [ecx + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E8A02: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E8A04: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E8A06: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E8A09: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E8A0B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E8A0B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E8A0E: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005E8A10: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8A11: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8A20u);

L_005E8A20:
    PUSH32(esp, ebp); /* 0x005E8A20: push ebp */
    ebp = esp; /* 0x005E8A21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8A23: push -1 */
    PUSH32(esp, 0x007B1409u); /* 0x005E8A25: push 0x7b1409 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8A2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8A30: push eax */
    PUSH32(esp, ecx); /* 0x005E8A31: push ecx */
    PUSH32(esp, ebx); /* 0x005E8A32: push ebx */
    PUSH32(esp, esi); /* 0x005E8A33: push esi */
    PUSH32(esp, edi); /* 0x005E8A34: push edi */
    eax = MEM32(0x855000); /* 0x005E8A35: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E8A3A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E8A3C: push eax */
    eax = ebp + (-0xC); /* 0x005E8A3D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8A40: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E8A46: mov edi, ecx */
    SET_LO8(ebx, MEM8(ebp + 0xC)); /* 0x005E8A48: mov bl, byte ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005E8A4B: mov dword ptr [ebp - 0x10], 0 */
    /* cmp LO8(ebx), 0x10u */ /* 0x005E8A52: cmp bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8A66; /* 0x005E8A55: jb 0x5e8a66 */
L_005E8A57:
    ecx = MEM32(ebp + 0x8); /* 0x005E8A57: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x007CD0C4u); /* 0x005E8A5A: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x005E8A5F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    goto L_005E8AC0; /* 0x005E8A64: jmp 0x5e8ac0 */
L_005E8A66:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8A66: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8A6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8A74; /* 0x005E8A6E: jne 0x5e8a74 */
L_005E8A70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8A70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8A8E; /* 0x005E8A72: jmp 0x5e8a8e */
L_005E8A74:
    ecx = MEM32(0x927AF8); /* 0x005E8A74: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E8A7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8A8E; /* 0x005E8A7C: jne 0x5e8a8e */
L_005E8A7E:
    ecx = 0x00927AE8u; /* 0x005E8A7E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8A83: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8A88: mov ecx, dword ptr [0x927af8] */
L_005E8A8E:
    esi = MEM32(ebp + 0x10); /* 0x005E8A8E: mov esi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E8A91: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8A99; /* 0x005E8A95: jb 0x5e8a99 */
L_005E8A97:
    esi = MEM32(esi); /* 0x005E8A97: mov esi, dword ptr [esi] */
L_005E8A99:
    edx = MEM32(ecx); /* 0x005E8A99: mov edx, dword ptr [ecx] */
    eax = (uint32_t)LO8(ebx); /* 0x005E8A9B: movzx eax, bl */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005E8A9E: imul eax, eax, 0x70 */
    PUSH32(esp, esi); /* 0x005E8AA1: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0xAC); /* 0x005E8AA2: add eax, dword ptr [edi + 0xac] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E8AA8: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005E8AAB: push dword ptr [eax] */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E8AAD: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E8AB0: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x60)); /* 0x005E8AB3: call dword ptr [edx + 0x60] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005E8AB6: mov ecx, dword ptr [ebp + 8] */
    edx = eax; /* 0x005E8AB9: mov edx, eax */
    RECOMP_CALL(sub_0053DD90); /* 0x005E8ABB: call 0x53dd90 */
    RECOMP_FLAGS_IN();
L_005E8AC0:
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8AC0: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E8AC7: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005E8ACE: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E8AD1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8AD4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8ADB: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E8ADC: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8ADD: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E8ADE: pop ebx */
    esp = ebp; /* 0x005E8ADF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8AE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E8AE2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005E8AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8AF0u);

L_005E8AF0:
    PUSH32(esp, ebp); /* 0x005E8AF0: push ebp */
    ebp = esp; /* 0x005E8AF1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005E8AF3: push esi */
    PUSH32(esp, edi); /* 0x005E8AF4: push edi */
    edi = ecx; /* 0x005E8AF5: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8AF7: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8AFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8B05; /* 0x005E8AFF: jne 0x5e8b05 */
L_005E8B01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8B01: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8B1F; /* 0x005E8B03: jmp 0x5e8b1f */
L_005E8B05:
    ecx = MEM32(0x927AF8); /* 0x005E8B05: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E8B0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8B1F; /* 0x005E8B0D: jne 0x5e8b1f */
L_005E8B0F:
    ecx = 0x00927AE8u; /* 0x005E8B0F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8B14: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8B19: mov ecx, dword ptr [0x927af8] */
L_005E8B1F:
    edx = MEM32(ebp + 0xC); /* 0x005E8B1F: mov edx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005E8B22: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8B2A; /* 0x005E8B26: jb 0x5e8b2a */
L_005E8B28:
    edx = MEM32(edx); /* 0x005E8B28: mov edx, dword ptr [edx] */
L_005E8B2A:
    esi = MEM32(ebp + 0x8); /* 0x005E8B2A: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E8B2D: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8B35; /* 0x005E8B31: jb 0x5e8b35 */
L_005E8B33:
    esi = MEM32(esi); /* 0x005E8B33: mov esi, dword ptr [esi] */
L_005E8B35:
    eax = MEM32(ecx); /* 0x005E8B35: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x005E8B37: push edx */
    PUSH32(esp, esi); /* 0x005E8B38: push esi */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E8B39: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E8B3C: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x005E8B3F: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E8B42: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8B43: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E8B44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E8B45: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E8B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8B50u);

L_005E8B50:
    PUSH32(esp, ebp); /* 0x005E8B50: push ebp */
    ebp = esp; /* 0x005E8B51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8B53: push -1 */
    PUSH32(esp, 0x0079C949u); /* 0x005E8B55: push 0x79c949 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8B5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8B60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E8B61: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E8B64: push esi */
    PUSH32(esp, edi); /* 0x005E8B65: push edi */
    eax = MEM32(0x855000); /* 0x005E8B66: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E8B6B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E8B6D: push eax */
    eax = ebp + (-0xC); /* 0x005E8B6E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8B71: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E8B77: mov edi, ecx */
    MEM32(ebp + (-0x10)) = 0; /* 0x005E8B79: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8B80: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8B86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8B8E; /* 0x005E8B88: jne 0x5e8b8e */
L_005E8B8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8B8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8BA8; /* 0x005E8B8C: jmp 0x5e8ba8 */
L_005E8B8E:
    ecx = MEM32(0x927AEC); /* 0x005E8B8E: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E8B94: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8BA8; /* 0x005E8B96: jne 0x5e8ba8 */
L_005E8B98:
    ecx = 0x00927AE8u; /* 0x005E8B98: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8B9D: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E8BA2: mov ecx, dword ptr [0x927aec] */
L_005E8BA8:
    eax = MEM32(ecx); /* 0x005E8BA8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x005E8BAA: lea edx, [ebp - 0x18] */
    esi = MEM32(edi); /* 0x005E8BAD: mov esi, dword ptr [edi] */
    PUSH32(esp, edx); /* 0x005E8BAF: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E8BB0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E8BB3: push eax */
    eax = MEM32(esi + 0x30); /* 0x005E8BB4: mov eax, dword ptr [esi + 0x30] */
    ecx = edi; /* 0x005E8BB7: mov ecx, edi */
    RECOMP_ICALL(eax); /* 0x005E8BB9: call eax */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005E8BBB: mov byte ptr [ebp - 0x14], al */
    /* cmp LO8(eax), 0x10u */ /* 0x005E8BBE: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8BF3; /* 0x005E8BC0: jb 0x5e8bf3 */
L_005E8BC2:
    ecx = MEM32(ebp + 0x8); /* 0x005E8BC2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x007CD0C4u); /* 0x005E8BC5: push 0x7cd0c4 */
    RECOMP_CALL(sub_00409FA0); /* 0x005E8BCA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8BCF: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E8BD6: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005E8BDD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E8BE0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8BE3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8BEA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E8BEB: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8BEC: pop esi */
    esp = ebp; /* 0x005E8BED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8BEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E8BF0: ret 8 */
L_005E8BF3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E8BF3: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x005E8BF6: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E8BF8: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005E8BFA: push dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + 0x8); /* 0x005E8BFD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E8C00: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x005E8C01: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8C04: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E8C0B: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005E8C12: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E8C14: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8C17: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8C1E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E8C1F: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8C20: pop esi */
    esp = ebp; /* 0x005E8C21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8C23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E8C24: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E8C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8C30u);

L_005E8C30:
    PUSH32(esp, ebp); /* 0x005E8C30: push ebp */
    ebp = esp; /* 0x005E8C31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8C33: push -1 */
    PUSH32(esp, 0x00781739u); /* 0x005E8C35: push 0x781739 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8C3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8C40: push eax */
    PUSH32(esp, ecx); /* 0x005E8C41: push ecx */
    PUSH32(esp, esi); /* 0x005E8C42: push esi */
    eax = MEM32(0x855000); /* 0x005E8C43: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E8C48: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E8C4A: push eax */
    eax = ebp + (-0xC); /* 0x005E8C4B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8C4E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E8C54: mov esi, ecx */
    MEM32(ebp + (-0x10)) = 0; /* 0x005E8C56: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8C5D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8C63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8C6B; /* 0x005E8C65: jne 0x5e8c6b */
L_005E8C67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8C67: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8C85; /* 0x005E8C69: jmp 0x5e8c85 */
L_005E8C6B:
    ecx = MEM32(0x927AF8); /* 0x005E8C6B: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E8C71: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8C85; /* 0x005E8C73: jne 0x5e8c85 */
L_005E8C75:
    ecx = 0x00927AE8u; /* 0x005E8C75: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8C7A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8C7F: mov ecx, dword ptr [0x927af8] */
L_005E8C85:
    edx = MEM32(ebp + 0xC); /* 0x005E8C85: mov edx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005E8C88: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8C90; /* 0x005E8C8C: jb 0x5e8c90 */
L_005E8C8E:
    edx = MEM32(edx); /* 0x005E8C8E: mov edx, dword ptr [edx] */
L_005E8C90:
    eax = MEM32(ecx); /* 0x005E8C90: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x005E8C92: push edx */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E8C93: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E8C96: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005E8C99: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005E8C9C: mov ecx, dword ptr [ebp + 8] */
    edx = eax; /* 0x005E8C9F: mov edx, eax */
    RECOMP_CALL(sub_0053DD90); /* 0x005E8CA1: call 0x53dd90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8CA6: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E8CAD: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005E8CB4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E8CB7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8CBA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8CC1: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E8CC2: pop esi */
    esp = ebp; /* 0x005E8CC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8CC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E8CC6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E8CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8CD0u);

L_005E8CD0:
    PUSH32(esp, ebp); /* 0x005E8CD0: push ebp */
    ebp = esp; /* 0x005E8CD1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005E8CD3: push esi */
    PUSH32(esp, edi); /* 0x005E8CD4: push edi */
    edi = ecx; /* 0x005E8CD5: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8CD7: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8CDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8CE5; /* 0x005E8CDF: jne 0x5e8ce5 */
L_005E8CE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8CE1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8CFF; /* 0x005E8CE3: jmp 0x5e8cff */
L_005E8CE5:
    ecx = MEM32(0x927AF8); /* 0x005E8CE5: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E8CEB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8CFF; /* 0x005E8CED: jne 0x5e8cff */
L_005E8CEF:
    ecx = 0x00927AE8u; /* 0x005E8CEF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8CF4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8CF9: mov ecx, dword ptr [0x927af8] */
L_005E8CFF:
    edx = MEM32(ebp + 0xC); /* 0x005E8CFF: mov edx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005E8D02: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8D0A; /* 0x005E8D06: jb 0x5e8d0a */
L_005E8D08:
    edx = MEM32(edx); /* 0x005E8D08: mov edx, dword ptr [edx] */
L_005E8D0A:
    esi = MEM32(ebp + 0x8); /* 0x005E8D0A: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E8D0D: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E8D15; /* 0x005E8D11: jb 0x5e8d15 */
L_005E8D13:
    esi = MEM32(esi); /* 0x005E8D13: mov esi, dword ptr [esi] */
L_005E8D15:
    eax = MEM32(ecx); /* 0x005E8D15: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x005E8D17: push edx */
    PUSH32(esp, esi); /* 0x005E8D18: push esi */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x005E8D19: push dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x005E8D1C: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x005E8D1F: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E8D22: pop edi */
    esi = POP32_VAL(esp); /* 0x005E8D23: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E8D24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E8D25: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E8D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8D30u);

L_005E8D30:
    PUSH32(esp, ebp); /* 0x005E8D30: push ebp */
    ebp = esp; /* 0x005E8D31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E8D33: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8D36: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005E8D38: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8D3D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8D43: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E8D44: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E8D47: push esi */
    eax = MEM32(0x855000); /* 0x005E8D48: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E8D4D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E8D4F: push eax */
    eax = esp + 0x30; /* 0x005E8D50: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8D54: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E8D5A: mov esi, ecx */
    eax = MEM32(esi); /* 0x005E8D5C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x1C); /* 0x005E8D5E: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E8D61: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E8D63: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8E42; /* 0x005E8D65: je 0x5e8e42 */
L_005E8D6B:
    ecx = esp + 0xC; /* 0x005E8D6B: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E8D6F: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E8D74: mov dword ptr [esp + 0x38], 0 */
    /* test MEM8(esp + 0x18), 7 */ /* 0x005E8D7C: test byte ptr [esp + 0x18], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x18)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x8) = 0x190u; /* 0x005E8D81: mov dword ptr [esp + 8], 0x190 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8DB1; /* 0x005E8D89: jne 0x5e8db1 */
L_005E8D8B:
    PUSH32(esp, 0x20u); /* 0x005E8D8B: push 0x20 */
    ecx = esp + 0x10; /* 0x005E8D8D: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E8D91: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x005E8D96: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E8D9A: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E8D9D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E8D9D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x20); /* 0x005E8DA0: add eax, dword ptr [esp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x190u; /* 0x005E8DA4: mov dword ptr [eax], 0x190 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x20u; /* 0x005E8DAA: add dword ptr [esp + 0x18], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E8DC2; /* 0x005E8DAF: jmp 0x5e8dc2 */
L_005E8DB1:
    PUSH32(esp, ecx); /* 0x005E8DB1: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E8DB2: push 0x20 */
    eax = esp + 0x10; /* 0x005E8DB4: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005E8DB8: push eax */
    ecx = esp + 0x18; /* 0x005E8DB9: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F5800); /* 0x005E8DBD: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E8DC2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005E8DC2: push dword ptr [ebp + 8] */
    ecx = esp + 0x10; /* 0x005E8DC5: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F4D80); /* 0x005E8DC9: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E8DCE: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E8DD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8DDC; /* 0x005E8DD6: jne 0x5e8ddc */
L_005E8DD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E8DD8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E8DF6; /* 0x005E8DDA: jmp 0x5e8df6 */
L_005E8DDC:
    ecx = MEM32(0x927AF8); /* 0x005E8DDC: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E8DE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E8DF6; /* 0x005E8DE4: jne 0x5e8df6 */
L_005E8DE6:
    ecx = 0x00927AE8u; /* 0x005E8DE6: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E8DEB: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E8DF0: mov ecx, dword ptr [0x927af8] */
L_005E8DF6:
    eax = MEM32(esp + 0x18); /* 0x005E8DF6: mov eax, dword ptr [esp + 0x18] */
    edx = MEM32(ecx); /* 0x005E8DFA: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E8DFC: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E8DFF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E8DFF: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E8E02: push eax */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x005E8E03: push dword ptr [esp + 0x24] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E8E07: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E8E0A: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E8E0D: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005E8E10: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005E8E18: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005E8E1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8E42; /* 0x005E8E1E: je 0x5e8e42 */
L_005E8E20:
    PUSH32(esp, eax); /* 0x005E8E20: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E8E21: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8E27: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005E8E2A: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005E8E32: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E8E3A: mov dword ptr [esp + 0x28], 0 */
L_005E8E42:
    ecx = MEM32(esp + 0x30); /* 0x005E8E42: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8E46: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8E4D: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E8E4E: pop esi */
    esp = ebp; /* 0x005E8E4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8E51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E8E52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E8E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8E60u);

L_005E8E60:
    PUSH32(esp, ebp); /* 0x005E8E60: push ebp */
    ebp = esp; /* 0x005E8E61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E8E63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8E66: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005E8E68: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8E6D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8E73: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E8E74: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E8E77: push esi */
    eax = MEM32(0x855000); /* 0x005E8E78: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E8E7D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E8E7F: push eax */
    eax = esp + 0x30; /* 0x005E8E80: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8E84: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E8E8A: mov esi, ecx */
    /* cmp MEM32(esi + 0x6C), 0 */ /* 0x005E8E8C: cmp dword ptr [esi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E8F10; /* 0x005E8E90: je 0x5e8f10 */
L_005E8E92:
    RECOMP_CALL(sub_006EE000); /* 0x005E8E92: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x4C); /* 0x005E8E97: sub eax, dword ptr [esi + 0x4c] */
    _flag_k = FK_CMP;
    /* cmp eax, 0xAFC8u */ /* 0x005E8E9A: cmp eax, 0xafc8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAFC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E8F10; /* 0x005E8E9F: jbe 0x5e8f10 */
L_005E8EA1:
    ecx = esi; /* 0x005E8EA1: mov ecx, esi */
    RECOMP_CALL(sub_005E9380); /* 0x005E8EA3: call 0x5e9380 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0xC; /* 0x005E8EA8: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E8EAC: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E8EB1: mov dword ptr [esp + 0x38], 0 */
    ecx = esp + 0xC; /* 0x005E8EB9: lea ecx, [esp + 0xc] */
    PUSH32(esp, 0x208u); /* 0x005E8EBD: push 0x208 */
    RECOMP_CALL(sub_005F5560); /* 0x005E8EC2: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xC; /* 0x005E8EC7: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x005E8ECB: push eax */
    ecx = esi + 0xBC; /* 0x005E8ECC: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E8ED2: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E8ED7: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E8ED9: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005E8EDB: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005E8EDE: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005E8EE6: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005E8EEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E8F10; /* 0x005E8EEC: je 0x5e8f10 */
L_005E8EEE:
    PUSH32(esp, eax); /* 0x005E8EEE: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E8EEF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8EF5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005E8EF8: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005E8F00: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E8F08: mov dword ptr [esp + 0x28], 0 */
L_005E8F10:
    ecx = esi; /* 0x005E8F10: mov ecx, esi */
    RECOMP_CALL(sub_005EAF10); /* 0x005E8F12: call 0x5eaf10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x30); /* 0x005E8F17: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E8F1B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E8F22: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E8F23: pop esi */
    esp = ebp; /* 0x005E8F24: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E8F26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E8F27: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E8F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E8F30u);

L_005E8F30:
    PUSH32(esp, ebp); /* 0x005E8F30: push ebp */
    ebp = esp; /* 0x005E8F31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E8F33: push -1 */
    PUSH32(esp, 0x007B1476u); /* 0x005E8F35: push 0x7b1476 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E8F3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E8F40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x005E8F41: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E8F47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E8F4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E8F4E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E8F51: push ebx */
    PUSH32(esp, esi); /* 0x005E8F52: push esi */
    PUSH32(esp, edi); /* 0x005E8F53: push edi */
    PUSH32(esp, eax); /* 0x005E8F54: push eax */
    eax = ebp + (-0xC); /* 0x005E8F55: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E8F58: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E8F5E: mov ebx, ecx */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E8F60: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005E8F67: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E8F6E: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E8F75: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E8F7C: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E8F80: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x6C), 2 */ /* 0x005E8F87: cmp dword ptr [ebx + 0x6c], 2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x6C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005E8F8B: mov edi, dword ptr [0x7cc694] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E90E2; /* 0x005E8F91: jne 0x5e90e2 */
L_005E8F97:
    /* cmp MEM32(ebx + 0x60), 0 */ /* 0x005E8F97: cmp dword ptr [ebx + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E90E2; /* 0x005E8F9B: je 0x5e90e2 */
L_005E8FA1:
    edx = (uint32_t)MEM16(ebx + 0x64); /* 0x005E8FA1: movzx edx, word ptr [ebx + 0x64] */
    /* test LO16(edx), LO16(edx) */ /* 0x005E8FA5: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E90E2; /* 0x005E8FA8: je 0x5e90e2 */
L_005E8FAE:
    ecx = ebp + (-0x40); /* 0x005E8FAE: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_005E1A60); /* 0x005E8FB1: call 0x5e1a60 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E8FB6: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E8FB8: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x58); /* 0x005E8FBC: lea ecx, [ebp - 0x58] */
    edx = MEM32(ebx + 0x60); /* 0x005E8FBF: mov edx, dword ptr [ebx + 0x60] */
    RECOMP_CALL(sub_0047CC80); /* 0x005E8FC2: call 0x47cc80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E8FC7: mov byte ptr [ebp - 4], 2 */
    edx = 0x007F6580u; /* 0x005E8FCB: mov edx, 0x7f6580 */
    PUSH32(esp, eax); /* 0x005E8FD0: push eax */
    ecx = ebp + (-0xA0); /* 0x005E8FD1: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_0041A1E0); /* 0x005E8FD7: call 0x41a1e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8FDC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E8FDF: mov byte ptr [ebp - 4], 3 */
    edx = eax; /* 0x005E8FE3: mov edx, eax */
    PUSH32(esp, 0x3Au); /* 0x005E8FE5: push 0x3a */
    ecx = ebp + (-0x70); /* 0x005E8FE7: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_0055AB80); /* 0x005E8FEA: call 0x55ab80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E8FEF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E8FF2: mov byte ptr [ebp - 4], 4 */
    edx = eax; /* 0x005E8FF6: mov edx, eax */
    PUSH32(esp, esi); /* 0x005E8FF8: push esi */
    ecx = ebp + (-0x88); /* 0x005E8FF9: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_00419B80); /* 0x005E8FFF: call 0x419b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9004: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E9007: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + (-0x28); /* 0x005E900B: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005E900E: push eax */
    RECOMP_CALL(sub_004196B0); /* 0x005E900F: call 0x4196b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E9014: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x74)), 0x10u */ /* 0x005E9018: cmp dword ptr [ebp - 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E9029; /* 0x005E901C: jb 0x5e9029 */
L_005E901E:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x005E901E: push dword ptr [ebp - 0x88] */
    RECOMP_ICALL(edi); /* 0x005E9024: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9026: add esp, 4 */
    _flag_k = FK_ADD;
L_005E9029:
    MEM32(ebp + (-0x74)) = 0xFu; /* 0x005E9029: mov dword ptr [ebp - 0x74], 0xf */
    MEM32(ebp + (-0x78)) = 0; /* 0x005E9030: mov dword ptr [ebp - 0x78], 0 */
    MEM8(ebp + (-0x88)) = (uint8_t)(0); /* 0x005E9037: mov byte ptr [ebp - 0x88], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E903E: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x005E9042: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E9050; /* 0x005E9046: jb 0x5e9050 */
L_005E9048:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x005E9048: push dword ptr [ebp - 0x70] */
    RECOMP_ICALL(edi); /* 0x005E904B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E904D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E9050:
    MEM32(ebp + (-0x5C)) = 0xFu; /* 0x005E9050: mov dword ptr [ebp - 0x5c], 0xf */
    MEM32(ebp + (-0x60)) = 0; /* 0x005E9057: mov dword ptr [ebp - 0x60], 0 */
    MEM8(ebp + (-0x70)) = (uint8_t)(0); /* 0x005E905E: mov byte ptr [ebp - 0x70], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E9062: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x8C)), 0x10u */ /* 0x005E9066: cmp dword ptr [ebp - 0x8c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E907A; /* 0x005E906D: jb 0x5e907a */
L_005E906F:
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x005E906F: push dword ptr [ebp - 0xa0] */
    RECOMP_ICALL(edi); /* 0x005E9075: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9077: add esp, 4 */
    _flag_k = FK_ADD;
L_005E907A:
    MEM32(ebp + (-0x8C)) = 0xFu; /* 0x005E907A: mov dword ptr [ebp - 0x8c], 0xf */
    MEM32(ebp + (-0x90)) = 0; /* 0x005E9084: mov dword ptr [ebp - 0x90], 0 */
    MEM8(ebp + (-0xA0)) = (uint8_t)(0); /* 0x005E908E: mov byte ptr [ebp - 0xa0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E9095: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x005E9099: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E90A7; /* 0x005E909D: jb 0x5e90a7 */
L_005E909F:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005E909F: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x005E90A2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E90A4: add esp, 4 */
    _flag_k = FK_ADD;
L_005E90A7:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x005E90A7: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x005E90AE: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x005E90B5: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E90B9: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x005E90BD: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E90CB; /* 0x005E90C1: jb 0x5e90cb */
L_005E90C3:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005E90C3: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x005E90C6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E90C8: add esp, 4 */
    _flag_k = FK_ADD;
L_005E90CB:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x005E90CB: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x005E90D2: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x005E90D9: mov byte ptr [ebp - 0x40], 0 */
    goto L_005E9193; /* 0x005E90DD: jmp 0x5e9193 */
L_005E90E2:
    ecx = ebx + 0x38; /* 0x005E90E2: lea ecx, [ebx + 0x38] */
    RECOMP_CALL(sub_0046D220); /* 0x005E90E5: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E90EA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9193; /* 0x005E90EC: je 0x5e9193 */
L_005E90F2:
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x005E90F2: push dword ptr [ebx + 0x3c] */
    ecx = ebp + (-0x58); /* 0x005E90F5: lea ecx, [ebp - 0x58] */
    PUSH32(esp, MEM32(ebx + 0x38)); /* 0x005E90F8: push dword ptr [ebx + 0x38] */
    RECOMP_CALL(sub_0051C670); /* 0x005E90FB: call 0x51c670 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E9100: mov byte ptr [ebp - 4], 6 */
    edx = 0x007F658Cu; /* 0x005E9104: mov edx, 0x7f658c */
    PUSH32(esp, eax); /* 0x005E9109: push eax */
    ecx = ebp + (-0x40); /* 0x005E910A: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_0041A1E0); /* 0x005E910D: call 0x41a1e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E9112: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005E9115: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005E9117: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x28); /* 0x005E911B: lea eax, [ebp - 0x28] */
    /* cmp eax, esi */ /* 0x005E911E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E914B; /* 0x005E9120: je 0x5e914b */
L_005E9122:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E9122: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E9130; /* 0x005E9126: jb 0x5e9130 */
L_005E9128:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005E9128: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x005E912B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E912D: add esp, 4 */
    _flag_k = FK_ADD;
L_005E9130:
    PUSH32(esp, esi); /* 0x005E9130: push esi */
    ecx = ebp + (-0x28); /* 0x005E9131: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E9134: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E913B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E9142: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E9146: call 0x419890 */
    RECOMP_FLAGS_IN();
L_005E914B:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E914B: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x005E914F: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E915D; /* 0x005E9153: jb 0x5e915d */
L_005E9155:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005E9155: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x005E9158: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E915A: add esp, 4 */
    _flag_k = FK_ADD;
L_005E915D:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x005E915D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x005E9164: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x005E916B: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E916F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x005E9173: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E9181; /* 0x005E9177: jb 0x5e9181 */
L_005E9179:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005E9179: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x005E917C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E917E: add esp, 4 */
    _flag_k = FK_ADD;
L_005E9181:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x005E9181: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x005E9188: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x005E918F: mov byte ptr [ebp - 0x58], 0 */
L_005E9193:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E9193: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E9199: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E91A1; /* 0x005E919B: jne 0x5e91a1 */
L_005E919D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E919D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E91BB; /* 0x005E919F: jmp 0x5e91bb */
L_005E91A1:
    ecx = MEM32(0x927AF0); /* 0x005E91A1: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005E91A7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E91BB; /* 0x005E91A9: jne 0x5e91bb */
L_005E91AB:
    ecx = 0x00927AE8u; /* 0x005E91AB: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E91B0: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005E91B5: mov ecx, dword ptr [0x927af0] */
L_005E91BB:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E91BB: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + (-0x28); /* 0x005E91BF: lea edx, [ebp - 0x28] */
    eax = MEM32(ecx); /* 0x005E91C2: mov eax, dword ptr [ecx] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x28)); } /* 0x005E91C4: cmovae edx, dword ptr [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x005E91C8: push edx */
    PUSH32(esp, 0x007F6524u); /* 0x005E91C9: push 0x7f6524 */
    RECOMP_ICALL(MEM32(eax + 0xAC)); /* 0x005E91CE: call dword ptr [eax + 0xac] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E91D4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005E91DB: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E91E9; /* 0x005E91DF: jb 0x5e91e9 */
L_005E91E1:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005E91E1: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x005E91E4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E91E6: add esp, 4 */
    _flag_k = FK_ADD;
L_005E91E9:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005E91E9: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E91F0: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005E91F7: mov byte ptr [ebp - 0x28], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E91FB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E91FE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E9205: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E9206: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9207: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9208: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E9209: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E920C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E920E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E9213: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9215: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E9216: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E9220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9220u);

L_005E9220:
    PUSH32(esp, ebp); /* 0x005E9220: push ebp */
    ebp = esp; /* 0x005E9221: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005E9223: push ebx */
    PUSH32(esp, esi); /* 0x005E9224: push esi */
    esi = ecx; /* 0x005E9225: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005E9227: push edi */
    ecx = esi + 0x40; /* 0x005E9228: lea ecx, [esi + 0x40] */
    RECOMP_CALL(sub_0046D220); /* 0x005E922B: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E9230: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9298; /* 0x005E9232: je 0x5e9298 */
L_005E9234:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E9234: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E923A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9242; /* 0x005E923C: jne 0x5e9242 */
L_005E923E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E923E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E925C; /* 0x005E9240: jmp 0x5e925c */
L_005E9242:
    ecx = MEM32(0x927B08); /* 0x005E9242: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E9248: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E925C; /* 0x005E924A: jne 0x5e925c */
L_005E924C:
    ecx = 0x00927AE8u; /* 0x005E924C: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E9251: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E9256: mov ecx, dword ptr [0x927b08] */
L_005E925C:
    ebx = MEM32(ebp + 0x8); /* 0x005E925C: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x005E925F: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005E9261: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E9263: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + 0xC); /* 0x005E9266: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9269: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E926C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E926C: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E926F: push eax */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x005E9270: push dword ptr [ebx + 0x14] */
    eax = MEM32(edx); /* 0x005E9273: mov eax, dword ptr [edx] */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x005E9275: push dword ptr [esi + 0x44] */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x005E9278: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(eax); /* 0x005E927B: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E927D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9298; /* 0x005E927F: je 0x5e9298 */
L_005E9281:
    eax = MEM32(ebx + 0xC); /* 0x005E9281: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x005E9284: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9287: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E928A: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E928A: shr eax, 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x005E928D: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x005E928F: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005E9291: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9292: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9293: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005E9294: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E9295: ret 8 */
L_005E9298:
    edi = POP32_VAL(esp); /* 0x005E9298: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9299: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E929A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005E929C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005E929D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E929E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E92B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E92B0u);

L_005E92B0:
    PUSH32(esp, ebp); /* 0x005E92B0: push ebp */
    ebp = esp; /* 0x005E92B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E92B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E92B6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E92B9: push esi */
    esi = ecx; /* 0x005E92BA: mov esi, ecx */
    MEM32(esi + 0x10) = 0; /* 0x005E92BC: mov dword ptr [esi + 0x10], 0 */
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x005E92C3: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E92F9; /* 0x005E92C7: je 0x5e92f9 */
L_005E92C9:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E92C9: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E92CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E92D7; /* 0x005E92D1: jne 0x5e92d7 */
L_005E92D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E92D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E92F1; /* 0x005E92D5: jmp 0x5e92f1 */
L_005E92D7:
    ecx = MEM32(0x927AEC); /* 0x005E92D7: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E92DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E92F1; /* 0x005E92DF: jne 0x5e92f1 */
L_005E92E1:
    ecx = 0x00927AE8u; /* 0x005E92E1: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E92E6: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E92EB: mov ecx, dword ptr [0x927aec] */
L_005E92F1:
    eax = MEM32(ecx); /* 0x005E92F1: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x005E92F3: push dword ptr [esi + 0x68] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x005E92F6: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_005E92F9:
    ecx = MEM32(esi + 0xB8); /* 0x005E92F9: mov ecx, dword ptr [esi + 0xb8] */
    MEM32(esi + 0x68) = 0; /* 0x005E92FF: mov dword ptr [esi + 0x68], 0 */
    MEM32(esi + 0x6C) = 0; /* 0x005E9306: mov dword ptr [esi + 0x6c], 0 */
    /* test ecx, ecx */ /* 0x005E930D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9316; /* 0x005E930F: je 0x5e9316 */
L_005E9311:
    RECOMP_CALL(sub_005F0340); /* 0x005E9311: call 0x5f0340 */
    RECOMP_FLAGS_IN();
L_005E9316:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E9316: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x60) = 0; /* 0x005E9318: mov dword ptr [esi + 0x60], 0 */
    MEM16(esi + 0x64) = (uint16_t)(LO16(eax)); /* 0x005E931F: mov word ptr [esi + 0x64], ax */
    MEM32(esi + 0x48) = eax; /* 0x005E9323: mov dword ptr [esi + 0x48], eax */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E9326: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E932C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9334; /* 0x005E932E: jne 0x5e9334 */
L_005E9330:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E9330: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E934E; /* 0x005E9332: jmp 0x5e934e */
L_005E9334:
    ecx = MEM32(0x927B08); /* 0x005E9334: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E933A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E934E; /* 0x005E933C: jne 0x5e934e */
L_005E933E:
    ecx = 0x00927AE8u; /* 0x005E933E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E9343: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E9348: mov ecx, dword ptr [0x927b08] */
L_005E934E:
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x005E934E: push dword ptr [esi + 0x44] */
    eax = MEM32(ecx); /* 0x005E9351: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x005E9353: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005E9356: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) & 0xFF0FFFFFu; /* 0x005E9359: and dword ptr [esp + 0xc], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0xF) = (uint8_t)(0); /* 0x005E9361: mov byte ptr [esp + 0xf], 0 */
    eax = MEM32(esp + 0xC); /* 0x005E9366: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E936A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = 0; /* 0x005E936F: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = eax; /* 0x005E9376: mov dword ptr [esi + 0x44], eax */
    esi = POP32_VAL(esp); /* 0x005E9379: pop esi */
    esp = ebp; /* 0x005E937A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E937C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E937D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E9380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9380u);

L_005E9380:
    PUSH32(esp, ebp); /* 0x005E9380: push ebp */
    ebp = esp; /* 0x005E9381: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E9383: push -1 */
    PUSH32(esp, 0x007AEB60u); /* 0x005E9385: push 0x7aeb60 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E938A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E9390: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005E9391: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E9394: push esi */
    eax = MEM32(0x855000); /* 0x005E9395: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E939A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E939C: push eax */
    eax = ebp + (-0xC); /* 0x005E939D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E93A0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E93A6: mov esi, ecx */
    MEM32(esi + 0x10) = 0; /* 0x005E93A8: mov dword ptr [esi + 0x10], 0 */
    /* cmp MEM32(esi + 0x6C), 0 */ /* 0x005E93AF: cmp dword ptr [esi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E9484; /* 0x005E93B3: je 0x5e9484 */
L_005E93B9:
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x005E93B9: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E93EF; /* 0x005E93BD: je 0x5e93ef */
L_005E93BF:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E93BF: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E93C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E93CD; /* 0x005E93C7: jne 0x5e93cd */
L_005E93C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E93C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E93E7; /* 0x005E93CB: jmp 0x5e93e7 */
L_005E93CD:
    ecx = MEM32(0x927AEC); /* 0x005E93CD: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E93D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E93E7; /* 0x005E93D5: jne 0x5e93e7 */
L_005E93D7:
    ecx = 0x00927AE8u; /* 0x005E93D7: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E93DC: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E93E1: mov ecx, dword ptr [0x927aec] */
L_005E93E7:
    eax = MEM32(ecx); /* 0x005E93E7: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x005E93E9: push dword ptr [esi + 0x68] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x005E93EC: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_005E93EF:
    ecx = ebp + (-0x34); /* 0x005E93EF: lea ecx, [ebp - 0x34] */
    MEM32(esi + 0x68) = 0; /* 0x005E93F2: mov dword ptr [esi + 0x68], 0 */
    RECOMP_CALL(sub_005F3C60); /* 0x005E93F9: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E93FE: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(ebp + (-0x28)), 7 */ /* 0x005E9405: test byte ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x1F8u; /* 0x005E9409: mov dword ptr [ebp - 0x10], 0x1f8 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9434; /* 0x005E9410: jne 0x5e9434 */
L_005E9412:
    PUSH32(esp, 0x20u); /* 0x005E9412: push 0x20 */
    ecx = ebp + (-0x34); /* 0x005E9414: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9417: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x005E941C: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E941F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9422: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9422: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x005E9425: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1F8u; /* 0x005E9428: mov dword ptr [eax], 0x1f8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x005E942E: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E9443; /* 0x005E9432: jmp 0x5e9443 */
L_005E9434:
    PUSH32(esp, ecx); /* 0x005E9434: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E9435: push 0x20 */
    eax = ebp + (-0x10); /* 0x005E9437: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005E943A: push eax */
    ecx = ebp + (-0x34); /* 0x005E943B: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_005F5800); /* 0x005E943E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E9443:
    PUSH32(esp, 0); /* 0x005E9443: push 0 */
    eax = ebp + (-0x34); /* 0x005E9445: lea eax, [ebp - 0x34] */
    ecx = esi; /* 0x005E9448: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E944A: push eax */
    RECOMP_CALL(sub_005E9220); /* 0x005E944B: call 0x5e9220 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C) = 0; /* 0x005E9450: mov dword ptr [esi + 0x6c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E9457: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x20)); /* 0x005E945E: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x005E9461: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9484; /* 0x005E9463: je 0x5e9484 */
L_005E9465:
    PUSH32(esp, eax); /* 0x005E9465: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E9466: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E946C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0; /* 0x005E946F: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E9476: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005E947D: mov dword ptr [ebp - 0x18], 0 */
L_005E9484:
    ecx = MEM32(esi + 0xB8); /* 0x005E9484: mov ecx, dword ptr [esi + 0xb8] */
    /* test ecx, ecx */ /* 0x005E948A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9493; /* 0x005E948C: je 0x5e9493 */
L_005E948E:
    RECOMP_CALL(sub_005F0340); /* 0x005E948E: call 0x5f0340 */
    RECOMP_FLAGS_IN();
L_005E9493:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E9493: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x60) = 0; /* 0x005E9495: mov dword ptr [esi + 0x60], 0 */
    ecx = esi + 0x40; /* 0x005E949C: lea ecx, [esi + 0x40] */
    MEM16(esi + 0x64) = (uint16_t)(LO16(eax)); /* 0x005E949F: mov word ptr [esi + 0x64], ax */
    MEM32(esi + 0x48) = eax; /* 0x005E94A3: mov dword ptr [esi + 0x48], eax */
    RECOMP_CALL(sub_0046D220); /* 0x005E94A6: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E94AB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E94FF; /* 0x005E94AD: je 0x5e94ff */
L_005E94AF:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E94AF: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E94B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E94BD; /* 0x005E94B7: jne 0x5e94bd */
L_005E94B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E94B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E94D7; /* 0x005E94BB: jmp 0x5e94d7 */
L_005E94BD:
    ecx = MEM32(0x927B08); /* 0x005E94BD: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E94C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E94D7; /* 0x005E94C5: jne 0x5e94d7 */
L_005E94C7:
    ecx = 0x00927AE8u; /* 0x005E94C7: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E94CC: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E94D1: mov ecx, dword ptr [0x927b08] */
L_005E94D7:
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x005E94D7: push dword ptr [esi + 0x44] */
    eax = MEM32(ecx); /* 0x005E94DA: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x005E94DC: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005E94DF: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFF0FFFFFu; /* 0x005E94E2: and dword ptr [ebp - 0x10], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0xD)) = (uint8_t)(0); /* 0x005E94E9: mov byte ptr [ebp - 0xd], 0 */
    eax = MEM32(ebp + (-0x10)); /* 0x005E94ED: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E94F0: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = 0; /* 0x005E94F5: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = eax; /* 0x005E94FC: mov dword ptr [esi + 0x44], eax */
L_005E94FF:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E94FF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E9502: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E9509: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E950A: pop esi */
    esp = ebp; /* 0x005E950B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E950D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E950E: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E9510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9510u);

L_005E9510:
    PUSH32(esp, ebp); /* 0x005E9510: push ebp */
    ebp = esp; /* 0x005E9511: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E9513: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x005E9516: push ecx */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x005E9517: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x005E951B: push esi */
    esi = ecx; /* 0x005E951C: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E952C; /* 0x005E951E: jne 0x5e952c */
L_005E9520:
    RECOMP_CALL(sub_005E9380); /* 0x005E9520: call 0x5e9380 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005E9525: pop esi */
    esp = ebp; /* 0x005E9526: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9528: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E9529: ret 4 */
L_005E952C:
    /* cmp MEM32(esi + 0x6C), 2 */ /* 0x005E952C: cmp dword ptr [esi + 0x6c], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E955D; /* 0x005E9530: je 0x5e955d */
L_005E9532:
    MEM32(esi + 0x6C) = 2; /* 0x005E9532: mov dword ptr [esi + 0x6c], 2 */
    MEM32(esi + 0x10) = 0; /* 0x005E9539: mov dword ptr [esi + 0x10], 0 */
    RECOMP_CALL(sub_005E8F30); /* 0x005E9540: call 0x5e8f30 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006EE000); /* 0x005E9545: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005E954A: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx + 0x10) = eax; /* 0x005E954D: mov dword ptr [ecx + 0x10], eax */
    RECOMP_CALL(sub_006EE000); /* 0x005E9550: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006EE000); /* 0x005E9555: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x005E955A: mov dword ptr [esi + 4], eax */
L_005E955D:
    esi = POP32_VAL(esp); /* 0x005E955D: pop esi */
    esp = ebp; /* 0x005E955E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9560: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E9561: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E9570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9570u);

L_005E9570:
    PUSH32(esp, esi); /* 0x005E9570: push esi */
    esi = ecx; /* 0x005E9571: mov esi, ecx */
    RECOMP_CALL(sub_006EE000); /* 0x005E9573: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005E9578: mov edx, eax */
    eax = MEM32(esi + 0x54); /* 0x005E957A: mov eax, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x50); /* 0x005E957D: sub edx, dword ptr [esi + 0x50] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x005E9580: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9591; /* 0x005E9582: jne 0x5e9591 */
L_005E9584:
    MEM32(esi + 0x54) = edx; /* 0x005E9584: mov dword ptr [esi + 0x54], edx */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005E9587: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005E9587: shr edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x58));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x58); /* 0x005E9589: add edx, dword ptr [esi + 0x58] */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edx; /* 0x005E958C: mov dword ptr [esi + 0x10], edx */
    esi = POP32_VAL(esp); /* 0x005E958F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E9590: ret  */
L_005E9591:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E9591: add eax, edx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005E9593: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005E9593: shr edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x58));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x58); /* 0x005E9595: add edx, dword ptr [esi + 0x58] */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005E9598: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x005E9598: shr eax, 1 */
    MEM32(esi + 0x54) = eax; /* 0x005E959A: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0x10) = edx; /* 0x005E959D: mov dword ptr [esi + 0x10], edx */
    esi = POP32_VAL(esp); /* 0x005E95A0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E95A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E95B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E95B0u);

L_005E95B0:
    PUSH32(esp, ebp); /* 0x005E95B0: push ebp */
    ebp = esp; /* 0x005E95B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E95B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E95B6: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005E95B8: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E95BD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E95C3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E95C4: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E95C7: push esi */
    eax = MEM32(0x855000); /* 0x005E95C8: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E95CD: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E95CF: push eax */
    eax = esp + 0x30; /* 0x005E95D0: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E95D4: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E95DA: mov esi, ecx */
    RECOMP_CALL(sub_006EE000); /* 0x005E95DC: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x50) = eax; /* 0x005E95E1: mov dword ptr [esi + 0x50], eax */
    ecx = esp + 0xC; /* 0x005E95E4: lea ecx, [esp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005E95E8: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x58) = eax; /* 0x005E95EB: mov dword ptr [esi + 0x58], eax */
    RECOMP_CALL(sub_005F3C60); /* 0x005E95EE: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E95F3: mov dword ptr [esp + 0x38], 0 */
    /* test MEM8(esp + 0x18), 7 */ /* 0x005E95FB: test byte ptr [esp + 0x18], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x18)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x8) = 0x1F9u; /* 0x005E9600: mov dword ptr [esp + 8], 0x1f9 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9630; /* 0x005E9608: jne 0x5e9630 */
L_005E960A:
    PUSH32(esp, 0x20u); /* 0x005E960A: push 0x20 */
    ecx = esp + 0x10; /* 0x005E960C: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9610: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x005E9615: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9619: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E961C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E961C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x20); /* 0x005E961F: add eax, dword ptr [esp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1F9u; /* 0x005E9623: mov dword ptr [eax], 0x1f9 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x20u; /* 0x005E9629: add dword ptr [esp + 0x18], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E9641; /* 0x005E962E: jmp 0x5e9641 */
L_005E9630:
    PUSH32(esp, ecx); /* 0x005E9630: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E9631: push 0x20 */
    eax = esp + 0x10; /* 0x005E9633: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005E9637: push eax */
    ecx = esp + 0x18; /* 0x005E9638: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F5800); /* 0x005E963C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E9641:
    PUSH32(esp, 0); /* 0x005E9641: push 0 */
    eax = esp + 0x10; /* 0x005E9643: lea eax, [esp + 0x10] */
    ecx = esi; /* 0x005E9647: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E9649: push eax */
    RECOMP_CALL(sub_005E9220); /* 0x005E964A: call 0x5e9220 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005E964F: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005E9657: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005E965B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9681; /* 0x005E965D: je 0x5e9681 */
L_005E965F:
    PUSH32(esp, eax); /* 0x005E965F: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E9660: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9666: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005E9669: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005E9671: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E9679: mov dword ptr [esp + 0x28], 0 */
L_005E9681:
    ecx = MEM32(esp + 0x30); /* 0x005E9681: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E9685: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E968C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E968D: pop esi */
    esp = ebp; /* 0x005E968E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9690: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E9691: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E96A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E96A0u);

L_005E96A0:
    PUSH32(esp, ebp); /* 0x005E96A0: push ebp */
    ebp = esp; /* 0x005E96A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E96A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E96A6: push -1 */
    PUSH32(esp, 0x007B14B6u); /* 0x005E96A8: push 0x7b14b6 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E96AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E96B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x448u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x448u; /* 0x005E96B4: sub esp, 0x448 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E96BA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E96BF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x440) = eax; /* 0x005E96C1: mov dword ptr [esp + 0x440], eax */
    PUSH32(esp, ebx); /* 0x005E96C8: push ebx */
    PUSH32(esp, esi); /* 0x005E96C9: push esi */
    PUSH32(esp, edi); /* 0x005E96CA: push edi */
    eax = MEM32(0x855000); /* 0x005E96CB: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E96D0: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E96D2: push eax */
    eax = esp + 0x458; /* 0x005E96D3: lea eax, [esp + 0x458] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E96DA: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E96E0: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005E96E2: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0xC); /* 0x005E96E5: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x6C) = 1; /* 0x005E96E8: mov dword ptr [edi + 0x6c], 1 */
    MEM32(edi + 0x40) = esi; /* 0x005E96EF: mov dword ptr [edi + 0x40], esi */
    MEM32(edi + 0x44) = ebx; /* 0x005E96F2: mov dword ptr [edi + 0x44], ebx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E96F5: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E96FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9703; /* 0x005E96FD: jne 0x5e9703 */
L_005E96FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E96FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E971D; /* 0x005E9701: jmp 0x5e971d */
L_005E9703:
    ecx = MEM32(0x927B08); /* 0x005E9703: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E9709: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E971D; /* 0x005E970B: jne 0x5e971d */
L_005E970D:
    ecx = 0x00927AE8u; /* 0x005E970D: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E9712: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E9717: mov ecx, dword ptr [0x927b08] */
L_005E971D:
    eax = esp + 0x38; /* 0x005E971D: lea eax, [esp + 0x38] */
    PUSH32(esp, eax); /* 0x005E9721: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E9722: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = esp; /* 0x005E9725: mov eax, esp */
    MEM32(eax) = esi; /* 0x005E9727: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x005E9729: mov dword ptr [eax + 4], ebx */
    eax = MEM32(ecx); /* 0x005E972C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005E972E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x44); /* 0x005E9731: mov eax, dword ptr [esp + 0x44] */
    ecx = edi; /* 0x005E9735: mov ecx, edi */
    MEM32(edi + 0x60) = eax; /* 0x005E9737: mov dword ptr [edi + 0x60], eax */
    SET_LO16(eax, MEM16(esp + 0x48)); /* 0x005E973A: mov ax, word ptr [esp + 0x48] */
    MEM16(edi + 0x64) = (uint16_t)(LO16(eax)); /* 0x005E973F: mov word ptr [edi + 0x64], ax */
    RECOMP_CALL(sub_005E8F30); /* 0x005E9743: call 0x5e8f30 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = 0; /* 0x005E9748: mov dword ptr [esp + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E9750: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E9756: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E975E; /* 0x005E9758: jne 0x5e975e */
L_005E975A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E975A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E9778; /* 0x005E975C: jmp 0x5e9778 */
L_005E975E:
    ecx = MEM32(0x927AEC); /* 0x005E975E: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005E9764: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9778; /* 0x005E9766: jne 0x5e9778 */
L_005E9768:
    ecx = 0x00927AE8u; /* 0x005E9768: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E976D: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005E9772: mov ecx, dword ptr [0x927aec] */
L_005E9778:
    eax = MEM32(ecx); /* 0x005E9778: mov eax, dword ptr [ecx] */
    edx = esp + 0x14; /* 0x005E977A: lea edx, [esp + 0x14] */
    PUSH32(esp, edx); /* 0x005E977E: push edx */
    PUSH32(esp, 0x400u); /* 0x005E977F: push 0x400 */
    edx = esp + 0x54; /* 0x005E9784: lea edx, [esp + 0x54] */
    PUSH32(esp, edx); /* 0x005E9788: push edx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x005E9789: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x18; /* 0x005E978C: lea ecx, [esp + 0x18] */
    MEM32(edi + 0x68) = eax; /* 0x005E9790: mov dword ptr [edi + 0x68], eax */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9793: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x460) = 0; /* 0x005E9798: mov dword ptr [esp + 0x460], 0 */
    /* test MEM8(esp + 0x24), 7 */ /* 0x005E97A3: test byte ptr [esp + 0x24], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x24)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x1F6u; /* 0x005E97A8: mov dword ptr [esp + 0x10], 0x1f6 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E97DE; /* 0x005E97B0: jne 0x5e97de */
L_005E97B2:
    PUSH32(esp, 0x20u); /* 0x005E97B2: push 0x20 */
    ecx = esp + 0x1C; /* 0x005E97B4: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E97B8: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x005E97BD: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E97C1: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E97C4: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E97C4: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x2C); /* 0x005E97C7: add eax, dword ptr [esp + 0x2c] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1F6u; /* 0x005E97CB: mov dword ptr [eax], 0x1f6 */
    eax = MEM32(esp + 0x24); /* 0x005E97D1: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005E97D5: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x24) = eax; /* 0x005E97D8: mov dword ptr [esp + 0x24], eax */
    goto L_005E97F3; /* 0x005E97DC: jmp 0x5e97f3 */
L_005E97DE:
    PUSH32(esp, ecx); /* 0x005E97DE: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E97DF: push 0x20 */
    eax = esp + 0x18; /* 0x005E97E1: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E97E5: push eax */
    ecx = esp + 0x24; /* 0x005E97E6: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_005F5800); /* 0x005E97EA: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x005E97EF: mov eax, dword ptr [esp + 0x24] */
L_005E97F3:
    esi = MEM32(esp + 0x14); /* 0x005E97F3: mov esi, dword ptr [esp + 0x14] */
    MEM32(esp + 0x10) = esi; /* 0x005E97F7: mov dword ptr [esp + 0x10], esi */
    /* test LO8(eax), 7 */ /* 0x005E97FB: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9827; /* 0x005E97FD: jne 0x5e9827 */
L_005E97FF:
    PUSH32(esp, 0x20u); /* 0x005E97FF: push 0x20 */
    ecx = esp + 0x1C; /* 0x005E9801: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9805: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x005E980A: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E980E: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9811: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9811: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x2C); /* 0x005E9814: add eax, dword ptr [esp + 0x2c] */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x005E9818: mov dword ptr [eax], esi */
    eax = MEM32(esp + 0x24); /* 0x005E981A: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x005E981E: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x24) = eax; /* 0x005E9821: mov dword ptr [esp + 0x24], eax */
    goto L_005E983C; /* 0x005E9825: jmp 0x5e983c */
L_005E9827:
    PUSH32(esp, ecx); /* 0x005E9827: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E9828: push 0x20 */
    eax = esp + 0x18; /* 0x005E982A: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E982E: push eax */
    ecx = esp + 0x24; /* 0x005E982F: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_005F5800); /* 0x005E9833: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x24); /* 0x005E9838: mov eax, dword ptr [esp + 0x24] */
L_005E983C:
    esi = MEM32(esp + 0x14); /* 0x005E983C: mov esi, dword ptr [esp + 0x14] */
    /* test esi, esi */ /* 0x005E9840: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9893; /* 0x005E9842: je 0x5e9893 */
L_005E9844:
    /* test LO8(eax), 7 */ /* 0x005E9844: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi * 8; /* 0x005E9846: lea eax, [esi*8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9883; /* 0x005E984D: jne 0x5e9883 */
L_005E984F:
    PUSH32(esp, eax); /* 0x005E984F: push eax */
    ecx = esp + 0x1C; /* 0x005E9850: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9854: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005E9859: push esi */
    eax = esp + 0x50; /* 0x005E985A: lea eax, [esp + 0x50] */
    PUSH32(esp, eax); /* 0x005E985E: push eax */
    eax = MEM32(esp + 0x2C); /* 0x005E985F: mov eax, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9863: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9866: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9866: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x34); /* 0x005E9869: add eax, dword ptr [esp + 0x34] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E986D: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005E986E: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005E9873: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E9877: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = eax + esi * 8; /* 0x005E987A: lea eax, [eax + esi*8] */
    MEM32(esp + 0x24) = eax; /* 0x005E987D: mov dword ptr [esp + 0x24], eax */
    goto L_005E9893; /* 0x005E9881: jmp 0x5e9893 */
L_005E9883:
    PUSH32(esp, ecx); /* 0x005E9883: push ecx */
    PUSH32(esp, eax); /* 0x005E9884: push eax */
    eax = esp + 0x54; /* 0x005E9885: lea eax, [esp + 0x54] */
    PUSH32(esp, eax); /* 0x005E9889: push eax */
    ecx = esp + 0x24; /* 0x005E988A: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_005F5800); /* 0x005E988E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E9893:
    PUSH32(esp, 0); /* 0x005E9893: push 0 */
    eax = esp + 0x1C; /* 0x005E9895: lea eax, [esp + 0x1c] */
    ecx = edi; /* 0x005E9899: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E989B: push eax */
    RECOMP_CALL(sub_005E9220); /* 0x005E989C: call 0x5e9220 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x460) = 0xFFFFFFFFu; /* 0x005E98A1: mov dword ptr [esp + 0x460], 0xffffffff */
    eax = MEM32(esp + 0x2C); /* 0x005E98AC: mov eax, dword ptr [esp + 0x2c] */
    /* test eax, eax */ /* 0x005E98B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E98D6; /* 0x005E98B2: je 0x5e98d6 */
L_005E98B4:
    PUSH32(esp, eax); /* 0x005E98B4: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E98B5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E98BB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x2C) = 0; /* 0x005E98BE: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E98C6: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005E98CE: mov dword ptr [esp + 0x34], 0 */
L_005E98D6:
    ecx = MEM32(esp + 0x458); /* 0x005E98D6: mov ecx, dword ptr [esp + 0x458] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E98DD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E98E4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E98E5: pop edi */
    esi = POP32_VAL(esp); /* 0x005E98E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E98E7: pop ebx */
    ecx = MEM32(esp + 0x440); /* 0x005E98E8: mov ecx, dword ptr [esp + 0x440] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E98EF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E98F1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E98F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E98F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E98F9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E9900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9900u);

L_005E9900:
    PUSH32(esp, ebp); /* 0x005E9900: push ebp */
    ebp = esp; /* 0x005E9901: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E9903: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E9906: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005E9908: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E990D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E9913: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005E9914: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E9917: push ebx */
    PUSH32(esp, esi); /* 0x005E9918: push esi */
    eax = MEM32(0x855000); /* 0x005E9919: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E991E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E9920: push eax */
    eax = esp + 0x38; /* 0x005E9921: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E9925: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E992B: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005E992D: mov ebx, dword ptr [ebp + 8] */
    ecx = esp + 0x14; /* 0x005E9930: lea ecx, [esp + 0x14] */
    MEM8(esi + 0xD) = (uint8_t)(LO8(ebx)); /* 0x005E9934: mov byte ptr [esi + 0xd], bl */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9937: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005E993C: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E9944: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 9; /* 0x005E9949: mov dword ptr [esp + 0x10], 9 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9979; /* 0x005E9951: jne 0x5e9979 */
L_005E9953:
    PUSH32(esp, 0x20u); /* 0x005E9953: push 0x20 */
    ecx = esp + 0x18; /* 0x005E9955: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9959: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E995E: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9962: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9965: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9965: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E9968: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 9; /* 0x005E996C: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005E9972: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E998A; /* 0x005E9977: jmp 0x5e998a */
L_005E9979:
    PUSH32(esp, ecx); /* 0x005E9979: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E997A: push 0x20 */
    eax = esp + 0x18; /* 0x005E997C: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E9980: push eax */
    ecx = esp + 0x20; /* 0x005E9981: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E9985: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E998A:
    PUSH32(esp, ebx); /* 0x005E998A: push ebx */
    ecx = esp + 0x18; /* 0x005E998B: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F59F0); /* 0x005E998F: call 0x5f59f0 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E9994: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E999A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E99A2; /* 0x005E999C: jne 0x5e99a2 */
L_005E999E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E999E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E99BC; /* 0x005E99A0: jmp 0x5e99bc */
L_005E99A2:
    ecx = MEM32(0x927AF8); /* 0x005E99A2: mov ecx, dword ptr [0x927af8] */
    /* test ecx, ecx */ /* 0x005E99A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E99BC; /* 0x005E99AA: jne 0x5e99bc */
L_005E99AC:
    ecx = 0x00927AE8u; /* 0x005E99AC: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E99B1: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF8); /* 0x005E99B6: mov ecx, dword ptr [0x927af8] */
L_005E99BC:
    eax = MEM32(esp + 0x20); /* 0x005E99BC: mov eax, dword ptr [esp + 0x20] */
    edx = MEM32(ecx); /* 0x005E99C0: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E99C2: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E99C5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E99C5: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E99C8: push eax */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x005E99C9: push dword ptr [esp + 0x2c] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x005E99CD: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x005E99D0: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005E99D3: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x005E99D6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9A3D; /* 0x005E99D8: jne 0x5e9a3d */
L_005E99DA:
    PUSH32(esp, 0x100u); /* 0x005E99DA: push 0x100 */
    ecx = esp + 0x2C; /* 0x005E99DF: lea ecx, [esp + 0x2c] */
    MEM32(esp + 0x20) = 0x800u; /* 0x005E99E3: mov dword ptr [esp + 0x20], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E99EB: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x005E99F0: push 0x20 */
    ecx = esp + 0x18; /* 0x005E99F2: lea ecx, [esp + 0x18] */
    MEM32(esp + 0x24) = 0; /* 0x005E99F6: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E99FE: mov dword ptr [esp + 0x28], 0 */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9A06: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E9A0B: mov eax, dword ptr [esp + 0x20] */
    ecx = esi + 0xBC; /* 0x005E9A0F: lea ecx, [esi + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9A15: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9A18: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9A18: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E9A1B: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0xAu; /* 0x005E9A1F: mov dword ptr [eax], 0xa */
    eax = esp + 0x14; /* 0x005E9A25: lea eax, [esp + 0x14] */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005E9A29: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E9A2E: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E9A2F: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E9A34: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E9A36: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005E9A38: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_005E9A93; /* 0x005E9A3B: jmp 0x5e9a93 */
L_005E9A3D:
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E9A3D: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 9; /* 0x005E9A42: mov dword ptr [esp + 0x10], 9 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9A72; /* 0x005E9A4A: jne 0x5e9a72 */
L_005E9A4C:
    PUSH32(esp, 0x20u); /* 0x005E9A4C: push 0x20 */
    ecx = esp + 0x18; /* 0x005E9A4E: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9A52: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005E9A57: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9A5B: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9A5E: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9A5E: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E9A61: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 9; /* 0x005E9A65: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005E9A6B: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E9A83; /* 0x005E9A70: jmp 0x5e9a83 */
L_005E9A72:
    PUSH32(esp, ecx); /* 0x005E9A72: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E9A73: push 0x20 */
    eax = esp + 0x18; /* 0x005E9A75: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E9A79: push eax */
    ecx = esp + 0x20; /* 0x005E9A7A: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E9A7E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E9A83:
    eax = esp + 0x14; /* 0x005E9A83: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005E9A87: push eax */
    ecx = esi + 0xBC; /* 0x005E9A88: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E9A8E: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
L_005E9A93:
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005E9A93: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005E9A9B: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005E9A9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9AC5; /* 0x005E9AA1: je 0x5e9ac5 */
L_005E9AA3:
    PUSH32(esp, eax); /* 0x005E9AA3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E9AA4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9AAA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005E9AAD: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005E9AB5: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E9ABD: mov dword ptr [esp + 0x30], 0 */
L_005E9AC5:
    ecx = MEM32(esp + 0x38); /* 0x005E9AC5: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E9AC9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E9AD0: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E9AD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9AD2: pop ebx */
    esp = ebp; /* 0x005E9AD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E9AD6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E9AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9AE0u);

L_005E9AE0:
    PUSH32(esp, ebp); /* 0x005E9AE0: push ebp */
    ebp = esp; /* 0x005E9AE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E9AE3: push -1 */
    PUSH32(esp, 0x007B153Fu); /* 0x005E9AE5: push 0x7b153f */
    eax = MEM32(FS_BASE + (0)); /* 0x005E9AEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E9AF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x005E9AF1: sub esp, 0x94 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E9AF7: push ebx */
    PUSH32(esp, esi); /* 0x005E9AF8: push esi */
    PUSH32(esp, edi); /* 0x005E9AF9: push edi */
    eax = MEM32(0x855000); /* 0x005E9AFA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E9AFF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E9B01: push eax */
    eax = ebp + (-0xC); /* 0x005E9B02: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E9B05: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E9B0B: mov esi, ecx */
    MEM32(ebp + (-0x10)) = 0; /* 0x005E9B0D: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x005E9B14: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E9B32; /* 0x005E9B18: jne 0x5e9b32 */
L_005E9B1A:
    ecx = MEM32(ebp + 0x8); /* 0x005E9B1A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9B1D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E9B22: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E9B29: mov dword ptr [ebp - 0x10], 1 */
    goto L_005E9B7A; /* 0x005E9B30: jmp 0x5e9b7a */
L_005E9B32:
    ecx = ebp + (-0x30); /* 0x005E9B32: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9B35: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005E9B3A: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005E9B41: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E9B91; /* 0x005E9B45: jne 0x5e9b91 */
L_005E9B47:
    RECOMP_CALL(sub_006EE000); /* 0x005E9B47: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x5C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x5C); /* 0x005E9B4C: sub eax, dword ptr [esi + 0x5c] */
    _flag_k = FK_CMP;
    /* cmp eax, 0xAFC8u */ /* 0x005E9B4F: cmp eax, 0xafc8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAFC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E9B91; /* 0x005E9B54: jbe 0x5e9b91 */
L_005E9B56:
    PUSH32(esp, 0); /* 0x005E9B56: push 0 */
    ecx = esi; /* 0x005E9B58: mov ecx, esi */
    RECOMP_CALL(sub_005E9900); /* 0x005E9B5A: call 0x5e9900 */
    RECOMP_FLAGS_IN();
L_005E9B5F:
    ecx = MEM32(ebp + 0x8); /* 0x005E9B5F: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9B62: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 1; /* 0x005E9B67: mov dword ptr [ebp - 0x10], 1 */
L_005E9B6E:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E9B6E: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x30); /* 0x005E9B72: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E9B75: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
L_005E9B7A:
    eax = MEM32(ebp + 0x8); /* 0x005E9B7A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E9B7D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E9B80: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E9B87: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E9B88: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9B89: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9B8A: pop ebx */
    esp = ebp; /* 0x005E9B8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9B8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E9B8E: ret 4 */
L_005E9B91:
    ecx = MEM32(esi + 0x14); /* 0x005E9B91: mov ecx, dword ptr [esi + 0x14] */
    eax = ebp + (-0x98); /* 0x005E9B94: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x005E9B9A: push eax */
    RECOMP_CALL(sub_005F1D90); /* 0x005E9B9B: call 0x5f1d90 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E9BA0: mov edi, eax */
    MEM32(ebp + (-0x38)) = edi; /* 0x005E9BA2: mov dword ptr [ebp - 0x38], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E9BA5: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x1C); /* 0x005E9BA9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, 0x100u); /* 0x005E9BAC: push 0x100 */
    MEM32(ebp + (-0x28)) = 0x800u; /* 0x005E9BB1: mov dword ptr [ebp - 0x28], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E9BB8: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = 0; /* 0x005E9BBD: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005E9BC4: mov dword ptr [ebp - 0x20], 0 */
    ebx = MEM32(edi + 0xC); /* 0x005E9BCB: mov ebx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 7; /* 0x005E9BCE: add ebx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ebx) >> 2) & 1u); /* 0x005E9BD1: shr ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 3u; /* 0x005E9BD1: shr ebx, 3 */
    /* test ebx, ebx */ /* 0x005E9BD4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9C0E; /* 0x005E9BD6: je 0x5e9c0e */
L_005E9BD8:
    edi = MEM32(edi + 0x14); /* 0x005E9BD8: mov edi, dword ptr [edi + 0x14] */
    eax = ebx * 8; /* 0x005E9BDB: lea eax, [ebx*8] */
    PUSH32(esp, eax); /* 0x005E9BE2: push eax */
    ecx = ebp + (-0x30); /* 0x005E9BE3: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E9BE6: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x005E9BEB: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9BEE: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x005E9BF1: push ebx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E9BF2: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E9BF2: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x005E9BF5: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x005E9BF8: push edi */
    PUSH32(esp, eax); /* 0x005E9BF9: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005E9BFA: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x005E9BFF: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E9C02: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x38)); /* 0x005E9C05: mov edi, dword ptr [ebp - 0x38] */
    eax = eax + ebx * 8; /* 0x005E9C08: lea eax, [eax + ebx*8] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005E9C0B: mov dword ptr [ebp - 0x24], eax */
L_005E9C0E:
    eax = MEM32(edi); /* 0x005E9C0E: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005E9C10: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(edi + 0x4); /* 0x005E9C13: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x005E9C16: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(edi + 0x8); /* 0x005E9C19: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x28)) = eax; /* 0x005E9C1C: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(edi + 0x10); /* 0x005E9C1F: mov eax, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x005E9C22: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(edi + 0xC); /* 0x005E9C25: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005E9C28: mov dword ptr [ebp - 0x24], eax */
    edi = eax + 0x7; /* 0x005E9C2B: lea edi, [eax + 7] */
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x005E9C2E: shr edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 3u; /* 0x005E9C2E: shr edi, 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E9C31: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x84)); /* 0x005E9C35: mov eax, dword ptr [ebp - 0x84] */
    ebx = MEM32(0x7CC694); /* 0x005E9C3B: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005E9C41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9C63; /* 0x005E9C43: je 0x5e9c63 */
L_005E9C45:
    PUSH32(esp, eax); /* 0x005E9C45: push eax */
    RECOMP_ICALL(ebx); /* 0x005E9C46: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9C48: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x84)) = 0; /* 0x005E9C4B: mov dword ptr [ebp - 0x84], 0 */
    MEM32(ebp + (-0x80)) = 0; /* 0x005E9C55: mov dword ptr [ebp - 0x80], 0 */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005E9C5C: mov dword ptr [ebp - 0x7c], 0 */
L_005E9C63:
    /* test edi, edi */ /* 0x005E9C63: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9B5F; /* 0x005E9C65: je 0x5e9b5f */
L_005E9C6B:
    eax = MEM32(ebp + (-0x30)); /* 0x005E9C6B: mov eax, dword ptr [ebp - 0x30] */
    ecx = ebp + (-0x44); /* 0x005E9C6E: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x58)) = eax; /* 0x005E9C71: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005E9C74: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x54)) = eax; /* 0x005E9C77: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x005E9C7A: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005E9C7D: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x005E9C80: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005E9C83: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x005E9C86: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x48)) = eax; /* 0x005E9C89: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x1C); /* 0x005E9C8C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x005E9C8F: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005E9C90: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E9C95: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x34); /* 0x005E9C99: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x005E9C9C: push eax */
    ecx = ebp + (-0x30); /* 0x005E9C9D: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5260); /* 0x005E9CA0: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x005E9CA5: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x005E9CA8: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005E9D87; /* 0x005E9CAB: je 0x5e9d87 */
L_005E9CB1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18Eu; /* 0x005E9CB1: sub eax, 0x18e */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005E9D49; /* 0x005E9CB6: je 0x5e9d49 */
L_005E9CBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x7Bu; /* 0x005E9CBC: sub eax, 0x7b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_005E9DE1; /* 0x005E9CBF: jne 0x5e9de1 */
L_005E9CC5:
    eax = ebp + (-0x60); /* 0x005E9CC5: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x005E9CC8: push eax */
    ecx = ebp + (-0x30); /* 0x005E9CC9: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5340); /* 0x005E9CCC: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005E9CD1: push dword ptr [ebp - 0x5c] */
    ecx = ebp + (-0x70); /* 0x005E9CD4: lea ecx, [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x005E9CD7: push dword ptr [ebp - 0x60] */
    RECOMP_CALL(sub_00519590); /* 0x005E9CDA: call 0x519590 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E9CDF: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x70); /* 0x005E9CE1: lea ecx, [ebp - 0x70] */
    PUSH32(esp, ecx); /* 0x005E9CE4: push ecx */
    ecx = esi; /* 0x005E9CE5: mov ecx, esi */
    eax = MEM32(eax + 0x30); /* 0x005E9CE7: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E9CEA: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E9CEC: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E9DB2; /* 0x005E9CEE: je 0x5e9db2 */
L_005E9CF4:
    eax = MEM32(esi + 0x14); /* 0x005E9CF4: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(eax + 0xE8); /* 0x005E9CF7: mov ecx, dword ptr [eax + 0xe8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xE4); /* 0x005E9CFD: sub ecx, dword ptr [eax + 0xe4] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005E9D03: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E9D08: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = MEM32(esi); /* 0x005E9D0A: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005E9D0C: mov ecx, esi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005E9D0E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    edi = edx; /* 0x005E9D11: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005E9D13: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005E9D13: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005E9D16: add edi, edx */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x005E9D18: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E9D1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E9D1E: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005E9D20: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E9D25: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E9D27: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E9D29: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E9D2C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E9D2E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E9D2E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E9D31: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005E9D33: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E9DB2; /* 0x005E9D35: jne 0x5e9db2 */
L_005E9D37:
    PUSH32(esp, 1); /* 0x005E9D37: push 1 */
    ecx = esi; /* 0x005E9D39: mov ecx, esi */
    RECOMP_CALL(sub_005E9900); /* 0x005E9D3B: call 0x5e9900 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = 0; /* 0x005E9D40: mov dword ptr [esi + 0x5c], 0 */
    goto L_005E9DB2; /* 0x005E9D47: jmp 0x5e9db2 */
L_005E9D49:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005E9D49: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E9D4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9D57; /* 0x005E9D51: jne 0x5e9d57 */
L_005E9D53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E9D53: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E9D71; /* 0x005E9D55: jmp 0x5e9d71 */
L_005E9D57:
    ecx = MEM32(0x928130); /* 0x005E9D57: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005E9D5D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E9D71; /* 0x005E9D5F: jne 0x5e9d71 */
L_005E9D61:
    ecx = 0x0092812Cu; /* 0x005E9D61: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005E9D66: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005E9D6B: mov ecx, dword ptr [0x928130] */
L_005E9D71:
    eax = MEM32(ecx); /* 0x005E9D71: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xA0); /* 0x005E9D73: lea edx, [ebp - 0xa0] */
    PUSH32(esp, edx); /* 0x005E9D79: push edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x005E9D7A: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E9D7D: push eax */
    ecx = esi; /* 0x005E9D7E: mov ecx, esi */
    RECOMP_CALL(sub_005E8D30); /* 0x005E9D80: call 0x5e8d30 */
    RECOMP_FLAGS_IN();
    goto L_005E9DB2; /* 0x005E9D85: jmp 0x5e9db2 */
L_005E9D87:
    eax = ebp + (-0x68); /* 0x005E9D87: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x005E9D8A: push eax */
    ecx = ebp + (-0x30); /* 0x005E9D8B: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F5340); /* 0x005E9D8E: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x005E9D93: push dword ptr [ebp - 0x64] */
    ecx = ebp + (-0x78); /* 0x005E9D96: lea ecx, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x005E9D99: push dword ptr [ebp - 0x68] */
    RECOMP_CALL(sub_00519590); /* 0x005E9D9C: call 0x519590 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E9DA1: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x78); /* 0x005E9DA3: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x005E9DA6: push ecx */
    ecx = esi; /* 0x005E9DA7: mov ecx, esi */
    eax = MEM32(eax + 0x30); /* 0x005E9DA9: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x005E9DAC: call eax */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x10u */ /* 0x005E9DAE: cmp al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E9E05; /* 0x005E9DB0: jne 0x5e9e05 */
L_005E9DB2:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E9DB2: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x44)); /* 0x005E9DB6: mov eax, dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x005E9DB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9B91; /* 0x005E9DBB: je 0x5e9b91 */
L_005E9DC1:
    PUSH32(esp, eax); /* 0x005E9DC1: push eax */
    RECOMP_ICALL(ebx); /* 0x005E9DC2: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E9DC4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = 0; /* 0x005E9DC7: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x005E9DCE: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x005E9DD5: mov dword ptr [ebp - 0x3c], 0 */
    RECOMP_BACKEDGE();
    goto L_005E9B91; /* 0x005E9DDC: jmp 0x5e9b91 */
L_005E9DE1:
    ecx = MEM32(ebp + 0x8); /* 0x005E9DE1: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x58); /* 0x005E9DE4: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x005E9DE7: push eax */
    RECOMP_CALL(sub_004E4200); /* 0x005E9DE8: call 0x4e4200 */
    RECOMP_FLAGS_IN();
L_005E9DED:
    MEM32(ebp + (-0x10)) = 1; /* 0x005E9DED: mov dword ptr [ebp - 0x10], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E9DF4: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x58); /* 0x005E9DF8: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_005F3D00); /* 0x005E9DFB: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E9B6E; /* 0x005E9E00: jmp 0x5e9b6e */
L_005E9E05:
    PUSH32(esp, 0); /* 0x005E9E05: push 0 */
    ecx = esi; /* 0x005E9E07: mov ecx, esi */
    RECOMP_CALL(sub_005E9900); /* 0x005E9E09: call 0x5e9900 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005E9E0E: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9E11: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E9DED; /* 0x005E9E16: jmp 0x5e9ded */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E9E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9E20u);

L_005E9E20:
    PUSH32(esp, ebp); /* 0x005E9E20: push ebp */
    ebp = esp; /* 0x005E9E21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E9E23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E9E26: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E9E29: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005E9E2A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E9E2D: push esi */
    PUSH32(esp, edi); /* 0x005E9E2E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x005E9E2F: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x005E9E32: mov esi, ecx */
    eax = MEM32(ebx + 0xC); /* 0x005E9E34: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9E37: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005E9E3A: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2580u */ /* 0x005E9E3D: cmp eax, 0x2580 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2580u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E9E54; /* 0x005E9E42: jbe 0x5e9e54 */
L_005E9E44:
    /* cmp edi, 1 */ /* 0x005E9E44: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_005E9E54; /* 0x005E9E47: jg 0x5e9e54 */
L_005E9E49:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E9E49: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x005E9E4B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9E4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9E4D: pop ebx */
    esp = ebp; /* 0x005E9E4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9E50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E9E51: ret 8 */
L_005E9E54:
    eax = MEM32(esi); /* 0x005E9E54: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x1C); /* 0x005E9E56: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E9E59: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E9E5B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9EF6; /* 0x005E9E5D: je 0x5e9ef6 */
L_005E9E63:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x005E9E63: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E9EF6; /* 0x005E9E67: je 0x5e9ef6 */
L_005E9E6D:
    ecx = MEM32(esi + 0xB0); /* 0x005E9E6D: mov ecx, dword ptr [esi + 0xb0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E9E73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xAC); /* 0x005E9E75: sub ecx, dword ptr [esi + 0xac] */
    _flag_k = FK_CMP;
    MEM32(esp + 0x10) = eax; /* 0x005E9E7B: mov dword ptr [esp + 0x10], eax */
    eax = 0x92492493u; /* 0x005E9E7F: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E9E84: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(esp + 0xF) = (uint8_t)(1); /* 0x005E9E86: mov byte ptr [esp + 0xf], 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E9E8B: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E9E8D: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E9E90: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E9E92: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E9E92: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E9E95: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E9EE9; /* 0x005E9E97: je 0x5e9ee9 */
L_005E9E99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E9E99: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = ecx; /* 0x005E9E9B: mov dword ptr [esp + 0x14], ecx */
    /* nop */ /* 0x005E9E9F: nop  */
L_005E9EA0:
    eax = MEM32(esi + 0xAC); /* 0x005E9EA0: mov eax, dword ptr [esi + 0xac] */
    PUSH32(esp, edi); /* 0x005E9EA6: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005E9EA7: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x14); /* 0x005E9EA9: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x005E9EAC: push ebx */
    PUSH32(esp, eax); /* 0x005E9EAD: push eax */
    RECOMP_CALL(sub_005F2B70); /* 0x005E9EAE: call 0x5f2b70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM8(esp + 0xF) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(esp + 0xF) | LO8(eax))) << 24;
    MEM8(esp + 0xF) = (uint8_t)(MEM8(esp + 0xF) | LO8(eax)); /* 0x005E9EB3: or byte ptr [esp + 0xf], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x92492493u; /* 0x005E9EB7: mov eax, 0x92492493 */
    ecx = MEM32(esi + 0xB0); /* 0x005E9EBC: mov ecx, dword ptr [esi + 0xb0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xAC); /* 0x005E9EC2: sub ecx, dword ptr [esi + 0xac] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1; /* 0x005E9EC8: inc dword ptr [esp + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x70u; /* 0x005E9ECC: add dword ptr [esp + 0x14], 0x70 */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E9ED1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E9ED3: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E9ED5: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005E9ED8: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005E9EDA: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005E9EDA: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005E9EDD: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esp + 0x10), ecx */ /* 0x005E9EDF: cmp dword ptr [esp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0x14); /* 0x005E9EE3: mov ecx, dword ptr [esp + 0x14] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E9EA0; /* 0x005E9EE7: jb 0x5e9ea0 */
L_005E9EE9:
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x005E9EE9: mov al, byte ptr [esp + 0xf] */
    edi = POP32_VAL(esp); /* 0x005E9EED: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9EEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9EEF: pop ebx */
    esp = ebp; /* 0x005E9EF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9EF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E9EF3: ret 8 */
L_005E9EF6:
    PUSH32(esp, edi); /* 0x005E9EF6: push edi */
    PUSH32(esp, ebx); /* 0x005E9EF7: push ebx */
    ecx = esi; /* 0x005E9EF8: mov ecx, esi */
    RECOMP_CALL(sub_005E9220); /* 0x005E9EFA: call 0x5e9220 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005E9EFF: pop edi */
    esi = POP32_VAL(esp); /* 0x005E9F00: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E9F01: pop ebx */
    esp = ebp; /* 0x005E9F02: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9F04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E9F05: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E9F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9F10u);

L_005E9F10:
    PUSH32(esp, ebp); /* 0x005E9F10: push ebp */
    ebp = esp; /* 0x005E9F11: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005E9F13: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E9F16: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0xC); /* 0x005E9F19: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E9F1C: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005E9F1F: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x005E9F22: push edi */
    edi = ecx; /* 0x005E9F23: mov edi, ecx */
    /* cmp eax, 0x2580u */ /* 0x005E9F25: cmp eax, 0x2580 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2580u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005E9F3B; /* 0x005E9F2A: jbe 0x5e9f3b */
L_005E9F2C:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x005E9F2C: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_005E9F3B; /* 0x005E9F30: jg 0x5e9f3b */
L_005E9F32:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E9F32: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x005E9F34: pop edi */
    esp = ebp; /* 0x005E9F35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9F37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E9F38: ret 0xc */
L_005E9F3B:
    eax = MEM32(ebp + 0x8); /* 0x005E9F3B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0xB0); /* 0x005E9F3E: mov ecx, dword ptr [edi + 0xb0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xAC); /* 0x005E9F44: sub ecx, dword ptr [edi + 0xac] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E9F4A: push esi */
    esi = (uint32_t)LO8(eax); /* 0x005E9F4B: movzx esi, al */
    eax = 0x92492493u; /* 0x005E9F4E: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E9F53: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E9F55: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E9F57: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E9F5A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E9F5C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E9F5C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E9F5F: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E9F61: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E9FA6; /* 0x005E9F63: jae 0x5e9fa6 */
L_005E9F65:
    eax = MEM32(edi); /* 0x005E9F65: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E9F67: mov ecx, edi */
    eax = MEM32(eax + 0x1C); /* 0x005E9F69: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005E9F6C: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E9F6E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9FA6; /* 0x005E9F70: je 0x5e9fa6 */
L_005E9F72:
    ecx = MEM32(edi + 0x14); /* 0x005E9F72: mov ecx, dword ptr [edi + 0x14] */
    /* test ecx, ecx */ /* 0x005E9F75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E9FA6; /* 0x005E9F77: je 0x5e9fa6 */
L_005E9F79:
    edx = MEM32(edi + 0xAC); /* 0x005E9F79: mov edx, dword ptr [edi + 0xac] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005E9F7F: push dword ptr [ebp + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005E9F82: imul esi, esi, 0x70 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E9F85: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi + edx); /* 0x005E9F88: mov eax, dword ptr [esi + edx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x005E9F8B: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + edx + 0x4); /* 0x005E9F8E: mov eax, dword ptr [esi + edx + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005E9F92: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x005E9F95: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x005E9F98: push eax */
    RECOMP_CALL(sub_005F2B70); /* 0x005E9F99: call 0x5f2b70 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005E9F9E: pop esi */
    edi = POP32_VAL(esp); /* 0x005E9F9F: pop edi */
    esp = ebp; /* 0x005E9FA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9FA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E9FA3: ret 0xc */
L_005E9FA6:
    esi = POP32_VAL(esp); /* 0x005E9FA6: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E9FA7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x005E9FA9: pop edi */
    esp = ebp; /* 0x005E9FAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E9FAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E9FAD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005E9FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E9FB0u);

L_005E9FB0:
    PUSH32(esp, ebp); /* 0x005E9FB0: push ebp */
    ebp = esp; /* 0x005E9FB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E9FB3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E9FB6: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005E9FB8: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E9FBD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E9FC3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005E9FC4: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E9FC7: push esi */
    eax = MEM32(0x855000); /* 0x005E9FC8: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E9FCD: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E9FCF: push eax */
    eax = esp + 0x30; /* 0x005E9FD0: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E9FD4: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E9FDA: mov esi, ecx */
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x005E9FDC: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EA083; /* 0x005E9FE0: je 0x5ea083 */
L_005E9FE6:
    ecx = esp + 0xC; /* 0x005E9FE6: lea ecx, [esp + 0xc] */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005E9FEA: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_005F3C60); /* 0x005E9FEE: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E9FF3: mov dword ptr [esp + 0x38], 0 */
    /* test MEM8(esp + 0x18), 7 */ /* 0x005E9FFB: test byte ptr [esp + 0x18], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x18)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x8) = 0x191u; /* 0x005EA000: mov dword ptr [esp + 8], 0x191 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA030; /* 0x005EA008: jne 0x5ea030 */
L_005EA00A:
    PUSH32(esp, 0x20u); /* 0x005EA00A: push 0x20 */
    ecx = esp + 0x10; /* 0x005EA00C: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F3D70); /* 0x005EA010: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x005EA015: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005EA019: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EA01C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005EA01C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x20); /* 0x005EA01F: add eax, dword ptr [esp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x191u; /* 0x005EA023: mov dword ptr [eax], 0x191 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x20u; /* 0x005EA029: add dword ptr [esp + 0x18], 0x20 */
    _flag_k = FK_ADD;
    goto L_005EA041; /* 0x005EA02E: jmp 0x5ea041 */
L_005EA030:
    PUSH32(esp, ecx); /* 0x005EA030: push ecx */
    PUSH32(esp, 0x20u); /* 0x005EA031: push 0x20 */
    eax = esp + 0x10; /* 0x005EA033: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005EA037: push eax */
    ecx = esp + 0x18; /* 0x005EA038: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F5800); /* 0x005EA03C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005EA041:
    eax = esp + 0xC; /* 0x005EA041: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x005EA045: push eax */
    ecx = esi + 0xBC; /* 0x005EA046: lea ecx, [esi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005EA04C: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005EA051: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005EA059: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005EA05D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA083; /* 0x005EA05F: je 0x5ea083 */
L_005EA061:
    PUSH32(esp, eax); /* 0x005EA061: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EA062: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA068: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005EA06B: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005EA073: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005EA07B: mov dword ptr [esp + 0x28], 0 */
L_005EA083:
    ecx = MEM32(esp + 0x30); /* 0x005EA083: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EA087: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EA08E: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EA08F: pop esi */
    esp = ebp; /* 0x005EA090: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EA092: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EA093: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EA0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EA0A0u);

L_005EA0A0:
    PUSH32(esp, ebp); /* 0x005EA0A0: push ebp */
    ebp = esp; /* 0x005EA0A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EA0A3: push -1 */
    PUSH32(esp, 0x007B1664u); /* 0x005EA0A5: push 0x7b1664 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EA0AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EA0B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x005EA0B1: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EA0B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EA0BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005EA0BE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005EA0C1: push ebx */
    PUSH32(esp, esi); /* 0x005EA0C2: push esi */
    PUSH32(esp, edi); /* 0x005EA0C3: push edi */
    PUSH32(esp, eax); /* 0x005EA0C4: push eax */
    eax = ebp + (-0xC); /* 0x005EA0C5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EA0C8: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EA0CE: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005EA0D0: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xAC)) = ebx; /* 0x005EA0D3: mov dword ptr [ebp - 0xac], ebx */
    MEM32(ebp + (-0xCC)) = ebx; /* 0x005EA0D9: mov dword ptr [ebp - 0xcc], ebx */
    MEM32(ebp + (-0x58)) = 0; /* 0x005EA0DF: mov dword ptr [ebp - 0x58], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EA0E6: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EA0EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA0F4; /* 0x005EA0EE: jne 0x5ea0f4 */
L_005EA0F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EA0F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EA10E; /* 0x005EA0F2: jmp 0x5ea10e */
L_005EA0F4:
    ecx = MEM32(0x927AEC); /* 0x005EA0F4: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005EA0FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA10E; /* 0x005EA0FC: jne 0x5ea10e */
L_005EA0FE:
    ecx = 0x00927AE8u; /* 0x005EA0FE: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EA103: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005EA108: mov ecx, dword ptr [0x927aec] */
L_005EA10E:
    eax = MEM32(ecx); /* 0x005EA10E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x005EA110: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x005EA113: call eax */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005EA115: mov ecx, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x005EA117: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA220; /* 0x005EA119: jne 0x5ea220 */
L_005EA11F:
    RECOMP_CALL(sub_005E9FB0); /* 0x005EA11F: call 0x5e9fb0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0xCC), 0 */ /* 0x005EA124: cmp dword ptr [edi + 0xcc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EA149; /* 0x005EA12B: jne 0x5ea149 */
L_005EA12D:
    ecx = ebx; /* 0x005EA12D: mov ecx, ebx */
    RECOMP_CALL(sub_005F3C60); /* 0x005EA12F: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EA134: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x58)) = 1; /* 0x005EA13B: mov dword ptr [ebp - 0x58], 1 */
    eax = ebx; /* 0x005EA142: mov eax, ebx */
    goto L_005EA8E4; /* 0x005EA144: jmp 0x5ea8e4 */
L_005EA149:
    ecx = ebp + (-0xA0); /* 0x005EA149: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_005F3C60); /* 0x005EA14F: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EA154: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0xBC); /* 0x005EA15B: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x005EA161: push eax */
    ecx = edi + 0xBC; /* 0x005EA162: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005ECFB0); /* 0x005EA168: call 0x5ecfb0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005EA16D: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005EA16F: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x005EA171: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA177; /* 0x005EA173: je 0x5ea177 */
L_005EA175:
    eax = MEM32(eax); /* 0x005EA175: mov eax, dword ptr [eax] */
L_005EA177:
    edx = MEM32(eax + 0x8); /* 0x005EA177: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x005EA17A: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EA17D: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    edx = edx & MEM32(ecx + 0x8); /* 0x005EA17E: and edx, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA0); /* 0x005EA181: lea ecx, [ebp - 0xa0] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x005EA187: push dword ptr [eax + edx*4] */
    RECOMP_CALL(sub_005F4800); /* 0x005EA18A: call 0x5f4800 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0xBC; /* 0x005EA18F: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC610); /* 0x005EA195: call 0x5ec610 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA0)); /* 0x005EA19A: mov eax, dword ptr [ebp - 0xa0] */
    ecx = ebx + 0x14; /* 0x005EA1A0: lea ecx, [ebx + 0x14] */
    MEM32(ebx) = eax; /* 0x005EA1A3: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + (-0x9C)); /* 0x005EA1A5: mov eax, dword ptr [ebp - 0x9c] */
    MEM32(ebx + 0x4) = eax; /* 0x005EA1AB: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + (-0x98)); /* 0x005EA1AE: mov eax, dword ptr [ebp - 0x98] */
    MEM32(ebx + 0x8) = eax; /* 0x005EA1B4: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x94)); /* 0x005EA1B7: mov eax, dword ptr [ebp - 0x94] */
    MEM32(ebx + 0xC) = eax; /* 0x005EA1BD: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0x90)); /* 0x005EA1C0: mov eax, dword ptr [ebp - 0x90] */
    MEM32(ebx + 0x10) = eax; /* 0x005EA1C6: mov dword ptr [ebx + 0x10], eax */
    eax = ebp + (-0x8C); /* 0x005EA1C9: lea eax, [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x005EA1CF: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005EA1D0: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EA1D5: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x58)) = 1; /* 0x005EA1D9: mov dword ptr [ebp - 0x58], 1 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EA1E0: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x8C)); /* 0x005EA1E7: mov eax, dword ptr [ebp - 0x8c] */
    /* test eax, eax */ /* 0x005EA1ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA219; /* 0x005EA1EF: je 0x5ea219 */
L_005EA1F1:
    PUSH32(esp, eax); /* 0x005EA1F1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EA1F2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA1F8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = 0; /* 0x005EA1FB: mov dword ptr [ebp - 0x8c], 0 */
    MEM32(ebp + (-0x88)) = 0; /* 0x005EA205: mov dword ptr [ebp - 0x88], 0 */
    MEM32(ebp + (-0x84)) = 0; /* 0x005EA20F: mov dword ptr [ebp - 0x84], 0 */
L_005EA219:
    eax = ebx; /* 0x005EA219: mov eax, ebx */
    goto L_005EA8E4; /* 0x005EA21B: jmp 0x5ea8e4 */
L_005EA220:
    RECOMP_CALL(sub_005E8E60); /* 0x005EA220: call 0x5e8e60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x18); /* 0x005EA225: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_005F63F0); /* 0x005EA228: call 0x5f63f0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC6A8); /* 0x005EA22D: mov ebx, dword ptr [0x7cc6a8] */
L_005EA233:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EA233: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EA239: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA241; /* 0x005EA23B: jne 0x5ea241 */
L_005EA23D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EA23D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EA25B; /* 0x005EA23F: jmp 0x5ea25b */
L_005EA241:
    ecx = MEM32(0x927B08); /* 0x005EA241: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005EA247: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA25B; /* 0x005EA249: jne 0x5ea25b */
L_005EA24B:
    ecx = 0x00927AE8u; /* 0x005EA24B: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EA250: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005EA255: mov ecx, dword ptr [0x927b08] */
L_005EA25B:
    eax = MEM32(ecx); /* 0x005EA25B: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x5C); /* 0x005EA25D: lea edx, [ebp - 0x5c] */
    PUSH32(esp, 0); /* 0x005EA260: push 0 */
    PUSH32(esp, edx); /* 0x005EA262: push edx */
    eax = MEM32(eax + 0x4); /* 0x005EA263: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x005EA266: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA268: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA6D9; /* 0x005EA26A: je 0x5ea6d9 */
L_005EA270:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005EA270: push dword ptr [ebp - 0x5c] */
    RECOMP_CALL(sub_0077F3DF); /* 0x005EA273: call 0x77f3df */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005EA278: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA27A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC8)) = esi; /* 0x005EA27D: mov dword ptr [ebp - 0xc8], esi */
    MEM32(ebp + (-0x4)) = 4; /* 0x005EA283: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0xFF0FFFFFu; /* 0x005EA28A: and dword ptr [ebp - 0x50], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4D)) = (uint8_t)(0); /* 0x005EA291: mov byte ptr [ebp - 0x4d], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0xFFF00000u; /* 0x005EA295: and dword ptr [ebp - 0x50], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x54)) = 0; /* 0x005EA29C: mov dword ptr [ebp - 0x54], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EA2A3: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EA2A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA2B1; /* 0x005EA2AB: jne 0x5ea2b1 */
L_005EA2AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EA2AD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EA2CB; /* 0x005EA2AF: jmp 0x5ea2cb */
L_005EA2B1:
    ecx = MEM32(0x927B08); /* 0x005EA2B1: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005EA2B7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA2CB; /* 0x005EA2B9: jne 0x5ea2cb */
L_005EA2BB:
    ecx = 0x00927AE8u; /* 0x005EA2BB: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EA2C0: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005EA2C5: mov ecx, dword ptr [0x927b08] */
L_005EA2CB:
    eax = MEM32(ecx); /* 0x005EA2CB: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x54); /* 0x005EA2CD: lea edx, [ebp - 0x54] */
    PUSH32(esp, 0); /* 0x005EA2D0: push 0 */
    PUSH32(esp, edx); /* 0x005EA2D2: push edx */
    edx = ebp + (-0x5C); /* 0x005EA2D3: lea edx, [ebp - 0x5c] */
    eax = MEM32(eax + 0x8); /* 0x005EA2D6: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x005EA2D9: push edx */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005EA2DA: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, esi); /* 0x005EA2DD: push esi */
    RECOMP_ICALL(eax); /* 0x005EA2DE: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA2E0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA6CB; /* 0x005EA2E2: je 0x5ea6cb */
L_005EA2E8:
    eax = MEM32(ebp + (-0x5C)); /* 0x005EA2E8: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005EA2EB: mov dword ptr [ebp - 0x4c], eax */
    /* cmp eax, 4 */ /* 0x005EA2EE: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EA30A; /* 0x005EA2F1: jae 0x5ea30a */
L_005EA2F3:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EA2F3: mov byte ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x005EA2F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA233; /* 0x005EA2F9: je 0x5ea233 */
L_005EA2FF:
    PUSH32(esp, esi); /* 0x005EA2FF: push esi */
    RECOMP_ICALL(ebx); /* 0x005EA300: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA302: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005EA233; /* 0x005EA305: jmp 0x5ea233 */
L_005EA30A:
    ecx = ebp + (-0x80); /* 0x005EA30A: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F3C60); /* 0x005EA30D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005EA312: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(ebp + (-0x4C)); /* 0x005EA316: mov eax, dword ptr [ebp - 0x4c] */
    /* cmp eax, 0x100u */ /* 0x005EA319: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005EA32C; /* 0x005EA31E: jbe 0x5ea32c */
L_005EA320:
    PUSH32(esp, eax); /* 0x005EA320: push eax */
    ecx = ebp + (-0x6C); /* 0x005EA321: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005EA324: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x005EA329: mov eax, dword ptr [ebp - 0x4c] */
L_005EA32C:
    PUSH32(esp, eax); /* 0x005EA32C: push eax */
    PUSH32(esp, esi); /* 0x005EA32D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x005EA32E: push dword ptr [ebp - 0x6c] */
    RECOMP_CALL(sub_00780838); /* 0x005EA331: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x005EA336: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EA339: add esp, 0xc */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x005EA33C: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x005EA33C: shl eax, 3 */
    MEM32(ebp + (-0x74)) = eax; /* 0x005EA33F: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x78)) = eax; /* 0x005EA342: mov dword ptr [ebp - 0x78], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005EA345: mov byte ptr [ebp - 4], 6 */
    eax = MEM32(ebp + (-0x50)); /* 0x005EA349: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x54)); /* 0x005EA34C: mov ecx, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x005EA34F: mov dword ptr [ebp - 0x7c], eax */
    MEM32(ebp + (-0x9C)) = eax; /* 0x005EA352: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebp + (-0x78)); /* 0x005EA358: mov eax, dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x98)) = eax; /* 0x005EA35B: mov dword ptr [ebp - 0x98], eax */
    eax = MEM32(ebp + (-0x74)); /* 0x005EA361: mov eax, dword ptr [ebp - 0x74] */
    MEM32(ebp + (-0x94)) = eax; /* 0x005EA364: mov dword ptr [ebp - 0x94], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x005EA36A: mov eax, dword ptr [ebp - 0x70] */
    MEM32(ebp + (-0x90)) = eax; /* 0x005EA36D: mov dword ptr [ebp - 0x90], eax */
    eax = ebp + (-0x6C); /* 0x005EA373: lea eax, [ebp - 0x6c] */
    MEM32(ebp + (-0x80)) = ecx; /* 0x005EA376: mov dword ptr [ebp - 0x80], ecx */
    MEM32(ebp + (-0xA0)) = ecx; /* 0x005EA379: mov dword ptr [ebp - 0xa0], ecx */
    ecx = ebp + (-0x8C); /* 0x005EA37F: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x005EA385: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005EA386: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005EA38B: mov byte ptr [ebp - 4], 8 */
    eax = ebp + (-0x60); /* 0x005EA38F: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x005EA392: push eax */
    ecx = ebp + (-0x80); /* 0x005EA393: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5260); /* 0x005EA396: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x94)); /* 0x005EA39B: mov eax, dword ptr [ebp - 0x94] */
    ecx = MEM32(edi + 0x8); /* 0x005EA3A1: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005EA3A4: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EA3A7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005EA3A7: shr eax, 3 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) + eax; /* 0x005EA3AA: add dword ptr [ecx + 4], eax */
    _flag_k = FK_ADD;
    eax = edi + 0xBC; /* 0x005EA3AD: lea eax, [edi + 0xbc] */
    PUSH32(esp, eax); /* 0x005EA3B3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x005EA3B4: push dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x80)); /* 0x005EA3B7: mov eax, dword ptr [ebp - 0x80] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x005EA3BA: push dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005EA3BD: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005EA3C0: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x005EA3C2: mov dword ptr [ebp - 0x4c], esp */
    MEM32(ebp + (-0xB0)) = ecx; /* 0x005EA3C5: mov dword ptr [ebp - 0xb0], ecx */
    MEM32(ecx) = eax; /* 0x005EA3CB: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x7C)); /* 0x005EA3CD: mov eax, dword ptr [ebp - 0x7c] */
    MEM32(ecx + 0x4) = eax; /* 0x005EA3D0: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x78)); /* 0x005EA3D3: mov eax, dword ptr [ebp - 0x78] */
    MEM32(ecx + 0x8) = eax; /* 0x005EA3D6: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x74)); /* 0x005EA3D9: mov eax, dword ptr [ebp - 0x74] */
    MEM32(ecx + 0xC) = eax; /* 0x005EA3DC: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x005EA3DF: mov eax, dword ptr [ebp - 0x70] */
    MEM32(ecx + 0x10) = eax; /* 0x005EA3E2: mov dword ptr [ecx + 0x10], eax */
    eax = ebp + (-0x6C); /* 0x005EA3E5: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005EA3E8: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005EA3E9: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_004E6D70); /* 0x005EA3EC: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005EA3F1: mov byte ptr [ebp - 4], 0xa */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x005EA3F5: push dword ptr [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005EA3F8: mov byte ptr [ebp - 4], 8 */
    ecx = MEM32(edi + 0x1C); /* 0x005EA3FC: mov ecx, dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_005E2B30); /* 0x005EA3FF: call 0x5e2b30 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA404: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA471; /* 0x005EA406: je 0x5ea471 */
L_005EA408:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005EA408: mov byte ptr [ebp - 4], 6 */
    eax = MEM32(ebp + (-0x8C)); /* 0x005EA40C: mov eax, dword ptr [ebp - 0x8c] */
    /* test eax, eax */ /* 0x005EA412: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA43E; /* 0x005EA414: je 0x5ea43e */
L_005EA416:
    PUSH32(esp, eax); /* 0x005EA416: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EA417: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA41D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = 0; /* 0x005EA420: mov dword ptr [ebp - 0x8c], 0 */
    MEM32(ebp + (-0x88)) = 0; /* 0x005EA42A: mov dword ptr [ebp - 0x88], 0 */
    MEM32(ebp + (-0x84)) = 0; /* 0x005EA434: mov dword ptr [ebp - 0x84], 0 */
L_005EA43E:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EA43E: mov byte ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0x6C)); /* 0x005EA442: mov eax, dword ptr [ebp - 0x6c] */
    /* test eax, eax */ /* 0x005EA445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA2F3; /* 0x005EA447: je 0x5ea2f3 */
L_005EA44D:
    PUSH32(esp, eax); /* 0x005EA44D: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EA44E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA454: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x6C)) = 0; /* 0x005EA457: mov dword ptr [ebp - 0x6c], 0 */
    MEM32(ebp + (-0x68)) = 0; /* 0x005EA45E: mov dword ptr [ebp - 0x68], 0 */
    MEM32(ebp + (-0x64)) = 0; /* 0x005EA465: mov dword ptr [ebp - 0x64], 0 */
    RECOMP_BACKEDGE();
    goto L_005EA2F3; /* 0x005EA46C: jmp 0x5ea2f3 */
L_005EA471:
    ecx = MEM32(ebp + (-0x54)); /* 0x005EA471: mov ecx, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x50)); /* 0x005EA474: mov eax, dword ptr [ebp - 0x50] */
    /* cmp ecx, MEM32(edi + 0x40) */ /* 0x005EA477: cmp ecx, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EA65A; /* 0x005EA47A: jne 0x5ea65a */
L_005EA480:
    /* cmp eax, MEM32(edi + 0x44) */ /* 0x005EA480: cmp eax, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EA65A; /* 0x005EA483: jne 0x5ea65a */
L_005EA489:
    RECOMP_CALL(sub_006EE000); /* 0x005EA489: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4C) = eax; /* 0x005EA48E: mov dword ptr [edi + 0x4c], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x005EA491: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, 1 */ /* 0x005EA494: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EA50E; /* 0x005EA497: jne 0x5ea50e */
L_005EA499:
    MEM32(ebp + (-0x18)) = 0; /* 0x005EA499: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005EA4A0: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005EA4A7: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005EA4AE: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005EA4B5: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005EA4B9: mov byte ptr [ebp - 4], 0xd */
    eax = ebp + (-0xC4); /* 0x005EA4BD: lea eax, [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x005EA4C3: push eax */
    ecx = ebp + (-0x80); /* 0x005EA4C4: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5340); /* 0x005EA4C7: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA1); /* 0x005EA4CC: lea eax, [ebp - 0xa1] */
    PUSH32(esp, eax); /* 0x005EA4D2: push eax */
    ecx = ebp + (-0x80); /* 0x005EA4D3: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5060); /* 0x005EA4D6: call 0x5f5060 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x005EA4DB: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005EA4DE: push eax */
    ecx = ebp + (-0x80); /* 0x005EA4DF: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5420); /* 0x005EA4E2: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EA4E7: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x005EA4EA: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0xC0))); /* 0x005EA4EC: push dword ptr [ebp - 0xc0] */
    PUSH32(esp, MEM32(ebp + (-0xC4))); /* 0x005EA4F2: push dword ptr [ebp - 0xc4] */
    RECOMP_CALL(sub_005E96A0); /* 0x005EA4F8: call 0x5e96a0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005EA4FD: mov byte ptr [ebp - 4], 8 */
    ecx = ebp + (-0x28); /* 0x005EA501: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A000); /* 0x005EA504: call 0x40a000 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA509: jmp 0x5ea626 */
L_005EA50E:
    /* cmp MEM32(edi + 0x6C), 0 */ /* 0x005EA50E: cmp dword ptr [edi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EA626; /* 0x005EA512: je 0x5ea626 */
L_005EA518:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x005EA518: add eax, -2 */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x005EA51B: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EA646; /* 0x005EA51E: ja 0x5ea646 */
L_005EA524:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5EA904)); goto _ljump; }
L_005EA52B:
    PUSH32(esp, 1); /* 0x005EA52B: push 1 */
    ecx = edi; /* 0x005EA52D: mov ecx, edi */
    RECOMP_CALL(sub_005E9510); /* 0x005EA52F: call 0x5e9510 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA534: jmp 0x5ea626 */
L_005EA539:
    PUSH32(esp, 0); /* 0x005EA539: push 0 */
    ecx = edi; /* 0x005EA53B: mov ecx, edi */
    RECOMP_CALL(sub_005E9510); /* 0x005EA53D: call 0x5e9510 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA542: jmp 0x5ea626 */
L_005EA547:
    ecx = edi; /* 0x005EA547: mov ecx, edi */
    RECOMP_CALL(sub_005E92B0); /* 0x005EA549: call 0x5e92b0 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA54E: jmp 0x5ea626 */
L_005EA553:
    eax = ebp + (-0xA8); /* 0x005EA553: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x005EA559: push eax */
    ecx = ebp + (-0x80); /* 0x005EA55A: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5260); /* 0x005EA55D: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x005EA562: push dword ptr [ebp - 0xa8] */
    ecx = edi; /* 0x005EA568: mov ecx, edi */
    RECOMP_CALL(sub_005E95B0); /* 0x005EA56A: call 0x5e95b0 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA56F: jmp 0x5ea626 */
L_005EA574:
    ecx = edi; /* 0x005EA574: mov ecx, edi */
    RECOMP_CALL(sub_005E9570); /* 0x005EA576: call 0x5e9570 */
    RECOMP_FLAGS_IN();
    goto L_005EA626; /* 0x005EA57B: jmp 0x5ea626 */
L_005EA580:
    eax = ebp + (-0x4C); /* 0x005EA580: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005EA583: mov dword ptr [ebp - 0x4c], 0 */
    PUSH32(esp, eax); /* 0x005EA58A: push eax */
    ecx = ebp + (-0x80); /* 0x005EA58B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5260); /* 0x005EA58E: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4C)); /* 0x005EA593: mov ebx, dword ptr [ebp - 0x4c] */
    /* test ebx, ebx */ /* 0x005EA596: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA620; /* 0x005EA598: je 0x5ea620 */
L_005EA59E:
    edi = edi; /* 0x005EA59E: mov edi, edi */
L_005EA5A0:
    MEM32(ebp + (-0x38)) = 0; /* 0x005EA5A0: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x005EA5A7: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x34)) = 0xFu; /* 0x005EA5AE: mov dword ptr [ebp - 0x34], 0xf */
    MEM32(ebp + (-0x38)) = 0; /* 0x005EA5B5: mov dword ptr [ebp - 0x38], 0 */
    MEM8(ebp + (-0x48)) = (uint8_t)(0); /* 0x005EA5BC: mov byte ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005EA5C0: mov byte ptr [ebp - 4], 0xe */
    ecx = ebp + (-0xBC); /* 0x005EA5C4: lea ecx, [ebp - 0xbc] */
    RECOMP_CALL(sub_0046D280); /* 0x005EA5CA: call 0x46d280 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x005EA5CF: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x48); /* 0x005EA5D3: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x005EA5D6: push eax */
    ecx = ebp + (-0x80); /* 0x005EA5D7: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F5420); /* 0x005EA5DA: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xBC); /* 0x005EA5DF: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x005EA5E5: push eax */
    ecx = ebp + (-0x80); /* 0x005EA5E6: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F4870); /* 0x005EA5E9: call 0x5f4870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x005EA5EE: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EA602; /* 0x005EA5F2: je 0x5ea602 */
L_005EA5F4:
    edx = ebp + (-0xBC); /* 0x005EA5F4: lea edx, [ebp - 0xbc] */
    ecx = ebp + (-0x48); /* 0x005EA5FA: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_006665A0); /* 0x005EA5FD: call 0x6665a0 */
    RECOMP_FLAGS_IN();
L_005EA602:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005EA602: mov byte ptr [ebp - 4], 0xe */
    ecx = ebp + (-0xBC); /* 0x005EA606: lea ecx, [ebp - 0xbc] */
    RECOMP_CALL(sub_0041A4B0); /* 0x005EA60C: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005EA611: mov byte ptr [ebp - 4], 8 */
    ecx = ebp + (-0x48); /* 0x005EA615: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_0040A000); /* 0x005EA618: call 0x40a000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x005EA61D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EA5A0; /* 0x005EA61E: jne 0x5ea5a0 */
L_005EA620:
    ebx = MEM32(0x7CC6A8); /* 0x005EA620: mov ebx, dword ptr [0x7cc6a8] */
L_005EA626:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005EA626: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + (-0xA0); /* 0x005EA62A: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_005F3D00); /* 0x005EA630: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EA635: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0x80); /* 0x005EA639: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F3D00); /* 0x005EA63C: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005EA2F3; /* 0x005EA641: jmp 0x5ea2f3 */
L_005EA646:
    eax = ebp + (-0xA0); /* 0x005EA646: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x005EA64C: push eax */
    ecx = edi + 0xBC; /* 0x005EA64D: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005EA653: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005EA626; /* 0x005EA658: jmp 0x5ea626 */
L_005EA65A:
    /* cmp MEM32(edi + 0xB8), 0 */ /* 0x005EA65A: cmp dword ptr [edi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EA697; /* 0x005EA661: je 0x5ea697 */
L_005EA663:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005EA663: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x80); /* 0x005EA666: lea eax, [ebp - 0x80] */
    ecx = esp; /* 0x005EA669: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x005EA66B: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, eax); /* 0x005EA671: push eax */
    RECOMP_CALL(sub_004E4200); /* 0x005EA672: call 0x4e4200 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x005EA677: mov byte ptr [ebp - 4], 0x10 */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x005EA67B: push dword ptr [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005EA67E: mov byte ptr [ebp - 4], 8 */
    ecx = MEM32(edi + 0xB8); /* 0x005EA682: mov ecx, dword ptr [edi + 0xb8] */
    RECOMP_CALL(sub_005F0480); /* 0x005EA688: call 0x5f0480 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA68D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EA6B0; /* 0x005EA68F: jne 0x5ea6b0 */
L_005EA691:
    eax = MEM32(ebp + (-0x50)); /* 0x005EA691: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x54)); /* 0x005EA694: mov ecx, dword ptr [ebp - 0x54] */
L_005EA697:
    edx = ebp + (-0x80); /* 0x005EA697: lea edx, [ebp - 0x80] */
    PUSH32(esp, edx); /* 0x005EA69A: push edx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x005EA69B: push dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x005EA69E: push eax */
    PUSH32(esp, ecx); /* 0x005EA69F: push ecx */
    ecx = MEM32(edi + 0x18); /* 0x005EA6A0: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_005F6740); /* 0x005EA6A3: call 0x5f6740 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA6A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA626; /* 0x005EA6AA: je 0x5ea626 */
L_005EA6B0:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005EA6B0: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + (-0xA0); /* 0x005EA6B4: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_005F3D00); /* 0x005EA6BA: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EA6BF: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0x80); /* 0x005EA6C3: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005F3D00); /* 0x005EA6C6: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
L_005EA6CB:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EA6CB: mov byte ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x005EA6CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA6D9; /* 0x005EA6D1: je 0x5ea6d9 */
L_005EA6D3:
    PUSH32(esp, esi); /* 0x005EA6D3: push esi */
    RECOMP_ICALL(ebx); /* 0x005EA6D4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA6D6: add esp, 4 */
    _flag_k = FK_ADD;
L_005EA6D9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFF0FFFFFu; /* 0x005EA6D9: and dword ptr [ebp - 0x2c], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x29)) = (uint8_t)(0); /* 0x005EA6E0: mov byte ptr [ebp - 0x29], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFFF00000u; /* 0x005EA6E4: and dword ptr [ebp - 0x2c], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = 0; /* 0x005EA6EB: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x28)) = 0x800u; /* 0x005EA6F2: mov dword ptr [ebp - 0x28], 0x800 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005EA6F9: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005EA700: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005EA707: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005EA70E: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005EA715: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x4)) = 0x11u; /* 0x005EA71C: mov dword ptr [ebp - 4], 0x11 */
    ecx = ebp + (-0x1C); /* 0x005EA723: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, 0x100u); /* 0x005EA726: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005EA72B: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x12u; /* 0x005EA730: mov dword ptr [ebp - 4], 0x12 */
    eax = ebp + (-0xA0); /* 0x005EA737: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x005EA73D: push eax */
    ecx = edi; /* 0x005EA73E: mov ecx, edi */
    RECOMP_CALL(sub_005E9AE0); /* 0x005EA740: call 0x5e9ae0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005EA745: mov esi, eax */
    MEM32(ebp + (-0xA8)) = esi; /* 0x005EA747: mov dword ptr [ebp - 0xa8], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x005EA74D: mov byte ptr [ebp - 4], 0x13 */
    ecx = ebp + (-0x1C); /* 0x005EA751: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, 0x100u); /* 0x005EA754: push 0x100 */
    MEM32(ebp + (-0x28)) = 0x800u; /* 0x005EA759: mov dword ptr [ebp - 0x28], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005EA760: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0xC); /* 0x005EA765: mov ebx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 7; /* 0x005EA768: add ebx, 7 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005EA76B: mov dword ptr [ebp - 0x24], 0 */
    if (3u) _cf = (((ebx) >> 2) & 1u); /* 0x005EA772: shr ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 3u; /* 0x005EA772: shr ebx, 3 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005EA775: mov dword ptr [ebp - 0x20], 0 */
    /* test ebx, ebx */ /* 0x005EA77C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA7B6; /* 0x005EA77E: je 0x5ea7b6 */
L_005EA780:
    esi = MEM32(esi + 0x14); /* 0x005EA780: mov esi, dword ptr [esi + 0x14] */
    eax = ebx * 8; /* 0x005EA783: lea eax, [ebx*8] */
    PUSH32(esp, eax); /* 0x005EA78A: push eax */
    ecx = ebp + (-0x30); /* 0x005EA78B: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005F3D70); /* 0x005EA78E: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x005EA793: push ebx */
    PUSH32(esp, esi); /* 0x005EA794: push esi */
    esi = MEM32(ebp + (-0x24)); /* 0x005EA795: mov esi, dword ptr [ebp - 0x24] */
    eax = esi + 0x7; /* 0x005EA798: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EA79B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005EA79B: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x005EA79E: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EA7A1: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005EA7A2: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = esi + ebx * 8; /* 0x005EA7A7: lea eax, [esi + ebx*8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EA7AA: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0xA8)); /* 0x005EA7AD: mov esi, dword ptr [ebp - 0xa8] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005EA7B3: mov dword ptr [ebp - 0x24], eax */
L_005EA7B6:
    eax = MEM32(esi); /* 0x005EA7B6: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005EA7B8: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(esi + 0x4); /* 0x005EA7BB: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x005EA7BE: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(esi + 0x8); /* 0x005EA7C1: mov eax, dword ptr [esi + 8] */
    MEM32(ebp + (-0x28)) = eax; /* 0x005EA7C4: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(esi + 0x10); /* 0x005EA7C7: mov eax, dword ptr [esi + 0x10] */
    esi = MEM32(esi + 0xC); /* 0x005EA7CA: mov esi, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x005EA7CD: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x005EA7D0: mov dword ptr [ebp - 0x24], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x005EA7D3: mov byte ptr [ebp - 4], 0x12 */
    eax = MEM32(ebp + (-0x8C)); /* 0x005EA7D7: mov eax, dword ptr [ebp - 0x8c] */
    ebx = MEM32(0x7CC694); /* 0x005EA7DD: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005EA7E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA80B; /* 0x005EA7E5: je 0x5ea80b */
L_005EA7E7:
    PUSH32(esp, eax); /* 0x005EA7E7: push eax */
    RECOMP_ICALL(ebx); /* 0x005EA7E8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA7EA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = 0; /* 0x005EA7ED: mov dword ptr [ebp - 0x8c], 0 */
    MEM32(ebp + (-0x88)) = 0; /* 0x005EA7F7: mov dword ptr [ebp - 0x88], 0 */
    MEM32(ebp + (-0x84)) = 0; /* 0x005EA801: mov dword ptr [ebp - 0x84], 0 */
L_005EA80B:
    eax = esi + 0x7; /* 0x005EA80B: lea eax, [esi + 7] */
    /* test eax, 0xFFFFFFF8u */ /* 0x005EA80E: test eax, 0xfffffff8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA824; /* 0x005EA813: je 0x5ea824 */
L_005EA815:
    eax = ebp + (-0x30); /* 0x005EA815: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x005EA818: push eax */
    ecx = edi + 0xBC; /* 0x005EA819: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005EA81F: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
L_005EA824:
    /* cmp MEM32(edi + 0xCC), 0 */ /* 0x005EA824: cmp dword ptr [edi + 0xcc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EA843; /* 0x005EA82B: jne 0x5ea843 */
L_005EA82D:
    esi = MEM32(ebp + (-0xAC)); /* 0x005EA82D: mov esi, dword ptr [ebp - 0xac] */
    ecx = esi; /* 0x005EA833: mov ecx, esi */
    RECOMP_CALL(sub_005F3C60); /* 0x005EA835: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = 1; /* 0x005EA83A: mov dword ptr [ebp - 0x58], 1 */
    goto L_005EA8B9; /* 0x005EA841: jmp 0x5ea8b9 */
L_005EA843:
    eax = ebp + (-0xBC); /* 0x005EA843: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x005EA849: push eax */
    ecx = edi + 0xBC; /* 0x005EA84A: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005ECFB0); /* 0x005EA850: call 0x5ecfb0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005EA855: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005EA857: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x005EA859: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA85F; /* 0x005EA85B: je 0x5ea85f */
L_005EA85D:
    eax = MEM32(eax); /* 0x005EA85D: mov eax, dword ptr [eax] */
L_005EA85F:
    edx = MEM32(eax + 0x8); /* 0x005EA85F: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x005EA862: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EA865: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    edx = edx & MEM32(ecx + 0x8); /* 0x005EA866: and edx, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x30); /* 0x005EA869: lea ecx, [ebp - 0x30] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x005EA86C: push dword ptr [eax + edx*4] */
    RECOMP_CALL(sub_005F4800); /* 0x005EA86F: call 0x5f4800 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0xBC; /* 0x005EA874: lea ecx, [edi + 0xbc] */
    RECOMP_CALL(sub_005EC610); /* 0x005EA87A: call 0x5ec610 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xAC)); /* 0x005EA87F: mov esi, dword ptr [ebp - 0xac] */
    eax = MEM32(ebp + (-0x30)); /* 0x005EA885: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi) = eax; /* 0x005EA888: mov dword ptr [esi], eax */
    ecx = esi + 0x14; /* 0x005EA88A: lea ecx, [esi + 0x14] */
    eax = MEM32(ebp + (-0x2C)); /* 0x005EA88D: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(esi + 0x4) = eax; /* 0x005EA890: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x005EA893: mov eax, dword ptr [ebp - 0x28] */
    MEM32(esi + 0x8) = eax; /* 0x005EA896: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x005EA899: mov eax, dword ptr [ebp - 0x24] */
    MEM32(esi + 0xC) = eax; /* 0x005EA89C: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x005EA89F: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi + 0x10) = eax; /* 0x005EA8A2: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x1C); /* 0x005EA8A5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x005EA8A8: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005EA8A9: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x005EA8AE: mov byte ptr [ebp - 4], 0x12 */
    MEM32(ebp + (-0x58)) = 1; /* 0x005EA8B2: mov dword ptr [ebp - 0x58], 1 */
L_005EA8B9:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EA8B9: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x1C)); /* 0x005EA8C0: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x005EA8C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA8E2; /* 0x005EA8C5: je 0x5ea8e2 */
L_005EA8C7:
    PUSH32(esp, eax); /* 0x005EA8C7: push eax */
    RECOMP_ICALL(ebx); /* 0x005EA8C8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EA8CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = 0; /* 0x005EA8CD: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005EA8D4: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005EA8DB: mov dword ptr [ebp - 0x1c], 0 */
L_005EA8E2:
    eax = esi; /* 0x005EA8E2: mov eax, esi */
L_005EA8E4:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EA8E4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EA8E7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EA8EE: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EA8EF: pop edi */
    esi = POP32_VAL(esp); /* 0x005EA8F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EA8F1: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005EA8F2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EA8F5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EA8F7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EA8FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EA8FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EA8FF: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005EA52Bu: goto L_005EA52B;
      case 0x005EA539u: goto L_005EA539;
      case 0x005EA547u: goto L_005EA547;
      case 0x005EA553u: goto L_005EA553;
      case 0x005EA574u: goto L_005EA574;
      case 0x005EA580u: goto L_005EA580;
      case 0x005EA626u: goto L_005EA626;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005EA920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EA920u);

L_005EA920:
    PUSH32(esp, ebp); /* 0x005EA920: push ebp */
    ebp = esp; /* 0x005EA921: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005EA923: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EA926: push -1 */
    PUSH32(esp, 0x0079B720u); /* 0x005EA928: push 0x79b720 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EA92D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EA933: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005EA934: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EA937: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005EA93C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x005EA93E: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, ebx); /* 0x005EA942: push ebx */
    PUSH32(esp, esi); /* 0x005EA943: push esi */
    PUSH32(esp, edi); /* 0x005EA944: push edi */
    eax = MEM32(0x855000); /* 0x005EA945: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005EA94A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EA94C: push eax */
    eax = esp + 0x30; /* 0x005EA94D: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EA951: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EA957: mov esi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005EA959: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x005EA95C: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x005EA95F: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EAA19; /* 0x005EA963: je 0x5eaa19 */
L_005EA969:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x005EA969: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EAA19; /* 0x005EA96D: je 0x5eaa19 */
L_005EA973:
    ecx = esi + 0x38; /* 0x005EA973: lea ecx, [esi + 0x38] */
    RECOMP_CALL(sub_0046D220); /* 0x005EA976: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA97B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA9F4; /* 0x005EA97D: je 0x5ea9f4 */
L_005EA97F:
    eax = MEM32(esi); /* 0x005EA97F: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x005EA981: mov ecx, esi */
    eax = MEM32(eax + 0x1C); /* 0x005EA983: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x005EA986: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EA988: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EA9F4; /* 0x005EA98A: je 0x5ea9f4 */
L_005EA98C:
    PUSH32(esp, 0x007CD6C8u); /* 0x005EA98C: push 0x7cd6c8 */
    ecx = esp + 0x14; /* 0x005EA991: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_00409FA0); /* 0x005EA995: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005EA99A: mov dword ptr [esp + 0x38], 0 */
    ecx = esp + 0x10; /* 0x005EA9A2: lea ecx, [esp + 0x10] */
    eax = MEM32(esi); /* 0x005EA9A6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x005EA9A8: push ebx */
    PUSH32(esp, ecx); /* 0x005EA9A9: push ecx */
    ecx = esi; /* 0x005EA9AA: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005EA9AC: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005EA9AF: mov dword ptr [esp + 0x38], 0xffffffff */
    ecx = esp + 0x10; /* 0x005EA9B7: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A000); /* 0x005EA9BB: call 0x40a000 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007EF00Cu); /* 0x005EA9C0: push 0x7ef00c */
    ecx = esp + 0x14; /* 0x005EA9C5: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_00409FA0); /* 0x005EA9C9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 1; /* 0x005EA9CE: mov dword ptr [esp + 0x38], 1 */
    ecx = esp + 0x10; /* 0x005EA9D6: lea ecx, [esp + 0x10] */
    eax = MEM32(esi); /* 0x005EA9DA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x005EA9DC: push edi */
    PUSH32(esp, ecx); /* 0x005EA9DD: push ecx */
    ecx = esi; /* 0x005EA9DE: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x005EA9E0: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005EA9E3: mov dword ptr [esp + 0x38], 0xffffffff */
    ecx = esp + 0x10; /* 0x005EA9EB: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A000); /* 0x005EA9EF: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_005EA9F4:
    ecx = esi + 0x70; /* 0x005EA9F4: lea ecx, [esi + 0x70] */
    /* cmp ecx, ebx */ /* 0x005EA9F7: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EAA05; /* 0x005EA9F9: je 0x5eaa05 */
L_005EA9FB:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EA9FB: push -1 */
    PUSH32(esp, 0); /* 0x005EA9FD: push 0 */
    PUSH32(esp, ebx); /* 0x005EA9FF: push ebx */
    RECOMP_CALL(sub_0040A030); /* 0x005EAA00: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EAA05:
    ecx = esi + 0x88; /* 0x005EAA05: lea ecx, [esi + 0x88] */
    /* cmp ecx, edi */ /* 0x005EAA0B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EAA19; /* 0x005EAA0D: je 0x5eaa19 */
L_005EAA0F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAA0F: push -1 */
    PUSH32(esp, 0); /* 0x005EAA11: push 0 */
    PUSH32(esp, edi); /* 0x005EAA13: push edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EAA14: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EAA19:
    ecx = MEM32(esp + 0x30); /* 0x005EAA19: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EAA1D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EAA24: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EAA25: pop edi */
    esi = POP32_VAL(esp); /* 0x005EAA26: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EAA27: pop ebx */
    ecx = MEM32(esp + 0x18); /* 0x005EAA28: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005EAA2C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EAA2E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EAA33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EAA35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EAA36: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EAA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAA40u);

L_005EAA40:
    PUSH32(esp, ebp); /* 0x005EAA40: push ebp */
    ebp = esp; /* 0x005EAA41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAA43: push -1 */
    PUSH32(esp, 0x00781739u); /* 0x005EAA45: push 0x781739 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EAA4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EAA50: push eax */
    PUSH32(esp, ecx); /* 0x005EAA51: push ecx */
    PUSH32(esp, esi); /* 0x005EAA52: push esi */
    eax = MEM32(0x855000); /* 0x005EAA53: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EAA58: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EAA5A: push eax */
    eax = ebp + (-0xC); /* 0x005EAA5B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EAA5E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0; /* 0x005EAA64: mov dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x005EAA6B: add ecx, 0x70 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x005EAA6E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAA71: push -1 */
    PUSH32(esp, 0); /* 0x005EAA73: push 0 */
    PUSH32(esp, ecx); /* 0x005EAA75: push ecx */
    MEM32(esi + 0x14) = 0xFu; /* 0x005EAA76: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x005EAA7D: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x005EAA7F: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005EAA86: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EAA89: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EAA8E: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005EAA95: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005EAA9C: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EAA9E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EAAA1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EAAA8: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EAAA9: pop esi */
    esp = ebp; /* 0x005EAAAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EAAAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EAAAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EAAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAAB0u);

L_005EAAB0:
    PUSH32(esp, ebp); /* 0x005EAAB0: push ebp */
    ebp = esp; /* 0x005EAAB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAAB3: push -1 */
    PUSH32(esp, 0x00781739u); /* 0x005EAAB5: push 0x781739 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EAABA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EAAC0: push eax */
    PUSH32(esp, ecx); /* 0x005EAAC1: push ecx */
    PUSH32(esp, esi); /* 0x005EAAC2: push esi */
    eax = MEM32(0x855000); /* 0x005EAAC3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EAAC8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EAACA: push eax */
    eax = ebp + (-0xC); /* 0x005EAACB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EAACE: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0; /* 0x005EAAD4: mov dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x88u; /* 0x005EAADB: add ecx, 0x88 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x005EAAE1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAAE4: push -1 */
    PUSH32(esp, 0); /* 0x005EAAE6: push 0 */
    PUSH32(esp, ecx); /* 0x005EAAE8: push ecx */
    MEM32(esi + 0x14) = 0xFu; /* 0x005EAAE9: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x005EAAF0: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x005EAAF2: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005EAAF9: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EAAFC: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EAB01: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005EAB08: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005EAB0F: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EAB11: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EAB14: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EAB1B: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EAB1C: pop esi */
    esp = ebp; /* 0x005EAB1D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EAB1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EAB20: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EAB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAB30u);

L_005EAB30:
    PUSH32(esp, ebp); /* 0x005EAB30: push ebp */
    ebp = esp; /* 0x005EAB31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAB33: push -1 */
    PUSH32(esp, 0x007B16D1u); /* 0x005EAB35: push 0x7b16d1 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EAB3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EAB40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x005EAB41: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EAB44: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EAB49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005EAB4B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005EAB4E: push ebx */
    PUSH32(esp, esi); /* 0x005EAB4F: push esi */
    PUSH32(esp, edi); /* 0x005EAB50: push edi */
    PUSH32(esp, eax); /* 0x005EAB51: push eax */
    eax = ebp + (-0xC); /* 0x005EAB52: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EAB55: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EAB5B: mov esi, ecx */
    MEM32(ebp + (-0x6C)) = esi; /* 0x005EAB5D: mov dword ptr [ebp - 0x6c], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EAB60: mov dword ptr [ebp - 4], 0 */
    ebx = MEM32(ebp + 0x8); /* 0x005EAB67: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x005EAB6A: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x68)) = ebx; /* 0x005EAB6D: mov dword ptr [ebp - 0x68], ebx */
    MEM32(ebp + (-0x78)) = ebx; /* 0x005EAB70: mov dword ptr [ebp - 0x78], ebx */
    MEM32(ebp + (-0x70)) = edi; /* 0x005EAB73: mov dword ptr [ebp - 0x70], edi */
    MEM32(ebp + (-0x74)) = 0; /* 0x005EAB76: mov dword ptr [ebp - 0x74], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EAB7D: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EAB83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EAB8B; /* 0x005EAB85: jne 0x5eab8b */
L_005EAB87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EAB87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EABA5; /* 0x005EAB89: jmp 0x5eaba5 */
L_005EAB8B:
    ecx = MEM32(0x927AF0); /* 0x005EAB8B: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005EAB91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EABA5; /* 0x005EAB93: jne 0x5eaba5 */
L_005EAB95:
    ecx = 0x00927AE8u; /* 0x005EAB95: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EAB9A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005EAB9F: mov ecx, dword ptr [0x927af0] */
L_005EABA5:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005EABA5: push dword ptr [edi + 4] */
    eax = MEM32(ecx); /* 0x005EABA8: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi)); /* 0x005EABAA: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005EABAC: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005EABAF: mov edx, eax */
    ecx = ebp + (-0x28); /* 0x005EABB1: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_00541450); /* 0x005EABB4: call 0x541450 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EABB9: mov dword ptr [ebp - 4], 1 */
    edx = eax; /* 0x005EABC0: mov edx, eax */
    PUSH32(esp, 0); /* 0x005EABC2: push 0 */
    PUSH32(esp, 0x20u); /* 0x005EABC4: push 0x20 */
    ecx = ebx; /* 0x005EABC6: mov ecx, ebx */
    RECOMP_CALL(sub_0066B350); /* 0x005EABC8: call 0x66b350 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EABCD: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x74)) = 1; /* 0x005EABD0: mov dword ptr [ebp - 0x74], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EABD7: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005EABDB: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EABED; /* 0x005EABDF: jb 0x5eabed */
L_005EABE1:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005EABE1: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EABE4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EABEA: add esp, 4 */
    _flag_k = FK_ADD;
L_005EABED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EABED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005EABEF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x005EABF6: mov dword ptr [ebp - 0x5c], ecx */
    eax = 0x92492493u; /* 0x005EABF9: mov eax, 0x92492493 */
    ecx = MEM32(esi + 0xB0); /* 0x005EABFE: mov ecx, dword ptr [esi + 0xb0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005EAC04: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xAC); /* 0x005EAC06: sub ecx, dword ptr [esi + 0xac] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005EAC0C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x18)) = 0; /* 0x005EAC0E: mov dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005EAC15: add edx, ecx */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005EAC17: mov byte ptr [ebp - 0x28], 0 */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EAC1B: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EAC1E: mov eax, edx */
    MEM32(ebp + (-0x64)) = edi; /* 0x005EAC20: mov dword ptr [ebp - 0x64], edi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EAC23: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EAC23: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EAC26: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005EAE12; /* 0x005EAC28: je 0x5eae12 */
L_005EAC2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005EAC2E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x005EAC30: mov dword ptr [ebp - 0x60], ebx */
L_005EAC33:
    ecx = MEM32(esi + 0xAC); /* 0x005EAC33: mov ecx, dword ptr [esi + 0xac] */
    edx = MEM32(ebp + (-0x70)); /* 0x005EAC39: mov edx, dword ptr [ebp - 0x70] */
    eax = MEM32(ebx + ecx); /* 0x005EAC3C: mov eax, dword ptr [ebx + ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x005EAC3F: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EAC50; /* 0x005EAC41: jne 0x5eac50 */
L_005EAC43:
    eax = MEM32(ebx + ecx + 0x4); /* 0x005EAC43: mov eax, dword ptr [ebx + ecx + 4] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x005EAC47: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EAD1B; /* 0x005EAC4A: je 0x5ead1b */
L_005EAC50:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EAC50: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EAC56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EAC5E; /* 0x005EAC58: jne 0x5eac5e */
L_005EAC5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EAC5A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EAC78; /* 0x005EAC5C: jmp 0x5eac78 */
L_005EAC5E:
    ecx = MEM32(0x927AF0); /* 0x005EAC5E: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005EAC64: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EAC78; /* 0x005EAC66: jne 0x5eac78 */
L_005EAC68:
    ecx = 0x00927AE8u; /* 0x005EAC68: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EAC6D: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005EAC72: mov ecx, dword ptr [0x927af0] */
L_005EAC78:
    edx = MEM32(ebp + (-0x70)); /* 0x005EAC78: mov edx, dword ptr [ebp - 0x70] */
    eax = MEM32(ecx); /* 0x005EAC7B: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x005EAC7D: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x005EAC80: push dword ptr [edx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005EAC82: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005EAC85: mov edx, eax */
    ecx = ebp + (-0x28); /* 0x005EAC87: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_00541450); /* 0x005EAC8A: call 0x541450 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005EAC8F: mov edx, eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x005EAC91: mov dword ptr [ebp - 4], 2 */
    ecx = MEM32(esi + 0xAC); /* 0x005EAC98: mov ecx, dword ptr [esi + 0xac] */
    edi = MEM32(edx + 0x10); /* 0x005EAC9E: mov edi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005EACA1: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005EACA4: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005EACA6: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EACAE; /* 0x005EACAA: jb 0x5eacae */
L_005EACAC:
    edx = MEM32(edx); /* 0x005EACAC: mov edx, dword ptr [edx] */
L_005EACAE:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005EACAE: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ecx + 0x10); /* 0x005EACB2: mov esi, dword ptr [ecx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005EACB9; /* 0x005EACB5: jb 0x5eacb9 */
L_005EACB7:
    ecx = MEM32(ecx); /* 0x005EACB7: mov ecx, dword ptr [ecx] */
L_005EACB9:
    /* cmp esi, edi */ /* 0x005EACB9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x005EACBB: mov eax, edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005EACBD: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005EACC0: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005EACC1: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EACC6: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005EACC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EACDF; /* 0x005EACCB: jne 0x5eacdf */
L_005EACCD:
    /* cmp esi, edi */ /* 0x005EACCD: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EACD6; /* 0x005EACCF: jae 0x5eacd6 */
L_005EACD1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005EACD1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EACDD; /* 0x005EACD4: jmp 0x5eacdd */
L_005EACD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005EACD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x005EACD8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005EACDA: setne al */
L_005EACDD:
    /* test eax, eax */ /* 0x005EACDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005EACDF:
    SET_LO8(ebx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x005EACDF: sete bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EACE2: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005EACE6: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EACF8; /* 0x005EACEA: jb 0x5eacf8 */
L_005EACEC:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005EACEC: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EACEF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EACF5: add esp, 4 */
    _flag_k = FK_ADD;
L_005EACF8:
    edi = MEM32(ebp + (-0x64)); /* 0x005EACF8: mov edi, dword ptr [ebp - 0x64] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x005EACFB: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + (-0x6C)); /* 0x005EACFD: mov esi, dword ptr [ebp - 0x6c] */
    ebx = MEM32(ebp + (-0x60)); /* 0x005EAD00: mov ebx, dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005EAD03: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005EAD0A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005EAD11: mov byte ptr [ebp - 0x28], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EAD1B; /* 0x005EAD15: je 0x5ead1b */
L_005EAD17:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005EAD17: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = edi; /* 0x005EAD18: mov dword ptr [ebp - 0x64], edi */
L_005EAD1B:
    ecx = MEM32(esi + 0xB0); /* 0x005EAD1B: mov ecx, dword ptr [esi + 0xb0] */
    eax = 0x92492493u; /* 0x005EAD21: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xAC); /* 0x005EAD26: sub ecx, dword ptr [esi + 0xac] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005EAD2C: add ebx, 0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 1; /* 0x005EAD2F: inc dword ptr [ebp - 0x5c] */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005EAD32: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x60)) = ebx; /* 0x005EAD34: mov dword ptr [ebp - 0x60], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005EAD37: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EAD39: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EAD3C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EAD3E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EAD3E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EAD41: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x5C)), eax */ /* 0x005EAD43: cmp dword ptr [ebp - 0x5c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005EAC33; /* 0x005EAD46: jb 0x5eac33 */
L_005EAD4C:
    /* test edi, edi */ /* 0x005EAD4C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EAE0D; /* 0x005EAD4E: je 0x5eae0d */
L_005EAD54:
    edx = edi; /* 0x005EAD54: mov edx, edi */
    ecx = ebp + (-0x40); /* 0x005EAD56: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_0047CC80); /* 0x005EAD59: call 0x47cc80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x005EAD5E: mov dword ptr [ebp - 4], 3 */
    ecx = ebp + (-0x58); /* 0x005EAD65: lea ecx, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x005EAD68: push eax */
    RECOMP_CALL(sub_005ED570); /* 0x005EAD69: call 0x5ed570 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EAD6E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EAD71: mov byte ptr [ebp - 4], 4 */
    edx = eax; /* 0x005EAD75: mov edx, eax */
    PUSH32(esp, 0x5Du); /* 0x005EAD77: push 0x5d */
    ecx = ebp + (-0x28); /* 0x005EAD79: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0055AB80); /* 0x005EAD7C: call 0x55ab80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EAD81: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005EAD84: mov byte ptr [ebp - 4], 5 */
    esi = MEM32(ebp + (-0x68)); /* 0x005EAD88: mov esi, dword ptr [ebp - 0x68] */
    ecx = esi; /* 0x005EAD8B: mov ecx, esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EAD8D: push -1 */
    PUSH32(esp, 0); /* 0x005EAD8F: push 0 */
    PUSH32(esp, eax); /* 0x005EAD91: push eax */
    RECOMP_CALL(sub_00419920); /* 0x005EAD92: call 0x419920 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EAD97: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005EAD9B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005EAD9F: mov ebx, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005EADAF; /* 0x005EADA5: jb 0x5eadaf */
L_005EADA7:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005EADA7: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(ebx); /* 0x005EADAA: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EADAC: add esp, 4 */
    _flag_k = FK_ADD;
L_005EADAF:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005EADAF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005EADB6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005EADBD: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005EADC1: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x005EADC5: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EADD3; /* 0x005EADC9: jb 0x5eadd3 */
L_005EADCB:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005EADCB: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(ebx); /* 0x005EADCE: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EADD0: add esp, 4 */
    _flag_k = FK_ADD;
L_005EADD3:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x005EADD3: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x005EADDA: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x005EADE1: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EADE5: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x005EADE9: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EADF7; /* 0x005EADED: jb 0x5eadf7 */
L_005EADEF:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005EADEF: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(ebx); /* 0x005EADF2: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EADF4: add esp, 4 */
    _flag_k = FK_ADD;
L_005EADF7:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x005EADF7: mov dword ptr [ebp - 0x2c], 0xf */
    eax = esi; /* 0x005EADFE: mov eax, esi */
    MEM32(ebp + (-0x30)) = 0; /* 0x005EAE00: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x005EAE07: mov byte ptr [ebp - 0x40], 0 */
    goto L_005EAE14; /* 0x005EAE0B: jmp 0x5eae14 */
L_005EAE0D:
    eax = MEM32(ebp + (-0x68)); /* 0x005EAE0D: mov eax, dword ptr [ebp - 0x68] */
    goto L_005EAE14; /* 0x005EAE10: jmp 0x5eae14 */
L_005EAE12:
    eax = ebx; /* 0x005EAE12: mov eax, ebx */
L_005EAE14:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EAE14: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EAE17: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EAE1E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EAE1F: pop edi */
    esi = POP32_VAL(esp); /* 0x005EAE20: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EAE21: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005EAE22: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EAE25: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EAE27: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EAE2C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EAE2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EAE2F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EAE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAE40u);

    goto L_005EAE40;
L_005E2320:
    PUSH32(esp, ebp); /* 0x005E2320: push ebp */
    ebp = esp; /* 0x005E2321: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005E2323: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E2326: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x005E2328: mov dword ptr [ebp - 0xc], ecx */
    PUSH32(esp, ebx); /* 0x005E232B: push ebx */
    PUSH32(esp, esi); /* 0x005E232C: push esi */
    esi = MEM32(ecx + 0xC); /* 0x005E232D: mov esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0x8); /* 0x005E2330: sub esi, dword ptr [ecx + 8] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x005E2333: mov dword ptr [ebp - 4], eax */
    eax = 0xB21642C9u; /* 0x005E2336: mov eax, 0xb21642c9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E233B: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x005E233D: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E233E: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E2340: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E2343: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2345: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2345: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2348: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2441; /* 0x005E234A: je 0x5e2441 */
L_005E2350:
    eax = MEM32(ebp + 0xC); /* 0x005E2350: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x8); /* 0x005E2353: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x34u; /* 0x005E2356: add eax, 0x34 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x005E2359: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E235C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x005E235E: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x005E2361: mov dword ptr [ebp - 0x10], eax */
L_005E2364:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x005E2364: add ecx, 0x34 */
    _flag_k = FK_ADD;
    edx = eax; /* 0x005E2367: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005E2369: add ecx, ebx */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E236B: mov esi, 0x10 */
L_005E2370:
    eax = MEM32(ecx); /* 0x005E2370: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x005E2372: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E23A1; /* 0x005E2374: jne 0x5e23a1 */
L_005E2376:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005E2376: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E2379: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E237C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E2370; /* 0x005E237F: jae 0x5e2370 */
L_005E2381:
    edx = MEM32(ebp + (-0x8)); /* 0x005E2381: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x005E2384: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + edx + 0x30); /* 0x005E2387: mov eax, dword ptr [ebx + edx + 0x30] */
    /* cmp eax, MEM32(ecx + 0x30) */ /* 0x005E238B: cmp eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E23A1; /* 0x005E238E: jne 0x5e23a1 */
L_005E2390:
    eax = MEM32(ebx + edx + 0x54); /* 0x005E2390: mov eax, dword ptr [ebx + edx + 0x54] */
    /* cmp eax, MEM32(edi) */ /* 0x005E2394: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E23A1; /* 0x005E2396: jne 0x5e23a1 */
L_005E2398:
    eax = MEM32(ebx + edx + 0x58); /* 0x005E2398: mov eax, dword ptr [ebx + edx + 0x58] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x005E239C: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E23D3; /* 0x005E239F: je 0x5e23d3 */
L_005E23A1:
    eax = MEM32(ebp + (-0xC)); /* 0x005E23A1: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x5Cu; /* 0x005E23A4: add ebx, 0x5c */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x4)); /* 0x005E23A7: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005E23AA: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x005E23AB: mov dword ptr [ebp - 4], esi */
    ecx = MEM32(eax + 0xC); /* 0x005E23AE: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x8); /* 0x005E23B1: sub ecx, dword ptr [eax + 8] */
    _flag_k = FK_CMP;
    eax = 0xB21642C9u; /* 0x005E23B4: mov eax, 0xb21642c9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E23B9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E23BB: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E23BD: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E23C0: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E23C2: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E23C2: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E23C5: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E23C7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E2441; /* 0x005E23C9: jae 0x5e2441 */
L_005E23CB:
    ecx = MEM32(ebp + (-0x8)); /* 0x005E23CB: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x005E23CE: mov eax, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_005E2364; /* 0x005E23D1: jmp 0x5e2364 */
L_005E23D3:
    esi = (uint32_t)((int32_t)MEM32(ebp + (-0x4)) * (int32_t)0x5Cu); /* 0x005E23D3: imul esi, dword ptr [ebp - 4], 0x5c */
    edi = MEM32(ebp + 0x10); /* 0x005E23D7: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005E23DA: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x005E23DC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E23EC; /* 0x005E23DE: je 0x5e23ec */
L_005E23E0:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E23E0: push -1 */
    PUSH32(esp, 0); /* 0x005E23E2: push 0 */
    PUSH32(esp, esi); /* 0x005E23E4: push esi */
    ecx = edi; /* 0x005E23E5: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005E23E7: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E23EC:
    eax = esi + 0x18; /* 0x005E23EC: lea eax, [esi + 0x18] */
    ecx = edi + 0x18; /* 0x005E23EF: lea ecx, [edi + 0x18] */
    /* cmp ecx, eax */ /* 0x005E23F2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2400; /* 0x005E23F4: je 0x5e2400 */
L_005E23F6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E23F6: push -1 */
    PUSH32(esp, 0); /* 0x005E23F8: push 0 */
    PUSH32(esp, eax); /* 0x005E23FA: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E23FB: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E2400:
    eax = MEM32(esi + 0x30); /* 0x005E2400: mov eax, dword ptr [esi + 0x30] */
    ecx = edi + 0x34; /* 0x005E2403: lea ecx, [edi + 0x34] */
    ebx = esi; /* 0x005E2406: mov ebx, esi */
    MEM32(edi + 0x30) = eax; /* 0x005E2408: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x005E240B: sub ebx, edi */
    _flag_k = FK_CMP;
    edx = 0x14u; /* 0x005E240D: mov edx, 0x14 */
L_005E2412:
    SET_LO8(eax, MEM8(ebx + ecx)); /* 0x005E2412: mov al, byte ptr [ebx + ecx] */
    ecx = ecx + 0x1; /* 0x005E2415: lea ecx, [ecx + 1] */
    MEM8(ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x005E2418: mov byte ptr [ecx - 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005E241B: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005E2412; /* 0x005E241C: jne 0x5e2412 */
L_005E241E:
    eax = esi + 0x48; /* 0x005E241E: lea eax, [esi + 0x48] */
    PUSH32(esp, eax); /* 0x005E2421: push eax */
    ecx = edi + 0x48; /* 0x005E2422: lea ecx, [edi + 0x48] */
    RECOMP_CALL(sub_005EB3A0); /* 0x005E2425: call 0x5eb3a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x54); /* 0x005E242A: mov eax, dword ptr [esi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x005E242D: mov dword ptr [edi + 0x54], eax */
    eax = MEM32(esi + 0x58); /* 0x005E2430: mov eax, dword ptr [esi + 0x58] */
    MEM32(edi + 0x58) = eax; /* 0x005E2433: mov dword ptr [edi + 0x58], eax */
    SET_LO8(eax, 1); /* 0x005E2436: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005E2438: pop edi */
    esi = POP32_VAL(esp); /* 0x005E2439: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E243A: pop ebx */
    esp = ebp; /* 0x005E243B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E243D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E243E: ret 0xc */
L_005E2441:
    edi = POP32_VAL(esp); /* 0x005E2441: pop edi */
    esi = POP32_VAL(esp); /* 0x005E2442: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E2443: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005E2445: pop ebx */
    esp = ebp; /* 0x005E2446: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2448: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E2449: ret 0xc */
L_005EAE40:
    PUSH32(esp, ebp); /* 0x005EAE40: push ebp */
    ebp = esp; /* 0x005EAE41: mov ebp, esp */
    ecx = MEM32(ecx + 0x1C); /* 0x005EAE43: mov ecx, dword ptr [ecx + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x005EAE46: pop ebp */
    RECOMP_BACKEDGE();
    goto L_005E2320; /* 0x005EAE47: jmp 0x5e2320 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EAE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAE50u);

    goto L_005EAE50;
L_005E2450:
    PUSH32(esp, ebp); /* 0x005E2450: push ebp */
    ebp = esp; /* 0x005E2451: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E2453: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E2456: push -1 */
    PUSH32(esp, 0x007B0480u); /* 0x005E2458: push 0x7b0480 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E245D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E2463: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB0u; /* 0x005E2464: sub esp, 0xb0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E246A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E246F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xA8) = eax; /* 0x005E2471: mov dword ptr [esp + 0xa8], eax */
    PUSH32(esp, ebx); /* 0x005E2478: push ebx */
    PUSH32(esp, esi); /* 0x005E2479: push esi */
    PUSH32(esp, edi); /* 0x005E247A: push edi */
    eax = MEM32(0x855000); /* 0x005E247B: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E2480: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E2482: push eax */
    eax = esp + 0xC0; /* 0x005E2483: lea eax, [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E248A: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E2490: mov edi, ecx */
    MEM32(esp + 0x1C) = edi; /* 0x005E2492: mov dword ptr [esp + 0x1c], edi */
    ebx = MEM32(ebp + 0x8); /* 0x005E2496: mov ebx, dword ptr [ebp + 8] */
    eax = esp + 0x18; /* 0x005E2499: lea eax, [esp + 0x18] */
    esi = MEM32(ebp + 0xC); /* 0x005E249D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x005E24A0: push ebx */
    PUSH32(esp, eax); /* 0x005E24A1: push eax */
    MEM32(esp + 0x28) = esi; /* 0x005E24A2: mov dword ptr [esp + 0x28], esi */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E24A6: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E24AB: mov eax, dword ptr [edi] */
    /* cmp MEM32(esp + 0x18), eax */ /* 0x005E24AD: cmp dword ptr [esp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E27AE; /* 0x005E24B1: je 0x5e27ae */
L_005E24B7:
    PUSH32(esp, ebx); /* 0x005E24B7: push ebx */
    ecx = edi; /* 0x005E24B8: mov ecx, edi */
    MEM32(esp + 0x18) = 0; /* 0x005E24BA: mov dword ptr [esp + 0x18], 0 */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E24C2: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x10); /* 0x005E24C7: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xC); /* 0x005E24CA: sub ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E24CD: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E24D2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E24D4: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E24D7: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E24D9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E24D9: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E24DC: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E27AE; /* 0x005E24DE: je 0x5e27ae */
L_005E24E4:
    eax = esi + 0x34; /* 0x005E24E4: lea eax, [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E24E7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = eax; /* 0x005E24E9: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0x18) = esi; /* 0x005E24ED: mov dword ptr [esp + 0x18], esi */
L_005E24F1:
    PUSH32(esp, ebx); /* 0x005E24F1: push ebx */
    ecx = edi; /* 0x005E24F2: mov ecx, edi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E24F4: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0xC); /* 0x005E24F9: mov edi, dword ptr [eax + 0xc] */
    eax = MEM32(esp + 0x10); /* 0x005E24FC: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E2500: add edi, esi */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E2502: mov esi, 0x10 */
    edx = edi + 0x34; /* 0x005E2507: lea edx, [edi + 0x34] */
    ebx = ebx; /* 0x005E250A: lea ebx, [ebx] */
L_005E2510:
    ecx = MEM32(edx); /* 0x005E2510: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E2512: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2534; /* 0x005E2514: jne 0x5e2534 */
L_005E2516:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E2516: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x005E2519: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E251C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E2510; /* 0x005E251F: jae 0x5e2510 */
L_005E2521:
    ecx = MEM32(esp + 0x20); /* 0x005E2521: mov ecx, dword ptr [esp + 0x20] */
    eax = MEM32(edi + 0x30); /* 0x005E2525: mov eax, dword ptr [edi + 0x30] */
    /* cmp eax, MEM32(ecx + 0x30) */ /* 0x005E2528: cmp eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2534; /* 0x005E252B: jne 0x5e2534 */
L_005E252D:
    eax = 1; /* 0x005E252D: mov eax, 1 */
    goto L_005E2536; /* 0x005E2532: jmp 0x5e2536 */
L_005E2534:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E2534: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E2536:
    PUSH32(esp, ebx); /* 0x005E2536: push ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x005E2537: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E257B; /* 0x005E2539: jne 0x5e257b */
L_005E253B:
    esi = MEM32(esp + 0x1C); /* 0x005E253B: mov esi, dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x20); /* 0x005E253F: mov edi, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005E2543: add esi, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1; /* 0x005E2546: inc dword ptr [esp + 0x18] */
    _flag_k = FK_INC;
    ecx = edi; /* 0x005E254A: mov ecx, edi */
    MEM32(esp + 0x1C) = esi; /* 0x005E254C: mov dword ptr [esp + 0x1c], esi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2550: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x10); /* 0x005E2555: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xC); /* 0x005E2558: sub ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E255B: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2560: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E2562: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E2565: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2567: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2567: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E256A: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esp + 0x14), eax */ /* 0x005E256C: cmp dword ptr [esp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E24F1; /* 0x005E2570: jb 0x5e24f1 */
L_005E2576:
    goto L_005E27AE; /* 0x005E2576: jmp 0x5e27ae */
L_005E257B:
    ecx = MEM32(esp + 0x20); /* 0x005E257B: mov ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E257F: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x14); /* 0x005E2584: mov ecx, dword ptr [esp + 0x14] */
    PUSH32(esp, ebx); /* 0x005E2588: push ebx */
    eax = MEM32(eax + 0xC); /* 0x005E2589: mov eax, dword ptr [eax + 0xc] */
    ecx = ecx + ecx * 8; /* 0x005E258C: lea ecx, [ecx + ecx*8] */
    esi = eax + ecx * 8; /* 0x005E258F: lea esi, [eax + ecx*8] */
    ecx = MEM32(esp + 0x20); /* 0x005E2592: mov ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2596: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005E259B: push dword ptr [esp + 0x10] */
    edi = eax; /* 0x005E259F: mov edi, eax */
    ecx = esi + 0x48; /* 0x005E25A1: lea ecx, [esi + 0x48] */
    PUSH32(esp, esi); /* 0x005E25A4: push esi */
    edx = MEM32(edi + 0x10); /* 0x005E25A5: mov edx, dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_005EDDA0); /* 0x005E25A8: call 0x5edda0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x10); /* 0x005E25AD: mov edx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E25B0: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005E25B3: push dword ptr [esp + 0x10] */
    ecx = edx + (-0x48); /* 0x005E25B7: lea ecx, [edx - 0x48] */
    PUSH32(esp, ecx); /* 0x005E25BA: push ecx */
    RECOMP_CALL(sub_005EE1F0); /* 0x005E25BB: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFFFFFFB8u; /* 0x005E25C0: add dword ptr [edi + 0x10], -0x48 */
    _flag_k = FK_ADD;
    ecx = esp + 0x2C; /* 0x005E25C4: lea ecx, [esp + 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E25C8: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005F3C60); /* 0x005E25CB: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0xC8) = 0; /* 0x005E25D0: mov dword ptr [esp + 0xc8], 0 */
    /* test MEM8(esp + 0x30), 7 */ /* 0x005E25DB: test byte ptr [esp + 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x30)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x203u; /* 0x005E25E0: mov dword ptr [esp + 0x10], 0x203 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2610; /* 0x005E25E8: jne 0x5e2610 */
L_005E25EA:
    PUSH32(esp, 0x20u); /* 0x005E25EA: push 0x20 */
    ecx = esp + 0x28; /* 0x005E25EC: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E25F0: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005E25F5: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E25F9: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E25FC: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E25FC: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005E25FF: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x203u; /* 0x005E2603: mov dword ptr [eax], 0x203 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x20u; /* 0x005E2609: add dword ptr [esp + 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E2621; /* 0x005E260E: jmp 0x5e2621 */
L_005E2610:
    PUSH32(esp, ecx); /* 0x005E2610: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E2611: push 0x20 */
    eax = esp + 0x18; /* 0x005E2613: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005E2617: push eax */
    ecx = esp + 0x30; /* 0x005E2618: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005E261C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E2621:
    edi = MEM32(esp + 0x20); /* 0x005E2621: mov edi, dword ptr [esp + 0x20] */
    ecx = esp + 0x24; /* 0x005E2625: lea ecx, [esp + 0x24] */
    PUSH32(esp, edi); /* 0x005E2629: push edi */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E262A: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E262F: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E2635: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E263D; /* 0x005E2637: jne 0x5e263d */
L_005E2639:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E2639: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E2657; /* 0x005E263B: jmp 0x5e2657 */
L_005E263D:
    ecx = MEM32(0x927B08); /* 0x005E263D: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E2643: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2657; /* 0x005E2645: jne 0x5e2657 */
L_005E2647:
    ecx = 0x00927AE8u; /* 0x005E2647: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E264C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E2651: mov ecx, dword ptr [0x927b08] */
L_005E2657:
    eax = MEM32(esp + 0x30); /* 0x005E2657: mov eax, dword ptr [esp + 0x30] */
    edx = MEM32(ecx); /* 0x005E265B: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E265D: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E2660: push 0 */
    PUSH32(esp, 2); /* 0x005E2662: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E2664: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E2664: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E2667: push eax */
    PUSH32(esp, MEM32(esp + 0x44)); /* 0x005E2668: push dword ptr [esp + 0x44] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x005E266C: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x005E266F: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005E2671: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x44; /* 0x005E2673: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_0054EB30); /* 0x005E2677: call 0x54eb30 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xC8) = (uint8_t)(2); /* 0x005E267C: mov byte ptr [esp + 0xc8], 2 */
    eax = esp + 0x44; /* 0x005E2684: lea eax, [esp + 0x44] */
    /* cmp eax, edi */ /* 0x005E2688: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2698; /* 0x005E268A: je 0x5e2698 */
L_005E268C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E268C: push -1 */
    PUSH32(esp, 0); /* 0x005E268E: push 0 */
    PUSH32(esp, edi); /* 0x005E2690: push edi */
    ecx = eax; /* 0x005E2691: mov ecx, eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E2693: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E2698:
    eax = edi + 0x18; /* 0x005E2698: lea eax, [edi + 0x18] */
    ecx = esp + 0x5C; /* 0x005E269B: lea ecx, [esp + 0x5c] */
    /* cmp ecx, eax */ /* 0x005E269F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E26AD; /* 0x005E26A1: je 0x5e26ad */
L_005E26A3:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E26A3: push -1 */
    PUSH32(esp, 0); /* 0x005E26A5: push 0 */
    PUSH32(esp, eax); /* 0x005E26A7: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E26A8: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E26AD:
    eax = MEM32(edi + 0x30); /* 0x005E26AD: mov eax, dword ptr [edi + 0x30] */
    _xmm[0] = xmm_ld(edi + 0x34); /* 0x005E26B0: movdqu xmm0, xmmword ptr [edi + 0x34] */
    esi = MEM32(0x870278); /* 0x005E26B5: mov esi, dword ptr [0x870278] */
    MEM32(esp + 0x74) = eax; /* 0x005E26BB: mov dword ptr [esp + 0x74], eax */
    eax = MEM32(edi + 0x44); /* 0x005E26BF: mov eax, dword ptr [edi + 0x44] */
    xmm_st(esp + 0x78, _xmm[0]); /* 0x005E26C2: movdqu xmmword ptr [esp + 0x78], xmm0 */
    MEM32(esp + 0x88) = eax; /* 0x005E26C8: mov dword ptr [esp + 0x88], eax */
    RECOMP_CALL(sub_006EE000); /* 0x005E26CF: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005E26D4: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    ecx = esp + 0x8C; /* 0x005E26D6: lea ecx, [esp + 0x8c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x005E26DD: push dword ptr [edi + 0x30] */
    MEM32(esp + 0xB0) = eax; /* 0x005E26E0: mov dword ptr [esp + 0xb0], eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005E26E7: xorps xmm0, xmm0 */
    eax = MEM32(ebx); /* 0x005E26EA: mov eax, dword ptr [ebx] */
    MEM32(esp + 0x9C) = eax; /* 0x005E26EC: mov dword ptr [esp + 0x9c], eax */
    eax = MEM32(ebx + 0x4); /* 0x005E26F3: mov eax, dword ptr [ebx + 4] */
    MEM32(esp + 0xA0) = eax; /* 0x005E26F6: mov dword ptr [esp + 0xa0], eax */
    MEM64(esp + 0xA8) = _xmm[0].u64[0]; /* 0x005E26FD: movlpd qword ptr [esp + 0xa8], xmm0 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E2706: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1C); /* 0x005E270B: mov ecx, dword ptr [esp + 0x1c] */
    eax = esp + 0x44; /* 0x005E270F: lea eax, [esp + 0x44] */
    PUSH32(esp, eax); /* 0x005E2713: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005E2714: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005EC000); /* 0x005E2717: call 0x5ec000 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xC8) = (uint8_t)(0); /* 0x005E271C: mov byte ptr [esp + 0xc8], 0 */
    eax = esp + 0x44; /* 0x005E2724: lea eax, [esp + 0x44] */
    MEM32(esp + 0x10) = eax; /* 0x005E2728: mov dword ptr [esp + 0x10], eax */
    MEM8(esp + 0xC8) = (uint8_t)(4); /* 0x005E272C: mov byte ptr [esp + 0xc8], 4 */
    eax = MEM32(esp + 0x8C); /* 0x005E2734: mov eax, dword ptr [esp + 0x8c] */
    esi = MEM32(0x7CC694); /* 0x005E273B: mov esi, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005E2741: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E276C; /* 0x005E2743: je 0x5e276c */
L_005E2745:
    PUSH32(esp, eax); /* 0x005E2745: push eax */
    RECOMP_ICALL(esi); /* 0x005E2746: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E2748: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x8C) = 0; /* 0x005E274B: mov dword ptr [esp + 0x8c], 0 */
    MEM32(esp + 0x90) = 0; /* 0x005E2756: mov dword ptr [esp + 0x90], 0 */
    MEM32(esp + 0x94) = 0; /* 0x005E2761: mov dword ptr [esp + 0x94], 0 */
L_005E276C:
    MEM8(esp + 0xC8) = (uint8_t)(0); /* 0x005E276C: mov byte ptr [esp + 0xc8], 0 */
    ecx = esp + 0x44; /* 0x005E2774: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_00441610); /* 0x005E2778: call 0x441610 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0xC8) = 0xFFFFFFFFu; /* 0x005E277D: mov dword ptr [esp + 0xc8], 0xffffffff */
    eax = MEM32(esp + 0x38); /* 0x005E2788: mov eax, dword ptr [esp + 0x38] */
    /* test eax, eax */ /* 0x005E278C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E27AE; /* 0x005E278E: je 0x5e27ae */
L_005E2790:
    PUSH32(esp, eax); /* 0x005E2790: push eax */
    RECOMP_ICALL(esi); /* 0x005E2791: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E2793: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x38) = 0; /* 0x005E2796: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x005E279E: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x005E27A6: mov dword ptr [esp + 0x40], 0 */
L_005E27AE:
    ecx = MEM32(esp + 0xC0); /* 0x005E27AE: mov ecx, dword ptr [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E27B5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E27BC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E27BD: pop edi */
    esi = POP32_VAL(esp); /* 0x005E27BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E27BF: pop ebx */
    ecx = MEM32(esp + 0xA8); /* 0x005E27C0: mov ecx, dword ptr [esp + 0xa8] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E27C7: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E27C9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E27CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E27D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E27D1: ret 8 */
L_005EAE50:
    PUSH32(esp, ebp); /* 0x005EAE50: push ebp */
    ebp = esp; /* 0x005EAE51: mov ebp, esp */
    ecx = MEM32(ecx + 0x1C); /* 0x005EAE53: mov ecx, dword ptr [ecx + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x005EAE56: pop ebp */
    RECOMP_BACKEDGE();
    goto L_005E2450; /* 0x005EAE57: jmp 0x5e2450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EAE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAE60u);

    goto L_005EAE60;
L_005E27E0:
    PUSH32(esp, ebp); /* 0x005E27E0: push ebp */
    ebp = esp; /* 0x005E27E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E27E3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E27E6: push -1 */
    PUSH32(esp, 0x007B04C0u); /* 0x005E27E8: push 0x7b04c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E27ED: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E27F3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x005E27F4: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E27F7: push ebx */
    PUSH32(esp, esi); /* 0x005E27F8: push esi */
    PUSH32(esp, edi); /* 0x005E27F9: push edi */
    eax = MEM32(0x855000); /* 0x005E27FA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E27FF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E2801: push eax */
    eax = esp + 0x48; /* 0x005E2802: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E2806: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E280C: mov esi, ecx */
    MEM32(esp + 0x1C) = esi; /* 0x005E280E: mov dword ptr [esp + 0x1c], esi */
    ebx = MEM32(ebp + 0x8); /* 0x005E2812: mov ebx, dword ptr [ebp + 8] */
    eax = esp + 0x18; /* 0x005E2815: lea eax, [esp + 0x18] */
    PUSH32(esp, ebx); /* 0x005E2819: push ebx */
    PUSH32(esp, eax); /* 0x005E281A: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E281B: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E2820: mov eax, dword ptr [esi] */
    /* cmp MEM32(esp + 0x18), eax */ /* 0x005E2822: cmp dword ptr [esp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2A28; /* 0x005E2826: je 0x5e2a28 */
L_005E282C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E282C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = ecx; /* 0x005E282E: mov dword ptr [esp + 0x18], ecx */
    ecx = esi; /* 0x005E2832: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x005E2834: push ebx */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2835: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x10); /* 0x005E283A: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xC); /* 0x005E283D: sub ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E2840: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2845: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E2847: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E284A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E284C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E284C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E284F: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2A28; /* 0x005E2851: je 0x5e2a28 */
L_005E2857:
    eax = MEM32(ebp + 0xC); /* 0x005E2857: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x34u; /* 0x005E285A: add eax, 0x34 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = 0; /* 0x005E285D: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x20) = eax; /* 0x005E2865: mov dword ptr [esp + 0x20], eax */
    esp = esp; /* 0x005E2869: lea esp, [esp] */
L_005E2870:
    PUSH32(esp, ebx); /* 0x005E2870: push ebx */
    ecx = esi; /* 0x005E2871: mov ecx, esi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2873: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    esi = 0x10u; /* 0x005E2878: mov esi, 0x10 */
    edi = MEM32(eax + 0xC); /* 0x005E287D: mov edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esp + 0x14); /* 0x005E2880: add edi, dword ptr [esp + 0x14] */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x20); /* 0x005E2884: mov eax, dword ptr [esp + 0x20] */
    edx = edi + 0x34; /* 0x005E2888: lea edx, [edi + 0x34] */
    goto L_005E2890; /* 0x005E288B: jmp 0x5e2890 */
L_005E2890:
    ecx = MEM32(edx); /* 0x005E2890: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E2892: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E28B3; /* 0x005E2894: jne 0x5e28b3 */
L_005E2896:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E2896: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x005E2899: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E289C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E2890; /* 0x005E289F: jae 0x5e2890 */
L_005E28A1:
    ecx = MEM32(ebp + 0xC); /* 0x005E28A1: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x30); /* 0x005E28A4: mov eax, dword ptr [edi + 0x30] */
    /* cmp eax, MEM32(ecx + 0x30) */ /* 0x005E28A7: cmp eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E28B3; /* 0x005E28AA: jne 0x5e28b3 */
L_005E28AC:
    eax = 1; /* 0x005E28AC: mov eax, 1 */
    goto L_005E28B5; /* 0x005E28B1: jmp 0x5e28b5 */
L_005E28B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E28B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E28B5:
    PUSH32(esp, ebx); /* 0x005E28B5: push ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x005E28B6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2903; /* 0x005E28B8: jne 0x5e2903 */
L_005E28BA:
    edi = MEM32(esp + 0x1C); /* 0x005E28BA: mov edi, dword ptr [esp + 0x1c] */
    esi = MEM32(esp + 0x20); /* 0x005E28BE: mov esi, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005E28C2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x48u; /* 0x005E28C3: add dword ptr [esp + 0x18], 0x48 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005E28C8: mov ecx, esi */
    MEM32(esp + 0x1C) = edi; /* 0x005E28CA: mov dword ptr [esp + 0x1c], edi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E28CE: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x10); /* 0x005E28D3: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xC); /* 0x005E28D6: sub ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E28D9: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E28DE: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E28E0: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E28E3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E28E5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E28E5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E28E8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005E28EA: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E2870; /* 0x005E28EC: jb 0x5e2870 */
L_005E28EE:
    ecx = MEM32(esp + 0x48); /* 0x005E28EE: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E28F2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E28F9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E28FA: pop edi */
    esi = POP32_VAL(esp); /* 0x005E28FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E28FC: pop ebx */
    esp = ebp; /* 0x005E28FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E28FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E2900: ret 8 */
L_005E2903:
    ecx = MEM32(esp + 0x20); /* 0x005E2903: mov ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2907: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x18); /* 0x005E290C: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebx); /* 0x005E2910: push ebx */
    eax = MEM32(eax + 0xC); /* 0x005E2911: mov eax, dword ptr [eax + 0xc] */
    ecx = ecx + ecx * 8; /* 0x005E2914: lea ecx, [ecx + ecx*8] */
    esi = eax + ecx * 8; /* 0x005E2917: lea esi, [eax + ecx*8] */
    ecx = MEM32(esp + 0x20); /* 0x005E291A: mov ecx, dword ptr [esp + 0x20] */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E291E: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x005E2923: push dword ptr [esp + 0x20] */
    edi = eax; /* 0x005E2927: mov edi, eax */
    ecx = esi + 0x48; /* 0x005E2929: lea ecx, [esi + 0x48] */
    PUSH32(esp, esi); /* 0x005E292C: push esi */
    edx = MEM32(edi + 0x10); /* 0x005E292D: mov edx, dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_005EDDA0); /* 0x005E2930: call 0x5edda0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x10); /* 0x005E2935: mov edx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2938: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x005E293B: push dword ptr [esp + 0x20] */
    ecx = edx + (-0x48); /* 0x005E293F: lea ecx, [edx - 0x48] */
    PUSH32(esp, ecx); /* 0x005E2942: push ecx */
    RECOMP_CALL(sub_005EE1F0); /* 0x005E2943: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFFFFFFB8u; /* 0x005E2948: add dword ptr [edi + 0x10], -0x48 */
    _flag_k = FK_ADD;
    ecx = esp + 0x2C; /* 0x005E294C: lea ecx, [esp + 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2950: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005F3C60); /* 0x005E2953: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0; /* 0x005E2958: mov dword ptr [esp + 0x50], 0 */
    /* test MEM8(esp + 0x30), 7 */ /* 0x005E2960: test byte ptr [esp + 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x30)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x20) = 0x204u; /* 0x005E2965: mov dword ptr [esp + 0x20], 0x204 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2995; /* 0x005E296D: jne 0x5e2995 */
L_005E296F:
    PUSH32(esp, 0x20u); /* 0x005E296F: push 0x20 */
    ecx = esp + 0x28; /* 0x005E2971: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E2975: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005E297A: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E297E: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E2981: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E2981: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005E2984: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x204u; /* 0x005E2988: mov dword ptr [eax], 0x204 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x20u; /* 0x005E298E: add dword ptr [esp + 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E29A6; /* 0x005E2993: jmp 0x5e29a6 */
L_005E2995:
    PUSH32(esp, ecx); /* 0x005E2995: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E2996: push 0x20 */
    eax = esp + 0x28; /* 0x005E2998: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x005E299C: push eax */
    ecx = esp + 0x30; /* 0x005E299D: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005E29A1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E29A6:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E29A6: push dword ptr [ebp + 0xc] */
    ecx = esp + 0x28; /* 0x005E29A9: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E29AD: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E29B2: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E29B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E29C0; /* 0x005E29BA: jne 0x5e29c0 */
L_005E29BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E29BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E29DA; /* 0x005E29BE: jmp 0x5e29da */
L_005E29C0:
    ecx = MEM32(0x927B08); /* 0x005E29C0: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E29C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E29DA; /* 0x005E29C8: jne 0x5e29da */
L_005E29CA:
    ecx = 0x00927AE8u; /* 0x005E29CA: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E29CF: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E29D4: mov ecx, dword ptr [0x927b08] */
L_005E29DA:
    eax = MEM32(esp + 0x30); /* 0x005E29DA: mov eax, dword ptr [esp + 0x30] */
    edx = MEM32(ecx); /* 0x005E29DE: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E29E0: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E29E3: push 0 */
    PUSH32(esp, 2); /* 0x005E29E5: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E29E7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E29E7: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E29EA: push eax */
    PUSH32(esp, MEM32(esp + 0x44)); /* 0x005E29EB: push dword ptr [esp + 0x44] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x005E29EF: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x005E29F2: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005E29F4: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x005E29F6: mov dword ptr [esp + 0x50], 0xffffffff */
    eax = MEM32(esp + 0x38); /* 0x005E29FE: mov eax, dword ptr [esp + 0x38] */
    /* test eax, eax */ /* 0x005E2A02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E2A28; /* 0x005E2A04: je 0x5e2a28 */
L_005E2A06:
    PUSH32(esp, eax); /* 0x005E2A06: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E2A07: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E2A0D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x38) = 0; /* 0x005E2A10: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x005E2A18: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x005E2A20: mov dword ptr [esp + 0x40], 0 */
L_005E2A28:
    ecx = MEM32(esp + 0x48); /* 0x005E2A28: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E2A2C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E2A33: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E2A34: pop edi */
    esi = POP32_VAL(esp); /* 0x005E2A35: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E2A36: pop ebx */
    esp = ebp; /* 0x005E2A37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2A39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E2A3A: ret 8 */
L_005EAE60:
    PUSH32(esp, ebp); /* 0x005EAE60: push ebp */
    ebp = esp; /* 0x005EAE61: mov ebp, esp */
    ecx = MEM32(ecx + 0x1C); /* 0x005EAE63: mov ecx, dword ptr [ecx + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x005EAE66: pop ebp */
    RECOMP_BACKEDGE();
    goto L_005E27E0; /* 0x005EAE67: jmp 0x5e27e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EAE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAE70u);

    goto L_005EAE70;
L_005E2A40:
    PUSH32(esp, ebp); /* 0x005E2A40: push ebp */
    ebp = esp; /* 0x005E2A41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E2A43: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E2A46: push ebx */
    ebx = ecx; /* 0x005E2A47: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E2A49: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, esi); /* 0x005E2A50: push esi */
    eax = 0xB21642C9u; /* 0x005E2A51: mov eax, 0xb21642c9 */
    esi = MEM32(ebx + 0xC); /* 0x005E2A56: mov esi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx + 0x8); /* 0x005E2A59: sub esi, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005E2A5C: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E2A5E: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E2A60: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E2A63: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2A65: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2A65: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2A68: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2AF3; /* 0x005E2A6A: je 0x5e2af3 */
L_005E2A70:
    eax = MEM32(ebp + 0xC); /* 0x005E2A70: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x34u; /* 0x005E2A73: add eax, 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E2A76: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x005E2A78: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005E2A79: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x005E2A7C: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x005E2A7F: mov dword ptr [ebp - 8], esi */
L_005E2A82:
    ecx = MEM32(ebx + 0x8); /* 0x005E2A82: mov ecx, dword ptr [ebx + 8] */
    edx = esi + 0x34; /* 0x005E2A85: lea edx, [esi + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E2A88: add edx, ecx */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E2A8A: mov esi, 0x10 */
    /* nop */ /* 0x005E2A8F: nop  */
L_005E2A90:
    ecx = MEM32(edx); /* 0x005E2A90: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E2A92: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2AFB; /* 0x005E2A94: jne 0x5e2afb */
L_005E2A96:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E2A96: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x005E2A99: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E2A9C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E2A90; /* 0x005E2A9F: jae 0x5e2a90 */
L_005E2AA1:
    esi = MEM32(ebp + (-0x8)); /* 0x005E2AA1: mov esi, dword ptr [ebp - 8] */
    edx = MEM32(ebx + 0x8); /* 0x005E2AA4: mov edx, dword ptr [ebx + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x005E2AA7: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + edx + 0x30); /* 0x005E2AAA: mov eax, dword ptr [esi + edx + 0x30] */
    /* cmp eax, MEM32(ecx + 0x30) */ /* 0x005E2AAE: cmp eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2AFE; /* 0x005E2AB1: jne 0x5e2afe */
L_005E2AB3:
    eax = MEM32(esi + edx + 0x54); /* 0x005E2AB3: mov eax, dword ptr [esi + edx + 0x54] */
    /* cmp eax, MEM32(edi) */ /* 0x005E2AB7: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2AFE; /* 0x005E2AB9: jne 0x5e2afe */
L_005E2ABB:
    eax = MEM32(esi + edx + 0x58); /* 0x005E2ABB: mov eax, dword ptr [esi + edx + 0x58] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x005E2ABF: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2AFE; /* 0x005E2AC2: jne 0x5e2afe */
L_005E2AC4:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x4)) * (int32_t)0x5Cu); /* 0x005E2AC4: imul eax, dword ptr [ebp - 4], 0x5c */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E2AC8: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2ACB: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0xC); /* 0x005E2ACD: mov edx, dword ptr [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x005E2AD0: push eax */
    ecx = eax + 0x5C; /* 0x005E2AD1: lea ecx, [eax + 0x5c] */
    RECOMP_CALL(sub_005EE070); /* 0x005E2AD4: call 0x5ee070 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0xC); /* 0x005E2AD9: mov edx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2ADC: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E2ADF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E2AE2: push ecx */
    ecx = edx + (-0x5C); /* 0x005E2AE3: lea ecx, [edx - 0x5c] */
    RECOMP_CALL(sub_005EE2A0); /* 0x005E2AE6: call 0x5ee2a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2AEB: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFA4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 0xFFFFFFA4u; /* 0x005E2AEE: add dword ptr [ebx + 0xc], -0x5c */
    _flag_k = FK_ADD;
L_005E2AF2:
    edi = POP32_VAL(esp); /* 0x005E2AF2: pop edi */
L_005E2AF3:
    esi = POP32_VAL(esp); /* 0x005E2AF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E2AF4: pop ebx */
    esp = ebp; /* 0x005E2AF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2AF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E2AF8: ret 8 */
L_005E2AFB:
    esi = MEM32(ebp + (-0x8)); /* 0x005E2AFB: mov esi, dword ptr [ebp - 8] */
L_005E2AFE:
    ecx = MEM32(ebx + 0xC); /* 0x005E2AFE: mov ecx, dword ptr [ebx + 0xc] */
    eax = 0xB21642C9u; /* 0x005E2B01: mov eax, 0xb21642c9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x8); /* 0x005E2B06: sub ecx, dword ptr [ebx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x005E2B09: add esi, 0x5c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x005E2B0C: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2B0F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x8)) = esi; /* 0x005E2B11: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E2B14: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E2B16: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E2B19: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2B1B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2B1B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2B1E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x005E2B20: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E2AF2; /* 0x005E2B23: jae 0x5e2af2 */
L_005E2B25:
    eax = MEM32(ebp + (-0xC)); /* 0x005E2B25: mov eax, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_005E2A82; /* 0x005E2B28: jmp 0x5e2a82 */
L_005EAE70:
    PUSH32(esp, ebp); /* 0x005EAE70: push ebp */
    ebp = esp; /* 0x005EAE71: mov ebp, esp */
    ecx = MEM32(ecx + 0x1C); /* 0x005EAE73: mov ecx, dword ptr [ecx + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x005EAE76: pop ebp */
    RECOMP_BACKEDGE();
    goto L_005E2A40; /* 0x005EAE77: jmp 0x5e2a40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EAE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAE80u);

L_005EAE80:
    eax = MEM32(ecx + 0x1C); /* 0x005EAE80: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x18); /* 0x005EAE83: mov ecx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x14); /* 0x005EAE86: sub ecx, dword ptr [eax + 0x14] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EAE89: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005EAE8E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005EAE90: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EAE92: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EAE95: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EAE97: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EAE97: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EAE9A: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EAE9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EAEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAEA0u);

L_005EAEA0:
    PUSH32(esp, ebp); /* 0x005EAEA0: push ebp */
    ebp = esp; /* 0x005EAEA1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005EAEA3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EAEA6: push esi */
    esi = MEM32(ecx + 0xB0); /* 0x005EAEA7: mov esi, dword ptr [ecx + 0xb0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0xAC); /* 0x005EAEAD: sub esi, dword ptr [ecx + 0xac] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005EAEB3: push edi */
    edi = (uint32_t)LO8(eax); /* 0x005EAEB4: movzx edi, al */
    eax = 0x92492493u; /* 0x005EAEB7: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EAEBC: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EAEBE: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EAEC0: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EAEC3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EAEC5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EAEC5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EAEC8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005EAECA: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EAED6; /* 0x005EAECC: jb 0x5eaed6 */
L_005EAECE:
    edi = POP32_VAL(esp); /* 0x005EAECE: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005EAECF: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005EAED1: pop esi */
    ebp = POP32_VAL(esp); /* 0x005EAED2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EAED3: ret 4 */
L_005EAED6:
    eax = (uint32_t)((int32_t)edi * (int32_t)0x70u); /* 0x005EAED6: imul eax, edi, 0x70 */
    edi = POP32_VAL(esp); /* 0x005EAED9: pop edi */
    esi = POP32_VAL(esp); /* 0x005EAEDA: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xAC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xAC); /* 0x005EAEDB: add eax, dword ptr [ecx + 0xac] */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + 0x18); /* 0x005EAEE1: mov ecx, dword ptr [ecx + 0x18] */
    MEM32(ebp + 0x8) = eax; /* 0x005EAEE4: mov dword ptr [ebp + 8], eax */
    ebp = POP32_VAL(esp); /* 0x005EAEE7: pop ebp */
    goto L_005F6AF0; /* 0x005EAEE8: jmp 0x5f6af0 */
L_005F6AF0:
    PUSH32(esp, ebp); /* 0x005F6AF0: push ebp */
    ebp = esp; /* 0x005F6AF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F6AF3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x005F6AF6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005F6AF9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F6AFC: push esi */
    PUSH32(esp, edi); /* 0x005F6AFD: push edi */
    edi = ecx; /* 0x005F6AFE: mov edi, ecx */
    ecx = MEM32(eax); /* 0x005F6B00: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005F6B02: mov eax, dword ptr [eax + 4] */
    /* cmp ecx, MEM32(edi + 0x30) */ /* 0x005F6B05: cmp ecx, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6B37; /* 0x005F6B08: jne 0x5f6b37 */
L_005F6B0A:
    /* cmp eax, MEM32(edi + 0x34) */ /* 0x005F6B0A: cmp eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6B37; /* 0x005F6B0D: jne 0x5f6b37 */
L_005F6B0F:
    RECOMP_CALL(sub_006EE000); /* 0x005F6B0F: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x38); /* 0x005F6B14: mov edx, dword ptr [edi + 0x38] */
    ecx = MEM32(edi + 0x3C); /* 0x005F6B17: mov ecx, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFAu; /* 0x005F6B1A: add edx, 0xfa */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005F6B20: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test ecx, ecx */ /* 0x005F6B23: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_005F6B7C; /* 0x005F6B25: jb 0x5f6b7c */
L_005F6B27:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F6B2D; /* 0x005F6B27: ja 0x5f6b2d */
L_005F6B29:
    /* cmp edx, eax */ /* 0x005F6B29: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F6B7C; /* 0x005F6B2B: jbe 0x5f6b7c */
L_005F6B2D:
    SET_LO8(eax, 1); /* 0x005F6B2D: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005F6B2F: pop edi */
    esi = POP32_VAL(esp); /* 0x005F6B30: pop esi */
    esp = ebp; /* 0x005F6B31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6B33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F6B34: ret 4 */
L_005F6B37:
    MEM32(esp + 0x14) = eax; /* 0x005F6B37: mov dword ptr [esp + 0x14], eax */
    eax = esp + 0x10; /* 0x005F6B3B: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005F6B3F: push eax */
    eax = esp + 0x10; /* 0x005F6B40: lea eax, [esp + 0x10] */
    MEM32(esp + 0x14) = ecx; /* 0x005F6B44: mov dword ptr [esp + 0x14], ecx */
    PUSH32(esp, eax); /* 0x005F6B48: push eax */
    ecx = edi + 0x28; /* 0x005F6B49: lea ecx, [edi + 0x28] */
    RECOMP_CALL(sub_005DC0D0); /* 0x005F6B4C: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0xC); /* 0x005F6B51: mov esi, dword ptr [esp + 0xc] */
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x005F6B55: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6B7C; /* 0x005F6B58: je 0x5f6b7c */
L_005F6B5A:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x005F6B5A: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6B7C; /* 0x005F6B5E: jne 0x5f6b7c */
L_005F6B60:
    RECOMP_CALL(sub_006EE000); /* 0x005F6B60: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x005F6B65: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFAu; /* 0x005F6B68: add ecx, 0xfa */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x005F6B6E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F6B7C; /* 0x005F6B70: jbe 0x5f6b7c */
L_005F6B72:
    SET_LO8(eax, 1); /* 0x005F6B72: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005F6B74: pop edi */
    esi = POP32_VAL(esp); /* 0x005F6B75: pop esi */
    esp = ebp; /* 0x005F6B76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6B78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F6B79: ret 4 */
L_005F6B7C:
    edi = POP32_VAL(esp); /* 0x005F6B7C: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F6B7D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005F6B7F: pop esi */
    esp = ebp; /* 0x005F6B80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6B82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F6B83: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EAEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAEF0u);

L_005EAEF0:
    PUSH32(esp, ebp); /* 0x005EAEF0: push ebp */
    ebp = esp; /* 0x005EAEF1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005EAEF3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x10); /* 0x005EAEF6: mov ecx, dword ptr [ecx + 0x10] */
    MEM32(eax) = ecx; /* 0x005EAEF9: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x005EAEFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EAEFC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EAF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EAF10u);

L_005EAF10:
    PUSH32(esp, ebp); /* 0x005EAF10: push ebp */
    ebp = esp; /* 0x005EAF11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005EAF13: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EAF16: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EAF1B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x005EAF1D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x005EAF20: push ebx */
    ebx = ecx; /* 0x005EAF21: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005EAF23: push esi */
    PUSH32(esp, edi); /* 0x005EAF24: push edi */
    ecx = ebx + 0x40; /* 0x005EAF25: lea ecx, [ebx + 0x40] */
    RECOMP_CALL(sub_0046D220); /* 0x005EAF28: call 0x46d220 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EAF2D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EAF48; /* 0x005EAF2F: je 0x5eaf48 */
L_005EAF31:
    RECOMP_CALL(sub_006EE000); /* 0x005EAF31: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x4); /* 0x005EAF36: mov esi, dword ptr [ebx + 4] */
    edi = eax; /* 0x005EAF39: mov edi, eax */
    RECOMP_CALL(sub_006EE000); /* 0x005EAF3B: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x005EAF40: sub edi, esi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x4) = eax; /* 0x005EAF42: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + edi; /* 0x005EAF45: add dword ptr [ebx + 0x10], edi */
    _flag_k = FK_ADD;
L_005EAF48:
    edi = MEM32(ebx + 0x8); /* 0x005EAF48: mov edi, dword ptr [ebx + 8] */
    esi = MEM32(0x870278); /* 0x005EAF4B: mov esi, dword ptr [0x870278] */
    RECOMP_CALL(sub_006EE000); /* 0x005EAF51: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005EAF56: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x24); /* 0x005EAF58: sub eax, dword ptr [edi + 0x24] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x3E8u */ /* 0x005EAF5B: cmp eax, 0x3e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EAF98; /* 0x005EAF60: jb 0x5eaf98 */
L_005EAF62:
    eax = MEM32(edi); /* 0x005EAF62: mov eax, dword ptr [edi] */
    esi = MEM32(0x870278); /* 0x005EAF64: mov esi, dword ptr [0x870278] */
    MEM32(edi + 0x8) = eax; /* 0x005EAF6A: mov dword ptr [edi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x005EAF6D: mov eax, dword ptr [edi + 4] */
    MEM32(edi + 0xC) = eax; /* 0x005EAF70: mov dword ptr [edi + 0xc], eax */
    MEM32(edi) = 0; /* 0x005EAF73: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005EAF79: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x005EAF80: mov dword ptr [edi + 0x1c], 0 */
    MEM32(edi + 0x20) = 0; /* 0x005EAF87: mov dword ptr [edi + 0x20], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005EAF8E: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005EAF93: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x24) = eax; /* 0x005EAF95: mov dword ptr [edi + 0x24], eax */
L_005EAF98:
    eax = MEM32(ebx + 0x8); /* 0x005EAF98: mov eax, dword ptr [ebx + 8] */
    MEM32(eax + 0x1C) = 0; /* 0x005EAF9B: mov dword ptr [eax + 0x1c], 0 */
    eax = MEM32(ebx + 0x8); /* 0x005EAFA2: mov eax, dword ptr [ebx + 8] */
    MEM32(eax + 0x20) = 0; /* 0x005EAFA5: mov dword ptr [eax + 0x20], 0 */
    edi = MEM32(ebx + 0xB0); /* 0x005EAFAC: mov edi, dword ptr [ebx + 0xb0] */
    esi = MEM32(ebx + 0xAC); /* 0x005EAFB2: mov esi, dword ptr [ebx + 0xac] */
    /* cmp esi, edi */ /* 0x005EAFB8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB058; /* 0x005EAFBA: je 0x5eb058 */
L_005EAFC0:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EAFC0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EAFC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EAFCE; /* 0x005EAFC8: jne 0x5eafce */
L_005EAFCA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EAFCA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EAFE8; /* 0x005EAFCC: jmp 0x5eafe8 */
L_005EAFCE:
    ecx = MEM32(0x927AEC); /* 0x005EAFCE: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005EAFD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EAFE8; /* 0x005EAFD6: jne 0x5eafe8 */
L_005EAFD8:
    ecx = 0x00927AE8u; /* 0x005EAFD8: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EAFDD: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005EAFE2: mov ecx, dword ptr [0x927aec] */
L_005EAFE8:
    eax = MEM32(ecx); /* 0x005EAFE8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x20); /* 0x005EAFEA: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x005EAFED: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005EAFEE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005EAFF1: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(eax) */ /* 0x005EAFF3: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EAFFF; /* 0x005EAFF5: jne 0x5eafff */
L_005EAFF7:
    ecx = MEM32(esi + 0x4); /* 0x005EAFF7: mov ecx, dword ptr [esi + 4] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005EAFFA: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB04D; /* 0x005EAFFD: je 0x5eb04d */
L_005EAFFF:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EAFFF: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EB005: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB00D; /* 0x005EB007: jne 0x5eb00d */
L_005EB009:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EB009: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EB027; /* 0x005EB00B: jmp 0x5eb027 */
L_005EB00D:
    ecx = MEM32(0x927B08); /* 0x005EB00D: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005EB013: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB027; /* 0x005EB015: jne 0x5eb027 */
L_005EB017:
    ecx = 0x00927AE8u; /* 0x005EB017: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EB01C: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005EB021: mov ecx, dword ptr [0x927b08] */
L_005EB027:
    eax = MEM32(ecx); /* 0x005EB027: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x005EB029: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x005EB02C: push edx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005EB02D: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x005EB030: push dword ptr [esi] */
    eax = MEM32(eax + 0x18); /* 0x005EB032: mov eax, dword ptr [eax + 0x18] */
    RECOMP_ICALL(eax); /* 0x005EB035: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EB037: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB04D; /* 0x005EB039: je 0x5eb04d */
L_005EB03B:
    ecx = MEM32(ebx + 0x8); /* 0x005EB03B: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x005EB03E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x005EB041: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x8); /* 0x005EB044: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x005EB047: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + eax; /* 0x005EB04A: add dword ptr [ecx + 0x20], eax */
    _flag_k = FK_ADD;
L_005EB04D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EB04D: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EB050: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EAFC0; /* 0x005EB052: jne 0x5eafc0 */
L_005EB058:
    edx = MEM32(ebx + 0x44); /* 0x005EB058: mov edx, dword ptr [ebx + 0x44] */
    ecx = edx; /* 0x005EB05B: mov ecx, edx */
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x005EB05D: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x005EB05D: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x005EB060: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB063: jbe 0x5eb10c */
L_005EB069:
    /* cmp ecx, 0xBu */ /* 0x005EB069: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB06C: jae 0x5eb10c */
L_005EB072:
    eax = edx; /* 0x005EB072: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x005EB074: sar eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 24u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 24u);
    /* test eax, eax */ /* 0x005EB077: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005EB10C; /* 0x005EB079: jle 0x5eb10c */
L_005EB07F:
    /* cmp eax, 5 */ /* 0x005EB07F: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB082: jge 0x5eb10c */
L_005EB088:
    /* cmp ecx, 1 */ /* 0x005EB088: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB09F; /* 0x005EB08B: jne 0x5eb09f */
L_005EB08D:
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x005EB08D: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB091: je 0x5eb10c */
L_005EB093:
    eax = edx; /* 0x005EB093: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x005EB095: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x005EB09A: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB09D: ja 0x5eb10c */
L_005EB09F:
    /* cmp ecx, 7 */ /* 0x005EB09F: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB0B2; /* 0x005EB0A2: jne 0x5eb0b2 */
L_005EB0A4:
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x005EB0A4: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB0A8: je 0x5eb10c */
L_005EB0AA:
    /* test edx, 0x000FFFFFu */ /* 0x005EB0AA: test edx, 0xfffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB0B0: jne 0x5eb10c */
L_005EB0B2:
    /* cmp ecx, 3 */ /* 0x005EB0B2: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB0BD; /* 0x005EB0B5: jne 0x5eb0bd */
L_005EB0B7:
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x005EB0B7: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB0BB: je 0x5eb10c */
L_005EB0BD:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EB0BD: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EB0C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB0CB; /* 0x005EB0C5: jne 0x5eb0cb */
L_005EB0C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EB0C7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EB0E5; /* 0x005EB0C9: jmp 0x5eb0e5 */
L_005EB0CB:
    ecx = MEM32(0x927B08); /* 0x005EB0CB: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005EB0D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB0E5; /* 0x005EB0D3: jne 0x5eb0e5 */
L_005EB0D5:
    ecx = 0x00927AE8u; /* 0x005EB0D5: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EB0DA: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005EB0DF: mov ecx, dword ptr [0x927b08] */
L_005EB0E5:
    eax = MEM32(ecx); /* 0x005EB0E5: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x005EB0E7: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x005EB0EA: push edx */
    PUSH32(esp, MEM32(ebx + 0x44)); /* 0x005EB0EB: push dword ptr [ebx + 0x44] */
    PUSH32(esp, MEM32(ebx + 0x40)); /* 0x005EB0EE: push dword ptr [ebx + 0x40] */
    eax = MEM32(eax + 0x18); /* 0x005EB0F1: mov eax, dword ptr [eax + 0x18] */
    RECOMP_ICALL(eax); /* 0x005EB0F4: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EB0F6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB10C; /* 0x005EB0F8: je 0x5eb10c */
L_005EB0FA:
    ecx = MEM32(ebx + 0x8); /* 0x005EB0FA: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x005EB0FD: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x005EB100: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x8); /* 0x005EB103: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x005EB106: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + eax; /* 0x005EB109: add dword ptr [ecx + 0x20], eax */
    _flag_k = FK_ADD;
L_005EB10C:
    ecx = MEM32(ebp + (-0x4)); /* 0x005EB10C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x005EB10F: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB110: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EB111: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x005EB113: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x005EB114: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EB119: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB11B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB11C: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB120u);

L_005EB120:
    eax = MEM32(ecx + 0x8); /* 0x005EB120: mov eax, dword ptr [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB123: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB130u);

L_005EB130:
    eax = MEM32(ecx + 0x14); /* 0x005EB130: mov eax, dword ptr [ecx + 0x14] */
    /* test eax, eax */ /* 0x005EB133: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB13E; /* 0x005EB135: je 0x5eb13e */
L_005EB137:
    eax = MEM32(eax + 0xAC); /* 0x005EB137: mov eax, dword ptr [eax + 0xac] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB13D: ret  */
L_005EB13E:
    eax = MEM32(ecx + 0x8); /* 0x005EB13E: mov eax, dword ptr [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB141: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB150u);

L_005EB150:
    PUSH32(esp, ebp); /* 0x005EB150: push ebp */
    ebp = esp; /* 0x005EB151: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EB153: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EB156: push ebx */
    PUSH32(esp, esi); /* 0x005EB157: push esi */
    PUSH32(esp, edi); /* 0x005EB158: push edi */
    edi = ecx; /* 0x005EB159: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005EB15B: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005EB161: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB169; /* 0x005EB163: jne 0x5eb169 */
L_005EB165:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005EB165: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005EB183; /* 0x005EB167: jmp 0x5eb183 */
L_005EB169:
    ecx = MEM32(0x927AEC); /* 0x005EB169: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005EB16F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EB183; /* 0x005EB171: jne 0x5eb183 */
L_005EB173:
    ecx = 0x00927AE8u; /* 0x005EB173: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005EB178: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005EB17D: mov ecx, dword ptr [0x927aec] */
L_005EB183:
    eax = MEM32(ecx); /* 0x005EB183: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x005EB185: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x005EB188: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005EB189: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005EB18C: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(ecx); /* 0x005EB18F: mov ebx, dword ptr [ecx] */
    esi = MEM32(ecx + 0x4); /* 0x005EB191: mov esi, dword ptr [ecx + 4] */
    /* cmp ebx, MEM32(eax) */ /* 0x005EB194: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB1A9; /* 0x005EB196: jne 0x5eb1a9 */
L_005EB198:
    /* cmp esi, MEM32(eax + 0x4) */ /* 0x005EB198: cmp esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB1A9; /* 0x005EB19B: jne 0x5eb1a9 */
L_005EB19D:
    eax = MEM32(edi + 0x54); /* 0x005EB19D: mov eax, dword ptr [edi + 0x54] */
    edi = POP32_VAL(esp); /* 0x005EB1A0: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB1A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EB1A2: pop ebx */
    esp = ebp; /* 0x005EB1A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB1A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB1A6: ret 4 */
L_005EB1A9:
    ecx = MEM32(edi + 0x14); /* 0x005EB1A9: mov ecx, dword ptr [edi + 0x14] */
    /* test ecx, ecx */ /* 0x005EB1AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB1E0; /* 0x005EB1AE: je 0x5eb1e0 */
L_005EB1B0:
    eax = MEM32(ecx + 0xE4); /* 0x005EB1B0: mov eax, dword ptr [ecx + 0xe4] */
    ecx = MEM32(ecx + 0xE8); /* 0x005EB1B6: mov ecx, dword ptr [ecx + 0xe8] */
    /* cmp eax, ecx */ /* 0x005EB1BC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB1D3; /* 0x005EB1BE: je 0x5eb1d3 */
L_005EB1C0:
    edx = MEM32(eax + 0xC); /* 0x005EB1C0: mov edx, dword ptr [eax + 0xc] */
    /* cmp MEM32(eax), ebx */ /* 0x005EB1C3: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB1CC; /* 0x005EB1C5: jne 0x5eb1cc */
L_005EB1C7:
    /* cmp MEM32(eax + 0x4), esi */ /* 0x005EB1C7: cmp dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB1D5; /* 0x005EB1CA: je 0x5eb1d5 */
L_005EB1CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x005EB1CC: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x005EB1CF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB1C0; /* 0x005EB1D1: jne 0x5eb1c0 */
L_005EB1D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005EB1D3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_005EB1D5:
    edi = POP32_VAL(esp); /* 0x005EB1D5: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB1D6: pop esi */
    eax = edx; /* 0x005EB1D7: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x005EB1D9: pop ebx */
    esp = ebp; /* 0x005EB1DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB1DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB1DD: ret 4 */
L_005EB1E0:
    edi = POP32_VAL(esp); /* 0x005EB1E0: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB1E1: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005EB1E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x005EB1E4: pop ebx */
    esp = ebp; /* 0x005EB1E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB1E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB1E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB1F0u);

L_005EB1F0:
    PUSH32(esp, ebp); /* 0x005EB1F0: push ebp */
    ebp = esp; /* 0x005EB1F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005EB1F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005EB1F6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB1F9: push esi */
    PUSH32(esp, edi); /* 0x005EB1FA: push edi */
    edi = MEM32(ecx + 0x18); /* 0x005EB1FB: mov edi, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x005EB1FE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005EB201: mov eax, dword ptr [ecx] */
    MEM32(esp + 0x10) = eax; /* 0x005EB203: mov dword ptr [esp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x005EB207: mov eax, dword ptr [ecx + 4] */
    ecx = edi + 0x28; /* 0x005EB20A: lea ecx, [edi + 0x28] */
    MEM32(esp + 0x14) = eax; /* 0x005EB20D: mov dword ptr [esp + 0x14], eax */
    eax = esp + 0x10; /* 0x005EB211: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005EB215: push eax */
    eax = esp + 0x10; /* 0x005EB216: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005EB21A: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005EB21B: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0xC); /* 0x005EB220: mov esi, dword ptr [esp + 0xc] */
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x005EB224: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB249; /* 0x005EB227: je 0x5eb249 */
L_005EB229:
    MEM8(esi + 0x28) = (uint8_t)(0); /* 0x005EB229: mov byte ptr [esi + 0x28], 0 */
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x005EB22D: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB242; /* 0x005EB231: je 0x5eb242 */
L_005EB233:
    RECOMP_CALL(sub_0055B360); /* 0x005EB233: call 0x55b360 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x005EB238: push dword ptr [esi + 0x24] */
    ecx = eax; /* 0x005EB23B: mov ecx, eax */
    RECOMP_CALL(sub_0061D270); /* 0x005EB23D: call 0x61d270 */
    RECOMP_FLAGS_IN();
L_005EB242:
    MEM32(esi + 0x24) = 0; /* 0x005EB242: mov dword ptr [esi + 0x24], 0 */
L_005EB249:
    edi = POP32_VAL(esp); /* 0x005EB249: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB24A: pop esi */
    esp = ebp; /* 0x005EB24B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB24D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB24E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB260u);

L_005EB260:
    PUSH32(esp, ebp); /* 0x005EB260: push ebp */
    ebp = esp; /* 0x005EB261: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x005EB263: mov ecx, dword ptr [ecx + 0x18] */
    ebp = POP32_VAL(esp); /* 0x005EB266: pop ebp */
    goto L_005F6A60; /* 0x005EB267: jmp 0x5f6a60 */
L_005F6A60:
    PUSH32(esp, ebp); /* 0x005F6A60: push ebp */
    ebp = esp; /* 0x005F6A61: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005F6A63: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x005F6A66: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F6A69: push ebx */
    PUSH32(esp, esi); /* 0x005F6A6A: push esi */
    esi = MEM32(eax + 0x4); /* 0x005F6A6B: mov esi, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x005F6A6E: push edi */
    edi = MEM32(eax); /* 0x005F6A6F: mov edi, dword ptr [eax] */
    /* cmp MEM32(ecx + 0x30), edi */ /* 0x005F6A71: cmp dword ptr [ecx + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F6A7B; /* 0x005F6A74: jne 0x5f6a7b */
L_005F6A76:
    /* cmp MEM32(ecx + 0x34), esi */ /* 0x005F6A76: cmp dword ptr [ecx + 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x34)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6AE7; /* 0x005F6A79: je 0x5f6ae7 */
L_005F6A7B:
    eax = ebp + (-0x8); /* 0x005F6A7B: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x005F6A7E: mov dword ptr [ebp - 8], edi */
    PUSH32(esp, eax); /* 0x005F6A81: push eax */
    ebx = ecx + 0x28; /* 0x005F6A82: lea ebx, [ecx + 0x28] */
    MEM32(ebp + (-0x4)) = esi; /* 0x005F6A85: mov dword ptr [ebp - 4], esi */
    eax = ebp + 0x8; /* 0x005F6A88: lea eax, [ebp + 8] */
    ecx = ebx; /* 0x005F6A8B: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005F6A8D: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005F6A8E: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005F6A93: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebx) */ /* 0x005F6A96: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F6AA7; /* 0x005F6A98: je 0x5f6aa7 */
L_005F6A9A:
    MEM8(eax + 0x28) = (uint8_t)(1); /* 0x005F6A9A: mov byte ptr [eax + 0x28], 1 */
    edi = POP32_VAL(esp); /* 0x005F6A9E: pop edi */
    esi = POP32_VAL(esp); /* 0x005F6A9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F6AA0: pop ebx */
    esp = ebp; /* 0x005F6AA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6AA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F6AA4: ret 4 */
L_005F6AA7:
    eax = ebp + (-0x8); /* 0x005F6AA7: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005F6AAA: mov dword ptr [ebp - 0x1c], 0 */
    PUSH32(esp, eax); /* 0x005F6AB1: push eax */
    ecx = ebx; /* 0x005F6AB2: mov ecx, ebx */
    MEM32(ebp + (-0x18)) = 0; /* 0x005F6AB4: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005F6ABB: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x005F6AC2: mov dword ptr [ebp - 0x10], 0 */
    MEM8(ebp + (-0xC)) = (uint8_t)(1); /* 0x005F6AC9: mov byte ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = edi; /* 0x005F6ACD: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x005F6AD0: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_005F7160); /* 0x005F6AD3: call 0x5f7160 */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(ebp + (-0x1C)); /* 0x005F6AD8: movdqu xmm0, xmmword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F6ADD: mov ecx, dword ptr [ebp - 0xc] */
    xmm_st(eax, _xmm[0]); /* 0x005F6AE0: movdqu xmmword ptr [eax], xmm0 */
    MEM32(eax + 0x10) = ecx; /* 0x005F6AE4: mov dword ptr [eax + 0x10], ecx */
L_005F6AE7:
    edi = POP32_VAL(esp); /* 0x005F6AE7: pop edi */
    esi = POP32_VAL(esp); /* 0x005F6AE8: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F6AE9: pop ebx */
    esp = ebp; /* 0x005F6AEA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F6AEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F6AED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB270u);

L_005EB270:
    PUSH32(esp, ebp); /* 0x005EB270: push ebp */
    ebp = esp; /* 0x005EB271: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EB273: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB276: push esi */
    esi = MEM32(ecx + 0x18); /* 0x005EB277: mov esi, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x005EB27A: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005EB27D: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x005EB27F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x4); /* 0x005EB282: mov eax, dword ptr [ecx + 4] */
    ecx = esi + 0x28; /* 0x005EB285: lea ecx, [esi + 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EB288: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x005EB28B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x005EB28E: push eax */
    eax = ebp + 0x8; /* 0x005EB28F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005EB292: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005EB293: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EB298: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x005EB29B: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005EB29E: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB2B1; /* 0x005EB29F: je 0x5eb2b1 */
L_005EB2A1:
    SET_LO8(ecx, MEM8(eax + 0x28)); /* 0x005EB2A1: mov cl, byte ptr [eax + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005EB2A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), LO8(ecx) */ /* 0x005EB2A6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005EB2A8: sete al */
    esp = ebp; /* 0x005EB2AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB2AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB2AE: ret 4 */
L_005EB2B1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x005EB2B1: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005EB2B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), LO8(ecx) */ /* 0x005EB2B5: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005EB2B7: sete al */
    esp = ebp; /* 0x005EB2BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB2BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB2BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB2C0u);

L_005EB2C0:
    PUSH32(esp, ebp); /* 0x005EB2C0: push ebp */
    ebp = esp; /* 0x005EB2C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB2C3: push -1 */
    PUSH32(esp, 0x007B173Du); /* 0x005EB2C5: push 0x7b173d */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB2CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB2D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EB2D1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB2D4: push esi */
    PUSH32(esp, edi); /* 0x005EB2D5: push edi */
    eax = MEM32(0x855000); /* 0x005EB2D6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB2DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB2DD: push eax */
    eax = ebp + (-0xC); /* 0x005EB2DE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB2E1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EB2E7: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x005EB2E9: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x10)) = 0; /* 0x005EB2EC: mov dword ptr [ebp - 0x10], 0 */
    ecx = edi + 0x78; /* 0x005EB2F3: lea ecx, [edi + 0x78] */
    MEM32(edi) = 0x007F6860u; /* 0x005EB2F6: mov dword ptr [edi], 0x7f6860 */
    MEM32(edi + 0x10) = 0x008018D4u; /* 0x005EB2FC: mov dword ptr [edi + 0x10], 0x8018d4 */
    RECOMP_ICALL(MEM32(0x7CC428)); /* 0x005EB303: call dword ptr [0x7cc428] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB309: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x18; /* 0x005EB310: lea esi, [edi + 0x18] */
    PUSH32(esp, 0); /* 0x005EB313: push 0 */
    PUSH32(esp, esi); /* 0x005EB315: push esi */
    ecx = edi; /* 0x005EB316: mov ecx, edi */
    MEM32(ebp + (-0x10)) = 1; /* 0x005EB318: mov dword ptr [ebp - 0x10], 1 */
    RECOMP_ICALL(MEM32(0x7CC424)); /* 0x005EB31F: call dword ptr [0x7cc424] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EB325: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi); /* 0x005EB32C: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x18)) = esi; /* 0x005EB32E: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(eax + 0x4); /* 0x005EB331: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax) = 0x007F686Cu; /* 0x005EB334: mov dword ptr [edi + eax], 0x7f686c */
    eax = MEM32(edi); /* 0x005EB33B: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x005EB33D: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x78); /* 0x005EB340: lea eax, [ecx - 0x78] */
    MEM32(ecx + edi + (-0x4)) = eax; /* 0x005EB343: mov dword ptr [ecx + edi - 4], eax */
    ecx = esi; /* 0x005EB347: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC420)); /* 0x005EB349: call dword ptr [0x7cc420] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005EB34F: mov byte ptr [ebp - 4], 2 */
    ecx = esi; /* 0x005EB353: mov ecx, esi */
    MEM32(esi) = 0x007EE9C4u; /* 0x005EB355: mov dword ptr [esi], 0x7ee9c4 */
    MEM8(esi + 0x4C) = (uint8_t)(0); /* 0x005EB35B: mov byte ptr [esi + 0x4c], 0 */
    MEM8(esi + 0x45) = (uint8_t)(0); /* 0x005EB35F: mov byte ptr [esi + 0x45], 0 */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x005EB363: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927B74); /* 0x005EB369: mov eax, dword ptr [0x927b74] */
    MEM32(esi + 0x50) = 0; /* 0x005EB36E: mov dword ptr [esi + 0x50], 0 */
    MEM32(esi + 0x48) = eax; /* 0x005EB375: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x40) = 0; /* 0x005EB378: mov dword ptr [esi + 0x40], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB37F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005EB386: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB388: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB38B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB392: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EB393: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB394: pop esi */
    esp = ebp; /* 0x005EB395: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB397: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB398: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB3A0u);

L_005EB3A0:
    PUSH32(esp, ebp); /* 0x005EB3A0: push ebp */
    ebp = esp; /* 0x005EB3A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB3A3: push -1 */
    PUSH32(esp, 0x007B1760u); /* 0x005EB3A5: push 0x7b1760 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB3AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB3B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EB3B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EB3B4: push ebx */
    PUSH32(esp, esi); /* 0x005EB3B5: push esi */
    PUSH32(esp, edi); /* 0x005EB3B6: push edi */
    eax = MEM32(0x855000); /* 0x005EB3B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB3BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB3BE: push eax */
    eax = ebp + (-0xC); /* 0x005EB3BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB3C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EB3C8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005EB3CB: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005EB3CD: mov dword ptr [ebp - 0x14], ebx */
    esi = MEM32(ebp + 0x8); /* 0x005EB3D0: mov esi, dword ptr [ebp + 8] */
    /* cmp ebx, esi */ /* 0x005EB3D3: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB3E5; /* 0x005EB3D5: je 0x5eb3e5 */
L_005EB3D7:
    edx = MEM32(esi); /* 0x005EB3D7: mov edx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x005EB3D9: mov eax, dword ptr [esi + 4] */
    /* cmp edx, eax */ /* 0x005EB3DC: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB3FB; /* 0x005EB3DE: jne 0x5eb3fb */
L_005EB3E0:
    eax = MEM32(ebx); /* 0x005EB3E0: mov eax, dword ptr [ebx] */
L_005EB3E2:
    MEM32(ebx + 0x4) = eax; /* 0x005EB3E2: mov dword ptr [ebx + 4], eax */
L_005EB3E5:
    eax = ebx; /* 0x005EB3E5: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB3E7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB3EA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB3F1: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EB3F2: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB3F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EB3F4: pop ebx */
    esp = ebp; /* 0x005EB3F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB3F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB3F8: ret 4 */
L_005EB3FB:
    edi = eax; /* 0x005EB3FB: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x005EB3FD: sub edi, edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx); /* 0x005EB3FF: mov ecx, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x005EB401: mov esi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x005EB404: sub esi, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x005EB406: mov dword ptr [ebp - 0x18], esi */
    /* cmp edi, esi */ /* 0x005EB409: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x005EB40B: mov esi, dword ptr [ebp + 8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_005EB427; /* 0x005EB40E: ja 0x5eb427 */
L_005EB410:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EB410: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005EB412: push eax */
    PUSH32(esp, edx); /* 0x005EB413: push edx */
    PUSH32(esp, ecx); /* 0x005EB414: push ecx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005EB415: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EB41B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x005EB41E: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005EB421: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x005EB423: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005EB3E2; /* 0x005EB425: jmp 0x5eb3e2 */
L_005EB427:
    eax = MEM32(ebx + 0x8); /* 0x005EB427: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EB42A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x005EB42C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EB45A; /* 0x005EB42E: ja 0x5eb45a */
L_005EB430:
    ebx = MEM32(ebp + (-0x18)); /* 0x005EB430: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x005EB433: add ebx, edx */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x005EB435: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EB437: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005EB439: push eax */
    PUSH32(esp, edx); /* 0x005EB43A: push edx */
    PUSH32(esp, ecx); /* 0x005EB43B: push ecx */
    edi = MEM32(0x7CC68C); /* 0x005EB43C: mov edi, dword ptr [0x7cc68c] */
    RECOMP_ICALL(edi); /* 0x005EB442: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x005EB444: mov esi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EB447: sub esi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB449: push esi */
    PUSH32(esp, ebx); /* 0x005EB44A: push ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x005EB44B: mov ebx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x005EB44E: push dword ptr [ebx + 4] */
    RECOMP_ICALL(edi); /* 0x005EB451: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x005EB453: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005EB456: add eax, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005EB3E2; /* 0x005EB458: jmp 0x5eb3e2 */
L_005EB45A:
    /* test ecx, ecx */ /* 0x005EB45A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB468; /* 0x005EB45C: je 0x5eb468 */
L_005EB45E:
    PUSH32(esp, ecx); /* 0x005EB45E: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EB45F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EB465: add esp, 4 */
    _flag_k = FK_ADD;
L_005EB468:
    eax = MEM32(esi + 0x4); /* 0x005EB468: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005EB46B: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005EB46D: push eax */
    ecx = ebx; /* 0x005EB46E: mov ecx, ebx */
    RECOMP_CALL(sub_004E6EE0); /* 0x005EB470: call 0x4e6ee0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EB475: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB3E5; /* 0x005EB477: je 0x5eb3e5 */
L_005EB47D:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB47D: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(esi + 0x4); /* 0x005EB484: mov esi, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x005EB487: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x005EB48A: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005EB48C: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB48E: push esi */
    PUSH32(esp, eax); /* 0x005EB48F: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x005EB490: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005EB492: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EB498: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005EB49B: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005EB49D: mov dword ptr [ebx + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB4A0: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_005EB3E5; /* 0x005EB4A7: jmp 0x5eb3e5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EB4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB4ACu);

L_005EB4AC:
    ecx = MEM32(ebp + (-0x14)); /* 0x005EB4AC: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x005EB4AF: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005EB4B4: push 0 */
    PUSH32(esp, 0); /* 0x005EB4B6: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EB4B8: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EB4BDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
