#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15079990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079990u);

L_15079990:
    edi = edi; /* 0x15079990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079992: push ebp */
    ebp = esp; /* 0x15079993: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079995: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079998: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507999B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507999E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x150799A1: push 0x15082020 */
    RECOMP_CALL(sub_15079A15); /* 0x150799A6: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150799AB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150799AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150799AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150799C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150799C0u);

L_150799C0:
    edi = edi; /* 0x150799C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150799C2: push ebp */
    ebp = esp; /* 0x150799C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150799C5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150799C8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150799CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150799CE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1508A290u); /* 0x150799D1: push 0x1508a290 */
    RECOMP_CALL(sub_15079A15); /* 0x150799D6: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150799DB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150799DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150799DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150799F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150799F0u);

L_150799F0:
    edi = edi; /* 0x150799F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150799F2: push ebp */
    ebp = esp; /* 0x150799F3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150799F5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x150799F8: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150799FA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150799FD: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x15079A00: push 0x15086a80 */
    RECOMP_CALL(sub_15079A15); /* 0x15079A05: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079A0A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079A0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079A0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079A15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079A15u);

L_15079A15:
    PUSH32(esp, 0x10u); /* 0x15079A15: push 0x10 */
    PUSH32(esp, 0x150B1148u); /* 0x15079A17: push 0x150b1148 */
    RECOMP_CALL(sub_1505E988); /* 0x15079A1C: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x15079A21: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15079A24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079A47; /* 0x15079A26: jne 0x15079a47 */
L_15079A28:
    RECOMP_CALL(sub_15036430); /* 0x15079A28: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15079A2D: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079A33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079A35: push eax */
    PUSH32(esp, eax); /* 0x15079A36: push eax */
    PUSH32(esp, eax); /* 0x15079A37: push eax */
    PUSH32(esp, eax); /* 0x15079A38: push eax */
    PUSH32(esp, eax); /* 0x15079A39: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15079A3A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079A3F: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079A42: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15079A97; /* 0x15079A45: jmp 0x15079a97 */
L_15079A47:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15079A47: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079A28; /* 0x15079A4B: je 0x15079a28 */
L_15079A4D:
    MEM32(ebp + (-0x1C)) = edi; /* 0x15079A4D: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, edi); /* 0x15079A50: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x15079A51: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079A56: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15079A57: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15079A5B: push edi */
    RECOMP_CALL(sub_15083DAF); /* 0x15079A5C: call 0x15083daf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079A61: pop ecx */
    esi = eax; /* 0x15079A62: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15079A64: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079A67: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079A6A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15079A6D: push edi */
    ecx = MEM32(ebp + 0x8); /* 0x15079A6E: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15079A71: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x15079A77: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15079A7A: mov ebx, eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15079A7C: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, edi); /* 0x15079A7F: push edi */
    PUSH32(esp, esi); /* 0x15079A80: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x15079A81: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15079A86: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15079A89: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15079AAD); /* 0x15079A90: call 0x15079aad */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x15079A95: mov eax, ebx */
L_15079A97:
    ecx = MEM32(ebp + (-0x10)); /* 0x15079A97: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15079A9A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15079AA1: pop ecx */
    edi = POP32_VAL(esp); /* 0x15079AA2: pop edi */
    esi = POP32_VAL(esp); /* 0x15079AA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x15079AA4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079AA5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079AA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079AAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079AADu);

L_15079AAD:
    PUSH32(esp, edi); /* 0x15079AAD: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x15079AAE: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079AB3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079AB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079AC0u);

L_15079AC0:
    edi = edi; /* 0x15079AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079AC2: push ebp */
    ebp = esp; /* 0x15079AC3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079AC5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079AC8: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079ACA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079ACD: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1508A290u); /* 0x15079AD0: push 0x1508a290 */
    RECOMP_CALL(sub_15079A15); /* 0x15079AD5: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079ADA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079ADD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079ADE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079AF0u);

L_15079AF0:
    edi = edi; /* 0x15079AF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079AF2: push ebp */
    ebp = esp; /* 0x15079AF3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079AF5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079AF8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079AFB: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x15079AFE: push 0x1507e600 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079B03: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079B08: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079B0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079B0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079B20u);

L_15079B20:
    edi = edi; /* 0x15079B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079B22: push ebp */
    ebp = esp; /* 0x15079B23: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079B25: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15079B28: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079B2A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x15079B2D: push 0x1507f390 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079B32: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079B37: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079B3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079B3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079B50u);

L_15079B50:
    edi = edi; /* 0x15079B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079B52: push ebp */
    ebp = esp; /* 0x15079B53: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079B55: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079B58: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079B5B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x15079B5E: push 0x1507f390 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079B63: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079B68: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079B6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079B6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079B80u);

L_15079B80:
    edi = edi; /* 0x15079B80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079B82: push ebp */
    ebp = esp; /* 0x15079B83: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079B85: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079B88: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079B8B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15081150u); /* 0x15079B8E: push 0x15081150 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079B93: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079B98: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079B9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079B9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079BB0u);

L_15079BB0:
    edi = edi; /* 0x15079BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079BB2: push ebp */
    ebp = esp; /* 0x15079BB3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079BB5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15079BB8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079BBA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x15079BBD: push 0x1507e600 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079BC2: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079BC7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079BCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079BCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079BD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079BD2u);

L_15079BD2:
    PUSH32(esp, 0x10u); /* 0x15079BD2: push 0x10 */
    PUSH32(esp, 0x150B1168u); /* 0x15079BD4: push 0x150b1168 */
    RECOMP_CALL(sub_1505E988); /* 0x15079BD9: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = 0x150BC620u; /* 0x15079BDE: mov edi, 0x150bc620 */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15079BE3: mov dword ptr [ebp - 0x1c], edi */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15079BE6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079C0B; /* 0x15079BEA: jne 0x15079c0b */
L_15079BEC:
    RECOMP_CALL(sub_15036430); /* 0x15079BEC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15079BF1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079BF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079BF9: push eax */
    PUSH32(esp, eax); /* 0x15079BFA: push eax */
    PUSH32(esp, eax); /* 0x15079BFB: push eax */
    PUSH32(esp, eax); /* 0x15079BFC: push eax */
    PUSH32(esp, eax); /* 0x15079BFD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15079BFE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079C03: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079C06: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15079C52; /* 0x15079C09: jmp 0x15079c52 */
L_15079C0B:
    PUSH32(esp, edi); /* 0x15079C0B: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x15079C0C: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079C11: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15079C12: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15079C16: push edi */
    RECOMP_CALL(sub_15083DAF); /* 0x15079C17: call 0x15083daf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079C1C: pop ecx */
    esi = eax; /* 0x15079C1D: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079C1F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079C22: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079C25: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15079C28: push edi */
    ecx = MEM32(ebp + 0x8); /* 0x15079C29: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15079C2C: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x15079C32: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15079C35: mov ebx, eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15079C37: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, edi); /* 0x15079C3A: push edi */
    PUSH32(esp, esi); /* 0x15079C3B: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x15079C3C: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15079C41: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15079C44: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15079C68); /* 0x15079C4B: call 0x15079c68 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x15079C50: mov eax, ebx */
L_15079C52:
    ecx = MEM32(ebp + (-0x10)); /* 0x15079C52: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15079C55: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15079C5C: pop ecx */
    edi = POP32_VAL(esp); /* 0x15079C5D: pop edi */
    esi = POP32_VAL(esp); /* 0x15079C5E: pop esi */
    ebx = POP32_VAL(esp); /* 0x15079C5F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079C60: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079C61: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079C68u);

L_15079C68:
    PUSH32(esp, edi); /* 0x15079C68: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x15079C69: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079C6E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079C6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079C80u);

L_15079C80:
    edi = edi; /* 0x15079C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079C82: push ebp */
    ebp = esp; /* 0x15079C83: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079C85: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15079C88: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079C8A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15081150u); /* 0x15079C8D: push 0x15081150 */
    RECOMP_CALL(sub_15079BD2); /* 0x15079C92: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079C97: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079C9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079C9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079CB0u);

L_15079CB0:
    edi = edi; /* 0x15079CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079CB2: push ebp */
    ebp = esp; /* 0x15079CB3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079CB5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15079CB8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079CBA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x15079CBD: push 0x1507e600 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079CC2: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079CC7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079CCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079CCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079CD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079CD2u);

L_15079CD2:
    edi = edi; /* 0x15079CD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079CD4: push ebp */
    ebp = esp; /* 0x15079CD5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15079CD7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15079CDA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079CFF; /* 0x15079CDE: jne 0x15079cff */
L_15079CE0:
    RECOMP_CALL(sub_15036430); /* 0x15079CE0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15079CE5: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079CEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079CED: push eax */
    PUSH32(esp, eax); /* 0x15079CEE: push eax */
    PUSH32(esp, eax); /* 0x15079CEF: push eax */
    PUSH32(esp, eax); /* 0x15079CF0: push eax */
    PUSH32(esp, eax); /* 0x15079CF1: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15079CF2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079CF7: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079CFA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079CFD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079CFE: ret  */
L_15079CFF:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079CFF: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x15079D02: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079D05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079D07: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15079D0A: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079D0D: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15079D10: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x15079D13: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15079D16: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15079D17: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15079D1E: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15079D25: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x15079D2B: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079D2E: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079D31: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079D32: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079D40u);

L_15079D40:
    edi = edi; /* 0x15079D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079D42: push ebp */
    ebp = esp; /* 0x15079D43: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079D45: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079D48: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079D4B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x15079D4E: push 0x1507e600 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079D53: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079D58: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079D5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079D5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079D70u);

L_15079D70:
    edi = edi; /* 0x15079D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079D72: push ebp */
    ebp = esp; /* 0x15079D73: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079D75: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079D78: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079D7B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x15079D7E: push 0x1507f390 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079D83: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079D88: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079D8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079D8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079DA0u);

L_15079DA0:
    edi = edi; /* 0x15079DA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079DA2: push ebp */
    ebp = esp; /* 0x15079DA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15079DA5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15079DA8: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079DCD; /* 0x15079DAC: jne 0x15079dcd */
L_15079DAE:
    RECOMP_CALL(sub_15036430); /* 0x15079DAE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15079DB3: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079DB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079DBB: push eax */
    PUSH32(esp, eax); /* 0x15079DBC: push eax */
    PUSH32(esp, eax); /* 0x15079DBD: push eax */
    PUSH32(esp, eax); /* 0x15079DBE: push eax */
    PUSH32(esp, eax); /* 0x15079DBF: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15079DC0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079DC5: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079DC8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079DCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079DCC: ret  */
L_15079DCD:
    eax = MEM32(ebp + 0x8); /* 0x15079DCD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15079DD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079DAE; /* 0x15079DD2: je 0x15079dae */
L_15079DD4:
    PUSH32(esp, esi); /* 0x15079DD4: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079DD5: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15079DD8: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079DDB: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15079DDE: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x15079DE1: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079DE4: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15079DE7: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    PUSH32(esp, eax); /* 0x15079DEE: push eax */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15079DEF: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_1507E600); /* 0x15079DF6: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079DFB: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15079DFE: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15079E00: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15079E0E; /* 0x15079E04: js 0x15079e0e */
L_15079E06:
    ecx = MEM32(ebp + (-0x20)); /* 0x15079E06: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(0); /* 0x15079E09: mov byte ptr [ecx], 0 */
    goto L_15079E1B; /* 0x15079E0C: jmp 0x15079e1b */
L_15079E0E:
    eax = ebp + (-0x20); /* 0x15079E0E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15079E11: push eax */
    PUSH32(esp, 0); /* 0x15079E12: push 0 */
    RECOMP_CALL(sub_15076AD0); /* 0x15079E14: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079E19: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079E1A: pop ecx */
L_15079E1B:
    eax = esi; /* 0x15079E1B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15079E1D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079E1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079E1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079E30u);

L_15079E30:
    edi = edi; /* 0x15079E30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079E32: push ebp */
    ebp = esp; /* 0x15079E33: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079E35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079E38: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079E3A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079E3D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079DA0); /* 0x15079E40: call 0x15079da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079E45: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079E48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079E49: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079E50u);

L_15079E50:
    edi = edi; /* 0x15079E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079E52: push ebp */
    ebp = esp; /* 0x15079E53: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079E55: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15079E58: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079E5A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x15079E5D: push 0x15086a80 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079E62: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079E67: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079E6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079E6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079E80u);

L_15079E80:
    edi = edi; /* 0x15079E80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079E82: push ebp */
    ebp = esp; /* 0x15079E83: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079E85: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079E88: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079E8B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x15079E8E: push 0x15086a80 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079E93: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079E98: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079E9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079E9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079EB0u);

L_15079EB0:
    edi = edi; /* 0x15079EB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079EB2: push ebp */
    ebp = esp; /* 0x15079EB3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079EB5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079EB8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079EBB: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x15079EBE: push 0x15082020 */
    RECOMP_CALL(sub_15079CD2); /* 0x15079EC3: call 0x15079cd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079EC8: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079ECB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079ECC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079EE0u);

L_15079EE0:
    edi = edi; /* 0x15079EE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079EE2: push ebp */
    ebp = esp; /* 0x15079EE3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079EE5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079EE8: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079EEA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079EED: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079F00); /* 0x15079EF0: call 0x15079f00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079EF5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079EF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079EF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079F00u);

L_15079F00:
    edi = edi; /* 0x15079F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079F02: push ebp */
    ebp = esp; /* 0x15079F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15079F05: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15079F08: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15079F0C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079F2E; /* 0x15079F0D: jne 0x15079f2e */
L_15079F0F:
    RECOMP_CALL(sub_15036430); /* 0x15079F0F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15079F14: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15079F16: push ebx */
    PUSH32(esp, ebx); /* 0x15079F17: push ebx */
    PUSH32(esp, ebx); /* 0x15079F18: push ebx */
    PUSH32(esp, ebx); /* 0x15079F19: push ebx */
    PUSH32(esp, ebx); /* 0x15079F1A: push ebx */
    MEM32(eax) = 0x16u; /* 0x15079F1B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15079F21: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079F26: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079F29: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15079FA1; /* 0x15079F2C: jmp 0x15079fa1 */
L_15079F2E:
    eax = MEM32(ebp + 0x8); /* 0x15079F2E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15079F31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079F0F; /* 0x15079F33: je 0x15079f0f */
L_15079F35:
    PUSH32(esp, esi); /* 0x15079F35: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079F36: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15079F39: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079F3C: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15079F3F: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x15079F42: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079F45: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15079F48: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x15079F4F: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15079F50: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_CALL(sub_15086A80); /* 0x15079F57: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079F5C: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15079F5F: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15079F61: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15079F77; /* 0x15079F65: js 0x15079f77 */
L_15079F67:
    ecx = MEM32(ebp + (-0x20)); /* 0x15079F67: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15079F6A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15079F6C: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x15079F6E: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15079F71: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x15079F72: mov dword ptr [ebp - 0x20], ecx */
    goto L_15079F88; /* 0x15079F75: jmp 0x15079f88 */
L_15079F77:
    eax = ebp + (-0x20); /* 0x15079F77: lea eax, [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15079F7A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079F7C: push eax */
    PUSH32(esp, ebx); /* 0x15079F7D: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15079F7E: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079F83: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079F84: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15079F85: mov ecx, dword ptr [ebp - 0x20] */
L_15079F88:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15079F88: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15079F92; /* 0x15079F8C: js 0x15079f92 */
L_15079F8E:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15079F8E: mov byte ptr [ecx], bl */
    goto L_15079F9E; /* 0x15079F90: jmp 0x15079f9e */
L_15079F92:
    eax = ebp + (-0x20); /* 0x15079F92: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15079F95: push eax */
    PUSH32(esp, ebx); /* 0x15079F96: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15079F97: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079F9C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079F9D: pop ecx */
L_15079F9E:
    eax = esi; /* 0x15079F9E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15079FA0: pop esi */
L_15079FA1:
    ebx = POP32_VAL(esp); /* 0x15079FA1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079FA2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079FA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079FB0u);

L_15079FB0:
    edi = edi; /* 0x15079FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079FB2: push ebp */
    ebp = esp; /* 0x15079FB3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079FB5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x15079FB8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079FBA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079FBD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079FC0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079FE0); /* 0x15079FC3: call 0x15079fe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079FC8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079FCB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079FCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079FE0u);

L_15079FE0:
    edi = edi; /* 0x15079FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079FE2: push ebp */
    ebp = esp; /* 0x15079FE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15079FE5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15079FE8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A00D; /* 0x15079FEC: jne 0x1507a00d */
L_15079FEE:
    RECOMP_CALL(sub_15036430); /* 0x15079FEE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15079FF3: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079FF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079FFB: push eax */
    PUSH32(esp, eax); /* 0x15079FFC: push eax */
    PUSH32(esp, eax); /* 0x15079FFD: push eax */
    PUSH32(esp, eax); /* 0x15079FFE: push eax */
    PUSH32(esp, eax); /* 0x15079FFF: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A000: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A005: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A008: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A00B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A00C: ret  */
L_1507A00D:
    eax = MEM32(ebp + 0xC); /* 0x1507A00D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1507A010: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A011: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1507A014: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A047; /* 0x1507A016: je 0x1507a047 */
L_1507A018:
    /* test esi, esi */ /* 0x1507A018: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A03B; /* 0x1507A01A: jne 0x1507a03b */
L_1507A01C:
    RECOMP_CALL(sub_15036430); /* 0x1507A01C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507A021: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A027: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A029: push eax */
    PUSH32(esp, eax); /* 0x1507A02A: push eax */
    PUSH32(esp, eax); /* 0x1507A02B: push eax */
    PUSH32(esp, eax); /* 0x1507A02C: push eax */
    PUSH32(esp, eax); /* 0x1507A02D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A02E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A033: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A036: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A091; /* 0x1507A039: jmp 0x1507a091 */
L_1507A03B:
    ecx = 0x7FFFFFFFu; /* 0x1507A03B: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1507A040: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x1507A043: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1507A04A; /* 0x1507A045: ja 0x1507a04a */
L_1507A047:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507A047: mov dword ptr [ebp - 0x1c], eax */
L_1507A04A:
    PUSH32(esp, edi); /* 0x1507A04A: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A04B: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x1507A04E: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x1507A051: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A058: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1507A05B: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A05E: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = esi; /* 0x1507A061: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, eax); /* 0x1507A064: push eax */
    RECOMP_CALL(sub_1507E600); /* 0x1507A065: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A06A: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1507A06D: mov edi, eax */
    /* test esi, esi */ /* 0x1507A06F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A08E; /* 0x1507A071: je 0x1507a08e */
L_1507A073:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1507A073: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A081; /* 0x1507A077: js 0x1507a081 */
L_1507A079:
    ecx = MEM32(ebp + (-0x20)); /* 0x1507A079: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(0); /* 0x1507A07C: mov byte ptr [ecx], 0 */
    goto L_1507A08E; /* 0x1507A07F: jmp 0x1507a08e */
L_1507A081:
    eax = ebp + (-0x20); /* 0x1507A081: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1507A084: push eax */
    PUSH32(esp, 0); /* 0x1507A085: push 0 */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A087: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507A08C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A08D: pop ecx */
L_1507A08E:
    eax = edi; /* 0x1507A08E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1507A090: pop edi */
L_1507A091:
    esi = POP32_VAL(esp); /* 0x1507A091: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A092: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A093: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A0A0u);

L_1507A0A0:
    edi = edi; /* 0x1507A0A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A0A2: push ebp */
    ebp = esp; /* 0x1507A0A3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A0A5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1507A0A8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A0AA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A0AD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A0B0: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x1507A0B3: push 0x1507e600 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A0B8: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A0BD: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A0C0: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A0C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A0C5: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A0C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A0C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A0D0u);

L_1507A0D0:
    edi = edi; /* 0x1507A0D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A0D2: push ebp */
    ebp = esp; /* 0x1507A0D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A0D5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A0D8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A0DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A0DE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A0E1: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x1507A0E4: push 0x1507e600 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A0E9: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A0EE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A0F1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A0F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A0F6: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A0F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A0FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A101(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A101u);

L_1507A101:
    edi = edi; /* 0x1507A101: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A103: push ebp */
    ebp = esp; /* 0x1507A104: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1507A106: sub esp, 0x24 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1507A109: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507A10D: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A132; /* 0x1507A10E: jne 0x1507a132 */
L_1507A110:
    RECOMP_CALL(sub_15036430); /* 0x1507A110: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A115: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A117: push ebx */
    PUSH32(esp, ebx); /* 0x1507A118: push ebx */
    PUSH32(esp, ebx); /* 0x1507A119: push ebx */
    PUSH32(esp, ebx); /* 0x1507A11A: push ebx */
    PUSH32(esp, ebx); /* 0x1507A11B: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A11C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A122: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A127: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A12A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A1DE; /* 0x1507A12D: jmp 0x1507a1de */
L_1507A132:
    PUSH32(esp, esi); /* 0x1507A132: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1507A133: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1507A136: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1507A137: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1507A13A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A16D; /* 0x1507A13C: je 0x1507a16d */
L_1507A13E:
    /* test edi, edi */ /* 0x1507A13E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A161; /* 0x1507A140: jne 0x1507a161 */
L_1507A142:
    RECOMP_CALL(sub_15036430); /* 0x1507A142: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A147: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A149: push ebx */
    PUSH32(esp, ebx); /* 0x1507A14A: push ebx */
    PUSH32(esp, ebx); /* 0x1507A14B: push ebx */
    PUSH32(esp, ebx); /* 0x1507A14C: push ebx */
    PUSH32(esp, ebx); /* 0x1507A14D: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A14E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A154: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A159: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A15C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A1DC; /* 0x1507A15F: jmp 0x1507a1dc */
L_1507A161:
    eax = 0x7FFFFFFFu; /* 0x1507A161: mov eax, 0x7fffffff */
    MEM32(ebp + (-0x20)) = eax; /* 0x1507A166: mov dword ptr [ebp - 0x20], eax */
    /* cmp esi, eax */ /* 0x1507A169: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1507A170; /* 0x1507A16B: ja 0x1507a170 */
L_1507A16D:
    MEM32(ebp + (-0x20)) = esi; /* 0x1507A16D: mov dword ptr [ebp - 0x20], esi */
L_1507A170:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1507A170: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x1507A173: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x24); /* 0x1507A176: lea eax, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A179: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x18)) = 0x42u; /* 0x1507A17C: mov dword ptr [ebp - 0x18], 0x42 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A183: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507A186: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x1507A189: push eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1507A18A: mov dword ptr [ebp - 0x24], edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1507A18D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1507A193: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A196: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1507A199: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1507A19B: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x1507A19E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A1DA; /* 0x1507A1A0: je 0x1507a1da */
L_1507A1A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A1A2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1507A1A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1507A1C6; /* 0x1507A1A6: js 0x1507a1c6 */
L_1507A1A8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - 1; /* 0x1507A1A8: sub dword ptr [ebp - 0x20], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A1B5; /* 0x1507A1AC: js 0x1507a1b5 */
L_1507A1AE:
    eax = MEM32(ebp + (-0x24)); /* 0x1507A1AE: mov eax, dword ptr [ebp - 0x24] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507A1B1: mov byte ptr [eax], bl */
    goto L_1507A1DA; /* 0x1507A1B3: jmp 0x1507a1da */
L_1507A1B5:
    eax = ebp + (-0x24); /* 0x1507A1B5: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1507A1B8: push eax */
    PUSH32(esp, ebx); /* 0x1507A1B9: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A1BA: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507A1BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A1C0: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507A1C1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A1D7; /* 0x1507A1C4: jne 0x1507a1d7 */
L_1507A1C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A1C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1507A1C8: mov byte ptr [edi + esi - 1], bl */
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1507A1CC: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1507A1CF: setge al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1507A1D2: sub eax, 2 */
    _flag_k = FK_CMP;
    goto L_1507A1DC; /* 0x1507A1D5: jmp 0x1507a1dc */
L_1507A1D7:
    ecx = MEM32(ebp + (-0x4)); /* 0x1507A1D7: mov ecx, dword ptr [ebp - 4] */
L_1507A1DA:
    eax = ecx; /* 0x1507A1DA: mov eax, ecx */
L_1507A1DC:
    edi = POP32_VAL(esp); /* 0x1507A1DC: pop edi */
    esi = POP32_VAL(esp); /* 0x1507A1DD: pop esi */
L_1507A1DE:
    ebx = POP32_VAL(esp); /* 0x1507A1DE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A1DF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A1E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A1F0u);

L_1507A1F0:
    edi = edi; /* 0x1507A1F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A1F2: push ebp */
    ebp = esp; /* 0x1507A1F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507A1F5: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1507A1F6: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507A1FA: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A21F; /* 0x1507A1FB: jne 0x1507a21f */
L_1507A1FD:
    RECOMP_CALL(sub_15036430); /* 0x1507A1FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A202: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A204: push ebx */
    PUSH32(esp, ebx); /* 0x1507A205: push ebx */
    PUSH32(esp, ebx); /* 0x1507A206: push ebx */
    PUSH32(esp, ebx); /* 0x1507A207: push ebx */
    PUSH32(esp, ebx); /* 0x1507A208: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A209: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A20F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A214: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A217: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A304; /* 0x1507A21A: jmp 0x1507a304 */
L_1507A21F:
    PUSH32(esp, esi); /* 0x1507A21F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A220: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1507A223: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1507A224: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1507A227: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A23F; /* 0x1507A229: jne 0x1507a23f */
L_1507A22B:
    /* test esi, esi */ /* 0x1507A22B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A247; /* 0x1507A22D: jne 0x1507a247 */
L_1507A22F:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1507A22F: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A2E5; /* 0x1507A232: jne 0x1507a2e5 */
L_1507A238:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A238: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A302; /* 0x1507A23A: jmp 0x1507a302 */
L_1507A23F:
    /* test esi, esi */ /* 0x1507A23F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A2E5; /* 0x1507A241: je 0x1507a2e5 */
L_1507A247:
    eax = MEM32(ebp + 0xC); /* 0x1507A247: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1507A24A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A2E5; /* 0x1507A24C: je 0x1507a2e5 */
L_1507A252:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A252: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1507A254: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507A29A; /* 0x1507A256: jbe 0x1507a29a */
L_1507A258:
    RECOMP_CALL(sub_15036430); /* 0x1507A258: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1507A25D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A260: push dword ptr [ebp + 0x18] */
    eax = MEM32(eax); /* 0x1507A263: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A265: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1507A268: mov dword ptr [ebp - 4], eax */
    eax = edi + 0x1; /* 0x1507A26B: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x1507A26E: push eax */
    PUSH32(esp, esi); /* 0x1507A26F: push esi */
    PUSH32(esp, 0x15081150u); /* 0x1507A270: push 0x15081150 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A275: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A27A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A27D: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507A2CF; /* 0x1507A280: je 0x1507a2cf */
L_1507A282:
    /* test eax, eax */ /* 0x1507A282: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507A302; /* 0x1507A284: jns 0x1507a302 */
L_1507A286:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1507A286: mov byte ptr [esi], bl */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A288: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A2FF; /* 0x1507A28B: jne 0x1507a2ff */
L_1507A28D:
    RECOMP_CALL(sub_15036430); /* 0x1507A28D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1507A292: mov dword ptr [eax], 0x22 */
    goto L_1507A2F2; /* 0x1507A298: jmp 0x1507a2f2 */
L_1507A29A:
    RECOMP_CALL(sub_15036430); /* 0x1507A29A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1507A29F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A2A2: push dword ptr [ebp + 0x18] */
    eax = MEM32(eax); /* 0x1507A2A5: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A2A7: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1507A2AA: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A2AD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1507A2B0: push esi */
    PUSH32(esp, 0x15081150u); /* 0x1507A2B1: push 0x15081150 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A2B6: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1507A2BB: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A2BE: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1507A2C1: mov byte ptr [esi + ecx - 1], bl */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A2C5: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A282; /* 0x1507A2C8: jne 0x1507a282 */
L_1507A2CA:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1507A2CA: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A286; /* 0x1507A2CD: jne 0x1507a286 */
L_1507A2CF:
    RECOMP_CALL(sub_15036430); /* 0x1507A2CF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1507A2D4: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A2FF; /* 0x1507A2D7: jne 0x1507a2ff */
L_1507A2D9:
    RECOMP_CALL(sub_15036430); /* 0x1507A2D9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1507A2DE: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1507A2E1: mov dword ptr [eax], ecx */
    goto L_1507A2FF; /* 0x1507A2E3: jmp 0x1507a2ff */
L_1507A2E5:
    RECOMP_CALL(sub_15036430); /* 0x1507A2E5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A2EA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16u; /* 0x1507A2EC: mov dword ptr [eax], 0x16 */
L_1507A2F2:
    PUSH32(esp, ebx); /* 0x1507A2F2: push ebx */
    PUSH32(esp, ebx); /* 0x1507A2F3: push ebx */
    PUSH32(esp, ebx); /* 0x1507A2F4: push ebx */
    PUSH32(esp, ebx); /* 0x1507A2F5: push ebx */
    PUSH32(esp, ebx); /* 0x1507A2F6: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1507A2F7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A2FC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507A2FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A2FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507A302:
    edi = POP32_VAL(esp); /* 0x1507A302: pop edi */
    esi = POP32_VAL(esp); /* 0x1507A303: pop esi */
L_1507A304:
    ebx = POP32_VAL(esp); /* 0x1507A304: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A305: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A306: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A310u);

L_1507A310:
    edi = edi; /* 0x1507A310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A312: push ebp */
    ebp = esp; /* 0x1507A313: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A315: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1507A318: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A31A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A31D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A320: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x1507A323: push 0x1507f390 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A328: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A32D: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A330: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A335: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A338: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A339: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A340u);

L_1507A340:
    edi = edi; /* 0x1507A340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A342: push ebp */
    ebp = esp; /* 0x1507A343: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A345: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A348: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A34B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A34E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A351: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x1507A354: push 0x1507f390 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A359: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A35E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A361: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A364: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A366: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A369: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A36A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A380u);

L_1507A380:
    edi = edi; /* 0x1507A380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A382: push ebp */
    ebp = esp; /* 0x1507A383: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1507A385: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507A389: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A3AB; /* 0x1507A38A: jne 0x1507a3ab */
L_1507A38C:
    RECOMP_CALL(sub_15036430); /* 0x1507A38C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A391: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A393: push ebx */
    PUSH32(esp, ebx); /* 0x1507A394: push ebx */
    PUSH32(esp, ebx); /* 0x1507A395: push ebx */
    PUSH32(esp, ebx); /* 0x1507A396: push ebx */
    PUSH32(esp, ebx); /* 0x1507A397: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A398: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A39E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A3A3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A3A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A40B; /* 0x1507A3A9: jmp 0x1507a40b */
L_1507A3AB:
    PUSH32(esp, esi); /* 0x1507A3AB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A3AC: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507A3AF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A3ED; /* 0x1507A3B1: je 0x1507a3ed */
L_1507A3B3:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507A3B3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507A3ED; /* 0x1507A3B7: jbe 0x1507a3ed */
L_1507A3B9:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A3B9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A3BC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A3BF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A3C2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1507A3C5: push esi */
    PUSH32(esp, 0x15081150u); /* 0x1507A3C6: push 0x15081150 */
    RECOMP_CALL(sub_1507A101); /* 0x1507A3CB: call 0x1507a101 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A3D0: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A3D3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1507A3D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507A3DB; /* 0x1507A3D7: jns 0x1507a3db */
L_1507A3D9:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1507A3D9: mov byte ptr [esi], bl */
L_1507A3DB:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A3DB: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A40A; /* 0x1507A3DE: jne 0x1507a40a */
L_1507A3E0:
    RECOMP_CALL(sub_15036430); /* 0x1507A3E0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1507A3E5: mov dword ptr [eax], 0x22 */
    goto L_1507A3FA; /* 0x1507A3EB: jmp 0x1507a3fa */
L_1507A3ED:
    RECOMP_CALL(sub_15036430); /* 0x1507A3ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A3F2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16u; /* 0x1507A3F4: mov dword ptr [eax], 0x16 */
L_1507A3FA:
    PUSH32(esp, ebx); /* 0x1507A3FA: push ebx */
    PUSH32(esp, ebx); /* 0x1507A3FB: push ebx */
    PUSH32(esp, ebx); /* 0x1507A3FC: push ebx */
    PUSH32(esp, ebx); /* 0x1507A3FD: push ebx */
    PUSH32(esp, ebx); /* 0x1507A3FE: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1507A3FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A404: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A407: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507A40A:
    esi = POP32_VAL(esp); /* 0x1507A40A: pop esi */
L_1507A40B:
    ebx = POP32_VAL(esp); /* 0x1507A40B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1507A40C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A40D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A420u);

L_1507A420:
    edi = edi; /* 0x1507A420: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A422: push ebp */
    ebp = esp; /* 0x1507A423: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A425: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1507A428: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A42A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A42D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A430: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A450); /* 0x1507A433: call 0x1507a450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A438: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A43B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A43C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A450u);

L_1507A450:
    edi = edi; /* 0x1507A450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A452: push ebp */
    ebp = esp; /* 0x1507A453: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1507A455: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1507A458: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507A45C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A481; /* 0x1507A45D: jne 0x1507a481 */
L_1507A45F:
    RECOMP_CALL(sub_15036430); /* 0x1507A45F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A464: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A466: push ebx */
    PUSH32(esp, ebx); /* 0x1507A467: push ebx */
    PUSH32(esp, ebx); /* 0x1507A468: push ebx */
    PUSH32(esp, ebx); /* 0x1507A469: push ebx */
    PUSH32(esp, ebx); /* 0x1507A46A: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A46B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A471: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A476: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A479: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A52E; /* 0x1507A47C: jmp 0x1507a52e */
L_1507A481:
    eax = MEM32(ebp + 0xC); /* 0x1507A481: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1507A484: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A485: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1507A488: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A4AF; /* 0x1507A48A: je 0x1507a4af */
L_1507A48C:
    /* test esi, esi */ /* 0x1507A48C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A4AF; /* 0x1507A48E: jne 0x1507a4af */
L_1507A490:
    RECOMP_CALL(sub_15036430); /* 0x1507A490: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A495: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A497: push ebx */
    PUSH32(esp, ebx); /* 0x1507A498: push ebx */
    PUSH32(esp, ebx); /* 0x1507A499: push ebx */
    PUSH32(esp, ebx); /* 0x1507A49A: push ebx */
    PUSH32(esp, ebx); /* 0x1507A49B: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A49C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A4A2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A4A7: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A4AA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A52D; /* 0x1507A4AD: jmp 0x1507a52d */
L_1507A4AF:
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x1507A4AF: mov dword ptr [ebp - 0x14], 0x42 */
    MEM32(ebp + (-0x18)) = esi; /* 0x1507A4B6: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1507A4B9: mov dword ptr [ebp - 0x20], esi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1507A4BC: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507A4CC; /* 0x1507A4C1: jbe 0x1507a4cc */
L_1507A4C3:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x1507A4C3: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_1507A4D1; /* 0x1507A4CA: jmp 0x1507a4d1 */
L_1507A4CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1507A4CC: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507A4CE: mov dword ptr [ebp - 0x1c], eax */
L_1507A4D1:
    PUSH32(esp, edi); /* 0x1507A4D1: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A4D2: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x1507A4D5: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A4D8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A4DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507A4DE: push eax */
    RECOMP_CALL(sub_15086A80); /* 0x1507A4DF: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A4E4: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1507A4E7: mov edi, eax */
    /* test esi, esi */ /* 0x1507A4E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A52A; /* 0x1507A4EB: je 0x1507a52a */
L_1507A4ED:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1507A4ED: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A503; /* 0x1507A4F1: js 0x1507a503 */
L_1507A4F3:
    ecx = MEM32(ebp + (-0x20)); /* 0x1507A4F3: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A4F6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1507A4F8: mov byte ptr [ecx], bl */
    eax = MEM32(ebp + (-0x20)); /* 0x1507A4FA: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507A4FD: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x1507A4FE: mov dword ptr [ebp - 0x20], eax */
    goto L_1507A514; /* 0x1507A501: jmp 0x1507a514 */
L_1507A503:
    eax = ebp + (-0x20); /* 0x1507A503: lea eax, [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A506: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A508: push eax */
    PUSH32(esp, ebx); /* 0x1507A509: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A50A: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1507A50F: mov eax, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x1507A512: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A513: pop ecx */
L_1507A514:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1507A514: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A51E; /* 0x1507A518: js 0x1507a51e */
L_1507A51A:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507A51A: mov byte ptr [eax], bl */
    goto L_1507A52A; /* 0x1507A51C: jmp 0x1507a52a */
L_1507A51E:
    eax = ebp + (-0x20); /* 0x1507A51E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1507A521: push eax */
    PUSH32(esp, ebx); /* 0x1507A522: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A523: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507A528: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A529: pop ecx */
L_1507A52A:
    eax = edi; /* 0x1507A52A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1507A52C: pop edi */
L_1507A52D:
    esi = POP32_VAL(esp); /* 0x1507A52D: pop esi */
L_1507A52E:
    ebx = POP32_VAL(esp); /* 0x1507A52E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A52F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A530: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A540u);

L_1507A540:
    edi = edi; /* 0x1507A540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A542: push ebp */
    ebp = esp; /* 0x1507A543: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507A545: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1507A546: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A56B; /* 0x1507A54A: jne 0x1507a56b */
L_1507A54C:
    RECOMP_CALL(sub_15036430); /* 0x1507A54C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507A551: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A557: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A559: push eax */
    PUSH32(esp, eax); /* 0x1507A55A: push eax */
    PUSH32(esp, eax); /* 0x1507A55B: push eax */
    PUSH32(esp, eax); /* 0x1507A55C: push eax */
    PUSH32(esp, eax); /* 0x1507A55D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A55E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A563: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A566: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A569: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A56A: ret  */
L_1507A56B:
    PUSH32(esp, ebx); /* 0x1507A56B: push ebx */
    PUSH32(esp, esi); /* 0x1507A56C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A56D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1507A570: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1507A571: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1507A574: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A58C; /* 0x1507A576: jne 0x1507a58c */
L_1507A578:
    /* test esi, esi */ /* 0x1507A578: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A594; /* 0x1507A57A: jne 0x1507a594 */
L_1507A57C:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1507A57C: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A633; /* 0x1507A57F: jne 0x1507a633 */
L_1507A585:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A585: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A650; /* 0x1507A587: jmp 0x1507a650 */
L_1507A58C:
    /* test esi, esi */ /* 0x1507A58C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A633; /* 0x1507A58E: je 0x1507a633 */
L_1507A594:
    ebx = MEM32(ebp + 0xC); /* 0x1507A594: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1507A597: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A633; /* 0x1507A599: je 0x1507a633 */
L_1507A59F:
    RECOMP_CALL(sub_15036430); /* 0x1507A59F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1507A5A4: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A5A7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A5AA: push dword ptr [ebp + 0x14] */
    /* cmp ebx, edi */ /* 0x1507A5AD: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507A5DD; /* 0x1507A5AF: jbe 0x1507a5dd */
L_1507A5B1:
    ebx = MEM32(eax); /* 0x1507A5B1: mov ebx, dword ptr [eax] */
    eax = edi + 0x1; /* 0x1507A5B3: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x1507A5B6: push eax */
    PUSH32(esp, esi); /* 0x1507A5B7: push esi */
    PUSH32(esp, 0x1508A290u); /* 0x1507A5B8: push 0x1508a290 */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A5BD: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A5C2: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A5C5: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A618; /* 0x1507A5C8: jne 0x1507a618 */
L_1507A5CA:
    RECOMP_CALL(sub_15036430); /* 0x1507A5CA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1507A5CF: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A64D; /* 0x1507A5D2: jne 0x1507a64d */
L_1507A5D4:
    RECOMP_CALL(sub_15036430); /* 0x1507A5D4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1507A5D9: mov dword ptr [eax], ebx */
    goto L_1507A64D; /* 0x1507A5DB: jmp 0x1507a64d */
L_1507A5DD:
    eax = MEM32(eax); /* 0x1507A5DD: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1507A5DF: push ebx */
    PUSH32(esp, esi); /* 0x1507A5E0: push esi */
    PUSH32(esp, 0x1508A290u); /* 0x1507A5E1: push 0x1508a290 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1507A5E6: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A5E9: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507A5EE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A5F0: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM16(esi + ebx * 2 + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x1507A5F3: mov word ptr [esi + ebx*2 - 2], cx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A5F8: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A618; /* 0x1507A5FB: jne 0x1507a618 */
L_1507A5FD:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1507A5FD: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A61C; /* 0x1507A600: jne 0x1507a61c */
L_1507A602:
    RECOMP_CALL(sub_15036430); /* 0x1507A602: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1507A607: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A64D; /* 0x1507A60A: jne 0x1507a64d */
L_1507A60C:
    RECOMP_CALL(sub_15036430); /* 0x1507A60C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1507A611: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1507A614: mov dword ptr [eax], ecx */
    goto L_1507A64D; /* 0x1507A616: jmp 0x1507a64d */
L_1507A618:
    /* test eax, eax */ /* 0x1507A618: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507A650; /* 0x1507A61A: jns 0x1507a650 */
L_1507A61C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507A61C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1507A61E: mov word ptr [esi], cx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A621: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A64D; /* 0x1507A624: jne 0x1507a64d */
L_1507A626:
    RECOMP_CALL(sub_15036430); /* 0x1507A626: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1507A62B: mov dword ptr [eax], 0x22 */
    goto L_1507A63E; /* 0x1507A631: jmp 0x1507a63e */
L_1507A633:
    RECOMP_CALL(sub_15036430); /* 0x1507A633: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507A638: mov dword ptr [eax], 0x16 */
L_1507A63E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A63E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A640: push eax */
    PUSH32(esp, eax); /* 0x1507A641: push eax */
    PUSH32(esp, eax); /* 0x1507A642: push eax */
    PUSH32(esp, eax); /* 0x1507A643: push eax */
    PUSH32(esp, eax); /* 0x1507A644: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A645: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A64A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507A64D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A64D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507A650:
    edi = POP32_VAL(esp); /* 0x1507A650: pop edi */
    esi = POP32_VAL(esp); /* 0x1507A651: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507A652: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A653: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A654: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A660u);

L_1507A660:
    edi = edi; /* 0x1507A660: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A662: push ebp */
    ebp = esp; /* 0x1507A663: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A665: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1507A668: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A66A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A66D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A670: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x1507A673: push 0x15086a80 */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A678: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A67D: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A680: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A683: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A685: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A688: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A689: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A690u);

L_1507A690:
    edi = edi; /* 0x1507A690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A692: push ebp */
    ebp = esp; /* 0x1507A693: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A695: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A698: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A69B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A69E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A6A1: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x1507A6A4: push 0x15086a80 */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A6A9: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A6AE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A6B1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A6B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A6B6: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A6B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A6BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A6C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A6C1u);

L_1507A6C1:
    edi = edi; /* 0x1507A6C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A6C3: push ebp */
    ebp = esp; /* 0x1507A6C4: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1507A6C6: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1507A6C9: sub esp, 0x24 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1507A6CC: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507A6D0: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A6F5; /* 0x1507A6D1: jne 0x1507a6f5 */
L_1507A6D3:
    RECOMP_CALL(sub_15036430); /* 0x1507A6D3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A6D8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A6DA: push ebx */
    PUSH32(esp, ebx); /* 0x1507A6DB: push ebx */
    PUSH32(esp, ebx); /* 0x1507A6DC: push ebx */
    PUSH32(esp, ebx); /* 0x1507A6DD: push ebx */
    PUSH32(esp, ebx); /* 0x1507A6DE: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A6DF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A6E5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A6EA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A6ED: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A7A7; /* 0x1507A6F0: jmp 0x1507a7a7 */
L_1507A6F5:
    PUSH32(esp, esi); /* 0x1507A6F5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1507A6F6: mov esi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1507A6F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A723; /* 0x1507A6FB: je 0x1507a723 */
L_1507A6FD:
    /* test esi, esi */ /* 0x1507A6FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507A723; /* 0x1507A6FF: jne 0x1507a723 */
L_1507A701:
    RECOMP_CALL(sub_15036430); /* 0x1507A701: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A706: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1507A708: push ebx */
    PUSH32(esp, ebx); /* 0x1507A709: push ebx */
    PUSH32(esp, ebx); /* 0x1507A70A: push ebx */
    PUSH32(esp, ebx); /* 0x1507A70B: push ebx */
    PUSH32(esp, ebx); /* 0x1507A70C: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507A70D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507A713: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A718: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A71B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507A7A6; /* 0x1507A71E: jmp 0x1507a7a6 */
L_1507A723:
    MEM32(ebp + (-0x18)) = 0x42u; /* 0x1507A723: mov dword ptr [ebp - 0x18], 0x42 */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507A72A: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1507A72D: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x20)) = 0x7FFFFFFFu; /* 0x1507A730: mov dword ptr [ebp - 0x20], 0x7fffffff */
    PUSH32(esp, edi); /* 0x1507A737: push edi */
    edi = eax + eax; /* 0x1507A738: lea edi, [eax + eax] */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1507A73B: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1507A745; /* 0x1507A740: ja 0x1507a745 */
L_1507A742:
    MEM32(ebp + (-0x20)) = edi; /* 0x1507A742: mov dword ptr [ebp - 0x20], edi */
L_1507A745:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1507A745: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x1507A748: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x24); /* 0x1507A74B: lea eax, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A74E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A751: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1507A754: push eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1507A755: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1507A75B: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A75E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1507A761: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1507A763: mov dword ptr [ebp - 4], ecx */
    /* test esi, esi */ /* 0x1507A766: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A7A2; /* 0x1507A768: je 0x1507a7a2 */
L_1507A76A:
    /* test ecx, ecx */ /* 0x1507A76A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1507A7BB; /* 0x1507A76C: js 0x1507a7bb */
L_1507A76E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - 1; /* 0x1507A76E: sub dword ptr [ebp - 0x20], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A784; /* 0x1507A772: js 0x1507a784 */
L_1507A774:
    eax = MEM32(ebp + (-0x24)); /* 0x1507A774: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A777: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507A779: mov byte ptr [eax], bl */
    eax = MEM32(ebp + (-0x24)); /* 0x1507A77B: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507A77E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = eax; /* 0x1507A77F: mov dword ptr [ebp - 0x24], eax */
    goto L_1507A79A; /* 0x1507A782: jmp 0x1507a79a */
L_1507A784:
    eax = ebp + (-0x24); /* 0x1507A784: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507A787: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A789: push eax */
    PUSH32(esp, ebx); /* 0x1507A78A: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A78B: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507A790: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A791: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507A792: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507A7BB; /* 0x1507A795: je 0x1507a7bb */
L_1507A797:
    eax = MEM32(ebp + (-0x24)); /* 0x1507A797: mov eax, dword ptr [ebp - 0x24] */
L_1507A79A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - 1; /* 0x1507A79A: sub dword ptr [ebp - 0x20], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507A7AA; /* 0x1507A79E: js 0x1507a7aa */
L_1507A7A0:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507A7A0: mov byte ptr [eax], bl */
L_1507A7A2:
    eax = MEM32(ebp + (-0x4)); /* 0x1507A7A2: mov eax, dword ptr [ebp - 4] */
L_1507A7A5:
    edi = POP32_VAL(esp); /* 0x1507A7A5: pop edi */
L_1507A7A6:
    esi = POP32_VAL(esp); /* 0x1507A7A6: pop esi */
L_1507A7A7:
    ebx = POP32_VAL(esp); /* 0x1507A7A7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507A7A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A7A9: ret  */
L_1507A7AA:
    eax = ebp + (-0x24); /* 0x1507A7AA: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1507A7AD: push eax */
    PUSH32(esp, ebx); /* 0x1507A7AE: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507A7AF: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507A7B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507A7B5: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507A7B6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A7A2; /* 0x1507A7B9: jne 0x1507a7a2 */
L_1507A7BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A7BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1507A7BD: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(edi + esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x1507A7C0: mov word ptr [edi + esi - 2], ax */
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1507A7C5: setge al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1507A7C8: sub eax, 2 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1507A7A5; /* 0x1507A7CB: jmp 0x1507a7a5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1507A7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A7E0u);

L_1507A7E0:
    edi = edi; /* 0x1507A7E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A7E2: push ebp */
    ebp = esp; /* 0x1507A7E3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A7E5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A7E8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A7EB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A7EE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A7F1: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x1507A7F4: push 0x15082020 */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A7F9: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1507A7FE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A801: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A804: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { eax = ecx; } /* 0x1507A806: cmovs eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1507A809: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A80A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A820u);

L_1507A820:
    edi = edi; /* 0x1507A820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A822: push ebp */
    ebp = esp; /* 0x1507A823: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1507A825: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A84A; /* 0x1507A829: jne 0x1507a84a */
L_1507A82B:
    RECOMP_CALL(sub_15036430); /* 0x1507A82B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507A830: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A836: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A838: push eax */
    PUSH32(esp, eax); /* 0x1507A839: push eax */
    PUSH32(esp, eax); /* 0x1507A83A: push eax */
    PUSH32(esp, eax); /* 0x1507A83B: push eax */
    PUSH32(esp, eax); /* 0x1507A83C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A83D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A842: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A845: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507A848: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A849: ret  */
L_1507A84A:
    PUSH32(esp, esi); /* 0x1507A84A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507A84B: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507A84E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507A88D; /* 0x1507A850: je 0x1507a88d */
L_1507A852:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507A852: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507A88D; /* 0x1507A856: jbe 0x1507a88d */
L_1507A858:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507A858: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507A85B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A85E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A861: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1507A864: push esi */
    PUSH32(esp, 0x1508A290u); /* 0x1507A865: push 0x1508a290 */
    RECOMP_CALL(sub_1507A6C1); /* 0x1507A86A: call 0x1507a6c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1507A86F: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507A872: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507A87B; /* 0x1507A874: jns 0x1507a87b */
L_1507A876:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507A876: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1507A878: mov word ptr [esi], cx */
L_1507A87B:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507A87B: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507A8AA; /* 0x1507A87E: jne 0x1507a8aa */
L_1507A880:
    RECOMP_CALL(sub_15036430); /* 0x1507A880: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1507A885: mov dword ptr [eax], 0x22 */
    goto L_1507A898; /* 0x1507A88B: jmp 0x1507a898 */
L_1507A88D:
    RECOMP_CALL(sub_15036430); /* 0x1507A88D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507A892: mov dword ptr [eax], 0x16 */
L_1507A898:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507A898: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507A89A: push eax */
    PUSH32(esp, eax); /* 0x1507A89B: push eax */
    PUSH32(esp, eax); /* 0x1507A89C: push eax */
    PUSH32(esp, eax); /* 0x1507A89D: push eax */
    PUSH32(esp, eax); /* 0x1507A89E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507A89F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507A8A4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507A8A7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507A8AA:
    esi = POP32_VAL(esp); /* 0x1507A8AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1507A8AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A8AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A8C0u);

L_1507A8C0:
    edi = edi; /* 0x1507A8C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A8C2: push ebp */
    ebp = esp; /* 0x1507A8C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A8C5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A8C8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A8CB: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x1507A8CE: push 0x15086a80 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A8D3: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A8D8: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A8DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A8DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A8F0u);

L_1507A8F0:
    edi = edi; /* 0x1507A8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A8F2: push ebp */
    ebp = esp; /* 0x1507A8F3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A8F5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1507A8F8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A8FA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x1507A8FD: push 0x15082020 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A902: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A907: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A90A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A90B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A920u);

L_1507A920:
    edi = edi; /* 0x1507A920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A922: push ebp */
    ebp = esp; /* 0x1507A923: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A925: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A928: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A92B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x1507A92E: push 0x15082020 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A933: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A938: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A93B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A93C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A950u);

L_1507A950:
    edi = edi; /* 0x1507A950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A952: push ebp */
    ebp = esp; /* 0x1507A953: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507A955: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A958: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A95B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1508A290u); /* 0x1507A95E: push 0x1508a290 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A963: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A968: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A96B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A96C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A980u);

L_1507A980:
    edi = edi; /* 0x1507A980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A982: push ebp */
    ebp = esp; /* 0x1507A983: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A985: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1507A988: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A98A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x1507A98D: push 0x15086a80 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A992: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A997: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A99A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A99B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A9B0u);

L_1507A9B0:
    edi = edi; /* 0x1507A9B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507A9B2: push ebp */
    ebp = esp; /* 0x1507A9B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507A9B5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1507A9B8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507A9BA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1508A290u); /* 0x1507A9BD: push 0x1508a290 */
    RECOMP_CALL(sub_15079BD2); /* 0x1507A9C2: call 0x15079bd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507A9C7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507A9CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507A9CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507A9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507A9E0u);

L_1507A9E0:
    PUSH32(esp, 0x24u); /* 0x1507A9E0: push 0x24 */
    PUSH32(esp, 0x150B1188u); /* 0x1507A9E2: push 0x150b1188 */
    RECOMP_CALL(sub_1505E988); /* 0x1507A9E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1507A9EC: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1507A9EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AA14; /* 0x1507A9F1: jne 0x1507aa14 */
L_1507A9F3:
    RECOMP_CALL(sub_15036430); /* 0x1507A9F3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507A9F8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507A9FA:
    MEM32(eax) = 0x16u; /* 0x1507A9FA: mov dword ptr [eax], 0x16 */
L_1507AA00:
    PUSH32(esp, esi); /* 0x1507AA00: push esi */
    PUSH32(esp, esi); /* 0x1507AA01: push esi */
    PUSH32(esp, esi); /* 0x1507AA02: push esi */
    PUSH32(esp, esi); /* 0x1507AA03: push esi */
    PUSH32(esp, esi); /* 0x1507AA04: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507AA05: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507AA0A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507AA0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AA0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507ABE0; /* 0x1507AA0F: jmp 0x1507abe0 */
L_1507AA14:
    eax = MEM32(ebp + 0x8); /* 0x1507AA14: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507AA17: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AA29; /* 0x1507AA1A: jne 0x1507aa29 */
L_1507AA1C:
    RECOMP_CALL(sub_15036430); /* 0x1507AA1C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1507AA21: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1507AA0D; /* 0x1507AA27: jmp 0x1507aa0d */
L_1507AA29:
    /* test eax, eax */ /* 0x1507AA29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1507AA3E; /* 0x1507AA2B: js 0x1507aa3e */
L_1507AA2D:
    /* cmp eax, MEM32(0x150BEBAC) */ /* 0x1507AA2D: cmp eax, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1507AA3E; /* 0x1507AA33: jae 0x1507aa3e */
L_1507AA35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507AA35: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1507AA37: inc ebx */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x1507AA38: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507AA3A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507AA45; /* 0x1507AA3C: jmp 0x1507aa45 */
L_1507AA3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507AA3E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1507AA40: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507AA42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1507AA44: inc ebx */
    _flag_k = FK_INC;
L_1507AA45:
    /* test ecx, ecx */ /* 0x1507AA45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AA56; /* 0x1507AA47: jne 0x1507aa56 */
L_1507AA49:
    RECOMP_CALL(sub_15036430); /* 0x1507AA49: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1507AA4E: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1507AA00; /* 0x1507AA54: jmp 0x1507aa00 */
L_1507AA56:
    edx = eax; /* 0x1507AA56: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507AA58: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1507AA5B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1507AA5E: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1507AA61: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1507AA68: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AA49; /* 0x1507AA6D: je 0x1507aa49 */
L_1507AA6F:
    eax = (uint32_t)MEM16(edi); /* 0x1507AA6F: movzx eax, word ptr [edi] */
    ecx = eax; /* 0x1507AA72: mov ecx, eax */
    PUSH32(esp, 0x20u); /* 0x1507AA74: push 0x20 */
    edx = POP32_VAL(esp); /* 0x1507AA76: pop edx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1507AA77: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AA89; /* 0x1507AA7A: jne 0x1507aa89 */
L_1507AA7C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1507AA7C: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x1507AA7F: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1507AA82: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AA7C; /* 0x1507AA85: je 0x1507aa7c */
L_1507AA87:
    ecx = eax; /* 0x1507AA87: mov ecx, eax */
L_1507AA89:
    eax = (uint32_t)LO16(ecx); /* 0x1507AA89: movzx eax, cx */
    /* cmp eax, 0x61u */ /* 0x1507AA8C: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AAA6; /* 0x1507AA8F: je 0x1507aaa6 */
L_1507AA91:
    /* cmp eax, 0x72u */ /* 0x1507AA91: cmp eax, 0x72 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AAA9; /* 0x1507AA94: je 0x1507aaa9 */
L_1507AA96:
    /* cmp LO16(ecx), 0x77u */ /* 0x1507AA96: cmp cx, 0x77 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x77u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AAA6; /* 0x1507AA9A: je 0x1507aaa6 */
L_1507AA9C:
    RECOMP_CALL(sub_15036430); /* 0x1507AA9C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1507A9FA; /* 0x1507AAA1: jmp 0x1507a9fa */
L_1507AAA6:
    PUSH32(esp, 2); /* 0x1507AAA6: push 2 */
    ebx = POP32_VAL(esp); /* 0x1507AAA8: pop ebx */
L_1507AAA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507AAA9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1507AAAB: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1507AAAC: mov dword ptr [ebp - 0x1c], ecx */
    edx = esi; /* 0x1507AAAF: mov edx, esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1507AAB1: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)((ebx | MEM32(0x150BE964))); _flag_b = (uint32_t)((ebx | MEM32(0x150BE964)));
    ebx = ebx | MEM32(0x150BE964); /* 0x1507AAB4: or ebx, dword ptr [0x150be964] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1507AABA: mov dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1507AABD: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x1507AAC0: movzx eax, word ptr [edi] */
    ebx = eax; /* 0x1507AAC3: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1507AAC5: mov dword ptr [ebp - 0x28], ebx */
    /* test LO16(eax), LO16(eax) */ /* 0x1507AAC8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ebx = MEM32(ebp + (-0x24)); /* 0x1507AACB: mov ebx, dword ptr [ebp - 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AB85; /* 0x1507AACE: je 0x1507ab85 */
L_1507AAD4:
    eax = (uint32_t)LO16(eax); /* 0x1507AAD4: movzx eax, ax */
L_1507AAD7:
    esi = MEM32(ebp + (-0x20)); /* 0x1507AAD7: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x34)) = esi; /* 0x1507AADA: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1507AADD: mov dword ptr [ebp - 0x30], edx */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1507AAE0: mov dword ptr [ebp - 0x2c], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1507AAE3: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1507AAE6: mov dword ptr [ebp - 0x28], edx */
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1507AAE9: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1507AAED: push 0 */
    esi = POP32_VAL(esp); /* 0x1507AAEF: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AB85; /* 0x1507AAF0: je 0x1507ab85 */
L_1507AAF6:
    eax = (uint32_t)LO16(eax); /* 0x1507AAF6: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x1507AAF9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507AB76; /* 0x1507AAFC: je 0x1507ab76 */
L_1507AAFE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1507AAFE: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507AB64; /* 0x1507AB01: je 0x1507ab64 */
L_1507AB03:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x1507AB03: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507AB17; /* 0x1507AB06: je 0x1507ab17 */
L_1507AB08:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507AB08: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507AB4A; /* 0x1507AB0B: je 0x1507ab4a */
L_1507AB0D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1507AB0D: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507AB29; /* 0x1507AB10: je 0x1507ab29 */
L_1507AB12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1507AB12: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1507AA9C; /* 0x1507AB15: jne 0x1507aa9c */
L_1507AB17:
    eax = MEM32(ebp + (-0x20)); /* 0x1507AB17: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x1507AB1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x1507AB1C: cmove eax, ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1507AB1F: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AB22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x34)), eax */ /* 0x1507AB24: cmp dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1507AB41; /* 0x1507AB27: jmp 0x1507ab41 */
L_1507AB29:
    /* test edx, edx */ /* 0x1507AB29: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x1507AB2B: cmove edx, ecx */
    eax = ebx; /* 0x1507AB2E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFBFFFu);
    eax = eax & 0xFFFFBFFFu; /* 0x1507AB30: and eax, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1507AB35: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x1507AB39: cmove ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AB3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), eax */ /* 0x1507AB3E: cmp dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1507AB41:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) { eax = MEM32(ebp + (-0x1C)); } /* 0x1507AB41: cmove eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507AB45: mov dword ptr [ebp - 0x1c], eax */
    goto L_1507AB76; /* 0x1507AB48: jmp 0x1507ab76 */
L_1507AB4A:
    /* test edx, edx */ /* 0x1507AB4A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x1507AB4C: cmove edx, ecx */
    eax = ebx; /* 0x1507AB4F: mov eax, ebx */
    _flag_a = (uint32_t)((eax | 0x4000u)); _flag_b = (uint32_t)((eax | 0x4000u));
    eax = eax | 0x4000u; /* 0x1507AB51: or eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1507AB56: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x1507AB5A: cmove ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AB5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x30)), eax */ /* 0x1507AB5F: cmp dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1507AB41; /* 0x1507AB62: jmp 0x1507ab41 */
L_1507AB64:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1507AB64: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507AB6D; /* 0x1507AB66: jns 0x1507ab6d */
L_1507AB68:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507AB68: mov dword ptr [ebp - 0x1c], esi */
    goto L_1507AB76; /* 0x1507AB6B: jmp 0x1507ab76 */
L_1507AB6D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x1507AB6D: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x1507AB70: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507AB76:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1507AB76: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x1507AB79: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1507AB7C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AAD7; /* 0x1507AB7F: jne 0x1507aad7 */
L_1507AB85:
    eax = (uint32_t)MEM16(edi); /* 0x1507AB85: movzx eax, word ptr [edi] */
    ecx = eax; /* 0x1507AB88: mov ecx, eax */
    PUSH32(esp, 0x20u); /* 0x1507AB8A: push 0x20 */
    edx = POP32_VAL(esp); /* 0x1507AB8C: pop edx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1507AB8D: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AB9F; /* 0x1507AB90: jne 0x1507ab9f */
L_1507AB92:
    edi = edi + 0x2; /* 0x1507AB92: lea edi, [edi + 2] */
    eax = (uint32_t)MEM16(edi); /* 0x1507AB95: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1507AB98: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AB92; /* 0x1507AB9B: je 0x1507ab92 */
L_1507AB9D:
    ecx = eax; /* 0x1507AB9D: mov ecx, eax */
L_1507AB9F:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1507AB9F: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AA9C; /* 0x1507ABA2: jne 0x1507aa9c */
L_1507ABA8:
    RECOMP_CALL(sub_15083BCE); /* 0x1507ABA8: call 0x15083bce */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1507ABAD: mov edi, eax */
    MEM32(ebp + (-0x34)) = edi; /* 0x1507ABAF: mov dword ptr [ebp - 0x34], edi */
    /* test edi, edi */ /* 0x1507ABB2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ABC6; /* 0x1507ABB4: jne 0x1507abc6 */
L_1507ABB6:
    RECOMP_CALL(sub_15036430); /* 0x1507ABB6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1507ABBB: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1507AA0D; /* 0x1507ABC1: jmp 0x1507aa0d */
L_1507ABC6:
    MEM32(ebp + (-0x4)) = esi; /* 0x1507ABC6: mov dword ptr [ebp - 4], esi */
    MEM32(edi + 0xC) = ebx; /* 0x1507ABC9: mov dword ptr [edi + 0xc], ebx */
    eax = MEM32(ebp + 0x8); /* 0x1507ABCC: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x10) = eax; /* 0x1507ABCF: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507ABD2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507ABF3); /* 0x1507ABD9: call 0x1507abf3 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1507ABDE: mov eax, edi */
L_1507ABE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507ABE0: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507ABE3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507ABEA: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507ABEB: pop edi */
    esi = POP32_VAL(esp); /* 0x1507ABEC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507ABED: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507ABEE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507ABEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507ABF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507ABF3u);

L_1507ABF3:
    PUSH32(esp, edi); /* 0x1507ABF3: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507ABF4: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507ABF9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507ABFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AC10u);

L_1507AC10:
    edi = edi; /* 0x1507AC10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507AC12: push ebp */
    ebp = esp; /* 0x1507AC13: mov ebp, esp */
    PUSH32(esp, 0x40u); /* 0x1507AC15: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507AC17: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507AC1A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507AC90); /* 0x1507AC1D: call 0x1507ac90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507AC22: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507AC25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AC26: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AC30u);

L_1507AC30:
    edi = edi; /* 0x1507AC30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507AC32: push ebp */
    ebp = esp; /* 0x1507AC33: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1507AC35: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507AC36: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507AC39: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AC5A; /* 0x1507AC3B: jne 0x1507ac5a */
L_1507AC3D:
    RECOMP_CALL(sub_15036430); /* 0x1507AC3D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1507AC42: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1507AC44: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507AC45: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1507AC47: push ecx */
    PUSH32(esp, ecx); /* 0x1507AC48: push ecx */
    PUSH32(esp, ecx); /* 0x1507AC49: push ecx */
    PUSH32(esp, ecx); /* 0x1507AC4A: push ecx */
    PUSH32(esp, ecx); /* 0x1507AC4B: push ecx */
    MEM32(eax) = esi; /* 0x1507AC4C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507AC4E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507AC53: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1507AC56: mov eax, esi */
    goto L_1507AC7E; /* 0x1507AC58: jmp 0x1507ac7e */
L_1507AC5A:
    PUSH32(esp, 0x80u); /* 0x1507AC5A: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507AC5F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507AC62: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1507AC90); /* 0x1507AC65: call 0x1507ac90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507AC6A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x1507AC6D: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1507AC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AC77; /* 0x1507AC71: je 0x1507ac77 */
L_1507AC73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AC73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507AC7E; /* 0x1507AC75: jmp 0x1507ac7e */
L_1507AC77:
    RECOMP_CALL(sub_15036430); /* 0x1507AC77: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1507AC7C: mov eax, dword ptr [eax] */
L_1507AC7E:
    esi = POP32_VAL(esp); /* 0x1507AC7E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1507AC7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AC80: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AC90u);

L_1507AC90:
    PUSH32(esp, 0x10u); /* 0x1507AC90: push 0x10 */
    PUSH32(esp, 0x150B11A8u); /* 0x1507AC92: push 0x150b11a8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507AC97: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507AC9C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507AC9E: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x1507ACA1: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1507ACA4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ACBA; /* 0x1507ACA6: jne 0x1507acba */
L_1507ACA8:
    RECOMP_CALL(sub_15036430); /* 0x1507ACA8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507ACAD: mov dword ptr [eax], 0x16 */
L_1507ACB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507ACB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507AD46; /* 0x1507ACB5: jmp 0x1507ad46 */
L_1507ACBA:
    ebx = MEM32(ebp + 0xC); /* 0x1507ACBA: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1507ACBD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ACDB; /* 0x1507ACBF: jne 0x1507acdb */
L_1507ACC1:
    RECOMP_CALL(sub_15036430); /* 0x1507ACC1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507ACC6: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507ACCC: push esi */
    PUSH32(esp, esi); /* 0x1507ACCD: push esi */
    PUSH32(esp, esi); /* 0x1507ACCE: push esi */
    PUSH32(esp, esi); /* 0x1507ACCF: push esi */
    PUSH32(esp, esi); /* 0x1507ACD0: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507ACD1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507ACD6: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1507ACB3; /* 0x1507ACD9: jmp 0x1507acb3 */
L_1507ACDB:
    /* cmp MEM16(ebx), LO16(esi) */ /* 0x1507ACDB: cmp word ptr [ebx], si */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507ACC1; /* 0x1507ACDE: je 0x1507acc1 */
L_1507ACE0:
    RECOMP_CALL(sub_15083BCE); /* 0x1507ACE0: call 0x15083bce */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507ACE5: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1507ACE7: mov dword ptr [ebp - 0x20], esi */
    /* test esi, esi */ /* 0x1507ACEA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ACFB; /* 0x1507ACEC: jne 0x1507acfb */
L_1507ACEE:
    RECOMP_CALL(sub_15036430); /* 0x1507ACEE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1507ACF3: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1507ACB3; /* 0x1507ACF9: jmp 0x1507acb3 */
L_1507ACFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507ACFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1507ACFD: mov dword ptr [ebp - 4], eax */
    /* cmp MEM16(edi), LO16(eax) */ /* 0x1507AD00: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AD25; /* 0x1507AD03: jne 0x1507ad25 */
L_1507AD05:
    RECOMP_CALL(sub_15036430); /* 0x1507AD05: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507AD0A: mov dword ptr [eax], 0x16 */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1507AD10: push -2 */
    eax = ebp + (-0x10); /* 0x1507AD12: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1507AD15: push eax */
    PUSH32(esp, 0x150BD340u); /* 0x1507AD16: push 0x150bd340 */
    RECOMP_CALL(sub_1505A334); /* 0x1507AD1B: call 0x1505a334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507AD20: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1507ACB3; /* 0x1507AD23: jmp 0x1507acb3 */
L_1507AD25:
    PUSH32(esp, esi); /* 0x1507AD25: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507AD26: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1507AD29: push ebx */
    PUSH32(esp, edi); /* 0x1507AD2A: push edi */
    RECOMP_CALL(sub_1508AF12); /* 0x1507AD2B: call 0x1508af12 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507AD30: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1507AD33: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507AD35: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507AD38: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507AD5C); /* 0x1507AD3F: call 0x1507ad5c */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1507AD44: mov eax, edi */
L_1507AD46:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507AD46: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507AD49: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507AD50: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507AD51: pop edi */
    esi = POP32_VAL(esp); /* 0x1507AD52: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507AD53: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507AD54: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AD55: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AD5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AD5Cu);

L_1507AD5C:
    PUSH32(esp, esi); /* 0x1507AD5C: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507AD5D: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507AD62: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AD63: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AD70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AD70u);

L_1507AD70:
    edi = edi; /* 0x1507AD70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507AD72: push ebp */
    ebp = esp; /* 0x1507AD73: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507AD75: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507AD76: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1507AD7A: lea eax, [ebp - 4] */
    PUSH32(esp, 0x40u); /* 0x1507AD7D: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507AD7F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507AD82: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507AD85: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1507AD88: push eax */
    RECOMP_CALL(sub_1507AD9C); /* 0x1507AD89: call 0x1507ad9c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1507AD8E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507AD91: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507AD94: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AD95: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AD9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AD9Cu);

L_1507AD9C:
    PUSH32(esp, 0xCu); /* 0x1507AD9C: push 0xc */
    PUSH32(esp, 0x150B11C8u); /* 0x1507AD9E: push 0x150b11c8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507ADA3: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1507ADA8: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1507ADAB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ADCF; /* 0x1507ADAD: jne 0x1507adcf */
L_1507ADAF:
    RECOMP_CALL(sub_15036430); /* 0x1507ADAF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507ADB4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507ADB6:
    PUSH32(esp, 0x16u); /* 0x1507ADB6: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1507ADB8: pop edi */
    MEM32(eax) = edi; /* 0x1507ADB9: mov dword ptr [eax], edi */
    PUSH32(esp, esi); /* 0x1507ADBB: push esi */
    PUSH32(esp, esi); /* 0x1507ADBC: push esi */
    PUSH32(esp, esi); /* 0x1507ADBD: push esi */
    PUSH32(esp, esi); /* 0x1507ADBE: push esi */
    PUSH32(esp, esi); /* 0x1507ADBF: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507ADC0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507ADC5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507ADC8:
    eax = edi; /* 0x1507ADC8: mov eax, edi */
    goto L_1507AE62; /* 0x1507ADCA: jmp 0x1507ae62 */
L_1507ADCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507ADCF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x1507ADD1: mov dword ptr [ebx], esi */
    eax = MEM32(ebp + 0xC); /* 0x1507ADD3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1507ADD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507ADE1; /* 0x1507ADD8: jne 0x1507ade1 */
L_1507ADDA:
    RECOMP_CALL(sub_15036430); /* 0x1507ADDA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1507ADB6; /* 0x1507ADDF: jmp 0x1507adb6 */
L_1507ADE1:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1507ADE1: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507ADDA; /* 0x1507ADE4: je 0x1507adda */
L_1507ADE6:
    edi = MEM32(ebp + 0x14); /* 0x1507ADE6: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1507ADE9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507ADDA; /* 0x1507ADEB: je 0x1507adda */
L_1507ADED:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1507ADED: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507ADFE; /* 0x1507ADF0: jne 0x1507adfe */
L_1507ADF2:
    RECOMP_CALL(sub_15036430); /* 0x1507ADF2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1507ADF7: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1507ADF9: pop edi */
    MEM32(eax) = edi; /* 0x1507ADFA: mov dword ptr [eax], edi */
    RECOMP_BACKEDGE();
    goto L_1507ADC8; /* 0x1507ADFC: jmp 0x1507adc8 */
L_1507ADFE:
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507ADFE: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, edi); /* 0x1507AE01: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x1507AE02: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507AE07: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507AE08: mov dword ptr [ebp - 4], esi */
    /* test MEM8(edi + 0xC), 0x83u */ /* 0x1507AE0B: test byte ptr [edi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AE18; /* 0x1507AE0F: je 0x1507ae18 */
L_1507AE11:
    PUSH32(esp, edi); /* 0x1507AE11: push edi */
    RECOMP_CALL(sub_1507BD93); /* 0x1507AE12: call 0x1507bd93 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507AE17: pop ecx */
L_1507AE18:
    MEM32(edi + 0x8) = esi; /* 0x1507AE18: mov dword ptr [edi + 8], esi */
    MEM32(edi) = esi; /* 0x1507AE1B: mov dword ptr [edi], esi */
    MEM32(edi + 0xC) = esi; /* 0x1507AE1D: mov dword ptr [edi + 0xc], esi */
    MEM32(edi + 0x4) = esi; /* 0x1507AE20: mov dword ptr [edi + 4], esi */
    PUSH32(esp, edi); /* 0x1507AE23: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507AE24: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507AE27: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507AE2A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508AF12); /* 0x1507AE2D: call 0x1508af12 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507AE32: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x1507AE35: mov dword ptr [ebx], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507AE37: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507AE53); /* 0x1507AE3E: call 0x1507ae53 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), esi */ /* 0x1507AE43: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AE5B; /* 0x1507AE45: je 0x1507ae5b */
L_1507AE47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AE47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507AE62; /* 0x1507AE49: jmp 0x1507ae62 */
L_1507AE5B:
    RECOMP_CALL(sub_15036430); /* 0x1507AE5B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1507AE60: mov eax, dword ptr [eax] */
L_1507AE62:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507AE62: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507AE65: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507AE6C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507AE6D: pop edi */
    esi = POP32_VAL(esp); /* 0x1507AE6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507AE6F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507AE70: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AE71: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AE53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AE53u);

L_1507AE53:
    PUSH32(esp, edi); /* 0x1507AE53: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507AE54: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507AE59: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AE5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AE80u);

L_1507AE80:
    edi = edi; /* 0x1507AE80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507AE82: push ebp */
    ebp = esp; /* 0x1507AE83: mov ebp, esp */
    PUSH32(esp, 0x80u); /* 0x1507AE85: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507AE8A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507AE8D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507AE90: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507AE93: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507AD9C); /* 0x1507AE96: call 0x1507ad9c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507AE9B: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507AE9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507AE9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507AEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507AEB0u);

L_1507AEB0:
    PUSH32(esp, 0xB0u); /* 0x1507AEB0: push 0xb0 */
    PUSH32(esp, 0x150B11E8u); /* 0x1507AEB5: push 0x150b11e8 */
    RECOMP_CALL(sub_1505E9E8); /* 0x1507AEBA: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1507AEBF: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1507AEC2: mov dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507AEC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = edi; /* 0x1507AEC7: mov dword ptr [ebp - 0x68], edi */
    MEM32(ebp + (-0x38)) = edi; /* 0x1507AECA: mov dword ptr [ebp - 0x38], edi */
    ebx = edi; /* 0x1507AECD: mov ebx, edi */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1507AECF: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x30)) = edi; /* 0x1507AED2: mov dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507AED5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(ecx)); /* 0x1507AED7: mov word ptr [ebp - 0x20], cx */
    MEM32(ebp + (-0x58)) = ecx; /* 0x1507AEDB: mov dword ptr [ebp - 0x58], ecx */
    /* test eax, eax */ /* 0x1507AEDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507AF01; /* 0x1507AEE0: jne 0x1507af01 */
L_1507AEE2:
    RECOMP_CALL(sub_15036430); /* 0x1507AEE2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507AEE7: mov dword ptr [eax], 0x16 */
    PUSH32(esp, edi); /* 0x1507AEED: push edi */
    PUSH32(esp, edi); /* 0x1507AEEE: push edi */
    PUSH32(esp, edi); /* 0x1507AEEF: push edi */
    PUSH32(esp, edi); /* 0x1507AEF0: push edi */
    PUSH32(esp, edi); /* 0x1507AEF1: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1507AEF2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507AEF7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507AEFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AEFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507B46A; /* 0x1507AEFC: jmp 0x1507b46a */
L_1507AF01:
    ecx = MEM32(ebp + 0xC); /* 0x1507AF01: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1507AF04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AEE2; /* 0x1507AF06: je 0x1507aee2 */
L_1507AF08:
    eax = (uint32_t)MEM16(ecx); /* 0x1507AF08: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x1507AF0B: mov edx, eax */
    PUSH32(esp, 0x20u); /* 0x1507AF0D: push 0x20 */
    esi = POP32_VAL(esp); /* 0x1507AF0F: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507AF10: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AF22; /* 0x1507AF13: jne 0x1507af22 */
L_1507AF15:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507AF15: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx); /* 0x1507AF18: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507AF1B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF15; /* 0x1507AF1E: je 0x1507af15 */
L_1507AF20:
    edx = eax; /* 0x1507AF20: mov edx, eax */
L_1507AF22:
    PUSH32(esp, 0x77u); /* 0x1507AF22: push 0x77 */
    eax = POP32_VAL(esp); /* 0x1507AF24: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1507AF25: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF34; /* 0x1507AF28: je 0x1507af34 */
L_1507AF2A:
    /* cmp LO16(edx), 0x72u */ /* 0x1507AF2A: cmp dx, 0x72 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x72u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF34; /* 0x1507AF2E: je 0x1507af34 */
L_1507AF30:
    eax = edi; /* 0x1507AF30: mov eax, edi */
    goto L_1507AF37; /* 0x1507AF32: jmp 0x1507af37 */
L_1507AF34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507AF34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507AF36: inc eax */
    _flag_k = FK_INC;
L_1507AF37:
    /* test eax, eax */ /* 0x1507AF37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AEE2; /* 0x1507AF39: je 0x1507aee2 */
L_1507AF3B:
    MEM16(ebp + (-0x24)) = (uint16_t)(LO16(edx)); /* 0x1507AF3B: mov word ptr [ebp - 0x24], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507AF3F: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx); /* 0x1507AF42: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x1507AF45: mov edx, eax */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507AF47: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AF59; /* 0x1507AF4A: jne 0x1507af59 */
L_1507AF4C:
    ecx = ecx + 0x2; /* 0x1507AF4C: lea ecx, [ecx + 2] */
    eax = (uint32_t)MEM16(ecx); /* 0x1507AF4F: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507AF52: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF4C; /* 0x1507AF55: je 0x1507af4c */
L_1507AF57:
    edx = eax; /* 0x1507AF57: mov edx, eax */
L_1507AF59:
    PUSH32(esp, 0x74u); /* 0x1507AF59: push 0x74 */
    eax = POP32_VAL(esp); /* 0x1507AF5B: pop eax */
    PUSH32(esp, 0x62u); /* 0x1507AF5C: push 0x62 */
    ecx = POP32_VAL(esp); /* 0x1507AF5E: pop ecx */
    /* test LO16(edx), LO16(edx) */ /* 0x1507AF5F: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AF72; /* 0x1507AF62: je 0x1507af72 */
L_1507AF64:
    /* cmp LO16(edx), LO16(eax) */ /* 0x1507AF64: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF72; /* 0x1507AF67: je 0x1507af72 */
L_1507AF69:
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1507AF69: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507AF72; /* 0x1507AF6C: je 0x1507af72 */
L_1507AF6E:
    esi = edi; /* 0x1507AF6E: mov esi, edi */
    goto L_1507AF75; /* 0x1507AF70: jmp 0x1507af75 */
L_1507AF72:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507AF72: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1507AF74: inc esi */
    _flag_k = FK_INC;
L_1507AF75:
    /* test esi, esi */ /* 0x1507AF75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507AEE2; /* 0x1507AF77: je 0x1507aee2 */
L_1507AF7D:
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(edx)); /* 0x1507AF7D: mov word ptr [ebp - 0x22], dx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1507AF81: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AF8D; /* 0x1507AF84: jne 0x1507af8d */
L_1507AF86:
    eax = 0x4000u; /* 0x1507AF86: mov eax, 0x4000 */
    goto L_1507AF9A; /* 0x1507AF8B: jmp 0x1507af9a */
L_1507AF8D:
    eax = edi; /* 0x1507AF8D: mov eax, edi */
    esi = 0x8000u; /* 0x1507AF8F: mov esi, 0x8000 */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1507AF94: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = esi; } /* 0x1507AF97: cmove eax, esi */
L_1507AF9A:
    _flag_a = (uint32_t)((eax | 0x80u)); _flag_b = (uint32_t)((eax | 0x80u));
    eax = eax | 0x80u; /* 0x1507AF9A: or eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507AF9F: push eax */
    PUSH32(esp, 0x400u); /* 0x1507AFA0: push 0x400 */
    eax = ebp + (-0x54); /* 0x1507AFA5: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1507AFA8: push eax */
    RECOMP_CALL(sub_1504D410); /* 0x1507AFA9: call 0x1504d410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507AFAE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507AFB1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B468; /* 0x1507AFB4: je 0x1507b468 */
L_1507AFBA:
    PUSH32(esp, 0x77u); /* 0x1507AFBA: push 0x77 */
    eax = POP32_VAL(esp); /* 0x1507AFBC: pop eax */
    /* cmp MEM16(ebp + (-0x24)), LO16(eax) */ /* 0x1507AFBD: cmp word ptr [ebp - 0x24], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507AFDD; /* 0x1507AFC1: jne 0x1507afdd */
L_1507AFC3:
    esi = ebp + (-0x54); /* 0x1507AFC3: lea esi, [ebp - 0x54] */
    MEM32(ebp + (-0x40)) = esi; /* 0x1507AFC6: mov dword ptr [ebp - 0x40], esi */
    eax = ebp + (-0x64); /* 0x1507AFC9: lea eax, [ebp - 0x64] */
    MEM32(ebp + (-0x48)) = eax; /* 0x1507AFCC: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x50); /* 0x1507AFCF: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1507AFD2: mov dword ptr [ebp - 0x4c], eax */
    esi = ebp + (-0x60); /* 0x1507AFD5: lea esi, [ebp - 0x60] */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1507AFD8: mov dword ptr [ebp - 0x3c], esi */
    goto L_1507AFF8; /* 0x1507AFDB: jmp 0x1507aff8 */
L_1507AFDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507AFDD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1507AFDF: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x50); /* 0x1507AFE0: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1507AFE3: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x60); /* 0x1507AFE6: lea eax, [ebp - 0x60] */
    MEM32(ebp + (-0x48)) = eax; /* 0x1507AFE9: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x54); /* 0x1507AFEC: lea eax, [ebp - 0x54] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1507AFEF: mov dword ptr [ebp - 0x4c], eax */
    eax = ebp + (-0x64); /* 0x1507AFF2: lea eax, [ebp - 0x64] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1507AFF5: mov dword ptr [ebp - 0x3c], eax */
L_1507AFF8:
    PUSH32(esp, 9); /* 0x1507AFF8: push 9 */
    RECOMP_CALL(sub_15068E1A); /* 0x1507AFFA: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507AFFF: pop ecx */
    /* test eax, eax */ /* 0x1507B000: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B01B; /* 0x1507B002: jne 0x1507b01b */
L_1507B004:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1507B004: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_15049D70); /* 0x1507B007: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1507B00C: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_15049D70); /* 0x1507B00F: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B014: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B015: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1507AEFA; /* 0x1507B016: jmp 0x1507aefa */
L_1507B01B:
    PUSH32(esp, 9); /* 0x1507B01B: push 9 */
    RECOMP_CALL(sub_15068D80); /* 0x1507B01D: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B022: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B023: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1507B025: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507B028: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1507B02A: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x60)) = esi; /* 0x1507B02B: mov dword ptr [ebp - 0x60], esi */
    MEM32(ebp + (-0x64)) = esi; /* 0x1507B02E: mov dword ptr [ebp - 0x64], esi */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x1507B031: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1507B037: mov edx, eax */
    ecx = MEM32(ebp + (-0x40)); /* 0x1507B039: mov ecx, dword ptr [ebp - 0x40] */
    ecx = MEM32(ecx); /* 0x1507B03C: mov ecx, dword ptr [ecx] */
    PUSH32(esp, 2); /* 0x1507B03E: push 2 */
    PUSH32(esp, esi); /* 0x1507B040: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B041: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B043: push eax */
    eax = ebp + (-0x38); /* 0x1507B044: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1507B047: push eax */
    PUSH32(esp, edx); /* 0x1507B048: push edx */
    eax = ecx; /* 0x1507B049: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1507B04B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1507B04E: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1507B051: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1507B054: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1507B05B: push dword ptr [eax + ecx] */
    PUSH32(esp, edx); /* 0x1507B05E: push edx */
    RECOMP_ICALL(MEM32(0x150C0120)); /* 0x1507B05F: call dword ptr [0x150c0120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1507B065: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B436; /* 0x1507B067: je 0x1507b436 */
L_1507B06D:
    eax = MEM32(ebp + (-0x40)); /* 0x1507B06D: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax)); /* 0x1507B070: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x1507B072: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1507B077: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507B07A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1507B07C: mov dword ptr [eax], ebx */
    eax = ebp + (-0x24); /* 0x1507B07E: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1507B081: push eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1507B082: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(eax)); /* 0x1507B085: push dword ptr [eax] */
    RECOMP_CALL(sub_1507A9E0); /* 0x1507B087: call 0x1507a9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B08C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x1507B08F: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x1507B092: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B433; /* 0x1507B094: je 0x1507b433 */
L_1507B09A:
    PUSH32(esp, ebx); /* 0x1507B09A: push ebx */
    RECOMP_CALL(sub_150782EB); /* 0x1507B09B: call 0x150782eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B0A0: pop ecx */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1507B0A1: mov dword ptr [ebp - 0x5c], eax */
    /* test eax, eax */ /* 0x1507B0A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B41B; /* 0x1507B0A6: je 0x1507b41b */
L_1507B0AC:
    PUSH32(esp, 0x15004918u); /* 0x1507B0AC: push 0x15004918 */
    PUSH32(esp, ebx); /* 0x1507B0B1: push ebx */
    eax = ebp + (-0x30); /* 0x1507B0B2: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1507B0B5: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x1507B0B6: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B0BB: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1507B0BE: mov esi, eax */
    /* test esi, esi */ /* 0x1507B0C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B0DA; /* 0x1507B0C2: je 0x1507b0da */
L_1507B0C4:
    /* cmp esi, 0x16u */ /* 0x1507B0C4: cmp esi, 0x16 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B0D6; /* 0x1507B0C7: jne 0x1507b0d6 */
L_1507B0C9:
    PUSH32(esp, ebx); /* 0x1507B0C9: push ebx */
    PUSH32(esp, ebx); /* 0x1507B0CA: push ebx */
    PUSH32(esp, ebx); /* 0x1507B0CB: push ebx */
    PUSH32(esp, ebx); /* 0x1507B0CC: push ebx */
    PUSH32(esp, ebx); /* 0x1507B0CD: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B0CE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B0D3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B0D6:
    /* test esi, esi */ /* 0x1507B0D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B0E4; /* 0x1507B0D8: jne 0x1507b0e4 */
L_1507B0DA:
    ebx = MEM32(ebp + (-0x30)); /* 0x1507B0DA: mov ebx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1507B0DD: mov dword ptr [ebp - 0x2c], ebx */
    /* test ebx, ebx */ /* 0x1507B0E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B0EC; /* 0x1507B0E2: jne 0x1507b0ec */
L_1507B0E4:
    ebx = 0x15004930u; /* 0x1507B0E4: mov ebx, 0x15004930 */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1507B0E9: mov dword ptr [ebp - 0x2c], ebx */
L_1507B0EC:
    PUSH32(esp, 0x44u); /* 0x1507B0EC: push 0x44 */
    esi = POP32_VAL(esp); /* 0x1507B0EE: pop esi */
    PUSH32(esp, esi); /* 0x1507B0EF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B0F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B0F2: push eax */
    eax = ebp + (-0xC0); /* 0x1507B0F3: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x1507B0F9: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1507B0FA: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B0FF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC0)) = esi; /* 0x1507B102: mov dword ptr [ebp - 0xc0], esi */
    MEM32(ebp + (-0x94)) = 0x100u; /* 0x1507B108: mov dword ptr [ebp - 0x94], 0x100 */
    eax = MEM32(ebp + (-0x38)); /* 0x1507B112: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(0x150BEBC0); /* 0x1507B115: mov ecx, dword ptr [0x150bebc0] */
    /* test edi, edi */ /* 0x1507B11B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x1507B11D: mov edx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B123; /* 0x1507B11F: je 0x1507b123 */
L_1507B121:
    edx = MEM32(ecx); /* 0x1507B121: mov edx, dword ptr [ecx] */
L_1507B123:
    MEM32(ebp + (-0x88)) = edx; /* 0x1507B123: mov dword ptr [ebp - 0x88], edx */
    /* cmp edi, 1 */ /* 0x1507B129: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B131; /* 0x1507B12C: je 0x1507b131 */
L_1507B12E:
    eax = MEM32(ecx + 0x24); /* 0x1507B12E: mov eax, dword ptr [ecx + 0x24] */
L_1507B131:
    MEM32(ebp + (-0x84)) = eax; /* 0x1507B131: mov dword ptr [ebp - 0x84], eax */
    eax = MEM32(ecx + 0x48); /* 0x1507B137: mov eax, dword ptr [ecx + 0x48] */
    MEM32(ebp + (-0x80)) = eax; /* 0x1507B13A: mov dword ptr [ebp - 0x80], eax */
    ecx = ebx; /* 0x1507B13D: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x1507B13F: lea edx, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507B142: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507B144:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B144: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B147: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1507B14A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B144; /* 0x1507B14D: jne 0x1507b144 */
L_1507B14F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507B14F: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B151: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    edi = MEM32(ebp + (-0x44)); /* 0x1507B153: mov edi, dword ptr [ebp - 0x44] */
    edx = edi; /* 0x1507B156: mov edx, edi */
    esi = edx + 0x2; /* 0x1507B158: lea esi, [edx + 2] */
L_1507B15B:
    SET_LO16(eax, MEM16(edx)); /* 0x1507B15B: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1507B15E: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1507B161: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B15B; /* 0x1507B164: jne 0x1507b15b */
L_1507B166:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1507B166: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1507B168: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    esi = edx + 0x5; /* 0x1507B16A: lea esi, [edx + 5] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1507B16D: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1507B16F: push 2 */
    PUSH32(esp, esi); /* 0x1507B171: push esi */
    RECOMP_CALL(sub_15048EE2); /* 0x1507B172: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B177: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B178: pop ecx */
    ebx = eax; /* 0x1507B179: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1507B17B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B41B; /* 0x1507B17D: je 0x1507b41b */
L_1507B183:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1507B183: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1507B186: push esi */
    PUSH32(esp, ebx); /* 0x1507B187: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x1507B188: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B18D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B190: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B1A3; /* 0x1507B192: je 0x1507b1a3 */
L_1507B194:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B194: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B196: push eax */
    PUSH32(esp, eax); /* 0x1507B197: push eax */
    PUSH32(esp, eax); /* 0x1507B198: push eax */
    PUSH32(esp, eax); /* 0x1507B199: push eax */
    PUSH32(esp, eax); /* 0x1507B19A: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B19B: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B1A0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B1A3:
    PUSH32(esp, 0x15007014u); /* 0x1507B1A3: push 0x15007014 */
    PUSH32(esp, esi); /* 0x1507B1A8: push esi */
    PUSH32(esp, ebx); /* 0x1507B1A9: push ebx */
    RECOMP_CALL(sub_1508F120); /* 0x1507B1AA: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B1AF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B1B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B1C5; /* 0x1507B1B4: je 0x1507b1c5 */
L_1507B1B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B1B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B1B8: push eax */
    PUSH32(esp, eax); /* 0x1507B1B9: push eax */
    PUSH32(esp, eax); /* 0x1507B1BA: push eax */
    PUSH32(esp, eax); /* 0x1507B1BB: push eax */
    PUSH32(esp, eax); /* 0x1507B1BC: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B1BD: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B1C2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B1C5:
    PUSH32(esp, edi); /* 0x1507B1C5: push edi */
    PUSH32(esp, esi); /* 0x1507B1C6: push esi */
    PUSH32(esp, ebx); /* 0x1507B1C7: push ebx */
    RECOMP_CALL(sub_1508F120); /* 0x1507B1C8: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B1CD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B1D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B1E3; /* 0x1507B1D2: je 0x1507b1e3 */
L_1507B1D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B1D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B1D6: push eax */
    PUSH32(esp, eax); /* 0x1507B1D7: push eax */
    PUSH32(esp, eax); /* 0x1507B1D8: push eax */
    PUSH32(esp, eax); /* 0x1507B1D9: push eax */
    PUSH32(esp, eax); /* 0x1507B1DA: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B1DB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B1E0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B1E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B1E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x7C); /* 0x1507B1E5: lea edi, [ebp - 0x7c] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1507B1E8: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1507B1E9: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1507B1EA: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1507B1EB: stosd dword ptr es:[edi], eax */
    RECOMP_CALL(sub_15036430); /* 0x1507B1EC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1507B1F1: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x44)) = edi; /* 0x1507B1F3: mov dword ptr [ebp - 0x44], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B1F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B1F8: push eax */
    esi = MEM32(ebp + (-0x2C)); /* 0x1507B1F9: mov esi, dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1507B1FC: push esi */
    RECOMP_CALL(sub_15037B60); /* 0x1507B1FD: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B202: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B203: pop ecx */
    /* test eax, eax */ /* 0x1507B204: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B22B; /* 0x1507B206: jne 0x1507b22b */
L_1507B208:
    eax = ebp + (-0x7C); /* 0x1507B208: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1507B20B: push eax */
    eax = ebp + (-0xC0); /* 0x1507B20C: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x1507B212: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B213: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B215: push eax */
    PUSH32(esp, eax); /* 0x1507B216: push eax */
    PUSH32(esp, eax); /* 0x1507B217: push eax */
    PUSH32(esp, 1); /* 0x1507B218: push 1 */
    PUSH32(esp, eax); /* 0x1507B21A: push eax */
    PUSH32(esp, eax); /* 0x1507B21B: push eax */
    PUSH32(esp, ebx); /* 0x1507B21C: push ebx */
    PUSH32(esp, esi); /* 0x1507B21D: push esi */
    RECOMP_ICALL(MEM32(0x150C0208)); /* 0x1507B21E: call dword ptr [0x150c0208] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507B224: mov esi, eax */
    goto L_1507B3CE; /* 0x1507B226: jmp 0x1507b3ce */
L_1507B22B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B22B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x1507B22D: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, 2); /* 0x1507B230: push 2 */
    PUSH32(esp, 0x104u); /* 0x1507B232: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x1507B237: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B23C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B23D: pop ecx */
    esi = eax; /* 0x1507B23E: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B240: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1507B242: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B269; /* 0x1507B244: jne 0x1507b269 */
L_1507B246:
    PUSH32(esp, eax); /* 0x1507B246: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1507B247: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1507B24C: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1507B24D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1507B252: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_15048840); /* 0x1507B255: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B25A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1507B25D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1507B262: mov dword ptr [eax], edi */
    goto L_1507B41B; /* 0x1507B264: jmp 0x1507b41b */
L_1507B269:
    PUSH32(esp, 0x15004908u); /* 0x1507B269: push 0x15004908 */
    PUSH32(esp, eax); /* 0x1507B26E: push eax */
    eax = ebp + (-0x34); /* 0x1507B26F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1507B272: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x1507B273: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B278: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1507B27B: mov edi, eax */
    /* test edi, edi */ /* 0x1507B27D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B2C7; /* 0x1507B27F: je 0x1507b2c7 */
L_1507B281:
    /* cmp edi, 0x16u */ /* 0x1507B281: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B295; /* 0x1507B284: jne 0x1507b295 */
L_1507B286:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B286: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507B288: push eax */
    PUSH32(esp, eax); /* 0x1507B289: push eax */
    PUSH32(esp, eax); /* 0x1507B28A: push eax */
    PUSH32(esp, eax); /* 0x1507B28B: push eax */
    PUSH32(esp, eax); /* 0x1507B28C: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B28D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B292: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B295:
    /* test edi, edi */ /* 0x1507B295: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B2C7; /* 0x1507B297: je 0x1507b2c7 */
L_1507B299:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1507B299: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_15048840); /* 0x1507B29C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1507B2A1: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1507B2A2: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1507B2A7: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1507B2A8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1507B2AD: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_15048840); /* 0x1507B2B0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507B2B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1507B2B8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x44)); /* 0x1507B2BD: mov ecx, dword ptr [ebp - 0x44] */
    MEM32(eax) = ecx; /* 0x1507B2C0: mov dword ptr [eax], ecx */
    goto L_1507B41B; /* 0x1507B2C2: jmp 0x1507b41b */
L_1507B2C7:
    eax = MEM32(ebp + (-0x34)); /* 0x1507B2C7: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507B2CA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507B2CC:
    PUSH32(esp, 0x103u); /* 0x1507B2CC: push 0x103 */
    PUSH32(esp, esi); /* 0x1507B2D1: push esi */
    PUSH32(esp, eax); /* 0x1507B2D2: push eax */
    RECOMP_CALL(sub_1505EC22); /* 0x1507B2D3: call 0x1505ec22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B2D8: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x6C)) = eax; /* 0x1507B2DB: mov dword ptr [ebp - 0x6c], eax */
    /* test eax, eax */ /* 0x1507B2DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B3B8; /* 0x1507B2E0: je 0x1507b3b8 */
L_1507B2E6:
    /* cmp MEM16(esi), LO16(edi) */ /* 0x1507B2E6: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B3B8; /* 0x1507B2E9: je 0x1507b3b8 */
L_1507B2EF:
    ecx = esi; /* 0x1507B2EF: mov ecx, esi */
    edx = ecx + 0x2; /* 0x1507B2F1: lea edx, [ecx + 2] */
L_1507B2F4:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B2F4: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B2F7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1507B2FA: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B2F4; /* 0x1507B2FD: jne 0x1507b2f4 */
L_1507B2FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507B2FF: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B301: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)MEM16(esi + ecx * 2 + (-0x2)); /* 0x1507B303: movzx eax, word ptr [esi + ecx*2 - 2] */
    /* cmp eax, 0x5Cu */ /* 0x1507B308: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B336; /* 0x1507B30B: je 0x1507b336 */
L_1507B30D:
    /* cmp eax, 0x2Fu */ /* 0x1507B30D: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B336; /* 0x1507B310: je 0x1507b336 */
L_1507B312:
    PUSH32(esp, 0x15004914u); /* 0x1507B312: push 0x15004914 */
    PUSH32(esp, 0x104u); /* 0x1507B317: push 0x104 */
    PUSH32(esp, esi); /* 0x1507B31C: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x1507B31D: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B322: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B325: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B336; /* 0x1507B327: je 0x1507b336 */
L_1507B329:
    PUSH32(esp, edi); /* 0x1507B329: push edi */
    PUSH32(esp, edi); /* 0x1507B32A: push edi */
    PUSH32(esp, edi); /* 0x1507B32B: push edi */
    PUSH32(esp, edi); /* 0x1507B32C: push edi */
    PUSH32(esp, edi); /* 0x1507B32D: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B32E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B333: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B336:
    edx = esi; /* 0x1507B336: mov edx, esi */
    ecx = edx + 0x2; /* 0x1507B338: lea ecx, [edx + 2] */
L_1507B33B:
    SET_LO16(eax, MEM16(edx)); /* 0x1507B33B: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1507B33E: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1507B341: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B33B; /* 0x1507B344: jne 0x1507b33b */
L_1507B346:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1507B346: sub edx, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1507B348: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    ecx = MEM32(ebp + (-0x2C)); /* 0x1507B34A: mov ecx, dword ptr [ebp - 0x2c] */
    edi = ecx + 0x2; /* 0x1507B34D: lea edi, [ecx + 2] */
L_1507B350:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B350: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B353: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x68)) */ /* 0x1507B356: cmp ax, word ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x68))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B350; /* 0x1507B35A: jne 0x1507b350 */
L_1507B35C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1507B35C: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B35E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + edx; /* 0x1507B360: lea eax, [ecx + edx] */
    ecx = 0x104u; /* 0x1507B363: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x1507B368: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1507B3B8; /* 0x1507B36A: jae 0x1507b3b8 */
L_1507B36C:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1507B36C: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1507B36F: push ecx */
    PUSH32(esp, esi); /* 0x1507B370: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x1507B371: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B376: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507B379: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1507B37B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B38C; /* 0x1507B37D: je 0x1507b38c */
L_1507B37F:
    PUSH32(esp, edi); /* 0x1507B37F: push edi */
    PUSH32(esp, edi); /* 0x1507B380: push edi */
    PUSH32(esp, edi); /* 0x1507B381: push edi */
    PUSH32(esp, edi); /* 0x1507B382: push edi */
    PUSH32(esp, edi); /* 0x1507B383: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B384: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B389: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B38C:
    PUSH32(esp, edi); /* 0x1507B38C: push edi */
    PUSH32(esp, esi); /* 0x1507B38D: push esi */
    RECOMP_CALL(sub_15037B60); /* 0x1507B38E: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B393: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B394: pop ecx */
    /* test eax, eax */ /* 0x1507B395: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B40F; /* 0x1507B397: jne 0x1507b40f */
L_1507B399:
    eax = ebp + (-0x7C); /* 0x1507B399: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1507B39C: push eax */
    eax = ebp + (-0xC0); /* 0x1507B39D: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x1507B3A3: push eax */
    PUSH32(esp, edi); /* 0x1507B3A4: push edi */
    PUSH32(esp, edi); /* 0x1507B3A5: push edi */
    PUSH32(esp, edi); /* 0x1507B3A6: push edi */
    PUSH32(esp, 1); /* 0x1507B3A7: push 1 */
    PUSH32(esp, edi); /* 0x1507B3A9: push edi */
    PUSH32(esp, edi); /* 0x1507B3AA: push edi */
    PUSH32(esp, ebx); /* 0x1507B3AB: push ebx */
    PUSH32(esp, esi); /* 0x1507B3AC: push esi */
    RECOMP_ICALL(MEM32(0x150C0208)); /* 0x1507B3AD: call dword ptr [0x150c0208] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1507B3B3: mov ecx, eax */
    MEM32(ebp + (-0x58)) = ecx; /* 0x1507B3B5: mov dword ptr [ebp - 0x58], ecx */
L_1507B3B8:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1507B3B8: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_15048840); /* 0x1507B3BB: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1507B3C0: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1507B3C1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B3C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B3C7: pop ecx */
    edi = MEM32(ebp + (-0x44)); /* 0x1507B3C8: mov edi, dword ptr [ebp - 0x44] */
    esi = MEM32(ebp + (-0x58)); /* 0x1507B3CB: mov esi, dword ptr [ebp - 0x58] */
L_1507B3CE:
    PUSH32(esp, ebx); /* 0x1507B3CE: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1507B3CF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1507B3D4: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_15048840); /* 0x1507B3D7: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B3DC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B3DD: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1507B3DE: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1507B3E1: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1507B3E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B3F4; /* 0x1507B3E9: je 0x1507b3f4 */
L_1507B3EB:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x1507B3EB: push dword ptr [ebp - 0x78] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1507B3EE: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
L_1507B3F4:
    RECOMP_CALL(sub_15036430); /* 0x1507B3F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1507B3F9: mov dword ptr [eax], edi */
    ecx = MEM32(ebp + (-0x5C)); /* 0x1507B3FB: mov ecx, dword ptr [ebp - 0x5c] */
    /* test esi, esi */ /* 0x1507B3FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B417; /* 0x1507B400: je 0x1507b417 */
L_1507B402:
    eax = MEM32(ebp + (-0x7C)); /* 0x1507B402: mov eax, dword ptr [ebp - 0x7c] */
    MEM32(ecx + 0x4) = eax; /* 0x1507B405: mov dword ptr [ecx + 4], eax */
    ebx = MEM32(ebp + (-0x28)); /* 0x1507B408: mov ebx, dword ptr [ebp - 0x28] */
    MEM32(ecx) = ebx; /* 0x1507B40B: mov dword ptr [ecx], ebx */
    goto L_1507B45C; /* 0x1507B40D: jmp 0x1507b45c */
L_1507B40F:
    eax = MEM32(ebp + (-0x6C)); /* 0x1507B40F: mov eax, dword ptr [ebp - 0x6c] */
    RECOMP_BACKEDGE();
    goto L_1507B2CC; /* 0x1507B412: jmp 0x1507b2cc */
L_1507B417:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B417: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1507B419: mov dword ptr [ecx], eax */
L_1507B41B:
    ebx = MEM32(ebp + (-0x28)); /* 0x1507B41B: mov ebx, dword ptr [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x1507B41E: push ebx */
    RECOMP_CALL(sub_1507BE20); /* 0x1507B41F: call 0x1507be20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B424: pop ecx */
    esi = MEM32(ebp + (-0x3C)); /* 0x1507B425: mov esi, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B428: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1507B42A: mov dword ptr [esi], eax */
    ebx = eax; /* 0x1507B42C: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1507B42E: mov dword ptr [ebp - 0x28], ebx */
    goto L_1507B439; /* 0x1507B431: jmp 0x1507b439 */
L_1507B433:
    ebx = MEM32(ebp + (-0x28)); /* 0x1507B433: mov ebx, dword ptr [ebp - 0x28] */
L_1507B436:
    esi = MEM32(ebp + (-0x3C)); /* 0x1507B436: mov esi, dword ptr [ebp - 0x3c] */
L_1507B439:
    eax = MEM32(ebp + (-0x48)); /* 0x1507B439: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507B43C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edi */ /* 0x1507B43E: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B44D; /* 0x1507B440: je 0x1507b44d */
L_1507B442:
    eax = MEM32(ebp + (-0x40)); /* 0x1507B442: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax)); /* 0x1507B445: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x1507B447: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B44C: pop ecx */
L_1507B44D:
    /* cmp MEM32(esi), edi */ /* 0x1507B44D: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B45C; /* 0x1507B44F: je 0x1507b45c */
L_1507B451:
    eax = MEM32(ebp + (-0x4C)); /* 0x1507B451: mov eax, dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(eax)); /* 0x1507B454: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x1507B456: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B45B: pop ecx */
L_1507B45C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507B45C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507B47D); /* 0x1507B463: call 0x1507b47d */
    RECOMP_FLAGS_IN();
L_1507B468:
    eax = ebx; /* 0x1507B468: mov eax, ebx */
L_1507B46A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507B46A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507B46D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507B474: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507B475: pop edi */
    esi = POP32_VAL(esp); /* 0x1507B476: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507B477: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507B478: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B479: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B47D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B47Du);

L_1507B47D:
    PUSH32(esp, 9); /* 0x1507B47D: push 9 */
    RECOMP_CALL(sub_15068F50); /* 0x1507B47F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B484: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B485: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B490u);

L_1507B490:
    edi = edi; /* 0x1507B490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B492: push ebp */
    ebp = esp; /* 0x1507B493: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1507B495: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507B498: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B499: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B49C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A8C0); /* 0x1507B49F: call 0x1507a8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B4A4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B4A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B4A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B4B0u);

L_1507B4B0:
    edi = edi; /* 0x1507B4B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B4B2: push ebp */
    ebp = esp; /* 0x1507B4B3: mov ebp, esp */
    eax = ebp + 0xC; /* 0x1507B4B5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1507B4B8: push eax */
    PUSH32(esp, 0); /* 0x1507B4B9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B4BB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A920); /* 0x1507B4BE: call 0x1507a920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B4C3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B4C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B4C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B4D0u);

L_1507B4D0:
    edi = edi; /* 0x1507B4D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B4D2: push ebp */
    ebp = esp; /* 0x1507B4D3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1507B4D5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507B4D8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B4D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B4DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A920); /* 0x1507B4DF: call 0x1507a920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B4E4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B4E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B4E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B4F0u);

L_1507B4F0:
    edi = edi; /* 0x1507B4F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B4F2: push ebp */
    ebp = esp; /* 0x1507B4F3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1507B4F5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507B4F8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B4F9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B4FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A950); /* 0x1507B4FF: call 0x1507a950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B504: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B507: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B508: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B510u);

L_1507B510:
    PUSH32(esp, 0xCu); /* 0x1507B510: push 0xc */
    PUSH32(esp, 0x150B1208u); /* 0x1507B512: push 0x150b1208 */
    RECOMP_CALL(sub_1505E988); /* 0x1507B517: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1507B51C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B541; /* 0x1507B520: jne 0x1507b541 */
L_1507B522:
    RECOMP_CALL(sub_15036430); /* 0x1507B522: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507B527: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507B52D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1507B52F: push edi */
    PUSH32(esp, edi); /* 0x1507B530: push edi */
    PUSH32(esp, edi); /* 0x1507B531: push edi */
    PUSH32(esp, edi); /* 0x1507B532: push edi */
    PUSH32(esp, edi); /* 0x1507B533: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1507B534: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B539: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507B53C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507B588; /* 0x1507B53F: jmp 0x1507b588 */
L_1507B541:
    ebx = 0x150BC620u; /* 0x1507B541: mov ebx, 0x150bc620 */
    PUSH32(esp, ebx); /* 0x1507B546: push ebx */
    PUSH32(esp, 1); /* 0x1507B547: push 1 */
    RECOMP_CALL(sub_1506A98D); /* 0x1507B549: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B54E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B54F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507B550: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1507B552: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, ebx); /* 0x1507B555: push ebx */
    RECOMP_CALL(sub_15083DAF); /* 0x1507B556: call 0x15083daf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507B55B: mov esi, eax */
    eax = ebp + 0xC; /* 0x1507B55D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1507B560: push eax */
    PUSH32(esp, edi); /* 0x1507B561: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B562: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1507B565: push ebx */
    RECOMP_CALL(sub_15086A80); /* 0x1507B566: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1507B56B: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507B56D: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, ebx); /* 0x1507B570: push ebx */
    PUSH32(esp, esi); /* 0x1507B571: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x1507B572: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1507B577: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507B57A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507B5A0); /* 0x1507B581: call 0x1507b5a0 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1507B586: mov eax, edi */
L_1507B588:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507B588: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507B58B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507B592: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507B593: pop edi */
    esi = POP32_VAL(esp); /* 0x1507B594: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507B595: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507B596: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B597: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B5A0u);

L_1507B5A0:
    PUSH32(esp, ebx); /* 0x1507B5A0: push ebx */
    PUSH32(esp, 1); /* 0x1507B5A1: push 1 */
    RECOMP_CALL(sub_1506AA07); /* 0x1507B5A3: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B5A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B5A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B5AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B5C0u);

L_1507B5C0:
    edi = edi; /* 0x1507B5C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B5C2: push ebp */
    ebp = esp; /* 0x1507B5C3: mov ebp, esp */
    eax = ebp + 0xC; /* 0x1507B5C5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1507B5C8: push eax */
    PUSH32(esp, 0); /* 0x1507B5C9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B5CB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A950); /* 0x1507B5CE: call 0x1507a950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B5D3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B5D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B5D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B5E0u);

L_1507B5E0:
    edi = edi; /* 0x1507B5E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B5E2: push ebp */
    ebp = esp; /* 0x1507B5E3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1507B5E5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507B5E8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B5E9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B5EC: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15087A20u); /* 0x1507B5EF: push 0x15087a20 */
    RECOMP_CALL(sub_150787A3); /* 0x1507B5F4: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507B5F9: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B5FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B5FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B610u);

L_1507B610:
    edi = edi; /* 0x1507B610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B612: push ebp */
    ebp = esp; /* 0x1507B613: mov ebp, esp */
    eax = ebp + 0x10; /* 0x1507B615: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1507B618: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B619: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B61C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15088FA0u); /* 0x1507B61F: push 0x15088fa0 */
    RECOMP_CALL(sub_150787A3); /* 0x1507B624: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507B629: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B62C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B62D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B640u);

L_1507B640:
    edi = edi; /* 0x1507B640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B642: push ebp */
    ebp = esp; /* 0x1507B643: mov ebp, esp */
    eax = ebp + 0xC; /* 0x1507B645: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1507B648: push eax */
    PUSH32(esp, 0); /* 0x1507B649: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B64B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15087A20u); /* 0x1507B64E: push 0x15087a20 */
    RECOMP_CALL(sub_150787A3); /* 0x1507B653: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507B658: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507B65B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B65C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B670u);

L_1507B670:
    PUSH32(esp, 0x20u); /* 0x1507B670: push 0x20 */
    PUSH32(esp, 0x150B1228u); /* 0x1507B672: push 0x150b1228 */
    RECOMP_CALL(sub_1505E988); /* 0x1507B677: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507B67C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x1507B67E: mov edi, esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1507B680: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1507B683: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, 2); /* 0x1507B686: push 2 */
    RECOMP_CALL(sub_15068E1A); /* 0x1507B688: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B68D: pop ecx */
    /* test eax, eax */ /* 0x1507B68E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B8D7; /* 0x1507B690: je 0x1507b8d7 */
L_1507B696:
    PUSH32(esp, 0x15007020u); /* 0x1507B696: push 0x15007020 */
    PUSH32(esp, esi); /* 0x1507B69B: push esi */
    eax = ebp + (-0x20); /* 0x1507B69C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1507B69F: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x1507B6A0: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B6A5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1507B6A8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1507B6AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B6C4; /* 0x1507B6AC: je 0x1507b6c4 */
L_1507B6AE:
    /* cmp ebx, 0x16u */ /* 0x1507B6AE: cmp ebx, 0x16 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B6C0; /* 0x1507B6B1: jne 0x1507b6c0 */
L_1507B6B3:
    PUSH32(esp, esi); /* 0x1507B6B3: push esi */
    PUSH32(esp, esi); /* 0x1507B6B4: push esi */
    PUSH32(esp, esi); /* 0x1507B6B5: push esi */
    PUSH32(esp, esi); /* 0x1507B6B6: push esi */
    PUSH32(esp, esi); /* 0x1507B6B7: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B6B8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B6BD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B6C0:
    /* test ebx, ebx */ /* 0x1507B6C0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B6DD; /* 0x1507B6C2: jne 0x1507b6dd */
L_1507B6C4:
    /* cmp MEM32(ebp + (-0x20)), esi */ /* 0x1507B6C4: cmp dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B6DD; /* 0x1507B6C7: je 0x1507b6dd */
L_1507B6C9:
    PUSH32(esp, esi); /* 0x1507B6C9: push esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1507B6CA: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15037B60); /* 0x1507B6CD: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B6D2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B6D3: pop ecx */
    /* test eax, eax */ /* 0x1507B6D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B6DD; /* 0x1507B6D6: jne 0x1507b6dd */
L_1507B6D8:
    ebx = MEM32(ebp + (-0x20)); /* 0x1507B6D8: mov ebx, dword ptr [ebp - 0x20] */
    goto L_1507B70D; /* 0x1507B6DB: jmp 0x1507b70d */
L_1507B6DD:
    ebx = MEM32(ebp + 0x8); /* 0x1507B6DD: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1507B6E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B6F1; /* 0x1507B6E2: je 0x1507b6f1 */
L_1507B6E4:
    PUSH32(esp, esi); /* 0x1507B6E4: push esi */
    PUSH32(esp, ebx); /* 0x1507B6E5: push ebx */
    RECOMP_CALL(sub_15037B60); /* 0x1507B6E6: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B6EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B6EC: pop ecx */
    /* test eax, eax */ /* 0x1507B6ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B70D; /* 0x1507B6EF: je 0x1507b70d */
L_1507B6F1:
    PUSH32(esp, esi); /* 0x1507B6F1: push esi */
    PUSH32(esp, 0x15004914u); /* 0x1507B6F2: push 0x15004914 */
    RECOMP_CALL(sub_15037B60); /* 0x1507B6F7: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B6FC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B6FD: pop ecx */
    ebx = 0x15004914u; /* 0x1507B6FE: mov ebx, 0x15004914 */
    ecx = 0x15006FFCu; /* 0x1507B703: mov ecx, 0x15006ffc */
    /* test eax, eax */ /* 0x1507B708: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = ecx; } /* 0x1507B70A: cmovne ebx, ecx */
L_1507B70D:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1507B70D: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B72A; /* 0x1507B710: je 0x1507b72a */
L_1507B712:
    edi = MEM32(ebp + 0xC); /* 0x1507B712: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi + 0x2; /* 0x1507B715: lea ecx, [edi + 2] */
L_1507B718:
    SET_LO16(eax, MEM16(edi)); /* 0x1507B718: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1507B71B: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507B71E: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B718; /* 0x1507B721: jne 0x1507b718 */
L_1507B723:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1507B723: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1507B725: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    MEM32(ebp + (-0x24)) = edi; /* 0x1507B727: mov dword ptr [ebp - 0x24], edi */
L_1507B72A:
    ecx = ebx; /* 0x1507B72A: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x1507B72C: lea edx, [ecx + 2] */
L_1507B72F:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B72F: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B732: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507B735: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B72F; /* 0x1507B738: jne 0x1507b72f */
L_1507B73A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507B73A: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B73C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0xC; /* 0x1507B73E: lea eax, [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1507B741: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507B743: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 2); /* 0x1507B746: push 2 */
    PUSH32(esp, eax); /* 0x1507B748: push eax */
    RECOMP_CALL(sub_150487F0); /* 0x1507B749: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B74E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B74F: pop ecx */
    edi = eax; /* 0x1507B750: mov edi, eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x1507B752: mov dword ptr [ebp - 0x28], edi */
    /* test edi, edi */ /* 0x1507B755: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B8C5; /* 0x1507B757: je 0x1507b8c5 */
L_1507B75D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507B75D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1507B75F: mov word ptr [edi], ax */
    PUSH32(esp, ebx); /* 0x1507B762: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1507B763: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x1507B766: push edi */
    RECOMP_CALL(sub_1508F120); /* 0x1507B767: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B76C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B76F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B780; /* 0x1507B771: je 0x1507b780 */
L_1507B773:
    PUSH32(esp, esi); /* 0x1507B773: push esi */
    PUSH32(esp, esi); /* 0x1507B774: push esi */
    PUSH32(esp, esi); /* 0x1507B775: push esi */
    PUSH32(esp, esi); /* 0x1507B776: push esi */
    PUSH32(esp, esi); /* 0x1507B777: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B778: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B77D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B780:
    ecx = ebx; /* 0x1507B780: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x1507B782: lea edx, [ecx + 2] */
L_1507B785:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B785: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B788: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507B78B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B785; /* 0x1507B78E: jne 0x1507b785 */
L_1507B790:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507B790: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B792: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = (uint32_t)MEM16(ebx + ecx * 2 + (-0x2)); /* 0x1507B794: movzx eax, word ptr [ebx + ecx*2 - 2] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1507B799: mov ebx, dword ptr [ebp - 0x1c] */
    /* cmp eax, 0x5Cu */ /* 0x1507B79C: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B7C6; /* 0x1507B79F: je 0x1507b7c6 */
L_1507B7A1:
    /* cmp eax, 0x2Fu */ /* 0x1507B7A1: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B7C6; /* 0x1507B7A4: je 0x1507b7c6 */
L_1507B7A6:
    PUSH32(esp, 0x15004914u); /* 0x1507B7A6: push 0x15004914 */
    PUSH32(esp, ebx); /* 0x1507B7AB: push ebx */
    PUSH32(esp, edi); /* 0x1507B7AC: push edi */
    RECOMP_CALL(sub_1508F120); /* 0x1507B7AD: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B7B2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B7B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B7C6; /* 0x1507B7B7: je 0x1507b7c6 */
L_1507B7B9:
    PUSH32(esp, esi); /* 0x1507B7B9: push esi */
    PUSH32(esp, esi); /* 0x1507B7BA: push esi */
    PUSH32(esp, esi); /* 0x1507B7BB: push esi */
    PUSH32(esp, esi); /* 0x1507B7BC: push esi */
    PUSH32(esp, esi); /* 0x1507B7BD: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B7BE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B7C3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B7C6:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1507B7C6: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B7E9; /* 0x1507B7C9: je 0x1507b7e9 */
L_1507B7CB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B7CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1507B7CE: push ebx */
    PUSH32(esp, edi); /* 0x1507B7CF: push edi */
    RECOMP_CALL(sub_1508F120); /* 0x1507B7D0: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B7D5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B7D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B7E9; /* 0x1507B7DA: je 0x1507b7e9 */
L_1507B7DC:
    PUSH32(esp, esi); /* 0x1507B7DC: push esi */
    PUSH32(esp, esi); /* 0x1507B7DD: push esi */
    PUSH32(esp, esi); /* 0x1507B7DE: push esi */
    PUSH32(esp, esi); /* 0x1507B7DF: push esi */
    PUSH32(esp, esi); /* 0x1507B7E0: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B7E1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B7E6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B7E9:
    ecx = edi; /* 0x1507B7E9: mov ecx, edi */
    edx = ecx + 0x2; /* 0x1507B7EB: lea edx, [ecx + 2] */
L_1507B7EE:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507B7EE: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507B7F1: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507B7F4: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507B7EE; /* 0x1507B7F7: jne 0x1507b7ee */
L_1507B7F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507B7F9: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B7FB: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + ecx; /* 0x1507B7FD: lea eax, [ecx + ecx] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1507B800: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1507B803: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = eax; /* 0x1507B805: mov dword ptr [ebp - 0x30], eax */
    PUSH32(esp, 2); /* 0x1507B808: push 2 */
    RECOMP_CALL(sub_15068D80); /* 0x1507B80A: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B80F: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507B810: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x24)); /* 0x1507B813: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(0x150BE974), eax */ /* 0x1507B816: cmp dword ptr [0x150be974], eax */
    _flag_a = (uint32_t)(MEM32(0x150BE974)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1507B828; /* 0x1507B81C: jae 0x1507b828 */
L_1507B81E:
    MEM32(0x150BD684) = 1; /* 0x1507B81E: mov dword ptr [0x150bd684], 1 */
L_1507B828:
    MEM32(0x150BE974) = eax; /* 0x1507B828: mov dword ptr [0x150be974], eax */
    eax = MEM32(0x150BD684); /* 0x1507B82D: mov eax, dword ptr [0x150bd684] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1507B832: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_15036430); /* 0x1507B835: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1507B83A: mov ebx, dword ptr [eax] */
L_1507B83C:
    edx = MEM32(0x150BD684); /* 0x1507B83C: mov edx, dword ptr [0x150bd684] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1507B842: inc edx */
    _flag_k = FK_INC;
    MEM32(0x150BD684) = edx; /* 0x1507B843: mov dword ptr [0x150bd684], edx */
    eax = edx; /* 0x1507B849: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x24)); /* 0x1507B84B: sub eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x7FFFFFFFu */ /* 0x1507B84E: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1507B8A6; /* 0x1507B853: ja 0x1507b8a6 */
L_1507B855:
    PUSH32(esp, 0xAu); /* 0x1507B855: push 0xa */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1507B857: mov ecx, dword ptr [ebp - 0x2c] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507B85A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = MEM32(ebp + (-0x1C)); /* 0x1507B85C: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1507B85F: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1507B861: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1507B862: push dword ptr [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x1507B865: push edx */
    RECOMP_CALL(sub_15031410); /* 0x1507B866: call 0x15031410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507B86B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B86E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B87F; /* 0x1507B870: je 0x1507b87f */
L_1507B872:
    PUSH32(esp, esi); /* 0x1507B872: push esi */
    PUSH32(esp, esi); /* 0x1507B873: push esi */
    PUSH32(esp, esi); /* 0x1507B874: push esi */
    PUSH32(esp, esi); /* 0x1507B875: push esi */
    PUSH32(esp, esi); /* 0x1507B876: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507B877: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B87C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507B87F:
    RECOMP_CALL(sub_15036430); /* 0x1507B87F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1507B884: mov dword ptr [eax], esi */
    PUSH32(esp, esi); /* 0x1507B886: push esi */
    PUSH32(esp, edi); /* 0x1507B887: push edi */
    RECOMP_CALL(sub_15037B60); /* 0x1507B888: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B88D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B88E: pop ecx */
    /* test eax, eax */ /* 0x1507B88F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B83C; /* 0x1507B891: je 0x1507b83c */
L_1507B893:
    RECOMP_CALL(sub_15036430); /* 0x1507B893: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x1507B898: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507B83C; /* 0x1507B89B: je 0x1507b83c */
L_1507B89D:
    RECOMP_CALL(sub_15036430); /* 0x1507B89D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1507B8A2: mov dword ptr [eax], ebx */
    goto L_1507B8B9; /* 0x1507B8A4: jmp 0x1507b8b9 */
L_1507B8A6:
    RECOMP_CALL(sub_15036430); /* 0x1507B8A6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1507B8AB: mov dword ptr [eax], ebx */
    PUSH32(esp, edi); /* 0x1507B8AD: push edi */
    RECOMP_CALL(sub_15048840); /* 0x1507B8AE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B8B3: pop ecx */
    edi = esi; /* 0x1507B8B4: mov edi, esi */
    MEM32(ebp + (-0x28)) = edi; /* 0x1507B8B6: mov dword ptr [ebp - 0x28], edi */
L_1507B8B9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507B8B9: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507B8EC); /* 0x1507B8C0: call 0x1507b8ec */
    RECOMP_FLAGS_IN();
L_1507B8C5:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1507B8C5: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15048840); /* 0x1507B8C8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1507B8CD: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1507B8CE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B8D3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B8D4: pop ecx */
    eax = edi; /* 0x1507B8D5: mov eax, edi */
L_1507B8D7:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507B8D7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507B8DA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507B8E1: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507B8E2: pop edi */
    esi = POP32_VAL(esp); /* 0x1507B8E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507B8E4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507B8E5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B8E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B8EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B8ECu);

L_1507B8EC:
    PUSH32(esp, 2); /* 0x1507B8EC: push 2 */
    RECOMP_CALL(sub_15068F50); /* 0x1507B8EE: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B8F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B8F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B900u);

L_1507B900:
    edi = edi; /* 0x1507B900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B902: push ebp */
    ebp = esp; /* 0x1507B903: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507B905: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B908: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507B670); /* 0x1507B90B: call 0x1507b670 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B910: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B911: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1507B912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B913: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B920u);

L_1507B920:
    edi = edi; /* 0x1507B920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507B922: push ebp */
    ebp = esp; /* 0x1507B923: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507B925: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507B926: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1507B92A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1507B92D: push eax */
    PUSH32(esp, 0x7FFFu); /* 0x1507B92E: push 0x7fff */
    PUSH32(esp, 0); /* 0x1507B933: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1507B935: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507B937: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507B94D); /* 0x1507B93A: call 0x1507b94d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1507B93F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507B942: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507B945: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507B946: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507B94D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507B94Du);

L_1507B94D:
    PUSH32(esp, 0x14u); /* 0x1507B94D: push 0x14 */
    PUSH32(esp, 0x150B1248u); /* 0x1507B94F: push 0x150b1248 */
    RECOMP_CALL(sub_1505E988); /* 0x1507B954: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507B959: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507B95B: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_15036430); /* 0x1507B95E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1507B963: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1507B965: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 2); /* 0x1507B968: push 2 */
    RECOMP_CALL(sub_15068E1A); /* 0x1507B96A: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B96F: pop ecx */
    /* test eax, eax */ /* 0x1507B970: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B985; /* 0x1507B972: jne 0x1507b985 */
L_1507B974:
    eax = MEM32(ebp + 0x18); /* 0x1507B974: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x1507B977: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1507B979: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1507B97E: mov eax, dword ptr [eax] */
    goto L_1507BABD; /* 0x1507B980: jmp 0x1507babd */
L_1507B985:
    PUSH32(esp, 2); /* 0x1507B985: push 2 */
    RECOMP_CALL(sub_15068D80); /* 0x1507B987: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B98C: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507B98D: mov dword ptr [ebp - 4], esi */
    ebx = MEM32(ebp + 0x10); /* 0x1507B990: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1507B993: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM16(0x150BE978); /* 0x1507B995: movzx eax, word ptr [0x150be978] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507B9A5; /* 0x1507B99C: je 0x1507b9a5 */
L_1507B99E:
    eax = (uint32_t)MEM16(0x150BE9B8); /* 0x1507B99E: movzx eax, word ptr [0x150be9b8] */
L_1507B9A5:
    PUSH32(esp, 0xEu); /* 0x1507B9A5: push 0xe */
    ecx = POP32_VAL(esp); /* 0x1507B9A7: pop ecx */
    PUSH32(esp, 0x12u); /* 0x1507B9A8: push 0x12 */
    edx = POP32_VAL(esp); /* 0x1507B9AA: pop edx */
    /* test ebx, ebx */ /* 0x1507B9AB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1507B9AD: cmovne ecx, edx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1507B9B0: mov dword ptr [ebp - 0x24], ecx */
    edi = 0x150BE9B8u; /* 0x1507B9B3: mov edi, 0x150be9b8 */
    edx = 0x150BE978u; /* 0x1507B9B8: mov edx, 0x150be978 */
    if (TEST_Z(_flag_a, _flag_b)) { edi = edx; } /* 0x1507B9BD: cmove edi, edx */
    /* test LO16(eax), LO16(eax) */ /* 0x1507B9C0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B9CE; /* 0x1507B9C3: jne 0x1507b9ce */
L_1507B9C5:
    PUSH32(esp, ebx); /* 0x1507B9C5: push ebx */
    RECOMP_CALL(sub_1507BBEB); /* 0x1507B9C6: call 0x1507bbeb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B9CB: pop ecx */
    goto L_1507B9E3; /* 0x1507B9CC: jmp 0x1507b9e3 */
L_1507B9CE:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507B9CE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x1507B9D1: push ecx */
L_1507B9D2:
    PUSH32(esp, edi); /* 0x1507B9D2: push edi */
    RECOMP_CALL(sub_1507BB2C); /* 0x1507B9D3: call 0x1507bb2c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507B9D8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507B9DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BA86; /* 0x1507B9DD: jne 0x1507ba86 */
L_1507B9E3:
    PUSH32(esp, esi); /* 0x1507B9E3: push esi */
    PUSH32(esp, edi); /* 0x1507B9E4: push edi */
    RECOMP_CALL(sub_15037B60); /* 0x1507B9E5: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507B9EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507B9EB: pop ecx */
    /* test eax, eax */ /* 0x1507B9EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507B9F8; /* 0x1507B9EE: jne 0x1507b9f8 */
L_1507B9F0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507B9F0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1507B9F3: push dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_1507B9D2; /* 0x1507B9F6: jmp 0x1507b9d2 */
L_1507B9F8:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1507B9F8: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507BA33; /* 0x1507B9FC: jne 0x1507ba33 */
L_1507B9FE:
    RECOMP_CALL(sub_15068840); /* 0x1507B9FE: call 0x15068840 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1507BA03: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1507BA05: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BA11; /* 0x1507BA07: jne 0x1507ba11 */
L_1507BA09:
    PUSH32(esp, 0xCu); /* 0x1507BA09: push 0xc */
    esi = POP32_VAL(esp); /* 0x1507BA0B: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507BA0C: mov dword ptr [ebp - 0x1c], esi */
    goto L_1507BA86; /* 0x1507BA0F: jmp 0x1507ba86 */
L_1507BA11:
    eax = MEM32(ebx + 0x30); /* 0x1507BA11: mov eax, dword ptr [ebx + 0x30] */
    /* test eax, eax */ /* 0x1507BA14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BA2A; /* 0x1507BA16: jne 0x1507ba2a */
L_1507BA18:
    PUSH32(esp, 2); /* 0x1507BA18: push 2 */
    PUSH32(esp, 0xEu); /* 0x1507BA1A: push 0xe */
    RECOMP_CALL(sub_15048EE2); /* 0x1507BA1C: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BA21: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507BA22: pop ecx */
    MEM32(ebx + 0x30) = eax; /* 0x1507BA23: mov dword ptr [ebx + 0x30], eax */
    /* test eax, eax */ /* 0x1507BA26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BA09; /* 0x1507BA28: je 0x1507ba09 */
L_1507BA2A:
    MEM32(ebp + 0x8) = eax; /* 0x1507BA2A: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, edi); /* 0x1507BA2D: push edi */
    PUSH32(esp, 0xEu); /* 0x1507BA2E: push 0xe */
    PUSH32(esp, eax); /* 0x1507BA30: push eax */
    goto L_1507BA6D; /* 0x1507BA31: jmp 0x1507ba6d */
L_1507BA33:
    /* test ebx, ebx */ /* 0x1507BA33: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BA66; /* 0x1507BA35: je 0x1507ba66 */
L_1507BA37:
    ecx = edi; /* 0x1507BA37: mov ecx, edi */
    edx = ecx + 0x2; /* 0x1507BA39: lea edx, [ecx + 2] */
L_1507BA3C:
    SET_LO16(eax, MEM16(ecx)); /* 0x1507BA3C: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507BA3F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1507BA42: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507BA3C; /* 0x1507BA45: jne 0x1507ba3c */
L_1507BA47:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1507BA47: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507BA49: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1507BA4B: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1507BA66; /* 0x1507BA4E: jb 0x1507ba66 */
L_1507BA50:
    PUSH32(esp, 0x22u); /* 0x1507BA50: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1507BA52: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507BA53: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507BA56: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BA86; /* 0x1507BA5A: je 0x1507ba86 */
L_1507BA5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507BA5C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1507BA5E: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1507BA61: mov word ptr [eax], cx */
    goto L_1507BA86; /* 0x1507BA64: jmp 0x1507ba86 */
L_1507BA66:
    PUSH32(esp, edi); /* 0x1507BA66: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507BA67: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507BA6A: push dword ptr [ebp + 8] */
L_1507BA6D:
    RECOMP_CALL(sub_1508F250); /* 0x1507BA6D: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507BA72: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BA75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BA86; /* 0x1507BA77: je 0x1507ba86 */
L_1507BA79:
    PUSH32(esp, esi); /* 0x1507BA79: push esi */
    PUSH32(esp, esi); /* 0x1507BA7A: push esi */
    PUSH32(esp, esi); /* 0x1507BA7B: push esi */
    PUSH32(esp, esi); /* 0x1507BA7C: push esi */
    PUSH32(esp, esi); /* 0x1507BA7D: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BA7E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BA83: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BA86:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507BA86: mov dword ptr [ebp - 4], 0xfffffffe */
    edi = MEM32(ebp + (-0x20)); /* 0x1507BA8D: mov edi, dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1507BAB0); /* 0x1507BA90: call 0x1507bab0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x1507BA95: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x1507BA98: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1507BA9B: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_15036430); /* 0x1507BA9D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1507BAA2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BAB9; /* 0x1507BAA4: je 0x1507bab9 */
L_1507BAA6:
    MEM32(eax) = esi; /* 0x1507BAA6: mov dword ptr [eax], esi */
    goto L_1507BABB; /* 0x1507BAA8: jmp 0x1507babb */
L_1507BAB9:
    MEM32(eax) = edi; /* 0x1507BAB9: mov dword ptr [eax], edi */
L_1507BABB:
    eax = esi; /* 0x1507BABB: mov eax, esi */
L_1507BABD:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507BABD: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507BAC0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507BAC7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507BAC8: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BAC9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BACA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BACB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BACC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BAB0u);

L_1507BAB0:
    PUSH32(esp, 2); /* 0x1507BAB0: push 2 */
    RECOMP_CALL(sub_15068F50); /* 0x1507BAB2: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BAB7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BAB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BAE0u);

L_1507BAE0:
    edi = edi; /* 0x1507BAE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BAE2: push ebp */
    ebp = esp; /* 0x1507BAE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507BAE5: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1507BAE6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507BB0B; /* 0x1507BAEA: jne 0x1507bb0b */
L_1507BAEC:
    RECOMP_CALL(sub_15036430); /* 0x1507BAEC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507BAF1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1507BAF3: push ecx */
    PUSH32(esp, ecx); /* 0x1507BAF4: push ecx */
    PUSH32(esp, ecx); /* 0x1507BAF5: push ecx */
    PUSH32(esp, ecx); /* 0x1507BAF6: push ecx */
    PUSH32(esp, ecx); /* 0x1507BAF7: push ecx */
    MEM32(eax) = 0x16u; /* 0x1507BAF8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507BAFE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BB03: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1507BB06: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1507BB08: pop eax */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BB09: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BB0A: ret  */
L_1507BB0B:
    eax = ebp + (-0x4); /* 0x1507BB0B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1507BB0E: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1507BB0F: push 0x7fffffff */
    PUSH32(esp, 2); /* 0x1507BB14: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507BB16: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507BB19: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507B94D); /* 0x1507BB1C: call 0x1507b94d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BB21: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BB24: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BB25: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BB2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BB2Cu);

L_1507BB2C:
    edi = edi; /* 0x1507BB2C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BB2E: push ebp */
    ebp = esp; /* 0x1507BB2F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1507BB31: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1507BB34: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1507BB39: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1507BB3B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1507BB3E: push ebx */
    PUSH32(esp, esi); /* 0x1507BB3F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1507BB40: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1507BB43: push edi */
    PUSH32(esp, 0x2Eu); /* 0x1507BB44: push 0x2e */
    PUSH32(esp, esi); /* 0x1507BB46: push esi */
    RECOMP_CALL(sub_1508F7B0); /* 0x1507BB47: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1507BB4C: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1507BB4E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507BB4F: pop ecx */
    /* test edi, edi */ /* 0x1507BB50: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BBD3; /* 0x1507BB52: je 0x1507bbd3 */
L_1507BB54:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1507BB54: add edi, 2 */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x1507BB57: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1507BB59: sub ebx, esi */
    _flag_k = FK_CMP;
    /* cmp edi, esi */ /* 0x1507BB5B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1507BBC4; /* 0x1507BB5D: jb 0x1507bbc4 */
L_1507BB5F:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1507BB5F: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1507BB61: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507BBC4; /* 0x1507BB64: jbe 0x1507bbc4 */
L_1507BB66:
    PUSH32(esp, 0x20u); /* 0x1507BB66: push 0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BB68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507BB6A: push esi */
    PUSH32(esp, edi); /* 0x1507BB6B: push edi */
    RECOMP_CALL(sub_15033850); /* 0x1507BB6C: call 0x15033850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507BB71: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507BB74: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1507BB75: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1507BBD3; /* 0x1507BB78: jae 0x1507bbd3 */
L_1507BB7A:
    PUSH32(esp, 0x20u); /* 0x1507BB7A: push 0x20 */
    PUSH32(esp, 8); /* 0x1507BB7C: push 8 */
    ecx = ebp + (-0x14); /* 0x1507BB7E: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1507BB81: push ecx */
    PUSH32(esp, eax); /* 0x1507BB82: push eax */
    RECOMP_CALL(sub_15031410); /* 0x1507BB83: call 0x15031410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507BB88: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BB8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BB9C; /* 0x1507BB8D: je 0x1507bb9c */
L_1507BB8F:
    PUSH32(esp, esi); /* 0x1507BB8F: push esi */
    PUSH32(esp, esi); /* 0x1507BB90: push esi */
    PUSH32(esp, esi); /* 0x1507BB91: push esi */
    PUSH32(esp, esi); /* 0x1507BB92: push esi */
    PUSH32(esp, esi); /* 0x1507BB93: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BB94: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BB99: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BB9C:
    eax = ebp + (-0x14); /* 0x1507BB9C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1507BB9F: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1507BBA0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1507BBA3: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1507BBA5: push eax */
    PUSH32(esp, edi); /* 0x1507BBA6: push edi */
    RECOMP_CALL(sub_1508F250); /* 0x1507BBA7: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507BBAC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BBAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BBC0; /* 0x1507BBB1: je 0x1507bbc0 */
L_1507BBB3:
    PUSH32(esp, esi); /* 0x1507BBB3: push esi */
    PUSH32(esp, esi); /* 0x1507BBB4: push esi */
    PUSH32(esp, esi); /* 0x1507BBB5: push esi */
    PUSH32(esp, esi); /* 0x1507BBB6: push esi */
    PUSH32(esp, esi); /* 0x1507BBB7: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BBB8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BBBD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BBC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BBC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507BBD6; /* 0x1507BBC2: jmp 0x1507bbd6 */
L_1507BBC4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BBC4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507BBC6: push esi */
    PUSH32(esp, esi); /* 0x1507BBC7: push esi */
    PUSH32(esp, esi); /* 0x1507BBC8: push esi */
    PUSH32(esp, esi); /* 0x1507BBC9: push esi */
    PUSH32(esp, esi); /* 0x1507BBCA: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507BBCB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BBD0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BBD3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507BBD3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507BBD6:
    ecx = MEM32(ebp + (-0x4)); /* 0x1507BBD6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1507BBD9: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BBDA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1507BBDB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1507BBDD: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1507BBDE: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BBE3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BBE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BBEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BBEBu);

L_1507BBEB:
    edi = edi; /* 0x1507BBEB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BBED: push ebp */
    ebp = esp; /* 0x1507BBEE: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1507BBF0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1507BBF1: mov ebx, dword ptr [ebp + 8] */
    eax = ebx; /* 0x1507BBF4: mov eax, ebx */
    PUSH32(esp, esi); /* 0x1507BBF6: push esi */
    PUSH32(esp, edi); /* 0x1507BBF7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507BBF8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BBFA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1507BBFC: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507BC1A; /* 0x1507BBFE: je 0x1507bc1a */
L_1507BC00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507BC00: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507BC13; /* 0x1507BC03: je 0x1507bc13 */
L_1507BC05:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507BC05: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1507BC22; /* 0x1507BC08: jne 0x1507bc22 */
L_1507BC0A:
    esi = 0x150BE9B8u; /* 0x1507BC0A: mov esi, 0x150be9b8 */
L_1507BC0F:
    PUSH32(esp, 0x12u); /* 0x1507BC0F: push 0x12 */
    goto L_1507BC21; /* 0x1507BC11: jmp 0x1507bc21 */
L_1507BC13:
    esi = 0x150BE994u; /* 0x1507BC13: mov esi, 0x150be994 */
    RECOMP_BACKEDGE();
    goto L_1507BC0F; /* 0x1507BC18: jmp 0x1507bc0f */
L_1507BC1A:
    esi = 0x150BE978u; /* 0x1507BC1A: mov esi, 0x150be978 */
    PUSH32(esp, 0xEu); /* 0x1507BC1F: push 0xe */
L_1507BC21:
    edi = POP32_VAL(esp); /* 0x1507BC21: pop edi */
L_1507BC22:
    PUSH32(esp, 0x15004914u); /* 0x1507BC22: push 0x15004914 */
    PUSH32(esp, edi); /* 0x1507BC27: push edi */
    PUSH32(esp, esi); /* 0x1507BC28: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x1507BC29: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507BC2E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BC31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BC44; /* 0x1507BC33: je 0x1507bc44 */
L_1507BC35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BC35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507BC37: push eax */
    PUSH32(esp, eax); /* 0x1507BC38: push eax */
    PUSH32(esp, eax); /* 0x1507BC39: push eax */
    PUSH32(esp, eax); /* 0x1507BC3A: push eax */
    PUSH32(esp, eax); /* 0x1507BC3B: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BC3C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BC41: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BC44:
    ecx = (uint32_t)MEM16(esi); /* 0x1507BC44: movzx ecx, word ptr [esi] */
    eax = esi + 0x2; /* 0x1507BC47: lea eax, [esi + 2] */
    PUSH32(esp, 0x5Cu); /* 0x1507BC4A: push 0x5c */
    edx = POP32_VAL(esp); /* 0x1507BC4C: pop edx */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1507BC4D: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BC5D; /* 0x1507BC50: je 0x1507bc5d */
L_1507BC52:
    /* cmp ecx, 0x2Fu */ /* 0x1507BC52: cmp ecx, 0x2f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BC5D; /* 0x1507BC55: je 0x1507bc5d */
L_1507BC57:
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1507BC57: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1507BC5A: add eax, 2 */
    _flag_k = FK_ADD;
L_1507BC5D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1507BC5D: dec ebx */
    _flag_k = FK_DEC;
    edx = eax + 0x2; /* 0x1507BC5E: lea edx, [eax + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1507BC61: neg ebx */
    _flag_k = FK_CMP;
    ecx = edx; /* 0x1507BC63: mov ecx, edx */
    PUSH32(esp, 0x20u); /* 0x1507BC65: push 0x20 */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1507BC67: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1507BC69: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x74u; /* 0x1507BC6B: add ebx, 0x74 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1507BC6E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x1507BC70: mov word ptr [eax], bx */
    eax = edi; /* 0x1507BC73: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1507BC75: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1507BC77: push eax */
    PUSH32(esp, edx); /* 0x1507BC78: push edx */
    RECOMP_CALL(sub_15036CD0); /* 0x1507BC79: call 0x15036cd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1507BC7E: push eax */
    RECOMP_CALL(sub_15031410); /* 0x1507BC7F: call 0x15031410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507BC84: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507BC87: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1507BC89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BC9A; /* 0x1507BC8B: je 0x1507bc9a */
L_1507BC8D:
    PUSH32(esp, ebx); /* 0x1507BC8D: push ebx */
    PUSH32(esp, ebx); /* 0x1507BC8E: push ebx */
    PUSH32(esp, ebx); /* 0x1507BC8F: push ebx */
    PUSH32(esp, ebx); /* 0x1507BC90: push ebx */
    PUSH32(esp, ebx); /* 0x1507BC91: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BC92: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BC97: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BC9A:
    PUSH32(esp, 0x15006FFCu); /* 0x1507BC9A: push 0x15006ffc */
    PUSH32(esp, edi); /* 0x1507BC9F: push edi */
    PUSH32(esp, esi); /* 0x1507BCA0: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x1507BCA1: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507BCA6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BCA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BCBA; /* 0x1507BCAB: je 0x1507bcba */
L_1507BCAD:
    PUSH32(esp, ebx); /* 0x1507BCAD: push ebx */
    PUSH32(esp, ebx); /* 0x1507BCAE: push ebx */
    PUSH32(esp, ebx); /* 0x1507BCAF: push ebx */
    PUSH32(esp, ebx); /* 0x1507BCB0: push ebx */
    PUSH32(esp, ebx); /* 0x1507BCB1: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1507BCB2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BCB7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BCBA:
    edi = POP32_VAL(esp); /* 0x1507BCBA: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BCBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BCBC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1507BCBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BCBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BCD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BCD0u);

L_1507BCD0:
    goto L_1507BCE0; /* 0x1507BCD0: jmp 0x1507bce0 */
L_1507BCE0:
    PUSH32(esp, 8); /* 0x1507BCE0: push 8 */
    PUSH32(esp, 0x150B1268u); /* 0x1507BCE2: push 0x150b1268 */
    RECOMP_CALL(sub_1505E988); /* 0x1507BCE7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1507BCEC: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1507BCEF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BD10; /* 0x1507BCF1: jne 0x1507bd10 */
L_1507BCF3:
    RECOMP_CALL(sub_15036430); /* 0x1507BCF3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1507BCF8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1507BCFA: pop esi */
    MEM32(eax) = esi; /* 0x1507BCFB: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507BCFD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1507BCFF: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD00: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD01: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD02: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD03: push ecx */
    RECOMP_CALL(sub_1505A110); /* 0x1507BD04: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BD09: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1507BD0C: mov eax, esi */
    goto L_1507BD72; /* 0x1507BD0E: jmp 0x1507bd72 */
L_1507BD10:
    PUSH32(esp, edi); /* 0x1507BD10: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x1507BD11: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD16: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507BD17: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x1507BD1B: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1507BD1F: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD20: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD25: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507BD26: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BD5B; /* 0x1507BD29: je 0x1507bd5b */
L_1507BD2B:
    PUSH32(esp, edi); /* 0x1507BD2B: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD2C: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD31: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507BD32: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BD5B; /* 0x1507BD35: je 0x1507bd5b */
L_1507BD37:
    PUSH32(esp, edi); /* 0x1507BD37: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD38: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507BD3D: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1507BD3F: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x1507BD42: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD43: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD48: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507BD49: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1507BD4A: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1507BD4D: imul ecx, eax, 0x24 */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1507BD50: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1507BD57: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1507BD60; /* 0x1507BD59: jmp 0x1507bd60 */
L_1507BD5B:
    eax = 0x150BCEA0u; /* 0x1507BD5B: mov eax, 0x150bcea0 */
L_1507BD60:
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + 0x4) = (uint8_t)(MEM8(eax + 0x4) & 0xFDu); /* 0x1507BD60: and byte ptr [eax + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507BD64: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507BD85); /* 0x1507BD6B: call 0x1507bd85 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BD70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507BD72:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507BD72: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507BD75: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507BD7C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507BD7D: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BD7E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BD7F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BD80: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BD81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BCE0u);

L_1507BCE0:
    PUSH32(esp, 8); /* 0x1507BCE0: push 8 */
    PUSH32(esp, 0x150B1268u); /* 0x1507BCE2: push 0x150b1268 */
    RECOMP_CALL(sub_1505E988); /* 0x1507BCE7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1507BCEC: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1507BCEF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BD10; /* 0x1507BCF1: jne 0x1507bd10 */
L_1507BCF3:
    RECOMP_CALL(sub_15036430); /* 0x1507BCF3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1507BCF8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1507BCFA: pop esi */
    MEM32(eax) = esi; /* 0x1507BCFB: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507BCFD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1507BCFF: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD00: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD01: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD02: push ecx */
    PUSH32(esp, ecx); /* 0x1507BD03: push ecx */
    RECOMP_CALL(sub_1505A110); /* 0x1507BD04: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BD09: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1507BD0C: mov eax, esi */
    goto L_1507BD72; /* 0x1507BD0E: jmp 0x1507bd72 */
L_1507BD10:
    PUSH32(esp, edi); /* 0x1507BD10: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x1507BD11: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD16: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507BD17: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFCFu);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0xFFFFFFCFu; /* 0x1507BD1B: and dword ptr [edi + 0xc], 0xffffffcf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1507BD1F: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD20: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD25: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507BD26: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BD5B; /* 0x1507BD29: je 0x1507bd5b */
L_1507BD2B:
    PUSH32(esp, edi); /* 0x1507BD2B: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD2C: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD31: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507BD32: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BD5B; /* 0x1507BD35: je 0x1507bd5b */
L_1507BD37:
    PUSH32(esp, edi); /* 0x1507BD37: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD38: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507BD3D: mov esi, eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1507BD3F: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    PUSH32(esp, edi); /* 0x1507BD42: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BD43: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD48: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507BD49: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1507BD4A: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1507BD4D: imul ecx, eax, 0x24 */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1507BD50: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1507BD57: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1507BD60; /* 0x1507BD59: jmp 0x1507bd60 */
L_1507BD5B:
    eax = 0x150BCEA0u; /* 0x1507BD5B: mov eax, 0x150bcea0 */
L_1507BD60:
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + 0x4) = (uint8_t)(MEM8(eax + 0x4) & 0xFDu); /* 0x1507BD60: and byte ptr [eax + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507BD64: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507BD85); /* 0x1507BD6B: call 0x1507bd85 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BD70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507BD72:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507BD72: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507BD75: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507BD7C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507BD7D: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BD7E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BD7F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BD80: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BD81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BD85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BD85u);

L_1507BD85:
    PUSH32(esp, edi); /* 0x1507BD85: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507BD86: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BD8B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BD8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BD93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BD93u);

L_1507BD93:
    edi = edi; /* 0x1507BD93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BD95: push ebp */
    ebp = esp; /* 0x1507BD96: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1507BD98: push ebx */
    PUSH32(esp, esi); /* 0x1507BD99: push esi */
    PUSH32(esp, edi); /* 0x1507BD9A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1507BD9B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1507BD9E: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1507BDA1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BDC3; /* 0x1507BDA3: jne 0x1507bdc3 */
L_1507BDA5:
    RECOMP_CALL(sub_15036430); /* 0x1507BDA5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BDAA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507BDAC: push esi */
    PUSH32(esp, esi); /* 0x1507BDAD: push esi */
    PUSH32(esp, esi); /* 0x1507BDAE: push esi */
    PUSH32(esp, esi); /* 0x1507BDAF: push esi */
    PUSH32(esp, esi); /* 0x1507BDB0: push esi */
    MEM32(eax) = 0x16u; /* 0x1507BDB1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1507BDB7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BDBC: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1507BDBF: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507BE07; /* 0x1507BDC1: jmp 0x1507be07 */
L_1507BDC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BDC3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(edi + 0xC), 0x83u */ /* 0x1507BDC5: test byte ptr [edi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BE02; /* 0x1507BDC9: je 0x1507be02 */
L_1507BDCB:
    PUSH32(esp, edi); /* 0x1507BDCB: push edi */
    RECOMP_CALL(sub_15076C76); /* 0x1507BDCC: call 0x15076c76 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1507BDD1: push edi */
    ebx = eax; /* 0x1507BDD2: mov ebx, eax */
    RECOMP_CALL(sub_1508B283); /* 0x1507BDD4: call 0x1508b283 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1507BDD9: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BDDA: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1507BDDF: push eax */
    RECOMP_CALL(sub_15049D70); /* 0x1507BDE0: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507BDE5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507BDE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1507BDF1; /* 0x1507BDEA: jns 0x1507bdf1 */
L_1507BDEC:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1507BDEC: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507BE02; /* 0x1507BDEF: jmp 0x1507be02 */
L_1507BDF1:
    /* cmp MEM32(edi + 0x1C), esi */ /* 0x1507BDF1: cmp dword ptr [edi + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BE02; /* 0x1507BDF4: je 0x1507be02 */
L_1507BDF6:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x1507BDF6: push dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_15048840); /* 0x1507BDF9: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BDFE: pop ecx */
    MEM32(edi + 0x1C) = esi; /* 0x1507BDFF: mov dword ptr [edi + 0x1c], esi */
L_1507BE02:
    MEM32(edi + 0xC) = esi; /* 0x1507BE02: mov dword ptr [edi + 0xc], esi */
    eax = ebx; /* 0x1507BE05: mov eax, ebx */
L_1507BE07:
    edi = POP32_VAL(esp); /* 0x1507BE07: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BE08: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BE09: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1507BE0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BE0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BE20u);

L_1507BE20:
    PUSH32(esp, 0xCu); /* 0x1507BE20: push 0xc */
    PUSH32(esp, 0x150B1288u); /* 0x1507BE22: push 0x150b1288 */
    RECOMP_CALL(sub_1505E988); /* 0x1507BE27: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1507BE2C: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507BE2F: mov dword ptr [ebp - 0x1c], edi */
    esi = MEM32(ebp + 0x8); /* 0x1507BE32: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507BE35: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BE65; /* 0x1507BE37: jne 0x1507be65 */
L_1507BE39:
    RECOMP_CALL(sub_15036430); /* 0x1507BE39: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507BE3E: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BE44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507BE46: push eax */
    PUSH32(esp, eax); /* 0x1507BE47: push eax */
    PUSH32(esp, eax); /* 0x1507BE48: push eax */
    PUSH32(esp, eax); /* 0x1507BE49: push eax */
    PUSH32(esp, eax); /* 0x1507BE4A: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507BE4B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BE50: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507BE53:
    eax = edi; /* 0x1507BE53: mov eax, edi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1507BE55: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507BE58: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507BE5F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507BE60: pop edi */
    esi = POP32_VAL(esp); /* 0x1507BE61: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507BE62: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507BE63: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BE64: ret  */
L_1507BE65:
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x1507BE65: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BE71; /* 0x1507BE69: je 0x1507be71 */
L_1507BE6B:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1507BE6B: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1507BE53; /* 0x1507BE6F: jmp 0x1507be53 */
L_1507BE71:
    PUSH32(esp, esi); /* 0x1507BE71: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x1507BE72: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BE77: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507BE78: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507BE7C: push esi */
    RECOMP_CALL(sub_1507BD93); /* 0x1507BE7D: call 0x1507bd93 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BE82: pop ecx */
    edi = eax; /* 0x1507BE83: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507BE85: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507BE88: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507BE9C); /* 0x1507BE8F: call 0x1507be9c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1507BE53; /* 0x1507BE94: jmp 0x1507be53 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1507BE9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BE9Cu);

L_1507BE9C:
    PUSH32(esp, esi); /* 0x1507BE9C: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507BE9D: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BEA2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BEA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BEB0u);

L_1507BEB0:
    edi = edi; /* 0x1507BEB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BEB2: push ebp */
    ebp = esp; /* 0x1507BEB3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1507BEB5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1507BEB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BEDA; /* 0x1507BEBA: jne 0x1507beda */
L_1507BEBC:
    RECOMP_CALL(sub_15036430); /* 0x1507BEBC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507BEC1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BEC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507BEC9: push eax */
    PUSH32(esp, eax); /* 0x1507BECA: push eax */
    PUSH32(esp, eax); /* 0x1507BECB: push eax */
    PUSH32(esp, eax); /* 0x1507BECC: push eax */
    PUSH32(esp, eax); /* 0x1507BECD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507BECE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BED3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BED6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507BED8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BED9: ret  */
L_1507BEDA:
    eax = MEM32(eax + 0xC); /* 0x1507BEDA: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x1507BEDD: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507BEE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BEE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BEF0u);

L_1507BEF0:
    edi = edi; /* 0x1507BEF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507BEF2: push ebp */
    ebp = esp; /* 0x1507BEF3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1507BEF5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1507BEF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BF1A; /* 0x1507BEFA: jne 0x1507bf1a */
L_1507BEFC:
    RECOMP_CALL(sub_15036430); /* 0x1507BEFC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507BF01: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BF07: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507BF09: push eax */
    PUSH32(esp, eax); /* 0x1507BF0A: push eax */
    PUSH32(esp, eax); /* 0x1507BF0B: push eax */
    PUSH32(esp, eax); /* 0x1507BF0C: push eax */
    PUSH32(esp, eax); /* 0x1507BF0D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507BF0E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BF13: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BF16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507BF18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BF19: ret  */
L_1507BF1A:
    eax = MEM32(eax + 0xC); /* 0x1507BF1A: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x1507BF1D: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507BF20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507BF21: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507BF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507BF30u);

L_1507BF30:
    PUSH32(esp, 0x10u); /* 0x1507BF30: push 0x10 */
    PUSH32(esp, 0x150B12A8u); /* 0x1507BF32: push 0x150b12a8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507BF37: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507BF3C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507BF3E: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x1507BF41: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1507BF44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BF68; /* 0x1507BF46: jne 0x1507bf68 */
L_1507BF48:
    RECOMP_CALL(sub_15036430); /* 0x1507BF48: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507BF4D: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507BF53: push esi */
    PUSH32(esp, esi); /* 0x1507BF54: push esi */
    PUSH32(esp, esi); /* 0x1507BF55: push esi */
    PUSH32(esp, esi); /* 0x1507BF56: push esi */
    PUSH32(esp, esi); /* 0x1507BF57: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507BF58: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BF5D: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507BF60: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507C03B; /* 0x1507BF63: jmp 0x1507c03b */
L_1507BF68:
    PUSH32(esp, edi); /* 0x1507BF68: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x1507BF69: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BF6E: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507BF6F: mov dword ptr [ebp - 4], esi */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1507BF72: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BFE3; /* 0x1507BF76: jne 0x1507bfe3 */
L_1507BF78:
    PUSH32(esp, edi); /* 0x1507BF78: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507BF79: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507BF7E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507BF7F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BFA7; /* 0x1507BF82: je 0x1507bfa7 */
L_1507BF84:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507BF84: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BFA7; /* 0x1507BF87: je 0x1507bfa7 */
L_1507BF89:
    edx = eax; /* 0x1507BF89: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507BF8B: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = eax; /* 0x1507BF8E: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1507BF90: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1507BF93: imul ecx, ebx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507BF96: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507BF9D: mov dword ptr [ebp - 0x20], ecx */
    ecx = 0x150BCEA0u; /* 0x1507BFA0: mov ecx, 0x150bcea0 */
    goto L_1507BFB9; /* 0x1507BFA5: jmp 0x1507bfb9 */
L_1507BFA7:
    ecx = 0x150BCEA0u; /* 0x1507BFA7: mov ecx, 0x150bcea0 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507BFAC: mov dword ptr [ebp - 0x20], ecx */
    edx = eax; /* 0x1507BFAF: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507BFB1: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = eax; /* 0x1507BFB4: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1507BFB6: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507BFB9:
    edi = MEM32(ebp + (-0x20)); /* 0x1507BFB9: mov edi, dword ptr [ebp - 0x20] */
    /* test MEM8(edi + 0x8), 3 */ /* 0x1507BFBC: test byte ptr [edi + 8], 3 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x1507BFC0: mov edi, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507BFDF; /* 0x1507BFC3: jne 0x1507bfdf */
L_1507BFC5:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507BFC5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BFD9; /* 0x1507BFC8: je 0x1507bfd9 */
L_1507BFCA:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507BFCA: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507BFD9; /* 0x1507BFCD: je 0x1507bfd9 */
L_1507BFCF:
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1507BFCF: imul ecx, ebx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507BFD2: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
L_1507BFD9:
    /* test MEM8(ecx + 0x8), 8 */ /* 0x1507BFD9: test byte ptr [ecx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507BFE3; /* 0x1507BFDD: je 0x1507bfe3 */
L_1507BFDF:
    eax = esi; /* 0x1507BFDF: mov eax, esi */
    goto L_1507BFE6; /* 0x1507BFE1: jmp 0x1507bfe6 */
L_1507BFE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507BFE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507BFE5: inc eax */
    _flag_k = FK_INC;
L_1507BFE6:
    /* test eax, eax */ /* 0x1507BFE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C008; /* 0x1507BFE8: jne 0x1507c008 */
L_1507BFEA:
    RECOMP_CALL(sub_15036430); /* 0x1507BFEA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507BFEF: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507BFF5: push esi */
    PUSH32(esp, esi); /* 0x1507BFF6: push esi */
    PUSH32(esp, esi); /* 0x1507BFF7: push esi */
    PUSH32(esp, esi); /* 0x1507BFF8: push esi */
    PUSH32(esp, esi); /* 0x1507BFF9: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507BFFA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507BFFF: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1507C002: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507C005: mov dword ptr [ebp - 0x1c], esi */
L_1507C008:
    /* test esi, esi */ /* 0x1507C008: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C02D; /* 0x1507C00A: jne 0x1507c02d */
L_1507C00C:
    eax = MEM32(edi + 0x4); /* 0x1507C00C: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507C00F: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(edi + 0x4) = eax; /* 0x1507C012: mov dword ptr [edi + 4], eax */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C021; /* 0x1507C015: js 0x1507c021 */
L_1507C017:
    eax = MEM32(edi); /* 0x1507C017: mov eax, dword ptr [edi] */
    esi = (uint32_t)MEM8(eax); /* 0x1507C019: movzx esi, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C01C: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1507C01D: mov dword ptr [edi], eax */
    goto L_1507C02A; /* 0x1507C01F: jmp 0x1507c02a */
L_1507C021:
    PUSH32(esp, edi); /* 0x1507C021: push edi */
    RECOMP_CALL(sub_15076950); /* 0x1507C022: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C027: pop ecx */
    esi = eax; /* 0x1507C028: mov esi, eax */
L_1507C02A:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507C02A: mov dword ptr [ebp - 0x1c], esi */
L_1507C02D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C02D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C051); /* 0x1507C034: call 0x1507c051 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1507C039: mov eax, esi */
L_1507C03B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C03B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C03E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C045: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C046: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C047: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C048: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C049: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C04A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C051u);

L_1507C051:
    PUSH32(esp, edi); /* 0x1507C051: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507C052: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C057: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C058: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C060u);

L_1507C060:
    edi = edi; /* 0x1507C060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507C062: push ebp */
    ebp = esp; /* 0x1507C063: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1507C065: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C08A; /* 0x1507C069: jne 0x1507c08a */
L_1507C06B:
    RECOMP_CALL(sub_15036430); /* 0x1507C06B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C070: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C076: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507C078: push eax */
    PUSH32(esp, eax); /* 0x1507C079: push eax */
    PUSH32(esp, eax); /* 0x1507C07A: push eax */
    PUSH32(esp, eax); /* 0x1507C07B: push eax */
    PUSH32(esp, eax); /* 0x1507C07C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507C07D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C082: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507C085: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1507C088: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C089: ret  */
L_1507C08A:
    PUSH32(esp, esi); /* 0x1507C08A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1507C08B: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1507C08E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C0B2; /* 0x1507C090: jne 0x1507c0b2 */
L_1507C092:
    RECOMP_CALL(sub_15036430); /* 0x1507C092: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C097: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C09D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507C09F: push eax */
    PUSH32(esp, eax); /* 0x1507C0A0: push eax */
    PUSH32(esp, eax); /* 0x1507C0A1: push eax */
    PUSH32(esp, eax); /* 0x1507C0A2: push eax */
    PUSH32(esp, eax); /* 0x1507C0A3: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507C0A4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C0A9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507C0AC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507C0AC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507C0AF:
    esi = POP32_VAL(esp); /* 0x1507C0AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1507C0B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C0B1: ret  */
L_1507C0B2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507C0B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150864FA); /* 0x1507C0B5: call 0x150864fa */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1507C0BA: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1507C0BC: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x1507C0BE: mov dword ptr [esi + 4], edx */
    ecx = POP32_VAL(esp); /* 0x1507C0C1: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C0C2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C0AC; /* 0x1507C0C5: je 0x1507c0ac */
L_1507C0C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C0C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1507C0AF; /* 0x1507C0C9: jmp 0x1507c0af */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1507C0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C0E0u);

L_1507C0E0:
    PUSH32(esp, 0x20u); /* 0x1507C0E0: push 0x20 */
    PUSH32(esp, 0x150B12C8u); /* 0x1507C0E2: push 0x150b12c8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507C0E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1507C0EC: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1507C0EF: mov dword ptr [ebp - 0x20], eax */
    edi = eax; /* 0x1507C0F2: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1507C0F4: mov dword ptr [ebp - 0x24], edi */
    /* test eax, eax */ /* 0x1507C0F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C106; /* 0x1507C0F9: jne 0x1507c106 */
L_1507C0FB:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1507C0FB: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C106; /* 0x1507C0FE: je 0x1507c106 */
L_1507C100:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507C100: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1507C102: mov eax, ebx */
    goto L_1507C10B; /* 0x1507C104: jmp 0x1507c10b */
L_1507C106:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C106: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C108: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507C109: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507C10B:
    /* test eax, eax */ /* 0x1507C10B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C12E; /* 0x1507C10D: jne 0x1507c12e */
L_1507C10F:
    RECOMP_CALL(sub_15036430); /* 0x1507C10F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C114: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x1507C11A: push ebx */
    PUSH32(esp, ebx); /* 0x1507C11B: push ebx */
    PUSH32(esp, ebx); /* 0x1507C11C: push ebx */
    PUSH32(esp, ebx); /* 0x1507C11D: push ebx */
    PUSH32(esp, ebx); /* 0x1507C11E: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1507C11F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C124: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507C127:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C127: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507C249; /* 0x1507C129: jmp 0x1507c249 */
L_1507C12E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507C12E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1507C10F; /* 0x1507C132: jl 0x1507c10f */
L_1507C134:
    esi = MEM32(ebp + 0x10); /* 0x1507C134: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1507C137: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C10F; /* 0x1507C139: je 0x1507c10f */
L_1507C13B:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507C13B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C127; /* 0x1507C13F: je 0x1507c127 */
L_1507C141:
    MEM32(ebp + (-0x2C)) = esi; /* 0x1507C141: mov dword ptr [ebp - 0x2c], esi */
    PUSH32(esp, esi); /* 0x1507C144: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x1507C145: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C14A: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1507C14B: mov dword ptr [ebp - 4], ebx */
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x1507C14E: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C1C5; /* 0x1507C152: jne 0x1507c1c5 */
L_1507C154:
    PUSH32(esp, esi); /* 0x1507C154: push esi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C155: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C15A: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C15B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C186; /* 0x1507C15E: je 0x1507c186 */
L_1507C160:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C160: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C186; /* 0x1507C163: je 0x1507c186 */
L_1507C165:
    edx = eax; /* 0x1507C165: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507C167: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = eax; /* 0x1507C16A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1507C16C: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1507C16F: mov dword ptr [ebp - 0x1c], ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1507C172: imul ecx, ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507C175: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1507C17C: mov dword ptr [ebp - 0x28], ecx */
    ecx = 0x150BCEA0u; /* 0x1507C17F: mov ecx, 0x150bcea0 */
    goto L_1507C19A; /* 0x1507C184: jmp 0x1507c19a */
L_1507C186:
    ecx = 0x150BCEA0u; /* 0x1507C186: mov ecx, 0x150bcea0 */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1507C18B: mov dword ptr [ebp - 0x28], ecx */
    edx = eax; /* 0x1507C18E: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507C190: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507C193: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x1Fu);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0x1Fu; /* 0x1507C196: and dword ptr [ebp - 0x1c], 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507C19A:
    esi = MEM32(ebp + (-0x28)); /* 0x1507C19A: mov esi, dword ptr [ebp - 0x28] */
    /* test MEM8(esi + 0x8), 3 */ /* 0x1507C19D: test byte ptr [esi + 8], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + 0x10); /* 0x1507C1A1: mov esi, dword ptr [ebp + 0x10] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C1C1; /* 0x1507C1A4: jne 0x1507c1c1 */
L_1507C1A6:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C1A6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C1BB; /* 0x1507C1A9: je 0x1507c1bb */
L_1507C1AB:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C1AB: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C1BB; /* 0x1507C1AE: je 0x1507c1bb */
L_1507C1B0:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x1C)) * (int32_t)0x24u); /* 0x1507C1B0: imul ecx, dword ptr [ebp - 0x1c], 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507C1B4: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
L_1507C1BB:
    /* test MEM8(ecx + 0x8), 8 */ /* 0x1507C1BB: test byte ptr [ecx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C1C5; /* 0x1507C1BF: je 0x1507c1c5 */
L_1507C1C1:
    eax = ebx; /* 0x1507C1C1: mov eax, ebx */
    goto L_1507C1C8; /* 0x1507C1C3: jmp 0x1507c1c8 */
L_1507C1C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C1C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C1C7: inc eax */
    _flag_k = FK_INC;
L_1507C1C8:
    /* test eax, eax */ /* 0x1507C1C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C1E9; /* 0x1507C1CA: jne 0x1507c1e9 */
L_1507C1CC:
    RECOMP_CALL(sub_15036430); /* 0x1507C1CC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C1D1: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x1507C1D7: push ebx */
    PUSH32(esp, ebx); /* 0x1507C1D8: push ebx */
    PUSH32(esp, ebx); /* 0x1507C1D9: push ebx */
    PUSH32(esp, ebx); /* 0x1507C1DA: push ebx */
    PUSH32(esp, ebx); /* 0x1507C1DB: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1507C1DC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C1E1: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x1507C1E4: mov edi, ebx */
    MEM32(ebp + (-0x24)) = edi; /* 0x1507C1E6: mov dword ptr [ebp - 0x24], edi */
L_1507C1E9:
    /* test edi, edi */ /* 0x1507C1E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C23B; /* 0x1507C1EB: je 0x1507c23b */
L_1507C1ED:
    eax = MEM32(ebp + (-0x20)); /* 0x1507C1ED: mov eax, dword ptr [ebp - 0x20] */
L_1507C1F0:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1507C1F0: sub dword ptr [ebp + 0xc], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507C239; /* 0x1507C1F4: je 0x1507c239 */
L_1507C1F6:
    eax = MEM32(esi + 0x4); /* 0x1507C1F6: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507C1F9: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = eax; /* 0x1507C1FC: mov dword ptr [esi + 4], eax */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C20B; /* 0x1507C1FF: js 0x1507c20b */
L_1507C201:
    eax = MEM32(esi); /* 0x1507C201: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1507C203: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C206: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x1507C207: mov dword ptr [esi], eax */
    goto L_1507C214; /* 0x1507C209: jmp 0x1507c214 */
L_1507C20B:
    PUSH32(esp, esi); /* 0x1507C20B: push esi */
    RECOMP_CALL(sub_15076950); /* 0x1507C20C: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C211: pop ecx */
    ecx = eax; /* 0x1507C212: mov ecx, eax */
L_1507C214:
    MEM32(ebp + (-0x28)) = ecx; /* 0x1507C214: mov dword ptr [ebp - 0x28], ecx */
    eax = MEM32(ebp + (-0x20)); /* 0x1507C217: mov eax, dword ptr [ebp - 0x20] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1507C21A: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C22B; /* 0x1507C21D: jne 0x1507c22b */
L_1507C21F:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1507C21F: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C239; /* 0x1507C222: jne 0x1507c239 */
L_1507C224:
    edi = ebx; /* 0x1507C224: mov edi, ebx */
    MEM32(ebp + (-0x24)) = edi; /* 0x1507C226: mov dword ptr [ebp - 0x24], edi */
    goto L_1507C23B; /* 0x1507C229: jmp 0x1507c23b */
L_1507C22B:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1507C22B: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C22D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x1507C22E: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x1507C231: mov dword ptr [ebp - 0x30], eax */
    /* cmp LO8(ecx), 0xAu */ /* 0x1507C234: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C1F0; /* 0x1507C237: jne 0x1507c1f0 */
L_1507C239:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507C239: mov byte ptr [eax], bl */
L_1507C23B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C23B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C25F); /* 0x1507C242: call 0x1507c25f */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1507C247: mov eax, edi */
L_1507C249:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C249: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C24C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C253: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C254: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C255: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C256: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C257: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C258: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C25F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C25Fu);

L_1507C25F:
    PUSH32(esp, esi); /* 0x1507C25F: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507C260: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C265: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C266: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C26D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C26Du);

L_1507C26D:
    edi = edi; /* 0x1507C26D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507C26F: push ebp */
    ebp = esp; /* 0x1507C270: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1507C272: push ecx */
    PUSH32(esp, ecx); /* 0x1507C273: push ecx */
    PUSH32(esp, ebx); /* 0x1507C274: push ebx */
    PUSH32(esp, esi); /* 0x1507C275: push esi */
    PUSH32(esp, edi); /* 0x1507C276: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1507C277: mov edi, dword ptr [ebp + 8] */
    ebx = 0x150BCEA0u; /* 0x1507C27A: mov ebx, 0x150bcea0 */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1507C27F: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C403; /* 0x1507C283: jne 0x1507c403 */
L_1507C289:
    PUSH32(esp, edi); /* 0x1507C289: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C28A: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C28F: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C290: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C2C5; /* 0x1507C293: je 0x1507c2c5 */
L_1507C295:
    PUSH32(esp, edi); /* 0x1507C295: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C296: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C29B: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C29C: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C2C5; /* 0x1507C29F: je 0x1507c2c5 */
L_1507C2A1:
    PUSH32(esp, edi); /* 0x1507C2A1: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C2A2: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507C2A7: mov esi, eax */
    PUSH32(esp, edi); /* 0x1507C2A9: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1507C2AA: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_15076A90); /* 0x1507C2AD: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C2B2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1507C2B3: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1507C2B6: pop ecx */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1507C2B7: imul ecx, eax, 0x24 */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1507C2BA: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1507C2C1: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_1507C2C7; /* 0x1507C2C3: jmp 0x1507c2c7 */
L_1507C2C5:
    eax = ebx; /* 0x1507C2C5: mov eax, ebx */
L_1507C2C7:
    /* test MEM8(eax + 0x8), 3 */ /* 0x1507C2C7: test byte ptr [eax + 8], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C31C; /* 0x1507C2CB: je 0x1507c31c */
L_1507C2CD:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x1507C2CD: sub dword ptr [edi + 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C2DD; /* 0x1507C2D1: js 0x1507c2dd */
L_1507C2D3:
    eax = MEM32(edi); /* 0x1507C2D3: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1507C2D5: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C2D8: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1507C2D9: mov dword ptr [edi], eax */
    goto L_1507C2E6; /* 0x1507C2DB: jmp 0x1507c2e6 */
L_1507C2DD:
    PUSH32(esp, edi); /* 0x1507C2DD: push edi */
    RECOMP_CALL(sub_15076950); /* 0x1507C2DE: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C2E3: pop ecx */
    ecx = eax; /* 0x1507C2E4: mov ecx, eax */
L_1507C2E6:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1507C2E6: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C38A; /* 0x1507C2E9: je 0x1507c38a */
L_1507C2EF:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x1507C2EF: sub dword ptr [edi + 4], 1 */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x1507C2F3: mov byte ptr [ebp - 4], cl */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C302; /* 0x1507C2F6: js 0x1507c302 */
L_1507C2F8:
    eax = MEM32(edi); /* 0x1507C2F8: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1507C2FA: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C2FD: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1507C2FE: mov dword ptr [edi], eax */
    goto L_1507C30B; /* 0x1507C300: jmp 0x1507c30b */
L_1507C302:
    PUSH32(esp, edi); /* 0x1507C302: push edi */
    RECOMP_CALL(sub_15076950); /* 0x1507C303: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C308: pop ecx */
    ecx = eax; /* 0x1507C309: mov ecx, eax */
L_1507C30B:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1507C30B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C38A; /* 0x1507C30E: je 0x1507c38a */
L_1507C310:
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x1507C310: mov byte ptr [ebp - 3], cl */
L_1507C313:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x1507C313: mov ax, word ptr [ebp - 4] */
    goto L_1507C41C; /* 0x1507C317: jmp 0x1507c41c */
L_1507C31C:
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1507C31C: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C403; /* 0x1507C320: jne 0x1507c403 */
L_1507C326:
    PUSH32(esp, edi); /* 0x1507C326: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C327: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C32C: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C32D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C360; /* 0x1507C330: je 0x1507c360 */
L_1507C332:
    PUSH32(esp, edi); /* 0x1507C332: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C333: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C338: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C339: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C360; /* 0x1507C33C: je 0x1507c360 */
L_1507C33E:
    PUSH32(esp, edi); /* 0x1507C33E: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C33F: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507C344: mov esi, eax */
    PUSH32(esp, edi); /* 0x1507C346: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1507C347: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_15076A90); /* 0x1507C34A: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi * 4 + 0x150BEBC0); /* 0x1507C34F: mov ebx, dword ptr [esi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1507C356: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1507C359: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507C35A: pop ecx */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1507C35B: imul ecx, eax, 0x24 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1507C35E: add ebx, ecx */
    _flag_k = FK_ADD;
L_1507C360:
    /* cmp MEM8(ebx + 0x4), 0 */ /* 0x1507C360: cmp byte ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1507C403; /* 0x1507C364: jge 0x1507c403 */
L_1507C36A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507C36A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1507C36C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - esi; /* 0x1507C36D: sub dword ptr [edi + 4], esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C37C; /* 0x1507C370: js 0x1507c37c */
L_1507C372:
    eax = MEM32(edi); /* 0x1507C372: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1507C374: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C377: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1507C378: mov dword ptr [edi], eax */
    goto L_1507C385; /* 0x1507C37A: jmp 0x1507c385 */
L_1507C37C:
    PUSH32(esp, edi); /* 0x1507C37C: push edi */
    RECOMP_CALL(sub_15076950); /* 0x1507C37D: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C382: pop ecx */
    ecx = eax; /* 0x1507C383: mov ecx, eax */
L_1507C385:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1507C385: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C394; /* 0x1507C388: jne 0x1507c394 */
L_1507C38A:
    eax = 0xFFFFu; /* 0x1507C38A: mov eax, 0xffff */
    goto L_1507C41C; /* 0x1507C38F: jmp 0x1507c41c */
L_1507C394:
    eax = (uint32_t)LO8(ecx); /* 0x1507C394: movzx eax, cl */
    PUSH32(esp, eax); /* 0x1507C397: push eax */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ecx)); /* 0x1507C398: mov byte ptr [ebp - 8], cl */
    RECOMP_CALL(sub_150316F0); /* 0x1507C39B: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C3A0: pop ecx */
    /* test eax, eax */ /* 0x1507C3A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C3DC; /* 0x1507C3A3: je 0x1507c3dc */
L_1507C3A5:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x1507C3A5: sub dword ptr [edi + 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C3B5; /* 0x1507C3A9: js 0x1507c3b5 */
L_1507C3AB:
    eax = MEM32(edi); /* 0x1507C3AB: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM8(eax); /* 0x1507C3AD: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C3B0: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1507C3B1: mov dword ptr [edi], eax */
    goto L_1507C3BE; /* 0x1507C3B3: jmp 0x1507c3be */
L_1507C3B5:
    PUSH32(esp, edi); /* 0x1507C3B5: push edi */
    RECOMP_CALL(sub_15076950); /* 0x1507C3B6: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C3BB: pop ecx */
    ecx = eax; /* 0x1507C3BC: mov ecx, eax */
L_1507C3BE:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1507C3BE: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C3D6; /* 0x1507C3C1: jne 0x1507c3d6 */
L_1507C3C3:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x8)); /* 0x1507C3C3: movsx eax, byte ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1507C3C7: push edi */
    PUSH32(esp, eax); /* 0x1507C3C8: push eax */
    RECOMP_CALL(sub_1507E200); /* 0x1507C3C9: call 0x1507e200 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C3CE: pop ecx */
    eax = 0xFFFFu; /* 0x1507C3CF: mov eax, 0xffff */
    goto L_1507C41B; /* 0x1507C3D4: jmp 0x1507c41b */
L_1507C3D6:
    PUSH32(esp, 2); /* 0x1507C3D6: push 2 */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x1507C3D8: mov byte ptr [ebp - 7], cl */
    esi = POP32_VAL(esp); /* 0x1507C3DB: pop esi */
L_1507C3DC:
    PUSH32(esp, esi); /* 0x1507C3DC: push esi */
    eax = ebp + (-0x8); /* 0x1507C3DD: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1507C3E0: push eax */
    eax = ebp + (-0x4); /* 0x1507C3E1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1507C3E4: push eax */
    RECOMP_CALL(sub_150320D0); /* 0x1507C3E5: call 0x150320d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507C3EA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C3ED: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C313; /* 0x1507C3F0: jne 0x1507c313 */
L_1507C3F6:
    RECOMP_CALL(sub_15036430); /* 0x1507C3F6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1507C3FB: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_1507C38A; /* 0x1507C401: jmp 0x1507c38a */
L_1507C403:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 0xFFFFFFFEu; /* 0x1507C403: add dword ptr [edi + 4], -2 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_1507C415; /* 0x1507C407: js 0x1507c415 */
L_1507C409:
    ecx = MEM32(edi); /* 0x1507C409: mov ecx, dword ptr [edi] */
    eax = (uint32_t)MEM16(ecx); /* 0x1507C40B: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1507C40E: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x1507C411: mov dword ptr [edi], ecx */
    goto L_1507C41C; /* 0x1507C413: jmp 0x1507c41c */
L_1507C415:
    PUSH32(esp, edi); /* 0x1507C415: push edi */
    RECOMP_CALL(sub_1508B2C1); /* 0x1507C416: call 0x1508b2c1 */
    RECOMP_FLAGS_IN();
L_1507C41B:
    ecx = POP32_VAL(esp); /* 0x1507C41B: pop ecx */
L_1507C41C:
    edi = POP32_VAL(esp); /* 0x1507C41C: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C41D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C41E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C41F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C420: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C430u);

L_1507C430:
    PUSH32(esp, 0xCu); /* 0x1507C430: push 0xc */
    PUSH32(esp, 0x150B12E8u); /* 0x1507C432: push 0x150b12e8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507C437: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1507C43C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507C43F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C464; /* 0x1507C441: jne 0x1507c464 */
L_1507C443:
    RECOMP_CALL(sub_15036430); /* 0x1507C443: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C448: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C44E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507C450: push eax */
    PUSH32(esp, eax); /* 0x1507C451: push eax */
    PUSH32(esp, eax); /* 0x1507C452: push eax */
    PUSH32(esp, eax); /* 0x1507C453: push eax */
    PUSH32(esp, eax); /* 0x1507C454: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507C455: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C45A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x1507C45D: mov eax, 0xffff */
    goto L_1507C48C; /* 0x1507C462: jmp 0x1507c48c */
L_1507C464:
    PUSH32(esp, esi); /* 0x1507C464: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x1507C465: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C46A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507C46B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507C46F: push esi */
    RECOMP_CALL(sub_1507C26D); /* 0x1507C470: call 0x1507c26d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C475: pop ecx */
    SET_LO16(edi, LO16(eax)); /* 0x1507C476: mov di, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(edi)); /* 0x1507C479: mov word ptr [ebp - 0x1c], di */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C47D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C4A3); /* 0x1507C484: call 0x1507c4a3 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1507C489: mov ax, di */
L_1507C48C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C48C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C48F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C496: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C497: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C498: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C499: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C49A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C49B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C4A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C4A3u);

L_1507C4A3:
    PUSH32(esp, esi); /* 0x1507C4A3: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507C4A4: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C4A9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C4AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C4C0u);

    goto L_1507C4C0;
L_1507C430:
    PUSH32(esp, 0xCu); /* 0x1507C430: push 0xc */
    PUSH32(esp, 0x150B12E8u); /* 0x1507C432: push 0x150b12e8 */
    RECOMP_CALL(sub_1505E988); /* 0x1507C437: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1507C43C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1507C43F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C464; /* 0x1507C441: jne 0x1507c464 */
L_1507C443:
    RECOMP_CALL(sub_15036430); /* 0x1507C443: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C448: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C44E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507C450: push eax */
    PUSH32(esp, eax); /* 0x1507C451: push eax */
    PUSH32(esp, eax); /* 0x1507C452: push eax */
    PUSH32(esp, eax); /* 0x1507C453: push eax */
    PUSH32(esp, eax); /* 0x1507C454: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507C455: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C45A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0xFFFFu; /* 0x1507C45D: mov eax, 0xffff */
    goto L_1507C48C; /* 0x1507C462: jmp 0x1507c48c */
L_1507C464:
    PUSH32(esp, esi); /* 0x1507C464: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x1507C465: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C46A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1507C46B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1507C46F: push esi */
    RECOMP_CALL(sub_1507C26D); /* 0x1507C470: call 0x1507c26d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C475: pop ecx */
    SET_LO16(edi, LO16(eax)); /* 0x1507C476: mov di, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(edi)); /* 0x1507C479: mov word ptr [ebp - 0x1c], di */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C47D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C4A3); /* 0x1507C484: call 0x1507c4a3 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(edi)); /* 0x1507C489: mov ax, di */
L_1507C48C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C48C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C48F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C496: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C497: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C498: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C499: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C49A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C49B: ret  */
L_1507C4C0:
    edi = edi; /* 0x1507C4C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507C4C2: push ebp */
    ebp = esp; /* 0x1507C4C3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1507C4C5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1507C430; /* 0x1507C4C6: jmp 0x1507c430 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1507C4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C4E0u);

L_1507C4E0:
    PUSH32(esp, 0x1Cu); /* 0x1507C4E0: push 0x1c */
    PUSH32(esp, 0x150B1308u); /* 0x1507C4E2: push 0x150b1308 */
    RECOMP_CALL(sub_1505E988); /* 0x1507C4E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1507C4EC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507C4EF: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x1507C4F2: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x1507C4F5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C504; /* 0x1507C4F7: jne 0x1507c504 */
L_1507C4F9:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1507C4F9: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C504; /* 0x1507C4FC: je 0x1507c504 */
L_1507C4FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507C4FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1507C500: mov eax, esi */
    goto L_1507C509; /* 0x1507C502: jmp 0x1507c509 */
L_1507C504:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C504: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C506: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507C507: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507C509:
    /* test eax, eax */ /* 0x1507C509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C529; /* 0x1507C50B: jne 0x1507c529 */
L_1507C50D:
    RECOMP_CALL(sub_15036430); /* 0x1507C50D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C512: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507C518: push esi */
    PUSH32(esp, esi); /* 0x1507C519: push esi */
    PUSH32(esp, esi); /* 0x1507C51A: push esi */
    PUSH32(esp, esi); /* 0x1507C51B: push esi */
    PUSH32(esp, esi); /* 0x1507C51C: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507C51D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C522: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507C525:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C525: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507C59C; /* 0x1507C527: jmp 0x1507c59c */
L_1507C529:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507C529: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1507C50D; /* 0x1507C52D: jl 0x1507c50d */
L_1507C52F:
    ebx = MEM32(ebp + 0x10); /* 0x1507C52F: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1507C532: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C50D; /* 0x1507C534: je 0x1507c50d */
L_1507C536:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1507C536: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C525; /* 0x1507C53A: je 0x1507c525 */
L_1507C53C:
    MEM32(ebp + (-0x24)) = ebx; /* 0x1507C53C: mov dword ptr [ebp - 0x24], ebx */
    PUSH32(esp, ebx); /* 0x1507C53F: push ebx */
    RECOMP_CALL(sub_1506A946); /* 0x1507C540: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C545: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507C546: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x1507C549: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C58E; /* 0x1507C54B: je 0x1507c58e */
L_1507C54D:
    eax = edi; /* 0x1507C54D: mov eax, edi */
L_1507C54F:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1507C54F: sub dword ptr [ebp + 0xc], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1507C589; /* 0x1507C553: je 0x1507c589 */
L_1507C555:
    PUSH32(esp, ebx); /* 0x1507C555: push ebx */
    RECOMP_CALL(sub_1507C26D); /* 0x1507C556: call 0x1507c26d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C55B: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1507C55C: movzx ecx, ax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1507C55F: mov dword ptr [ebp - 0x28], ecx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1507C562: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp ecx, 0xFFFFu */ /* 0x1507C565: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C578; /* 0x1507C56B: jne 0x1507c578 */
L_1507C56D:
    /* cmp eax, edi */ /* 0x1507C56D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C589; /* 0x1507C56F: jne 0x1507c589 */
L_1507C571:
    edi = esi; /* 0x1507C571: mov edi, esi */
    MEM32(ebp + (-0x20)) = edi; /* 0x1507C573: mov dword ptr [ebp - 0x20], edi */
    goto L_1507C58E; /* 0x1507C576: jmp 0x1507c58e */
L_1507C578:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1507C578: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1507C57B: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507C57E: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1507C581: mov dword ptr [ebp - 0x2c], eax */
    /* cmp ecx, 0xAu */ /* 0x1507C584: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507C54F; /* 0x1507C587: jne 0x1507c54f */
L_1507C589:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1507C589: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1507C58B: mov word ptr [eax], cx */
L_1507C58E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C58E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C5B2); /* 0x1507C595: call 0x1507c5b2 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1507C59A: mov eax, edi */
L_1507C59C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C59C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C59F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C5A6: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C5A7: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C5A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C5A9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C5AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C5AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C5B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C5B2u);

L_1507C5B2:
    PUSH32(esp, ebx); /* 0x1507C5B2: push ebx */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507C5B3: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C5B8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C5B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C5C0u);

L_1507C5C0:
    PUSH32(esp, 0x10u); /* 0x1507C5C0: push 0x10 */
    PUSH32(esp, 0x150B1328u); /* 0x1507C5C2: push 0x150b1328 */
    RECOMP_CALL(sub_1505E988); /* 0x1507C5C7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507C5CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507C5CE: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0xC); /* 0x1507C5D1: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1507C5D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C5F8; /* 0x1507C5D6: jne 0x1507c5f8 */
L_1507C5D8:
    RECOMP_CALL(sub_15036430); /* 0x1507C5D8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C5DD: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507C5E3: push esi */
    PUSH32(esp, esi); /* 0x1507C5E4: push esi */
    PUSH32(esp, esi); /* 0x1507C5E5: push esi */
    PUSH32(esp, esi); /* 0x1507C5E6: push esi */
    PUSH32(esp, esi); /* 0x1507C5E7: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507C5E8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C5ED: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507C5F0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507C6D3; /* 0x1507C5F3: jmp 0x1507c6d3 */
L_1507C5F8:
    PUSH32(esp, edi); /* 0x1507C5F8: push edi */
    RECOMP_CALL(sub_1506A946); /* 0x1507C5F9: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C5FE: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1507C5FF: mov dword ptr [ebp - 4], esi */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1507C602: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C673; /* 0x1507C606: jne 0x1507c673 */
L_1507C608:
    PUSH32(esp, edi); /* 0x1507C608: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x1507C609: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C60E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C60F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C637; /* 0x1507C612: je 0x1507c637 */
L_1507C614:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C614: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C637; /* 0x1507C617: je 0x1507c637 */
L_1507C619:
    edx = eax; /* 0x1507C619: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507C61B: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = eax; /* 0x1507C61E: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1507C620: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1507C623: imul ecx, ebx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507C626: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507C62D: mov dword ptr [ebp - 0x20], ecx */
    ecx = 0x150BCEA0u; /* 0x1507C630: mov ecx, 0x150bcea0 */
    goto L_1507C649; /* 0x1507C635: jmp 0x1507c649 */
L_1507C637:
    ecx = 0x150BCEA0u; /* 0x1507C637: mov ecx, 0x150bcea0 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507C63C: mov dword ptr [ebp - 0x20], ecx */
    edx = eax; /* 0x1507C63F: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507C641: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = eax; /* 0x1507C644: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1507C646: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507C649:
    edi = MEM32(ebp + (-0x20)); /* 0x1507C649: mov edi, dword ptr [ebp - 0x20] */
    /* test MEM8(edi + 0x8), 3 */ /* 0x1507C64C: test byte ptr [edi + 8], 3 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0xC); /* 0x1507C650: mov edi, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C66F; /* 0x1507C653: jne 0x1507c66f */
L_1507C655:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507C655: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C669; /* 0x1507C658: je 0x1507c669 */
L_1507C65A:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1507C65A: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507C669; /* 0x1507C65D: je 0x1507c669 */
L_1507C65F:
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1507C65F: imul ecx, ebx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507C662: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
L_1507C669:
    /* test MEM8(ecx + 0x8), 8 */ /* 0x1507C669: test byte ptr [ecx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507C673; /* 0x1507C66D: je 0x1507c673 */
L_1507C66F:
    eax = esi; /* 0x1507C66F: mov eax, esi */
    goto L_1507C676; /* 0x1507C671: jmp 0x1507c676 */
L_1507C673:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507C673: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1507C675: inc eax */
    _flag_k = FK_INC;
L_1507C676:
    /* test eax, eax */ /* 0x1507C676: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C698; /* 0x1507C678: jne 0x1507c698 */
L_1507C67A:
    RECOMP_CALL(sub_15036430); /* 0x1507C67A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507C67F: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1507C685: push esi */
    PUSH32(esp, esi); /* 0x1507C686: push esi */
    PUSH32(esp, esi); /* 0x1507C687: push esi */
    PUSH32(esp, esi); /* 0x1507C688: push esi */
    PUSH32(esp, esi); /* 0x1507C689: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1507C68A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507C68F: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1507C692: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507C695: mov dword ptr [ebp - 0x1c], esi */
L_1507C698:
    /* test esi, esi */ /* 0x1507C698: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507C6C5; /* 0x1507C69A: jne 0x1507c6c5 */
L_1507C69C:
    eax = MEM32(edi + 0x4); /* 0x1507C69C: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1507C69F: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(edi + 0x4) = eax; /* 0x1507C6A2: mov dword ptr [edi + 4], eax */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1507C6B5; /* 0x1507C6A5: js 0x1507c6b5 */
L_1507C6A7:
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x1507C6A7: mov cl, byte ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x1507C6AA: mov eax, dword ptr [edi] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1507C6AC: mov byte ptr [eax], cl */
    esi = (uint32_t)LO8(ecx); /* 0x1507C6AE: movzx esi, cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1507C6B1: inc dword ptr [edi] */
    _flag_k = FK_INC;
    goto L_1507C6C2; /* 0x1507C6B3: jmp 0x1507c6c2 */
L_1507C6B5:
    PUSH32(esp, edi); /* 0x1507C6B5: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507C6B6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15076AD0); /* 0x1507C6B9: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C6BE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507C6BF: pop ecx */
    esi = eax; /* 0x1507C6C0: mov esi, eax */
L_1507C6C2:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507C6C2: mov dword ptr [ebp - 0x1c], esi */
L_1507C6C5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507C6C5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507C6E9); /* 0x1507C6CC: call 0x1507c6e9 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1507C6D1: mov eax, esi */
L_1507C6D3:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507C6D3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507C6D6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507C6DD: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507C6DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1507C6DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1507C6E0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1507C6E1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C6E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507C6E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507C6E9u);

L_1507C6E9:
    PUSH32(esp, edi); /* 0x1507C6E9: push edi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507C6EA: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507C6EF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507C6F0: ret  */
    RECOMP_REGS_OUT();
}
