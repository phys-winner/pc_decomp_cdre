#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120C3DC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C3DC5u);

L_120C3DC5:
    edi = edi; /* 0x120C3DC5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C3DC7: push ebp */
    ebp = esp; /* 0x120C3DC8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C3DCA: push ecx */
    eax = MEM32(0x121D9590); /* 0x120C3DCB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C3DD0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C3DD2: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120C3DD5: push ebx */
    PUSH32(esp, esi); /* 0x120C3DD6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120C3DD7: mov esi, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x120C3DDA: mov ecx, esi */
    PUSH32(esp, edi); /* 0x120C3DDC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C3DDD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x1; /* 0x120C3DDF: lea edx, [ecx + 1] */
L_120C3DE2:
    SET_LO8(eax, MEM8(ecx)); /* 0x120C3DE2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C3DE4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120C3DE5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C3DE2; /* 0x120C3DE7: jne 0x120c3de2 */
L_120C3DE9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120C3DE9: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + ecx + 0x2; /* 0x120C3DEB: lea eax, [ecx + ecx + 2] */
    RECOMP_CALL(sub_121BF530); /* 0x120C3DEF: call 0x121bf530 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x120C3DF4: mov ebx, esp */
    goto L_120C3E27; /* 0x120C3DF6: jmp 0x120c3e27 */
L_120C3DF8:
    PUSH32(esp, eax); /* 0x120C3DF8: push eax */
    RECOMP_ICALL(MEM32(0x120010D8)); /* 0x120C3DF9: call dword ptr [0x120010d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C3DFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C3E1D; /* 0x120C3E01: je 0x120c3e1d */
L_120C3E03:
    SET_LO16(ecx, (int32_t)(int8_t)MEM8(esi)); /* 0x120C3E03: movsx cx, byte ptr [esi] */
    SET_LO16(eax, (int32_t)(int8_t)MEM8(esi + 0x1)); /* 0x120C3E07: movsx ax, byte ptr [esi + 1] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x120C3E0C: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x120C3E0C: shl cx, 8 */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x120C3E10: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebx + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x120C3E13: mov word ptr [ebx + edi*2], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C3E17: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x120C3E18: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_120C3E27; /* 0x120C3E1B: jmp 0x120c3e27 */
L_120C3E1D:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(esi)); /* 0x120C3E1D: movsx ax, byte ptr [esi] */
    MEM16(ebx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x120C3E21: mov word ptr [ebx + edi*2], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C3E25: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C3E26: inc esi */
    _flag_k = FK_INC;
L_120C3E27:
    SET_LO8(eax, MEM8(esi)); /* 0x120C3E27: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x120C3E29: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C3DF8; /* 0x120C3E2B: jne 0x120c3df8 */
L_120C3E2D:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x120C3E2D: fld dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM16(ebx + edi * 2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebx + edi * 2) = (uint16_t)(MEM16(ebx + edi * 2) & 0); /* 0x120C3E30: and word ptr [ebx + edi*2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, 0); /* 0x120C3E35: push 0 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C3E37: push dword ptr [ebp + 0x24] */
    edx = ebx; /* 0x120C3E3A: mov edx, ebx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C3E3C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x120C3E3F: push ecx */
    PUSH32(esp, ecx); /* 0x120C3E40: push ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x120C3E41: mov ecx, dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120C3E44: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120C3E48: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C3E4B: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C3E4E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C3E51: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C3941); /* 0x120C3E54: call 0x120c3941 */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x10); /* 0x120C3E59: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x120C3E5C: pop edi */
    esi = POP32_VAL(esp); /* 0x120C3E5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x120C3E5E: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x120C3E5F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C3E62: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120C3E64: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C3E69: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C3E6A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C3E72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C3E72u);

L_120C3E72:
    edi = edi; /* 0x120C3E72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C3E74: push ebp */
    ebp = esp; /* 0x120C3E75: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x120C3E77: sub esp, 0xac */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C3E7D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C3E82: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C3E84: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120C3E87: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x120C3E8A: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebp + 0x20); /* 0x120C3E90: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x120C3E93: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120C3E94: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xA0)) = eax; /* 0x120C3E97: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebp + 0x24); /* 0x120C3E9D: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x120C3EA0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120C3EA1: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120C3EA4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C3EA5: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x120C3EA8: mov dword ptr [ebp - 0xa4], eax */
    eax = ebp + (-0x98); /* 0x120C3EAE: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x120C3EB4: push eax */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x120C3EB5: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x12001124)); /* 0x120C3EBF: call dword ptr [0x12001124] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x120C3EC5: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C3F53; /* 0x120C3ECC: je 0x120c3f53 */
L_120C3ED2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C3ED2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C3ED4: push eax */
    PUSH32(esp, eax); /* 0x120C3ED5: push eax */
    PUSH32(esp, eax); /* 0x120C3ED6: push eax */
    PUSH32(esp, eax); /* 0x120C3ED7: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120C3ED8: push -1 */
    PUSH32(esp, esi); /* 0x120C3EDA: push esi */
    PUSH32(esp, eax); /* 0x120C3EDB: push eax */
    PUSH32(esp, eax); /* 0x120C3EDC: push eax */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x120C3EDD: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA8)) = eax; /* 0x120C3EE3: mov dword ptr [ebp - 0xa8], eax */
    RECOMP_CALL(sub_121BF530); /* 0x120C3EE9: call 0x121bf530 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA8)); /* 0x120C3EEE: mov eax, dword ptr [ebp - 0xa8] */
    ecx = esp; /* 0x120C3EF4: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = ecx; /* 0x120C3EF6: mov dword ptr [ebp - 0xac], ecx */
    /* test eax, eax */ /* 0x120C3EFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C3F12; /* 0x120C3EFE: jne 0x120c3f12 */
L_120C3F00:
    PUSH32(esp, 0x1200693Cu); /* 0x120C3F00: push 0x1200693c */
    RECOMP_ICALL(MEM32(0x12001114)); /* 0x120C3F05: call dword ptr [0x12001114] */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C3F0B: mov eax, 0x8876086c */
    goto L_120C3F7F; /* 0x120C3F10: jmp 0x120c3f7f */
L_120C3F12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C3F12: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120C3F14: push edx */
    PUSH32(esp, edx); /* 0x120C3F15: push edx */
    PUSH32(esp, eax); /* 0x120C3F16: push eax */
    PUSH32(esp, ecx); /* 0x120C3F17: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120C3F18: push -1 */
    PUSH32(esp, esi); /* 0x120C3F1A: push esi */
    PUSH32(esp, edx); /* 0x120C3F1B: push edx */
    PUSH32(esp, edx); /* 0x120C3F1C: push edx */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x120C3F1D: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x120C3F23: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x120C3F26: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x120C3F2C: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x120C3F32: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, ecx); /* 0x120C3F38: push ecx */
    PUSH32(esp, ecx); /* 0x120C3F39: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120C3F3A: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120C3F3E: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C3F41: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x120C3F44: push dword ptr [ebp - 0xac] */
    PUSH32(esp, ebx); /* 0x120C3F4A: push ebx */
    PUSH32(esp, edi); /* 0x120C3F4B: push edi */
    RECOMP_CALL(sub_120C3DC5); /* 0x120C3F4C: call 0x120c3dc5 */
    RECOMP_FLAGS_IN();
    goto L_120C3F7F; /* 0x120C3F51: jmp 0x120c3f7f */
L_120C3F53:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x120C3F53: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, 1); /* 0x120C3F56: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x120C3F58: push dword ptr [ebp - 0xa4] */
    edx = esi; /* 0x120C3F5E: mov edx, esi */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x120C3F60: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, ecx); /* 0x120C3F66: push ecx */
    PUSH32(esp, ecx); /* 0x120C3F67: push ecx */
    ecx = MEM32(ebp + (-0x9C)); /* 0x120C3F68: mov ecx, dword ptr [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120C3F6E: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120C3F72: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C3F75: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x120C3F78: push ebx */
    PUSH32(esp, edi); /* 0x120C3F79: push edi */
    RECOMP_CALL(sub_120C3941); /* 0x120C3F7A: call 0x120c3941 */
    RECOMP_FLAGS_IN();
L_120C3F7F:
    esp = ebp + (-0xB8); /* 0x120C3F7F: lea esp, [ebp - 0xb8] */
    edi = POP32_VAL(esp); /* 0x120C3F85: pop edi */
    esi = POP32_VAL(esp); /* 0x120C3F86: pop esi */
    ebx = POP32_VAL(esp); /* 0x120C3F87: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x120C3F88: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C3F8B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120C3F8D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C3F92: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C3F93: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C3F9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C3F9Bu);

L_120C3F9B:
    edi = edi; /* 0x120C3F9B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C3F9D: push ebp */
    ebp = esp; /* 0x120C3F9E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C3FA0: push esi */
    PUSH32(esp, 1); /* 0x120C3FA1: push 1 */
    PUSH32(esp, 0x20u); /* 0x120C3FA3: push 0x20 */
    RECOMP_CALL(sub_121BF5C2); /* 0x120C3FA5: call 0x121bf5c2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C3FAA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x120C3FAC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C3FAD: pop ecx */
    /* test esi, esi */ /* 0x120C3FAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C3FB6; /* 0x120C3FB0: jne 0x120c3fb6 */
L_120C3FB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C3FB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C4004; /* 0x120C3FB4: jmp 0x120c4004 */
L_120C3FB6:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120C3FB6: fld dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x120C3FB9: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120C3FBC: push edi */
    _st[0] = -_st[0]; /* 0x120C3FBD: fchs  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C3FBF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C3FC1: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120C3FC3: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C3FD3; /* 0x120C3FC5: je 0x120c3fd3 */
L_120C3FC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C3FC7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C3FD6; /* 0x120C3FC8: jne 0x120c3fd6 */
L_120C3FCA:
    MEM32(esi + 0x4) = 1; /* 0x120C3FCA: mov dword ptr [esi + 4], 1 */
    goto L_120C3FD6; /* 0x120C3FD1: jmp 0x120c3fd6 */
L_120C3FD3:
    MEM32(esi + 0x4) = edi; /* 0x120C3FD3: mov dword ptr [esi + 4], edi */
L_120C3FD6:
    PUSH32(esp, 0x120014BCu); /* 0x120C3FD6: push 0x120014bc */
    PUSH32(esp, 0x28u); /* 0x120C3FDB: push 0x28 */
    RECOMP_CALL(sub_12018970); /* 0x120C3FDD: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C3FE2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C3FE3: pop ecx */
    /* test eax, eax */ /* 0x120C3FE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C3FF1; /* 0x120C3FE6: je 0x120c3ff1 */
L_120C3FE8:
    ecx = eax; /* 0x120C3FE8: mov ecx, eax */
    RECOMP_CALL(sub_120C2DE8); /* 0x120C3FEA: call 0x120c2de8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120C3FEF: mov edi, eax */
L_120C3FF1:
    MEM32(esi + 0x1C) = edi; /* 0x120C3FF1: mov dword ptr [esi + 0x1c], edi */
    /* test edi, edi */ /* 0x120C3FF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x120C3FF6: pop edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4002; /* 0x120C3FF7: jne 0x120c4002 */
L_120C3FF9:
    PUSH32(esp, esi); /* 0x120C3FF9: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x120C3FFA: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C3FFF: pop ecx */
    RECOMP_BACKEDGE();
    goto L_120C3FB2; /* 0x120C4000: jmp 0x120c3fb2 */
L_120C4002:
    eax = esi; /* 0x120C4002: mov eax, esi */
L_120C4004:
    esi = POP32_VAL(esp); /* 0x120C4004: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C4005: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C4006: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C400E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C400Eu);

L_120C400E:
    edi = edi; /* 0x120C400E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4010: push ebp */
    ebp = esp; /* 0x120C4011: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C4013: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C4014: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x120C4017: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4030; /* 0x120C401B: je 0x120c4030 */
L_120C401D:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x120C401D: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4030; /* 0x120C4021: je 0x120c4030 */
L_120C4023:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120C4023: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x120C4026: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x120C402B: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x120C402F: pop ecx */
L_120C4030:
    esi = POP32_VAL(esp); /* 0x120C4030: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C4031: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4032: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C403A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C403Au);

L_120C403A:
    /* test esi, esi */ /* 0x120C403A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C405C; /* 0x120C403C: je 0x120c405c */
L_120C403E:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x120C403E: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C404D; /* 0x120C4042: je 0x120c404d */
L_120C4044:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x120C4044: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF586); /* 0x120C4047: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C404C: pop ecx */
L_120C404D:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x120C404D: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C405C; /* 0x120C4051: je 0x120c405c */
L_120C4053:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x120C4053: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_121BF586); /* 0x120C4056: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C405B: pop ecx */
L_120C405C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C405C: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C4062(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4062u);

L_120C4062:
    edi = edi; /* 0x120C4062: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4064: push ebp */
    ebp = esp; /* 0x120C4065: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C4067: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ecx); /* 0x120C406A: mov edx, dword ptr [ecx] */
    fp_push(0.0); /* 0x120C406C: fldz  */
    ecx = MEM32(ecx + 0x4); /* 0x120C406E: mov ecx, dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C4071: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x120C4074: push ebx */
    ebx = edx; /* 0x120C4075: mov ebx, edx */
    /* cmp ecx, 1 */ /* 0x120C4077: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4080; /* 0x120C407A: jne 0x120c4080 */
L_120C407C:
    eax = edx; /* 0x120C407C: mov eax, edx */
    goto L_120C40F7; /* 0x120C407E: jmp 0x120c40f7 */
L_120C4080:
    /* test ecx, ecx */ /* 0x120C4080: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C40F5; /* 0x120C4082: je 0x120c40f5 */
L_120C4084:
    PUSH32(esp, esi); /* 0x120C4084: push esi */
    PUSH32(esp, edi); /* 0x120C4085: push edi */
L_120C4086:
    edi = MEM32(edx + 0xC); /* 0x120C4086: mov edi, dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x120C4089: fld dword ptr [edi] */
    esi = MEM32(edx + 0x10); /* 0x120C408B: mov esi, dword ptr [edx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C408E: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C4091: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C4094: fst dword ptr [ebp - 8] */
    /* test esi, esi */ /* 0x120C4097: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C40CF; /* 0x120C4099: je 0x120c40cf */
L_120C409B:
    fp_push(*(float*)&MEM32(edi)); /* 0x120C409B: fld dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C409D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C40A0: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120C40A3: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C40A6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C40A8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120C40AA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C40B4; /* 0x120C40AD: jne 0x120c40b4 */
L_120C40AF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C40AF: fstp dword ptr [ebp - 8] */
    goto L_120C40C9; /* 0x120C40B2: jmp 0x120c40c9 */
L_120C40B4:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C40B4: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C40B6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120C40B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C40C7; /* 0x120C40BB: jne 0x120c40c7 */
L_120C40BD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C40BD: fstp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C40BF: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C40C2: fld dword ptr [ebp - 4] */
    goto L_120C40C9; /* 0x120C40C5: jmp 0x120c40c9 */
L_120C40C7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C40C7: fstp st(0) */
L_120C40C9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120C40C9: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C40CC: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C409B; /* 0x120C40CD: jne 0x120c409b */
L_120C40CF:
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120C40CF: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C40D2: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120C40D5: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120C40D8: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C40DB: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C40DD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C40DF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C40EB; /* 0x120C40E2: jp 0x120c40eb */
L_120C40E4:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C40E4: fstp dword ptr [ebp - 0xc] */
    ebx = edx; /* 0x120C40E7: mov ebx, edx */
    goto L_120C40ED; /* 0x120C40E9: jmp 0x120c40ed */
L_120C40EB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C40EB: fstp st(0) */
L_120C40ED:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x120C40ED: add edx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C40F0: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4086; /* 0x120C40F1: jne 0x120c4086 */
L_120C40F3:
    edi = POP32_VAL(esp); /* 0x120C40F3: pop edi */
    esi = POP32_VAL(esp); /* 0x120C40F4: pop esi */
L_120C40F5:
    eax = ebx; /* 0x120C40F5: mov eax, ebx */
L_120C40F7:
    ebx = POP32_VAL(esp); /* 0x120C40F7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C40F8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C40F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C40FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C40FFu);

L_120C40FF:
    edi = edi; /* 0x120C40FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4101: push ebp */
    ebp = esp; /* 0x120C4102: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C4104: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120C4105: fld dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120C4108: fld dword ptr [esi] */
    _st[0] *= _st[0]; /* 0x120C410A: fmul st(0), st(0) */
    fp_xch(1); /* 0x120C410C: fxch st(1) */
    _st[0] *= _st[0]; /* 0x120C410E: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120C4110: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C4112: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C4115: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001EB0)); /* 0x120C4118: fcom qword ptr [0x12001eb0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C411E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120C4120: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4136; /* 0x120C4123: jne 0x120c4136 */
L_120C4125:
    RECOMP_CALL(sub_121BF44C); /* 0x120C4125: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C412A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C412D: fld dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x120C4130: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120C4132: fdivrp st(1) */
    goto L_120C413A; /* 0x120C4134: jmp 0x120c413a */
L_120C4136:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C4136: fstp st(0) */
    fp_push(1.0); /* 0x120C4138: fld1  */
L_120C413A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C413A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120C413D: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C413F: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x120C4142: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C4144: fmulp st(2) */
    fp_xch(1); /* 0x120C4146: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C4148: fstp dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x120C414A: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120C414D: fstp dword ptr [esi + 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4150: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C4151: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C4157(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4157u);

L_120C4157:
    edi = edi; /* 0x120C4157: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4159: push ebp */
    ebp = esp; /* 0x120C415A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C415C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C415D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C4160: push edi */
    edi = MEM32(esi + 0x1C); /* 0x120C4161: mov edi, dword ptr [esi + 0x1c] */
    /* test edi, edi */ /* 0x120C4164: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4176; /* 0x120C4166: je 0x120c4176 */
L_120C4168:
    ecx = edi; /* 0x120C4168: mov ecx, edi */
    RECOMP_CALL(sub_120C274A); /* 0x120C416A: call 0x120c274a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x120C416F: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120C4170: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C4175: pop ecx */
L_120C4176:
    PUSH32(esp, esi); /* 0x120C4176: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x120C4177: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C417C: pop ecx */
    edi = POP32_VAL(esp); /* 0x120C417D: pop edi */
    esi = POP32_VAL(esp); /* 0x120C417E: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C417F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4180: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4188u);

L_120C4188:
    edi = edi; /* 0x120C4188: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C418A: push ebp */
    ebp = esp; /* 0x120C418B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x120C418D: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C4193: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C4198: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C419A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120C419D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120C41A0: push ebx */
    MEM32(ebp + (-0x70)) = eax; /* 0x120C41A1: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C41A4: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(eax + 0x4); /* 0x120C41A7: mov ebx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C41AA: dec ebx */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + 0xC); /* 0x120C41AB: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x120C41AE: push esi */
    esi = MEM32(eax + 0x10); /* 0x120C41AF: mov esi, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x120C41B2: mov dword ptr [ebp - 0x6c], ecx */
    MEM32(ebp + (-0x68)) = esi; /* 0x120C41B5: mov dword ptr [ebp - 0x68], esi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C4298; /* 0x120C41B8: je 0x120c4298 */
L_120C41BE:
    fp_push(0.0); /* 0x120C41BE: fldz  */
    PUSH32(esp, edi); /* 0x120C41C0: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x120C41C1: fst dword ptr [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120C41C4: fstp dword ptr [ebp - 0x8c] */
L_120C41CA:
    RECOMP_CALL(sub_120C40FF); /* 0x120C41CA: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    edi = ebp + (-0x10); /* 0x120C41CF: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41D2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41D3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41D4: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x10); /* 0x120C41D5: lea esi, [ebp - 0x10] */
    edi = ebp + (-0x1C); /* 0x120C41D8: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41DC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41DD: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x6C)); /* 0x120C41DE: mov eax, dword ptr [ebp - 0x6c] */
    esi = ebp + (-0x10); /* 0x120C41E1: lea esi, [ebp - 0x10] */
    edi = ebp + (-0x28); /* 0x120C41E4: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41E7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41E8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41E9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x10); /* 0x120C41EA: lea esi, [ebp - 0x10] */
    edi = ebp + (-0x34); /* 0x120C41ED: lea edi, [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41F1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C41F2: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C41F3: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120C41F5: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C41FB: fld dword ptr [eax + 4] */
    ecx = MEM32(ebp + (-0x70)); /* 0x120C41FE: mov ecx, dword ptr [ebp - 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x120C4201: fstp dword ptr [ebp - 0x84] */
    esi = ebp + (-0x88); /* 0x120C4207: lea esi, [ebp - 0x88] */
    edi = ebp + (-0x64); /* 0x120C420D: lea edi, [ebp - 0x64] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4210: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4211: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4212: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C4213: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x120C4215: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C4218: fld dword ptr [eax + 4] */
    esi = ebp + (-0x7C); /* 0x120C421B: lea esi, [ebp - 0x7c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120C421E: fstp dword ptr [ebp - 0x78] */
    edi = ebp + (-0x58); /* 0x120C4221: lea edi, [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C4224: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120C4226: add eax, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C4229: fstp dword ptr [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C422C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C422D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C422E: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C422F: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x120C4231: fstp dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C4237: fld dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C423A: push dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x120C423D: fstp dword ptr [ebp - 0x9c] */
    esi = ebp + (-0xA0); /* 0x120C4243: lea esi, [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C4249: fld dword ptr [ecx] */
    edi = ebp + (-0x4C); /* 0x120C424B: lea edi, [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C424E: fstp dword ptr [ebp - 0x98] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4254: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4255: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ecx + 0x1C); /* 0x120C4256: mov ecx, dword ptr [ecx + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4259: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C425A: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C425C: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C4262: fld dword ptr [eax + 4] */
    esi = ebp + (-0x94); /* 0x120C4265: lea esi, [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120C426B: fstp dword ptr [ebp - 0x90] */
    edi = ebp + (-0x40); /* 0x120C4271: lea edi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4274: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4275: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C4276: mov dword ptr [ebp - 0x6c], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4279: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x68)); /* 0x120C427A: mov esi, dword ptr [ebp - 0x68] */
    eax = ebp + (-0x34); /* 0x120C427D: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120C4280: push eax */
    eax = ebp + (-0x64); /* 0x120C4281: lea eax, [ebp - 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x120C4284: add esi, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120C4287: push eax */
    MEM32(ebp + (-0x68)) = esi; /* 0x120C4288: mov dword ptr [ebp - 0x68], esi */
    RECOMP_CALL(sub_120C3183); /* 0x120C428B: call 0x120c3183 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C4290: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C41CA; /* 0x120C4291: jne 0x120c41ca */
L_120C4297:
    edi = POP32_VAL(esp); /* 0x120C4297: pop edi */
L_120C4298:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C4298: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x120C429B: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C429C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C429E: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C429F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C42A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C42A5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C42AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C42ADu);

L_120C42AD:
    edi = edi; /* 0x120C42AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C42AF: push ebp */
    ebp = esp; /* 0x120C42B0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x120C42B2: sub esp, 0x30 */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0xC); /* 0x120C42B5: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, ebx); /* 0x120C42B8: push ebx */
    PUSH32(esp, esi); /* 0x120C42B9: push esi */
    PUSH32(esp, edi); /* 0x120C42BA: push edi */
    edi = MEM32(eax + 0x4); /* 0x120C42BB: mov edi, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x14); /* 0x120C42BE: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, 0x120014BCu); /* 0x120C42C1: push 0x120014bc */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C42C6: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C42C9: mov dword ptr [ebp - 8], eax */
    ebx = edi + edi; /* 0x120C42CC: lea ebx, [edi + edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C42CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x120C42D1: push 0xc */
    edx = POP32_VAL(esp); /* 0x120C42D3: pop edx */
    eax = ebx; /* 0x120C42D4: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C42D6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C42D8: seto cl */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120C42DB: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C42DE: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C42E0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C42E2: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C42E3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x120C42E8: push 0x120014bc */
    esi = eax; /* 0x120C42ED: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C42EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x120C42F1: push 0xc */
    edx = POP32_VAL(esp); /* 0x120C42F3: pop edx */
    eax = ebx; /* 0x120C42F4: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C42F6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C42F8: seto cl */
    MEM32(ebp + (-0x14)) = esi; /* 0x120C42FB: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C42FE: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C4300: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C4302: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C4303: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120C4308: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x120C430B: mov ebx, eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x120C430D: mov dword ptr [ebp - 0x10], ebx */
    /* test esi, esi */ /* 0x120C4310: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C43A6; /* 0x120C4312: je 0x120c43a6 */
L_120C4318:
    /* test ebx, ebx */ /* 0x120C4318: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C43A6; /* 0x120C431A: je 0x120c43a6 */
L_120C4320:
    eax = MEM32(ebp + 0x8); /* 0x120C4320: mov eax, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x120C4323: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4396; /* 0x120C4325: je 0x120c4396 */
L_120C4327:
    fp_push(0.0); /* 0x120C4327: fldz  */
    ecx = esi; /* 0x120C4329: mov ecx, esi */
    esi = MEM32(ebp + (-0x8)); /* 0x120C432B: mov esi, dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C432E: fstp dword ptr [ebp - 0x1c] */
    edx = ebx; /* 0x120C4331: mov edx, ebx */
    ebx = edi; /* 0x120C4333: mov ebx, edi */
L_120C4335:
    edi = edx; /* 0x120C4335: mov edi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4337: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4338: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4339: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x4)); /* 0x120C433A: mov esi, dword ptr [ebp - 4] */
    edi = ecx; /* 0x120C433D: mov edi, ecx */
    PUSH32(esp, 0xCu); /* 0x120C433F: push 0xc */
    fp_push(*(float*)&MEM32(esi)); /* 0x120C4341: fld dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120C4343: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120C4346: fld dword ptr [esi + 4] */
    esi = ebp + (-0x24); /* 0x120C4349: lea esi, [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120C434C: fstp dword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C434F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4350: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4351: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x120C4352: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x120C4353: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x120C4355: add ecx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x8)); /* 0x120C4357: mov esi, dword ptr [ebp - 8] */
    edi = edx; /* 0x120C435A: mov edi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C435C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C435D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C435E: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x4)); /* 0x120C435F: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 8; /* 0x120C4362: add dword ptr [ebp - 4], 8 */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x120C4366: mov edi, ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x120C4368: fld dword ptr [esi] */
    PUSH32(esp, 0xCu); /* 0x120C436A: push 0xc */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120C436C: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120C436F: fld dword ptr [esi + 4] */
    esi = ebp + (-0x30); /* 0x120C4372: lea esi, [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120C4375: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C4378: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120C437A: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C437D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C437E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C437F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x120C4380: mov esi, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x120C4383: pop edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x120C4384: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x120C4386: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x120C4388: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C438A: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = esi; /* 0x120C438B: mov dword ptr [ebp - 8], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4335; /* 0x120C438E: jne 0x120c4335 */
L_120C4390:
    ebx = MEM32(ebp + (-0x10)); /* 0x120C4390: mov ebx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x14)); /* 0x120C4393: mov esi, dword ptr [ebp - 0x14] */
L_120C4396:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C4396: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x1C); /* 0x120C4399: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120C439C: push dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x120C439F: push ebx */
    PUSH32(esp, esi); /* 0x120C43A0: push esi */
    RECOMP_CALL(sub_120C32B9); /* 0x120C43A1: call 0x120c32b9 */
    RECOMP_FLAGS_IN();
L_120C43A6:
    PUSH32(esp, esi); /* 0x120C43A6: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120C43A7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120C43AC: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120C43AD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C43B2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C43B3: pop ecx */
    edi = POP32_VAL(esp); /* 0x120C43B4: pop edi */
    esi = POP32_VAL(esp); /* 0x120C43B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x120C43B6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C43B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C43B8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C43C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C43C0u);

L_120C43C0:
    edi = edi; /* 0x120C43C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C43C2: push ebp */
    ebp = esp; /* 0x120C43C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x120C43C5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120C43C8: fld dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x8); /* 0x120C43CB: mov ecx, dword ptr [ebx + 8] */
    fp_push(0.0); /* 0x120C43CE: fldz  */
    PUSH32(esp, esi); /* 0x120C43D0: push esi */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C43D1: fucom st(1) */
    PUSH32(esp, edi); /* 0x120C43D3: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C43D4: mov dword ptr [ebp - 4], ecx */
    esi = ebp + (-0x14); /* 0x120C43D7: lea esi, [ebp - 0x14] */
    edi = ebp + (-0x20); /* 0x120C43DA: lea edi, [ebp - 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C43DD: fnstsw ax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C43DF: fst dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C43E2: fstp dword ptr [ebp - 0x10] */
    /* test HI8(eax), 0x44u */ /* 0x120C43E5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C43F5; /* 0x120C43E8: jp 0x120c43f5 */
L_120C43EA:
    fp_push(1.0); /* 0x120C43EA: fld1  */
    MEM32(ebp + 0x8) = 1; /* 0x120C43EC: mov dword ptr [ebp + 8], 1 */
    goto L_120C43FF; /* 0x120C43F3: jmp 0x120c43ff */
L_120C43F5:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120C43F5: fld dword ptr [0x12001748] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x120C43FB: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C43FF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C43FF: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4402: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4403: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4404: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebx + 0x1C); /* 0x120C4405: mov edi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x120C4408: add edi, 0x18 */
    _flag_k = FK_ADD;
    esi = ebp + (-0x20); /* 0x120C440B: lea esi, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C440E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C440F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4410: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx + 0x1C); /* 0x120C4411: mov eax, dword ptr [ebx + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x120C4414: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C4417: fld dword ptr [ecx] */
    RECOMP_CALL(sub_121BF2F7); /* 0x120C4419: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x120C441E: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120C4421: add esi, 4 */
    _flag_k = FK_ADD;
    goto L_120C4480; /* 0x120C4424: jmp 0x120c4480 */
L_120C4426:
    fp_push(*(float*)&MEM32(esi)); /* 0x120C4426: fld dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C4428: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = eax; /* 0x120C4429: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x120C442C: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120C4431: fld dword ptr [esi + 4] */
    edi = eax; /* 0x120C4434: mov edi, eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x120C4436: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x120C443B: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120C443E: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C4441: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C446A; /* 0x120C4444: je 0x120c446a */
L_120C4446:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C4446: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C445B; /* 0x120C4447: je 0x120c445b */
L_120C4449:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C4449: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C447A; /* 0x120C444A: jne 0x120c447a */
L_120C444C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C444C: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x120C444F: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x120C4452: push eax */
    PUSH32(esp, esi); /* 0x120C4453: push esi */
    RECOMP_CALL(sub_120C30C0); /* 0x120C4454: call 0x120c30c0 */
    RECOMP_FLAGS_IN();
    goto L_120C4477; /* 0x120C4459: jmp 0x120c4477 */
L_120C445B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C445B: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x120C445E: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x120C4461: push eax */
    PUSH32(esp, esi); /* 0x120C4462: push esi */
    RECOMP_CALL(sub_120C2F0F); /* 0x120C4463: call 0x120c2f0f */
    RECOMP_FLAGS_IN();
    goto L_120C4477; /* 0x120C4468: jmp 0x120c4477 */
L_120C446A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C446A: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x120C446D: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x120C4470: push eax */
    PUSH32(esp, esi); /* 0x120C4471: push esi */
    RECOMP_CALL(sub_120C3002); /* 0x120C4472: call 0x120c3002 */
    RECOMP_FLAGS_IN();
L_120C4477:
    eax = MEM32(ebp + (-0x4)); /* 0x120C4477: mov eax, dword ptr [ebp - 4] */
L_120C447A:
    esi = esi + eax * 8; /* 0x120C447A: lea esi, [esi + eax*8] */
    eax = MEM32(ebp + (-0x8)); /* 0x120C447D: mov eax, dword ptr [ebp - 8] */
L_120C4480:
    /* test eax, eax */ /* 0x120C4480: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4426; /* 0x120C4482: jne 0x120c4426 */
L_120C4484:
    edi = POP32_VAL(esp); /* 0x120C4484: pop edi */
    esi = POP32_VAL(esp); /* 0x120C4485: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4486: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4487: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C448F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C448Fu);

L_120C448F:
    edi = edi; /* 0x120C448F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4491: push ebp */
    ebp = esp; /* 0x120C4492: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C4494: push ecx */
    PUSH32(esp, ecx); /* 0x120C4495: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x120C4496: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C4499: fld dword ptr [ecx + 4] */
    fp_push(0.0); /* 0x120C449C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C449E: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C44A0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C44A2: fstp st(1) */
    fp_push(0.0); /* 0x120C44A4: fldz  */
    /* test HI8(eax), 0x44u */ /* 0x120C44A6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C44BB; /* 0x120C44A9: jp 0x120c44bb */
L_120C44AB:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C44AB: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120C44AD: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C44AF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120C44B1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C44BB; /* 0x120C44B4: jp 0x120c44bb */
L_120C44B6:
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x120C44B6: fst qword ptr [ebp - 8] */
    goto L_120C44D6; /* 0x120C44B9: jmp 0x120c44d6 */
L_120C44BB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C44BB: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C44BD: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C44BF: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C44C2: fld dword ptr [ecx] */
    RECOMP_CALL(sub_121BF4DC); /* 0x120C44C4: call 0x121bf4dc */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120C44C9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120C44CC: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C44CF: fstp qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x120C44D2: fldz  */
    fp_push(0.0); /* 0x120C44D4: fldz  */
L_120C44D6:
    ecx = MEM32(ebp + 0xC); /* 0x120C44D6: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C44D9: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120C44DC: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C44DE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120C44E0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C44F4; /* 0x120C44E3: jp 0x120c44f4 */
L_120C44E5:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C44E5: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120C44E7: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C44E9: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C44EB: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x120C44ED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C44F6; /* 0x120C44F0: jp 0x120c44f6 */
L_120C44F2:
    goto L_120C4508; /* 0x120C44F2: jmp 0x120c4508 */
L_120C44F4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C44F4: fstp st(0) */
L_120C44F6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C44F6: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C44F8: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C44FB: fld dword ptr [ecx] */
    RECOMP_CALL(sub_121BF4DC); /* 0x120C44FD: call 0x121bf4dc */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120C4502: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120C4505: fld dword ptr [ebp + 8] */
L_120C4508:
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x120C4508: fsub qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x12006B08)); /* 0x120C450B: fld qword ptr [0x12006b08] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C4511: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4513: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120C4515: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4522; /* 0x120C4518: jne 0x120c4522 */
L_120C451A:
    _st[0] += *(double*)ADDR(0x12006B00); /* 0x120C451A: fadd qword ptr [0x12006b00] */
    goto L_120C4537; /* 0x120C4520: jmp 0x120c4537 */
L_120C4522:
    fp_push(*(double*)ADDR(0x12006AF8)); /* 0x120C4522: fld qword ptr [0x12006af8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C4528: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C452A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C452C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C4537; /* 0x120C452F: jp 0x120c4537 */
L_120C4531:
    _st[0] -= *(double*)ADDR(0x12006B00); /* 0x120C4531: fsub qword ptr [0x12006b00] */
L_120C4537:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4537: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C4538: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C4540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4540u);

L_120C4540:
    edi = edi; /* 0x120C4540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4542: push ebp */
    ebp = esp; /* 0x120C4543: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C4545: push esi */
    esi = eax; /* 0x120C4546: mov esi, eax */
    eax = MEM32(esi + 0x10); /* 0x120C4548: mov eax, dword ptr [esi + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120C454B: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x120C454E: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x120C454F: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C4554: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x120C4555: mov dword ptr [esi + 0x18], eax */
    /* test eax, eax */ /* 0x120C4558: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C45CF; /* 0x120C455A: je 0x120c45cf */
L_120C455C:
    edx = MEM32(esi + 0x4); /* 0x120C455C: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x120C455F: mov ecx, dword ptr [esi] */
    /* test edx, edx */ /* 0x120C4561: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C45CC; /* 0x120C4563: je 0x120c45cc */
L_120C4565:
    fp_push(0.0); /* 0x120C4565: fldz  */
    PUSH32(esp, ebx); /* 0x120C4567: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120C4568: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120C456B: push edi */
L_120C456C:
    esi = MEM32(ecx); /* 0x120C456C: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C456E: dec esi */
    _flag_k = FK_DEC;
    edi = MEM32(ecx + 0x8); /* 0x120C456F: mov edi, dword ptr [ecx + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x120C4572: mov dword ptr [ecx + 0xc], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C45C2; /* 0x120C4575: je 0x120c45c2 */
L_120C4577:
    /* cmp MEM32(ebp + 0x8), 0x900u */ /* 0x120C4577: cmp dword ptr [ebp + 8], 0x900 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x900u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x120C457E: fld dword ptr [edi + 8] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120C4581: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AEC) = _v; } /* 0x120C4583: fstp dword ptr [0x121d9aec] */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x120C4589: fld dword ptr [edi + 0xc] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x120C458C: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121D9AF0) = _v; } /* 0x120C458F: fstp dword ptr [0x121d9af0] */
    fp_push(*(float*)&MEM32(0x121D9AF0)); /* 0x120C4595: fld dword ptr [0x121d9af0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C45A9; /* 0x120C459B: jne 0x120c45a9 */
L_120C459D:
    _st[0] = -_st[0]; /* 0x120C459D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120C459F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x121D9AEC)); /* 0x120C45A1: fld dword ptr [0x121d9aec] */
    goto L_120C45B3; /* 0x120C45A7: jmp 0x120c45b3 */
L_120C45A9:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120C45A9: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x121D9AEC)); /* 0x120C45AB: fld dword ptr [0x121d9aec] */
    _st[0] = -_st[0]; /* 0x120C45B1: fchs  */
L_120C45B3:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120C45B3: fstp dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120C45B6: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120C45B9: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C45BC: dec esi */
    _flag_k = FK_DEC;
    { float _v = (float)_st[0]; *(float*)ADDR(eax + (-0x4)) = _v; } /* 0x120C45BD: fst dword ptr [eax - 4] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4577; /* 0x120C45C0: jne 0x120c4577 */
L_120C45C2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x120C45C2: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120C45C5: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C456C; /* 0x120C45C6: jne 0x120c456c */
L_120C45C8:
    edi = POP32_VAL(esp); /* 0x120C45C8: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C45C9: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x120C45CB: pop ebx */
L_120C45CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C45CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C45CE: inc eax */
    _flag_k = FK_INC;
L_120C45CF:
    esi = POP32_VAL(esp); /* 0x120C45CF: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C45D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C45D1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C45D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C45D9u);

L_120C45D9:
    edi = edi; /* 0x120C45D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C45DB: push ebp */
    ebp = esp; /* 0x120C45DC: mov ebp, esp */
    eax = MEM32(esi + 0xC); /* 0x120C45DE: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x120C45E1: push edi */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x120C45E2: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C4604; /* 0x120C45E5: jb 0x120c4604 */
L_120C45E7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3E8u; /* 0x120C45E7: add eax, 0x3e8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = eax; /* 0x120C45EC: mov dword ptr [esi + 0xc], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120C45EF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120C45EF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120C45F2: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120C45F3: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF5B6); /* 0x120C45F6: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C45FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C45FC: pop ecx */
    /* test eax, eax */ /* 0x120C45FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C461B; /* 0x120C45FF: je 0x120c461b */
L_120C4601:
    MEM32(esi + 0x8) = eax; /* 0x120C4601: mov dword ptr [esi + 8], eax */
L_120C4604:
    ecx = MEM32(esi + 0x10); /* 0x120C4604: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120C4607: fld dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8); /* 0x120C460A: mov eax, dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x120C460D: fstp dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x120C4610: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4613: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4615: inc eax */
    _flag_k = FK_INC;
L_120C4616:
    edi = POP32_VAL(esp); /* 0x120C4616: pop edi */
    ebp = POP32_VAL(esp); /* 0x120C4617: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4618: ret 4 */
L_120C461B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C461B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120C4616; /* 0x120C461D: jmp 0x120c4616 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120C4624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4624u);

L_120C4624:
    edi = edi; /* 0x120C4624: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4626: push ebp */
    ebp = esp; /* 0x120C4627: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C4629: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C462A: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x120C462D: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4638; /* 0x120C4631: jne 0x120c4638 */
L_120C4633:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4633: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4635: inc eax */
    _flag_k = FK_INC;
    goto L_120C4678; /* 0x120C4636: jmp 0x120c4678 */
L_120C4638:
    PUSH32(esp, 0xFA0u); /* 0x120C4638: push 0xfa0 */
    RECOMP_CALL(sub_121BF524); /* 0x120C463D: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C4642: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x120C4643: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x120C4646: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4676; /* 0x120C4648: je 0x120c4676 */
L_120C464A:
    fp_push(0.0); /* 0x120C464A: fldz  */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x120C464C: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C4650: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C4651: fstp dword ptr [esp] */
    MEM32(esi + 0xC) = 0x3E8u; /* 0x120C4654: mov dword ptr [esi + 0xc], 0x3e8 */
    RECOMP_CALL(sub_120C45D9); /* 0x120C465B: call 0x120c45d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4676; /* 0x120C4662: je 0x120c4676 */
L_120C4664:
    ecx = MEM32(esi + 0x1C); /* 0x120C4664: mov ecx, dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_120C359E); /* 0x120C4667: call 0x120c359e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C466C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C4676; /* 0x120C466E: js 0x120c4676 */
L_120C4670:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x120C4670: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120C4633; /* 0x120C4674: jmp 0x120c4633 */
L_120C4676:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4676: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C4678:
    esi = POP32_VAL(esp); /* 0x120C4678: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C4679: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C467A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4682(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4682u);

L_120C4682:
    edi = edi; /* 0x120C4682: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4684: push ebp */
    ebp = esp; /* 0x120C4685: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120C4687: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C468A: push esi */
    esi = MEM32(eax + 0x1BC); /* 0x120C468B: mov esi, dword ptr [eax + 0x1bc] */
    eax = MEM32(esi + 0x8); /* 0x120C4691: mov eax, dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C4694: fld dword ptr [eax] */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x120C4696: fadd qword ptr [0x120014e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120C469C: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x10); /* 0x120C469E: mov eax, dword ptr [esi + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120C46A1: fild dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C46A4: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x14) = eax; /* 0x120C46A5: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x120C46A8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x120C46AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C46B5; /* 0x120C46AD: jns 0x120c46b5 */
L_120C46AF:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C46AF: fadd dword ptr [0x120014d0] */
L_120C46B5:
    PUSH32(esp, ecx); /* 0x120C46B5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C46B6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C45D9); /* 0x120C46B9: call 0x120c45d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C46BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C46D1; /* 0x120C46C0: je 0x120c46d1 */
L_120C46C2:
    fp_push(0.0); /* 0x120C46C2: fldz  */
    PUSH32(esp, ecx); /* 0x120C46C4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C46C5: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C45D9); /* 0x120C46C8: call 0x120c45d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C46CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C46D8; /* 0x120C46CF: jne 0x120c46d8 */
L_120C46D1:
    MEM32(esi + 0x18) = 0x8007000Eu; /* 0x120C46D1: mov dword ptr [esi + 0x18], 0x8007000e */
L_120C46D8:
    esi = POP32_VAL(esp); /* 0x120C46D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C46D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C46DA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C46E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C46E2u);

L_120C46E2:
    edi = edi; /* 0x120C46E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C46E4: push ebp */
    ebp = esp; /* 0x120C46E5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120C46E7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C46EA: push esi */
    esi = MEM32(eax + 0x1BC); /* 0x120C46EB: mov esi, dword ptr [eax + 0x1bc] */
    PUSH32(esp, edi); /* 0x120C46F1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C46F2: mov edi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x120C46F5: fld dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x120C46F7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C46F8: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C45D9); /* 0x120C46FB: call 0x120c45d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4714; /* 0x120C4702: je 0x120c4714 */
L_120C4704:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120C4704: fld dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x120C4707: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C4708: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C45D9); /* 0x120C470B: call 0x120c45d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C471B; /* 0x120C4712: jne 0x120c471b */
L_120C4714:
    MEM32(esi + 0x18) = 0x8007000Eu; /* 0x120C4714: mov dword ptr [esi + 0x18], 0x8007000e */
L_120C471B:
    ecx = MEM32(esi + 0x14); /* 0x120C471B: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x8); /* 0x120C471E: mov eax, dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(eax + ecx * 4)); /* 0x120C4721: fld dword ptr [eax + ecx*4] */
    edi = POP32_VAL(esp); /* 0x120C4724: pop edi */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x120C4725: fadd qword ptr [0x120014e0] */
    esi = POP32_VAL(esp); /* 0x120C472B: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x120C472C: fstp dword ptr [eax + ecx*4] */
    ebp = POP32_VAL(esp); /* 0x120C472F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C4730: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C4738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4738u);

L_120C4738:
    edi = edi; /* 0x120C4738: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C473A: push ebp */
    ebp = esp; /* 0x120C473B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C473D: push ecx */
    PUSH32(esp, ecx); /* 0x120C473E: push ecx */
    PUSH32(esp, ebx); /* 0x120C473F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C4740: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C4743: push edi */
    edi = MEM32(ebx + 0x4); /* 0x120C4744: mov edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C4747: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C4749: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, 2 */ /* 0x120C474C: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C4801; /* 0x120C474F: jb 0x120c4801 */
L_120C4755:
    PUSH32(esp, esi); /* 0x120C4755: push esi */
    esi = MEM32(ebx); /* 0x120C4756: mov esi, dword ptr [ebx] */
    MEM32(ebp + (-0x8)) = esi; /* 0x120C4758: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x120C475B: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C475E: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C4800; /* 0x120C475F: je 0x120c4800 */
L_120C4765:
    ebx = MEM32(ebp + (-0x8)); /* 0x120C4765: mov ebx, dword ptr [ebp - 8] */
L_120C4768:
    /* cmp MEM32(ebx), 3 */ /* 0x120C4768: cmp dword ptr [ebx], 3 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4774; /* 0x120C476B: jne 0x120c4774 */
L_120C476D:
    /* cmp MEM32(esi), 3 */ /* 0x120C476D: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C479D; /* 0x120C4770: je 0x120c479d */
L_120C4772:
    goto L_120C47C0; /* 0x120C4772: jmp 0x120c47c0 */
L_120C4774:
    /* cmp MEM32(esi), 3 */ /* 0x120C4774: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C47C0; /* 0x120C4777: je 0x120c47c0 */
L_120C4779:
    eax = MEM32(ebx + 0x4); /* 0x120C4779: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x120C477C: push dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x120C477F: sub eax, 2 */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120C4782: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x10); /* 0x120C4785: add eax, dword ptr [ebx + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120C4788: push eax */
    RECOMP_CALL(sub_120C448F); /* 0x120C4789: call 0x120c448f */
    RECOMP_FLAGS_IN();
    _st[0] = fabs(_st[0]); /* 0x120C478E: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12006AE8)); /* 0x120C4790: fcomp qword ptr [0x12006ae8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4796: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C4798: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C47BD; /* 0x120C479B: jp 0x120c47bd */
L_120C479D:
    eax = MEM32(ebx + 0x4); /* 0x120C479D: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120C47A0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C47A3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x120C47A4: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0xC); /* 0x120C47A7: mov eax, dword ptr [ebx + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x120C47AA: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebx + 0x10); /* 0x120C47AD: mov eax, dword ptr [ebx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x120C47B0: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x120C47B3: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C47B7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C47B8: mov dword ptr [ebp - 4], ecx */
    goto L_120C47C0; /* 0x120C47BB: jmp 0x120c47c0 */
L_120C47BD:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C47BD: mov ecx, dword ptr [ebp - 4] */
L_120C47C0:
    ebx = esi; /* 0x120C47C0: mov ebx, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x120C47C2: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C47C5: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4768; /* 0x120C47C6: jne 0x120c4768 */
L_120C47C8:
    ebx = MEM32(ebp + 0x8); /* 0x120C47C8: mov ebx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120C47CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4800; /* 0x120C47CD: je 0x120c4800 */
L_120C47CF:
    edx = MEM32(ebx + 0x4); /* 0x120C47CF: mov edx, dword ptr [ebx + 4] */
    ebx = MEM32(ebx); /* 0x120C47D2: mov ebx, dword ptr [ebx] */
    eax = edx; /* 0x120C47D4: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120C47D6: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120C47D8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x120C47DB: mov dword ptr [ecx + 4], eax */
    /* test edx, edx */ /* 0x120C47DE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4800; /* 0x120C47E0: je 0x120c4800 */
L_120C47E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C47E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C47E4:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x120C47E4: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C47EF; /* 0x120C47E8: jne 0x120c47ef */
L_120C47EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x120C47EA: add eax, 0x18 */
    _flag_k = FK_ADD;
    goto L_120C47FA; /* 0x120C47ED: jmp 0x120c47fa */
L_120C47EF:
    edi = ebx; /* 0x120C47EF: mov edi, ebx */
    PUSH32(esp, 6); /* 0x120C47F1: push 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120C47F3: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120C47F5: pop ecx */
    esi = ebx; /* 0x120C47F6: mov esi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C47F8: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_120C47FA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x120C47FA: add ebx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120C47FD: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C47E4; /* 0x120C47FE: jne 0x120c47e4 */
L_120C4800:
    esi = POP32_VAL(esp); /* 0x120C4800: pop esi */
L_120C4801:
    edi = POP32_VAL(esp); /* 0x120C4801: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C4802: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4803: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4804: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C480C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C480Cu);

L_120C480C:
    edi = edi; /* 0x120C480C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C480E: push ebp */
    ebp = esp; /* 0x120C480F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120C4811: sub esp, 0x18 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x120C4814: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120C4818: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C481A: fstp qword ptr [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4826; /* 0x120C481D: jne 0x120c4826 */
L_120C481F:
    eax = 0x900u; /* 0x120C481F: mov eax, 0x900 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4824: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C4825: ret  */
L_120C4826:
    PUSH32(esp, esi); /* 0x120C4826: push esi */
    RECOMP_CALL(sub_120C4062); /* 0x120C4827: call 0x120c4062 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x10); /* 0x120C482C: mov esi, dword ptr [eax + 0x10] */
    /* cmp esi, 3 */ /* 0x120C482F: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C48C1; /* 0x120C4832: jb 0x120c48c1 */
L_120C4838:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C4838: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x120C4839: push edi */
    edi = MEM32(eax + 0xC); /* 0x120C483A: mov edi, dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x120C483D: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(edi + esi * 8 + (-0x8)); /* 0x120C483F: fsub dword ptr [edi + esi*8 - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C4843: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120C4846: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(edi + esi * 8 + (-0x4)); /* 0x120C4849: fsub dword ptr [edi + esi*8 - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C484D: fstp dword ptr [ebp - 0xc] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4878; /* 0x120C4850: jne 0x120c4878 */
L_120C4852:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x120C4852: fld qword ptr [ebp - 0x18] */
L_120C4855:
    fp_push(_st[0]); /* 0x120C4855: fld st(0) */
    edi = POP32_VAL(esp); /* 0x120C4857: pop edi */
    _st[0] = fabs(_st[0]); /* 0x120C4858: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12006B70)); /* 0x120C485A: fcomp qword ptr [0x12006b70] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4860: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C4862: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C48B1; /* 0x120C4865: jp 0x120c48b1 */
L_120C4867:
    PUSH32(esp, 0x12006B10u); /* 0x120C4867: push 0x12006b10 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C486C: fstp st(0) */
    RECOMP_ICALL(MEM32(0x12001114)); /* 0x120C486E: call dword ptr [0x12001114] */
    RECOMP_FLAGS_IN();
    goto L_120C48C1; /* 0x120C4874: jmp 0x120c48c1 */
L_120C4876:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C4876: fstp st(0) */
L_120C4878:
    eax = edi; /* 0x120C4878: mov eax, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120C487A: add edi, 8 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edi)); /* 0x120C487D: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x120C487F: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C4881: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120C4884: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x120C4887: fsub dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x120C488A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120C488D: push eax */
    eax = ebp + (-0x10); /* 0x120C488E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C4891: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C4892: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_120C448F); /* 0x120C4895: call 0x120c448f */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x120C489A: fadd qword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C489D: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x8)); /* 0x120C489E: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120C48A1: mov dword ptr [ebp - 0x10], eax */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x120C48A4: fst qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x4)); /* 0x120C48A7: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120C48AA: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4876; /* 0x120C48AD: jne 0x120c4876 */
L_120C48AF:
    RECOMP_BACKEDGE();
    goto L_120C4855; /* 0x120C48AF: jmp 0x120c4855 */
L_120C48B1:
    fp_push(0.0); /* 0x120C48B1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C48B3: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C48B5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C48B7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x901u; /* 0x120C48BA: mov eax, 0x901 */
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120C48C6; /* 0x120C48BF: jnp 0x120c48c6 */
L_120C48C1:
    eax = 0x900u; /* 0x120C48C1: mov eax, 0x900 */
L_120C48C6:
    esi = POP32_VAL(esp); /* 0x120C48C6: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C48C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C48C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C48CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C48CEu);

L_120C48CE:
    edi = edi; /* 0x120C48CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C48D0: push ebp */
    ebp = esp; /* 0x120C48D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120C48D3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120C48D6: push ebx */
    PUSH32(esp, esi); /* 0x120C48D7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C48D8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C48DB: push edi */
    edi = MEM32(esi + 0x4); /* 0x120C48DC: mov edi, dword ptr [esi + 4] */
    esi = MEM32(esi); /* 0x120C48DF: mov esi, dword ptr [esi] */
    edx = edi; /* 0x120C48E1: mov edx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C48E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x120C48E5: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x10)) = esi; /* 0x120C48E8: mov dword ptr [ebp - 0x10], esi */
    ecx = esi; /* 0x120C48EB: mov ecx, esi */
    /* test edx, edx */ /* 0x120C48ED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4AFA; /* 0x120C48EF: je 0x120c4afa */
L_120C48F5:
    /* cmp MEM32(ecx), 4 */ /* 0x120C48F5: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C48FD; /* 0x120C48F8: jne 0x120c48fd */
L_120C48FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x120C48FA: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
L_120C48FD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x120C48FD: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120C4900: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C48F5; /* 0x120C4901: jne 0x120c48f5 */
L_120C4903:
    /* test eax, eax */ /* 0x120C4903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4AFA; /* 0x120C4905: je 0x120c4afa */
L_120C490B:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120C490B: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x120C490E: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x120C490F: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C4914: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x120C4916: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x120C4919: pop ecx */
    MEM32(eax + 0x1C) = ebx; /* 0x120C491A: mov dword ptr [eax + 0x1c], ebx */
    /* test ebx, ebx */ /* 0x120C491D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4928; /* 0x120C491F: jne 0x120c4928 */
L_120C4921:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4921: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C4AFD; /* 0x120C4923: jmp 0x120c4afd */
L_120C4928:
    /* test edi, edi */ /* 0x120C4928: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C49CF; /* 0x120C492A: je 0x120c49cf */
L_120C4930:
    /* cmp MEM32(esi), 3 */ /* 0x120C4930: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C49BA; /* 0x120C4933: je 0x120c49ba */
L_120C4939:
    eax = MEM32(esi + 0x4); /* 0x120C4939: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0x14) = ebx; /* 0x120C493C: mov dword ptr [esi + 0x14], ebx */
    esi = MEM32(esi + 0x10); /* 0x120C493F: mov esi, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x8)) = esi; /* 0x120C4942: mov dword ptr [ebp - 8], esi */
    edi = ebx; /* 0x120C4945: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4947: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4948: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4949: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebx; /* 0x120C494A: mov esi, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x120C494C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_120C40FF); /* 0x120C494F: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x120C4954: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x120C4957: add ebx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x120C495A: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 2; /* 0x120C495D: sub dword ptr [ebp - 4], 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C49A2; /* 0x120C4961: je 0x120c49a2 */
L_120C4963:
    eax = edi + (-0x4); /* 0x120C4963: lea eax, [edi - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C4966: mov dword ptr [ebp - 8], eax */
L_120C4969:
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x120C4969: fld dword ptr [eax - 8] */
    esi = ebx; /* 0x120C496C: mov esi, ebx */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x120C496E: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x120C4970: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120C4972: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(eax + (-0x4)); /* 0x120C4975: fadd dword ptr [eax - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x120C4978: fstp dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x120C497B: fld dword ptr [eax + 0xc] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x120C497E: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x120C4980: fstp dword ptr [ebx + 8] */
    RECOMP_CALL(sub_120C40FF); /* 0x120C4983: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120C4988: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x120C498B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C498E: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120C498F: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x120C4992: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x120C4995: add ebx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C4998: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C499B: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x120C499E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4969; /* 0x120C49A0: jne 0x120c4969 */
L_120C49A2:
    esi = edi + (-0xC); /* 0x120C49A2: lea esi, [edi - 0xc] */
    edi = ebx; /* 0x120C49A5: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C49A7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C49A8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C49A9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebx; /* 0x120C49AA: mov esi, ebx */
    RECOMP_CALL(sub_120C40FF); /* 0x120C49AC: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x10)); /* 0x120C49B1: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0xC)); /* 0x120C49B4: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x120C49B7: add ebx, 0xc */
    _flag_k = FK_ADD;
L_120C49BA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C49BA: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x120C49BB: add esi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edi; /* 0x120C49BE: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x10)) = esi; /* 0x120C49C1: mov dword ptr [ebp - 0x10], esi */
    /* test edi, edi */ /* 0x120C49C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4930; /* 0x120C49C6: jne 0x120c4930 */
L_120C49CC:
    eax = MEM32(ebp + 0x8); /* 0x120C49CC: mov eax, dword ptr [ebp + 8] */
L_120C49CF:
    ecx = MEM32(eax + 0x4); /* 0x120C49CF: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x120C49D2: mov edi, dword ptr [eax] */
    eax = ecx; /* 0x120C49D4: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x120C49D6: imul eax, eax, 0x18 */
    esi = eax + edi + (-0x18); /* 0x120C49D9: lea esi, [eax + edi - 0x18] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120C49DD: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x120C49E0: mov dword ptr [ebp - 4], esi */
    /* test ecx, ecx */ /* 0x120C49E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4AFA; /* 0x120C49E5: je 0x120c4afa */
L_120C49EB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120C49EB: add edi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x120C49EE: mov dword ptr [ebp + 8], edi */
L_120C49F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C49F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), 3 */ /* 0x120C49F3: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4A01; /* 0x120C49F6: jne 0x120c4a01 */
L_120C49F8:
    /* cmp MEM32(edi + (-0x14)), 3 */ /* 0x120C49F8: cmp dword ptr [edi - 0x14], 3 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x14))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C49FC: setne bl */
    goto L_120C4A0B; /* 0x120C49FF: jmp 0x120c4a0b */
L_120C4A01:
    /* cmp MEM32(edi + (-0x14)), 3 */ /* 0x120C4A01: cmp dword ptr [edi - 0x14], 3 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x14))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C4A05: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x120C4A08: add ebx, 2 */
    _flag_k = FK_ADD;
L_120C4A0B:
    ecx = MEM32(esi + 0x4); /* 0x120C4A0B: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(edi + (-0x4)); /* 0x120C4A0E: mov edx, dword ptr [edi - 4] */
    eax = MEM32(esi + 0x10); /* 0x120C4A11: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x120C4A14: add ecx, -2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x120C4A17: imul ecx, ecx, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120C4A1A: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x120C4A1C: push edx */
    PUSH32(esp, eax); /* 0x120C4A1D: push eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x120C4A1E: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120C4A21: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_120C448F); /* 0x120C4A24: call 0x120c448f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C4A29: dec ebx */
    _flag_k = FK_DEC;
    _st[0] = fabs(_st[0]); /* 0x120C4A2A: fabs  */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C4ABC; /* 0x120C4A2C: je 0x120c4abc */
L_120C4A32:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C4A32: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C4A8E; /* 0x120C4A33: je 0x120c4a8e */
L_120C4A35:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C4A35: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4ADD; /* 0x120C4A36: jne 0x120c4add */
L_120C4A3C:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12006AE8)); /* 0x120C4A3C: fcomp qword ptr [0x12006ae8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4A42: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C4A44: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C4ADF; /* 0x120C4A47: jp 0x120c4adf */
L_120C4A4D:
    ecx = MEM32(ebp + (-0x10)); /* 0x120C4A4D: mov ecx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C4A50: fld dword ptr [ecx] */
    esi = MEM32(ebp + (-0xC)); /* 0x120C4A52: mov esi, dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x120C4A55: fadd dword ptr [esi] */
    eax = MEM32(edi); /* 0x120C4A57: mov eax, dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120C4A59: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120C4A5B: fld dword ptr [esi + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x120C4A5E: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120C4A61: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120C4A64: fld dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x120C4A67: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120C4A6A: fstp dword ptr [eax + 8] */
    esi = MEM32(edi); /* 0x120C4A6D: mov esi, dword ptr [edi] */
    RECOMP_CALL(sub_120C40FF); /* 0x120C4A6F: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120C4A74: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x4); /* 0x120C4A77: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x14); /* 0x120C4A7A: mov eax, dword ptr [eax + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x120C4A7D: imul ecx, ecx, 0xc */
    esi = MEM32(ebp + 0x8); /* 0x120C4A80: mov esi, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x120C4A83: mov esi, dword ptr [esi] */
    edi = ecx + eax + (-0xC); /* 0x120C4A85: lea edi, [ecx + eax - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4A89: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4A8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4A8B: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_120C4AB7; /* 0x120C4A8C: jmp 0x120c4ab7 */
L_120C4A8E:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12006AF0)); /* 0x120C4A8E: fcomp qword ptr [0x12006af0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4A94: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C4A96: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C4ADF; /* 0x120C4A99: jp 0x120c4adf */
L_120C4A9B:
    ecx = MEM32(esi + 0x4); /* 0x120C4A9B: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi + 0x14); /* 0x120C4A9E: mov eax, dword ptr [esi + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x120C4AA1: imul ecx, ecx, 0xc */
    esi = MEM32(ebp + (-0x10)); /* 0x120C4AA4: mov esi, dword ptr [ebp - 0x10] */
    eax = ecx + eax + (-0xC); /* 0x120C4AA7: lea eax, [ecx + eax - 0xc] */
    edi = eax; /* 0x120C4AAB: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4AAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4AAE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4AAF: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x120C4AB0: mov esi, eax */
    RECOMP_CALL(sub_120C40FF); /* 0x120C4AB2: call 0x120c40ff */
    RECOMP_FLAGS_IN();
L_120C4AB7:
    edi = MEM32(ebp + 0x8); /* 0x120C4AB7: mov edi, dword ptr [ebp + 8] */
    goto L_120C4ADF; /* 0x120C4ABA: jmp 0x120c4adf */
L_120C4ABC:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12006AF0)); /* 0x120C4ABC: fcomp qword ptr [0x12006af0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C4AC2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C4AC4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C4ADF; /* 0x120C4AC7: jp 0x120c4adf */
L_120C4AC9:
    edi = MEM32(edi); /* 0x120C4AC9: mov edi, dword ptr [edi] */
    esi = MEM32(ebp + (-0xC)); /* 0x120C4ACB: mov esi, dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4ACE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4ACF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4AD0: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x120C4AD1: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi); /* 0x120C4AD4: mov esi, dword ptr [edi] */
    RECOMP_CALL(sub_120C40FF); /* 0x120C4AD6: call 0x120c40ff */
    RECOMP_FLAGS_IN();
    goto L_120C4ADF; /* 0x120C4ADB: jmp 0x120c4adf */
L_120C4ADD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C4ADD: fstp st(0) */
L_120C4ADF:
    eax = MEM32(ebp + (-0x8)); /* 0x120C4ADF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C4AE2: dec eax */
    _flag_k = FK_DEC;
    esi = edi + (-0x14); /* 0x120C4AE3: lea esi, [edi - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x120C4AE6: add edi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x120C4AE9: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x120C4AEC: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0x8) = edi; /* 0x120C4AEF: mov dword ptr [ebp + 8], edi */
    /* test eax, eax */ /* 0x120C4AF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C49F1; /* 0x120C4AF4: jne 0x120c49f1 */
L_120C4AFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4AFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4AFC: inc eax */
    _flag_k = FK_INC;
L_120C4AFD:
    edi = POP32_VAL(esp); /* 0x120C4AFD: pop edi */
    esi = POP32_VAL(esp); /* 0x120C4AFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x120C4AFF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4B00: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4B01: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4B09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4B09u);

L_120C4B09:
    edi = edi; /* 0x120C4B09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4B0B: push ebp */
    ebp = esp; /* 0x120C4B0C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C4B0E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C4B11: push esi */
    esi = eax; /* 0x120C4B12: mov esi, eax */
    PUSH32(esp, edi); /* 0x120C4B14: push edi */
    edi = MEM32(esi + 0x4); /* 0x120C4B15: mov edi, dword ptr [esi + 4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x120C4B18: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x120C4B1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4B27; /* 0x120C4B1D: jne 0x120c4b27 */
L_120C4B1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4B1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4B21: inc eax */
    _flag_k = FK_INC;
    goto L_120C4BC1; /* 0x120C4B22: jmp 0x120c4bc1 */
L_120C4B27:
    ecx = esi; /* 0x120C4B27: mov ecx, esi */
    RECOMP_CALL(sub_120C480C); /* 0x120C4B29: call 0x120c480c */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x120C4B2E: mov esi, dword ptr [esi] */
    ecx = eax; /* 0x120C4B30: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4B32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x901u */ /* 0x120C4B34: cmp ecx, 0x901 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C4B3A: sete al */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120C4B3D: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, ebx); /* 0x120C4B40: push ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120C4B41: mov dword ptr [ebp - 0xc], eax */
L_120C4B44:
    PUSH32(esp, ecx); /* 0x120C4B44: push ecx */
    eax = esi; /* 0x120C4B45: mov eax, esi */
    RECOMP_CALL(sub_120C4540); /* 0x120C4B47: call 0x120c4540 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4B4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4BBE; /* 0x120C4B4E: je 0x120c4bbe */
L_120C4B50:
    PUSH32(esp, esi); /* 0x120C4B50: push esi */
    RECOMP_CALL(sub_120C4738); /* 0x120C4B51: call 0x120c4738 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120C4B56: push esi */
    RECOMP_CALL(sub_120C48CE); /* 0x120C4B57: call 0x120c48ce */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4B5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4BB9; /* 0x120C4B5E: je 0x120c4bb9 */
L_120C4B60:
    eax = MEM32(esi + 0x4); /* 0x120C4B60: mov eax, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x120C4B63: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120C4B65: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120C4B68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4BA1; /* 0x120C4B6A: je 0x120c4ba1 */
L_120C4B6C:
    edi = MEM32(ebp + (-0xC)); /* 0x120C4B6C: mov edi, dword ptr [ebp - 0xc] */
L_120C4B6F:
    ecx = MEM32(ebx); /* 0x120C4B6F: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x120C4B71: sub ecx, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C4B86; /* 0x120C4B74: je 0x120c4b86 */
L_120C4B76:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C4B76: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4B93; /* 0x120C4B77: jne 0x120c4b93 */
L_120C4B79:
    PUSH32(esp, edi); /* 0x120C4B79: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C4B7A: push dword ptr [ebp + 8] */
    eax = ebx; /* 0x120C4B7D: mov eax, ebx */
    RECOMP_CALL(sub_120C42AD); /* 0x120C4B7F: call 0x120c42ad */
    RECOMP_FLAGS_IN();
    goto L_120C4B90; /* 0x120C4B84: jmp 0x120c4b90 */
L_120C4B86:
    PUSH32(esp, edi); /* 0x120C4B86: push edi */
    PUSH32(esp, ebx); /* 0x120C4B87: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C4B88: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C4188); /* 0x120C4B8B: call 0x120c4188 */
    RECOMP_FLAGS_IN();
L_120C4B90:
    eax = MEM32(ebp + (-0x4)); /* 0x120C4B90: mov eax, dword ptr [ebp - 4] */
L_120C4B93:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C4B93: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x120C4B94: add ebx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C4B97: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120C4B9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4B6F; /* 0x120C4B9C: jne 0x120c4b6f */
L_120C4B9E:
    edi = MEM32(ebp + (-0x8)); /* 0x120C4B9E: mov edi, dword ptr [ebp - 8] */
L_120C4BA1:
    RECOMP_CALL(sub_120C403A); /* 0x120C4BA1: call 0x120c403a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x120C4BA6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C4BA9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x120C4BAA: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edi; /* 0x120C4BAD: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x120C4BB0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4B44; /* 0x120C4BB2: jne 0x120c4b44 */
L_120C4BB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4BB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4BB6: inc eax */
    _flag_k = FK_INC;
    goto L_120C4BC0; /* 0x120C4BB7: jmp 0x120c4bc0 */
L_120C4BB9:
    RECOMP_CALL(sub_120C403A); /* 0x120C4BB9: call 0x120c403a */
    RECOMP_FLAGS_IN();
L_120C4BBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4BBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C4BC0:
    ebx = POP32_VAL(esp); /* 0x120C4BC0: pop ebx */
L_120C4BC1:
    edi = POP32_VAL(esp); /* 0x120C4BC1: pop edi */
    esi = POP32_VAL(esp); /* 0x120C4BC2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4BC3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4BC4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4BCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4BCCu);

L_120C4BCC:
    edi = edi; /* 0x120C4BCC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4BCE: push ebp */
    ebp = esp; /* 0x120C4BCF: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120C4BD1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120C4BD4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C4BD5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120C4BD8: push ebx */
    RECOMP_CALL(sub_120C4B09); /* 0x120C4BD9: call 0x120c4b09 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C4BDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4BFB; /* 0x120C4BE0: je 0x120c4bfb */
L_120C4BE2:
    fp_push(0.0); /* 0x120C4BE2: fldz  */
    PUSH32(esp, ecx); /* 0x120C4BE4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C4BE5: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C43C0); /* 0x120C4BE8: call 0x120c43c0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx)); /* 0x120C4BED: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x120C4BEF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120C4BF0: fstp dword ptr [esp] */
    RECOMP_CALL(sub_120C43C0); /* 0x120C4BF3: call 0x120c43c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4BF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C4BFA: inc eax */
    _flag_k = FK_INC;
L_120C4BFB:
    ebx = POP32_VAL(esp); /* 0x120C4BFB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C4BFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C4BFD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C4C05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4C05u);

L_120C4C05:
    edi = edi; /* 0x120C4C05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4C07: push ebp */
    ebp = esp; /* 0x120C4C08: mov ebp, esp */
    ecx = MEM32(0x121D6528); /* 0x120C4C0A: mov ecx, dword ptr [0x121d6528] */
    eax = 0x12006BA0u; /* 0x120C4C10: mov eax, 0x12006ba0 */
    /* cmp ecx, eax */ /* 0x120C4C15: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C4C27; /* 0x120C4C17: jbe 0x120c4c27 */
L_120C4C19:
    edx = MEM32(ebp + 0x8); /* 0x120C4C19: mov edx, dword ptr [ebp + 8] */
L_120C4C1C:
    /* cmp edx, MEM32(eax) */ /* 0x120C4C1C: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4C2C; /* 0x120C4C1E: je 0x120c4c2c */
L_120C4C20:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x120C4C20: add eax, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x120C4C23: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C4C1C; /* 0x120C4C25: jb 0x120c4c1c */
L_120C4C27:
    eax = 0x12006B78u; /* 0x120C4C27: mov eax, 0x12006b78 */
L_120C4C2C:
    ebp = POP32_VAL(esp); /* 0x120C4C2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4C2D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4C35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4C35u);

L_120C4C35:
    edi = edi; /* 0x120C4C35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4C37: push ebp */
    ebp = esp; /* 0x120C4C38: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C4C3A: push ecx */
    PUSH32(esp, edi); /* 0x120C4C3B: push edi */
    edi = eax; /* 0x120C4C3C: mov edi, eax */
    eax = MEM32(edx + 0x4); /* 0x120C4C3E: mov eax, dword ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)5); /* 0x120C4C41: imul eax, eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x120C4C44: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C4C47: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax * 4 + 0x120073A8), ecx */ /* 0x120C4C49: cmp dword ptr [eax*4 + 0x120073a8], ecx */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x120073A8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4C57; /* 0x120C4C50: jne 0x120c4c57 */
L_120C4C52:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120C4C52: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C4CB1; /* 0x120C4C55: jmp 0x120c4cb1 */
L_120C4C57:
    PUSH32(esp, ebx); /* 0x120C4C57: push ebx */
    PUSH32(esp, esi); /* 0x120C4C58: push esi */
    ebx = ecx; /* 0x120C4C59: mov ebx, ecx */
    esi = edx + 0xC; /* 0x120C4C5B: lea esi, [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120C4C5E: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = 5; /* 0x120C4C60: mov dword ptr [ebp - 4], 5 */
L_120C4C67:
    eax = MEM32(esi); /* 0x120C4C67: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x120C4C69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4C6E; /* 0x120C4C6B: je 0x120c4c6e */
L_120C4C6D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C4C6D: inc ebx */
    _flag_k = FK_INC;
L_120C4C6E:
    edx = MEM32(edi + esi); /* 0x120C4C6E: mov edx, dword ptr [edi + esi] */
    /* cmp eax, edx */ /* 0x120C4C71: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C4C87; /* 0x120C4C73: jae 0x120c4c87 */
L_120C4C75:
    /* test eax, eax */ /* 0x120C4C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4C81; /* 0x120C4C77: jne 0x120c4c81 */
L_120C4C79:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x100u; /* 0x120C4C79: add ecx, 0x100 */
    _flag_k = FK_ADD;
    goto L_120C4C9C; /* 0x120C4C7F: jmp 0x120c4c9c */
L_120C4C81:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120C4C81: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120C4C83: add ecx, edx */
    _flag_k = FK_ADD;
    goto L_120C4C9C; /* 0x120C4C85: jmp 0x120c4c9c */
L_120C4C87:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_120C4C9C; /* 0x120C4C87: jbe 0x120c4c9c */
L_120C4C89:
    /* test edx, edx */ /* 0x120C4C89: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4C95; /* 0x120C4C8B: jne 0x120c4c95 */
L_120C4C8D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x01000000u; /* 0x120C4C8D: add ecx, 0x1000000 */
    _flag_k = FK_ADD;
    goto L_120C4C9C; /* 0x120C4C93: jmp 0x120c4c9c */
L_120C4C95:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x120C4C95: sub eax, edx */
    _flag_k = FK_CMP;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x120C4C97: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x120C4C97: shl eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120C4C9A: add ecx, eax */
    _flag_k = FK_ADD;
L_120C4C9C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120C4C9C: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x120C4C9F: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C4C67; /* 0x120C4CA2: jne 0x120c4c67 */
L_120C4CA4:
    eax = ecx; /* 0x120C4CA4: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120C4CA6: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120C4CA6: shr eax, 0x18 */
    esi = POP32_VAL(esp); /* 0x120C4CA9: pop esi */
    /* cmp ebx, eax */ /* 0x120C4CAA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x120C4CAC: pop ebx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4C52; /* 0x120C4CAD: je 0x120c4c52 */
L_120C4CAF:
    eax = ecx; /* 0x120C4CAF: mov eax, ecx */
L_120C4CB1:
    edi = POP32_VAL(esp); /* 0x120C4CB1: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4CB2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C4CB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C4CB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4CB9u);

L_120C4CB9:
    edi = edi; /* 0x120C4CB9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4CBB: push ebp */
    ebp = esp; /* 0x120C4CBC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C4CBE: push ecx */
    PUSH32(esp, ebx); /* 0x120C4CBF: push ebx */
    PUSH32(esp, esi); /* 0x120C4CC0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C4CC1: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x120C4CC4: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120C4CC7: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C4CC8: mov dword ptr [ebp - 4], ecx */
    ebx = 0x12006B78u; /* 0x120C4CCB: mov ebx, 0x12006b78 */
    goto L_120C4D1C; /* 0x120C4CD0: jmp 0x120c4d1c */
L_120C4CD2:
    PUSH32(esp, eax); /* 0x120C4CD2: push eax */
    RECOMP_CALL(sub_120C4C05); /* 0x120C4CD3: call 0x120c4c05 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120C4CD8: mov edi, eax */
    eax = MEM32(edi); /* 0x120C4CDA: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x120C4CDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4D19; /* 0x120C4CDE: je 0x120c4d19 */
L_120C4CE0:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x120C4CE0: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4CEC; /* 0x120C4CE4: jne 0x120c4cec */
L_120C4CE6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120C4CE6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4D19; /* 0x120C4CEA: je 0x120c4d19 */
L_120C4CEC:
    ecx = MEM32(ebp + 0x10); /* 0x120C4CEC: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ecx), eax */ /* 0x120C4CEF: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4D2B; /* 0x120C4CF1: je 0x120c4d2b */
L_120C4CF3:
    eax = edi; /* 0x120C4CF3: mov eax, edi */
    edx = ecx; /* 0x120C4CF5: mov edx, ecx */
    RECOMP_CALL(sub_120C4C35); /* 0x120C4CF7: call 0x120c4c35 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120C4CFC: mov ecx, eax */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x120C4CFE: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4D19; /* 0x120C4D01: je 0x120c4d19 */
L_120C4D03:
    edx = MEM32(ebp + (-0x4)); /* 0x120C4D03: mov edx, dword ptr [ebp - 4] */
    /* cmp ecx, edx */ /* 0x120C4D06: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C4D19; /* 0x120C4D08: ja 0x120c4d19 */
L_120C4D0A:
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4D14; /* 0x120C4D0A: jne 0x120c4d14 */
L_120C4D0C:
    eax = MEM32(edi + 0x8); /* 0x120C4D0C: mov eax, dword ptr [edi + 8] */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x120C4D0F: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C4D19; /* 0x120C4D12: jae 0x120c4d19 */
L_120C4D14:
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C4D14: mov dword ptr [ebp - 4], ecx */
    ebx = edi; /* 0x120C4D17: mov ebx, edi */
L_120C4D19:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120C4D19: add esi, 4 */
    _flag_k = FK_ADD;
L_120C4D1C:
    eax = MEM32(esi); /* 0x120C4D1C: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x120C4D1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4CD2; /* 0x120C4D20: jne 0x120c4cd2 */
L_120C4D22:
    eax = MEM32(ebx); /* 0x120C4D22: mov eax, dword ptr [ebx] */
L_120C4D24:
    edi = POP32_VAL(esp); /* 0x120C4D24: pop edi */
    esi = POP32_VAL(esp); /* 0x120C4D25: pop esi */
    ebx = POP32_VAL(esp); /* 0x120C4D26: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4D27: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C4D28: ret 0xc */
L_120C4D2B:
    eax = MEM32(ecx); /* 0x120C4D2B: mov eax, dword ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_120C4D24; /* 0x120C4D2D: jmp 0x120c4d24 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120C4D34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4D34u);

L_120C4D34:
    edi = edi; /* 0x120C4D34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4D36: push ebp */
    ebp = esp; /* 0x120C4D37: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x164u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x164u; /* 0x120C4D39: sub esp, 0x164 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C4D3F: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C4D44: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C4D46: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x120C4D49: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x148))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x148)) = MEM32(ebp + (-0x148)) & 0; /* 0x120C4D4C: and dword ptr [ebp - 0x148], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C4D53: push ebx */
    PUSH32(esp, esi); /* 0x120C4D54: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C4D55: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120C4D58: push 1 */
    MEM32(ebp + (-0x154)) = eax; /* 0x120C4D5A: mov dword ptr [ebp - 0x154], eax */
    RECOMP_CALL(sub_12019381); /* 0x120C4D60: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C4D65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4DB5; /* 0x120C4D67: je 0x120c4db5 */
L_120C4D69:
    eax = MEM32(esi); /* 0x120C4D69: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x148); /* 0x120C4D6B: lea ecx, [ebp - 0x148] */
    PUSH32(esp, ecx); /* 0x120C4D71: push ecx */
    PUSH32(esp, esi); /* 0x120C4D72: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x120C4D73: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120C4D76: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x144); /* 0x120C4D78: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x120C4D7E: push ecx */
    PUSH32(esp, esi); /* 0x120C4D7F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x120C4D80: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120C4D83: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x120C4D85: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x120C4D88: push ecx */
    PUSH32(esp, 0); /* 0x120C4D89: push 0 */
    PUSH32(esp, esi); /* 0x120C4D8B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x120C4D8C: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x120C4D8F: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, 0x00100000u */ /* 0x120C4D92: test ebx, 0x100000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00100000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4DB8; /* 0x120C4D98: je 0x120c4db8 */
L_120C4D9A:
    eax = MEM32(esi); /* 0x120C4D9A: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x164); /* 0x120C4D9C: lea ecx, [ebp - 0x164] */
    PUSH32(esp, ecx); /* 0x120C4DA2: push ecx */
    PUSH32(esp, esi); /* 0x120C4DA3: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x120C4DA4: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x158)), 0x20u */ /* 0x120C4DA7: test byte ptr [ebp - 0x158], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x158))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4DB8; /* 0x120C4DAE: je 0x120c4db8 */
L_120C4DB0:
    _flag_a = (uint32_t)((ebx | 0x10u)); _flag_b = (uint32_t)((ebx | 0x10u));
    ebx = ebx | 0x10u; /* 0x120C4DB0: or ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C4DB8; /* 0x120C4DB3: jmp 0x120c4db8 */
L_120C4DB5:
    ebx = MEM32(ebp + 0xC); /* 0x120C4DB5: mov ebx, dword ptr [ebp + 0xc] */
L_120C4DB8:
    esi = MEM32(ebp + (-0x148)); /* 0x120C4DB8: mov esi, dword ptr [ebp - 0x148] */
    PUSH32(esp, edi); /* 0x120C4DBE: push edi */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x120C4DBF: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x12006BA0u; /* 0x120C4DC2: mov edi, 0x12006ba0 */
    eax = 0x12006B78u; /* 0x120C4DC7: mov eax, 0x12006b78 */
    MEM32(ebp + (-0x150)) = ecx; /* 0x120C4DCC: mov dword ptr [ebp - 0x150], ecx */
    MEM32(ebp + (-0x14C)) = eax; /* 0x120C4DD2: mov dword ptr [ebp - 0x14c], eax */
    /* cmp MEM32(0x121D6528), edi */ /* 0x120C4DD8: cmp dword ptr [0x121d6528], edi */
    _flag_a = (uint32_t)(MEM32(0x121D6528)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C4E75; /* 0x120C4DDE: jbe 0x120c4e75 */
L_120C4DE4:
    /* cmp MEM32(edi), 0 */ /* 0x120C4DE4: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4E5A; /* 0x120C4DE7: je 0x120c4e5a */
L_120C4DE9:
    /* test esi, esi */ /* 0x120C4DE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4E12; /* 0x120C4DEB: je 0x120c4e12 */
L_120C4DED:
    PUSH32(esp, MEM32(edi)); /* 0x120C4DED: push dword ptr [edi] */
    eax = MEM32(esi); /* 0x120C4DEF: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C4DF1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120C4DF4: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C4DF5: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x144))); /* 0x120C4DF8: push dword ptr [ebp - 0x144] */
    PUSH32(esp, MEM32(ebp + (-0x140))); /* 0x120C4DFE: push dword ptr [ebp - 0x140] */
    PUSH32(esp, esi); /* 0x120C4E04: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x120C4E05: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x120C4E08: mov esi, dword ptr [ebp - 0x148] */
    /* test eax, eax */ /* 0x120C4E0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C4E5A; /* 0x120C4E10: js 0x120c4e5a */
L_120C4E12:
    ecx = MEM32(ebp + (-0x154)); /* 0x120C4E12: mov ecx, dword ptr [ebp - 0x154] */
    eax = MEM32(ecx); /* 0x120C4E18: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edi) */ /* 0x120C4E1A: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4E71; /* 0x120C4E1C: je 0x120c4e71 */
L_120C4E1E:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x120C4E1E: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4E5A; /* 0x120C4E22: je 0x120c4e5a */
L_120C4E24:
    eax = edi; /* 0x120C4E24: mov eax, edi */
    edx = ecx; /* 0x120C4E26: mov edx, ecx */
    RECOMP_CALL(sub_120C4C35); /* 0x120C4E28: call 0x120c4c35 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120C4E2D: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x120C4E2F: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4E5A; /* 0x120C4E32: je 0x120c4e5a */
L_120C4E34:
    ecx = MEM32(ebp + (-0x150)); /* 0x120C4E34: mov ecx, dword ptr [ebp - 0x150] */
    /* cmp edx, ecx */ /* 0x120C4E3A: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C4E5A; /* 0x120C4E3C: ja 0x120c4e5a */
L_120C4E3E:
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4E4E; /* 0x120C4E3E: jne 0x120c4e4e */
L_120C4E40:
    eax = MEM32(edi + 0x8); /* 0x120C4E40: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(ebp + (-0x14C)); /* 0x120C4E43: mov ecx, dword ptr [ebp - 0x14c] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x120C4E49: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C4E5A; /* 0x120C4E4C: jae 0x120c4e5a */
L_120C4E4E:
    MEM32(ebp + (-0x150)) = edx; /* 0x120C4E4E: mov dword ptr [ebp - 0x150], edx */
    MEM32(ebp + (-0x14C)) = edi; /* 0x120C4E54: mov dword ptr [ebp - 0x14c], edi */
L_120C4E5A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x120C4E5A: add edi, 0x24 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(0x121D6528) */ /* 0x120C4E5D: cmp edi, dword ptr [0x121d6528] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x121D6528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C4DE4; /* 0x120C4E63: jb 0x120c4de4 */
L_120C4E69:
    ebx = MEM32(ebp + (-0x14C)); /* 0x120C4E69: mov ebx, dword ptr [ebp - 0x14c] */
    goto L_120C4E7A; /* 0x120C4E6F: jmp 0x120c4e7a */
L_120C4E71:
    ebx = edi; /* 0x120C4E71: mov ebx, edi */
    goto L_120C4E7A; /* 0x120C4E73: jmp 0x120c4e7a */
L_120C4E75:
    ebx = 0x12006B78u; /* 0x120C4E75: mov ebx, 0x12006b78 */
L_120C4E7A:
    edi = POP32_VAL(esp); /* 0x120C4E7A: pop edi */
    /* test esi, esi */ /* 0x120C4E7B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C4E8C; /* 0x120C4E7D: je 0x120c4e8c */
L_120C4E7F:
    ecx = MEM32(esi); /* 0x120C4E7F: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120C4E81: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C4E82: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x148))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x148)) = MEM32(ebp + (-0x148)) & 0; /* 0x120C4E85: and dword ptr [ebp - 0x148], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C4E8C:
    PUSH32(esp, 0); /* 0x120C4E8C: push 0 */
    RECOMP_CALL(sub_12019381); /* 0x120C4E8E: call 0x12019381 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120C4E93: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebx); /* 0x120C4E96: mov eax, dword ptr [ebx] */
    esi = POP32_VAL(esp); /* 0x120C4E98: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C4E99: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C4E9B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C4E9C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4EA1: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C4EA2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C4EAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4EAAu);

L_120C4EAA:
    edi = edi; /* 0x120C4EAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4EAC: push ebp */
    ebp = esp; /* 0x120C4EAD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120C4EAF: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x36314C41u */ /* 0x120C4EB2: cmp eax, 0x36314c41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36314C41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C4EC4; /* 0x120C4EB7: je 0x120c4ec4 */
L_120C4EB9:
    /* cmp eax, 0x36315220u */ /* 0x120C4EB9: cmp eax, 0x36315220 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36315220u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4EC7; /* 0x120C4EBE: jne 0x120c4ec7 */
L_120C4EC0:
    PUSH32(esp, 0x24u); /* 0x120C4EC0: push 0x24 */
    goto L_120C4EC6; /* 0x120C4EC2: jmp 0x120c4ec6 */
L_120C4EC4:
    PUSH32(esp, 0x33u); /* 0x120C4EC4: push 0x33 */
L_120C4EC6:
    eax = POP32_VAL(esp); /* 0x120C4EC6: pop eax */
L_120C4EC7:
    ebp = POP32_VAL(esp); /* 0x120C4EC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C4EC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C4ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4ED0u);

L_120C4ED0:
    edi = edi; /* 0x120C4ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4ED2: push ebp */
    ebp = esp; /* 0x120C4ED3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x120C4ED5: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C4ED8: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C4EDD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C4EDF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x120C4EE2: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120C4EE3: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120C4EE6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C4EE7: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x58); /* 0x120C4EEA: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7228); /* 0x120C4EED: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C4EF2: push 0 */
    PUSH32(esp, esi); /* 0x120C4EF4: push esi */
    PUSH32(esp, 0); /* 0x120C4EF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C4EF7: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x58); /* 0x120C4EFA: lea ecx, [ebp - 0x58] */
    PUSH32(esp, edi); /* 0x120C4EFD: push edi */
    RECOMP_CALL(sub_120DBF0D); /* 0x120C4EFE: call 0x120dbf0d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C4F03: mov esi, eax */
    /* test esi, esi */ /* 0x120C4F05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C4F0B; /* 0x120C4F07: js 0x120c4f0b */
L_120C4F09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C4F09: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C4F0B:
    ecx = ebp + (-0x58); /* 0x120C4F0B: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C4F0E: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120C4F13: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C4F16: pop edi */
    eax = esi; /* 0x120C4F17: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C4F19: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120C4F1B: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C4F1C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C4F21: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C4F22: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C4F2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C4F2Au);

L_120C4F2A:
    edi = edi; /* 0x120C4F2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C4F2C: push ebp */
    ebp = esp; /* 0x120C4F2D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x120C4F2F: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x120C4F35: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_120DC607); /* 0x120C4F38: call 0x120dc607 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x120C4F3D: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_120E04A2); /* 0x120C4F40: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120C4F45: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4F65; /* 0x120C4F49: jne 0x120c4f65 */
L_120C4F4B:
    ecx = ebp + (-0x20); /* 0x120C4F4B: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_120E0692); /* 0x120C4F4E: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x120C4F53: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_120DC616); /* 0x120C4F56: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C4F5B: mov eax, 0x8876086c */
    goto L_120C5041; /* 0x120C4F60: jmp 0x120c5041 */
L_120C4F65:
    PUSH32(esp, edi); /* 0x120C4F65: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120C4F66: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x120C4F69: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C4F87; /* 0x120C4F6B: jne 0x120c4f87 */
L_120C4F6D:
    ecx = ebp + (-0x20); /* 0x120C4F6D: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_120E0692); /* 0x120C4F70: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x120C4F75: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_120DC616); /* 0x120C4F78: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C4F7D: mov eax, 0x8876086c */
    goto L_120C5040; /* 0x120C4F82: jmp 0x120c5040 */
L_120C4F87:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x120C4F87: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C4F8B: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4F98; /* 0x120C4F8C: jne 0x120c4f98 */
L_120C4F8E:
    esi = 0x8876086Cu; /* 0x120C4F8E: mov esi, 0x8876086c */
    goto L_120C502D; /* 0x120C4F93: jmp 0x120c502d */
L_120C4F98:
    PUSH32(esp, ebx); /* 0x120C4F98: push ebx */
    ebx = MEM32(ebp + 0x28); /* 0x120C4F99: mov ebx, dword ptr [ebp + 0x28] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120C4F9C: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C4FA6; /* 0x120C4F9F: jne 0x120c4fa6 */
L_120C4FA1:
    ebx = 0x00080004u; /* 0x120C4FA1: mov ebx, 0x80004 */
L_120C4FA6:
    PUSH32(esp, 0); /* 0x120C4FA6: push 0 */
    PUSH32(esp, 0); /* 0x120C4FA8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C4FAA: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xC8); /* 0x120C4FAD: lea eax, [ebp - 0xc8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C4FB3: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x20); /* 0x120C4FB6: lea ecx, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C4FB9: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120C4FBC: push eax */
    RECOMP_CALL(sub_120E069C); /* 0x120C4FBD: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C4FC2: mov esi, eax */
    /* test esi, esi */ /* 0x120C4FC4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C502C; /* 0x120C4FC6: js 0x120c502c */
L_120C4FC8:
    eax = MEM32(ebp + 0x18); /* 0x120C4FC8: mov eax, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x24); /* 0x120C4FCB: mov esi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x70)) = eax; /* 0x120C4FCE: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120C4FD1: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C4FD4: mov dword ptr [ebp - 0x6c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C4FD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x120C4FD9: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x74)) = edi; /* 0x120C4FDC: mov dword ptr [ebp - 0x74], edi */
    edi = ebp + (-0x64); /* 0x120C4FDF: lea edi, [ebp - 0x64] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4FE2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4FE3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4FE4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C4FE5: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 6); /* 0x120C4FE6: push 6 */
    MEM32(ebp + (-0x54)) = eax; /* 0x120C4FE8: mov dword ptr [ebp - 0x54], eax */
    ecx = POP32_VAL(esp); /* 0x120C4FEB: pop ecx */
    MEM32(ebp + (-0x50)) = 1; /* 0x120C4FEC: mov dword ptr [ebp - 0x50], 1 */
    esi = ebp + (-0x64); /* 0x120C4FF3: lea esi, [ebp - 0x64] */
    edi = ebp + (-0x4C); /* 0x120C4FF6: lea edi, [ebp - 0x4c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C4FF9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x34)) = eax; /* 0x120C4FFB: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x80)); /* 0x120C4FFE: mov eax, dword ptr [ebp - 0x80] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x120C5001: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x2C); /* 0x120C5004: mov eax, dword ptr [ebp + 0x2c] */
    MEM32(ebp + (-0x28)) = eax; /* 0x120C5007: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x20); /* 0x120C500A: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x24)) = eax; /* 0x120C500D: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, ebx); /* 0x120C5010: push ebx */
    eax = ebp + (-0x74); /* 0x120C5011: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x120C5014: push eax */
    eax = ebp + (-0xC8); /* 0x120C5015: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x120C501B: push eax */
    ecx = ebp + (-0xC); /* 0x120C501C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_120E036B); /* 0x120C501F: call 0x120e036b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5024: mov esi, eax */
    /* test esi, esi */ /* 0x120C5026: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C502C; /* 0x120C5028: js 0x120c502c */
L_120C502A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C502A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C502C:
    ebx = POP32_VAL(esp); /* 0x120C502C: pop ebx */
L_120C502D:
    ecx = ebp + (-0x20); /* 0x120C502D: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5030: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x120C5035: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_120DC616); /* 0x120C5038: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C503D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C503F: pop esi */
L_120C5040:
    edi = POP32_VAL(esp); /* 0x120C5040: pop edi */
L_120C5041:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C5041: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120C5042: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120C504A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C504Au);

L_120C504A:
    edi = edi; /* 0x120C504A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C504C: push ebp */
    ebp = esp; /* 0x120C504D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE4u; /* 0x120C504F: sub esp, 0xe4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C5055: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C505A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C505C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C505F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C5062: push esi */
    esi = ecx; /* 0x120C5063: mov esi, ecx */
    ecx = ebp + (-0x78); /* 0x120C5065: lea ecx, [ebp - 0x78] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x120C5068: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C506B: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x90); /* 0x120C5070: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E04A2); /* 0x120C5076: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C507B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C509C; /* 0x120C507D: jne 0x120c509c */
L_120C507F:
    ecx = ebp + (-0x90); /* 0x120C507F: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5085: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x120C508A: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_120D7246); /* 0x120C508D: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5092: mov eax, 0x8876086c */
    goto L_120C5145; /* 0x120C5097: jmp 0x120c5145 */
L_120C509C:
    /* test edi, edi */ /* 0x120C509C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C50AA; /* 0x120C509E: jne 0x120c50aa */
L_120C50A0:
    esi = 0x8876086Cu; /* 0x120C50A0: mov esi, 0x8876086c */
    goto L_120C5130; /* 0x120C50A5: jmp 0x120c5130 */
L_120C50AA:
    PUSH32(esp, 1); /* 0x120C50AA: push 1 */
    PUSH32(esp, 0); /* 0x120C50AC: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x120C50AE: push dword ptr [ebp - 0x7c] */
    eax = ebp + (-0xE4); /* 0x120C50B1: lea eax, [ebp - 0xe4] */
    PUSH32(esp, esi); /* 0x120C50B7: push esi */
    PUSH32(esp, edi); /* 0x120C50B8: push edi */
    PUSH32(esp, eax); /* 0x120C50B9: push eax */
    ecx = ebp + (-0x90); /* 0x120C50BA: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E069C); /* 0x120C50C0: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C50C5: mov esi, eax */
    /* test esi, esi */ /* 0x120C50C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5130; /* 0x120C50C9: js 0x120c5130 */
L_120C50CB:
    eax = ebp + (-0xE4); /* 0x120C50CB: lea eax, [ebp - 0xe4] */
    PUSH32(esp, eax); /* 0x120C50D1: push eax */
    ecx = ebp + (-0x78); /* 0x120C50D2: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_120D72A8); /* 0x120C50D5: call 0x120d72a8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C50DA: mov esi, eax */
    /* test esi, esi */ /* 0x120C50DC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5130; /* 0x120C50DE: js 0x120c5130 */
L_120C50E0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C50E0: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x78); /* 0x120C50E3: lea ecx, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C50E6: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120C50E9: push ebx */
    RECOMP_CALL(sub_120DC1F2); /* 0x120C50EA: call 0x120dc1f2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C50EF: mov esi, eax */
    /* test esi, esi */ /* 0x120C50F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5130; /* 0x120C50F3: js 0x120c5130 */
L_120C50F5:
    eax = MEM32(edi); /* 0x120C50F5: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x24); /* 0x120C50F7: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120C50FA: push ecx */
    PUSH32(esp, edi); /* 0x120C50FB: push edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x120C50FC: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x120C50FF: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C512E; /* 0x120C5103: jne 0x120c512e */
L_120C5105:
    eax = MEM32(edi); /* 0x120C5105: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x7C); /* 0x120C5107: lea ecx, [ebp - 0x7c] */
    PUSH32(esp, ecx); /* 0x120C510A: push ecx */
    PUSH32(esp, edi); /* 0x120C510B: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C510C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x120C510F: mov eax, dword ptr [ebp - 0x7c] */
    ecx = MEM32(eax); /* 0x120C5112: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C5114: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C5115: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x7C)); /* 0x120C5118: mov ecx, dword ptr [ebp - 0x7c] */
    edx = MEM32(ecx); /* 0x120C511B: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C511D: push ecx */
    esi = eax; /* 0x120C511E: mov esi, eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120C5120: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C5123: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C512E; /* 0x120C5125: je 0x120c512e */
L_120C5127:
    esi = 0x88760868u; /* 0x120C5127: mov esi, 0x88760868 */
    goto L_120C5130; /* 0x120C512C: jmp 0x120c5130 */
L_120C512E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C512E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5130:
    ecx = ebp + (-0x90); /* 0x120C5130: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5136: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x120C513B: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_120D7246); /* 0x120C513E: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C5143: mov eax, esi */
L_120C5145:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C5145: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C5148: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120C514A: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C514B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C5150: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C5151: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C5159(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5159u);

L_120C5159:
    edi = edi; /* 0x120C5159: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C515B: push ebp */
    ebp = esp; /* 0x120C515C: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C515E: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C5161: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C5162: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C5165: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C5166: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x120C5169: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C516B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C516E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C504A); /* 0x120C5171: call 0x120c504a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C5176: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C5177: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C5178: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C5179: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C5181(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5181u);

L_120C5181:
    edi = edi; /* 0x120C5181: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5183: push ebp */
    ebp = esp; /* 0x120C5184: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C5186: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C5189: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C518A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C518D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C518E: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x120C5191: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C5193: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C5196: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C504A); /* 0x120C5199: call 0x120c504a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C519E: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C519F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C51A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C51A1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C51A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C51A9u);

L_120C51A9:
    edi = edi; /* 0x120C51A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C51AB: push ebp */
    ebp = esp; /* 0x120C51AC: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C51AE: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C51B1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C51B2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C51B5: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C51B6: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x120C51B9: push 2 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C51BB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C51BE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C504A); /* 0x120C51C1: call 0x120c504a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C51C6: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C51C7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C51C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C51C9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C51D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C51D1u);

L_120C51D1:
    edi = edi; /* 0x120C51D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C51D3: push ebp */
    ebp = esp; /* 0x120C51D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x120C51D6: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x120C51DC: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_120DC607); /* 0x120C51DF: call 0x120dc607 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x4); /* 0x120C51E4: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E065E); /* 0x120C51E7: call 0x120e065e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120C51EC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C520C; /* 0x120C51F0: jne 0x120c520c */
L_120C51F2:
    ecx = ebp + (-0x4); /* 0x120C51F2: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C51F5: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x120C51FA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_120DC616); /* 0x120C51FD: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5202: mov eax, 0x8876086c */
    goto L_120C52DD; /* 0x120C5207: jmp 0x120c52dd */
L_120C520C:
    PUSH32(esp, edi); /* 0x120C520C: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120C520D: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x120C5210: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C522E; /* 0x120C5212: jne 0x120c522e */
L_120C5214:
    ecx = ebp + (-0x4); /* 0x120C5214: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C5217: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x120C521C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_120DC616); /* 0x120C521F: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5224: mov eax, 0x8876086c */
    goto L_120C52DC; /* 0x120C5229: jmp 0x120c52dc */
L_120C522E:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x120C522E: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C5232: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C523F; /* 0x120C5233: jne 0x120c523f */
L_120C5235:
    esi = 0x8876086Cu; /* 0x120C5235: mov esi, 0x8876086c */
    goto L_120C52C9; /* 0x120C523A: jmp 0x120c52c9 */
L_120C523F:
    PUSH32(esp, ebx); /* 0x120C523F: push ebx */
    ebx = MEM32(ebp + 0x2C); /* 0x120C5240: mov ebx, dword ptr [ebp + 0x2c] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120C5243: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C524D; /* 0x120C5246: jne 0x120c524d */
L_120C5248:
    ebx = 0x00080004u; /* 0x120C5248: mov ebx, 0x80004 */
L_120C524D:
    PUSH32(esp, 0); /* 0x120C524D: push 0 */
    PUSH32(esp, 0); /* 0x120C524F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5251: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xB8); /* 0x120C5254: lea eax, [ebp - 0xb8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C525A: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x4); /* 0x120C525D: lea ecx, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C5260: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120C5263: push eax */
    RECOMP_CALL(sub_120E0C9D); /* 0x120C5264: call 0x120e0c9d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5269: mov esi, eax */
    /* test esi, esi */ /* 0x120C526B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C52C8; /* 0x120C526D: js 0x120c52c8 */
L_120C526F:
    eax = MEM32(ebp + 0x18); /* 0x120C526F: mov eax, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x28); /* 0x120C5272: mov esi, dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x60)) = eax; /* 0x120C5275: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120C5278: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C527B: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x20); /* 0x120C527E: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, 6); /* 0x120C5281: push 6 */
    ecx = POP32_VAL(esp); /* 0x120C5283: pop ecx */
    MEM32(ebp + (-0x58)) = eax; /* 0x120C5284: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x120C5287: mov eax, dword ptr [ebp - 0x70] */
    MEM32(ebp + (-0x64)) = edi; /* 0x120C528A: mov dword ptr [ebp - 0x64], edi */
    PUSH32(esp, 6); /* 0x120C528D: push 6 */
    edi = ebp + (-0x54); /* 0x120C528F: lea edi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C5292: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x28); /* 0x120C5294: mov esi, dword ptr [ebp + 0x28] */
    ecx = POP32_VAL(esp); /* 0x120C5297: pop ecx */
    edi = ebp + (-0x3C); /* 0x120C5298: lea edi, [ebp - 0x3c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C529B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120C529D: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x30); /* 0x120C52A0: mov eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120C52A3: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x24); /* 0x120C52A6: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120C52A9: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x120C52AC: push ebx */
    eax = ebp + (-0x64); /* 0x120C52AD: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x120C52B0: push eax */
    eax = ebp + (-0xB8); /* 0x120C52B1: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x120C52B7: push eax */
    ecx = ebp + (-0x10); /* 0x120C52B8: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_120E036B); /* 0x120C52BB: call 0x120e036b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C52C0: mov esi, eax */
    /* test esi, esi */ /* 0x120C52C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C52C8; /* 0x120C52C4: js 0x120c52c8 */
L_120C52C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C52C6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C52C8:
    ebx = POP32_VAL(esp); /* 0x120C52C8: pop ebx */
L_120C52C9:
    ecx = ebp + (-0x4); /* 0x120C52C9: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C52CC: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x120C52D1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_120DC616); /* 0x120C52D4: call 0x120dc616 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C52D9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C52DB: pop esi */
L_120C52DC:
    edi = POP32_VAL(esp); /* 0x120C52DC: pop edi */
L_120C52DD:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C52DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x120C52DE: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_120C52E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C52E6u);

L_120C52E6:
    edi = edi; /* 0x120C52E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C52E8: push ebp */
    ebp = esp; /* 0x120C52E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD0u; /* 0x120C52EB: sub esp, 0xd0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C52F1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C52F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C52F8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C52FB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C52FE: push esi */
    esi = ecx; /* 0x120C52FF: mov esi, ecx */
    ecx = ebp + (-0x74); /* 0x120C5301: lea ecx, [ebp - 0x74] */
    MEM32(ebp + (-0x78)) = eax; /* 0x120C5304: mov dword ptr [ebp - 0x78], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C5307: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x7C); /* 0x120C530C: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_120E065E); /* 0x120C530F: call 0x120e065e */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C5314: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5332; /* 0x120C5316: jne 0x120c5332 */
L_120C5318:
    ecx = ebp + (-0x7C); /* 0x120C5318: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C531B: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x120C5320: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_120D7246); /* 0x120C5323: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5328: mov eax, 0x8876086c */
    goto L_120C53D5; /* 0x120C532D: jmp 0x120c53d5 */
L_120C5332:
    /* test edi, edi */ /* 0x120C5332: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5340; /* 0x120C5334: jne 0x120c5340 */
L_120C5336:
    esi = 0x8876086Cu; /* 0x120C5336: mov esi, 0x8876086c */
    goto L_120C53C3; /* 0x120C533B: jmp 0x120c53c3 */
L_120C5340:
    PUSH32(esp, 1); /* 0x120C5340: push 1 */
    PUSH32(esp, 0); /* 0x120C5342: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x120C5344: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0xD0); /* 0x120C5347: lea eax, [ebp - 0xd0] */
    PUSH32(esp, esi); /* 0x120C534D: push esi */
    PUSH32(esp, edi); /* 0x120C534E: push edi */
    PUSH32(esp, eax); /* 0x120C534F: push eax */
    ecx = ebp + (-0x7C); /* 0x120C5350: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_120E0C9D); /* 0x120C5353: call 0x120e0c9d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5358: mov esi, eax */
    /* test esi, esi */ /* 0x120C535A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C53C3; /* 0x120C535C: js 0x120c53c3 */
L_120C535E:
    eax = ebp + (-0xD0); /* 0x120C535E: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x120C5364: push eax */
    ecx = ebp + (-0x74); /* 0x120C5365: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_120D72A8); /* 0x120C5368: call 0x120d72a8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C536D: mov esi, eax */
    /* test esi, esi */ /* 0x120C536F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C53C3; /* 0x120C5371: js 0x120c53c3 */
L_120C5373:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5373: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x74); /* 0x120C5376: lea ecx, [ebp - 0x74] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C5379: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120C537C: push ebx */
    RECOMP_CALL(sub_120DC1F2); /* 0x120C537D: call 0x120dc1f2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5382: mov esi, eax */
    /* test esi, esi */ /* 0x120C5384: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C53C3; /* 0x120C5386: js 0x120c53c3 */
L_120C5388:
    eax = MEM32(edi); /* 0x120C5388: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x20); /* 0x120C538A: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x120C538D: push ecx */
    PUSH32(esp, edi); /* 0x120C538E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x120C538F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x120C5392: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C53C1; /* 0x120C5396: jne 0x120c53c1 */
L_120C5398:
    eax = MEM32(edi); /* 0x120C5398: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x78); /* 0x120C539A: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x120C539D: push ecx */
    PUSH32(esp, edi); /* 0x120C539E: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C539F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x78)); /* 0x120C53A2: mov eax, dword ptr [ebp - 0x78] */
    ecx = MEM32(eax); /* 0x120C53A5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C53A7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C53A8: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x78)); /* 0x120C53AB: mov ecx, dword ptr [ebp - 0x78] */
    edx = MEM32(ecx); /* 0x120C53AE: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C53B0: push ecx */
    esi = eax; /* 0x120C53B1: mov esi, eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120C53B3: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C53B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C53C1; /* 0x120C53B8: je 0x120c53c1 */
L_120C53BA:
    esi = 0x88760868u; /* 0x120C53BA: mov esi, 0x88760868 */
    goto L_120C53C3; /* 0x120C53BF: jmp 0x120c53c3 */
L_120C53C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C53C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C53C3:
    ecx = ebp + (-0x7C); /* 0x120C53C3: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C53C6: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x120C53CB: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_120D7246); /* 0x120C53CE: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C53D3: mov eax, esi */
L_120C53D5:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C53D5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C53D8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120C53DA: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C53DB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C53E0: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C53E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C53E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C53E9u);

L_120C53E9:
    edi = edi; /* 0x120C53E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C53EB: push ebp */
    ebp = esp; /* 0x120C53EC: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C53EE: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C53F1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C53F2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C53F5: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C53F6: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x120C53F9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C53FB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C53FE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C52E6); /* 0x120C5401: call 0x120c52e6 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C5406: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C5407: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C5408: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C5409: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C5411(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5411u);

L_120C5411:
    edi = edi; /* 0x120C5411: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5413: push ebp */
    ebp = esp; /* 0x120C5414: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C5416: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C5419: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C541A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C541D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C541E: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x120C5421: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C5423: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C5426: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C52E6); /* 0x120C5429: call 0x120c52e6 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C542E: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C542F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C5430: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C5431: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C5439(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5439u);

L_120C5439:
    edi = edi; /* 0x120C5439: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C543B: push ebp */
    ebp = esp; /* 0x120C543C: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x120C543E: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C5441: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C5442: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120C5445: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120C5446: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x120C5449: push 2 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C544B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C544E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C52E6); /* 0x120C5451: call 0x120c52e6 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C5456: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C5457: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120C5458: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120C5459: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120C5461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5461u);

L_120C5461:
    edi = edi; /* 0x120C5461: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5463: push ebp */
    ebp = esp; /* 0x120C5464: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x120C5466: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C546C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C5471: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C5473: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120C5476: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14C)) = eax; /* 0x120C5479: mov dword ptr [ebp - 0x14c], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C547F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C5482: push esi */
    PUSH32(esp, edi); /* 0x120C5483: push edi */
    edi = MEM32(ebp + 0x18); /* 0x120C5484: mov edi, dword ptr [ebp + 0x18] */
    esi = ecx; /* 0x120C5487: mov esi, ecx */
    MEM32(ebp + (-0x144)) = eax; /* 0x120C5489: mov dword ptr [ebp - 0x144], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C548F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x150)) = edx; /* 0x120C5492: mov dword ptr [ebp - 0x150], edx */
    MEM32(ebp + (-0x148)) = eax; /* 0x120C5498: mov dword ptr [ebp - 0x148], eax */
    MEM32(ebp + (-0x158)) = edi; /* 0x120C549E: mov dword ptr [ebp - 0x158], edi */
    /* test esi, esi */ /* 0x120C54A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C54B2; /* 0x120C54A6: jne 0x120c54b2 */
L_120C54A8:
    eax = 0x8876086Cu; /* 0x120C54A8: mov eax, 0x8876086c */
    goto L_120C5865; /* 0x120C54AD: jmp 0x120c5865 */
L_120C54B2:
    PUSH32(esp, ebx); /* 0x120C54B2: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120C54B3: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120C54B6: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C54C0; /* 0x120C54B9: jne 0x120c54c0 */
L_120C54BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C54BB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ebx; /* 0x120C54BD: mov dword ptr [ebp + 0x14], ebx */
L_120C54C0:
    /* test ebx, 0xEF6001ECu */ /* 0x120C54C0: test ebx, 0xef6001ec */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEF6001ECu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5507; /* 0x120C54C6: jne 0x120c5507 */
L_120C54C8:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x120C54C8: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C54E0; /* 0x120C54CC: je 0x120c54e0 */
L_120C54CE:
    /* cmp MEM32(ebp + 0x1C), 1 */ /* 0x120C54CE: cmp dword ptr [ebp + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C54E6; /* 0x120C54D2: je 0x120c54e6 */
L_120C54D4:
    /* cmp MEM32(ebp + 0x1C), 2 */ /* 0x120C54D4: cmp dword ptr [ebp + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C54E0; /* 0x120C54D8: je 0x120c54e0 */
L_120C54DA:
    /* cmp MEM32(ebp + 0x1C), 3 */ /* 0x120C54DA: cmp dword ptr [ebp + 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5507; /* 0x120C54DE: jne 0x120c5507 */
L_120C54E0:
    /* cmp MEM32(ebp + 0x1C), 1 */ /* 0x120C54E0: cmp dword ptr [ebp + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5511; /* 0x120C54E4: jne 0x120c5511 */
L_120C54E6:
    eax = MEM32(esi); /* 0x120C54E6: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x154); /* 0x120C54E8: lea ecx, [ebp - 0x154] */
    PUSH32(esp, ecx); /* 0x120C54EE: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C54EF: push 0x12001a88 */
    PUSH32(esp, esi); /* 0x120C54F4: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C54F5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C54F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5511; /* 0x120C54F9: js 0x120c5511 */
L_120C54FB:
    eax = MEM32(ebp + (-0x154)); /* 0x120C54FB: mov eax, dword ptr [ebp - 0x154] */
    ecx = MEM32(eax); /* 0x120C5501: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C5503: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C5504: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120C5507:
    eax = 0x8876086Cu; /* 0x120C5507: mov eax, 0x8876086c */
    goto L_120C5864; /* 0x120C550C: jmp 0x120c5864 */
L_120C5511:
    /* test edi, edi */ /* 0x120C5511: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5519; /* 0x120C5513: je 0x120c5519 */
L_120C5515:
    eax = MEM32(edi); /* 0x120C5515: mov eax, dword ptr [edi] */
    goto L_120C551B; /* 0x120C5517: jmp 0x120c551b */
L_120C5519:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5519: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C551B:
    /* cmp MEM32(ebp + 0x1C), 3 */ /* 0x120C551B: cmp dword ptr [ebp + 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x13C)) = eax; /* 0x120C551F: mov dword ptr [ebp - 0x13c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C554C; /* 0x120C5525: je 0x120c554c */
L_120C5527:
    PUSH32(esp, eax); /* 0x120C5527: push eax */
    RECOMP_CALL(sub_120C4C05); /* 0x120C5528: call 0x120c4c05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120C552D: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C552E: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x120C5531: push ebx */
    PUSH32(esp, esi); /* 0x120C5532: push esi */
    RECOMP_CALL(sub_120C4D34); /* 0x120C5533: call 0x120c4d34 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x13C)) = eax; /* 0x120C5538: mov dword ptr [ebp - 0x13c], eax */
    /* test eax, eax */ /* 0x120C553E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C555A; /* 0x120C5540: jne 0x120c555a */
L_120C5542:
    eax = 0x8876086Au; /* 0x120C5542: mov eax, 0x8876086a */
    goto L_120C5864; /* 0x120C5547: jmp 0x120c5864 */
L_120C554C:
    /* test eax, eax */ /* 0x120C554C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C555A; /* 0x120C554E: jne 0x120c555a */
L_120C5550:
    MEM32(ebp + (-0x13C)) = 0x15u; /* 0x120C5550: mov dword ptr [ebp - 0x13c], 0x15 */
L_120C555A:
    eax = MEM32(ebp + (-0x14C)); /* 0x120C555A: mov eax, dword ptr [ebp - 0x14c] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x120C5560: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120C5563: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C556B; /* 0x120C5565: je 0x120c556b */
L_120C5567:
    ebx = MEM32(eax); /* 0x120C5567: mov ebx, dword ptr [eax] */
    goto L_120C556D; /* 0x120C5569: jmp 0x120c556d */
L_120C556B:
    ebx = edx; /* 0x120C556B: mov ebx, edx */
L_120C556D:
    eax = MEM32(ebp + (-0x144)); /* 0x120C556D: mov eax, dword ptr [ebp - 0x144] */
    /* test eax, eax */ /* 0x120C5573: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C557B; /* 0x120C5575: je 0x120c557b */
L_120C5577:
    edi = MEM32(eax); /* 0x120C5577: mov edi, dword ptr [eax] */
    goto L_120C557D; /* 0x120C5579: jmp 0x120c557d */
L_120C557B:
    edi = edx; /* 0x120C557B: mov edi, edx */
L_120C557D:
    eax = MEM32(ebp + (-0x150)); /* 0x120C557D: mov eax, dword ptr [ebp - 0x150] */
    /* test eax, eax */ /* 0x120C5583: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5591; /* 0x120C5585: je 0x120c5591 */
L_120C5587:
    eax = MEM32(eax); /* 0x120C5587: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x138)) = eax; /* 0x120C5589: mov dword ptr [ebp - 0x138], eax */
    goto L_120C5599; /* 0x120C558F: jmp 0x120c5599 */
L_120C5591:
    eax = edx; /* 0x120C5591: mov eax, edx */
    MEM32(ebp + (-0x138)) = edx; /* 0x120C5593: mov dword ptr [ebp - 0x138], edx */
L_120C5599:
    ecx = MEM32(ebp + (-0x148)); /* 0x120C5599: mov ecx, dword ptr [ebp - 0x148] */
    /* test ecx, ecx */ /* 0x120C559F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C55AD; /* 0x120C55A1: je 0x120c55ad */
L_120C55A3:
    ecx = MEM32(ecx); /* 0x120C55A3: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x140)) = ecx; /* 0x120C55A5: mov dword ptr [ebp - 0x140], ecx */
    goto L_120C55B3; /* 0x120C55AB: jmp 0x120c55b3 */
L_120C55AD:
    MEM32(ebp + (-0x140)) = edx; /* 0x120C55AD: mov dword ptr [ebp - 0x140], edx */
L_120C55B3:
    ecx = 0x100u; /* 0x120C55B3: mov ecx, 0x100 */
    /* cmp ebx, edx */ /* 0x120C55B8: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C55CA; /* 0x120C55BA: jne 0x120c55ca */
L_120C55BC:
    /* cmp edi, edx */ /* 0x120C55BC: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C55C6; /* 0x120C55BE: jne 0x120c55c6 */
L_120C55C0:
    edi = ecx; /* 0x120C55C0: mov edi, ecx */
    ebx = ecx; /* 0x120C55C2: mov ebx, ecx */
    goto L_120C55DA; /* 0x120C55C4: jmp 0x120c55da */
L_120C55C6:
    ebx = edi; /* 0x120C55C6: mov ebx, edi */
    goto L_120C55D0; /* 0x120C55C8: jmp 0x120c55d0 */
L_120C55CA:
    /* cmp edi, edx */ /* 0x120C55CA: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C55D0; /* 0x120C55CC: jne 0x120c55d0 */
L_120C55CE:
    edi = ebx; /* 0x120C55CE: mov edi, ebx */
L_120C55D0:
    /* test ebx, ebx */ /* 0x120C55D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C55D5; /* 0x120C55D2: jne 0x120c55d5 */
L_120C55D4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C55D4: inc ebx */
    _flag_k = FK_INC;
L_120C55D5:
    /* test edi, edi */ /* 0x120C55D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C55DA; /* 0x120C55D7: jne 0x120c55da */
L_120C55D9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C55D9: inc edi */
    _flag_k = FK_INC;
L_120C55DA:
    /* cmp MEM32(ebp + 0x20), 5 */ /* 0x120C55DA: cmp dword ptr [ebp + 0x20], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C55E8; /* 0x120C55DE: jne 0x120c55e8 */
L_120C55E0:
    /* cmp ebx, edi */ /* 0x120C55E0: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C55E6; /* 0x120C55E2: jbe 0x120c55e6 */
L_120C55E4:
    edi = ebx; /* 0x120C55E4: mov edi, ebx */
L_120C55E6:
    ebx = edi; /* 0x120C55E6: mov ebx, edi */
L_120C55E8:
    /* cmp eax, edx */ /* 0x120C55E8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C55F0; /* 0x120C55EA: je 0x120c55f0 */
L_120C55EC:
    /* test eax, eax */ /* 0x120C55EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C55FA; /* 0x120C55EE: jne 0x120c55fa */
L_120C55F0:
    MEM32(ebp + (-0x138)) = 1; /* 0x120C55F0: mov dword ptr [ebp - 0x138], 1 */
L_120C55FA:
    /* cmp MEM32(ebp + 0x1C), 3 */ /* 0x120C55FA: cmp dword ptr [ebp + 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C5728; /* 0x120C55FE: je 0x120c5728 */
L_120C5604:
    eax = MEM32(esi); /* 0x120C5604: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x134); /* 0x120C5606: lea ecx, [ebp - 0x134] */
    PUSH32(esp, ecx); /* 0x120C560C: push ecx */
    PUSH32(esp, esi); /* 0x120C560D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x120C560E: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x120C5611: mov esi, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + (-0xF8)); /* 0x120C5614: mov edx, dword ptr [ebp - 0xf8] */
    /* cmp esi, 4 */ /* 0x120C561A: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C563B; /* 0x120C561D: jne 0x120c563b */
L_120C561F:
    eax = MEM32(ebp + (-0xD4)); /* 0x120C561F: mov eax, dword ptr [ebp - 0xd4] */
    /* cmp MEM32(ebp + (-0x138)), eax */ /* 0x120C5625: cmp dword ptr [ebp - 0x138], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x138))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5633; /* 0x120C562B: jbe 0x120c5633 */
L_120C562D:
    MEM32(ebp + (-0x138)) = eax; /* 0x120C562D: mov dword ptr [ebp - 0x138], eax */
L_120C5633:
    /* cmp ebx, eax */ /* 0x120C5633: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C567E; /* 0x120C5635: jbe 0x120c567e */
L_120C5637:
    ebx = eax; /* 0x120C5637: mov ebx, eax */
    goto L_120C567E; /* 0x120C5639: jmp 0x120c567e */
L_120C563B:
    /* cmp ebx, MEM32(ebp + (-0xDC)) */ /* 0x120C563B: cmp ebx, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xDC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5649; /* 0x120C5641: jbe 0x120c5649 */
L_120C5643:
    ebx = MEM32(ebp + (-0xDC)); /* 0x120C5643: mov ebx, dword ptr [ebp - 0xdc] */
L_120C5649:
    /* cmp edi, MEM32(ebp + (-0xD8)) */ /* 0x120C5649: cmp edi, dword ptr [ebp - 0xd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xD8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5657; /* 0x120C564F: jbe 0x120c5657 */
L_120C5651:
    edi = MEM32(ebp + (-0xD8)); /* 0x120C5651: mov edi, dword ptr [ebp - 0xd8] */
L_120C5657:
    /* cmp esi, 3 */ /* 0x120C5657: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5684; /* 0x120C565A: jne 0x120c5684 */
L_120C565C:
    /* test LO8(edx), 0x20u */ /* 0x120C565C: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5666; /* 0x120C565F: je 0x120c5666 */
L_120C5661:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5661: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C5663: inc eax */
    _flag_k = FK_INC;
    goto L_120C566C; /* 0x120C5664: jmp 0x120c566c */
L_120C5666:
    eax = MEM32(ebp + (-0xCC)); /* 0x120C5666: mov eax, dword ptr [ebp - 0xcc] */
L_120C566C:
    /* test eax, eax */ /* 0x120C566C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5684; /* 0x120C566E: je 0x120c5684 */
L_120C5670:
    ecx = eax; /* 0x120C5670: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x120C5672: imul ecx, edi */
    /* cmp ebx, ecx */ /* 0x120C5675: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C567B; /* 0x120C5677: jbe 0x120c567b */
L_120C5679:
    ebx = ecx; /* 0x120C5679: mov ebx, ecx */
L_120C567B:
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x120C567B: imul eax, ebx */
L_120C567E:
    /* cmp edi, eax */ /* 0x120C567E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5684; /* 0x120C5680: jbe 0x120c5684 */
L_120C5682:
    edi = eax; /* 0x120C5682: mov edi, eax */
L_120C5684:
    eax = esi; /* 0x120C5684: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C5686: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C5688: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C56A1; /* 0x120C568B: je 0x120c56a1 */
L_120C568D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C568D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C569A; /* 0x120C568E: je 0x120c569a */
L_120C5690:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C5690: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C56A4; /* 0x120C5691: jne 0x120c56a4 */
L_120C5693:
    ecx = 0x00020000u; /* 0x120C5693: mov ecx, 0x20000 */
    goto L_120C56A4; /* 0x120C5698: jmp 0x120c56a4 */
L_120C569A:
    ecx = 0x00040000u; /* 0x120C569A: mov ecx, 0x40000 */
    goto L_120C56A4; /* 0x120C569F: jmp 0x120c56a4 */
L_120C56A1:
    PUSH32(esp, 2); /* 0x120C56A1: push 2 */
    ecx = POP32_VAL(esp); /* 0x120C56A3: pop ecx */
L_120C56A4:
    /* cmp MEM32(ebp + (-0x140)), 1 */ /* 0x120C56A4: cmp dword ptr [ebp - 0x140], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x140))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56AB: jne 0x120c56e5 */
L_120C56AD:
    /* test edx, 0x100u */ /* 0x120C56AD: test edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56B3: je 0x120c56e5 */
L_120C56B5:
    /* cmp esi, 3 */ /* 0x120C56B5: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56B8: jne 0x120c56e5 */
L_120C56BA:
    eax = MEM32(ebp + (-0x13C)); /* 0x120C56BA: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp eax, 0x31545844u */ /* 0x120C56C0: cmp eax, 0x31545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56C5: je 0x120c56e5 */
L_120C56C7:
    /* cmp eax, 0x32545844u */ /* 0x120C56C7: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56CC: je 0x120c56e5 */
L_120C56CE:
    /* cmp eax, 0x33545844u */ /* 0x120C56CE: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56D3: je 0x120c56e5 */
L_120C56D5:
    /* cmp eax, 0x34545844u */ /* 0x120C56D5: cmp eax, 0x34545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56DA: je 0x120c56e5 */
L_120C56DC:
    /* cmp eax, 0x35545844u */ /* 0x120C56DC: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C56E5; /* 0x120C56E1: je 0x120c56e5 */
L_120C56E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C56E3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C56E5:
    /* test edx, ecx */ /* 0x120C56E5: test edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C572E; /* 0x120C56E7: je 0x120c572e */
L_120C56E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C56E9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x120C56EB: mov eax, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C56ED: inc esi */
    _flag_k = FK_INC;
    ebx = esi; /* 0x120C56EE: mov ebx, esi */
    /* cmp eax, esi */ /* 0x120C56F0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C56FA; /* 0x120C56F2: jbe 0x120c56fa */
L_120C56F4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x120C56F4: add ebx, ebx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x120C56F6: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C56F4; /* 0x120C56F8: jb 0x120c56f4 */
L_120C56FA:
    eax = edi; /* 0x120C56FA: mov eax, edi */
    edi = esi; /* 0x120C56FC: mov edi, esi */
    /* cmp eax, esi */ /* 0x120C56FE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5708; /* 0x120C5700: jbe 0x120c5708 */
L_120C5702:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x120C5702: add edi, edi */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x120C5704: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C5702; /* 0x120C5706: jb 0x120c5702 */
L_120C5708:
    eax = MEM32(ebp + (-0x138)); /* 0x120C5708: mov eax, dword ptr [ebp - 0x138] */
    ecx = esi; /* 0x120C570E: mov ecx, esi */
    MEM32(ebp + (-0x138)) = ecx; /* 0x120C5710: mov dword ptr [ebp - 0x138], ecx */
    /* cmp eax, esi */ /* 0x120C5716: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C572E; /* 0x120C5718: jbe 0x120c572e */
L_120C571A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x120C571A: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x120C571C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C571A; /* 0x120C571E: jb 0x120c571a */
L_120C5720:
    MEM32(ebp + (-0x138)) = ecx; /* 0x120C5720: mov dword ptr [ebp - 0x138], ecx */
    goto L_120C572E; /* 0x120C5726: jmp 0x120c572e */
L_120C5728:
    edx = MEM32(ebp + (-0xF8)); /* 0x120C5728: mov edx, dword ptr [ebp - 0xf8] */
L_120C572E:
    esi = MEM32(ebp + (-0x13C)); /* 0x120C572E: mov esi, dword ptr [ebp - 0x13c] */
    /* cmp esi, 0x31545844u */ /* 0x120C5734: cmp esi, 0x31545844 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C575C; /* 0x120C573A: je 0x120c575c */
L_120C573C:
    /* cmp esi, 0x32545844u */ /* 0x120C573C: cmp esi, 0x32545844 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C575C; /* 0x120C5742: je 0x120c575c */
L_120C5744:
    /* cmp esi, 0x33545844u */ /* 0x120C5744: cmp esi, 0x33545844 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C575C; /* 0x120C574A: je 0x120c575c */
L_120C574C:
    /* cmp esi, 0x34545844u */ /* 0x120C574C: cmp esi, 0x34545844 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C575C; /* 0x120C5752: je 0x120c575c */
L_120C5754:
    /* cmp esi, 0x35545844u */ /* 0x120C5754: cmp esi, 0x35545844 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5768; /* 0x120C575A: jne 0x120c5768 */
L_120C575C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 3; /* 0x120C575C: add ebx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 3; /* 0x120C575F: add edi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x120C5762: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x120C5765: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5768:
    eax = MEM32(ebp + 0x20); /* 0x120C5768: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C576B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C576D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C5786; /* 0x120C5770: je 0x120c5786 */
L_120C5772:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C5772: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C577F; /* 0x120C5773: je 0x120c577f */
L_120C5775:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C5775: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C578B; /* 0x120C5776: jne 0x120c578b */
L_120C5778:
    ecx = 0x00010000u; /* 0x120C5778: mov ecx, 0x10000 */
    goto L_120C578B; /* 0x120C577D: jmp 0x120c578b */
L_120C577F:
    ecx = 0x8000u; /* 0x120C577F: mov ecx, 0x8000 */
    goto L_120C578B; /* 0x120C5784: jmp 0x120c578b */
L_120C5786:
    ecx = 0x4000u; /* 0x120C5786: mov ecx, 0x4000 */
L_120C578B:
    /* cmp MEM32(ebp + 0x1C), 3 */ /* 0x120C578B: cmp dword ptr [ebp + 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C57BD; /* 0x120C578F: je 0x120c57bd */
L_120C5791:
    /* test edx, ecx */ /* 0x120C5791: test edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C57B8; /* 0x120C5793: je 0x120c57b8 */
L_120C5795:
    /* test edx, 0x100u */ /* 0x120C5795: test edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C57BD; /* 0x120C579B: je 0x120c57bd */
L_120C579D:
    eax = ebx + (-0x1); /* 0x120C579D: lea eax, [ebx - 1] */
    /* test ebx, eax */ /* 0x120C57A0: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C57B8; /* 0x120C57A2: jne 0x120c57b8 */
L_120C57A4:
    eax = edi + (-0x1); /* 0x120C57A4: lea eax, [edi - 1] */
    /* test edi, eax */ /* 0x120C57A7: test edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C57B8; /* 0x120C57A9: jne 0x120c57b8 */
L_120C57AB:
    ecx = MEM32(ebp + (-0x138)); /* 0x120C57AB: mov ecx, dword ptr [ebp - 0x138] */
    eax = ecx + (-0x1); /* 0x120C57B1: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C57B4: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C57BD; /* 0x120C57B6: je 0x120c57bd */
L_120C57B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C57B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C57BA: inc ecx */
    _flag_k = FK_INC;
    goto L_120C5820; /* 0x120C57BB: jmp 0x120c5820 */
L_120C57BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C57BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x120C57BF: mov ecx, ebx */
    /* test ebx, ebx */ /* 0x120C57C1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C57CA; /* 0x120C57C3: je 0x120c57ca */
L_120C57C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C57C5: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x120C57C6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x120C57C6: shr ecx, 1 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120C57C5; /* 0x120C57C8: jne 0x120c57c5 */
L_120C57CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C57CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x120C57CC: mov ecx, edi */
    /* test edi, edi */ /* 0x120C57CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C57D7; /* 0x120C57D0: je 0x120c57d7 */
L_120C57D2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C57D2: inc edx */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x120C57D3: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x120C57D3: shr ecx, 1 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120C57D2; /* 0x120C57D5: jne 0x120c57d2 */
L_120C57D7:
    esi = MEM32(ebp + (-0x138)); /* 0x120C57D7: mov esi, dword ptr [ebp - 0x138] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C57DD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x120C57DF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C57E8; /* 0x120C57E1: je 0x120c57e8 */
L_120C57E3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C57E3: inc ecx */
    _flag_k = FK_INC;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x120C57E4: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x120C57E4: shr esi, 1 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120C57E3; /* 0x120C57E6: jne 0x120c57e3 */
L_120C57E8:
    /* cmp eax, edx */ /* 0x120C57E8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C57EE; /* 0x120C57EA: ja 0x120c57ee */
L_120C57EC:
    eax = edx; /* 0x120C57EC: mov eax, edx */
L_120C57EE:
    /* cmp MEM32(ebp + 0x20), 4 */ /* 0x120C57EE: cmp dword ptr [ebp + 0x20], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C57FA; /* 0x120C57F2: jne 0x120c57fa */
L_120C57F4:
    /* cmp ecx, eax */ /* 0x120C57F4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C57FA; /* 0x120C57F6: jbe 0x120c57fa */
L_120C57F8:
    eax = ecx; /* 0x120C57F8: mov eax, ecx */
L_120C57FA:
    ecx = MEM32(ebp + (-0x140)); /* 0x120C57FA: mov ecx, dword ptr [ebp - 0x140] */
    /* cmp ecx, eax */ /* 0x120C5800: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C5808; /* 0x120C5802: ja 0x120c5808 */
L_120C5804:
    /* test ecx, ecx */ /* 0x120C5804: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C580A; /* 0x120C5806: jne 0x120c580a */
L_120C5808:
    ecx = eax; /* 0x120C5808: mov ecx, eax */
L_120C580A:
    esi = MEM32(ebp + (-0x13C)); /* 0x120C580A: mov esi, dword ptr [ebp - 0x13c] */
    /* cmp ecx, 1 */ /* 0x120C5810: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C5820; /* 0x120C5813: je 0x120c5820 */
L_120C5815:
    /* test MEM32(ebp + 0x14), 0x400u */ /* 0x120C5815: test dword ptr [ebp + 0x14], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5820; /* 0x120C581C: je 0x120c5820 */
L_120C581E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C581E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5820:
    eax = MEM32(ebp + (-0x14C)); /* 0x120C5820: mov eax, dword ptr [ebp - 0x14c] */
    /* test eax, eax */ /* 0x120C5826: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C582C; /* 0x120C5828: je 0x120c582c */
L_120C582A:
    MEM32(eax) = ebx; /* 0x120C582A: mov dword ptr [eax], ebx */
L_120C582C:
    eax = MEM32(ebp + (-0x144)); /* 0x120C582C: mov eax, dword ptr [ebp - 0x144] */
    /* test eax, eax */ /* 0x120C5832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5838; /* 0x120C5834: je 0x120c5838 */
L_120C5836:
    MEM32(eax) = edi; /* 0x120C5836: mov dword ptr [eax], edi */
L_120C5838:
    edx = MEM32(ebp + (-0x150)); /* 0x120C5838: mov edx, dword ptr [ebp - 0x150] */
    /* test edx, edx */ /* 0x120C583E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C584A; /* 0x120C5840: je 0x120c584a */
L_120C5842:
    eax = MEM32(ebp + (-0x138)); /* 0x120C5842: mov eax, dword ptr [ebp - 0x138] */
    MEM32(edx) = eax; /* 0x120C5848: mov dword ptr [edx], eax */
L_120C584A:
    eax = MEM32(ebp + (-0x148)); /* 0x120C584A: mov eax, dword ptr [ebp - 0x148] */
    /* test eax, eax */ /* 0x120C5850: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5856; /* 0x120C5852: je 0x120c5856 */
L_120C5854:
    MEM32(eax) = ecx; /* 0x120C5854: mov dword ptr [eax], ecx */
L_120C5856:
    eax = MEM32(ebp + (-0x158)); /* 0x120C5856: mov eax, dword ptr [ebp - 0x158] */
    /* test eax, eax */ /* 0x120C585C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5862; /* 0x120C585E: je 0x120c5862 */
L_120C5860:
    MEM32(eax) = esi; /* 0x120C5860: mov dword ptr [eax], esi */
L_120C5862:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5862: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5864:
    ebx = POP32_VAL(esp); /* 0x120C5864: pop ebx */
L_120C5865:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C5865: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C5868: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C5869: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120C586B: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C586C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C5871: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120C5872: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120C587A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C587Au);

L_120C587A:
    edi = edi; /* 0x120C587A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C587C: push ebp */
    ebp = esp; /* 0x120C587D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120C587F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 3); /* 0x120C5882: push 3 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C5884: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C5887: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C5889: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C588C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C588F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5892: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C5895: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C5461); /* 0x120C5898: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C589D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120C589E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120C58A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C58A6u);

L_120C58A6:
    edi = edi; /* 0x120C58A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C58A8: push ebp */
    ebp = esp; /* 0x120C58A9: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120C58AB: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 5); /* 0x120C58AE: push 5 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C58B0: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C58B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C58B5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C58B8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C58BB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C58BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C58C1: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C5461); /* 0x120C58C4: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C58C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120C58CA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120C58D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C58D2u);

L_120C58D2:
    edi = edi; /* 0x120C58D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C58D4: push ebp */
    ebp = esp; /* 0x120C58D5: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x120C58D7: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x120C58DA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x120C58DD: push 4 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C58DF: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C58E2: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C58E5: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C58E8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C58EB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C58EE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C5461); /* 0x120C58F1: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C58F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C58F7: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C58FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C58FFu);

L_120C58FF:
    edi = edi; /* 0x120C58FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5901: push ebp */
    ebp = esp; /* 0x120C5902: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C5904: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C5905: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C5908: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5916; /* 0x120C590A: jne 0x120c5916 */
L_120C590C:
    eax = 0x8876086Cu; /* 0x120C590C: mov eax, 0x8876086c */
    goto L_120C599A; /* 0x120C5911: jmp 0x120c599a */
L_120C5916:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x120C5916: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C590C; /* 0x120C591A: je 0x120c590c */
L_120C591C:
    PUSH32(esp, edi); /* 0x120C591C: push edi */
    edi = MEM32(ebp + 0x18); /* 0x120C591D: mov edi, dword ptr [ebp + 0x18] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120C5920: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5927; /* 0x120C5923: jne 0x120c5927 */
L_120C5925:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C5925: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5927:
    PUSH32(esp, 3); /* 0x120C5927: push 3 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C5929: push dword ptr [ebp + 0x20] */
    eax = ebp + 0x1C; /* 0x120C592C: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x120C592F: push eax */
    PUSH32(esp, edi); /* 0x120C5930: push edi */
    eax = ebp + 0x14; /* 0x120C5931: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120C5934: push eax */
    eax = ebp + 0x10; /* 0x120C5935: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120C5938: push eax */
    eax = ebp + 0xC; /* 0x120C5939: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120C593C: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C593D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x120C593F: mov ecx, esi */
    RECOMP_CALL(sub_120C5461); /* 0x120C5941: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5946: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5999; /* 0x120C5948: js 0x120c5999 */
L_120C594A:
    /* cmp MEM32(ebp + 0x20), 1 */ /* 0x120C594A: cmp dword ptr [ebp + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5972; /* 0x120C594E: jne 0x120c5972 */
L_120C5950:
    eax = MEM32(esi); /* 0x120C5950: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x120C5952: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C5955: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C5956: push 0x12001a88 */
    PUSH32(esp, esi); /* 0x120C595B: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C595C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C595E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5972; /* 0x120C5960: js 0x120c5972 */
L_120C5962:
    eax = MEM32(ebp + 0x8); /* 0x120C5962: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C5965: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C5967: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C5968: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C596B: mov eax, 0x8876086c */
    goto L_120C5999; /* 0x120C5970: jmp 0x120c5999 */
L_120C5972:
    eax = MEM32(esi); /* 0x120C5972: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x120C5974: push 0 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C5976: push dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFE07FFFu);
    edi = edi & 0xFFE07FFFu; /* 0x120C5979: and edi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C597F: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C5982: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x120C5985: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C5986: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5989: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C598C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C598F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x120C5990: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5999; /* 0x120C5995: js 0x120c5999 */
L_120C5997:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5997: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5999:
    edi = POP32_VAL(esp); /* 0x120C5999: pop edi */
L_120C599A:
    esi = POP32_VAL(esp); /* 0x120C599A: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C599B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C599C: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C59A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C59A4u);

L_120C59A4:
    edi = edi; /* 0x120C59A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C59A6: push ebp */
    ebp = esp; /* 0x120C59A7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C59A9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C59AA: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C59AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C59B8; /* 0x120C59AF: jne 0x120c59b8 */
L_120C59B1:
    eax = 0x8876086Cu; /* 0x120C59B1: mov eax, 0x8876086c */
    goto L_120C5A36; /* 0x120C59B6: jmp 0x120c5a36 */
L_120C59B8:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x120C59B8: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C59B1; /* 0x120C59BC: je 0x120c59b1 */
L_120C59BE:
    PUSH32(esp, edi); /* 0x120C59BE: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120C59BF: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120C59C2: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C59C9; /* 0x120C59C5: jne 0x120c59c9 */
L_120C59C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C59C7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C59C9:
    /* cmp MEM32(ebp + 0x1C), 1 */ /* 0x120C59C9: cmp dword ptr [ebp + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C59F1; /* 0x120C59CD: jne 0x120c59f1 */
L_120C59CF:
    eax = MEM32(esi); /* 0x120C59CF: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x120C59D1: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C59D4: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C59D5: push 0x12001a88 */
    PUSH32(esp, esi); /* 0x120C59DA: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C59DB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C59DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C59F1; /* 0x120C59DF: js 0x120c59f1 */
L_120C59E1:
    eax = MEM32(ebp + 0x8); /* 0x120C59E1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C59E4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C59E6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C59E7: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C59EA: mov eax, 0x8876086c */
    goto L_120C5A35; /* 0x120C59EF: jmp 0x120c5a35 */
L_120C59F1:
    PUSH32(esp, 5); /* 0x120C59F1: push 5 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C59F3: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x18; /* 0x120C59F6: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x120C59F9: push eax */
    PUSH32(esp, edi); /* 0x120C59FA: push edi */
    eax = ebp + 0x10; /* 0x120C59FB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120C59FE: push eax */
    eax = ebp + 0xC; /* 0x120C59FF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120C5A02: push eax */
    PUSH32(esp, eax); /* 0x120C5A03: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C5A04: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x120C5A06: mov ecx, esi */
    RECOMP_CALL(sub_120C5461); /* 0x120C5A08: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5A0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5A35; /* 0x120C5A0F: js 0x120c5a35 */
L_120C5A11:
    eax = MEM32(esi); /* 0x120C5A11: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x120C5A13: push 0 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C5A15: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFE07FFFu);
    edi = edi & 0xFFE07FFFu; /* 0x120C5A18: and edi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C5A1E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C5A21: push dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120C5A24: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5A25: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C5A28: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C5A2B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x120C5A2C: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5A2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5A35; /* 0x120C5A31: js 0x120c5a35 */
L_120C5A33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5A33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5A35:
    edi = POP32_VAL(esp); /* 0x120C5A35: pop edi */
L_120C5A36:
    esi = POP32_VAL(esp); /* 0x120C5A36: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C5A37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120C5A38: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120C5A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5A40u);

L_120C5A40:
    edi = edi; /* 0x120C5A40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5A42: push ebp */
    ebp = esp; /* 0x120C5A43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C5A45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C5A46: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C5A49: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5A57; /* 0x120C5A4B: jne 0x120c5a57 */
L_120C5A4D:
    eax = 0x8876086Cu; /* 0x120C5A4D: mov eax, 0x8876086c */
    goto L_120C5ADF; /* 0x120C5A52: jmp 0x120c5adf */
L_120C5A57:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x120C5A57: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C5A4D; /* 0x120C5A5B: je 0x120c5a4d */
L_120C5A5D:
    PUSH32(esp, edi); /* 0x120C5A5D: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x120C5A5E: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120C5A61: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5A68; /* 0x120C5A64: jne 0x120c5a68 */
L_120C5A66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C5A66: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5A68:
    /* cmp MEM32(ebp + 0x24), 1 */ /* 0x120C5A68: cmp dword ptr [ebp + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C5A90; /* 0x120C5A6C: jne 0x120c5a90 */
L_120C5A6E:
    eax = MEM32(esi); /* 0x120C5A6E: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x120C5A70: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C5A73: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C5A74: push 0x12001a88 */
    PUSH32(esp, esi); /* 0x120C5A79: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C5A7A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5A7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5A90; /* 0x120C5A7E: js 0x120c5a90 */
L_120C5A80:
    eax = MEM32(ebp + 0x8); /* 0x120C5A80: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C5A83: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C5A85: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C5A86: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5A89: mov eax, 0x8876086c */
    goto L_120C5ADE; /* 0x120C5A8E: jmp 0x120c5ade */
L_120C5A90:
    PUSH32(esp, 4); /* 0x120C5A90: push 4 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C5A92: push dword ptr [ebp + 0x24] */
    eax = ebp + 0x20; /* 0x120C5A95: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x120C5A98: push eax */
    PUSH32(esp, edi); /* 0x120C5A99: push edi */
    eax = ebp + 0x18; /* 0x120C5A9A: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x120C5A9D: push eax */
    eax = ebp + 0x10; /* 0x120C5A9E: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120C5AA1: push eax */
    eax = ebp + 0xC; /* 0x120C5AA2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120C5AA5: push eax */
    edx = ebp + 0x14; /* 0x120C5AA6: lea edx, [ebp + 0x14] */
    ecx = esi; /* 0x120C5AA9: mov ecx, esi */
    RECOMP_CALL(sub_120C5461); /* 0x120C5AAB: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5AB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5ADE; /* 0x120C5AB2: js 0x120c5ade */
L_120C5AB4:
    PUSH32(esp, 0); /* 0x120C5AB4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C5AB6: push dword ptr [ebp + 0x28] */
    eax = MEM32(esi); /* 0x120C5AB9: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C5ABB: push dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFE07FFFu);
    edi = edi & 0xFFE07FFFu; /* 0x120C5ABE: and edi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C5AC4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x120C5AC7: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C5AC8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C5ACB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C5ACE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C5AD1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C5AD4: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x120C5AD5: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C5AD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5ADE; /* 0x120C5ADA: js 0x120c5ade */
L_120C5ADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5ADC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5ADE:
    edi = POP32_VAL(esp); /* 0x120C5ADE: pop edi */
L_120C5ADF:
    esi = POP32_VAL(esp); /* 0x120C5ADF: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C5AE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C5AE1: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C5AE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5AE9u);

L_120C5AE9:
    edi = edi; /* 0x120C5AE9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5AEB: push ebp */
    ebp = esp; /* 0x120C5AEC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x120C5AEE: sub esp, 0xfc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C5AF4: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C5AF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C5AFB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C5AFE: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C5B01: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C5B05: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120C5B06: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120C5B09: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C5B0A: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0xA8); /* 0x120C5B0D: lea ecx, [ebp - 0xa8] */
    MEM32(ebp + (-0x7C)) = edi; /* 0x120C5B13: mov dword ptr [ebp - 0x7c], edi */
    MEM32(ebp + (-0x84)) = ebx; /* 0x120C5B16: mov dword ptr [ebp - 0x84], ebx */
    MEM32(ebp + (-0x80)) = eax; /* 0x120C5B1C: mov dword ptr [ebp - 0x80], eax */
    RECOMP_CALL(sub_120E04A2); /* 0x120C5B1F: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120C5B24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5B3D; /* 0x120C5B26: jne 0x120c5b3d */
L_120C5B28:
    ecx = ebp + (-0xA8); /* 0x120C5B28: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5B2E: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5B33: mov eax, 0x8876086c */
    goto L_120C5D7A; /* 0x120C5B38: jmp 0x120c5d7a */
L_120C5B3D:
    PUSH32(esp, esi); /* 0x120C5B3D: push esi */
    /* test ebx, ebx */ /* 0x120C5B3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5B4C; /* 0x120C5B40: jne 0x120c5b4c */
L_120C5B42:
    esi = 0x8876086Cu; /* 0x120C5B42: mov esi, 0x8876086c */
    goto L_120C5D6C; /* 0x120C5B47: jmp 0x120c5d6c */
L_120C5B4C:
    eax = MEM32(edi); /* 0x120C5B4C: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120C5B4E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C5B4F: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x120C5B52: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x64)) = eax; /* 0x120C5B54: mov dword ptr [ebp - 0x64], eax */
    eax = ebp + (-0x44); /* 0x120C5B57: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120C5B5A: push eax */
    PUSH32(esp, 0); /* 0x120C5B5B: push 0 */
    PUSH32(esp, edi); /* 0x120C5B5D: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x120C5B5E: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5B61: mov esi, eax */
    /* test esi, esi */ /* 0x120C5B63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5D6C; /* 0x120C5B65: js 0x120c5d6c */
L_120C5B6B:
    eax = MEM32(ebp + (-0x2C)); /* 0x120C5B6B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x120014BCu); /* 0x120C5B6E: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C5B73: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C5B75: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C5B77: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C5B78: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C5B7A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C5B7D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C5B7F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C5B81: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C5B82: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C5B87: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x120C5B89: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C5B8A: pop ecx */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x120C5B8B: mov dword ptr [ebp - 0x4c], ebx */
    /* test ebx, ebx */ /* 0x120C5B8E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5B9F; /* 0x120C5B90: jne 0x120c5b9f */
L_120C5B92:
    ecx = MEM32(ebp + (-0x48)); /* 0x120C5B92: mov ecx, dword ptr [ebp - 0x48] */
    esi = 0x8007000Eu; /* 0x120C5B95: mov esi, 0x8007000e */
    goto L_120C5D57; /* 0x120C5B9A: jmp 0x120c5d57 */
L_120C5B9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C5B9F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C5BA1: mov dword ptr [ebp - 0x60], ebx */
    /* cmp MEM32(ebp + (-0x64)), ebx */ /* 0x120C5BA4: cmp dword ptr [ebp - 0x64], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C5D4F; /* 0x120C5BA7: jbe 0x120c5d4f */
L_120C5BAD:
    eax = MEM32(edi); /* 0x120C5BAD: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x24); /* 0x120C5BAF: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120C5BB2: push ecx */
    PUSH32(esp, ebx); /* 0x120C5BB3: push ebx */
    PUSH32(esp, edi); /* 0x120C5BB4: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C5BB5: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5BB8: mov esi, eax */
    /* test esi, esi */ /* 0x120C5BBA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5D4A; /* 0x120C5BBC: js 0x120c5d4a */
L_120C5BC2:
    eax = MEM32(edi); /* 0x120C5BC2: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x48); /* 0x120C5BC4: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x120C5BC7: push ecx */
    PUSH32(esp, ebx); /* 0x120C5BC8: push ebx */
    PUSH32(esp, edi); /* 0x120C5BC9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C5BCA: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C5BCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA8); /* 0x120C5BCF: lea ecx, [ebp - 0xa8] */
    /* test ebx, ebx */ /* 0x120C5BD5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5BE0; /* 0x120C5BD7: jne 0x120c5be0 */
L_120C5BD9:
    PUSH32(esp, 0x00020000u); /* 0x120C5BD9: push 0x20000 */
    goto L_120C5BE1; /* 0x120C5BDE: jmp 0x120c5be1 */
L_120C5BE0:
    PUSH32(esp, eax); /* 0x120C5BE0: push eax */
L_120C5BE1:
    PUSH32(esp, eax); /* 0x120C5BE1: push eax */
    PUSH32(esp, eax); /* 0x120C5BE2: push eax */
    PUSH32(esp, eax); /* 0x120C5BE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120C5BE4: push dword ptr [ebp - 0x48] */
    eax = ebp + (-0xFC); /* 0x120C5BE7: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C5BED: push eax */
    RECOMP_CALL(sub_120E069C); /* 0x120C5BEE: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5BF3: mov esi, eax */
    /* test esi, esi */ /* 0x120C5BF5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5D4A; /* 0x120C5BF7: js 0x120c5d4a */
L_120C5BFD:
    ecx = MEM32(ebp + (-0xC)); /* 0x120C5BFD: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x120C5C00: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x54)) = ecx; /* 0x120C5C03: mov dword ptr [ebp - 0x54], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x54))); /* 0x120C5C06: fild dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x78)) = ecx; /* 0x120C5C09: mov dword ptr [ebp - 0x78], ecx */
    MEM32(ebp + (-0x70)) = eax; /* 0x120C5C0C: mov dword ptr [ebp - 0x70], eax */
    /* test ecx, ecx */ /* 0x120C5C0F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C5C19; /* 0x120C5C11: jns 0x120c5c19 */
L_120C5C13:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C5C13: fadd dword ptr [0x120014d0] */
L_120C5C19:
    fp_push(1.0); /* 0x120C5C19: fld1  */
    MEM32(ebp + (-0x54)) = eax; /* 0x120C5C1B: mov dword ptr [ebp - 0x54], eax */
    fp_push(_st[0]); /* 0x120C5C1E: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120C5C20: fdivrp st(2) */
    fp_xch(1); /* 0x120C5C22: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120C5C24: fstp dword ptr [ebp - 0x68] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x54))); /* 0x120C5C27: fild dword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x120C5C2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C5C34; /* 0x120C5C2C: jns 0x120c5c34 */
L_120C5C2E:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C5C2E: fadd dword ptr [0x120014d0] */
L_120C5C34:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x120C5C34: fdivp st(1) */
    eax = ebp + (-0xFC); /* 0x120C5C36: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C5C3C: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x120C5C3D: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C5C40: fld dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C5C43: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120C5C49: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120C5C4C: fstp dword ptr [ebp - 0x90] */
    RECOMP_CALL(sub_120D6352); /* 0x120C5C52: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C5C57: mov dword ptr [ebp - 0x5c], eax */
    /* test eax, eax */ /* 0x120C5C5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5D45; /* 0x120C5C5C: je 0x120c5d45 */
L_120C5C62:
    ecx = eax; /* 0x120C5C62: mov ecx, eax */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C5C64: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C5C69: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = esi; /* 0x120C5C6B: mov dword ptr [ebp - 0x50], esi */
    /* cmp MEM32(ebp + (-0x70)), esi */ /* 0x120C5C6E: cmp dword ptr [ebp - 0x70], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C5D1B; /* 0x120C5C71: jle 0x120c5d1b */
L_120C5C77:
    edi = MEM32(ebp + (-0x5C)); /* 0x120C5C77: mov edi, dword ptr [ebp - 0x5c] */
    ebx = MEM32(ebp + (-0x4C)); /* 0x120C5C7A: mov ebx, dword ptr [ebp - 0x4c] */
L_120C5C7D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) & 0; /* 0x120C5C7D: and dword ptr [ebp - 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x78)), 0 */ /* 0x120C5C81: cmp dword ptr [ebp - 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = ebx; /* 0x120C5C85: mov dword ptr [ebp - 0x54], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C5CFD; /* 0x120C5C88: jle 0x120c5cfd */
L_120C5C8A:
    fp_push((double)(int32_t)MEM32(ebp + (-0x50))); /* 0x120C5C8A: fild dword ptr [ebp - 0x50] */
    edi = MEM32(ebp + (-0x58)); /* 0x120C5C8D: mov edi, dword ptr [ebp - 0x58] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120C5C90: fld qword ptr [0x120014c0] */
    esi = MEM32(ebp + (-0x84)); /* 0x120C5C96: mov esi, dword ptr [ebp - 0x84] */
    _st[1] += _st[0]; /* 0x120C5C9C: fadd st(1), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120C5C9E: fld dword ptr [ebp - 0x6c] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C5CA1: fmulp st(2) */
    fp_xch(1); /* 0x120C5CA3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C5CA5: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C5CA8: fld dword ptr [ebp - 0x74] */
    goto L_120C5CAF; /* 0x120C5CAB: jmp 0x120c5caf */
L_120C5CAD:
    fp_xch(1); /* 0x120C5CAD: fxch st(1) */
L_120C5CAF:
    fp_push((double)(int32_t)MEM32(ebp + (-0x58))); /* 0x120C5CAF: fild dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C5CB2: push dword ptr [ebp - 0x80] */
    eax = ebp + (-0x94); /* 0x120C5CB5: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x120C5CBB: push eax */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120C5CBC: faddp st(2) */
    eax = ebp + (-0x8C); /* 0x120C5CBE: lea eax, [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C5CC4: fld dword ptr [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x120C5CC7: push eax */
    PUSH32(esp, ebx); /* 0x120C5CC8: push ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C5CC9: fmulp st(2) */
    fp_xch(1); /* 0x120C5CCB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120C5CCD: fstp dword ptr [ebp - 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120C5CD3: fstp dword ptr [ebp - 0x88] */
    RECOMP_ICALL(esi); /* 0x120C5CD9: call esi */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C5CDB: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C5CDE: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120C5CE1: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C5CE7: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x58)) = edi; /* 0x120C5CE8: mov dword ptr [ebp - 0x58], edi */
    /* cmp edi, MEM32(ebp + (-0x78)) */ /* 0x120C5CEB: cmp edi, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C5CAD; /* 0x120C5CEE: jl 0x120c5cad */
L_120C5CF0:
    esi = MEM32(ebp + (-0x50)); /* 0x120C5CF0: mov esi, dword ptr [ebp - 0x50] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C5CF3: fstp st(1) */
    edi = MEM32(ebp + (-0x5C)); /* 0x120C5CF5: mov edi, dword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C5CF8: fstp st(0) */
    ebx = MEM32(ebp + (-0x4C)); /* 0x120C5CFA: mov ebx, dword ptr [ebp - 0x4c] */
L_120C5CFD:
    eax = MEM32(edi); /* 0x120C5CFD: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x120C5CFF: push ebx */
    PUSH32(esp, 0); /* 0x120C5D00: push 0 */
    PUSH32(esp, esi); /* 0x120C5D02: push esi */
    ecx = edi; /* 0x120C5D03: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C5D05: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C5D08: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = esi; /* 0x120C5D09: mov dword ptr [ebp - 0x50], esi */
    /* cmp esi, MEM32(ebp + (-0x70)) */ /* 0x120C5D0C: cmp esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C5C7D; /* 0x120C5D0F: jl 0x120c5c7d */
L_120C5D15:
    edi = MEM32(ebp + (-0x7C)); /* 0x120C5D15: mov edi, dword ptr [ebp - 0x7c] */
    ebx = MEM32(ebp + (-0x60)); /* 0x120C5D18: mov ebx, dword ptr [ebp - 0x60] */
L_120C5D1B:
    ecx = MEM32(ebp + (-0x5C)); /* 0x120C5D1B: mov ecx, dword ptr [ebp - 0x5c] */
    eax = MEM32(ecx); /* 0x120C5D1E: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x120C5D20: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C5D22: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x120C5D24: mov ecx, dword ptr [ebp - 0x48] */
    /* test ecx, ecx */ /* 0x120C5D27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5D36; /* 0x120C5D29: je 0x120c5d36 */
L_120C5D2B:
    eax = MEM32(ecx); /* 0x120C5D2B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C5D2D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C5D2E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C5D31: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = ecx; /* 0x120C5D33: mov dword ptr [ebp - 0x48], ecx */
L_120C5D36:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C5D36: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C5D37: mov dword ptr [ebp - 0x60], ebx */
    /* cmp ebx, MEM32(ebp + (-0x64)) */ /* 0x120C5D3A: cmp ebx, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C5BAD; /* 0x120C5D3D: jb 0x120c5bad */
L_120C5D43:
    goto L_120C5D52; /* 0x120C5D43: jmp 0x120c5d52 */
L_120C5D45:
    esi = 0x8876086Cu; /* 0x120C5D45: mov esi, 0x8876086c */
L_120C5D4A:
    ecx = MEM32(ebp + (-0x48)); /* 0x120C5D4A: mov ecx, dword ptr [ebp - 0x48] */
    goto L_120C5D54; /* 0x120C5D4D: jmp 0x120c5d54 */
L_120C5D4F:
    ecx = MEM32(ebp + (-0x48)); /* 0x120C5D4F: mov ecx, dword ptr [ebp - 0x48] */
L_120C5D52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C5D52: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5D54:
    ebx = MEM32(ebp + (-0x4C)); /* 0x120C5D54: mov ebx, dword ptr [ebp - 0x4c] */
L_120C5D57:
    /* test ecx, ecx */ /* 0x120C5D57: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5D65; /* 0x120C5D59: je 0x120c5d65 */
L_120C5D5B:
    eax = MEM32(ecx); /* 0x120C5D5B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C5D5D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C5D5E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C5D61: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C5D65:
    PUSH32(esp, ebx); /* 0x120C5D65: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120C5D66: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C5D6B: pop ecx */
L_120C5D6C:
    ecx = ebp + (-0xA8); /* 0x120C5D6C: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5D72: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C5D77: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C5D79: pop esi */
L_120C5D7A:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C5D7A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C5D7D: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C5D7E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C5D80: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C5D81: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C5D86: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C5D87: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C5D8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C5D8Fu);

L_120C5D8F:
    edi = edi; /* 0x120C5D8F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C5D91: push ebp */
    ebp = esp; /* 0x120C5D92: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x120C5D94: sub esp, 0xfc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C5D9A: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C5D9F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C5DA1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C5DA4: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) & 0; /* 0x120C5DA7: and dword ptr [ebp - 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C5DAB: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120C5DAC: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120C5DAF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C5DB0: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0xA8); /* 0x120C5DB3: lea ecx, [ebp - 0xa8] */
    MEM32(ebp + (-0x90)) = edi; /* 0x120C5DB9: mov dword ptr [ebp - 0x90], edi */
    MEM32(ebp + (-0x8C)) = ebx; /* 0x120C5DBF: mov dword ptr [ebp - 0x8c], ebx */
    MEM32(ebp + (-0x88)) = eax; /* 0x120C5DC5: mov dword ptr [ebp - 0x88], eax */
    RECOMP_CALL(sub_120E04A2); /* 0x120C5DCB: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120C5DD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5DE9; /* 0x120C5DD2: jne 0x120c5de9 */
L_120C5DD4:
    ecx = ebp + (-0xA8); /* 0x120C5DD4: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E0692); /* 0x120C5DDA: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C5DDF: mov eax, 0x8876086c */
    goto L_120C669A; /* 0x120C5DE4: jmp 0x120c669a */
L_120C5DE9:
    PUSH32(esp, esi); /* 0x120C5DE9: push esi */
    /* test ebx, ebx */ /* 0x120C5DEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5DF8; /* 0x120C5DEC: jne 0x120c5df8 */
L_120C5DEE:
    esi = 0x8876086Cu; /* 0x120C5DEE: mov esi, 0x8876086c */
    goto L_120C668C; /* 0x120C5DF3: jmp 0x120c668c */
L_120C5DF8:
    eax = MEM32(edi); /* 0x120C5DF8: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120C5DFA: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C5DFB: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x120C5DFE: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x94)) = eax; /* 0x120C5E00: mov dword ptr [ebp - 0x94], eax */
    eax = ebp + (-0x3C); /* 0x120C5E06: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x120C5E09: push eax */
    PUSH32(esp, 0); /* 0x120C5E0A: push 0 */
    PUSH32(esp, edi); /* 0x120C5E0C: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x120C5E0D: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5E10: mov esi, eax */
    /* test esi, esi */ /* 0x120C5E12: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C668C; /* 0x120C5E14: js 0x120c668c */
L_120C5E1A:
    eax = MEM32(ebp + (-0x24)); /* 0x120C5E1A: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, 0x120014BCu); /* 0x120C5E1D: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C5E22: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C5E24: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C5E26: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C5E27: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C5E29: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C5E2C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C5E2E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C5E30: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C5E31: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C5E36: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x120C5E38: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C5E39: pop ecx */
    MEM32(ebp + (-0x68)) = ebx; /* 0x120C5E3A: mov dword ptr [ebp - 0x68], ebx */
    /* test ebx, ebx */ /* 0x120C5E3D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5E4B; /* 0x120C5E3F: jne 0x120c5e4b */
L_120C5E41:
    esi = 0x8007000Eu; /* 0x120C5E41: mov esi, 0x8007000e */
    goto L_120C6674; /* 0x120C5E46: jmp 0x120c6674 */
L_120C5E4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C5E4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x80)) = ebx; /* 0x120C5E4D: mov dword ptr [ebp - 0x80], ebx */
    /* cmp MEM32(ebp + (-0x94)), ebx */ /* 0x120C5E50: cmp dword ptr [ebp - 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C666F; /* 0x120C5E56: jbe 0x120c666f */
L_120C5E5C:
    eax = MEM32(edi); /* 0x120C5E5C: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C5E5E: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C5E61: push ecx */
    PUSH32(esp, ebx); /* 0x120C5E62: push ebx */
    PUSH32(esp, 0); /* 0x120C5E63: push 0 */
    PUSH32(esp, edi); /* 0x120C5E65: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C5E66: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5E69: mov esi, eax */
    /* test esi, esi */ /* 0x120C5E6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C5E6D: js 0x120c6671 */
L_120C5E73:
    eax = MEM32(edi); /* 0x120C5E73: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x5C); /* 0x120C5E75: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, ecx); /* 0x120C5E78: push ecx */
    PUSH32(esp, ebx); /* 0x120C5E79: push ebx */
    PUSH32(esp, edi); /* 0x120C5E7A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C5E7B: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5E7E: mov esi, eax */
    /* test esi, esi */ /* 0x120C5E80: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C5E82: js 0x120c6671 */
L_120C5E88:
    eax = ebp + (-0xFC); /* 0x120C5E88: lea eax, [ebp - 0xfc] */
    ecx = ebp + (-0xA8); /* 0x120C5E8E: lea ecx, [ebp - 0xa8] */
    /* test ebx, ebx */ /* 0x120C5E94: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C5E9F; /* 0x120C5E96: jne 0x120c5e9f */
L_120C5E98:
    PUSH32(esp, 0x00020000u); /* 0x120C5E98: push 0x20000 */
    goto L_120C5EA2; /* 0x120C5E9D: jmp 0x120c5ea2 */
L_120C5E9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C5E9F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C5EA1: push ebx */
L_120C5EA2:
    PUSH32(esp, ebx); /* 0x120C5EA2: push ebx */
    PUSH32(esp, ebx); /* 0x120C5EA3: push ebx */
    PUSH32(esp, ebx); /* 0x120C5EA4: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C5EA5: push dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x120C5EA8: push eax */
    RECOMP_CALL(sub_120E069C); /* 0x120C5EA9: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5EAE: mov esi, eax */
    /* test esi, esi */ /* 0x120C5EB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C5EB2: js 0x120c6671 */
L_120C5EB8:
    eax = ebp + (-0xFC); /* 0x120C5EB8: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C5EBE: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C5EBF: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C5EC4: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C5EC6: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C5EC9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C5ECB: je 0x120c66aa */
L_120C5ED1:
    ecx = esi; /* 0x120C5ED1: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C5ED3: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x120C5ED8: mov eax, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x84)) = eax; /* 0x120C5EDB: mov dword ptr [ebp - 0x84], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x84))); /* 0x120C5EE1: fild dword ptr [ebp - 0x84] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C5EE7: mov dword ptr [ebp - 0x6c], eax */
    /* test eax, eax */ /* 0x120C5EEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C5EF4; /* 0x120C5EEC: jns 0x120c5ef4 */
L_120C5EEE:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C5EEE: fadd dword ptr [0x120014d0] */
L_120C5EF4:
    fp_push(1.0); /* 0x120C5EF4: fld1  */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C5EF6: mov dword ptr [ebp - 0x64], ebx */
    fp_push(_st[0]); /* 0x120C5EF9: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120C5EFB: fdivrp st(2) */
    fp_xch(1); /* 0x120C5EFD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120C5EFF: fstp dword ptr [ebp - 0x78] */
    fp_push(0.0); /* 0x120C5F02: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C5F04: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C5F07: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C5F0A: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C5F0C: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x120C5F12: fmul st(1), st(0) */
    fp_xch(1); /* 0x120C5F14: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x120C5F16: fstp dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C5F1C: fld dword ptr [ebp - 0x84] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C5F22: fst dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C5F25: fstp dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x120C5F28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C5FDC; /* 0x120C5F2A: jle 0x120c5fdc */
L_120C5F30:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C5F30: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C5F33: mov ebx, dword ptr [ebp - 0x68] */
    edi = MEM32(ebp + (-0x6C)); /* 0x120C5F36: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C5F39: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x120C5F3B: fmul st(1) */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C5F3D: mov dword ptr [ebp - 0x70], esi */
    _st[0] += _st[3]; /* 0x120C5F40: fadd st(3) */
    fp_push(_st[2]); /* 0x120C5F42: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120C5F44: fmulp st(1) */
    fp_push(_st[3]); /* 0x120C5F46: fld st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C5F48: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C5F4A: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C5F4D: fld dword ptr [ebp - 0x74] */
    goto L_120C5F5C; /* 0x120C5F50: jmp 0x120c5f5c */
L_120C5F52:
    fp_xch(2); /* 0x120C5F52: fxch st(2) */
    fp_xch(3); /* 0x120C5F54: fxch st(3) */
    fp_xch(1); /* 0x120C5F56: fxch st(1) */
    fp_xch(2); /* 0x120C5F58: fxch st(2) */
    fp_xch(1); /* 0x120C5F5A: fxch st(1) */
L_120C5F5C:
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C5F5C: fild dword ptr [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C5F5F: push dword ptr [ebp - 0x88] */
    eax = ebp + (-0x10); /* 0x120C5F65: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C5F68: push eax */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C5F69: fmulp st(2) */
    eax = ebp + (-0x1C); /* 0x120C5F6B: lea eax, [ebp - 0x1c] */
    fp_xch(1); /* 0x120C5F6E: fxch st(1) */
    PUSH32(esp, eax); /* 0x120C5F70: push eax */
    PUSH32(esp, ebx); /* 0x120C5F71: push ebx */
    _st[0] += _st[3]; /* 0x120C5F72: fadd st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C5F74: fmulp st(2) */
    fp_xch(2); /* 0x120C5F76: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C5F78: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C5F7A: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C5F7D: fstp dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x120C5F80: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C5F82: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C5F85: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C5F8B: fld dword ptr [ebp - 0x74] */
    fp_push(1.0); /* 0x120C5F8E: fld1  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C5F90: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C5F93: fld dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C5F96: inc esi */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C5F97: fld qword ptr [0x12001758] */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C5F9D: mov dword ptr [ebp - 0x70], esi */
    /* cmp esi, edi */ /* 0x120C5FA0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C5F52; /* 0x120C5FA2: jl 0x120c5f52 */
L_120C5FA4:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C5FA4: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C5FA7: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C5FA9: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C5FAC: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C5FAE: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C5FB1: fstp st(0) */
    eax = MEM32(esi); /* 0x120C5FB3: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C5FB5: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C5FB7: push 0 */
    PUSH32(esp, ebx); /* 0x120C5FB9: push ebx */
    ecx = esi; /* 0x120C5FBA: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C5FBC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x120C5FBF: fld1  */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C5FC1: fld dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C5FC4: inc ebx */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C5FC5: fld qword ptr [0x12001758] */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C5FCB: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, edi */ /* 0x120C5FCE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C5F30; /* 0x120C5FD0: jl 0x120c5f30 */
L_120C5FD6:
    edi = MEM32(ebp + (-0x90)); /* 0x120C5FD6: mov edi, dword ptr [ebp - 0x90] */
L_120C5FDC:
    eax = MEM32(esi); /* 0x120C5FDC: mov eax, dword ptr [esi] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120C5FDE: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C5FE0: fstp st(0) */
    PUSH32(esp, 1); /* 0x120C5FE2: push 1 */
    ecx = esi; /* 0x120C5FE4: mov ecx, esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C5FE6: fstp st(0) */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C5FE8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C5FEA: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C5FED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C5FFE; /* 0x120C5FEF: je 0x120c5ffe */
L_120C5FF1:
    eax = MEM32(ecx); /* 0x120C5FF1: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C5FF3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C5FF4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C5FF7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C5FF9: mov dword ptr [ebp - 0x60], ebx */
    goto L_120C6000; /* 0x120C5FFC: jmp 0x120c6000 */
L_120C5FFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C5FFE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6000:
    eax = MEM32(edi); /* 0x120C6000: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C6002: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C6005: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C6006: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 1); /* 0x120C6009: push 1 */
    PUSH32(esp, edi); /* 0x120C600B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C600C: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C600F: mov esi, eax */
    /* test esi, esi */ /* 0x120C6011: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C6013: js 0x120c6671 */
L_120C6019:
    PUSH32(esp, ebx); /* 0x120C6019: push ebx */
    PUSH32(esp, ebx); /* 0x120C601A: push ebx */
    PUSH32(esp, ebx); /* 0x120C601B: push ebx */
    PUSH32(esp, ebx); /* 0x120C601C: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C601D: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xFC); /* 0x120C6020: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C6026: push eax */
    ecx = ebp + (-0xA8); /* 0x120C6027: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E069C); /* 0x120C602D: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6032: mov esi, eax */
    /* test esi, esi */ /* 0x120C6034: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C6036: js 0x120c6671 */
L_120C603C:
    eax = ebp + (-0xFC); /* 0x120C603C: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C6042: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C6043: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6048: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C604A: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C604D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C604F: je 0x120c66aa */
L_120C6055:
    ecx = esi; /* 0x120C6055: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C6057: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x120C605C: fldz  */
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C605E: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C6062: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C6065: fld dword ptr [ebp - 0x84] */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C606B: mov dword ptr [ebp - 0x64], ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C606E: fst dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C6071: fstp dword ptr [ebp - 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C612C; /* 0x120C6074: jle 0x120c612c */
L_120C607A:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C607A: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C607D: mov ebx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C6080: fld qword ptr [0x12001758] */
    edi = MEM32(ebp + (-0x6C)); /* 0x120C6086: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C6089: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120C608B: fmul st(1), st(0) */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C608D: mov dword ptr [ebp - 0x70], esi */
    fp_push(1.0); /* 0x120C6090: fld1  */
    _st[2] += _st[0]; /* 0x120C6092: fadd st(2), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6094: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C6097: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120C6099: fmulp st(4) */
    fp_push(_st[1]); /* 0x120C609B: fld st(1) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120C609D: fsubrp st(4) */
    fp_xch(3); /* 0x120C609F: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C60A1: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C60A4: fld dword ptr [ebp - 0x74] */
    goto L_120C60B3; /* 0x120C60A7: jmp 0x120c60b3 */
L_120C60A9:
    fp_xch(1); /* 0x120C60A9: fxch st(1) */
    fp_xch(3); /* 0x120C60AB: fxch st(3) */
    fp_xch(1); /* 0x120C60AD: fxch st(1) */
    fp_xch(2); /* 0x120C60AF: fxch st(2) */
    fp_xch(1); /* 0x120C60B1: fxch st(1) */
L_120C60B3:
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C60B3: fild dword ptr [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C60B6: push dword ptr [ebp - 0x88] */
    eax = ebp + (-0x10); /* 0x120C60BC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C60BF: push eax */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120C60C0: fmulp st(3) */
    eax = ebp + (-0x1C); /* 0x120C60C2: lea eax, [ebp - 0x1c] */
    fp_xch(2); /* 0x120C60C5: fxch st(2) */
    PUSH32(esp, eax); /* 0x120C60C7: push eax */
    PUSH32(esp, ebx); /* 0x120C60C8: push ebx */
    _st[0] += _st[1]; /* 0x120C60C9: fadd st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120C60CB: fmulp st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120C60CD: fsubp st(2) */
    fp_xch(1); /* 0x120C60CF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C60D1: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C60D4: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120C60D7: fld dword ptr [0x12001748] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C60DD: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C60E0: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C60E6: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C60E9: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120C60EC: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C60EE: inc esi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C60EF: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C60F2: mov dword ptr [ebp - 0x70], esi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C60F5: fld qword ptr [0x12001758] */
    /* cmp esi, edi */ /* 0x120C60FB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C60A9; /* 0x120C60FD: jl 0x120c60a9 */
L_120C60FF:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C60FF: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C6102: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C6104: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C6107: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C6109: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C610C: fstp st(0) */
    eax = MEM32(esi); /* 0x120C610E: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6110: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C6112: push 0 */
    PUSH32(esp, ebx); /* 0x120C6114: push ebx */
    ecx = esi; /* 0x120C6115: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6117: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C611A: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C611B: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, edi */ /* 0x120C611E: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C607A; /* 0x120C6120: jl 0x120c607a */
L_120C6126:
    edi = MEM32(ebp + (-0x90)); /* 0x120C6126: mov edi, dword ptr [ebp - 0x90] */
L_120C612C:
    eax = MEM32(esi); /* 0x120C612C: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C612E: push 1 */
    ecx = esi; /* 0x120C6130: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C6132: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C6134: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C6137: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6148; /* 0x120C6139: je 0x120c6148 */
L_120C613B:
    eax = MEM32(ecx); /* 0x120C613B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C613D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C613E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C6141: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C6143: mov dword ptr [ebp - 0x60], ebx */
    goto L_120C614A; /* 0x120C6146: jmp 0x120c614a */
L_120C6148:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C6148: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C614A:
    eax = MEM32(edi); /* 0x120C614A: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C614C: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C614F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C6150: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 2); /* 0x120C6153: push 2 */
    PUSH32(esp, edi); /* 0x120C6155: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C6156: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6159: mov esi, eax */
    /* test esi, esi */ /* 0x120C615B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C615D: js 0x120c6671 */
L_120C6163:
    PUSH32(esp, ebx); /* 0x120C6163: push ebx */
    PUSH32(esp, ebx); /* 0x120C6164: push ebx */
    PUSH32(esp, ebx); /* 0x120C6165: push ebx */
    PUSH32(esp, ebx); /* 0x120C6166: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C6167: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xFC); /* 0x120C616A: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C6170: push eax */
    ecx = ebp + (-0xA8); /* 0x120C6171: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E069C); /* 0x120C6177: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C617C: mov esi, eax */
    /* test esi, esi */ /* 0x120C617E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C6180: js 0x120c6671 */
L_120C6186:
    eax = ebp + (-0xFC); /* 0x120C6186: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C618C: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C618D: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6192: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C6194: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C6197: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C6199: je 0x120c66aa */
L_120C619F:
    ecx = esi; /* 0x120C619F: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C61A1: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C61A6: fld dword ptr [ebp - 0x84] */
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C61AC: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C61B0: fst dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x120C61B3: fldz  */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C61B5: mov dword ptr [ebp - 0x64], ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C61B8: fstp dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C61BB: fstp dword ptr [ebp - 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C626E; /* 0x120C61BE: jle 0x120c626e */
L_120C61C4:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C61C4: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C61C7: mov ebx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C61CA: fld qword ptr [0x12001758] */
    edi = MEM32(ebp + (-0x6C)); /* 0x120C61D0: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C61D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120C61D5: fmul st(1), st(0) */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C61D7: mov dword ptr [ebp - 0x70], esi */
    fp_push(1.0); /* 0x120C61DA: fld1  */
    _st[2] += _st[0]; /* 0x120C61DC: fadd st(2), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C61DE: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C61E1: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120C61E3: fmulp st(4) */
    fp_xch(3); /* 0x120C61E5: fxch st(3) */
    _st[0] -= _st[1]; /* 0x120C61E7: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C61E9: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C61EC: fld dword ptr [ebp - 0x74] */
    goto L_120C61FB; /* 0x120C61EF: jmp 0x120c61fb */
L_120C61F1:
    fp_xch(1); /* 0x120C61F1: fxch st(1) */
    fp_xch(3); /* 0x120C61F3: fxch st(3) */
    fp_xch(1); /* 0x120C61F5: fxch st(1) */
    fp_xch(2); /* 0x120C61F7: fxch st(2) */
    fp_xch(1); /* 0x120C61F9: fxch st(1) */
L_120C61FB:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C61FB: push dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C6201: fstp dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x120C6204: fld1  */
    eax = ebp + (-0x10); /* 0x120C6206: lea eax, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C6209: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120C620C: push eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C620D: fild dword ptr [ebp - 0x70] */
    eax = ebp + (-0x1C); /* 0x120C6210: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x120C6213: push eax */
    PUSH32(esp, ebx); /* 0x120C6214: push ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C6215: fmulp st(2) */
    _st[1] += _st[0]; /* 0x120C6217: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C6219: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C621B: fmulp st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C621D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C621F: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C6222: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C6228: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C622B: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120C622E: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C6230: inc esi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6231: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C6234: mov dword ptr [ebp - 0x70], esi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C6237: fld qword ptr [0x12001758] */
    /* cmp esi, edi */ /* 0x120C623D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C61F1; /* 0x120C623F: jl 0x120c61f1 */
L_120C6241:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C6241: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C6244: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C6246: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C6249: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C624B: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C624E: fstp st(0) */
    eax = MEM32(esi); /* 0x120C6250: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6252: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C6254: push 0 */
    PUSH32(esp, ebx); /* 0x120C6256: push ebx */
    ecx = esi; /* 0x120C6257: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6259: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C625C: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C625D: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, edi */ /* 0x120C6260: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C61C4; /* 0x120C6262: jl 0x120c61c4 */
L_120C6268:
    edi = MEM32(ebp + (-0x90)); /* 0x120C6268: mov edi, dword ptr [ebp - 0x90] */
L_120C626E:
    eax = MEM32(esi); /* 0x120C626E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C6270: push 1 */
    ecx = esi; /* 0x120C6272: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C6274: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C6276: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C6279: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C628A; /* 0x120C627B: je 0x120c628a */
L_120C627D:
    eax = MEM32(ecx); /* 0x120C627D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C627F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6280: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C6283: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C6285: mov dword ptr [ebp - 0x60], ebx */
    goto L_120C628C; /* 0x120C6288: jmp 0x120c628c */
L_120C628A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C628A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C628C:
    eax = MEM32(edi); /* 0x120C628C: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C628E: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C6291: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C6292: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 3); /* 0x120C6295: push 3 */
    PUSH32(esp, edi); /* 0x120C6297: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C6298: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C629B: mov esi, eax */
    /* test esi, esi */ /* 0x120C629D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C629F: js 0x120c6671 */
L_120C62A5:
    PUSH32(esp, ebx); /* 0x120C62A5: push ebx */
    PUSH32(esp, ebx); /* 0x120C62A6: push ebx */
    PUSH32(esp, ebx); /* 0x120C62A7: push ebx */
    PUSH32(esp, ebx); /* 0x120C62A8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C62A9: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xFC); /* 0x120C62AC: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C62B2: push eax */
    ecx = ebp + (-0xA8); /* 0x120C62B3: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E069C); /* 0x120C62B9: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C62BE: mov esi, eax */
    /* test esi, esi */ /* 0x120C62C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C62C2: js 0x120c6671 */
L_120C62C8:
    eax = ebp + (-0xFC); /* 0x120C62C8: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C62CE: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C62CF: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C62D4: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C62D6: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C62D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C62DB: je 0x120c66aa */
L_120C62E1:
    ecx = esi; /* 0x120C62E1: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C62E3: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C62E8: fld dword ptr [ebp - 0x84] */
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C62EE: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C62F2: fst dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x120C62F5: fldz  */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C62F7: mov dword ptr [ebp - 0x64], ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C62FA: fstp dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C62FD: fstp dword ptr [ebp - 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C63B6; /* 0x120C6300: jle 0x120c63b6 */
L_120C6306:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C6306: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C6309: mov ebx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C630C: fld qword ptr [0x12001758] */
    edi = MEM32(ebp + (-0x6C)); /* 0x120C6312: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C6315: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120C6317: fmul st(1), st(0) */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C6319: mov dword ptr [ebp - 0x70], esi */
    fp_push(1.0); /* 0x120C631C: fld1  */
    _st[2] += _st[0]; /* 0x120C631E: fadd st(2), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6320: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C6323: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120C6325: fmulp st(4) */
    fp_push(_st[1]); /* 0x120C6327: fld st(1) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120C6329: fsubrp st(4) */
    fp_xch(3); /* 0x120C632B: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C632D: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C6330: fld dword ptr [ebp - 0x74] */
    goto L_120C633F; /* 0x120C6333: jmp 0x120c633f */
L_120C6335:
    fp_xch(1); /* 0x120C6335: fxch st(1) */
    fp_xch(3); /* 0x120C6337: fxch st(3) */
    fp_xch(1); /* 0x120C6339: fxch st(1) */
    fp_xch(2); /* 0x120C633B: fxch st(2) */
    fp_xch(1); /* 0x120C633D: fxch st(1) */
L_120C633F:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C633F: push dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C6345: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120C6348: fld dword ptr [0x12001748] */
    eax = ebp + (-0x10); /* 0x120C634E: lea eax, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C6351: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120C6354: push eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C6355: fild dword ptr [ebp - 0x70] */
    eax = ebp + (-0x1C); /* 0x120C6358: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x120C635B: push eax */
    PUSH32(esp, ebx); /* 0x120C635C: push ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C635D: fmulp st(2) */
    _st[1] += _st[0]; /* 0x120C635F: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C6361: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C6363: fmulp st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C6365: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C6367: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C636A: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C6370: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C6373: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120C6376: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C6378: inc esi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6379: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C637C: mov dword ptr [ebp - 0x70], esi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C637F: fld qword ptr [0x12001758] */
    /* cmp esi, edi */ /* 0x120C6385: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C6335; /* 0x120C6387: jl 0x120c6335 */
L_120C6389:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C6389: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C638C: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C638E: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C6391: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C6393: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6396: fstp st(0) */
    eax = MEM32(esi); /* 0x120C6398: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C639A: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C639C: push 0 */
    PUSH32(esp, ebx); /* 0x120C639E: push ebx */
    ecx = esi; /* 0x120C639F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C63A1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C63A4: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C63A5: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, edi */ /* 0x120C63A8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C6306; /* 0x120C63AA: jl 0x120c6306 */
L_120C63B0:
    edi = MEM32(ebp + (-0x90)); /* 0x120C63B0: mov edi, dword ptr [ebp - 0x90] */
L_120C63B6:
    eax = MEM32(esi); /* 0x120C63B6: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C63B8: push 1 */
    ecx = esi; /* 0x120C63BA: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C63BC: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C63BE: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C63C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C63D2; /* 0x120C63C3: je 0x120c63d2 */
L_120C63C5:
    eax = MEM32(ecx); /* 0x120C63C5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C63C7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C63C8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C63CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C63CD: mov dword ptr [ebp - 0x60], ebx */
    goto L_120C63D4; /* 0x120C63D0: jmp 0x120c63d4 */
L_120C63D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C63D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C63D4:
    eax = MEM32(edi); /* 0x120C63D4: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C63D6: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C63D9: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C63DA: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 4); /* 0x120C63DD: push 4 */
    PUSH32(esp, edi); /* 0x120C63DF: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C63E0: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C63E3: mov esi, eax */
    /* test esi, esi */ /* 0x120C63E5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C63E7: js 0x120c6671 */
L_120C63ED:
    PUSH32(esp, ebx); /* 0x120C63ED: push ebx */
    PUSH32(esp, ebx); /* 0x120C63EE: push ebx */
    PUSH32(esp, ebx); /* 0x120C63EF: push ebx */
    PUSH32(esp, ebx); /* 0x120C63F0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C63F1: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xFC); /* 0x120C63F4: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C63FA: push eax */
    ecx = ebp + (-0xA8); /* 0x120C63FB: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E069C); /* 0x120C6401: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6406: mov esi, eax */
    /* test esi, esi */ /* 0x120C6408: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C640A: js 0x120c6671 */
L_120C6410:
    eax = ebp + (-0xFC); /* 0x120C6410: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C6416: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C6417: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C641C: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C641E: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C6421: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C6423: je 0x120c66aa */
L_120C6429:
    ecx = esi; /* 0x120C6429: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C642B: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C6430: fld dword ptr [ebp - 0x84] */
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C6436: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C643A: fst dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C643D: fstp dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C6440: mov dword ptr [ebp - 0x64], ebx */
    fp_push(0.0); /* 0x120C6443: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C6445: fstp dword ptr [ebp - 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C64FA; /* 0x120C6448: jle 0x120c64fa */
L_120C644E:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C644E: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C6451: mov ebx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C6454: fld qword ptr [0x12001758] */
    edi = MEM32(ebp + (-0x6C)); /* 0x120C645A: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C645D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120C645F: fmul st(1), st(0) */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C6461: mov dword ptr [ebp - 0x70], esi */
    fp_push(1.0); /* 0x120C6464: fld1  */
    _st[2] += _st[0]; /* 0x120C6466: fadd st(2), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6468: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C646B: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120C646D: fmulp st(4) */
    fp_push(_st[1]); /* 0x120C646F: fld st(1) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120C6471: fsubrp st(4) */
    fp_xch(3); /* 0x120C6473: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C6475: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C6478: fld dword ptr [ebp - 0x74] */
    goto L_120C6487; /* 0x120C647B: jmp 0x120c6487 */
L_120C647D:
    fp_xch(1); /* 0x120C647D: fxch st(1) */
    fp_xch(3); /* 0x120C647F: fxch st(3) */
    fp_xch(1); /* 0x120C6481: fxch st(1) */
    fp_xch(2); /* 0x120C6483: fxch st(2) */
    fp_xch(1); /* 0x120C6485: fxch st(1) */
L_120C6487:
    fp_push(1.0); /* 0x120C6487: fld1  */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C6489: push dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C648F: fstp dword ptr [ebp - 0x14] */
    eax = ebp + (-0x10); /* 0x120C6492: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C6495: push eax */
    eax = ebp + (-0x1C); /* 0x120C6496: lea eax, [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C6499: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120C649C: push eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C649D: fild dword ptr [ebp - 0x70] */
    PUSH32(esp, ebx); /* 0x120C64A0: push ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C64A1: fmulp st(2) */
    _st[1] += _st[0]; /* 0x120C64A3: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C64A5: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C64A7: fmulp st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C64A9: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C64AB: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C64AE: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C64B4: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C64B7: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120C64BA: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C64BC: inc esi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C64BD: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C64C0: mov dword ptr [ebp - 0x70], esi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C64C3: fld qword ptr [0x12001758] */
    /* cmp esi, edi */ /* 0x120C64C9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C647D; /* 0x120C64CB: jl 0x120c647d */
L_120C64CD:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C64CD: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C64D0: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C64D2: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C64D5: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C64D7: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C64DA: fstp st(0) */
    eax = MEM32(esi); /* 0x120C64DC: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C64DE: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C64E0: push 0 */
    PUSH32(esp, ebx); /* 0x120C64E2: push ebx */
    ecx = esi; /* 0x120C64E3: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C64E5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C64E8: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C64E9: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, edi */ /* 0x120C64EC: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C644E; /* 0x120C64EE: jl 0x120c644e */
L_120C64F4:
    edi = MEM32(ebp + (-0x90)); /* 0x120C64F4: mov edi, dword ptr [ebp - 0x90] */
L_120C64FA:
    eax = MEM32(esi); /* 0x120C64FA: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C64FC: push 1 */
    ecx = esi; /* 0x120C64FE: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C6500: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C6502: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C6505: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6516; /* 0x120C6507: je 0x120c6516 */
L_120C6509:
    eax = MEM32(ecx); /* 0x120C6509: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C650B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C650C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C650F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C6511: mov dword ptr [ebp - 0x60], ebx */
    goto L_120C6518; /* 0x120C6514: jmp 0x120c6518 */
L_120C6516:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C6516: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6518:
    eax = MEM32(edi); /* 0x120C6518: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x60); /* 0x120C651A: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x120C651D: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120C651E: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 5); /* 0x120C6521: push 5 */
    PUSH32(esp, edi); /* 0x120C6523: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C6524: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6527: mov esi, eax */
    /* test esi, esi */ /* 0x120C6529: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C652B: js 0x120c6671 */
L_120C6531:
    PUSH32(esp, ebx); /* 0x120C6531: push ebx */
    PUSH32(esp, ebx); /* 0x120C6532: push ebx */
    PUSH32(esp, ebx); /* 0x120C6533: push ebx */
    PUSH32(esp, ebx); /* 0x120C6534: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C6535: push dword ptr [ebp - 0x60] */
    eax = ebp + (-0xFC); /* 0x120C6538: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C653E: push eax */
    ecx = ebp + (-0xA8); /* 0x120C653F: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E069C); /* 0x120C6545: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C654A: mov esi, eax */
    /* test esi, esi */ /* 0x120C654C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6671; /* 0x120C654E: js 0x120c6671 */
L_120C6554:
    eax = ebp + (-0xFC); /* 0x120C6554: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C655A: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C655B: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6560: mov esi, eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C6562: mov dword ptr [ebp - 0x7c], esi */
    /* test esi, esi */ /* 0x120C6565: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C66AA; /* 0x120C6567: je 0x120c66aa */
L_120C656D:
    ecx = esi; /* 0x120C656D: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C656F: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x120C6574: fld dword ptr [ebp - 0x84] */
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C657A: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C657E: fst dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C6581: fstp dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C6584: mov dword ptr [ebp - 0x64], ebx */
    fp_push(0.0); /* 0x120C6587: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C6589: fstp dword ptr [ebp - 8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C6643; /* 0x120C658C: jle 0x120c6643 */
L_120C6592:
    fp_push((double)(int32_t)MEM32(ebp + (-0x64))); /* 0x120C6592: fild dword ptr [ebp - 0x64] */
    ebx = MEM32(ebp + (-0x68)); /* 0x120C6595: mov ebx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C6598: fld qword ptr [0x12001758] */
    esi = MEM32(ebp + (-0x6C)); /* 0x120C659E: mov esi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C65A1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120C65A3: fmul st(1), st(0) */
    MEM32(ebp + (-0x70)) = edi; /* 0x120C65A5: mov dword ptr [ebp - 0x70], edi */
    fp_push(1.0); /* 0x120C65A8: fld1  */
    _st[2] += _st[0]; /* 0x120C65AA: fadd st(2), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C65AC: fld dword ptr [ebp - 0x78] */
    fp_push(_st[0]); /* 0x120C65AF: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120C65B1: fmulp st(4) */
    fp_push(_st[1]); /* 0x120C65B3: fld st(1) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120C65B5: fsubrp st(4) */
    fp_xch(3); /* 0x120C65B7: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C65B9: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C65BC: fld dword ptr [ebp - 0x74] */
    goto L_120C65CB; /* 0x120C65BF: jmp 0x120c65cb */
L_120C65C1:
    fp_xch(1); /* 0x120C65C1: fxch st(1) */
    fp_xch(3); /* 0x120C65C3: fxch st(3) */
    fp_xch(1); /* 0x120C65C5: fxch st(1) */
    fp_xch(2); /* 0x120C65C7: fxch st(2) */
    fp_xch(1); /* 0x120C65C9: fxch st(1) */
L_120C65CB:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120C65CB: fld dword ptr [0x12001748] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x120C65D1: push dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C65D7: fstp dword ptr [ebp - 0x14] */
    eax = ebp + (-0x10); /* 0x120C65DA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C65DD: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C65DE: fstp dword ptr [ebp - 0x18] */
    eax = ebp + (-0x1C); /* 0x120C65E1: lea eax, [ebp - 0x1c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x70))); /* 0x120C65E4: fild dword ptr [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x120C65E7: push eax */
    PUSH32(esp, ebx); /* 0x120C65E8: push ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C65E9: fmulp st(2) */
    _st[1] += _st[0]; /* 0x120C65EB: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C65ED: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C65EF: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C65F1: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C65F3: fstp dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x120C65F6: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C65FC: fld dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C65FF: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120C6602: fld1  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C6604: inc edi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120C6605: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x70)) = edi; /* 0x120C6608: mov dword ptr [ebp - 0x70], edi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120C660B: fld qword ptr [0x12001758] */
    /* cmp edi, esi */ /* 0x120C6611: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C65C1; /* 0x120C6613: jl 0x120c65c1 */
L_120C6615:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C6615: push dword ptr [ebp - 0x68] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C6618: fstp st(3) */
    esi = MEM32(ebp + (-0x7C)); /* 0x120C661A: mov esi, dword ptr [ebp - 0x7c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C661D: fstp st(1) */
    ebx = MEM32(ebp + (-0x64)); /* 0x120C661F: mov ebx, dword ptr [ebp - 0x64] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6622: fstp st(0) */
    eax = MEM32(esi); /* 0x120C6624: mov eax, dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6626: fstp st(0) */
    PUSH32(esp, 0); /* 0x120C6628: push 0 */
    PUSH32(esp, ebx); /* 0x120C662A: push ebx */
    ecx = esi; /* 0x120C662B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C662D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C6630: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ebx; /* 0x120C6631: mov dword ptr [ebp - 0x64], ebx */
    /* cmp ebx, MEM32(ebp + (-0x6C)) */ /* 0x120C6634: cmp ebx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x6C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C6592; /* 0x120C6637: jl 0x120c6592 */
L_120C663D:
    edi = MEM32(ebp + (-0x90)); /* 0x120C663D: mov edi, dword ptr [ebp - 0x90] */
L_120C6643:
    eax = MEM32(esi); /* 0x120C6643: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C6645: push 1 */
    ecx = esi; /* 0x120C6647: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C6649: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x120C664B: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C664E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C665C; /* 0x120C6650: je 0x120c665c */
L_120C6652:
    eax = MEM32(ecx); /* 0x120C6652: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C6654: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6655: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) & 0; /* 0x120C6658: and dword ptr [ebp - 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C665C:
    ebx = MEM32(ebp + (-0x80)); /* 0x120C665C: mov ebx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C665F: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x80)) = ebx; /* 0x120C6660: mov dword ptr [ebp - 0x80], ebx */
    /* cmp ebx, MEM32(ebp + (-0x94)) */ /* 0x120C6663: cmp ebx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x94)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C5E5C; /* 0x120C6669: jb 0x120c5e5c */
L_120C666F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C666F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6671:
    ebx = MEM32(ebp + (-0x68)); /* 0x120C6671: mov ebx, dword ptr [ebp - 0x68] */
L_120C6674:
    ecx = MEM32(ebp + (-0x60)); /* 0x120C6674: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x120C6677: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6685; /* 0x120C6679: je 0x120c6685 */
L_120C667B:
    eax = MEM32(ecx); /* 0x120C667B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C667D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C667E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) & 0; /* 0x120C6681: and dword ptr [ebp - 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6685:
    PUSH32(esp, ebx); /* 0x120C6685: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120C6686: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C668B: pop ecx */
L_120C668C:
    ecx = ebp + (-0xA8); /* 0x120C668C: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_120E0692); /* 0x120C6692: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C6697: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C6699: pop esi */
L_120C669A:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C669A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C669D: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C669E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C66A0: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C66A1: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C66A6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C66A7: ret 0xc */
L_120C66AA:
    esi = 0x8876086Cu; /* 0x120C66AA: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_120C6671; /* 0x120C66AF: jmp 0x120c6671 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120C66B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C66B6u);

L_120C66B6:
    edi = edi; /* 0x120C66B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C66B8: push ebp */
    ebp = esp; /* 0x120C66B9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x120C66BB: sub esp, 0xfc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C66C1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C66C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C66C8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C66CB: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) & 0; /* 0x120C66CE: and dword ptr [ebp - 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C66D2: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120C66D3: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120C66D6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C66D7: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x64); /* 0x120C66DA: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0xA8)) = edi; /* 0x120C66DD: mov dword ptr [ebp - 0xa8], edi */
    MEM32(ebp + (-0xA4)) = ebx; /* 0x120C66E3: mov dword ptr [ebp - 0xa4], ebx */
    MEM32(ebp + (-0xA0)) = eax; /* 0x120C66E9: mov dword ptr [ebp - 0xa0], eax */
    RECOMP_CALL(sub_120E065E); /* 0x120C66EF: call 0x120e065e */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120C66F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C670A; /* 0x120C66F6: jne 0x120c670a */
L_120C66F8:
    ecx = ebp + (-0x64); /* 0x120C66F8: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C66FB: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C6700: mov eax, 0x8876086c */
    goto L_120C6A06; /* 0x120C6705: jmp 0x120c6a06 */
L_120C670A:
    PUSH32(esp, esi); /* 0x120C670A: push esi */
    /* test ebx, ebx */ /* 0x120C670B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C6719; /* 0x120C670D: jne 0x120c6719 */
L_120C670F:
    esi = 0x8876086Cu; /* 0x120C670F: mov esi, 0x8876086c */
    goto L_120C69FB; /* 0x120C6714: jmp 0x120c69fb */
L_120C6719:
    eax = MEM32(edi); /* 0x120C6719: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120C671B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C671C: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x120C671F: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x94)) = eax; /* 0x120C6721: mov dword ptr [ebp - 0x94], eax */
    eax = ebp + (-0x54); /* 0x120C6727: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x120C672A: push eax */
    PUSH32(esp, 0); /* 0x120C672B: push 0 */
    PUSH32(esp, edi); /* 0x120C672D: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x120C672E: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6731: mov esi, eax */
    /* test esi, esi */ /* 0x120C6733: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C69FB; /* 0x120C6735: js 0x120c69fb */
L_120C673B:
    eax = MEM32(ebp + (-0x44)); /* 0x120C673B: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0x120014BCu); /* 0x120C673E: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6743: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C6745: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6747: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6748: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C674A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C674D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C674F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6751: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6752: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C6757: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x120C6759: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C675A: pop ecx */
    MEM32(ebp + (-0x60)) = ebx; /* 0x120C675B: mov dword ptr [ebp - 0x60], ebx */
    /* test ebx, ebx */ /* 0x120C675E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C676F; /* 0x120C6760: jne 0x120c676f */
L_120C6762:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C6762: mov ecx, dword ptr [ebp - 0x58] */
    esi = 0x8007000Eu; /* 0x120C6765: mov esi, 0x8007000e */
    goto L_120C69E6; /* 0x120C676A: jmp 0x120c69e6 */
L_120C676F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C676F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x90)) = ebx; /* 0x120C6771: mov dword ptr [ebp - 0x90], ebx */
    /* cmp MEM32(ebp + (-0x94)), ebx */ /* 0x120C6777: cmp dword ptr [ebp - 0x94], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C69DE; /* 0x120C677D: jbe 0x120c69de */
L_120C6783:
    eax = MEM32(edi); /* 0x120C6783: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x38); /* 0x120C6785: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x120C6788: push ecx */
    PUSH32(esp, ebx); /* 0x120C6789: push ebx */
    PUSH32(esp, edi); /* 0x120C678A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C678B: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C678E: mov esi, eax */
    /* test esi, esi */ /* 0x120C6790: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C69D9; /* 0x120C6792: js 0x120c69d9 */
L_120C6798:
    eax = MEM32(edi); /* 0x120C6798: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x58); /* 0x120C679A: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x120C679D: push ecx */
    PUSH32(esp, ebx); /* 0x120C679E: push ebx */
    PUSH32(esp, edi); /* 0x120C679F: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C67A0: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C67A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x64); /* 0x120C67A5: lea ecx, [ebp - 0x64] */
    /* test ebx, ebx */ /* 0x120C67A8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C67B3; /* 0x120C67AA: jne 0x120c67b3 */
L_120C67AC:
    PUSH32(esp, 0x00020000u); /* 0x120C67AC: push 0x20000 */
    goto L_120C67B4; /* 0x120C67B1: jmp 0x120c67b4 */
L_120C67B3:
    PUSH32(esp, eax); /* 0x120C67B3: push eax */
L_120C67B4:
    PUSH32(esp, eax); /* 0x120C67B4: push eax */
    PUSH32(esp, eax); /* 0x120C67B5: push eax */
    PUSH32(esp, eax); /* 0x120C67B6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x120C67B7: push dword ptr [ebp - 0x58] */
    eax = ebp + (-0xFC); /* 0x120C67BA: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C67C0: push eax */
    RECOMP_CALL(sub_120E0C9D); /* 0x120C67C1: call 0x120e0c9d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C67C6: mov esi, eax */
    /* test esi, esi */ /* 0x120C67C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C69D9; /* 0x120C67CA: js 0x120c69d9 */
L_120C67D0:
    eax = ebp + (-0xFC); /* 0x120C67D0: lea eax, [ebp - 0xfc] */
    PUSH32(esp, eax); /* 0x120C67D6: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C67D7: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C67DC: mov esi, eax */
    MEM32(ebp + (-0x84)) = esi; /* 0x120C67DE: mov dword ptr [ebp - 0x84], esi */
    /* test esi, esi */ /* 0x120C67E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C69D4; /* 0x120C67E6: je 0x120c69d4 */
L_120C67EC:
    ecx = esi; /* 0x120C67EC: mov ecx, esi */
    RECOMP_CALL(sub_120CC9EE); /* 0x120C67EE: call 0x120cc9ee */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x28)); /* 0x120C67F3: mov edx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x24)); /* 0x120C67F6: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x20)); /* 0x120C67F9: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x6C)) = edx; /* 0x120C67FC: mov dword ptr [ebp - 0x6c], edx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x6C))); /* 0x120C67FF: fild dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x80)) = edx; /* 0x120C6802: mov dword ptr [ebp - 0x80], edx */
    MEM32(ebp + (-0x9C)) = ecx; /* 0x120C6805: mov dword ptr [ebp - 0x9c], ecx */
    MEM32(ebp + (-0x88)) = eax; /* 0x120C680B: mov dword ptr [ebp - 0x88], eax */
    /* test edx, edx */ /* 0x120C6811: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C681B; /* 0x120C6813: jns 0x120c681b */
L_120C6815:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C6815: fadd dword ptr [0x120014d0] */
L_120C681B:
    fp_push(1.0); /* 0x120C681B: fld1  */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x120C681D: mov dword ptr [ebp - 0x6c], ecx */
    fp_push(_st[0]); /* 0x120C6820: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120C6822: fdivrp st(2) */
    fp_xch(1); /* 0x120C6824: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120C6826: fstp dword ptr [ebp - 0x68] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x6C))); /* 0x120C6829: fild dword ptr [ebp - 0x6c] */
    /* test ecx, ecx */ /* 0x120C682C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C6836; /* 0x120C682E: jns 0x120c6836 */
L_120C6830:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C6830: fadd dword ptr [0x120014d0] */
L_120C6836:
    fp_push(_st[1]); /* 0x120C6836: fld st(1) */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C6838: mov dword ptr [ebp - 0x6c], eax */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120C683B: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120C683D: fstp dword ptr [ebp - 0x74] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x6C))); /* 0x120C6840: fild dword ptr [ebp - 0x6c] */
    /* test eax, eax */ /* 0x120C6843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C684D; /* 0x120C6845: jns 0x120c684d */
L_120C6847:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120C6847: fadd dword ptr [0x120014d0] */
L_120C684D:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x120C684D: fdivp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C684F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C6851: mov dword ptr [ebp - 0x5c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x120C6854: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C6857: fld dword ptr [ebp - 0x68] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C685A: fst dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C685D: fld dword ptr [ebp - 0x74] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C6860: fst dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x120C6863: fld dword ptr [ebp - 0x70] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C6866: fst dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + (-0x88)), eax */ /* 0x120C6869: cmp dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C699F; /* 0x120C686F: jle 0x120c699f */
L_120C6875:
    edi = MEM32(ebp + (-0x84)); /* 0x120C6875: mov edi, dword ptr [ebp - 0x84] */
    ebx = MEM32(ebp + (-0x88)); /* 0x120C687B: mov ebx, dword ptr [ebp - 0x88] */
L_120C6881:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C6881: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C6883: mov dword ptr [ebp - 0x7c], esi */
    /* test ecx, ecx */ /* 0x120C6886: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6981; /* 0x120C6888: jle 0x120c6981 */
L_120C688E:
    ebx = MEM32(ebp + (-0x5C)); /* 0x120C688E: mov ebx, dword ptr [ebp - 0x5c] */
L_120C6891:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x120C6891: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x60)); /* 0x120C6895: mov eax, dword ptr [ebp - 0x60] */
    /* test edx, edx */ /* 0x120C6898: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6939; /* 0x120C689A: jle 0x120c6939 */
L_120C68A0:
    fp_push((double)(int32_t)MEM32(ebp + (-0x7C))); /* 0x120C68A0: fild dword ptr [ebp - 0x7c] */
    edi = MEM32(ebp + (-0x78)); /* 0x120C68A3: mov edi, dword ptr [ebp - 0x78] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120C68A6: fld qword ptr [0x120014c0] */
    esi = MEM32(ebp + (-0xA4)); /* 0x120C68AC: mov esi, dword ptr [ebp - 0xa4] */
    ebx = eax; /* 0x120C68B2: mov ebx, eax */
    _st[1] += _st[0]; /* 0x120C68B4: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C68B6: fxch st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120C68B8: fmulp st(3) */
    fp_xch(2); /* 0x120C68BA: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120C68BC: fstp dword ptr [ebp - 0x8c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x5C))); /* 0x120C68C2: fild dword ptr [ebp - 0x5c] */
    _st[0] += _st[2]; /* 0x120C68C5: fadd st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120C68C7: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C68C9: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120C68CF: fld dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120C68D5: fld dword ptr [ebp - 0x98] */
    goto L_120C68E3; /* 0x120C68DB: jmp 0x120c68e3 */
L_120C68DD:
    fp_xch(3); /* 0x120C68DD: fxch st(3) */
    fp_xch(1); /* 0x120C68DF: fxch st(1) */
    fp_xch(2); /* 0x120C68E1: fxch st(2) */
L_120C68E3:
    fp_push((double)(int32_t)MEM32(ebp + (-0x78))); /* 0x120C68E3: fild dword ptr [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x120C68E6: push dword ptr [ebp - 0xa0] */
    eax = ebp + (-0x10); /* 0x120C68EC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120C68EF: push eax */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120C68F0: faddp st(3) */
    eax = ebp + (-0x1C); /* 0x120C68F2: lea eax, [ebp - 0x1c] */
    fp_xch(2); /* 0x120C68F5: fxch st(2) */
    PUSH32(esp, eax); /* 0x120C68F7: push eax */
    PUSH32(esp, ebx); /* 0x120C68F8: push ebx */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120C68F9: fmulp st(3) */
    fp_xch(2); /* 0x120C68FB: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C68FD: fstp dword ptr [ebp - 0x1c] */
    fp_xch(1); /* 0x120C6900: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C6902: fstp dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C6905: fstp dword ptr [ebp - 0x14] */
    RECOMP_ICALL(esi); /* 0x120C6908: call esi */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120C690A: fld dword ptr [ebp - 0x8c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120C6910: add ebx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120C6913: fld dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C6919: inc edi */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120C691A: fld qword ptr [0x120014c0] */
    MEM32(ebp + (-0x78)) = edi; /* 0x120C6920: mov dword ptr [ebp - 0x78], edi */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C6923: fld dword ptr [ebp - 0x68] */
    /* cmp edi, MEM32(ebp + (-0x80)) */ /* 0x120C6926: cmp edi, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x80)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C68DD; /* 0x120C6929: jl 0x120c68dd */
L_120C692B:
    esi = MEM32(ebp + (-0x7C)); /* 0x120C692B: mov esi, dword ptr [ebp - 0x7c] */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120C692E: fstp st(3) */
    edi = MEM32(ebp + (-0x84)); /* 0x120C6930: mov edi, dword ptr [ebp - 0x84] */
    ebx = MEM32(ebp + (-0x5C)); /* 0x120C6936: mov ebx, dword ptr [ebp - 0x5c] */
L_120C6939:
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C6939: push dword ptr [ebp - 0x60] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C693C: fstp st(1) */
    eax = MEM32(edi); /* 0x120C693E: mov eax, dword ptr [edi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6940: fstp st(0) */
    PUSH32(esp, ebx); /* 0x120C6942: push ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6943: fstp st(0) */
    PUSH32(esp, esi); /* 0x120C6945: push esi */
    ecx = edi; /* 0x120C6946: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6948: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C694B: fld dword ptr [ebp - 0x68] */
    ecx = MEM32(ebp + (-0x9C)); /* 0x120C694E: mov ecx, dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C6954: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x120C6957: fld dword ptr [ebp - 0x70] */
    edx = MEM32(ebp + (-0x80)); /* 0x120C695A: mov edx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C695D: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = esi; /* 0x120C695E: mov dword ptr [ebp - 0x7c], esi */
    /* cmp esi, ecx */ /* 0x120C6961: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C6891; /* 0x120C6963: jl 0x120c6891 */
L_120C6969:
    eax = MEM32(ebp + (-0x5C)); /* 0x120C6969: mov eax, dword ptr [ebp - 0x5c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C696C: fstp st(1) */
    ebx = MEM32(ebp + (-0x88)); /* 0x120C696E: mov ebx, dword ptr [ebp - 0x88] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6974: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C6976: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120C6978: fld dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120C697B: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x120C697E: fld dword ptr [ebp - 0x70] */
L_120C6981:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C6981: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C6982: mov dword ptr [ebp - 0x5c], eax */
    /* cmp eax, ebx */ /* 0x120C6985: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C6881; /* 0x120C6987: jl 0x120c6881 */
L_120C698D:
    edi = MEM32(ebp + (-0xA8)); /* 0x120C698D: mov edi, dword ptr [ebp - 0xa8] */
    ebx = MEM32(ebp + (-0x90)); /* 0x120C6993: mov ebx, dword ptr [ebp - 0x90] */
    esi = MEM32(ebp + (-0x84)); /* 0x120C6999: mov esi, dword ptr [ebp - 0x84] */
L_120C699F:
    eax = MEM32(esi); /* 0x120C699F: mov eax, dword ptr [esi] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C69A1: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C69A3: fstp st(0) */
    PUSH32(esp, 1); /* 0x120C69A5: push 1 */
    ecx = esi; /* 0x120C69A7: mov ecx, esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C69A9: fstp st(0) */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C69AB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x58)); /* 0x120C69AD: mov ecx, dword ptr [ebp - 0x58] */
    /* test ecx, ecx */ /* 0x120C69B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C69BF; /* 0x120C69B2: je 0x120c69bf */
L_120C69B4:
    eax = MEM32(ecx); /* 0x120C69B4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C69B6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C69B7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C69BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = ecx; /* 0x120C69BC: mov dword ptr [ebp - 0x58], ecx */
L_120C69BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C69BF: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x90)) = ebx; /* 0x120C69C0: mov dword ptr [ebp - 0x90], ebx */
    /* cmp ebx, MEM32(ebp + (-0x94)) */ /* 0x120C69C6: cmp ebx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x94)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C6783; /* 0x120C69CC: jb 0x120c6783 */
L_120C69D2:
    goto L_120C69E1; /* 0x120C69D2: jmp 0x120c69e1 */
L_120C69D4:
    esi = 0x8876086Cu; /* 0x120C69D4: mov esi, 0x8876086c */
L_120C69D9:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C69D9: mov ecx, dword ptr [ebp - 0x58] */
    goto L_120C69E3; /* 0x120C69DC: jmp 0x120c69e3 */
L_120C69DE:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C69DE: mov ecx, dword ptr [ebp - 0x58] */
L_120C69E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C69E1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C69E3:
    ebx = MEM32(ebp + (-0x60)); /* 0x120C69E3: mov ebx, dword ptr [ebp - 0x60] */
L_120C69E6:
    /* test ecx, ecx */ /* 0x120C69E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C69F4; /* 0x120C69E8: je 0x120c69f4 */
L_120C69EA:
    eax = MEM32(ecx); /* 0x120C69EA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C69EC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C69ED: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) & 0; /* 0x120C69F0: and dword ptr [ebp - 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C69F4:
    PUSH32(esp, ebx); /* 0x120C69F4: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120C69F5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C69FA: pop ecx */
L_120C69FB:
    ecx = ebp + (-0x64); /* 0x120C69FB: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C69FE: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C6A03: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C6A05: pop esi */
L_120C6A06:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C6A06: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C6A09: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C6A0A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C6A0C: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C6A0D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6A12: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C6A13: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C6A1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6A1Bu);

L_120C6A1B:
    edi = edi; /* 0x120C6A1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6A1D: push ebp */
    ebp = esp; /* 0x120C6A1E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x120C6A20: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C6A23: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C6A28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C6A2A: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0x14); /* 0x120C6A2D: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x120C6A30: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C6A33: fld dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120C6A35: push esi */
    PUSH32(esp, 3); /* 0x120C6A36: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x64)) = _v; } /* 0x120C6A38: fstp qword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C6A3B: fld dword ptr [eax + 4] */
    ecx = MEM32(ebp + 0x10); /* 0x120C6A3E: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x120C6A41: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120C6A43: fstp qword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C6A46: fld dword ptr [ecx] */
    PUSH32(esp, 3); /* 0x120C6A48: push 3 */
    PUSH32(esp, 0); /* 0x120C6A4A: push 0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x44)) = _v; } /* 0x120C6A4C: fstp qword ptr [ebp - 0x44] */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x120C6A4F: push dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C6A52: fld dword ptr [ecx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x120C6A55: mov esi, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120C6A58: fstp qword ptr [ebp - 0x3c] */
    PUSH32(esp, 7); /* 0x120C6A5B: push 7 */
    eax = ebp + (-0x24); /* 0x120C6A5D: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6A60: push eax */
    PUSH32(esp, eax); /* 0x120C6A61: push eax */
    PUSH32(esp, eax); /* 0x120C6A62: push eax */
    PUSH32(esp, 0); /* 0x120C6A63: push 0 */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x120C6A65: push dword ptr [edx + 4] */
    eax = ebp + (-0x64); /* 0x120C6A68: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x120C6A6B: push eax */
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x120C6A6C: push dword ptr [edx + 8] */
    PUSH32(esp, MEM32(edx)); /* 0x120C6A6F: push dword ptr [edx] */
    RECOMP_CALL(sub_120EDDBA); /* 0x120C6A71: call 0x120eddba */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x120C6A76: fld qword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120C6A79: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C6A7C: fstp dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x120C6A7E: fld qword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C6A81: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120C6A83: fstp dword ptr [esi + 4] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x120C6A86: fld qword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x120C6A89: fstp dword ptr [esi + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x120C6A8C: fld qword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x120C6A8F: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x120C6A92: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C6A93: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6A98: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C6A99: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C6AA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6AA1u);

L_120C6AA1:
    edi = edi; /* 0x120C6AA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6AA3: push ebp */
    ebp = esp; /* 0x120C6AA4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x120C6AA6: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C6AA9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C6AAE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C6AB0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C6AB3: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120C6AB6: fld dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x120C6AB8: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120C6ABB: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x64)) = _v; } /* 0x120C6ABC: fstp qword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120C6ABF: fld dword ptr [eax + 4] */
    ecx = MEM32(ebp + 0x10); /* 0x120C6AC2: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x120C6AC5: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120C6AC7: fstp qword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120C6ACA: fld dword ptr [eax + 8] */
    PUSH32(esp, 3); /* 0x120C6ACD: push 3 */
    PUSH32(esp, 3); /* 0x120C6ACF: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x120C6AD1: fstp qword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C6AD4: fld dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C6AD6: push 0 */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x120C6AD8: push dword ptr [edx + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x44)) = _v; } /* 0x120C6ADB: fstp qword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C6ADE: fld dword ptr [ecx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x120C6AE1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 7); /* 0x120C6AE4: push 7 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120C6AE6: fstp qword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120C6AE9: fld dword ptr [ecx + 8] */
    eax = ebp + (-0x24); /* 0x120C6AEC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6AEF: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x120C6AF0: fstp qword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120C6AF3: push eax */
    PUSH32(esp, eax); /* 0x120C6AF4: push eax */
    PUSH32(esp, 0); /* 0x120C6AF5: push 0 */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x120C6AF7: push dword ptr [edx + 4] */
    eax = ebp + (-0x64); /* 0x120C6AFA: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x120C6AFD: push eax */
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x120C6AFE: push dword ptr [edx + 8] */
    PUSH32(esp, MEM32(edx)); /* 0x120C6B01: push dword ptr [edx] */
    RECOMP_CALL(sub_120EDDBA); /* 0x120C6B03: call 0x120eddba */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x120C6B08: fld qword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120C6B0B: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C6B0E: fstp dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x120C6B10: fld qword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C6B13: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120C6B15: fstp dword ptr [esi + 4] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x120C6B18: fld qword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x120C6B1B: fstp dword ptr [esi + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x120C6B1E: fld qword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x120C6B21: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x120C6B24: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C6B25: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6B2A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C6B2B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C6B33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6B33u);

L_120C6B33:
    edi = edi; /* 0x120C6B33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6B35: push ebp */
    ebp = esp; /* 0x120C6B36: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x120C6B38: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120C6B3B: push ebx */
    PUSH32(esp, edi); /* 0x120C6B3C: push edi */
    edi = eax; /* 0x120C6B3D: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C6B3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x120C6B41: mov ebx, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C6B43: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x120C6B46: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x120C6B49: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120C6B4C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C6B5B; /* 0x120C6B4F: jne 0x120c6b5b */
L_120C6B51:
    eax = 0x8876086Cu; /* 0x120C6B51: mov eax, 0x8876086c */
    goto L_120C6BF8; /* 0x120C6B56: jmp 0x120c6bf8 */
L_120C6B5B:
    /* test ebx, ebx */ /* 0x120C6B5B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6B51; /* 0x120C6B5D: je 0x120c6b51 */
L_120C6B5F:
    eax = MEM32(ebx); /* 0x120C6B5F: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x120C6B61: push esi */
    ecx = ebp + (-0xC); /* 0x120C6B62: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x120C6B65: push ecx */
    PUSH32(esp, ebx); /* 0x120C6B66: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120C6B67: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6B6A: mov esi, eax */
    /* test esi, esi */ /* 0x120C6B6C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6BC9; /* 0x120C6B6E: js 0x120c6bc9 */
L_120C6B70:
    eax = MEM32(ebp + (-0xC)); /* 0x120C6B70: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x120C6B73: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C6B75: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C6B76: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x120C6B79: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x120C6B7C: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x120C6B7F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C6B81: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120C6B82: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6B85: mov esi, eax */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x120C6B87: shr esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 4u; /* 0x120C6B87: shr esi, 4 */
    PUSH32(esp, 4); /* 0x120C6B8A: push 4 */
    eax = POP32_VAL(esp); /* 0x120C6B8C: pop eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120C6B8D: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120C6B8D: shl esi, 2 */
    MEM32(ebp + (-0x10)) = eax; /* 0x120C6B90: mov dword ptr [ebp - 0x10], eax */
    /* cmp esi, eax */ /* 0x120C6B93: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C6BA0; /* 0x120C6B95: jbe 0x120c6ba0 */
L_120C6B97:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120C6B97: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x120C6B99: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C6B97; /* 0x120C6B9B: jb 0x120c6b97 */
L_120C6B9D:
    MEM32(ebp + (-0x10)) = eax; /* 0x120C6B9D: mov dword ptr [ebp - 0x10], eax */
L_120C6BA0:
    PUSH32(esp, 0x120014BCu); /* 0x120C6BA0: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6BA5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x120C6BA7: push 8 */
    edx = POP32_VAL(esp); /* 0x120C6BA9: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6BAA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6BAC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6BAF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6BB1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6BB3: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6BB4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C6BB9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C6BBA: pop ecx */
    ecx = eax; /* 0x120C6BBB: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120C6BBD: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x120C6BC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C6BFE; /* 0x120C6BC2: jne 0x120c6bfe */
L_120C6BC4:
    esi = 0x8007000Eu; /* 0x120C6BC4: mov esi, 0x8007000e */
L_120C6BC9:
    ebx = MEM32(ebp + (-0x4)); /* 0x120C6BC9: mov ebx, dword ptr [ebp - 4] */
L_120C6BCC:
    ecx = MEM32(ebp + (-0x8)); /* 0x120C6BCC: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120C6BCF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6BDD; /* 0x120C6BD1: je 0x120c6bdd */
L_120C6BD3:
    eax = MEM32(ecx); /* 0x120C6BD3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C6BD5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6BD6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120C6BD9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6BDD:
    ecx = MEM32(ebp + (-0xC)); /* 0x120C6BDD: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x120C6BE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6BEE; /* 0x120C6BE2: je 0x120c6bee */
L_120C6BE4:
    eax = MEM32(ecx); /* 0x120C6BE4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C6BE6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C6BE7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120C6BEA: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C6BEE:
    PUSH32(esp, ebx); /* 0x120C6BEE: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120C6BEF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C6BF4: pop ecx */
    eax = esi; /* 0x120C6BF5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C6BF7: pop esi */
L_120C6BF8:
    edi = POP32_VAL(esp); /* 0x120C6BF8: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C6BF9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6BFA: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C6BFB: ret 4 */
L_120C6BFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C6BFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120C6C00: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6C12; /* 0x120C6C02: je 0x120c6c12 */
L_120C6C04:
    edx = MEM32(ebp + (-0x14)); /* 0x120C6C04: mov edx, dword ptr [ebp - 0x14] */
L_120C6C07:
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x120C6C07: fld dword ptr [edx + eax*4] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + eax * 8) = _v; } /* 0x120C6C0A: fstp qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C6C0D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x120C6C0E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C6C07; /* 0x120C6C10: jb 0x120c6c07 */
L_120C6C12:
    eax = MEM32(ebx); /* 0x120C6C12: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x8); /* 0x120C6C14: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x120C6C17: push ecx */
    PUSH32(esp, ebx); /* 0x120C6C18: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C6C19: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6C1C: mov esi, eax */
    /* test esi, esi */ /* 0x120C6C1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6BC9; /* 0x120C6C20: js 0x120c6bc9 */
L_120C6C22:
    eax = ebp + (-0x1C); /* 0x120C6C22: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x120C6C25: push eax */
    eax = ebp + (-0x24); /* 0x120C6C26: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6C29: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120C6C2A: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120C6C2D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C6C2F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120C6C30: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120C6C33: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120C6C34: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120C6C37: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C6C39: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C6C3A: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120C6C3D: push eax */
    RECOMP_CALL(sub_120EE9EF); /* 0x120C6C3E: call 0x120ee9ef */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x120C6C43: mov ebx, dword ptr [ebp - 4] */
    esi = eax; /* 0x120C6C46: mov esi, eax */
    /* test esi, esi */ /* 0x120C6C48: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6BCC; /* 0x120C6C4A: js 0x120c6bcc */
L_120C6C4C:
    eax = MEM32(ebp + (-0x10)); /* 0x120C6C4C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C6C4F: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 0); /* 0x120C6C50: push 0 */
    PUSH32(esp, 0); /* 0x120C6C52: push 0 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x120C6C54: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x18)) = eax; /* 0x120C6C57: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_121BF562); /* 0x120C6C5A: call 0x121bf562 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x120C6C5F: push 0x30000 */
    PUSH32(esp, 0); /* 0x120C6C64: push 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x120C6C66: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_121BF562); /* 0x120C6C69: call 0x121bf562 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120C6C6E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x120C6C71: sub edi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6CA2; /* 0x120C6C74: je 0x120c6ca2 */
L_120C6C76:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C6C76: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6C8F; /* 0x120C6C77: je 0x120c6c8f */
L_120C6C79:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120C6C79: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C6CB5; /* 0x120C6C7A: jne 0x120c6cb5 */
L_120C6C7C:
    eax = ebp + (-0x24); /* 0x120C6C7C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6C7F: push eax */
    PUSH32(esp, 0x120C6AA1u); /* 0x120C6C80: push 0x120c6aa1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6C85: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C5D8F); /* 0x120C6C88: call 0x120c5d8f */
    RECOMP_FLAGS_IN();
    goto L_120C6CB3; /* 0x120C6C8D: jmp 0x120c6cb3 */
L_120C6C8F:
    eax = ebp + (-0x24); /* 0x120C6C8F: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6C92: push eax */
    PUSH32(esp, 0x120C6AA1u); /* 0x120C6C93: push 0x120c6aa1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6C98: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C66B6); /* 0x120C6C9B: call 0x120c66b6 */
    RECOMP_FLAGS_IN();
    goto L_120C6CB3; /* 0x120C6CA0: jmp 0x120c6cb3 */
L_120C6CA2:
    eax = ebp + (-0x24); /* 0x120C6CA2: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x120C6CA5: push eax */
    PUSH32(esp, 0x120C6A1Bu); /* 0x120C6CA6: push 0x120c6a1b */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6CAB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C5AE9); /* 0x120C6CAE: call 0x120c5ae9 */
    RECOMP_FLAGS_IN();
L_120C6CB3:
    esi = eax; /* 0x120C6CB3: mov esi, eax */
L_120C6CB5:
    RECOMP_CALL(sub_121BF57A); /* 0x120C6CB5: call 0x121bf57a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x120C6CBA: push 0x30000 */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120C6CBF: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_121BF562); /* 0x120C6CC2: call 0x121bf562 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C6CC7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C6CC8: pop ecx */
    /* test esi, esi */ /* 0x120C6CC9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6BCC; /* 0x120C6CCB: js 0x120c6bcc */
L_120C6CD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C6CD1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120C6BCC; /* 0x120C6CD3: jmp 0x120c6bcc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120C6CDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6CDDu);

L_120C6CDD:
    edi = edi; /* 0x120C6CDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6CDF: push ebp */
    ebp = esp; /* 0x120C6CE0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6CE2: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120C6CE5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x120C6CE8: push 3 */
    eax = POP32_VAL(esp); /* 0x120C6CEA: pop eax */
    RECOMP_CALL(sub_120C6B33); /* 0x120C6CEB: call 0x120c6b33 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C6CF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C6CF1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C6CF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6CF9u);

L_120C6CF9:
    edi = edi; /* 0x120C6CF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6CFB: push ebp */
    ebp = esp; /* 0x120C6CFC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6CFE: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120C6D01: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 5); /* 0x120C6D04: push 5 */
    eax = POP32_VAL(esp); /* 0x120C6D06: pop eax */
    RECOMP_CALL(sub_120C6B33); /* 0x120C6D07: call 0x120c6b33 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C6D0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C6D0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C6D15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6D15u);

L_120C6D15:
    edi = edi; /* 0x120C6D15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6D17: push ebp */
    ebp = esp; /* 0x120C6D18: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C6D1A: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120C6D1D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120C6D20: push 4 */
    eax = POP32_VAL(esp); /* 0x120C6D22: pop eax */
    RECOMP_CALL(sub_120C6B33); /* 0x120C6D23: call 0x120c6b33 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C6D28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C6D29: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C6D31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6D31u);

L_120C6D31:
    edi = edi; /* 0x120C6D31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6D33: push ebp */
    ebp = esp; /* 0x120C6D34: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C6D36: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C6D37: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6D84; /* 0x120C6D38: je 0x120c6d84 */
L_120C6D3A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C6D3A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6D7F; /* 0x120C6D3B: je 0x120c6d7f */
L_120C6D3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C6D3D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C6D3E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6D7A; /* 0x120C6D3F: je 0x120c6d7a */
L_120C6D41:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x120C6D41: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6D75; /* 0x120C6D44: je 0x120c6d75 */
L_120C6D46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x120C6D46: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C6D4F; /* 0x120C6D49: je 0x120c6d4f */
L_120C6D4B:
    fp_push(0.0); /* 0x120C6D4B: fldz  */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D4E: ret  */
L_120C6D4F:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C6D4F: fld dword ptr [ecx + 4] */
    _st[0] *= *(double*)ADDR(0x12005440); /* 0x120C6D52: fmul qword ptr [0x12005440] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C6D58: fld dword ptr [ecx] */
    _st[0] *= *(double*)ADDR(0x12005448); /* 0x120C6D5A: fmul qword ptr [0x12005448] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120C6D60: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120C6D62: fld dword ptr [ecx + 8] */
    _st[0] *= *(double*)ADDR(0x12005438); /* 0x120C6D65: fmul qword ptr [0x12005438] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120C6D6B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120C6D6D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120C6D70: fld dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D73: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D74: ret  */
L_120C6D75:
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120C6D75: fld dword ptr [ecx + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D78: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D79: ret  */
L_120C6D7A:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120C6D7A: fld dword ptr [ecx + 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D7D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D7E: ret  */
L_120C6D7F:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120C6D7F: fld dword ptr [ecx + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D82: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D83: ret  */
L_120C6D84:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120C6D84: fld dword ptr [ecx] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C6D86: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120C6D87: ret  */
    RECOMP_REGS_OUT();
}

void sub_120C6D8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C6D8Du);

L_120C6D8D:
    edi = edi; /* 0x120C6D8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C6D8F: push ebp */
    ebp = esp; /* 0x120C6D90: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1C8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1C8u; /* 0x120C6D92: sub esp, 0x1c8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C6D98: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C6D9D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C6D9F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C6DA2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120C6DA5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C6DA6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120C6DA9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120C6DAA: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xDC)) = eax; /* 0x120C6DAD: mov dword ptr [ebp - 0xdc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C6DB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x100); /* 0x120C6DB5: lea ecx, [ebp - 0x100] */
    MEM32(ebp + (-0xE8)) = ebx; /* 0x120C6DBB: mov dword ptr [ebp - 0xe8], ebx */
    MEM32(ebp + (-0xC0)) = esi; /* 0x120C6DC1: mov dword ptr [ebp - 0xc0], esi */
    MEM32(ebp + (-0xCC)) = eax; /* 0x120C6DC7: mov dword ptr [ebp - 0xcc], eax */
    MEM32(ebp + (-0xC4)) = eax; /* 0x120C6DCD: mov dword ptr [ebp - 0xc4], eax */
    MEM32(ebp + (-0xB4)) = eax; /* 0x120C6DD3: mov dword ptr [ebp - 0xb4], eax */
    MEM32(ebp + (-0xB0)) = eax; /* 0x120C6DD9: mov dword ptr [ebp - 0xb0], eax */
    RECOMP_CALL(sub_120E04A2); /* 0x120C6DDF: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x114); /* 0x120C6DE4: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_120E04A2); /* 0x120C6DEA: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C6DEF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C6E13; /* 0x120C6DF1: jne 0x120c6e13 */
L_120C6DF3:
    ecx = ebp + (-0x114); /* 0x120C6DF3: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_120E0692); /* 0x120C6DF9: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x100); /* 0x120C6DFE: lea ecx, [ebp - 0x100] */
    RECOMP_CALL(sub_120E0692); /* 0x120C6E04: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C6E09: mov eax, 0x8876086c */
    goto L_120C79B2; /* 0x120C6E0E: jmp 0x120c79b2 */
L_120C6E13:
    /* test esi, esi */ /* 0x120C6E13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6DF3; /* 0x120C6E15: je 0x120c6df3 */
L_120C6E17:
    PUSH32(esp, edi); /* 0x120C6E17: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120C6E18: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120C6E1B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C6E25; /* 0x120C6E1E: jne 0x120c6e25 */
L_120C6E20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C6E20: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = edi; /* 0x120C6E22: mov dword ptr [ebp + 0x14], edi */
L_120C6E25:
    /* test edi, 0xFFE4FFFFu */ /* 0x120C6E25: test edi, 0xffe4ffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFE4FFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6E2B: jne 0x120c7977 */
L_120C6E31:
    eax = MEM32(ebp + 0x18); /* 0x120C6E31: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x120C6E34: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C6E3F; /* 0x120C6E37: jne 0x120c6e3f */
L_120C6E39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C6E39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C6E3B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x18) = eax; /* 0x120C6E3C: mov dword ptr [ebp + 0x18], eax */
L_120C6E3F:
    /* test eax, eax */ /* 0x120C6E3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7996; /* 0x120C6E41: je 0x120c7996 */
L_120C6E47:
    PUSH32(esp, 4); /* 0x120C6E47: push 4 */
    ecx = POP32_VAL(esp); /* 0x120C6E49: pop ecx */
    PUSH32(esp, 0x10u); /* 0x120C6E4A: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6E4C: pop edx */
    /* cmp eax, 2 */ /* 0x120C6E4D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C6E63; /* 0x120C6E50: jbe 0x120c6e63 */
L_120C6E52:
    /* cmp eax, ecx */ /* 0x120C6E52: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C6E63; /* 0x120C6E54: je 0x120c6e63 */
L_120C6E56:
    /* cmp eax, 8 */ /* 0x120C6E56: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C6E63; /* 0x120C6E59: je 0x120c6e63 */
L_120C6E5B:
    /* cmp eax, edx */ /* 0x120C6E5B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7996; /* 0x120C6E5D: jne 0x120c7996 */
L_120C6E63:
    eax = MEM32(ebx); /* 0x120C6E63: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x90); /* 0x120C6E65: lea ecx, [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x120C6E6B: push ecx */
    PUSH32(esp, 0); /* 0x120C6E6C: push 0 */
    PUSH32(esp, ebx); /* 0x120C6E6E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C6E6F: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C6E72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C6E80; /* 0x120C6E74: jns 0x120c6e80 */
L_120C6E76:
    esi = 0x80004005u; /* 0x120C6E76: mov esi, 0x80004005 */
    goto L_120C797C; /* 0x120C6E7B: jmp 0x120c797c */
L_120C6E80:
    eax = MEM32(esi); /* 0x120C6E80: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x50); /* 0x120C6E82: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x120C6E85: push ecx */
    PUSH32(esp, 0); /* 0x120C6E86: push 0 */
    PUSH32(esp, esi); /* 0x120C6E88: push esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C6E89: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C6E8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C6E76; /* 0x120C6E8E: js 0x120c6e76 */
L_120C6E90:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x120C6E90: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_120C4C05); /* 0x120C6E93: call 0x120c4c05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x120C6E98: push dword ptr [ebp - 0x90] */
    esi = eax; /* 0x120C6E9E: mov esi, eax */
    RECOMP_CALL(sub_120C4C05); /* 0x120C6EA0: call 0x120c4c05 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x120C6EA5: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EA8: je 0x120c7977 */
L_120C6EAE:
    /* cmp MEM32(eax), 0 */ /* 0x120C6EAE: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EB1: je 0x120c7977 */
L_120C6EB7:
    ecx = MEM32(esi + 0x4); /* 0x120C6EB7: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x120C6EBA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C6ED1; /* 0x120C6EBC: je 0x120c6ed1 */
L_120C6EBE:
    /* cmp ecx, 1 */ /* 0x120C6EBE: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C6ED1; /* 0x120C6EC1: je 0x120c6ed1 */
L_120C6EC3:
    /* cmp ecx, 2 */ /* 0x120C6EC3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C6ED1; /* 0x120C6EC6: je 0x120c6ed1 */
L_120C6EC8:
    /* cmp ecx, 4 */ /* 0x120C6EC8: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6ECB: jne 0x120c7977 */
L_120C6ED1:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x120C6ED1: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C6EE1; /* 0x120C6ED5: je 0x120c6ee1 */
L_120C6ED7:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x120C6ED7: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EDB: jne 0x120c7977 */
L_120C6EE1:
    /* cmp MEM32(eax + 0x14), 2 */ /* 0x120C6EE1: cmp dword ptr [eax + 0x14], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EE5: jb 0x120c7977 */
L_120C6EEB:
    /* cmp MEM32(eax + 0x18), 2 */ /* 0x120C6EEB: cmp dword ptr [eax + 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EEF: jb 0x120c7977 */
L_120C6EF5:
    /* cmp MEM32(eax + 0x1C), 2 */ /* 0x120C6EF5: cmp dword ptr [eax + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6EF9: jb 0x120c7977 */
L_120C6EFF:
    eax = MEM32(ebp + (-0x38)); /* 0x120C6EFF: mov eax, dword ptr [ebp - 0x38] */
    /* cmp eax, MEM32(ebp + (-0x78)) */ /* 0x120C6F02: cmp eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6F05: jne 0x120c7977 */
L_120C6F0B:
    eax = MEM32(ebp + (-0x34)); /* 0x120C6F0B: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, MEM32(ebp + (-0x74)) */ /* 0x120C6F0E: cmp eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6F11: jne 0x120c7977 */
L_120C6F17:
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C6F17: mov ecx, dword ptr [ebp - 0xc0] */
    eax = MEM32(ecx); /* 0x120C6F1D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C6F1F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C6F20: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6F23: mov esi, eax */
    eax = MEM32(ebx); /* 0x120C6F25: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x120C6F27: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C6F28: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xBC)) = eax; /* 0x120C6F2B: mov dword ptr [ebp - 0xbc], eax */
    /* cmp esi, eax */ /* 0x120C6F31: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7977; /* 0x120C6F33: jne 0x120c7977 */
L_120C6F39:
    eax = MEM32(ebx); /* 0x120C6F39: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x70); /* 0x120C6F3B: lea ecx, [ebp - 0x70] */
    PUSH32(esp, ecx); /* 0x120C6F3E: push ecx */
    PUSH32(esp, 0); /* 0x120C6F3F: push 0 */
    PUSH32(esp, ebx); /* 0x120C6F41: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C6F42: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6F45: mov esi, eax */
    /* test esi, esi */ /* 0x120C6F47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C797C; /* 0x120C6F49: js 0x120c797c */
L_120C6F4F:
    eax = MEM32(ebp + (-0x58)); /* 0x120C6F4F: mov eax, dword ptr [ebp - 0x58] */
    esi = 0x120014BCu; /* 0x120C6F52: mov esi, 0x120014bc */
    PUSH32(esp, esi); /* 0x120C6F57: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6F58: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C6F5A: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6F5C: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6F5D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6F5F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6F62: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6F64: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6F66: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6F67: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120C6F6C: push esi */
    MEM32(ebp + (-0xB8)) = eax; /* 0x120C6F6D: mov dword ptr [ebp - 0xb8], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C6F73: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6F76: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C6F78: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6F7A: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6F7B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6F7D: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6F80: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6F82: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6F84: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6F85: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120C6F8A: push esi */
    MEM32(ebp + (-0xC8)) = eax; /* 0x120C6F8B: mov dword ptr [ebp - 0xc8], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C6F91: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6F94: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C6F96: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6F98: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6F99: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6F9B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6F9E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6FA0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6FA2: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6FA3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120C6FA8: push esi */
    MEM32(ebp + (-0xD4)) = eax; /* 0x120C6FA9: mov dword ptr [ebp - 0xd4], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C6FAF: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6FB2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x120C6FB4: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120C6FB6: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6FB7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6FB9: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6FBC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6FBE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6FC0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6FC1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C6FC6: mov esi, eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C6FC8: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 0x120014BCu); /* 0x120C6FCB: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6FD0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120C6FD2: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120C6FD4: add eax, 2 */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x120C6FD7: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C6FD8: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C6FDA: seto cl */
    MEM32(ebp + (-0xD0)) = esi; /* 0x120C6FDD: mov dword ptr [ebp - 0xd0], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C6FE3: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C6FE5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C6FE7: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C6FE8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA0)) = eax; /* 0x120C6FED: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C6FF3: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 0x120014BCu); /* 0x120C6FF6: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C6FFB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120C6FFD: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120C6FFF: add eax, 2 */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x120C7002: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C7003: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C7005: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C7008: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C700A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C700C: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C700D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x9C)) = eax; /* 0x120C7012: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120C7018: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 0x120014BCu); /* 0x120C701B: push 0x120014bc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120C7020: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7023: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120C7025: push 4 */
    edx = POP32_VAL(esp); /* 0x120C7027: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C7028: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C702A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C702D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C702F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C7031: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C7032: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x120C7037: add esp, 0x38 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xC8)), 0 */ /* 0x120C703A: cmp dword ptr [ebp - 0xc8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xA8)) = eax; /* 0x120C7041: mov dword ptr [ebp - 0xa8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C7047: je 0x120c78d0 */
L_120C704D:
    /* cmp MEM32(ebp + (-0xD4)), 0 */ /* 0x120C704D: cmp dword ptr [ebp - 0xd4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C7054: je 0x120c78d0 */
L_120C705A:
    /* test esi, esi */ /* 0x120C705A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C705C: je 0x120c78d0 */
L_120C7062:
    /* cmp MEM32(ebp + (-0xB8)), 0 */ /* 0x120C7062: cmp dword ptr [ebp - 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C7069: je 0x120c78d0 */
L_120C706F:
    /* cmp MEM32(ebp + (-0xA0)), 0 */ /* 0x120C706F: cmp dword ptr [ebp - 0xa0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C7076: je 0x120c78d0 */
L_120C707C:
    /* cmp MEM32(ebp + (-0x9C)), 0 */ /* 0x120C707C: cmp dword ptr [ebp - 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x9C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C7083: je 0x120c78d0 */
L_120C7089:
    /* test eax, eax */ /* 0x120C7089: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78D0; /* 0x120C708B: je 0x120c78d0 */
L_120C7091:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C7091: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD8)) = esi; /* 0x120C7093: mov dword ptr [ebp - 0xd8], esi */
    /* cmp MEM32(ebp + (-0xBC)), esi */ /* 0x120C7099: cmp dword ptr [ebp - 0xbc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C787E; /* 0x120C709F: jbe 0x120c787e */
L_120C70A5:
    eax = MEM32(ebx); /* 0x120C70A5: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0xB0); /* 0x120C70A7: lea ecx, [ebp - 0xb0] */
    PUSH32(esp, ecx); /* 0x120C70AD: push ecx */
    PUSH32(esp, esi); /* 0x120C70AE: push esi */
    PUSH32(esp, ebx); /* 0x120C70AF: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C70B0: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C70B3: mov ecx, dword ptr [ebp - 0xc0] */
    eax = MEM32(ecx); /* 0x120C70B9: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xB4); /* 0x120C70BB: lea edx, [ebp - 0xb4] */
    PUSH32(esp, edx); /* 0x120C70C1: push edx */
    PUSH32(esp, esi); /* 0x120C70C2: push esi */
    PUSH32(esp, ecx); /* 0x120C70C3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C70C4: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C70C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x100); /* 0x120C70C9: lea ecx, [ebp - 0x100] */
    /* test esi, esi */ /* 0x120C70CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C70DA; /* 0x120C70D1: jne 0x120c70da */
L_120C70D3:
    PUSH32(esp, 0x00020000u); /* 0x120C70D3: push 0x20000 */
    goto L_120C70DB; /* 0x120C70D8: jmp 0x120c70db */
L_120C70DA:
    PUSH32(esp, eax); /* 0x120C70DA: push eax */
L_120C70DB:
    PUSH32(esp, eax); /* 0x120C70DB: push eax */
    PUSH32(esp, eax); /* 0x120C70DC: push eax */
    PUSH32(esp, eax); /* 0x120C70DD: push eax */
    PUSH32(esp, MEM32(ebp + (-0xB0))); /* 0x120C70DE: push dword ptr [ebp - 0xb0] */
    eax = ebp + (-0x174); /* 0x120C70E4: lea eax, [ebp - 0x174] */
    PUSH32(esp, eax); /* 0x120C70EA: push eax */
    RECOMP_CALL(sub_120E069C); /* 0x120C70EB: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C70F0: mov esi, eax */
    /* test esi, esi */ /* 0x120C70F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C78F7; /* 0x120C70F4: js 0x120c78f7 */
L_120C70FA:
    eax = ebp + (-0x1C8); /* 0x120C70FA: lea eax, [ebp - 0x1c8] */
    ecx = ebp + (-0x114); /* 0x120C7100: lea ecx, [ebp - 0x114] */
    /* cmp ebx, MEM32(ebp + (-0xC0)) */ /* 0x120C7106: cmp ebx, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7115; /* 0x120C710C: jne 0x120c7115 */
L_120C710E:
    PUSH32(esp, 0x00010001u); /* 0x120C710E: push 0x10001 */
    goto L_120C7117; /* 0x120C7113: jmp 0x120c7117 */
L_120C7115:
    PUSH32(esp, 1); /* 0x120C7115: push 1 */
L_120C7117:
    PUSH32(esp, 0); /* 0x120C7117: push 0 */
    PUSH32(esp, 0); /* 0x120C7119: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xDC))); /* 0x120C711B: push dword ptr [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x120C7121: push dword ptr [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x120C7127: push eax */
    RECOMP_CALL(sub_120E069C); /* 0x120C7128: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C712D: mov esi, eax */
    /* test esi, esi */ /* 0x120C712F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C78F7; /* 0x120C7131: js 0x120c78f7 */
L_120C7137:
    eax = MEM32(ebx); /* 0x120C7137: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x90); /* 0x120C7139: lea ecx, [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x120C713F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x120C7140: push dword ptr [ebp - 0xd8] */
    PUSH32(esp, ebx); /* 0x120C7146: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C7147: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C714A: mov esi, eax */
    /* test esi, esi */ /* 0x120C714C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C78F7; /* 0x120C714E: js 0x120c78f7 */
L_120C7154:
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C7154: mov ecx, dword ptr [ebp - 0xc0] */
    eax = MEM32(ecx); /* 0x120C715A: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x50); /* 0x120C715C: lea edx, [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x120C715F: push edx */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x120C7160: push dword ptr [ebp - 0xd8] */
    PUSH32(esp, ecx); /* 0x120C7166: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C7167: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C716A: mov esi, eax */
    /* test esi, esi */ /* 0x120C716C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C78F7; /* 0x120C716E: js 0x120c78f7 */
L_120C7174:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x130))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x130)) = MEM32(ebp + (-0x130)) & 0; /* 0x120C7174: and dword ptr [ebp - 0x130], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0; /* 0x120C717B: and dword ptr [ebp - 0x134], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x1C8); /* 0x120C7182: lea eax, [ebp - 0x1c8] */
    PUSH32(esp, eax); /* 0x120C7188: push eax */
    RECOMP_CALL(sub_120D6352); /* 0x120C7189: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C718E: mov esi, eax */
    eax = ebp + (-0x174); /* 0x120C7190: lea eax, [ebp - 0x174] */
    PUSH32(esp, eax); /* 0x120C7196: push eax */
    MEM32(ebp + (-0xCC)) = esi; /* 0x120C7197: mov dword ptr [ebp - 0xcc], esi */
    RECOMP_CALL(sub_120D6352); /* 0x120C719D: call 0x120d6352 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C71A2: mov ebx, eax */
    MEM32(ebp + (-0xC4)) = ebx; /* 0x120C71A4: mov dword ptr [ebp - 0xc4], ebx */
    /* test esi, esi */ /* 0x120C71AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78C5; /* 0x120C71AC: je 0x120c78c5 */
L_120C71B2:
    /* test ebx, ebx */ /* 0x120C71B2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78C5; /* 0x120C71B4: je 0x120c78c5 */
L_120C71BA:
    ebx = MEM32(ebp + (-0xB8)); /* 0x120C71BA: mov ebx, dword ptr [ebp - 0xb8] */
    eax = MEM32(ebp + (-0x34)); /* 0x120C71C0: mov eax, dword ptr [ebp - 0x34] */
    edx = MEM32(esi); /* 0x120C71C3: mov edx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120C71C5: push ebx */
    PUSH32(esp, 0); /* 0x120C71C6: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C71C8: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x120C71C9: push eax */
    ecx = esi; /* 0x120C71CA: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x120C71CC: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC8))); /* 0x120C71CF: push dword ptr [ebp - 0xc8] */
    eax = MEM32(esi); /* 0x120C71D5: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x120C71D7: push 0 */
    PUSH32(esp, 0); /* 0x120C71D9: push 0 */
    ecx = esi; /* 0x120C71DB: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120C71DD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C71E0: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120C71E3: add eax, eax */
    _flag_k = FK_ADD;
    ecx = ebx + eax * 8 + (-0x10); /* 0x120C71E5: lea ecx, [ebx + eax*8 - 0x10] */
    ebx = MEM32(ebp + 0x18); /* 0x120C71E9: mov ebx, dword ptr [ebp + 0x18] */
    eax = ebx; /* 0x120C71EC: mov eax, ebx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C71EE: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xA0)); /* 0x120C71F3: mov edx, dword ptr [ebp - 0xa0] */
    esi = MEM32(ebp + (-0xC8)); /* 0x120C71F9: mov esi, dword ptr [ebp - 0xc8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120C71FF: fstp dword ptr [edx] */
    eax = MEM32(ebp + (-0x38)); /* 0x120C7201: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120C7204: add eax, eax */
    _flag_k = FK_ADD;
    ecx = esi + eax * 8 + (-0x10); /* 0x120C7206: lea ecx, [esi + eax*8 - 0x10] */
    eax = ebx; /* 0x120C720A: mov eax, ebx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C720C: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x9C)); /* 0x120C7211: mov eax, dword ptr [ebp - 0x9c] */
    ecx = MEM32(ebp + (-0xB8)); /* 0x120C7217: mov ecx, dword ptr [ebp - 0xb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120C721D: fstp dword ptr [eax] */
    eax = ebx; /* 0x120C721F: mov eax, ebx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C7221: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C7226: mov eax, dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax * 4 + 0x4) = _v; } /* 0x120C7229: fstp dword ptr [edx + eax*4 + 4] */
    eax = ebx; /* 0x120C722D: mov eax, ebx */
    ecx = esi; /* 0x120C722F: mov ecx, esi */
    RECOMP_CALL(sub_120C6D31); /* 0x120C7231: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C7236: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0x9C)); /* 0x120C7239: mov ecx, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xAC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xAC)) = MEM32(ebp + (-0xAC)) & 0; /* 0x120C723F: and dword ptr [ebp - 0xac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4 + 0x4) = _v; } /* 0x120C7246: fstp dword ptr [ecx + eax*4 + 4] */
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x120C724A: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C72A1; /* 0x120C724E: jle 0x120c72a1 */
L_120C7250:
    ebx = MEM32(ebp + (-0xA0)); /* 0x120C7250: mov ebx, dword ptr [ebp - 0xa0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x120C7256: mov edi, dword ptr [ebp - 0xb8] */
    edx = esi; /* 0x120C725C: mov edx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x120C725E: sub ebx, ecx */
    _flag_k = FK_CMP;
    esi = ecx + 0x4; /* 0x120C7260: lea esi, [ecx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120C7263: sub edi, edx */
    _flag_k = FK_CMP;
L_120C7265:
    eax = MEM32(ebp + 0x18); /* 0x120C7265: mov eax, dword ptr [ebp + 0x18] */
    ecx = edi + edx; /* 0x120C7268: lea ecx, [edi + edx] */
    RECOMP_CALL(sub_120C6D31); /* 0x120C726B: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi) = _v; } /* 0x120C7270: fstp dword ptr [ebx + esi] */
    eax = MEM32(ebp + 0x18); /* 0x120C7273: mov eax, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120C7276: mov ecx, edx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C7278: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C727D: fstp dword ptr [esi] */
    eax = MEM32(ebp + (-0xAC)); /* 0x120C727F: mov eax, dword ptr [ebp - 0xac] */
    PUSH32(esp, 0x10u); /* 0x120C7285: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x120C7287: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x120C7288: add edx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x120C728A: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C728C: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x120C728D: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x120C728E: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xAC)) = eax; /* 0x120C7290: mov dword ptr [ebp - 0xac], eax */
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x120C7296: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7265; /* 0x120C7299: jl 0x120c7265 */
L_120C729B:
    edi = MEM32(ebp + 0x14); /* 0x120C729B: mov edi, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x18); /* 0x120C729E: mov ebx, dword ptr [ebp + 0x18] */
L_120C72A1:
    ecx = MEM32(ebp + (-0x34)); /* 0x120C72A1: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C72A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xAC)) = eax; /* 0x120C72A6: mov dword ptr [ebp - 0xac], eax */
    /* test ecx, ecx */ /* 0x120C72AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7817; /* 0x120C72AE: jle 0x120c7817 */
L_120C72B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C72B4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C72B5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xE4)) = eax; /* 0x120C72B7: mov dword ptr [ebp - 0xe4], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120C72BD: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x120C72BF: push dword ptr [ebp - 0xd4] */
    esi = MEM32(ebp + (-0xCC)); /* 0x120C72C5: mov esi, dword ptr [ebp - 0xcc] */
    esi = MEM32(esi); /* 0x120C72CB: mov esi, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xCC)); /* 0x120C72CD: mov ecx, dword ptr [ebp - 0xcc] */
    PUSH32(esp, 0); /* 0x120C72D3: push 0 */
    PUSH32(esp, edx); /* 0x120C72D5: push edx */
    RECOMP_ICALL(MEM32(esi + 0x4)); /* 0x120C72D6: call dword ptr [esi + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C72D9: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x120C72DC: mov ecx, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120C72E2: add eax, eax */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 8 + (-0x10); /* 0x120C72E4: lea ecx, [ecx + eax*8 - 0x10] */
    eax = ebx; /* 0x120C72E8: mov eax, ebx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C72EA: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xA8)); /* 0x120C72EF: mov esi, dword ptr [ebp - 0xa8] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x120C72F5: mov ecx, dword ptr [ebp - 0xd4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C72FB: fstp dword ptr [esi] */
    eax = ebx; /* 0x120C72FD: mov eax, ebx */
    RECOMP_CALL(sub_120C6D31); /* 0x120C72FF: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C7304: mov eax, dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + eax * 4 + 0x4) = _v; } /* 0x120C7307: fstp dword ptr [esi + eax*4 + 4] */
    edx = MEM32(ebp + (-0x38)); /* 0x120C730B: mov edx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C730E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x120C7310: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7338; /* 0x120C7312: jle 0x120c7338 */
L_120C7314:
    edi = MEM32(ebp + 0x18); /* 0x120C7314: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120C7317: add esi, 4 */
    _flag_k = FK_ADD;
L_120C731A:
    eax = edi; /* 0x120C731A: mov eax, edi */
    RECOMP_CALL(sub_120C6D31); /* 0x120C731C: call 0x120c6d31 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120C7321: fstp dword ptr [esi] */
    edx = MEM32(ebp + (-0x38)); /* 0x120C7323: mov edx, dword ptr [ebp - 0x38] */
    PUSH32(esp, 0x10u); /* 0x120C7326: push 0x10 */
    eax = POP32_VAL(esp); /* 0x120C7328: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120C7329: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x120C732B: push 4 */
    eax = POP32_VAL(esp); /* 0x120C732D: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C732E: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x120C732F: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ebx, edx */ /* 0x120C7331: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C731A; /* 0x120C7333: jl 0x120c731a */
L_120C7335:
    edi = MEM32(ebp + 0x14); /* 0x120C7335: mov edi, dword ptr [ebp + 0x14] */
L_120C7338:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C7338: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x120C733A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C77BC; /* 0x120C733C: jle 0x120c77bc */
L_120C7342:
    fp_push(0.0); /* 0x120C7342: fldz  */
    eax = edi; /* 0x120C7344: mov eax, edi */
    fp_push(_st[0]); /* 0x120C7346: fld st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x120C7348: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x120C734D: fmul st(1) */
    MEM32(ebp + (-0xEC)) = eax; /* 0x120C734F: mov dword ptr [ebp - 0xec], eax */
    fp_push(1.0); /* 0x120C7355: fld1  */
    eax = edi; /* 0x120C7357: mov eax, edi */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C7359: fsubrp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x120C735B: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xE0)) = eax; /* 0x120C7360: mov dword ptr [ebp - 0xe0], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x120C7366: fstp dword ptr [ebp - 0x118] */
    fp_push(0.0); /* 0x120C736C: fldz  */
    goto L_120C7372; /* 0x120C736E: jmp 0x120c7372 */
L_120C7370:
    fp_xch(1); /* 0x120C7370: fxch st(1) */
L_120C7372:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7372: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C7374: fst dword ptr [ebp - 0x94] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C737A: mov dword ptr [ebp - 0x98], ecx */
    /* test ebx, ebx */ /* 0x120C7380: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C738C; /* 0x120C7382: jne 0x120c738c */
L_120C7384:
    /* test edi, 0x00010000u */ /* 0x120C7384: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C73EC; /* 0x120C738A: jne 0x120c73ec */
L_120C738C:
    esi = MEM32(ebp + (-0xAC)); /* 0x120C738C: mov esi, dword ptr [ebp - 0xac] */
    /* test esi, esi */ /* 0x120C7392: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C739E; /* 0x120C7394: jne 0x120c739e */
L_120C7396:
    /* test edi, 0x00020000u */ /* 0x120C7396: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C73BA; /* 0x120C739C: jne 0x120c73ba */
L_120C739E:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C739E: mov eax, dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x4)); /* 0x120C73A4: fld dword ptr [eax + ebx*4 + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C73A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4); /* 0x120C73AA: fadd dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C73AD: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C73AE: mov dword ptr [ebp - 0x98], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C73B4: fstp dword ptr [ebp - 0x94] */
L_120C73BA:
    eax = MEM32(ebp + (-0x34)); /* 0x120C73BA: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C73BD: dec eax */
    _flag_k = FK_DEC;
    /* cmp esi, eax */ /* 0x120C73BE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C73CA; /* 0x120C73C0: jl 0x120c73ca */
L_120C73C2:
    /* test edi, 0x00020000u */ /* 0x120C73C2: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C73F2; /* 0x120C73C8: jne 0x120c73f2 */
L_120C73CA:
    eax = MEM32(ebp + (-0xA8)); /* 0x120C73CA: mov eax, dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x4)); /* 0x120C73D0: fld dword ptr [eax + ebx*4 + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C73D4: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4); /* 0x120C73D5: fadd dword ptr [eax + ebx*4] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C73D8: mov dword ptr [ebp - 0x98], ecx */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x94)); /* 0x120C73DE: fadd dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C73E4: fstp dword ptr [ebp - 0x94] */
    goto L_120C73F2; /* 0x120C73EA: jmp 0x120c73f2 */
L_120C73EC:
    esi = MEM32(ebp + (-0xAC)); /* 0x120C73EC: mov esi, dword ptr [ebp - 0xac] */
L_120C73F2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120C73F2: dec edx */
    _flag_k = FK_DEC;
    /* cmp ebx, edx */ /* 0x120C73F3: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C73FF; /* 0x120C73F5: jl 0x120c73ff */
L_120C73F7:
    /* test edi, 0x00010000u */ /* 0x120C73F7: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7461; /* 0x120C73FD: jne 0x120c7461 */
L_120C73FF:
    /* test esi, esi */ /* 0x120C73FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C740B; /* 0x120C7401: jne 0x120c740b */
L_120C7403:
    /* test edi, 0x00020000u */ /* 0x120C7403: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C742E; /* 0x120C7409: jne 0x120c742e */
L_120C740B:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C740B: fld dword ptr [ebp - 0x94] */
    eax = MEM32(ebp + (-0xA0)); /* 0x120C7411: mov eax, dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x8)); /* 0x120C7417: fld dword ptr [eax + ebx*4 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C741B: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4 + 0x4); /* 0x120C741C: fadd dword ptr [eax + ebx*4 + 4] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C7420: mov dword ptr [ebp - 0x98], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C7426: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C7428: fstp dword ptr [ebp - 0x94] */
L_120C742E:
    eax = MEM32(ebp + (-0x34)); /* 0x120C742E: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C7431: dec eax */
    _flag_k = FK_DEC;
    /* cmp esi, eax */ /* 0x120C7432: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C743E; /* 0x120C7434: jl 0x120c743e */
L_120C7436:
    /* test edi, 0x00020000u */ /* 0x120C7436: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7461; /* 0x120C743C: jne 0x120c7461 */
L_120C743E:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C743E: fld dword ptr [ebp - 0x94] */
    eax = MEM32(ebp + (-0xA8)); /* 0x120C7444: mov eax, dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x8)); /* 0x120C744A: fld dword ptr [eax + ebx*4 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C744E: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4 + 0x4); /* 0x120C744F: fadd dword ptr [eax + ebx*4 + 4] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C7453: mov dword ptr [ebp - 0x98], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C7459: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C745B: fstp dword ptr [ebp - 0x94] */
L_120C7461:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C7461: fld dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120C7467: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x120C746A: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120C746C: fmulp st(2) */
    /* cmp ecx, 1 */ /* 0x120C746E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C747B; /* 0x120C7471: je 0x120c747b */
L_120C7473:
    fp_push((double)(int32_t)MEM32(ebp + (-0x98))); /* 0x120C7473: fild dword ptr [ebp - 0x98] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x120C7479: fdivp st(2) */
L_120C747B:
    fp_xch(1); /* 0x120C747B: fxch st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C747D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120C747F: fstp dword ptr [ebp - 0xa4] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C7485: mov dword ptr [ebp - 0x98], ecx */
    fp_xch(1); /* 0x120C748B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C748D: fstp dword ptr [ebp - 0x94] */
    /* test esi, esi */ /* 0x120C7493: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C749F; /* 0x120C7495: jne 0x120c749f */
L_120C7497:
    /* test edi, 0x00020000u */ /* 0x120C7497: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7507; /* 0x120C749D: jne 0x120c7507 */
L_120C749F:
    /* test ebx, ebx */ /* 0x120C749F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C74AB; /* 0x120C74A1: jne 0x120c74ab */
L_120C74A3:
    /* test edi, 0x00010000u */ /* 0x120C74A3: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C74CE; /* 0x120C74A9: jne 0x120c74ce */
L_120C74AB:
    eax = MEM32(ebp + (-0x9C)); /* 0x120C74AB: mov eax, dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(eax + ebx * 4)); /* 0x120C74B1: fld dword ptr [eax + ebx*4] */
    eax = MEM32(ebp + (-0xA0)); /* 0x120C74B4: mov eax, dword ptr [ebp - 0xa0] */
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4); /* 0x120C74BA: fadd dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C74BD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C74BF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C74C0: mov dword ptr [ebp - 0x98], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C74C6: fstp dword ptr [ebp - 0x94] */
    goto L_120C74D4; /* 0x120C74CC: jmp 0x120c74d4 */
L_120C74CE:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C74CE: mov eax, dword ptr [ebp - 0xa0] */
L_120C74D4:
    /* cmp ebx, edx */ /* 0x120C74D4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C74E0; /* 0x120C74D6: jl 0x120c74e0 */
L_120C74D8:
    /* test edi, 0x00010000u */ /* 0x120C74D8: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7507; /* 0x120C74DE: jne 0x120c7507 */
L_120C74E0:
    esi = MEM32(ebp + (-0x9C)); /* 0x120C74E0: mov esi, dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(esi + ebx * 4 + 0x8)); /* 0x120C74E6: fld dword ptr [esi + ebx*4 + 8] */
    esi = MEM32(ebp + (-0xAC)); /* 0x120C74EA: mov esi, dword ptr [ebp - 0xac] */
    _st[0] += (double)*(float*)ADDR(eax + ebx * 4 + 0x8); /* 0x120C74F0: fadd dword ptr [eax + ebx*4 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C74F4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C74F5: mov dword ptr [ebp - 0x98], ecx */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x94)); /* 0x120C74FB: fadd dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C7501: fstp dword ptr [ebp - 0x94] */
L_120C7507:
    eax = MEM32(ebp + (-0x34)); /* 0x120C7507: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C750A: dec eax */
    _flag_k = FK_DEC;
    /* cmp esi, eax */ /* 0x120C750B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7517; /* 0x120C750D: jl 0x120c7517 */
L_120C750F:
    /* test edi, 0x00020000u */ /* 0x120C750F: test edi, 0x20000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7581; /* 0x120C7515: jne 0x120c7581 */
L_120C7517:
    /* test ebx, ebx */ /* 0x120C7517: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7523; /* 0x120C7519: jne 0x120c7523 */
L_120C751B:
    /* test edi, 0x00010000u */ /* 0x120C751B: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C754C; /* 0x120C7521: jne 0x120c754c */
L_120C7523:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C7523: fld dword ptr [ebp - 0x94] */
    eax = MEM32(ebp + (-0xA8)); /* 0x120C7529: mov eax, dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(eax + ebx * 4)); /* 0x120C752F: fld dword ptr [eax + ebx*4] */
    esi = MEM32(ebp + (-0x9C)); /* 0x120C7532: mov esi, dword ptr [ebp - 0x9c] */
    _st[0] += (double)*(float*)ADDR(esi + ebx * 4); /* 0x120C7538: fadd dword ptr [esi + ebx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C753B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C753C: mov dword ptr [ebp - 0x98], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C7542: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C7544: fstp dword ptr [ebp - 0x94] */
    goto L_120C7558; /* 0x120C754A: jmp 0x120c7558 */
L_120C754C:
    eax = MEM32(ebp + (-0xA8)); /* 0x120C754C: mov eax, dword ptr [ebp - 0xa8] */
    esi = MEM32(ebp + (-0x9C)); /* 0x120C7552: mov esi, dword ptr [ebp - 0x9c] */
L_120C7558:
    /* cmp ebx, edx */ /* 0x120C7558: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7564; /* 0x120C755A: jl 0x120c7564 */
L_120C755C:
    /* test edi, 0x00010000u */ /* 0x120C755C: test edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7581; /* 0x120C7562: jne 0x120c7581 */
L_120C7564:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C7564: fld dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C756A: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x8)); /* 0x120C756B: fld dword ptr [eax + ebx*4 + 8] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x120C756F: mov dword ptr [ebp - 0x98], ecx */
    _st[0] += (double)*(float*)ADDR(esi + ebx * 4 + 0x8); /* 0x120C7575: fadd dword ptr [esi + ebx*4 + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C7579: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C757B: fstp dword ptr [ebp - 0x94] */
L_120C7581:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x94)); /* 0x120C7581: fmul dword ptr [ebp - 0x94] */
    /* cmp ecx, 1 */ /* 0x120C7587: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7592; /* 0x120C758A: je 0x120c7592 */
L_120C758C:
    _st[0] = _st[0] / (double)(int32_t)MEM32(ebp + (-0x98)); /* 0x120C758C: fidiv dword ptr [ebp - 0x98] */
L_120C7592:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C7592: fstp dword ptr [ebp - 0x98] */
    esi = ebp + (-0x120); /* 0x120C7598: lea esi, [ebp - 0x120] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120C759E: fld dword ptr [ebp - 0x98] */
    edi = ebp + (-0x30); /* 0x120C75A4: lea edi, [ebp - 0x30] */
    fp_push(_st[0]); /* 0x120C75A7: fld st(0) */
    eax = ebp + (-0x30); /* 0x120C75A9: lea eax, [ebp - 0x30] */
    _st[0] *= _st[2]; /* 0x120C75AC: fmul st(2) */
    PUSH32(esp, eax); /* 0x120C75AE: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120C75AF: fld dword ptr [ebp - 0xa4] */
    PUSH32(esp, eax); /* 0x120C75B5: push eax */
    fp_push(_st[0]); /* 0x120C75B6: fld st(0) */
    fp_push(*(double*)ADDR(0x120019C8)); /* 0x120C75B8: fld qword ptr [0x120019c8] */
    _st[1] *= _st[0]; /* 0x120C75BE: fmul st(1), st(0) */
    fp_xch(3); /* 0x120C75C0: fxch st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C75C2: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x120C75C4: fstp dword ptr [ebp - 0x120] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120C75CA: fmulp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120C75CC: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C75CE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x120C75D0: fstp dword ptr [ebp - 0x11c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C75D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C75D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C75D8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x120C75D9: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0xEC)), 0 */ /* 0x120C75DE: cmp dword ptr [ebp - 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xEC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x120C75E5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C75E7: fstp dword ptr [ebp - 0x94] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C76E4; /* 0x120C75ED: je 0x120c76e4 */
L_120C75F3:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C75F3: mov eax, dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(eax + ebx * 4)); /* 0x120C75F9: fld dword ptr [eax + ebx*4] */
    edx = MEM32(ebp + (-0x9C)); /* 0x120C75FC: mov edx, dword ptr [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120C7602: fstp dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7605: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x4)); /* 0x120C7607: fld dword ptr [eax + ebx*4 + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120C760B: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x8)); /* 0x120C760E: fld dword ptr [eax + ebx*4 + 8] */
    eax = MEM32(ebp + (-0xA8)); /* 0x120C7612: mov eax, dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120C7618: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(edx + ebx * 4)); /* 0x120C761B: fld dword ptr [edx + ebx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120C761E: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(edx + ebx * 4 + 0x8)); /* 0x120C7621: fld dword ptr [edx + ebx*4 + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120C7625: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + ebx * 4)); /* 0x120C7628: fld dword ptr [eax + ebx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120C762B: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x4)); /* 0x120C762E: fld dword ptr [eax + ebx*4 + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120C7632: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + ebx * 4 + 0x8)); /* 0x120C7635: fld dword ptr [eax + ebx*4 + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120C7639: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x120C763C: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C763E: fst dword ptr [ebp - 0x98] */
L_120C7644:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x24))); /* 0x120C7644: fld dword ptr [ebp + ecx*4 - 0x24] */
    _st[0] -= (double)*(float*)ADDR(edx + ebx * 4 + 0x4); /* 0x120C7648: fsub dword ptr [edx + ebx*4 + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120C764C: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120C7652: fld dword ptr [ebp - 0xa4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120C7658: fst dword ptr [ebp + ecx*4 - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C765C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C765E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120C7660: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120C7669; /* 0x120C7663: jp 0x120c7669 */
L_120C7665:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120C7665: fst dword ptr [ebp + ecx*4 - 0x24] */
L_120C7669:
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120C7669: fld dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C766F: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x28)); /* 0x120C7670: fadd dword ptr [ebp + ecx*4 - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C7674: fstp dword ptr [ebp - 0x98] */
    /* cmp ecx, 8 */ /* 0x120C767A: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7644; /* 0x120C767D: jl 0x120c7644 */
L_120C767F:
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120C767F: fld dword ptr [ebp + 0x1c] */
    _st[0] *= *(double*)ADDR(0x12005B98); /* 0x120C7682: fmul qword ptr [0x12005b98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x120C7688: fmul dword ptr [ebp - 0x98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120C768E: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120C7694: fld dword ptr [ebp - 0x98] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120C769A: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120C769C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120C769E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C76E8; /* 0x120C76A1: jne 0x120c76e8 */
L_120C76A3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C76A3: fstp st(1) */
    _st[0] *= _st[0]; /* 0x120C76A5: fmul st(0), st(0) */
    fp_push(1.0); /* 0x120C76A7: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120C76A9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120C76AB: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120C76B1: fld dword ptr [ebp - 0xa4] */
    RECOMP_CALL(sub_121BF44C); /* 0x120C76B7: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120C76BC: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120C76C2: fld dword ptr [ebp - 0xa4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120C76C8: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120C76CE: fld dword ptr [ebp - 0xa4] */
    fp_push(_st[0]); /* 0x120C76D4: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x120C76D6: fsub dword ptr [ebp - 0x98] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120C76DC: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120C76DE: fstp dword ptr [ebp - 0x94] */
L_120C76E4:
    fp_push(0.0); /* 0x120C76E4: fldz  */
    goto L_120C76EA; /* 0x120C76E6: jmp 0x120c76ea */
L_120C76E8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C76E8: fstp st(0) */
L_120C76EA:
    esi = MEM32(ebp + (-0xC4)); /* 0x120C76EA: mov esi, dword ptr [ebp - 0xc4] */
    ecx = MEM32(ebp + (-0xD0)); /* 0x120C76F0: mov ecx, dword ptr [ebp - 0xd0] */
    eax = ebx; /* 0x120C76F6: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120C76F8: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x8), 1 */ /* 0x120C76FA: cmp dword ptr [esi + 8], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C774B; /* 0x120C76FE: je 0x120c774b */
L_120C7700:
    /* cmp MEM32(ebp + (-0xE0)), 0 */ /* 0x120C7700: cmp dword ptr [ebp - 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xE0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120C7707: fld dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8) = _v; } /* 0x120C770A: fstp dword ptr [ecx + eax*8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120C770D: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x4) = _v; } /* 0x120C7710: fstp dword ptr [ecx + eax*8 + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120C7714: fld dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x8) = _v; } /* 0x120C7717: fstp dword ptr [ecx + eax*8 + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C771B: fld dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0xC) = _v; } /* 0x120C7721: fstp dword ptr [ecx + eax*8 + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C77A5; /* 0x120C7725: je 0x120c77a5 */
L_120C7727:
    fp_push(*(float*)&MEM32(ecx + eax * 8)); /* 0x120C7727: fld dword ptr [ecx + eax*8] */
    fp_push(*(double*)ADDR(0x120019C8)); /* 0x120C772A: fld qword ptr [0x120019c8] */
    _st[1] *= _st[0]; /* 0x120C7730: fmul st(1), st(0) */
    fp_xch(1); /* 0x120C7732: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8) = _v; } /* 0x120C7734: fstp dword ptr [ecx + eax*8] */
    fp_push(*(float*)&MEM32(ecx + eax * 8 + 0x4)); /* 0x120C7737: fld dword ptr [ecx + eax*8 + 4] */
    _st[0] *= _st[1]; /* 0x120C773B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x4) = _v; } /* 0x120C773D: fstp dword ptr [ecx + eax*8 + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + eax * 8 + 0x8); /* 0x120C7741: fmul dword ptr [ecx + eax*8 + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x8) = _v; } /* 0x120C7745: fstp dword ptr [ecx + eax*8 + 8] */
    goto L_120C77A5; /* 0x120C7749: jmp 0x120c77a5 */
L_120C774B:
    /* cmp MEM32(ebp + (-0xE0)), 0 */ /* 0x120C774B: cmp dword ptr [ebp - 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xE0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120C7752: fld dword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120C7755: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x120C775B: fmul st(1), st(0) */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C777E; /* 0x120C775D: je 0x120c777e */
L_120C775F:
    fp_push(_st[0]); /* 0x120C775F: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120C7761: fsubrp st(2) */
    fp_xch(1); /* 0x120C7763: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8) = _v; } /* 0x120C7765: fstp dword ptr [ecx + eax*8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120C7768: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[1]; /* 0x120C776B: fmul st(1) */
    fp_push(_st[1]); /* 0x120C776D: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120C776F: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x4) = _v; } /* 0x120C7771: fstp dword ptr [ecx + eax*8 + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120C7775: fld dword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x120C7778: fmul st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120C777A: fsubp st(1) */
    goto L_120C7797; /* 0x120C777C: jmp 0x120c7797 */
L_120C777E:
    _st[1] += _st[0]; /* 0x120C777E: fadd st(1), st(0) */
    fp_xch(1); /* 0x120C7780: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8) = _v; } /* 0x120C7782: fstp dword ptr [ecx + eax*8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120C7785: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[1]; /* 0x120C7788: fmul st(1) */
    _st[0] += _st[1]; /* 0x120C778A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x4) = _v; } /* 0x120C778C: fstp dword ptr [ecx + eax*8 + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120C7790: fld dword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x120C7793: fmul st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120C7795: faddp st(1) */
L_120C7797:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0x8) = _v; } /* 0x120C7797: fstp dword ptr [ecx + eax*8 + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120C779B: fld dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 8 + 0xC) = _v; } /* 0x120C77A1: fstp dword ptr [ecx + eax*8 + 0xc] */
L_120C77A5:
    edx = MEM32(ebp + (-0x38)); /* 0x120C77A5: mov edx, dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x120C77A8: fldz  */
    edi = MEM32(ebp + 0x14); /* 0x120C77AA: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C77AD: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edx */ /* 0x120C77AE: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7370; /* 0x120C77B0: jl 0x120c7370 */
L_120C77B6:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120C77B6: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120C77B8: fstp st(0) */
    goto L_120C77C2; /* 0x120C77BA: jmp 0x120c77c2 */
L_120C77BC:
    esi = MEM32(ebp + (-0xC4)); /* 0x120C77BC: mov esi, dword ptr [ebp - 0xc4] */
L_120C77C2:
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x120C77C2: push dword ptr [ebp - 0xd0] */
    eax = MEM32(esi); /* 0x120C77C8: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x120C77CA: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x120C77CC: push dword ptr [ebp - 0xac] */
    ecx = esi; /* 0x120C77D2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C77D4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x9C)); /* 0x120C77D7: mov ecx, dword ptr [ebp - 0x9c] */
    eax = MEM32(ebp + (-0xA0)); /* 0x120C77DD: mov eax, dword ptr [ebp - 0xa0] */
    ebx = MEM32(ebp + 0x18); /* 0x120C77E3: mov ebx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xA0)) = ecx; /* 0x120C77E6: mov dword ptr [ebp - 0xa0], ecx */
    ecx = MEM32(ebp + (-0xA8)); /* 0x120C77EC: mov ecx, dword ptr [ebp - 0xa8] */
    MEM32(ebp + (-0x9C)) = ecx; /* 0x120C77F2: mov dword ptr [ebp - 0x9c], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x120C77F8: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0xA8)) = eax; /* 0x120C77FB: mov dword ptr [ebp - 0xa8], eax */
    eax = MEM32(ebp + (-0xE4)); /* 0x120C7801: mov eax, dword ptr [ebp - 0xe4] */
    MEM32(ebp + (-0xAC)) = eax; /* 0x120C7807: mov dword ptr [ebp - 0xac], eax */
    /* cmp eax, ecx */ /* 0x120C780D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120C72B4; /* 0x120C780F: jl 0x120c72b4 */
L_120C7815:
    goto L_120C781D; /* 0x120C7815: jmp 0x120c781d */
L_120C7817:
    esi = MEM32(ebp + (-0xC4)); /* 0x120C7817: mov esi, dword ptr [ebp - 0xc4] */
L_120C781D:
    ecx = MEM32(ebp + (-0xCC)); /* 0x120C781D: mov ecx, dword ptr [ebp - 0xcc] */
    eax = MEM32(ecx); /* 0x120C7823: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x120C7825: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C7827: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120C7829: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x120C782B: push 1 */
    ecx = esi; /* 0x120C782D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C782F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xB4)); /* 0x120C7831: mov ecx, dword ptr [ebp - 0xb4] */
    /* test ecx, ecx */ /* 0x120C7837: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7848; /* 0x120C7839: je 0x120c7848 */
L_120C783B:
    eax = MEM32(ecx); /* 0x120C783B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C783D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C783E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xB4)) = MEM32(ebp + (-0xB4)) & 0; /* 0x120C7841: and dword ptr [ebp - 0xb4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C7848:
    ecx = MEM32(ebp + (-0xB0)); /* 0x120C7848: mov ecx, dword ptr [ebp - 0xb0] */
    /* test ecx, ecx */ /* 0x120C784E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C785F; /* 0x120C7850: je 0x120c785f */
L_120C7852:
    eax = MEM32(ecx); /* 0x120C7852: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C7854: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C7855: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xB0)) = MEM32(ebp + (-0xB0)) & 0; /* 0x120C7858: and dword ptr [ebp - 0xb0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C785F:
    esi = MEM32(ebp + (-0xD8)); /* 0x120C785F: mov esi, dword ptr [ebp - 0xd8] */
    ebx = MEM32(ebp + (-0xE8)); /* 0x120C7865: mov ebx, dword ptr [ebp - 0xe8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C786B: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xD8)) = esi; /* 0x120C786C: mov dword ptr [ebp - 0xd8], esi */
    /* cmp esi, MEM32(ebp + (-0xBC)) */ /* 0x120C7872: cmp esi, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xBC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C70A5; /* 0x120C7878: jb 0x120c70a5 */
L_120C787E:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x120C787E: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C78CC; /* 0x120C7882: jne 0x120c78cc */
L_120C7884:
    /* cmp MEM32(ebp + (-0x84)), 0 */ /* 0x120C7884: cmp dword ptr [ebp - 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C78CC; /* 0x120C788B: je 0x120c78cc */
L_120C788D:
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C788D: mov ecx, dword ptr [ebp - 0xc0] */
    eax = MEM32(ecx); /* 0x120C7893: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xBC); /* 0x120C7895: lea edx, [ebp - 0xbc] */
    PUSH32(esp, edx); /* 0x120C789B: push edx */
    PUSH32(esp, ecx); /* 0x120C789C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C789D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xBC)); /* 0x120C78A0: mov eax, dword ptr [ebp - 0xbc] */
    ecx = MEM32(eax); /* 0x120C78A6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C78A8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C78A9: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xBC)); /* 0x120C78AC: mov ecx, dword ptr [ebp - 0xbc] */
    edx = MEM32(ecx); /* 0x120C78B2: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C78B4: push ecx */
    esi = eax; /* 0x120C78B5: mov esi, eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120C78B7: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C78BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78CC; /* 0x120C78BC: je 0x120c78cc */
L_120C78BE:
    esi = 0x88760868u; /* 0x120C78BE: mov esi, 0x88760868 */
    goto L_120C78F7; /* 0x120C78C3: jmp 0x120c78f7 */
L_120C78C5:
    esi = 0x80004005u; /* 0x120C78C5: mov esi, 0x80004005 */
    goto L_120C78DB; /* 0x120C78CA: jmp 0x120c78db */
L_120C78CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C78CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C78F7; /* 0x120C78CE: jmp 0x120c78f7 */
L_120C78D0:
    ebx = MEM32(ebp + (-0xC4)); /* 0x120C78D0: mov ebx, dword ptr [ebp - 0xc4] */
    esi = 0x8007000Eu; /* 0x120C78D6: mov esi, 0x8007000e */
L_120C78DB:
    ecx = MEM32(ebp + (-0xCC)); /* 0x120C78DB: mov ecx, dword ptr [ebp - 0xcc] */
    /* test ecx, ecx */ /* 0x120C78E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78EB; /* 0x120C78E3: je 0x120c78eb */
L_120C78E5:
    eax = MEM32(ecx); /* 0x120C78E5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x120C78E7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C78E9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_120C78EB:
    /* test ebx, ebx */ /* 0x120C78EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C78F7; /* 0x120C78ED: je 0x120c78f7 */
L_120C78EF:
    eax = MEM32(ebx); /* 0x120C78EF: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x120C78F1: push 1 */
    ecx = ebx; /* 0x120C78F3: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C78F5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_120C78F7:
    ecx = MEM32(ebp + (-0xB4)); /* 0x120C78F7: mov ecx, dword ptr [ebp - 0xb4] */
    /* test ecx, ecx */ /* 0x120C78FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C790E; /* 0x120C78FF: je 0x120c790e */
L_120C7901:
    eax = MEM32(ecx); /* 0x120C7901: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C7903: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C7904: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xB4)) = MEM32(ebp + (-0xB4)) & 0; /* 0x120C7907: and dword ptr [ebp - 0xb4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C790E:
    ecx = MEM32(ebp + (-0xB0)); /* 0x120C790E: mov ecx, dword ptr [ebp - 0xb0] */
    /* test ecx, ecx */ /* 0x120C7914: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7925; /* 0x120C7916: je 0x120c7925 */
L_120C7918:
    eax = MEM32(ecx); /* 0x120C7918: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C791A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C791B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xB0)) = MEM32(ebp + (-0xB0)) & 0; /* 0x120C791E: and dword ptr [ebp - 0xb0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C7925:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x120C7925: push dword ptr [ebp - 0xb8] */
    RECOMP_CALL(sub_121BF388); /* 0x120C792B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC8))); /* 0x120C7930: push dword ptr [ebp - 0xc8] */
    RECOMP_CALL(sub_121BF388); /* 0x120C7936: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x120C793B: push dword ptr [ebp - 0xd4] */
    RECOMP_CALL(sub_121BF388); /* 0x120C7941: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x120C7946: push dword ptr [ebp - 0xd0] */
    RECOMP_CALL(sub_121BF388); /* 0x120C794C: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x120C7951: push dword ptr [ebp - 0xa0] */
    RECOMP_CALL(sub_121BF388); /* 0x120C7957: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x120C795C: push dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_121BF388); /* 0x120C7962: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x120C7967: push dword ptr [ebp - 0xa8] */
    RECOMP_CALL(sub_121BF388); /* 0x120C796D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x120C7972: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_120C797C; /* 0x120C7975: jmp 0x120c797c */
L_120C7977:
    esi = 0x8876086Cu; /* 0x120C7977: mov esi, 0x8876086c */
L_120C797C:
    ecx = ebp + (-0x114); /* 0x120C797C: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_120E0692); /* 0x120C7982: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x100); /* 0x120C7987: lea ecx, [ebp - 0x100] */
    RECOMP_CALL(sub_120E0692); /* 0x120C798D: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7992: mov eax, esi */
    goto L_120C79B1; /* 0x120C7994: jmp 0x120c79b1 */
L_120C7996:
    ecx = ebp + (-0x114); /* 0x120C7996: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_120E0692); /* 0x120C799C: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x100); /* 0x120C79A1: lea ecx, [ebp - 0x100] */
    RECOMP_CALL(sub_120E0692); /* 0x120C79A7: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C79AC: mov eax, 0x8876086c */
L_120C79B1:
    edi = POP32_VAL(esp); /* 0x120C79B1: pop edi */
L_120C79B2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C79B2: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x120C79B5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C79B6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C79B8: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C79B9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C79BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120C79BF: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120C79C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C79C7u);

L_120C79C7:
    edi = edi; /* 0x120C79C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C79C9: push ebp */
    ebp = esp; /* 0x120C79CA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C79CC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C79CF: push esi */
    ecx = ebp + (-0x10); /* 0x120C79D0: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C79D3: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C79D8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C79DA: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x120C79DD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C79E0: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C79E5: mov esi, eax */
    /* test esi, esi */ /* 0x120C79E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C79FB; /* 0x120C79E9: js 0x120c79fb */
L_120C79EB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C79EB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C79EE: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C79F1: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120C4ED0); /* 0x120C79F4: call 0x120c4ed0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C79F9: mov esi, eax */
L_120C79FB:
    ecx = ebp + (-0x10); /* 0x120C79FB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C79FE: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7A03: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C7A05: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7A06: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C7A07: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C7A0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7A0Fu);

L_120C7A0F:
    edi = edi; /* 0x120C7A0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7A11: push ebp */
    ebp = esp; /* 0x120C7A12: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C7A14: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C7A17: push esi */
    ecx = ebp + (-0x10); /* 0x120C7A18: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C7A1B: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C7A20: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C7A22: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x120C7A25: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C7A28: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7A2D: mov esi, eax */
    /* test esi, esi */ /* 0x120C7A2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7A43; /* 0x120C7A31: js 0x120c7a43 */
L_120C7A33:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C7A33: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C7A36: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C7A39: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120C4ED0); /* 0x120C7A3C: call 0x120c4ed0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7A41: mov esi, eax */
L_120C7A43:
    ecx = ebp + (-0x10); /* 0x120C7A43: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C7A46: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7A4B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C7A4D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7A4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120C7A4F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120C7A57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7A57u);

L_120C7A57:
    edi = edi; /* 0x120C7A57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7A59: push ebp */
    ebp = esp; /* 0x120C7A5A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C7A5C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C7A5F: push esi */
    ecx = ebp + (-0xC); /* 0x120C7A60: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C7A63: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C7A68: push 0 */
    PUSH32(esp, 1); /* 0x120C7A6A: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C7A6C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0xC); /* 0x120C7A6F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C7A72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C7A75: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7A7A: mov esi, eax */
    /* test esi, esi */ /* 0x120C7A7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7A90; /* 0x120C7A7E: js 0x120c7a90 */
L_120C7A80:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C7A80: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C7A83: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C7A86: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120C4ED0); /* 0x120C7A89: call 0x120c4ed0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7A8E: mov esi, eax */
L_120C7A90:
    ecx = ebp + (-0xC); /* 0x120C7A90: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C7A93: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7A98: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C7A9A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7A9B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C7A9C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C7AA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7AA4u);

L_120C7AA4:
    edi = edi; /* 0x120C7AA4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7AA6: push ebp */
    ebp = esp; /* 0x120C7AA7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C7AA9: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C7AAC: push esi */
    ecx = ebp + (-0xC); /* 0x120C7AAD: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C7AB0: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C7AB5: push 1 */
    PUSH32(esp, 1); /* 0x120C7AB7: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C7AB9: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0xC); /* 0x120C7ABC: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C7ABF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C7AC2: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7AC7: mov esi, eax */
    /* test esi, esi */ /* 0x120C7AC9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7ADD; /* 0x120C7ACB: js 0x120c7add */
L_120C7ACD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C7ACD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C7AD0: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C7AD3: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120C4ED0); /* 0x120C7AD6: call 0x120c4ed0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7ADB: mov esi, eax */
L_120C7ADD:
    ecx = ebp + (-0xC); /* 0x120C7ADD: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C7AE0: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7AE5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C7AE7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7AE8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C7AE9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C7AF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7AF1u);

L_120C7AF1:
    edi = edi; /* 0x120C7AF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7AF3: push ebp */
    ebp = esp; /* 0x120C7AF4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x120C7AF6: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C7AF9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C7AFE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C7B00: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C7B03: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120C7B06: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C7B07: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C7B0A: mov dword ptr [ebp - 0x6c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C7B0D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120C7B10: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120C7B11: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x70)) = eax; /* 0x120C7B14: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ebp + 0x28); /* 0x120C7B17: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, edi); /* 0x120C7B1A: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x120C7B1B: mov edi, dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x58); /* 0x120C7B1E: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x74)) = eax; /* 0x120C7B21: mov dword ptr [ebp - 0x74], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C7B24: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C7B29: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B2B: je 0x120c7b8b */
L_120C7B2D:
    /* test esi, esi */ /* 0x120C7B2D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7BDC; /* 0x120C7B2F: je 0x120c7bdc */
L_120C7B35:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x120C7B35: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7BDC; /* 0x120C7B39: je 0x120c7bdc */
L_120C7B3F:
    PUSH32(esp, 1); /* 0x120C7B3F: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x120C7B41: push dword ptr [ebp - 0x74] */
    ecx = ebp + (-0x58); /* 0x120C7B44: lea ecx, [ebp - 0x58] */
    PUSH32(esp, 0); /* 0x120C7B47: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C7B49: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120C7B4C: push esi */
    RECOMP_CALL(sub_120DBF0D); /* 0x120C7B4D: call 0x120dbf0d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7B52: mov esi, eax */
    /* test esi, esi */ /* 0x120C7B54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7BC4; /* 0x120C7B56: js 0x120c7bc4 */
L_120C7B58:
    /* test edi, edi */ /* 0x120C7B58: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7B92; /* 0x120C7B5A: je 0x120c7b92 */
L_120C7B5C:
    esi = edi; /* 0x120C7B5C: mov esi, edi */
    edi = ebp + (-0x68); /* 0x120C7B5E: lea edi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B61: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B62: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B63: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B64: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x120C7B65: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B69: jl 0x120c7b8b */
L_120C7B6B:
    eax = MEM32(ebp + (-0x60)); /* 0x120C7B6B: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x120C7B6E: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B71: jg 0x120c7b8b */
L_120C7B73:
    /* cmp MEM32(ebp + (-0x68)), eax */ /* 0x120C7B73: cmp dword ptr [ebp - 0x68], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B76: jg 0x120c7b8b */
L_120C7B78:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x120C7B78: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B7C: jl 0x120c7b8b */
L_120C7B7E:
    eax = MEM32(ebp + (-0x5C)); /* 0x120C7B7E: mov eax, dword ptr [ebp - 0x5c] */
    /* cmp eax, MEM32(ebp + (-0x48)) */ /* 0x120C7B81: cmp eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120C7B8B; /* 0x120C7B84: jg 0x120c7b8b */
L_120C7B86:
    /* cmp MEM32(ebp + (-0x64)), eax */ /* 0x120C7B86: cmp dword ptr [ebp - 0x64], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120C7B9C; /* 0x120C7B89: jle 0x120c7b9c */
L_120C7B8B:
    esi = 0x8876086Cu; /* 0x120C7B8B: mov esi, 0x8876086c */
    goto L_120C7BC4; /* 0x120C7B90: jmp 0x120c7bc4 */
L_120C7B92:
    esi = ebp + (-0x40); /* 0x120C7B92: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x68); /* 0x120C7B95: lea edi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B98: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B99: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B9A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7B9B: movsd dword ptr es:[edi], dword ptr [esi] */
L_120C7B9C:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C7B9C: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x68); /* 0x120C7B9F: lea eax, [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C7BA2: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x120C7BA5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x120C7BA6: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x120C7BA9: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x120C7BAC: push dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x120C7BAF: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x120C7BB2: push dword ptr [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x120C7BB5: push dword ptr [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x120C7BB8: push ebx */
    RECOMP_CALL(sub_120C4F2A); /* 0x120C7BB9: call 0x120c4f2a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7BBE: mov esi, eax */
    /* test esi, esi */ /* 0x120C7BC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C7BD0; /* 0x120C7BC2: jns 0x120c7bd0 */
L_120C7BC4:
    ecx = ebp + (-0x58); /* 0x120C7BC4: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7BC7: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7BCC: mov eax, esi */
    goto L_120C7BE9; /* 0x120C7BCE: jmp 0x120c7be9 */
L_120C7BD0:
    ecx = ebp + (-0x58); /* 0x120C7BD0: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7BD3: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C7BD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C7BE9; /* 0x120C7BDA: jmp 0x120c7be9 */
L_120C7BDC:
    ecx = ebp + (-0x58); /* 0x120C7BDC: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7BDF: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C7BE4: mov eax, 0x8876086c */
L_120C7BE9:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C7BE9: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C7BEC: pop edi */
    esi = POP32_VAL(esp); /* 0x120C7BED: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C7BEE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C7BF0: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C7BF1: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7BF6: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C7BF7: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C7BFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7BFFu);

L_120C7BFF:
    edi = edi; /* 0x120C7BFF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7C01: push ebp */
    ebp = esp; /* 0x120C7C02: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE4u; /* 0x120C7C04: sub esp, 0xe4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C7C0A: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C7C0F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C7C11: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C7C14: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120C7C17: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120C7C18: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120C7C1B: mov dword ptr [ebp - 0x6c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C7C1E: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120C7C21: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120C7C22: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120C7C25: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120C7C26: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x120C7C29: mov dword ptr [ebp - 0x7c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120C7C2C: mov eax, dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x90); /* 0x120C7C2F: lea ecx, [ebp - 0x90] */
    MEM32(ebp + (-0x68)) = edi; /* 0x120C7C35: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x70)) = esi; /* 0x120C7C38: mov dword ptr [ebp - 0x70], esi */
    MEM32(ebp + (-0x78)) = eax; /* 0x120C7C3B: mov dword ptr [ebp - 0x78], eax */
    RECOMP_CALL(sub_120E04A2); /* 0x120C7C3E: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120C7C43: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7C5C; /* 0x120C7C45: jne 0x120c7c5c */
L_120C7C47:
    ecx = ebp + (-0x90); /* 0x120C7C47: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E0692); /* 0x120C7C4D: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C7C52: mov eax, 0x8876086c */
    goto L_120C7DF2; /* 0x120C7C57: jmp 0x120c7df2 */
L_120C7C5C:
    /* test ebx, ebx */ /* 0x120C7C5C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7C6A; /* 0x120C7C5E: jne 0x120c7c6a */
L_120C7C60:
    esi = 0x8876086Cu; /* 0x120C7C60: mov esi, 0x8876086c */
    goto L_120C7DE5; /* 0x120C7C65: jmp 0x120c7de5 */
L_120C7C6A:
    eax = MEM32(edi); /* 0x120C7C6A: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x64); /* 0x120C7C6C: lea ecx, [ebp - 0x64] */
    PUSH32(esp, ecx); /* 0x120C7C6F: push ecx */
    PUSH32(esp, edi); /* 0x120C7C70: push edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x120C7C71: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x120C7C74: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x44); /* 0x120C7C76: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x120C7C79: push ecx */
    PUSH32(esp, ebx); /* 0x120C7C7A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x120C7C7B: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x120C7C7E: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7C81: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C7C83: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(eax), 5 */ /* 0x120C7C84: cmp ax, 5 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(5) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7E0C; /* 0x120C7C88: je 0x120c7e0c */
L_120C7C8E:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x120C7C8E: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7E0C; /* 0x120C7C92: jne 0x120c7e0c */
L_120C7C98:
    eax = MEM32(ebp + (-0x6C)); /* 0x120C7C98: mov eax, dword ptr [ebp - 0x6c] */
    /* cmp eax, esi */ /* 0x120C7C9B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7CC2; /* 0x120C7C9D: je 0x120c7cc2 */
L_120C7C9F:
    /* test eax, eax */ /* 0x120C7C9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7E0C; /* 0x120C7CA1: je 0x120c7e0c */
L_120C7CA7:
    /* test esi, esi */ /* 0x120C7CA7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7E0C; /* 0x120C7CA9: je 0x120c7e0c */
L_120C7CAF:
    edi = esi; /* 0x120C7CAF: mov edi, esi */
    esi = eax; /* 0x120C7CB1: mov esi, eax */
    ecx = 0x100u; /* 0x120C7CB3: mov ecx, 0x100 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C7CB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120C7CBA: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120C7E03; /* 0x120C7CBC: jne 0x120c7e03 */
L_120C7CC2:
    eax = MEM32(ebp + (-0x7C)); /* 0x120C7CC2: mov eax, dword ptr [ebp - 0x7c] */
    /* test eax, eax */ /* 0x120C7CC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7CDA; /* 0x120C7CC7: je 0x120c7cda */
L_120C7CC9:
    esi = eax; /* 0x120C7CC9: mov esi, eax */
    edi = ebp + (-0x14); /* 0x120C7CCB: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CCE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CCF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CD0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CD1: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x8)); /* 0x120C7CD2: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x120C7CD5: mov edx, dword ptr [ebp - 0xc] */
    goto L_120C7CEE; /* 0x120C7CD8: jmp 0x120c7cee */
L_120C7CDA:
    edx = MEM32(ebp + (-0x4C)); /* 0x120C7CDA: mov edx, dword ptr [ebp - 0x4c] */
    eax = MEM32(ebp + (-0x48)); /* 0x120C7CDD: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x120C7CE0: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x120C7CE4: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x120C7CE8: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C7CEB: mov dword ptr [ebp - 8], eax */
L_120C7CEE:
    ecx = MEM32(ebp + (-0x78)); /* 0x120C7CEE: mov ecx, dword ptr [ebp - 0x78] */
    /* test ecx, ecx */ /* 0x120C7CF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7D09; /* 0x120C7CF3: je 0x120c7d09 */
L_120C7CF5:
    esi = ecx; /* 0x120C7CF5: mov esi, ecx */
    edi = ebp + (-0x24); /* 0x120C7CF7: lea edi, [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CFA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CFB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CFC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120C7CFD: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120C7CFE: mov ecx, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + (-0x1C)); /* 0x120C7D01: mov esi, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x20)); /* 0x120C7D04: mov edi, dword ptr [ebp - 0x20] */
    goto L_120C7D1E; /* 0x120C7D07: jmp 0x120c7d1e */
L_120C7D09:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x120C7D09: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x2C)); /* 0x120C7D0D: mov esi, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x28)); /* 0x120C7D10: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C7D13: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = edi; /* 0x120C7D15: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x120C7D18: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120C7D1B: mov dword ptr [ebp - 0x18], ecx */
L_120C7D1E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x24)); /* 0x120C7D1E: sub esi, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x14)); /* 0x120C7D21: sub edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    /* cmp edx, esi */ /* 0x120C7D24: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7E03; /* 0x120C7D26: jne 0x120c7e03 */
L_120C7D2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x120C7D2C: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120C7D2F: sub ecx, edi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x120C7D31: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7E03; /* 0x120C7D33: jne 0x120c7e03 */
L_120C7D39:
    eax = MEM32(ebx); /* 0x120C7D39: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x74); /* 0x120C7D3B: lea ecx, [ebp - 0x74] */
    PUSH32(esp, ecx); /* 0x120C7D3E: push ecx */
    PUSH32(esp, ebx); /* 0x120C7D3F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C7D40: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C7D43: push 1 */
    RECOMP_CALL(sub_12019381); /* 0x120C7D45: call 0x12019381 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120C7D4A: mov eax, dword ptr [ebp - 0x38] */
    /* test eax, eax */ /* 0x120C7D4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7D89; /* 0x120C7D4F: jne 0x120c7d89 */
L_120C7D51:
    /* cmp MEM32(ebp + (-0x58)), 2 */ /* 0x120C7D51: cmp dword ptr [ebp - 0x58], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7D89; /* 0x120C7D55: jne 0x120c7d89 */
L_120C7D57:
    /* test MEM8(ebp + (-0x3C)), 1 */ /* 0x120C7D57: test byte ptr [ebp - 0x3c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3C))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7D89; /* 0x120C7D5B: je 0x120c7d89 */
L_120C7D5D:
    edi = MEM32(ebp + (-0x68)); /* 0x120C7D5D: mov edi, dword ptr [ebp - 0x68] */
    /* cmp MEM32(ebp + (-0x34)), eax */ /* 0x120C7D60: cmp dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7D8C; /* 0x120C7D63: jne 0x120c7d8c */
L_120C7D65:
    eax = MEM32(ebp + (-0x74)); /* 0x120C7D65: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(eax); /* 0x120C7D68: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x120C7D6A: push edi */
    PUSH32(esp, ebx); /* 0x120C7D6B: push ebx */
    PUSH32(esp, eax); /* 0x120C7D6C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x80)); /* 0x120C7D6D: call dword ptr [ecx + 0x80] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7D73: mov esi, eax */
    /* test esi, esi */ /* 0x120C7D75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7D84; /* 0x120C7D77: js 0x120c7d84 */
L_120C7D79:
    ecx = MEM32(ebp + (-0x74)); /* 0x120C7D79: mov ecx, dword ptr [ebp - 0x74] */
    edx = MEM32(ecx); /* 0x120C7D7C: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C7D7E: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120C7D7F: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    goto L_120C7DE5; /* 0x120C7D82: jmp 0x120c7de5 */
L_120C7D84:
    eax = MEM32(ebp + (-0x38)); /* 0x120C7D84: mov eax, dword ptr [ebp - 0x38] */
    goto L_120C7D8C; /* 0x120C7D87: jmp 0x120c7d8c */
L_120C7D89:
    edi = MEM32(ebp + (-0x68)); /* 0x120C7D89: mov edi, dword ptr [ebp - 0x68] */
L_120C7D8C:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x120C7D8C: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = 0x80004005u; /* 0x120C7D90: mov esi, 0x80004005 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7DCF; /* 0x120C7D95: jne 0x120c7dcf */
L_120C7D97:
    /* test eax, eax */ /* 0x120C7D97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7DB5; /* 0x120C7D99: jne 0x120c7db5 */
L_120C7D9B:
    eax = MEM32(ebp + (-0x74)); /* 0x120C7D9B: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(eax); /* 0x120C7D9E: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x120C7DA0: push 0 */
    edx = ebp + (-0x14); /* 0x120C7DA2: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x120C7DA5: push edx */
    PUSH32(esp, edi); /* 0x120C7DA6: push edi */
    edx = ebp + (-0x24); /* 0x120C7DA7: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x120C7DAA: push edx */
    PUSH32(esp, ebx); /* 0x120C7DAB: push ebx */
    PUSH32(esp, eax); /* 0x120C7DAC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x88)); /* 0x120C7DAD: call dword ptr [ecx + 0x88] */
    RECOMP_FLAGS_IN();
    goto L_120C7DCD; /* 0x120C7DB3: jmp 0x120c7dcd */
L_120C7DB5:
    /* cmp eax, 2 */ /* 0x120C7DB5: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7DCF; /* 0x120C7DB8: jne 0x120c7dcf */
L_120C7DBA:
    eax = MEM32(ebp + (-0x74)); /* 0x120C7DBA: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(eax); /* 0x120C7DBD: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x120C7DBF: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x120C7DC2: push edx */
    PUSH32(esp, edi); /* 0x120C7DC3: push edi */
    edx = ebp + (-0x24); /* 0x120C7DC4: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x120C7DC7: push edx */
    PUSH32(esp, ebx); /* 0x120C7DC8: push ebx */
    PUSH32(esp, eax); /* 0x120C7DC9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x78)); /* 0x120C7DCA: call dword ptr [ecx + 0x78] */
    RECOMP_FLAGS_IN();
L_120C7DCD:
    esi = eax; /* 0x120C7DCD: mov esi, eax */
L_120C7DCF:
    PUSH32(esp, 0); /* 0x120C7DCF: push 0 */
    RECOMP_CALL(sub_12019381); /* 0x120C7DD1: call 0x12019381 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x74)); /* 0x120C7DD6: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(eax); /* 0x120C7DD9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C7DDB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C7DDC: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C7DDF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7E06; /* 0x120C7DE1: js 0x120c7e06 */
L_120C7DE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C7DE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C7DE5:
    ecx = ebp + (-0x90); /* 0x120C7DE5: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E0692); /* 0x120C7DEB: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7DF0: mov eax, esi */
L_120C7DF2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C7DF2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C7DF5: pop edi */
    esi = POP32_VAL(esp); /* 0x120C7DF6: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C7DF7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C7DF9: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C7DFA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7DFF: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C7E00: ret 0x20 */
L_120C7E03:
    edi = MEM32(ebp + (-0x68)); /* 0x120C7E03: mov edi, dword ptr [ebp - 0x68] */
L_120C7E06:
    esi = MEM32(ebp + (-0x70)); /* 0x120C7E06: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7E09: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C7E0B: inc ecx */
    _flag_k = FK_INC;
L_120C7E0C:
    /* cmp edi, ebx */ /* 0x120C7E0C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7E15; /* 0x120C7E0E: jne 0x120c7e15 */
L_120C7E10:
    ecx = 0x00010001u; /* 0x120C7E10: mov ecx, 0x10001 */
L_120C7E15:
    PUSH32(esp, ecx); /* 0x120C7E15: push ecx */
    PUSH32(esp, 0); /* 0x120C7E16: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x120C7E18: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0xE4); /* 0x120C7E1B: lea eax, [ebp - 0xe4] */
    PUSH32(esp, esi); /* 0x120C7E21: push esi */
    PUSH32(esp, ebx); /* 0x120C7E22: push ebx */
    PUSH32(esp, eax); /* 0x120C7E23: push eax */
    ecx = ebp + (-0x90); /* 0x120C7E24: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_120E069C); /* 0x120C7E2A: call 0x120e069c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7E2F: mov esi, eax */
    /* test esi, esi */ /* 0x120C7E31: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7DE5; /* 0x120C7E33: js 0x120c7de5 */
L_120C7E35:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C7E35: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0xBC); /* 0x120C7E38: lea eax, [ebp - 0xbc] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C7E3E: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x120C7E41: push eax */
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x120C7E42: push dword ptr [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0xDC))); /* 0x120C7E45: push dword ptr [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + (-0xE0))); /* 0x120C7E4B: push dword ptr [ebp - 0xe0] */
    PUSH32(esp, MEM32(ebp + (-0xE4))); /* 0x120C7E51: push dword ptr [ebp - 0xe4] */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x120C7E57: push dword ptr [ebp - 0x7c] */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x120C7E5A: push dword ptr [ebp - 0x6c] */
    PUSH32(esp, edi); /* 0x120C7E5D: push edi */
    RECOMP_CALL(sub_120C4F2A); /* 0x120C7E5E: call 0x120c4f2a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7E63: mov esi, eax */
    /* test esi, esi */ /* 0x120C7E65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7DE5; /* 0x120C7E67: js 0x120c7de5 */
L_120C7E6D:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x120C7E6D: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7DE3; /* 0x120C7E71: jne 0x120c7de3 */
L_120C7E77:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x120C7E77: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7DE3; /* 0x120C7E7B: je 0x120c7de3 */
L_120C7E81:
    eax = MEM32(ebx); /* 0x120C7E81: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x6C); /* 0x120C7E83: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, ecx); /* 0x120C7E86: push ecx */
    PUSH32(esp, ebx); /* 0x120C7E87: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C7E88: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x6C)); /* 0x120C7E8B: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax); /* 0x120C7E8E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C7E90: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C7E91: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x6C)); /* 0x120C7E94: mov ecx, dword ptr [ebp - 0x6c] */
    edx = MEM32(ecx); /* 0x120C7E97: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C7E99: push ecx */
    esi = eax; /* 0x120C7E9A: mov esi, eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120C7E9C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120C7E9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7DE3; /* 0x120C7EA1: je 0x120c7de3 */
L_120C7EA7:
    esi = 0x88760868u; /* 0x120C7EA7: mov esi, 0x88760868 */
    RECOMP_BACKEDGE();
    goto L_120C7DE5; /* 0x120C7EAC: jmp 0x120c7de5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120C7EB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7EB6u);

L_120C7EB6:
    edi = edi; /* 0x120C7EB6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7EB8: push ebp */
    ebp = esp; /* 0x120C7EB9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x7Cu; /* 0x120C7EBB: sub esp, 0x7c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C7EBE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C7EC3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C7EC5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C7EC8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120C7ECB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120C7ECC: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C7ECF: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C7ED2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120C7ED5: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120C7ED6: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x60)) = eax; /* 0x120C7ED9: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + 0x28); /* 0x120C7EDC: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, edi); /* 0x120C7EDF: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x120C7EE0: mov edi, dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x58); /* 0x120C7EE3: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x64)) = eax; /* 0x120C7EE6: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C7EE9: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C7EEE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7EF0: je 0x120c7f52 */
L_120C7EF2:
    /* test esi, esi */ /* 0x120C7EF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7FA4; /* 0x120C7EF4: je 0x120c7fa4 */
L_120C7EFA:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x120C7EFA: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C7FA4; /* 0x120C7EFE: je 0x120c7fa4 */
L_120C7F04:
    PUSH32(esp, 1); /* 0x120C7F04: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x120C7F06: push dword ptr [ebp - 0x64] */
    ecx = ebp + (-0x58); /* 0x120C7F09: lea ecx, [ebp - 0x58] */
    PUSH32(esp, 0); /* 0x120C7F0C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C7F0E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120C7F11: push esi */
    RECOMP_CALL(sub_120DBF0D); /* 0x120C7F12: call 0x120dbf0d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7F17: mov esi, eax */
    /* test esi, esi */ /* 0x120C7F19: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C7F8C; /* 0x120C7F1B: js 0x120c7f8c */
L_120C7F1D:
    PUSH32(esp, 6); /* 0x120C7F1D: push 6 */
    ecx = POP32_VAL(esp); /* 0x120C7F1F: pop ecx */
    /* test edi, edi */ /* 0x120C7F20: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C7F59; /* 0x120C7F22: je 0x120c7f59 */
L_120C7F24:
    esi = edi; /* 0x120C7F24: mov esi, edi */
    edi = ebp + (-0x7C); /* 0x120C7F26: lea edi, [ebp - 0x7c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C7F29: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x74)); /* 0x120C7F2B: mov eax, dword ptr [ebp - 0x74] */
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x120C7F2E: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7F31: ja 0x120c7f52 */
L_120C7F33:
    /* cmp MEM32(ebp + (-0x7C)), eax */ /* 0x120C7F33: cmp dword ptr [ebp - 0x7c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7F36: ja 0x120c7f52 */
L_120C7F38:
    eax = MEM32(ebp + (-0x70)); /* 0x120C7F38: mov eax, dword ptr [ebp - 0x70] */
    /* cmp eax, MEM32(ebp + (-0x48)) */ /* 0x120C7F3B: cmp eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7F3E: ja 0x120c7f52 */
L_120C7F40:
    /* cmp MEM32(ebp + (-0x78)), eax */ /* 0x120C7F40: cmp dword ptr [ebp - 0x78], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7F43: ja 0x120c7f52 */
L_120C7F45:
    eax = MEM32(ebp + (-0x68)); /* 0x120C7F45: mov eax, dword ptr [ebp - 0x68] */
    /* cmp eax, MEM32(ebp + (-0x44)) */ /* 0x120C7F48: cmp eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120C7F52; /* 0x120C7F4B: ja 0x120c7f52 */
L_120C7F4D:
    /* cmp MEM32(ebp + (-0x6C)), eax */ /* 0x120C7F4D: cmp dword ptr [ebp - 0x6c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C7F61; /* 0x120C7F50: jbe 0x120c7f61 */
L_120C7F52:
    esi = 0x8876086Cu; /* 0x120C7F52: mov esi, 0x8876086c */
    goto L_120C7F8C; /* 0x120C7F57: jmp 0x120c7f8c */
L_120C7F59:
    esi = ebp + (-0x40); /* 0x120C7F59: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x7C); /* 0x120C7F5C: lea edi, [ebp - 0x7c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C7F5F: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_120C7F61:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C7F61: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x7C); /* 0x120C7F64: lea eax, [ebp - 0x7c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C7F67: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x120C7F6A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x120C7F6B: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x120C7F6E: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x120C7F71: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x120C7F74: push dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x120C7F77: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120C7F7A: push dword ptr [ebp - 0x60] */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x120C7F7D: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, ebx); /* 0x120C7F80: push ebx */
    RECOMP_CALL(sub_120C51D1); /* 0x120C7F81: call 0x120c51d1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C7F86: mov esi, eax */
    /* test esi, esi */ /* 0x120C7F88: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120C7F98; /* 0x120C7F8A: jns 0x120c7f98 */
L_120C7F8C:
    ecx = ebp + (-0x58); /* 0x120C7F8C: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7F8F: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C7F94: mov eax, esi */
    goto L_120C7FB1; /* 0x120C7F96: jmp 0x120c7fb1 */
L_120C7F98:
    ecx = ebp + (-0x58); /* 0x120C7F98: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7F9B: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C7FA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C7FB1; /* 0x120C7FA2: jmp 0x120c7fb1 */
L_120C7FA4:
    ecx = ebp + (-0x58); /* 0x120C7FA4: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_120D7246); /* 0x120C7FA7: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C7FAC: mov eax, 0x8876086c */
L_120C7FB1:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C7FB1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C7FB4: pop edi */
    esi = POP32_VAL(esp); /* 0x120C7FB5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C7FB6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C7FB8: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C7FB9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C7FBE: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C7FBF: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C7FC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C7FC7u);

L_120C7FC7:
    edi = edi; /* 0x120C7FC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C7FC9: push ebp */
    ebp = esp; /* 0x120C7FCA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x120C7FCC: sub esp, 0x58 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x4); /* 0x120C7FCF: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E065E); /* 0x120C7FD2: call 0x120e065e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120C7FD7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C7FEC; /* 0x120C7FDB: jne 0x120c7fec */
L_120C7FDD:
    ecx = ebp + (-0x4); /* 0x120C7FDD: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C7FE0: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C7FE5: mov eax, 0x8876086c */
    goto L_120C805E; /* 0x120C7FEA: jmp 0x120c805e */
L_120C7FEC:
    eax = MEM32(ebp + 0x14); /* 0x120C7FEC: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120C7FEF: push esi */
    /* test eax, eax */ /* 0x120C7FF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C7FFB; /* 0x120C7FF2: jne 0x120c7ffb */
L_120C7FF4:
    esi = 0x8876086Cu; /* 0x120C7FF4: mov esi, 0x8876086c */
    goto L_120C8053; /* 0x120C7FF9: jmp 0x120c8053 */
L_120C7FFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C7FFB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C7FFD: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120C7FFE: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8008; /* 0x120C8001: jne 0x120c8008 */
L_120C8003:
    ecx = 0x00010001u; /* 0x120C8003: mov ecx, 0x10001 */
L_120C8008:
    PUSH32(esp, ecx); /* 0x120C8008: push ecx */
    PUSH32(esp, 0); /* 0x120C8009: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C800B: push dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x4); /* 0x120C800E: lea ecx, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C8011: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x120C8014: push eax */
    eax = ebp + (-0x58); /* 0x120C8015: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x120C8018: push eax */
    RECOMP_CALL(sub_120E0C9D); /* 0x120C8019: call 0x120e0c9d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C801E: mov esi, eax */
    /* test esi, esi */ /* 0x120C8020: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8053; /* 0x120C8022: js 0x120c8053 */
L_120C8024:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8024: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x30); /* 0x120C8027: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C802A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x120C802D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C802E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x120C8031: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x120C8034: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x120C8037: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x120C803A: push dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C803D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C8040: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C8043: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C51D1); /* 0x120C8046: call 0x120c51d1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C804B: mov esi, eax */
    /* test esi, esi */ /* 0x120C804D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8053; /* 0x120C804F: js 0x120c8053 */
L_120C8051:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C8051: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8053:
    ecx = ebp + (-0x4); /* 0x120C8053: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_120E0C93); /* 0x120C8056: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C805B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C805D: pop esi */
L_120C805E:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C805E: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C805F: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C8067(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8067u);

L_120C8067:
    edi = edi; /* 0x120C8067: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8069: push ebp */
    ebp = esp; /* 0x120C806A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120C806C: push ecx */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x120C806D: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x120C8071: push esi */
    esi = ecx; /* 0x120C8072: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C80A9; /* 0x120C8074: je 0x120c80a9 */
L_120C8076:
    PUSH32(esp, ebx); /* 0x120C8076: push ebx */
    PUSH32(esp, edi); /* 0x120C8077: push edi */
    edi = esi + (-0x4); /* 0x120C8078: lea edi, [esi - 4] */
    eax = MEM32(edi); /* 0x120C807B: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x120C807D: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x14u); /* 0x120C807F: imul ebx, ebx, 0x14 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x120C8082: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8084: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_120C8096; /* 0x120C8085: js 0x120c8096 */
L_120C8087:
    esi = eax; /* 0x120C8087: mov esi, eax */
L_120C8089:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x14u; /* 0x120C8089: sub ebx, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x120C808C: mov ecx, ebx */
    RECOMP_CALL(sub_120E0692); /* 0x120C808E: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C8093: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_120C8089; /* 0x120C8094: jns 0x120c8089 */
L_120C8096:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x120C8096: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C80A3; /* 0x120C809A: je 0x120c80a3 */
L_120C809C:
    PUSH32(esp, edi); /* 0x120C809C: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120C809D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C80A2: pop ecx */
L_120C80A3:
    eax = edi; /* 0x120C80A3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120C80A5: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C80A6: pop ebx */
    goto L_120C80BD; /* 0x120C80A7: jmp 0x120c80bd */
L_120C80A9:
    RECOMP_CALL(sub_120E0692); /* 0x120C80A9: call 0x120e0692 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x120C80AE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C80BB; /* 0x120C80B2: je 0x120c80bb */
L_120C80B4:
    PUSH32(esp, esi); /* 0x120C80B4: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120C80B5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C80BA: pop ecx */
L_120C80BB:
    eax = esi; /* 0x120C80BB: mov eax, esi */
L_120C80BD:
    esi = POP32_VAL(esp); /* 0x120C80BD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C80BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C80BF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C80C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C80C7u);

L_120C80C7:
    edi = edi; /* 0x120C80C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C80C9: push ebp */
    ebp = esp; /* 0x120C80CA: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x120C80CC: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x120C80D0: push esi */
    esi = ecx; /* 0x120C80D1: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8101; /* 0x120C80D3: je 0x120c8101 */
L_120C80D5:
    PUSH32(esp, ebx); /* 0x120C80D5: push ebx */
    PUSH32(esp, edi); /* 0x120C80D6: push edi */
    edi = esi + (-0x4); /* 0x120C80D7: lea edi, [esi - 4] */
    ebx = MEM32(edi); /* 0x120C80DA: mov ebx, dword ptr [edi] */
    esi = esi + ebx * 4; /* 0x120C80DC: lea esi, [esi + ebx*4] */
    goto L_120C80EB; /* 0x120C80DF: jmp 0x120c80eb */
L_120C80E1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x120C80E1: sub esi, 4 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x120C80E4: mov ecx, esi */
    RECOMP_CALL(sub_120E0C93); /* 0x120C80E6: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
L_120C80EB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120C80EB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_120C80E1; /* 0x120C80EC: jns 0x120c80e1 */
L_120C80EE:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x120C80EE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C80FB; /* 0x120C80F2: je 0x120c80fb */
L_120C80F4:
    PUSH32(esp, edi); /* 0x120C80F4: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120C80F5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C80FA: pop ecx */
L_120C80FB:
    eax = edi; /* 0x120C80FB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120C80FD: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C80FE: pop ebx */
    goto L_120C8115; /* 0x120C80FF: jmp 0x120c8115 */
L_120C8101:
    RECOMP_CALL(sub_120E0C93); /* 0x120C8101: call 0x120e0c93 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x120C8106: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8113; /* 0x120C810A: je 0x120c8113 */
L_120C810C:
    PUSH32(esp, esi); /* 0x120C810C: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120C810D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C8112: pop ecx */
L_120C8113:
    eax = esi; /* 0x120C8113: mov eax, esi */
L_120C8115:
    esi = POP32_VAL(esp); /* 0x120C8115: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C8116: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120C8117: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120C811F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C811Fu);

L_120C811F:
    edi = edi; /* 0x120C811F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8121: push ebp */
    ebp = esp; /* 0x120C8122: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x120C8124: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C8127: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C812C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C812E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C8131: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120C8134: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C8135: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x74)) = eax; /* 0x120C8138: mov dword ptr [ebp - 0x74], eax */
    /* test esi, esi */ /* 0x120C813B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8149; /* 0x120C813D: jne 0x120c8149 */
L_120C813F:
    eax = 0x8876086Cu; /* 0x120C813F: mov eax, 0x8876086c */
    goto L_120C846E; /* 0x120C8144: jmp 0x120c846e */
L_120C8149:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C8149: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120C814B: push ebx */
    MEM32(ebp + (-0x5C)) = eax; /* 0x120C814C: mov dword ptr [ebp - 0x5c], eax */
    MEM32(ebp + (-0x58)) = eax; /* 0x120C814F: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x60)) = eax; /* 0x120C8152: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(esi); /* 0x120C8155: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120C8157: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x120C8158: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C815B: mov ebx, eax */
    ecx = ebx; /* 0x120C815D: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x120C815F: sub ecx, 3 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4C)) = ebx; /* 0x120C8162: mov dword ptr [ebp - 0x4c], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C818B; /* 0x120C8165: je 0x120c818b */
L_120C8167:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C8167: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8181; /* 0x120C8168: je 0x120c8181 */
L_120C816A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C816A: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8177; /* 0x120C816B: je 0x120c8177 */
L_120C816D:
    eax = 0x8876086Cu; /* 0x120C816D: mov eax, 0x8876086c */
    goto L_120C846D; /* 0x120C8172: jmp 0x120c846d */
L_120C8177:
    edx = MEM32(ebp + (-0x5C)); /* 0x120C8177: mov edx, dword ptr [ebp - 0x5c] */
    ecx = esi; /* 0x120C817A: mov ecx, esi */
    MEM32(ebp + (-0x58)) = ecx; /* 0x120C817C: mov dword ptr [ebp - 0x58], ecx */
    goto L_120C8193; /* 0x120C817F: jmp 0x120c8193 */
L_120C8181:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C8181: mov ecx, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x60)) = esi; /* 0x120C8184: mov dword ptr [ebp - 0x60], esi */
    edx = ecx; /* 0x120C8187: mov edx, ecx */
    goto L_120C8193; /* 0x120C8189: jmp 0x120c8193 */
L_120C818B:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C818B: mov ecx, dword ptr [ebp - 0x58] */
    edx = esi; /* 0x120C818E: mov edx, esi */
    MEM32(ebp + (-0x5C)) = edx; /* 0x120C8190: mov dword ptr [ebp - 0x5c], edx */
L_120C8193:
    PUSH32(esp, edi); /* 0x120C8193: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120C8194: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120C8197: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C81CC; /* 0x120C819A: jne 0x120c81cc */
L_120C819C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C819C: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8214; /* 0x120C819F: je 0x120c8214 */
L_120C81A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C81A1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C81EC; /* 0x120C81A2: je 0x120c81ec */
L_120C81A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C81A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C81E7; /* 0x120C81A5: jne 0x120c81e7 */
L_120C81A7:
    eax = MEM32(ecx); /* 0x120C81A7: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x24); /* 0x120C81A9: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x120C81AC: push edx */
    PUSH32(esp, 0); /* 0x120C81AD: push 0 */
    PUSH32(esp, ecx); /* 0x120C81AF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C81B0: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x120C81B3: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx + (-0x1); /* 0x120C81B6: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C81B9: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C81C7; /* 0x120C81BB: jne 0x120c81c7 */
L_120C81BD:
    ecx = MEM32(ebp + (-0x8)); /* 0x120C81BD: mov ecx, dword ptr [ebp - 8] */
L_120C81C0:
    eax = ecx + (-0x1); /* 0x120C81C0: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C81C3: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C823A; /* 0x120C81C5: je 0x120c823a */
L_120C81C7:
    edi = 0x00080004u; /* 0x120C81C7: mov edi, 0x80004 */
L_120C81CC:
    /* cmp ebx, 5 */ /* 0x120C81CC: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C81D7; /* 0x120C81CF: jne 0x120c81d7 */
L_120C81D1:
    _flag_a = (uint32_t)((edi | 0x00070000u)); _flag_b = (uint32_t)((edi | 0x00070000u));
    edi = edi | 0x00070000u; /* 0x120C81D1: or edi, 0x70000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C81D7:
    /* test edi, 0x00400000u */ /* 0x120C81D7: test edi, 0x400000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00400000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C823F; /* 0x120C81DD: je 0x120c823f */
L_120C81DF:
    _flag_a = (uint32_t)((edi | 0x00600000u)); _flag_b = (uint32_t)((edi | 0x00600000u));
    edi = edi | 0x00600000u; /* 0x120C81DF: or edi, 0x600000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C8245; /* 0x120C81E5: jmp 0x120c8245 */
L_120C81E7:
    eax = MEM32(ebp + (-0x64)); /* 0x120C81E7: mov eax, dword ptr [ebp - 0x64] */
    goto L_120C8236; /* 0x120C81EA: jmp 0x120c8236 */
L_120C81EC:
    ecx = MEM32(ebp + (-0x60)); /* 0x120C81EC: mov ecx, dword ptr [ebp - 0x60] */
    eax = MEM32(ecx); /* 0x120C81EF: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x40); /* 0x120C81F1: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x120C81F4: push edx */
    PUSH32(esp, 0); /* 0x120C81F5: push 0 */
    PUSH32(esp, ecx); /* 0x120C81F7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C81F8: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x30)); /* 0x120C81FB: mov ecx, dword ptr [ebp - 0x30] */
    eax = ecx + (-0x1); /* 0x120C81FE: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C8201: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C81C7; /* 0x120C8203: jne 0x120c81c7 */
L_120C8205:
    ecx = MEM32(ebp + (-0x2C)); /* 0x120C8205: mov ecx, dword ptr [ebp - 0x2c] */
    eax = ecx + (-0x1); /* 0x120C8208: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C820B: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C81C7; /* 0x120C820D: jne 0x120c81c7 */
L_120C820F:
    ecx = MEM32(ebp + (-0x28)); /* 0x120C820F: mov ecx, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_120C81C0; /* 0x120C8212: jmp 0x120c81c0 */
L_120C8214:
    eax = MEM32(edx); /* 0x120C8214: mov eax, dword ptr [edx] */
    ecx = ebp + (-0x24); /* 0x120C8216: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120C8219: push ecx */
    PUSH32(esp, 0); /* 0x120C821A: push 0 */
    PUSH32(esp, edx); /* 0x120C821C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C821D: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x120C8220: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx + (-0x1); /* 0x120C8223: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C8226: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8234; /* 0x120C8228: jne 0x120c8234 */
L_120C822A:
    ecx = MEM32(ebp + (-0x8)); /* 0x120C822A: mov ecx, dword ptr [ebp - 8] */
    eax = ecx + (-0x1); /* 0x120C822D: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x120C8230: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C823A; /* 0x120C8232: je 0x120c823a */
L_120C8234:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C8234: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8236:
    /* test eax, eax */ /* 0x120C8236: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C81C7; /* 0x120C8238: je 0x120c81c7 */
L_120C823A:
    PUSH32(esp, 5); /* 0x120C823A: push 5 */
    edi = POP32_VAL(esp); /* 0x120C823C: pop edi */
    RECOMP_BACKEDGE();
    goto L_120C81CC; /* 0x120C823D: jmp 0x120c81cc */
L_120C823F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFF9FFFFFu);
    edi = edi & 0xFF9FFFFFu; /* 0x120C823F: and edi, 0xff9fffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8245:
    eax = MEM32(esi); /* 0x120C8245: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120C8247: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C8248: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x120C824B: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x70)) = eax; /* 0x120C824E: mov dword ptr [ebp - 0x70], eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x120C8251: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C825B; /* 0x120C8254: jne 0x120c825b */
L_120C8256:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C8256: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x120C8258: mov dword ptr [ebp + 0x10], edx */
L_120C825B:
    /* cmp edx, eax */ /* 0x120C825B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8269; /* 0x120C825D: jb 0x120c8269 */
L_120C825F:
    eax = 0x8876086Cu; /* 0x120C825F: mov eax, 0x8876086c */
    goto L_120C846C; /* 0x120C8264: jmp 0x120c846c */
L_120C8269:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x120C8269: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0; /* 0x120C826D: and dword ptr [ebp - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C8271: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) & 0; /* 0x120C8275: and dword ptr [ebp - 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8279: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 5 */ /* 0x120C827B: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C827E: setne cl */
    eax = edi; /* 0x120C8281: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x120C8283: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C8288: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    ecx = ecx & 5; /* 0x120C8289: and ecx, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C828C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x64)) = ecx; /* 0x120C828D: mov dword ptr [ebp - 0x64], ecx */
    /* cmp eax, 2 */ /* 0x120C8290: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C82A0; /* 0x120C8293: je 0x120c82a0 */
L_120C8295:
    /* cmp eax, 5 */ /* 0x120C8295: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C82A0; /* 0x120C8298: je 0x120c82a0 */
L_120C829A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) & 0; /* 0x120C829A: and dword ptr [ebp - 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C82A7; /* 0x120C829E: jmp 0x120c82a7 */
L_120C82A0:
    MEM32(ebp + (-0x6C)) = 1; /* 0x120C82A0: mov dword ptr [ebp - 0x6c], 1 */
L_120C82A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C82A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = ebx; /* 0x120C82A9: mov dword ptr [ebp - 0x68], ebx */
    /* test ecx, ecx */ /* 0x120C82AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8428; /* 0x120C82AE: je 0x120c8428 */
L_120C82B4:
    esi = MEM32(ebp + (-0x64)); /* 0x120C82B4: mov esi, dword ptr [ebp - 0x64] */
L_120C82B7:
    ecx = MEM32(ebp + (-0x4C)); /* 0x120C82B7: mov ecx, dword ptr [ebp - 0x4c] */
    eax = ecx; /* 0x120C82BA: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C82BC: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C82E0; /* 0x120C82BF: je 0x120c82e0 */
L_120C82C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C82C1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C82D8; /* 0x120C82C2: je 0x120c82d8 */
L_120C82C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C82C4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C82F6; /* 0x120C82C5: jne 0x120c82f6 */
L_120C82C7:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C82C7: mov ecx, dword ptr [ebp - 0x58] */
    eax = MEM32(ecx); /* 0x120C82CA: mov eax, dword ptr [ecx] */
    esi = ebp + (-0x44); /* 0x120C82CC: lea esi, [ebp - 0x44] */
    PUSH32(esp, esi); /* 0x120C82CF: push esi */
    PUSH32(esp, edx); /* 0x120C82D0: push edx */
    PUSH32(esp, ebx); /* 0x120C82D1: push ebx */
    PUSH32(esp, ecx); /* 0x120C82D2: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C82D3: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_120C82EE; /* 0x120C82D6: jmp 0x120c82ee */
L_120C82D8:
    ecx = MEM32(ebp + (-0x60)); /* 0x120C82D8: mov ecx, dword ptr [ebp - 0x60] */
    esi = ebp + (-0x50); /* 0x120C82DB: lea esi, [ebp - 0x50] */
    goto L_120C82E6; /* 0x120C82DE: jmp 0x120c82e6 */
L_120C82E0:
    ecx = MEM32(ebp + (-0x5C)); /* 0x120C82E0: mov ecx, dword ptr [ebp - 0x5c] */
    esi = ebp + (-0x44); /* 0x120C82E3: lea esi, [ebp - 0x44] */
L_120C82E6:
    eax = MEM32(ecx); /* 0x120C82E6: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120C82E8: push esi */
    PUSH32(esp, edx); /* 0x120C82E9: push edx */
    PUSH32(esp, ecx); /* 0x120C82EA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C82EB: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_120C82EE:
    edx = MEM32(ebp + 0x10); /* 0x120C82EE: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4C)); /* 0x120C82F1: mov ecx, dword ptr [ebp - 0x4c] */
    esi = eax; /* 0x120C82F4: mov esi, eax */
L_120C82F6:
    /* test esi, esi */ /* 0x120C82F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C842A; /* 0x120C82F8: js 0x120c842a */
L_120C82FE:
    ebx = edx + 0x1; /* 0x120C82FE: lea ebx, [edx + 1] */
    goto L_120C83EA; /* 0x120C8301: jmp 0x120c83ea */
L_120C8306:
    eax = ecx; /* 0x120C8306: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C8308: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C832E; /* 0x120C830B: je 0x120c832e */
L_120C830D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C830D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8326; /* 0x120C830E: je 0x120c8326 */
L_120C8310:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8310: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C8341; /* 0x120C8311: jne 0x120c8341 */
L_120C8313:
    ecx = MEM32(ebp + (-0x58)); /* 0x120C8313: mov ecx, dword ptr [ebp - 0x58] */
    eax = MEM32(ecx); /* 0x120C8316: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x48); /* 0x120C8318: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x120C831B: push edx */
    PUSH32(esp, ebx); /* 0x120C831C: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120C831D: push dword ptr [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x120C8320: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C8321: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_120C833C; /* 0x120C8324: jmp 0x120c833c */
L_120C8326:
    ecx = MEM32(ebp + (-0x60)); /* 0x120C8326: mov ecx, dword ptr [ebp - 0x60] */
    edx = ebp + (-0x54); /* 0x120C8329: lea edx, [ebp - 0x54] */
    goto L_120C8334; /* 0x120C832C: jmp 0x120c8334 */
L_120C832E:
    ecx = MEM32(ebp + (-0x5C)); /* 0x120C832E: mov ecx, dword ptr [ebp - 0x5c] */
    edx = ebp + (-0x48); /* 0x120C8331: lea edx, [ebp - 0x48] */
L_120C8334:
    eax = MEM32(ecx); /* 0x120C8334: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x120C8336: push edx */
    PUSH32(esp, ebx); /* 0x120C8337: push ebx */
    PUSH32(esp, ecx); /* 0x120C8338: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C8339: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_120C833C:
    ecx = MEM32(ebp + (-0x4C)); /* 0x120C833C: mov ecx, dword ptr [ebp - 0x4c] */
    esi = eax; /* 0x120C833F: mov esi, eax */
L_120C8341:
    /* test esi, esi */ /* 0x120C8341: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C842A; /* 0x120C8343: js 0x120c842a */
L_120C8349:
    eax = ecx; /* 0x120C8349: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C834B: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8356; /* 0x120C834E: je 0x120c8356 */
L_120C8350:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8350: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C83AC; /* 0x120C8351: je 0x120c83ac */
L_120C8353:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8353: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C836E; /* 0x120C8354: jne 0x120c836e */
L_120C8356:
    eax = MEM32(ebp + (-0x74)); /* 0x120C8356: mov eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8359: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C835B: push ecx */
    PUSH32(esp, edi); /* 0x120C835C: push edi */
    PUSH32(esp, ecx); /* 0x120C835D: push ecx */
    PUSH32(esp, eax); /* 0x120C835E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x120C835F: push dword ptr [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x120C8362: push ecx */
    PUSH32(esp, eax); /* 0x120C8363: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120C8364: push dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_120C7BFF); /* 0x120C8367: call 0x120c7bff */
    RECOMP_FLAGS_IN();
L_120C836C:
    esi = eax; /* 0x120C836C: mov esi, eax */
L_120C836E:
    /* test esi, esi */ /* 0x120C836E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C842A; /* 0x120C8370: js 0x120c842a */
L_120C8376:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x120C8376: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C83C4; /* 0x120C837A: je 0x120c83c4 */
L_120C837C:
    ecx = MEM32(ebp + (-0x44)); /* 0x120C837C: mov ecx, dword ptr [ebp - 0x44] */
    /* test ecx, ecx */ /* 0x120C837F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C838D; /* 0x120C8381: je 0x120c838d */
L_120C8383:
    eax = MEM32(ecx); /* 0x120C8383: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8385: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8386: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x120C8389: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C838D:
    ecx = MEM32(ebp + (-0x50)); /* 0x120C838D: mov ecx, dword ptr [ebp - 0x50] */
    /* test ecx, ecx */ /* 0x120C8390: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C839A; /* 0x120C8392: je 0x120c839a */
L_120C8394:
    eax = MEM32(ecx); /* 0x120C8394: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8396: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8397: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120C839A:
    eax = MEM32(ebp + (-0x48)); /* 0x120C839A: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C839D: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = eax; /* 0x120C83A1: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x120C83A4: mov eax, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x50)) = eax; /* 0x120C83A7: mov dword ptr [ebp - 0x50], eax */
    goto L_120C83E2; /* 0x120C83AA: jmp 0x120c83e2 */
L_120C83AC:
    eax = MEM32(ebp + (-0x74)); /* 0x120C83AC: mov eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C83AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C83B1: push ecx */
    PUSH32(esp, edi); /* 0x120C83B2: push edi */
    PUSH32(esp, ecx); /* 0x120C83B3: push ecx */
    PUSH32(esp, eax); /* 0x120C83B4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x120C83B5: push dword ptr [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x120C83B8: push ecx */
    PUSH32(esp, eax); /* 0x120C83B9: push eax */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x120C83BA: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_120C7FC7); /* 0x120C83BD: call 0x120c7fc7 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120C836C; /* 0x120C83C2: jmp 0x120c836c */
L_120C83C4:
    ecx = MEM32(ebp + (-0x48)); /* 0x120C83C4: mov ecx, dword ptr [ebp - 0x48] */
    /* test ecx, ecx */ /* 0x120C83C7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C83D5; /* 0x120C83C9: je 0x120c83d5 */
L_120C83CB:
    eax = MEM32(ecx); /* 0x120C83CB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C83CD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C83CE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C83D1: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C83D5:
    ecx = MEM32(ebp + (-0x54)); /* 0x120C83D5: mov ecx, dword ptr [ebp - 0x54] */
    /* test ecx, ecx */ /* 0x120C83D8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C83E6; /* 0x120C83DA: je 0x120c83e6 */
L_120C83DC:
    eax = MEM32(ecx); /* 0x120C83DC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C83DE: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C83DF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120C83E2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) & 0; /* 0x120C83E2: and dword ptr [ebp - 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C83E6:
    ecx = MEM32(ebp + (-0x4C)); /* 0x120C83E6: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C83E9: inc ebx */
    _flag_k = FK_INC;
L_120C83EA:
    /* cmp ebx, MEM32(ebp + (-0x70)) */ /* 0x120C83EA: cmp ebx, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8306; /* 0x120C83ED: jb 0x120c8306 */
L_120C83F3:
    ecx = MEM32(ebp + (-0x44)); /* 0x120C83F3: mov ecx, dword ptr [ebp - 0x44] */
    /* test ecx, ecx */ /* 0x120C83F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8404; /* 0x120C83F8: je 0x120c8404 */
L_120C83FA:
    eax = MEM32(ecx); /* 0x120C83FA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C83FC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C83FD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x120C8400: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8404:
    ecx = MEM32(ebp + (-0x50)); /* 0x120C8404: mov ecx, dword ptr [ebp - 0x50] */
    /* test ecx, ecx */ /* 0x120C8407: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8415; /* 0x120C8409: je 0x120c8415 */
L_120C840B:
    eax = MEM32(ecx); /* 0x120C840B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C840D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C840E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0; /* 0x120C8411: and dword ptr [ebp - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8415:
    ebx = MEM32(ebp + (-0x68)); /* 0x120C8415: mov ebx, dword ptr [ebp - 0x68] */
    edx = MEM32(ebp + 0x10); /* 0x120C8418: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C841B: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x68)) = ebx; /* 0x120C841C: mov dword ptr [ebp - 0x68], ebx */
    /* cmp ebx, MEM32(ebp + (-0x64)) */ /* 0x120C841F: cmp ebx, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C82B7; /* 0x120C8422: jb 0x120c82b7 */
L_120C8428:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C8428: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C842A:
    ecx = MEM32(ebp + (-0x44)); /* 0x120C842A: mov ecx, dword ptr [ebp - 0x44] */
    /* test ecx, ecx */ /* 0x120C842D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C843B; /* 0x120C842F: je 0x120c843b */
L_120C8431:
    eax = MEM32(ecx); /* 0x120C8431: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8433: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8434: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x120C8437: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C843B:
    ecx = MEM32(ebp + (-0x50)); /* 0x120C843B: mov ecx, dword ptr [ebp - 0x50] */
    /* test ecx, ecx */ /* 0x120C843E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C844C; /* 0x120C8440: je 0x120c844c */
L_120C8442:
    eax = MEM32(ecx); /* 0x120C8442: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8444: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8445: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0; /* 0x120C8448: and dword ptr [ebp - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C844C:
    ecx = MEM32(ebp + (-0x48)); /* 0x120C844C: mov ecx, dword ptr [ebp - 0x48] */
    /* test ecx, ecx */ /* 0x120C844F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C845D; /* 0x120C8451: je 0x120c845d */
L_120C8453:
    eax = MEM32(ecx); /* 0x120C8453: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8455: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8456: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x120C8459: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C845D:
    ecx = MEM32(ebp + (-0x54)); /* 0x120C845D: mov ecx, dword ptr [ebp - 0x54] */
    /* test ecx, ecx */ /* 0x120C8460: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C846A; /* 0x120C8462: je 0x120c846a */
L_120C8464:
    eax = MEM32(ecx); /* 0x120C8464: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C8466: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C8467: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120C846A:
    eax = esi; /* 0x120C846A: mov eax, esi */
L_120C846C:
    edi = POP32_VAL(esp); /* 0x120C846C: pop edi */
L_120C846D:
    ebx = POP32_VAL(esp); /* 0x120C846D: pop ebx */
L_120C846E:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C846E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C8471: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120C8473: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120C8474: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C8479: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C847A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C8482(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8482u);

L_120C8482:
    edi = edi; /* 0x120C8482: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8484: push ebp */
    ebp = esp; /* 0x120C8485: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C8487: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C848A: push esi */
    ecx = ebp + (-0x10); /* 0x120C848B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C848E: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C8493: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8495: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x120C8498: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C849B: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C84A0: mov esi, eax */
    /* test esi, esi */ /* 0x120C84A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C84C8; /* 0x120C84A4: js 0x120c84c8 */
L_120C84A6:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C84A6: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C84A9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C84AC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C84AF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C84B2: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C84B5: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C84B8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C84BB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C84BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7AF1); /* 0x120C84C1: call 0x120c7af1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C84C6: mov esi, eax */
L_120C84C8:
    ecx = ebp + (-0x10); /* 0x120C84C8: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C84CB: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C84D0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C84D2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C84D3: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C84D4: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C84DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C84DCu);

L_120C84DC:
    edi = edi; /* 0x120C84DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C84DE: push ebp */
    ebp = esp; /* 0x120C84DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C84E1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C84E4: push esi */
    ecx = ebp + (-0x10); /* 0x120C84E5: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C84E8: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C84ED: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C84EF: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x120C84F2: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C84F5: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C84FA: mov esi, eax */
    /* test esi, esi */ /* 0x120C84FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8522; /* 0x120C84FE: js 0x120c8522 */
L_120C8500:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8500: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C8503: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8506: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C8509: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C850C: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C850F: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C8512: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C8515: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C8518: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7AF1); /* 0x120C851B: call 0x120c7af1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8520: mov esi, eax */
L_120C8522:
    ecx = ebp + (-0x10); /* 0x120C8522: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C8525: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C852A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C852C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C852D: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C852E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C8536(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8536u);

L_120C8536:
    edi = edi; /* 0x120C8536: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8538: push ebp */
    ebp = esp; /* 0x120C8539: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C853B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C853E: push esi */
    ecx = ebp + (-0xC); /* 0x120C853F: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C8542: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C8547: push 0 */
    PUSH32(esp, 1); /* 0x120C8549: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C854B: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0xC); /* 0x120C854E: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8551: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C8554: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8559: mov esi, eax */
    /* test esi, esi */ /* 0x120C855B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8581; /* 0x120C855D: js 0x120c8581 */
L_120C855F:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C855F: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8562: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C8565: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8568: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C856B: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C856E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C8571: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C8574: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C8577: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7AF1); /* 0x120C857A: call 0x120c7af1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C857F: mov esi, eax */
L_120C8581:
    ecx = ebp + (-0xC); /* 0x120C8581: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C8584: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C8589: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C858B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C858C: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C858D: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C8595(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8595u);

L_120C8595:
    edi = edi; /* 0x120C8595: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8597: push ebp */
    ebp = esp; /* 0x120C8598: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C859A: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C859D: push esi */
    ecx = ebp + (-0xC); /* 0x120C859E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C85A1: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C85A6: push 1 */
    PUSH32(esp, 1); /* 0x120C85A8: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C85AA: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0xC); /* 0x120C85AD: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C85B0: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C85B3: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C85B8: mov esi, eax */
    /* test esi, esi */ /* 0x120C85BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C85E0; /* 0x120C85BC: js 0x120c85e0 */
L_120C85BE:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C85BE: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C85C1: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C85C4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C85C7: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C85CA: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C85CD: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C85D0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C85D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C85D6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7AF1); /* 0x120C85D9: call 0x120c7af1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C85DE: mov esi, eax */
L_120C85E0:
    ecx = ebp + (-0xC); /* 0x120C85E0: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C85E3: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C85E8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C85EA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C85EB: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C85EC: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C85F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C85F4u);

L_120C85F4:
    edi = edi; /* 0x120C85F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C85F6: push ebp */
    ebp = esp; /* 0x120C85F7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C85F9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C85FC: push esi */
    ecx = ebp + (-0x10); /* 0x120C85FD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C8600: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C8605: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8607: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x120C860A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C860D: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8612: mov esi, eax */
    /* test esi, esi */ /* 0x120C8614: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C863A; /* 0x120C8616: js 0x120c863a */
L_120C8618:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8618: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C861B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C861E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C8621: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C8624: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C8627: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C862A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C862D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C8630: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7EB6); /* 0x120C8633: call 0x120c7eb6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8638: mov esi, eax */
L_120C863A:
    ecx = ebp + (-0x10); /* 0x120C863A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C863D: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C8642: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C8644: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C8645: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C8646: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C864E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C864Eu);

L_120C864E:
    edi = edi; /* 0x120C864E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8650: push ebp */
    ebp = esp; /* 0x120C8651: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C8653: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C8656: push esi */
    ecx = ebp + (-0x10); /* 0x120C8657: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C865A: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C865F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8661: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x120C8664: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C8667: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C866C: mov esi, eax */
    /* test esi, esi */ /* 0x120C866E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8694; /* 0x120C8670: js 0x120c8694 */
L_120C8672:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8672: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C8675: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8678: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C867B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C867E: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C8681: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C8684: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C8687: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C868A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7EB6); /* 0x120C868D: call 0x120c7eb6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8692: mov esi, eax */
L_120C8694:
    ecx = ebp + (-0x10); /* 0x120C8694: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C8697: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C869C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C869E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C869F: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120C86A0: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120C86A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C86A8u);

L_120C86A8:
    edi = edi; /* 0x120C86A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C86AA: push ebp */
    ebp = esp; /* 0x120C86AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C86AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C86B0: push esi */
    ecx = ebp + (-0xC); /* 0x120C86B1: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C86B4: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C86B9: push 0 */
    PUSH32(esp, 1); /* 0x120C86BB: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C86BD: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0xC); /* 0x120C86C0: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C86C3: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C86C6: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C86CB: mov esi, eax */
    /* test esi, esi */ /* 0x120C86CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C86F3; /* 0x120C86CF: js 0x120c86f3 */
L_120C86D1:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C86D1: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C86D4: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C86D7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C86DA: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C86DD: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C86E0: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C86E3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C86E6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C86E9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7EB6); /* 0x120C86EC: call 0x120c7eb6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C86F1: mov esi, eax */
L_120C86F3:
    ecx = ebp + (-0xC); /* 0x120C86F3: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C86F6: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C86FB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C86FD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C86FE: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C86FF: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C8707(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8707u);

L_120C8707:
    edi = edi; /* 0x120C8707: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8709: push ebp */
    ebp = esp; /* 0x120C870A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C870C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C870F: push esi */
    ecx = ebp + (-0xC); /* 0x120C8710: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C8713: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C8718: push 1 */
    PUSH32(esp, 1); /* 0x120C871A: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C871C: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0xC); /* 0x120C871F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8722: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C8725: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C872A: mov esi, eax */
    /* test esi, esi */ /* 0x120C872C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8752; /* 0x120C872E: js 0x120c8752 */
L_120C8730:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C8730: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C8733: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C8736: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8739: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C873C: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C873F: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C8742: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C8745: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C8748: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C7EB6); /* 0x120C874B: call 0x120c7eb6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8750: mov esi, eax */
L_120C8752:
    ecx = ebp + (-0xC); /* 0x120C8752: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C8755: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C875A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C875C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C875D: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120C875E: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120C8766(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C8766u);

L_120C8766:
    edi = edi; /* 0x120C8766: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C8768: push ebp */
    ebp = esp; /* 0x120C8769: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4FCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4FCu; /* 0x120C876B: sub esp, 0x4fc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C8771: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C8776: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C8778: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120C877B: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x4C0)) = eax; /* 0x120C877E: mov dword ptr [ebp - 0x4c0], eax */
    eax = MEM32(ebp + 0x18); /* 0x120C8784: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x4B4)) = eax; /* 0x120C8787: mov dword ptr [ebp - 0x4b4], eax */
    eax = MEM32(ebp + 0x14); /* 0x120C878D: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4D0)) = eax; /* 0x120C8790: mov dword ptr [ebp - 0x4d0], eax */
    eax = MEM32(ebp + 0x10); /* 0x120C8796: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4D4)) = eax; /* 0x120C8799: mov dword ptr [ebp - 0x4d4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120C879F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120C87A2: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x120C87A3: mov ebx, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x4BC)) = eax; /* 0x120C87A6: mov dword ptr [ebp - 0x4bc], eax */
    eax = MEM32(ebp + 0x3C); /* 0x120C87AC: mov eax, dword ptr [ebp + 0x3c] */
    PUSH32(esp, esi); /* 0x120C87AF: push esi */
    MEM32(ebp + (-0x4D8)) = eax; /* 0x120C87B0: mov dword ptr [ebp - 0x4d8], eax */
    eax = MEM32(ebp + 0x44); /* 0x120C87B6: mov eax, dword ptr [ebp + 0x44] */
    esi = ecx; /* 0x120C87B9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x120C87BB: push edi */
    edi = MEM32(ebp + 0x38); /* 0x120C87BC: mov edi, dword ptr [ebp + 0x38] */
    ecx = ebp + (-0x4A8); /* 0x120C87BF: lea ecx, [ebp - 0x4a8] */
    MEM32(ebp + (-0x4AC)) = ebx; /* 0x120C87C5: mov dword ptr [ebp - 0x4ac], ebx */
    MEM32(ebp + (-0x4E8)) = eax; /* 0x120C87CB: mov dword ptr [ebp - 0x4e8], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C87D1: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C87D6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x120C87D8: mov eax, ecx */
    MEM32(ebp + (-0x4B8)) = ecx; /* 0x120C87DA: mov dword ptr [ebp - 0x4b8], ecx */
    MEM32(ebp + (-0x4B0)) = ecx; /* 0x120C87E0: mov dword ptr [ebp - 0x4b0], ecx */
    MEM32(ebp + (-0x4C4)) = ecx; /* 0x120C87E6: mov dword ptr [ebp - 0x4c4], ecx */
    MEM32(ebp + (-0x4C8)) = ecx; /* 0x120C87EC: mov dword ptr [ebp - 0x4c8], ecx */
    ecx = MEM32(ebp + 0x30); /* 0x120C87F2: mov ecx, dword ptr [ebp + 0x30] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x120C87F5: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C880B; /* 0x120C87F8: je 0x120c880b */
L_120C87FA:
    eax = ecx; /* 0x120C87FA: mov eax, ecx */
    if (26u) _cf = (((eax) >> 25) & 1u); /* 0x120C87FC: shr eax, 0x1a */
    if (26u) { _flag_a = recomp_flags_pack((eax >> 26u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 26u; /* 0x120C87FC: shr eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x120C87FF: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x83FFFFFFu);
    ecx = ecx & 0x83FFFFFFu; /* 0x120C8802: and ecx, 0x83ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x30) = ecx; /* 0x120C8808: mov dword ptr [ebp + 0x30], ecx */
L_120C880B:
    /* cmp MEM32(ebp + (-0x4BC)), 0 */ /* 0x120C880B: cmp dword ptr [ebp - 0x4bc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4BC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8829; /* 0x120C8812: jne 0x120c8829 */
L_120C8814:
    ecx = ebp + (-0x4A8); /* 0x120C8814: lea ecx, [ebp - 0x4a8] */
    RECOMP_CALL(sub_120D7246); /* 0x120C881A: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C881F: mov eax, 0x8876086c */
    goto L_120C92D0; /* 0x120C8824: jmp 0x120c92d0 */
L_120C8829:
    /* test esi, esi */ /* 0x120C8829: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8814; /* 0x120C882B: je 0x120c8814 */
L_120C882D:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120C882D: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8814; /* 0x120C8831: je 0x120c8814 */
L_120C8833:
    /* cmp MEM32(ebp + (-0x4E8)), 0 */ /* 0x120C8833: cmp dword ptr [ebp - 0x4e8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4E8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8846; /* 0x120C883A: jne 0x120c8846 */
L_120C883C:
    esi = 0x8876086Cu; /* 0x120C883C: mov esi, 0x8876086c */
    goto L_120C92C3; /* 0x120C8841: jmp 0x120c92c3 */
L_120C8846:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8846: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4D4)), 0xFFFFFFFDu */ /* 0x120C8848: cmp dword ptr [ebp - 0x4d4], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4D4))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C884F: sete cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C8852: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4D0)), 0xFFFFFFFDu */ /* 0x120C8854: cmp dword ptr [ebp - 0x4d0], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4D0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C885B: sete dl */
    MEM32(ebp + (-0x4F4)) = ecx; /* 0x120C885E: mov dword ptr [ebp - 0x4f4], ecx */
    MEM32(ebp + (-0x4FC)) = edx; /* 0x120C8864: mov dword ptr [ebp - 0x4fc], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C886A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4B4)), 0xFFFFFFFDu */ /* 0x120C886C: cmp dword ptr [ebp - 0x4b4], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B4))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C8873: sete dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8876: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C0)), 0xFFFFFFFDu */ /* 0x120C8878: cmp dword ptr [ebp - 0x4c0], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C887F: sete cl */
    MEM32(ebp + (-0x4F8)) = edx; /* 0x120C8882: mov dword ptr [ebp - 0x4f8], edx */
    MEM32(ebp + (-0x4F0)) = ecx; /* 0x120C8888: mov dword ptr [ebp - 0x4f0], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C888E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFFFFDu */ /* 0x120C8890: cmp ebx, -3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x40); /* 0x120C8893: mov ebx, dword ptr [ebp + 0x40] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C8896: sete cl */
    MEM32(ebp + (-0x4CC)) = ecx; /* 0x120C8899: mov dword ptr [ebp - 0x4cc], ecx */
    /* test edi, edi */ /* 0x120C889F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C88AE; /* 0x120C88A1: jne 0x120c88ae */
L_120C88A3:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120C88A3: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C88AE; /* 0x120C88A6: jne 0x120c88ae */
L_120C88A8:
    edi = ebp + (-0x454); /* 0x120C88A8: lea edi, [ebp - 0x454] */
L_120C88AE:
    PUSH32(esp, 1); /* 0x120C88AE: push 1 */
    PUSH32(esp, edi); /* 0x120C88B0: push edi */
    PUSH32(esp, eax); /* 0x120C88B1: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C88B2: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x4A8); /* 0x120C88B5: lea ecx, [ebp - 0x4a8] */
    PUSH32(esp, esi); /* 0x120C88BB: push esi */
    RECOMP_CALL(sub_120DBF0D); /* 0x120C88BC: call 0x120dbf0d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C88C1: mov esi, eax */
    /* test esi, esi */ /* 0x120C88C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C92C3; /* 0x120C88C5: js 0x120c92c3 */
L_120C88CB:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x120C88CB: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x120C88CE: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C88D8; /* 0x120C88D0: jne 0x120c88d8 */
L_120C88D2:
    ebx = MEM32(edi + 0x14); /* 0x120C88D2: mov ebx, dword ptr [edi + 0x14] */
    MEM32(ebp + 0x40) = ebx; /* 0x120C88D5: mov dword ptr [ebp + 0x40], ebx */
L_120C88D8:
    eax = MEM32(ebp + (-0x45C)); /* 0x120C88D8: mov eax, dword ptr [ebp - 0x45c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C88DE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C88E0: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4DC)) = ecx; /* 0x120C88E1: mov dword ptr [ebp - 0x4dc], ecx */
    /* test eax, eax */ /* 0x120C88E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C88F9; /* 0x120C88E9: je 0x120c88f9 */
L_120C88EB:
    eax = MEM32(eax + 0x4C); /* 0x120C88EB: mov eax, dword ptr [eax + 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C88EE: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x120C88EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C88EB; /* 0x120C88F1: jne 0x120c88eb */
L_120C88F3:
    MEM32(ebp + (-0x4DC)) = ecx; /* 0x120C88F3: mov dword ptr [ebp - 0x4dc], ecx */
L_120C88F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C88F9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 5); /* 0x120C88FB: push 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C88FD: inc edx */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x120C88FE: pop edi */
    MEM32(ebp + (-0x4E0)) = edx; /* 0x120C88FF: mov dword ptr [ebp - 0x4e0], edx */
    /* cmp ebx, edi */ /* 0x120C8905: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8930; /* 0x120C8907: jne 0x120c8930 */
L_120C8909:
    eax = MEM32(ebp + (-0x458)); /* 0x120C8909: mov eax, dword ptr [ebp - 0x458] */
    /* test eax, eax */ /* 0x120C890F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8926; /* 0x120C8911: je 0x120c8926 */
L_120C8913:
    eax = MEM32(eax + 0x50); /* 0x120C8913: mov eax, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C8916: inc edx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x120C8917: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8913; /* 0x120C8919: jne 0x120c8913 */
L_120C891B:
    MEM32(ebp + (-0x4E0)) = edx; /* 0x120C891B: mov dword ptr [ebp - 0x4e0], edx */
    /* cmp edx, 6 */ /* 0x120C8921: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8930; /* 0x120C8924: je 0x120c8930 */
L_120C8926:
    esi = 0x80004005u; /* 0x120C8926: mov esi, 0x80004005 */
    goto L_120C92C3; /* 0x120C892B: jmp 0x120c92c3 */
L_120C8930:
    /* cmp MEM32(ebp + (-0x4C0)), 0xFFFFFFFDu */ /* 0x120C8930: cmp dword ptr [ebp - 0x4c0], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8944; /* 0x120C8937: jne 0x120c8944 */
L_120C8939:
    eax = ecx; /* 0x120C8939: mov eax, ecx */
    MEM32(ebp + (-0x4C0)) = ecx; /* 0x120C893B: mov dword ptr [ebp - 0x4c0], ecx */
    MEM32(ebp + 0x1C) = eax; /* 0x120C8941: mov dword ptr [ebp + 0x1c], eax */
L_120C8944:
    ecx = MEM32(ebp + (-0x4D4)); /* 0x120C8944: mov ecx, dword ptr [ebp - 0x4d4] */
    eax = MEM32(ebp + (-0x49C)); /* 0x120C894A: mov eax, dword ptr [ebp - 0x49c] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x120C8950: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8987; /* 0x120C8953: je 0x120c8987 */
L_120C8955:
    /* cmp ecx, 0xFFFFFFFDu */ /* 0x120C8955: cmp ecx, -3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8987; /* 0x120C8958: je 0x120c8987 */
L_120C895A:
    /* test eax, eax */ /* 0x120C895A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8987; /* 0x120C895C: js 0x120c8987 */
L_120C895E:
    /* test ecx, ecx */ /* 0x120C895E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8966; /* 0x120C8960: je 0x120c8966 */
L_120C8962:
    /* cmp ecx, esi */ /* 0x120C8962: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8990; /* 0x120C8964: jne 0x120c8990 */
L_120C8966:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8966: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C8968: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4D4)) = ecx; /* 0x120C8969: mov dword ptr [ebp - 0x4d4], ecx */
    MEM32(ebp + 0x10) = ecx; /* 0x120C896F: mov dword ptr [ebp + 0x10], ecx */
    /* cmp eax, ecx */ /* 0x120C8972: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C8990; /* 0x120C8974: jbe 0x120c8990 */
L_120C8976:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x120C8976: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x120C8978: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, eax */ /* 0x120C897B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8976; /* 0x120C897D: jb 0x120c8976 */
L_120C897F:
    MEM32(ebp + (-0x4D4)) = ecx; /* 0x120C897F: mov dword ptr [ebp - 0x4d4], ecx */
    goto L_120C8990; /* 0x120C8985: jmp 0x120c8990 */
L_120C8987:
    MEM32(ebp + (-0x4D4)) = eax; /* 0x120C8987: mov dword ptr [ebp - 0x4d4], eax */
    MEM32(ebp + 0x10) = eax; /* 0x120C898D: mov dword ptr [ebp + 0x10], eax */
L_120C8990:
    edx = MEM32(ebp + (-0x4D0)); /* 0x120C8990: mov edx, dword ptr [ebp - 0x4d0] */
    eax = MEM32(ebp + (-0x498)); /* 0x120C8996: mov eax, dword ptr [ebp - 0x498] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x120C899C: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C89D3; /* 0x120C899F: je 0x120c89d3 */
L_120C89A1:
    /* cmp edx, 0xFFFFFFFDu */ /* 0x120C89A1: cmp edx, -3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C89D3; /* 0x120C89A4: je 0x120c89d3 */
L_120C89A6:
    /* test eax, eax */ /* 0x120C89A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C89D3; /* 0x120C89A8: js 0x120c89d3 */
L_120C89AA:
    /* test edx, edx */ /* 0x120C89AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C89B2; /* 0x120C89AC: je 0x120c89b2 */
L_120C89AE:
    /* cmp edx, esi */ /* 0x120C89AE: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C89DC; /* 0x120C89B0: jne 0x120c89dc */
L_120C89B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C89B2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C89B4: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4D0)) = edx; /* 0x120C89B5: mov dword ptr [ebp - 0x4d0], edx */
    MEM32(ebp + 0x14) = edx; /* 0x120C89BB: mov dword ptr [ebp + 0x14], edx */
    /* cmp eax, edx */ /* 0x120C89BE: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C89DC; /* 0x120C89C0: jbe 0x120c89dc */
L_120C89C2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x120C89C2: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edx; /* 0x120C89C4: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120C89C7: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C89C2; /* 0x120C89C9: jb 0x120c89c2 */
L_120C89CB:
    MEM32(ebp + (-0x4D0)) = edx; /* 0x120C89CB: mov dword ptr [ebp - 0x4d0], edx */
    goto L_120C89DC; /* 0x120C89D1: jmp 0x120c89dc */
L_120C89D3:
    MEM32(ebp + (-0x4D0)) = eax; /* 0x120C89D3: mov dword ptr [ebp - 0x4d0], eax */
    MEM32(ebp + 0x14) = eax; /* 0x120C89D9: mov dword ptr [ebp + 0x14], eax */
L_120C89DC:
    ecx = MEM32(ebp + (-0x4B4)); /* 0x120C89DC: mov ecx, dword ptr [ebp - 0x4b4] */
    eax = MEM32(ebp + (-0x494)); /* 0x120C89E2: mov eax, dword ptr [ebp - 0x494] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x120C89E8: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8A1F; /* 0x120C89EB: je 0x120c8a1f */
L_120C89ED:
    /* cmp ecx, 0xFFFFFFFDu */ /* 0x120C89ED: cmp ecx, -3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8A1F; /* 0x120C89F0: je 0x120c8a1f */
L_120C89F2:
    /* test eax, eax */ /* 0x120C89F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8A1F; /* 0x120C89F4: js 0x120c8a1f */
L_120C89F6:
    /* test ecx, ecx */ /* 0x120C89F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C89FE; /* 0x120C89F8: je 0x120c89fe */
L_120C89FA:
    /* cmp ecx, esi */ /* 0x120C89FA: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8A28; /* 0x120C89FC: jne 0x120c8a28 */
L_120C89FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C89FE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C8A00: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4B4)) = ecx; /* 0x120C8A01: mov dword ptr [ebp - 0x4b4], ecx */
    MEM32(ebp + 0x18) = ecx; /* 0x120C8A07: mov dword ptr [ebp + 0x18], ecx */
    /* cmp eax, ecx */ /* 0x120C8A0A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C8A28; /* 0x120C8A0C: jbe 0x120c8a28 */
L_120C8A0E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x120C8A0E: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = ecx; /* 0x120C8A10: mov dword ptr [ebp + 0x18], ecx */
    /* cmp ecx, eax */ /* 0x120C8A13: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8A0E; /* 0x120C8A15: jb 0x120c8a0e */
L_120C8A17:
    MEM32(ebp + (-0x4B4)) = ecx; /* 0x120C8A17: mov dword ptr [ebp - 0x4b4], ecx */
    goto L_120C8A28; /* 0x120C8A1D: jmp 0x120c8a28 */
L_120C8A1F:
    MEM32(ebp + (-0x4B4)) = eax; /* 0x120C8A1F: mov dword ptr [ebp - 0x4b4], eax */
    MEM32(ebp + 0x18) = eax; /* 0x120C8A25: mov dword ptr [ebp + 0x18], eax */
L_120C8A28:
    ecx = MEM32(ebp + 0x2C); /* 0x120C8A28: mov ecx, dword ptr [ebp + 0x2c] */
    /* cmp ecx, esi */ /* 0x120C8A2B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8A37; /* 0x120C8A2D: jne 0x120c8a37 */
L_120C8A2F:
    ecx = 0x00080004u; /* 0x120C8A2F: mov ecx, 0x80004 */
    MEM32(ebp + 0x2C) = ecx; /* 0x120C8A34: mov dword ptr [ebp + 0x2c], ecx */
L_120C8A37:
    eax = MEM32(ebp + 0x30); /* 0x120C8A37: mov eax, dword ptr [ebp + 0x30] */
    /* cmp eax, esi */ /* 0x120C8A3A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8A43; /* 0x120C8A3C: jne 0x120c8a43 */
L_120C8A3E:
    eax = edi; /* 0x120C8A3E: mov eax, edi */
    MEM32(ebp + 0x30) = eax; /* 0x120C8A40: mov dword ptr [ebp + 0x30], eax */
L_120C8A43:
    /* cmp ebx, edi */ /* 0x120C8A43: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8A56; /* 0x120C8A45: jne 0x120c8a56 */
L_120C8A47:
    edx = 0x00070000u; /* 0x120C8A47: mov edx, 0x70000 */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x120C8A4C: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120C8A4E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x2C) = ecx; /* 0x120C8A50: mov dword ptr [ebp + 0x2c], ecx */
    MEM32(ebp + 0x30) = eax; /* 0x120C8A53: mov dword ptr [ebp + 0x30], eax */
L_120C8A56:
    edx = 0xFFu; /* 0x120C8A56: mov edx, 0xff */
    /* cmp LO8(ecx), 1 */ /* 0x120C8A5B: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8A74; /* 0x120C8A5E: je 0x120c8a74 */
L_120C8A60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120C8A60: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 2 */ /* 0x120C8A62: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8A74; /* 0x120C8A65: je 0x120c8a74 */
L_120C8A67:
    /* cmp eax, edi */ /* 0x120C8A67: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8A74; /* 0x120C8A69: je 0x120c8a74 */
L_120C8A6B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4E4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4E4)) = MEM32(ebp + (-0x4E4)) & 0; /* 0x120C8A6B: and dword ptr [ebp - 0x4e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C8A7E; /* 0x120C8A72: jmp 0x120c8a7e */
L_120C8A74:
    MEM32(ebp + (-0x4E4)) = 1; /* 0x120C8A74: mov dword ptr [ebp - 0x4e4], 1 */
L_120C8A7E:
    ebx = MEM32(ebp + (-0x4A0)); /* 0x120C8A7E: mov ebx, dword ptr [ebp - 0x4a0] */
    /* test ebx, ebx */ /* 0x120C8A84: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8BEE; /* 0x120C8A86: je 0x120c8bee */
L_120C8A8C:
    ecx = MEM32(ebp + 0x34); /* 0x120C8A8C: mov ecx, dword ptr [ebp + 0x34] */
    edx = ecx; /* 0x120C8A8F: mov edx, ecx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x120C8A91: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x120C8A91: shr edx, 0x10 */
    eax = (uint32_t)LO8(ecx); /* 0x120C8A94: movzx eax, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x120C8A97: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x120C8A9D: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x120C8A9D: shl eax, 0x10 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x120C8AA0: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00FF00u);
    ecx = ecx & 0xFF00FF00u; /* 0x120C8AA2: and ecx, 0xff00ff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120C8AA8: mov edi, ebx */
    eax = ebp + (-0x414); /* 0x120C8AAA: lea eax, [ebp - 0x414] */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x120C8AB0: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C8AB2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120C8AB4: sub edi, eax */
    _flag_k = FK_CMP;
L_120C8AB6:
    eax = edi + esi * 4; /* 0x120C8AB6: lea eax, [edi + esi*4] */
    ecx = MEM32(ebp + eax + (-0x414)); /* 0x120C8AB9: mov ecx, dword ptr [ebp + eax - 0x414] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120C8AC0: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C8AC2: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120C8AC4: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + eax + (-0x414)));
    ecx = ecx & MEM32(ebp + eax + (-0x414)); /* 0x120C8AC6: and ecx, dword ptr [ebp + eax - 0x414] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C8ACD: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + esi * 4 + (-0x418)) = ecx; /* 0x120C8ACE: mov dword ptr [ebp + esi*4 - 0x418], ecx */
    /* cmp esi, 0x100u */ /* 0x120C8AD5: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8AB6; /* 0x120C8ADB: jb 0x120c8ab6 */
L_120C8ADD:
    edi = MEM32(ebp + (-0x4AC)); /* 0x120C8ADD: mov edi, dword ptr [ebp - 0x4ac] */
    esi = MEM32(ebp + (-0x4A8)); /* 0x120C8AE3: mov esi, dword ptr [ebp - 0x4a8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C8AE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x34) = eax; /* 0x120C8AEB: mov dword ptr [ebp + 0x34], eax */
    /* cmp edi, 0x29u */ /* 0x120C8AEE: cmp edi, 0x29 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8C12; /* 0x120C8AF1: je 0x120c8c12 */
L_120C8AF7:
    /* cmp esi, 0x29u */ /* 0x120C8AF7: cmp esi, 0x29 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8C12; /* 0x120C8AFA: jne 0x120c8c12 */
L_120C8B00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C8B00: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x100u; /* 0x120C8B02: mov edx, 0x100 */
L_120C8B07:
    eax = ecx; /* 0x120C8B07: mov eax, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFF00u)); _flag_b = (uint32_t)((eax | 0xFFFFFF00u));
    eax = eax | 0xFFFFFF00u; /* 0x120C8B09: or eax, 0xffffff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x120C8B0E: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x120C8B0E: shl eax, 8 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120C8B11: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x120C8B13: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x120C8B13: shl eax, 8 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120C8B16: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + ecx * 4 + (-0x414)), eax */ /* 0x120C8B18: cmp dword ptr [ebp + ecx*4 - 0x414], eax */
    _flag_a = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x414))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8B26; /* 0x120C8B1F: jne 0x120c8b26 */
L_120C8B21:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120C8B21: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x120C8B22: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8B07; /* 0x120C8B24: jb 0x120c8b07 */
L_120C8B26:
    /* cmp ecx, edx */ /* 0x120C8B26: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8B38; /* 0x120C8B28: jne 0x120c8b38 */
L_120C8B2A:
    PUSH32(esp, 0x32u); /* 0x120C8B2A: push 0x32 */
L_120C8B2C:
    esi = POP32_VAL(esp); /* 0x120C8B2C: pop esi */
    MEM32(ebp + (-0x4A8)) = esi; /* 0x120C8B2D: mov dword ptr [ebp - 0x4a8], esi */
    goto L_120C8C0F; /* 0x120C8B33: jmp 0x120c8c0f */
L_120C8B38:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x120C8B38: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x434))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x434)) = MEM32(ebp + (-0x434)) & 0; /* 0x120C8B3C: and dword ptr [ebp - 0x434], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFu; /* 0x120C8B43: mov eax, 0xff */
    MEM32(ebp + (-0x10)) = 0x55u; /* 0x120C8B48: mov dword ptr [ebp - 0x10], 0x55 */
    MEM32(ebp + (-0xC)) = 0xAAu; /* 0x120C8B4F: mov dword ptr [ebp - 0xc], 0xaa */
    MEM32(ebp + (-0x8)) = eax; /* 0x120C8B56: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x430)) = 0x24u; /* 0x120C8B59: mov dword ptr [ebp - 0x430], 0x24 */
    MEM32(ebp + (-0x42C)) = 0x49u; /* 0x120C8B63: mov dword ptr [ebp - 0x42c], 0x49 */
    MEM32(ebp + (-0x428)) = 0x6Du; /* 0x120C8B6D: mov dword ptr [ebp - 0x428], 0x6d */
    MEM32(ebp + (-0x424)) = 0x92u; /* 0x120C8B77: mov dword ptr [ebp - 0x424], 0x92 */
    MEM32(ebp + (-0x420)) = 0xB6u; /* 0x120C8B81: mov dword ptr [ebp - 0x420], 0xb6 */
    MEM32(ebp + (-0x41C)) = 0xDBu; /* 0x120C8B8B: mov dword ptr [ebp - 0x41c], 0xdb */
    MEM32(ebp + (-0x418)) = eax; /* 0x120C8B95: mov dword ptr [ebp - 0x418], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C8B9B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8B9D:
    eax = edx; /* 0x120C8B9D: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120C8B9F: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + eax * 4 + (-0x14)); /* 0x120C8BA2: mov ecx, dword ptr [ebp + eax*4 - 0x14] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFF00u)); _flag_b = (uint32_t)((ecx | 0xFFFFFF00u));
    ecx = ecx | 0xFFFFFF00u; /* 0x120C8BA6: or ecx, 0xffffff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x120C8BAC: mov eax, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120C8BAE: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120C8BAE: shr eax, 2 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120C8BB1: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120C8BB1: shl ecx, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x120C8BB4: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebp + eax * 4 + (-0x434)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + eax * 4 + (-0x434))));
    ecx = ecx | MEM32(ebp + eax * 4 + (-0x434)); /* 0x120C8BB7: or ecx, dword ptr [ebp + eax*4 - 0x434] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x120C8BBE: mov eax, edx */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120C8BC0: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120C8BC0: shl ecx, 8 */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x120C8BC3: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x120C8BC3: shr eax, 5 */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + eax * 4 + (-0x434)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + eax * 4 + (-0x434))));
    ecx = ecx | MEM32(ebp + eax * 4 + (-0x434)); /* 0x120C8BC6: or ecx, dword ptr [ebp + eax*4 - 0x434] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + edx * 4 + (-0x414)), ecx */ /* 0x120C8BCD: cmp dword ptr [ebp + edx*4 - 0x414], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x414))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8BDF; /* 0x120C8BD4: jne 0x120c8bdf */
L_120C8BD6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C8BD6: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 0x100u */ /* 0x120C8BD7: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8B9D; /* 0x120C8BDD: jb 0x120c8b9d */
L_120C8BDF:
    /* cmp edx, 0x100u */ /* 0x120C8BDF: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8C0F; /* 0x120C8BE5: jne 0x120c8c0f */
L_120C8BE7:
    PUSH32(esp, 0x1Bu); /* 0x120C8BE7: push 0x1b */
    RECOMP_BACKEDGE();
    goto L_120C8B2C; /* 0x120C8BE9: jmp 0x120c8b2c */
L_120C8BEE:
    PUSH32(esp, 0x400u); /* 0x120C8BEE: push 0x400 */
    PUSH32(esp, edx); /* 0x120C8BF3: push edx */
    eax = ebp + (-0x414); /* 0x120C8BF4: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C8BFA: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120C8BFB: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4A8)); /* 0x120C8C00: mov esi, dword ptr [ebp - 0x4a8] */
    edi = MEM32(ebp + (-0x4AC)); /* 0x120C8C06: mov edi, dword ptr [ebp - 0x4ac] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120C8C0C: add esp, 0xc */
    _flag_k = FK_ADD;
L_120C8C0F:
    eax = MEM32(ebp + 0x34); /* 0x120C8C0F: mov eax, dword ptr [ebp + 0x34] */
L_120C8C12:
    /* test edi, edi */ /* 0x120C8C12: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8C1F; /* 0x120C8C14: je 0x120c8c1f */
L_120C8C16:
    /* cmp edi, 0xFFFFFFFDu */ /* 0x120C8C16: cmp edi, -3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8CAB; /* 0x120C8C19: jne 0x120c8cab */
L_120C8C1F:
    /* test eax, eax */ /* 0x120C8C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8C83; /* 0x120C8C21: je 0x120c8c83 */
L_120C8C23:
    PUSH32(esp, esi); /* 0x120C8C23: push esi */
    RECOMP_CALL(sub_120C4C05); /* 0x120C8C24: call 0x120c4c05 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x120C8C29: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x120C8C2C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8C3A; /* 0x120C8C2E: je 0x120c8c3a */
L_120C8C30:
    /* cmp ecx, 1 */ /* 0x120C8C30: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8C3A; /* 0x120C8C33: je 0x120c8c3a */
L_120C8C35:
    /* cmp ecx, 2 */ /* 0x120C8C35: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8C83; /* 0x120C8C38: jne 0x120c8c83 */
L_120C8C3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C8C3A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x10), edx */ /* 0x120C8C3C: cmp dword ptr [eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8C83; /* 0x120C8C3F: jne 0x120c8c83 */
L_120C8C41:
    PUSH32(esp, 9); /* 0x120C8C41: push 9 */
    ecx = POP32_VAL(esp); /* 0x120C8C43: pop ecx */
    esi = eax; /* 0x120C8C44: mov esi, eax */
    eax = ebp + (-0x438); /* 0x120C8C46: lea eax, [ebp - 0x438] */
    PUSH32(esp, eax); /* 0x120C8C4C: push eax */
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C8C4D: push dword ptr [ebp + 0x40] */
    edi = ebp + (-0x438); /* 0x120C8C50: lea edi, [ebp - 0x438] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C8C56: push dword ptr [ebp + 0x20] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C8C59: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, edx); /* 0x120C8C5B: push edx */
    MEM32(ebp + (-0x438)) = edx; /* 0x120C8C5C: mov dword ptr [ebp - 0x438], edx */
    MEM32(ebp + (-0x428)) = 1; /* 0x120C8C62: mov dword ptr [ebp - 0x428], 1 */
    RECOMP_CALL(sub_120C4D34); /* 0x120C8C6C: call 0x120c4d34 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4A0)); /* 0x120C8C71: mov ebx, dword ptr [ebp - 0x4a0] */
    esi = eax; /* 0x120C8C77: mov esi, eax */
    /* test esi, esi */ /* 0x120C8C79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8C83; /* 0x120C8C7B: jne 0x120c8c83 */
L_120C8C7D:
    esi = MEM32(ebp + (-0x4A8)); /* 0x120C8C7D: mov esi, dword ptr [ebp - 0x4a8] */
L_120C8C83:
    PUSH32(esp, esi); /* 0x120C8C83: push esi */
    RECOMP_CALL(sub_120C4EAA); /* 0x120C8C84: call 0x120c4eaa */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x28), 3 */ /* 0x120C8C89: cmp dword ptr [ebp + 0x28], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x120C8C8D: mov edi, eax */
    MEM32(ebp + (-0x4AC)) = edi; /* 0x120C8C8F: mov dword ptr [ebp - 0x4ac], edi */
    MEM32(ebp + 0x24) = edi; /* 0x120C8C95: mov dword ptr [ebp + 0x24], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8CAB; /* 0x120C8C98: je 0x120c8cab */
L_120C8C9A:
    /* cmp edi, 0x14u */ /* 0x120C8C9A: cmp edi, 0x14 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8CAB; /* 0x120C8C9D: jne 0x120c8cab */
L_120C8C9F:
    PUSH32(esp, 0x16u); /* 0x120C8C9F: push 0x16 */
    eax = POP32_VAL(esp); /* 0x120C8CA1: pop eax */
    MEM32(ebp + (-0x4AC)) = eax; /* 0x120C8CA2: mov dword ptr [ebp - 0x4ac], eax */
    MEM32(ebp + 0x24) = eax; /* 0x120C8CA8: mov dword ptr [ebp + 0x24], eax */
L_120C8CAB:
    eax = MEM32(ebp + (-0x4D8)); /* 0x120C8CAB: mov eax, dword ptr [ebp - 0x4d8] */
    /* test eax, eax */ /* 0x120C8CB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8CC8; /* 0x120C8CB3: je 0x120c8cc8 */
L_120C8CB5:
    ecx = 0x100u; /* 0x120C8CB5: mov ecx, 0x100 */
    esi = ebp + (-0x414); /* 0x120C8CBA: lea esi, [ebp - 0x414] */
    edi = eax; /* 0x120C8CC0: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120C8CC2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    /* test ebx, ebx */ /* 0x120C8CC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8D34; /* 0x120C8CC6: jne 0x120c8d34 */
L_120C8CC8:
    edi = MEM32(ebp + (-0x4CC)); /* 0x120C8CC8: mov edi, dword ptr [ebp - 0x4cc] */
    ecx = MEM32(ebp + (-0x4AC)); /* 0x120C8CCE: mov ecx, dword ptr [ebp - 0x4ac] */
    /* test edi, edi */ /* 0x120C8CD4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8CEC; /* 0x120C8CD6: je 0x120c8cec */
L_120C8CD8:
    /* cmp ecx, 0x28u */ /* 0x120C8CD8: cmp ecx, 0x28 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8CE2; /* 0x120C8CDB: je 0x120c8ce2 */
L_120C8CDD:
    /* cmp ecx, 0x29u */ /* 0x120C8CDD: cmp ecx, 0x29 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8CEC; /* 0x120C8CE0: jne 0x120c8cec */
L_120C8CE2:
    esi = 0x8876086Cu; /* 0x120C8CE2: mov esi, 0x8876086c */
    goto L_120C9267; /* 0x120C8CE7: jmp 0x120c9267 */
L_120C8CEC:
    /* cmp ecx, 0x28u */ /* 0x120C8CEC: cmp ecx, 0x28 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8CFF; /* 0x120C8CEF: jne 0x120c8cff */
L_120C8CF1:
    PUSH32(esp, 0x15u); /* 0x120C8CF1: push 0x15 */
    ecx = POP32_VAL(esp); /* 0x120C8CF3: pop ecx */
    MEM32(ebp + (-0x4AC)) = ecx; /* 0x120C8CF4: mov dword ptr [ebp - 0x4ac], ecx */
    MEM32(ebp + 0x24) = ecx; /* 0x120C8CFA: mov dword ptr [ebp + 0x24], ecx */
    goto L_120C8D3A; /* 0x120C8CFD: jmp 0x120c8d3a */
L_120C8CFF:
    /* cmp ecx, 0x29u */ /* 0x120C8CFF: cmp ecx, 0x29 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8D3A; /* 0x120C8D02: jne 0x120c8d3a */
L_120C8D04:
    PUSH32(esp, 0x16u); /* 0x120C8D04: push 0x16 */
    ecx = POP32_VAL(esp); /* 0x120C8D06: pop ecx */
    MEM32(ebp + (-0x4AC)) = ecx; /* 0x120C8D07: mov dword ptr [ebp - 0x4ac], ecx */
    MEM32(ebp + 0x24) = ecx; /* 0x120C8D0D: mov dword ptr [ebp + 0x24], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C8D10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8D12:
    /* cmp MEM8(ebp + eax * 4 + (-0x411)), 0xFFu */ /* 0x120C8D12: cmp byte ptr [ebp + eax*4 - 0x411], 0xff */
    _flag_a = (uint32_t)(MEM8(ebp + eax * 4 + (-0x411))) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8D26; /* 0x120C8D1A: jne 0x120c8d26 */
L_120C8D1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C8D1C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x100u */ /* 0x120C8D1D: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C8D12; /* 0x120C8D22: jb 0x120c8d12 */
L_120C8D24:
    goto L_120C8D3A; /* 0x120C8D24: jmp 0x120c8d3a */
L_120C8D26:
    PUSH32(esp, 0x15u); /* 0x120C8D26: push 0x15 */
    eax = POP32_VAL(esp); /* 0x120C8D28: pop eax */
    MEM32(ebp + (-0x4AC)) = eax; /* 0x120C8D29: mov dword ptr [ebp - 0x4ac], eax */
    MEM32(ebp + 0x24) = eax; /* 0x120C8D2F: mov dword ptr [ebp + 0x24], eax */
    goto L_120C8D3A; /* 0x120C8D32: jmp 0x120c8d3a */
L_120C8D34:
    edi = MEM32(ebp + (-0x4CC)); /* 0x120C8D34: mov edi, dword ptr [ebp - 0x4cc] */
L_120C8D3A:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x120C8D3A: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x20); /* 0x120C8D3E: mov ebx, dword ptr [ebp + 0x20] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8D57; /* 0x120C8D41: jne 0x120c8d57 */
L_120C8D43:
    /* test ebx, 0x200u */ /* 0x120C8D43: test ebx, 0x200 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C8D57; /* 0x120C8D49: jne 0x120c8d57 */
L_120C8D4B:
    MEM32(ebp + (-0x4CC)) = 1; /* 0x120C8D4B: mov dword ptr [ebp - 0x4cc], 1 */
    goto L_120C8D5E; /* 0x120C8D55: jmp 0x120c8d5e */
L_120C8D57:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4CC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4CC)) = MEM32(ebp + (-0x4CC)) & 0; /* 0x120C8D57: and dword ptr [ebp - 0x4cc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C8D5E:
    /* cmp MEM32(ebp + 0x28), 1 */ /* 0x120C8D5E: cmp dword ptr [ebp + 0x28], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8D90; /* 0x120C8D62: jne 0x120c8d90 */
L_120C8D64:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8D64: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8D6A: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4EC); /* 0x120C8D6C: lea edx, [ebp - 0x4ec] */
    PUSH32(esp, edx); /* 0x120C8D72: push edx */
    PUSH32(esp, 0x12001A88u); /* 0x120C8D73: push 0x12001a88 */
    PUSH32(esp, ecx); /* 0x120C8D78: push ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x120C8D79: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120C8D7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C8D90; /* 0x120C8D7D: js 0x120c8d90 */
L_120C8D7F:
    eax = MEM32(ebp + (-0x4EC)); /* 0x120C8D7F: mov eax, dword ptr [ebp - 0x4ec] */
    ecx = MEM32(eax); /* 0x120C8D85: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C8D87: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C8D88: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120C8CE2; /* 0x120C8D8B: jmp 0x120c8ce2 */
L_120C8D90:
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C8D90: push dword ptr [ebp + 0x40] */
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8D93: mov ecx, dword ptr [ebp - 0x4bc] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C8D99: push dword ptr [ebp + 0x28] */
    eax = ebp + 0x24; /* 0x120C8D9C: lea eax, [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x120C8D9F: push eax */
    PUSH32(esp, ebx); /* 0x120C8DA0: push ebx */
    eax = ebp + 0x1C; /* 0x120C8DA1: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x120C8DA4: push eax */
    eax = ebp + 0x14; /* 0x120C8DA5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120C8DA8: push eax */
    eax = ebp + 0x10; /* 0x120C8DA9: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120C8DAC: push eax */
    edx = ebp + 0x18; /* 0x120C8DAD: lea edx, [ebp + 0x18] */
    RECOMP_CALL(sub_120C5461); /* 0x120C8DB0: call 0x120c5461 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C8DB5: mov esi, eax */
    /* test esi, esi */ /* 0x120C8DB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C8DB9: js 0x120c9267 */
L_120C8DBF:
    /* cmp MEM32(ebp + (-0x4F4)), 0 */ /* 0x120C8DBF: cmp dword ptr [ebp - 0x4f4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4F4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x10); /* 0x120C8DC6: mov ebx, dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8DD3; /* 0x120C8DC9: je 0x120c8dd3 */
L_120C8DCB:
    /* cmp MEM32(ebp + (-0x4D4)), ebx */ /* 0x120C8DCB: cmp dword ptr [ebp - 0x4d4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4D4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8E1E; /* 0x120C8DD1: jne 0x120c8e1e */
L_120C8DD3:
    /* cmp MEM32(ebp + (-0x4FC)), 0 */ /* 0x120C8DD3: cmp dword ptr [ebp - 0x4fc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4FC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8DE7; /* 0x120C8DDA: je 0x120c8de7 */
L_120C8DDC:
    ecx = MEM32(ebp + (-0x4D0)); /* 0x120C8DDC: mov ecx, dword ptr [ebp - 0x4d0] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x120C8DE2: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8E1E; /* 0x120C8DE5: jne 0x120c8e1e */
L_120C8DE7:
    /* cmp MEM32(ebp + (-0x4F8)), 0 */ /* 0x120C8DE7: cmp dword ptr [ebp - 0x4f8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4F8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8DFB; /* 0x120C8DEE: je 0x120c8dfb */
L_120C8DF0:
    ecx = MEM32(ebp + (-0x4B4)); /* 0x120C8DF0: mov ecx, dword ptr [ebp - 0x4b4] */
    /* cmp ecx, MEM32(ebp + 0x18) */ /* 0x120C8DF6: cmp ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8E1E; /* 0x120C8DF9: jne 0x120c8e1e */
L_120C8DFB:
    /* cmp MEM32(ebp + (-0x4F0)), 0 */ /* 0x120C8DFB: cmp dword ptr [ebp - 0x4f0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4F0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8E0F; /* 0x120C8E02: je 0x120c8e0f */
L_120C8E04:
    eax = MEM32(ebp + (-0x4C0)); /* 0x120C8E04: mov eax, dword ptr [ebp - 0x4c0] */
    /* cmp eax, MEM32(ebp + 0x1C) */ /* 0x120C8E0A: cmp eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C8E1E; /* 0x120C8E0D: jne 0x120c8e1e */
L_120C8E0F:
    /* test edi, edi */ /* 0x120C8E0F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x24); /* 0x120C8E11: mov edi, dword ptr [ebp + 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C8E28; /* 0x120C8E14: je 0x120c8e28 */
L_120C8E16:
    /* cmp MEM32(ebp + (-0x4AC)), edi */ /* 0x120C8E16: cmp dword ptr [ebp - 0x4ac], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4AC))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8E28; /* 0x120C8E1C: je 0x120c8e28 */
L_120C8E1E:
    esi = 0x8876086Au; /* 0x120C8E1E: mov esi, 0x8876086a */
    goto L_120C9267; /* 0x120C8E23: jmp 0x120c9267 */
L_120C8E28:
    ecx = MEM32(ebp + 0x40); /* 0x120C8E28: mov ecx, dword ptr [ebp + 0x40] */
    eax = ecx; /* 0x120C8E2B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C8E2D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8E94; /* 0x120C8E30: je 0x120c8e94 */
L_120C8E32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8E32: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8E65; /* 0x120C8E33: je 0x120c8e65 */
L_120C8E35:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8E35: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C8EC3; /* 0x120C8E36: jne 0x120c8ec3 */
L_120C8E3C:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8E3C: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8E42: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8E44: push 0 */
    edx = ebp + (-0x4C4); /* 0x120C8E46: lea edx, [ebp - 0x4c4] */
    PUSH32(esp, edx); /* 0x120C8E4C: push edx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C8E4D: push dword ptr [ebp + 0x28] */
    edx = MEM32(ebp + 0x20); /* 0x120C8E50: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x120C8E53: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFE07FFFu);
    edx = edx & 0xFFE07FFFu; /* 0x120C8E54: and edx, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120C8E5A: push edx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8E5B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x120C8E5E: push ebx */
    PUSH32(esp, ecx); /* 0x120C8E5F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x120C8E60: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    goto L_120C8EBE; /* 0x120C8E63: jmp 0x120c8ebe */
L_120C8E65:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8E65: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8E6B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8E6D: push 0 */
    edx = ebp + (-0x4C4); /* 0x120C8E6F: lea edx, [ebp - 0x4c4] */
    PUSH32(esp, edx); /* 0x120C8E75: push edx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C8E76: push dword ptr [ebp + 0x28] */
    edx = MEM32(ebp + 0x20); /* 0x120C8E79: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x120C8E7C: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFE07FFFu);
    edx = edx & 0xFFE07FFFu; /* 0x120C8E7D: and edx, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120C8E83: push edx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8E84: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C8E87: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8E8A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C8E8D: push ebx */
    PUSH32(esp, ecx); /* 0x120C8E8E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x120C8E8F: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    goto L_120C8EBE; /* 0x120C8E92: jmp 0x120c8ebe */
L_120C8E94:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8E94: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8E9A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8E9C: push 0 */
    edx = ebp + (-0x4C4); /* 0x120C8E9E: lea edx, [ebp - 0x4c4] */
    PUSH32(esp, edx); /* 0x120C8EA4: push edx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C8EA5: push dword ptr [ebp + 0x28] */
    edx = MEM32(ebp + 0x20); /* 0x120C8EA8: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x120C8EAB: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFE07FFFu);
    edx = edx & 0xFFE07FFFu; /* 0x120C8EAC: and edx, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120C8EB2: push edx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8EB3: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8EB6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C8EB9: push ebx */
    PUSH32(esp, ecx); /* 0x120C8EBA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x120C8EBB: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
L_120C8EBE:
    ecx = MEM32(ebp + 0x40); /* 0x120C8EBE: mov ecx, dword ptr [ebp + 0x40] */
    esi = eax; /* 0x120C8EC1: mov esi, eax */
L_120C8EC3:
    /* test esi, esi */ /* 0x120C8EC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C8EC5: js 0x120c9267 */
L_120C8ECB:
    /* cmp MEM32(ebp + (-0x4CC)), 0 */ /* 0x120C8ECB: cmp dword ptr [ebp - 0x4cc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4CC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C8F5E; /* 0x120C8ED2: je 0x120c8f5e */
L_120C8ED8:
    eax = ecx; /* 0x120C8ED8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C8EDA: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8F2B; /* 0x120C8EDD: je 0x120c8f2b */
L_120C8EDF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8EDF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8F05; /* 0x120C8EE0: je 0x120c8f05 */
L_120C8EE2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8EE2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C8F4E; /* 0x120C8EE3: jne 0x120c8f4e */
L_120C8EE5:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8EE5: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8EEB: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8EED: push 0 */
    edx = ebp + (-0x4C8); /* 0x120C8EEF: lea edx, [ebp - 0x4c8] */
    PUSH32(esp, edx); /* 0x120C8EF5: push edx */
    PUSH32(esp, 2); /* 0x120C8EF6: push 2 */
    PUSH32(esp, edi); /* 0x120C8EF8: push edi */
    PUSH32(esp, 0); /* 0x120C8EF9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8EFB: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x120C8EFE: push ebx */
    PUSH32(esp, ecx); /* 0x120C8EFF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x120C8F00: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    goto L_120C8F4C; /* 0x120C8F03: jmp 0x120c8f4c */
L_120C8F05:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8F05: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8F0B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8F0D: push 0 */
    edx = ebp + (-0x4C8); /* 0x120C8F0F: lea edx, [ebp - 0x4c8] */
    PUSH32(esp, edx); /* 0x120C8F15: push edx */
    PUSH32(esp, 2); /* 0x120C8F16: push 2 */
    PUSH32(esp, edi); /* 0x120C8F18: push edi */
    PUSH32(esp, 0); /* 0x120C8F19: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8F1B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C8F1E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8F21: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C8F24: push ebx */
    PUSH32(esp, ecx); /* 0x120C8F25: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x120C8F26: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    goto L_120C8F4C; /* 0x120C8F29: jmp 0x120c8f4c */
L_120C8F2B:
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C8F2B: mov ecx, dword ptr [ebp - 0x4bc] */
    eax = MEM32(ecx); /* 0x120C8F31: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x120C8F33: push 0 */
    edx = ebp + (-0x4C8); /* 0x120C8F35: lea edx, [ebp - 0x4c8] */
    PUSH32(esp, edx); /* 0x120C8F3B: push edx */
    PUSH32(esp, 2); /* 0x120C8F3C: push 2 */
    PUSH32(esp, edi); /* 0x120C8F3E: push edi */
    PUSH32(esp, 0); /* 0x120C8F3F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C8F41: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C8F44: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120C8F47: push ebx */
    PUSH32(esp, ecx); /* 0x120C8F48: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x120C8F49: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
L_120C8F4C:
    esi = eax; /* 0x120C8F4C: mov esi, eax */
L_120C8F4E:
    /* test esi, esi */ /* 0x120C8F4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C8F50: js 0x120c9267 */
L_120C8F56:
    ecx = MEM32(ebp + (-0x4C8)); /* 0x120C8F56: mov ecx, dword ptr [ebp - 0x4c8] */
    goto L_120C8F64; /* 0x120C8F5C: jmp 0x120c8f64 */
L_120C8F5E:
    ecx = MEM32(ebp + (-0x4C4)); /* 0x120C8F5E: mov ecx, dword ptr [ebp - 0x4c4] */
L_120C8F64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120C8F64: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4A8); /* 0x120C8F66: lea eax, [ebp - 0x4a8] */
    MEM32(ebp + (-0x4AC)) = ecx; /* 0x120C8F6C: mov dword ptr [ebp - 0x4ac], ecx */
    MEM32(ebp + (-0x4C0)) = eax; /* 0x120C8F72: mov dword ptr [ebp - 0x4c0], eax */
    MEM32(ebp + (-0x4B4)) = edx; /* 0x120C8F78: mov dword ptr [ebp - 0x4b4], edx */
    /* cmp MEM32(ebp + (-0x4E0)), edx */ /* 0x120C8F7E: cmp dword ptr [ebp - 0x4e0], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4E0))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C91F7; /* 0x120C8F84: jbe 0x120c91f7 */
L_120C8F8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C8F8A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x120C8F8C: mov edi, eax */
    /* cmp MEM32(ebp + (-0x4DC)), ebx */ /* 0x120C8F8E: cmp dword ptr [ebp - 0x4dc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4DC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C90AF; /* 0x120C8F94: jbe 0x120c90af */
L_120C8F9A:
    /* cmp ebx, MEM32(ebp + 0x1C) */ /* 0x120C8F9A: cmp ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C90A9; /* 0x120C8F9D: jae 0x120c90a9 */
L_120C8FA3:
    eax = MEM32(ebp + 0x40); /* 0x120C8FA3: mov eax, dword ptr [ebp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C8FA6: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8FCA; /* 0x120C8FA9: je 0x120c8fca */
L_120C8FAB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8FAB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8FC2; /* 0x120C8FAC: je 0x120c8fc2 */
L_120C8FAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8FAE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C8FDA; /* 0x120C8FAF: jne 0x120c8fda */
L_120C8FB1:
    eax = MEM32(ecx); /* 0x120C8FB1: mov eax, dword ptr [ecx] */
    esi = ebp + (-0x4B0); /* 0x120C8FB3: lea esi, [ebp - 0x4b0] */
    PUSH32(esp, esi); /* 0x120C8FB9: push esi */
    PUSH32(esp, ebx); /* 0x120C8FBA: push ebx */
    PUSH32(esp, edx); /* 0x120C8FBB: push edx */
    PUSH32(esp, ecx); /* 0x120C8FBC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C8FBD: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_120C8FD8; /* 0x120C8FC0: jmp 0x120c8fd8 */
L_120C8FC2:
    edx = ebp + (-0x4B8); /* 0x120C8FC2: lea edx, [ebp - 0x4b8] */
    goto L_120C8FD0; /* 0x120C8FC8: jmp 0x120c8fd0 */
L_120C8FCA:
    edx = ebp + (-0x4B0); /* 0x120C8FCA: lea edx, [ebp - 0x4b0] */
L_120C8FD0:
    eax = MEM32(ecx); /* 0x120C8FD0: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x120C8FD2: push edx */
    PUSH32(esp, ebx); /* 0x120C8FD3: push ebx */
    PUSH32(esp, ecx); /* 0x120C8FD4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C8FD5: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_120C8FD8:
    esi = eax; /* 0x120C8FD8: mov esi, eax */
L_120C8FDA:
    /* test esi, esi */ /* 0x120C8FDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C8FDC: js 0x120c9267 */
L_120C8FE2:
    eax = MEM32(ebp + 0x40); /* 0x120C8FE2: mov eax, dword ptr [ebp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C8FE5: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C8FF4; /* 0x120C8FE8: je 0x120c8ff4 */
L_120C8FEA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8FEA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9075; /* 0x120C8FEB: je 0x120c9075 */
L_120C8FF1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C8FF1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C9022; /* 0x120C8FF2: jne 0x120c9022 */
L_120C8FF4:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C8FF4: push dword ptr [ebp + 0x34] */
    eax = edi + 0x18; /* 0x120C8FF7: lea eax, [edi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C8FFA: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x120C8FFD: push eax */
    eax = ebp + (-0x414); /* 0x120C8FFE: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C9004: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x120C9005: push dword ptr [edi + 0x30] */
    PUSH32(esp, MEM32(edi)); /* 0x120C9008: push dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x120C900A: push dword ptr [edi + 4] */
    PUSH32(esp, 0); /* 0x120C900D: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4D8))); /* 0x120C900F: push dword ptr [ebp - 0x4d8] */
    PUSH32(esp, MEM32(ebp + (-0x4B0))); /* 0x120C9015: push dword ptr [ebp - 0x4b0] */
    RECOMP_CALL(sub_120C4F2A); /* 0x120C901B: call 0x120c4f2a */
    RECOMP_FLAGS_IN();
L_120C9020:
    esi = eax; /* 0x120C9020: mov esi, eax */
L_120C9022:
    /* test esi, esi */ /* 0x120C9022: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C9024: js 0x120c9267 */
L_120C902A:
    ecx = MEM32(ebp + (-0x4B8)); /* 0x120C902A: mov ecx, dword ptr [ebp - 0x4b8] */
    /* test ecx, ecx */ /* 0x120C9030: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9041; /* 0x120C9032: je 0x120c9041 */
L_120C9034:
    eax = MEM32(ecx); /* 0x120C9034: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C9036: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C9037: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B8)) = MEM32(ebp + (-0x4B8)) & 0; /* 0x120C903A: and dword ptr [ebp - 0x4b8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9041:
    ecx = MEM32(ebp + (-0x4B0)); /* 0x120C9041: mov ecx, dword ptr [ebp - 0x4b0] */
    /* test ecx, ecx */ /* 0x120C9047: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9058; /* 0x120C9049: je 0x120c9058 */
L_120C904B:
    eax = MEM32(ecx); /* 0x120C904B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C904D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C904E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B0)) = MEM32(ebp + (-0x4B0)) & 0; /* 0x120C9051: and dword ptr [ebp - 0x4b0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9058:
    edx = MEM32(ebp + (-0x4B4)); /* 0x120C9058: mov edx, dword ptr [ebp - 0x4b4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C905E: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4DC)) */ /* 0x120C905F: cmp ebx, dword ptr [ebp - 0x4dc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4DC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C90A9; /* 0x120C9065: jae 0x120c90a9 */
L_120C9067:
    edi = MEM32(edi + 0x4C); /* 0x120C9067: mov edi, dword ptr [edi + 0x4c] */
    ecx = MEM32(ebp + (-0x4AC)); /* 0x120C906A: mov ecx, dword ptr [ebp - 0x4ac] */
    RECOMP_BACKEDGE();
    goto L_120C8F9A; /* 0x120C9070: jmp 0x120c8f9a */
L_120C9075:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9075: push dword ptr [ebp + 0x34] */
    eax = edi + 0x18; /* 0x120C9078: lea eax, [edi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C907B: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x120C907E: push eax */
    eax = ebp + (-0x414); /* 0x120C907F: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C9085: push eax */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x120C9086: push dword ptr [edi + 0x34] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x120C9089: push dword ptr [edi + 0x30] */
    PUSH32(esp, MEM32(edi)); /* 0x120C908C: push dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x120C908E: push dword ptr [edi + 4] */
    PUSH32(esp, 0); /* 0x120C9091: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4D8))); /* 0x120C9093: push dword ptr [ebp - 0x4d8] */
    PUSH32(esp, MEM32(ebp + (-0x4B8))); /* 0x120C9099: push dword ptr [ebp - 0x4b8] */
    RECOMP_CALL(sub_120C51D1); /* 0x120C909F: call 0x120c51d1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120C9020; /* 0x120C90A4: jmp 0x120c9020 */
L_120C90A9:
    eax = MEM32(ebp + (-0x4C0)); /* 0x120C90A9: mov eax, dword ptr [ebp - 0x4c0] */
L_120C90AF:
    /* cmp MEM32(ebp + (-0x4E4)), 0 */ /* 0x120C90AF: cmp dword ptr [ebp - 0x4e4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4E4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C91A0; /* 0x120C90B6: jne 0x120c91a0 */
L_120C90BC:
    /* cmp ebx, MEM32(ebp + 0x1C) */ /* 0x120C90BC: cmp ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C91A0; /* 0x120C90BF: jae 0x120c91a0 */
L_120C90C5:
    ecx = MEM32(ebp + 0x40); /* 0x120C90C5: mov ecx, dword ptr [ebp + 0x40] */
    eax = ecx; /* 0x120C90C8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C90CA: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C90F4; /* 0x120C90CD: je 0x120c90f4 */
L_120C90CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C90CF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C90EC; /* 0x120C90D0: je 0x120c90ec */
L_120C90D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C90D2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C910D; /* 0x120C90D3: jne 0x120c910d */
L_120C90D5:
    ecx = MEM32(ebp + (-0x4AC)); /* 0x120C90D5: mov ecx, dword ptr [ebp - 0x4ac] */
    eax = MEM32(ecx); /* 0x120C90DB: mov eax, dword ptr [ecx] */
    esi = ebp + (-0x4B0); /* 0x120C90DD: lea esi, [ebp - 0x4b0] */
    PUSH32(esp, esi); /* 0x120C90E3: push esi */
    PUSH32(esp, ebx); /* 0x120C90E4: push ebx */
    PUSH32(esp, edx); /* 0x120C90E5: push edx */
    PUSH32(esp, ecx); /* 0x120C90E6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C90E7: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_120C9108; /* 0x120C90EA: jmp 0x120c9108 */
L_120C90EC:
    edx = ebp + (-0x4B8); /* 0x120C90EC: lea edx, [ebp - 0x4b8] */
    goto L_120C90FA; /* 0x120C90F2: jmp 0x120c90fa */
L_120C90F4:
    edx = ebp + (-0x4B0); /* 0x120C90F4: lea edx, [ebp - 0x4b0] */
L_120C90FA:
    ecx = MEM32(ebp + (-0x4AC)); /* 0x120C90FA: mov ecx, dword ptr [ebp - 0x4ac] */
    eax = MEM32(ecx); /* 0x120C9100: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x120C9102: push edx */
    PUSH32(esp, ebx); /* 0x120C9103: push ebx */
    PUSH32(esp, ecx); /* 0x120C9104: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120C9105: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_120C9108:
    ecx = MEM32(ebp + 0x40); /* 0x120C9108: mov ecx, dword ptr [ebp + 0x40] */
    esi = eax; /* 0x120C910B: mov esi, eax */
L_120C910D:
    /* test esi, esi */ /* 0x120C910D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C910F: js 0x120c9267 */
L_120C9115:
    eax = ecx; /* 0x120C9115: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C9117: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9126; /* 0x120C911A: je 0x120c9126 */
L_120C911C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C911C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C91C3; /* 0x120C911D: je 0x120c91c3 */
L_120C9123:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C9123: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C9154; /* 0x120C9124: jne 0x120c9154 */
L_120C9126:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9126: push dword ptr [ebp + 0x34] */
    eax = edi + 0x18; /* 0x120C9129: lea eax, [edi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C912C: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x120C912F: push eax */
    eax = ebp + (-0x414); /* 0x120C9130: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C9136: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x120C9137: push dword ptr [edi + 0x30] */
    PUSH32(esp, MEM32(edi)); /* 0x120C913A: push dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x120C913C: push dword ptr [edi + 4] */
    PUSH32(esp, 0); /* 0x120C913F: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4D8))); /* 0x120C9141: push dword ptr [ebp - 0x4d8] */
    PUSH32(esp, MEM32(ebp + (-0x4B0))); /* 0x120C9147: push dword ptr [ebp - 0x4b0] */
    RECOMP_CALL(sub_120C4F2A); /* 0x120C914D: call 0x120c4f2a */
    RECOMP_FLAGS_IN();
L_120C9152:
    esi = eax; /* 0x120C9152: mov esi, eax */
L_120C9154:
    /* test esi, esi */ /* 0x120C9154: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C9156: js 0x120c9267 */
L_120C915C:
    ecx = MEM32(ebp + (-0x4B8)); /* 0x120C915C: mov ecx, dword ptr [ebp - 0x4b8] */
    /* test ecx, ecx */ /* 0x120C9162: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9173; /* 0x120C9164: je 0x120c9173 */
L_120C9166:
    eax = MEM32(ecx); /* 0x120C9166: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C9168: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C9169: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B8)) = MEM32(ebp + (-0x4B8)) & 0; /* 0x120C916C: and dword ptr [ebp - 0x4b8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9173:
    ecx = MEM32(ebp + (-0x4B0)); /* 0x120C9173: mov ecx, dword ptr [ebp - 0x4b0] */
    /* test ecx, ecx */ /* 0x120C9179: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C918A; /* 0x120C917B: je 0x120c918a */
L_120C917D:
    eax = MEM32(ecx); /* 0x120C917D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C917F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C9180: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B0)) = MEM32(ebp + (-0x4B0)) & 0; /* 0x120C9183: and dword ptr [ebp - 0x4b0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C918A:
    edx = MEM32(ebp + (-0x4B4)); /* 0x120C918A: mov edx, dword ptr [ebp - 0x4b4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120C9190: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x1C) */ /* 0x120C9191: cmp ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C90C5; /* 0x120C9194: jb 0x120c90c5 */
L_120C919A:
    eax = MEM32(ebp + (-0x4C0)); /* 0x120C919A: mov eax, dword ptr [ebp - 0x4c0] */
L_120C91A0:
    eax = MEM32(eax + 0x50); /* 0x120C91A0: mov eax, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120C91A3: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4C0)) = eax; /* 0x120C91A4: mov dword ptr [ebp - 0x4c0], eax */
    MEM32(ebp + (-0x4B4)) = edx; /* 0x120C91AA: mov dword ptr [ebp - 0x4b4], edx */
    /* cmp edx, MEM32(ebp + (-0x4E0)) */ /* 0x120C91B0: cmp edx, dword ptr [ebp - 0x4e0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4E0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C91F7; /* 0x120C91B6: jae 0x120c91f7 */
L_120C91B8:
    ecx = MEM32(ebp + (-0x4AC)); /* 0x120C91B8: mov ecx, dword ptr [ebp - 0x4ac] */
    RECOMP_BACKEDGE();
    goto L_120C8F8A; /* 0x120C91BE: jmp 0x120c8f8a */
L_120C91C3:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C91C3: push dword ptr [ebp + 0x34] */
    eax = edi + 0x18; /* 0x120C91C6: lea eax, [edi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C91C9: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x120C91CC: push eax */
    eax = ebp + (-0x414); /* 0x120C91CD: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C91D3: push eax */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x120C91D4: push dword ptr [edi + 0x34] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x120C91D7: push dword ptr [edi + 0x30] */
    PUSH32(esp, MEM32(edi)); /* 0x120C91DA: push dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x120C91DC: push dword ptr [edi + 4] */
    PUSH32(esp, 0); /* 0x120C91DF: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4D8))); /* 0x120C91E1: push dword ptr [ebp - 0x4d8] */
    PUSH32(esp, MEM32(ebp + (-0x4B8))); /* 0x120C91E7: push dword ptr [ebp - 0x4b8] */
    RECOMP_CALL(sub_120C51D1); /* 0x120C91ED: call 0x120c51d1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120C9152; /* 0x120C91F2: jmp 0x120c9152 */
L_120C91F7:
    /* cmp MEM32(ebp + (-0x4E4)), 0 */ /* 0x120C91F7: cmp dword ptr [ebp - 0x4e4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4E4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C9229; /* 0x120C91FE: je 0x120c9229 */
L_120C9200:
    eax = MEM32(ebp + (-0x4DC)); /* 0x120C9200: mov eax, dword ptr [ebp - 0x4dc] */
    /* cmp eax, MEM32(ebp + 0x1C) */ /* 0x120C9206: cmp eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120C9229; /* 0x120C9209: jae 0x120c9229 */
L_120C920B:
    ecx = MEM32(ebp + 0x30); /* 0x120C920B: mov ecx, dword ptr [ebp + 0x30] */
    PUSH32(esp, ecx); /* 0x120C920E: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C920F: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x120C9210: push eax */
    eax = ebp + (-0x414); /* 0x120C9211: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120C9217: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4AC))); /* 0x120C9218: push dword ptr [ebp - 0x4ac] */
    RECOMP_CALL(sub_120C811F); /* 0x120C921E: call 0x120c811f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9223: mov esi, eax */
    /* test esi, esi */ /* 0x120C9225: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C9227: js 0x120c9267 */
L_120C9229:
    /* cmp MEM32(ebp + (-0x4CC)), 0 */ /* 0x120C9229: cmp dword ptr [ebp - 0x4cc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4CC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120C9250; /* 0x120C9230: je 0x120c9250 */
L_120C9232:
    PUSH32(esp, MEM32(ebp + (-0x4C4))); /* 0x120C9232: push dword ptr [ebp - 0x4c4] */
    ecx = MEM32(ebp + (-0x4BC)); /* 0x120C9238: mov ecx, dword ptr [ebp - 0x4bc] */
    PUSH32(esp, MEM32(ebp + (-0x4C8))); /* 0x120C923E: push dword ptr [ebp - 0x4c8] */
    eax = MEM32(ecx); /* 0x120C9244: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C9246: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x7C)); /* 0x120C9247: call dword ptr [eax + 0x7c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C924A: mov esi, eax */
    /* test esi, esi */ /* 0x120C924C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9267; /* 0x120C924E: js 0x120c9267 */
L_120C9250:
    eax = MEM32(ebp + (-0x4C4)); /* 0x120C9250: mov eax, dword ptr [ebp - 0x4c4] */
    ecx = MEM32(ebp + (-0x4E8)); /* 0x120C9256: mov ecx, dword ptr [ebp - 0x4e8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C4)) = MEM32(ebp + (-0x4C4)) & 0; /* 0x120C925C: and dword ptr [ebp - 0x4c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x120C9263: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C9265: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9267:
    ecx = MEM32(ebp + (-0x4B8)); /* 0x120C9267: mov ecx, dword ptr [ebp - 0x4b8] */
    /* test ecx, ecx */ /* 0x120C926D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C927E; /* 0x120C926F: je 0x120c927e */
L_120C9271:
    eax = MEM32(ecx); /* 0x120C9271: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C9273: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C9274: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B8)) = MEM32(ebp + (-0x4B8)) & 0; /* 0x120C9277: and dword ptr [ebp - 0x4b8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C927E:
    ecx = MEM32(ebp + (-0x4B0)); /* 0x120C927E: mov ecx, dword ptr [ebp - 0x4b0] */
    /* test ecx, ecx */ /* 0x120C9284: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9295; /* 0x120C9286: je 0x120c9295 */
L_120C9288:
    eax = MEM32(ecx); /* 0x120C9288: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C928A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C928B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4B0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4B0)) = MEM32(ebp + (-0x4B0)) & 0; /* 0x120C928E: and dword ptr [ebp - 0x4b0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9295:
    ecx = MEM32(ebp + (-0x4C4)); /* 0x120C9295: mov ecx, dword ptr [ebp - 0x4c4] */
    /* test ecx, ecx */ /* 0x120C929B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C92AC; /* 0x120C929D: je 0x120c92ac */
L_120C929F:
    eax = MEM32(ecx); /* 0x120C929F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C92A1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C92A2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C4)) = MEM32(ebp + (-0x4C4)) & 0; /* 0x120C92A5: and dword ptr [ebp - 0x4c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C92AC:
    ecx = MEM32(ebp + (-0x4C8)); /* 0x120C92AC: mov ecx, dword ptr [ebp - 0x4c8] */
    /* test ecx, ecx */ /* 0x120C92B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C92C3; /* 0x120C92B4: je 0x120c92c3 */
L_120C92B6:
    eax = MEM32(ecx); /* 0x120C92B6: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C92B8: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C92B9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C8)) = MEM32(ebp + (-0x4C8)) & 0; /* 0x120C92BC: and dword ptr [ebp - 0x4c8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C92C3:
    ecx = ebp + (-0x4A8); /* 0x120C92C3: lea ecx, [ebp - 0x4a8] */
    RECOMP_CALL(sub_120D7246); /* 0x120C92C9: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C92CE: mov eax, esi */
L_120C92D0:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C92D0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120C92D3: pop edi */
    esi = POP32_VAL(esp); /* 0x120C92D4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C92D5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C92D7: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C92D8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C92DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 68; { RECOMP_REGS_OUT(); return; } /* 0x120C92DE: ret 0x40 */
    RECOMP_REGS_OUT();
}

void sub_120C92E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C92E6u);

L_120C92E6:
    edi = edi; /* 0x120C92E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C92E8: push ebp */
    ebp = esp; /* 0x120C92E9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C92EB: push dword ptr [ebp + 0x40] */
    ecx = MEM32(ebp + 0xC); /* 0x120C92EE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x120C92F1: push 3 */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C92F3: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C92F6: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C92F9: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C92FC: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C92FF: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9302: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9305: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9308: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C930B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 1); /* 0x120C930E: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9310: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9313: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9316: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9319: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C8766); /* 0x120C931C: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C9321: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 64; { RECOMP_REGS_OUT(); return; } /* 0x120C9322: ret 0x3c */
    RECOMP_REGS_OUT();
}

void sub_120C932A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C932Au);

L_120C932A:
    edi = edi; /* 0x120C932A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C932C: push ebp */
    ebp = esp; /* 0x120C932D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C932F: push dword ptr [ebp + 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x120C9332: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 5); /* 0x120C9335: push 5 */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9337: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C933A: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C933D: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9340: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9343: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9346: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9349: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C934C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C934F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 1); /* 0x120C9352: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9354: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9357: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C935A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C935D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C8766); /* 0x120C9360: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C9365: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120C9366: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120C936E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C936Eu);

L_120C936E:
    edi = edi; /* 0x120C936E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9370: push ebp */
    ebp = esp; /* 0x120C9371: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x44)); /* 0x120C9373: push dword ptr [ebp + 0x44] */
    ecx = MEM32(ebp + 0xC); /* 0x120C9376: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120C9379: push 4 */
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C937B: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C937E: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9381: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9384: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9387: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C938A: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C938D: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9390: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9393: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9396: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9399: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C939C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C939F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C93A2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C8766); /* 0x120C93A5: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C93AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 68; { RECOMP_REGS_OUT(); return; } /* 0x120C93AB: ret 0x40 */
    RECOMP_REGS_OUT();
}

void sub_120C93B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C93B3u);

L_120C93B3:
    edi = edi; /* 0x120C93B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C93B5: push ebp */
    ebp = esp; /* 0x120C93B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x120C93B8: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120C93BE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120C93C3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120C93C5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120C93C8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120C93CB: push ebx */
    PUSH32(esp, esi); /* 0x120C93CC: push esi */
    ebx = ecx; /* 0x120C93CD: mov ebx, ecx */
    esi = edx; /* 0x120C93CF: mov esi, edx */
    ecx = ebp + (-0x78); /* 0x120C93D1: lea ecx, [ebp - 0x78] */
    MEM32(ebp + (-0xD4)) = ebx; /* 0x120C93D4: mov dword ptr [ebp - 0xd4], ebx */
    MEM32(ebp + (-0x9C)) = esi; /* 0x120C93DA: mov dword ptr [ebp - 0x9c], esi */
    MEM32(ebp + (-0xB0)) = eax; /* 0x120C93E0: mov dword ptr [ebp - 0xb0], eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C93E6: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120C93EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C9401; /* 0x120C93ED: jne 0x120c9401 */
L_120C93EF:
    ecx = ebp + (-0x78); /* 0x120C93EF: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_120D7246); /* 0x120C93F2: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120C93F7: mov eax, 0x8876086c */
    goto L_120C9943; /* 0x120C93FC: jmp 0x120c9943 */
L_120C9401:
    /* test esi, esi */ /* 0x120C9401: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C93EF; /* 0x120C9403: je 0x120c93ef */
L_120C9405:
    eax = MEM32(esi); /* 0x120C9405: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x120C9407: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C9408: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120C940A: push esi */
    MEM32(ebp + (-0xE0)) = edi; /* 0x120C940B: mov dword ptr [ebp - 0xe0], edi */
    MEM32(ebp + (-0xDC)) = edi; /* 0x120C9411: mov dword ptr [ebp - 0xdc], edi */
    MEM32(ebp + (-0xD8)) = edi; /* 0x120C9417: mov dword ptr [ebp - 0xd8], edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x120C941D: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120C9420: mov ebx, eax */
    ecx = ebx; /* 0x120C9422: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x120C9424: sub ecx, 3 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x120C9427: mov dword ptr [ebp - 0xb4], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9463; /* 0x120C942D: je 0x120c9463 */
L_120C942F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C942F: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9447; /* 0x120C9430: je 0x120c9447 */
L_120C9432:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120C9432: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C943F; /* 0x120C9433: je 0x120c943f */
L_120C9435:
    edi = 0x8876086Cu; /* 0x120C9435: mov edi, 0x8876086c */
    goto L_120C9938; /* 0x120C943A: jmp 0x120c9938 */
L_120C943F:
    MEM32(ebp + (-0xDC)) = esi; /* 0x120C943F: mov dword ptr [ebp - 0xdc], esi */
    goto L_120C9469; /* 0x120C9445: jmp 0x120c9469 */
L_120C9447:
    eax = MEM32(esi); /* 0x120C9447: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x94); /* 0x120C9449: lea ecx, [ebp - 0x94] */
    PUSH32(esp, ecx); /* 0x120C944F: push ecx */
    PUSH32(esp, edi); /* 0x120C9450: push edi */
    PUSH32(esp, esi); /* 0x120C9451: push esi */
    MEM32(ebp + (-0xD8)) = esi; /* 0x120C9452: mov dword ptr [ebp - 0xd8], esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C9458: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x88)); /* 0x120C945B: mov eax, dword ptr [ebp - 0x88] */
    goto L_120C9477; /* 0x120C9461: jmp 0x120c9477 */
L_120C9463:
    MEM32(ebp + (-0xE0)) = esi; /* 0x120C9463: mov dword ptr [ebp - 0xe0], esi */
L_120C9469:
    eax = MEM32(esi); /* 0x120C9469: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x120C946B: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120C946E: push ecx */
    PUSH32(esp, edi); /* 0x120C946F: push edi */
    PUSH32(esp, esi); /* 0x120C9470: push esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x120C9471: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x120C9474: mov eax, dword ptr [ebp - 0x18] */
L_120C9477:
    PUSH32(esp, 4); /* 0x120C9477: push 4 */
    MEM32(ebp + (-0xCC)) = eax; /* 0x120C9479: mov dword ptr [ebp - 0xcc], eax */
    edx = POP32_VAL(esp); /* 0x120C947F: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C9480: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x120C9482: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C94A9; /* 0x120C9485: jne 0x120c94a9 */
L_120C9487:
    /* cmp ebx, 5 */ /* 0x120C9487: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120C948A: setne al */
    PUSH32(esp, esi); /* 0x120C948D: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C948E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x120C948F: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C9492: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xAC)) = eax; /* 0x120C9493: mov dword ptr [ebp - 0xac], eax */
    eax = MEM32(esi); /* 0x120C9499: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120C949B: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xAC)); /* 0x120C949E: mov edi, dword ptr [ebp - 0xac] */
    PUSH32(esp, 4); /* 0x120C94A4: push 4 */
    edx = POP32_VAL(esp); /* 0x120C94A6: pop edx */
    goto L_120C94B3; /* 0x120C94A7: jmp 0x120c94b3 */
L_120C94A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C94A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C94AB: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xAC)) = edi; /* 0x120C94AC: mov dword ptr [ebp - 0xac], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C94B2: inc eax */
    _flag_k = FK_INC;
L_120C94B3:
    ebx = eax; /* 0x120C94B3: mov ebx, eax */
    MEM32(ebp + (-0xBC)) = eax; /* 0x120C94B5: mov dword ptr [ebp - 0xbc], eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x120C94BB: imul ebx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C94BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA0)) = eax; /* 0x120C94C0: mov dword ptr [ebp - 0xa0], eax */
    MEM32(ebp + (-0xA4)) = eax; /* 0x120C94C6: mov dword ptr [ebp - 0xa4], eax */
    MEM32(ebp + (-0xA8)) = eax; /* 0x120C94CC: mov dword ptr [ebp - 0xa8], eax */
    MEM32(ebp + (-0xB8)) = eax; /* 0x120C94D2: mov dword ptr [ebp - 0xb8], eax */
    eax = MEM32(ebp + (-0xB4)); /* 0x120C94D8: mov eax, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C94DE: sub eax, 3 */
    _flag_k = FK_CMP;
    ecx = 0x120014BCu; /* 0x120C94E1: mov ecx, 0x120014bc */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C94F2; /* 0x120C94E6: je 0x120c94f2 */
L_120C94E8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C94E8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C955C; /* 0x120C94E9: je 0x120c955c */
L_120C94EB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C94EB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C963B; /* 0x120C94EC: jne 0x120c963b */
L_120C94F2:
    PUSH32(esp, ecx); /* 0x120C94F2: push ecx */
    PUSH32(esp, 0x14u); /* 0x120C94F3: push 0x14 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C94F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x120C94F7: pop edx */
    eax = ebx; /* 0x120C94F8: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C94FA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C94FC: seto cl */
    PUSH32(esp, 4); /* 0x120C94FF: push 4 */
    edx = POP32_VAL(esp); /* 0x120C9501: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C9502: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C9504: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C9506: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120C9508: add ecx, edx */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x120C950A: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120C950D: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120C950F: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C9511: push eax */
    RECOMP_CALL(sub_12018970); /* 0x120C9512: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C9517: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C9518: pop ecx */
    /* test eax, eax */ /* 0x120C9519: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C95EF; /* 0x120C951B: je 0x120c95ef */
L_120C9521:
    ecx = eax + 0x4; /* 0x120C9521: lea ecx, [eax + 4] */
    MEM32(eax) = ebx; /* 0x120C9524: mov dword ptr [eax], ebx */
    eax = ebx + (-0x1); /* 0x120C9526: lea eax, [ebx - 1] */
    MEM32(ebp + (-0xA8)) = ecx; /* 0x120C9529: mov dword ptr [ebp - 0xa8], ecx */
    edi = ecx; /* 0x120C952F: mov edi, ecx */
    /* test eax, eax */ /* 0x120C9531: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9551; /* 0x120C9533: js 0x120c9551 */
L_120C9535:
    esi = ebx + (-0x1); /* 0x120C9535: lea esi, [ebx - 1] */
L_120C9538:
    ecx = edi; /* 0x120C9538: mov ecx, edi */
    RECOMP_CALL(sub_120E04A2); /* 0x120C953A: call 0x120e04a2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120C953F: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C9542: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_120C9538; /* 0x120C9543: jns 0x120c9538 */
L_120C9545:
    esi = MEM32(ebp + (-0x9C)); /* 0x120C9545: mov esi, dword ptr [ebp - 0x9c] */
    ecx = MEM32(ebp + (-0xA8)); /* 0x120C954B: mov ecx, dword ptr [ebp - 0xa8] */
L_120C9551:
    edi = MEM32(ebp + (-0xAC)); /* 0x120C9551: mov edi, dword ptr [ebp - 0xac] */
    goto L_120C95F7; /* 0x120C9557: jmp 0x120c95f7 */
L_120C955C:
    PUSH32(esp, ecx); /* 0x120C955C: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C955D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x120C955F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C9561: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C9563: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C9566: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C9568: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C956A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120C956C: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x120C956F: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120C9572: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120C9574: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C9576: push eax */
    RECOMP_CALL(sub_12018970); /* 0x120C9577: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C957C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C957D: pop ecx */
    /* test eax, eax */ /* 0x120C957E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C95BC; /* 0x120C9580: je 0x120c95bc */
L_120C9582:
    ecx = eax + 0x4; /* 0x120C9582: lea ecx, [eax + 4] */
    MEM32(eax) = ebx; /* 0x120C9585: mov dword ptr [eax], ebx */
    eax = ebx + (-0x1); /* 0x120C9587: lea eax, [ebx - 1] */
    MEM32(ebp + (-0xB8)) = ecx; /* 0x120C958A: mov dword ptr [ebp - 0xb8], ecx */
    edi = ecx; /* 0x120C9590: mov edi, ecx */
    /* test eax, eax */ /* 0x120C9592: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C95B4; /* 0x120C9594: js 0x120c95b4 */
L_120C9596:
    esi = ebx + (-0x1); /* 0x120C9596: lea esi, [ebx - 1] */
L_120C9599:
    ecx = edi; /* 0x120C9599: mov ecx, edi */
    RECOMP_CALL(sub_120E065E); /* 0x120C959B: call 0x120e065e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x120C95A0: push 4 */
    eax = POP32_VAL(esp); /* 0x120C95A2: pop eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x120C95A3: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120C95A5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_120C9599; /* 0x120C95A6: jns 0x120c9599 */
L_120C95A8:
    esi = MEM32(ebp + (-0x9C)); /* 0x120C95A8: mov esi, dword ptr [ebp - 0x9c] */
    ecx = MEM32(ebp + (-0xB8)); /* 0x120C95AE: mov ecx, dword ptr [ebp - 0xb8] */
L_120C95B4:
    edi = MEM32(ebp + (-0xAC)); /* 0x120C95B4: mov edi, dword ptr [ebp - 0xac] */
    goto L_120C95C4; /* 0x120C95BA: jmp 0x120c95c4 */
L_120C95BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C95BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB8)) = ecx; /* 0x120C95BE: mov dword ptr [ebp - 0xb8], ecx */
L_120C95C4:
    /* test ecx, ecx */ /* 0x120C95C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98A7; /* 0x120C95C6: je 0x120c98a7 */
L_120C95CC:
    PUSH32(esp, 0x120014BCu); /* 0x120C95CC: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C95D1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120C95D3: push 4 */
    edx = POP32_VAL(esp); /* 0x120C95D5: pop edx */
    eax = ebx; /* 0x120C95D6: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C95D8: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C95DA: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C95DD: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C95DF: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C95E1: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C95E2: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA4)) = eax; /* 0x120C95E7: mov dword ptr [ebp - 0xa4], eax */
    goto L_120C9620; /* 0x120C95ED: jmp 0x120c9620 */
L_120C95EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C95EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA8)) = ecx; /* 0x120C95F1: mov dword ptr [ebp - 0xa8], ecx */
L_120C95F7:
    /* test ecx, ecx */ /* 0x120C95F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98A7; /* 0x120C95F9: je 0x120c98a7 */
L_120C95FF:
    PUSH32(esp, 0x120014BCu); /* 0x120C95FF: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C9604: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120C9606: push 4 */
    edx = POP32_VAL(esp); /* 0x120C9608: pop edx */
    eax = ebx; /* 0x120C9609: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120C960B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120C960D: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120C9610: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120C9612: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120C9614: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120C9615: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA0)) = eax; /* 0x120C961A: mov dword ptr [ebp - 0xa0], eax */
L_120C9620:
    ecx = POP32_VAL(esp); /* 0x120C9620: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C9621: pop ecx */
    /* test eax, eax */ /* 0x120C9622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98A7; /* 0x120C9624: je 0x120c98a7 */
L_120C962A:
    ecx = ebx; /* 0x120C962A: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120C962C: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120C962C: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x120C962F: push ecx */
    PUSH32(esp, 0); /* 0x120C9630: push 0 */
    PUSH32(esp, eax); /* 0x120C9632: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120C9633: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120C9638: add esp, 0xc */
    _flag_k = FK_ADD;
L_120C963B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C963B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x78); /* 0x120C963D: lea edx, [ebp - 0x78] */
    MEM32(ebp + (-0xC4)) = edx; /* 0x120C9640: mov dword ptr [ebp - 0xc4], edx */
    MEM32(ebp + (-0x9C)) = eax; /* 0x120C9646: mov dword ptr [ebp - 0x9c], eax */
    /* test edi, edi */ /* 0x120C964C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C982C; /* 0x120C964E: je 0x120c982c */
L_120C9654:
    edi = MEM32(ebp + (-0xD4)); /* 0x120C9654: mov edi, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120C965A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC0)) = ecx; /* 0x120C965C: mov dword ptr [ebp - 0xc0], ecx */
L_120C9662:
    /* test eax, eax */ /* 0x120C9662: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C96A2; /* 0x120C9664: je 0x120c96a2 */
L_120C9666:
    PUSH32(esp, 0x120014BCu); /* 0x120C9666: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x120C966B: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x120C966D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C9672: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C9673: pop ecx */
    /* test eax, eax */ /* 0x120C9674: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9681; /* 0x120C9676: je 0x120c9681 */
L_120C9678:
    ecx = eax; /* 0x120C9678: mov ecx, eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C967A: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    goto L_120C9683; /* 0x120C967F: jmp 0x120c9683 */
L_120C9681:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C9681: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C9683:
    /* test eax, eax */ /* 0x120C9683: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98A7; /* 0x120C9685: je 0x120c98a7 */
L_120C968B:
    ecx = MEM32(ebp + (-0xC4)); /* 0x120C968B: mov ecx, dword ptr [ebp - 0xc4] */
    edx = eax; /* 0x120C9691: mov edx, eax */
    MEM32(ecx + 0x50) = eax; /* 0x120C9693: mov dword ptr [ecx + 0x50], eax */
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C9696: mov ecx, dword ptr [ebp - 0xc0] */
    MEM32(ebp + (-0xC4)) = edx; /* 0x120C969C: mov dword ptr [ebp - 0xc4], edx */
L_120C96A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C96A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD0)) = edx; /* 0x120C96A4: mov dword ptr [ebp - 0xd0], edx */
    MEM32(ebp + (-0x98)) = eax; /* 0x120C96AA: mov dword ptr [ebp - 0x98], eax */
    /* cmp MEM32(ebp + (-0xBC)), eax */ /* 0x120C96B0: cmp dword ptr [ebp - 0xbc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120C9807; /* 0x120C96B6: jbe 0x120c9807 */
L_120C96BC:
    /* test eax, eax */ /* 0x120C96BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C96FA; /* 0x120C96BE: je 0x120c96fa */
L_120C96C0:
    PUSH32(esp, 0x120014BCu); /* 0x120C96C0: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x120C96C5: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x120C96C7: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C96CC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120C96CD: pop ecx */
    /* test eax, eax */ /* 0x120C96CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C96DB; /* 0x120C96D0: je 0x120c96db */
L_120C96D2:
    ecx = eax; /* 0x120C96D2: mov ecx, eax */
    RECOMP_CALL(sub_120D7228); /* 0x120C96D4: call 0x120d7228 */
    RECOMP_FLAGS_IN();
    goto L_120C96DD; /* 0x120C96D9: jmp 0x120c96dd */
L_120C96DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120C96DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C96DD:
    /* test eax, eax */ /* 0x120C96DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98A7; /* 0x120C96DF: je 0x120c98a7 */
L_120C96E5:
    ecx = MEM32(ebp + (-0xD0)); /* 0x120C96E5: mov ecx, dword ptr [ebp - 0xd0] */
    MEM32(ecx + 0x4C) = eax; /* 0x120C96EB: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ebp + (-0xD0)) = eax; /* 0x120C96EE: mov dword ptr [ebp - 0xd0], eax */
    eax = MEM32(ebp + (-0x98)); /* 0x120C96F4: mov eax, dword ptr [ebp - 0x98] */
L_120C96FA:
    edx = MEM32(ebp + (-0xC0)); /* 0x120C96FA: mov edx, dword ptr [ebp - 0xc0] */
    ecx = MEM32(ebp + (-0xB4)); /* 0x120C9700: mov ecx, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x120C9706: add edx, eax */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x120C9708: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C970A: sub eax, 3 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC8)) = edx; /* 0x120C970D: mov dword ptr [ebp - 0xc8], edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C974D; /* 0x120C9713: je 0x120c974d */
L_120C9715:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C9715: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C973F; /* 0x120C9716: je 0x120c973f */
L_120C9718:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C9718: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C9777; /* 0x120C9719: jne 0x120c9777 */
L_120C971B:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C971B: mov eax, dword ptr [ebp - 0xa0] */
    edi = MEM32(ebp + (-0xDC)); /* 0x120C9721: mov edi, dword ptr [ebp - 0xdc] */
    ecx = MEM32(edi); /* 0x120C9727: mov ecx, dword ptr [edi] */
    eax = eax + edx * 4; /* 0x120C9729: lea eax, [eax + edx*4] */
    PUSH32(esp, eax); /* 0x120C972C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x120C972D: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x120C9733: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, edi); /* 0x120C9739: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x120C973A: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_120C9769; /* 0x120C973D: jmp 0x120c9769 */
L_120C973F:
    edi = MEM32(ebp + (-0xD8)); /* 0x120C973F: mov edi, dword ptr [ebp - 0xd8] */
    eax = MEM32(ebp + (-0xA4)); /* 0x120C9745: mov eax, dword ptr [ebp - 0xa4] */
    goto L_120C9759; /* 0x120C974B: jmp 0x120c9759 */
L_120C974D:
    edi = MEM32(ebp + (-0xE0)); /* 0x120C974D: mov edi, dword ptr [ebp - 0xe0] */
    eax = MEM32(ebp + (-0xA0)); /* 0x120C9753: mov eax, dword ptr [ebp - 0xa0] */
L_120C9759:
    ecx = MEM32(edi); /* 0x120C9759: mov ecx, dword ptr [edi] */
    eax = eax + edx * 4; /* 0x120C975B: lea eax, [eax + edx*4] */
    PUSH32(esp, eax); /* 0x120C975E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x120C975F: push dword ptr [ebp - 0x98] */
    PUSH32(esp, edi); /* 0x120C9765: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x120C9766: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
L_120C9769:
    edx = MEM32(ebp + (-0xC8)); /* 0x120C9769: mov edx, dword ptr [ebp - 0xc8] */
    ecx = MEM32(ebp + (-0xB4)); /* 0x120C976F: mov ecx, dword ptr [ebp - 0xb4] */
    edi = eax; /* 0x120C9775: mov edi, eax */
L_120C9777:
    /* test edi, edi */ /* 0x120C9777: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C98AC; /* 0x120C9779: js 0x120c98ac */
L_120C977F:
    eax = ecx; /* 0x120C977F: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120C9781: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9790; /* 0x120C9784: je 0x120c9790 */
L_120C9786:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C9786: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120C9878; /* 0x120C9787: je 0x120c9878 */
L_120C978D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120C978D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120C97BE; /* 0x120C978E: jne 0x120c97be */
L_120C9790:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C9790: mov eax, dword ptr [ebp - 0xa0] */
    PUSH32(esp, 1); /* 0x120C9796: push 1 */
    PUSH32(esp, 0); /* 0x120C9798: push 0 */
    PUSH32(esp, 0); /* 0x120C979A: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xB0))); /* 0x120C979C: push dword ptr [ebp - 0xb0] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x120C97A2: push dword ptr [eax + edx*4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14u); /* 0x120C97A5: imul edx, edx, 0x14 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xA8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xA8)); /* 0x120C97A8: add edx, dword ptr [ebp - 0xa8] */
    _flag_k = FK_ADD;
    eax = ebp + (-0x134); /* 0x120C97AE: lea eax, [ebp - 0x134] */
    PUSH32(esp, eax); /* 0x120C97B4: push eax */
    ecx = edx; /* 0x120C97B5: mov ecx, edx */
    RECOMP_CALL(sub_120E069C); /* 0x120C97B7: call 0x120e069c */
    RECOMP_FLAGS_IN();
L_120C97BC:
    edi = eax; /* 0x120C97BC: mov edi, eax */
L_120C97BE:
    /* test edi, edi */ /* 0x120C97BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C98AC; /* 0x120C97C0: js 0x120c98ac */
L_120C97C6:
    ecx = MEM32(ebp + (-0xD0)); /* 0x120C97C6: mov ecx, dword ptr [ebp - 0xd0] */
    eax = ebp + (-0x134); /* 0x120C97CC: lea eax, [ebp - 0x134] */
    PUSH32(esp, eax); /* 0x120C97D2: push eax */
    RECOMP_CALL(sub_120D72A8); /* 0x120C97D3: call 0x120d72a8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120C97D8: mov edi, eax */
    /* test edi, edi */ /* 0x120C97DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C98AC; /* 0x120C97DC: js 0x120c98ac */
L_120C97E2:
    eax = MEM32(ebp + (-0x98)); /* 0x120C97E2: mov eax, dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C97E8: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = eax; /* 0x120C97E9: mov dword ptr [ebp - 0x98], eax */
    /* cmp eax, MEM32(ebp + (-0xBC)) */ /* 0x120C97EF: cmp eax, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xBC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C96BC; /* 0x120C97F5: jb 0x120c96bc */
L_120C97FB:
    ecx = MEM32(ebp + (-0xC0)); /* 0x120C97FB: mov ecx, dword ptr [ebp - 0xc0] */
    edx = MEM32(ebp + (-0xC4)); /* 0x120C9801: mov edx, dword ptr [ebp - 0xc4] */
L_120C9807:
    eax = MEM32(ebp + (-0x9C)); /* 0x120C9807: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xBC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xBC)); /* 0x120C980D: add ecx, dword ptr [ebp - 0xbc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120C9813: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x9C)) = eax; /* 0x120C9814: mov dword ptr [ebp - 0x9c], eax */
    MEM32(ebp + (-0xC0)) = ecx; /* 0x120C981A: mov dword ptr [ebp - 0xc0], ecx */
    /* cmp eax, MEM32(ebp + (-0xAC)) */ /* 0x120C9820: cmp eax, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xAC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C9662; /* 0x120C9826: jb 0x120c9662 */
L_120C982C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C982C: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x78); /* 0x120C982F: lea ecx, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9832: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x120C9835: push dword ptr [ebp - 0xd4] */
    RECOMP_CALL(sub_120DC1F2); /* 0x120C983B: call 0x120dc1f2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120C9840: mov edi, eax */
    /* test edi, edi */ /* 0x120C9842: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C98AC; /* 0x120C9844: js 0x120c98ac */
L_120C9846:
    /* cmp MEM32(ebp + (-0xCC)), 0 */ /* 0x120C9846: cmp dword ptr [ebp - 0xcc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120C9874; /* 0x120C984D: jne 0x120c9874 */
L_120C984F:
    eax = MEM32(esi); /* 0x120C984F: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xB0); /* 0x120C9851: lea ecx, [ebp - 0xb0] */
    PUSH32(esp, ecx); /* 0x120C9857: push ecx */
    PUSH32(esp, esi); /* 0x120C9858: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120C9859: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xB0)); /* 0x120C985C: mov eax, dword ptr [ebp - 0xb0] */
    ecx = MEM32(eax); /* 0x120C9862: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C9864: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120C9865: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xB0)); /* 0x120C9868: mov eax, dword ptr [ebp - 0xb0] */
    ecx = MEM32(eax); /* 0x120C986E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C9870: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C9871: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120C9874:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C9874: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120C98AC; /* 0x120C9876: jmp 0x120c98ac */
L_120C9878:
    eax = MEM32(ebp + (-0xA4)); /* 0x120C9878: mov eax, dword ptr [ebp - 0xa4] */
    PUSH32(esp, 1); /* 0x120C987E: push 1 */
    PUSH32(esp, 0); /* 0x120C9880: push 0 */
    PUSH32(esp, 0); /* 0x120C9882: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xB0))); /* 0x120C9884: push dword ptr [ebp - 0xb0] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x120C988A: push dword ptr [eax + edx*4] */
    eax = ebp + (-0x134); /* 0x120C988D: lea eax, [ebp - 0x134] */
    PUSH32(esp, eax); /* 0x120C9893: push eax */
    eax = MEM32(ebp + (-0xB8)); /* 0x120C9894: mov eax, dword ptr [ebp - 0xb8] */
    ecx = eax + edx * 4; /* 0x120C989A: lea ecx, [eax + edx*4] */
    RECOMP_CALL(sub_120E0C9D); /* 0x120C989D: call 0x120e0c9d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120C97BC; /* 0x120C98A2: jmp 0x120c97bc */
L_120C98A7:
    edi = 0x8007000Eu; /* 0x120C98A7: mov edi, 0x8007000e */
L_120C98AC:
    eax = MEM32(ebp + (-0xA8)); /* 0x120C98AC: mov eax, dword ptr [ebp - 0xa8] */
    /* test eax, eax */ /* 0x120C98B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98BF; /* 0x120C98B4: je 0x120c98bf */
L_120C98B6:
    PUSH32(esp, 3); /* 0x120C98B6: push 3 */
    ecx = eax; /* 0x120C98B8: mov ecx, eax */
    RECOMP_CALL(sub_120C8067); /* 0x120C98BA: call 0x120c8067 */
    RECOMP_FLAGS_IN();
L_120C98BF:
    eax = MEM32(ebp + (-0xB8)); /* 0x120C98BF: mov eax, dword ptr [ebp - 0xb8] */
    /* test eax, eax */ /* 0x120C98C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98D2; /* 0x120C98C7: je 0x120c98d2 */
L_120C98C9:
    PUSH32(esp, 3); /* 0x120C98C9: push 3 */
    ecx = eax; /* 0x120C98CB: mov ecx, eax */
    RECOMP_CALL(sub_120C80C7); /* 0x120C98CD: call 0x120c80c7 */
    RECOMP_FLAGS_IN();
L_120C98D2:
    eax = MEM32(ebp + (-0xA0)); /* 0x120C98D2: mov eax, dword ptr [ebp - 0xa0] */
    /* test eax, eax */ /* 0x120C98D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9905; /* 0x120C98DA: je 0x120c9905 */
L_120C98DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C98DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120C98DE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98FE; /* 0x120C98E0: je 0x120c98fe */
L_120C98E2:
    ecx = MEM32(eax + esi * 4); /* 0x120C98E2: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x120C98E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C98F9; /* 0x120C98E7: je 0x120c98f9 */
L_120C98E9:
    eax = MEM32(ecx); /* 0x120C98E9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C98EB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C98EC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA0)); /* 0x120C98EF: mov eax, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + esi * 4) = MEM32(eax + esi * 4) & 0; /* 0x120C98F5: and dword ptr [eax + esi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C98F9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C98F9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x120C98FA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C98E2; /* 0x120C98FC: jb 0x120c98e2 */
L_120C98FE:
    PUSH32(esp, eax); /* 0x120C98FE: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120C98FF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C9904: pop ecx */
L_120C9905:
    eax = MEM32(ebp + (-0xA4)); /* 0x120C9905: mov eax, dword ptr [ebp - 0xa4] */
    /* test eax, eax */ /* 0x120C990B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9938; /* 0x120C990D: je 0x120c9938 */
L_120C990F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120C990F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120C9911: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C9931; /* 0x120C9913: je 0x120c9931 */
L_120C9915:
    ecx = MEM32(eax + esi * 4); /* 0x120C9915: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x120C9918: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120C992C; /* 0x120C991A: je 0x120c992c */
L_120C991C:
    eax = MEM32(ecx); /* 0x120C991C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120C991E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120C991F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA4)); /* 0x120C9922: mov eax, dword ptr [ebp - 0xa4] */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + esi * 4) = MEM32(eax + esi * 4) & 0; /* 0x120C9928: and dword ptr [eax + esi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120C992C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120C992C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x120C992D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120C9915; /* 0x120C992F: jb 0x120c9915 */
L_120C9931:
    PUSH32(esp, eax); /* 0x120C9931: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120C9932: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120C9937: pop ecx */
L_120C9938:
    ecx = ebp + (-0x78); /* 0x120C9938: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_120D7246); /* 0x120C993B: call 0x120d7246 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x120C9940: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120C9942: pop edi */
L_120C9943:
    ecx = MEM32(ebp + (-0x4)); /* 0x120C9943: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x120C9946: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120C9947: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120C9949: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120C994A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C994F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120C9950: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120C9958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9958u);

L_120C9958:
    edi = edi; /* 0x120C9958: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C995A: push ebp */
    ebp = esp; /* 0x120C995B: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x120C995D: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x120C9960: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x120C9963: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9965: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9968: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C93B3); /* 0x120C996B: call 0x120c93b3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C9970: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C9971: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C9979(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9979u);

L_120C9979:
    edi = edi; /* 0x120C9979: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C997B: push ebp */
    ebp = esp; /* 0x120C997C: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x120C997E: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x120C9981: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120C9984: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9986: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9989: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C93B3); /* 0x120C998C: call 0x120c93b3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C9991: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C9992: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C999A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C999Au);

L_120C999A:
    edi = edi; /* 0x120C999A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C999C: push ebp */
    ebp = esp; /* 0x120C999D: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x120C999F: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x120C99A2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x120C99A5: push 2 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C99A7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C99AA: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120C93B3); /* 0x120C99AD: call 0x120c93b3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120C99B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C99B3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C99BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C99BBu);

L_120C99BB:
    edi = edi; /* 0x120C99BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C99BD: push ebp */
    ebp = esp; /* 0x120C99BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C99C0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C99C3: push esi */
    ecx = ebp + (-0x10); /* 0x120C99C4: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C99C7: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C99CC: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C99CE: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C99D1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C99D4: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C99D9: mov esi, eax */
    /* test esi, esi */ /* 0x120C99DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9A13; /* 0x120C99DD: js 0x120c9a13 */
L_120C99DF:
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C99DF: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C99E2: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C99E5: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C99E8: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C99EB: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C99EE: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C99F1: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C99F4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C99F7: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C99FA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C99FD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9A00: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9A03: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9A06: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9A09: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C92E6); /* 0x120C9A0C: call 0x120c92e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9A11: mov esi, eax */
L_120C9A13:
    ecx = ebp + (-0x10); /* 0x120C9A13: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9A16: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9A1B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9A1D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9A1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120C9A1F: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120C9A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9A27u);

L_120C9A27:
    edi = edi; /* 0x120C9A27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9A29: push ebp */
    ebp = esp; /* 0x120C9A2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C9A2C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9A2F: push esi */
    ecx = ebp + (-0x10); /* 0x120C9A30: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C9A33: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9A38: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9A3A: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C9A3D: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C9A40: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9A45: mov esi, eax */
    /* test esi, esi */ /* 0x120C9A47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9A7F; /* 0x120C9A49: js 0x120c9a7f */
L_120C9A4B:
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9A4B: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9A4E: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9A51: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9A54: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9A57: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9A5A: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9A5D: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9A60: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9A63: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9A66: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9A69: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9A6C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9A6F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9A72: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9A75: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C92E6); /* 0x120C9A78: call 0x120c92e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9A7D: mov esi, eax */
L_120C9A7F:
    ecx = ebp + (-0x10); /* 0x120C9A7F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9A82: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9A87: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9A89: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9A8A: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120C9A8B: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120C9A93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9A93u);

L_120C9A93:
    edi = edi; /* 0x120C9A93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9A95: push ebp */
    ebp = esp; /* 0x120C9A96: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9A98: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9A9B: push esi */
    ecx = ebp + (-0xC); /* 0x120C9A9C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9A9F: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C9AA4: push 0 */
    PUSH32(esp, 1); /* 0x120C9AA6: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9AA8: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9AAB: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9AAE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9AB1: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9AB6: mov esi, eax */
    /* test esi, esi */ /* 0x120C9AB8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9AF0; /* 0x120C9ABA: js 0x120c9af0 */
L_120C9ABC:
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9ABC: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9ABF: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9AC2: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9AC5: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9AC8: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9ACB: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9ACE: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9AD1: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9AD4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9AD7: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9ADA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9ADD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9AE0: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9AE3: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9AE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C92E6); /* 0x120C9AE9: call 0x120c92e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9AEE: mov esi, eax */
L_120C9AF0:
    ecx = ebp + (-0xC); /* 0x120C9AF0: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9AF3: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9AF8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9AFA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9AFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 64; { RECOMP_REGS_OUT(); return; } /* 0x120C9AFC: ret 0x3c */
    RECOMP_REGS_OUT();
}

void sub_120C9B04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9B04u);

L_120C9B04:
    edi = edi; /* 0x120C9B04: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9B06: push ebp */
    ebp = esp; /* 0x120C9B07: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9B09: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9B0C: push esi */
    ecx = ebp + (-0xC); /* 0x120C9B0D: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9B10: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9B15: push 1 */
    PUSH32(esp, 1); /* 0x120C9B17: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9B19: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9B1C: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9B1F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9B22: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9B27: mov esi, eax */
    /* test esi, esi */ /* 0x120C9B29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9B61; /* 0x120C9B2B: js 0x120c9b61 */
L_120C9B2D:
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9B2D: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9B30: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9B33: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9B36: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9B39: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9B3C: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9B3F: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9B42: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9B45: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9B48: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9B4B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9B4E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9B51: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9B54: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9B57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C92E6); /* 0x120C9B5A: call 0x120c92e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9B5F: mov esi, eax */
L_120C9B61:
    ecx = ebp + (-0xC); /* 0x120C9B61: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9B64: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9B69: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9B6B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9B6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 64; { RECOMP_REGS_OUT(); return; } /* 0x120C9B6D: ret 0x3c */
    RECOMP_REGS_OUT();
}

void sub_120C9B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9B75u);

L_120C9B75:
    edi = edi; /* 0x120C9B75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9B77: push ebp */
    ebp = esp; /* 0x120C9B78: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C9B7A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C9B7B: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C9B7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C9B89; /* 0x120C9B80: jne 0x120c9b89 */
L_120C9B82:
    eax = 0x8876086Cu; /* 0x120C9B82: mov eax, 0x8876086c */
    goto L_120C9BD0; /* 0x120C9B87: jmp 0x120c9bd0 */
L_120C9B89:
    eax = MEM32(esi); /* 0x120C9B89: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120C9B8B: push ebx */
    PUSH32(esp, edi); /* 0x120C9B8C: push edi */
    ecx = ebp + 0x8; /* 0x120C9B8D: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C9B90: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C9B91: push 0x12001a88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C9B96: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120C9B98: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C9B99: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x120C9B9A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C9B9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120C9B9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9BAD; /* 0x120C9BA0: js 0x120c9bad */
L_120C9BA2:
    eax = MEM32(ebp + 0x8); /* 0x120C9BA2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C9BA5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C9BA7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C9BA8: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x120C9BAB: mov edi, ebx */
L_120C9BAD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9BAD: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x120C9BB0: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x120C9BB3: push 3 */
    PUSH32(esp, ebx); /* 0x120C9BB5: push ebx */
    PUSH32(esp, ebx); /* 0x120C9BB6: push ebx */
    PUSH32(esp, ebx); /* 0x120C9BB7: push ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120C9BB8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C9BBB: push eax */
    PUSH32(esp, eax); /* 0x120C9BBC: push eax */
    PUSH32(esp, edi); /* 0x120C9BBD: push edi */
    PUSH32(esp, ebx); /* 0x120C9BBE: push ebx */
    PUSH32(esp, ebx); /* 0x120C9BBF: push ebx */
    PUSH32(esp, eax); /* 0x120C9BC0: push eax */
    PUSH32(esp, 1); /* 0x120C9BC1: push 1 */
    PUSH32(esp, eax); /* 0x120C9BC3: push eax */
    PUSH32(esp, eax); /* 0x120C9BC4: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9BC5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120C9BC8: push esi */
    RECOMP_CALL(sub_120C8766); /* 0x120C9BC9: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C9BCE: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C9BCF: pop ebx */
L_120C9BD0:
    esi = POP32_VAL(esp); /* 0x120C9BD0: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C9BD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C9BD2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C9BDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9BDAu);

L_120C9BDA:
    edi = edi; /* 0x120C9BDA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9BDC: push ebp */
    ebp = esp; /* 0x120C9BDD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C9BDF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9BE2: push esi */
    ecx = ebp + (-0x10); /* 0x120C9BE3: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C9BE6: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C9BEB: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9BED: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C9BF0: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C9BF3: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9BF8: mov esi, eax */
    /* test esi, esi */ /* 0x120C9BFA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9C2F; /* 0x120C9BFC: js 0x120c9c2f */
L_120C9BFE:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9BFE: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9C01: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9C04: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9C07: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9C0A: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9C0D: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9C10: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9C13: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9C16: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9C19: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9C1C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9C1F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9C22: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9C25: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C932A); /* 0x120C9C28: call 0x120c932a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9C2D: mov esi, eax */
L_120C9C2F:
    ecx = ebp + (-0x10); /* 0x120C9C2F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9C32: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9C37: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9C39: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9C3A: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x120C9C3B: ret 0x34 */
    RECOMP_REGS_OUT();
}

void sub_120C9C43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9C43u);

L_120C9C43:
    edi = edi; /* 0x120C9C43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9C45: push ebp */
    ebp = esp; /* 0x120C9C46: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C9C48: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9C4B: push esi */
    ecx = ebp + (-0x10); /* 0x120C9C4C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C9C4F: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9C54: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9C56: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C9C59: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C9C5C: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9C61: mov esi, eax */
    /* test esi, esi */ /* 0x120C9C63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9C98; /* 0x120C9C65: js 0x120c9c98 */
L_120C9C67:
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9C67: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9C6A: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9C6D: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9C70: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9C73: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9C76: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9C79: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9C7C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9C7F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9C82: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9C85: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9C88: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9C8B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9C8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C932A); /* 0x120C9C91: call 0x120c932a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9C96: mov esi, eax */
L_120C9C98:
    ecx = ebp + (-0x10); /* 0x120C9C98: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9C9B: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9CA0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9CA2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9CA3: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x120C9CA4: ret 0x34 */
    RECOMP_REGS_OUT();
}

void sub_120C9CAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9CACu);

L_120C9CAC:
    edi = edi; /* 0x120C9CAC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9CAE: push ebp */
    ebp = esp; /* 0x120C9CAF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9CB1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9CB4: push esi */
    ecx = ebp + (-0xC); /* 0x120C9CB5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9CB8: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C9CBD: push 0 */
    PUSH32(esp, 1); /* 0x120C9CBF: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9CC1: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9CC4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9CC7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9CCA: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9CCF: mov esi, eax */
    /* test esi, esi */ /* 0x120C9CD1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9D06; /* 0x120C9CD3: js 0x120c9d06 */
L_120C9CD5:
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9CD5: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9CD8: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9CDB: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9CDE: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9CE1: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9CE4: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9CE7: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9CEA: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9CED: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9CF0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9CF3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9CF6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9CF9: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9CFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C932A); /* 0x120C9CFF: call 0x120c932a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9D04: mov esi, eax */
L_120C9D06:
    ecx = ebp + (-0xC); /* 0x120C9D06: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9D09: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9D0E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9D10: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9D11: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120C9D12: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120C9D1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9D1Au);

L_120C9D1A:
    edi = edi; /* 0x120C9D1A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9D1C: push ebp */
    ebp = esp; /* 0x120C9D1D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9D1F: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9D22: push esi */
    ecx = ebp + (-0xC); /* 0x120C9D23: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9D26: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9D2B: push 1 */
    PUSH32(esp, 1); /* 0x120C9D2D: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9D2F: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9D32: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9D35: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9D38: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9D3D: mov esi, eax */
    /* test esi, esi */ /* 0x120C9D3F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9D74; /* 0x120C9D41: js 0x120c9d74 */
L_120C9D43:
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9D43: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9D46: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9D49: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9D4C: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9D4F: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9D52: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9D55: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9D58: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9D5B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9D5E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9D61: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9D64: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9D67: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9D6A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C932A); /* 0x120C9D6D: call 0x120c932a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9D72: mov esi, eax */
L_120C9D74:
    ecx = ebp + (-0xC); /* 0x120C9D74: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9D77: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9D7C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9D7E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9D7F: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120C9D80: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120C9D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9D88u);

L_120C9D88:
    edi = edi; /* 0x120C9D88: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9D8A: push ebp */
    ebp = esp; /* 0x120C9D8B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C9D8D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C9D8E: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C9D91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C9D9C; /* 0x120C9D93: jne 0x120c9d9c */
L_120C9D95:
    eax = 0x8876086Cu; /* 0x120C9D95: mov eax, 0x8876086c */
    goto L_120C9DE3; /* 0x120C9D9A: jmp 0x120c9de3 */
L_120C9D9C:
    eax = MEM32(esi); /* 0x120C9D9C: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120C9D9E: push ebx */
    PUSH32(esp, edi); /* 0x120C9D9F: push edi */
    ecx = ebp + 0x8; /* 0x120C9DA0: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C9DA3: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C9DA4: push 0x12001a88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C9DA9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120C9DAB: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C9DAC: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x120C9DAD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C9DAF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120C9DB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9DC0; /* 0x120C9DB3: js 0x120c9dc0 */
L_120C9DB5:
    eax = MEM32(ebp + 0x8); /* 0x120C9DB5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C9DB8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C9DBA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C9DBB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x120C9DBE: mov edi, ebx */
L_120C9DC0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9DC0: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x120C9DC3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 5); /* 0x120C9DC6: push 5 */
    PUSH32(esp, ebx); /* 0x120C9DC8: push ebx */
    PUSH32(esp, ebx); /* 0x120C9DC9: push ebx */
    PUSH32(esp, ebx); /* 0x120C9DCA: push ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120C9DCB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C9DCE: push eax */
    PUSH32(esp, eax); /* 0x120C9DCF: push eax */
    PUSH32(esp, edi); /* 0x120C9DD0: push edi */
    PUSH32(esp, ebx); /* 0x120C9DD1: push ebx */
    PUSH32(esp, ebx); /* 0x120C9DD2: push ebx */
    PUSH32(esp, eax); /* 0x120C9DD3: push eax */
    PUSH32(esp, 1); /* 0x120C9DD4: push 1 */
    PUSH32(esp, eax); /* 0x120C9DD6: push eax */
    PUSH32(esp, eax); /* 0x120C9DD7: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9DD8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120C9DDB: push esi */
    RECOMP_CALL(sub_120C8766); /* 0x120C9DDC: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120C9DE1: pop edi */
    ebx = POP32_VAL(esp); /* 0x120C9DE2: pop ebx */
L_120C9DE3:
    esi = POP32_VAL(esp); /* 0x120C9DE3: pop esi */
    ebp = POP32_VAL(esp); /* 0x120C9DE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120C9DE5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120C9DED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9DEDu);

L_120C9DED:
    edi = edi; /* 0x120C9DED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9DEF: push ebp */
    ebp = esp; /* 0x120C9DF0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C9DF2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9DF5: push esi */
    ecx = ebp + (-0x10); /* 0x120C9DF6: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C9DF9: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C9DFE: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9E00: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C9E03: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C9E06: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9E0B: mov esi, eax */
    /* test esi, esi */ /* 0x120C9E0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9E48; /* 0x120C9E0F: js 0x120c9e48 */
L_120C9E11:
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9E11: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9E14: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9E17: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9E1A: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9E1D: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9E20: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9E23: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9E26: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9E29: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9E2C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9E2F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9E32: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9E35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9E38: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9E3B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9E3E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C936E); /* 0x120C9E41: call 0x120c936e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9E46: mov esi, eax */
L_120C9E48:
    ecx = ebp + (-0x10); /* 0x120C9E48: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9E4B: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9E50: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9E52: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9E53: leave  */
    RECOMP_FLAGS_OUT(); esp += 64; { RECOMP_REGS_OUT(); return; } /* 0x120C9E54: ret 0x3c */
    RECOMP_REGS_OUT();
}

void sub_120C9E5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9E5Cu);

L_120C9E5C:
    edi = edi; /* 0x120C9E5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9E5E: push ebp */
    ebp = esp; /* 0x120C9E5F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120C9E61: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9E64: push esi */
    ecx = ebp + (-0x10); /* 0x120C9E65: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120C9E68: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9E6D: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9E6F: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x120C9E72: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C1531); /* 0x120C9E75: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9E7A: mov esi, eax */
    /* test esi, esi */ /* 0x120C9E7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9EB7; /* 0x120C9E7E: js 0x120c9eb7 */
L_120C9E80:
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9E80: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9E83: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9E86: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9E89: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9E8C: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9E8F: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9E92: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9E95: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9E98: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9E9B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9E9E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9EA1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9EA4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9EA7: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9EAA: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9EAD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C936E); /* 0x120C9EB0: call 0x120c936e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9EB5: mov esi, eax */
L_120C9EB7:
    ecx = ebp + (-0x10); /* 0x120C9EB7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_121C17F4); /* 0x120C9EBA: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9EBF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9EC1: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9EC2: leave  */
    RECOMP_FLAGS_OUT(); esp += 64; { RECOMP_REGS_OUT(); return; } /* 0x120C9EC3: ret 0x3c */
    RECOMP_REGS_OUT();
}

void sub_120C9ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9ECBu);

L_120C9ECB:
    edi = edi; /* 0x120C9ECB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9ECD: push ebp */
    ebp = esp; /* 0x120C9ECE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9ED0: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9ED3: push esi */
    ecx = ebp + (-0xC); /* 0x120C9ED4: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9ED7: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120C9EDC: push 0 */
    PUSH32(esp, 1); /* 0x120C9EDE: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9EE0: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9EE3: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9EE6: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9EE9: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9EEE: mov esi, eax */
    /* test esi, esi */ /* 0x120C9EF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9F2B; /* 0x120C9EF2: js 0x120c9f2b */
L_120C9EF4:
    PUSH32(esp, MEM32(ebp + 0x44)); /* 0x120C9EF4: push dword ptr [ebp + 0x44] */
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9EF7: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9EFA: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9EFD: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9F00: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9F03: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9F06: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9F09: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9F0C: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9F0F: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9F12: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9F15: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9F18: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9F1B: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9F1E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9F21: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C936E); /* 0x120C9F24: call 0x120c936e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9F29: mov esi, eax */
L_120C9F2B:
    ecx = ebp + (-0xC); /* 0x120C9F2B: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9F2E: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9F33: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9F35: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9F36: leave  */
    RECOMP_FLAGS_OUT(); esp += 68; { RECOMP_REGS_OUT(); return; } /* 0x120C9F37: ret 0x40 */
    RECOMP_REGS_OUT();
}

void sub_120C9F3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9F3Fu);

L_120C9F3F:
    edi = edi; /* 0x120C9F3F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9F41: push ebp */
    ebp = esp; /* 0x120C9F42: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120C9F44: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120C9F47: push esi */
    ecx = ebp + (-0xC); /* 0x120C9F48: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C1804); /* 0x120C9F4B: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x120C9F50: push 1 */
    PUSH32(esp, 1); /* 0x120C9F52: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120C9F54: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x120C9F57: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120C9F5A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120C9F5D: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9F62: mov esi, eax */
    /* test esi, esi */ /* 0x120C9F64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9F9F; /* 0x120C9F66: js 0x120c9f9f */
L_120C9F68:
    PUSH32(esp, MEM32(ebp + 0x44)); /* 0x120C9F68: push dword ptr [ebp + 0x44] */
    PUSH32(esp, MEM32(ebp + 0x40)); /* 0x120C9F6B: push dword ptr [ebp + 0x40] */
    PUSH32(esp, MEM32(ebp + 0x3C)); /* 0x120C9F6E: push dword ptr [ebp + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x38)); /* 0x120C9F71: push dword ptr [ebp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x120C9F74: push dword ptr [ebp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x120C9F77: push dword ptr [ebp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120C9F7A: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120C9F7D: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120C9F80: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120C9F83: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120C9F86: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120C9F89: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9F8C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120C9F8F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120C9F92: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120C9F95: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120C936E); /* 0x120C9F98: call 0x120c936e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120C9F9D: mov esi, eax */
L_120C9F9F:
    ecx = ebp + (-0xC); /* 0x120C9F9F: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120C9FA2: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x120C9FA7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120C9FA9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120C9FAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 68; { RECOMP_REGS_OUT(); return; } /* 0x120C9FAB: ret 0x40 */
    RECOMP_REGS_OUT();
}

void sub_120C9FB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120C9FB3u);

L_120C9FB3:
    edi = edi; /* 0x120C9FB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120C9FB5: push ebp */
    ebp = esp; /* 0x120C9FB6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120C9FB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120C9FB9: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120C9FBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120C9FC7; /* 0x120C9FBE: jne 0x120c9fc7 */
L_120C9FC0:
    eax = 0x8876086Cu; /* 0x120C9FC0: mov eax, 0x8876086c */
    goto L_120CA00D; /* 0x120C9FC5: jmp 0x120ca00d */
L_120C9FC7:
    eax = MEM32(esi); /* 0x120C9FC7: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120C9FC9: push ebx */
    PUSH32(esp, edi); /* 0x120C9FCA: push edi */
    ecx = ebp + 0x8; /* 0x120C9FCB: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120C9FCE: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120C9FCF: push 0x12001a88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120C9FD4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120C9FD6: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120C9FD7: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x120C9FD8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120C9FDA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120C9FDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120C9FEB; /* 0x120C9FDE: js 0x120c9feb */
L_120C9FE0:
    eax = MEM32(ebp + 0x8); /* 0x120C9FE0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120C9FE3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120C9FE5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120C9FE6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x120C9FE9: mov edi, ebx */
L_120C9FEB:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120C9FEB: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x120C9FEE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120C9FF1: push 4 */
    PUSH32(esp, ebx); /* 0x120C9FF3: push ebx */
    PUSH32(esp, ebx); /* 0x120C9FF4: push ebx */
    PUSH32(esp, ebx); /* 0x120C9FF5: push ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120C9FF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120C9FF9: push eax */
    PUSH32(esp, eax); /* 0x120C9FFA: push eax */
    PUSH32(esp, edi); /* 0x120C9FFB: push edi */
    PUSH32(esp, ebx); /* 0x120C9FFC: push ebx */
    PUSH32(esp, ebx); /* 0x120C9FFD: push ebx */
    PUSH32(esp, eax); /* 0x120C9FFE: push eax */
    PUSH32(esp, eax); /* 0x120C9FFF: push eax */
    PUSH32(esp, eax); /* 0x120CA000: push eax */
    PUSH32(esp, eax); /* 0x120CA001: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120CA002: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120CA005: push esi */
    RECOMP_CALL(sub_120C8766); /* 0x120CA006: call 0x120c8766 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120CA00B: pop edi */
    ebx = POP32_VAL(esp); /* 0x120CA00C: pop ebx */
L_120CA00D:
    esi = POP32_VAL(esp); /* 0x120CA00D: pop esi */
    ebp = POP32_VAL(esp); /* 0x120CA00E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120CA00F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120CA017(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120CA017u);

L_120CA017:
    edi = edi; /* 0x120CA017: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120CA019: push ebp */
    ebp = esp; /* 0x120CA01A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120CA01C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120CA01D: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120CA020: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120CA02B; /* 0x120CA022: jne 0x120ca02b */
L_120CA024:
    eax = 0x8876086Cu; /* 0x120CA024: mov eax, 0x8876086c */
    goto L_120CA06B; /* 0x120CA029: jmp 0x120ca06b */
L_120CA02B:
    eax = MEM32(esi); /* 0x120CA02B: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120CA02D: push ebx */
    PUSH32(esp, edi); /* 0x120CA02E: push edi */
    ecx = ebp + 0x8; /* 0x120CA02F: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120CA032: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120CA033: push 0x12001a88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120CA038: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120CA03A: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120CA03B: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x120CA03C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120CA03E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120CA040: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120CA04F; /* 0x120CA042: js 0x120ca04f */
L_120CA044:
    eax = MEM32(ebp + 0x8); /* 0x120CA044: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120CA047: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120CA049: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120CA04A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x120CA04D: mov edi, ebx */
L_120CA04F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120CA04F: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120CA052: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120CA055: push ebx */
    PUSH32(esp, ebx); /* 0x120CA056: push ebx */
    PUSH32(esp, ebx); /* 0x120CA057: push ebx */
    PUSH32(esp, eax); /* 0x120CA058: push eax */
    PUSH32(esp, eax); /* 0x120CA059: push eax */
    PUSH32(esp, edi); /* 0x120CA05A: push edi */
    PUSH32(esp, ebx); /* 0x120CA05B: push ebx */
    PUSH32(esp, ebx); /* 0x120CA05C: push ebx */
    PUSH32(esp, eax); /* 0x120CA05D: push eax */
    PUSH32(esp, eax); /* 0x120CA05E: push eax */
    PUSH32(esp, eax); /* 0x120CA05F: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120CA060: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120CA063: push esi */
    RECOMP_CALL(sub_120C99BB); /* 0x120CA064: call 0x120c99bb */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120CA069: pop edi */
    ebx = POP32_VAL(esp); /* 0x120CA06A: pop ebx */
L_120CA06B:
    esi = POP32_VAL(esp); /* 0x120CA06B: pop esi */
    ebp = POP32_VAL(esp); /* 0x120CA06C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120CA06D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120CA075(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120CA075u);

L_120CA075:
    edi = edi; /* 0x120CA075: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120CA077: push ebp */
    ebp = esp; /* 0x120CA078: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120CA07A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120CA07B: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120CA07E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120CA089; /* 0x120CA080: jne 0x120ca089 */
L_120CA082:
    eax = 0x8876086Cu; /* 0x120CA082: mov eax, 0x8876086c */
    goto L_120CA0C9; /* 0x120CA087: jmp 0x120ca0c9 */
L_120CA089:
    eax = MEM32(esi); /* 0x120CA089: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120CA08B: push ebx */
    PUSH32(esp, edi); /* 0x120CA08C: push edi */
    ecx = ebp + 0x8; /* 0x120CA08D: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120CA090: push ecx */
    PUSH32(esp, 0x12001A88u); /* 0x120CA091: push 0x12001a88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120CA096: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120CA098: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120CA099: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x120CA09A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120CA09C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120CA09E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120CA0AD; /* 0x120CA0A0: js 0x120ca0ad */
L_120CA0A2:
    eax = MEM32(ebp + 0x8); /* 0x120CA0A2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120CA0A5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120CA0A7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120CA0A8: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x120CA0AB: mov edi, ebx */
L_120CA0AD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120CA0AD: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120CA0B0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120CA0B3: push ebx */
    PUSH32(esp, ebx); /* 0x120CA0B4: push ebx */
    PUSH32(esp, ebx); /* 0x120CA0B5: push ebx */
    PUSH32(esp, eax); /* 0x120CA0B6: push eax */
    PUSH32(esp, eax); /* 0x120CA0B7: push eax */
    PUSH32(esp, edi); /* 0x120CA0B8: push edi */
    PUSH32(esp, ebx); /* 0x120CA0B9: push ebx */
    PUSH32(esp, ebx); /* 0x120CA0BA: push ebx */
    PUSH32(esp, eax); /* 0x120CA0BB: push eax */
    PUSH32(esp, eax); /* 0x120CA0BC: push eax */
    PUSH32(esp, eax); /* 0x120CA0BD: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120CA0BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120CA0C1: push esi */
    RECOMP_CALL(sub_120C9A27); /* 0x120CA0C2: call 0x120c9a27 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120CA0C7: pop edi */
    ebx = POP32_VAL(esp); /* 0x120CA0C8: pop ebx */
L_120CA0C9:
    esi = POP32_VAL(esp); /* 0x120CA0C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x120CA0CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120CA0CB: ret 0xc */
    RECOMP_REGS_OUT();
}
