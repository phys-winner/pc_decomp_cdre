#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00405A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405A90u);

L_00405A90:
    PUSH32(esp, ebp); /* 0x00405A90: push ebp */
    ebp = esp; /* 0x00405A91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405A93: push -1 */
    PUSH32(esp, 0x007BFFC4u); /* 0x00405A95: push 0x7bffc4 */
    eax = MEM32(FS_BASE + (0)); /* 0x00405A9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405AA0: push eax */
    eax = MEM32(0x855000); /* 0x00405AA1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00405AA6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405AA8: push eax */
    eax = ebp + (-0xC); /* 0x00405AA9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00405AAC: mov dword ptr fs:[0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405AB2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x1Fu; /* 0x00405AB4: mov eax, 0x1f */
    /* cmp MEM8(0x7CCF54), LO8(ecx) */ /* 0x00405AB9: cmp byte ptr [0x7ccf54], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF54)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00405ABF: cmove eax, ecx */
    ecx = 0x00866008u; /* 0x00405AC2: mov ecx, 0x866008 */
    PUSH32(esp, eax); /* 0x00405AC7: push eax */
    PUSH32(esp, 0x007CCF54u); /* 0x00405AC8: push 0x7ccf54 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405ACD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00405AD2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405AD9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF74), LO8(ecx) */ /* 0x00405ADB: cmp byte ptr [0x7ccf74], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF74)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x17u; /* 0x00405AE1: mov eax, 0x17 */
    MEM32(0x866030) = 0; /* 0x00405AE6: mov dword ptr [0x866030], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00405AF0: cmove eax, ecx */
    MEM32(0x866034) = 0; /* 0x00405AF3: mov dword ptr [0x866034], 0 */
    PUSH32(esp, eax); /* 0x00405AFD: push eax */
    PUSH32(esp, 0x007CCF74u); /* 0x00405AFE: push 0x7ccf74 */
    ecx = 0x00866020u; /* 0x00405B03: mov ecx, 0x866020 */
    MEM32(0x866034) = 0xFu; /* 0x00405B08: mov dword ptr [0x866034], 0xf */
    MEM32(0x866030) = 0; /* 0x00405B12: mov dword ptr [0x866030], 0 */
    MEM8(0x866020) = (uint8_t)(0); /* 0x00405B1C: mov byte ptr [0x866020], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405B23: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00405B28: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00405B2C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(0x7CCF8C), LO8(ecx) */ /* 0x00405B2E: cmp byte ptr [0x7ccf8c], cl */
    _flag_a = (uint32_t)(MEM8(0x7CCF8C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x1Cu; /* 0x00405B34: mov eax, 0x1c */
    MEM32(0x866048) = 0; /* 0x00405B39: mov dword ptr [0x866048], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x00405B43: cmove eax, ecx */
    MEM32(0x86604C) = 0; /* 0x00405B46: mov dword ptr [0x86604c], 0 */
    PUSH32(esp, eax); /* 0x00405B50: push eax */
    PUSH32(esp, 0x007CCF8Cu); /* 0x00405B51: push 0x7ccf8c */
    ecx = 0x00866038u; /* 0x00405B56: mov ecx, 0x866038 */
    MEM32(0x86604C) = 0xFu; /* 0x00405B5B: mov dword ptr [0x86604c], 0xf */
    MEM32(0x866048) = 0; /* 0x00405B65: mov dword ptr [0x866048], 0 */
    MEM8(0x866038) = (uint8_t)(0); /* 0x00405B6F: mov byte ptr [0x866038], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405B76: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00405B7B: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, 0x007CB480u); /* 0x00405B82: push 0x7cb480 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00405B87: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00405B8C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00405B8F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00405B92: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00405B99: pop ecx */
    esp = ebp; /* 0x00405B9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00405B9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00405B9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00405BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00405BA0u);

L_00405BA0:
    PUSH32(esp, ebp); /* 0x00405BA0: push ebp */
    ebp = esp; /* 0x00405BA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00405BA3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405BA6: push -1 */
    PUSH32(esp, 0x007C457Eu); /* 0x00405BA8: push 0x7c457e */
    eax = MEM32(FS_BASE + (0)); /* 0x00405BAD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00405BB3: push eax */
    PUSH32(esp, ecx); /* 0x00405BB4: push ecx */
    eax = 0x2110u; /* 0x00405BB5: mov eax, 0x2110 */
    RECOMP_CALL(sub_00780380); /* 0x00405BBA: call 0x780380 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x855000); /* 0x00405BBF: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00405BC4: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x210C) = eax; /* 0x00405BC6: mov dword ptr [esp + 0x210c], eax */
    PUSH32(esp, esi); /* 0x00405BCD: push esi */
    PUSH32(esp, edi); /* 0x00405BCE: push edi */
    eax = MEM32(0x855000); /* 0x00405BCF: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00405BD4: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00405BD6: push eax */
    eax = esp + 0x2120; /* 0x00405BD7: lea eax, [esp + 0x2120] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00405BDE: mov dword ptr fs:[0], eax */
    eax = esp + 0x210; /* 0x00405BE4: lea eax, [esp + 0x210] */
    MEM32(esp + 0x210) = 0x3F000000u; /* 0x00405BEB: mov dword ptr [esp + 0x210], 0x3f000000 */
    PUSH32(esp, eax); /* 0x00405BF6: push eax */
    PUSH32(esp, 0x007DFF38u); /* 0x00405BF7: push 0x7dff38 */
    ecx = esp + 0x7A4; /* 0x00405BFC: lea ecx, [esp + 0x7a4] */
    RECOMP_CALL(sub_006B9110); /* 0x00405C03: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x2128) = 0; /* 0x00405C08: mov dword ptr [esp + 0x2128], 0 */
    eax = esp + 0x38; /* 0x00405C13: lea eax, [esp + 0x38] */
    PUSH32(esp, eax); /* 0x00405C17: push eax */
    PUSH32(esp, 0x007DFF88u); /* 0x00405C18: push 0x7dff88 */
    ecx = esp + 0x7C8; /* 0x00405C1D: lea ecx, [esp + 0x7c8] */
    MEM32(esp + 0x40) = 0x3F800000u; /* 0x00405C24: mov dword ptr [esp + 0x40], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00405C2C: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(1); /* 0x00405C31: mov byte ptr [esp + 0x2128], 1 */
    ecx = esp + 0x7E4; /* 0x00405C39: lea ecx, [esp + 0x7e4] */
    PUSH32(esp, 0x19u); /* 0x00405C40: push 0x19 */
    MEM32(esp + 0x7F8) = 0; /* 0x00405C42: mov dword ptr [esp + 0x7f8], 0 */
    MEM32(esp + 0x7FC) = 0; /* 0x00405C4D: mov dword ptr [esp + 0x7fc], 0 */
    PUSH32(esp, 0x007DFFE4u); /* 0x00405C58: push 0x7dffe4 */
    MEM32(esp + 0x260) = 0x3F800000u; /* 0x00405C5D: mov dword ptr [esp + 0x260], 0x3f800000 */
    MEM32(esp + 0x800) = 0xFu; /* 0x00405C68: mov dword ptr [esp + 0x800], 0xf */
    MEM32(esp + 0x7FC) = 0; /* 0x00405C73: mov dword ptr [esp + 0x7fc], 0 */
    MEM8(esp + 0x7EC) = (uint8_t)(0); /* 0x00405C7E: mov byte ptr [esp + 0x7ec], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405C86: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(2); /* 0x00405C8B: mov byte ptr [esp + 0x2128], 2 */
    eax = esp + 0x2C8; /* 0x00405C93: lea eax, [esp + 0x2c8] */
    PUSH32(esp, eax); /* 0x00405C9A: push eax */
    eax = esp + 0x44; /* 0x00405C9B: lea eax, [esp + 0x44] */
    MEM32(esp + 0x2CC) = 0x7F7FFFFFu; /* 0x00405C9F: mov dword ptr [esp + 0x2cc], 0x7f7fffff */
    PUSH32(esp, eax); /* 0x00405CAA: push eax */
    eax = esp + 0x260; /* 0x00405CAB: lea eax, [esp + 0x260] */
    MEM32(esp + 0x48) = 0x00800000u; /* 0x00405CB2: mov dword ptr [esp + 0x48], 0x800000 */
    PUSH32(esp, eax); /* 0x00405CBA: push eax */
    ecx = esp + 0x808; /* 0x00405CBB: lea ecx, [esp + 0x808] */
    RECOMP_CALL(sub_005F5C10); /* 0x00405CC2: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(4); /* 0x00405CC7: mov byte ptr [esp + 0x2128], 4 */
    ecx = esp + 0x808; /* 0x00405CCF: lea ecx, [esp + 0x808] */
    PUSH32(esp, 0x15u); /* 0x00405CD6: push 0x15 */
    MEM32(esp + 0x81C) = 0; /* 0x00405CD8: mov dword ptr [esp + 0x81c], 0 */
    MEM32(esp + 0x820) = 0; /* 0x00405CE3: mov dword ptr [esp + 0x820], 0 */
    PUSH32(esp, 0x007E0E40u); /* 0x00405CEE: push 0x7e0e40 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x00405CF3: mov byte ptr [esp + 0x28], 0 */
    MEM32(esp + 0x824) = 0xFu; /* 0x00405CF8: mov dword ptr [esp + 0x824], 0xf */
    MEM32(esp + 0x820) = 0; /* 0x00405D03: mov dword ptr [esp + 0x820], 0 */
    MEM8(esp + 0x810) = (uint8_t)(0); /* 0x00405D0E: mov byte ptr [esp + 0x810], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405D16: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(5); /* 0x00405D1B: mov byte ptr [esp + 0x2128], 5 */
    eax = esp + 0x20; /* 0x00405D23: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x00405D27: push eax */
    ecx = esp + 0x824; /* 0x00405D28: lea ecx, [esp + 0x824] */
    RECOMP_CALL(sub_005293B0); /* 0x00405D2F: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(7); /* 0x00405D34: mov byte ptr [esp + 0x2128], 7 */
    eax = esp + 0x48; /* 0x00405D3C: lea eax, [esp + 0x48] */
    PUSH32(esp, eax); /* 0x00405D40: push eax */
    PUSH32(esp, 0x007DFEBCu); /* 0x00405D41: push 0x7dfebc */
    ecx = esp + 0x834; /* 0x00405D46: lea ecx, [esp + 0x834] */
    MEM32(esp + 0x50) = 0x3F800000u; /* 0x00405D4D: mov dword ptr [esp + 0x50], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00405D55: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(8); /* 0x00405D5A: mov byte ptr [esp + 0x2128], 8 */
    ecx = esp + 0x850; /* 0x00405D62: lea ecx, [esp + 0x850] */
    PUSH32(esp, 0x13u); /* 0x00405D69: push 0x13 */
    MEM32(esp + 0x864) = 0; /* 0x00405D6B: mov dword ptr [esp + 0x864], 0 */
    MEM32(esp + 0x868) = 0; /* 0x00405D76: mov dword ptr [esp + 0x868], 0 */
    PUSH32(esp, 0x007DED44u); /* 0x00405D81: push 0x7ded44 */
    MEM8(esp + 0x33) = (uint8_t)(1); /* 0x00405D86: mov byte ptr [esp + 0x33], 1 */
    MEM32(esp + 0x86C) = 0xFu; /* 0x00405D8B: mov dword ptr [esp + 0x86c], 0xf */
    MEM32(esp + 0x868) = 0; /* 0x00405D96: mov dword ptr [esp + 0x868], 0 */
    MEM8(esp + 0x858) = (uint8_t)(0); /* 0x00405DA1: mov byte ptr [esp + 0x858], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405DA9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(9); /* 0x00405DAE: mov byte ptr [esp + 0x2128], 9 */
    eax = esp + 0x2B; /* 0x00405DB6: lea eax, [esp + 0x2b] */
    PUSH32(esp, eax); /* 0x00405DBA: push eax */
    ecx = esp + 0x86C; /* 0x00405DBB: lea ecx, [esp + 0x86c] */
    RECOMP_CALL(sub_005293B0); /* 0x00405DC2: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBu); /* 0x00405DC7: mov byte ptr [esp + 0x2128], 0xb */
    ecx = esp + 0x874; /* 0x00405DCF: lea ecx, [esp + 0x874] */
    PUSH32(esp, 0x1Au); /* 0x00405DD6: push 0x1a */
    MEM32(esp + 0x888) = 0; /* 0x00405DD8: mov dword ptr [esp + 0x888], 0 */
    MEM32(esp + 0x88C) = 0; /* 0x00405DE3: mov dword ptr [esp + 0x88c], 0 */
    PUSH32(esp, 0x007DED58u); /* 0x00405DEE: push 0x7ded58 */
    MEM8(esp + 0x35) = (uint8_t)(1); /* 0x00405DF3: mov byte ptr [esp + 0x35], 1 */
    MEM32(esp + 0x890) = 0xFu; /* 0x00405DF8: mov dword ptr [esp + 0x890], 0xf */
    MEM32(esp + 0x88C) = 0; /* 0x00405E03: mov dword ptr [esp + 0x88c], 0 */
    MEM8(esp + 0x87C) = (uint8_t)(0); /* 0x00405E0E: mov byte ptr [esp + 0x87c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405E16: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCu); /* 0x00405E1B: mov byte ptr [esp + 0x2128], 0xc */
    eax = esp + 0x2D; /* 0x00405E23: lea eax, [esp + 0x2d] */
    PUSH32(esp, eax); /* 0x00405E27: push eax */
    ecx = esp + 0x890; /* 0x00405E28: lea ecx, [esp + 0x890] */
    RECOMP_CALL(sub_005293B0); /* 0x00405E2F: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xEu); /* 0x00405E34: mov byte ptr [esp + 0x2128], 0xe */
    eax = esp + 0x2D0; /* 0x00405E3C: lea eax, [esp + 0x2d0] */
    PUSH32(esp, eax); /* 0x00405E43: push eax */
    eax = esp + 0x54; /* 0x00405E44: lea eax, [esp + 0x54] */
    MEM32(esp + 0x2D4) = 0x3F800000u; /* 0x00405E48: mov dword ptr [esp + 0x2d4], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00405E53: push eax */
    eax = esp + 0x268; /* 0x00405E54: lea eax, [esp + 0x268] */
    MEM32(esp + 0x58) = 0; /* 0x00405E5B: mov dword ptr [esp + 0x58], 0 */
    PUSH32(esp, eax); /* 0x00405E63: push eax */
    ecx = esp + 0x38C; /* 0x00405E64: lea ecx, [esp + 0x38c] */
    MEM32(esp + 0x26C) = 0x3F800000u; /* 0x00405E6B: mov dword ptr [esp + 0x26c], 0x3f800000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00405E76: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFu); /* 0x00405E7B: mov byte ptr [esp + 0x2128], 0xf */
    ecx = esp + 0x4FC; /* 0x00405E83: lea ecx, [esp + 0x4fc] */
    PUSH32(esp, 0x20u); /* 0x00405E8A: push 0x20 */
    MEM32(esp + 0x510) = 0; /* 0x00405E8C: mov dword ptr [esp + 0x510], 0 */
    MEM32(esp + 0x514) = 0; /* 0x00405E97: mov dword ptr [esp + 0x514], 0 */
    PUSH32(esp, 0x007DEBF0u); /* 0x00405EA2: push 0x7debf0 */
    MEM32(esp + 0x518) = 0xFu; /* 0x00405EA7: mov dword ptr [esp + 0x518], 0xf */
    MEM32(esp + 0x514) = 0; /* 0x00405EB2: mov dword ptr [esp + 0x514], 0 */
    MEM8(esp + 0x504) = (uint8_t)(0); /* 0x00405EBD: mov byte ptr [esp + 0x504], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00405EC5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x10u); /* 0x00405ECA: mov byte ptr [esp + 0x2128], 0x10 */
    ecx = esp + 0x12; /* 0x00405ED2: lea ecx, [esp + 0x12] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00405ED6: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00405EDB: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00405EDF: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x00405EE0: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00405EE5: push ecx */
    ecx = esp + 0x14; /* 0x00405EE6: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_00419B20); /* 0x00405EEA: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00405EEF: push -1 */
    PUSH32(esp, 0); /* 0x00405EF1: push 0 */
    eax = esp + 0x504; /* 0x00405EF3: lea eax, [esp + 0x504] */
    MEM32(esp + 0x8B0) = 0; /* 0x00405EFA: mov dword ptr [esp + 0x8b0], 0 */
    MEM32(esp + 0x8B4) = 0; /* 0x00405F05: mov dword ptr [esp + 0x8b4], 0 */
    ecx = esp + 0x8A0; /* 0x00405F10: lea ecx, [esp + 0x8a0] */
    PUSH32(esp, eax); /* 0x00405F17: push eax */
    MEM32(esp + 0x8B8) = 0xFu; /* 0x00405F18: mov dword ptr [esp + 0x8b8], 0xf */
    MEM32(esp + 0x8B4) = 0; /* 0x00405F23: mov dword ptr [esp + 0x8b4], 0 */
    MEM8(esp + 0x8A4) = (uint8_t)(0); /* 0x00405F2E: mov byte ptr [esp + 0x8a4], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00405F36: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x11u); /* 0x00405F3B: mov byte ptr [esp + 0x2128], 0x11 */
    eax = esp + 0x380; /* 0x00405F43: lea eax, [esp + 0x380] */
    PUSH32(esp, eax); /* 0x00405F4A: push eax */
    ecx = esp + 0x8B4; /* 0x00405F4B: lea ecx, [esp + 0x8b4] */
    RECOMP_CALL(sub_0041A380); /* 0x00405F52: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x14u); /* 0x00405F57: mov byte ptr [esp + 0x2128], 0x14 */
    /* cmp MEM32(esp + 0x510), 0x10u */ /* 0x00405F5F: cmp dword ptr [esp + 0x510], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x510)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00405F67: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00405F94; /* 0x00405F6D: jb 0x405f94 */
L_00405F6F:
    esi = MEM32(esp + 0x4FC); /* 0x00405F6F: mov esi, dword ptr [esp + 0x4fc] */
    ecx = esp + 0x10; /* 0x00405F76: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00405F7A: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00405F7F: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00405F80: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00405F85: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00405F89: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00405F8E: push esi */
    RECOMP_ICALL(edi); /* 0x00405F8F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00405F91: add esp, 4 */
    _flag_k = FK_ADD;
L_00405F94:
    MEM32(esp + 0x510) = 0xFu; /* 0x00405F94: mov dword ptr [esp + 0x510], 0xf */
    MEM32(esp + 0x50C) = 0; /* 0x00405F9F: mov dword ptr [esp + 0x50c], 0 */
    MEM8(esp + 0x4FC) = (uint8_t)(0); /* 0x00405FAA: mov byte ptr [esp + 0x4fc], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x15u); /* 0x00405FB2: mov byte ptr [esp + 0x2128], 0x15 */
    ecx = esp + 0x380; /* 0x00405FBA: lea ecx, [esp + 0x380] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00405FC1: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x58; /* 0x00405FC6: lea eax, [esp + 0x58] */
    MEM32(esp + 0x58) = 0x42C80000u; /* 0x00405FCA: mov dword ptr [esp + 0x58], 0x42c80000 */
    PUSH32(esp, eax); /* 0x00405FD2: push eax */
    eax = esp + 0x2DC; /* 0x00405FD3: lea eax, [esp + 0x2dc] */
    MEM32(esp + 0x2DC) = 0; /* 0x00405FDA: mov dword ptr [esp + 0x2dc], 0 */
    PUSH32(esp, eax); /* 0x00405FE5: push eax */
    eax = esp + 0x68; /* 0x00405FE6: lea eax, [esp + 0x68] */
    MEM32(esp + 0x68) = 0x41F00000u; /* 0x00405FEA: mov dword ptr [esp + 0x68], 0x41f00000 */
    PUSH32(esp, eax); /* 0x00405FF2: push eax */
    ecx = esp + 0x3B0; /* 0x00405FF3: lea ecx, [esp + 0x3b0] */
    RECOMP_CALL(sub_005F5C10); /* 0x00405FFA: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x16u); /* 0x00405FFF: mov byte ptr [esp + 0x2128], 0x16 */
    ecx = esp + 0x55C; /* 0x00406007: lea ecx, [esp + 0x55c] */
    PUSH32(esp, 0x17u); /* 0x0040600E: push 0x17 */
    MEM32(esp + 0x570) = 0; /* 0x00406010: mov dword ptr [esp + 0x570], 0 */
    MEM32(esp + 0x574) = 0; /* 0x0040601B: mov dword ptr [esp + 0x574], 0 */
    PUSH32(esp, 0x007DECC8u); /* 0x00406026: push 0x7decc8 */
    MEM32(esp + 0x578) = 0xFu; /* 0x0040602B: mov dword ptr [esp + 0x578], 0xf */
    MEM32(esp + 0x574) = 0; /* 0x00406036: mov dword ptr [esp + 0x574], 0 */
    MEM8(esp + 0x564) = (uint8_t)(0); /* 0x00406041: mov byte ptr [esp + 0x564], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00406049: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x17u); /* 0x0040604E: mov byte ptr [esp + 0x2128], 0x17 */
    ecx = esp + 0x10; /* 0x00406056: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040605A: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x0040605F: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00406063: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x00406064: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406069: push ecx */
    ecx = esp + 0x16; /* 0x0040606A: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x0040606E: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00406073: push -1 */
    PUSH32(esp, 0); /* 0x00406075: push 0 */
    eax = esp + 0x564; /* 0x00406077: lea eax, [esp + 0x564] */
    MEM32(esp + 0x8D4) = 0; /* 0x0040607E: mov dword ptr [esp + 0x8d4], 0 */
    MEM32(esp + 0x8D8) = 0; /* 0x00406089: mov dword ptr [esp + 0x8d8], 0 */
    ecx = esp + 0x8C4; /* 0x00406094: lea ecx, [esp + 0x8c4] */
    PUSH32(esp, eax); /* 0x0040609B: push eax */
    MEM32(esp + 0x8DC) = 0xFu; /* 0x0040609C: mov dword ptr [esp + 0x8dc], 0xf */
    MEM32(esp + 0x8D8) = 0; /* 0x004060A7: mov dword ptr [esp + 0x8d8], 0 */
    MEM8(esp + 0x8C8) = (uint8_t)(0); /* 0x004060B2: mov byte ptr [esp + 0x8c8], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x004060BA: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x18u); /* 0x004060BF: mov byte ptr [esp + 0x2128], 0x18 */
    eax = esp + 0x3A4; /* 0x004060C7: lea eax, [esp + 0x3a4] */
    PUSH32(esp, eax); /* 0x004060CE: push eax */
    ecx = esp + 0x8D8; /* 0x004060CF: lea ecx, [esp + 0x8d8] */
    RECOMP_CALL(sub_0041A380); /* 0x004060D6: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Bu); /* 0x004060DB: mov byte ptr [esp + 0x2128], 0x1b */
    /* cmp MEM32(esp + 0x570), 0x10u */ /* 0x004060E3: cmp dword ptr [esp + 0x570], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x570)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00406112; /* 0x004060EB: jb 0x406112 */
L_004060ED:
    esi = MEM32(esp + 0x55C); /* 0x004060ED: mov esi, dword ptr [esp + 0x55c] */
    ecx = esp + 0x10; /* 0x004060F4: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004060F8: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004060FD: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004060FE: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00406103: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406107: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040610C: push esi */
    RECOMP_ICALL(edi); /* 0x0040610D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040610F: add esp, 4 */
    _flag_k = FK_ADD;
L_00406112:
    MEM32(esp + 0x570) = 0xFu; /* 0x00406112: mov dword ptr [esp + 0x570], 0xf */
    MEM32(esp + 0x56C) = 0; /* 0x0040611D: mov dword ptr [esp + 0x56c], 0 */
    MEM8(esp + 0x55C) = (uint8_t)(0); /* 0x00406128: mov byte ptr [esp + 0x55c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x1Cu); /* 0x00406130: mov byte ptr [esp + 0x2128], 0x1c */
    ecx = esp + 0x3A4; /* 0x00406138: lea ecx, [esp + 0x3a4] */
    RECOMP_CALL(sub_0041A4B0); /* 0x0040613F: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x268; /* 0x00406144: lea eax, [esp + 0x268] */
    MEM32(esp + 0x268) = 0x3FC00000u; /* 0x0040614B: mov dword ptr [esp + 0x268], 0x3fc00000 */
    PUSH32(esp, eax); /* 0x00406156: push eax */
    PUSH32(esp, 0x007DECACu); /* 0x00406157: push 0x7decac */
    ecx = esp + 0x8E8; /* 0x0040615C: lea ecx, [esp + 0x8e8] */
    RECOMP_CALL(sub_006B9110); /* 0x00406163: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Du); /* 0x00406168: mov byte ptr [esp + 0x2128], 0x1d */
    eax = esp + 0x68; /* 0x00406170: lea eax, [esp + 0x68] */
    PUSH32(esp, eax); /* 0x00406174: push eax */
    PUSH32(esp, 0x007DECF8u); /* 0x00406175: push 0x7decf8 */
    ecx = esp + 0x90C; /* 0x0040617A: lea ecx, [esp + 0x90c] */
    MEM32(esp + 0x70) = 0x40400000u; /* 0x00406181: mov dword ptr [esp + 0x70], 0x40400000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406189: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Eu); /* 0x0040618E: mov byte ptr [esp + 0x2128], 0x1e */
    eax = esp + 0x2E0; /* 0x00406196: lea eax, [esp + 0x2e0] */
    PUSH32(esp, eax); /* 0x0040619D: push eax */
    PUSH32(esp, 0x007DEC3Cu); /* 0x0040619E: push 0x7dec3c */
    ecx = esp + 0x930; /* 0x004061A3: lea ecx, [esp + 0x930] */
    MEM32(esp + 0x2E8) = 0x3F000000u; /* 0x004061AA: mov dword ptr [esp + 0x2e8], 0x3f000000 */
    RECOMP_CALL(sub_006B9110); /* 0x004061B5: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Fu); /* 0x004061BA: mov byte ptr [esp + 0x2128], 0x1f */
    eax = esp + 0x70; /* 0x004061C2: lea eax, [esp + 0x70] */
    PUSH32(esp, eax); /* 0x004061C6: push eax */
    PUSH32(esp, 0x007DEC28u); /* 0x004061C7: push 0x7dec28 */
    ecx = esp + 0x954; /* 0x004061CC: lea ecx, [esp + 0x954] */
    MEM32(esp + 0x78) = 0x3F333333u; /* 0x004061D3: mov dword ptr [esp + 0x78], 0x3f333333 */
    RECOMP_CALL(sub_006B9110); /* 0x004061DB: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x20u); /* 0x004061E0: mov byte ptr [esp + 0x2128], 0x20 */
    eax = esp + 0x270; /* 0x004061E8: lea eax, [esp + 0x270] */
    PUSH32(esp, eax); /* 0x004061EF: push eax */
    PUSH32(esp, 0x007DEC64u); /* 0x004061F0: push 0x7dec64 */
    ecx = esp + 0x978; /* 0x004061F5: lea ecx, [esp + 0x978] */
    MEM32(esp + 0x278) = 0x3F99999Au; /* 0x004061FC: mov dword ptr [esp + 0x278], 0x3f99999a */
    RECOMP_CALL(sub_006B9110); /* 0x00406207: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x21u); /* 0x0040620C: mov byte ptr [esp + 0x2128], 0x21 */
    eax = esp + 0x78; /* 0x00406214: lea eax, [esp + 0x78] */
    PUSH32(esp, eax); /* 0x00406218: push eax */
    PUSH32(esp, 0x007DEC50u); /* 0x00406219: push 0x7dec50 */
    ecx = esp + 0x99C; /* 0x0040621E: lea ecx, [esp + 0x99c] */
    MEM32(esp + 0x80) = 0x3F333333u; /* 0x00406225: mov dword ptr [esp + 0x80], 0x3f333333 */
    RECOMP_CALL(sub_006B9110); /* 0x00406230: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x22u); /* 0x00406235: mov byte ptr [esp + 0x2128], 0x22 */
    eax = esp + 0x2E8; /* 0x0040623D: lea eax, [esp + 0x2e8] */
    PUSH32(esp, eax); /* 0x00406244: push eax */
    PUSH32(esp, 0x007DEC98u); /* 0x00406245: push 0x7dec98 */
    ecx = esp + 0x9C0; /* 0x0040624A: lea ecx, [esp + 0x9c0] */
    MEM32(esp + 0x2F0) = 0x3E99999Au; /* 0x00406251: mov dword ptr [esp + 0x2f0], 0x3e99999a */
    RECOMP_CALL(sub_006B9110); /* 0x0040625C: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x23u); /* 0x00406261: mov byte ptr [esp + 0x2128], 0x23 */
    eax = esp + 0x80; /* 0x00406269: lea eax, [esp + 0x80] */
    PUSH32(esp, eax); /* 0x00406270: push eax */
    PUSH32(esp, 0x007DEC78u); /* 0x00406271: push 0x7dec78 */
    ecx = esp + 0x9E4; /* 0x00406276: lea ecx, [esp + 0x9e4] */
    MEM32(esp + 0x88) = 0x3F800000u; /* 0x0040627D: mov dword ptr [esp + 0x88], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406288: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x24u); /* 0x0040628D: mov byte ptr [esp + 0x2128], 0x24 */
    eax = esp + 0x278; /* 0x00406295: lea eax, [esp + 0x278] */
    PUSH32(esp, eax); /* 0x0040629C: push eax */
    PUSH32(esp, 0x007DFF54u); /* 0x0040629D: push 0x7dff54 */
    ecx = esp + 0xA08; /* 0x004062A2: lea ecx, [esp + 0xa08] */
    MEM32(esp + 0x280) = 0x41100000u; /* 0x004062A9: mov dword ptr [esp + 0x280], 0x41100000 */
    RECOMP_CALL(sub_006B9110); /* 0x004062B4: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x25u); /* 0x004062B9: mov byte ptr [esp + 0x2128], 0x25 */
    eax = esp + 0x88; /* 0x004062C1: lea eax, [esp + 0x88] */
    MEM32(esp + 0x88) = 0x41000000u; /* 0x004062C8: mov dword ptr [esp + 0x88], 0x41000000 */
    PUSH32(esp, eax); /* 0x004062D3: push eax */
    PUSH32(esp, 0x007E0360u); /* 0x004062D4: push 0x7e0360 */
    ecx = esp + 0xA2C; /* 0x004062D9: lea ecx, [esp + 0xa2c] */
    RECOMP_CALL(sub_006B9110); /* 0x004062E0: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x26u); /* 0x004062E5: mov byte ptr [esp + 0x2128], 0x26 */
    eax = esp + 0x2F0; /* 0x004062ED: lea eax, [esp + 0x2f0] */
    PUSH32(esp, eax); /* 0x004062F4: push eax */
    PUSH32(esp, 0x007E0380u); /* 0x004062F5: push 0x7e0380 */
    ecx = esp + 0xA50; /* 0x004062FA: lea ecx, [esp + 0xa50] */
    MEM32(esp + 0x2F8) = 0x40200000u; /* 0x00406301: mov dword ptr [esp + 0x2f8], 0x40200000 */
    RECOMP_CALL(sub_006B9110); /* 0x0040630C: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x27u); /* 0x00406311: mov byte ptr [esp + 0x2128], 0x27 */
    eax = esp + 0x90; /* 0x00406319: lea eax, [esp + 0x90] */
    PUSH32(esp, eax); /* 0x00406320: push eax */
    PUSH32(esp, 0x007E03B8u); /* 0x00406321: push 0x7e03b8 */
    ecx = esp + 0xA74; /* 0x00406326: lea ecx, [esp + 0xa74] */
    MEM32(esp + 0x98) = 0x40000000u; /* 0x0040632D: mov dword ptr [esp + 0x98], 0x40000000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406338: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x28u); /* 0x0040633D: mov byte ptr [esp + 0x2128], 0x28 */
    eax = esp + 0x280; /* 0x00406345: lea eax, [esp + 0x280] */
    PUSH32(esp, eax); /* 0x0040634C: push eax */
    eax = esp + 0x9C; /* 0x0040634D: lea eax, [esp + 0x9c] */
    MEM32(esp + 0x284) = 0x447A0000u; /* 0x00406354: mov dword ptr [esp + 0x284], 0x447a0000 */
    PUSH32(esp, eax); /* 0x0040635F: push eax */
    eax = esp + 0x300; /* 0x00406360: lea eax, [esp + 0x300] */
    MEM32(esp + 0xA0) = 0; /* 0x00406367: mov dword ptr [esp + 0xa0], 0 */
    PUSH32(esp, eax); /* 0x00406372: push eax */
    ecx = esp + 0x4B8; /* 0x00406373: lea ecx, [esp + 0x4b8] */
    MEM32(esp + 0x304) = 0x44480000u; /* 0x0040637A: mov dword ptr [esp + 0x304], 0x44480000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00406385: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x29u); /* 0x0040638A: mov byte ptr [esp + 0x2128], 0x29 */
    ecx = esp + 0x52C; /* 0x00406392: lea ecx, [esp + 0x52c] */
    PUSH32(esp, 0xCu); /* 0x00406399: push 0xc */
    MEM32(esp + 0x540) = 0; /* 0x0040639B: mov dword ptr [esp + 0x540], 0 */
    MEM32(esp + 0x544) = 0; /* 0x004063A6: mov dword ptr [esp + 0x544], 0 */
    PUSH32(esp, 0x007CD1C0u); /* 0x004063B1: push 0x7cd1c0 */
    MEM32(esp + 0x548) = 0xFu; /* 0x004063B6: mov dword ptr [esp + 0x548], 0xf */
    MEM32(esp + 0x544) = 0; /* 0x004063C1: mov dword ptr [esp + 0x544], 0 */
    MEM8(esp + 0x534) = (uint8_t)(0); /* 0x004063CC: mov byte ptr [esp + 0x534], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004063D4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Au); /* 0x004063D9: mov byte ptr [esp + 0x2128], 0x2a */
    ecx = esp + 0x10; /* 0x004063E1: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004063E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x004063EA: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004063EE: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004063EF: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004063F4: push ecx */
    ecx = esp + 0x16; /* 0x004063F5: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004063F9: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004063FE: push -1 */
    PUSH32(esp, 0); /* 0x00406400: push 0 */
    eax = esp + 0x534; /* 0x00406402: lea eax, [esp + 0x534] */
    MEM32(esp + 0xAA8) = 0; /* 0x00406409: mov dword ptr [esp + 0xaa8], 0 */
    MEM32(esp + 0xAAC) = 0; /* 0x00406414: mov dword ptr [esp + 0xaac], 0 */
    ecx = esp + 0xA98; /* 0x0040641F: lea ecx, [esp + 0xa98] */
    PUSH32(esp, eax); /* 0x00406426: push eax */
    MEM32(esp + 0xAB0) = 0xFu; /* 0x00406427: mov dword ptr [esp + 0xab0], 0xf */
    MEM32(esp + 0xAAC) = 0; /* 0x00406432: mov dword ptr [esp + 0xaac], 0 */
    MEM8(esp + 0xA9C) = (uint8_t)(0); /* 0x0040643D: mov byte ptr [esp + 0xa9c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00406445: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Bu); /* 0x0040644A: mov byte ptr [esp + 0x2128], 0x2b */
    eax = esp + 0x4AC; /* 0x00406452: lea eax, [esp + 0x4ac] */
    PUSH32(esp, eax); /* 0x00406459: push eax */
    ecx = esp + 0xAAC; /* 0x0040645A: lea ecx, [esp + 0xaac] */
    RECOMP_CALL(sub_0041A380); /* 0x00406461: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Eu); /* 0x00406466: mov byte ptr [esp + 0x2128], 0x2e */
    /* cmp MEM32(esp + 0x540), 0x10u */ /* 0x0040646E: cmp dword ptr [esp + 0x540], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x540)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040649D; /* 0x00406476: jb 0x40649d */
L_00406478:
    esi = MEM32(esp + 0x52C); /* 0x00406478: mov esi, dword ptr [esp + 0x52c] */
    ecx = esp + 0x10; /* 0x0040647F: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406483: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406488: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00406489: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x0040648E: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406492: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00406497: push esi */
    RECOMP_ICALL(edi); /* 0x00406498: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040649A: add esp, 4 */
    _flag_k = FK_ADD;
L_0040649D:
    MEM32(esp + 0x540) = 0xFu; /* 0x0040649D: mov dword ptr [esp + 0x540], 0xf */
    MEM32(esp + 0x53C) = 0; /* 0x004064A8: mov dword ptr [esp + 0x53c], 0 */
    MEM8(esp + 0x52C) = (uint8_t)(0); /* 0x004064B3: mov byte ptr [esp + 0x52c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x2Fu); /* 0x004064BB: mov byte ptr [esp + 0x2128], 0x2f */
    ecx = esp + 0x4AC; /* 0x004064C3: lea ecx, [esp + 0x4ac] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004064CA: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xA0; /* 0x004064CF: lea eax, [esp + 0xa0] */
    MEM32(esp + 0xA0) = 0x41C80000u; /* 0x004064D6: mov dword ptr [esp + 0xa0], 0x41c80000 */
    PUSH32(esp, eax); /* 0x004064E1: push eax */
    PUSH32(esp, 0x007E14D4u); /* 0x004064E2: push 0x7e14d4 */
    ecx = esp + 0xABC; /* 0x004064E7: lea ecx, [esp + 0xabc] */
    RECOMP_CALL(sub_006B9110); /* 0x004064EE: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x30u); /* 0x004064F3: mov byte ptr [esp + 0x2128], 0x30 */
    eax = esp + 0x288; /* 0x004064FB: lea eax, [esp + 0x288] */
    PUSH32(esp, eax); /* 0x00406502: push eax */
    PUSH32(esp, 0x007DF118u); /* 0x00406503: push 0x7df118 */
    ecx = esp + 0xAE0; /* 0x00406508: lea ecx, [esp + 0xae0] */
    MEM32(esp + 0x290) = 0x41A00000u; /* 0x0040650F: mov dword ptr [esp + 0x290], 0x41a00000 */
    RECOMP_CALL(sub_006B9110); /* 0x0040651A: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x31u); /* 0x0040651F: mov byte ptr [esp + 0x2128], 0x31 */
    eax = esp + 0xA8; /* 0x00406527: lea eax, [esp + 0xa8] */
    PUSH32(esp, eax); /* 0x0040652E: push eax */
    eax = esp + 0x304; /* 0x0040652F: lea eax, [esp + 0x304] */
    MEM32(esp + 0xAC) = 0x40800000u; /* 0x00406536: mov dword ptr [esp + 0xac], 0x40800000 */
    PUSH32(esp, eax); /* 0x00406541: push eax */
    eax = esp + 0xB8; /* 0x00406542: lea eax, [esp + 0xb8] */
    MEM32(esp + 0x308) = 0x3F800000u; /* 0x00406549: mov dword ptr [esp + 0x308], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00406554: push eax */
    ecx = esp + 0x3C8; /* 0x00406555: lea ecx, [esp + 0x3c8] */
    MEM32(esp + 0xBC) = 0x3F800000u; /* 0x0040655C: mov dword ptr [esp + 0xbc], 0x3f800000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00406567: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x32u); /* 0x0040656C: mov byte ptr [esp + 0x2128], 0x32 */
    ecx = esp + 0x4E4; /* 0x00406574: lea ecx, [esp + 0x4e4] */
    PUSH32(esp, 0x17u); /* 0x0040657B: push 0x17 */
    MEM32(esp + 0x4F8) = 0; /* 0x0040657D: mov dword ptr [esp + 0x4f8], 0 */
    MEM32(esp + 0x4FC) = 0; /* 0x00406588: mov dword ptr [esp + 0x4fc], 0 */
    PUSH32(esp, 0x007E1414u); /* 0x00406593: push 0x7e1414 */
    MEM32(esp + 0x500) = 0xFu; /* 0x00406598: mov dword ptr [esp + 0x500], 0xf */
    MEM32(esp + 0x4FC) = 0; /* 0x004065A3: mov dword ptr [esp + 0x4fc], 0 */
    MEM8(esp + 0x4EC) = (uint8_t)(0); /* 0x004065AE: mov byte ptr [esp + 0x4ec], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004065B6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x33u); /* 0x004065BB: mov byte ptr [esp + 0x2128], 0x33 */
    ecx = esp + 0x10; /* 0x004065C3: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004065C7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x004065CC: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004065D0: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004065D1: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004065D6: push ecx */
    ecx = esp + 0x16; /* 0x004065D7: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004065DB: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004065E0: push -1 */
    PUSH32(esp, 0); /* 0x004065E2: push 0 */
    eax = esp + 0x4EC; /* 0x004065E4: lea eax, [esp + 0x4ec] */
    MEM32(esp + 0xB14) = 0; /* 0x004065EB: mov dword ptr [esp + 0xb14], 0 */
    MEM32(esp + 0xB18) = 0; /* 0x004065F6: mov dword ptr [esp + 0xb18], 0 */
    ecx = esp + 0xB04; /* 0x00406601: lea ecx, [esp + 0xb04] */
    PUSH32(esp, eax); /* 0x00406608: push eax */
    MEM32(esp + 0xB1C) = 0xFu; /* 0x00406609: mov dword ptr [esp + 0xb1c], 0xf */
    MEM32(esp + 0xB18) = 0; /* 0x00406614: mov dword ptr [esp + 0xb18], 0 */
    MEM8(esp + 0xB08) = (uint8_t)(0); /* 0x0040661F: mov byte ptr [esp + 0xb08], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00406627: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x34u); /* 0x0040662C: mov byte ptr [esp + 0x2128], 0x34 */
    eax = esp + 0x3BC; /* 0x00406634: lea eax, [esp + 0x3bc] */
    PUSH32(esp, eax); /* 0x0040663B: push eax */
    ecx = esp + 0xB18; /* 0x0040663C: lea ecx, [esp + 0xb18] */
    RECOMP_CALL(sub_0041A380); /* 0x00406643: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x37u); /* 0x00406648: mov byte ptr [esp + 0x2128], 0x37 */
    /* cmp MEM32(esp + 0x4F8), 0x10u */ /* 0x00406650: cmp dword ptr [esp + 0x4f8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x4F8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040667F; /* 0x00406658: jb 0x40667f */
L_0040665A:
    esi = MEM32(esp + 0x4E4); /* 0x0040665A: mov esi, dword ptr [esp + 0x4e4] */
    ecx = esp + 0x10; /* 0x00406661: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406665: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040666A: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x0040666B: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00406670: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406674: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00406679: push esi */
    RECOMP_ICALL(edi); /* 0x0040667A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040667C: add esp, 4 */
    _flag_k = FK_ADD;
L_0040667F:
    MEM32(esp + 0x4F8) = 0xFu; /* 0x0040667F: mov dword ptr [esp + 0x4f8], 0xf */
    MEM32(esp + 0x4F4) = 0; /* 0x0040668A: mov dword ptr [esp + 0x4f4], 0 */
    MEM8(esp + 0x4E4) = (uint8_t)(0); /* 0x00406695: mov byte ptr [esp + 0x4e4], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x38u); /* 0x0040669D: mov byte ptr [esp + 0x2128], 0x38 */
    ecx = esp + 0x3BC; /* 0x004066A5: lea ecx, [esp + 0x3bc] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004066AC: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x290; /* 0x004066B1: lea eax, [esp + 0x290] */
    MEM32(esp + 0x290) = 0x44BB8000u; /* 0x004066B8: mov dword ptr [esp + 0x290], 0x44bb8000 */
    PUSH32(esp, eax); /* 0x004066C3: push eax */
    PUSH32(esp, 0x007E16D0u); /* 0x004066C4: push 0x7e16d0 */
    ecx = esp + 0xB28; /* 0x004066C9: lea ecx, [esp + 0xb28] */
    RECOMP_CALL(sub_006B9110); /* 0x004066D0: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x39u); /* 0x004066D5: mov byte ptr [esp + 0x2128], 0x39 */
    eax = esp + 0xB8; /* 0x004066DD: lea eax, [esp + 0xb8] */
    PUSH32(esp, eax); /* 0x004066E4: push eax */
    PUSH32(esp, 0x007E1728u); /* 0x004066E5: push 0x7e1728 */
    ecx = esp + 0xB4C; /* 0x004066EA: lea ecx, [esp + 0xb4c] */
    MEM32(esp + 0xC0) = 0x41000000u; /* 0x004066F1: mov dword ptr [esp + 0xc0], 0x41000000 */
    RECOMP_CALL(sub_006B9110); /* 0x004066FC: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Au); /* 0x00406701: mov byte ptr [esp + 0x2128], 0x3a */
    eax = esp + 0x308; /* 0x00406709: lea eax, [esp + 0x308] */
    PUSH32(esp, eax); /* 0x00406710: push eax */
    PUSH32(esp, 0x007E1744u); /* 0x00406711: push 0x7e1744 */
    ecx = esp + 0xB70; /* 0x00406716: lea ecx, [esp + 0xb70] */
    MEM32(esp + 0x310) = 0x42200000u; /* 0x0040671D: mov dword ptr [esp + 0x310], 0x42200000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406728: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Bu); /* 0x0040672D: mov byte ptr [esp + 0x2128], 0x3b */
    eax = esp + 0xC0; /* 0x00406735: lea eax, [esp + 0xc0] */
    PUSH32(esp, eax); /* 0x0040673C: push eax */
    PUSH32(esp, 0x007E16E8u); /* 0x0040673D: push 0x7e16e8 */
    ecx = esp + 0xB94; /* 0x00406742: lea ecx, [esp + 0xb94] */
    MEM32(esp + 0xC8) = 0x43C80000u; /* 0x00406749: mov dword ptr [esp + 0xc8], 0x43c80000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406754: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Cu); /* 0x00406759: mov byte ptr [esp + 0x2128], 0x3c */
    eax = esp + 0x310; /* 0x00406761: lea eax, [esp + 0x310] */
    PUSH32(esp, eax); /* 0x00406768: push eax */
    eax = esp + 0xCC; /* 0x00406769: lea eax, [esp + 0xcc] */
    MEM32(esp + 0x314) = 0x64u; /* 0x00406770: mov dword ptr [esp + 0x314], 0x64 */
    PUSH32(esp, eax); /* 0x0040677B: push eax */
    eax = esp + 0x2A4; /* 0x0040677C: lea eax, [esp + 0x2a4] */
    MEM32(esp + 0xD0) = 0; /* 0x00406783: mov dword ptr [esp + 0xd0], 0 */
    PUSH32(esp, eax); /* 0x0040678E: push eax */
    ecx = esp + 0x458; /* 0x0040678F: lea ecx, [esp + 0x458] */
    MEM32(esp + 0x2A8) = 0x10u; /* 0x00406796: mov dword ptr [esp + 0x2a8], 0x10 */
    RECOMP_CALL(sub_005F5DC0); /* 0x004067A1: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Du); /* 0x004067A6: mov byte ptr [esp + 0x2128], 0x3d */
    ecx = esp + 0x514; /* 0x004067AE: lea ecx, [esp + 0x514] */
    PUSH32(esp, 0xCu); /* 0x004067B5: push 0xc */
    MEM32(esp + 0x528) = 0; /* 0x004067B7: mov dword ptr [esp + 0x528], 0 */
    MEM32(esp + 0x52C) = 0; /* 0x004067C2: mov dword ptr [esp + 0x52c], 0 */
    PUSH32(esp, 0x007CD1D0u); /* 0x004067CD: push 0x7cd1d0 */
    MEM32(esp + 0x530) = 0xFu; /* 0x004067D2: mov dword ptr [esp + 0x530], 0xf */
    MEM32(esp + 0x52C) = 0; /* 0x004067DD: mov dword ptr [esp + 0x52c], 0 */
    MEM8(esp + 0x51C) = (uint8_t)(0); /* 0x004067E8: mov byte ptr [esp + 0x51c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x004067F0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Eu); /* 0x004067F5: mov byte ptr [esp + 0x2128], 0x3e */
    ecx = esp + 0x10; /* 0x004067FD: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406801: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00406806: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x0040680A: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x0040680B: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406810: push ecx */
    ecx = esp + 0x16; /* 0x00406811: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x00406815: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040681A: push -1 */
    PUSH32(esp, 0); /* 0x0040681C: push 0 */
    eax = esp + 0x51C; /* 0x0040681E: lea eax, [esp + 0x51c] */
    MEM32(esp + 0xBC8) = 0; /* 0x00406825: mov dword ptr [esp + 0xbc8], 0 */
    MEM32(esp + 0xBCC) = 0; /* 0x00406830: mov dword ptr [esp + 0xbcc], 0 */
    ecx = esp + 0xBB8; /* 0x0040683B: lea ecx, [esp + 0xbb8] */
    MEM32(esp + 0xBCC) = 0xFu; /* 0x00406842: mov dword ptr [esp + 0xbcc], 0xf */
    MEM32(esp + 0xBC8) = 0; /* 0x0040684D: mov dword ptr [esp + 0xbc8], 0 */
    MEM8(esp + 0xBB8) = (uint8_t)(0); /* 0x00406858: mov byte ptr [esp + 0xbb8], 0 */
    PUSH32(esp, eax); /* 0x00406860: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00406861: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Fu); /* 0x00406866: mov byte ptr [esp + 0x2128], 0x3f */
    eax = esp + 0x44C; /* 0x0040686E: lea eax, [esp + 0x44c] */
    PUSH32(esp, eax); /* 0x00406875: push eax */
    ecx = esp + 0xBCC; /* 0x00406876: lea ecx, [esp + 0xbcc] */
    RECOMP_CALL(sub_0041A380); /* 0x0040687D: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x42u); /* 0x00406882: mov byte ptr [esp + 0x2128], 0x42 */
    /* cmp MEM32(esp + 0x528), 0x10u */ /* 0x0040688A: cmp dword ptr [esp + 0x528], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x528)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004068B9; /* 0x00406892: jb 0x4068b9 */
L_00406894:
    esi = MEM32(esp + 0x514); /* 0x00406894: mov esi, dword ptr [esp + 0x514] */
    ecx = esp + 0x10; /* 0x0040689B: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040689F: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004068A4: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004068A5: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x004068AA: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004068AE: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004068B3: push esi */
    RECOMP_ICALL(edi); /* 0x004068B4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004068B6: add esp, 4 */
    _flag_k = FK_ADD;
L_004068B9:
    MEM32(esp + 0x528) = 0xFu; /* 0x004068B9: mov dword ptr [esp + 0x528], 0xf */
    MEM32(esp + 0x524) = 0; /* 0x004068C4: mov dword ptr [esp + 0x524], 0 */
    MEM8(esp + 0x514) = (uint8_t)(0); /* 0x004068CF: mov byte ptr [esp + 0x514], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x43u); /* 0x004068D7: mov byte ptr [esp + 0x2128], 0x43 */
    ecx = esp + 0x44C; /* 0x004068DF: lea ecx, [esp + 0x44c] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004068E6: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xD0; /* 0x004068EB: lea eax, [esp + 0xd0] */
    MEM32(esp + 0xD0) = 0x7D0u; /* 0x004068F2: mov dword ptr [esp + 0xd0], 0x7d0 */
    PUSH32(esp, eax); /* 0x004068FD: push eax */
    eax = esp + 0x364; /* 0x004068FE: lea eax, [esp + 0x364] */
    MEM32(esp + 0x364) = 0; /* 0x00406905: mov dword ptr [esp + 0x364], 0 */
    PUSH32(esp, eax); /* 0x00406910: push eax */
    eax = esp + 0xE0; /* 0x00406911: lea eax, [esp + 0xe0] */
    MEM32(esp + 0xE0) = 0x7D0u; /* 0x00406918: mov dword ptr [esp + 0xe0], 0x7d0 */
    PUSH32(esp, eax); /* 0x00406923: push eax */
    ecx = esp + 0x3E0; /* 0x00406924: lea ecx, [esp + 0x3e0] */
    RECOMP_CALL(sub_005F5DC0); /* 0x0040692B: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x44u); /* 0x00406930: mov byte ptr [esp + 0x2128], 0x44 */
    ecx = esp + 0x544; /* 0x00406938: lea ecx, [esp + 0x544] */
    PUSH32(esp, 0xDu); /* 0x0040693F: push 0xd */
    MEM32(esp + 0x558) = 0; /* 0x00406941: mov dword ptr [esp + 0x558], 0 */
    MEM32(esp + 0x55C) = 0; /* 0x0040694C: mov dword ptr [esp + 0x55c], 0 */
    PUSH32(esp, 0x007E94ACu); /* 0x00406957: push 0x7e94ac */
    MEM32(esp + 0x560) = 0xFu; /* 0x0040695C: mov dword ptr [esp + 0x560], 0xf */
    MEM32(esp + 0x55C) = 0; /* 0x00406967: mov dword ptr [esp + 0x55c], 0 */
    MEM8(esp + 0x54C) = (uint8_t)(0); /* 0x00406972: mov byte ptr [esp + 0x54c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040697A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x45u); /* 0x0040697F: mov byte ptr [esp + 0x2128], 0x45 */
    ecx = esp + 0x10; /* 0x00406987: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040698B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00406990: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00406994: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x00406995: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040699A: push ecx */
    ecx = esp + 0x16; /* 0x0040699B: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x0040699F: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004069A4: push -1 */
    PUSH32(esp, 0); /* 0x004069A6: push 0 */
    eax = esp + 0x54C; /* 0x004069A8: lea eax, [esp + 0x54c] */
    MEM32(esp + 0xBEC) = 0; /* 0x004069AF: mov dword ptr [esp + 0xbec], 0 */
    MEM32(esp + 0xBF0) = 0; /* 0x004069BA: mov dword ptr [esp + 0xbf0], 0 */
    ecx = esp + 0xBDC; /* 0x004069C5: lea ecx, [esp + 0xbdc] */
    PUSH32(esp, eax); /* 0x004069CC: push eax */
    MEM32(esp + 0xBF4) = 0xFu; /* 0x004069CD: mov dword ptr [esp + 0xbf4], 0xf */
    MEM32(esp + 0xBF0) = 0; /* 0x004069D8: mov dword ptr [esp + 0xbf0], 0 */
    MEM8(esp + 0xBE0) = (uint8_t)(0); /* 0x004069E3: mov byte ptr [esp + 0xbe0], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x004069EB: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x46u); /* 0x004069F0: mov byte ptr [esp + 0x2128], 0x46 */
    eax = esp + 0x3D4; /* 0x004069F8: lea eax, [esp + 0x3d4] */
    PUSH32(esp, eax); /* 0x004069FF: push eax */
    ecx = esp + 0xBF0; /* 0x00406A00: lea ecx, [esp + 0xbf0] */
    RECOMP_CALL(sub_0041A380); /* 0x00406A07: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x49u); /* 0x00406A0C: mov byte ptr [esp + 0x2128], 0x49 */
    /* cmp MEM32(esp + 0x558), 0x10u */ /* 0x00406A14: cmp dword ptr [esp + 0x558], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x558)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00406A43; /* 0x00406A1C: jb 0x406a43 */
L_00406A1E:
    esi = MEM32(esp + 0x544); /* 0x00406A1E: mov esi, dword ptr [esp + 0x544] */
    ecx = esp + 0x10; /* 0x00406A25: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406A29: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406A2E: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00406A2F: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00406A34: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406A38: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00406A3D: push esi */
    RECOMP_ICALL(edi); /* 0x00406A3E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00406A40: add esp, 4 */
    _flag_k = FK_ADD;
L_00406A43:
    MEM32(esp + 0x558) = 0xFu; /* 0x00406A43: mov dword ptr [esp + 0x558], 0xf */
    MEM32(esp + 0x554) = 0; /* 0x00406A4E: mov dword ptr [esp + 0x554], 0 */
    MEM8(esp + 0x544) = (uint8_t)(0); /* 0x00406A59: mov byte ptr [esp + 0x544], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x4Au); /* 0x00406A61: mov byte ptr [esp + 0x2128], 0x4a */
    ecx = esp + 0x3D4; /* 0x00406A69: lea ecx, [esp + 0x3d4] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00406A70: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x00406A75: push 0x12 */
    MEM32(esp + 0xC0C) = 0; /* 0x00406A77: mov dword ptr [esp + 0xc0c], 0 */
    ecx = esp + 0xBFC; /* 0x00406A82: lea ecx, [esp + 0xbfc] */
    MEM32(esp + 0xC10) = 0; /* 0x00406A89: mov dword ptr [esp + 0xc10], 0 */
    PUSH32(esp, 0x007DEBC0u); /* 0x00406A94: push 0x7debc0 */
    MEM8(esp + 0x37) = (uint8_t)(1); /* 0x00406A99: mov byte ptr [esp + 0x37], 1 */
    MEM32(esp + 0xC14) = 0xFu; /* 0x00406A9E: mov dword ptr [esp + 0xc14], 0xf */
    MEM32(esp + 0xC10) = 0; /* 0x00406AA9: mov dword ptr [esp + 0xc10], 0 */
    MEM8(esp + 0xC00) = (uint8_t)(0); /* 0x00406AB4: mov byte ptr [esp + 0xc00], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00406ABC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Bu); /* 0x00406AC1: mov byte ptr [esp + 0x2128], 0x4b */
    eax = esp + 0x2F; /* 0x00406AC9: lea eax, [esp + 0x2f] */
    PUSH32(esp, eax); /* 0x00406ACD: push eax */
    ecx = esp + 0xC14; /* 0x00406ACE: lea ecx, [esp + 0xc14] */
    RECOMP_CALL(sub_005293B0); /* 0x00406AD5: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Du); /* 0x00406ADA: mov byte ptr [esp + 0x2128], 0x4d */
    ecx = esp + 0xC1C; /* 0x00406AE2: lea ecx, [esp + 0xc1c] */
    PUSH32(esp, 0xEu); /* 0x00406AE9: push 0xe */
    MEM32(esp + 0xC30) = 0; /* 0x00406AEB: mov dword ptr [esp + 0xc30], 0 */
    MEM32(esp + 0xC34) = 0; /* 0x00406AF6: mov dword ptr [esp + 0xc34], 0 */
    PUSH32(esp, 0x007CE9D8u); /* 0x00406B01: push 0x7ce9d8 */
    MEM8(esp + 0x2A) = (uint8_t)(1); /* 0x00406B06: mov byte ptr [esp + 0x2a], 1 */
    MEM32(esp + 0xC38) = 0xFu; /* 0x00406B0B: mov dword ptr [esp + 0xc38], 0xf */
    MEM32(esp + 0xC34) = 0; /* 0x00406B16: mov dword ptr [esp + 0xc34], 0 */
    MEM8(esp + 0xC24) = (uint8_t)(0); /* 0x00406B21: mov byte ptr [esp + 0xc24], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00406B29: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Eu); /* 0x00406B2E: mov byte ptr [esp + 0x2128], 0x4e */
    eax = esp + 0x22; /* 0x00406B36: lea eax, [esp + 0x22] */
    PUSH32(esp, eax); /* 0x00406B3A: push eax */
    ecx = esp + 0xC38; /* 0x00406B3B: lea ecx, [esp + 0xc38] */
    RECOMP_CALL(sub_005293B0); /* 0x00406B42: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x50u); /* 0x00406B47: mov byte ptr [esp + 0x2128], 0x50 */
    ecx = esp + 0xC40; /* 0x00406B4F: lea ecx, [esp + 0xc40] */
    PUSH32(esp, 0x13u); /* 0x00406B56: push 0x13 */
    MEM32(esp + 0xC54) = 0; /* 0x00406B58: mov dword ptr [esp + 0xc54], 0 */
    MEM32(esp + 0xC58) = 0; /* 0x00406B63: mov dword ptr [esp + 0xc58], 0 */
    PUSH32(esp, 0x007CE9C4u); /* 0x00406B6E: push 0x7ce9c4 */
    MEM8(esp + 0x1E) = (uint8_t)(1); /* 0x00406B73: mov byte ptr [esp + 0x1e], 1 */
    MEM32(esp + 0xC5C) = 0xFu; /* 0x00406B78: mov dword ptr [esp + 0xc5c], 0xf */
    MEM32(esp + 0xC58) = 0; /* 0x00406B83: mov dword ptr [esp + 0xc58], 0 */
    MEM8(esp + 0xC48) = (uint8_t)(0); /* 0x00406B8E: mov byte ptr [esp + 0xc48], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00406B96: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x51u); /* 0x00406B9B: mov byte ptr [esp + 0x2128], 0x51 */
    eax = esp + 0x16; /* 0x00406BA3: lea eax, [esp + 0x16] */
    PUSH32(esp, eax); /* 0x00406BA7: push eax */
    ecx = esp + 0xC5C; /* 0x00406BA8: lea ecx, [esp + 0xc5c] */
    RECOMP_CALL(sub_005293B0); /* 0x00406BAF: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x53u); /* 0x00406BB4: mov byte ptr [esp + 0x2128], 0x53 */
    eax = esp + 0x2A4; /* 0x00406BBC: lea eax, [esp + 0x2a4] */
    PUSH32(esp, eax); /* 0x00406BC3: push eax */
    eax = esp + 0xE4; /* 0x00406BC4: lea eax, [esp + 0xe4] */
    MEM32(esp + 0x2A8) = 0x4479C000u; /* 0x00406BCB: mov dword ptr [esp + 0x2a8], 0x4479c000 */
    PUSH32(esp, eax); /* 0x00406BD6: push eax */
    eax = esp + 0x350; /* 0x00406BD7: lea eax, [esp + 0x350] */
    MEM32(esp + 0xE8) = 0; /* 0x00406BDE: mov dword ptr [esp + 0xe8], 0 */
    PUSH32(esp, eax); /* 0x00406BE9: push eax */
    ecx = esp + 0x4A0; /* 0x00406BEA: lea ecx, [esp + 0x4a0] */
    MEM32(esp + 0x354) = 0x4479C000u; /* 0x00406BF1: mov dword ptr [esp + 0x354], 0x4479c000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00406BFC: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x54u); /* 0x00406C01: mov byte ptr [esp + 0x2128], 0x54 */
    MEM32(esp + 0x584) = 0; /* 0x00406C09: mov dword ptr [esp + 0x584], 0 */
    MEM32(esp + 0x588) = 0; /* 0x00406C14: mov dword ptr [esp + 0x588], 0 */
    MEM32(esp + 0x588) = 0xFu; /* 0x00406C1F: mov dword ptr [esp + 0x588], 0xf */
    MEM32(esp + 0x584) = 0; /* 0x00406C2A: mov dword ptr [esp + 0x584], 0 */
    PUSH32(esp, 0x1Au); /* 0x00406C35: push 0x1a */
    PUSH32(esp, 0x007CE990u); /* 0x00406C37: push 0x7ce990 */
    ecx = esp + 0x57C; /* 0x00406C3C: lea ecx, [esp + 0x57c] */
    MEM8(esp + 0x57C) = (uint8_t)(0); /* 0x00406C43: mov byte ptr [esp + 0x57c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00406C4B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x55u); /* 0x00406C50: mov byte ptr [esp + 0x2128], 0x55 */
    ecx = esp + 0x10; /* 0x00406C58: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406C5C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00406C61: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00406C65: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x00406C66: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406C6B: push ecx */
    ecx = esp + 0x16; /* 0x00406C6C: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x00406C70: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00406C75: push -1 */
    PUSH32(esp, 0); /* 0x00406C77: push 0 */
    eax = esp + 0x57C; /* 0x00406C79: lea eax, [esp + 0x57c] */
    MEM32(esp + 0xC7C) = 0; /* 0x00406C80: mov dword ptr [esp + 0xc7c], 0 */
    MEM32(esp + 0xC80) = 0; /* 0x00406C8B: mov dword ptr [esp + 0xc80], 0 */
    ecx = esp + 0xC6C; /* 0x00406C96: lea ecx, [esp + 0xc6c] */
    PUSH32(esp, eax); /* 0x00406C9D: push eax */
    MEM32(esp + 0xC84) = 0xFu; /* 0x00406C9E: mov dword ptr [esp + 0xc84], 0xf */
    MEM32(esp + 0xC80) = 0; /* 0x00406CA9: mov dword ptr [esp + 0xc80], 0 */
    MEM8(esp + 0xC70) = (uint8_t)(0); /* 0x00406CB4: mov byte ptr [esp + 0xc70], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00406CBC: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x56u); /* 0x00406CC1: mov byte ptr [esp + 0x2128], 0x56 */
    eax = esp + 0x494; /* 0x00406CC9: lea eax, [esp + 0x494] */
    PUSH32(esp, eax); /* 0x00406CD0: push eax */
    ecx = esp + 0xC80; /* 0x00406CD1: lea ecx, [esp + 0xc80] */
    RECOMP_CALL(sub_0041A380); /* 0x00406CD8: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x59u); /* 0x00406CDD: mov byte ptr [esp + 0x2128], 0x59 */
    /* cmp MEM32(esp + 0x588), 0x10u */ /* 0x00406CE5: cmp dword ptr [esp + 0x588], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x588)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00406D14; /* 0x00406CED: jb 0x406d14 */
L_00406CEF:
    esi = MEM32(esp + 0x574); /* 0x00406CEF: mov esi, dword ptr [esp + 0x574] */
    ecx = esp + 0x10; /* 0x00406CF6: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406CFA: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00406CFF: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00406D00: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00406D05: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00406D09: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00406D0E: push esi */
    RECOMP_ICALL(edi); /* 0x00406D0F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00406D11: add esp, 4 */
    _flag_k = FK_ADD;
L_00406D14:
    MEM32(esp + 0x588) = 0xFu; /* 0x00406D14: mov dword ptr [esp + 0x588], 0xf */
    MEM32(esp + 0x584) = 0; /* 0x00406D1F: mov dword ptr [esp + 0x584], 0 */
    MEM8(esp + 0x574) = (uint8_t)(0); /* 0x00406D2A: mov byte ptr [esp + 0x574], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x5Au); /* 0x00406D32: mov byte ptr [esp + 0x2128], 0x5a */
    ecx = esp + 0x494; /* 0x00406D3A: lea ecx, [esp + 0x494] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00406D41: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xE8; /* 0x00406D46: lea eax, [esp + 0xe8] */
    MEM32(esp + 0xE8) = 0x1388u; /* 0x00406D4D: mov dword ptr [esp + 0xe8], 0x1388 */
    PUSH32(esp, eax); /* 0x00406D58: push eax */
    PUSH32(esp, 0x007E98F0u); /* 0x00406D59: push 0x7e98f0 */
    ecx = esp + 0xC90; /* 0x00406D5E: lea ecx, [esp + 0xc90] */
    RECOMP_CALL(sub_006B9250); /* 0x00406D65: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Bu); /* 0x00406D6A: mov byte ptr [esp + 0x2128], 0x5b */
    eax = esp + 0x2AC; /* 0x00406D72: lea eax, [esp + 0x2ac] */
    PUSH32(esp, eax); /* 0x00406D79: push eax */
    PUSH32(esp, 0x007E98DCu); /* 0x00406D7A: push 0x7e98dc */
    ecx = esp + 0xCB4; /* 0x00406D7F: lea ecx, [esp + 0xcb4] */
    MEM32(esp + 0x2B4) = 0x7D0u; /* 0x00406D86: mov dword ptr [esp + 0x2b4], 0x7d0 */
    RECOMP_CALL(sub_006B9250); /* 0x00406D91: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Cu); /* 0x00406D96: mov byte ptr [esp + 0x2128], 0x5c */
    eax = esp + 0xF0; /* 0x00406D9E: lea eax, [esp + 0xf0] */
    PUSH32(esp, eax); /* 0x00406DA5: push eax */
    PUSH32(esp, 0x007E98B0u); /* 0x00406DA6: push 0x7e98b0 */
    ecx = esp + 0xCD8; /* 0x00406DAB: lea ecx, [esp + 0xcd8] */
    MEM32(esp + 0xF8) = 0x3E8u; /* 0x00406DB2: mov dword ptr [esp + 0xf8], 0x3e8 */
    RECOMP_CALL(sub_006B9250); /* 0x00406DBD: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Du); /* 0x00406DC2: mov byte ptr [esp + 0x2128], 0x5d */
    eax = esp + 0x318; /* 0x00406DCA: lea eax, [esp + 0x318] */
    PUSH32(esp, eax); /* 0x00406DD1: push eax */
    PUSH32(esp, 0x007E989Cu); /* 0x00406DD2: push 0x7e989c */
    ecx = esp + 0xCFC; /* 0x00406DD7: lea ecx, [esp + 0xcfc] */
    MEM32(esp + 0x320) = 0x1F4u; /* 0x00406DDE: mov dword ptr [esp + 0x320], 0x1f4 */
    RECOMP_CALL(sub_006B9250); /* 0x00406DE9: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Eu); /* 0x00406DEE: mov byte ptr [esp + 0x2128], 0x5e */
    eax = esp + 0xF8; /* 0x00406DF6: lea eax, [esp + 0xf8] */
    PUSH32(esp, eax); /* 0x00406DFD: push eax */
    PUSH32(esp, ecx); /* 0x00406DFE: push ecx */
    ecx = esp + 0xD20; /* 0x00406DFF: lea ecx, [esp + 0xd20] */
    MEM32(esp + 0x100) = 0x43160000u; /* 0x00406E06: mov dword ptr [esp + 0x100], 0x43160000 */
    RECOMP_CALL(sub_006B9300); /* 0x00406E11: call 0x6b9300 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Fu); /* 0x00406E16: mov byte ptr [esp + 0x2128], 0x5f */
    eax = esp + 0x2B4; /* 0x00406E1E: lea eax, [esp + 0x2b4] */
    PUSH32(esp, eax); /* 0x00406E25: push eax */
    PUSH32(esp, 0x007E9334u); /* 0x00406E26: push 0x7e9334 */
    ecx = esp + 0xD44; /* 0x00406E2B: lea ecx, [esp + 0xd44] */
    MEM32(esp + 0x2BC) = 0x40200000u; /* 0x00406E32: mov dword ptr [esp + 0x2bc], 0x40200000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406E3D: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x60u); /* 0x00406E42: mov byte ptr [esp + 0x2128], 0x60 */
    eax = esp + 0x100; /* 0x00406E4A: lea eax, [esp + 0x100] */
    PUSH32(esp, eax); /* 0x00406E51: push eax */
    PUSH32(esp, 0x007E9348u); /* 0x00406E52: push 0x7e9348 */
    ecx = esp + 0xD68; /* 0x00406E57: lea ecx, [esp + 0xd68] */
    MEM32(esp + 0x108) = 0xC8u; /* 0x00406E5E: mov dword ptr [esp + 0x108], 0xc8 */
    RECOMP_CALL(sub_006B9250); /* 0x00406E69: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x61u); /* 0x00406E6E: mov byte ptr [esp + 0x2128], 0x61 */
    eax = esp + 0x31C; /* 0x00406E76: lea eax, [esp + 0x31c] */
    PUSH32(esp, eax); /* 0x00406E7D: push eax */
    PUSH32(esp, 0x007E9360u); /* 0x00406E7E: push 0x7e9360 */
    ecx = esp + 0xD8C; /* 0x00406E83: lea ecx, [esp + 0xd8c] */
    MEM32(esp + 0x324) = 0x64u; /* 0x00406E8A: mov dword ptr [esp + 0x324], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x00406E95: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x62u); /* 0x00406E9A: mov byte ptr [esp + 0x2128], 0x62 */
    eax = esp + 0x108; /* 0x00406EA2: lea eax, [esp + 0x108] */
    PUSH32(esp, eax); /* 0x00406EA9: push eax */
    PUSH32(esp, 0x007E92DCu); /* 0x00406EAA: push 0x7e92dc */
    ecx = esp + 0xDB0; /* 0x00406EAF: lea ecx, [esp + 0xdb0] */
    MEM32(esp + 0x110) = 0xC8u; /* 0x00406EB6: mov dword ptr [esp + 0x110], 0xc8 */
    RECOMP_CALL(sub_006B9250); /* 0x00406EC1: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x63u); /* 0x00406EC6: mov byte ptr [esp + 0x2128], 0x63 */
    eax = esp + 0x2BC; /* 0x00406ECE: lea eax, [esp + 0x2bc] */
    MEM32(esp + 0x2BC) = 0x4Bu; /* 0x00406ED5: mov dword ptr [esp + 0x2bc], 0x4b */
    PUSH32(esp, eax); /* 0x00406EE0: push eax */
    PUSH32(esp, 0x007E9370u); /* 0x00406EE1: push 0x7e9370 */
    ecx = esp + 0xDD4; /* 0x00406EE6: lea ecx, [esp + 0xdd4] */
    RECOMP_CALL(sub_006B9250); /* 0x00406EED: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x64u); /* 0x00406EF2: mov byte ptr [esp + 0x2128], 0x64 */
    eax = esp + 0x110; /* 0x00406EFA: lea eax, [esp + 0x110] */
    PUSH32(esp, eax); /* 0x00406F01: push eax */
    PUSH32(esp, 0x007E958Cu); /* 0x00406F02: push 0x7e958c */
    ecx = esp + 0xDF8; /* 0x00406F07: lea ecx, [esp + 0xdf8] */
    MEM32(esp + 0x118) = 0xC8u; /* 0x00406F0E: mov dword ptr [esp + 0x118], 0xc8 */
    RECOMP_CALL(sub_006B9250); /* 0x00406F19: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x65u); /* 0x00406F1E: mov byte ptr [esp + 0x2128], 0x65 */
    eax = esp + 0x324; /* 0x00406F26: lea eax, [esp + 0x324] */
    PUSH32(esp, eax); /* 0x00406F2D: push eax */
    PUSH32(esp, 0x007E9624u); /* 0x00406F2E: push 0x7e9624 */
    ecx = esp + 0xE1C; /* 0x00406F33: lea ecx, [esp + 0xe1c] */
    MEM32(esp + 0x32C) = 0x32u; /* 0x00406F3A: mov dword ptr [esp + 0x32c], 0x32 */
    RECOMP_CALL(sub_006B9250); /* 0x00406F45: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x66u); /* 0x00406F4A: mov byte ptr [esp + 0x2128], 0x66 */
    eax = esp + 0x118; /* 0x00406F52: lea eax, [esp + 0x118] */
    PUSH32(esp, eax); /* 0x00406F59: push eax */
    PUSH32(esp, 0x007E9638u); /* 0x00406F5A: push 0x7e9638 */
    ecx = esp + 0xE40; /* 0x00406F5F: lea ecx, [esp + 0xe40] */
    MEM32(esp + 0x120) = 0x32u; /* 0x00406F66: mov dword ptr [esp + 0x120], 0x32 */
    RECOMP_CALL(sub_006B9250); /* 0x00406F71: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x67u); /* 0x00406F76: mov byte ptr [esp + 0x2128], 0x67 */
    eax = esp + 0x2C4; /* 0x00406F7E: lea eax, [esp + 0x2c4] */
    PUSH32(esp, eax); /* 0x00406F85: push eax */
    PUSH32(esp, 0x008002A0u); /* 0x00406F86: push 0x8002a0 */
    ecx = esp + 0xE64; /* 0x00406F8B: lea ecx, [esp + 0xe64] */
    MEM32(esp + 0x2CC) = 0x32u; /* 0x00406F92: mov dword ptr [esp + 0x2cc], 0x32 */
    RECOMP_CALL(sub_006B9250); /* 0x00406F9D: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x68u); /* 0x00406FA2: mov byte ptr [esp + 0x2128], 0x68 */
    eax = esp + 0x120; /* 0x00406FAA: lea eax, [esp + 0x120] */
    PUSH32(esp, eax); /* 0x00406FB1: push eax */
    PUSH32(esp, 0x007E95C4u); /* 0x00406FB2: push 0x7e95c4 */
    ecx = esp + 0xE88; /* 0x00406FB7: lea ecx, [esp + 0xe88] */
    MEM32(esp + 0x128) = 0xC8u; /* 0x00406FBE: mov dword ptr [esp + 0x128], 0xc8 */
    RECOMP_CALL(sub_006B9250); /* 0x00406FC9: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x69u); /* 0x00406FCE: mov byte ptr [esp + 0x2128], 0x69 */
    eax = esp + 0x32C; /* 0x00406FD6: lea eax, [esp + 0x32c] */
    PUSH32(esp, eax); /* 0x00406FDD: push eax */
    PUSH32(esp, 0x007E699Cu); /* 0x00406FDE: push 0x7e699c */
    ecx = esp + 0xEAC; /* 0x00406FE3: lea ecx, [esp + 0xeac] */
    MEM32(esp + 0x334) = 0x3F800000u; /* 0x00406FEA: mov dword ptr [esp + 0x334], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00406FF5: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x6Au); /* 0x00406FFA: mov byte ptr [esp + 0x2128], 0x6a */
    eax = esp + 0x128; /* 0x00407002: lea eax, [esp + 0x128] */
    PUSH32(esp, eax); /* 0x00407009: push eax */
    PUSH32(esp, 0x007DF134u); /* 0x0040700A: push 0x7df134 */
    ecx = esp + 0xED0; /* 0x0040700F: lea ecx, [esp + 0xed0] */
    MEM32(esp + 0x130) = 0x3F800000u; /* 0x00407016: mov dword ptr [esp + 0x130], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407021: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x6Bu); /* 0x00407026: mov byte ptr [esp + 0x2128], 0x6b */
    eax = esp + 0x2CC; /* 0x0040702E: lea eax, [esp + 0x2cc] */
    PUSH32(esp, eax); /* 0x00407035: push eax */
    eax = esp + 0x134; /* 0x00407036: lea eax, [esp + 0x134] */
    MEM32(esp + 0x2D0) = 0x428C0000u; /* 0x0040703D: mov dword ptr [esp + 0x2d0], 0x428c0000 */
    PUSH32(esp, eax); /* 0x00407048: push eax */
    eax = esp + 0x33C; /* 0x00407049: lea eax, [esp + 0x33c] */
    MEM32(esp + 0x138) = 0x3F800000u; /* 0x00407050: mov dword ptr [esp + 0x138], 0x3f800000 */
    PUSH32(esp, eax); /* 0x0040705B: push eax */
    ecx = esp + 0x3F8; /* 0x0040705C: lea ecx, [esp + 0x3f8] */
    MEM32(esp + 0x340) = 0x411CE80Au; /* 0x00407063: mov dword ptr [esp + 0x340], 0x411ce80a */
    RECOMP_CALL(sub_005F5C10); /* 0x0040706E: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x6Cu); /* 0x00407073: mov byte ptr [esp + 0x2128], 0x6c */
    ecx = esp + 0x6F4; /* 0x0040707B: lea ecx, [esp + 0x6f4] */
    PUSH32(esp, 0x007E68A0u); /* 0x00407082: push 0x7e68a0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00407087: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x6Du); /* 0x0040708C: mov byte ptr [esp + 0x2128], 0x6d */
    ecx = esp + 0x10; /* 0x00407094: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00407098: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x0040709D: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004070A1: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004070A2: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004070A7: push ecx */
    ecx = esp + 0x16; /* 0x004070A8: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004070AC: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004070B1: push -1 */
    PUSH32(esp, 0); /* 0x004070B3: push 0 */
    eax = esp + 0x6FC; /* 0x004070B5: lea eax, [esp + 0x6fc] */
    MEM32(esp + 0xF04) = 0; /* 0x004070BC: mov dword ptr [esp + 0xf04], 0 */
    MEM32(esp + 0xF08) = 0; /* 0x004070C7: mov dword ptr [esp + 0xf08], 0 */
    ecx = esp + 0xEF4; /* 0x004070D2: lea ecx, [esp + 0xef4] */
    PUSH32(esp, eax); /* 0x004070D9: push eax */
    MEM32(esp + 0xF0C) = 0xFu; /* 0x004070DA: mov dword ptr [esp + 0xf0c], 0xf */
    MEM32(esp + 0xF08) = 0; /* 0x004070E5: mov dword ptr [esp + 0xf08], 0 */
    MEM8(esp + 0xEF8) = (uint8_t)(0); /* 0x004070F0: mov byte ptr [esp + 0xef8], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x004070F8: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x6Eu); /* 0x004070FD: mov byte ptr [esp + 0x2128], 0x6e */
    eax = esp + 0x3EC; /* 0x00407105: lea eax, [esp + 0x3ec] */
    PUSH32(esp, eax); /* 0x0040710C: push eax */
    ecx = esp + 0xF08; /* 0x0040710D: lea ecx, [esp + 0xf08] */
    RECOMP_CALL(sub_0041A380); /* 0x00407114: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x71u); /* 0x00407119: mov byte ptr [esp + 0x2128], 0x71 */
    /* cmp MEM32(esp + 0x708), 0x10u */ /* 0x00407121: cmp dword ptr [esp + 0x708], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x708)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00407150; /* 0x00407129: jb 0x407150 */
L_0040712B:
    esi = MEM32(esp + 0x6F4); /* 0x0040712B: mov esi, dword ptr [esp + 0x6f4] */
    ecx = esp + 0x10; /* 0x00407132: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00407136: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040713B: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x0040713C: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x00407141: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00407145: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040714A: push esi */
    RECOMP_ICALL(edi); /* 0x0040714B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040714D: add esp, 4 */
    _flag_k = FK_ADD;
L_00407150:
    MEM32(esp + 0x708) = 0xFu; /* 0x00407150: mov dword ptr [esp + 0x708], 0xf */
    MEM32(esp + 0x704) = 0; /* 0x0040715B: mov dword ptr [esp + 0x704], 0 */
    MEM8(esp + 0x6F4) = (uint8_t)(0); /* 0x00407166: mov byte ptr [esp + 0x6f4], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x72u); /* 0x0040716E: mov byte ptr [esp + 0x2128], 0x72 */
    ecx = esp + 0x3EC; /* 0x00407176: lea ecx, [esp + 0x3ec] */
    RECOMP_CALL(sub_0041A4B0); /* 0x0040717D: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x138; /* 0x00407182: lea eax, [esp + 0x138] */
    MEM32(esp + 0x138) = 0x12Cu; /* 0x00407189: mov dword ptr [esp + 0x138], 0x12c */
    PUSH32(esp, eax); /* 0x00407194: push eax */
    PUSH32(esp, 0x00800284u); /* 0x00407195: push 0x800284 */
    ecx = esp + 0xF18; /* 0x0040719A: lea ecx, [esp + 0xf18] */
    RECOMP_CALL(sub_006B9250); /* 0x004071A1: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x73u); /* 0x004071A6: mov byte ptr [esp + 0x2128], 0x73 */
    eax = esp + 0x2D4; /* 0x004071AE: lea eax, [esp + 0x2d4] */
    PUSH32(esp, eax); /* 0x004071B5: push eax */
    PUSH32(esp, 0x00800264u); /* 0x004071B6: push 0x800264 */
    ecx = esp + 0xF3C; /* 0x004071BB: lea ecx, [esp + 0xf3c] */
    MEM32(esp + 0x2DC) = 0; /* 0x004071C2: mov dword ptr [esp + 0x2dc], 0 */
    RECOMP_CALL(sub_006B9250); /* 0x004071CD: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x74u); /* 0x004071D2: mov byte ptr [esp + 0x2128], 0x74 */
    eax = esp + 0x140; /* 0x004071DA: lea eax, [esp + 0x140] */
    PUSH32(esp, eax); /* 0x004071E1: push eax */
    PUSH32(esp, 0x0080040Cu); /* 0x004071E2: push 0x80040c */
    ecx = esp + 0xF60; /* 0x004071E7: lea ecx, [esp + 0xf60] */
    MEM32(esp + 0x148) = 0xFA0u; /* 0x004071EE: mov dword ptr [esp + 0x148], 0xfa0 */
    RECOMP_CALL(sub_006B9250); /* 0x004071F9: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x75u); /* 0x004071FE: mov byte ptr [esp + 0x2128], 0x75 */
    eax = esp + 0x33C; /* 0x00407206: lea eax, [esp + 0x33c] */
    PUSH32(esp, eax); /* 0x0040720D: push eax */
    PUSH32(esp, 0x008003F0u); /* 0x0040720E: push 0x8003f0 */
    ecx = esp + 0xF84; /* 0x00407213: lea ecx, [esp + 0xf84] */
    MEM32(esp + 0x344) = 0xFu; /* 0x0040721A: mov dword ptr [esp + 0x344], 0xf */
    RECOMP_CALL(sub_006B9250); /* 0x00407225: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x76u); /* 0x0040722A: mov byte ptr [esp + 0x2128], 0x76 */
    eax = esp + 0x148; /* 0x00407232: lea eax, [esp + 0x148] */
    PUSH32(esp, eax); /* 0x00407239: push eax */
    PUSH32(esp, 0x008003D0u); /* 0x0040723A: push 0x8003d0 */
    ecx = esp + 0xFA8; /* 0x0040723F: lea ecx, [esp + 0xfa8] */
    MEM32(esp + 0x150) = 3; /* 0x00407246: mov dword ptr [esp + 0x150], 3 */
    RECOMP_CALL(sub_006B9250); /* 0x00407251: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x77u); /* 0x00407256: mov byte ptr [esp + 0x2128], 0x77 */
    ecx = esp + 0xFC4; /* 0x0040725E: lea ecx, [esp + 0xfc4] */
    PUSH32(esp, 0x008003A8u); /* 0x00407265: push 0x8003a8 */
    MEM8(esp + 0x30) = (uint8_t)(0); /* 0x0040726A: mov byte ptr [esp + 0x30], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040726F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x78u); /* 0x00407274: mov byte ptr [esp + 0x2128], 0x78 */
    eax = esp + 0x2C; /* 0x0040727C: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x00407280: push eax */
    ecx = esp + 0xFE0; /* 0x00407281: lea ecx, [esp + 0xfe0] */
    RECOMP_CALL(sub_005293B0); /* 0x00407288: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x7Au); /* 0x0040728D: mov byte ptr [esp + 0x2128], 0x7a */
    ecx = esp + 0xFE8; /* 0x00407295: lea ecx, [esp + 0xfe8] */
    PUSH32(esp, 0x00800498u); /* 0x0040729C: push 0x800498 */
    MEM8(esp + 0x1C) = (uint8_t)(0); /* 0x004072A1: mov byte ptr [esp + 0x1c], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x004072A6: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x7Bu); /* 0x004072AB: mov byte ptr [esp + 0x2128], 0x7b */
    eax = esp + 0x18; /* 0x004072B3: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x004072B7: push eax */
    ecx = esp + 0x1004; /* 0x004072B8: lea ecx, [esp + 0x1004] */
    RECOMP_CALL(sub_005293B0); /* 0x004072BF: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x7Du); /* 0x004072C4: mov byte ptr [esp + 0x2128], 0x7d */
    eax = esp + 0x2DC; /* 0x004072CC: lea eax, [esp + 0x2dc] */
    PUSH32(esp, eax); /* 0x004072D3: push eax */
    PUSH32(esp, 0x00800474u); /* 0x004072D4: push 0x800474 */
    ecx = esp + 0x1014; /* 0x004072D9: lea ecx, [esp + 0x1014] */
    MEM32(esp + 0x2E4) = 5; /* 0x004072E0: mov dword ptr [esp + 0x2e4], 5 */
    RECOMP_CALL(sub_006B9250); /* 0x004072EB: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x7Eu); /* 0x004072F0: mov byte ptr [esp + 0x2128], 0x7e */
    PUSH32(esp, 0x00800450u); /* 0x004072F8: push 0x800450 */
    ecx = esp + 0x1034; /* 0x004072FD: lea ecx, [esp + 0x1034] */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x00407304: mov byte ptr [esp + 0x28], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00407309: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x7Fu); /* 0x0040730E: mov byte ptr [esp + 0x2128], 0x7f */
    eax = esp + 0x24; /* 0x00407316: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x0040731A: push eax */
    ecx = esp + 0x104C; /* 0x0040731B: lea ecx, [esp + 0x104c] */
    RECOMP_CALL(sub_005293B0); /* 0x00407322: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x81u); /* 0x00407327: mov byte ptr [esp + 0x2128], 0x81 */
    eax = esp + 0x150; /* 0x0040732F: lea eax, [esp + 0x150] */
    PUSH32(esp, eax); /* 0x00407336: push eax */
    PUSH32(esp, 0x0080042Cu); /* 0x00407337: push 0x80042c */
    ecx = esp + 0x105C; /* 0x0040733C: lea ecx, [esp + 0x105c] */
    MEM32(esp + 0x158) = 0x258u; /* 0x00407343: mov dword ptr [esp + 0x158], 0x258 */
    RECOMP_CALL(sub_006B9250); /* 0x0040734E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x82u); /* 0x00407353: mov byte ptr [esp + 0x2128], 0x82 */
    eax = esp + 0x344; /* 0x0040735B: lea eax, [esp + 0x344] */
    PUSH32(esp, eax); /* 0x00407362: push eax */
    PUSH32(esp, 0x007E8ED4u); /* 0x00407363: push 0x7e8ed4 */
    ecx = esp + 0x1080; /* 0x00407368: lea ecx, [esp + 0x1080] */
    MEM32(esp + 0x34C) = 0x3FC00000u; /* 0x0040736F: mov dword ptr [esp + 0x34c], 0x3fc00000 */
    RECOMP_CALL(sub_006B9110); /* 0x0040737A: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x83u); /* 0x0040737F: mov byte ptr [esp + 0x2128], 0x83 */
    eax = esp + 0x158; /* 0x00407387: lea eax, [esp + 0x158] */
    PUSH32(esp, eax); /* 0x0040738E: push eax */
    PUSH32(esp, 0x007E8EF0u); /* 0x0040738F: push 0x7e8ef0 */
    ecx = esp + 0x10A4; /* 0x00407394: lea ecx, [esp + 0x10a4] */
    MEM32(esp + 0x160) = 0x3F800000u; /* 0x0040739B: mov dword ptr [esp + 0x160], 0x3f800000 */
    RECOMP_CALL(sub_006B9110); /* 0x004073A6: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x84u); /* 0x004073AB: mov byte ptr [esp + 0x2128], 0x84 */
    eax = esp + 0x2E4; /* 0x004073B3: lea eax, [esp + 0x2e4] */
    PUSH32(esp, eax); /* 0x004073BA: push eax */
    PUSH32(esp, 0x00800308u); /* 0x004073BB: push 0x800308 */
    ecx = esp + 0x10C8; /* 0x004073C0: lea ecx, [esp + 0x10c8] */
    MEM32(esp + 0x2EC) = 0x64u; /* 0x004073C7: mov dword ptr [esp + 0x2ec], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x004073D2: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x85u); /* 0x004073D7: mov byte ptr [esp + 0x2128], 0x85 */
    eax = esp + 0x160; /* 0x004073DF: lea eax, [esp + 0x160] */
    PUSH32(esp, eax); /* 0x004073E6: push eax */
    PUSH32(esp, 0x008002ECu); /* 0x004073E7: push 0x8002ec */
    ecx = esp + 0x10EC; /* 0x004073EC: lea ecx, [esp + 0x10ec] */
    MEM32(esp + 0x168) = 0x5Au; /* 0x004073F3: mov dword ptr [esp + 0x168], 0x5a */
    RECOMP_CALL(sub_006B9250); /* 0x004073FE: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x86u); /* 0x00407403: mov byte ptr [esp + 0x2128], 0x86 */
    eax = esp + 0x34C; /* 0x0040740B: lea eax, [esp + 0x34c] */
    PUSH32(esp, eax); /* 0x00407412: push eax */
    PUSH32(esp, 0x008002D0u); /* 0x00407413: push 0x8002d0 */
    ecx = esp + 0x1110; /* 0x00407418: lea ecx, [esp + 0x1110] */
    MEM32(esp + 0x354) = 0x46u; /* 0x0040741F: mov dword ptr [esp + 0x354], 0x46 */
    RECOMP_CALL(sub_006B9250); /* 0x0040742A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x87u); /* 0x0040742F: mov byte ptr [esp + 0x2128], 0x87 */
    eax = esp + 0x168; /* 0x00407437: lea eax, [esp + 0x168] */
    PUSH32(esp, eax); /* 0x0040743E: push eax */
    PUSH32(esp, 0x008002B0u); /* 0x0040743F: push 0x8002b0 */
    ecx = esp + 0x1134; /* 0x00407444: lea ecx, [esp + 0x1134] */
    MEM32(esp + 0x170) = 0x8Cu; /* 0x0040744B: mov dword ptr [esp + 0x170], 0x8c */
    RECOMP_CALL(sub_006B9250); /* 0x00407456: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x88u); /* 0x0040745B: mov byte ptr [esp + 0x2128], 0x88 */
    eax = esp + 0x2EC; /* 0x00407463: lea eax, [esp + 0x2ec] */
    PUSH32(esp, eax); /* 0x0040746A: push eax */
    PUSH32(esp, 0x0080038Cu); /* 0x0040746B: push 0x80038c */
    ecx = esp + 0x1158; /* 0x00407470: lea ecx, [esp + 0x1158] */
    MEM32(esp + 0x2F4) = 0x6Eu; /* 0x00407477: mov dword ptr [esp + 0x2f4], 0x6e */
    RECOMP_CALL(sub_006B9250); /* 0x00407482: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x89u); /* 0x00407487: mov byte ptr [esp + 0x2128], 0x89 */
    eax = esp + 0x170; /* 0x0040748F: lea eax, [esp + 0x170] */
    PUSH32(esp, eax); /* 0x00407496: push eax */
    MEM32(esp + 0x174) = 0x5Fu; /* 0x00407497: mov dword ptr [esp + 0x174], 0x5f */
    PUSH32(esp, 0x0080036Cu); /* 0x004074A2: push 0x80036c */
    ecx = esp + 0x117C; /* 0x004074A7: lea ecx, [esp + 0x117c] */
    RECOMP_CALL(sub_006B9250); /* 0x004074AE: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Au); /* 0x004074B3: mov byte ptr [esp + 0x2128], 0x8a */
    eax = esp + 0x354; /* 0x004074BB: lea eax, [esp + 0x354] */
    PUSH32(esp, eax); /* 0x004074C2: push eax */
    PUSH32(esp, 0x00800348u); /* 0x004074C3: push 0x800348 */
    ecx = esp + 0x11A0; /* 0x004074C8: lea ecx, [esp + 0x11a0] */
    MEM32(esp + 0x35C) = 0xAAu; /* 0x004074CF: mov dword ptr [esp + 0x35c], 0xaa */
    RECOMP_CALL(sub_006B9250); /* 0x004074DA: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Bu); /* 0x004074DF: mov byte ptr [esp + 0x2128], 0x8b */
    eax = esp + 0x178; /* 0x004074E7: lea eax, [esp + 0x178] */
    PUSH32(esp, eax); /* 0x004074EE: push eax */
    PUSH32(esp, 0x00800328u); /* 0x004074EF: push 0x800328 */
    ecx = esp + 0x11C4; /* 0x004074F4: lea ecx, [esp + 0x11c4] */
    MEM32(esp + 0x180) = 0x82u; /* 0x004074FB: mov dword ptr [esp + 0x180], 0x82 */
    RECOMP_CALL(sub_006B9250); /* 0x00407506: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Cu); /* 0x0040750B: mov byte ptr [esp + 0x2128], 0x8c */
    eax = esp + 0x2F4; /* 0x00407513: lea eax, [esp + 0x2f4] */
    PUSH32(esp, eax); /* 0x0040751A: push eax */
    PUSH32(esp, 0x008005F0u); /* 0x0040751B: push 0x8005f0 */
    ecx = esp + 0x11E8; /* 0x00407520: lea ecx, [esp + 0x11e8] */
    MEM32(esp + 0x2FC) = 0x78u; /* 0x00407527: mov dword ptr [esp + 0x2fc], 0x78 */
    RECOMP_CALL(sub_006B9250); /* 0x00407532: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Du); /* 0x00407537: mov byte ptr [esp + 0x2128], 0x8d */
    eax = esp + 0x180; /* 0x0040753F: lea eax, [esp + 0x180] */
    PUSH32(esp, eax); /* 0x00407546: push eax */
    PUSH32(esp, 0x008005D4u); /* 0x00407547: push 0x8005d4 */
    ecx = esp + 0x120C; /* 0x0040754C: lea ecx, [esp + 0x120c] */
    MEM32(esp + 0x188) = 0x5Fu; /* 0x00407553: mov dword ptr [esp + 0x188], 0x5f */
    RECOMP_CALL(sub_006B9250); /* 0x0040755E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Eu); /* 0x00407563: mov byte ptr [esp + 0x2128], 0x8e */
    eax = esp + 0x35C; /* 0x0040756B: lea eax, [esp + 0x35c] */
    PUSH32(esp, eax); /* 0x00407572: push eax */
    PUSH32(esp, 0x008005BCu); /* 0x00407573: push 0x8005bc */
    ecx = esp + 0x1230; /* 0x00407578: lea ecx, [esp + 0x1230] */
    MEM32(esp + 0x364) = 0x52u; /* 0x0040757F: mov dword ptr [esp + 0x364], 0x52 */
    RECOMP_CALL(sub_006B9250); /* 0x0040758A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x8Fu); /* 0x0040758F: mov byte ptr [esp + 0x2128], 0x8f */
    eax = esp + 0x188; /* 0x00407597: lea eax, [esp + 0x188] */
    PUSH32(esp, eax); /* 0x0040759E: push eax */
    PUSH32(esp, 0x008005A0u); /* 0x0040759F: push 0x8005a0 */
    ecx = esp + 0x1254; /* 0x004075A4: lea ecx, [esp + 0x1254] */
    MEM32(esp + 0x190) = 0x49u; /* 0x004075AB: mov dword ptr [esp + 0x190], 0x49 */
    RECOMP_CALL(sub_006B9250); /* 0x004075B6: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x90u); /* 0x004075BB: mov byte ptr [esp + 0x2128], 0x90 */
    eax = esp + 0x2FC; /* 0x004075C3: lea eax, [esp + 0x2fc] */
    PUSH32(esp, eax); /* 0x004075CA: push eax */
    PUSH32(esp, 0x00800668u); /* 0x004075CB: push 0x800668 */
    ecx = esp + 0x1278; /* 0x004075D0: lea ecx, [esp + 0x1278] */
    MEM32(esp + 0x304) = 0x64u; /* 0x004075D7: mov dword ptr [esp + 0x304], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x004075E2: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x91u); /* 0x004075E7: mov byte ptr [esp + 0x2128], 0x91 */
    eax = esp + 0x190; /* 0x004075EF: lea eax, [esp + 0x190] */
    PUSH32(esp, eax); /* 0x004075F6: push eax */
    PUSH32(esp, 0x0080064Cu); /* 0x004075F7: push 0x80064c */
    ecx = esp + 0x129C; /* 0x004075FC: lea ecx, [esp + 0x129c] */
    MEM32(esp + 0x198) = 0x5Cu; /* 0x00407603: mov dword ptr [esp + 0x198], 0x5c */
    RECOMP_CALL(sub_006B9250); /* 0x0040760E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x92u); /* 0x00407613: mov byte ptr [esp + 0x2128], 0x92 */
    eax = esp + 0x364; /* 0x0040761B: lea eax, [esp + 0x364] */
    PUSH32(esp, eax); /* 0x00407622: push eax */
    PUSH32(esp, 0x00800630u); /* 0x00407623: push 0x800630 */
    ecx = esp + 0x12C0; /* 0x00407628: lea ecx, [esp + 0x12c0] */
    MEM32(esp + 0x36C) = 0x56u; /* 0x0040762F: mov dword ptr [esp + 0x36c], 0x56 */
    RECOMP_CALL(sub_006B9250); /* 0x0040763A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x93u); /* 0x0040763F: mov byte ptr [esp + 0x2128], 0x93 */
    eax = esp + 0x198; /* 0x00407647: lea eax, [esp + 0x198] */
    PUSH32(esp, eax); /* 0x0040764E: push eax */
    MEM32(esp + 0x19C) = 0x7Du; /* 0x0040764F: mov dword ptr [esp + 0x19c], 0x7d */
    ecx = esp + 0x12E0; /* 0x0040765A: lea ecx, [esp + 0x12e0] */
    PUSH32(esp, 0x00800610u); /* 0x00407661: push 0x800610 */
    RECOMP_CALL(sub_006B9250); /* 0x00407666: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x94u); /* 0x0040766B: mov byte ptr [esp + 0x2128], 0x94 */
    eax = esp + 0x304; /* 0x00407673: lea eax, [esp + 0x304] */
    PUSH32(esp, eax); /* 0x0040767A: push eax */
    PUSH32(esp, 0x00800514u); /* 0x0040767B: push 0x800514 */
    ecx = esp + 0x1308; /* 0x00407680: lea ecx, [esp + 0x1308] */
    MEM32(esp + 0x30C) = 0x6Eu; /* 0x00407687: mov dword ptr [esp + 0x30c], 0x6e */
    RECOMP_CALL(sub_006B9250); /* 0x00407692: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x95u); /* 0x00407697: mov byte ptr [esp + 0x2128], 0x95 */
    eax = esp + 0x1A0; /* 0x0040769F: lea eax, [esp + 0x1a0] */
    PUSH32(esp, eax); /* 0x004076A6: push eax */
    PUSH32(esp, 0x008004F4u); /* 0x004076A7: push 0x8004f4 */
    ecx = esp + 0x132C; /* 0x004076AC: lea ecx, [esp + 0x132c] */
    MEM32(esp + 0x1A8) = 0x68u; /* 0x004076B3: mov dword ptr [esp + 0x1a8], 0x68 */
    RECOMP_CALL(sub_006B9250); /* 0x004076BE: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x96u); /* 0x004076C3: mov byte ptr [esp + 0x2128], 0x96 */
    eax = esp + 0x36C; /* 0x004076CB: lea eax, [esp + 0x36c] */
    PUSH32(esp, eax); /* 0x004076D2: push eax */
    PUSH32(esp, 0x008004D8u); /* 0x004076D3: push 0x8004d8 */
    ecx = esp + 0x1350; /* 0x004076D8: lea ecx, [esp + 0x1350] */
    MEM32(esp + 0x374) = 0x46u; /* 0x004076DF: mov dword ptr [esp + 0x374], 0x46 */
    RECOMP_CALL(sub_006B9250); /* 0x004076EA: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x97u); /* 0x004076EF: mov byte ptr [esp + 0x2128], 0x97 */
    eax = esp + 0x1A8; /* 0x004076F7: lea eax, [esp + 0x1a8] */
    PUSH32(esp, eax); /* 0x004076FE: push eax */
    PUSH32(esp, 0x008004C0u); /* 0x004076FF: push 0x8004c0 */
    ecx = esp + 0x1374; /* 0x00407704: lea ecx, [esp + 0x1374] */
    MEM32(esp + 0x1B0) = 0x41u; /* 0x0040770B: mov dword ptr [esp + 0x1b0], 0x41 */
    RECOMP_CALL(sub_006B9250); /* 0x00407716: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x98u); /* 0x0040771B: mov byte ptr [esp + 0x2128], 0x98 */
    eax = esp + 0x30C; /* 0x00407723: lea eax, [esp + 0x30c] */
    PUSH32(esp, eax); /* 0x0040772A: push eax */
    PUSH32(esp, 0x00800584u); /* 0x0040772B: push 0x800584 */
    ecx = esp + 0x1398; /* 0x00407730: lea ecx, [esp + 0x1398] */
    MEM32(esp + 0x314) = 0x3Cu; /* 0x00407737: mov dword ptr [esp + 0x314], 0x3c */
    RECOMP_CALL(sub_006B9250); /* 0x00407742: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x99u); /* 0x00407747: mov byte ptr [esp + 0x2128], 0x99 */
    eax = esp + 0x1B0; /* 0x0040774F: lea eax, [esp + 0x1b0] */
    PUSH32(esp, eax); /* 0x00407756: push eax */
    PUSH32(esp, 0x00800568u); /* 0x00407757: push 0x800568 */
    ecx = esp + 0x13BC; /* 0x0040775C: lea ecx, [esp + 0x13bc] */
    MEM32(esp + 0x1B8) = 0x56u; /* 0x00407763: mov dword ptr [esp + 0x1b8], 0x56 */
    RECOMP_CALL(sub_006B9250); /* 0x0040776E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Au); /* 0x00407773: mov byte ptr [esp + 0x2128], 0x9a */
    eax = esp + 0x374; /* 0x0040777B: lea eax, [esp + 0x374] */
    PUSH32(esp, eax); /* 0x00407782: push eax */
    PUSH32(esp, 0x0080054Cu); /* 0x00407783: push 0x80054c */
    ecx = esp + 0x13E0; /* 0x00407788: lea ecx, [esp + 0x13e0] */
    MEM32(esp + 0x37C) = 0x52u; /* 0x0040778F: mov dword ptr [esp + 0x37c], 0x52 */
    RECOMP_CALL(sub_006B9250); /* 0x0040779A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Bu); /* 0x0040779F: mov byte ptr [esp + 0x2128], 0x9b */
    eax = esp + 0x1B8; /* 0x004077A7: lea eax, [esp + 0x1b8] */
    PUSH32(esp, eax); /* 0x004077AE: push eax */
    PUSH32(esp, 0x00800530u); /* 0x004077AF: push 0x800530 */
    ecx = esp + 0x1404; /* 0x004077B4: lea ecx, [esp + 0x1404] */
    MEM32(esp + 0x1C0) = 0x4Cu; /* 0x004077BB: mov dword ptr [esp + 0x1c0], 0x4c */
    RECOMP_CALL(sub_006B9250); /* 0x004077C6: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Cu); /* 0x004077CB: mov byte ptr [esp + 0x2128], 0x9c */
    eax = esp + 0x314; /* 0x004077D3: lea eax, [esp + 0x314] */
    PUSH32(esp, eax); /* 0x004077DA: push eax */
    PUSH32(esp, 0x008007DCu); /* 0x004077DB: push 0x8007dc */
    ecx = esp + 0x1428; /* 0x004077E0: lea ecx, [esp + 0x1428] */
    MEM32(esp + 0x31C) = 0x64u; /* 0x004077E7: mov dword ptr [esp + 0x31c], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x004077F2: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Du); /* 0x004077F7: mov byte ptr [esp + 0x2128], 0x9d */
    eax = esp + 0x1C0; /* 0x004077FF: lea eax, [esp + 0x1c0] */
    PUSH32(esp, eax); /* 0x00407806: push eax */
    PUSH32(esp, 0x008007C0u); /* 0x00407807: push 0x8007c0 */
    ecx = esp + 0x144C; /* 0x0040780C: lea ecx, [esp + 0x144c] */
    MEM32(esp + 0x1C8) = 0x64u; /* 0x00407813: mov dword ptr [esp + 0x1c8], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x0040781E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Eu); /* 0x00407823: mov byte ptr [esp + 0x2128], 0x9e */
    eax = esp + 0x37C; /* 0x0040782B: lea eax, [esp + 0x37c] */
    PUSH32(esp, eax); /* 0x00407832: push eax */
    PUSH32(esp, 0x008007A0u); /* 0x00407833: push 0x8007a0 */
    ecx = esp + 0x1470; /* 0x00407838: lea ecx, [esp + 0x1470] */
    MEM32(esp + 0x384) = 0x64u; /* 0x0040783F: mov dword ptr [esp + 0x384], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x0040784A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x9Fu); /* 0x0040784F: mov byte ptr [esp + 0x2128], 0x9f */
    eax = esp + 0x1C8; /* 0x00407857: lea eax, [esp + 0x1c8] */
    PUSH32(esp, eax); /* 0x0040785E: push eax */
    PUSH32(esp, 0x00800784u); /* 0x0040785F: push 0x800784 */
    ecx = esp + 0x1494; /* 0x00407864: lea ecx, [esp + 0x1494] */
    MEM32(esp + 0x1D0) = 0x61u; /* 0x0040786B: mov dword ptr [esp + 0x1d0], 0x61 */
    RECOMP_CALL(sub_006B9250); /* 0x00407876: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA0u); /* 0x0040787B: mov byte ptr [esp + 0x2128], 0xa0 */
    eax = esp + 0x370; /* 0x00407883: lea eax, [esp + 0x370] */
    PUSH32(esp, eax); /* 0x0040788A: push eax */
    PUSH32(esp, 0x00800854u); /* 0x0040788B: push 0x800854 */
    ecx = esp + 0x14B8; /* 0x00407890: lea ecx, [esp + 0x14b8] */
    MEM32(esp + 0x378) = 0x58u; /* 0x00407897: mov dword ptr [esp + 0x378], 0x58 */
    RECOMP_CALL(sub_006B9250); /* 0x004078A2: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA1u); /* 0x004078A7: mov byte ptr [esp + 0x2128], 0xa1 */
    eax = esp + 0x1D0; /* 0x004078AF: lea eax, [esp + 0x1d0] */
    PUSH32(esp, eax); /* 0x004078B6: push eax */
    PUSH32(esp, 0x00800838u); /* 0x004078B7: push 0x800838 */
    ecx = esp + 0x14DC; /* 0x004078BC: lea ecx, [esp + 0x14dc] */
    MEM32(esp + 0x1D8) = 0x4Cu; /* 0x004078C3: mov dword ptr [esp + 0x1d8], 0x4c */
    RECOMP_CALL(sub_006B9250); /* 0x004078CE: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA2u); /* 0x004078D3: mov byte ptr [esp + 0x2128], 0xa2 */
    eax = esp + 0x320; /* 0x004078DB: lea eax, [esp + 0x320] */
    PUSH32(esp, eax); /* 0x004078E2: push eax */
    PUSH32(esp, 0x00800818u); /* 0x004078E3: push 0x800818 */
    ecx = esp + 0x1500; /* 0x004078E8: lea ecx, [esp + 0x1500] */
    MEM32(esp + 0x328) = 0x64u; /* 0x004078EF: mov dword ptr [esp + 0x328], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x004078FA: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA3u); /* 0x004078FF: mov byte ptr [esp + 0x2128], 0xa3 */
    eax = esp + 0x1D8; /* 0x00407907: lea eax, [esp + 0x1d8] */
    PUSH32(esp, eax); /* 0x0040790E: push eax */
    PUSH32(esp, 0x008007FCu); /* 0x0040790F: push 0x8007fc */
    ecx = esp + 0x1524; /* 0x00407914: lea ecx, [esp + 0x1524] */
    MEM32(esp + 0x1E0) = 0x60u; /* 0x0040791B: mov dword ptr [esp + 0x1e0], 0x60 */
    RECOMP_CALL(sub_006B9250); /* 0x00407926: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA4u); /* 0x0040792B: mov byte ptr [esp + 0x2128], 0xa4 */
    eax = esp + 0x350; /* 0x00407933: lea eax, [esp + 0x350] */
    PUSH32(esp, eax); /* 0x0040793A: push eax */
    PUSH32(esp, 0x008006E4u); /* 0x0040793B: push 0x8006e4 */
    ecx = esp + 0x1548; /* 0x00407940: lea ecx, [esp + 0x1548] */
    MEM32(esp + 0x358) = 0x58u; /* 0x00407947: mov dword ptr [esp + 0x358], 0x58 */
    RECOMP_CALL(sub_006B9250); /* 0x00407952: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA5u); /* 0x00407957: mov byte ptr [esp + 0x2128], 0xa5 */
    eax = esp + 0x1E0; /* 0x0040795F: lea eax, [esp + 0x1e0] */
    PUSH32(esp, eax); /* 0x00407966: push eax */
    PUSH32(esp, 0x008006C4u); /* 0x00407967: push 0x8006c4 */
    ecx = esp + 0x156C; /* 0x0040796C: lea ecx, [esp + 0x156c] */
    MEM32(esp + 0x1E8) = 0x78u; /* 0x00407973: mov dword ptr [esp + 0x1e8], 0x78 */
    RECOMP_CALL(sub_006B9250); /* 0x0040797E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA6u); /* 0x00407983: mov byte ptr [esp + 0x2128], 0xa6 */
    eax = esp + 0x328; /* 0x0040798B: lea eax, [esp + 0x328] */
    PUSH32(esp, eax); /* 0x00407992: push eax */
    PUSH32(esp, 0x008006A4u); /* 0x00407993: push 0x8006a4 */
    ecx = esp + 0x1590; /* 0x00407998: lea ecx, [esp + 0x1590] */
    MEM32(esp + 0x330) = 0x6Au; /* 0x0040799F: mov dword ptr [esp + 0x330], 0x6a */
    RECOMP_CALL(sub_006B9250); /* 0x004079AA: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA7u); /* 0x004079AF: mov byte ptr [esp + 0x2128], 0xa7 */
    eax = esp + 0x1E8; /* 0x004079B7: lea eax, [esp + 0x1e8] */
    PUSH32(esp, eax); /* 0x004079BE: push eax */
    PUSH32(esp, 0x00800684u); /* 0x004079BF: push 0x800684 */
    ecx = esp + 0x15B4; /* 0x004079C4: lea ecx, [esp + 0x15b4] */
    MEM32(esp + 0x1F0) = 0x64u; /* 0x004079CB: mov dword ptr [esp + 0x1f0], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x004079D6: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA8u); /* 0x004079DB: mov byte ptr [esp + 0x2128], 0xa8 */
    eax = esp + 0x368; /* 0x004079E3: lea eax, [esp + 0x368] */
    PUSH32(esp, eax); /* 0x004079EA: push eax */
    PUSH32(esp, 0x00800764u); /* 0x004079EB: push 0x800764 */
    ecx = esp + 0x15D8; /* 0x004079F0: lea ecx, [esp + 0x15d8] */
    MEM32(esp + 0x370) = 0x5Au; /* 0x004079F7: mov dword ptr [esp + 0x370], 0x5a */
    RECOMP_CALL(sub_006B9250); /* 0x00407A02: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xA9u); /* 0x00407A07: mov byte ptr [esp + 0x2128], 0xa9 */
    eax = esp + 0x1F0; /* 0x00407A0F: lea eax, [esp + 0x1f0] */
    PUSH32(esp, eax); /* 0x00407A16: push eax */
    PUSH32(esp, 0x00800748u); /* 0x00407A17: push 0x800748 */
    ecx = esp + 0x15FC; /* 0x00407A1C: lea ecx, [esp + 0x15fc] */
    MEM32(esp + 0x1F8) = 0x4Eu; /* 0x00407A23: mov dword ptr [esp + 0x1f8], 0x4e */
    RECOMP_CALL(sub_006B9250); /* 0x00407A2E: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xAAu); /* 0x00407A33: mov byte ptr [esp + 0x2128], 0xaa */
    eax = esp + 0x330; /* 0x00407A3B: lea eax, [esp + 0x330] */
    PUSH32(esp, eax); /* 0x00407A42: push eax */
    PUSH32(esp, 0x00800728u); /* 0x00407A43: push 0x800728 */
    ecx = esp + 0x1620; /* 0x00407A48: lea ecx, [esp + 0x1620] */
    MEM32(esp + 0x338) = 0x41u; /* 0x00407A4F: mov dword ptr [esp + 0x338], 0x41 */
    RECOMP_CALL(sub_006B9250); /* 0x00407A5A: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xABu); /* 0x00407A5F: mov byte ptr [esp + 0x2128], 0xab */
    eax = esp + 0x1F8; /* 0x00407A67: lea eax, [esp + 0x1f8] */
    PUSH32(esp, eax); /* 0x00407A6E: push eax */
    PUSH32(esp, 0x00800704u); /* 0x00407A6F: push 0x800704 */
    ecx = esp + 0x1644; /* 0x00407A74: lea ecx, [esp + 0x1644] */
    MEM32(esp + 0x200) = 0x60u; /* 0x00407A7B: mov dword ptr [esp + 0x200], 0x60 */
    RECOMP_CALL(sub_006B9250); /* 0x00407A86: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xACu); /* 0x00407A8B: mov byte ptr [esp + 0x2128], 0xac */
    eax = esp + 0x358; /* 0x00407A93: lea eax, [esp + 0x358] */
    PUSH32(esp, eax); /* 0x00407A9A: push eax */
    PUSH32(esp, 0x008009A4u); /* 0x00407A9B: push 0x8009a4 */
    ecx = esp + 0x1668; /* 0x00407AA0: lea ecx, [esp + 0x1668] */
    MEM32(esp + 0x360) = 0x55u; /* 0x00407AA7: mov dword ptr [esp + 0x360], 0x55 */
    RECOMP_CALL(sub_006B9250); /* 0x00407AB2: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xADu); /* 0x00407AB7: mov byte ptr [esp + 0x2128], 0xad */
    eax = esp + 0x200; /* 0x00407ABF: lea eax, [esp + 0x200] */
    PUSH32(esp, eax); /* 0x00407AC6: push eax */
    PUSH32(esp, 0x00800984u); /* 0x00407AC7: push 0x800984 */
    ecx = esp + 0x168C; /* 0x00407ACC: lea ecx, [esp + 0x168c] */
    MEM32(esp + 0x208) = 0x4Bu; /* 0x00407AD3: mov dword ptr [esp + 0x208], 0x4b */
    RECOMP_CALL(sub_006B9250); /* 0x00407ADE: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xAEu); /* 0x00407AE3: mov byte ptr [esp + 0x2128], 0xae */
    eax = esp + 0x338; /* 0x00407AEB: lea eax, [esp + 0x338] */
    PUSH32(esp, eax); /* 0x00407AF2: push eax */
    PUSH32(esp, ecx); /* 0x00407AF3: push ecx */
    ecx = esp + 0x16B0; /* 0x00407AF4: lea ecx, [esp + 0x16b0] */
    MEM32(esp + 0x340) = 0x64u; /* 0x00407AFB: mov dword ptr [esp + 0x340], 0x64 */
    RECOMP_CALL(sub_006B9390); /* 0x00407B06: call 0x6b9390 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xAFu); /* 0x00407B0B: mov byte ptr [esp + 0x2128], 0xaf */
    eax = esp + 0x208; /* 0x00407B13: lea eax, [esp + 0x208] */
    PUSH32(esp, eax); /* 0x00407B1A: push eax */
    PUSH32(esp, 0x00800940u); /* 0x00407B1B: push 0x800940 */
    ecx = esp + 0x16D4; /* 0x00407B20: lea ecx, [esp + 0x16d4] */
    MEM32(esp + 0x210) = 0x64u; /* 0x00407B27: mov dword ptr [esp + 0x210], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x00407B32: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB0u); /* 0x00407B37: mov byte ptr [esp + 0x2128], 0xb0 */
    eax = esp + 0x378; /* 0x00407B3F: lea eax, [esp + 0x378] */
    PUSH32(esp, eax); /* 0x00407B46: push eax */
    PUSH32(esp, ecx); /* 0x00407B47: push ecx */
    ecx = esp + 0x16F8; /* 0x00407B48: lea ecx, [esp + 0x16f8] */
    MEM32(esp + 0x380) = 0x64u; /* 0x00407B4F: mov dword ptr [esp + 0x380], 0x64 */
    RECOMP_CALL(sub_006B9420); /* 0x00407B5A: call 0x6b9420 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB1u); /* 0x00407B5F: mov byte ptr [esp + 0x2128], 0xb1 */
    eax = esp + 0x30; /* 0x00407B67: lea eax, [esp + 0x30] */
    PUSH32(esp, eax); /* 0x00407B6B: push eax */
    PUSH32(esp, 0x008009FCu); /* 0x00407B6C: push 0x8009fc */
    ecx = esp + 0x171C; /* 0x00407B71: lea ecx, [esp + 0x171c] */
    MEM32(esp + 0x38) = 0x61u; /* 0x00407B78: mov dword ptr [esp + 0x38], 0x61 */
    RECOMP_CALL(sub_006B9250); /* 0x00407B80: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB2u); /* 0x00407B85: mov byte ptr [esp + 0x2128], 0xb2 */
    eax = esp + 0x340; /* 0x00407B8D: lea eax, [esp + 0x340] */
    MEM32(esp + 0x340) = 0x54u; /* 0x00407B94: mov dword ptr [esp + 0x340], 0x54 */
    PUSH32(esp, eax); /* 0x00407B9F: push eax */
    PUSH32(esp, 0x008009E0u); /* 0x00407BA0: push 0x8009e0 */
    ecx = esp + 0x1740; /* 0x00407BA5: lea ecx, [esp + 0x1740] */
    RECOMP_CALL(sub_006B9250); /* 0x00407BAC: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB3u); /* 0x00407BB1: mov byte ptr [esp + 0x2128], 0xb3 */
    eax = esp + 0x218; /* 0x00407BB9: lea eax, [esp + 0x218] */
    PUSH32(esp, eax); /* 0x00407BC0: push eax */
    PUSH32(esp, 0x008009C4u); /* 0x00407BC1: push 0x8009c4 */
    ecx = esp + 0x1764; /* 0x00407BC6: lea ecx, [esp + 0x1764] */
    MEM32(esp + 0x220) = 0x4Cu; /* 0x00407BCD: mov dword ptr [esp + 0x220], 0x4c */
    RECOMP_CALL(sub_006B9250); /* 0x00407BD8: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB4u); /* 0x00407BDD: mov byte ptr [esp + 0x2128], 0xb4 */
    eax = esp + 0x294; /* 0x00407BE5: lea eax, [esp + 0x294] */
    PUSH32(esp, eax); /* 0x00407BEC: push eax */
    PUSH32(esp, 0x008008CCu); /* 0x00407BED: push 0x8008cc */
    ecx = esp + 0x1788; /* 0x00407BF2: lea ecx, [esp + 0x1788] */
    MEM32(esp + 0x29C) = 0x6Eu; /* 0x00407BF9: mov dword ptr [esp + 0x29c], 0x6e */
    RECOMP_CALL(sub_006B9250); /* 0x00407C04: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB5u); /* 0x00407C09: mov byte ptr [esp + 0x2128], 0xb5 */
    eax = esp + 0x220; /* 0x00407C11: lea eax, [esp + 0x220] */
    PUSH32(esp, eax); /* 0x00407C18: push eax */
    PUSH32(esp, 0x008008B0u); /* 0x00407C19: push 0x8008b0 */
    ecx = esp + 0x17AC; /* 0x00407C1E: lea ecx, [esp + 0x17ac] */
    MEM32(esp + 0x228) = 0x5Fu; /* 0x00407C25: mov dword ptr [esp + 0x228], 0x5f */
    RECOMP_CALL(sub_006B9250); /* 0x00407C30: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB6u); /* 0x00407C35: mov byte ptr [esp + 0x2128], 0xb6 */
    eax = esp + 0x298; /* 0x00407C3D: lea eax, [esp + 0x298] */
    PUSH32(esp, eax); /* 0x00407C44: push eax */
    PUSH32(esp, 0x00800890u); /* 0x00407C45: push 0x800890 */
    ecx = esp + 0x17D0; /* 0x00407C4A: lea ecx, [esp + 0x17d0] */
    MEM32(esp + 0x2A0) = 0x58u; /* 0x00407C51: mov dword ptr [esp + 0x2a0], 0x58 */
    RECOMP_CALL(sub_006B9250); /* 0x00407C5C: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB7u); /* 0x00407C61: mov byte ptr [esp + 0x2128], 0xb7 */
    eax = esp + 0x228; /* 0x00407C69: lea eax, [esp + 0x228] */
    PUSH32(esp, eax); /* 0x00407C70: push eax */
    PUSH32(esp, 0x00800870u); /* 0x00407C71: push 0x800870 */
    ecx = esp + 0x17F4; /* 0x00407C76: lea ecx, [esp + 0x17f4] */
    MEM32(esp + 0x230) = 0x78u; /* 0x00407C7D: mov dword ptr [esp + 0x230], 0x78 */
    RECOMP_CALL(sub_006B9250); /* 0x00407C88: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB8u); /* 0x00407C8D: mov byte ptr [esp + 0x2128], 0xb8 */
    eax = esp + 0x2A0; /* 0x00407C95: lea eax, [esp + 0x2a0] */
    PUSH32(esp, eax); /* 0x00407C9C: push eax */
    PUSH32(esp, 0x00800920u); /* 0x00407C9D: push 0x800920 */
    ecx = esp + 0x1818; /* 0x00407CA2: lea ecx, [esp + 0x1818] */
    MEM32(esp + 0x2A8) = 0x6Eu; /* 0x00407CA9: mov dword ptr [esp + 0x2a8], 0x6e */
    RECOMP_CALL(sub_006B9250); /* 0x00407CB4: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xB9u); /* 0x00407CB9: mov byte ptr [esp + 0x2128], 0xb9 */
    eax = esp + 0x230; /* 0x00407CC1: lea eax, [esp + 0x230] */
    PUSH32(esp, eax); /* 0x00407CC8: push eax */
    PUSH32(esp, 0x00800900u); /* 0x00407CC9: push 0x800900 */
    ecx = esp + 0x183C; /* 0x00407CCE: lea ecx, [esp + 0x183c] */
    MEM32(esp + 0x238) = 0x64u; /* 0x00407CD5: mov dword ptr [esp + 0x238], 0x64 */
    RECOMP_CALL(sub_006B9250); /* 0x00407CE0: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBAu); /* 0x00407CE5: mov byte ptr [esp + 0x2128], 0xba */
    eax = esp + 0x2A8; /* 0x00407CED: lea eax, [esp + 0x2a8] */
    PUSH32(esp, eax); /* 0x00407CF4: push eax */
    PUSH32(esp, 0x007CD46Cu); /* 0x00407CF5: push 0x7cd46c */
    ecx = esp + 0x1860; /* 0x00407CFA: lea ecx, [esp + 0x1860] */
    MEM32(esp + 0x2B0) = 0x41100000u; /* 0x00407D01: mov dword ptr [esp + 0x2b0], 0x41100000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407D0C: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBBu); /* 0x00407D11: mov byte ptr [esp + 0x2128], 0xbb */
    eax = esp + 0x238; /* 0x00407D19: lea eax, [esp + 0x238] */
    PUSH32(esp, eax); /* 0x00407D20: push eax */
    PUSH32(esp, 0x007CD504u); /* 0x00407D21: push 0x7cd504 */
    ecx = esp + 0x1884; /* 0x00407D26: lea ecx, [esp + 0x1884] */
    MEM32(esp + 0x240) = 0x40800000u; /* 0x00407D2D: mov dword ptr [esp + 0x240], 0x40800000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407D38: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBCu); /* 0x00407D3D: mov byte ptr [esp + 0x2128], 0xbc */
    MEM32(esp + 0x2B0) = 0; /* 0x00407D45: mov dword ptr [esp + 0x2b0], 0 */
    eax = esp + 0x2B0; /* 0x00407D50: lea eax, [esp + 0x2b0] */
    PUSH32(esp, eax); /* 0x00407D57: push eax */
    PUSH32(esp, 0x007CD5ACu); /* 0x00407D58: push 0x7cd5ac */
    ecx = esp + 0x18A8; /* 0x00407D5D: lea ecx, [esp + 0x18a8] */
    RECOMP_CALL(sub_006B9110); /* 0x00407D64: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBDu); /* 0x00407D69: mov byte ptr [esp + 0x2128], 0xbd */
    eax = esp + 0x240; /* 0x00407D71: lea eax, [esp + 0x240] */
    PUSH32(esp, eax); /* 0x00407D78: push eax */
    PUSH32(esp, 0x007CD48Cu); /* 0x00407D79: push 0x7cd48c */
    ecx = esp + 0x18CC; /* 0x00407D7E: lea ecx, [esp + 0x18cc] */
    MEM32(esp + 0x248) = 0x3F666666u; /* 0x00407D85: mov dword ptr [esp + 0x248], 0x3f666666 */
    RECOMP_CALL(sub_006B9110); /* 0x00407D90: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBEu); /* 0x00407D95: mov byte ptr [esp + 0x2128], 0xbe */
    eax = esp + 0x2B8; /* 0x00407D9D: lea eax, [esp + 0x2b8] */
    PUSH32(esp, eax); /* 0x00407DA4: push eax */
    PUSH32(esp, 0x007CD528u); /* 0x00407DA5: push 0x7cd528 */
    ecx = esp + 0x18F0; /* 0x00407DAA: lea ecx, [esp + 0x18f0] */
    MEM32(esp + 0x2C0) = 0x3F99999Au; /* 0x00407DB1: mov dword ptr [esp + 0x2c0], 0x3f99999a */
    RECOMP_CALL(sub_006B9110); /* 0x00407DBC: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xBFu); /* 0x00407DC1: mov byte ptr [esp + 0x2128], 0xbf */
    eax = esp + 0x248; /* 0x00407DC9: lea eax, [esp + 0x248] */
    PUSH32(esp, eax); /* 0x00407DD0: push eax */
    PUSH32(esp, ecx); /* 0x00407DD1: push ecx */
    ecx = esp + 0x1914; /* 0x00407DD2: lea ecx, [esp + 0x1914] */
    MEM32(esp + 0x250) = 0x3FC00000u; /* 0x00407DD9: mov dword ptr [esp + 0x250], 0x3fc00000 */
    RECOMP_CALL(sub_006B94B0); /* 0x00407DE4: call 0x6b94b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC0u); /* 0x00407DE9: mov byte ptr [esp + 0x2128], 0xc0 */
    eax = esp + 0x2C0; /* 0x00407DF1: lea eax, [esp + 0x2c0] */
    PUSH32(esp, eax); /* 0x00407DF8: push eax */
    PUSH32(esp, ecx); /* 0x00407DF9: push ecx */
    ecx = esp + 0x1938; /* 0x00407DFA: lea ecx, [esp + 0x1938] */
    MEM32(esp + 0x2C8) = 0x3F333333u; /* 0x00407E01: mov dword ptr [esp + 0x2c8], 0x3f333333 */
    RECOMP_CALL(sub_006B9540); /* 0x00407E0C: call 0x6b9540 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC1u); /* 0x00407E11: mov byte ptr [esp + 0x2128], 0xc1 */
    eax = esp + 0x250; /* 0x00407E19: lea eax, [esp + 0x250] */
    PUSH32(esp, eax); /* 0x00407E20: push eax */
    PUSH32(esp, ecx); /* 0x00407E21: push ecx */
    ecx = esp + 0x195C; /* 0x00407E22: lea ecx, [esp + 0x195c] */
    MEM32(esp + 0x258) = 0x3F800000u; /* 0x00407E29: mov dword ptr [esp + 0x258], 0x3f800000 */
    RECOMP_CALL(sub_006B95D0); /* 0x00407E34: call 0x6b95d0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC2u); /* 0x00407E39: mov byte ptr [esp + 0x2128], 0xc2 */
    eax = esp + 0x34; /* 0x00407E41: lea eax, [esp + 0x34] */
    PUSH32(esp, eax); /* 0x00407E45: push eax */
    PUSH32(esp, ecx); /* 0x00407E46: push ecx */
    ecx = esp + 0x1980; /* 0x00407E47: lea ecx, [esp + 0x1980] */
    MEM32(esp + 0x3C) = 0x3F8CCCCDu; /* 0x00407E4E: mov dword ptr [esp + 0x3c], 0x3f8ccccd */
    RECOMP_CALL(sub_006B9660); /* 0x00407E56: call 0x6b9660 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC3u); /* 0x00407E5B: mov byte ptr [esp + 0x2128], 0xc3 */
    eax = esp + 0x3C; /* 0x00407E63: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x00407E67: push eax */
    PUSH32(esp, 0x007CD2E4u); /* 0x00407E68: push 0x7cd2e4 */
    ecx = esp + 0x19A4; /* 0x00407E6D: lea ecx, [esp + 0x19a4] */
    MEM32(esp + 0x44) = 0x42200000u; /* 0x00407E74: mov dword ptr [esp + 0x44], 0x42200000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407E7C: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC4u); /* 0x00407E81: mov byte ptr [esp + 0x2128], 0xc4 */
    eax = esp + 0x44; /* 0x00407E89: lea eax, [esp + 0x44] */
    PUSH32(esp, eax); /* 0x00407E8D: push eax */
    PUSH32(esp, 0x007CD2C4u); /* 0x00407E8E: push 0x7cd2c4 */
    ecx = esp + 0x19C8; /* 0x00407E93: lea ecx, [esp + 0x19c8] */
    MEM32(esp + 0x4C) = 0x42700000u; /* 0x00407E9A: mov dword ptr [esp + 0x4c], 0x42700000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407EA2: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC5u); /* 0x00407EA7: mov byte ptr [esp + 0x2128], 0xc5 */
    eax = esp + 0x4C; /* 0x00407EAF: lea eax, [esp + 0x4c] */
    PUSH32(esp, eax); /* 0x00407EB3: push eax */
    PUSH32(esp, 0x007CD31Cu); /* 0x00407EB4: push 0x7cd31c */
    ecx = esp + 0x19EC; /* 0x00407EB9: lea ecx, [esp + 0x19ec] */
    MEM32(esp + 0x54) = 5; /* 0x00407EC0: mov dword ptr [esp + 0x54], 5 */
    RECOMP_CALL(sub_006B9250); /* 0x00407EC8: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC6u); /* 0x00407ECD: mov byte ptr [esp + 0x2128], 0xc6 */
    eax = esp + 0x54; /* 0x00407ED5: lea eax, [esp + 0x54] */
    MEM32(esp + 0x54) = 0x420C0000u; /* 0x00407ED9: mov dword ptr [esp + 0x54], 0x420c0000 */
    PUSH32(esp, eax); /* 0x00407EE1: push eax */
    PUSH32(esp, 0x007CD304u); /* 0x00407EE2: push 0x7cd304 */
    ecx = esp + 0x1A10; /* 0x00407EE7: lea ecx, [esp + 0x1a10] */
    RECOMP_CALL(sub_006B9110); /* 0x00407EEE: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC7u); /* 0x00407EF3: mov byte ptr [esp + 0x2128], 0xc7 */
    eax = esp + 0x5C; /* 0x00407EFB: lea eax, [esp + 0x5c] */
    PUSH32(esp, eax); /* 0x00407EFF: push eax */
    PUSH32(esp, ecx); /* 0x00407F00: push ecx */
    ecx = esp + 0x1A34; /* 0x00407F01: lea ecx, [esp + 0x1a34] */
    MEM32(esp + 0x64) = 0x1388u; /* 0x00407F08: mov dword ptr [esp + 0x64], 0x1388 */
    RECOMP_CALL(sub_006B96F0); /* 0x00407F10: call 0x6b96f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC8u); /* 0x00407F15: mov byte ptr [esp + 0x2128], 0xc8 */
    eax = esp + 0x64; /* 0x00407F1D: lea eax, [esp + 0x64] */
    PUSH32(esp, eax); /* 0x00407F21: push eax */
    PUSH32(esp, 0x007CD350u); /* 0x00407F22: push 0x7cd350 */
    ecx = esp + 0x1A58; /* 0x00407F27: lea ecx, [esp + 0x1a58] */
    MEM32(esp + 0x6C) = 3; /* 0x00407F2E: mov dword ptr [esp + 0x6c], 3 */
    RECOMP_CALL(sub_006B9250); /* 0x00407F36: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xC9u); /* 0x00407F3B: mov byte ptr [esp + 0x2128], 0xc9 */
    eax = esp + 0x6C; /* 0x00407F43: lea eax, [esp + 0x6c] */
    PUSH32(esp, eax); /* 0x00407F47: push eax */
    PUSH32(esp, 0x007CD370u); /* 0x00407F48: push 0x7cd370 */
    ecx = esp + 0x1A7C; /* 0x00407F4D: lea ecx, [esp + 0x1a7c] */
    MEM32(esp + 0x74) = 0; /* 0x00407F54: mov dword ptr [esp + 0x74], 0 */
    RECOMP_CALL(sub_006B9250); /* 0x00407F5C: call 0x6b9250 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCAu); /* 0x00407F61: mov byte ptr [esp + 0x2128], 0xca */
    eax = esp + 0x74; /* 0x00407F69: lea eax, [esp + 0x74] */
    PUSH32(esp, eax); /* 0x00407F6D: push eax */
    PUSH32(esp, 0x007CD38Cu); /* 0x00407F6E: push 0x7cd38c */
    ecx = esp + 0x1AA0; /* 0x00407F73: lea ecx, [esp + 0x1aa0] */
    MEM32(esp + 0x7C) = 0x41F00000u; /* 0x00407F7A: mov dword ptr [esp + 0x7c], 0x41f00000 */
    RECOMP_CALL(sub_006B9110); /* 0x00407F82: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCBu); /* 0x00407F87: mov byte ptr [esp + 0x2128], 0xcb */
    eax = esp + 0x7C; /* 0x00407F8F: lea eax, [esp + 0x7c] */
    PUSH32(esp, eax); /* 0x00407F93: push eax */
    PUSH32(esp, ecx); /* 0x00407F94: push ecx */
    ecx = esp + 0x1AC4; /* 0x00407F95: lea ecx, [esp + 0x1ac4] */
    MEM32(esp + 0x84) = 0x40800000u; /* 0x00407F9C: mov dword ptr [esp + 0x84], 0x40800000 */
    RECOMP_CALL(sub_006B9780); /* 0x00407FA7: call 0x6b9780 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCCu); /* 0x00407FAC: mov byte ptr [esp + 0x2128], 0xcc */
    eax = esp + 0x84; /* 0x00407FB4: lea eax, [esp + 0x84] */
    PUSH32(esp, eax); /* 0x00407FBB: push eax */
    PUSH32(esp, ecx); /* 0x00407FBC: push ecx */
    ecx = esp + 0x1AE8; /* 0x00407FBD: lea ecx, [esp + 0x1ae8] */
    MEM32(esp + 0x8C) = 0x411B3333u; /* 0x00407FC4: mov dword ptr [esp + 0x8c], 0x411b3333 */
    RECOMP_CALL(sub_006B9810); /* 0x00407FCF: call 0x6b9810 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCDu); /* 0x00407FD4: mov byte ptr [esp + 0x2128], 0xcd */
    eax = esp + 0x8C; /* 0x00407FDC: lea eax, [esp + 0x8c] */
    PUSH32(esp, eax); /* 0x00407FE3: push eax */
    PUSH32(esp, 0x007E0A5Cu); /* 0x00407FE4: push 0x7e0a5c */
    ecx = esp + 0x1B0C; /* 0x00407FE9: lea ecx, [esp + 0x1b0c] */
    MEM32(esp + 0x94) = 0x420B999Au; /* 0x00407FF0: mov dword ptr [esp + 0x94], 0x420b999a */
    RECOMP_CALL(sub_006B9110); /* 0x00407FFB: call 0x6b9110 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCEu); /* 0x00408000: mov byte ptr [esp + 0x2128], 0xce */
    eax = esp + 0x94; /* 0x00408008: lea eax, [esp + 0x94] */
    PUSH32(esp, eax); /* 0x0040800F: push eax */
    PUSH32(esp, ecx); /* 0x00408010: push ecx */
    ecx = esp + 0x1B30; /* 0x00408011: lea ecx, [esp + 0x1b30] */
    MEM32(esp + 0x9C) = 0x414E6666u; /* 0x00408018: mov dword ptr [esp + 0x9c], 0x414e6666 */
    RECOMP_CALL(sub_006B98A0); /* 0x00408023: call 0x6b98a0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCFu); /* 0x00408028: mov byte ptr [esp + 0x2128], 0xcf */
    eax = esp + 0x1A; /* 0x00408030: lea eax, [esp + 0x1a] */
    PUSH32(esp, eax); /* 0x00408034: push eax */
    PUSH32(esp, 0x007DED14u); /* 0x00408035: push 0x7ded14 */
    ecx = esp + 0x1B54; /* 0x0040803A: lea ecx, [esp + 0x1b54] */
    MEM8(esp + 0x22) = (uint8_t)(1); /* 0x00408041: mov byte ptr [esp + 0x22], 1 */
    RECOMP_CALL(sub_006B91C0); /* 0x00408046: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD0u); /* 0x0040804B: mov byte ptr [esp + 0x2128], 0xd0 */
    eax = esp + 0x2A; /* 0x00408053: lea eax, [esp + 0x2a] */
    MEM8(esp + 0x2A) = (uint8_t)(1); /* 0x00408057: mov byte ptr [esp + 0x2a], 1 */
    PUSH32(esp, eax); /* 0x0040805C: push eax */
    PUSH32(esp, 0x007DED2Cu); /* 0x0040805D: push 0x7ded2c */
    ecx = esp + 0x1B78; /* 0x00408062: lea ecx, [esp + 0x1b78] */
    RECOMP_CALL(sub_006B91C0); /* 0x00408069: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD1u); /* 0x0040806E: mov byte ptr [esp + 0x2128], 0xd1 */
    eax = esp + 0x9C; /* 0x00408076: lea eax, [esp + 0x9c] */
    PUSH32(esp, eax); /* 0x0040807D: push eax */
    eax = esp + 0xA8; /* 0x0040807E: lea eax, [esp + 0xa8] */
    MEM32(esp + 0xA0) = 0x42C80000u; /* 0x00408085: mov dword ptr [esp + 0xa0], 0x42c80000 */
    PUSH32(esp, eax); /* 0x00408090: push eax */
    eax = esp + 0xB4; /* 0x00408091: lea eax, [esp + 0xb4] */
    MEM32(esp + 0xAC) = 0x40000000u; /* 0x00408098: mov dword ptr [esp + 0xac], 0x40000000 */
    PUSH32(esp, eax); /* 0x004080A3: push eax */
    ecx = esp + 0x470; /* 0x004080A4: lea ecx, [esp + 0x470] */
    MEM32(esp + 0xB8) = 0x40800000u; /* 0x004080AB: mov dword ptr [esp + 0xb8], 0x40800000 */
    RECOMP_CALL(sub_005F5C10); /* 0x004080B6: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD2u); /* 0x004080BB: mov byte ptr [esp + 0x2128], 0xd2 */
    ecx = esp + 0x724; /* 0x004080C3: lea ecx, [esp + 0x724] */
    PUSH32(esp, 0x007E70E4u); /* 0x004080CA: push 0x7e70e4 */
    RECOMP_CALL(sub_00409FA0); /* 0x004080CF: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD3u); /* 0x004080D4: mov byte ptr [esp + 0x2128], 0xd3 */
    ecx = esp + 0x10; /* 0x004080DC: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004080E0: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x004080E5: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004080E9: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004080EA: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004080EF: push ecx */
    ecx = esp + 0x16; /* 0x004080F0: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004080F4: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004080F9: push -1 */
    PUSH32(esp, 0); /* 0x004080FB: push 0 */
    eax = esp + 0x72C; /* 0x004080FD: lea eax, [esp + 0x72c] */
    MEM32(esp + 0x1BAC) = 0; /* 0x00408104: mov dword ptr [esp + 0x1bac], 0 */
    MEM32(esp + 0x1BB0) = 0; /* 0x0040810F: mov dword ptr [esp + 0x1bb0], 0 */
    ecx = esp + 0x1B9C; /* 0x0040811A: lea ecx, [esp + 0x1b9c] */
    PUSH32(esp, eax); /* 0x00408121: push eax */
    MEM32(esp + 0x1BB4) = 0xFu; /* 0x00408122: mov dword ptr [esp + 0x1bb4], 0xf */
    MEM32(esp + 0x1BB0) = 0; /* 0x0040812D: mov dword ptr [esp + 0x1bb0], 0 */
    MEM8(esp + 0x1BA0) = (uint8_t)(0); /* 0x00408138: mov byte ptr [esp + 0x1ba0], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00408140: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD4u); /* 0x00408145: mov byte ptr [esp + 0x2128], 0xd4 */
    eax = esp + 0x464; /* 0x0040814D: lea eax, [esp + 0x464] */
    PUSH32(esp, eax); /* 0x00408154: push eax */
    ecx = esp + 0x1BB0; /* 0x00408155: lea ecx, [esp + 0x1bb0] */
    RECOMP_CALL(sub_0041A380); /* 0x0040815C: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD7u); /* 0x00408161: mov byte ptr [esp + 0x2128], 0xd7 */
    /* cmp MEM32(esp + 0x738), 0x10u */ /* 0x00408169: cmp dword ptr [esp + 0x738], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x738)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408198; /* 0x00408171: jb 0x408198 */
L_00408173:
    esi = MEM32(esp + 0x724); /* 0x00408173: mov esi, dword ptr [esp + 0x724] */
    ecx = esp + 0x10; /* 0x0040817A: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040817E: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408183: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408184: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408189: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040818D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408192: push esi */
    RECOMP_ICALL(edi); /* 0x00408193: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408195: add esp, 4 */
    _flag_k = FK_ADD;
L_00408198:
    MEM32(esp + 0x738) = 0xFu; /* 0x00408198: mov dword ptr [esp + 0x738], 0xf */
    MEM32(esp + 0x734) = 0; /* 0x004081A3: mov dword ptr [esp + 0x734], 0 */
    MEM8(esp + 0x724) = (uint8_t)(0); /* 0x004081AE: mov byte ptr [esp + 0x724], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xD8u); /* 0x004081B6: mov byte ptr [esp + 0x2128], 0xd8 */
    ecx = esp + 0x464; /* 0x004081BE: lea ecx, [esp + 0x464] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004081C5: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xB4; /* 0x004081CA: lea eax, [esp + 0xb4] */
    MEM32(esp + 0xB4) = 0x42C80000u; /* 0x004081D1: mov dword ptr [esp + 0xb4], 0x42c80000 */
    PUSH32(esp, eax); /* 0x004081DC: push eax */
    eax = esp + 0xC0; /* 0x004081DD: lea eax, [esp + 0xc0] */
    MEM32(esp + 0xC0) = 0x40000000u; /* 0x004081E4: mov dword ptr [esp + 0xc0], 0x40000000 */
    PUSH32(esp, eax); /* 0x004081EF: push eax */
    eax = esp + 0xCC; /* 0x004081F0: lea eax, [esp + 0xcc] */
    MEM32(esp + 0xCC) = 0x40000000u; /* 0x004081F7: mov dword ptr [esp + 0xcc], 0x40000000 */
    PUSH32(esp, eax); /* 0x00408202: push eax */
    ecx = esp + 0x410; /* 0x00408203: lea ecx, [esp + 0x410] */
    RECOMP_CALL(sub_005F5C10); /* 0x0040820A: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xD9u); /* 0x0040820F: mov byte ptr [esp + 0x2128], 0xd9 */
    ecx = esp + 0x5D4; /* 0x00408217: lea ecx, [esp + 0x5d4] */
    PUSH32(esp, 0x007E70A8u); /* 0x0040821E: push 0x7e70a8 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408223: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xDAu); /* 0x00408228: mov byte ptr [esp + 0x2128], 0xda */
    ecx = esp + 0x10; /* 0x00408230: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408234: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00408239: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x0040823D: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x0040823E: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408243: push ecx */
    ecx = esp + 0x16; /* 0x00408244: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x00408248: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040824D: push -1 */
    PUSH32(esp, 0); /* 0x0040824F: push 0 */
    eax = esp + 0x5DC; /* 0x00408251: lea eax, [esp + 0x5dc] */
    MEM32(esp + 0x1BD0) = 0; /* 0x00408258: mov dword ptr [esp + 0x1bd0], 0 */
    MEM32(esp + 0x1BD4) = 0; /* 0x00408263: mov dword ptr [esp + 0x1bd4], 0 */
    ecx = esp + 0x1BC0; /* 0x0040826E: lea ecx, [esp + 0x1bc0] */
    PUSH32(esp, eax); /* 0x00408275: push eax */
    MEM32(esp + 0x1BD8) = 0xFu; /* 0x00408276: mov dword ptr [esp + 0x1bd8], 0xf */
    MEM32(esp + 0x1BD4) = 0; /* 0x00408281: mov dword ptr [esp + 0x1bd4], 0 */
    MEM8(esp + 0x1BC4) = (uint8_t)(0); /* 0x0040828C: mov byte ptr [esp + 0x1bc4], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00408294: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xDBu); /* 0x00408299: mov byte ptr [esp + 0x2128], 0xdb */
    eax = esp + 0x404; /* 0x004082A1: lea eax, [esp + 0x404] */
    PUSH32(esp, eax); /* 0x004082A8: push eax */
    ecx = esp + 0x1BD4; /* 0x004082A9: lea ecx, [esp + 0x1bd4] */
    RECOMP_CALL(sub_0041A380); /* 0x004082B0: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xDEu); /* 0x004082B5: mov byte ptr [esp + 0x2128], 0xde */
    /* cmp MEM32(esp + 0x5E8), 0x10u */ /* 0x004082BD: cmp dword ptr [esp + 0x5e8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x5E8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004082EC; /* 0x004082C5: jb 0x4082ec */
L_004082C7:
    esi = MEM32(esp + 0x5D4); /* 0x004082C7: mov esi, dword ptr [esp + 0x5d4] */
    ecx = esp + 0x10; /* 0x004082CE: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004082D2: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004082D7: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004082D8: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x004082DD: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004082E1: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004082E6: push esi */
    RECOMP_ICALL(edi); /* 0x004082E7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004082E9: add esp, 4 */
    _flag_k = FK_ADD;
L_004082EC:
    MEM32(esp + 0x5E8) = 0xFu; /* 0x004082EC: mov dword ptr [esp + 0x5e8], 0xf */
    MEM32(esp + 0x5E4) = 0; /* 0x004082F7: mov dword ptr [esp + 0x5e4], 0 */
    MEM8(esp + 0x5D4) = (uint8_t)(0); /* 0x00408302: mov byte ptr [esp + 0x5d4], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xDFu); /* 0x0040830A: mov byte ptr [esp + 0x2128], 0xdf */
    ecx = esp + 0x404; /* 0x00408312: lea ecx, [esp + 0x404] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408319: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xCC; /* 0x0040831E: lea eax, [esp + 0xcc] */
    MEM32(esp + 0xCC) = 0x3F800000u; /* 0x00408325: mov dword ptr [esp + 0xcc], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00408330: push eax */
    eax = esp + 0xD8; /* 0x00408331: lea eax, [esp + 0xd8] */
    MEM32(esp + 0xD8) = 0x38D1B717u; /* 0x00408338: mov dword ptr [esp + 0xd8], 0x38d1b717 */
    PUSH32(esp, eax); /* 0x00408343: push eax */
    eax = esp + 0xE4; /* 0x00408344: lea eax, [esp + 0xe4] */
    MEM32(esp + 0xE4) = 0x3D343958u; /* 0x0040834B: mov dword ptr [esp + 0xe4], 0x3d343958 */
    PUSH32(esp, eax); /* 0x00408356: push eax */
    ecx = esp + 0x4D0; /* 0x00408357: lea ecx, [esp + 0x4d0] */
    RECOMP_CALL(sub_005F5C10); /* 0x0040835E: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE0u); /* 0x00408363: mov byte ptr [esp + 0x2128], 0xe0 */
    ecx = esp + 0x6C4; /* 0x0040836B: lea ecx, [esp + 0x6c4] */
    PUSH32(esp, 0x007FD8F4u); /* 0x00408372: push 0x7fd8f4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408377: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE1u); /* 0x0040837C: mov byte ptr [esp + 0x2128], 0xe1 */
    ecx = esp + 0x10; /* 0x00408384: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408388: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x0040838D: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00408391: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x00408392: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408397: push ecx */
    ecx = esp + 0x16; /* 0x00408398: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x0040839C: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004083A1: push -1 */
    PUSH32(esp, 0); /* 0x004083A3: push 0 */
    eax = esp + 0x6CC; /* 0x004083A5: lea eax, [esp + 0x6cc] */
    MEM32(esp + 0x1BF4) = 0; /* 0x004083AC: mov dword ptr [esp + 0x1bf4], 0 */
    MEM32(esp + 0x1BF8) = 0; /* 0x004083B7: mov dword ptr [esp + 0x1bf8], 0 */
    ecx = esp + 0x1BE4; /* 0x004083C2: lea ecx, [esp + 0x1be4] */
    PUSH32(esp, eax); /* 0x004083C9: push eax */
    MEM32(esp + 0x1BFC) = 0xFu; /* 0x004083CA: mov dword ptr [esp + 0x1bfc], 0xf */
    MEM32(esp + 0x1BF8) = 0; /* 0x004083D5: mov dword ptr [esp + 0x1bf8], 0 */
    MEM8(esp + 0x1BE8) = (uint8_t)(0); /* 0x004083E0: mov byte ptr [esp + 0x1be8], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x004083E8: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE2u); /* 0x004083ED: mov byte ptr [esp + 0x2128], 0xe2 */
    eax = esp + 0x4C4; /* 0x004083F5: lea eax, [esp + 0x4c4] */
    PUSH32(esp, eax); /* 0x004083FC: push eax */
    ecx = esp + 0x1BF8; /* 0x004083FD: lea ecx, [esp + 0x1bf8] */
    RECOMP_CALL(sub_0041A380); /* 0x00408404: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE5u); /* 0x00408409: mov byte ptr [esp + 0x2128], 0xe5 */
    /* cmp MEM32(esp + 0x6D8), 0x10u */ /* 0x00408411: cmp dword ptr [esp + 0x6d8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6D8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408440; /* 0x00408419: jb 0x408440 */
L_0040841B:
    esi = MEM32(esp + 0x6C4); /* 0x0040841B: mov esi, dword ptr [esp + 0x6c4] */
    ecx = esp + 0x10; /* 0x00408422: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408426: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040842B: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x0040842C: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408431: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408435: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040843A: push esi */
    RECOMP_ICALL(edi); /* 0x0040843B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040843D: add esp, 4 */
    _flag_k = FK_ADD;
L_00408440:
    MEM32(esp + 0x6D8) = 0xFu; /* 0x00408440: mov dword ptr [esp + 0x6d8], 0xf */
    MEM32(esp + 0x6D4) = 0; /* 0x0040844B: mov dword ptr [esp + 0x6d4], 0 */
    MEM8(esp + 0x6C4) = (uint8_t)(0); /* 0x00408456: mov byte ptr [esp + 0x6c4], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xE6u); /* 0x0040845E: mov byte ptr [esp + 0x2128], 0xe6 */
    ecx = esp + 0x4C4; /* 0x00408466: lea ecx, [esp + 0x4c4] */
    RECOMP_CALL(sub_0041A4B0); /* 0x0040846D: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xE4; /* 0x00408472: lea eax, [esp + 0xe4] */
    MEM32(esp + 0xE4) = 0x3F800000u; /* 0x00408479: mov dword ptr [esp + 0xe4], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00408484: push eax */
    eax = esp + 0xF0; /* 0x00408485: lea eax, [esp + 0xf0] */
    MEM32(esp + 0xF0) = 0x38D1B717u; /* 0x0040848C: mov dword ptr [esp + 0xf0], 0x38d1b717 */
    PUSH32(esp, eax); /* 0x00408497: push eax */
    eax = esp + 0xFC; /* 0x00408498: lea eax, [esp + 0xfc] */
    MEM32(esp + 0xFC) = 0x3D4CCCCDu; /* 0x0040849F: mov dword ptr [esp + 0xfc], 0x3d4ccccd */
    PUSH32(esp, eax); /* 0x004084AA: push eax */
    ecx = esp + 0x428; /* 0x004084AB: lea ecx, [esp + 0x428] */
    RECOMP_CALL(sub_005F5C10); /* 0x004084B2: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE7u); /* 0x004084B7: mov byte ptr [esp + 0x2128], 0xe7 */
    ecx = esp + 0x604; /* 0x004084BF: lea ecx, [esp + 0x604] */
    PUSH32(esp, 0x007FD8FCu); /* 0x004084C6: push 0x7fd8fc */
    RECOMP_CALL(sub_00409FA0); /* 0x004084CB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE8u); /* 0x004084D0: mov byte ptr [esp + 0x2128], 0xe8 */
    ecx = esp + 0x10; /* 0x004084D8: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004084DC: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x004084E1: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004084E5: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004084E6: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004084EB: push ecx */
    ecx = esp + 0x16; /* 0x004084EC: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004084F0: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004084F5: push -1 */
    PUSH32(esp, 0); /* 0x004084F7: push 0 */
    eax = esp + 0x60C; /* 0x004084F9: lea eax, [esp + 0x60c] */
    MEM32(esp + 0x1C18) = 0; /* 0x00408500: mov dword ptr [esp + 0x1c18], 0 */
    MEM32(esp + 0x1C1C) = 0; /* 0x0040850B: mov dword ptr [esp + 0x1c1c], 0 */
    ecx = esp + 0x1C08; /* 0x00408516: lea ecx, [esp + 0x1c08] */
    PUSH32(esp, eax); /* 0x0040851D: push eax */
    MEM32(esp + 0x1C20) = 0xFu; /* 0x0040851E: mov dword ptr [esp + 0x1c20], 0xf */
    MEM32(esp + 0x1C1C) = 0; /* 0x00408529: mov dword ptr [esp + 0x1c1c], 0 */
    MEM8(esp + 0x1C0C) = (uint8_t)(0); /* 0x00408534: mov byte ptr [esp + 0x1c0c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0040853C: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xE9u); /* 0x00408541: mov byte ptr [esp + 0x2128], 0xe9 */
    eax = esp + 0x41C; /* 0x00408549: lea eax, [esp + 0x41c] */
    PUSH32(esp, eax); /* 0x00408550: push eax */
    ecx = esp + 0x1C1C; /* 0x00408551: lea ecx, [esp + 0x1c1c] */
    RECOMP_CALL(sub_0041A380); /* 0x00408558: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xECu); /* 0x0040855D: mov byte ptr [esp + 0x2128], 0xec */
    /* cmp MEM32(esp + 0x618), 0x10u */ /* 0x00408565: cmp dword ptr [esp + 0x618], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x618)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408594; /* 0x0040856D: jb 0x408594 */
L_0040856F:
    esi = MEM32(esp + 0x604); /* 0x0040856F: mov esi, dword ptr [esp + 0x604] */
    ecx = esp + 0x10; /* 0x00408576: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040857A: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040857F: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408580: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408585: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408589: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040858E: push esi */
    RECOMP_ICALL(edi); /* 0x0040858F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408591: add esp, 4 */
    _flag_k = FK_ADD;
L_00408594:
    MEM32(esp + 0x618) = 0xFu; /* 0x00408594: mov dword ptr [esp + 0x618], 0xf */
    MEM32(esp + 0x614) = 0; /* 0x0040859F: mov dword ptr [esp + 0x614], 0 */
    MEM8(esp + 0x604) = (uint8_t)(0); /* 0x004085AA: mov byte ptr [esp + 0x604], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xEDu); /* 0x004085B2: mov byte ptr [esp + 0x2128], 0xed */
    ecx = esp + 0x41C; /* 0x004085BA: lea ecx, [esp + 0x41c] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004085C1: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xFC; /* 0x004085C6: lea eax, [esp + 0xfc] */
    MEM32(esp + 0xFC) = 0x41200000u; /* 0x004085CD: mov dword ptr [esp + 0xfc], 0x41200000 */
    PUSH32(esp, eax); /* 0x004085D8: push eax */
    eax = esp + 0x108; /* 0x004085D9: lea eax, [esp + 0x108] */
    MEM32(esp + 0x108) = 0; /* 0x004085E0: mov dword ptr [esp + 0x108], 0 */
    PUSH32(esp, eax); /* 0x004085EB: push eax */
    eax = esp + 0x114; /* 0x004085EC: lea eax, [esp + 0x114] */
    MEM32(esp + 0x114) = 0x3F800000u; /* 0x004085F3: mov dword ptr [esp + 0x114], 0x3f800000 */
    PUSH32(esp, eax); /* 0x004085FE: push eax */
    ecx = esp + 0x488; /* 0x004085FF: lea ecx, [esp + 0x488] */
    RECOMP_CALL(sub_005F5C10); /* 0x00408606: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xEEu); /* 0x0040860B: mov byte ptr [esp + 0x2128], 0xee */
    ecx = esp + 0x76C; /* 0x00408613: lea ecx, [esp + 0x76c] */
    PUSH32(esp, 0x007FD930u); /* 0x0040861A: push 0x7fd930 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040861F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xEFu); /* 0x00408624: mov byte ptr [esp + 0x2128], 0xef */
    ecx = esp + 0x10; /* 0x0040862C: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408630: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00408635: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x00408639: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x0040863A: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040863F: push ecx */
    ecx = esp + 0x16; /* 0x00408640: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x00408644: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00408649: push -1 */
    PUSH32(esp, 0); /* 0x0040864B: push 0 */
    eax = esp + 0x774; /* 0x0040864D: lea eax, [esp + 0x774] */
    MEM32(esp + 0x1C3C) = 0; /* 0x00408654: mov dword ptr [esp + 0x1c3c], 0 */
    MEM32(esp + 0x1C40) = 0; /* 0x0040865F: mov dword ptr [esp + 0x1c40], 0 */
    ecx = esp + 0x1C2C; /* 0x0040866A: lea ecx, [esp + 0x1c2c] */
    PUSH32(esp, eax); /* 0x00408671: push eax */
    MEM32(esp + 0x1C44) = 0xFu; /* 0x00408672: mov dword ptr [esp + 0x1c44], 0xf */
    MEM32(esp + 0x1C40) = 0; /* 0x0040867D: mov dword ptr [esp + 0x1c40], 0 */
    MEM8(esp + 0x1C30) = (uint8_t)(0); /* 0x00408688: mov byte ptr [esp + 0x1c30], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00408690: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xF0u); /* 0x00408695: mov byte ptr [esp + 0x2128], 0xf0 */
    eax = esp + 0x47C; /* 0x0040869D: lea eax, [esp + 0x47c] */
    PUSH32(esp, eax); /* 0x004086A4: push eax */
    ecx = esp + 0x1C40; /* 0x004086A5: lea ecx, [esp + 0x1c40] */
    RECOMP_CALL(sub_0041A380); /* 0x004086AC: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xF3u); /* 0x004086B1: mov byte ptr [esp + 0x2128], 0xf3 */
    /* cmp MEM32(esp + 0x780), 0x10u */ /* 0x004086B9: cmp dword ptr [esp + 0x780], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x780)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004086E8; /* 0x004086C1: jb 0x4086e8 */
L_004086C3:
    esi = MEM32(esp + 0x76C); /* 0x004086C3: mov esi, dword ptr [esp + 0x76c] */
    ecx = esp + 0x10; /* 0x004086CA: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004086CE: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004086D3: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004086D4: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x004086D9: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004086DD: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004086E2: push esi */
    RECOMP_ICALL(edi); /* 0x004086E3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004086E5: add esp, 4 */
    _flag_k = FK_ADD;
L_004086E8:
    MEM32(esp + 0x780) = 0xFu; /* 0x004086E8: mov dword ptr [esp + 0x780], 0xf */
    MEM32(esp + 0x77C) = 0; /* 0x004086F3: mov dword ptr [esp + 0x77c], 0 */
    MEM8(esp + 0x76C) = (uint8_t)(0); /* 0x004086FE: mov byte ptr [esp + 0x76c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xF4u); /* 0x00408706: mov byte ptr [esp + 0x2128], 0xf4 */
    ecx = esp + 0x47C; /* 0x0040870E: lea ecx, [esp + 0x47c] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408715: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x114; /* 0x0040871A: lea eax, [esp + 0x114] */
    MEM32(esp + 0x114) = 0x3F800000u; /* 0x00408721: mov dword ptr [esp + 0x114], 0x3f800000 */
    PUSH32(esp, eax); /* 0x0040872C: push eax */
    eax = esp + 0x120; /* 0x0040872D: lea eax, [esp + 0x120] */
    MEM32(esp + 0x120) = 0x38D1B717u; /* 0x00408734: mov dword ptr [esp + 0x120], 0x38d1b717 */
    PUSH32(esp, eax); /* 0x0040873F: push eax */
    eax = esp + 0x12C; /* 0x00408740: lea eax, [esp + 0x12c] */
    MEM32(esp + 0x12C) = 0x3E343958u; /* 0x00408747: mov dword ptr [esp + 0x12c], 0x3e343958 */
    PUSH32(esp, eax); /* 0x00408752: push eax */
    ecx = esp + 0x398; /* 0x00408753: lea ecx, [esp + 0x398] */
    RECOMP_CALL(sub_005F5C10); /* 0x0040875A: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xF5u); /* 0x0040875F: mov byte ptr [esp + 0x2128], 0xf5 */
    ecx = esp + 0x634; /* 0x00408767: lea ecx, [esp + 0x634] */
    PUSH32(esp, 0x007FD940u); /* 0x0040876E: push 0x7fd940 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408773: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xF6u); /* 0x00408778: mov byte ptr [esp + 0x2128], 0xf6 */
    ecx = esp + 0x10; /* 0x00408780: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408784: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x00408789: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x0040878D: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x0040878E: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408793: push ecx */
    ecx = esp + 0x16; /* 0x00408794: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x00408798: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040879D: push -1 */
    PUSH32(esp, 0); /* 0x0040879F: push 0 */
    eax = esp + 0x63C; /* 0x004087A1: lea eax, [esp + 0x63c] */
    MEM32(esp + 0x1C60) = 0; /* 0x004087A8: mov dword ptr [esp + 0x1c60], 0 */
    MEM32(esp + 0x1C64) = 0; /* 0x004087B3: mov dword ptr [esp + 0x1c64], 0 */
    ecx = esp + 0x1C50; /* 0x004087BE: lea ecx, [esp + 0x1c50] */
    PUSH32(esp, eax); /* 0x004087C5: push eax */
    MEM32(esp + 0x1C68) = 0xFu; /* 0x004087C6: mov dword ptr [esp + 0x1c68], 0xf */
    MEM32(esp + 0x1C64) = 0; /* 0x004087D1: mov dword ptr [esp + 0x1c64], 0 */
    MEM8(esp + 0x1C54) = (uint8_t)(0); /* 0x004087DC: mov byte ptr [esp + 0x1c54], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x004087E4: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xF7u); /* 0x004087E9: mov byte ptr [esp + 0x2128], 0xf7 */
    eax = esp + 0x38C; /* 0x004087F1: lea eax, [esp + 0x38c] */
    PUSH32(esp, eax); /* 0x004087F8: push eax */
    ecx = esp + 0x1C64; /* 0x004087F9: lea ecx, [esp + 0x1c64] */
    RECOMP_CALL(sub_0041A380); /* 0x00408800: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFAu); /* 0x00408805: mov byte ptr [esp + 0x2128], 0xfa */
    /* cmp MEM32(esp + 0x648), 0x10u */ /* 0x0040880D: cmp dword ptr [esp + 0x648], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x648)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040883C; /* 0x00408815: jb 0x40883c */
L_00408817:
    esi = MEM32(esp + 0x634); /* 0x00408817: mov esi, dword ptr [esp + 0x634] */
    ecx = esp + 0x10; /* 0x0040881E: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408822: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408827: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408828: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x0040882D: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408831: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408836: push esi */
    RECOMP_ICALL(edi); /* 0x00408837: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408839: add esp, 4 */
    _flag_k = FK_ADD;
L_0040883C:
    MEM32(esp + 0x648) = 0xFu; /* 0x0040883C: mov dword ptr [esp + 0x648], 0xf */
    MEM32(esp + 0x644) = 0; /* 0x00408847: mov dword ptr [esp + 0x644], 0 */
    MEM8(esp + 0x634) = (uint8_t)(0); /* 0x00408852: mov byte ptr [esp + 0x634], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xFBu); /* 0x0040885A: mov byte ptr [esp + 0x2128], 0xfb */
    ecx = esp + 0x38C; /* 0x00408862: lea ecx, [esp + 0x38c] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408869: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x12C; /* 0x0040886E: lea eax, [esp + 0x12c] */
    MEM32(esp + 0x12C) = 0x3F800000u; /* 0x00408875: mov dword ptr [esp + 0x12c], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00408880: push eax */
    eax = esp + 0x138; /* 0x00408881: lea eax, [esp + 0x138] */
    MEM32(esp + 0x138) = 0x38D1B717u; /* 0x00408888: mov dword ptr [esp + 0x138], 0x38d1b717 */
    PUSH32(esp, eax); /* 0x00408893: push eax */
    eax = esp + 0x144; /* 0x00408894: lea eax, [esp + 0x144] */
    MEM32(esp + 0x144) = 0x3DCCCCCDu; /* 0x0040889B: mov dword ptr [esp + 0x144], 0x3dcccccd */
    PUSH32(esp, eax); /* 0x004088A6: push eax */
    ecx = esp + 0x3A4; /* 0x004088A7: lea ecx, [esp + 0x3a4] */
    RECOMP_CALL(sub_005F5C10); /* 0x004088AE: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFCu); /* 0x004088B3: mov byte ptr [esp + 0x2128], 0xfc */
    ecx = esp + 0x58C; /* 0x004088BB: lea ecx, [esp + 0x58c] */
    PUSH32(esp, 0x007FD904u); /* 0x004088C2: push 0x7fd904 */
    RECOMP_CALL(sub_00409FA0); /* 0x004088C7: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFDu); /* 0x004088CC: mov byte ptr [esp + 0x2128], 0xfd */
    ecx = esp + 0x10; /* 0x004088D4: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004088D8: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x11; /* 0x004088DD: lea eax, [esp + 0x11] */
    PUSH32(esp, eax); /* 0x004088E1: push eax */
    RECOMP_CALL(sub_00419B30); /* 0x004088E2: call 0x419b30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004088E7: push ecx */
    ecx = esp + 0x16; /* 0x004088E8: lea ecx, [esp + 0x16] */
    RECOMP_CALL(sub_00419B20); /* 0x004088EC: call 0x419b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x004088F1: push -1 */
    PUSH32(esp, 0); /* 0x004088F3: push 0 */
    eax = esp + 0x594; /* 0x004088F5: lea eax, [esp + 0x594] */
    MEM32(esp + 0x1C84) = 0; /* 0x004088FC: mov dword ptr [esp + 0x1c84], 0 */
    MEM32(esp + 0x1C88) = 0; /* 0x00408907: mov dword ptr [esp + 0x1c88], 0 */
    ecx = esp + 0x1C74; /* 0x00408912: lea ecx, [esp + 0x1c74] */
    PUSH32(esp, eax); /* 0x00408919: push eax */
    MEM32(esp + 0x1C8C) = 0xFu; /* 0x0040891A: mov dword ptr [esp + 0x1c8c], 0xf */
    MEM32(esp + 0x1C88) = 0; /* 0x00408925: mov dword ptr [esp + 0x1c88], 0 */
    MEM8(esp + 0x1C78) = (uint8_t)(0); /* 0x00408930: mov byte ptr [esp + 0x1c78], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00408938: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFEu); /* 0x0040893D: mov byte ptr [esp + 0x2128], 0xfe */
    eax = esp + 0x398; /* 0x00408945: lea eax, [esp + 0x398] */
    PUSH32(esp, eax); /* 0x0040894C: push eax */
    ecx = esp + 0x1C88; /* 0x0040894D: lea ecx, [esp + 0x1c88] */
    RECOMP_CALL(sub_0041A380); /* 0x00408954: call 0x41a380 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x2128) = 0x101u; /* 0x00408959: mov dword ptr [esp + 0x2128], 0x101 */
    /* cmp MEM32(esp + 0x5A0), 0x10u */ /* 0x00408964: cmp dword ptr [esp + 0x5a0], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x5A0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408993; /* 0x0040896C: jb 0x408993 */
L_0040896E:
    esi = MEM32(esp + 0x58C); /* 0x0040896E: mov esi, dword ptr [esp + 0x58c] */
    ecx = esp + 0x10; /* 0x00408975: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408979: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040897E: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x0040897F: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408984: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408988: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040898D: push esi */
    RECOMP_ICALL(edi); /* 0x0040898E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408990: add esp, 4 */
    _flag_k = FK_ADD;
L_00408993:
    MEM32(esp + 0x5A0) = 0xFu; /* 0x00408993: mov dword ptr [esp + 0x5a0], 0xf */
    MEM32(esp + 0x59C) = 0; /* 0x0040899E: mov dword ptr [esp + 0x59c], 0 */
    MEM8(esp + 0x58C) = (uint8_t)(0); /* 0x004089A9: mov byte ptr [esp + 0x58c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(2); /* 0x004089B1: mov byte ptr [esp + 0x2128], 2 */
    ecx = esp + 0x398; /* 0x004089B9: lea ecx, [esp + 0x398] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004089C0: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x144; /* 0x004089C5: lea eax, [esp + 0x144] */
    MEM32(esp + 0x144) = 0x100u; /* 0x004089CC: mov dword ptr [esp + 0x144], 0x100 */
    PUSH32(esp, eax); /* 0x004089D7: push eax */
    eax = esp + 0x150; /* 0x004089D8: lea eax, [esp + 0x150] */
    MEM32(esp + 0x150) = 0; /* 0x004089DF: mov dword ptr [esp + 0x150], 0 */
    PUSH32(esp, eax); /* 0x004089EA: push eax */
    eax = esp + 0x15C; /* 0x004089EB: lea eax, [esp + 0x15c] */
    MEM32(esp + 0x15C) = 0x40u; /* 0x004089F2: mov dword ptr [esp + 0x15c], 0x40 */
    PUSH32(esp, eax); /* 0x004089FD: push eax */
    ecx = esp + 0x3BC; /* 0x004089FE: lea ecx, [esp + 0x3bc] */
    RECOMP_CALL(sub_005F5DC0); /* 0x00408A05: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(3); /* 0x00408A0A: mov byte ptr [esp + 0x2128], 3 */
    ecx = esp + 0x664; /* 0x00408A12: lea ecx, [esp + 0x664] */
    PUSH32(esp, 0x007E9434u); /* 0x00408A19: push 0x7e9434 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408A1E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(4); /* 0x00408A23: mov byte ptr [esp + 0x2128], 4 */
    eax = esp + 0x3B0; /* 0x00408A2B: lea eax, [esp + 0x3b0] */
    PUSH32(esp, eax); /* 0x00408A32: push eax */
    eax = esp + 0x668; /* 0x00408A33: lea eax, [esp + 0x668] */
    PUSH32(esp, eax); /* 0x00408A3A: push eax */
    ecx = esp + 0x1C98; /* 0x00408A3B: lea ecx, [esp + 0x1c98] */
    RECOMP_CALL(sub_006B9090); /* 0x00408A42: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(6); /* 0x00408A47: mov byte ptr [esp + 0x2128], 6 */
    /* cmp MEM32(esp + 0x678), 0x10u */ /* 0x00408A4F: cmp dword ptr [esp + 0x678], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x678)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408A7E; /* 0x00408A57: jb 0x408a7e */
L_00408A59:
    esi = MEM32(esp + 0x664); /* 0x00408A59: mov esi, dword ptr [esp + 0x664] */
    ecx = esp + 0x10; /* 0x00408A60: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408A64: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408A69: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408A6A: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408A6F: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408A73: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408A78: push esi */
    RECOMP_ICALL(edi); /* 0x00408A79: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408A7B: add esp, 4 */
    _flag_k = FK_ADD;
L_00408A7E:
    MEM32(esp + 0x678) = 0xFu; /* 0x00408A7E: mov dword ptr [esp + 0x678], 0xf */
    MEM32(esp + 0x674) = 0; /* 0x00408A89: mov dword ptr [esp + 0x674], 0 */
    MEM8(esp + 0x664) = (uint8_t)(0); /* 0x00408A94: mov byte ptr [esp + 0x664], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(7); /* 0x00408A9C: mov byte ptr [esp + 0x2128], 7 */
    ecx = esp + 0x3B0; /* 0x00408AA4: lea ecx, [esp + 0x3b0] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408AAB: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1C; /* 0x00408AB0: lea eax, [esp + 0x1c] */
    MEM8(esp + 0x1C) = (uint8_t)(1); /* 0x00408AB4: mov byte ptr [esp + 0x1c], 1 */
    PUSH32(esp, eax); /* 0x00408AB9: push eax */
    PUSH32(esp, 0x007DECE0u); /* 0x00408ABA: push 0x7dece0 */
    ecx = esp + 0x1CBC; /* 0x00408ABF: lea ecx, [esp + 0x1cbc] */
    RECOMP_CALL(sub_006B91C0); /* 0x00408AC6: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(8); /* 0x00408ACB: mov byte ptr [esp + 0x2128], 8 */
    eax = esp + 0x15C; /* 0x00408AD3: lea eax, [esp + 0x15c] */
    PUSH32(esp, eax); /* 0x00408ADA: push eax */
    eax = esp + 0x168; /* 0x00408ADB: lea eax, [esp + 0x168] */
    MEM32(esp + 0x160) = 0x43480000u; /* 0x00408AE2: mov dword ptr [esp + 0x160], 0x43480000 */
    PUSH32(esp, eax); /* 0x00408AED: push eax */
    eax = esp + 0x174; /* 0x00408AEE: lea eax, [esp + 0x174] */
    MEM32(esp + 0x16C) = 0; /* 0x00408AF5: mov dword ptr [esp + 0x16c], 0 */
    PUSH32(esp, eax); /* 0x00408B00: push eax */
    ecx = esp + 0x3D4; /* 0x00408B01: lea ecx, [esp + 0x3d4] */
    MEM32(esp + 0x178) = 0x42480000u; /* 0x00408B08: mov dword ptr [esp + 0x178], 0x42480000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00408B13: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(9); /* 0x00408B18: mov byte ptr [esp + 0x2128], 9 */
    ecx = esp + 0x754; /* 0x00408B20: lea ecx, [esp + 0x754] */
    PUSH32(esp, 0x007DEC14u); /* 0x00408B27: push 0x7dec14 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408B2C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xAu); /* 0x00408B31: mov byte ptr [esp + 0x2128], 0xa */
    eax = esp + 0x3C8; /* 0x00408B39: lea eax, [esp + 0x3c8] */
    PUSH32(esp, eax); /* 0x00408B40: push eax */
    eax = esp + 0x758; /* 0x00408B41: lea eax, [esp + 0x758] */
    PUSH32(esp, eax); /* 0x00408B48: push eax */
    ecx = esp + 0x1CE0; /* 0x00408B49: lea ecx, [esp + 0x1ce0] */
    RECOMP_CALL(sub_006B9090); /* 0x00408B50: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xCu); /* 0x00408B55: mov byte ptr [esp + 0x2128], 0xc */
    /* cmp MEM32(esp + 0x768), 0x10u */ /* 0x00408B5D: cmp dword ptr [esp + 0x768], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x768)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408B8C; /* 0x00408B65: jb 0x408b8c */
L_00408B67:
    esi = MEM32(esp + 0x754); /* 0x00408B67: mov esi, dword ptr [esp + 0x754] */
    ecx = esp + 0x10; /* 0x00408B6E: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408B72: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408B77: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408B78: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408B7D: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408B81: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408B86: push esi */
    RECOMP_ICALL(edi); /* 0x00408B87: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408B89: add esp, 4 */
    _flag_k = FK_ADD;
L_00408B8C:
    MEM32(esp + 0x768) = 0xFu; /* 0x00408B8C: mov dword ptr [esp + 0x768], 0xf */
    MEM32(esp + 0x764) = 0; /* 0x00408B97: mov dword ptr [esp + 0x764], 0 */
    MEM8(esp + 0x754) = (uint8_t)(0); /* 0x00408BA2: mov byte ptr [esp + 0x754], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0xDu); /* 0x00408BAA: mov byte ptr [esp + 0x2128], 0xd */
    ecx = esp + 0x3C8; /* 0x00408BB2: lea ecx, [esp + 0x3c8] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408BB9: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x174; /* 0x00408BBE: lea eax, [esp + 0x174] */
    MEM32(esp + 0x174) = 0x40A00000u; /* 0x00408BC5: mov dword ptr [esp + 0x174], 0x40a00000 */
    PUSH32(esp, eax); /* 0x00408BD0: push eax */
    eax = esp + 0x180; /* 0x00408BD1: lea eax, [esp + 0x180] */
    MEM32(esp + 0x180) = 0x3DCCCCCDu; /* 0x00408BD8: mov dword ptr [esp + 0x180], 0x3dcccccd */
    PUSH32(esp, eax); /* 0x00408BE3: push eax */
    eax = esp + 0x18C; /* 0x00408BE4: lea eax, [esp + 0x18c] */
    MEM32(esp + 0x18C) = 0x3F3AE148u; /* 0x00408BEB: mov dword ptr [esp + 0x18c], 0x3f3ae148 */
    PUSH32(esp, eax); /* 0x00408BF6: push eax */
    ecx = esp + 0x3EC; /* 0x00408BF7: lea ecx, [esp + 0x3ec] */
    RECOMP_CALL(sub_005F5C10); /* 0x00408BFE: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xEu); /* 0x00408C03: mov byte ptr [esp + 0x2128], 0xe */
    ecx = esp + 0x694; /* 0x00408C0B: lea ecx, [esp + 0x694] */
    PUSH32(esp, 0x007FE8FCu); /* 0x00408C12: push 0x7fe8fc */
    RECOMP_CALL(sub_00409FA0); /* 0x00408C17: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0xFu); /* 0x00408C1C: mov byte ptr [esp + 0x2128], 0xf */
    eax = esp + 0x3E0; /* 0x00408C24: lea eax, [esp + 0x3e0] */
    PUSH32(esp, eax); /* 0x00408C2B: push eax */
    eax = esp + 0x698; /* 0x00408C2C: lea eax, [esp + 0x698] */
    PUSH32(esp, eax); /* 0x00408C33: push eax */
    ecx = esp + 0x1D04; /* 0x00408C34: lea ecx, [esp + 0x1d04] */
    RECOMP_CALL(sub_006B9090); /* 0x00408C3B: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x11u); /* 0x00408C40: mov byte ptr [esp + 0x2128], 0x11 */
    /* cmp MEM32(esp + 0x6A8), 0x10u */ /* 0x00408C48: cmp dword ptr [esp + 0x6a8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6A8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408C77; /* 0x00408C50: jb 0x408c77 */
L_00408C52:
    esi = MEM32(esp + 0x694); /* 0x00408C52: mov esi, dword ptr [esp + 0x694] */
    ecx = esp + 0x10; /* 0x00408C59: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408C5D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408C62: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408C63: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408C68: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408C6C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408C71: push esi */
    RECOMP_ICALL(edi); /* 0x00408C72: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408C74: add esp, 4 */
    _flag_k = FK_ADD;
L_00408C77:
    MEM32(esp + 0x6A8) = 0xFu; /* 0x00408C77: mov dword ptr [esp + 0x6a8], 0xf */
    MEM32(esp + 0x6A4) = 0; /* 0x00408C82: mov dword ptr [esp + 0x6a4], 0 */
    MEM8(esp + 0x694) = (uint8_t)(0); /* 0x00408C8D: mov byte ptr [esp + 0x694], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x12u); /* 0x00408C95: mov byte ptr [esp + 0x2128], 0x12 */
    ecx = esp + 0x3E0; /* 0x00408C9D: lea ecx, [esp + 0x3e0] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408CA4: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x26; /* 0x00408CA9: lea eax, [esp + 0x26] */
    MEM8(esp + 0x26) = (uint8_t)(0); /* 0x00408CAD: mov byte ptr [esp + 0x26], 0 */
    PUSH32(esp, eax); /* 0x00408CB2: push eax */
    PUSH32(esp, 0x007F706Cu); /* 0x00408CB3: push 0x7f706c */
    ecx = esp + 0x1D28; /* 0x00408CB8: lea ecx, [esp + 0x1d28] */
    RECOMP_CALL(sub_006B91C0); /* 0x00408CBF: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x13u); /* 0x00408CC4: mov byte ptr [esp + 0x2128], 0x13 */
    eax = esp + 0x1E; /* 0x00408CCC: lea eax, [esp + 0x1e] */
    PUSH32(esp, eax); /* 0x00408CD0: push eax */
    PUSH32(esp, ecx); /* 0x00408CD1: push ecx */
    ecx = esp + 0x1D4C; /* 0x00408CD2: lea ecx, [esp + 0x1d4c] */
    MEM8(esp + 0x26) = (uint8_t)(0); /* 0x00408CD9: mov byte ptr [esp + 0x26], 0 */
    RECOMP_CALL(sub_006B9930); /* 0x00408CDE: call 0x6b9930 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x14u); /* 0x00408CE3: mov byte ptr [esp + 0x2128], 0x14 */
    eax = esp + 0x2E; /* 0x00408CEB: lea eax, [esp + 0x2e] */
    PUSH32(esp, eax); /* 0x00408CEF: push eax */
    PUSH32(esp, 0x007E68BCu); /* 0x00408CF0: push 0x7e68bc */
    ecx = esp + 0x1D70; /* 0x00408CF5: lea ecx, [esp + 0x1d70] */
    MEM8(esp + 0x36) = (uint8_t)(0); /* 0x00408CFC: mov byte ptr [esp + 0x36], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00408D01: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x15u); /* 0x00408D06: mov byte ptr [esp + 0x2128], 0x15 */
    eax = esp + 0x18C; /* 0x00408D0E: lea eax, [esp + 0x18c] */
    PUSH32(esp, eax); /* 0x00408D15: push eax */
    eax = esp + 0x198; /* 0x00408D16: lea eax, [esp + 0x198] */
    MEM32(esp + 0x190) = 0x3F800000u; /* 0x00408D1D: mov dword ptr [esp + 0x190], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00408D28: push eax */
    eax = esp + 0x1A4; /* 0x00408D29: lea eax, [esp + 0x1a4] */
    MEM32(esp + 0x19C) = 0x3C23D70Au; /* 0x00408D30: mov dword ptr [esp + 0x19c], 0x3c23d70a */
    PUSH32(esp, eax); /* 0x00408D3B: push eax */
    ecx = esp + 0x404; /* 0x00408D3C: lea ecx, [esp + 0x404] */
    MEM32(esp + 0x1A8) = 0x3C23D70Au; /* 0x00408D43: mov dword ptr [esp + 0x1a8], 0x3c23d70a */
    RECOMP_CALL(sub_005F5C10); /* 0x00408D4E: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x16u); /* 0x00408D53: mov byte ptr [esp + 0x2128], 0x16 */
    ecx = esp + 0x5A4; /* 0x00408D5B: lea ecx, [esp + 0x5a4] */
    PUSH32(esp, 0x007E6850u); /* 0x00408D62: push 0x7e6850 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408D67: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x17u); /* 0x00408D6C: mov byte ptr [esp + 0x2128], 0x17 */
    eax = esp + 0x3F8; /* 0x00408D74: lea eax, [esp + 0x3f8] */
    PUSH32(esp, eax); /* 0x00408D7B: push eax */
    eax = esp + 0x5A8; /* 0x00408D7C: lea eax, [esp + 0x5a8] */
    PUSH32(esp, eax); /* 0x00408D83: push eax */
    ecx = esp + 0x1D94; /* 0x00408D84: lea ecx, [esp + 0x1d94] */
    RECOMP_CALL(sub_006B9090); /* 0x00408D8B: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x19u); /* 0x00408D90: mov byte ptr [esp + 0x2128], 0x19 */
    /* cmp MEM32(esp + 0x5B8), 0x10u */ /* 0x00408D98: cmp dword ptr [esp + 0x5b8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x5B8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408DC7; /* 0x00408DA0: jb 0x408dc7 */
L_00408DA2:
    esi = MEM32(esp + 0x5A4); /* 0x00408DA2: mov esi, dword ptr [esp + 0x5a4] */
    ecx = esp + 0x10; /* 0x00408DA9: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408DAD: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408DB2: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408DB3: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408DB8: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408DBC: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408DC1: push esi */
    RECOMP_ICALL(edi); /* 0x00408DC2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408DC4: add esp, 4 */
    _flag_k = FK_ADD;
L_00408DC7:
    MEM32(esp + 0x5B8) = 0xFu; /* 0x00408DC7: mov dword ptr [esp + 0x5b8], 0xf */
    MEM32(esp + 0x5B4) = 0; /* 0x00408DD2: mov dword ptr [esp + 0x5b4], 0 */
    MEM8(esp + 0x5A4) = (uint8_t)(0); /* 0x00408DDD: mov byte ptr [esp + 0x5a4], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x1Au); /* 0x00408DE5: mov byte ptr [esp + 0x2128], 0x1a */
    ecx = esp + 0x3F8; /* 0x00408DED: lea ecx, [esp + 0x3f8] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408DF4: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1A4; /* 0x00408DF9: lea eax, [esp + 0x1a4] */
    MEM32(esp + 0x1A4) = 0x3F800000u; /* 0x00408E00: mov dword ptr [esp + 0x1a4], 0x3f800000 */
    PUSH32(esp, eax); /* 0x00408E0B: push eax */
    eax = esp + 0x1B0; /* 0x00408E0C: lea eax, [esp + 0x1b0] */
    MEM32(esp + 0x1B0) = 0x3F19999Au; /* 0x00408E13: mov dword ptr [esp + 0x1b0], 0x3f19999a */
    PUSH32(esp, eax); /* 0x00408E1E: push eax */
    eax = esp + 0x1BC; /* 0x00408E1F: lea eax, [esp + 0x1bc] */
    MEM32(esp + 0x1BC) = 0x3F4CCCCDu; /* 0x00408E26: mov dword ptr [esp + 0x1bc], 0x3f4ccccd */
    PUSH32(esp, eax); /* 0x00408E31: push eax */
    ecx = esp + 0x41C; /* 0x00408E32: lea ecx, [esp + 0x41c] */
    RECOMP_CALL(sub_005F5C10); /* 0x00408E39: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Bu); /* 0x00408E3E: mov byte ptr [esp + 0x2128], 0x1b */
    ecx = esp + 0x5BC; /* 0x00408E46: lea ecx, [esp + 0x5bc] */
    PUSH32(esp, 0x007E6868u); /* 0x00408E4D: push 0x7e6868 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408E52: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Cu); /* 0x00408E57: mov byte ptr [esp + 0x2128], 0x1c */
    eax = esp + 0x410; /* 0x00408E5F: lea eax, [esp + 0x410] */
    PUSH32(esp, eax); /* 0x00408E66: push eax */
    eax = esp + 0x5C0; /* 0x00408E67: lea eax, [esp + 0x5c0] */
    PUSH32(esp, eax); /* 0x00408E6E: push eax */
    ecx = esp + 0x1DB8; /* 0x00408E6F: lea ecx, [esp + 0x1db8] */
    RECOMP_CALL(sub_006B9090); /* 0x00408E76: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x1Eu); /* 0x00408E7B: mov byte ptr [esp + 0x2128], 0x1e */
    /* cmp MEM32(esp + 0x5D0), 0x10u */ /* 0x00408E83: cmp dword ptr [esp + 0x5d0], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x5D0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408EB2; /* 0x00408E8B: jb 0x408eb2 */
L_00408E8D:
    esi = MEM32(esp + 0x5BC); /* 0x00408E8D: mov esi, dword ptr [esp + 0x5bc] */
    ecx = esp + 0x10; /* 0x00408E94: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408E98: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408E9D: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408E9E: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408EA3: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408EA7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408EAC: push esi */
    RECOMP_ICALL(edi); /* 0x00408EAD: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408EAF: add esp, 4 */
    _flag_k = FK_ADD;
L_00408EB2:
    MEM32(esp + 0x5D0) = 0xFu; /* 0x00408EB2: mov dword ptr [esp + 0x5d0], 0xf */
    MEM32(esp + 0x5CC) = 0; /* 0x00408EBD: mov dword ptr [esp + 0x5cc], 0 */
    MEM8(esp + 0x5BC) = (uint8_t)(0); /* 0x00408EC8: mov byte ptr [esp + 0x5bc], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x1Fu); /* 0x00408ED0: mov byte ptr [esp + 0x2128], 0x1f */
    ecx = esp + 0x410; /* 0x00408ED8: lea ecx, [esp + 0x410] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408EDF: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x13; /* 0x00408EE4: lea eax, [esp + 0x13] */
    MEM8(esp + 0x13) = (uint8_t)(1); /* 0x00408EE8: mov byte ptr [esp + 0x13], 1 */
    PUSH32(esp, eax); /* 0x00408EED: push eax */
    PUSH32(esp, 0x007E9960u); /* 0x00408EEE: push 0x7e9960 */
    ecx = esp + 0x1DDC; /* 0x00408EF3: lea ecx, [esp + 0x1ddc] */
    RECOMP_CALL(sub_006B91C0); /* 0x00408EFA: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x20u); /* 0x00408EFF: mov byte ptr [esp + 0x2128], 0x20 */
    eax = esp + 0x1BC; /* 0x00408F07: lea eax, [esp + 0x1bc] */
    PUSH32(esp, eax); /* 0x00408F0E: push eax */
    eax = esp + 0x1C8; /* 0x00408F0F: lea eax, [esp + 0x1c8] */
    MEM32(esp + 0x1C0) = 0x1Fu; /* 0x00408F16: mov dword ptr [esp + 0x1c0], 0x1f */
    PUSH32(esp, eax); /* 0x00408F21: push eax */
    eax = esp + 0x1D4; /* 0x00408F22: lea eax, [esp + 0x1d4] */
    MEM32(esp + 0x1CC) = 5; /* 0x00408F29: mov dword ptr [esp + 0x1cc], 5 */
    PUSH32(esp, eax); /* 0x00408F34: push eax */
    ecx = esp + 0x434; /* 0x00408F35: lea ecx, [esp + 0x434] */
    MEM32(esp + 0x1D8) = 7; /* 0x00408F3C: mov dword ptr [esp + 0x1d8], 7 */
    RECOMP_CALL(sub_005F5DC0); /* 0x00408F47: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x21u); /* 0x00408F4C: mov byte ptr [esp + 0x2128], 0x21 */
    ecx = esp + 0x5EC; /* 0x00408F54: lea ecx, [esp + 0x5ec] */
    PUSH32(esp, 0x007F1464u); /* 0x00408F5B: push 0x7f1464 */
    RECOMP_CALL(sub_00409FA0); /* 0x00408F60: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x22u); /* 0x00408F65: mov byte ptr [esp + 0x2128], 0x22 */
    eax = esp + 0x428; /* 0x00408F6D: lea eax, [esp + 0x428] */
    PUSH32(esp, eax); /* 0x00408F74: push eax */
    eax = esp + 0x5F0; /* 0x00408F75: lea eax, [esp + 0x5f0] */
    PUSH32(esp, eax); /* 0x00408F7C: push eax */
    ecx = esp + 0x1E00; /* 0x00408F7D: lea ecx, [esp + 0x1e00] */
    RECOMP_CALL(sub_006B9090); /* 0x00408F84: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x24u); /* 0x00408F89: mov byte ptr [esp + 0x2128], 0x24 */
    /* cmp MEM32(esp + 0x600), 0x10u */ /* 0x00408F91: cmp dword ptr [esp + 0x600], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x600)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00408FC0; /* 0x00408F99: jb 0x408fc0 */
L_00408F9B:
    esi = MEM32(esp + 0x5EC); /* 0x00408F9B: mov esi, dword ptr [esp + 0x5ec] */
    ecx = esp + 0x10; /* 0x00408FA2: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408FA6: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00408FAB: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00408FAC: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00408FB1: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00408FB5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00408FBA: push esi */
    RECOMP_ICALL(edi); /* 0x00408FBB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00408FBD: add esp, 4 */
    _flag_k = FK_ADD;
L_00408FC0:
    MEM32(esp + 0x600) = 0xFu; /* 0x00408FC0: mov dword ptr [esp + 0x600], 0xf */
    MEM32(esp + 0x5FC) = 0; /* 0x00408FCB: mov dword ptr [esp + 0x5fc], 0 */
    MEM8(esp + 0x5EC) = (uint8_t)(0); /* 0x00408FD6: mov byte ptr [esp + 0x5ec], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x25u); /* 0x00408FDE: mov byte ptr [esp + 0x2128], 0x25 */
    ecx = esp + 0x428; /* 0x00408FE6: lea ecx, [esp + 0x428] */
    RECOMP_CALL(sub_0041A4B0); /* 0x00408FED: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1D4; /* 0x00408FF2: lea eax, [esp + 0x1d4] */
    MEM32(esp + 0x1D4) = 0x447A0000u; /* 0x00408FF9: mov dword ptr [esp + 0x1d4], 0x447a0000 */
    PUSH32(esp, eax); /* 0x00409004: push eax */
    eax = esp + 0x1E0; /* 0x00409005: lea eax, [esp + 0x1e0] */
    MEM32(esp + 0x1E0) = 0; /* 0x0040900C: mov dword ptr [esp + 0x1e0], 0 */
    PUSH32(esp, eax); /* 0x00409017: push eax */
    eax = esp + 0x1EC; /* 0x00409018: lea eax, [esp + 0x1ec] */
    MEM32(esp + 0x1EC) = 0x43C80000u; /* 0x0040901F: mov dword ptr [esp + 0x1ec], 0x43c80000 */
    PUSH32(esp, eax); /* 0x0040902A: push eax */
    ecx = esp + 0x44C; /* 0x0040902B: lea ecx, [esp + 0x44c] */
    RECOMP_CALL(sub_005F5C10); /* 0x00409032: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x26u); /* 0x00409037: mov byte ptr [esp + 0x2128], 0x26 */
    ecx = esp + 0x61C; /* 0x0040903F: lea ecx, [esp + 0x61c] */
    PUSH32(esp, 0x007E7138u); /* 0x00409046: push 0x7e7138 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040904B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x27u); /* 0x00409050: mov byte ptr [esp + 0x2128], 0x27 */
    eax = esp + 0x440; /* 0x00409058: lea eax, [esp + 0x440] */
    PUSH32(esp, eax); /* 0x0040905F: push eax */
    eax = esp + 0x620; /* 0x00409060: lea eax, [esp + 0x620] */
    PUSH32(esp, eax); /* 0x00409067: push eax */
    ecx = esp + 0x1E24; /* 0x00409068: lea ecx, [esp + 0x1e24] */
    RECOMP_CALL(sub_006B9090); /* 0x0040906F: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x29u); /* 0x00409074: mov byte ptr [esp + 0x2128], 0x29 */
    /* cmp MEM32(esp + 0x630), 0x10u */ /* 0x0040907C: cmp dword ptr [esp + 0x630], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x630)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004090AB; /* 0x00409084: jb 0x4090ab */
L_00409086:
    esi = MEM32(esp + 0x61C); /* 0x00409086: mov esi, dword ptr [esp + 0x61c] */
    ecx = esp + 0x10; /* 0x0040908D: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00409091: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00409096: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00409097: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x0040909C: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004090A0: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004090A5: push esi */
    RECOMP_ICALL(edi); /* 0x004090A6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004090A8: add esp, 4 */
    _flag_k = FK_ADD;
L_004090AB:
    MEM32(esp + 0x630) = 0xFu; /* 0x004090AB: mov dword ptr [esp + 0x630], 0xf */
    MEM32(esp + 0x62C) = 0; /* 0x004090B6: mov dword ptr [esp + 0x62c], 0 */
    MEM8(esp + 0x61C) = (uint8_t)(0); /* 0x004090C1: mov byte ptr [esp + 0x61c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x2Au); /* 0x004090C9: mov byte ptr [esp + 0x2128], 0x2a */
    ecx = esp + 0x440; /* 0x004090D1: lea ecx, [esp + 0x440] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004090D8: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1EC; /* 0x004090DD: lea eax, [esp + 0x1ec] */
    MEM32(esp + 0x1EC) = 0x64u; /* 0x004090E4: mov dword ptr [esp + 0x1ec], 0x64 */
    PUSH32(esp, eax); /* 0x004090EF: push eax */
    eax = esp + 0x1F8; /* 0x004090F0: lea eax, [esp + 0x1f8] */
    MEM32(esp + 0x1F8) = 0; /* 0x004090F7: mov dword ptr [esp + 0x1f8], 0 */
    PUSH32(esp, eax); /* 0x00409102: push eax */
    eax = esp + 0x204; /* 0x00409103: lea eax, [esp + 0x204] */
    MEM32(esp + 0x204) = 0x10u; /* 0x0040910A: mov dword ptr [esp + 0x204], 0x10 */
    PUSH32(esp, eax); /* 0x00409115: push eax */
    ecx = esp + 0x464; /* 0x00409116: lea ecx, [esp + 0x464] */
    RECOMP_CALL(sub_005F5DC0); /* 0x0040911D: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Bu); /* 0x00409122: mov byte ptr [esp + 0x2128], 0x2b */
    ecx = esp + 0x64C; /* 0x0040912A: lea ecx, [esp + 0x64c] */
    PUSH32(esp, 0x007E719Cu); /* 0x00409131: push 0x7e719c */
    RECOMP_CALL(sub_00409FA0); /* 0x00409136: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Cu); /* 0x0040913B: mov byte ptr [esp + 0x2128], 0x2c */
    eax = esp + 0x458; /* 0x00409143: lea eax, [esp + 0x458] */
    PUSH32(esp, eax); /* 0x0040914A: push eax */
    eax = esp + 0x650; /* 0x0040914B: lea eax, [esp + 0x650] */
    PUSH32(esp, eax); /* 0x00409152: push eax */
    ecx = esp + 0x1E48; /* 0x00409153: lea ecx, [esp + 0x1e48] */
    RECOMP_CALL(sub_006B9090); /* 0x0040915A: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x2Eu); /* 0x0040915F: mov byte ptr [esp + 0x2128], 0x2e */
    /* cmp MEM32(esp + 0x660), 0x10u */ /* 0x00409167: cmp dword ptr [esp + 0x660], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x660)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00409196; /* 0x0040916F: jb 0x409196 */
L_00409171:
    esi = MEM32(esp + 0x64C); /* 0x00409171: mov esi, dword ptr [esp + 0x64c] */
    ecx = esp + 0x10; /* 0x00409178: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040917C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00409181: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00409182: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00409187: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040918B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00409190: push esi */
    RECOMP_ICALL(edi); /* 0x00409191: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409193: add esp, 4 */
    _flag_k = FK_ADD;
L_00409196:
    MEM32(esp + 0x660) = 0xFu; /* 0x00409196: mov dword ptr [esp + 0x660], 0xf */
    MEM32(esp + 0x65C) = 0; /* 0x004091A1: mov dword ptr [esp + 0x65c], 0 */
    MEM8(esp + 0x64C) = (uint8_t)(0); /* 0x004091AC: mov byte ptr [esp + 0x64c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x2Fu); /* 0x004091B4: mov byte ptr [esp + 0x2128], 0x2f */
    ecx = esp + 0x458; /* 0x004091BC: lea ecx, [esp + 0x458] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004091C3: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x204; /* 0x004091C8: lea eax, [esp + 0x204] */
    MEM32(esp + 0x204) = 0x42C80000u; /* 0x004091CF: mov dword ptr [esp + 0x204], 0x42c80000 */
    PUSH32(esp, eax); /* 0x004091DA: push eax */
    eax = esp + 0x210; /* 0x004091DB: lea eax, [esp + 0x210] */
    MEM32(esp + 0x210) = 0; /* 0x004091E2: mov dword ptr [esp + 0x210], 0 */
    PUSH32(esp, eax); /* 0x004091ED: push eax */
    eax = esp + 0x21C; /* 0x004091EE: lea eax, [esp + 0x21c] */
    MEM32(esp + 0x21C) = 0x42C80000u; /* 0x004091F5: mov dword ptr [esp + 0x21c], 0x42c80000 */
    PUSH32(esp, eax); /* 0x00409200: push eax */
    ecx = esp + 0x47C; /* 0x00409201: lea ecx, [esp + 0x47c] */
    RECOMP_CALL(sub_005F5C10); /* 0x00409208: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x30u); /* 0x0040920D: mov byte ptr [esp + 0x2128], 0x30 */
    ecx = esp + 0x67C; /* 0x00409215: lea ecx, [esp + 0x67c] */
    PUSH32(esp, 0x007DEBD4u); /* 0x0040921C: push 0x7debd4 */
    RECOMP_CALL(sub_00409FA0); /* 0x00409221: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x31u); /* 0x00409226: mov byte ptr [esp + 0x2128], 0x31 */
    eax = esp + 0x470; /* 0x0040922E: lea eax, [esp + 0x470] */
    PUSH32(esp, eax); /* 0x00409235: push eax */
    eax = esp + 0x680; /* 0x00409236: lea eax, [esp + 0x680] */
    PUSH32(esp, eax); /* 0x0040923D: push eax */
    ecx = esp + 0x1E6C; /* 0x0040923E: lea ecx, [esp + 0x1e6c] */
    RECOMP_CALL(sub_006B9090); /* 0x00409245: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x33u); /* 0x0040924A: mov byte ptr [esp + 0x2128], 0x33 */
    /* cmp MEM32(esp + 0x690), 0x10u */ /* 0x00409252: cmp dword ptr [esp + 0x690], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x690)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00409281; /* 0x0040925A: jb 0x409281 */
L_0040925C:
    esi = MEM32(esp + 0x67C); /* 0x0040925C: mov esi, dword ptr [esp + 0x67c] */
    ecx = esp + 0x10; /* 0x00409263: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00409267: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0040926C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x0040926D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00409272: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00409276: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0040927B: push esi */
    RECOMP_ICALL(edi); /* 0x0040927C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040927E: add esp, 4 */
    _flag_k = FK_ADD;
L_00409281:
    MEM32(esp + 0x690) = 0xFu; /* 0x00409281: mov dword ptr [esp + 0x690], 0xf */
    MEM32(esp + 0x68C) = 0; /* 0x0040928C: mov dword ptr [esp + 0x68c], 0 */
    MEM8(esp + 0x67C) = (uint8_t)(0); /* 0x00409297: mov byte ptr [esp + 0x67c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x34u); /* 0x0040929F: mov byte ptr [esp + 0x2128], 0x34 */
    ecx = esp + 0x470; /* 0x004092A7: lea ecx, [esp + 0x470] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004092AE: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x28; /* 0x004092B3: lea eax, [esp + 0x28] */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x004092B7: mov byte ptr [esp + 0x28], 0 */
    PUSH32(esp, eax); /* 0x004092BC: push eax */
    PUSH32(esp, ecx); /* 0x004092BD: push ecx */
    ecx = esp + 0x1E90; /* 0x004092BE: lea ecx, [esp + 0x1e90] */
    RECOMP_CALL(sub_006B99B0); /* 0x004092C5: call 0x6b99b0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x35u); /* 0x004092CA: mov byte ptr [esp + 0x2128], 0x35 */
    eax = esp + 0x21C; /* 0x004092D2: lea eax, [esp + 0x21c] */
    PUSH32(esp, eax); /* 0x004092D9: push eax */
    eax = esp + 0x228; /* 0x004092DA: lea eax, [esp + 0x228] */
    MEM32(esp + 0x220) = 0x00FFFFFFu; /* 0x004092E1: mov dword ptr [esp + 0x220], 0xffffff */
    PUSH32(esp, eax); /* 0x004092EC: push eax */
    eax = esp + 0x234; /* 0x004092ED: lea eax, [esp + 0x234] */
    MEM32(esp + 0x22C) = 0; /* 0x004092F4: mov dword ptr [esp + 0x22c], 0 */
    PUSH32(esp, eax); /* 0x004092FF: push eax */
    ecx = esp + 0x494; /* 0x00409300: lea ecx, [esp + 0x494] */
    MEM32(esp + 0x238) = 0x00F22323u; /* 0x00409307: mov dword ptr [esp + 0x238], 0xf22323 */
    RECOMP_CALL(sub_005F5DC0); /* 0x00409312: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x36u); /* 0x00409317: mov byte ptr [esp + 0x2128], 0x36 */
    ecx = esp + 0x6AC; /* 0x0040931F: lea ecx, [esp + 0x6ac] */
    PUSH32(esp, 0x007DF0A8u); /* 0x00409326: push 0x7df0a8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040932B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x37u); /* 0x00409330: mov byte ptr [esp + 0x2128], 0x37 */
    eax = esp + 0x488; /* 0x00409338: lea eax, [esp + 0x488] */
    PUSH32(esp, eax); /* 0x0040933F: push eax */
    eax = esp + 0x6B0; /* 0x00409340: lea eax, [esp + 0x6b0] */
    PUSH32(esp, eax); /* 0x00409347: push eax */
    ecx = esp + 0x1EB4; /* 0x00409348: lea ecx, [esp + 0x1eb4] */
    RECOMP_CALL(sub_006B9090); /* 0x0040934F: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x39u); /* 0x00409354: mov byte ptr [esp + 0x2128], 0x39 */
    /* cmp MEM32(esp + 0x6C0), 0x10u */ /* 0x0040935C: cmp dword ptr [esp + 0x6c0], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040938B; /* 0x00409364: jb 0x40938b */
L_00409366:
    esi = MEM32(esp + 0x6AC); /* 0x00409366: mov esi, dword ptr [esp + 0x6ac] */
    ecx = esp + 0x10; /* 0x0040936D: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00409371: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00409376: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00409377: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x0040937C: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x00409380: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00409385: push esi */
    RECOMP_ICALL(edi); /* 0x00409386: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409388: add esp, 4 */
    _flag_k = FK_ADD;
L_0040938B:
    MEM32(esp + 0x6C0) = 0xFu; /* 0x0040938B: mov dword ptr [esp + 0x6c0], 0xf */
    MEM32(esp + 0x6BC) = 0; /* 0x00409396: mov dword ptr [esp + 0x6bc], 0 */
    MEM8(esp + 0x6AC) = (uint8_t)(0); /* 0x004093A1: mov byte ptr [esp + 0x6ac], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x3Au); /* 0x004093A9: mov byte ptr [esp + 0x2128], 0x3a */
    ecx = esp + 0x488; /* 0x004093B1: lea ecx, [esp + 0x488] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004093B8: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x234; /* 0x004093BD: lea eax, [esp + 0x234] */
    MEM32(esp + 0x234) = 0x00FFFFFFu; /* 0x004093C4: mov dword ptr [esp + 0x234], 0xffffff */
    PUSH32(esp, eax); /* 0x004093CF: push eax */
    eax = esp + 0x240; /* 0x004093D0: lea eax, [esp + 0x240] */
    MEM32(esp + 0x240) = 0; /* 0x004093D7: mov dword ptr [esp + 0x240], 0 */
    PUSH32(esp, eax); /* 0x004093E2: push eax */
    eax = esp + 0x24C; /* 0x004093E3: lea eax, [esp + 0x24c] */
    MEM32(esp + 0x24C) = 0x003F87E7u; /* 0x004093EA: mov dword ptr [esp + 0x24c], 0x3f87e7 */
    PUSH32(esp, eax); /* 0x004093F5: push eax */
    ecx = esp + 0x4AC; /* 0x004093F6: lea ecx, [esp + 0x4ac] */
    RECOMP_CALL(sub_005F5DC0); /* 0x004093FD: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Bu); /* 0x00409402: mov byte ptr [esp + 0x2128], 0x3b */
    ecx = esp + 0x6DC; /* 0x0040940A: lea ecx, [esp + 0x6dc] */
    PUSH32(esp, 0x007DF074u); /* 0x00409411: push 0x7df074 */
    RECOMP_CALL(sub_00409FA0); /* 0x00409416: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Cu); /* 0x0040941B: mov byte ptr [esp + 0x2128], 0x3c */
    eax = esp + 0x4A0; /* 0x00409423: lea eax, [esp + 0x4a0] */
    PUSH32(esp, eax); /* 0x0040942A: push eax */
    eax = esp + 0x6E0; /* 0x0040942B: lea eax, [esp + 0x6e0] */
    PUSH32(esp, eax); /* 0x00409432: push eax */
    ecx = esp + 0x1ED8; /* 0x00409433: lea ecx, [esp + 0x1ed8] */
    RECOMP_CALL(sub_006B9090); /* 0x0040943A: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x3Eu); /* 0x0040943F: mov byte ptr [esp + 0x2128], 0x3e */
    /* cmp MEM32(esp + 0x6F0), 0x10u */ /* 0x00409447: cmp dword ptr [esp + 0x6f0], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6F0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00409476; /* 0x0040944F: jb 0x409476 */
L_00409451:
    esi = MEM32(esp + 0x6DC); /* 0x00409451: mov esi, dword ptr [esp + 0x6dc] */
    ecx = esp + 0x10; /* 0x00409458: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040945C: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00409461: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x00409462: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x00409467: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040946B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00409470: push esi */
    RECOMP_ICALL(edi); /* 0x00409471: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409473: add esp, 4 */
    _flag_k = FK_ADD;
L_00409476:
    MEM32(esp + 0x6F0) = 0xFu; /* 0x00409476: mov dword ptr [esp + 0x6f0], 0xf */
    MEM32(esp + 0x6EC) = 0; /* 0x00409481: mov dword ptr [esp + 0x6ec], 0 */
    MEM8(esp + 0x6DC) = (uint8_t)(0); /* 0x0040948C: mov byte ptr [esp + 0x6dc], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x3Fu); /* 0x00409494: mov byte ptr [esp + 0x2128], 0x3f */
    ecx = esp + 0x4A0; /* 0x0040949C: lea ecx, [esp + 0x4a0] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004094A3: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x14; /* 0x004094A8: lea eax, [esp + 0x14] */
    MEM8(esp + 0x14) = (uint8_t)(1); /* 0x004094AC: mov byte ptr [esp + 0x14], 1 */
    PUSH32(esp, eax); /* 0x004094B1: push eax */
    PUSH32(esp, 0x007DF058u); /* 0x004094B2: push 0x7df058 */
    ecx = esp + 0x1EFC; /* 0x004094B7: lea ecx, [esp + 0x1efc] */
    RECOMP_CALL(sub_006B91C0); /* 0x004094BE: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x40u); /* 0x004094C3: mov byte ptr [esp + 0x2128], 0x40 */
    eax = esp + 0x15; /* 0x004094CB: lea eax, [esp + 0x15] */
    PUSH32(esp, eax); /* 0x004094CF: push eax */
    PUSH32(esp, 0x007E1388u); /* 0x004094D0: push 0x7e1388 */
    ecx = esp + 0x1F20; /* 0x004094D5: lea ecx, [esp + 0x1f20] */
    MEM8(esp + 0x1D) = (uint8_t)(1); /* 0x004094DC: mov byte ptr [esp + 0x1d], 1 */
    RECOMP_CALL(sub_006B91C0); /* 0x004094E1: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x41u); /* 0x004094E6: mov byte ptr [esp + 0x2128], 0x41 */
    eax = esp + 0x17; /* 0x004094EE: lea eax, [esp + 0x17] */
    PUSH32(esp, eax); /* 0x004094F2: push eax */
    PUSH32(esp, 0x007F311Cu); /* 0x004094F3: push 0x7f311c */
    ecx = esp + 0x1F44; /* 0x004094F8: lea ecx, [esp + 0x1f44] */
    MEM8(esp + 0x1F) = (uint8_t)(1); /* 0x004094FF: mov byte ptr [esp + 0x1f], 1 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409504: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x42u); /* 0x00409509: mov byte ptr [esp + 0x2128], 0x42 */
    eax = esp + 0x24C; /* 0x00409511: lea eax, [esp + 0x24c] */
    PUSH32(esp, eax); /* 0x00409518: push eax */
    eax = esp + 0x258; /* 0x00409519: lea eax, [esp + 0x258] */
    MEM32(esp + 0x250) = 0x49742400u; /* 0x00409520: mov dword ptr [esp + 0x250], 0x49742400 */
    PUSH32(esp, eax); /* 0x0040952B: push eax */
    eax = esp + 0x264; /* 0x0040952C: lea eax, [esp + 0x264] */
    MEM32(esp + 0x25C) = 0x40400000u; /* 0x00409533: mov dword ptr [esp + 0x25c], 0x40400000 */
    PUSH32(esp, eax); /* 0x0040953E: push eax */
    ecx = esp + 0x4C4; /* 0x0040953F: lea ecx, [esp + 0x4c4] */
    MEM32(esp + 0x268) = 0x41F00000u; /* 0x00409546: mov dword ptr [esp + 0x268], 0x41f00000 */
    RECOMP_CALL(sub_005F5C10); /* 0x00409551: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x43u); /* 0x00409556: mov byte ptr [esp + 0x2128], 0x43 */
    ecx = esp + 0x70C; /* 0x0040955E: lea ecx, [esp + 0x70c] */
    PUSH32(esp, 0x007E1374u); /* 0x00409565: push 0x7e1374 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040956A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x44u); /* 0x0040956F: mov byte ptr [esp + 0x2128], 0x44 */
    eax = esp + 0x4B8; /* 0x00409577: lea eax, [esp + 0x4b8] */
    PUSH32(esp, eax); /* 0x0040957E: push eax */
    eax = esp + 0x710; /* 0x0040957F: lea eax, [esp + 0x710] */
    PUSH32(esp, eax); /* 0x00409586: push eax */
    ecx = esp + 0x1F68; /* 0x00409587: lea ecx, [esp + 0x1f68] */
    RECOMP_CALL(sub_006B9090); /* 0x0040958E: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x46u); /* 0x00409593: mov byte ptr [esp + 0x2128], 0x46 */
    /* cmp MEM32(esp + 0x720), 0x10u */ /* 0x0040959B: cmp dword ptr [esp + 0x720], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x720)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004095CA; /* 0x004095A3: jb 0x4095ca */
L_004095A5:
    esi = MEM32(esp + 0x70C); /* 0x004095A5: mov esi, dword ptr [esp + 0x70c] */
    ecx = esp + 0x10; /* 0x004095AC: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004095B0: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004095B5: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004095B6: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x004095BB: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004095BF: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004095C4: push esi */
    RECOMP_ICALL(edi); /* 0x004095C5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004095C7: add esp, 4 */
    _flag_k = FK_ADD;
L_004095CA:
    MEM32(esp + 0x720) = 0xFu; /* 0x004095CA: mov dword ptr [esp + 0x720], 0xf */
    MEM32(esp + 0x71C) = 0; /* 0x004095D5: mov dword ptr [esp + 0x71c], 0 */
    MEM8(esp + 0x70C) = (uint8_t)(0); /* 0x004095E0: mov byte ptr [esp + 0x70c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x47u); /* 0x004095E8: mov byte ptr [esp + 0x2128], 0x47 */
    ecx = esp + 0x4B8; /* 0x004095F0: lea ecx, [esp + 0x4b8] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004095F7: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x264; /* 0x004095FC: lea eax, [esp + 0x264] */
    MEM32(esp + 0x264) = 0x49742400u; /* 0x00409603: mov dword ptr [esp + 0x264], 0x49742400 */
    PUSH32(esp, eax); /* 0x0040960E: push eax */
    eax = esp + 0x270; /* 0x0040960F: lea eax, [esp + 0x270] */
    MEM32(esp + 0x270) = 0x40400000u; /* 0x00409616: mov dword ptr [esp + 0x270], 0x40400000 */
    PUSH32(esp, eax); /* 0x00409621: push eax */
    eax = esp + 0x27C; /* 0x00409622: lea eax, [esp + 0x27c] */
    MEM32(esp + 0x27C) = 0x42700000u; /* 0x00409629: mov dword ptr [esp + 0x27c], 0x42700000 */
    PUSH32(esp, eax); /* 0x00409634: push eax */
    ecx = esp + 0x4DC; /* 0x00409635: lea ecx, [esp + 0x4dc] */
    RECOMP_CALL(sub_005F5C10); /* 0x0040963C: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x48u); /* 0x00409641: mov byte ptr [esp + 0x2128], 0x48 */
    ecx = esp + 0x73C; /* 0x00409649: lea ecx, [esp + 0x73c] */
    PUSH32(esp, 0x007E707Cu); /* 0x00409650: push 0x7e707c */
    RECOMP_CALL(sub_00409FA0); /* 0x00409655: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x49u); /* 0x0040965A: mov byte ptr [esp + 0x2128], 0x49 */
    eax = esp + 0x4D0; /* 0x00409662: lea eax, [esp + 0x4d0] */
    PUSH32(esp, eax); /* 0x00409669: push eax */
    eax = esp + 0x740; /* 0x0040966A: lea eax, [esp + 0x740] */
    PUSH32(esp, eax); /* 0x00409671: push eax */
    ecx = esp + 0x1F8C; /* 0x00409672: lea ecx, [esp + 0x1f8c] */
    RECOMP_CALL(sub_006B9090); /* 0x00409679: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Bu); /* 0x0040967E: mov byte ptr [esp + 0x2128], 0x4b */
    /* cmp MEM32(esp + 0x750), 0x10u */ /* 0x00409686: cmp dword ptr [esp + 0x750], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x750)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004096B5; /* 0x0040968E: jb 0x4096b5 */
L_00409690:
    esi = MEM32(esp + 0x73C); /* 0x00409690: mov esi, dword ptr [esp + 0x73c] */
    ecx = esp + 0x10; /* 0x00409697: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040A4A0); /* 0x0040969B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x004096A0: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x004096A1: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x11; /* 0x004096A6: lea ecx, [esp + 0x11] */
    RECOMP_CALL(sub_0040A4A0); /* 0x004096AA: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x004096AF: push esi */
    RECOMP_ICALL(edi); /* 0x004096B0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x004096B2: add esp, 4 */
    _flag_k = FK_ADD;
L_004096B5:
    MEM32(esp + 0x750) = 0xFu; /* 0x004096B5: mov dword ptr [esp + 0x750], 0xf */
    MEM32(esp + 0x74C) = 0; /* 0x004096C0: mov dword ptr [esp + 0x74c], 0 */
    MEM8(esp + 0x73C) = (uint8_t)(0); /* 0x004096CB: mov byte ptr [esp + 0x73c], 0 */
    MEM8(esp + 0x2128) = (uint8_t)(0x4Cu); /* 0x004096D3: mov byte ptr [esp + 0x2128], 0x4c */
    ecx = esp + 0x4D0; /* 0x004096DB: lea ecx, [esp + 0x4d0] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004096E2: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x19; /* 0x004096E7: lea eax, [esp + 0x19] */
    MEM8(esp + 0x19) = (uint8_t)(0); /* 0x004096EB: mov byte ptr [esp + 0x19], 0 */
    PUSH32(esp, eax); /* 0x004096F0: push eax */
    PUSH32(esp, 0x007F3174u); /* 0x004096F1: push 0x7f3174 */
    ecx = esp + 0x1FB0; /* 0x004096F6: lea ecx, [esp + 0x1fb0] */
    RECOMP_CALL(sub_006B91C0); /* 0x004096FD: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Du); /* 0x00409702: mov byte ptr [esp + 0x2128], 0x4d */
    eax = esp + 0x1B; /* 0x0040970A: lea eax, [esp + 0x1b] */
    PUSH32(esp, eax); /* 0x0040970E: push eax */
    PUSH32(esp, 0x007F309Cu); /* 0x0040970F: push 0x7f309c */
    ecx = esp + 0x1FD4; /* 0x00409714: lea ecx, [esp + 0x1fd4] */
    MEM8(esp + 0x23) = (uint8_t)(0); /* 0x0040971B: mov byte ptr [esp + 0x23], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409720: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Eu); /* 0x00409725: mov byte ptr [esp + 0x2128], 0x4e */
    eax = esp + 0x1D; /* 0x0040972D: lea eax, [esp + 0x1d] */
    PUSH32(esp, eax); /* 0x00409731: push eax */
    PUSH32(esp, 0x007F3088u); /* 0x00409732: push 0x7f3088 */
    ecx = esp + 0x1FF8; /* 0x00409737: lea ecx, [esp + 0x1ff8] */
    MEM8(esp + 0x25) = (uint8_t)(0); /* 0x0040973E: mov byte ptr [esp + 0x25], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409743: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x4Fu); /* 0x00409748: mov byte ptr [esp + 0x2128], 0x4f */
    eax = esp + 0x1F; /* 0x00409750: lea eax, [esp + 0x1f] */
    PUSH32(esp, eax); /* 0x00409754: push eax */
    PUSH32(esp, 0x007F3130u); /* 0x00409755: push 0x7f3130 */
    ecx = esp + 0x201C; /* 0x0040975A: lea ecx, [esp + 0x201c] */
    MEM8(esp + 0x27) = (uint8_t)(0); /* 0x00409761: mov byte ptr [esp + 0x27], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409766: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x50u); /* 0x0040976B: mov byte ptr [esp + 0x2128], 0x50 */
    eax = esp + 0x21; /* 0x00409773: lea eax, [esp + 0x21] */
    PUSH32(esp, eax); /* 0x00409777: push eax */
    PUSH32(esp, 0x007FD740u); /* 0x00409778: push 0x7fd740 */
    ecx = esp + 0x2040; /* 0x0040977D: lea ecx, [esp + 0x2040] */
    MEM8(esp + 0x29) = (uint8_t)(0); /* 0x00409784: mov byte ptr [esp + 0x29], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409789: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x51u); /* 0x0040978E: mov byte ptr [esp + 0x2128], 0x51 */
    eax = esp + 0x23; /* 0x00409796: lea eax, [esp + 0x23] */
    PUSH32(esp, eax); /* 0x0040979A: push eax */
    PUSH32(esp, 0x007F3148u); /* 0x0040979B: push 0x7f3148 */
    ecx = esp + 0x2064; /* 0x004097A0: lea ecx, [esp + 0x2064] */
    MEM8(esp + 0x2B) = (uint8_t)(0); /* 0x004097A7: mov byte ptr [esp + 0x2b], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x004097AC: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x52u); /* 0x004097B1: mov byte ptr [esp + 0x2128], 0x52 */
    eax = esp + 0x25; /* 0x004097B9: lea eax, [esp + 0x25] */
    PUSH32(esp, eax); /* 0x004097BD: push eax */
    PUSH32(esp, 0x007F315Cu); /* 0x004097BE: push 0x7f315c */
    ecx = esp + 0x2088; /* 0x004097C3: lea ecx, [esp + 0x2088] */
    MEM8(esp + 0x2D) = (uint8_t)(0); /* 0x004097CA: mov byte ptr [esp + 0x2d], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x004097CF: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x53u); /* 0x004097D4: mov byte ptr [esp + 0x2128], 0x53 */
    eax = esp + 0x27; /* 0x004097DC: lea eax, [esp + 0x27] */
    PUSH32(esp, eax); /* 0x004097E0: push eax */
    PUSH32(esp, ecx); /* 0x004097E1: push ecx */
    ecx = esp + 0x20AC; /* 0x004097E2: lea ecx, [esp + 0x20ac] */
    MEM8(esp + 0x2F) = (uint8_t)(0); /* 0x004097E9: mov byte ptr [esp + 0x2f], 0 */
    RECOMP_CALL(sub_006B9A30); /* 0x004097EE: call 0x6b9a30 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x54u); /* 0x004097F3: mov byte ptr [esp + 0x2128], 0x54 */
    eax = esp + 0x29; /* 0x004097FB: lea eax, [esp + 0x29] */
    PUSH32(esp, eax); /* 0x004097FF: push eax */
    PUSH32(esp, 0x007F7EB8u); /* 0x00409800: push 0x7f7eb8 */
    ecx = esp + 0x20D0; /* 0x00409805: lea ecx, [esp + 0x20d0] */
    MEM8(esp + 0x31) = (uint8_t)(0); /* 0x0040980C: mov byte ptr [esp + 0x31], 0 */
    RECOMP_CALL(sub_006B91C0); /* 0x00409811: call 0x6b91c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x55u); /* 0x00409816: mov byte ptr [esp + 0x2128], 0x55 */
    MEM32(esp + 0x27C) = 0x3F800000u; /* 0x0040981E: mov dword ptr [esp + 0x27c], 0x3f800000 */
    MEM32(esp + 0x284) = 0x3E4CCCCDu; /* 0x00409829: mov dword ptr [esp + 0x284], 0x3e4ccccd */
    eax = esp + 0x27C; /* 0x00409834: lea eax, [esp + 0x27c] */
    MEM32(esp + 0x28C) = 0x3E4CCCCDu; /* 0x0040983B: mov dword ptr [esp + 0x28c], 0x3e4ccccd */
    PUSH32(esp, eax); /* 0x00409846: push eax */
    eax = esp + 0x288; /* 0x00409847: lea eax, [esp + 0x288] */
    PUSH32(esp, eax); /* 0x0040984E: push eax */
    eax = esp + 0x294; /* 0x0040984F: lea eax, [esp + 0x294] */
    PUSH32(esp, eax); /* 0x00409856: push eax */
    ecx = esp + 0x440; /* 0x00409857: lea ecx, [esp + 0x440] */
    RECOMP_CALL(sub_005F5C10); /* 0x0040985E: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x56u); /* 0x00409863: mov byte ptr [esp + 0x2128], 0x56 */
    ecx = esp + 0x784; /* 0x0040986B: lea ecx, [esp + 0x784] */
    PUSH32(esp, 0x007F7ED0u); /* 0x00409872: push 0x7f7ed0 */
    RECOMP_CALL(sub_00409FA0); /* 0x00409877: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x57u); /* 0x0040987C: mov byte ptr [esp + 0x2128], 0x57 */
    eax = esp + 0x434; /* 0x00409884: lea eax, [esp + 0x434] */
    PUSH32(esp, eax); /* 0x0040988B: push eax */
    eax = esp + 0x788; /* 0x0040988C: lea eax, [esp + 0x788] */
    PUSH32(esp, eax); /* 0x00409893: push eax */
    ecx = esp + 0x20F4; /* 0x00409894: lea ecx, [esp + 0x20f4] */
    RECOMP_CALL(sub_006B9090); /* 0x0040989B: call 0x6b9090 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x59u); /* 0x004098A0: mov byte ptr [esp + 0x2128], 0x59 */
    ecx = esp + 0x784; /* 0x004098A8: lea ecx, [esp + 0x784] */
    RECOMP_CALL(sub_0040A000); /* 0x004098AF: call 0x40a000 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x2128) = (uint8_t)(0x5Au); /* 0x004098B4: mov byte ptr [esp + 0x2128], 0x5a */
    ecx = esp + 0x434; /* 0x004098BC: lea ecx, [esp + 0x434] */
    RECOMP_CALL(sub_0041A4B0); /* 0x004098C3: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x2128) = 0x15Bu; /* 0x004098C8: mov dword ptr [esp + 0x2128], 0x15b */
    eax = esp + 0x2110; /* 0x004098D3: lea eax, [esp + 0x2110] */
    PUSH32(esp, eax); /* 0x004098DA: push eax */
    eax = esp + 0x7A0; /* 0x004098DB: lea eax, [esp + 0x7a0] */
    PUSH32(esp, eax); /* 0x004098E2: push eax */
    ecx = esp + 0x4E4; /* 0x004098E3: lea ecx, [esp + 0x4e4] */
    RECOMP_CALL(sub_006B9070); /* 0x004098EA: call 0x6b9070 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x004098EF: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x004098F2: push dword ptr [eax] */
    RECOMP_CALL(sub_006B8FF0); /* 0x004098F4: call 0x6b8ff0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x2128) = 0xFFFFFFFFu; /* 0x004098F9: mov dword ptr [esp + 0x2128], 0xffffffff */
    eax = esp + 0x79C; /* 0x00409904: lea eax, [esp + 0x79c] */
    PUSH32(esp, 0x00667480u); /* 0x0040990B: push 0x667480 */
    PUSH32(esp, 0xB5u); /* 0x00409910: push 0xb5 */
    PUSH32(esp, 0x24u); /* 0x00409915: push 0x24 */
    PUSH32(esp, eax); /* 0x00409917: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x00409918: call 0x77f628 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB4A0u); /* 0x0040991D: push 0x7cb4a0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00409922: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409927: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x2120); /* 0x0040992A: mov ecx, dword ptr [esp + 0x2120] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409931: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409938: pop ecx */
    edi = POP32_VAL(esp); /* 0x00409939: pop edi */
    esi = POP32_VAL(esp); /* 0x0040993A: pop esi */
    ecx = MEM32(esp + 0x210C); /* 0x0040993B: mov ecx, dword ptr [esp + 0x210c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00409942: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00409944: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00409949: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040994B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040994C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409950u);

L_00409950:
    PUSH32(esp, 8); /* 0x00409950: push 8 */
    PUSH32(esp, 0x008008F4u); /* 0x00409952: push 0x8008f4 */
    ecx = 0x00866050u; /* 0x00409957: mov ecx, 0x866050 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040995C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CB540u); /* 0x00409961: push 0x7cb540 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00409966: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040996B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040996C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040996D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040996Du);

L_0040996D:
    PUSH32(esp, 0x007CB594u); /* 0x0040996D: push 0x7cb594 */
    RECOMP_CALL(sub_0077F5B6); /* 0x00409972: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00409977: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409978: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409980u);

L_00409980:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409980: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409990u);

L_00409990:
    PUSH32(esp, ebp); /* 0x00409990: push ebp */
    ebp = esp; /* 0x00409991: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00409993: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x00409996: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040999E; /* 0x00409998: jne 0x40999e */
L_0040999A:
    eax = ecx; /* 0x0040999A: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x0040999C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040999D: ret  */
L_0040999E:
    PUSH32(esp, eax); /* 0x0040999E: push eax */
    PUSH32(esp, edx); /* 0x0040999F: push edx */
    PUSH32(esp, ecx); /* 0x004099A0: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x004099A1: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x004099A6: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x004099A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004099AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_004099B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004099B0u);

L_004099B0:
    PUSH32(esp, ebp); /* 0x004099B0: push ebp */
    ebp = esp; /* 0x004099B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x004099B3: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x004099B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_004099BE; /* 0x004099B8: jne 0x4099be */
L_004099BA:
    eax = ecx; /* 0x004099BA: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x004099BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004099BD: ret  */
L_004099BE:
    PUSH32(esp, eax); /* 0x004099BE: push eax */
    PUSH32(esp, edx); /* 0x004099BF: push edx */
    PUSH32(esp, ecx); /* 0x004099C0: push ecx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x004099C1: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x004099C7: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x004099CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004099CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_004099D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004099D0u);

L_004099D0:
    SET_LO8(eax, MEM8(edx)); /* 0x004099D0: mov al, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x004099D2: mov byte ptr [ecx], al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004099D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_004099E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004099E0u);

L_004099E0:
    MEM32(ecx) = 0x007CCF2Cu; /* 0x004099E0: mov dword ptr [ecx], 0x7ccf2c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004099E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_004099F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x004099F0u);

L_004099F0:
    PUSH32(esp, ebp); /* 0x004099F0: push ebp */
    ebp = esp; /* 0x004099F1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x004099F3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x004099F7: push esi */
    esi = ecx; /* 0x004099F8: mov esi, ecx */
    MEM32(esi) = 0x007CCF2Cu; /* 0x004099FA: mov dword ptr [esi], 0x7ccf2c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00409A0C; /* 0x00409A00: je 0x409a0c */
L_00409A02:
    PUSH32(esp, esi); /* 0x00409A02: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00409A03: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409A09: add esp, 4 */
    _flag_k = FK_ADD;
L_00409A0C:
    eax = esi; /* 0x00409A0C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00409A0E: pop esi */
    ebp = POP32_VAL(esp); /* 0x00409A0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409A10: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00409A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409A20u);

L_00409A20:
    PUSH32(esp, ebp); /* 0x00409A20: push ebp */
    ebp = esp; /* 0x00409A21: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00409A23: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x00409A26: mov edx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edx; /* 0x00409A29: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x00409A2B: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x00409A2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409A2F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409A40u);

L_00409A40:
    PUSH32(esp, ebp); /* 0x00409A40: push ebp */
    ebp = esp; /* 0x00409A41: mov ebp, esp */
    eax = MEM32(ecx); /* 0x00409A43: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x00409A45: lea edx, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00409A48: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00409A4B: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x00409A4E: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x00409A4F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x00409A52: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x00409A55: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, MEM32(edx + 0x4) */ /* 0x00409A58: cmp ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409A6B; /* 0x00409A5B: jne 0x409a6b */
L_00409A5D:
    eax = MEM32(eax); /* 0x00409A5D: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(edx) */ /* 0x00409A5F: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409A6B; /* 0x00409A61: jne 0x409a6b */
L_00409A63:
    SET_LO8(eax, 1); /* 0x00409A63: mov al, 1 */
    esp = ebp; /* 0x00409A65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409A67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409A68: ret 8 */
L_00409A6B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00409A6B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x00409A6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409A6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409A70: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409A80u);

L_00409A80:
    PUSH32(esp, ebp); /* 0x00409A80: push ebp */
    ebp = esp; /* 0x00409A81: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00409A83: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x00409A86: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409A98; /* 0x00409A89: jne 0x409a98 */
L_00409A8B:
    eax = MEM32(eax); /* 0x00409A8B: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x00409A8D: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409A98; /* 0x00409A90: jne 0x409a98 */
L_00409A92:
    SET_LO8(eax, 1); /* 0x00409A92: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x00409A94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409A95: ret 8 */
L_00409A98:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00409A98: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x00409A9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409A9B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409AA0u);

L_00409AA0:
    eax = 0x007CCE08u; /* 0x00409AA0: mov eax, 0x7cce08 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409AA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409AB0u);

L_00409AB0:
    PUSH32(esp, ebp); /* 0x00409AB0: push ebp */
    ebp = esp; /* 0x00409AB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409AB3: push -1 */
    PUSH32(esp, 0x00781699u); /* 0x00409AB5: push 0x781699 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409ABA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409AC0: push eax */
    PUSH32(esp, ecx); /* 0x00409AC1: push ecx */
    PUSH32(esp, esi); /* 0x00409AC2: push esi */
    PUSH32(esp, edi); /* 0x00409AC3: push edi */
    eax = MEM32(0x855000); /* 0x00409AC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409AC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409ACB: push eax */
    eax = ebp + (-0xC); /* 0x00409ACC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409ACF: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00409AD5: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00409AD8: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC408)); /* 0x00409ADF: call dword ptr [0x7cc408] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x00409AE5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409AE8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00409AEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x007CCE10u; /* 0x00409AED: mov edx, 0x7cce10 */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x00409AF2: cmovne edx, eax */
    MEM32(esi + 0x14) = 0xFu; /* 0x00409AF5: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00409AFC: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00409B03: mov byte ptr [esi], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x00409B06: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409B0F; /* 0x00409B09: jne 0x409b0f */
L_00409B0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00409B0B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00409B1D; /* 0x00409B0D: jmp 0x409b1d */
L_00409B0F:
    ecx = edx; /* 0x00409B0F: mov ecx, edx */
    edi = ecx + 0x1; /* 0x00409B11: lea edi, [ecx + 1] */
L_00409B14:
    SET_LO8(eax, MEM8(ecx)); /* 0x00409B14: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00409B16: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00409B17: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00409B14; /* 0x00409B19: jne 0x409b14 */
L_00409B1B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x00409B1B: sub ecx, edi */
    _flag_k = FK_CMP;
L_00409B1D:
    PUSH32(esp, ecx); /* 0x00409B1D: push ecx */
    PUSH32(esp, edx); /* 0x00409B1E: push edx */
    ecx = esi; /* 0x00409B1F: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00409B21: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00409B26: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00409B2D: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x00409B34: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409B36: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409B39: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409B40: pop ecx */
    edi = POP32_VAL(esp); /* 0x00409B41: pop edi */
    esi = POP32_VAL(esp); /* 0x00409B42: pop esi */
    esp = ebp; /* 0x00409B43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409B45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409B46: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409B50u);

L_00409B50:
    PUSH32(esp, ebp); /* 0x00409B50: push ebp */
    ebp = esp; /* 0x00409B51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409B53: push -1 */
    PUSH32(esp, 0x007816C8u); /* 0x00409B55: push 0x7816c8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409B5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409B60: push eax */
    PUSH32(esp, ecx); /* 0x00409B61: push ecx */
    PUSH32(esp, esi); /* 0x00409B62: push esi */
    eax = MEM32(0x855000); /* 0x00409B63: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409B68: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409B6A: push eax */
    eax = ebp + (-0xC); /* 0x00409B6B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409B6E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00409B74: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00409B76: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00409B79: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x00409B80: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x007CCF2Cu; /* 0x00409B84: mov dword ptr [esi], 0x7ccf2c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00409B96; /* 0x00409B8A: je 0x409b96 */
L_00409B8C:
    PUSH32(esp, esi); /* 0x00409B8C: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00409B8D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409B93: add esp, 4 */
    _flag_k = FK_ADD;
L_00409B96:
    eax = esi; /* 0x00409B96: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409B98: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409B9B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409BA2: pop ecx */
    esi = POP32_VAL(esp); /* 0x00409BA3: pop esi */
    esp = ebp; /* 0x00409BA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409BA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409BA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00409BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409BB0u);

L_00409BB0:
    PUSH32(esp, ebp); /* 0x00409BB0: push ebp */
    ebp = esp; /* 0x00409BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409BB3: push -1 */
    PUSH32(esp, 0x007816F8u); /* 0x00409BB5: push 0x7816f8 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409BC0: push eax */
    PUSH32(esp, ecx); /* 0x00409BC1: push ecx */
    eax = MEM32(0x855000); /* 0x00409BC2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409BC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409BC9: push eax */
    eax = ebp + (-0xC); /* 0x00409BCA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409BCD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00409BD3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00409BD6: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ecx) = 0x007CCF2Cu; /* 0x00409BDD: mov dword ptr [ecx], 0x7ccf2c */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409BE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409BE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409BED: pop ecx */
    esp = ebp; /* 0x00409BEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409BF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409BF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409C00u);

L_00409C00:
    eax = 0x007CCE20u; /* 0x00409C00: mov eax, 0x7cce20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409C05: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409C10u);

L_00409C10:
    PUSH32(esp, ebp); /* 0x00409C10: push ebp */
    ebp = esp; /* 0x00409C11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409C13: push -1 */
    PUSH32(esp, 0x00781739u); /* 0x00409C15: push 0x781739 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409C1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409C20: push eax */
    PUSH32(esp, ecx); /* 0x00409C21: push ecx */
    PUSH32(esp, esi); /* 0x00409C22: push esi */
    eax = MEM32(0x855000); /* 0x00409C23: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409C28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409C2A: push eax */
    eax = ebp + (-0xC); /* 0x00409C2B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409C2E: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0xC); /* 0x00409C34: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00409C37: mov dword ptr [ebp - 0x10], 0 */
    /* cmp eax, 1 */ /* 0x00409C3E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409C73; /* 0x00409C41: jne 0x409c73 */
L_00409C43:
    ecx = MEM32(ebp + 0x8); /* 0x00409C43: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x007CCE2Cu); /* 0x00409C46: push 0x7cce2c */
    RECOMP_CALL(sub_00409FA0); /* 0x00409C4B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00409C50: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00409C57: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ebp + 0x8); /* 0x00409C5E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409C61: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409C64: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409C6B: pop ecx */
    esi = POP32_VAL(esp); /* 0x00409C6C: pop esi */
    esp = ebp; /* 0x00409C6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409C6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409C70: ret 8 */
L_00409C73:
    esi = MEM32(ebp + 0x8); /* 0x00409C73: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x00409C76: push eax */
    PUSH32(esp, esi); /* 0x00409C77: push esi */
    RECOMP_CALL(sub_00409AB0); /* 0x00409C78: call 0x409ab0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00409C7D: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00409C84: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x00409C8B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409C8D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409C90: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409C97: pop ecx */
    esi = POP32_VAL(esp); /* 0x00409C98: pop esi */
    esp = ebp; /* 0x00409C99: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409C9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409C9C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409CA0u);

L_00409CA0:
    PUSH32(esp, ebp); /* 0x00409CA0: push ebp */
    ebp = esp; /* 0x00409CA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409CA3: push -1 */
    PUSH32(esp, 0x00781770u); /* 0x00409CA5: push 0x781770 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409CAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409CB0: push eax */
    PUSH32(esp, ecx); /* 0x00409CB1: push ecx */
    PUSH32(esp, esi); /* 0x00409CB2: push esi */
    eax = MEM32(0x855000); /* 0x00409CB3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409CB8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409CBA: push eax */
    eax = ebp + (-0xC); /* 0x00409CBB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409CBE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00409CC4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00409CC6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00409CC9: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x00409CD0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x007CCF2Cu; /* 0x00409CD4: mov dword ptr [esi], 0x7ccf2c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00409CE6; /* 0x00409CDA: je 0x409ce6 */
L_00409CDC:
    PUSH32(esp, esi); /* 0x00409CDC: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00409CDD: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409CE3: add esp, 4 */
    _flag_k = FK_ADD;
L_00409CE6:
    eax = esi; /* 0x00409CE6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409CE8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409CEB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409CF2: pop ecx */
    esi = POP32_VAL(esp); /* 0x00409CF3: pop esi */
    esp = ebp; /* 0x00409CF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409CF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409CF7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00409D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409D00u);

L_00409D00:
    eax = 0x007CCE44u; /* 0x00409D00: mov eax, 0x7cce44 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409D05: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409D10u);

L_00409D10:
    PUSH32(esp, ebp); /* 0x00409D10: push ebp */
    ebp = esp; /* 0x00409D11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00409D13: push -1 */
    PUSH32(esp, 0x00781699u); /* 0x00409D15: push 0x781699 */
    eax = MEM32(FS_BASE + (0)); /* 0x00409D1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00409D20: push eax */
    PUSH32(esp, ecx); /* 0x00409D21: push ecx */
    PUSH32(esp, esi); /* 0x00409D22: push esi */
    PUSH32(esp, edi); /* 0x00409D23: push edi */
    eax = MEM32(0x855000); /* 0x00409D24: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00409D29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00409D2B: push eax */
    eax = ebp + (-0xC); /* 0x00409D2C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00409D2F: mov dword ptr fs:[0], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00409D35: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00409D38: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_ICALL(MEM32(0x7CC404)); /* 0x00409D3F: call dword ptr [0x7cc404] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x00409D45: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409D48: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00409D4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x007CCE10u; /* 0x00409D4D: mov edx, 0x7cce10 */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x00409D52: cmovne edx, eax */
    MEM32(esi + 0x14) = 0xFu; /* 0x00409D55: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00409D5C: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00409D63: mov byte ptr [esi], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x00409D66: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409D6F; /* 0x00409D69: jne 0x409d6f */
L_00409D6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00409D6B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00409D7D; /* 0x00409D6D: jmp 0x409d7d */
L_00409D6F:
    ecx = edx; /* 0x00409D6F: mov ecx, edx */
    edi = ecx + 0x1; /* 0x00409D71: lea edi, [ecx + 1] */
L_00409D74:
    SET_LO8(eax, MEM8(ecx)); /* 0x00409D74: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00409D76: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00409D77: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00409D74; /* 0x00409D79: jne 0x409d74 */
L_00409D7B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x00409D7B: sub ecx, edi */
    _flag_k = FK_CMP;
L_00409D7D:
    PUSH32(esp, ecx); /* 0x00409D7D: push ecx */
    PUSH32(esp, edx); /* 0x00409D7E: push edx */
    ecx = esi; /* 0x00409D7F: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00409D81: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00409D86: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x00409D8D: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x00409D94: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00409D96: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00409D99: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00409DA0: pop ecx */
    edi = POP32_VAL(esp); /* 0x00409DA1: pop edi */
    esi = POP32_VAL(esp); /* 0x00409DA2: pop esi */
    esp = ebp; /* 0x00409DA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409DA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409DA6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409DB0u);

L_00409DB0:
    PUSH32(esp, ebp); /* 0x00409DB0: push ebp */
    ebp = esp; /* 0x00409DB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00409DB3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x00409DB4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x00409DB7: push esi */
    RECOMP_ICALL(MEM32(0x7CC408)); /* 0x00409DB8: call dword ptr [0x7cc408] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00409DBE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00409DC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x00409DC3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x00409DC6: mov dword ptr [eax], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00409DD6; /* 0x00409DC8: je 0x409dd6 */
L_00409DCA:
    MEM32(eax + 0x4) = 0x00866090u; /* 0x00409DCA: mov dword ptr [eax + 4], 0x866090 */
    esi = POP32_VAL(esp); /* 0x00409DD1: pop esi */
    ebp = POP32_VAL(esp); /* 0x00409DD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409DD3: ret 8 */
L_00409DD6:
    MEM32(eax + 0x4) = 0x0086608Cu; /* 0x00409DD6: mov dword ptr [eax + 4], 0x86608c */
    esi = POP32_VAL(esp); /* 0x00409DDD: pop esi */
    ebp = POP32_VAL(esp); /* 0x00409DDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409DDF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409DF0u);

L_00409DF0:
    PUSH32(esp, ebp); /* 0x00409DF0: push ebp */
    ebp = esp; /* 0x00409DF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00409DF3: push ecx */
    PUSH32(esp, esi); /* 0x00409DF4: push esi */
    PUSH32(esp, edi); /* 0x00409DF5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00409DF6: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x00409DF9: mov esi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00409DFB: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x00409DFC: mov dword ptr [ebp - 4], edx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_00409E10; /* 0x00409DFF: js 0x409e10 */
L_00409E01:
    PUSH32(esp, ebx); /* 0x00409E01: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x00409E02: mov ebx, dword ptr [ebp + 0xc] */
L_00409E05:
    ecx = esi; /* 0x00409E05: mov ecx, esi */
    RECOMP_ICALL(ebx); /* 0x00409E07: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4)); /* 0x00409E09: add esi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00409E0C: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_00409E05; /* 0x00409E0D: jns 0x409e05 */
L_00409E0F:
    ebx = POP32_VAL(esp); /* 0x00409E0F: pop ebx */
L_00409E10:
    edi = POP32_VAL(esp); /* 0x00409E10: pop edi */
    esi = POP32_VAL(esp); /* 0x00409E11: pop esi */
    esp = ebp; /* 0x00409E12: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00409E14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00409E15: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00409E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409E20u);

L_00409E20:
    PUSH32(esp, ebp); /* 0x00409E20: push ebp */
    ebp = esp; /* 0x00409E21: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00409E23: push ebx */
    PUSH32(esp, esi); /* 0x00409E24: push esi */
    esi = ecx; /* 0x00409E25: mov esi, ecx */
    PUSH32(esp, edi); /* 0x00409E27: push edi */
    MEM32(esi) = 0; /* 0x00409E28: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_0040A630); /* 0x00409E2E: call 0x40a630 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x00409E33: mov edx, dword ptr [ebp + 8] */
    ebx = eax; /* 0x00409E36: mov ebx, eax */
    _xmm[1].u64[0] = MEM32(edx + 0x6B50); _xmm[1].u64[1] = 0; /* 0x00409E38: movss xmm1, dword ptr [edx + 0x6b50] */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x00409E40: mulss xmm1, dword ptr [0x80951c] */
    MEM32(esi + 0x8) = _xmm[1].u32[0]; /* 0x00409E48: movss dword ptr [esi + 8], xmm1 */
    _xmm[0].u64[0] = MEM32(edx + 0x6B50); _xmm[0].u64[1] = 0; /* 0x00409E4D: movss xmm0, dword ptr [edx + 0x6b50] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809824))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409E55: ucomiss xmm0, dword ptr [0x809824] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x00409E5C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x00409E5D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_00409E69; /* 0x00409E60: jnp 0x409e69 */
L_00409E62:
    MEM32(esi + 0xC) = _xmm[1].u32[0]; /* 0x00409E62: movss dword ptr [esi + 0xc], xmm1 */
    goto L_00409EA1; /* 0x00409E67: jmp 0x409ea1 */
L_00409E69:
    eax = MEM32(ebx + 0x4); /* 0x00409E69: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00409E6C: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00409E6E: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00409E70: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x00409E73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00409E7B; /* 0x00409E75: jne 0x409e7b */
L_00409E77:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00409E77: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_00409E89; /* 0x00409E79: jmp 0x409e89 */
L_00409E7B:
    eax = MEM32(ecx); /* 0x00409E7B: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xCAB0); /* 0x00409E7D: mov eax, dword ptr [eax + 0xcab0] */
    SET_LO8(eax, MEM8(eax + 0x6B3C)); /* 0x00409E83: mov al, byte ptr [eax + 0x6b3c] */
L_00409E89:
    /* cmp MEM8(edx + 0x6B3C), LO8(eax) */ /* 0x00409E89: cmp byte ptr [edx + 0x6b3c], al */
    _flag_a = (uint32_t)(MEM8(edx + 0x6B3C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409E9A; /* 0x00409E8F: jne 0x409e9a */
L_00409E91:
    MEM32(esi + 0xC) = 0; /* 0x00409E91: mov dword ptr [esi + 0xc], 0 */
    goto L_00409EA1; /* 0x00409E98: jmp 0x409ea1 */
L_00409E9A:
    MEM32(esi + 0xC) = 0x42480000u; /* 0x00409E9A: mov dword ptr [esi + 0xc], 0x42480000 */
L_00409EA1:
    edx = 1; /* 0x00409EA1: mov edx, 1 */
    ecx = esi + 0x10; /* 0x00409EA6: lea ecx, [esi + 0x10] */
    esp = esp; /* 0x00409EA9: lea esp, [esp] */
L_00409EB0:
    eax = MEM32(ebx + 0x4); /* 0x00409EB0: mov eax, dword ptr [ebx + 4] */
    esi = MEM32(ebx); /* 0x00409EB3: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00409EB5: sub eax, esi */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO8(edx); /* 0x00409EB7: movzx edi, dl */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00409EBA: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00409EBD: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00409EF8; /* 0x00409EBF: jae 0x409ef8 */
L_00409EC1:
    eax = MEM32(esi + edi * 4); /* 0x00409EC1: mov eax, dword ptr [esi + edi*4] */
    /* test eax, eax */ /* 0x00409EC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00409EF8; /* 0x00409EC6: je 0x409ef8 */
L_00409EC8:
    /* cmp MEM32(eax + 0xCAB0), 0 */ /* 0x00409EC8: cmp dword ptr [eax + 0xcab0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xCAB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00409EF8; /* 0x00409ECF: je 0x409ef8 */
L_00409ED1:
    eax = MEM32(eax + 0xCAB0); /* 0x00409ED1: mov eax, dword ptr [eax + 0xcab0] */
    esi = MEM32(ebp + 0x8); /* 0x00409ED7: mov esi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax + 0x6B3C)); /* 0x00409EDA: mov al, byte ptr [eax + 0x6b3c] */
    /* cmp MEM8(esi + 0x6B3C), LO8(eax) */ /* 0x00409EE0: cmp byte ptr [esi + 0x6b3c], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x6B3C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409EF0; /* 0x00409EE6: jne 0x409ef0 */
L_00409EE8:
    MEM32(ecx) = 0; /* 0x00409EE8: mov dword ptr [ecx], 0 */
    goto L_00409EFE; /* 0x00409EEE: jmp 0x409efe */
L_00409EF0:
    MEM32(ecx) = 0x42480000u; /* 0x00409EF0: mov dword ptr [ecx], 0x42480000 */
    goto L_00409EFE; /* 0x00409EF6: jmp 0x409efe */
L_00409EF8:
    MEM32(ecx) = 0xBF800000u; /* 0x00409EF8: mov dword ptr [ecx], 0xbf800000 */
L_00409EFE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00409EFE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00409EFF: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x20u */ /* 0x00409F02: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00409EB0; /* 0x00409F05: jl 0x409eb0 */
L_00409F07:
    edi = POP32_VAL(esp); /* 0x00409F07: pop edi */
    esi = POP32_VAL(esp); /* 0x00409F08: pop esi */
    ebx = POP32_VAL(esp); /* 0x00409F09: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00409F0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409F0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00409F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409F10u);

L_00409F10:
    _xmm[2].u64[0] = MEM32(ecx + 0x8); _xmm[2].u64[1] = 0; /* 0x00409F10: movss xmm2, dword ptr [ecx + 8] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], sse_f32(MEM32(0x809824))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409F15: ucomiss xmm2, dword ptr [0x809824] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x00409F1C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x00409F1D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_00409F2A; /* 0x00409F20: jp 0x409f2a */
L_00409F22:
    _xmm[2].u64[0] = MEM32(0x809494); _xmm[2].u64[1] = 0; /* 0x00409F22: movss xmm2, dword ptr [0x809494] */
L_00409F2A:
    _xmm[0].u64[0] = MEM32(ecx); _xmm[0].u64[1] = 0; /* 0x00409F2A: movss xmm0, dword ptr [ecx] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x00409F2E: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809074))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409F32: comiss xmm0, dword ptr [0x809074] */
    _flag_k = FK_EFLAGS;
    MEM32(ecx) = _xmm[0].u32[0]; /* 0x00409F39: movss dword ptr [ecx], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00409F97; /* 0x00409F3D: jbe 0x409f97 */
L_00409F3F:
    _xmm[1].u64[0] = MEM32(0x8094FC); _xmm[1].u64[1] = 0; /* 0x00409F3F: movss xmm1, dword ptr [0x8094fc] */
    eax = ecx + 0xC; /* 0x00409F47: lea eax, [ecx + 0xc] */
    _xmm[3].u64[0] = MEM64(0x808E98); _xmm[3].u64[1] = 0; /* 0x00409F4A: movsd xmm3, qword ptr [0x808e98] */
    _xmm[4].u64[0] = MEM64(0x808D80); _xmm[4].u64[1] = 0; /* 0x00409F52: movsd xmm4, qword ptr [0x808d80] */
    MEM32(ecx) = 0; /* 0x00409F5A: mov dword ptr [ecx], 0 */
    ecx = 0x20u; /* 0x00409F60: mov ecx, 0x20 */
L_00409F65:
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x00409F65: movss xmm0, dword ptr [eax] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409F69: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00409F91; /* 0x00409F6C: jbe 0x409f91 */
L_00409F6E:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409F6E: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00409F71: cvtps2pd xmm0, xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00409F7C; /* 0x00409F74: jbe 0x409f7c */
L_00409F76:
    { double _s = _xmm[3].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x00409F76: subsd xmm0, xmm3 */
    goto L_00409F80; /* 0x00409F7A: jmp 0x409f80 */
L_00409F7C:
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x00409F7C: subsd xmm0, xmm4 */
L_00409F80:
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x00409F80: cvtpd2ps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00409F84: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    MEM32(eax) = _xmm[0].u32[0]; /* 0x00409F87: movss dword ptr [eax], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00409F91; /* 0x00409F8B: jbe 0x409f91 */
L_00409F8D:
    MEM32(eax) = _xmm[2].u32[0]; /* 0x00409F8D: movss dword ptr [eax], xmm2 */
L_00409F91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00409F91: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00409F94: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00409F65; /* 0x00409F95: jne 0x409f65 */
L_00409F97:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00409F97: ret  */
    RECOMP_REGS_OUT();
}

void sub_00409FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00409FA0u);

L_00409FA0:
    PUSH32(esp, ebp); /* 0x00409FA0: push ebp */
    ebp = esp; /* 0x00409FA1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00409FA3: push esi */
    esi = ecx; /* 0x00409FA4: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x00409FA6: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x00409FA9: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00409FB0: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x00409FB7: mov byte ptr [esi], 0 */
    /* cmp MEM8(ecx), 0 */ /* 0x00409FBA: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00409FD1; /* 0x00409FBD: jne 0x409fd1 */
L_00409FBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00409FBF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x00409FC1: push edx */
    PUSH32(esp, ecx); /* 0x00409FC2: push ecx */
    ecx = esi; /* 0x00409FC3: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00409FC5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x00409FCA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00409FCC: pop esi */
    ebp = POP32_VAL(esp); /* 0x00409FCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409FCE: ret 4 */
L_00409FD1:
    edx = ecx; /* 0x00409FD1: mov edx, ecx */
    PUSH32(esp, edi); /* 0x00409FD3: push edi */
    edi = edx + 0x1; /* 0x00409FD4: lea edi, [edx + 1] */
L_00409FD7:
    SET_LO8(eax, MEM8(edx)); /* 0x00409FD7: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00409FD9: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00409FDA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00409FD7; /* 0x00409FDC: jne 0x409fd7 */
L_00409FDE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x00409FDE: sub edx, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x00409FE0: pop edi */
    PUSH32(esp, edx); /* 0x00409FE1: push edx */
    PUSH32(esp, ecx); /* 0x00409FE2: push ecx */
    ecx = esi; /* 0x00409FE3: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00409FE5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x00409FEA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00409FEC: pop esi */
    ebp = POP32_VAL(esp); /* 0x00409FED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00409FEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A000u);

L_0040A000:
    PUSH32(esp, esi); /* 0x0040A000: push esi */
    esi = ecx; /* 0x0040A001: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A003: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A014; /* 0x0040A007: jb 0x40a014 */
L_0040A009:
    PUSH32(esp, MEM32(esi)); /* 0x0040A009: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A00B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A011: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A014:
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A014: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0040A01B: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0040A022: mov byte ptr [esi], 0 */
    esi = POP32_VAL(esp); /* 0x0040A025: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A026: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A030u);

L_0040A030:
    PUSH32(esp, ebp); /* 0x0040A030: push ebp */
    ebp = esp; /* 0x0040A031: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0040A033: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0040A034: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040A037: push esi */
    PUSH32(esp, edi); /* 0x0040A038: push edi */
    esi = ecx; /* 0x0040A039: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x0040A03B: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebx + 0x10); /* 0x0040A03E: mov edi, dword ptr [ebx + 0x10] */
    /* cmp edi, ecx */ /* 0x0040A041: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A050; /* 0x0040A043: jae 0x40a050 */
L_0040A045:
    PUSH32(esp, 0x007CCE6Cu); /* 0x0040A045: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x0040A04A: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_0040A050:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0040A050: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x0040A052: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = MEM32(ebp + 0x10); } /* 0x0040A055: cmovb edi, dword ptr [ebp + 0x10] */
    /* cmp esi, ebx */ /* 0x0040A059: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040A0AB; /* 0x0040A05B: jne 0x40a0ab */
L_0040A05D:
    eax = edi + ecx; /* 0x0040A05D: lea eax, [edi + ecx] */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x0040A060: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A070; /* 0x0040A063: jae 0x40a070 */
L_0040A065:
    PUSH32(esp, 0x007CCE6Cu); /* 0x0040A065: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x0040A06A: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_0040A070:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A070: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = eax; /* 0x0040A074: mov dword ptr [esi + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A092; /* 0x0040A077: jb 0x40a092 */
L_0040A079:
    edx = MEM32(esi); /* 0x0040A079: mov edx, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x0040A07B: push ecx */
    PUSH32(esp, 0); /* 0x0040A07C: push 0 */
    ecx = esi; /* 0x0040A07E: mov ecx, esi */
    MEM8(edx + eax) = (uint8_t)(0); /* 0x0040A080: mov byte ptr [edx + eax], 0 */
    RECOMP_CALL(sub_0040A150); /* 0x0040A084: call 0x40a150 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0040A089: pop edi */
    eax = esi; /* 0x0040A08A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A08C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A08D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A08E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A08F: ret 0xc */
L_0040A092:
    edx = esi; /* 0x0040A092: mov edx, esi */
    PUSH32(esp, ecx); /* 0x0040A094: push ecx */
    PUSH32(esp, 0); /* 0x0040A095: push 0 */
    ecx = esi; /* 0x0040A097: mov ecx, esi */
    MEM8(edx + eax) = (uint8_t)(0); /* 0x0040A099: mov byte ptr [edx + eax], 0 */
    RECOMP_CALL(sub_0040A150); /* 0x0040A09D: call 0x40a150 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0040A0A2: pop edi */
    eax = esi; /* 0x0040A0A3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A0A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A0A6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A0A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A0A8: ret 0xc */
L_0040A0AB:
    /* cmp edi, 0xFFFFFFFEu */ /* 0x0040A0AB: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A0BB; /* 0x0040A0AE: jbe 0x40a0bb */
L_0040A0B0:
    PUSH32(esp, 0x007CCE5Cu); /* 0x0040A0B0: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0040A0B5: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0040A0BB:
    eax = MEM32(esi + 0x14); /* 0x0040A0BB: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x0040A0BE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A0E6; /* 0x0040A0C0: jae 0x40a0e6 */
L_0040A0C2:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0040A0C2: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x0040A0C5: mov ecx, esi */
    PUSH32(esp, edi); /* 0x0040A0C7: push edi */
    RECOMP_CALL(sub_0040A4B0); /* 0x0040A0C8: call 0x40a4b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x0040A0CD: mov ecx, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x0040A0D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A13E; /* 0x0040A0D2: je 0x40a13e */
L_0040A0D4:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x0040A0D4: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A0DC; /* 0x0040A0D8: jb 0x40a0dc */
L_0040A0DA:
    ebx = MEM32(ebx); /* 0x0040A0DA: mov ebx, dword ptr [ebx] */
L_0040A0DC:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A0DC: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A10C; /* 0x0040A0E0: jb 0x40a10c */
L_0040A0E2:
    edx = MEM32(esi); /* 0x0040A0E2: mov edx, dword ptr [esi] */
    goto L_0040A10E; /* 0x0040A0E4: jmp 0x40a10e */
L_0040A0E6:
    /* test edi, edi */ /* 0x0040A0E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040A0D4; /* 0x0040A0E8: jne 0x40a0d4 */
L_0040A0EA:
    MEM32(esi + 0x10) = edi; /* 0x0040A0EA: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 0x10u */ /* 0x0040A0ED: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A100; /* 0x0040A0F0: jb 0x40a100 */
L_0040A0F2:
    eax = MEM32(esi); /* 0x0040A0F2: mov eax, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x0040A0F4: pop edi */
    MEM8(eax) = (uint8_t)(0); /* 0x0040A0F5: mov byte ptr [eax], 0 */
    eax = esi; /* 0x0040A0F8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A0FA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A0FB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A0FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A0FD: ret 0xc */
L_0040A100:
    eax = esi; /* 0x0040A100: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A102: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A103: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A104: pop ebx */
    MEM8(eax) = (uint8_t)(0); /* 0x0040A105: mov byte ptr [eax], 0 */
    ebp = POP32_VAL(esp); /* 0x0040A108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A109: ret 0xc */
L_0040A10C:
    edx = esi; /* 0x0040A10C: mov edx, esi */
L_0040A10E:
    /* test edi, edi */ /* 0x0040A10E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A120; /* 0x0040A110: je 0x40a120 */
L_0040A112:
    PUSH32(esp, edi); /* 0x0040A112: push edi */
    eax = ebx + ecx; /* 0x0040A113: lea eax, [ebx + ecx] */
    PUSH32(esp, eax); /* 0x0040A116: push eax */
    PUSH32(esp, edx); /* 0x0040A117: push edx */
    RECOMP_CALL(sub_00780838); /* 0x0040A118: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A11D: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A120:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A120: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x0040A124: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A138; /* 0x0040A127: jb 0x40a138 */
L_0040A129:
    eax = MEM32(esi); /* 0x0040A129: mov eax, dword ptr [esi] */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A12B: mov byte ptr [eax + edi], 0 */
    eax = esi; /* 0x0040A12F: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A131: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A132: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A133: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A134: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A135: ret 0xc */
L_0040A138:
    eax = esi; /* 0x0040A138: mov eax, esi */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A13A: mov byte ptr [eax + edi], 0 */
L_0040A13E:
    edi = POP32_VAL(esp); /* 0x0040A13E: pop edi */
    eax = esi; /* 0x0040A13F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A141: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A142: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A143: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A144: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0040A150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A150u);

L_0040A150:
    PUSH32(esp, ebp); /* 0x0040A150: push ebp */
    ebp = esp; /* 0x0040A151: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0040A153: push esi */
    esi = ecx; /* 0x0040A154: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0040A156: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0040A159: push edi */
    edi = MEM32(esi + 0x10); /* 0x0040A15A: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, ecx */ /* 0x0040A15D: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A16C; /* 0x0040A15F: jae 0x40a16c */
L_0040A161:
    PUSH32(esp, 0x007CCE6Cu); /* 0x0040A161: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x0040A166: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_0040A16C:
    edx = MEM32(ebp + 0xC); /* 0x0040A16C: mov edx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x0040A16F: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0040A171: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x0040A173: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0040A19A; /* 0x0040A175: ja 0x40a19a */
L_0040A177:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A177: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x0040A17B: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A18E; /* 0x0040A17E: jb 0x40a18e */
L_0040A180:
    eax = MEM32(esi); /* 0x0040A180: mov eax, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x0040A182: pop edi */
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x0040A183: mov byte ptr [eax + ecx], 0 */
    eax = esi; /* 0x0040A187: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A189: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A18A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A18B: ret 8 */
L_0040A18E:
    eax = esi; /* 0x0040A18E: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A190: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A191: pop esi */
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x0040A192: mov byte ptr [eax + ecx], 0 */
    ebp = POP32_VAL(esp); /* 0x0040A196: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A197: ret 8 */
L_0040A19A:
    /* test edx, edx */ /* 0x0040A19A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A1E3; /* 0x0040A19C: je 0x40a1e3 */
L_0040A19E:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A19E: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A1A8; /* 0x0040A1A2: jb 0x40a1a8 */
L_0040A1A4:
    eax = MEM32(esi); /* 0x0040A1A4: mov eax, dword ptr [esi] */
    goto L_0040A1AA; /* 0x0040A1A6: jmp 0x40a1aa */
L_0040A1A8:
    eax = esi; /* 0x0040A1A8: mov eax, esi */
L_0040A1AA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x0040A1AA: sub edi, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040A1AC: push ebx */
    ebx = eax + ecx; /* 0x0040A1AD: lea ebx, [eax + ecx] */
    eax = edi; /* 0x0040A1B0: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0040A1B2: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0040A1C5; /* 0x0040A1B4: je 0x40a1c5 */
L_0040A1B6:
    PUSH32(esp, eax); /* 0x0040A1B6: push eax */
    eax = ebx + edx; /* 0x0040A1B7: lea eax, [ebx + edx] */
    PUSH32(esp, eax); /* 0x0040A1BA: push eax */
    PUSH32(esp, ebx); /* 0x0040A1BB: push ebx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x0040A1BC: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A1C2: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A1C5:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A1C5: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x0040A1C9: mov dword ptr [esi + 0x10], edi */
    ebx = POP32_VAL(esp); /* 0x0040A1CC: pop ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A1DD; /* 0x0040A1CD: jb 0x40a1dd */
L_0040A1CF:
    eax = MEM32(esi); /* 0x0040A1CF: mov eax, dword ptr [esi] */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A1D1: mov byte ptr [eax + edi], 0 */
    eax = esi; /* 0x0040A1D5: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A1D7: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A1D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A1D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A1DA: ret 8 */
L_0040A1DD:
    eax = esi; /* 0x0040A1DD: mov eax, esi */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A1DF: mov byte ptr [eax + edi], 0 */
L_0040A1E3:
    edi = POP32_VAL(esp); /* 0x0040A1E3: pop edi */
    eax = esi; /* 0x0040A1E4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A1E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A1E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A1E8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A1F0u);

L_0040A1F0:
    PUSH32(esp, ebp); /* 0x0040A1F0: push ebp */
    ebp = esp; /* 0x0040A1F1: mov ebp, esp */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x0040A1F3: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x0040A1F7: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x10) = edx; /* 0x0040A1FA: mov dword ptr [ecx + 0x10], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A209; /* 0x0040A1FD: jb 0x40a209 */
L_0040A1FF:
    eax = MEM32(ecx); /* 0x0040A1FF: mov eax, dword ptr [ecx] */
    MEM8(eax + edx) = (uint8_t)(0); /* 0x0040A201: mov byte ptr [eax + edx], 0 */
    ebp = POP32_VAL(esp); /* 0x0040A205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A206: ret 4 */
L_0040A209:
    MEM8(ecx + edx) = (uint8_t)(0); /* 0x0040A209: mov byte ptr [ecx + edx], 0 */
    ebp = POP32_VAL(esp); /* 0x0040A20D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A20E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A220u);

L_0040A220:
    PUSH32(esp, ebp); /* 0x0040A220: push ebp */
    ebp = esp; /* 0x0040A221: mov ebp, esp */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x0040A223: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x0040A227: push esi */
    PUSH32(esp, edi); /* 0x0040A228: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0040A229: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x0040A22C: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040A253; /* 0x0040A22E: je 0x40a253 */
L_0040A230:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A230: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A253; /* 0x0040A234: jb 0x40a253 */
L_0040A236:
    PUSH32(esp, ebx); /* 0x0040A236: push ebx */
    ebx = MEM32(esi); /* 0x0040A237: mov ebx, dword ptr [esi] */
    /* test edi, edi */ /* 0x0040A239: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A248; /* 0x0040A23B: je 0x40a248 */
L_0040A23D:
    PUSH32(esp, edi); /* 0x0040A23D: push edi */
    PUSH32(esp, ebx); /* 0x0040A23E: push ebx */
    PUSH32(esp, esi); /* 0x0040A23F: push esi */
    RECOMP_CALL(sub_00780838); /* 0x0040A240: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A245: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A248:
    PUSH32(esp, ebx); /* 0x0040A248: push ebx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A249: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A24F: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x0040A252: pop ebx */
L_0040A253:
    MEM32(esi + 0x10) = edi; /* 0x0040A253: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A256: mov dword ptr [esi + 0x14], 0xf */
    MEM8(edi + esi) = (uint8_t)(0); /* 0x0040A25D: mov byte ptr [edi + esi], 0 */
    edi = POP32_VAL(esp); /* 0x0040A261: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A262: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A263: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A264: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A270u);

L_0040A270:
    PUSH32(esp, ebp); /* 0x0040A270: push ebp */
    ebp = esp; /* 0x0040A271: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0040A273: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A276: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A27C: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0040A27F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A280: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A290u);

L_0040A290:
    PUSH32(esp, ebp); /* 0x0040A290: push ebp */
    ebp = esp; /* 0x0040A291: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0040A293: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0040A296: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x0040A298: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A2B7; /* 0x0040A29A: je 0x40a2b7 */
L_0040A29C:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0040A29C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0040A2B1; /* 0x0040A29F: ja 0x40a2b1 */
L_0040A2A1:
    PUSH32(esp, eax); /* 0x0040A2A1: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040A2A2: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0040A2A8: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A2AA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x0040A2AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040A2B7; /* 0x0040A2AF: jne 0x40a2b7 */
L_0040A2B1:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0040A2B1: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0040A2B7:
    eax = ecx; /* 0x0040A2B7: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x0040A2B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A2BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A2C0u);

L_0040A2C0:
    MEM32(ecx + 0x10) = 0; /* 0x0040A2C0: mov dword ptr [ecx + 0x10], 0 */
    eax = ecx; /* 0x0040A2C7: mov eax, ecx */
    MEM32(ecx + 0x14) = 0; /* 0x0040A2C9: mov dword ptr [ecx + 0x14], 0 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A2D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A2E0u);

L_0040A2E0:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x0040A2E0: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A2E9; /* 0x0040A2E4: jb 0x40a2e9 */
L_0040A2E6:
    eax = MEM32(ecx); /* 0x0040A2E6: mov eax, dword ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A2E8: ret  */
L_0040A2E9:
    eax = ecx; /* 0x0040A2E9: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A2EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A2F0u);

L_0040A2F0:
    PUSH32(esp, ebp); /* 0x0040A2F0: push ebp */
    ebp = esp; /* 0x0040A2F1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0040A2F3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0040A2F4: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040A2F7: push esi */
    esi = ecx; /* 0x0040A2F8: mov esi, ecx */
    /* test ebx, ebx */ /* 0x0040A2FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A355; /* 0x0040A2FC: je 0x40a355 */
L_0040A2FE:
    ecx = MEM32(esi + 0x14); /* 0x0040A2FE: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x10u */ /* 0x0040A301: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A30A; /* 0x0040A304: jb 0x40a30a */
L_0040A306:
    eax = MEM32(esi); /* 0x0040A306: mov eax, dword ptr [esi] */
    goto L_0040A30C; /* 0x0040A308: jmp 0x40a30c */
L_0040A30A:
    eax = esi; /* 0x0040A30A: mov eax, esi */
L_0040A30C:
    /* cmp ebx, eax */ /* 0x0040A30C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A355; /* 0x0040A30E: jb 0x40a355 */
L_0040A310:
    /* cmp ecx, 0x10u */ /* 0x0040A310: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A319; /* 0x0040A313: jb 0x40a319 */
L_0040A315:
    edx = MEM32(esi); /* 0x0040A315: mov edx, dword ptr [esi] */
    goto L_0040A31B; /* 0x0040A317: jmp 0x40a31b */
L_0040A319:
    edx = esi; /* 0x0040A319: mov edx, esi */
L_0040A31B:
    eax = MEM32(esi + 0x10); /* 0x0040A31B: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0040A31E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x0040A320: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A355; /* 0x0040A322: jbe 0x40a355 */
L_0040A324:
    /* cmp ecx, 0x10u */ /* 0x0040A324: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A33F; /* 0x0040A327: jb 0x40a33f */
L_0040A329:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0040A329: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x0040A32C: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0040A32E: mov ecx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0040A330: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040A332: push ebx */
    PUSH32(esp, esi); /* 0x0040A333: push esi */
    RECOMP_CALL(sub_0040A030); /* 0x0040A334: call 0x40a030 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0040A339: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A33A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A33B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A33C: ret 8 */
L_0040A33F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0040A33F: push dword ptr [ebp + 0xc] */
    eax = esi; /* 0x0040A342: mov eax, esi */
    ecx = esi; /* 0x0040A344: mov ecx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0040A346: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040A348: push ebx */
    PUSH32(esp, esi); /* 0x0040A349: push esi */
    RECOMP_CALL(sub_0040A030); /* 0x0040A34A: call 0x40a030 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0040A34F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A350: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A351: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A352: ret 8 */
L_0040A355:
    PUSH32(esp, edi); /* 0x0040A355: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0040A356: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x0040A359: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A369; /* 0x0040A35C: jbe 0x40a369 */
L_0040A35E:
    PUSH32(esp, 0x007CCE5Cu); /* 0x0040A35E: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0040A363: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0040A369:
    eax = MEM32(esi + 0x14); /* 0x0040A369: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x0040A36C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A389; /* 0x0040A36E: jae 0x40a389 */
L_0040A370:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0040A370: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x0040A373: mov ecx, esi */
    PUSH32(esp, edi); /* 0x0040A375: push edi */
    RECOMP_CALL(sub_0040A4B0); /* 0x0040A376: call 0x40a4b0 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x0040A37B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A3DE; /* 0x0040A37D: je 0x40a3de */
L_0040A37F:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A37F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A3AF; /* 0x0040A383: jb 0x40a3af */
L_0040A385:
    eax = MEM32(esi); /* 0x0040A385: mov eax, dword ptr [esi] */
    goto L_0040A3B1; /* 0x0040A387: jmp 0x40a3b1 */
L_0040A389:
    /* test edi, edi */ /* 0x0040A389: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040A37F; /* 0x0040A38B: jne 0x40a37f */
L_0040A38D:
    MEM32(esi + 0x10) = edi; /* 0x0040A38D: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 0x10u */ /* 0x0040A390: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A3A3; /* 0x0040A393: jb 0x40a3a3 */
L_0040A395:
    eax = MEM32(esi); /* 0x0040A395: mov eax, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x0040A397: pop edi */
    MEM8(eax) = (uint8_t)(0); /* 0x0040A398: mov byte ptr [eax], 0 */
    eax = esi; /* 0x0040A39B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A39D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A39E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A39F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A3A0: ret 8 */
L_0040A3A3:
    eax = esi; /* 0x0040A3A3: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A3A5: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A3A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A3A7: pop ebx */
    MEM8(eax) = (uint8_t)(0); /* 0x0040A3A8: mov byte ptr [eax], 0 */
    ebp = POP32_VAL(esp); /* 0x0040A3AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A3AC: ret 8 */
L_0040A3AF:
    eax = esi; /* 0x0040A3AF: mov eax, esi */
L_0040A3B1:
    /* test edi, edi */ /* 0x0040A3B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A3C0; /* 0x0040A3B3: je 0x40a3c0 */
L_0040A3B5:
    PUSH32(esp, edi); /* 0x0040A3B5: push edi */
    PUSH32(esp, ebx); /* 0x0040A3B6: push ebx */
    PUSH32(esp, eax); /* 0x0040A3B7: push eax */
    RECOMP_CALL(sub_00780838); /* 0x0040A3B8: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A3BD: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A3C0:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A3C0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x0040A3C4: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A3D8; /* 0x0040A3C7: jb 0x40a3d8 */
L_0040A3C9:
    eax = MEM32(esi); /* 0x0040A3C9: mov eax, dword ptr [esi] */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A3CB: mov byte ptr [eax + edi], 0 */
    eax = esi; /* 0x0040A3CF: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0040A3D1: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A3D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A3D3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A3D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A3D5: ret 8 */
L_0040A3D8:
    eax = esi; /* 0x0040A3D8: mov eax, esi */
    MEM8(eax + edi) = (uint8_t)(0); /* 0x0040A3DA: mov byte ptr [eax + edi], 0 */
L_0040A3DE:
    edi = POP32_VAL(esp); /* 0x0040A3DE: pop edi */
    eax = esi; /* 0x0040A3DF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040A3E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A3E2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0040A3E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A3E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A3F0u);

L_0040A3F0:
    PUSH32(esp, ebp); /* 0x0040A3F0: push ebp */
    ebp = esp; /* 0x0040A3F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0040A3F3: push esi */
    PUSH32(esp, edi); /* 0x0040A3F4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0040A3F5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x0040A3F8: mov esi, ecx */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x0040A3FA: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A40A; /* 0x0040A3FD: jbe 0x40a40a */
L_0040A3FF:
    PUSH32(esp, 0x007CCE5Cu); /* 0x0040A3FF: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0040A404: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0040A40A:
    eax = MEM32(esi + 0x14); /* 0x0040A40A: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x0040A40D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A428; /* 0x0040A40F: jae 0x40a428 */
L_0040A411:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0040A411: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x0040A414: push edi */
    RECOMP_CALL(sub_0040A4B0); /* 0x0040A415: call 0x40a4b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040A41A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x0040A41C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0040A41E: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0040A41F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0040A421: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0040A423: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A424: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A425: ret 8 */
L_0040A428:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x0040A428: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040A47F; /* 0x0040A42C: je 0x40a47f */
L_0040A42E:
    /* cmp edi, 0x10u */ /* 0x0040A42E: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040A47F; /* 0x0040A431: jae 0x40a47f */
L_0040A433:
    PUSH32(esp, ebx); /* 0x0040A433: push ebx */
    ebx = MEM32(esi + 0x10); /* 0x0040A434: mov ebx, dword ptr [esi + 0x10] */
    /* cmp edi, ebx */ /* 0x0040A437: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ebx = edi; } /* 0x0040A439: cmovb ebx, edi */
    /* cmp eax, 0x10u */ /* 0x0040A43C: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A462; /* 0x0040A43F: jb 0x40a462 */
L_0040A441:
    eax = MEM32(esi); /* 0x0040A441: mov eax, dword ptr [esi] */
    MEM32(ebp + 0xC) = eax; /* 0x0040A443: mov dword ptr [ebp + 0xc], eax */
    /* test ebx, ebx */ /* 0x0040A446: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A458; /* 0x0040A448: je 0x40a458 */
L_0040A44A:
    PUSH32(esp, ebx); /* 0x0040A44A: push ebx */
    PUSH32(esp, eax); /* 0x0040A44B: push eax */
    PUSH32(esp, esi); /* 0x0040A44C: push esi */
    RECOMP_CALL(sub_00780838); /* 0x0040A44D: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0040A452: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A455: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A458:
    PUSH32(esp, eax); /* 0x0040A458: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A459: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A45F: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A462:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040A462: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ebx; /* 0x0040A464: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A467: mov dword ptr [esi + 0x14], 0xf */
    /* cmp eax, edi */ /* 0x0040A46E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebx + esi) = (uint8_t)(0); /* 0x0040A470: mov byte ptr [ebx + esi], 0 */
    ebx = POP32_VAL(esp); /* 0x0040A474: pop ebx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0040A475: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x0040A477: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0040A478: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0040A47A: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A47B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A47C: ret 8 */
L_0040A47F:
    /* test edi, edi */ /* 0x0040A47F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040A490; /* 0x0040A481: jne 0x40a490 */
L_0040A483:
    MEM32(esi + 0x10) = edi; /* 0x0040A483: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 0x10u */ /* 0x0040A486: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A48D; /* 0x0040A489: jb 0x40a48d */
L_0040A48B:
    esi = MEM32(esi); /* 0x0040A48B: mov esi, dword ptr [esi] */
L_0040A48D:
    MEM8(esi) = (uint8_t)(0); /* 0x0040A48D: mov byte ptr [esi], 0 */
L_0040A490:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040A490: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x0040A492: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0040A494: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0040A495: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0040A497: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0040A499: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040A49A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A49B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A4A0u);

L_0040A4A0:
    eax = ecx; /* 0x0040A4A0: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A4A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A4B0u);
    RECOMP_EH_ENTER();

L_0040A4B0:
    PUSH32(esp, ebp); /* 0x0040A4B0: push ebp */
    ebp = esp; /* 0x0040A4B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A4B3: push -1 */
    PUSH32(esp, 0x00781795u); /* 0x0040A4B5: push 0x781795 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A4BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A4C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0040A4C1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040A4C4: push ebx */
    PUSH32(esp, esi); /* 0x0040A4C5: push esi */
    PUSH32(esp, edi); /* 0x0040A4C6: push edi */
    eax = MEM32(0x855000); /* 0x0040A4C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A4CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A4CE: push eax */
    eax = ebp + (-0xC); /* 0x0040A4CF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A4D2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0040A4D8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x0040A4DB: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x0040A4DD: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(ebp + 0x8); /* 0x0040A4E0: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x0040A4E3: mov edi, eax */
    _flag_a = (uint32_t)((edi | 0xFu)); _flag_b = (uint32_t)((edi | 0xFu));
    edi = edi | 0xFu; /* 0x0040A4E5: or edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFFFFEu */ /* 0x0040A4E8: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A4F1; /* 0x0040A4EB: jbe 0x40a4f1 */
L_0040A4ED:
    edi = eax; /* 0x0040A4ED: mov edi, eax */
    goto L_0040A518; /* 0x0040A4EF: jmp 0x40a518 */
L_0040A4F1:
    ebx = MEM32(esi + 0x14); /* 0x0040A4F1: mov ebx, dword ptr [esi + 0x14] */
    ecx = ebx; /* 0x0040A4F4: mov ecx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x0040A4F6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x0040A4F6: shr ecx, 1 */
    eax = 0xAAAAAAABu; /* 0x0040A4F8: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x0040A4FD: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0040A4FF: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0040A4FF: shr edx, 1 */
    /* cmp ecx, edx */ /* 0x0040A501: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A518; /* 0x0040A503: jbe 0x40a518 */
L_0040A505:
    eax = 0xFFFFFFFEu; /* 0x0040A505: mov eax, 0xfffffffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0040A50A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x0040A50C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx + ebx; /* 0x0040A50E: lea edi, [ecx + ebx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_0040A518; /* 0x0040A511: jbe 0x40a518 */
L_0040A513:
    edi = 0xFFFFFFFEu; /* 0x0040A513: mov edi, 0xfffffffe */
L_0040A518:
    MEM32(ebp + (-0x4)) = 0; /* 0x0040A518: mov dword ptr [ebp - 4], 0 */
    eax = edi + 0x1; /* 0x0040A51F: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x0040A522: push eax */
    RECOMP_CALL(sub_0040A290); /* 0x0040A523: call 0x40a290 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x0040A528: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A52B: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_0040A568; /* 0x0040A532: jmp 0x40a568 */
L_0040A558:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A558: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + (-0x18)); /* 0x0040A55F: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x8); /* 0x0040A562: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x0040A565: mov eax, dword ptr [ebp - 0x14] */
L_0040A568:
    ebx = MEM32(ebp + 0xC); /* 0x0040A568: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x0040A56B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A58A; /* 0x0040A56D: je 0x40a58a */
L_0040A56F:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A56F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A579; /* 0x0040A573: jb 0x40a579 */
L_0040A575:
    ecx = MEM32(esi); /* 0x0040A575: mov ecx, dword ptr [esi] */
    goto L_0040A57B; /* 0x0040A577: jmp 0x40a57b */
L_0040A579:
    ecx = esi; /* 0x0040A579: mov ecx, esi */
L_0040A57B:
    /* test ebx, ebx */ /* 0x0040A57B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A58A; /* 0x0040A57D: je 0x40a58a */
L_0040A57F:
    PUSH32(esp, ebx); /* 0x0040A57F: push ebx */
    PUSH32(esp, ecx); /* 0x0040A580: push ecx */
    PUSH32(esp, eax); /* 0x0040A581: push eax */
    RECOMP_CALL(sub_00780838); /* 0x0040A582: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A587: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A58A:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A58A: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A59B; /* 0x0040A58E: jb 0x40a59b */
L_0040A590:
    PUSH32(esp, MEM32(esi)); /* 0x0040A590: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A592: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A598: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A59B:
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A59B: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0040A5A2: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0040A5A9: mov byte ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 4; /* 0x0040A5AC: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0x14)); /* 0x0040A5B3: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x0040A5B6: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A5B8: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi + 0x14) = edi; /* 0x0040A5BF: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = ebx; /* 0x0040A5C2: mov dword ptr [esi + 0x10], ebx */
    /* cmp edi, 0x10u */ /* 0x0040A5C5: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A5CC; /* 0x0040A5C8: jb 0x40a5cc */
L_0040A5CA:
    esi = MEM32(esi); /* 0x0040A5CA: mov esi, dword ptr [esi] */
L_0040A5CC:
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x0040A5CC: mov byte ptr [esi + ebx], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A5D0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A5D3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A5DA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040A5DB: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A5DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A5DD: pop ebx */
    esp = ebp; /* 0x0040A5DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A5E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x0040A5E1: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x0040A558u: goto L_0040A558;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_0040A534(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A534u);

L_0040A534:
    MEM32(ebp + (-0x10)) = esp; /* 0x0040A534: mov dword ptr [ebp - 0x10], esp */
    eax = MEM32(ebp + 0x8); /* 0x0040A537: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x0040A53A: mov dword ptr [ebp + 8], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0040A53D: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0040A541: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x0040A542: push eax */
    RECOMP_CALL(sub_0040A290); /* 0x0040A543: call 0x40a290 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x0040A548: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x0040A54B: mov dword ptr [ebp - 4], 1 */
    eax = 0x0040A558u; /* 0x0040A552: mov eax, 0x40a558 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A557: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A558u);

L_0040A558:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A558: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + (-0x18)); /* 0x0040A55F: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x8); /* 0x0040A562: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x0040A565: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + 0xC); /* 0x0040A568: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x0040A56B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A58A; /* 0x0040A56D: je 0x40a58a */
L_0040A56F:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A56F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A579; /* 0x0040A573: jb 0x40a579 */
L_0040A575:
    ecx = MEM32(esi); /* 0x0040A575: mov ecx, dword ptr [esi] */
    goto L_0040A57B; /* 0x0040A577: jmp 0x40a57b */
L_0040A579:
    ecx = esi; /* 0x0040A579: mov ecx, esi */
L_0040A57B:
    /* test ebx, ebx */ /* 0x0040A57B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A58A; /* 0x0040A57D: je 0x40a58a */
L_0040A57F:
    PUSH32(esp, ebx); /* 0x0040A57F: push ebx */
    PUSH32(esp, ecx); /* 0x0040A580: push ecx */
    PUSH32(esp, eax); /* 0x0040A581: push eax */
    RECOMP_CALL(sub_00780838); /* 0x0040A582: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0040A587: add esp, 0xc */
    _flag_k = FK_ADD;
L_0040A58A:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A58A: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A59B; /* 0x0040A58E: jb 0x40a59b */
L_0040A590:
    PUSH32(esp, MEM32(esi)); /* 0x0040A590: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A592: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A598: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A59B:
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A59B: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0040A5A2: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0040A5A9: mov byte ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 4; /* 0x0040A5AC: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0x14)); /* 0x0040A5B3: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x0040A5B6: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A5B8: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi + 0x14) = edi; /* 0x0040A5BF: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = ebx; /* 0x0040A5C2: mov dword ptr [esi + 0x10], ebx */
    /* cmp edi, 0x10u */ /* 0x0040A5C5: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A5CC; /* 0x0040A5C8: jb 0x40a5cc */
L_0040A5CA:
    esi = MEM32(esi); /* 0x0040A5CA: mov esi, dword ptr [esi] */
L_0040A5CC:
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x0040A5CC: mov byte ptr [esi + ebx], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A5D0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A5D3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A5DA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040A5DB: pop edi */
    esi = POP32_VAL(esp); /* 0x0040A5DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040A5DD: pop ebx */
    esp = ebp; /* 0x0040A5DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A5E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A5E1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A5E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A5E4u);

L_0040A5E4:
    esi = MEM32(ebp + (-0x18)); /* 0x0040A5E4: mov esi, dword ptr [ebp - 0x18] */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0040A5E7: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A5F8; /* 0x0040A5EB: jb 0x40a5f8 */
L_0040A5ED:
    PUSH32(esp, MEM32(esi)); /* 0x0040A5ED: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A5EF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A5F5: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A5F8:
    MEM32(esi + 0x14) = 0xFu; /* 0x0040A5F8: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0040A5FF: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0040A606: mov byte ptr [esi], 0 */
    PUSH32(esp, 0); /* 0x0040A609: push 0 */
    PUSH32(esp, 0); /* 0x0040A60B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0040A60D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0040A612u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0040A620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A620u);

L_0040A620:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A620: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A630u);

L_0040A630:
    PUSH32(esp, ebp); /* 0x0040A630: push ebp */
    ebp = esp; /* 0x0040A631: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A633: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0040A635: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A63A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A640: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040A641: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0040A644: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A649: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A64B: push eax */
    eax = ebp + (-0xC); /* 0x0040A64C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A64F: mov dword ptr fs:[0], eax */
    eax = MEM32(0x868DB8); /* 0x0040A655: mov eax, dword ptr [0x868db8] */
    /* test eax, eax */ /* 0x0040A65A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040A6A6; /* 0x0040A65C: jne 0x40a6a6 */
L_0040A65E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040A65E: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040A661: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0040A663: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007CCE84u); /* 0x0040A666: push 0x7cce84 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040A66B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0040A670: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040A677: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040A67A: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0040A67C: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007CCEC4u); /* 0x0040A67F: push 0x7ccec4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040A684: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040A689: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A68D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x15u; /* 0x0040A694: mov ecx, 0x15 */
    RECOMP_CALL(sub_00668DA0); /* 0x0040A699: call 0x668da0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x868DB8); /* 0x0040A69E: mov eax, dword ptr [0x868db8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040A6A3: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040A6A6:
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A6A6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A6A9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A6B0: pop ecx */
    esp = ebp; /* 0x0040A6B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A6B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A6B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A6C0u);

L_0040A6C0:
    PUSH32(esp, ebp); /* 0x0040A6C0: push ebp */
    ebp = esp; /* 0x0040A6C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0040A6C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040A6C6: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x0040A6C9: movss xmm0, dword ptr [ebp + 8] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0040A6CE: cvtps2pd xmm0, xmm0 */
    RECOMP_CALL(sub_0077FC7C); /* 0x0040A6D1: call 0x77fc7c */
    RECOMP_FLAGS_IN();
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x0040A6D6: cvtsd2ss xmm0, xmm0 */
    MEM32(esp + 0x4) = _xmm[0].u32[0]; /* 0x0040A6DA: movss dword ptr [esp + 4], xmm0 */
    fp_push(*(float*)&MEM32(esp + 0x4)); /* 0x0040A6E0: fld dword ptr [esp + 4] */
    esp = ebp; /* 0x0040A6E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A6E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A6E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A6F0u);

L_0040A6F0:
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040A6F0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040A700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A700u);

L_0040A700:
    PUSH32(esp, ebp); /* 0x0040A700: push ebp */
    ebp = esp; /* 0x0040A701: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A703: push -1 */
    PUSH32(esp, 0x00781920u); /* 0x0040A705: push 0x781920 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A70A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A710: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040A711: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040A714: push esi */
    eax = MEM32(0x855000); /* 0x0040A715: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A71A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A71C: push eax */
    eax = ebp + (-0xC); /* 0x0040A71D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A720: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040A726: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040A728: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0040A72B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x0040A732: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0040A734: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0040A735: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x0040A737: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040A73A: push eax */
    RECOMP_CALL(sub_0040B350); /* 0x0040A73B: call 0x40b350 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A740: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0040A747: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A749: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A74F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A752: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A755: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A75C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040A75D: pop esi */
    esp = ebp; /* 0x0040A75E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A760: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040A761: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040A770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A770u);

L_0040A770:
    PUSH32(esp, ebp); /* 0x0040A770: push ebp */
    ebp = esp; /* 0x0040A771: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A773: push -1 */
    PUSH32(esp, 0x00781948u); /* 0x0040A775: push 0x781948 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A77A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A780: push eax */
    PUSH32(esp, ecx); /* 0x0040A781: push ecx */
    PUSH32(esp, esi); /* 0x0040A782: push esi */
    eax = MEM32(0x855000); /* 0x0040A783: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A788: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A78A: push eax */
    eax = ebp + (-0xC); /* 0x0040A78B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A78E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040A794: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040A796: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0040A799: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0040A79C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0040A79F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0040C010); /* 0x0040A7A2: call 0x40c010 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0040A7A7: mov dword ptr [ebp - 4], 0 */
    ecx = esi; /* 0x0040A7AE: mov ecx, esi */
    PUSH32(esp, 0x007CCFACu); /* 0x0040A7B0: push 0x7ccfac */
    MEM32(esi) = 0x007CCFF0u; /* 0x0040A7B5: mov dword ptr [esi], 0x7ccff0 */
    MEM32(esi + 0x7C98) = 0x007CCFDCu; /* 0x0040A7BB: mov dword ptr [esi + 0x7c98], 0x7ccfdc */
    RECOMP_CALL(sub_006378F0); /* 0x0040A7C5: call 0x6378f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0040A7CA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x8334) = (uint8_t)(0); /* 0x0040A7CD: mov byte ptr [esi + 0x8334], 0 */
    MEM16(esi + 0x3AE08) = (uint16_t)(LO16(eax)); /* 0x0040A7D4: mov word ptr [esi + 0x3ae08], ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x0040A7DB: mov dword ptr [ebp - 4], eax */
    eax = esi; /* 0x0040A7DE: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A7E0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A7E3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A7EA: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040A7EB: pop esi */
    esp = ebp; /* 0x0040A7EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A7EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040A7EF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0040A800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A800u);

L_0040A800:
    PUSH32(esp, ebp); /* 0x0040A800: push ebp */
    ebp = esp; /* 0x0040A801: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A803: push -1 */
    PUSH32(esp, 0x00781948u); /* 0x0040A805: push 0x781948 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A80A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A810: push eax */
    PUSH32(esp, ecx); /* 0x0040A811: push ecx */
    PUSH32(esp, esi); /* 0x0040A812: push esi */
    eax = MEM32(0x855000); /* 0x0040A813: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A818: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A81A: push eax */
    eax = ebp + (-0xC); /* 0x0040A81B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A81E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040A824: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040A826: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x007CCFF0u; /* 0x0040A829: mov dword ptr [esi], 0x7ccff0 */
    MEM32(esi + 0x7C98) = 0x007CCFDCu; /* 0x0040A82F: mov dword ptr [esi + 0x7c98], 0x7ccfdc */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A839: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_0040C940); /* 0x0040A840: call 0x40c940 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0040A845: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A855; /* 0x0040A849: je 0x40a855 */
L_0040A84B:
    PUSH32(esp, esi); /* 0x0040A84B: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A84C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A852: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A855:
    eax = esi; /* 0x0040A855: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A857: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A85A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A861: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040A862: pop esi */
    esp = ebp; /* 0x0040A863: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A865: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A866: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040A870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040A870u);

L_0040A870:
    PUSH32(esp, ebp); /* 0x0040A870: push ebp */
    ebp = esp; /* 0x0040A871: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0040A873: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040A876: push ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0040A877: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_0040A630); /* 0x0040A87A: call 0x40a630 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x0040A87F: movss xmm0, dword ptr [0x809824] */
    ecx = eax; /* 0x0040A887: mov ecx, eax */
    SET_LO8(edx, 0x10u); /* 0x0040A889: mov dl, 0x10 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0040A88B: mov dword ptr [ebp - 0x10], ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x0040A88E: mov byte ptr [ebp - 1], dl */
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x0040A891: movss dword ptr [ebp - 0xc], xmm0 */
    ebx = MEM32(ecx + 0x4); /* 0x0040A896: mov ebx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ecx); /* 0x0040A899: sub ebx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x0040A89B: sar ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 2u);
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x0040A89E: mov byte ptr [ebp - 2], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0040A8A2: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040AA0D; /* 0x0040A8A4: je 0x40aa0d */
L_0040A8AA:
    PUSH32(esp, esi); /* 0x0040A8AA: push esi */
    PUSH32(esp, edi); /* 0x0040A8AB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0040A8AC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x0040A8AE: mov edi, edi */
L_0040A8B0:
    /* cmp edi, ebx */ /* 0x0040A8B0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A8B8; /* 0x0040A8B2: jb 0x40a8b8 */
L_0040A8B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040A8B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0040A8BD; /* 0x0040A8B6: jmp 0x40a8bd */
L_0040A8B8:
    eax = MEM32(ecx); /* 0x0040A8B8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + edi * 4); /* 0x0040A8BA: mov eax, dword ptr [eax + edi*4] */
L_0040A8BD:
    edx = MEM32(ebp + (-0x8)); /* 0x0040A8BD: mov edx, dword ptr [ebp - 8] */
    /* cmp MEM32(eax + 0xCAB0), edx */ /* 0x0040A8C0: cmp dword ptr [eax + 0xcab0], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xCAB0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040A9F7; /* 0x0040A8C6: je 0x40a9f7 */
L_0040A8CC:
    /* cmp edi, ebx */ /* 0x0040A8CC: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A8D4; /* 0x0040A8CE: jb 0x40a8d4 */
L_0040A8D0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0040A8D0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_0040A8E5; /* 0x0040A8D2: jmp 0x40a8e5 */
L_0040A8D4:
    eax = MEM32(ecx); /* 0x0040A8D4: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + edi * 4); /* 0x0040A8D6: mov eax, dword ptr [eax + edi*4] */
    eax = MEM32(eax + 0xCAB0); /* 0x0040A8D9: mov eax, dword ptr [eax + 0xcab0] */
    SET_LO8(eax, MEM8(eax + 0x6B3C)); /* 0x0040A8DF: mov al, byte ptr [eax + 0x6b3c] */
L_0040A8E5:
    /* cmp LO8(eax), MEM8(edx + 0x6B3C) */ /* 0x0040A8E5: cmp al, byte ptr [edx + 0x6b3c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x6B3C)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040A9F7; /* 0x0040A8EB: je 0x40a9f7 */
L_0040A8F1:
    /* cmp edi, ebx */ /* 0x0040A8F1: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A8F9; /* 0x0040A8F3: jb 0x40a8f9 */
L_0040A8F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040A8F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0040A8FE; /* 0x0040A8F7: jmp 0x40a8fe */
L_0040A8F9:
    eax = MEM32(ecx); /* 0x0040A8F9: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + edi * 4); /* 0x0040A8FB: mov eax, dword ptr [eax + edi*4] */
L_0040A8FE:
    eax = MEM32(eax + 0xCAB0); /* 0x0040A8FE: mov eax, dword ptr [eax + 0xcab0] */
    _xmm[0].u64[0] = MEM32(eax + 0x7198); _xmm[0].u64[1] = 0; /* 0x0040A904: movss xmm0, dword ptr [eax + 0x7198] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040A90C: ucomiss xmm0, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0040A913: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0040A914: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0040A9F7; /* 0x0040A917: jnp 0x40a9f7 */
L_0040A91D:
    /* cmp edi, ebx */ /* 0x0040A91D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A925; /* 0x0040A91F: jb 0x40a925 */
L_0040A921:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0040A921: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0040A92A; /* 0x0040A923: jmp 0x40a92a */
L_0040A925:
    eax = MEM32(ecx); /* 0x0040A925: mov eax, dword ptr [ecx] */
    esi = MEM32(eax + edi * 4); /* 0x0040A927: mov esi, dword ptr [eax + edi*4] */
L_0040A92A:
    esi = MEM32(esi + 0xCAB0); /* 0x0040A92A: mov esi, dword ptr [esi + 0xcab0] */
    _xmm[1].u64[0] = MEM32(edx + 0x80); _xmm[1].u64[1] = 0; /* 0x0040A930: movss xmm1, dword ptr [edx + 0x80] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xFFFFFF80u; /* 0x0040A938: sub esi, -0x80 */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = MEM32(edx + 0x84); _xmm[2].u64[1] = 0; /* 0x0040A93B: movss xmm2, dword ptr [edx + 0x84] */
    _xmm[0].u64[0] = MEM32(edx + 0x88); _xmm[0].u64[1] = 0; /* 0x0040A943: movss xmm0, dword ptr [edx + 0x88] */
    PUSH32(esp, ecx); /* 0x0040A94B: push ecx */
    { float _s = sse_f32(MEM32(esi + 0x4)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0040A94C: subss xmm2, dword ptr [esi + 4] */
    { float _s = sse_f32(MEM32(esi)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040A951: subss xmm1, dword ptr [esi] */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040A955: subss xmm0, dword ptr [esi + 8] */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040A95A: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040A95E: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040A962: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040A966: addss xmm2, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040A96A: addss xmm2, xmm0 */
    MEM32(esp) = _xmm[2].u32[0]; /* 0x0040A96E: movss dword ptr [esp], xmm2 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040A973: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0xC)); _xmm[1].u64[1] = 0; /* 0x0040A978: movss xmm1, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A97D: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x0040A980: fstp dword ptr [ebp - 0x14] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(ebp + (-0x14)))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040A983: comiss xmm1, dword ptr [ebp - 0x14] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0040A991; /* 0x0040A987: ja 0x40a991 */
L_0040A989:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0040A989: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040A98C: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040A9F4; /* 0x0040A98F: jbe 0x40a9f4 */
L_0040A991:
    ecx = MEM32(ebp + (-0x8)); /* 0x0040A991: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0040A994: push ecx */
    _xmm[1].u64[0] = MEM32(ecx + 0x80); _xmm[1].u64[1] = 0; /* 0x0040A995: movss xmm1, dword ptr [ecx + 0x80] */
    _xmm[2].u64[0] = MEM32(ecx + 0x84); _xmm[2].u64[1] = 0; /* 0x0040A99D: movss xmm2, dword ptr [ecx + 0x84] */
    { float _s = sse_f32(MEM32(esi + 0x4)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0040A9A5: subss xmm2, dword ptr [esi + 4] */
    { float _s = sse_f32(MEM32(esi)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040A9AA: subss xmm1, dword ptr [esi] */
    _xmm[0].u64[0] = MEM32(ecx + 0x88); _xmm[0].u64[1] = 0; /* 0x0040A9AE: movss xmm0, dword ptr [ecx + 0x88] */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040A9B6: subss xmm0, dword ptr [esi + 8] */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040A9BB: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040A9BF: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040A9C3: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040A9C7: addss xmm2, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040A9CB: addss xmm2, xmm0 */
    MEM32(esp) = _xmm[2].u32[0]; /* 0x0040A9CF: movss dword ptr [esp], xmm2 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040A9D4: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x2))); /* 0x0040A9D9: mov dl, byte ptr [ebp - 2] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A9DC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x0040A9DF: mov ecx, dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x0040A9E2: fstp dword ptr [ebp - 0x14] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x0040A9E5: movss xmm0, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x0040A9EA: mov byte ptr [ebp - 1], dl */
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x0040A9ED: movss dword ptr [ebp - 0xc], xmm0 */
    goto L_0040A9FA; /* 0x0040A9F2: jmp 0x40a9fa */
L_0040A9F4:
    ecx = MEM32(ebp + (-0x10)); /* 0x0040A9F4: mov ecx, dword ptr [ebp - 0x10] */
L_0040A9F7:
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x0040A9F7: mov dl, byte ptr [ebp - 1] */
L_0040A9FA:
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x0040A9FA: mov al, byte ptr [ebp - 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0040A9FD: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x0040A9FE: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x0040AA00: mov byte ptr [ebp - 2], al */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x0040AA03: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0040A8B0; /* 0x0040AA05: jb 0x40a8b0 */
L_0040AA0B:
    edi = POP32_VAL(esp); /* 0x0040AA0B: pop edi */
    esi = POP32_VAL(esp); /* 0x0040AA0C: pop esi */
L_0040AA0D:
    /* cmp LO8(edx), LO8(ebx) */ /* 0x0040AA0D: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0040AA35; /* 0x0040AA0F: jae 0x40aa35 */
L_0040AA11:
    edx = (uint32_t)LO8(edx); /* 0x0040AA11: movzx edx, dl */
    /* cmp edx, ebx */ /* 0x0040AA14: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040AA25; /* 0x0040AA16: jb 0x40aa25 */
L_0040AA18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040AA18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0040AA1A: pop ebx */
    eax = MEM32(eax + 0xCAB0); /* 0x0040AA1B: mov eax, dword ptr [eax + 0xcab0] */
    esp = ebp; /* 0x0040AA21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AA23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AA24: ret  */
L_0040AA25:
    eax = MEM32(ecx); /* 0x0040AA25: mov eax, dword ptr [ecx] */
    ebx = POP32_VAL(esp); /* 0x0040AA27: pop ebx */
    eax = MEM32(eax + edx * 4); /* 0x0040AA28: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(eax + 0xCAB0); /* 0x0040AA2B: mov eax, dword ptr [eax + 0xcab0] */
    esp = ebp; /* 0x0040AA31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AA33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AA34: ret  */
L_0040AA35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040AA35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0040AA37: pop ebx */
    esp = ebp; /* 0x0040AA38: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AA3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AA3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040AA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040AA40u);

L_0040AA40:
    PUSH32(esp, ebp); /* 0x0040AA40: push ebp */
    ebp = esp; /* 0x0040AA41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040AA43: push -1 */
    PUSH32(esp, 0x00781988u); /* 0x0040AA45: push 0x781988 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040AA4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040AA50: push eax */
    PUSH32(esp, ecx); /* 0x0040AA51: push ecx */
    eax = MEM32(0x855000); /* 0x0040AA52: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040AA57: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040AA59: push eax */
    eax = ebp + (-0xC); /* 0x0040AA5A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040AA5D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0; /* 0x0040AA63: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0040AA6A: mov dword ptr [ebp - 4], 1 */
    MEM32(ecx + 0x984C) = 0; /* 0x0040AA71: mov dword ptr [ecx + 0x984c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040AA7B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040AA82: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040AA85: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040AA8C: pop ecx */
    esp = ebp; /* 0x0040AA8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AA8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AA90: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040AAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040AAA0u);

L_0040AAA0:
    PUSH32(esp, ebp); /* 0x0040AAA0: push ebp */
    ebp = esp; /* 0x0040AAA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0040AAA3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040AAA6: push -1 */
    PUSH32(esp, 0x007819F8u); /* 0x0040AAA8: push 0x7819f8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040AAAD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040AAB3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x0040AAB4: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040AAB7: push ebx */
    PUSH32(esp, esi); /* 0x0040AAB8: push esi */
    PUSH32(esp, edi); /* 0x0040AAB9: push edi */
    eax = MEM32(0x855000); /* 0x0040AABA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0040AABF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040AAC1: push eax */
    eax = esp + 0x48; /* 0x0040AAC2: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040AAC6: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0040AACC: mov edi, ecx */
    RECOMP_CALL(sub_0040A630); /* 0x0040AACE: call 0x40a630 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0040AAD3: mov esi, eax */
    eax = MEM32(0x8692E8); /* 0x0040AAD5: mov eax, dword ptr [0x8692e8] */
    MEM32(esp + 0x24) = eax; /* 0x0040AADA: mov dword ptr [esp + 0x24], eax */
    ecx = MEM32(esi + 0x4); /* 0x0040AADE: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x0040AAE1: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0040AAE3: sub ecx, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x0040AAE5: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    /* test ecx, ecx */ /* 0x0040AAE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040AAF0; /* 0x0040AAEA: jne 0x40aaf0 */
L_0040AAEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0040AAEC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0040AAFE; /* 0x0040AAEE: jmp 0x40aafe */
L_0040AAF0:
    eax = MEM32(eax); /* 0x0040AAF0: mov eax, dword ptr [eax] */
    ebx = MEM32(eax + 0xCAB0); /* 0x0040AAF2: mov ebx, dword ptr [eax + 0xcab0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7C9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x7C9Cu; /* 0x0040AAF8: add ebx, 0x7c9c */
    _flag_k = FK_ADD;
L_0040AAFE:
    PUSH32(esp, 0x007CCFBCu); /* 0x0040AAFE: push 0x7ccfbc */
    RECOMP_CALL(sub_00681D60); /* 0x0040AB03: call 0x681d60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0040AB08: mov ecx, dword ptr [esi] */
    _xmm[0].u64[0] = MEM32(eax + 0x80); _xmm[0].u64[1] = 0; /* 0x0040AB0A: movss xmm0, dword ptr [eax + 0x80] */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x0040AB12: movss dword ptr [esp + 0x14], xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x88); _xmm[0].u64[1] = 0; /* 0x0040AB18: movss xmm0, dword ptr [eax + 0x88] */
    eax = MEM32(edi + 0x88); /* 0x0040AB20: mov eax, dword ptr [edi + 0x88] */
    MEM32(esp + 0x34) = eax; /* 0x0040AB26: mov dword ptr [esp + 0x34], eax */
    eax = MEM32(esi + 0x4); /* 0x0040AB2A: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0040AB2D: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(esp + 0x18) = _xmm[0].u32[0]; /* 0x0040AB2F: movss dword ptr [esp + 0x18], xmm0 */
    _xmm[0].u64[0] = MEM64(edi + 0x80); _xmm[0].u64[1] = 0; /* 0x0040AB35: movq xmm0, qword ptr [edi + 0x80] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0040AB3D: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM64(esp + 0x2C) = _xmm[0].u64[0]; /* 0x0040AB40: movq qword ptr [esp + 0x2c], xmm0 */
    /* test eax, eax */ /* 0x0040AB46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040AB4E; /* 0x0040AB48: jne 0x40ab4e */
L_0040AB4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0040AB4A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0040AB50; /* 0x0040AB4C: jmp 0x40ab50 */
L_0040AB4E:
    esi = MEM32(ecx); /* 0x0040AB4E: mov esi, dword ptr [ecx] */
L_0040AB50:
    esi = MEM32(esi + 0xCAB0); /* 0x0040AB50: mov esi, dword ptr [esi + 0xcab0] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0040AB56: xorps xmm2, xmm2 */
    PUSH32(esp, ecx); /* 0x0040AB59: push ecx */
    _xmm[1].u64[0] = MEM32(esi + 0x80); _xmm[1].u64[1] = 0; /* 0x0040AB5A: movss xmm1, dword ptr [esi + 0x80] */
    { float _s = sse_f32(MEM32(esp + 0x30)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040AB62: subss xmm1, dword ptr [esp + 0x30] */
    _xmm[0].u64[0] = MEM32(esi + 0x88); _xmm[0].u64[1] = 0; /* 0x0040AB68: movss xmm0, dword ptr [esi + 0x88] */
    { float _s = sse_f32(MEM32(esp + 0x38)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040AB70: subss xmm0, dword ptr [esp + 0x38] */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040AB76: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040AB7A: mulss xmm0, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040AB7E: addss xmm1, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040AB82: addss xmm1, xmm0 */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x0040AB86: movss dword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040AB8B: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(esp + 0x30); _xmm[1].u64[1] = 0; /* 0x0040AB90: movss xmm1, dword ptr [esp + 0x30] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0040AB96: xorps xmm2, xmm2 */
    { float _s = sse_f32(MEM32(esp + 0x18)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040AB99: subss xmm1, dword ptr [esp + 0x18] */
    _xmm[0].u64[0] = MEM32(esp + 0x38); _xmm[0].u64[1] = 0; /* 0x0040AB9F: movss xmm0, dword ptr [esp + 0x38] */
    { float _s = sse_f32(MEM32(esp + 0x1C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040ABA5: subss xmm0, dword ptr [esp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x20) = _v; } /* 0x0040ABAB: fstp dword ptr [esp + 0x20] */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040ABAF: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040ABB3: mulss xmm0, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040ABB7: addss xmm1, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040ABBB: addss xmm1, xmm0 */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x0040ABBF: movss dword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040ABC4: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(esi + 0x80); _xmm[2].u64[1] = 0; /* 0x0040ABC9: movss xmm2, dword ptr [esi + 0x80] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0040ABD1: xorps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esp + 0x18)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0040ABD4: subss xmm2, dword ptr [esp + 0x18] */
    _xmm[1].u64[0] = MEM32(esi + 0x88); _xmm[1].u64[1] = 0; /* 0x0040ABDA: movss xmm1, dword ptr [esi + 0x88] */
    { float _s = sse_f32(MEM32(esp + 0x1C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040ABE2: subss xmm1, dword ptr [esp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x2C) = _v; } /* 0x0040ABE8: fstp dword ptr [esp + 0x2c] */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040ABEC: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040ABF0: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040ABF4: addss xmm2, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040ABF8: addss xmm2, xmm1 */
    MEM32(esp) = _xmm[2].u32[0]; /* 0x0040ABFC: movss dword ptr [esp], xmm2 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040AC01: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x7EEC); /* 0x0040AC06: mov edx, dword ptr [edi + 0x7eec] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040AC0C: add esp, 4 */
    _flag_k = FK_ADD;
    esi = MEM32(edi + 0x8320); /* 0x0040AC0F: mov esi, dword ptr [edi + 0x8320] */
    eax = edx; /* 0x0040AC15: mov eax, edx */
    ecx = MEM32(ebx + 0x250); /* 0x0040AC17: mov ecx, dword ptr [ebx + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0040AC1D: sub eax, esi */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x0040AC1F: fstp dword ptr [esp + 0x18] */
    /* cmp eax, ecx */ /* 0x0040AC23: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0040AD50; /* 0x0040AC25: jge 0x40ad50 */
L_0040AC2B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0040AC2B: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ecx, edx */ /* 0x0040AC2D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0040AD1C; /* 0x0040AC2F: jge 0x40ad1c */
L_0040AC35:
    eax = MEM32(esp + 0x24); /* 0x0040AC35: mov eax, dword ptr [esp + 0x24] */
    SET_LO8(eax, MEM8(eax + 0xC4)); /* 0x0040AC39: mov al, byte ptr [eax + 0xc4] */
    /* cmp LO8(eax), 0xFFu */ /* 0x0040AC3F: cmp al, 0xff */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040AD31; /* 0x0040AC41: jne 0x40ad31 */
L_0040AC47:
    MEM32(esp + 0x2C) = 0; /* 0x0040AC47: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x0040AC4F: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x0040AC57: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x0040AC5F: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x0040AC67: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x0040AC6F: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x0040AC77: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x20) = 0; /* 0x0040AC7F: mov dword ptr [esp + 0x20], 0 */
    RECOMP_CALL(sub_0040B7D0); /* 0x0040AC87: call 0x40b7d0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x1C) = eax; /* 0x0040AC8C: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x50) = 4; /* 0x0040AC90: mov dword ptr [esp + 0x50], 4 */
    eax = esp + 0x1C; /* 0x0040AC98: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x0040AC9C: push eax */
    PUSH32(esp, ecx); /* 0x0040AC9D: push ecx */
    MEM32(esp) = 0x3F800000u; /* 0x0040AC9E: mov dword ptr [esp], 0x3f800000 */
    eax = esp + 0x34; /* 0x0040ACA5: lea eax, [esp + 0x34] */
    PUSH32(esp, eax); /* 0x0040ACA9: push eax */
    eax = esp + 0x44; /* 0x0040ACAA: lea eax, [esp + 0x44] */
    ecx = edi; /* 0x0040ACAE: mov ecx, edi */
    PUSH32(esp, eax); /* 0x0040ACB0: push eax */
    eax = MEM32(edi); /* 0x0040ACB1: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC8)); /* 0x0040ACB3: call dword ptr [eax + 0xc8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0040ACB9: push eax */
    ecx = edi; /* 0x0040ACBA: mov ecx, edi */
    RECOMP_CALL(sub_0040E440); /* 0x0040ACBC: call 0x40e440 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 6; /* 0x0040ACC1: mov dword ptr [esp + 0x50], 6 */
    ecx = esp + 0x1C; /* 0x0040ACC9: lea ecx, [esp + 0x1c] */
    eax = MEM32(esp + 0x1C); /* 0x0040ACCD: mov eax, dword ptr [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x0040ACD1: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0040ACD2: push dword ptr [eax] */
    eax = esp + 0x2C; /* 0x0040ACD4: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x0040ACD8: push eax */
    RECOMP_CALL(sub_0040B350); /* 0x0040ACD9: call 0x40b350 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x0040ACDE: mov dword ptr [esp + 0x50], 0xffffffff */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x0040ACE6: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040ACEA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM32(esp + 0x1C); _xmm[3].u64[1] = 0; /* 0x0040ACF0: movss xmm3, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040ACF6: add esp, 4 */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM32(edi + 0x8328); _xmm[2].u64[1] = 0; /* 0x0040ACF9: movss xmm2, dword ptr [edi + 0x8328] */
    _xmm[0] = _xmm[3]; /* 0x0040AD01: movaps xmm0, xmm3 */
    _xmm[1].u64[0] = MEM32(esp + 0x28); _xmm[1].u64[1] = 0; /* 0x0040AD04: movss xmm1, dword ptr [esp + 0x28] */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040AD0A: subss xmm0, xmm2 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040AD0E: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0040AD50; /* 0x0040AD11: ja 0x40ad50 */
L_0040AD13:
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040AD13: subss xmm1, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040AD17: comiss xmm1, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040AD7A; /* 0x0040AD1A: jbe 0x40ad7a */
L_0040AD1C:
    SET_LO8(eax, 1); /* 0x0040AD1C: mov al, 1 */
    ecx = MEM32(esp + 0x48); /* 0x0040AD1E: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040AD22: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040AD29: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040AD2A: pop edi */
    esi = POP32_VAL(esp); /* 0x0040AD2B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040AD2C: pop ebx */
    esp = ebp; /* 0x0040AD2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AD2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AD30: ret  */
L_0040AD31:
    /* cmp MEM8(edi + 0x7ED4), 0 */ /* 0x0040AD31: cmp byte ptr [edi + 0x7ed4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x7ED4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040AD65; /* 0x0040AD38: je 0x40ad65 */
L_0040AD3A:
    ecx = edi; /* 0x0040AD3A: mov ecx, edi */
    RECOMP_CALL(sub_0040E970); /* 0x0040AD3C: call 0x40e970 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x0040AD41: movss xmm0, dword ptr [esp + 0x1c] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(edi + 0x8328))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040AD47: comiss xmm0, dword ptr [edi + 0x8328] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040AD7A; /* 0x0040AD4E: jbe 0x40ad7a */
L_0040AD50:
    SET_LO8(eax, 3); /* 0x0040AD50: mov al, 3 */
    ecx = MEM32(esp + 0x48); /* 0x0040AD52: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040AD56: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040AD5D: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040AD5E: pop edi */
    esi = POP32_VAL(esp); /* 0x0040AD5F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040AD60: pop ebx */
    esp = ebp; /* 0x0040AD61: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AD63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AD64: ret  */
L_0040AD65:
    /* test LO8(eax), LO8(eax) */ /* 0x0040AD65: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040AD7A; /* 0x0040AD67: jne 0x40ad7a */
L_0040AD69:
    _xmm[0].u64[0] = MEM32(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x0040AD69: movss xmm0, dword ptr [esp + 0x1c] */
    SET_LO8(eax, 1); /* 0x0040AD6F: mov al, 1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(edi + 0x8328))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040AD71: comiss xmm0, dword ptr [edi + 0x8328] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0040AD7C; /* 0x0040AD78: ja 0x40ad7c */
L_0040AD7A:
    SET_LO8(eax, 2); /* 0x0040AD7A: mov al, 2 */
L_0040AD7C:
    ecx = MEM32(esp + 0x48); /* 0x0040AD7C: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040AD80: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040AD87: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040AD88: pop edi */
    esi = POP32_VAL(esp); /* 0x0040AD89: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040AD8A: pop ebx */
    esp = ebp; /* 0x0040AD8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AD8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AD8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040AD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040AD90u);

L_0040AD90:
    PUSH32(esp, ebp); /* 0x0040AD90: push ebp */
    ebp = esp; /* 0x0040AD91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040AD93: push -1 */
    PUSH32(esp, 0x00781AD8u); /* 0x0040AD95: push 0x781ad8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040AD9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040ADA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0040ADA1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040ADA4: push ebx */
    PUSH32(esp, esi); /* 0x0040ADA5: push esi */
    PUSH32(esp, edi); /* 0x0040ADA6: push edi */
    eax = MEM32(0x855000); /* 0x0040ADA7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040ADAC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040ADAE: push eax */
    eax = ebp + (-0xC); /* 0x0040ADAF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040ADB2: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0040ADB8: mov edi, ecx */
    eax = MEM32(0x87C7A8); /* 0x0040ADBA: mov eax, dword ptr [0x87c7a8] */
    ebx = MEM32(0x8692E8); /* 0x0040ADBF: mov ebx, dword ptr [0x8692e8] */
    esi = MEM32(edi + 0x7150); /* 0x0040ADC5: mov esi, dword ptr [edi + 0x7150] */
    PUSH32(esp, 0x007CCFBCu); /* 0x0040ADCB: push 0x7ccfbc */
    MEM32(ebp + (-0x14)) = eax; /* 0x0040ADD0: mov dword ptr [ebp - 0x14], eax */
    MEM8(edi + 0x8334) = (uint8_t)(0); /* 0x0040ADD3: mov byte ptr [edi + 0x8334], 0 */
    RECOMP_CALL(sub_00681E60); /* 0x0040ADDA: call 0x681e60 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0040ADDF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B0F5; /* 0x0040ADE1: je 0x40b0f5 */
L_0040ADE7:
    PUSH32(esp, 0x007CCFBCu); /* 0x0040ADE7: push 0x7ccfbc */
    RECOMP_CALL(sub_00681D60); /* 0x0040ADEC: call 0x681d60 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xE4), 2 */ /* 0x0040ADF1: cmp byte ptr [esi + 0xe4], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040AEE9; /* 0x0040ADF8: jne 0x40aee9 */
L_0040ADFE:
    /* cmp MEM8(ebx + 0xC4), 0xFFu */ /* 0x0040ADFE: cmp byte ptr [ebx + 0xc4], 0xff */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC4)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040AEB0; /* 0x0040AE05: jne 0x40aeb0 */
L_0040AE0B:
    _xmm[0].u64[0] = MEM32(eax + 0x80); _xmm[0].u64[1] = 0; /* 0x0040AE0B: movss xmm0, dword ptr [eax + 0x80] */
    _xmm[1].u64[0] = MEM32(eax + 0x84); _xmm[1].u64[1] = 0; /* 0x0040AE13: movss xmm1, dword ptr [eax + 0x84] */
    _xmm[2].u64[0] = MEM32(eax + 0x88); _xmm[2].u64[1] = 0; /* 0x0040AE1B: movss xmm2, dword ptr [eax + 0x88] */
    MEM32(ebp + (-0x28)) = _xmm[0].u32[0]; /* 0x0040AE23: movss dword ptr [ebp - 0x28], xmm0 */
    MEM32(ebp + (-0x24)) = _xmm[1].u32[0]; /* 0x0040AE28: movss dword ptr [ebp - 0x24], xmm1 */
    MEM32(ebp + (-0x20)) = _xmm[2].u32[0]; /* 0x0040AE2D: movss dword ptr [ebp - 0x20], xmm2 */
    MEM8(edi + 0x8334) = (uint8_t)(1); /* 0x0040AE32: mov byte ptr [edi + 0x8334], 1 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0040AE39: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x4)) = 4; /* 0x0040AE40: mov dword ptr [ebp - 4], 4 */
    MEM32(edi + 0x984C) = 0; /* 0x0040AE47: mov dword ptr [edi + 0x984c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040AE51: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0x28); /* 0x0040AE58: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0040AE5B: push eax */
    ecx = ebp + (-0x14); /* 0x0040AE5C: lea ecx, [ebp - 0x14] */
    MEM8(edi + 0x9850) = (uint8_t)(3); /* 0x0040AE5F: mov byte ptr [edi + 0x9850], 3 */
    RECOMP_CALL(sub_0040B8D0); /* 0x0040AE66: call 0x40b8d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x0040AE6B: mov dword ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x0040AE72: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040AE84; /* 0x0040AE76: jne 0x40ae84 */
L_0040AE78:
    MEM32(edi + 0x984C) = 0; /* 0x0040AE78: mov dword ptr [edi + 0x984c], 0 */
    goto L_0040AE93; /* 0x0040AE82: jmp 0x40ae93 */
L_0040AE84:
    eax = ebp + (-0x14); /* 0x0040AE84: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040AE87: push eax */
    ecx = edi + 0x984C; /* 0x0040AE88: lea ecx, [edi + 0x984c] */
    RECOMP_CALL(sub_0040BA20); /* 0x0040AE8E: call 0x40ba20 */
    RECOMP_FLAGS_IN();
L_0040AE93:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040AE93: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0x14)); /* 0x0040AE9A: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x0040AE9D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B0D1; /* 0x0040AE9F: je 0x40b0d1 */
L_0040AEA5:
    eax = MEM32(ecx); /* 0x0040AEA5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040AEA7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040AEA9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_0040B0D1; /* 0x0040AEAB: jmp 0x40b0d1 */
L_0040AEB0:
    /* cmp MEM8(edi + 0x7ED4), 0 */ /* 0x0040AEB0: cmp byte ptr [edi + 0x7ed4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x7ED4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040AFBE; /* 0x0040AEB7: je 0x40afbe */
L_0040AEBD:
    MEM32(ebp + (-0x18)) = 0; /* 0x0040AEBD: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x4)) = 9; /* 0x0040AEC4: mov dword ptr [ebp - 4], 9 */
    MEM32(edi + 0x984C) = 0; /* 0x0040AECB: mov dword ptr [edi + 0x984c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040AED5: mov dword ptr [ebp - 4], 0xffffffff */
    eax = (uint32_t)MEM16(ebx + 0xC6); /* 0x0040AEDC: movzx eax, word ptr [ebx + 0xc6] */
    /* cmp LO16(eax), 0xFFFFFFFFu */ /* 0x0040AEE3: cmp ax, -1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040AF02; /* 0x0040AEE7: jne 0x40af02 */
L_0040AEE9:
    MEM8(edi + 0x8334) = (uint8_t)(0); /* 0x0040AEE9: mov byte ptr [edi + 0x8334], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040AEF0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040AEF3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040AEFA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040AEFB: pop edi */
    esi = POP32_VAL(esp); /* 0x0040AEFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040AEFD: pop ebx */
    esp = ebp; /* 0x0040AEFE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040AF00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040AF01: ret  */
L_0040AF02:
    MEM32(ebp + (-0x28)) = 0; /* 0x0040AF02: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x0040AF09: mov dword ptr [ebp - 0x20], 0 */
    /* cmp MEM16(edi + 0x3AE08), LO16(eax) */ /* 0x0040AF10: cmp word ptr [edi + 0x3ae08], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x3AE08)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040AF27; /* 0x0040AF17: je 0x40af27 */
L_0040AF19:
    MEM16(edi + 0x3AE08) = (uint16_t)(LO16(eax)); /* 0x0040AF19: mov word ptr [edi + 0x3ae08], ax */
    MEM8(edi + 0x83A0) = (uint8_t)(1); /* 0x0040AF20: mov byte ptr [edi + 0x83a0], 1 */
L_0040AF27:
    ecx = MEM32(ebp + (-0x14)); /* 0x0040AF27: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0x28); /* 0x0040AF2A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0040AF2D: push eax */
    eax = (int32_t)(int16_t)MEM16(ebx + 0xC6); /* 0x0040AF2E: movsx eax, word ptr [ebx + 0xc6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001F836u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0001F836u; /* 0x0040AF35: add ecx, 0x1f836 */
    _flag_k = FK_ADD;
    eax = ecx + eax * 2; /* 0x0040AF3B: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x0040AF3E: push eax */
    RECOMP_CALL(sub_00416DE0); /* 0x0040AF3F: call 0x416de0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x0040AF44: mov ecx, dword ptr [ebp - 0x14] */
    eax = (int32_t)(int16_t)MEM16(ebx + 0xC6); /* 0x0040AF47: movsx eax, word ptr [ebx + 0xc6] */
    eax = (int32_t)(int16_t)MEM16(ecx + eax * 2 + 0x1F836); /* 0x0040AF4E: movsx eax, word ptr [ecx + eax*2 + 0x1f836] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6Fu; /* 0x0040AF56: add eax, 0x6f */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x0040AF59: lea eax, [eax + eax*2] */
    eax = (int32_t)(int16_t)MEM16(ecx + eax * 2 + 0xC); /* 0x0040AF5C: movsx eax, word ptr [ecx + eax*2 + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF4u); /* 0x0040AF61: imul eax, eax, 0xf4 */
    _xmm[0].u64[0] = MEM32(eax + ecx + 0xD98C); _xmm[0].u64[1] = 0; /* 0x0040AF67: movss xmm0, dword ptr [eax + ecx + 0xd98c] */
    eax = ebp + (-0x28); /* 0x0040AF70: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0040AF73: push eax */
    ecx = ebp + (-0x14); /* 0x0040AF74: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x24)) = _xmm[0].u32[0]; /* 0x0040AF77: movss dword ptr [ebp - 0x24], xmm0 */
    RECOMP_CALL(sub_0040B8D0); /* 0x0040AF7C: call 0x40b8d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x0040AF81: mov dword ptr [ebp - 4], 0xb */
    eax = ebp + (-0x14); /* 0x0040AF88: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040AF8B: push eax */
    ecx = edi + 0x984C; /* 0x0040AF8C: lea ecx, [edi + 0x984c] */
    RECOMP_CALL(sub_0040B190); /* 0x0040AF92: call 0x40b190 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040AF97: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0x14)); /* 0x0040AF9E: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x0040AFA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040AFAB; /* 0x0040AFA3: je 0x40afab */
L_0040AFA5:
    eax = MEM32(ecx); /* 0x0040AFA5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040AFA7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040AFA9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040AFAB:
    MEM8(edi + 0x9850) = (uint8_t)(3); /* 0x0040AFAB: mov byte ptr [edi + 0x9850], 3 */
    MEM8(edi + 0x8334) = (uint8_t)(1); /* 0x0040AFB2: mov byte ptr [edi + 0x8334], 1 */
    goto L_0040B0D1; /* 0x0040AFB9: jmp 0x40b0d1 */
L_0040AFBE:
    RECOMP_CALL(sub_0040A630); /* 0x0040AFBE: call 0x40a630 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM8(ebx + 0xC4); /* 0x0040AFC3: movzx ecx, byte ptr [ebx + 0xc4] */
    edx = eax; /* 0x0040AFCA: mov edx, eax */
    PUSH32(esp, ecx); /* 0x0040AFCC: push ecx */
    ecx = edx; /* 0x0040AFCD: mov ecx, edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x0040AFCF: mov dword ptr [ebp - 0x18], edx */
    RECOMP_CALL(sub_0047A920); /* 0x0040AFD2: call 0x47a920 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi + 0x6B3C)); /* 0x0040AFD7: mov cl, byte ptr [edi + 0x6b3c] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x0040AFDD: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B055; /* 0x0040AFDF: jne 0x40b055 */
L_0040AFE1:
    /* test LO8(ecx), LO8(ecx) */ /* 0x0040AFE1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B055; /* 0x0040AFE3: je 0x40b055 */
L_0040AFE5:
    ecx = edi; /* 0x0040AFE5: mov ecx, edi */
    RECOMP_CALL(sub_0040AA40); /* 0x0040AFE7: call 0x40aa40 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x0040AFEC: mov ecx, edi */
    RECOMP_CALL(sub_0040A870); /* 0x0040AFEE: call 0x40a870 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x0040AFF3: mov dword ptr [ebp - 0x18], eax */
    /* test eax, eax */ /* 0x0040AFF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B021; /* 0x0040AFF8: je 0x40b021 */
L_0040AFFA:
    eax = ebp + (-0x18); /* 0x0040AFFA: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0040AFFD: push eax */
    ecx = ebp + (-0x14); /* 0x0040AFFE: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B980); /* 0x0040B001: call 0x40b980 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xDu; /* 0x0040B006: mov dword ptr [ebp - 4], 0xd */
    eax = ebp + (-0x14); /* 0x0040B00D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B010: push eax */
    ecx = edi + 0x984C; /* 0x0040B011: lea ecx, [edi + 0x984c] */
    RECOMP_CALL(sub_0040B190); /* 0x0040B017: call 0x40b190 */
    RECOMP_FLAGS_IN();
    goto L_0040B0AF; /* 0x0040B01C: jmp 0x40b0af */
L_0040B021:
    MEM32(ebp + (-0x18)) = 0; /* 0x0040B021: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x0040B028: mov dword ptr [ebp - 4], 0x10 */
    eax = ebp + (-0x18); /* 0x0040B02F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0040B032: push eax */
    ecx = edi + 0x984C; /* 0x0040B033: lea ecx, [edi + 0x984c] */
    RECOMP_CALL(sub_0040B190); /* 0x0040B039: call 0x40b190 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B03E: mov dword ptr [ebp - 4], 0xffffffff */
    MEM8(edi + 0x9850) = (uint8_t)(0); /* 0x0040B045: mov byte ptr [edi + 0x9850], 0 */
    MEM8(edi + 0x8334) = (uint8_t)(0); /* 0x0040B04C: mov byte ptr [edi + 0x8334], 0 */
    goto L_0040B0D1; /* 0x0040B053: jmp 0x40b0d1 */
L_0040B055:
    MEM32(ebp + (-0x1C)) = 0; /* 0x0040B055: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x4)) = 0x13u; /* 0x0040B05C: mov dword ptr [ebp - 4], 0x13 */
    MEM32(edi + 0x984C) = 0; /* 0x0040B063: mov dword ptr [edi + 0x984c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B06D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = (uint32_t)MEM8(ebx + 0xC4); /* 0x0040B074: movzx eax, byte ptr [ebx + 0xc4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x0040B07B: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0040B07E: push eax */
    RECOMP_CALL(sub_0047A7E0); /* 0x0040B07F: call 0x47a7e0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x0040B084: lea ecx, [ebp - 0x14] */
    eax = MEM32(eax + 0xCAB0); /* 0x0040B087: mov eax, dword ptr [eax + 0xcab0] */
    MEM32(ebp + (-0x18)) = eax; /* 0x0040B08D: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x18); /* 0x0040B090: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0040B093: push eax */
    RECOMP_CALL(sub_0040B980); /* 0x0040B094: call 0x40b980 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x15u; /* 0x0040B099: mov dword ptr [ebp - 4], 0x15 */
    eax = ebp + (-0x14); /* 0x0040B0A0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B0A3: push eax */
    ecx = edi + 0x984C; /* 0x0040B0A4: lea ecx, [edi + 0x984c] */
    RECOMP_CALL(sub_0040B190); /* 0x0040B0AA: call 0x40b190 */
    RECOMP_FLAGS_IN();
L_0040B0AF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B0AF: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0x14)); /* 0x0040B0B6: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x0040B0B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B0C3; /* 0x0040B0BB: je 0x40b0c3 */
L_0040B0BD:
    eax = MEM32(ecx); /* 0x0040B0BD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040B0BF: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040B0C1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040B0C3:
    MEM8(edi + 0x8334) = (uint8_t)(3); /* 0x0040B0C3: mov byte ptr [edi + 0x8334], 3 */
    MEM8(edi + 0x9850) = (uint8_t)(1); /* 0x0040B0CA: mov byte ptr [edi + 0x9850], 1 */
L_0040B0D1:
    eax = MEM32(edi); /* 0x0040B0D1: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x0040B0D3: mov ecx, edi */
    eax = MEM32(eax + 0xD0); /* 0x0040B0D5: mov eax, dword ptr [eax + 0xd0] */
    RECOMP_ICALL(eax); /* 0x0040B0DB: call eax */
    RECOMP_FLAGS_IN();
    MEM8(edi + 0x82CB) = (uint8_t)(LO8(eax)); /* 0x0040B0DD: mov byte ptr [edi + 0x82cb], al */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B0E3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B0E6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B0ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040B0EE: pop edi */
    esi = POP32_VAL(esp); /* 0x0040B0EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040B0F0: pop ebx */
    esp = ebp; /* 0x0040B0F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B0F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B0F4: ret  */
L_0040B0F5:
    MEM8(edi + 0x8334) = (uint8_t)(0); /* 0x0040B0F5: mov byte ptr [edi + 0x8334], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0040B0FC: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0040B103: mov dword ptr [ebp - 4], 1 */
    MEM32(edi + 0x984C) = 0; /* 0x0040B10A: mov dword ptr [edi + 0x984c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B114: mov dword ptr [ebp - 4], 0xffffffff */
    MEM8(edi + 0x9850) = (uint8_t)(0); /* 0x0040B11B: mov byte ptr [edi + 0x9850], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B122: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B125: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B12C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040B12D: pop edi */
    esi = POP32_VAL(esp); /* 0x0040B12E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040B12F: pop ebx */
    esp = ebp; /* 0x0040B130: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B132: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B133: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B140u);

L_0040B140:
    PUSH32(esp, ebp); /* 0x0040B140: push ebp */
    ebp = esp; /* 0x0040B141: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B143: push -1 */
    PUSH32(esp, 0x00781B08u); /* 0x0040B145: push 0x781b08 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B14A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B150: push eax */
    PUSH32(esp, ecx); /* 0x0040B151: push ecx */
    eax = MEM32(0x855000); /* 0x0040B152: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B157: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B159: push eax */
    eax = ebp + (-0xC); /* 0x0040B15A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B15D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0040B163: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B166: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ecx); /* 0x0040B16D: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x0040B16F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B179; /* 0x0040B171: je 0x40b179 */
L_0040B173:
    eax = MEM32(ecx); /* 0x0040B173: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040B175: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040B177: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040B179:
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B179: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B17C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B183: pop ecx */
    esp = ebp; /* 0x0040B184: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B186: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B187: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B190u);

L_0040B190:
    PUSH32(esp, ebp); /* 0x0040B190: push ebp */
    ebp = esp; /* 0x0040B191: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0040B193: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040B196: push esi */
    esi = ecx; /* 0x0040B197: mov esi, ecx */
    /* cmp MEM32(eax), 0 */ /* 0x0040B199: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B1AB; /* 0x0040B19C: jne 0x40b1ab */
L_0040B19E:
    MEM32(esi) = 0; /* 0x0040B19E: mov dword ptr [esi], 0 */
    eax = esi; /* 0x0040B1A4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040B1A6: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B1A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B1A8: ret 4 */
L_0040B1AB:
    PUSH32(esp, eax); /* 0x0040B1AB: push eax */
    RECOMP_CALL(sub_0040BA20); /* 0x0040B1AC: call 0x40ba20 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x0040B1B1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040B1B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B1B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B1B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B1C0u);

L_0040B1C0:
    PUSH32(esp, ebp); /* 0x0040B1C0: push ebp */
    ebp = esp; /* 0x0040B1C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B1C3: push -1 */
    PUSH32(esp, 0x00781B50u); /* 0x0040B1C5: push 0x781b50 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B1CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B1D0: push eax */
    PUSH32(esp, ecx); /* 0x0040B1D1: push ecx */
    PUSH32(esp, esi); /* 0x0040B1D2: push esi */
    eax = MEM32(0x855000); /* 0x0040B1D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B1D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B1DA: push eax */
    eax = ebp + (-0xC); /* 0x0040B1DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B1DE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040B1E4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040B1E6: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x0040B1E9: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x0040B1EF: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0040B7D0); /* 0x0040B1F6: call 0x40b7d0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x0040B1FB: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B1FD: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0040B204: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B206: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B209: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B210: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040B211: pop esi */
    esp = ebp; /* 0x0040B212: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B214: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B215: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B220u);

L_0040B220:
    PUSH32(esp, ebp); /* 0x0040B220: push ebp */
    ebp = esp; /* 0x0040B221: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B223: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x0040B225: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B22A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B230: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040B231: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040B234: push esi */
    eax = MEM32(0x855000); /* 0x0040B235: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B23A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B23C: push eax */
    eax = ebp + (-0xC); /* 0x0040B23D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B240: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040B246: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040B248: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040B24B: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x0040B252: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0040B254: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0040B255: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x0040B257: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B25A: push eax */
    RECOMP_CALL(sub_0040B350); /* 0x0040B25B: call 0x40b350 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B260: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0040B267: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B269: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B26F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B272: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B275: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B27C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040B27D: pop esi */
    esp = ebp; /* 0x0040B27E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B280: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B281: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B290u);

L_0040B290:
    PUSH32(esp, ebp); /* 0x0040B290: push ebp */
    ebp = esp; /* 0x0040B291: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B293: push -1 */
    PUSH32(esp, 0x00781BC0u); /* 0x0040B295: push 0x781bc0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B29A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B2A0: push eax */
    PUSH32(esp, ecx); /* 0x0040B2A1: push ecx */
    eax = MEM32(0x855000); /* 0x0040B2A2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B2A7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B2A9: push eax */
    eax = ebp + (-0xC); /* 0x0040B2AA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B2AD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0040B2B3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B2B6: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ecx)); /* 0x0040B2BD: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B2BF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B2C5: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B2C8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B2CB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B2D2: pop ecx */
    esp = ebp; /* 0x0040B2D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B2D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B2D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B2E0u);

L_0040B2E0:
    PUSH32(esp, ebp); /* 0x0040B2E0: push ebp */
    ebp = esp; /* 0x0040B2E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B2E3: push -1 */
    PUSH32(esp, 0x00781BE8u); /* 0x0040B2E5: push 0x781be8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B2EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B2F0: push eax */
    PUSH32(esp, ecx); /* 0x0040B2F1: push ecx */
    eax = MEM32(0x855000); /* 0x0040B2F2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B2F7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B2F9: push eax */
    eax = ebp + (-0xC); /* 0x0040B2FA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B2FD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0040B303: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B306: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ecx)); /* 0x0040B30D: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B30F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B315: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B318: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B31B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B322: pop ecx */
    esp = ebp; /* 0x0040B323: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B325: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B326: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B330u);

L_0040B330:
    ecx = MEM32(ecx); /* 0x0040B330: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x0040B332: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B33C; /* 0x0040B334: je 0x40b33c */
L_0040B336:
    eax = MEM32(ecx); /* 0x0040B336: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040B338: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040B33A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040B33C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B33C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B340u);

L_0040B340:
    PUSH32(esp, MEM32(ecx)); /* 0x0040B340: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B342: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040B348: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B349: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B350u);

L_0040B350:
    PUSH32(esp, ebp); /* 0x0040B350: push ebp */
    ebp = esp; /* 0x0040B351: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0040B353: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x0040B354: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x0040B357: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x0040B35A: push esi */
    esi = ecx; /* 0x0040B35B: mov esi, ecx */
    ecx = MEM32(esi); /* 0x0040B35D: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x0040B35F: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B396; /* 0x0040B361: jne 0x40b396 */
L_0040B363:
    /* cmp edx, ecx */ /* 0x0040B363: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B396; /* 0x0040B365: jne 0x40b396 */
L_0040B367:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x0040B367: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x0040B36A: mov ecx, esi */
    RECOMP_CALL(sub_0040B6A0); /* 0x0040B36C: call 0x40b6a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x0040B371: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0040B373: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x0040B376: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x0040B378: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0040B37A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x0040B37C: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x0040B37F: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x0040B381: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x0040B388: pop esi */
    ecx = MEM32(eax); /* 0x0040B389: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x0040B38B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x0040B38E: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x0040B390: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B392: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040B393: ret 0xc */
L_0040B396:
    /* cmp eax, edx */ /* 0x0040B396: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B3FF; /* 0x0040B398: je 0x40b3ff */
L_0040B39A:
    ebx = ebx; /* 0x0040B39A: lea ebx, [ebx] */
L_0040B3A0:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B3A0: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x0040B3A4: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3EB; /* 0x0040B3A6: jne 0x40b3eb */
L_0040B3A8:
    edx = MEM32(eax + 0x8); /* 0x0040B3A8: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x0040B3AB: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3CC; /* 0x0040B3AF: jne 0x40b3cc */
L_0040B3B1:
    eax = MEM32(edx); /* 0x0040B3B1: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B3B3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3E8; /* 0x0040B3B7: jne 0x40b3e8 */
L_0040B3B9:
    esp = esp; /* 0x0040B3B9: lea esp, [esp] */
L_0040B3C0:
    edx = eax; /* 0x0040B3C0: mov edx, eax */
    eax = MEM32(edx); /* 0x0040B3C2: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B3C4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B3C0; /* 0x0040B3C8: je 0x40b3c0 */
L_0040B3CA:
    goto L_0040B3E8; /* 0x0040B3CA: jmp 0x40b3e8 */
L_0040B3CC:
    edx = MEM32(eax + 0x4); /* 0x0040B3CC: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x0040B3CF: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3E8; /* 0x0040B3D3: jne 0x40b3e8 */
L_0040B3D5:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x0040B3D5: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3E8; /* 0x0040B3D8: jne 0x40b3e8 */
L_0040B3DA:
    eax = edx; /* 0x0040B3DA: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x0040B3DC: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x0040B3DF: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x0040B3E2: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B3D5; /* 0x0040B3E6: je 0x40b3d5 */
L_0040B3E8:
    MEM32(ebp + 0xC) = edx; /* 0x0040B3E8: mov dword ptr [ebp + 0xc], edx */
L_0040B3EB:
    PUSH32(esp, ecx); /* 0x0040B3EB: push ecx */
    eax = ebp + (-0x4); /* 0x0040B3EC: lea eax, [ebp - 4] */
    ecx = esi; /* 0x0040B3EF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0040B3F1: push eax */
    RECOMP_CALL(sub_0040B410); /* 0x0040B3F2: call 0x40b410 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0040B3F7: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x0040B3FA: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B3A0; /* 0x0040B3FD: jne 0x40b3a0 */
L_0040B3FF:
    ecx = MEM32(ebp + 0x8); /* 0x0040B3FF: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x0040B402: pop esi */
    MEM32(ecx) = eax; /* 0x0040B403: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x0040B405: mov eax, ecx */
    esp = ebp; /* 0x0040B407: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B409: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040B40A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0040B410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B410u);

L_0040B410:
    PUSH32(esp, ebp); /* 0x0040B410: push ebp */
    ebp = esp; /* 0x0040B411: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040B413: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x0040B416: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x0040B419: push ebx */
    PUSH32(esp, esi); /* 0x0040B41A: push esi */
    ebx = ecx; /* 0x0040B41B: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x0040B41D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x0040B420: push edi */
    ecx = ebp + 0xC; /* 0x0040B421: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0040B880); /* 0x0040B424: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x0040B429: mov edx, dword ptr [ebp - 4] */
    esi = MEM32(edx); /* 0x0040B42C: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x0040B42E: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B439; /* 0x0040B432: je 0x40b439 */
L_0040B434:
    edi = MEM32(edx + 0x8); /* 0x0040B434: mov edi, dword ptr [edx + 8] */
    goto L_0040B453; /* 0x0040B437: jmp 0x40b453 */
L_0040B439:
    eax = MEM32(edx + 0x8); /* 0x0040B439: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B43C: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B446; /* 0x0040B440: je 0x40b446 */
L_0040B442:
    edi = esi; /* 0x0040B442: mov edi, esi */
    goto L_0040B453; /* 0x0040B444: jmp 0x40b453 */
L_0040B446:
    ecx = MEM32(ebp + 0xC); /* 0x0040B446: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0040B449: mov dword ptr [ebp - 8], ecx */
    edi = MEM32(ecx + 0x8); /* 0x0040B44C: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x0040B44F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B4C5; /* 0x0040B451: jne 0x40b4c5 */
L_0040B453:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0040B453: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x0040B457: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B45F; /* 0x0040B45A: jne 0x40b45f */
L_0040B45C:
    MEM32(edi + 0x4) = esi; /* 0x0040B45C: mov dword ptr [edi + 4], esi */
L_0040B45F:
    eax = MEM32(ebx); /* 0x0040B45F: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x0040B461: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B46B; /* 0x0040B464: jne 0x40b46b */
L_0040B466:
    MEM32(eax + 0x4) = edi; /* 0x0040B466: mov dword ptr [eax + 4], edi */
    goto L_0040B476; /* 0x0040B469: jmp 0x40b476 */
L_0040B46B:
    /* cmp MEM32(esi), edx */ /* 0x0040B46B: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B473; /* 0x0040B46D: jne 0x40b473 */
L_0040B46F:
    MEM32(esi) = edi; /* 0x0040B46F: mov dword ptr [esi], edi */
    goto L_0040B476; /* 0x0040B471: jmp 0x40b476 */
L_0040B473:
    MEM32(esi + 0x8) = edi; /* 0x0040B473: mov dword ptr [esi + 8], edi */
L_0040B476:
    eax = MEM32(ebx); /* 0x0040B476: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x0040B478: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B49E; /* 0x0040B47A: jne 0x40b49e */
L_0040B47C:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0040B47C: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B486; /* 0x0040B480: je 0x40b486 */
L_0040B482:
    ecx = esi; /* 0x0040B482: mov ecx, esi */
    goto L_0040B49C; /* 0x0040B484: jmp 0x40b49c */
L_0040B486:
    eax = MEM32(edi); /* 0x0040B486: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x0040B488: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B48A: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B49A; /* 0x0040B48E: jne 0x40b49a */
L_0040B490:
    ecx = eax; /* 0x0040B490: mov ecx, eax */
    eax = MEM32(ecx); /* 0x0040B492: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B494: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B490; /* 0x0040B498: je 0x40b490 */
L_0040B49A:
    eax = MEM32(ebx); /* 0x0040B49A: mov eax, dword ptr [ebx] */
L_0040B49C:
    MEM32(eax) = ecx; /* 0x0040B49C: mov dword ptr [eax], ecx */
L_0040B49E:
    eax = MEM32(ebx); /* 0x0040B49E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x0040B4A0: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B521; /* 0x0040B4A3: jne 0x40b521 */
L_0040B4A5:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0040B4A5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B4B4; /* 0x0040B4A9: je 0x40b4b4 */
L_0040B4AB:
    ecx = MEM32(ebx); /* 0x0040B4AB: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x0040B4AD: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x0040B4AF: mov dword ptr [ecx + 8], eax */
    goto L_0040B521; /* 0x0040B4B2: jmp 0x40b521 */
L_0040B4B4:
    ecx = edi; /* 0x0040B4B4: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x0040B4B6: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x0040B4BB: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x4)); /* 0x0040B4BD: mov edx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x8) = eax; /* 0x0040B4C0: mov dword ptr [ecx + 8], eax */
    goto L_0040B521; /* 0x0040B4C3: jmp 0x40b521 */
L_0040B4C5:
    MEM32(esi + 0x4) = ecx; /* 0x0040B4C5: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x0040B4C8: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x0040B4CA: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x0040B4CC: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B4D5; /* 0x0040B4CF: jne 0x40b4d5 */
L_0040B4D1:
    esi = ecx; /* 0x0040B4D1: mov esi, ecx */
    goto L_0040B4EF; /* 0x0040B4D3: jmp 0x40b4ef */
L_0040B4D5:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0040B4D5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x0040B4D9: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B4E1; /* 0x0040B4DC: jne 0x40b4e1 */
L_0040B4DE:
    MEM32(edi + 0x4) = esi; /* 0x0040B4DE: mov dword ptr [edi + 4], esi */
L_0040B4E1:
    MEM32(esi) = edi; /* 0x0040B4E1: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x0040B4E3: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x0040B4E6: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x0040B4E9: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x0040B4EC: mov dword ptr [eax + 4], ecx */
L_0040B4EF:
    eax = MEM32(ebx); /* 0x0040B4EF: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x0040B4F1: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B4FB; /* 0x0040B4F4: jne 0x40b4fb */
L_0040B4F6:
    MEM32(eax + 0x4) = ecx; /* 0x0040B4F6: mov dword ptr [eax + 4], ecx */
    goto L_0040B509; /* 0x0040B4F9: jmp 0x40b509 */
L_0040B4FB:
    eax = MEM32(edx + 0x4); /* 0x0040B4FB: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x0040B4FE: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B506; /* 0x0040B500: jne 0x40b506 */
L_0040B502:
    MEM32(eax) = ecx; /* 0x0040B502: mov dword ptr [eax], ecx */
    goto L_0040B509; /* 0x0040B504: jmp 0x40b509 */
L_0040B506:
    MEM32(eax + 0x8) = ecx; /* 0x0040B506: mov dword ptr [eax + 8], ecx */
L_0040B509:
    eax = MEM32(edx + 0x4); /* 0x0040B509: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0040B50C: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x0040B50F: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x0040B512: mov edx, dword ptr [ebp - 8] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x0040B515: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x0040B518: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x4)); /* 0x0040B51B: mov edx, dword ptr [ebp - 4] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x0040B51E: mov byte ptr [edx + 0xc], cl */
L_0040B521:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x0040B521: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B633; /* 0x0040B525: jne 0x40b633 */
L_0040B52B:
    eax = MEM32(ebx); /* 0x0040B52B: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x0040B52D: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B62F; /* 0x0040B530: je 0x40b62f */
L_0040B536:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x0040B536: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B62C; /* 0x0040B53A: jne 0x40b62c */
L_0040B540:
    ecx = MEM32(esi); /* 0x0040B540: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x0040B542: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5B2; /* 0x0040B544: jne 0x40b5b2 */
L_0040B546:
    ecx = MEM32(esi + 0x8); /* 0x0040B546: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x0040B549: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B562; /* 0x0040B54D: jne 0x40b562 */
L_0040B54F:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x0040B54F: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x0040B553: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0040B555: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x0040B556: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x0040B55A: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x0040B55F: mov ecx, dword ptr [esi + 8] */
L_0040B562:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x0040B562: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5E5; /* 0x0040B566: jne 0x40b5e5 */
L_0040B568:
    eax = MEM32(ecx); /* 0x0040B568: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B56A: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B579; /* 0x0040B56E: jne 0x40b579 */
L_0040B570:
    eax = MEM32(ecx + 0x8); /* 0x0040B570: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B573: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B5E1; /* 0x0040B577: je 0x40b5e1 */
L_0040B579:
    eax = MEM32(ecx + 0x8); /* 0x0040B579: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B57C: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B597; /* 0x0040B580: jne 0x40b597 */
L_0040B582:
    eax = MEM32(ecx); /* 0x0040B582: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0040B584: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0040B585: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x0040B589: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x0040B58D: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x0040B58F: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x0040B594: mov ecx, dword ptr [esi + 8] */
L_0040B597:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x0040B597: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x0040B59A: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x0040B59D: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x0040B5A1: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x0040B5A4: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0040B5A6: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0040B5A7: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x0040B5AB: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_0040B62C; /* 0x0040B5B0: jmp 0x40b62c */
L_0040B5B2:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x0040B5B2: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5CA; /* 0x0040B5B6: jne 0x40b5ca */
L_0040B5B8:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x0040B5B8: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x0040B5BC: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0040B5BE: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x0040B5BF: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x0040B5C3: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0040B5C8: mov ecx, dword ptr [esi] */
L_0040B5CA:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x0040B5CA: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5E5; /* 0x0040B5CE: jne 0x40b5e5 */
L_0040B5D0:
    eax = MEM32(ecx + 0x8); /* 0x0040B5D0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B5D3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5F7; /* 0x0040B5D7: jne 0x40b5f7 */
L_0040B5D9:
    eax = MEM32(ecx); /* 0x0040B5D9: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B5DB: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B5F7; /* 0x0040B5DF: jne 0x40b5f7 */
L_0040B5E1:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x0040B5E1: mov byte ptr [ecx + 0xc], 0 */
L_0040B5E5:
    eax = MEM32(ebx); /* 0x0040B5E5: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x0040B5E7: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x0040B5E9: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x0040B5EC: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B536; /* 0x0040B5EF: jne 0x40b536 */
L_0040B5F5:
    goto L_0040B62C; /* 0x0040B5F5: jmp 0x40b62c */
L_0040B5F7:
    eax = MEM32(ecx); /* 0x0040B5F7: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x0040B5F9: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B614; /* 0x0040B5FD: jne 0x40b614 */
L_0040B5FF:
    eax = MEM32(ecx + 0x8); /* 0x0040B5FF: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x0040B602: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0040B603: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x0040B607: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x0040B60B: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x0040B60D: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0040B612: mov ecx, dword ptr [esi] */
L_0040B614:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x0040B614: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x0040B617: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x0040B61A: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x0040B61E: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x0040B620: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x0040B622: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0040B623: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x0040B627: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_0040B62C:
    edx = MEM32(ebp + (-0x4)); /* 0x0040B62C: mov edx, dword ptr [ebp - 4] */
L_0040B62F:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x0040B62F: mov byte ptr [edi + 0xc], 1 */
L_0040B633:
    PUSH32(esp, edx); /* 0x0040B633: push edx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B634: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x0040B63A: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B63D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x0040B640: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x0040B643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B64B; /* 0x0040B645: je 0x40b64b */
L_0040B647:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0040B647: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x0040B648: mov dword ptr [ebx + 4], eax */
L_0040B64B:
    eax = MEM32(ebp + 0x8); /* 0x0040B64B: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x0040B64E: pop edi */
    esi = POP32_VAL(esp); /* 0x0040B64F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040B650: pop ebx */
    MEM32(eax) = ecx; /* 0x0040B651: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x0040B653: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B655: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040B656: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040B660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B660u);

L_0040B660:
    MEM32(ecx) = 0x007CCF50u; /* 0x0040B660: mov dword ptr [ecx], 0x7ccf50 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B666: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B670u);

L_0040B670:
    PUSH32(esp, ebp); /* 0x0040B670: push ebp */
    ebp = esp; /* 0x0040B671: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0040B673: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x0040B677: push esi */
    esi = ecx; /* 0x0040B678: mov esi, ecx */
    MEM32(esi) = 0x007CCF50u; /* 0x0040B67A: mov dword ptr [esi], 0x7ccf50 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B68C; /* 0x0040B680: je 0x40b68c */
L_0040B682:
    PUSH32(esp, esi); /* 0x0040B682: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B683: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B689: add esp, 4 */
    _flag_k = FK_ADD;
L_0040B68C:
    eax = esi; /* 0x0040B68C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040B68E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B68F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B690: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B6A0u);

L_0040B6A0:
    PUSH32(esp, ebp); /* 0x0040B6A0: push ebp */
    ebp = esp; /* 0x0040B6A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0040B6A3: push ecx */
    PUSH32(esp, esi); /* 0x0040B6A4: push esi */
    PUSH32(esp, edi); /* 0x0040B6A5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0040B6A6: mov edi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x0040B6A9: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x0040B6AB: mov dword ptr [ebp - 4], eax */
    esi = edi; /* 0x0040B6AE: mov esi, edi */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x0040B6B0: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B6DE; /* 0x0040B6B4: jne 0x40b6de */
L_0040B6B6:
    PUSH32(esp, ebx); /* 0x0040B6B6: push ebx */
    ebx = MEM32(0x7CC694); /* 0x0040B6B7: mov ebx, dword ptr [0x7cc694] */
    ecx = ecx; /* 0x0040B6BD: lea ecx, [ecx] */
L_0040B6C0:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0040B6C0: push dword ptr [esi + 8] */
    ecx = eax; /* 0x0040B6C3: mov ecx, eax */
    RECOMP_CALL(sub_0040B6A0); /* 0x0040B6C5: call 0x40b6a0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x0040B6CA: mov esi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x0040B6CC: push edi */
    RECOMP_ICALL(ebx); /* 0x0040B6CD: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040B6CF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B6D2: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x0040B6D5: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = esi; /* 0x0040B6D9: mov edi, esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B6C0; /* 0x0040B6DB: je 0x40b6c0 */
L_0040B6DD:
    ebx = POP32_VAL(esp); /* 0x0040B6DD: pop ebx */
L_0040B6DE:
    edi = POP32_VAL(esp); /* 0x0040B6DE: pop edi */
    esi = POP32_VAL(esp); /* 0x0040B6DF: pop esi */
    esp = ebp; /* 0x0040B6E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B6E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B6E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B6F0u);

L_0040B6F0:
    PUSH32(esp, ebp); /* 0x0040B6F0: push ebp */
    ebp = esp; /* 0x0040B6F1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0040B6F3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040B6F6: push esi */
    esi = MEM32(edx + 0x8); /* 0x0040B6F7: mov esi, dword ptr [edx + 8] */
    eax = MEM32(esi); /* 0x0040B6FA: mov eax, dword ptr [esi] */
    MEM32(edx + 0x8) = eax; /* 0x0040B6FC: mov dword ptr [edx + 8], eax */
    eax = MEM32(esi); /* 0x0040B6FF: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B701: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B70A; /* 0x0040B705: jne 0x40b70a */
L_0040B707:
    MEM32(eax + 0x4) = edx; /* 0x0040B707: mov dword ptr [eax + 4], edx */
L_0040B70A:
    eax = MEM32(edx + 0x4); /* 0x0040B70A: mov eax, dword ptr [edx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x0040B70D: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx); /* 0x0040B710: mov eax, dword ptr [ecx] */
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x0040B712: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B724; /* 0x0040B715: jne 0x40b724 */
L_0040B717:
    MEM32(eax + 0x4) = esi; /* 0x0040B717: mov dword ptr [eax + 4], esi */
    MEM32(esi) = edx; /* 0x0040B71A: mov dword ptr [esi], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B71C: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B71F: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B720: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B721: ret 4 */
L_0040B724:
    eax = MEM32(edx + 0x4); /* 0x0040B724: mov eax, dword ptr [edx + 4] */
    /* cmp edx, MEM32(eax) */ /* 0x0040B727: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B737; /* 0x0040B729: jne 0x40b737 */
L_0040B72B:
    MEM32(eax) = esi; /* 0x0040B72B: mov dword ptr [eax], esi */
    MEM32(esi) = edx; /* 0x0040B72D: mov dword ptr [esi], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B72F: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B732: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B734: ret 4 */
L_0040B737:
    MEM32(eax + 0x8) = esi; /* 0x0040B737: mov dword ptr [eax + 8], esi */
    MEM32(esi) = edx; /* 0x0040B73A: mov dword ptr [esi], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B73C: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B73F: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B740: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B741: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B750u);

L_0040B750:
    PUSH32(esp, ebp); /* 0x0040B750: push ebp */
    ebp = esp; /* 0x0040B751: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0040B753: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040B756: push esi */
    esi = MEM32(edx); /* 0x0040B757: mov esi, dword ptr [edx] */
    eax = MEM32(esi + 0x8); /* 0x0040B759: mov eax, dword ptr [esi + 8] */
    MEM32(edx) = eax; /* 0x0040B75C: mov dword ptr [edx], eax */
    eax = MEM32(esi + 0x8); /* 0x0040B75E: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B761: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B76A; /* 0x0040B765: jne 0x40b76a */
L_0040B767:
    MEM32(eax + 0x4) = edx; /* 0x0040B767: mov dword ptr [eax + 4], edx */
L_0040B76A:
    eax = MEM32(edx + 0x4); /* 0x0040B76A: mov eax, dword ptr [edx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x0040B76D: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx); /* 0x0040B770: mov eax, dword ptr [ecx] */
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x0040B772: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B785; /* 0x0040B775: jne 0x40b785 */
L_0040B777:
    MEM32(eax + 0x4) = esi; /* 0x0040B777: mov dword ptr [eax + 4], esi */
    MEM32(esi + 0x8) = edx; /* 0x0040B77A: mov dword ptr [esi + 8], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B77D: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B780: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B781: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B782: ret 4 */
L_0040B785:
    eax = MEM32(edx + 0x4); /* 0x0040B785: mov eax, dword ptr [edx + 4] */
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x0040B788: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B79B; /* 0x0040B78B: jne 0x40b79b */
L_0040B78D:
    MEM32(eax + 0x8) = esi; /* 0x0040B78D: mov dword ptr [eax + 8], esi */
    MEM32(esi + 0x8) = edx; /* 0x0040B790: mov dword ptr [esi + 8], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B793: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B796: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B797: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B798: ret 4 */
L_0040B79B:
    MEM32(eax) = esi; /* 0x0040B79B: mov dword ptr [eax], esi */
    MEM32(esi + 0x8) = edx; /* 0x0040B79D: mov dword ptr [esi + 8], edx */
    MEM32(edx + 0x4) = esi; /* 0x0040B7A0: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x0040B7A3: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040B7A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B7A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B7B0u);

L_0040B7B0:
    eax = MEM32(ecx + 0x8); /* 0x0040B7B0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B7B3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B7CB; /* 0x0040B7B7: jne 0x40b7cb */
L_0040B7B9:
    esp = esp; /* 0x0040B7B9: lea esp, [esp] */
L_0040B7C0:
    ecx = eax; /* 0x0040B7C0: mov ecx, eax */
    eax = MEM32(ecx + 0x8); /* 0x0040B7C2: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B7C5: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B7C0; /* 0x0040B7C9: je 0x40b7c0 */
L_0040B7CB:
    eax = ecx; /* 0x0040B7CB: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B7CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B7D0u);

L_0040B7D0:
    PUSH32(esp, ebp); /* 0x0040B7D0: push ebp */
    ebp = esp; /* 0x0040B7D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B7D3: push -1 */
    PUSH32(esp, 0x00781C10u); /* 0x0040B7D5: push 0x781c10 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B7DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B7E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0040B7E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040B7E4: push ebx */
    PUSH32(esp, esi); /* 0x0040B7E5: push esi */
    PUSH32(esp, edi); /* 0x0040B7E6: push edi */
    eax = MEM32(0x855000); /* 0x0040B7E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B7EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B7EE: push eax */
    eax = ebp + (-0xC); /* 0x0040B7EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B7F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0040B7F8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x18u); /* 0x0040B7FB: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040B7FD: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B803: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0040B806: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x0040B808: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x0040B80B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040B815; /* 0x0040B80D: jne 0x40b815 */
L_0040B80F:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0040B80F: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0040B815:
    MEM32(ebp + (-0x14)) = esi; /* 0x0040B815: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040B818: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x0040B81F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B822: push eax */
    PUSH32(esp, esi); /* 0x0040B823: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x0040B824: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x0040B829: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B82C: push eax */
    eax = esi + 0x4; /* 0x0040B82D: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x0040B830: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x0040B831: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x0040B836: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0040B839: push eax */
    eax = esi + 0x8; /* 0x0040B83A: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x0040B83D: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x0040B83E: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B843: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x0040B84A: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x0040B850: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B852: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B855: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B85C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040B85D: pop edi */
    esi = POP32_VAL(esp); /* 0x0040B85E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040B85F: pop ebx */
    esp = ebp; /* 0x0040B860: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B862: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B863: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B864(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B864u);

L_0040B864:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x0040B864: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040B867: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B86D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0040B870: push 0 */
    PUSH32(esp, 0); /* 0x0040B872: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0040B874: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0040B879u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0040B880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B880u);

L_0040B880:
    edx = ecx; /* 0x0040B880: mov edx, ecx */
    eax = MEM32(edx); /* 0x0040B882: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B884: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B8CC; /* 0x0040B888: jne 0x40b8cc */
L_0040B88A:
    ecx = MEM32(eax + 0x8); /* 0x0040B88A: mov ecx, dword ptr [eax + 8] */
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x0040B88D: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B8AF; /* 0x0040B891: jne 0x40b8af */
L_0040B893:
    eax = MEM32(ecx); /* 0x0040B893: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B895: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B8AA; /* 0x0040B899: jne 0x40b8aa */
L_0040B89B:
    goto L_0040B8A0; /* 0x0040B89B: jmp 0x40b8a0 */
L_0040B8A0:
    ecx = eax; /* 0x0040B8A0: mov ecx, eax */
    eax = MEM32(ecx); /* 0x0040B8A2: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B8A4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B8A0; /* 0x0040B8A8: je 0x40b8a0 */
L_0040B8AA:
    MEM32(edx) = ecx; /* 0x0040B8AA: mov dword ptr [edx], ecx */
    eax = edx; /* 0x0040B8AC: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B8AE: ret  */
L_0040B8AF:
    eax = MEM32(eax + 0x4); /* 0x0040B8AF: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B8B2: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B8CA; /* 0x0040B8B6: jne 0x40b8ca */
L_0040B8B8:
    ecx = MEM32(edx); /* 0x0040B8B8: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x0040B8BA: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040B8CA; /* 0x0040B8BD: jne 0x40b8ca */
L_0040B8BF:
    MEM32(edx) = eax; /* 0x0040B8BF: mov dword ptr [edx], eax */
    eax = MEM32(eax + 0x4); /* 0x0040B8C1: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0040B8C4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040B8B8; /* 0x0040B8C8: je 0x40b8b8 */
L_0040B8CA:
    MEM32(edx) = eax; /* 0x0040B8CA: mov dword ptr [edx], eax */
L_0040B8CC:
    eax = edx; /* 0x0040B8CC: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040B8CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040B8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B8D0u);

L_0040B8D0:
    PUSH32(esp, ebp); /* 0x0040B8D0: push ebp */
    ebp = esp; /* 0x0040B8D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B8D3: push -1 */
    PUSH32(esp, 0x00781C4Cu); /* 0x0040B8D5: push 0x781c4c */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B8DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B8E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040B8E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040B8E4: push esi */
    eax = MEM32(0x855000); /* 0x0040B8E5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B8EA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B8EC: push eax */
    eax = ebp + (-0xC); /* 0x0040B8ED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B8F0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040B8F6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040B8F8: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x0040B8FB: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040B901: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x10u); /* 0x0040B908: push 0x10 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040B90A: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0040B910: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B912: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edx; /* 0x0040B915: mov dword ptr [ebp - 0x14], edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040B918: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x0040B91C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B948; /* 0x0040B91E: je 0x40b948 */
L_0040B920:
    MEM32(edx) = 0x007CCF50u; /* 0x0040B920: mov dword ptr [edx], 0x7ccf50 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0040B926: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(ebp + 0x8); /* 0x0040B92A: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = 0x007CCF48u; /* 0x0040B92D: mov dword ptr [edx], 0x7ccf48 */
    _xmm[0].u64[0] = MEM64(eax); _xmm[0].u64[1] = 0; /* 0x0040B933: movq xmm0, qword ptr [eax] */
    MEM64(edx + 0x4) = _xmm[0].u64[0]; /* 0x0040B937: movq qword ptr [edx + 4], xmm0 */
    eax = MEM32(eax + 0x8); /* 0x0040B93C: mov eax, dword ptr [eax + 8] */
    MEM32(edx + 0xC) = eax; /* 0x0040B93F: mov dword ptr [edx + 0xc], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040B942: mov byte ptr [ebp - 4], 1 */
    goto L_0040B94A; /* 0x0040B946: jmp 0x40b94a */
L_0040B948:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0040B948: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040B94A:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0040B94A: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(esi); /* 0x0040B94E: mov ecx, dword ptr [esi] */
    MEM32(esi) = edx; /* 0x0040B950: mov dword ptr [esi], edx */
    /* test ecx, ecx */ /* 0x0040B952: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B95C; /* 0x0040B954: je 0x40b95c */
L_0040B956:
    eax = MEM32(ecx); /* 0x0040B956: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040B958: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040B95A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040B95C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040B95C: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0040B963: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040B965: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040B968: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040B96F: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040B970: pop esi */
    esp = ebp; /* 0x0040B971: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040B973: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040B974: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040B980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040B980u);

L_0040B980:
    PUSH32(esp, ebp); /* 0x0040B980: push ebp */
    ebp = esp; /* 0x0040B981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040B983: push -1 */
    PUSH32(esp, 0x00781C4Cu); /* 0x0040B985: push 0x781c4c */
    eax = MEM32(FS_BASE + (0)); /* 0x0040B98A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040B990: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040B991: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040B994: push esi */
    eax = MEM32(0x855000); /* 0x0040B995: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040B99A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040B99C: push eax */
    eax = ebp + (-0xC); /* 0x0040B99D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040B9A0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040B9A6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040B9A8: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x0040B9AB: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040B9B1: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 8); /* 0x0040B9B8: push 8 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040B9BA: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0040B9C0: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040B9C2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edx; /* 0x0040B9C5: mov dword ptr [ebp - 0x14], edx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040B9C8: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x0040B9CC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040B9EE; /* 0x0040B9CE: je 0x40b9ee */
L_0040B9D0:
    MEM32(edx) = 0x007CCF50u; /* 0x0040B9D0: mov dword ptr [edx], 0x7ccf50 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0040B9D6: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(ebp + 0x8); /* 0x0040B9DA: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = 0x007CCFD4u; /* 0x0040B9DD: mov dword ptr [edx], 0x7ccfd4 */
    eax = MEM32(eax); /* 0x0040B9E3: mov eax, dword ptr [eax] */
    MEM32(edx + 0x4) = eax; /* 0x0040B9E5: mov dword ptr [edx + 4], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040B9E8: mov byte ptr [ebp - 4], 1 */
    goto L_0040B9F0; /* 0x0040B9EC: jmp 0x40b9f0 */
L_0040B9EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0040B9EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040B9F0:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0040B9F0: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(esi); /* 0x0040B9F4: mov ecx, dword ptr [esi] */
    MEM32(esi) = edx; /* 0x0040B9F6: mov dword ptr [esi], edx */
    /* test ecx, ecx */ /* 0x0040B9F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BA02; /* 0x0040B9FA: je 0x40ba02 */
L_0040B9FC:
    eax = MEM32(ecx); /* 0x0040B9FC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040B9FE: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040BA00: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040BA02:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BA02: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0040BA09: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BA0B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BA0E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BA15: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040BA16: pop esi */
    esp = ebp; /* 0x0040BA17: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BA19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BA1A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BA20u);

L_0040BA20:
    PUSH32(esp, ebp); /* 0x0040BA20: push ebp */
    ebp = esp; /* 0x0040BA21: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0040BA23: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0040BA24: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0040BA27: push edi */
    edi = ecx; /* 0x0040BA28: mov edi, ecx */
    eax = MEM32(esi); /* 0x0040BA2A: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x0040BA2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BA88; /* 0x0040BA2E: je 0x40ba88 */
L_0040BA30:
    PUSH32(esp, 0x00866220u); /* 0x0040BA30: push 0x866220 */
    PUSH32(esp, eax); /* 0x0040BA35: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A0)); /* 0x0040BA36: call dword ptr [0x7cc6a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BA3C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x0040BA3F: mov ecx, eax */
    RECOMP_ICALL(MEM32(0x7CC69C)); /* 0x0040BA41: call dword ptr [0x7cc69c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0040BA47: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040BA7A; /* 0x0040BA49: jne 0x40ba7a */
L_0040BA4B:
    eax = MEM32(esi); /* 0x0040BA4B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x0040BA4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BA88; /* 0x0040BA4F: je 0x40ba88 */
L_0040BA51:
    PUSH32(esp, 0x008661B0u); /* 0x0040BA51: push 0x8661b0 */
    PUSH32(esp, eax); /* 0x0040BA56: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A0)); /* 0x0040BA57: call dword ptr [0x7cc6a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BA5D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x0040BA60: mov ecx, eax */
    RECOMP_ICALL(MEM32(0x7CC69C)); /* 0x0040BA62: call dword ptr [0x7cc69c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0040BA68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BA88; /* 0x0040BA6A: je 0x40ba88 */
L_0040BA6C:
    PUSH32(esp, esi); /* 0x0040BA6C: push esi */
    ecx = edi; /* 0x0040BA6D: mov ecx, edi */
    RECOMP_CALL(sub_0040BC70); /* 0x0040BA6F: call 0x40bc70 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0040BA74: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BA75: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040BA76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BA77: ret 4 */
L_0040BA7A:
    PUSH32(esp, esi); /* 0x0040BA7A: push esi */
    ecx = edi; /* 0x0040BA7B: mov ecx, edi */
    RECOMP_CALL(sub_0040BB50); /* 0x0040BA7D: call 0x40bb50 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0040BA82: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BA83: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040BA84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BA85: ret 4 */
L_0040BA88:
    PUSH32(esp, esi); /* 0x0040BA88: push esi */
    ecx = edi; /* 0x0040BA89: mov ecx, edi */
    RECOMP_CALL(sub_0040BBE0); /* 0x0040BA8B: call 0x40bbe0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0040BA90: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BA91: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040BA92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BA93: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BAA0u);

L_0040BAA0:
    PUSH32(esp, ebp); /* 0x0040BAA0: push ebp */
    ebp = esp; /* 0x0040BAA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BAA3: push -1 */
    PUSH32(esp, 0x00781C75u); /* 0x0040BAA5: push 0x781c75 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BAAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BAB0: push eax */
    eax = MEM32(0x855000); /* 0x0040BAB1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BAB6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BAB8: push eax */
    eax = ebp + (-0xC); /* 0x0040BAB9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BABC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040BAC2: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x0040BAC9: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x0040BACC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BAD7; /* 0x0040BACE: je 0x40bad7 */
L_0040BAD0:
    eax = MEM32(ebp + 0xC); /* 0x0040BAD0: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x0040BAD3: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x0040BAD5: mov dword ptr [ecx], eax */
L_0040BAD7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BAD7: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BADE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BAE1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BAE8: pop ecx */
    esp = ebp; /* 0x0040BAE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BAEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0040BAEC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0040BAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BAF0u);

L_0040BAF0:
    PUSH32(esp, ebp); /* 0x0040BAF0: push ebp */
    ebp = esp; /* 0x0040BAF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BAF3: push -1 */
    PUSH32(esp, 0x00781C98u); /* 0x0040BAF5: push 0x781c98 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BAFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BB00: push eax */
    PUSH32(esp, ecx); /* 0x0040BB01: push ecx */
    PUSH32(esp, esi); /* 0x0040BB02: push esi */
    eax = MEM32(0x855000); /* 0x0040BB03: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BB08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BB0A: push eax */
    eax = ebp + (-0xC); /* 0x0040BB0B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BB0E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040BB14: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040BB16: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BB19: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0040BB20: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x007CCF50u; /* 0x0040BB24: mov dword ptr [esi], 0x7ccf50 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BB36; /* 0x0040BB2A: je 0x40bb36 */
L_0040BB2C:
    PUSH32(esp, esi); /* 0x0040BB2C: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040BB2D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BB33: add esp, 4 */
    _flag_k = FK_ADD;
L_0040BB36:
    eax = esi; /* 0x0040BB36: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BB38: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BB3B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BB42: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040BB43: pop esi */
    esp = ebp; /* 0x0040BB44: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BB46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BB47: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BB50u);

L_0040BB50:
    PUSH32(esp, ebp); /* 0x0040BB50: push ebp */
    ebp = esp; /* 0x0040BB51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BB53: push -1 */
    PUSH32(esp, 0x00781CC8u); /* 0x0040BB55: push 0x781cc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BB5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BB60: push eax */
    PUSH32(esp, esi); /* 0x0040BB61: push esi */
    PUSH32(esp, edi); /* 0x0040BB62: push edi */
    eax = MEM32(0x855000); /* 0x0040BB63: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BB68: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BB6A: push eax */
    eax = ebp + (-0xC); /* 0x0040BB6B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BB6E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040BB74: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x0040BB76: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x0040BB79: push 0x10 */
    edi = MEM32(eax); /* 0x0040BB7B: mov edi, dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040BB7D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0040BB83: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BB85: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edx; /* 0x0040BB88: mov dword ptr [ebp + 8], edx */
    /* test edx, edx */ /* 0x0040BB8B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BBBB; /* 0x0040BB8D: je 0x40bbbb */
L_0040BB8F:
    MEM32(edx) = 0x007CCF50u; /* 0x0040BB8F: mov dword ptr [edx], 0x7ccf50 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040BB95: mov dword ptr [ebp - 4], 0 */
    MEM32(edx) = 0x007CCF48u; /* 0x0040BB9C: mov dword ptr [edx], 0x7ccf48 */
    _xmm[0].u64[0] = MEM64(edi + 0x4); _xmm[0].u64[1] = 0; /* 0x0040BBA2: movq xmm0, qword ptr [edi + 4] */
    MEM64(edx + 0x4) = _xmm[0].u64[0]; /* 0x0040BBA7: movq qword ptr [edx + 4], xmm0 */
    eax = MEM32(edi + 0xC); /* 0x0040BBAC: mov eax, dword ptr [edi + 0xc] */
    MEM32(edx + 0xC) = eax; /* 0x0040BBAF: mov dword ptr [edx + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BBB2: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_0040BBBD; /* 0x0040BBB9: jmp 0x40bbbd */
L_0040BBBB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0040BBBB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040BBBD:
    ecx = MEM32(esi); /* 0x0040BBBD: mov ecx, dword ptr [esi] */
    MEM32(esi) = edx; /* 0x0040BBBF: mov dword ptr [esi], edx */
    /* test ecx, ecx */ /* 0x0040BBC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BBCB; /* 0x0040BBC3: je 0x40bbcb */
L_0040BBC5:
    eax = MEM32(ecx); /* 0x0040BBC5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040BBC7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040BBC9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040BBCB:
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BBCB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BBCE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BBD5: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040BBD6: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BBD7: pop esi */
    esp = ebp; /* 0x0040BBD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BBDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BBDB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BBE0u);

L_0040BBE0:
    PUSH32(esp, ebp); /* 0x0040BBE0: push ebp */
    ebp = esp; /* 0x0040BBE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BBE3: push -1 */
    PUSH32(esp, 0x00781CC8u); /* 0x0040BBE5: push 0x781cc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BBEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BBF0: push eax */
    PUSH32(esp, esi); /* 0x0040BBF1: push esi */
    PUSH32(esp, edi); /* 0x0040BBF2: push edi */
    eax = MEM32(0x855000); /* 0x0040BBF3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BBF8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BBFA: push eax */
    eax = ebp + (-0xC); /* 0x0040BBFB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BBFE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040BC04: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x0040BC06: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 8); /* 0x0040BC09: push 8 */
    edi = MEM32(eax); /* 0x0040BC0B: mov edi, dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040BC0D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BC13: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x0040BC16: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x0040BC19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BC41; /* 0x0040BC1B: je 0x40bc41 */
L_0040BC1D:
    MEM32(eax) = 0x007CCF50u; /* 0x0040BC1D: mov dword ptr [eax], 0x7ccf50 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040BC23: mov dword ptr [ebp - 4], 0 */
    MEM32(eax) = 0x007CCFCCu; /* 0x0040BC2A: mov dword ptr [eax], 0x7ccfcc */
    SET_LO16(ecx, MEM16(edi + 0x4)); /* 0x0040BC30: mov cx, word ptr [edi + 4] */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ecx)); /* 0x0040BC34: mov word ptr [eax + 4], cx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BC38: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_0040BC43; /* 0x0040BC3F: jmp 0x40bc43 */
L_0040BC41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040BC41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040BC43:
    ecx = MEM32(esi); /* 0x0040BC43: mov ecx, dword ptr [esi] */
    MEM32(esi) = eax; /* 0x0040BC45: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x0040BC47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BC51; /* 0x0040BC49: je 0x40bc51 */
L_0040BC4B:
    eax = MEM32(ecx); /* 0x0040BC4B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040BC4D: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040BC4F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040BC51:
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BC51: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BC54: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BC5B: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040BC5C: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BC5D: pop esi */
    esp = ebp; /* 0x0040BC5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BC60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BC61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BC70u);

L_0040BC70:
    PUSH32(esp, ebp); /* 0x0040BC70: push ebp */
    ebp = esp; /* 0x0040BC71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BC73: push -1 */
    PUSH32(esp, 0x00781CC8u); /* 0x0040BC75: push 0x781cc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BC7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BC80: push eax */
    PUSH32(esp, esi); /* 0x0040BC81: push esi */
    PUSH32(esp, edi); /* 0x0040BC82: push edi */
    eax = MEM32(0x855000); /* 0x0040BC83: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BC88: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BC8A: push eax */
    eax = ebp + (-0xC); /* 0x0040BC8B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BC8E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040BC94: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x0040BC96: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 8); /* 0x0040BC99: push 8 */
    edi = MEM32(eax); /* 0x0040BC9B: mov edi, dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0040BC9D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BCA3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x0040BCA6: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x0040BCA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BCCF; /* 0x0040BCAB: je 0x40bccf */
L_0040BCAD:
    MEM32(eax) = 0x007CCF50u; /* 0x0040BCAD: mov dword ptr [eax], 0x7ccf50 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0040BCB3: mov dword ptr [ebp - 4], 0 */
    MEM32(eax) = 0x007CCFD4u; /* 0x0040BCBA: mov dword ptr [eax], 0x7ccfd4 */
    ecx = MEM32(edi + 0x4); /* 0x0040BCC0: mov ecx, dword ptr [edi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x0040BCC3: mov dword ptr [eax + 4], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BCC6: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_0040BCD1; /* 0x0040BCCD: jmp 0x40bcd1 */
L_0040BCCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040BCCF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040BCD1:
    ecx = MEM32(esi); /* 0x0040BCD1: mov ecx, dword ptr [esi] */
    MEM32(esi) = eax; /* 0x0040BCD3: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x0040BCD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040BCDF; /* 0x0040BCD7: je 0x40bcdf */
L_0040BCD9:
    eax = MEM32(ecx); /* 0x0040BCD9: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040BCDB: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040BCDD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040BCDF:
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BCDF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BCE2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BCE9: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040BCEA: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BCEB: pop esi */
    esp = ebp; /* 0x0040BCEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BCEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040BCEF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040BCF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BCF2u);

    goto L_0040BCF2;
L_0040A800:
    PUSH32(esp, ebp); /* 0x0040A800: push ebp */
    ebp = esp; /* 0x0040A801: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040A803: push -1 */
    PUSH32(esp, 0x00781948u); /* 0x0040A805: push 0x781948 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040A80A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040A810: push eax */
    PUSH32(esp, ecx); /* 0x0040A811: push ecx */
    PUSH32(esp, esi); /* 0x0040A812: push esi */
    eax = MEM32(0x855000); /* 0x0040A813: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040A818: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040A81A: push eax */
    eax = ebp + (-0xC); /* 0x0040A81B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040A81E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040A824: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040A826: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x007CCFF0u; /* 0x0040A829: mov dword ptr [esi], 0x7ccff0 */
    MEM32(esi + 0x7C98) = 0x007CCFDCu; /* 0x0040A82F: mov dword ptr [esi + 0x7c98], 0x7ccfdc */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040A839: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_0040C940); /* 0x0040A840: call 0x40c940 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0040A845: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040A855; /* 0x0040A849: je 0x40a855 */
L_0040A84B:
    PUSH32(esp, esi); /* 0x0040A84B: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040A84C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040A852: add esp, 4 */
    _flag_k = FK_ADD;
L_0040A855:
    eax = esi; /* 0x0040A855: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040A857: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040A85A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040A861: pop ecx */
    esi = POP32_VAL(esp); /* 0x0040A862: pop esi */
    esp = ebp; /* 0x0040A863: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040A865: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040A866: ret 4 */
L_0040BCF2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7C98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x7C98u; /* 0x0040BCF2: sub ecx, 0x7c98 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_0040A800; /* 0x0040BCF8: jmp 0x40a800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0040BD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BD00u);

L_0040BD00:
    PUSH32(esp, ebp); /* 0x0040BD00: push ebp */
    ebp = esp; /* 0x0040BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0040BD03: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x0040BD06: cvtss2sd xmm0, xmm0 */
    RECOMP_CALL(sub_0077FC52); /* 0x0040BD0A: call 0x77fc52 */
    RECOMP_FLAGS_IN();
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x0040BD0F: cvtsd2ss xmm0, xmm0 */
    esp = ebp; /* 0x0040BD13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BD15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BD16: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BD20u);

L_0040BD20:
    PUSH32(esp, ebp); /* 0x0040BD20: push ebp */
    ebp = esp; /* 0x0040BD21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0040BD23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x0040BD26: cvtss2sd xmm0, xmm0 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x0040BD2A: andpd xmm0, xmmword ptr [0x809c90] */
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x0040BD32: cvtsd2ss xmm0, xmm0 */
    esp = ebp; /* 0x0040BD36: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BD38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BD39: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BD40u);

L_0040BD40:
    PUSH32(esp, ebp); /* 0x0040BD40: push ebp */
    ebp = esp; /* 0x0040BD41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x0040BD43: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0040BD46: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x0040BD49: cvtss2sd xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040BD4D: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM64(esp + 0x40) = _xmm[0].u64[0]; /* 0x0040BD50: movsd qword ptr [esp + 0x40], xmm0 */
    fp_push(*(double*)ADDR(esp + 0x40)); /* 0x0040BD56: fld qword ptr [esp + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x0040BD5A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_0077FC88); /* 0x0040BD5D: call 0x77fc88 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x40) = _v; } /* 0x0040BD62: fstp qword ptr [esp + 0x40] */
    _xmm[0].u64[0] = MEM64(esp + 0x40); _xmm[0].u64[1] = 0; /* 0x0040BD66: movsd xmm0, qword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0040BD6C: add esp, 8 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0040BD6F: cvtpd2ps xmm0, xmm0 */
    esp = ebp; /* 0x0040BD73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BD75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BD76: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BD80u);

L_0040BD80:
    PUSH32(esp, ebp); /* 0x0040BD80: push ebp */
    ebp = esp; /* 0x0040BD81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0040BD83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x0040BD86: cvtss2sd xmm0, xmm0 */
    _xmm[1].f64[0] = (double)_xmm[1].f32[0]; /* 0x0040BD8A: cvtss2sd xmm1, xmm1 */
    RECOMP_CALL(sub_0077FC70); /* 0x0040BD8E: call 0x77fc70 */
    RECOMP_FLAGS_IN();
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x0040BD93: cvtsd2ss xmm0, xmm0 */
    esp = ebp; /* 0x0040BD97: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BD99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BD9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BDA0u);

L_0040BDA0:
    PUSH32(esp, ecx); /* 0x0040BDA0: push ecx */
    RECOMP_CALL(sub_0040BD20); /* 0x0040BDA1: call 0x40bd20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0040BDA6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BDA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BDB0u);

L_0040BDB0:
    PUSH32(esp, ebp); /* 0x0040BDB0: push ebp */
    ebp = esp; /* 0x0040BDB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0040BDB3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040BDB6: push esi */
    esi = ecx; /* 0x0040BDB7: mov esi, ecx */
    PUSH32(esp, ecx); /* 0x0040BDB9: push ecx */
    _xmm[0].u64[0] = MEM32(esi); _xmm[0].u64[1] = 0; /* 0x0040BDBA: movss xmm0, dword ptr [esi] */
    _xmm[2].u64[0] = MEM32(esi + 0x4); _xmm[2].u64[1] = 0; /* 0x0040BDBE: movss xmm2, dword ptr [esi + 4] */
    _xmm[1] = _xmm[0]; /* 0x0040BDC3: movaps xmm1, xmm0 */
    _xmm[3].u64[0] = MEM32(esi + 0x8); _xmm[3].u64[1] = 0; /* 0x0040BDC6: movss xmm3, dword ptr [esi + 8] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040BDCB: mulss xmm1, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[0].u32[0]; /* 0x0040BDCF: movss dword ptr [ebp - 8], xmm0 */
    _xmm[0] = _xmm[2]; /* 0x0040BDD4: movaps xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040BDD7: mulss xmm0, xmm2 */
    MEM32(ebp + (-0xC)) = _xmm[2].u32[0]; /* 0x0040BDDB: movss dword ptr [ebp - 0xc], xmm2 */
    MEM32(ebp + (-0x10)) = _xmm[3].u32[0]; /* 0x0040BDE0: movss dword ptr [ebp - 0x10], xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040BDE5: addss xmm1, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x0040BDE9: movaps xmm0, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040BDEC: mulss xmm0, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040BDF0: addss xmm1, xmm0 */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x0040BDF4: movss dword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040BDF9: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x0040BDFE: fstp dword ptr [ebp - 4] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0040BE01: movss xmm0, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040BE06: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE09: comiss xmm0, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040BE47; /* 0x0040BE10: jbe 0x40be47 */
L_0040BE12:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x0040BE12: movss xmm1, dword ptr [0x808cb0] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x0040BE1A: divss xmm1, xmm0 */
    _xmm[2].u64[0] = MEM32(ebp + (-0x8)); _xmm[2].u64[1] = 0; /* 0x0040BE1E: movss xmm2, dword ptr [ebp - 8] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040BE23: mulss xmm2, xmm1 */
    MEM32(esi) = _xmm[2].u32[0]; /* 0x0040BE27: movss dword ptr [esi], xmm2 */
    _xmm[2].u64[0] = MEM32(ebp + (-0xC)); _xmm[2].u64[1] = 0; /* 0x0040BE2B: movss xmm2, dword ptr [ebp - 0xc] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040BE30: mulss xmm2, xmm1 */
    MEM32(esi + 0x4) = _xmm[2].u32[0]; /* 0x0040BE34: movss dword ptr [esi + 4], xmm2 */
    _xmm[2].u64[0] = MEM32(ebp + (-0x10)); _xmm[2].u64[1] = 0; /* 0x0040BE39: movss xmm2, dword ptr [ebp - 0x10] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040BE3E: mulss xmm2, xmm1 */
    MEM32(esi + 0x8) = _xmm[2].u32[0]; /* 0x0040BE42: movss dword ptr [esi + 8], xmm2 */
L_0040BE47:
    esi = POP32_VAL(esp); /* 0x0040BE47: pop esi */
    esp = ebp; /* 0x0040BE48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040BE4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BE4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BE50u);

L_0040BE50:
    _xmm[3].u64[0] = MEM32(ecx); _xmm[3].u64[1] = 0; /* 0x0040BE50: movss xmm3, dword ptr [ecx] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0040BE54: xorps xmm2, xmm2 */
    _xmm[1].u64[0] = MEM32(0x808B30); _xmm[1].u64[1] = 0; /* 0x0040BE57: movss xmm1, dword ptr [0x808b30] */
    _xmm[0] = _xmm[3]; /* 0x0040BE5F: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040BE62: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE66: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BE69: jb 0x40beab */
L_0040BE6B:
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0040BE6B: subss xmm3, xmm1 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE6F: comiss xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BE72: jb 0x40beab */
L_0040BE74:
    _xmm[3].u64[0] = MEM32(ecx + 0x4); _xmm[3].u64[1] = 0; /* 0x0040BE74: movss xmm3, dword ptr [ecx + 4] */
    _xmm[0] = _xmm[3]; /* 0x0040BE79: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040BE7C: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE80: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BE83: jb 0x40beab */
L_0040BE85:
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0040BE85: subss xmm3, xmm1 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE89: comiss xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BE8C: jb 0x40beab */
L_0040BE8E:
    _xmm[3].u64[0] = MEM32(ecx + 0x8); _xmm[3].u64[1] = 0; /* 0x0040BE8E: movss xmm3, dword ptr [ecx + 8] */
    _xmm[0] = _xmm[3]; /* 0x0040BE93: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040BE96: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BE9A: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BE9D: jb 0x40beab */
L_0040BE9F:
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0040BE9F: subss xmm3, xmm1 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040BEA3: comiss xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0040BEAB; /* 0x0040BEA6: jb 0x40beab */
L_0040BEA8:
    SET_LO8(eax, 1); /* 0x0040BEA8: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BEAA: ret  */
L_0040BEAB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0040BEAB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040BEAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040BEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040BEB0u);

L_0040BEB0:
    PUSH32(esp, ebp); /* 0x0040BEB0: push ebp */
    ebp = esp; /* 0x0040BEB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040BEB3: push -1 */
    PUSH32(esp, 0x00781D20u); /* 0x0040BEB5: push 0x781d20 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040BEBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040BEC0: push eax */
    PUSH32(esp, ecx); /* 0x0040BEC1: push ecx */
    PUSH32(esp, esi); /* 0x0040BEC2: push esi */
    PUSH32(esp, edi); /* 0x0040BEC3: push edi */
    eax = MEM32(0x855000); /* 0x0040BEC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040BEC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040BECB: push eax */
    eax = ebp + (-0xC); /* 0x0040BECC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040BECF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0040BED5: mov edi, ecx */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x0040BED7: mov si, word ptr [ebp + 8] */
    /* test LO16(esi), LO16(esi) */ /* 0x0040BEDB: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0040BF19; /* 0x0040BEDE: jns 0x40bf19 */
L_0040BEE0:
    /* cmp MEM8(0x86DE36), 0 */ /* 0x0040BEE0: cmp byte ptr [0x86de36], 0 */
    _flag_a = (uint32_t)(MEM8(0x86DE36)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040BF19; /* 0x0040BEE7: je 0x40bf19 */
L_0040BEE9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BEE9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BEEC: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0040BEEE: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007CD0CCu); /* 0x0040BEF1: push 0x7cd0cc */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BEF6: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0040BEFB: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BF02: mov dword ptr [ebp - 4], 0xffffffff */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x0040BF09: xorps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x0040BF0C: movss xmm2, dword ptr [0x808cb0] */
    RECOMP_CALL(sub_00614F80); /* 0x0040BF14: call 0x614f80 */
    RECOMP_FLAGS_IN();
L_0040BF19:
    /* cmp LO16(esi), MEM16(edi) */ /* 0x0040BF19: cmp si, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_0040BF57; /* 0x0040BF1C: jl 0x40bf57 */
L_0040BF1E:
    /* cmp MEM8(0x86DE36), 0 */ /* 0x0040BF1E: cmp byte ptr [0x86de36], 0 */
    _flag_a = (uint32_t)(MEM8(0x86DE36)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040BF57; /* 0x0040BF25: je 0x40bf57 */
L_0040BF27:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BF27: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BF2A: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0040BF2C: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007CD0CCu); /* 0x0040BF2F: push 0x7cd0cc */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BF34: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0040BF39: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BF40: mov dword ptr [ebp - 4], 0xffffffff */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x0040BF47: xorps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x0040BF4A: movss xmm2, dword ptr [0x808cb0] */
    RECOMP_CALL(sub_00614F80); /* 0x0040BF52: call 0x614f80 */
    RECOMP_FLAGS_IN();
L_0040BF57:
    /* test LO16(esi), LO16(esi) */ /* 0x0040BF57: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0040BF9F; /* 0x0040BF5A: jns 0x40bf9f */
L_0040BF5C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BF5C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BF5F: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0040BF61: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007CD0D8u); /* 0x0040BF64: push 0x7cd0d8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BF69: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0040BF6E: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BF75: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BF78: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0040BF7A: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007CD0FCu); /* 0x0040BF7D: push 0x7cd0fc */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BF82: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0040BF87: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BF8B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x44u; /* 0x0040BF92: mov ecx, 0x44 */
    RECOMP_CALL(sub_00668DA0); /* 0x0040BF97: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040BF9C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040BF9F:
    /* cmp LO16(esi), MEM16(edi) */ /* 0x0040BF9F: cmp si, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_0040BFE7; /* 0x0040BFA2: jl 0x40bfe7 */
L_0040BFA4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BFA4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BFA7: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x0040BFA9: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007CD0D8u); /* 0x0040BFAC: push 0x7cd0d8 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BFB1: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x0040BFB6: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040BFBD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040BFC0: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0040BFC2: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007CD104u); /* 0x0040BFC5: push 0x7cd104 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040BFCA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040BFCF: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040BFD3: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x45u; /* 0x0040BFDA: mov ecx, 0x45 */
    RECOMP_CALL(sub_00668DA0); /* 0x0040BFDF: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040BFE4: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040BFE7:
    eax = (int32_t)(int16_t)LO16(esi); /* 0x0040BFE7: movsx eax, si */
    ecx = eax + eax * 8; /* 0x0040BFEA: lea ecx, [eax + eax*8] */
    eax = MEM32(edi + 0x4); /* 0x0040BFED: mov eax, dword ptr [edi + 4] */
    eax = eax + ecx * 4; /* 0x0040BFF0: lea eax, [eax + ecx*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040BFF3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040BFF6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040BFFD: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040BFFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0040BFFF: pop esi */
    esp = ebp; /* 0x0040C000: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040C002: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040C003: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040C010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040C010u);

L_0040C010:
    PUSH32(esp, ebp); /* 0x0040C010: push ebp */
    ebp = esp; /* 0x0040C011: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040C013: push -1 */
    PUSH32(esp, 0x00781E0Au); /* 0x0040C015: push 0x781e0a */
    eax = MEM32(FS_BASE + (0)); /* 0x0040C01A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040C020: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0040C021: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0040C024: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040C029: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0040C02B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0040C02E: push esi */
    PUSH32(esp, edi); /* 0x0040C02F: push edi */
    PUSH32(esp, eax); /* 0x0040C030: push eax */
    eax = ebp + (-0xC); /* 0x0040C031: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040C034: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040C03A: mov esi, ecx */
    eax = MEM32(ebp + 0x10); /* 0x0040C03C: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x0040C03F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x0040C042: push eax */
    PUSH32(esp, ecx); /* 0x0040C043: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0040C044: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x0040C047: mov ecx, esi */
    MEM32(ebp + (-0x4C)) = esi; /* 0x0040C049: mov dword ptr [ebp - 0x4c], esi */
    RECOMP_CALL(sub_004E3110); /* 0x0040C04C: call 0x4e3110 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0040C051: mov dword ptr [ebp - 4], 0 */
    edi = esi + 0x8230; /* 0x0040C058: lea edi, [esi + 0x8230] */
    _xmm[0] = xmm_ld(0x809CC0); /* 0x0040C05E: movdqa xmm0, xmmword ptr [0x809cc0] */
    ecx = esi + 0x8350; /* 0x0040C066: lea ecx, [esi + 0x8350] */
    MEM32(esi) = 0x007CD75Cu; /* 0x0040C06C: mov dword ptr [esi], 0x7cd75c */
    MEM32(esi + 0x7C98) = 0x007CD834u; /* 0x0040C072: mov dword ptr [esi + 0x7c98], 0x7cd834 */
    xmm_st(edi + 0xC, _xmm[0]); /* 0x0040C07C: movdqu xmmword ptr [edi + 0xc], xmm0 */
    xmm_st(edi + 0x1C, _xmm[0]); /* 0x0040C081: movdqu xmmword ptr [edi + 0x1c], xmm0 */
    xmm_st(edi + 0x2C, _xmm[0]); /* 0x0040C086: movdqu xmmword ptr [edi + 0x2c], xmm0 */
    xmm_st(edi + 0x3C, _xmm[0]); /* 0x0040C08B: movdqu xmmword ptr [edi + 0x3c], xmm0 */
    xmm_st(edi + 0x4C, _xmm[0]); /* 0x0040C090: movdqu xmmword ptr [edi + 0x4c], xmm0 */
    xmm_st(edi + 0x5C, _xmm[0]); /* 0x0040C095: movdqu xmmword ptr [edi + 0x5c], xmm0 */
    xmm_st(edi + 0x6C, _xmm[0]); /* 0x0040C09A: movdqu xmmword ptr [edi + 0x6c], xmm0 */
    xmm_st(edi + 0x7C, _xmm[0]); /* 0x0040C09F: movdqu xmmword ptr [edi + 0x7c], xmm0 */
    MEM32(edi + 0x8) = 0; /* 0x0040C0A4: mov dword ptr [edi + 8], 0 */
    MEM8(edi + 0x4) = (uint8_t)(0); /* 0x0040C0AB: mov byte ptr [edi + 4], 0 */
    MEM32(edi) = 0; /* 0x0040C0AF: mov dword ptr [edi], 0 */
    RECOMP_CALL(sub_0040C780); /* 0x0040C0B5: call 0x40c780 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x94C0; /* 0x0040C0BA: lea eax, [esi + 0x94c0] */
    ecx = 0x3Fu; /* 0x0040C0C0: mov ecx, 0x3f */
    goto L_0040C0D0; /* 0x0040C0C5: jmp 0x40c0d0 */
L_0040C0D0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0040C0D0: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = 0; /* 0x0040C0D1: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0040C0D7: mov dword ptr [eax + 4], 0 */
    eax = eax + 0xC; /* 0x0040C0DE: lea eax, [eax + 0xc] */
    MEM32(eax + (-0x4)) = 0; /* 0x0040C0E1: mov dword ptr [eax - 4], 0 */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_0040C0D0; /* 0x0040C0E8: jns 0x40c0d0 */
L_0040C0EA:
    eax = esi + 0x984C; /* 0x0040C0EA: lea eax, [esi + 0x984c] */
    MEM32(eax) = 0; /* 0x0040C0F0: mov dword ptr [eax], 0 */
    MEM32(ebp + (-0x48)) = eax; /* 0x0040C0F6: mov dword ptr [ebp - 0x48], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0040C0F9: mov byte ptr [ebp - 4], 2 */
    eax = esi + 0x9854; /* 0x0040C0FD: lea eax, [esi + 0x9854] */
    MEM32(ebp + (-0x48)) = eax; /* 0x0040C103: mov dword ptr [ebp - 0x48], eax */
    MEM32(eax) = 0; /* 0x0040C106: mov dword ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0040C10C: mov byte ptr [ebp - 4], 4 */
    ecx = esi + 0x9864; /* 0x0040C110: lea ecx, [esi + 0x9864] */
    RECOMP_CALL(sub_00422B80); /* 0x0040C116: call 0x422b80 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3ADF0) = 0xFu; /* 0x0040C11B: mov dword ptr [esi + 0x3adf0], 0xf */
    MEM32(esi + 0x3ADEC) = 0; /* 0x0040C125: mov dword ptr [esi + 0x3adec], 0 */
    MEM8(esi + 0x3ADDC) = (uint8_t)(0); /* 0x0040C12F: mov byte ptr [esi + 0x3addc], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C136: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(0x87C79C); /* 0x0040C13A: mov eax, dword ptr [0x87c79c] */
    MEM32(esi + 0x9848) = 0; /* 0x0040C13F: mov dword ptr [esi + 0x9848], 0 */
    /* test eax, eax */ /* 0x0040C149: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0040C18F; /* 0x0040C14B: jne 0x40c18f */
L_0040C14D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C14D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C150: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0040C152: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007CD114u); /* 0x0040C155: push 0x7cd114 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040C15A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0040C15F: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C163: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C166: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0040C168: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007CD138u); /* 0x0040C16B: push 0x7cd138 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040C170: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0040C175: mov byte ptr [ebp - 4], 7 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C179: mov byte ptr [ebp - 4], 5 */
    ecx = 0x2Bu; /* 0x0040C17D: mov ecx, 0x2b */
    RECOMP_CALL(sub_00668DA0); /* 0x0040C182: call 0x668da0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87C79C); /* 0x0040C187: mov eax, dword ptr [0x87c79c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040C18C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040C18F:
    eax = MEM32(eax + 0x64); /* 0x0040C18F: mov eax, dword ptr [eax + 0x64] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x0040C192: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040C1D5; /* 0x0040C196: jne 0x40c1d5 */
L_0040C198:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C198: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C19B: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0040C19D: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x007CD114u); /* 0x0040C1A0: push 0x7cd114 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040C1A5: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0040C1AA: mov byte ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C1AE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C1B1: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0040C1B3: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007CD148u); /* 0x0040C1B6: push 0x7cd148 */
    RECOMP_CALL(sub_00409FA0); /* 0x0040C1BB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0040C1C0: mov byte ptr [ebp - 4], 9 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C1C4: mov byte ptr [ebp - 4], 5 */
    ecx = 0x2Cu; /* 0x0040C1C8: mov ecx, 0x2c */
    RECOMP_CALL(sub_00668DA0); /* 0x0040C1CD: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040C1D2: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040C1D5:
    PUSH32(esp, 0x007CD17Cu); /* 0x0040C1D5: push 0x7cd17c */
    ecx = esi; /* 0x0040C1DA: mov ecx, esi */
    RECOMP_CALL(sub_006378F0); /* 0x0040C1DC: call 0x6378f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007CD184u); /* 0x0040C1E1: push 0x7cd184 */
    RECOMP_CALL(sub_0060B640); /* 0x0040C1E6: call 0x60b640 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0040C1EB: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0040C1ED: push 0x7cd0c4 */
    ecx = esi + 0x3ADDC; /* 0x0040C1F2: lea ecx, [esi + 0x3addc] */
    MEM16(esi + 0x3ADF4) = (uint16_t)(LO16(eax)); /* 0x0040C1F8: mov word ptr [esi + 0x3adf4], ax */
    MEM8(esi + 0x3ADD9) = (uint8_t)(0); /* 0x0040C1FF: mov byte ptr [esi + 0x3add9], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040C206: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x8334) = (uint8_t)(0); /* 0x0040C20B: mov byte ptr [esi + 0x8334], 0 */
    ecx = esi + 0x97C0; /* 0x0040C212: lea ecx, [esi + 0x97c0] */
    MEM8(esi + 0x9850) = (uint8_t)(0); /* 0x0040C218: mov byte ptr [esi + 0x9850], 0 */
    eax = esi + 0x94C8; /* 0x0040C21F: lea eax, [esi + 0x94c8] */
    MEM32(esi + 0x8228) = 0; /* 0x0040C225: mov dword ptr [esi + 0x8228], 0 */
    edx = 0x40u; /* 0x0040C22F: mov edx, 0x40 */
    MEM32(esi + 0x822C) = 0; /* 0x0040C234: mov dword ptr [esi + 0x822c], 0 */
    edi = edi; /* 0x0040C23E: mov edi, edi */
L_0040C240:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x0040C240: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + (-0x8)) = 0; /* 0x0040C243: mov dword ptr [eax - 8], 0 */
    MEM32(eax + (-0x4)) = 0; /* 0x0040C24A: mov dword ptr [eax - 4], 0 */
    ecx = ecx + 0x2; /* 0x0040C251: lea ecx, [ecx + 2] */
    MEM32(eax) = 0; /* 0x0040C254: mov dword ptr [eax], 0 */
    eax = eax + 0xC; /* 0x0040C25A: lea eax, [eax + 0xc] */
    MEM16(ecx + (-0x2)) = (uint16_t)(LO16(edi)); /* 0x0040C25D: mov word ptr [ecx - 2], di */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0040C261: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0040C240; /* 0x0040C262: jne 0x40c240 */
L_0040C264:
    eax = MEM32(0x87C79C); /* 0x0040C264: mov eax, dword ptr [0x87c79c] */
    ecx = esi + 0x8230; /* 0x0040C269: lea ecx, [esi + 0x8230] */
    MEM32(esi + 0x9840) = edx; /* 0x0040C26F: mov dword ptr [esi + 0x9840], edx */
    MEM32(esi + 0x9844) = edx; /* 0x0040C275: mov dword ptr [esi + 0x9844], edx */
    MEM8(esi + 0x82CB) = (uint8_t)(LO8(edx)); /* 0x0040C27B: mov byte ptr [esi + 0x82cb], dl */
    eax = MEM32(eax + 0x64); /* 0x0040C281: mov eax, dword ptr [eax + 0x64] */
    PUSH32(esp, esi); /* 0x0040C284: push esi */
    eax = MEM32(eax + 0x10); /* 0x0040C285: mov eax, dword ptr [eax + 0x10] */
    MEM32(esi + 0x9860) = eax; /* 0x0040C288: mov dword ptr [esi + 0x9860], eax */
    RECOMP_CALL(sub_00409E20); /* 0x0040C28E: call 0x409e20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1170u); /* 0x0040C293: push 0x1170 */
    eax = esi + 0x8350; /* 0x0040C298: lea eax, [esi + 0x8350] */
    PUSH32(esp, 0); /* 0x0040C29E: push 0 */
    PUSH32(esp, eax); /* 0x0040C2A0: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x0040C2A1: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0040C2A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x83BE; /* 0x0040C2A9: lea edi, [esi + 0x83be] */
    ecx = 0x200u; /* 0x0040C2AF: mov ecx, 0x200 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x0040C2B4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(0x7CC698); /* 0x0040C2B6: mov edi, dword ptr [0x7cc698] */
    PUSH32(esp, 0x7804u); /* 0x0040C2BC: push 0x7804 */
    MEM16(esi + 0x8354) = (uint16_t)(LO16(eax)); /* 0x0040C2C1: mov word ptr [esi + 0x8354], ax */
    MEM16(esi + 0x8368) = (uint16_t)(LO16(eax)); /* 0x0040C2C8: mov word ptr [esi + 0x8368], ax */
    MEM32(esi + 0x8364) = eax; /* 0x0040C2CF: mov dword ptr [esi + 0x8364], eax */
    MEM32(esi + 0x93C0) = 0; /* 0x0040C2D5: mov dword ptr [esi + 0x93c0], 0 */
    RECOMP_ICALL(edi); /* 0x0040C2DF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0040C2E1: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x0040C2E4: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0040C2E7: mov byte ptr [ebp - 4], 0xa */
    /* test eax, eax */ /* 0x0040C2EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040C2F8; /* 0x0040C2ED: je 0x40c2f8 */
L_0040C2EF:
    ecx = eax; /* 0x0040C2EF: mov ecx, eax */
    RECOMP_CALL(sub_0040C8E0); /* 0x0040C2F1: call 0x40c8e0 */
    RECOMP_FLAGS_IN();
    goto L_0040C2FA; /* 0x0040C2F6: jmp 0x40c2fa */
L_0040C2F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040C2F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040C2FA:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C2FA: mov byte ptr [ebp - 4], 5 */
    MEM32(esi + 0x93C0) = eax; /* 0x0040C2FE: mov dword ptr [esi + 0x93c0], eax */
    MEM32(eax + 0x7800) = 0; /* 0x0040C304: mov dword ptr [eax + 0x7800], 0 */
    PUSH32(esp, 0x7804u); /* 0x0040C30E: push 0x7804 */
    MEM32(esi + 0x93C4) = 0; /* 0x0040C313: mov dword ptr [esi + 0x93c4], 0 */
    RECOMP_ICALL(edi); /* 0x0040C31D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C31F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x0040C322: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0040C325: mov byte ptr [ebp - 4], 0xb */
    /* test eax, eax */ /* 0x0040C329: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040C336; /* 0x0040C32B: je 0x40c336 */
L_0040C32D:
    ecx = eax; /* 0x0040C32D: mov ecx, eax */
    RECOMP_CALL(sub_0040C8E0); /* 0x0040C32F: call 0x40c8e0 */
    RECOMP_FLAGS_IN();
    goto L_0040C338; /* 0x0040C334: jmp 0x40c338 */
L_0040C336:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040C336: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0040C338:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C338: mov byte ptr [ebp - 4], 5 */
    ecx = MEM32(0x8692E8); /* 0x0040C33C: mov ecx, dword ptr [0x8692e8] */
    MEM32(esi + 0x93C4) = eax; /* 0x0040C342: mov dword ptr [esi + 0x93c4], eax */
    MEM32(eax + 0x7800) = 0; /* 0x0040C348: mov dword ptr [eax + 0x7800], 0 */
    MEM32(esi + 0x9420) = 0; /* 0x0040C352: mov dword ptr [esi + 0x9420], 0 */
    MEM32(esi + 0x9424) = 0; /* 0x0040C35C: mov dword ptr [esi + 0x9424], 0 */
    MEM32(esi + 0x9428) = 0; /* 0x0040C366: mov dword ptr [esi + 0x9428], 0 */
    MEM32(esi + 0x93D0) = 0x3F800000u; /* 0x0040C370: mov dword ptr [esi + 0x93d0], 0x3f800000 */
    MEM8(esi + 0x9449) = (uint8_t)(0); /* 0x0040C37A: mov byte ptr [esi + 0x9449], 0 */
    eax = MEM32(ecx); /* 0x0040C381: mov eax, dword ptr [ecx] */
    /* cmp eax, 7 */ /* 0x0040C383: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0040C3FB; /* 0x0040C386: ja 0x40c3fb */
L_0040C388:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x40C72C)); goto _ljump; }
L_0040C38F:
    MEM8(esi + 0x93D8) = (uint8_t)(0); /* 0x0040C38F: mov byte ptr [esi + 0x93d8], 0 */
    MEM8(esi + 0x9449) = (uint8_t)(1); /* 0x0040C396: mov byte ptr [esi + 0x9449], 1 */
    goto L_0040C45E; /* 0x0040C39D: jmp 0x40c45e */
L_0040C3A2:
    MEM8(esi + 0x9449) = (uint8_t)(2); /* 0x0040C3A2: mov byte ptr [esi + 0x9449], 2 */
    MEM8(esi + 0x93D8) = (uint8_t)(0); /* 0x0040C3A9: mov byte ptr [esi + 0x93d8], 0 */
    goto L_0040C45E; /* 0x0040C3B0: jmp 0x40c45e */
L_0040C3B5:
    MEM8(esi + 0x93D8) = (uint8_t)(0); /* 0x0040C3B5: mov byte ptr [esi + 0x93d8], 0 */
    MEM8(esi + 0x9449) = (uint8_t)(4); /* 0x0040C3BC: mov byte ptr [esi + 0x9449], 4 */
    eax = MEM32(ecx + 0x94); /* 0x0040C3C3: mov eax, dword ptr [ecx + 0x94] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0040C3C9: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0040C3CD: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0040C3D1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0040C3D1: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0040C3D4: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0040C3DD: cvtpd2ps xmm0, xmm0 */
    MEM32(esi + 0x9444) = _xmm[0].u32[0]; /* 0x0040C3E1: movss dword ptr [esi + 0x9444], xmm0 */
    goto L_0040C45E; /* 0x0040C3E9: jmp 0x40c45e */
L_0040C3EB:
    MEM8(esi + 0x9449) = (uint8_t)(1); /* 0x0040C3EB: mov byte ptr [esi + 0x9449], 1 */
L_0040C3F2:
    MEM8(esi + 0x93D8) = (uint8_t)(1); /* 0x0040C3F2: mov byte ptr [esi + 0x93d8], 1 */
    goto L_0040C45E; /* 0x0040C3F9: jmp 0x40c45e */
L_0040C3FB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C3FB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C3FE: mov ecx, esp */
    MEM32(ebp + (-0x44)) = esp; /* 0x0040C400: mov dword ptr [ebp - 0x44], esp */
    PUSH32(esp, 0x20u); /* 0x0040C403: push 0x20 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0040C405: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0040C40C: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007CD114u); /* 0x0040C413: push 0x7cd114 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0040C418: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040C41B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0040C420: mov byte ptr [ebp - 4], 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0040C424: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0040C427: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0040C429: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x29u); /* 0x0040C42C: push 0x29 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0040C42E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0040C435: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007CD194u); /* 0x0040C43C: push 0x7cd194 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0040C441: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040C444: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0040C449: mov byte ptr [ebp - 4], 0xd */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C44D: mov byte ptr [ebp - 4], 5 */
    ecx = 0x84u; /* 0x0040C451: mov ecx, 0x84 */
    RECOMP_CALL(sub_00668410); /* 0x0040C456: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0040C45B: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0040C45E:
    MEM32(esi + 0x9410) = 0; /* 0x0040C45E: mov dword ptr [esi + 0x9410], 0 */
    ecx = esi; /* 0x0040C468: mov ecx, esi */
    MEM32(esi + 0x9414) = 0; /* 0x0040C46A: mov dword ptr [esi + 0x9414], 0 */
    MEM32(esi + 0x9418) = 0; /* 0x0040C474: mov dword ptr [esi + 0x9418], 0 */
    MEM32(esi + 0x8358) = 0; /* 0x0040C47E: mov dword ptr [esi + 0x8358], 0 */
    MEM32(esi + 0x835C) = 0; /* 0x0040C488: mov dword ptr [esi + 0x835c], 0 */
    MEM32(esi + 0x8360) = 0; /* 0x0040C492: mov dword ptr [esi + 0x8360], 0 */
    MEM32(esi + 0x83AC) = 0; /* 0x0040C49C: mov dword ptr [esi + 0x83ac], 0 */
    MEM32(esi + 0x83B0) = 0; /* 0x0040C4A6: mov dword ptr [esi + 0x83b0], 0 */
    MEM32(esi + 0x83B4) = 0; /* 0x0040C4B0: mov dword ptr [esi + 0x83b4], 0 */
    MEM32(esi + 0x836C) = 0; /* 0x0040C4BA: mov dword ptr [esi + 0x836c], 0 */
    MEM32(esi + 0x8370) = 0; /* 0x0040C4C4: mov dword ptr [esi + 0x8370], 0 */
    MEM32(esi + 0x8374) = 0; /* 0x0040C4CE: mov dword ptr [esi + 0x8374], 0 */
    MEM32(esi + 0x8378) = 0; /* 0x0040C4D8: mov dword ptr [esi + 0x8378], 0 */
    MEM32(esi + 0x837C) = 0; /* 0x0040C4E2: mov dword ptr [esi + 0x837c], 0 */
    MEM32(esi + 0x8380) = 0; /* 0x0040C4EC: mov dword ptr [esi + 0x8380], 0 */
    MEM32(esi + 0x8384) = 0; /* 0x0040C4F6: mov dword ptr [esi + 0x8384], 0 */
    MEM32(esi + 0x8388) = 0; /* 0x0040C500: mov dword ptr [esi + 0x8388], 0 */
    MEM32(esi + 0x838C) = 0; /* 0x0040C50A: mov dword ptr [esi + 0x838c], 0 */
    MEM32(esi + 0x8390) = 0; /* 0x0040C514: mov dword ptr [esi + 0x8390], 0 */
    MEM32(esi + 0x8394) = 0; /* 0x0040C51E: mov dword ptr [esi + 0x8394], 0 */
    MEM32(esi + 0x8398) = 0; /* 0x0040C528: mov dword ptr [esi + 0x8398], 0 */
    _xmm[0].u64[0] = MEM64(esi + 0x80); _xmm[0].u64[1] = 0; /* 0x0040C532: movq xmm0, qword ptr [esi + 0x80] */
    eax = MEM32(esi + 0x88); /* 0x0040C53A: mov eax, dword ptr [esi + 0x88] */
    MEM64(esi + 0x8378) = _xmm[0].u64[0]; /* 0x0040C540: movq qword ptr [esi + 0x8378], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0040C548: xorps xmm0, xmm0 */
    MEM32(esi + 0x8380) = eax; /* 0x0040C54B: mov dword ptr [esi + 0x8380], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0040C551: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x946F) = (uint8_t)(0); /* 0x0040C554: mov byte ptr [esi + 0x946f], 0 */
    MEM16(esi + 0x946C) = (uint16_t)(1); /* 0x0040C55B: mov word ptr [esi + 0x946c], 1 */
    MEM16(esi + 0x9470) = (uint16_t)(LO16(eax)); /* 0x0040C564: mov word ptr [esi + 0x9470], ax */
    MEM16(esi + 0x9472) = (uint16_t)(LO16(eax)); /* 0x0040C56B: mov word ptr [esi + 0x9472], ax */
    MEM16(esi + 0x9474) = (uint16_t)(LO16(eax)); /* 0x0040C572: mov word ptr [esi + 0x9474], ax */
    MEM16(esi + 0x9476) = (uint16_t)(LO16(eax)); /* 0x0040C579: mov word ptr [esi + 0x9476], ax */
    MEM16(esi + 0x9478) = (uint16_t)(LO16(eax)); /* 0x0040C580: mov word ptr [esi + 0x9478], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0040C587: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8335) = 0; /* 0x0040C589: mov dword ptr [esi + 0x8335], 0 */
    MEM32(esi + 0x8339) = 0; /* 0x0040C593: mov dword ptr [esi + 0x8339], 0 */
    MEM32(esi + 0x833D) = 0; /* 0x0040C59D: mov dword ptr [esi + 0x833d], 0 */
    MEM32(esi + 0x8341) = 0; /* 0x0040C5A7: mov dword ptr [esi + 0x8341], 0 */
    MEM32(esi + 0x8345) = 0; /* 0x0040C5B1: mov dword ptr [esi + 0x8345], 0 */
    MEM32(esi + 0x8349) = 0; /* 0x0040C5BB: mov dword ptr [esi + 0x8349], 0 */
    MEM16(esi + 0x834D) = (uint16_t)(0); /* 0x0040C5C5: mov word ptr [esi + 0x834d], 0 */
    MEM8(esi + 0x834F) = (uint8_t)(0); /* 0x0040C5CE: mov byte ptr [esi + 0x834f], 0 */
    MEM32(esi + 0x3ADFC) = 0x00010100u; /* 0x0040C5D5: mov dword ptr [esi + 0x3adfc], 0x10100 */
    MEM32(esi + 0x3ADF8) = eax; /* 0x0040C5DF: mov dword ptr [esi + 0x3adf8], eax */
    MEM64(esi + 0x82BC) = _xmm[0].u64[0]; /* 0x0040C5E5: movq qword ptr [esi + 0x82bc], xmm0 */
    MEM32(esi + 0x82C4) = eax; /* 0x0040C5ED: mov dword ptr [esi + 0x82c4], eax */
    MEM16(esi + 0x82C8) = (uint16_t)(LO16(eax)); /* 0x0040C5F3: mov word ptr [esi + 0x82c8], ax */
    MEM8(esi + 0x3ADFF) = (uint8_t)(1); /* 0x0040C5FA: mov byte ptr [esi + 0x3adff], 1 */
    xmm_st(esi + 0x82E4, _xmm[0]); /* 0x0040C601: movdqu xmmword ptr [esi + 0x82e4], xmm0 */
    xmm_st(esi + 0x82F4, _xmm[0]); /* 0x0040C609: movdqu xmmword ptr [esi + 0x82f4], xmm0 */
    MEM64(esi + 0x8304) = _xmm[0].u64[0]; /* 0x0040C611: movq qword ptr [esi + 0x8304], xmm0 */
    RECOMP_CALL(sub_004129E0); /* 0x0040C619: call 0x4129e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x0040C61E: push 0xc */
    MEM32(ebp + (-0x30)) = 0; /* 0x0040C620: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0040C627: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0040C62A: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007CD1C0u); /* 0x0040C631: push 0x7cd1c0 */
    MEM32(esi + 0x3ADD4) = 0; /* 0x0040C636: mov dword ptr [esi + 0x3add4], 0 */
    MEM8(esi + 0x3ADD8) = (uint8_t)(0); /* 0x0040C640: mov byte ptr [esi + 0x3add8], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0040C647: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0040C64E: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0040C655: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040C659: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0040C65E: mov byte ptr [ebp - 4], 0xe */
    eax = ebp + (-0x40); /* 0x0040C662: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0040C665: push eax */
    RECOMP_CALL(sub_00419CE0); /* 0x0040C666: call 0x419ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3AE00) = _xmm[0].u32[0]; /* 0x0040C66B: movss dword ptr [esi + 0x3ae00], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C673: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0040C677: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x0040C67B: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0040C68B; /* 0x0040C681: jb 0x40c68b */
L_0040C683:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0040C683: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0040C686: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C688: add esp, 4 */
    _flag_k = FK_ADD;
L_0040C68B:
    PUSH32(esp, 0xCu); /* 0x0040C68B: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x0040C68D: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0040C694: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0040C697: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CD1D0u); /* 0x0040C69E: push 0x7cd1d0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0040C6A3: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0040C6AA: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0040C6B1: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0040C6B5: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0040C6BC: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0040C6C3: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0040C6C7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0040C6CC: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x28); /* 0x0040C6D0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0040C6D3: push eax */
    RECOMP_CALL(sub_00419DE0); /* 0x0040C6D4: call 0x419de0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3AE04) = eax; /* 0x0040C6D9: mov dword ptr [esi + 0x3ae04], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0040C6DF: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0040C6E3: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040C6F1; /* 0x0040C6E7: jb 0x40c6f1 */
L_0040C6E9:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0040C6E9: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0040C6EC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C6EE: add esp, 4 */
    _flag_k = FK_ADD;
L_0040C6F1:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0040C6F1: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0040C6F8: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0040C6FF: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040C703: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0040C70A: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0040C70C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040C70F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040C716: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040C717: pop edi */
    esi = POP32_VAL(esp); /* 0x0040C718: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0040C719: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0040C71C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0040C71E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0040C723: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040C725: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040C726: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x0040C38Fu: goto L_0040C38F;
      case 0x0040C3A2u: goto L_0040C3A2;
      case 0x0040C3B5u: goto L_0040C3B5;
      case 0x0040C3EBu: goto L_0040C3EB;
      case 0x0040C3F2u: goto L_0040C3F2;
      case 0x0040C3FBu: goto L_0040C3FB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0040C750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040C750u);

L_0040C750:
    PUSH32(esp, ebp); /* 0x0040C750: push ebp */
    ebp = esp; /* 0x0040C751: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0040C753: push esi */
    esi = ecx; /* 0x0040C754: mov esi, ecx */
    RECOMP_CALL(sub_0040C940); /* 0x0040C756: call 0x40c940 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0040C75B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040C76B; /* 0x0040C75F: je 0x40c76b */
L_0040C761:
    PUSH32(esp, esi); /* 0x0040C761: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0040C762: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C768: add esp, 4 */
    _flag_k = FK_ADD;
L_0040C76B:
    eax = esi; /* 0x0040C76B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040C76D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0040C76E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0040C76F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0040C780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040C780u);

L_0040C780:
    MEM32(ecx + 0x8) = 0; /* 0x0040C780: mov dword ptr [ecx + 8], 0 */
    eax = ecx; /* 0x0040C787: mov eax, ecx */
    MEM32(ecx + 0xC) = 0; /* 0x0040C789: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 0; /* 0x0040C790: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x1C) = 0; /* 0x0040C797: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x20) = 0; /* 0x0040C79E: mov dword ptr [ecx + 0x20], 0 */
    MEM32(ecx + 0x24) = 0; /* 0x0040C7A5: mov dword ptr [ecx + 0x24], 0 */
    MEM32(ecx + 0x28) = 0; /* 0x0040C7AC: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = 0; /* 0x0040C7B3: mov dword ptr [ecx + 0x2c], 0 */
    MEM32(ecx + 0x30) = 0; /* 0x0040C7BA: mov dword ptr [ecx + 0x30], 0 */
    MEM32(ecx + 0x34) = 0; /* 0x0040C7C1: mov dword ptr [ecx + 0x34], 0 */
    MEM32(ecx + 0x38) = 0; /* 0x0040C7C8: mov dword ptr [ecx + 0x38], 0 */
    MEM32(ecx + 0x3C) = 0; /* 0x0040C7CF: mov dword ptr [ecx + 0x3c], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x0040C7D6: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x44) = 0; /* 0x0040C7DD: mov dword ptr [ecx + 0x44], 0 */
    MEM32(ecx + 0x48) = 0; /* 0x0040C7E4: mov dword ptr [ecx + 0x48], 0 */
    MEM32(ecx + 0x5C) = 0; /* 0x0040C7EB: mov dword ptr [ecx + 0x5c], 0 */
    MEM32(ecx + 0x60) = 0; /* 0x0040C7F2: mov dword ptr [ecx + 0x60], 0 */
    MEM32(ecx + 0x64) = 0; /* 0x0040C7F9: mov dword ptr [ecx + 0x64], 0 */
    MEM32(ecx + 0x10C0) = 0; /* 0x0040C800: mov dword ptr [ecx + 0x10c0], 0 */
    MEM32(ecx + 0x10C4) = 0; /* 0x0040C80A: mov dword ptr [ecx + 0x10c4], 0 */
    MEM32(ecx + 0x10C8) = 0; /* 0x0040C814: mov dword ptr [ecx + 0x10c8], 0 */
    MEM32(ecx + 0x10D0) = 0; /* 0x0040C81E: mov dword ptr [ecx + 0x10d0], 0 */
    MEM32(ecx + 0x10D4) = 0; /* 0x0040C828: mov dword ptr [ecx + 0x10d4], 0 */
    MEM32(ecx + 0x10D8) = 0; /* 0x0040C832: mov dword ptr [ecx + 0x10d8], 0 */
    MEM32(ecx + 0x10E0) = 0; /* 0x0040C83C: mov dword ptr [ecx + 0x10e0], 0 */
    MEM32(ecx + 0x10E4) = 0; /* 0x0040C846: mov dword ptr [ecx + 0x10e4], 0 */
    MEM32(ecx + 0x10E8) = 0; /* 0x0040C850: mov dword ptr [ecx + 0x10e8], 0 */
    MEM32(ecx + 0x110C) = 0; /* 0x0040C85A: mov dword ptr [ecx + 0x110c], 0 */
    MEM32(ecx + 0x1110) = 0; /* 0x0040C864: mov dword ptr [ecx + 0x1110], 0 */
    MEM32(ecx + 0x1114) = 0; /* 0x0040C86E: mov dword ptr [ecx + 0x1114], 0 */
    MEM32(ecx + 0x1140) = 0; /* 0x0040C878: mov dword ptr [ecx + 0x1140], 0 */
    MEM32(ecx + 0x1144) = 0; /* 0x0040C882: mov dword ptr [ecx + 0x1144], 0 */
    MEM32(ecx + 0x1148) = 0; /* 0x0040C88C: mov dword ptr [ecx + 0x1148], 0 */
    MEM32(ecx + 0x1154) = 0; /* 0x0040C896: mov dword ptr [ecx + 0x1154], 0 */
    MEM32(ecx + 0x1158) = 0; /* 0x0040C8A0: mov dword ptr [ecx + 0x1158], 0 */
    MEM32(ecx + 0x115C) = 0; /* 0x0040C8AA: mov dword ptr [ecx + 0x115c], 0 */
    MEM32(ecx + 0x1160) = 0; /* 0x0040C8B4: mov dword ptr [ecx + 0x1160], 0 */
    MEM32(ecx + 0x1164) = 0; /* 0x0040C8BE: mov dword ptr [ecx + 0x1164], 0 */
    MEM32(ecx + 0x1168) = 0; /* 0x0040C8C8: mov dword ptr [ecx + 0x1168], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040C8D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040C8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040C8E0u);

L_0040C8E0:
    PUSH32(esp, esi); /* 0x0040C8E0: push esi */
    esi = ecx; /* 0x0040C8E1: mov esi, ecx */
    edx = 0x3FFu; /* 0x0040C8E3: mov edx, 0x3ff */
    eax = esi + 0x800; /* 0x0040C8E8: lea eax, [esi + 0x800] */
    edi = edi; /* 0x0040C8EE: mov edi, edi */
L_0040C8F0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0040C8F0: dec edx */
    _flag_k = FK_DEC;
    MEM32(eax) = 0; /* 0x0040C8F1: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0040C8F7: mov dword ptr [eax + 4], 0 */
    eax = eax + 0xC; /* 0x0040C8FE: lea eax, [eax + 0xc] */
    MEM32(eax + (-0x4)) = 0; /* 0x0040C901: mov dword ptr [eax - 4], 0 */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_0040C8F0; /* 0x0040C908: jns 0x40c8f0 */
L_0040C90A:
    eax = esi + 0x3800; /* 0x0040C90A: lea eax, [esi + 0x3800] */
    ecx = 0x3FFu; /* 0x0040C910: mov ecx, 0x3ff */
    goto L_0040C920; /* 0x0040C915: jmp 0x40c920 */
L_0040C920:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0040C920: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = 0; /* 0x0040C921: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0040C927: mov dword ptr [eax + 4], 0 */
    eax = eax + 0xC; /* 0x0040C92E: lea eax, [eax + 0xc] */
    MEM32(eax + (-0x4)) = 0; /* 0x0040C931: mov dword ptr [eax - 4], 0 */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_0040C920; /* 0x0040C938: jns 0x40c920 */
L_0040C93A:
    eax = esi; /* 0x0040C93A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0040C93C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040C93D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040C940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040C940u);

L_0040C940:
    PUSH32(esp, ebp); /* 0x0040C940: push ebp */
    ebp = esp; /* 0x0040C941: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0040C943: push -1 */
    PUSH32(esp, 0x00781E72u); /* 0x0040C945: push 0x781e72 */
    eax = MEM32(FS_BASE + (0)); /* 0x0040C94A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0040C950: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040C951: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040C954: push esi */
    PUSH32(esp, edi); /* 0x0040C955: push edi */
    eax = MEM32(0x855000); /* 0x0040C956: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0040C95B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0040C95D: push eax */
    eax = ebp + (-0xC); /* 0x0040C95E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0040C961: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0040C967: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0040C969: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x007CD75Cu; /* 0x0040C96C: mov dword ptr [esi], 0x7cd75c */
    MEM32(esi + 0x7C98) = 0x007CD834u; /* 0x0040C972: mov dword ptr [esi + 0x7c98], 0x7cd834 */
    MEM32(ebp + (-0x4)) = 3; /* 0x0040C97C: mov dword ptr [ebp - 4], 3 */
    eax = MEM32(esi + 0x93C0); /* 0x0040C983: mov eax, dword ptr [esi + 0x93c0] */
    edi = MEM32(0x7CC694); /* 0x0040C989: mov edi, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x0040C98F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040C9A3; /* 0x0040C991: je 0x40c9a3 */
L_0040C993:
    PUSH32(esp, eax); /* 0x0040C993: push eax */
    RECOMP_ICALL(edi); /* 0x0040C994: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C996: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x93C0) = 0; /* 0x0040C999: mov dword ptr [esi + 0x93c0], 0 */
L_0040C9A3:
    eax = MEM32(esi + 0x93C4); /* 0x0040C9A3: mov eax, dword ptr [esi + 0x93c4] */
    /* test eax, eax */ /* 0x0040C9A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040C9BD; /* 0x0040C9AB: je 0x40c9bd */
L_0040C9AD:
    PUSH32(esp, eax); /* 0x0040C9AD: push eax */
    RECOMP_ICALL(edi); /* 0x0040C9AE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C9B0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x93C4) = 0; /* 0x0040C9B3: mov dword ptr [esi + 0x93c4], 0 */
L_0040C9BD:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0040C9BD: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(esi + 0x3ADF0), 0x10u */ /* 0x0040C9C1: cmp dword ptr [esi + 0x3adf0], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3ADF0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0040C9D5; /* 0x0040C9C8: jb 0x40c9d5 */
L_0040C9CA:
    PUSH32(esp, MEM32(esi + 0x3ADDC)); /* 0x0040C9CA: push dword ptr [esi + 0x3addc] */
    RECOMP_ICALL(edi); /* 0x0040C9D0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040C9D2: add esp, 4 */
    _flag_k = FK_ADD;
L_0040C9D5:
    MEM32(esi + 0x3ADF0) = 0xFu; /* 0x0040C9D5: mov dword ptr [esi + 0x3adf0], 0xf */
    MEM32(esi + 0x3ADEC) = 0; /* 0x0040C9DF: mov dword ptr [esi + 0x3adec], 0 */
    MEM8(esi + 0x3ADDC) = (uint8_t)(0); /* 0x0040C9E9: mov byte ptr [esi + 0x3addc], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040C9F0: mov byte ptr [ebp - 4], 1 */
    eax = esi + 0x9854; /* 0x0040C9F4: lea eax, [esi + 0x9854] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0040C9FA: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0040C9FD: mov byte ptr [ebp - 4], 1 */
    ecx = MEM32(eax); /* 0x0040CA01: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x0040CA03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CA0D; /* 0x0040CA05: je 0x40ca0d */
L_0040CA07:
    eax = MEM32(ecx); /* 0x0040CA07: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040CA09: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040CA0B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040CA0D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0040CA0D: mov byte ptr [ebp - 4], 0 */
    eax = esi + 0x984C; /* 0x0040CA11: lea eax, [esi + 0x984c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0040CA17: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0040CA1A: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(eax); /* 0x0040CA1E: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x0040CA20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CA2A; /* 0x0040CA22: je 0x40ca2a */
L_0040CA24:
    eax = MEM32(ecx); /* 0x0040CA24: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x0040CA26: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x0040CA28: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_0040CA2A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0040CA2A: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi; /* 0x0040CA31: mov ecx, esi */
    RECOMP_CALL(sub_004E3920); /* 0x0040CA33: call 0x4e3920 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0040CA38: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0040CA3B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0040CA42: pop ecx */
    edi = POP32_VAL(esp); /* 0x0040CA43: pop edi */
    esi = POP32_VAL(esp); /* 0x0040CA44: pop esi */
    esp = ebp; /* 0x0040CA45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040CA47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040CA48: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040CA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040CA50u);

L_0040CA50:
    eax = MEM32(0x8692E8); /* 0x0040CA50: mov eax, dword ptr [0x8692e8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0040CA55: xorps xmm0, xmm0 */
    PUSH32(esp, esi); /* 0x0040CA58: push esi */
    esi = ecx; /* 0x0040CA59: mov esi, ecx */
    MEM64(esi + 0x82BC) = _xmm[0].u64[0]; /* 0x0040CA5B: movq qword ptr [esi + 0x82bc], xmm0 */
    MEM32(esi + 0x82C4) = 0; /* 0x0040CA63: mov dword ptr [esi + 0x82c4], 0 */
    MEM16(esi + 0x82C8) = (uint16_t)(0); /* 0x0040CA6D: mov word ptr [esi + 0x82c8], 0 */
    /* cmp MEM8(eax + 0xB0), 3 */ /* 0x0040CA76: cmp byte ptr [eax + 0xb0], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0xB0)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040CDB1; /* 0x0040CA7D: jne 0x40cdb1 */
L_0040CA83:
    /* cmp MEM8(esi + 0x81F8), 0 */ /* 0x0040CA83: cmp byte ptr [esi + 0x81f8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x81F8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040CDB1; /* 0x0040CA8A: jne 0x40cdb1 */
L_0040CA90:
    _xmm[0].u64[0] = MEM32(esi + 0x7198); _xmm[0].u64[1] = 0; /* 0x0040CA90: movss xmm0, dword ptr [esi + 0x7198] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040CA98: comiss xmm0, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040CAED; /* 0x0040CA9F: jbe 0x40caed */
L_0040CAA1:
    /* cmp MEM8(esi + 0x3ADFC), 0 */ /* 0x0040CAA1: cmp byte ptr [esi + 0x3adfc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3ADFC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040CAED; /* 0x0040CAA8: jne 0x40caed */
L_0040CAAA:
    eax = MEM32(esi); /* 0x0040CAAA: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0xCC)); /* 0x0040CAAC: call dword ptr [eax + 0xcc] */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(0x808B90); _xmm[1].u64[1] = 0; /* 0x0040CAB2: movss xmm1, dword ptr [0x808b90] */
    ecx = esi + 0x8230; /* 0x0040CABA: lea ecx, [esi + 0x8230] */
    RECOMP_CALL(sub_00409F10); /* 0x0040CAC0: call 0x409f10 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x0040CAC5: mov ecx, esi */
    RECOMP_CALL(sub_0040D6C0); /* 0x0040CAC7: call 0x40d6c0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x8228), 0 */ /* 0x0040CACC: cmp dword ptr [esi + 0x8228], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8228)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CAED; /* 0x0040CAD3: je 0x40caed */
L_0040CAD5:
    _xmm[0].u64[0] = MEM32(esi + 0x822C); _xmm[0].u64[1] = 0; /* 0x0040CAD5: movss xmm0, dword ptr [esi + 0x822c] */
    { float _s = sse_f32(MEM32(0x808B90)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040CADD: addss xmm0, dword ptr [0x808b90] */
    MEM32(esi + 0x822C) = _xmm[0].u32[0]; /* 0x0040CAE5: movss dword ptr [esi + 0x822c], xmm0 */
L_0040CAED:
    MEM8(esi + 0x3ADD9) = (uint8_t)(0); /* 0x0040CAED: mov byte ptr [esi + 0x3add9], 0 */
    eax = (uint32_t)MEM8(esi + 0x82BD); /* 0x0040CAF4: movzx eax, byte ptr [esi + 0x82bd] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0040CAFB: movd xmm0, eax */
    eax = (uint32_t)MEM8(esi + 0x82BE); /* 0x0040CAFF: movzx eax, byte ptr [esi + 0x82be] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CB06: cvtdq2ps xmm0, xmm0 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0040CB09: movd xmm1, eax */
    eax = (uint32_t)MEM8(esi + 0x7177); /* 0x0040CB0D: movzx eax, byte ptr [esi + 0x7177] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CB14: cvtdq2ps xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0040CB17: subss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0040CB1B: movd xmm0, eax */
    eax = (uint32_t)MEM8(esi + 0x7178); /* 0x0040CB1F: movzx eax, byte ptr [esi + 0x7178] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CB26: cvtdq2ps xmm0, xmm0 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0040CB29: movd xmm2, eax */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CB2D: cvtdq2ps xmm2, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0040CB30: subss xmm2, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0040CB34: xorps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040CB37: mulss xmm2, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x0040CB3B: addss xmm2, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040CB3F: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040CB5E; /* 0x0040CB42: jbe 0x40cb5e */
L_0040CB44:
    { xmm_t _s = xmm_ld(0x809CB0); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0040CB44: xorps xmm2, xmmword ptr [0x809cb0] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0040CB4B: cvttss2si eax, xmm2 */
    MEM8(esi + 0x82BE) = (uint8_t)(0); /* 0x0040CB4F: mov byte ptr [esi + 0x82be], 0 */
    MEM8(esi + 0x82BD) = (uint8_t)(LO8(eax)); /* 0x0040CB56: mov byte ptr [esi + 0x82bd], al */
    goto L_0040CB6F; /* 0x0040CB5C: jmp 0x40cb6f */
L_0040CB5E:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[2].f32[0], 1); /* 0x0040CB5E: cvttss2si eax, xmm2 */
    MEM8(esi + 0x82BD) = (uint8_t)(0); /* 0x0040CB62: mov byte ptr [esi + 0x82bd], 0 */
    MEM8(esi + 0x82BE) = (uint8_t)(LO8(eax)); /* 0x0040CB69: mov byte ptr [esi + 0x82be], al */
L_0040CB6F:
    /* cmp MEM8(esi + 0x3ADFC), 0 */ /* 0x0040CB6F: cmp byte ptr [esi + 0x3adfc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3ADFC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CB7F; /* 0x0040CB76: je 0x40cb7f */
L_0040CB78:
    ecx = esi; /* 0x0040CB78: mov ecx, esi */
    RECOMP_CALL(sub_0040CDC0); /* 0x0040CB7A: call 0x40cdc0 */
    RECOMP_FLAGS_IN();
L_0040CB7F:
    _xmm[0].u64[0] = MEM32(esi + 0x7198); _xmm[0].u64[1] = 0; /* 0x0040CB7F: movss xmm0, dword ptr [esi + 0x7198] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040CB87: ucomiss xmm0, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x0040CB8E: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x0040CB8F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_0040CDAF; /* 0x0040CB92: jnp 0x40cdaf */
L_0040CB98:
    eax = (uint32_t)MEM8(esi + 0x82CB); /* 0x0040CB98: movzx eax, byte ptr [esi + 0x82cb] */
    ecx = esi; /* 0x0040CB9F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0040CBA1: push eax */
    RECOMP_CALL(sub_004139E0); /* 0x0040CBA2: call 0x4139e0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(esi + 0x82BC)); /* 0x0040CBA7: mov cl, byte ptr [esi + 0x82bc] */
    MEM8(esi + 0x82F8) = (uint8_t)(LO8(ecx)); /* 0x0040CBAD: mov byte ptr [esi + 0x82f8], cl */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0040CBB3: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CBB7: cvtdq2ps xmm1, xmm1 */
    eax = (uint32_t)LO8(ecx); /* 0x0040CBBA: movzx eax, cl */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0040CBBD: movd xmm0, eax */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x0040CBC1: divss xmm1, dword ptr [0x80951c] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0040CBC9: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040CBCC: mulss xmm1, xmm0 */
    edx = (uint32_t)sse_cvt_i32((double)_xmm[1].f32[0], 1); /* 0x0040CBD0: cvttss2si edx, xmm1 */
    MEM8(esi + 0x82E4) = (uint8_t)(LO8(edx)); /* 0x0040CBD4: mov byte ptr [esi + 0x82e4], dl */
    SET_LO8(eax, MEM8(esi + 0x7176)); /* 0x0040CBDA: mov al, byte ptr [esi + 0x7176] */
    MEM8(esi + 0x7184) = (uint8_t)(LO8(eax)); /* 0x0040CBE0: mov byte ptr [esi + 0x7184], al */
    /* cmp LO8(eax), LO8(edx) */ /* 0x0040CBE6: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CBF8; /* 0x0040CBE8: je 0x40cbf8 */
L_0040CBEA:
    MEM8(esi + 0x7176) = (uint8_t)(LO8(edx)); /* 0x0040CBEA: mov byte ptr [esi + 0x7176], dl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 1)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 1)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 1); /* 0x0040CBF0: or word ptr [esi + 0x7174], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CBF8:
    eax = (uint32_t)MEM8(esi + 0x82CB); /* 0x0040CBF8: movzx eax, byte ptr [esi + 0x82cb] */
    ecx = esi; /* 0x0040CBFF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0040CC01: push eax */
    RECOMP_CALL(sub_00413A20); /* 0x0040CC02: call 0x413a20 */
    RECOMP_FLAGS_IN();
    _xmm[1] = _xmm[0]; /* 0x0040CC07: movaps xmm1, xmm0 */
    RECOMP_CALL(sub_0044D990); /* 0x0040CC0A: call 0x44d990 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(esi + 0x82BD)); /* 0x0040CC0F: mov cl, byte ptr [esi + 0x82bd] */
    SET_LO8(eax, MEM8(esi + 0x7177)); /* 0x0040CC15: mov al, byte ptr [esi + 0x7177] */
    MEM8(esi + 0x7185) = (uint8_t)(LO8(eax)); /* 0x0040CC1B: mov byte ptr [esi + 0x7185], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CC21: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CC33; /* 0x0040CC23: je 0x40cc33 */
L_0040CC25:
    MEM8(esi + 0x7177) = (uint8_t)(LO8(ecx)); /* 0x0040CC25: mov byte ptr [esi + 0x7177], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 2)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 2)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 2); /* 0x0040CC2B: or word ptr [esi + 0x7174], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CC33:
    SET_LO8(ecx, MEM8(esi + 0x82BE)); /* 0x0040CC33: mov cl, byte ptr [esi + 0x82be] */
    SET_LO8(eax, MEM8(esi + 0x7178)); /* 0x0040CC39: mov al, byte ptr [esi + 0x7178] */
    MEM8(esi + 0x7186) = (uint8_t)(LO8(eax)); /* 0x0040CC3F: mov byte ptr [esi + 0x7186], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CC45: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CC57; /* 0x0040CC47: je 0x40cc57 */
L_0040CC49:
    MEM8(esi + 0x7178) = (uint8_t)(LO8(ecx)); /* 0x0040CC49: mov byte ptr [esi + 0x7178], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 4)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 4)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 4); /* 0x0040CC4F: or word ptr [esi + 0x7174], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CC57:
    SET_LO8(ecx, MEM8(esi + 0x82BF)); /* 0x0040CC57: mov cl, byte ptr [esi + 0x82bf] */
    SET_LO8(eax, MEM8(esi + 0x7179)); /* 0x0040CC5D: mov al, byte ptr [esi + 0x7179] */
    MEM8(esi + 0x7187) = (uint8_t)(LO8(eax)); /* 0x0040CC63: mov byte ptr [esi + 0x7187], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CC69: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CC7B; /* 0x0040CC6B: je 0x40cc7b */
L_0040CC6D:
    MEM8(esi + 0x7179) = (uint8_t)(LO8(ecx)); /* 0x0040CC6D: mov byte ptr [esi + 0x7179], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 8)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 8)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 8); /* 0x0040CC73: or word ptr [esi + 0x7174], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CC7B:
    SET_LO8(ecx, MEM8(esi + 0x82C0)); /* 0x0040CC7B: mov cl, byte ptr [esi + 0x82c0] */
    SET_LO8(eax, MEM8(esi + 0x717A)); /* 0x0040CC81: mov al, byte ptr [esi + 0x717a] */
    MEM8(esi + 0x7188) = (uint8_t)(LO8(eax)); /* 0x0040CC87: mov byte ptr [esi + 0x7188], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CC8D: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CC9F; /* 0x0040CC8F: je 0x40cc9f */
L_0040CC91:
    MEM8(esi + 0x717A) = (uint8_t)(LO8(ecx)); /* 0x0040CC91: mov byte ptr [esi + 0x717a], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 0x10u)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 0x10u)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 0x10u); /* 0x0040CC97: or word ptr [esi + 0x7174], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CC9F:
    SET_LO8(ecx, MEM8(esi + 0x82C2)); /* 0x0040CC9F: mov cl, byte ptr [esi + 0x82c2] */
    SET_LO8(eax, MEM8(esi + 0x717C)); /* 0x0040CCA5: mov al, byte ptr [esi + 0x717c] */
    MEM8(esi + 0x718A) = (uint8_t)(LO8(eax)); /* 0x0040CCAB: mov byte ptr [esi + 0x718a], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CCB1: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CCC3; /* 0x0040CCB3: je 0x40ccc3 */
L_0040CCB5:
    MEM8(esi + 0x717C) = (uint8_t)(LO8(ecx)); /* 0x0040CCB5: mov byte ptr [esi + 0x717c], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 0x40u)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 0x40u)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 0x40u); /* 0x0040CCBB: or word ptr [esi + 0x7174], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CCC3:
    SET_LO8(ecx, MEM8(esi + 0x82C4)); /* 0x0040CCC3: mov cl, byte ptr [esi + 0x82c4] */
    SET_LO8(eax, MEM8(esi + 0x717E)); /* 0x0040CCC9: mov al, byte ptr [esi + 0x717e] */
    MEM8(esi + 0x718C) = (uint8_t)(LO8(eax)); /* 0x0040CCCF: mov byte ptr [esi + 0x718c], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CCD5: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CCEB; /* 0x0040CCD7: je 0x40cceb */
L_0040CCD9:
    eax = 0x100u; /* 0x0040CCD9: mov eax, 0x100 */
    MEM8(esi + 0x717E) = (uint8_t)(LO8(ecx)); /* 0x0040CCDE: mov byte ptr [esi + 0x717e], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | LO16(eax)); /* 0x0040CCE4: or word ptr [esi + 0x7174], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CCEB:
    SET_LO8(ecx, MEM8(esi + 0x82C3)); /* 0x0040CCEB: mov cl, byte ptr [esi + 0x82c3] */
    SET_LO8(eax, MEM8(esi + 0x717D)); /* 0x0040CCF1: mov al, byte ptr [esi + 0x717d] */
    MEM8(esi + 0x718B) = (uint8_t)(LO8(eax)); /* 0x0040CCF7: mov byte ptr [esi + 0x718b], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CCFD: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CD13; /* 0x0040CCFF: je 0x40cd13 */
L_0040CD01:
    eax = 0x80u; /* 0x0040CD01: mov eax, 0x80 */
    MEM8(esi + 0x717D) = (uint8_t)(LO8(ecx)); /* 0x0040CD06: mov byte ptr [esi + 0x717d], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | LO16(eax)); /* 0x0040CD0C: or word ptr [esi + 0x7174], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CD13:
    SET_LO8(ecx, MEM8(esi + 0x82C6)); /* 0x0040CD13: mov cl, byte ptr [esi + 0x82c6] */
    SET_LO8(eax, MEM8(esi + 0x7180)); /* 0x0040CD19: mov al, byte ptr [esi + 0x7180] */
    MEM8(esi + 0x718E) = (uint8_t)(LO8(eax)); /* 0x0040CD1F: mov byte ptr [esi + 0x718e], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CD25: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CD3B; /* 0x0040CD27: je 0x40cd3b */
L_0040CD29:
    eax = 0x400u; /* 0x0040CD29: mov eax, 0x400 */
    MEM8(esi + 0x7180) = (uint8_t)(LO8(ecx)); /* 0x0040CD2E: mov byte ptr [esi + 0x7180], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | LO16(eax)); /* 0x0040CD34: or word ptr [esi + 0x7174], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CD3B:
    SET_LO8(ecx, MEM8(esi + 0x82C1)); /* 0x0040CD3B: mov cl, byte ptr [esi + 0x82c1] */
    SET_LO8(eax, MEM8(esi + 0x717B)); /* 0x0040CD41: mov al, byte ptr [esi + 0x717b] */
    MEM8(esi + 0x7189) = (uint8_t)(LO8(eax)); /* 0x0040CD47: mov byte ptr [esi + 0x7189], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CD4D: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CD5F; /* 0x0040CD4F: je 0x40cd5f */
L_0040CD51:
    MEM8(esi + 0x717B) = (uint8_t)(LO8(ecx)); /* 0x0040CD51: mov byte ptr [esi + 0x717b], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | 0x20u)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | 0x20u)) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | 0x20u); /* 0x0040CD57: or word ptr [esi + 0x7174], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CD5F:
    SET_LO8(ecx, MEM8(esi + 0x82C5)); /* 0x0040CD5F: mov cl, byte ptr [esi + 0x82c5] */
    SET_LO8(eax, MEM8(esi + 0x717F)); /* 0x0040CD65: mov al, byte ptr [esi + 0x717f] */
    MEM8(esi + 0x718D) = (uint8_t)(LO8(eax)); /* 0x0040CD6B: mov byte ptr [esi + 0x718d], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CD71: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CD87; /* 0x0040CD73: je 0x40cd87 */
L_0040CD75:
    eax = 0x200u; /* 0x0040CD75: mov eax, 0x200 */
    MEM8(esi + 0x717F) = (uint8_t)(LO8(ecx)); /* 0x0040CD7A: mov byte ptr [esi + 0x717f], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | LO16(eax)); /* 0x0040CD80: or word ptr [esi + 0x7174], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CD87:
    SET_LO8(ecx, MEM8(esi + 0x82C9)); /* 0x0040CD87: mov cl, byte ptr [esi + 0x82c9] */
    SET_LO8(eax, MEM8(esi + 0x7183)); /* 0x0040CD8D: mov al, byte ptr [esi + 0x7183] */
    MEM8(esi + 0x7191) = (uint8_t)(LO8(eax)); /* 0x0040CD93: mov byte ptr [esi + 0x7191], al */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x0040CD99: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CDAF; /* 0x0040CD9B: je 0x40cdaf */
L_0040CD9D:
    eax = 0x2000u; /* 0x0040CD9D: mov eax, 0x2000 */
    MEM8(esi + 0x7183) = (uint8_t)(LO8(ecx)); /* 0x0040CDA2: mov byte ptr [esi + 0x7183], cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x7174) | LO16(eax))) << 16;
    MEM16(esi + 0x7174) = (uint16_t)(MEM16(esi + 0x7174) | LO16(eax)); /* 0x0040CDA8: or word ptr [esi + 0x7174], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_0040CDAF:
    ecx = esi; /* 0x0040CDAF: mov ecx, esi */
L_0040CDB1:
    esi = POP32_VAL(esp); /* 0x0040CDB1: pop esi */
    goto L_004E3D10; /* 0x0040CDB2: jmp 0x4e3d10 */
L_004E3D10:
    PUSH32(esp, ebp); /* 0x004E3D10: push ebp */
    ebp = esp; /* 0x004E3D11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x004E3D13: push ecx */
    eax = MEM32(0x8692E8); /* 0x004E3D14: mov eax, dword ptr [0x8692e8] */
    PUSH32(esp, ebx); /* 0x004E3D19: push ebx */
    PUSH32(esp, esi); /* 0x004E3D1A: push esi */
    PUSH32(esp, edi); /* 0x004E3D1B: push edi */
    /* cmp MEM8(eax + 0x1C), 0 */ /* 0x004E3D1C: cmp byte ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = ecx; /* 0x004E3D20: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E4052; /* 0x004E3D22: jne 0x4e4052 */
L_004E3D28:
    RECOMP_CALL(sub_0040A630); /* 0x004E3D28: call 0x40a630 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x004E3D2D: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(eax); /* 0x004E3D2F: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x004E3D31: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x004E3D34: sub eax, edx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x004E3D36: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test LO8(eax), LO8(eax) */ /* 0x004E3D39: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E3D5C; /* 0x004E3D3B: je 0x4e3d5c */
L_004E3D3D:
    ecx = ecx; /* 0x004E3D3D: lea ecx, [ecx] */
L_004E3D40:
    ecx = (uint32_t)LO8(ebx); /* 0x004E3D40: movzx ecx, bl */
    /* cmp ecx, eax */ /* 0x004E3D43: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_004E3D4B; /* 0x004E3D45: jb 0x4e3d4b */
L_004E3D47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x004E3D47: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_004E3D4E; /* 0x004E3D49: jmp 0x4e3d4e */
L_004E3D4B:
    ecx = MEM32(edx + ecx * 4); /* 0x004E3D4B: mov ecx, dword ptr [edx + ecx*4] */
L_004E3D4E:
    /* cmp MEM32(ecx + 0xCAB0), esi */ /* 0x004E3D4E: cmp dword ptr [ecx + 0xcab0], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xCAB0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_004E3D5C; /* 0x004E3D54: je 0x4e3d5c */
L_004E3D56:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x004E3D56: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* cmp LO8(ebx), LO8(eax) */ /* 0x004E3D58: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_004E3D40; /* 0x004E3D5A: jb 0x4e3d40 */
L_004E3D5C:
    eax = MEM32(esi); /* 0x004E3D5C: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x004E3D5E: mov ecx, esi */
    PUSH32(esp, 0x0087C7B1u); /* 0x004E3D60: push 0x87c7b1 */
    RECOMP_ICALL(MEM32(eax + 0xA4)); /* 0x004E3D65: call dword ptr [eax + 0xa4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x004E3D6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_004E3D99; /* 0x004E3D6D: jle 0x4e3d99 */
L_004E3D6F:
    ecx = MEM32(0x87C7A4); /* 0x004E3D6F: mov ecx, dword ptr [0x87c7a4] */
    MEM8(0x87C7B0) = (uint8_t)(LO8(ebx)); /* 0x004E3D75: mov byte ptr [0x87c7b0], bl */
    MEM8(eax + 0x87C7B1) = (uint8_t)(0xFFu); /* 0x004E3D7B: mov byte ptr [eax + 0x87c7b1], 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x004E3D82: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x004E3D85: push eax */
    eax = MEM32(0x87026C); /* 0x004E3D86: mov eax, dword ptr [0x87026c] */
    PUSH32(esp, 0x0087C7B0u); /* 0x004E3D8B: push 0x87c7b0 */
    PUSH32(esp, 1); /* 0x004E3D90: push 1 */
    PUSH32(esp, MEM32(eax)); /* 0x004E3D92: push dword ptr [eax] */
    RECOMP_CALL(sub_0069FEA0); /* 0x004E3D94: call 0x69fea0 */
    RECOMP_FLAGS_IN();
L_004E3D99:
    ecx = MEM32(0x87026C); /* 0x004E3D99: mov ecx, dword ptr [0x87026c] */
    ecx = MEM32(ecx); /* 0x004E3D9F: mov ecx, dword ptr [ecx] */
    eax = ecx; /* 0x004E3DA1: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x004E3DA3: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_004E3DAF; /* 0x004E3DA8: jns 0x4e3daf */
L_004E3DAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x004E3DAA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x004E3DAB: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x004E3DAE: inc eax */
    _flag_k = FK_INC;
L_004E3DAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_004E4052; /* 0x004E3DAF: jne 0x4e4052 */
L_004E3DB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x004E3DB5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000001Fu);
    ecx = ecx & 0x8000001Fu; /* 0x004E3DB7: and ecx, 0x8000001f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_004E3DC4; /* 0x004E3DBD: jns 0x4e3dc4 */
L_004E3DBF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x004E3DBF: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFE0u)); _flag_b = (uint32_t)((ecx | 0xFFFFFFE0u));
    ecx = ecx | 0xFFFFFFE0u; /* 0x004E3DC0: or ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x004E3DC3: inc ecx */
    _flag_k = FK_INC;
L_004E3DC4:
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x004E3DC4: xorps xmm1, xmm1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_004E3DEB; /* 0x004E3DC7: je 0x4e3deb */
L_004E3DC9:
    _xmm[0].u64[0] = MEM32(esi + 0x7198); _xmm[0].u64[1] = 0; /* 0x004E3DC9: movss xmm0, dword ptr [esi + 0x7198] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x004E3DD1: ucomiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x004E3DD4: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x004E3DD5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_004E3DF0; /* 0x004E3DD8: jp 0x4e3df0 */
L_004E3DDA:
    _xmm[0].u64[0] = MEM32(0x809318); _xmm[0].u64[1] = 0; /* 0x004E3DDA: movss xmm0, dword ptr [0x809318] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(esi + 0x75E8))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x004E3DE2: comiss xmm0, dword ptr [esi + 0x75e8] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_004E3DF0; /* 0x004E3DE9: jbe 0x4e3df0 */
L_004E3DEB:
    edx = 0x10u; /* 0x004E3DEB: mov edx, 0x10 */
L_004E3DF0:
    _xmm[1].u64[0] = MEM32(esi + 0x719C); _xmm[1].u64[1] = 0; /* 0x004E3DF0: movss xmm1, dword ptr [esi + 0x719c] */
    _xmm[0].u64[0] = MEM32(esi + 0x7198); _xmm[0].u64[1] = 0; /* 0x004E3DF8: movss xmm0, dword ptr [esi + 0x7198] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x004E3E00: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_004E3E15; /* 0x004E3E03: jbe 0x4e3e15 */
L_004E3E05:
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x80951C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x004E3E05: ucomiss xmm0, dword ptr [0x80951c] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x004E3E0C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x004E3E0D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_004E3E15; /* 0x004E3E10: jp 0x4e3e15 */
L_004E3E12:
    _flag_a = (uint32_t)((edx | 8)); _flag_b = (uint32_t)((edx | 8));
    edx = edx | 8; /* 0x004E3E12: or edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_004E3E15:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x004E3E15: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_004E3E22; /* 0x004E3E18: jbe 0x4e3e22 */
L_004E3E1A:
    /* test LO8(edx), 8 */ /* 0x004E3E1A: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_004E3E22; /* 0x004E3E1D: jne 0x4e3e22 */
L_004E3E1F:
    _flag_a = (uint32_t)((edx | 4)); _flag_b = (uint32_t)((edx | 4));
    edx = edx | 4; /* 0x004E3E1F: or edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_004E3E22:
    edi = MEM32(0x8692E8); /* 0x004E3E22: mov edi, dword ptr [0x8692e8] */
    eax = MEM32(edi); /* 0x004E3E28: mov eax, dword ptr [edi] */
    /* cmp eax, 2 */ /* 0x004E3E2A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E37; /* 0x004E3E2D: jne 0x4e3e37 */
L_004E3E2F:
    /* cmp MEM8(esi + 0x7EB0), LO8(eax) */ /* 0x004E3E2F: cmp byte ptr [esi + 0x7eb0], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x7EB0)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E4A; /* 0x004E3E35: jne 0x4e3e4a */
L_004E3E37:
    /* cmp eax, 6 */ /* 0x004E3E37: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E4D; /* 0x004E3E3A: jne 0x4e3e4d */
L_004E3E3C:
    ecx = (int32_t)(int8_t)MEM8(edi + 0xE4); /* 0x004E3E3C: movsx ecx, byte ptr [edi + 0xe4] */
    eax = (uint32_t)LO8(ebx); /* 0x004E3E43: movzx eax, bl */
    /* cmp ecx, eax */ /* 0x004E3E46: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E4D; /* 0x004E3E48: jne 0x4e3e4d */
L_004E3E4A:
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x004E3E4A: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_004E3E4D:
    eax = MEM32(edi); /* 0x004E3E4D: mov eax, dword ptr [edi] */
    /* cmp eax, 5 */ /* 0x004E3E4F: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E67; /* 0x004E3E52: jne 0x4e3e67 */
L_004E3E54:
    ecx = (int32_t)(int8_t)MEM8(edi + 0xC4); /* 0x004E3E54: movsx ecx, byte ptr [edi + 0xc4] */
    eax = (uint32_t)LO8(ebx); /* 0x004E3E5B: movzx eax, bl */
    /* cmp ecx, eax */ /* 0x004E3E5E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x004E3E60: mov eax, dword ptr [edi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E67; /* 0x004E3E62: jne 0x4e3e67 */
L_004E3E64:
    _flag_a = (uint32_t)((edx | 2)); _flag_b = (uint32_t)((edx | 2));
    edx = edx | 2; /* 0x004E3E64: or edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_004E3E67:
    /* test LO8(ebx), LO8(ebx) */ /* 0x004E3E67: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_004E3E7C; /* 0x004E3E69: jne 0x4e3e7c */
L_004E3E6B:
    /* cmp eax, 5 */ /* 0x004E3E6B: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E7C; /* 0x004E3E6E: jne 0x4e3e7c */
L_004E3E70:
    /* cmp MEM8(edi + 0xC4), 0xFFu */ /* 0x004E3E70: cmp byte ptr [edi + 0xc4], 0xff */
    _flag_a = (uint32_t)(MEM8(edi + 0xC4)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_004E3E7C; /* 0x004E3E77: jne 0x4e3e7c */
L_004E3E79:
    _flag_a = (uint32_t)((edx | 0x20u)); _flag_b = (uint32_t)((edx | 0x20u));
    edx = edx | 0x20u; /* 0x004E3E79: or edx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_004E3E7C:
    MEM8(0x87C7B0) = (uint8_t)(LO8(ebx)); /* 0x004E3E7C: mov byte ptr [0x87c7b0], bl */
    ecx = 0x11u; /* 0x004E3E82: mov ecx, 0x11 */
    MEM32(0x87C7B1) = edx; /* 0x004E3E87: mov dword ptr [0x87c7b1], edx */
    eax = MEM32(esi + 0xCE8); /* 0x004E3E8D: mov eax, dword ptr [esi + 0xce8] */
    _xmm[0].u64[0] = MEM64(eax + 0x4); _xmm[0].u64[1] = 0; /* 0x004E3E93: movq xmm0, qword ptr [eax + 4] */
    MEM64(0x87C7B5) = _xmm[0].u64[0]; /* 0x004E3E98: movq qword ptr [0x87c7b5], xmm0 */
    eax = MEM32(eax + 0xC); /* 0x004E3EA0: mov eax, dword ptr [eax + 0xc] */
    MEM32(0x87C7BD) = eax; /* 0x004E3EA3: mov dword ptr [0x87c7bd], eax */
    /* test LO8(edx), 0x10u */ /* 0x004E3EA8: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E3EFE; /* 0x004E3EAB: je 0x4e3efe */
L_004E3EAD:
    eax = MEM32(esi + 0xCE8); /* 0x004E3EAD: mov eax, dword ptr [esi + 0xce8] */
    ecx = 0x39u; /* 0x004E3EB3: mov ecx, 0x39 */
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x004E3EB8: movdqu xmm0, xmmword ptr [eax + 0x10] */
    xmm_st(0x87C7C1, _xmm[0]); /* 0x004E3EBD: movdqu xmmword ptr [0x87c7c1], xmm0 */
    eax = MEM32(esi + 0xCE8); /* 0x004E3EC5: mov eax, dword ptr [esi + 0xce8] */
    _xmm[0].u64[0] = MEM64(eax + 0x6C); _xmm[0].u64[1] = 0; /* 0x004E3ECB: movq xmm0, qword ptr [eax + 0x6c] */
    MEM64(0x87C7D1) = _xmm[0].u64[0]; /* 0x004E3ED0: movq qword ptr [0x87c7d1], xmm0 */
    eax = MEM32(eax + 0x74); /* 0x004E3ED8: mov eax, dword ptr [eax + 0x74] */
    MEM32(0x87C7D9) = eax; /* 0x004E3EDB: mov dword ptr [0x87c7d9], eax */
    eax = MEM32(esi + 0xCE8); /* 0x004E3EE0: mov eax, dword ptr [esi + 0xce8] */
    _xmm[0].u64[0] = MEM64(eax + 0x78); _xmm[0].u64[1] = 0; /* 0x004E3EE6: movq xmm0, qword ptr [eax + 0x78] */
    MEM64(0x87C7DD) = _xmm[0].u64[0]; /* 0x004E3EEB: movq qword ptr [0x87c7dd], xmm0 */
    eax = MEM32(eax + 0x80); /* 0x004E3EF3: mov eax, dword ptr [eax + 0x80] */
    MEM32(0x87C7E5) = eax; /* 0x004E3EF9: mov dword ptr [0x87c7e5], eax */
L_004E3EFE:
    /* test LO8(edx), 4 */ /* 0x004E3EFE: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E3FC2; /* 0x004E3F01: je 0x4e3fc2 */
L_004E3F07:
    eax = MEM32(esi + 0x7198); /* 0x004E3F07: mov eax, dword ptr [esi + 0x7198] */
    MEM32(ecx + 0x87C7B0) = eax; /* 0x004E3F0D: mov dword ptr [ecx + 0x87c7b0], eax */
    _xmm[0] = xmm_ld(esi + 0x71A0); /* 0x004E3F13: movdqu xmm0, xmmword ptr [esi + 0x71a0] */
    xmm_st(ecx + 0x87C7B4, _xmm[0]); /* 0x004E3F1B: movdqu xmmword ptr [ecx + 0x87c7b4], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x71B0); /* 0x004E3F23: movdqu xmm0, xmmword ptr [esi + 0x71b0] */
    xmm_st(ecx + 0x87C7C4, _xmm[0]); /* 0x004E3F2B: movdqu xmmword ptr [ecx + 0x87c7c4], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x71C0); /* 0x004E3F33: movdqu xmm0, xmmword ptr [esi + 0x71c0] */
    xmm_st(ecx + 0x87C7D4, _xmm[0]); /* 0x004E3F3B: movdqu xmmword ptr [ecx + 0x87c7d4], xmm0 */
    eax = MEM32(esi + 0x6BA4); /* 0x004E3F43: mov eax, dword ptr [esi + 0x6ba4] */
    _xmm[0].u64[0] = MEM32(eax + 0x4B9C); _xmm[0].u64[1] = 0; /* 0x004E3F49: movss xmm0, dword ptr [eax + 0x4b9c] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x004E3F51: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x004E3F56: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x87C7E4) = eax; /* 0x004E3F59: mov dword ptr [ecx + 0x87c7e4], eax */
    eax = MEM32(esi + 0x6D0C); /* 0x004E3F5F: mov eax, dword ptr [esi + 0x6d0c] */
    _xmm[0].u64[0] = MEM32(eax + 0x4B9C); _xmm[0].u64[1] = 0; /* 0x004E3F65: movss xmm0, dword ptr [eax + 0x4b9c] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x004E3F6D: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x004E3F72: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x87C7E8) = eax; /* 0x004E3F75: mov dword ptr [ecx + 0x87c7e8], eax */
    eax = MEM32(esi + 0x6E74); /* 0x004E3F7B: mov eax, dword ptr [esi + 0x6e74] */
    _xmm[0].u64[0] = MEM32(eax + 0x4B9C); _xmm[0].u64[1] = 0; /* 0x004E3F81: movss xmm0, dword ptr [eax + 0x4b9c] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x004E3F89: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x004E3F8E: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x87C7EC) = eax; /* 0x004E3F91: mov dword ptr [ecx + 0x87c7ec], eax */
    eax = MEM32(esi + 0x6FDC); /* 0x004E3F97: mov eax, dword ptr [esi + 0x6fdc] */
    _xmm[0].u64[0] = MEM32(eax + 0x4B9C); _xmm[0].u64[1] = 0; /* 0x004E3F9D: movss xmm0, dword ptr [eax + 0x4b9c] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x004E3FA5: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x004E3FAA: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x87C7F0) = eax; /* 0x004E3FAD: mov dword ptr [ecx + 0x87c7f0], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x004E3FB3: add ecx, 0x44 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x7198); /* 0x004E3FB6: mov eax, dword ptr [esi + 0x7198] */
    MEM32(esi + 0x719C) = eax; /* 0x004E3FBC: mov dword ptr [esi + 0x719c], eax */
L_004E3FC2:
    /* test LO8(edx), 8 */ /* 0x004E3FC2: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E3FD3; /* 0x004E3FC5: je 0x4e3fd3 */
L_004E3FC7:
    eax = MEM32(esi + 0x7198); /* 0x004E3FC7: mov eax, dword ptr [esi + 0x7198] */
    MEM32(esi + 0x719C) = eax; /* 0x004E3FCD: mov dword ptr [esi + 0x719c], eax */
L_004E3FD3:
    /* test LO8(edx), 1 */ /* 0x004E3FD3: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E4014; /* 0x004E3FD6: je 0x4e4014 */
L_004E3FD8:
    eax = MEM32(esi + 0x7170); /* 0x004E3FD8: mov eax, dword ptr [esi + 0x7170] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x004E3FDE: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test eax, eax */ /* 0x004E3FE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E3FEA; /* 0x004E3FE2: je 0x4e3fea */
L_004E3FE4:
    SET_LO8(ebx, MEM8(eax + 0x944)); /* 0x004E3FE4: mov bl, byte ptr [eax + 0x944] */
L_004E3FEA:
    MEM32(ebp + (-0x4)) = 0; /* 0x004E3FEA: mov dword ptr [ebp - 4], 0 */
    /* test eax, eax */ /* 0x004E3FF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E4002; /* 0x004E3FF3: je 0x4e4002 */
L_004E3FF5:
    _xmm[0].u64[0] = MEM32(eax + 0x948); _xmm[0].u64[1] = 0; /* 0x004E3FF5: movss xmm0, dword ptr [eax + 0x948] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x004E3FFD: movss dword ptr [ebp - 4], xmm0 */
L_004E4002:
    eax = MEM32(ebp + (-0x4)); /* 0x004E4002: mov eax, dword ptr [ebp - 4] */
    MEM8(ecx + 0x87C7B0) = (uint8_t)(LO8(ebx)); /* 0x004E4005: mov byte ptr [ecx + 0x87c7b0], bl */
    MEM32(ecx + 0x87C7B1) = eax; /* 0x004E400B: mov dword ptr [ecx + 0x87c7b1], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x004E4011: add ecx, 5 */
    _flag_k = FK_ADD;
L_004E4014:
    /* test LO8(edx), 0x20u */ /* 0x004E4014: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_004E4038; /* 0x004E4017: je 0x4e4038 */
L_004E4019:
    _xmm[0].u64[0] = MEM64(edi + 0xC8); _xmm[0].u64[1] = 0; /* 0x004E4019: movq xmm0, qword ptr [edi + 0xc8] */
    MEM64(ecx + 0x87C7B0) = _xmm[0].u64[0]; /* 0x004E4021: movq qword ptr [ecx + 0x87c7b0], xmm0 */
    eax = MEM32(edi + 0xD0); /* 0x004E4029: mov eax, dword ptr [edi + 0xd0] */
    MEM32(ecx + 0x87C7B8) = eax; /* 0x004E402F: mov dword ptr [ecx + 0x87c7b8], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x004E4035: add ecx, 0xc */
    _flag_k = FK_ADD;
L_004E4038:
    eax = MEM32(0x87026C); /* 0x004E4038: mov eax, dword ptr [0x87026c] */
    PUSH32(esp, ecx); /* 0x004E403D: push ecx */
    ecx = MEM32(0x87C7A4); /* 0x004E403E: mov ecx, dword ptr [0x87c7a4] */
    PUSH32(esp, 0x0087C7B0u); /* 0x004E4044: push 0x87c7b0 */
    PUSH32(esp, 2); /* 0x004E4049: push 2 */
    PUSH32(esp, MEM32(eax)); /* 0x004E404B: push dword ptr [eax] */
    RECOMP_CALL(sub_0069FEA0); /* 0x004E404D: call 0x69fea0 */
    RECOMP_FLAGS_IN();
L_004E4052:
    edi = POP32_VAL(esp); /* 0x004E4052: pop edi */
    esi = POP32_VAL(esp); /* 0x004E4053: pop esi */
    ebx = POP32_VAL(esp); /* 0x004E4054: pop ebx */
    esp = ebp; /* 0x004E4055: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x004E4057: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x004E4058: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040CDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040CDC0u);

L_0040CDC0:
    PUSH32(esp, ebp); /* 0x0040CDC0: push ebp */
    ebp = esp; /* 0x0040CDC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0040CDC3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040CDC6: push ebx */
    ebx = MEM32(0x870268); /* 0x0040CDC7: mov ebx, dword ptr [0x870268] */
    eax = ebp + (-0x4); /* 0x0040CDCD: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x0040CDD0: push esi */
    PUSH32(esp, edi); /* 0x0040CDD1: push edi */
    PUSH32(esp, eax); /* 0x0040CDD2: push eax */
    eax = ebp + (-0x8); /* 0x0040CDD3: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x4)) = 0x400000E1u; /* 0x0040CDD6: mov dword ptr [ebp - 4], 0x400000e1 */
    edi = ecx; /* 0x0040CDDD: mov edi, ecx */
    ecx = ebx + 0x554; /* 0x0040CDDF: lea ecx, [ebx + 0x554] */
    PUSH32(esp, eax); /* 0x0040CDE5: push eax */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CDE6: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x0040CDEB: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CDEE: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CE32; /* 0x0040CDF4: je 0x40ce32 */
L_0040CDF6:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CDF6: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CDF9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CE32; /* 0x0040CDFB: je 0x40ce32 */
L_0040CDFD:
    eax = ebp + (-0x8); /* 0x0040CDFD: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x4000004Fu; /* 0x0040CE00: mov dword ptr [ebp - 8], 0x4000004f */
    PUSH32(esp, eax); /* 0x0040CE07: push eax */
    eax = ebp + (-0x4); /* 0x0040CE08: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CE0B: push eax */
    ecx = ebx + 0x554; /* 0x0040CE0C: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CE12: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CE17: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CE1A: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CE32; /* 0x0040CE20: je 0x40ce32 */
L_0040CE22:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CE22: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CE25: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CE32; /* 0x0040CE27: je 0x40ce32 */
L_0040CE29:
    MEM8(edi + 0x82BE) = (uint8_t)(0x64u); /* 0x0040CE29: mov byte ptr [edi + 0x82be], 0x64 */
    goto L_0040CE39; /* 0x0040CE30: jmp 0x40ce39 */
L_0040CE32:
    MEM8(edi + 0x82BD) = (uint8_t)(0); /* 0x0040CE32: mov byte ptr [edi + 0x82bd], 0 */
L_0040CE39:
    eax = ebp + (-0x8); /* 0x0040CE39: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x400000E1u; /* 0x0040CE3C: mov dword ptr [ebp - 8], 0x400000e1 */
    PUSH32(esp, eax); /* 0x0040CE43: push eax */
    eax = ebp + (-0x4); /* 0x0040CE44: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CE47: push eax */
    ecx = ebx + 0x554; /* 0x0040CE48: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CE4E: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CE53: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CE56: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CE9A; /* 0x0040CE5C: je 0x40ce9a */
L_0040CE5E:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CE5E: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CE61: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CE9A; /* 0x0040CE63: je 0x40ce9a */
L_0040CE65:
    eax = ebp + (-0x8); /* 0x0040CE65: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x40000050u; /* 0x0040CE68: mov dword ptr [ebp - 8], 0x40000050 */
    PUSH32(esp, eax); /* 0x0040CE6F: push eax */
    eax = ebp + (-0x4); /* 0x0040CE70: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CE73: push eax */
    ecx = ebx + 0x554; /* 0x0040CE74: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CE7A: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CE7F: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CE82: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CE9A; /* 0x0040CE88: je 0x40ce9a */
L_0040CE8A:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CE8A: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CE8D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CE9A; /* 0x0040CE8F: je 0x40ce9a */
L_0040CE91:
    MEM8(edi + 0x82BD) = (uint8_t)(0x64u); /* 0x0040CE91: mov byte ptr [edi + 0x82bd], 0x64 */
    goto L_0040CEA1; /* 0x0040CE98: jmp 0x40cea1 */
L_0040CE9A:
    MEM8(edi + 0x82BD) = (uint8_t)(0); /* 0x0040CE9A: mov byte ptr [edi + 0x82bd], 0 */
L_0040CEA1:
    eax = ebp + (-0x8); /* 0x0040CEA1: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x400000E1u; /* 0x0040CEA4: mov dword ptr [ebp - 8], 0x400000e1 */
    PUSH32(esp, eax); /* 0x0040CEAB: push eax */
    eax = ebp + (-0x4); /* 0x0040CEAC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CEAF: push eax */
    ecx = ebx + 0x554; /* 0x0040CEB0: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CEB6: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CEBB: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CEBE: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CF02; /* 0x0040CEC4: je 0x40cf02 */
L_0040CEC6:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CEC6: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CEC9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CF02; /* 0x0040CECB: je 0x40cf02 */
L_0040CECD:
    eax = ebp + (-0x8); /* 0x0040CECD: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x40000052u; /* 0x0040CED0: mov dword ptr [ebp - 8], 0x40000052 */
    PUSH32(esp, eax); /* 0x0040CED7: push eax */
    eax = ebp + (-0x4); /* 0x0040CED8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CEDB: push eax */
    ecx = ebx + 0x554; /* 0x0040CEDC: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CEE2: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CEE7: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CEEA: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CF02; /* 0x0040CEF0: je 0x40cf02 */
L_0040CEF2:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CEF2: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CEF5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CF02; /* 0x0040CEF7: je 0x40cf02 */
L_0040CEF9:
    MEM8(edi + 0x82BC) = (uint8_t)(0x64u); /* 0x0040CEF9: mov byte ptr [edi + 0x82bc], 0x64 */
    goto L_0040CF09; /* 0x0040CF00: jmp 0x40cf09 */
L_0040CF02:
    MEM8(edi + 0x82BC) = (uint8_t)(0); /* 0x0040CF02: mov byte ptr [edi + 0x82bc], 0 */
L_0040CF09:
    eax = ebp + (-0x8); /* 0x0040CF09: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x400000E1u; /* 0x0040CF0C: mov dword ptr [ebp - 8], 0x400000e1 */
    PUSH32(esp, eax); /* 0x0040CF13: push eax */
    eax = ebp + (-0x4); /* 0x0040CF14: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CF17: push eax */
    ecx = ebx + 0x554; /* 0x0040CF18: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CF1E: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CF23: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CF26: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CF6A; /* 0x0040CF2C: je 0x40cf6a */
L_0040CF2E:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CF2E: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CF31: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CF6A; /* 0x0040CF33: je 0x40cf6a */
L_0040CF35:
    eax = ebp + (-0x8); /* 0x0040CF35: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x40000051u; /* 0x0040CF38: mov dword ptr [ebp - 8], 0x40000051 */
    PUSH32(esp, eax); /* 0x0040CF3F: push eax */
    eax = ebp + (-0x4); /* 0x0040CF40: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CF43: push eax */
    ecx = ebx + 0x554; /* 0x0040CF44: lea ecx, [ebx + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x0040CF4A: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0040CF4F: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0x554) */ /* 0x0040CF52: cmp eax, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040CF6A; /* 0x0040CF58: je 0x40cf6a */
L_0040CF5A:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x0040CF5A: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x0040CF5D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040CF6A; /* 0x0040CF5F: je 0x40cf6a */
L_0040CF61:
    MEM8(edi + 0x82BF) = (uint8_t)(0x64u); /* 0x0040CF61: mov byte ptr [edi + 0x82bf], 0x64 */
    goto L_0040CF71; /* 0x0040CF68: jmp 0x40cf71 */
L_0040CF6A:
    MEM8(edi + 0x82BF) = (uint8_t)(0); /* 0x0040CF6A: mov byte ptr [edi + 0x82bf], 0 */
L_0040CF71:
    MEM32(edi + 0x82C0) = 0; /* 0x0040CF71: mov dword ptr [edi + 0x82c0], 0 */
    MEM16(edi + 0x82C4) = (uint16_t)(0); /* 0x0040CF7B: mov word ptr [edi + 0x82c4], 0 */
    MEM8(edi + 0x82C6) = (uint8_t)(0); /* 0x0040CF84: mov byte ptr [edi + 0x82c6], 0 */
    MEM8(edi + 0x82C9) = (uint8_t)(0); /* 0x0040CF8B: mov byte ptr [edi + 0x82c9], 0 */
    edi = POP32_VAL(esp); /* 0x0040CF92: pop edi */
    esi = POP32_VAL(esp); /* 0x0040CF93: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040CF94: pop ebx */
    esp = ebp; /* 0x0040CF95: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040CF97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040CF98: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040CFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040CFA0u);

L_0040CFA0:
    PUSH32(esp, ebp); /* 0x0040CFA0: push ebp */
    ebp = esp; /* 0x0040CFA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0040CFA3: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0040CFA6: push esi */
    esi = ecx; /* 0x0040CFA7: mov esi, ecx */
    /* cmp MEM8(esi + 0x942C), 0 */ /* 0x0040CFA9: cmp byte ptr [esi + 0x942c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x942C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040D268; /* 0x0040CFB0: jne 0x40d268 */
L_0040CFB6:
    PUSH32(esp, ebx); /* 0x0040CFB6: push ebx */
    PUSH32(esp, edi); /* 0x0040CFB7: push edi */
    eax = ebp + (-0x1C); /* 0x0040CFB8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x0040CFBB: push eax */
    eax = ebp + (-0x4); /* 0x0040CFBC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x0040CFBF: push eax */
    RECOMP_CALL(sub_00416E70); /* 0x0040CFC0: call 0x416e70 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(esi + 0x8368); /* 0x0040CFC5: movsx eax, word ptr [esi + 0x8368] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0040CFCC: xorps xmm2, xmm2 */
    ebx = MEM32(esi + 0x93C0); /* 0x0040CFCF: mov ebx, dword ptr [esi + 0x93c0] */
    PUSH32(esp, ecx); /* 0x0040CFD5: push ecx */
    MEM32(ebp + (-0x18)) = _xmm[2].u32[0]; /* 0x0040CFD6: movss dword ptr [ebp - 0x18], xmm2 */
    edi = eax + eax * 2; /* 0x0040CFDB: lea edi, [eax + eax*2] */
    _xmm[0].u64[0] = MEM64(ebx + edi * 4 + 0x37F4); _xmm[0].u64[1] = 0; /* 0x0040CFDE: movq xmm0, qword ptr [ebx + edi*4 + 0x37f4] */
    eax = MEM32(ebx + edi * 4 + 0x37FC); /* 0x0040CFE7: mov eax, dword ptr [ebx + edi*4 + 0x37fc] */
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x0040CFEE: movq qword ptr [ebp - 0x30], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x30)); _xmm[0].u64[1] = 0; /* 0x0040CFF3: movss xmm0, dword ptr [ebp - 0x30] */
    { float _s = sse_f32(MEM32(ebx + edi * 4 + 0x3800)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040CFF8: subss xmm0, dword ptr [ebx + edi*4 + 0x3800] */
    MEM32(ebp + (-0x28)) = eax; /* 0x0040D001: mov dword ptr [ebp - 0x28], eax */
    _xmm[3].u64[0] = MEM32(ebp + (-0x28)); _xmm[3].u64[1] = 0; /* 0x0040D004: movss xmm3, dword ptr [ebp - 0x28] */
    { float _s = sse_f32(MEM32(ebx + edi * 4 + 0x3808)); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x0040D009: subss xmm3, dword ptr [ebx + edi*4 + 0x3808] */
    _xmm[1] = _xmm[0]; /* 0x0040D012: movaps xmm1, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[0].u32[0]; /* 0x0040D015: movss dword ptr [ebp - 8], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D01A: mulss xmm1, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x0040D01E: movaps xmm0, xmm3 */
    MEM32(ebp + (-0xC)) = _xmm[3].u32[0]; /* 0x0040D021: movss dword ptr [ebp - 0xc], xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040D026: mulss xmm0, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040D02A: addss xmm1, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040D02E: addss xmm1, xmm0 */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x0040D032: movss dword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040D037: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x0040D03C: fstp dword ptr [ebp - 0x14] */
    _xmm[1].u64[0] = MEM32(ebp + (-0x14)); _xmm[1].u64[1] = 0; /* 0x0040D03F: movss xmm1, dword ptr [ebp - 0x14] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x0040D044: xorps xmm3, xmm3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040D047: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D04A: comiss xmm1, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D083; /* 0x0040D04D: jbe 0x40d083 */
L_0040D04F:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x0040D04F: movss xmm0, dword ptr [0x808cb0] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0040D057: divss xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x8)); _xmm[1].u64[1] = 0; /* 0x0040D05B: movss xmm1, dword ptr [ebp - 8] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D060: mulss xmm1, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x0040D064: movss dword ptr [ebp - 8], xmm1 */
    _xmm[1] = _xmm[0]; /* 0x0040D069: movaps xmm1, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D06C: mulss xmm1, xmm3 */
    MEM32(ebp + (-0x18)) = _xmm[1].u32[0]; /* 0x0040D070: movss dword ptr [ebp - 0x18], xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0xC)); _xmm[1].u64[1] = 0; /* 0x0040D075: movss xmm1, dword ptr [ebp - 0xc] */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D07A: mulss xmm1, xmm0 */
    MEM32(ebp + (-0xC)) = _xmm[1].u32[0]; /* 0x0040D07E: movss dword ptr [ebp - 0xc], xmm1 */
L_0040D083:
    _xmm[0].u64[0] = MEM64(esi + 0x80); _xmm[0].u64[1] = 0; /* 0x0040D083: movq xmm0, qword ptr [esi + 0x80] */
    eax = MEM32(esi + 0x88); /* 0x0040D08B: mov eax, dword ptr [esi + 0x88] */
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x0040D091: movq qword ptr [ebp - 0x30], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x30)); _xmm[0].u64[1] = 0; /* 0x0040D096: movss xmm0, dword ptr [ebp - 0x30] */
    { float _s = sse_f32(MEM32(ebx + edi * 4 + 0x800)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0040D09B: subss xmm0, dword ptr [ebx + edi*4 + 0x800] */
    MEM32(ebp + (-0x28)) = eax; /* 0x0040D0A4: mov dword ptr [ebp - 0x28], eax */
    _xmm[2].u64[0] = MEM32(ebp + (-0x28)); _xmm[2].u64[1] = 0; /* 0x0040D0A7: movss xmm2, dword ptr [ebp - 0x28] */
    { float _s = sse_f32(MEM32(ebx + edi * 4 + 0x808)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x0040D0AC: subss xmm2, dword ptr [ebx + edi*4 + 0x808] */
    PUSH32(esp, ecx); /* 0x0040D0B5: push ecx */
    _xmm[1] = _xmm[0]; /* 0x0040D0B6: movaps xmm1, xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x0040D0B9: movss dword ptr [ebp - 0x14], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D0BE: mulss xmm1, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x0040D0C2: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x10)) = _xmm[2].u32[0]; /* 0x0040D0C5: movss dword ptr [ebp - 0x10], xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040D0CA: mulss xmm0, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040D0CE: addss xmm1, xmm3 */
    MEM32(ebp + (-0x24)) = _xmm[3].u32[0]; /* 0x0040D0D2: movss dword ptr [ebp - 0x24], xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0040D0D7: addss xmm1, xmm0 */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x0040D0DB: movss dword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0040A6C0); /* 0x0040D0E0: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0040D0E5: movss xmm1, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0040D0EA: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x0040D0ED: fstp dword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x20)); _xmm[0].u64[1] = 0; /* 0x0040D0F0: movss xmm0, dword ptr [ebp - 0x20] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x0040D0F5: xorps xmm3, xmm3 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D0F8: comiss xmm0, xmm3 */
    _flag_k = FK_EFLAGS;
    edi = POP32_VAL(esp); /* 0x0040D0FB: pop edi */
    ebx = POP32_VAL(esp); /* 0x0040D0FC: pop ebx */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D123; /* 0x0040D0FD: jbe 0x40d123 */
L_0040D0FF:
    _xmm[4].u64[0] = MEM32(0x808CB0); _xmm[4].u64[1] = 0; /* 0x0040D0FF: movss xmm4, dword ptr [0x808cb0] */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x0040D107: divss xmm4, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x0040D10B: movaps xmm0, xmm4 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D10E: mulss xmm1, xmm4 */
    { float _s = sse_f32(MEM32(ebp + (-0x14))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040D112: mulss xmm0, dword ptr [ebp - 0x14] */
    _xmm[2] = _xmm[4]; /* 0x0040D117: movaps xmm2, xmm4 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040D11A: mulss xmm2, xmm3 */
    _xmm[5] = _xmm[0]; /* 0x0040D11E: movaps xmm5, xmm0 */
    goto L_0040D12D; /* 0x0040D121: jmp 0x40d12d */
L_0040D123:
    _xmm[2].u64[0] = MEM32(ebp + (-0x24)); _xmm[2].u64[1] = 0; /* 0x0040D123: movss xmm2, dword ptr [ebp - 0x24] */
    _xmm[5].u64[0] = MEM32(ebp + (-0x14)); _xmm[5].u64[1] = 0; /* 0x0040D128: movss xmm5, dword ptr [ebp - 0x14] */
L_0040D12D:
    _xmm[0].u64[0] = MEM32(ebp + (-0x8)); _xmm[0].u64[1] = 0; /* 0x0040D12D: movss xmm0, dword ptr [ebp - 8] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x0040D132: mulss xmm2, dword ptr [ebp - 0x18] */
    { float _s = sse_f32(MEM32(ebp + (-0xC))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0040D137: mulss xmm1, dword ptr [ebp - 0xc] */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0040D13C: mulss xmm0, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040D140: addss xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040D144: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[3].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D148: comiss xmm3, xmm0 */
    _flag_k = FK_EFLAGS;
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0040D14B: movss xmm0, dword ptr [ebp - 4] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D174; /* 0x0040D150: jbe 0x40d174 */
L_0040D152:
    MEM16(esi + 0x8335) = (uint16_t)(0x101u); /* 0x0040D152: mov word ptr [esi + 0x8335], 0x101 */
    MEM8(esi + 0x93C8) = (uint8_t)(1); /* 0x0040D15B: mov byte ptr [esi + 0x93c8], 1 */
    MEM32(esi + 0x8350) = _xmm[0].u32[0]; /* 0x0040D162: movss dword ptr [esi + 0x8350], xmm0 */
    MEM32(esi + 0x93CC) = 0; /* 0x0040D16A: mov dword ptr [esi + 0x93cc], 0 */
L_0040D174:
    _xmm[1].u64[0] = MEM32(ebp + (-0x1C)); _xmm[1].u64[1] = 0; /* 0x0040D174: movss xmm1, dword ptr [ebp - 0x1c] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D179: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D19D; /* 0x0040D17C: jbe 0x40d19d */
L_0040D17E:
    _xmm[0].u64[0] = MEM32(esi + 0x93CC); _xmm[0].u64[1] = 0; /* 0x0040D17E: movss xmm0, dword ptr [esi + 0x93cc] */
    { float _s = sse_f32(MEM32(0x808B90)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0040D186: addss xmm0, dword ptr [0x808b90] */
    MEM32(esi + 0x93CC) = _xmm[0].u32[0]; /* 0x0040D18E: movss dword ptr [esi + 0x93cc], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0040D196: movss xmm0, dword ptr [ebp - 4] */
    goto L_0040D1A7; /* 0x0040D19B: jmp 0x40d1a7 */
L_0040D19D:
    MEM32(esi + 0x93CC) = 0; /* 0x0040D19D: mov dword ptr [esi + 0x93cc], 0 */
L_0040D1A7:
    /* cmp MEM8(esi + 0x8337), 0 */ /* 0x0040D1A7: cmp byte ptr [esi + 0x8337], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8337)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040D235; /* 0x0040D1AE: jne 0x40d235 */
L_0040D1B4:
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D1B4: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D235; /* 0x0040D1B7: jbe 0x40d235 */
L_0040D1B9:
    _xmm[0].u64[0] = MEM32(esi + 0x93CC); _xmm[0].u64[1] = 0; /* 0x0040D1B9: movss xmm0, dword ptr [esi + 0x93cc] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D1C1: comiss xmm0, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D1DA; /* 0x0040D1C4: jbe 0x40d1da */
L_0040D1C6:
    SET_LO8(ecx, 1); /* 0x0040D1C6: mov cl, 1 */
    RECOMP_CALL(sub_004243E0); /* 0x0040D1C8: call 0x4243e0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(esi + 0x839C); _xmm[1].u64[1] = 0; /* 0x0040D1CD: movss xmm1, dword ptr [esi + 0x839c] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D1D5: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0040D20C; /* 0x0040D1D8: ja 0x40d20c */
L_0040D1DA:
    _xmm[0].u64[0] = MEM32(esi + 0x93CC); _xmm[0].u64[1] = 0; /* 0x0040D1DA: movss xmm0, dword ptr [esi + 0x93cc] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809074))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D1E2: comiss xmm0, dword ptr [0x809074] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D235; /* 0x0040D1E9: jbe 0x40d235 */
L_0040D1EB:
    SET_LO8(ecx, 2); /* 0x0040D1EB: mov cl, 2 */
    RECOMP_CALL(sub_004243E0); /* 0x0040D1ED: call 0x4243e0 */
    RECOMP_FLAGS_IN();
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(esi + 0x839C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D1F2: comiss xmm0, dword ptr [esi + 0x839c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D235; /* 0x0040D1F9: jbe 0x40d235 */
L_0040D1FB:
    _xmm[0].u64[0] = MEM32(esi + 0x83A4); _xmm[0].u64[1] = 0; /* 0x0040D1FB: movss xmm0, dword ptr [esi + 0x83a4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809378))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D203: comiss xmm0, dword ptr [0x809378] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D235; /* 0x0040D20A: jbe 0x40d235 */
L_0040D20C:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0040D20C: movss xmm0, dword ptr [ebp - 4] */
    MEM16(esi + 0x8335) = (uint16_t)(0x101u); /* 0x0040D211: mov word ptr [esi + 0x8335], 0x101 */
    MEM8(esi + 0x93C8) = (uint8_t)(1); /* 0x0040D21A: mov byte ptr [esi + 0x93c8], 1 */
    MEM32(esi + 0x8350) = _xmm[0].u32[0]; /* 0x0040D221: movss dword ptr [esi + 0x8350], xmm0 */
    MEM32(esi + 0x93CC) = 0; /* 0x0040D229: mov dword ptr [esi + 0x93cc], 0 */
    goto L_0040D23A; /* 0x0040D233: jmp 0x40d23a */
L_0040D235:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0040D235: movss xmm0, dword ptr [ebp - 4] */
L_0040D23A:
    _xmm[1].u64[0] = MEM32(ebp + (-0x1C)); _xmm[1].u64[1] = 0; /* 0x0040D23A: movss xmm1, dword ptr [ebp - 0x1c] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D23F: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D268; /* 0x0040D242: jbe 0x40d268 */
L_0040D244:
    /* cmp MEM8(esi + 0x93C8), 0 */ /* 0x0040D244: cmp byte ptr [esi + 0x93c8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x93C8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040D268; /* 0x0040D24B: je 0x40d268 */
L_0040D24D:
    MEM8(esi + 0x93C8) = (uint8_t)(0); /* 0x0040D24D: mov byte ptr [esi + 0x93c8], 0 */
    MEM32(esi + 0x8350) = 0; /* 0x0040D254: mov dword ptr [esi + 0x8350], 0 */
    MEM32(esi + 0x93CC) = 0; /* 0x0040D25E: mov dword ptr [esi + 0x93cc], 0 */
L_0040D268:
    esi = POP32_VAL(esp); /* 0x0040D268: pop esi */
    esp = ebp; /* 0x0040D269: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040D26B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040D26C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0040D270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040D270u);

L_0040D270:
    PUSH32(esp, ebp); /* 0x0040D270: push ebp */
    ebp = esp; /* 0x0040D271: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF8u; /* 0x0040D273: sub esp, 0xf8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0040D279: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0040D27A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0040D27D: push esi */
    PUSH32(esp, edi); /* 0x0040D27E: push edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0040D27F: mov dword ptr [ebp - 0x10], ecx */
    eax = (uint32_t)MEM16(ebx); /* 0x0040D282: movzx eax, word ptr [ebx] */
    esi = eax; /* 0x0040D285: mov esi, eax */
    /* cmp LO16(esi), 0xFFFFFFFFu */ /* 0x0040D287: cmp si, -1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(0xFFFFFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040D299; /* 0x0040D28B: jne 0x40d299 */
L_0040D28D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0040D28D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0040D290: pop edi */
    esi = POP32_VAL(esp); /* 0x0040D291: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040D292: pop ebx */
    esp = ebp; /* 0x0040D293: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040D295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040D296: ret 0xc */
L_0040D299:
    ecx = MEM32(ecx + 0x9860); /* 0x0040D299: mov ecx, dword ptr [ecx + 0x9860] */
    PUSH32(esp, eax); /* 0x0040D29F: push eax */
    RECOMP_CALL(sub_0040BEB0); /* 0x0040D2A0: call 0x40beb0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(eax + 0xC); _xmm[1].u64[1] = 0; /* 0x0040D2A5: movss xmm1, dword ptr [eax + 0xc] */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0040D2AA: cvtps2pd xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x809828))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D2AD: comisd xmm0, xmmword ptr [0x809828] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D459; /* 0x0040D2B5: jbe 0x40d459 */
L_0040D2BB:
    _xmm[0].u64[0] = MEM64(0x808CC8); _xmm[0].u64[1] = 0; /* 0x0040D2BB: movsd xmm0, qword ptr [0x808cc8] */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0040D2C3: cvtps2pd xmm1, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[1].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0040D2C6: comisd xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0040D459; /* 0x0040D2CA: jbe 0x40d459 */
L_0040D2D0:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x0040D2D0: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x0040D2D3: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = esi; /* 0x0040D2D5: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0040D2D8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0xB) = (uint8_t)(LO8(ecx)); /* 0x0040D2DA: mov byte ptr [ebp + 0xb], cl */
    ecx = ecx; /* 0x0040D2DD: lea ecx, [ecx] */
L_0040D2E0:
    /* cmp edi, 7 */ /* 0x0040D2E0: cmp edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0040D459; /* 0x0040D2E3: jge 0x40d459 */
L_0040D2E9:
    /* cmp MEM16(ebx + edi * 2), 0 */ /* 0x0040D2E9: cmp word ptr [ebx + edi*2], 0 */
    _flag_a = (uint32_t)(MEM16(ebx + edi * 2)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_0040D450; /* 0x0040D2EE: jl 0x40d450 */
L_0040D2F4:
    ecx = ebp + (-0xF4); /* 0x0040D2F4: lea ecx, [ebp - 0xf4] */
    RECOMP_CALL(sub_0040D470); /* 0x0040D2FA: call 0x40d470 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0040D2FF: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x0040D302: mov ecx, dword ptr [ebp - 0x10] */
    MEM8(ebp + (-0xF4)) = (uint8_t)(1); /* 0x0040D305: mov byte ptr [ebp - 0xf4], 1 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x0040D30C: movss xmm0, dword ptr [eax + 8] */
    _xmm[2].u64[0] = MEM32(eax + 0x4); _xmm[2].u64[1] = 0; /* 0x0040D311: movss xmm2, dword ptr [eax + 4] */
    _xmm[1].u64[0] = MEM32(eax); _xmm[1].u64[1] = 0; /* 0x0040D316: movss xmm1, dword ptr [eax] */
    ecx = MEM32(ecx + 0x9860); /* 0x0040D31A: mov ecx, dword ptr [ecx + 0x9860] */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x0040D320: movss dword ptr [ebp - 0x14], xmm0 */
    eax = MEM32(ebp + (-0x14)); /* 0x0040D325: mov eax, dword ptr [ebp - 0x14] */
    { float _a = _xmm[2].f32[0], _b = _xmm[2].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0040D328: cvtps2pd xmm0, xmm2 */
    MEM32(ebp + (-0xE8)) = eax; /* 0x0040D32B: mov dword ptr [ebp - 0xe8], eax */
    eax = (uint32_t)MEM16(ebx + edi * 2); /* 0x0040D331: movzx eax, word ptr [ebx + edi*2] */
    PUSH32(esp, eax); /* 0x0040D335: push eax */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x0040D336: unpcklps xmm1, xmm2 */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0040D339: addsd xmm0, qword ptr [0x809010] */
    MEM64(ebp + (-0xF0)) = _xmm[1].u64[0]; /* 0x0040D341: movq qword ptr [ebp - 0xf0], xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0040D349: cvtpd2ps xmm0, xmm0 */
    MEM32(ebp + (-0xEC)) = _xmm[0].u32[0]; /* 0x0040D34D: movss dword ptr [ebp - 0xec], xmm0 */
    RECOMP_CALL(sub_0040BEB0); /* 0x0040D355: call 0x40beb0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87C7A8); /* 0x0040D35A: mov ecx, dword ptr [0x87c7a8] */
    esi = eax; /* 0x0040D360: mov esi, eax */
    _xmm[0].u64[0] = MEM32(esi + 0x10); _xmm[0].u64[1] = 0; /* 0x0040D362: movss xmm0, dword ptr [esi + 0x10] */
    _xmm[1].u64[0] = MEM32(esi + 0x8); _xmm[1].u64[1] = 0; /* 0x0040D367: movss xmm1, dword ptr [esi + 8] */
    _xmm[2].u64[0] = MEM32(esi + 0xC); _xmm[2].u64[1] = 0; /* 0x0040D36C: movss xmm2, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x0040D371: movss dword ptr [ebp - 0x20], xmm0 */
    eax = MEM32(ebp + (-0x20)); /* 0x0040D376: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0xDC)) = eax; /* 0x0040D379: mov dword ptr [ebp - 0xdc], eax */
    eax = ebp + (-0xE4); /* 0x0040D37F: lea eax, [ebp - 0xe4] */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x0040D385: unpcklps xmm1, xmm2 */
    PUSH32(esp, eax); /* 0x0040D388: push eax */
    MEM64(ebp + (-0xE4)) = _xmm[1].u64[0]; /* 0x0040D389: movq qword ptr [ebp - 0xe4], xmm1 */
    RECOMP_CALL(sub_006B5280); /* 0x0040D391: call 0x6b5280 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x0040D396: mov eax, dword ptr [ebp - 0x10] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x0040D399: xorps xmm1, xmm1 */
    _xmm[1].f64[0] = (double)_xmm[0].f32[0]; /* 0x0040D39C: cvtss2sd xmm1, xmm0 */
    eax = MEM32(eax + 0x4858); /* 0x0040D3A0: mov eax, dword ptr [eax + 0x4858] */
    _xmm[0].u64[0] = MEM32(esi + 0xC); _xmm[0].u64[1] = 0; /* 0x0040D3A6: movss xmm0, dword ptr [esi + 0xc] */
    { double _s = sse_f64(MEM64(0x809010)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x0040D3AB: addsd xmm1, qword ptr [0x809010] */
    eax = MEM32(eax + 0x8); /* 0x0040D3B3: mov eax, dword ptr [eax + 8] */
    esi = MEM32(0x87C620); /* 0x0040D3B6: mov esi, dword ptr [0x87c620] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0040D3BC: cvtps2pd xmm0, xmm0 */
    MEM32(ebp + (-0xC)) = eax; /* 0x0040D3BF: mov dword ptr [ebp - 0xc], eax */
    eax = esi + 0x102C; /* 0x0040D3C2: lea eax, [esi + 0x102c] */
    PUSH32(esp, eax); /* 0x0040D3C8: push eax */
    PUSH32(esp, 0); /* 0x0040D3C9: push 0 */
    PUSH32(esp, 0x00FFFFFFu); /* 0x0040D3CB: push 0xffffff */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x0040D3D0: addsd xmm1, xmm0 */
    PUSH32(esp, 1); /* 0x0040D3D4: push 1 */
    eax = ebp + (-0xE4); /* 0x0040D3D6: lea eax, [ebp - 0xe4] */
    PUSH32(esp, eax); /* 0x0040D3DC: push eax */
    eax = ebp + (-0xF0); /* 0x0040D3DD: lea eax, [ebp - 0xf0] */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0040D3E3: cvtpd2ps xmm0, xmm1 */
    PUSH32(esp, eax); /* 0x0040D3E7: push eax */
    MEM32(ebp + (-0xE0)) = _xmm[0].u32[0]; /* 0x0040D3E8: movss dword ptr [ebp - 0xe0], xmm0 */
    RECOMP_CALL(sub_00682000); /* 0x0040D3F0: call 0x682000 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x0040D3F5: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x0040D3F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040D415; /* 0x0040D3FA: je 0x40d415 */
L_0040D3FC:
    ecx = esi + 0x102C; /* 0x0040D3FC: lea ecx, [esi + 0x102c] */
    PUSH32(esp, ecx); /* 0x0040D402: push ecx */
    PUSH32(esp, eax); /* 0x0040D403: push eax */
    RECOMP_CALL(sub_006824D0); /* 0x0040D404: call 0x6824d0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x10CC), 0 */ /* 0x0040D409: cmp byte ptr [esi + 0x10cc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10CC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040D44A; /* 0x0040D410: jne 0x40d44a */
L_0040D412:
    eax = MEM32(ebp + (-0xC)); /* 0x0040D412: mov eax, dword ptr [ebp - 0xc] */
L_0040D415:
    MEM32(esi + 0x10C8) = eax; /* 0x0040D415: mov dword ptr [esi + 0x10c8], eax */
    ecx = esi; /* 0x0040D41B: mov ecx, esi */
    eax = esi + 0x102C; /* 0x0040D41D: lea eax, [esi + 0x102c] */
    PUSH32(esp, eax); /* 0x0040D423: push eax */
    PUSH32(esp, 0); /* 0x0040D424: push 0 */
    RECOMP_CALL(sub_00682D70); /* 0x0040D426: call 0x682d70 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x10CC), 0 */ /* 0x0040D42B: cmp byte ptr [esi + 0x10cc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10CC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0040D44A; /* 0x0040D432: jne 0x40d44a */
L_0040D434:
    eax = (uint32_t)MEM16(ebx + edi * 2); /* 0x0040D434: movzx eax, word ptr [ebx + edi*2] */
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x0040D438: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0040D44A; /* 0x0040D43C: je 0x40d44a */
L_0040D43E:
    SET_LO8(ecx, 1); /* 0x0040D43E: mov cl, 1 */
    esi = eax; /* 0x0040D440: mov esi, eax */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(ecx)); /* 0x0040D442: mov byte ptr [ebp + 0xb], cl */
    MEM32(ebp + (-0x8)) = esi; /* 0x0040D445: mov dword ptr [ebp - 8], esi */
    goto L_0040D450; /* 0x0040D448: jmp 0x40d450 */
L_0040D44A:
    SET_LO8(ecx, MEM8(ebp + 0xB)); /* 0x0040D44A: mov cl, byte ptr [ebp + 0xb] */
    esi = MEM32(ebp + (-0x8)); /* 0x0040D44D: mov esi, dword ptr [ebp - 8] */
L_0040D450:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0040D450: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0040D451: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0040D2E0; /* 0x0040D453: je 0x40d2e0 */
L_0040D459:
    edi = POP32_VAL(esp); /* 0x0040D459: pop edi */
    SET_LO16(eax, LO16(esi)); /* 0x0040D45A: mov ax, si */
    esi = POP32_VAL(esp); /* 0x0040D45D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0040D45E: pop ebx */
    esp = ebp; /* 0x0040D45F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0040D461: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0040D462: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0040D470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0040D470u);

L_0040D470:
    MEM32(ecx + 0x4) = 0; /* 0x0040D470: mov dword ptr [ecx + 4], 0 */
    eax = ecx; /* 0x0040D477: mov eax, ecx */
    MEM32(ecx + 0x8) = 0; /* 0x0040D479: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x0040D480: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 0; /* 0x0040D487: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = 0; /* 0x0040D48E: mov dword ptr [ecx + 0x14], 0 */
    MEM32(ecx + 0x18) = 0; /* 0x0040D495: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0x1C) = 0; /* 0x0040D49C: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x20) = 0; /* 0x0040D4A3: mov dword ptr [ecx + 0x20], 0 */
    MEM32(ecx + 0x24) = 0; /* 0x0040D4AA: mov dword ptr [ecx + 0x24], 0 */
    MEM32(ecx + 0x28) = 0; /* 0x0040D4B1: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = 0; /* 0x0040D4B8: mov dword ptr [ecx + 0x2c], 0 */
    MEM32(ecx + 0x30) = 0; /* 0x0040D4BF: mov dword ptr [ecx + 0x30], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x0040D4C6: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x3C) = 0; /* 0x0040D4CD: mov dword ptr [ecx + 0x3c], 0 */
    MEM32(ecx + 0x38) = 0; /* 0x0040D4D4: mov dword ptr [ecx + 0x38], 0 */
    MEM32(ecx + 0x34) = 0; /* 0x0040D4DB: mov dword ptr [ecx + 0x34], 0 */
    MEM32(ecx + 0x50) = 0; /* 0x0040D4E2: mov dword ptr [ecx + 0x50], 0 */
    MEM32(ecx + 0x4C) = 0; /* 0x0040D4E9: mov dword ptr [ecx + 0x4c], 0 */
    MEM32(ecx + 0x48) = 0; /* 0x0040D4F0: mov dword ptr [ecx + 0x48], 0 */
    MEM32(ecx + 0x44) = 0; /* 0x0040D4F7: mov dword ptr [ecx + 0x44], 0 */
    MEM32(ecx + 0xA4) = 0; /* 0x0040D4FE: mov dword ptr [ecx + 0xa4], 0 */
    MEM32(ecx + 0xA8) = 0; /* 0x0040D508: mov dword ptr [ecx + 0xa8], 0 */
    MEM32(ecx + 0xAC) = 0; /* 0x0040D512: mov dword ptr [ecx + 0xac], 0 */
    MEM32(ecx + 0xB0) = 0; /* 0x0040D51C: mov dword ptr [ecx + 0xb0], 0 */
    MEM32(ecx + 0xB4) = 0; /* 0x0040D526: mov dword ptr [ecx + 0xb4], 0 */
    MEM32(ecx + 0xB8) = 0; /* 0x0040D530: mov dword ptr [ecx + 0xb8], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0040D53A: ret  */
    RECOMP_REGS_OUT();
}
