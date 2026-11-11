#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_150AF78B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF78Bu);

L_150AF78B:
    edi = edi; /* 0x150AF78B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150AF78D: push ebp */
    ebp = esp; /* 0x150AF78E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150AF790: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150AF793: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150AF796: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0258)); /* 0x150AF799: call dword ptr [0x150c0258] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150AF79F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150AF7A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150AF7A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF7A7u);

L_150AF7A7:
    PUSH32(esp, 0x00030000u); /* 0x150AF7A7: push 0x30000 */
    PUSH32(esp, 0x00010000u); /* 0x150AF7AC: push 0x10000 */
    RECOMP_CALL(sub_1509F6F0); /* 0x150AF7B1: call 0x1509f6f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150AF7B6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150AF7B7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150AF7B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150AF7BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF7BFu);

    goto L_150AF7BF;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF7BF:
    /* nop */ /* 0x150AF7BF: nop  */
    /* nop */ /* 0x150AF7C0: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF7C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF7C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x150AF7C8: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF7CB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF7CD: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFBF4u; /* 0x150AF7D2: mov eax, 0x150afbf4 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF7D7: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF7E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF7E2u);

    goto L_150AF7E2;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF7E2:
    /* nop */ /* 0x150AF7E2: nop  */
    /* nop */ /* 0x150AF7E3: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF7E4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF7E8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x150AF7EB: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF7EE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF7F0: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFBF4u; /* 0x150AF7F5: mov eax, 0x150afbf4 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF7FA: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF805(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF805u);

    goto L_150AF805;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF805:
    /* nop */ /* 0x150AF805: nop  */
    /* nop */ /* 0x150AF806: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF807: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF80B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x150AF80E: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF811: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF813: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFCDCu; /* 0x150AF818: mov eax, 0x150afcdc */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF81D: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF828u);

    goto L_150AF828;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF828:
    /* nop */ /* 0x150AF828: nop  */
    /* nop */ /* 0x150AF829: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF82A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF82E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x150AF831: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF834: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF836: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B0244u; /* 0x150AF83B: mov eax, 0x150b0244 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF840: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF84B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF84Bu);

    goto L_150AF84B;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF84B:
    /* nop */ /* 0x150AF84B: nop  */
    /* nop */ /* 0x150AF84C: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF84D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF851: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x150AF854: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF857: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF859: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B029Cu; /* 0x150AF85E: mov eax, 0x150b029c */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF863: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF86E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF86Eu);

    goto L_150AF86E;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF86E:
    /* nop */ /* 0x150AF86E: nop  */
    /* nop */ /* 0x150AF86F: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF870: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF874: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x150AF877: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF87A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF87C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFFBCu; /* 0x150AF881: mov eax, 0x150affbc */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF886: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF891(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF891u);

    goto L_150AF891;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF891:
    /* nop */ /* 0x150AF891: nop  */
    /* nop */ /* 0x150AF892: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF893: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF897: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x150AF89A: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF89D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF89F: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFFBCu; /* 0x150AF8A4: mov eax, 0x150affbc */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF8A9: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF8B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF8B4u);

    goto L_150AF8B4;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF8B4:
    /* nop */ /* 0x150AF8B4: nop  */
    /* nop */ /* 0x150AF8B5: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF8B6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF8BA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x150AF8BD: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF8C0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF8C2: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFBF4u; /* 0x150AF8C7: mov eax, 0x150afbf4 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF8CC: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF8D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF8D7u);

    goto L_150AF8D7;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF8D7:
    /* nop */ /* 0x150AF8D7: nop  */
    /* nop */ /* 0x150AF8D8: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF8D9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF8DD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x150AF8E0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF8E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF8E5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFBF4u; /* 0x150AF8EA: mov eax, 0x150afbf4 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF8EF: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF8FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF8FAu);

    goto L_150AF8FA;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF8FA:
    /* nop */ /* 0x150AF8FA: nop  */
    /* nop */ /* 0x150AF8FB: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF8FC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF900: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x150AF903: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF906: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF908: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B01B8u; /* 0x150AF90D: mov eax, 0x150b01b8 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF912: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF91D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF91Du);

    goto L_150AF91D;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF91D:
    /* nop */ /* 0x150AF91D: nop  */
    /* nop */ /* 0x150AF91E: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF91F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF923: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x150AF926: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF929: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF92B: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B01ECu; /* 0x150AF930: mov eax, 0x150b01ec */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF935: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF940u);

    goto L_150AF940;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF940:
    /* nop */ /* 0x150AF940: nop  */
    /* nop */ /* 0x150AF941: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF942: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF946: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x150AF949: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF94C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF94E: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B01B8u; /* 0x150AF953: mov eax, 0x150b01b8 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF958: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF963u);

    goto L_150AF963;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF963:
    /* nop */ /* 0x150AF963: nop  */
    /* nop */ /* 0x150AF964: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF965: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF969: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x150AF96C: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF96F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF971: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFFBCu; /* 0x150AF976: mov eax, 0x150affbc */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF97B: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF986(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF986u);

    goto L_150AF986;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF986:
    /* nop */ /* 0x150AF986: nop  */
    /* nop */ /* 0x150AF987: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF988: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF98C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x150AF98F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF992: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF994: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFFBCu; /* 0x150AF999: mov eax, 0x150affbc */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF99E: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AF9A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AF9A9u);

    goto L_150AF9A9;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AF9A9:
    /* nop */ /* 0x150AF9A9: nop  */
    /* nop */ /* 0x150AF9AA: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AF9AB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AF9AF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x150AF9B2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AF9B5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AF9B7: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B018Cu; /* 0x150AF9BC: mov eax, 0x150b018c */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AF9C1: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AFA04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFA04u);

    goto L_150AFA04;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AFA04:
    /* nop */ /* 0x150AFA04: nop  */
    /* nop */ /* 0x150AFA05: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AFA06: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AFA0A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x150AFA0D: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AFA10: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AFA12: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B00D0u; /* 0x150AFA17: mov eax, 0x150b00d0 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AFA1C: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AFA57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFA57u);

    goto L_150AFA57;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AFA57:
    /* nop */ /* 0x150AFA57: nop  */
    /* nop */ /* 0x150AFA58: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AFA59: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AFA5D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x150AFA60: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AFA63: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AFA65: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B0048u; /* 0x150AFA6A: mov eax, 0x150b0048 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AFA6F: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AFA87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFA87u);

    goto L_150AFA87;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AFA87:
    /* nop */ /* 0x150AFA87: nop  */
    /* nop */ /* 0x150AFA88: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AFA89: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AFA8D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x150AFA90: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AFA93: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AFA95: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150B0134u; /* 0x150AFA9A: mov eax, 0x150b0134 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AFA9F: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AFAB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFAB7u);

    goto L_150AFAB7;
L_1503BD00:
    PUSH32(esp, ebp); /* 0x1503BD00: push ebp */
    ebp = esp; /* 0x1503BD01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1503BD03: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503BD06: push ebx */
    PUSH32(esp, esi); /* 0x1503BD07: push esi */
    PUSH32(esp, edi); /* 0x1503BD08: push edi */
    _df = 1; /* 0x1503BD09: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1503BD0A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BD0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503BD0F: push eax */
    PUSH32(esp, eax); /* 0x1503BD10: push eax */
    PUSH32(esp, eax); /* 0x1503BD11: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1503BD12: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503BD15: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BD18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BD1B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BD1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BD21: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BD26: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503BD29: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x1503BD2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1503BD2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503BD2E: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x1503BD2F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1503BD32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1503BD34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BD35: ret  */
L_150AFAB7:
    /* nop */ /* 0x150AFAB7: nop  */
    /* nop */ /* 0x150AFAB8: nop  */
    edx = MEM32(esp + 0x8); /* 0x150AFAB9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x150AFABD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x150AFAC0: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150AFAC3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150AFAC5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = 0x150AFFF0u; /* 0x150AFACA: mov eax, 0x150afff0 */
    RECOMP_BACKEDGE();
    goto L_1503BD00; /* 0x150AFACF: jmp 0x1503bd00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150AFAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFAE0u);

L_150AFAE0:
    PUSH32(esp, 0); /* 0x150AFAE0: push 0 */
    eax = 0x150AF963u; /* 0x150AFAE2: mov eax, 0x150af963 */
    RECOMP_CALL(sub_15041E96); /* 0x150AFAE7: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150AFAEC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(0x150BDB60); /* 0x150AFAF0: mov ecx, dword ptr [0x150bdb60] */
    /* test ecx, ecx */ /* 0x150AFAF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150AFAFF; /* 0x150AFAF8: je 0x150afaff */
L_150AFAFA:
    RECOMP_CALL(sub_15042CE7); /* 0x150AFAFA: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_150AFAFF:
    RECOMP_CALL(sub_15041E7C); /* 0x150AFAFF: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150AFB04: ret  */
    RECOMP_REGS_OUT();
}

void sub_150AFB18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFB18u);

L_150AFB18:
    /* in: no port I/O under Win32 */ /* 0x150AFB18: in al, 0xff */
    RECOMP_ITAIL(0x150AFB1Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFBF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFBF4u);

L_150AFBF4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x1993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x1993)); /* 0x150AFBF4: and al, byte ptr [0x1993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFBFA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFBFC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFBFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFC12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFE000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFE000000u; /* 0x150AFC14: add eax, 0xfe000000 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x150AFC19u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFCDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFCDCu);

L_150AFCDC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150AFCDC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x01150AFCu; /* 0x150AFCE4: mov eax, 0x1150afc */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x150AFCEB: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _df = 1; /* 0x150AFCED: cld  */
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0)); /* 0x150AFCEE: or dl, byte ptr [0] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCF4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCF8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCFA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150AFCFC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFCFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150AFD00u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFD1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFD1Cu);

L_150AFD1C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFD1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFD1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x1503)) << 24; _flag_b = (uint32_t)(0) << 24;
    MEM8(ecx + 0x1503) = (uint8_t)(MEM8(ecx + 0x1503) & 0); /* 0x150AFD20: and byte ptr [ecx + 0x1503], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi * 8 + 0x2150A)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi * 8 + 0x2150A) = (uint8_t)(MEM8(edi * 8 + 0x2150A) + HI8(ecx)); /* 0x150AFD27: add byte ptr [edi*8 + 0x2150a], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFD2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(ecx), HI8(ebx) */ /* 0x150AFD30: cmp ch, bh */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0x150AFD54))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0x150AFD54))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0x150AFD54)); /* 0x150AFD32: or dl, byte ptr [0x150afd54] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFD38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFD3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x150AFD3C: in al, 0xcc */
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150AFD3E: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x150AFD44u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFE8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFE8Cu);

L_150AFE8C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFE8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFE8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150AFE90u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFEE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFEE4u);

L_150AFEE4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFEE4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFEE6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150AFEE8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFF00u);

L_150AFF00:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFF00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFF02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebx + 0x1503), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150AFF04: adc byte ptr [ebx + 0x1503], bl */
      MEM8(ebx + 0x1503) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFF0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = HI8(ebx), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150AFF0C: adc bh, bh */
      SET_HI8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0x2))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0x2))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0x2)); /* 0x150AFF0E: or dl, byte ptr [2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = LO8(eax), _sb = 0xFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150AFF14: sbb al, 0xff */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0x150AFD54))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0x150AFD54))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0x150AFD54)); /* 0x150AFF16: or dl, byte ptr [0x150afd54] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFF1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFF1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* test HI8(ecx), LO8(ecx) */ /* 0x150AFF20: test ch, cl */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150AFF22: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x150AFF28u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFFBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFFBCu);

L_150AFFBC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x150AFFBC: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFC2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(eax, 0xFFu); /* 0x150AFFC4: mov ah, 0xff */
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0)); /* 0x150AFFC6: or dl, byte ptr [0] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFCC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFCE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFD0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFD4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFD8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150AFFDC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150AFFE0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150AFFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150AFFF0u);

L_150AFFF0:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150AFFF0: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150AFFF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_150AFFF9; } /* 0x150AFFF8: loopne 0x150afff9 */
    goto L_150AFFFA; /* falls through past a gap */
L_150AFFF9:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x150AFFF9: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    goto L_150AFFFB; /* falls through past a gap */
L_150AFFFA:
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0)); /* 0x150AFFFA: or dl, byte ptr [0] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_150B0000; /* falls through past a gap */
L_150AFFFB:
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150AFFFB: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_150B0000:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0000: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0002: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0004: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0006: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0008: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B000A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B000C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B000E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0010: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0012: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0014: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0016: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x150B0018: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B001A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x02000000u; /* 0x150B001C: add eax, 0x2000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0021: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x150B0023: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x150B0025: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0027: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCDu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xCDu); /* 0x150B002C: add al, 0xcd */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edx | MEM32((-0x28)))); _flag_b = (uint32_t)((edx | MEM32((-0x28))));
    edx = edx | MEM32((-0x28)); /* 0x150B002E: or edx, dword ptr [0xffffffd8] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x150B0034: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 4); /* 0x150B0035: sub al, 4 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = eax, _ab = 0x40u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0037: adc eax, 0x40 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B003C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B003E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0040: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0042: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + eax))); /* 0x150B0044: fld xword ptr [esp + eax] */
    { uint32_t _aa = eax, _ab = 0x19930522u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0047: adc eax, 0x19930522 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x150B004C: push es */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B004D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0xB)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0xB) = (uint8_t)(MEM8(eax + eax + 0xB) + HI8(ecx)); /* 0x150B004F: add byte ptr [eax + eax + 0xb], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0053: adc eax, 1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0058: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B005A: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0060: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0062: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0064: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0066: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0068: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B006A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B006Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0048u);

L_150B0048:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x61993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x61993)); /* 0x150B0048: and al, byte ptr [0x61993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B004E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x150B0050u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x150B0051: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0053: adc eax, 1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B0058: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B005A: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0060: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0062: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0064: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0066: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0068: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B006A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B006Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B00D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B00D0u);

L_150B00D0:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x71993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x71993)); /* 0x150B00D0: and al, byte ptr [0x71993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x150B00D8u, "hlt ");
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x150B00D9: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B00DB: adc eax, 1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x150B00E0: pushfd  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x150B00E1: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B00E3: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B00F0: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B00F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B00F4u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0134(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0134u);

L_150B0134:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x150B0134: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B013A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 1); /* 0x150B013C: sub al, 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B013E: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0144: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0146: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0148: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B014A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B014C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B014E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0154: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150B0158: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0159: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B015B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B015D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B015F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0161: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + (-0xEAFBD6))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + (-0xEAFBD6)) = (uint8_t)(MEM8(esi + (-0xEAFBD6)) + LO8(ebx)); /* 0x150B0163: add byte ptr [esi - 0xeafbd6], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B0169u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B018C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B018Cu);

L_150B018C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150B018C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0192: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x01150B01u); /* 0x150B0194: push 0x1150b01 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0199: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1) = (uint8_t)(MEM8(eax + 0x1) + HI8(ebx)); /* 0x150B019B: add byte ptr [eax + 1], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B019E: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01A4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01A8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B01AC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B01B0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B01B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B01B8u);

L_150B01B8:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x150B01B8: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 1); /* 0x150B01C0: mov al, 1 */
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B01C2: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01CC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01CE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFF000000u; /* 0x150B01D8: add eax, 0xff000000 */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x150B01DDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B01EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B01ECu);

L_150B01EC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150B01EC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] += *(double*)ADDR(ecx); /* 0x150B01F4: fadd qword ptr [ecx] */
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B01F6: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B01FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0200: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0202: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0204: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0206: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0208: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B020A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40000000u; /* 0x150B020C: add eax, 0x40000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0211: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0213: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0215: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0217: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0219: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + 0x23)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x23) = (uint8_t)(MEM8(ebx + 0x23) + LO8(ebx)); /* 0x150B021B: add byte ptr [ebx + 0x23], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x15u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x15u); /* 0x150B021E: add al, 0x15 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B0220u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0244(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0244u);

L_150B0244:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150B0244: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B024A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(edx) = (uint8_t)(MEM8(edx) & LO8(eax)); /* 0x150B024C: and byte ptr [edx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | MEM32(0x1))); _flag_b = (uint32_t)((edx | MEM32(0x1)));
    edx = edx | MEM32(0x1); /* 0x150B024E: or edx, dword ptr [1] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(edx) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx) ^ LO8(eax))) << 24;
    MEM8(edx) = (uint8_t)(MEM8(edx) ^ LO8(eax)); /* 0x150B0254: xor byte ptr [edx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B0256: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B025C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B025E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0260: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0262: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B0264: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0266: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150B0268: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0269: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B026B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B026D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B026F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0271: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(eax)); /* 0x150B0273: add ch, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x1)));
    eax = eax & MEM32(edx + (-0x1)); /* 0x150B0275: and eax, dword ptr [edx - 1] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B027C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B027E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x150B0280u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B029C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B029Cu);

L_150B029C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x150B029C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_150B02A8; /* 0x150B02A4: js 0x150b02a8 */
L_150B02A6:
    _flag_a = (uint32_t)((edx | MEM32(0x1))); _flag_b = (uint32_t)((edx | MEM32(0x1)));
    edx = edx | MEM32(0x1); /* 0x150B02A6: or edx, dword ptr [1] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150B02AC; /* falls through past a gap */
L_150B02A8:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B02A8: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_150B02AC:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x150B02AC: mov byte ptr [edx], al */
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B02AE: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x150B02BC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 0x27u); /* 0x150B02C4: mov al, 0x27 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x15u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x15u); /* 0x150B02C6: add al, 0x15 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x150B02CC: rol byte ptr [edx], 1 */
    _flag_a = (uint32_t)((edx | MEM32(0x2))); _flag_b = (uint32_t)((edx | MEM32(0x2)));
    edx = edx | MEM32(0x2); /* 0x150B02CE: or edx, dword ptr [2] */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += *(double*)ADDR(edx); /* 0x150B02D4: fadd qword ptr [edx] */
    _flag_a = (uint32_t)((edx | MEM32(0x150AFD54))); _flag_b = (uint32_t)((edx | MEM32(0x150AFD54)));
    edx = edx | MEM32(0x150AFD54); /* 0x150B02D6: or edx, dword ptr [0x150afd54] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B02DC: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCDu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xCDu); /* 0x150B02E0: add al, 0xcd */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B02E2: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x150B02E8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B02C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B02C0u);

L_150B02C0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 0x27u); /* 0x150B02C4: mov al, 0x27 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x15u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x15u); /* 0x150B02C6: add al, 0x15 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x150B02CC: rol byte ptr [edx], 1 */
    _flag_a = (uint32_t)((edx | MEM32(0x2))); _flag_b = (uint32_t)((edx | MEM32(0x2)));
    edx = edx | MEM32(0x2); /* 0x150B02CE: or edx, dword ptr [2] */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += *(double*)ADDR(edx); /* 0x150B02D4: fadd qword ptr [edx] */
    _flag_a = (uint32_t)((edx | MEM32(0x150AFD54))); _flag_b = (uint32_t)((edx | MEM32(0x150AFD54)));
    edx = edx | MEM32(0x150AFD54); /* 0x150B02D6: or edx, dword ptr [0x150afd54] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B02DC: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCDu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xCDu); /* 0x150B02E0: add al, 0xcd */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B02E2: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x150B02E8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B02F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B02F8u);

L_150B02F8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02F8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B02FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (1u) _cf = (((MEM8(edi)) >> 7) & 1u); /* 0x150B02FC: shl byte ptr [edi], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edi) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi) = (uint8_t)(MEM8(edi) << 1u); /* 0x150B02FC: shl byte ptr [edi], 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x15u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x15u); /* 0x150B02FE: add al, 0x15 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0300: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x150B0302: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x150B0304: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | MEM32(0x3))); _flag_b = (uint32_t)((edx | MEM32(0x3)));
    edx = edx | MEM32(0x3); /* 0x150B0306: or edx, dword ptr [3] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM8(ebx), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150B030C: sbb byte ptr [ebx], al */
      MEM8(ebx) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edx | MEM32(0x150B0334))); _flag_b = (uint32_t)((edx | MEM32(0x150B0334)));
    edx = edx | MEM32(0x150B0334); /* 0x150B030E: or edx, dword ptr [0x150b0334] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esp); /* 0x150B0314: push esp */
    _df = -1; /* 0x150B0315: std  */
    _flag_a = (uint32_t)((LO8(edx) | MEM8(0))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(0))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(0)); /* 0x150B0316: or dl, byte ptr [0] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    SET_HI8(ecx, HI8(ecx) & LO8(ecx)); /* 0x150B031C: and ch, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((edx | MEM32(0))); _flag_b = (uint32_t)((edx | MEM32(0)));
    edx = edx | MEM32(0); /* 0x150B031E: or edx, dword ptr [0] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x150B0324u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0708u);

L_150B0708:
    /* in: no port I/O under Win32 */ /* 0x150B0708: in al, 0xff */
    RECOMP_ITAIL(0x150B070Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0728u);

L_150B0728:
    /* in: no port I/O under Win32 */ /* 0x150B0728: in al, 0xff */
    RECOMP_ITAIL(0x150B072Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0998u);

L_150B0998:
    /* in: no port I/O under Win32 */ /* 0x150B0998: in al, 0xff */
    RECOMP_ITAIL(0x150B099Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B0AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B0AA0u);

L_150B0AA0:
    /* in: no port I/O under Win32 */ /* 0x150B0AA0: in al, 0xff */
    RECOMP_ITAIL(0x150B0AA2u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B11E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B11E8u);

L_150B11E8:
    /* in: no port I/O under Win32 */ /* 0x150B11E8: in al, 0xff */
    RECOMP_ITAIL(0x150B11EAu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_150B1648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150B1648u);

L_150B1648:
    _st[7] /= _st[0]; /* 0x150B1648: fdiv st(7), st(0) */
    RECOMP_ITAIL(0x150B164Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}
