#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121438FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121438FBu);

L_121438FB:
    edi = edi; /* 0x121438FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121438FD: push ebp */
    ebp = esp; /* 0x121438FE: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12143900: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12143901: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x5D), 0 */ /* 0x12143904: cmp byte ptr [edi + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12143914; /* 0x12143908: je 0x12143914 */
L_1214390A:
    eax = 0x88760384u; /* 0x1214390A: mov eax, 0x88760384 */
    goto L_1214399D; /* 0x1214390F: jmp 0x1214399d */
L_12143914:
    PUSH32(esp, ebx); /* 0x12143914: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x12143915: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x12143918: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12143997; /* 0x1214391A: je 0x12143997 */
L_1214391C:
    eax = ebp + 0x20; /* 0x1214391C: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x1214391F: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12143920: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x12143923: mov ecx, edi */
    RECOMP_CALL(sub_1214349D); /* 0x12143925: call 0x1214349d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214392A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214399C; /* 0x1214392C: js 0x1214399c */
L_1214392E:
    eax = MEM32(ebp + 0x14); /* 0x1214392E: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x12143931: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214393A; /* 0x12143933: jne 0x1214393a */
L_12143935:
    eax = 0x12018324u; /* 0x12143935: mov eax, 0x12018324 */
L_1214393A:
    ecx = ebp + 0x8; /* 0x1214393A: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1214393D: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1214393E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12143941: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x12143944: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12143945: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12143948: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x12143949: push dword ptr [ebp + 0x20] */
    RECOMP_CALL(sub_12148F6F); /* 0x1214394C: call 0x12148f6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12143951: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214399C; /* 0x12143953: js 0x1214399c */
L_12143955:
    eax = MEM32(ebp + 0x8); /* 0x12143955: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12143958: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12143959: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1214395B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12143967; /* 0x1214395D: je 0x12143967 */
L_1214395F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214395F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = eax; /* 0x12143962: mov dword ptr [ebp + 0x20], eax */
    goto L_1214396A; /* 0x12143965: jmp 0x1214396a */
L_12143967:
    MEM32(ebp + 0x20) = esi; /* 0x12143967: mov dword ptr [ebp + 0x20], esi */
L_1214396A:
    eax = ebp + 0x20; /* 0x1214396A: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x1214396D: push eax */
    ecx = edi + 0x1C; /* 0x1214396E: lea ecx, [edi + 0x1c] */
    RECOMP_CALL(sub_1214AE6F); /* 0x12143971: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12143976: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x12143978: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1214397B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214397D: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214398A; /* 0x1214397E: je 0x1214398a */
L_12143980:
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12143980: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12143983: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x12143986: mov dword ptr [ebx], eax */
    goto L_12143992; /* 0x12143988: jmp 0x12143992 */
L_1214398A:
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1214398A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x1214398D: mov esi, 0x8007000e */
L_12143992:
    eax = esi; /* 0x12143992: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12143994: pop esi */
    goto L_1214399C; /* 0x12143995: jmp 0x1214399c */
L_12143997:
    eax = 0x88760385u; /* 0x12143997: mov eax, 0x88760385 */
L_1214399C:
    ebx = POP32_VAL(esp); /* 0x1214399C: pop ebx */
L_1214399D:
    edi = POP32_VAL(esp); /* 0x1214399D: pop edi */
    ebp = POP32_VAL(esp); /* 0x1214399E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1214399F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_121439A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121439A7u);

L_121439A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121439A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x1201106Cu; /* 0x121439A9: mov dword ptr [ecx], 0x1201106c */
    MEM32(ecx + 0x4) = 1; /* 0x121439AF: mov dword ptr [ecx + 4], 1 */
    MEM32(ecx + 0x8) = eax; /* 0x121439B6: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121439B9: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x14) = eax; /* 0x121439BC: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x10) = 0x64u; /* 0x121439BF: mov dword ptr [ecx + 0x10], 0x64 */
    eax = ecx; /* 0x121439C6: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121439C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121439CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121439CEu);

L_121439CE:
    edi = edi; /* 0x121439CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121439D0: push ebp */
    ebp = esp; /* 0x121439D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121439D3: push esi */
    esi = ecx; /* 0x121439D4: mov esi, ecx */
    ecx = esi + 0x8; /* 0x121439D6: lea ecx, [esi + 8] */
    MEM32(esi) = 0x1201106Cu; /* 0x121439D9: mov dword ptr [esi], 0x1201106c */
    RECOMP_CALL(sub_12142B41); /* 0x121439DF: call 0x12142b41 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x121439E4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121439F1; /* 0x121439E8: je 0x121439f1 */
L_121439EA:
    PUSH32(esp, esi); /* 0x121439EA: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x121439EB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121439F0: pop ecx */
L_121439F1:
    eax = esi; /* 0x121439F1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121439F3: pop esi */
    ebp = POP32_VAL(esp); /* 0x121439F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121439F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121439FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121439FDu);

L_121439FD:
    edi = edi; /* 0x121439FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121439FF: push ebp */
    ebp = esp; /* 0x12143A00: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143A02: push ecx */
    eax = ecx; /* 0x12143A03: mov eax, ecx */
    MEM32(eax) = 0x1201108Cu; /* 0x12143A05: mov dword ptr [eax], 0x1201108c */
    MEM32(eax + 0x4) = 1; /* 0x12143A0B: mov dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12143A12: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12143A14: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12143A15: mov ebx, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = ebx; /* 0x12143A18: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ecx; /* 0x12143A1B: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x12143A1E: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x12143A21: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x12143A24: push esi */
    MEM32(eax + 0x14) = 0x64u; /* 0x12143A25: mov dword ptr [eax + 0x14], 0x64 */
    PUSH32(esp, edi); /* 0x12143A2C: push edi */
    edi = eax + 0x30; /* 0x12143A2D: lea edi, [eax + 0x30] */
    MEM32(eax + 0x1C) = ecx; /* 0x12143A30: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x12143A33: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x12143A36: mov dword ptr [eax + 0x28], ecx */
    ecx = edi; /* 0x12143A39: mov ecx, edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x12143A3B: mov dword ptr [ebp - 4], eax */
    MEM32(eax + 0x24) = 0xAu; /* 0x12143A3E: mov dword ptr [eax + 0x24], 0xa */
    RECOMP_CALL(sub_1214646C); /* 0x12143A45: call 0x1214646c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12143A4A: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x14); /* 0x12143A4D: mov eax, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x12143A50: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x40) = eax; /* 0x12143A53: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x12143A56: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x44) = eax; /* 0x12143A59: mov dword ptr [ecx + 0x44], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143A5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x3C) = esi; /* 0x12143A5E: mov dword ptr [ecx + 0x3c], esi */
    MEM32(ecx + 0x48) = eax; /* 0x12143A61: mov dword ptr [ecx + 0x48], eax */
    MEM32(ecx + 0x4C) = eax; /* 0x12143A64: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ecx + 0x50) = eax; /* 0x12143A67: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x54) = eax; /* 0x12143A6A: mov dword ptr [ecx + 0x54], eax */
    MEM32(ecx + 0x58) = eax; /* 0x12143A6D: mov dword ptr [ecx + 0x58], eax */
    MEM16(ecx + 0x5C) = (uint16_t)(LO16(eax)); /* 0x12143A70: mov word ptr [ecx + 0x5c], ax */
    RECOMP_CALL(sub_121425B1); /* 0x12143A74: call 0x121425b1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x12143A79: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12143A7C: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x2C) = eax; /* 0x12143A7F: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebx); /* 0x12143A82: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12143A84: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12143A85: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12143A88: push esi */
    ecx = edi; /* 0x12143A89: mov ecx, edi */
    RECOMP_CALL(sub_1214647B); /* 0x12143A8B: call 0x1214647b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x12143A90: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12143A93: pop edi */
    esi = POP32_VAL(esp); /* 0x12143A94: pop esi */
    ebx = POP32_VAL(esp); /* 0x12143A95: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143A96: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12143A97: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12143A9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143A9Fu);

L_12143A9F:
    edi = edi; /* 0x12143A9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143AA1: push ebp */
    ebp = esp; /* 0x12143AA2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143AA4: push ecx */
    eax = ecx; /* 0x12143AA5: mov eax, ecx */
    MEM32(eax) = 0x1201108Cu; /* 0x12143AA7: mov dword ptr [eax], 0x1201108c */
    MEM32(eax + 0x4) = 1; /* 0x12143AAD: mov dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12143AB4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12143AB6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12143AB7: mov ebx, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = ebx; /* 0x12143ABA: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ecx; /* 0x12143ABD: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x12143AC0: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x12143AC3: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x12143AC6: push esi */
    MEM32(eax + 0x14) = 0x64u; /* 0x12143AC7: mov dword ptr [eax + 0x14], 0x64 */
    PUSH32(esp, edi); /* 0x12143ACE: push edi */
    edi = eax + 0x30; /* 0x12143ACF: lea edi, [eax + 0x30] */
    MEM32(eax + 0x1C) = ecx; /* 0x12143AD2: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x12143AD5: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x12143AD8: mov dword ptr [eax + 0x28], ecx */
    ecx = edi; /* 0x12143ADB: mov ecx, edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x12143ADD: mov dword ptr [ebp - 4], eax */
    MEM32(eax + 0x24) = 0xAu; /* 0x12143AE0: mov dword ptr [eax + 0x24], 0xa */
    RECOMP_CALL(sub_1214646C); /* 0x12143AE7: call 0x1214646c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12143AEC: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x14); /* 0x12143AEF: mov eax, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x12143AF2: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x40) = eax; /* 0x12143AF5: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x12143AF8: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x44) = eax; /* 0x12143AFB: mov dword ptr [ecx + 0x44], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143AFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x3C) = esi; /* 0x12143B00: mov dword ptr [ecx + 0x3c], esi */
    MEM32(ecx + 0x48) = eax; /* 0x12143B03: mov dword ptr [ecx + 0x48], eax */
    MEM32(ecx + 0x4C) = eax; /* 0x12143B06: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ecx + 0x50) = eax; /* 0x12143B09: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x54) = eax; /* 0x12143B0C: mov dword ptr [ecx + 0x54], eax */
    MEM32(ecx + 0x58) = eax; /* 0x12143B0F: mov dword ptr [ecx + 0x58], eax */
    MEM16(ecx + 0x5C) = (uint16_t)(1); /* 0x12143B12: mov word ptr [ecx + 0x5c], 1 */
    RECOMP_CALL(sub_121425B1); /* 0x12143B18: call 0x121425b1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x12143B1D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12143B20: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x2C) = eax; /* 0x12143B23: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebx); /* 0x12143B26: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12143B28: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12143B29: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12143B2C: push esi */
    ecx = edi; /* 0x12143B2D: mov ecx, edi */
    RECOMP_CALL(sub_1214647B); /* 0x12143B2F: call 0x1214647b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x12143B34: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12143B37: pop edi */
    esi = POP32_VAL(esp); /* 0x12143B38: pop esi */
    ebx = POP32_VAL(esp); /* 0x12143B39: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143B3A: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12143B3B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12143B43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143B43u);

L_12143B43:
    edi = edi; /* 0x12143B43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143B45: push ebp */
    ebp = esp; /* 0x12143B46: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12143B48: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12143B49: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12143B4C: push edi */
    edi = ecx; /* 0x12143B4D: mov edi, ecx */
    /* cmp esi, 0x101u */ /* 0x12143B4F: cmp esi, 0x101 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12143B6E; /* 0x12143B55: ja 0x12143b6e */
L_12143B57:
    eax = ebp + 0x8; /* 0x12143B57: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12143B5A: push eax */
    eax = esi + 0x2; /* 0x12143B5B: lea eax, [esi + 2] */
    PUSH32(esp, eax); /* 0x12143B5E: push eax */
    PUSH32(esp, 0x121EB290u); /* 0x12143B5F: push 0x121eb290 */
    ecx = edi + 0x30; /* 0x12143B64: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x12143B67: call 0x12146502 */
    RECOMP_FLAGS_IN();
    goto L_12143B9A; /* 0x12143B6C: jmp 0x12143b9a */
L_12143B6E:
    PUSH32(esp, 0x120110A8u); /* 0x12143B6E: push 0x120110a8 */
    PUSH32(esp, edi); /* 0x12143B73: push edi */
    RECOMP_CALL(sub_12143315); /* 0x12143B74: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x12143B79: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12143B7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12143B7E: pop ecx */
    /* test esi, esi */ /* 0x12143B7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12143B9A; /* 0x12143B81: je 0x12143b9a */
L_12143B83:
    PUSH32(esp, 0x1200808Cu); /* 0x12143B83: push 0x1200808c */
    ecx = edi; /* 0x12143B88: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x12143B8A: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12143B8F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12143B92: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x12143B93: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x12143B96: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12143B83; /* 0x12143B98: jb 0x12143b83 */
L_12143B9A:
    edi = POP32_VAL(esp); /* 0x12143B9A: pop edi */
    esi = POP32_VAL(esp); /* 0x12143B9B: pop esi */
    ebp = POP32_VAL(esp); /* 0x12143B9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12143B9D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12143BA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143BA5u);

L_12143BA5:
    edi = edi; /* 0x12143BA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143BA7: push ebp */
    ebp = esp; /* 0x12143BA8: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12143BAA: mov edx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(edx + 0xF); /* 0x12143BAD: movzx eax, byte ptr [edx + 0xf] */
    PUSH32(esp, eax); /* 0x12143BB1: push eax */
    eax = (uint32_t)MEM8(edx + 0xE); /* 0x12143BB2: movzx eax, byte ptr [edx + 0xe] */
    PUSH32(esp, eax); /* 0x12143BB6: push eax */
    eax = (uint32_t)MEM8(edx + 0xD); /* 0x12143BB7: movzx eax, byte ptr [edx + 0xd] */
    PUSH32(esp, eax); /* 0x12143BBB: push eax */
    eax = (uint32_t)MEM8(edx + 0xC); /* 0x12143BBC: movzx eax, byte ptr [edx + 0xc] */
    PUSH32(esp, eax); /* 0x12143BC0: push eax */
    eax = (uint32_t)MEM8(edx + 0xB); /* 0x12143BC1: movzx eax, byte ptr [edx + 0xb] */
    PUSH32(esp, eax); /* 0x12143BC5: push eax */
    eax = (uint32_t)MEM8(edx + 0xA); /* 0x12143BC6: movzx eax, byte ptr [edx + 0xa] */
    PUSH32(esp, eax); /* 0x12143BCA: push eax */
    eax = (uint32_t)MEM8(edx + 0x9); /* 0x12143BCB: movzx eax, byte ptr [edx + 9] */
    PUSH32(esp, eax); /* 0x12143BCF: push eax */
    eax = (uint32_t)MEM8(edx + 0x8); /* 0x12143BD0: movzx eax, byte ptr [edx + 8] */
    PUSH32(esp, eax); /* 0x12143BD4: push eax */
    eax = (uint32_t)MEM16(edx + 0x6); /* 0x12143BD5: movzx eax, word ptr [edx + 6] */
    PUSH32(esp, eax); /* 0x12143BD9: push eax */
    eax = (uint32_t)MEM16(edx + 0x4); /* 0x12143BDA: movzx eax, word ptr [edx + 4] */
    PUSH32(esp, eax); /* 0x12143BDE: push eax */
    PUSH32(esp, MEM32(edx)); /* 0x12143BDF: push dword ptr [edx] */
    PUSH32(esp, 0x120110ACu); /* 0x12143BE1: push 0x120110ac */
    PUSH32(esp, ecx); /* 0x12143BE6: push ecx */
    RECOMP_CALL(sub_12143315); /* 0x12143BE7: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x12143BEC: add esp, 0x34 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x12143BEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12143BF0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12143BF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143BF8u);

L_12143BF8:
    edi = edi; /* 0x12143BF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143BFA: push ebp */
    ebp = esp; /* 0x12143BFB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143BFD: push ecx */
    PUSH32(esp, ecx); /* 0x12143BFE: push ecx */
    PUSH32(esp, esi); /* 0x12143BFF: push esi */
    esi = ecx; /* 0x12143C00: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x12143C02: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12143C05: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12143C32; /* 0x12143C08: je 0x12143c32 */
L_12143C0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143C0A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12143C95; /* 0x12143C0B: jne 0x12143c95 */
L_12143C11:
    PUSH32(esp, 0x120110F4u); /* 0x12143C11: push 0x120110f4 */
    PUSH32(esp, 0x120110E8u); /* 0x12143C16: push 0x120110e8 */
    PUSH32(esp, esi); /* 0x12143C1B: push esi */
    RECOMP_CALL(sub_12143315); /* 0x12143C1C: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12143C21: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120110E0u); /* 0x12143C24: push 0x120110e0 */
    ecx = esi; /* 0x12143C29: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x12143C2B: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_12143C95; /* 0x12143C30: jmp 0x12143c95 */
L_12143C32:
    eax = ebp + (-0x8); /* 0x12143C32: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143C35: push eax */
    PUSH32(esp, 4); /* 0x12143C36: push 4 */
    eax = ebp + (-0x4); /* 0x12143C38: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x12143C3B: add esi, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12143C3E: push eax */
    ecx = esi; /* 0x12143C3F: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0x20666F78u; /* 0x12143C41: mov dword ptr [ebp - 4], 0x20666f78 */
    RECOMP_CALL(sub_12146502); /* 0x12143C48: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143C4D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143C50: push eax */
    PUSH32(esp, 4); /* 0x12143C51: push 4 */
    eax = ebp + (-0x4); /* 0x12143C53: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143C56: push eax */
    ecx = esi; /* 0x12143C57: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0x33303330u; /* 0x12143C59: mov dword ptr [ebp - 4], 0x33303330 */
    RECOMP_CALL(sub_12146502); /* 0x12143C60: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143C65: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143C68: push eax */
    PUSH32(esp, 4); /* 0x12143C69: push 4 */
    eax = ebp + (-0x4); /* 0x12143C6B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143C6E: push eax */
    ecx = esi; /* 0x12143C6F: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0x206E6962u; /* 0x12143C71: mov dword ptr [ebp - 4], 0x206e6962 */
    RECOMP_CALL(sub_12146502); /* 0x12143C78: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143C7D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143C80: push eax */
    PUSH32(esp, 4); /* 0x12143C81: push 4 */
    eax = ebp + (-0x4); /* 0x12143C83: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143C86: push eax */
    ecx = esi; /* 0x12143C87: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0x32333030u; /* 0x12143C89: mov dword ptr [ebp - 4], 0x32333030 */
    RECOMP_CALL(sub_12146502); /* 0x12143C90: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12143C95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143C95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12143C97: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143C98: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12143C99: ret  */
    RECOMP_REGS_OUT();
}

void sub_12143C9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143C9Fu);

L_12143C9F:
    edi = edi; /* 0x12143C9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143CA1: push ebp */
    ebp = esp; /* 0x12143CA2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143CA4: push ecx */
    PUSH32(esp, ecx); /* 0x12143CA5: push ecx */
    PUSH32(esp, esi); /* 0x12143CA6: push esi */
    PUSH32(esp, edi); /* 0x12143CA7: push edi */
    edi = ecx; /* 0x12143CA8: mov edi, ecx */
    eax = MEM32(edi + 0x40); /* 0x12143CAA: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12143CAD: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12143CE1; /* 0x12143CB0: je 0x12143ce1 */
L_12143CB2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143CB2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12143D27; /* 0x12143CB3: jne 0x12143d27 */
L_12143CB5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12143CB5: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x120110FCu); /* 0x12143CB8: push 0x120110fc */
    PUSH32(esp, edi); /* 0x12143CBD: push edi */
    RECOMP_CALL(sub_12143315); /* 0x12143CBE: call 0x12143315 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x58); /* 0x12143CC3: mov eax, dword ptr [edi + 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12143CC6: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12143CC9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x12143CCA: push eax */
    ecx = edi; /* 0x12143CCB: mov ecx, edi */
    RECOMP_CALL(sub_12143B43); /* 0x12143CCD: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12143CD2: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x12143CD5: mov ecx, edi */
    RECOMP_CALL(sub_12143BA5); /* 0x12143CD7: call 0x12143ba5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x58) = MEM32(edi + 0x58) + 1; /* 0x12143CDC: inc dword ptr [edi + 0x58] */
    _flag_k = FK_INC;
    goto L_12143D27; /* 0x12143CDF: jmp 0x12143d27 */
L_12143CE1:
    eax = ebp + (-0x8); /* 0x12143CE1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143CE4: push eax */
    PUSH32(esp, 2); /* 0x12143CE5: push 2 */
    eax = ebp + (-0x4); /* 0x12143CE7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143CEA: push eax */
    ecx = edi + 0x30; /* 0x12143CEB: lea ecx, [edi + 0x30] */
    MEM32(ebp + (-0x4)) = 0x1Fu; /* 0x12143CEE: mov dword ptr [ebp - 4], 0x1f */
    RECOMP_CALL(sub_12146502); /* 0x12143CF5: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12143CFA: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x12143CFD: mov ecx, edi */
    RECOMP_CALL(sub_1214324E); /* 0x12143CFF: call 0x1214324e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143D04: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143D07: push eax */
    PUSH32(esp, 2); /* 0x12143D08: push 2 */
    eax = ebp + 0x8; /* 0x12143D0A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12143D0D: push eax */
    ecx = edi + 0x30; /* 0x12143D0E: lea ecx, [edi + 0x30] */
    MEM32(ebp + 0x8) = 0xAu; /* 0x12143D11: mov dword ptr [ebp + 8], 0xa */
    RECOMP_CALL(sub_12146502); /* 0x12143D18: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12143D1D: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x12143D20: mov ecx, edi */
    RECOMP_CALL(sub_121432AE); /* 0x12143D22: call 0x121432ae */
    RECOMP_FLAGS_IN();
L_12143D27:
    edi = POP32_VAL(esp); /* 0x12143D27: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143D28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12143D2A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143D2B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12143D2C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12143D34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143D34u);

L_12143D34:
    edi = edi; /* 0x12143D34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143D36: push ebp */
    ebp = esp; /* 0x12143D37: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143D39: push ecx */
    PUSH32(esp, ecx); /* 0x12143D3A: push ecx */
    PUSH32(esp, esi); /* 0x12143D3B: push esi */
    esi = ecx; /* 0x12143D3C: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x12143D3E: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12143D41: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12143D6F; /* 0x12143D44: je 0x12143d6f */
L_12143D46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143D46: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12143D88; /* 0x12143D47: jne 0x12143d88 */
L_12143D49:
    eax = MEM32(esi + 0x58); /* 0x12143D49: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x12143D4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12143D57; /* 0x12143D4E: jne 0x12143d57 */
L_12143D50:
    eax = 0x8876038Fu; /* 0x12143D50: mov eax, 0x8876038f */
    goto L_12143D8A; /* 0x12143D55: jmp 0x12143d8a */
L_12143D57:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143D57: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x12143D58: push eax */
    MEM32(esi + 0x58) = eax; /* 0x12143D59: mov dword ptr [esi + 0x58], eax */
    RECOMP_CALL(sub_12143B43); /* 0x12143D5C: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12008810u); /* 0x12143D61: push 0x12008810 */
    ecx = esi; /* 0x12143D66: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x12143D68: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_12143D88; /* 0x12143D6D: jmp 0x12143d88 */
L_12143D6F:
    eax = ebp + (-0x8); /* 0x12143D6F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143D72: push eax */
    PUSH32(esp, 2); /* 0x12143D73: push 2 */
    eax = ebp + (-0x4); /* 0x12143D75: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143D78: push eax */
    ecx = esi + 0x30; /* 0x12143D79: lea ecx, [esi + 0x30] */
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x12143D7C: mov dword ptr [ebp - 4], 0xb */
    RECOMP_CALL(sub_12146502); /* 0x12143D83: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12143D88:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143D88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12143D8A:
    esi = POP32_VAL(esp); /* 0x12143D8A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143D8B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12143D8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_12143D92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143D92u);

L_12143D92:
    edi = edi; /* 0x12143D92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143D94: push ebp */
    ebp = esp; /* 0x12143D95: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12143D97: push ecx */
    PUSH32(esp, ecx); /* 0x12143D98: push ecx */
    PUSH32(esp, esi); /* 0x12143D99: push esi */
    esi = ecx; /* 0x12143D9A: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x12143D9C: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12143D9F: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12143DA2: push edi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12143DED; /* 0x12143DA3: je 0x12143ded */
L_12143DA5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143DA5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12143E76; /* 0x12143DA6: jne 0x12143e76 */
L_12143DAC:
    /* cmp MEM32(esi + 0x58), eax */ /* 0x12143DAC: cmp dword ptr [esi + 0x58], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12143DBB; /* 0x12143DAF: jne 0x12143dbb */
L_12143DB1:
    eax = 0x8876038Fu; /* 0x12143DB1: mov eax, 0x8876038f */
    goto L_12143E78; /* 0x12143DB6: jmp 0x12143e78 */
L_12143DBB:
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x12143DBB: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_12143B43); /* 0x12143DBE: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1201110Cu); /* 0x12143DC3: push 0x1201110c */
    ecx = esi; /* 0x12143DC8: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x12143DCA: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) - 1; /* 0x12143DCF: dec dword ptr [esi + 0x58] */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x12143DD2: push dword ptr [esi + 0x58] */
    ecx = esi; /* 0x12143DD5: mov ecx, esi */
    RECOMP_CALL(sub_12143B43); /* 0x12143DD7: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12008810u); /* 0x12143DDC: push 0x12008810 */
    ecx = esi; /* 0x12143DE1: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x12143DE3: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_12143E76; /* 0x12143DE8: jmp 0x12143e76 */
L_12143DED:
    PUSH32(esp, ebx); /* 0x12143DED: push ebx */
    eax = ebp + (-0x8); /* 0x12143DEE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143DF1: push eax */
    PUSH32(esp, 2); /* 0x12143DF2: push 2 */
    ebx = POP32_VAL(esp); /* 0x12143DF4: pop ebx */
    PUSH32(esp, ebx); /* 0x12143DF5: push ebx */
    eax = ebp + (-0x4); /* 0x12143DF6: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x12143DF9: add esi, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12143DFC: push eax */
    ecx = esi; /* 0x12143DFD: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xEu; /* 0x12143DFF: mov dword ptr [ebp - 4], 0xe */
    RECOMP_CALL(sub_12146502); /* 0x12143E06: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x12143E0B: push 0x12 */
    edi = POP32_VAL(esp); /* 0x12143E0D: pop edi */
    eax = ebp + (-0x8); /* 0x12143E0E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143E11: push eax */
    PUSH32(esp, ebx); /* 0x12143E12: push ebx */
    eax = ebp + (-0x4); /* 0x12143E13: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143E16: push eax */
    ecx = esi; /* 0x12143E17: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x12143E19: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_12146502); /* 0x12143E1C: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143E21: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143E24: push eax */
    PUSH32(esp, ebx); /* 0x12143E25: push ebx */
    eax = ebp + (-0x4); /* 0x12143E26: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143E29: push eax */
    ecx = esi; /* 0x12143E2A: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x12143E2C: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_12146502); /* 0x12143E2F: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143E34: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143E37: push eax */
    PUSH32(esp, ebx); /* 0x12143E38: push ebx */
    eax = ebp + (-0x4); /* 0x12143E39: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143E3C: push eax */
    ecx = esi; /* 0x12143E3D: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x12143E3F: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_12146502); /* 0x12143E42: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143E47: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143E4A: push eax */
    PUSH32(esp, ebx); /* 0x12143E4B: push ebx */
    eax = ebp + (-0x4); /* 0x12143E4C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143E4F: push eax */
    ecx = esi; /* 0x12143E50: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xFu; /* 0x12143E52: mov dword ptr [ebp - 4], 0xf */
    RECOMP_CALL(sub_12146502); /* 0x12143E59: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12143E5E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143E61: push eax */
    PUSH32(esp, ebx); /* 0x12143E62: push ebx */
    eax = ebp + (-0x4); /* 0x12143E63: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143E66: push eax */
    ecx = esi; /* 0x12143E67: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x12143E69: mov dword ptr [ebp - 4], 0xb */
    RECOMP_CALL(sub_12146502); /* 0x12143E70: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12143E75: pop ebx */
L_12143E76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143E76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12143E78:
    edi = POP32_VAL(esp); /* 0x12143E78: pop edi */
    esi = POP32_VAL(esp); /* 0x12143E79: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12143E7A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12143E7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_12143E81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12143E81u);

L_12143E81:
    edi = edi; /* 0x12143E81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12143E83: push ebp */
    ebp = esp; /* 0x12143E84: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12143E86: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12143E89: push ebx */
    PUSH32(esp, esi); /* 0x12143E8A: push esi */
    ebx = ecx; /* 0x12143E8B: mov ebx, ecx */
    eax = MEM32(ebx + 0x40); /* 0x12143E8D: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12143E90: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x12143E92: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12143E94: push edi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12143F72; /* 0x12143E95: je 0x12143f72 */
L_12143E9B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12143E9B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12144033; /* 0x12143E9C: jne 0x12144033 */
L_12143EA2:
    edi = ebx + 0x58; /* 0x12143EA2: lea edi, [ebx + 0x58] */
    /* cmp MEM32(edi), esi */ /* 0x12143EA5: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12143EB3; /* 0x12143EA7: jne 0x12143eb3 */
L_12143EA9:
    eax = 0x8876038Fu; /* 0x12143EA9: mov eax, 0x8876038f */
    goto L_12144035; /* 0x12143EAE: jmp 0x12144035 */
L_12143EB3:
    PUSH32(esp, MEM32(edi)); /* 0x12143EB3: push dword ptr [edi] */
    RECOMP_CALL(sub_12143B43); /* 0x12143EB5: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1201111Cu); /* 0x12143EBA: push 0x1201111c */
    ecx = ebx; /* 0x12143EBF: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143EC1: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12143EC6: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x12143EC9: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(eax), esi */ /* 0x12143ECC: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12143F4A; /* 0x12143ECE: jbe 0x12143f4a */
L_12143ED0:
    /* test esi, esi */ /* 0x12143ED0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12143EE3; /* 0x12143ED2: je 0x12143ee3 */
L_12143ED4:
    PUSH32(esp, 0x12011118u); /* 0x12143ED4: push 0x12011118 */
    ecx = ebx; /* 0x12143ED9: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143EDB: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12143EE0: mov eax, dword ptr [ebp + 8] */
L_12143EE3:
    eax = MEM32(eax + 0xC); /* 0x12143EE3: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x12143EE6: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(eax + esi * 4); /* 0x12143EE9: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(eax)); /* 0x12143EEC: push dword ptr [eax] */
    ecx = ebx; /* 0x12143EEE: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143EF0: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12143EF5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x12143EF8: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + esi * 4); /* 0x12143EFB: mov esi, dword ptr [eax + esi*4] */
    PUSH32(esp, 4); /* 0x12143EFE: push 4 */
    ecx = POP32_VAL(esp); /* 0x12143F00: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12143F01: add esi, ecx */
    _flag_k = FK_ADD;
    edi = 0x12018324u; /* 0x12143F03: mov edi, 0x12018324 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12143F08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12143F0A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12143F33; /* 0x12143F0C: je 0x12143f33 */
L_12143F0E:
    PUSH32(esp, 0x1200808Cu); /* 0x12143F0E: push 0x1200808c */
    ecx = ebx; /* 0x12143F13: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143F15: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x12143F1A: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x12143F1D: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12143F20: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(eax + ecx * 4); /* 0x12143F23: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12143F26: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12143F29: push eax */
    ecx = ebx; /* 0x12143F2A: mov ecx, ebx */
    RECOMP_CALL(sub_12143BA5); /* 0x12143F2C: call 0x12143ba5 */
    RECOMP_FLAGS_IN();
    goto L_12143F36; /* 0x12143F31: jmp 0x12143f36 */
L_12143F33:
    edi = MEM32(ebp + 0x8); /* 0x12143F33: mov edi, dword ptr [ebp + 8] */
L_12143F36:
    eax = MEM32(ebp + (-0x4)); /* 0x12143F36: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12143F39: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12143F3B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12143F3C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(edi) */ /* 0x12143F3D: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x12143F3F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12143F42: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12143ED0; /* 0x12143F45: jb 0x12143ed0 */
L_12143F47:
    edi = ebx + 0x58; /* 0x12143F47: lea edi, [ebx + 0x58] */
L_12143F4A:
    PUSH32(esp, 0x12011114u); /* 0x12143F4A: push 0x12011114 */
    ecx = ebx; /* 0x12143F4F: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143F51: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x12143F56: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(edi)); /* 0x12143F58: push dword ptr [edi] */
    ecx = ebx; /* 0x12143F5A: mov ecx, ebx */
    RECOMP_CALL(sub_12143B43); /* 0x12143F5C: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12008810u); /* 0x12143F61: push 0x12008810 */
    ecx = ebx; /* 0x12143F66: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x12143F68: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_12144033; /* 0x12143F6D: jmp 0x12144033 */
L_12143F72:
    eax = ebp + (-0x8); /* 0x12143F72: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143F75: push eax */
    edi = ebx + 0x30; /* 0x12143F76: lea edi, [ebx + 0x30] */
    PUSH32(esp, 2); /* 0x12143F79: push 2 */
    eax = ebp + (-0x4); /* 0x12143F7B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12143F7E: push eax */
    ecx = edi; /* 0x12143F7F: mov ecx, edi */
    MEM32(ebp + (-0x4)) = 0xEu; /* 0x12143F81: mov dword ptr [ebp - 4], 0xe */
    MEM32(ebp + (-0xC)) = edi; /* 0x12143F88: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_12146502); /* 0x12143F8B: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x12143F90: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x12143F93: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ecx), esi */ /* 0x12143F96: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12144003; /* 0x12143F98: jbe 0x12144003 */
L_12143F9A:
    /* test esi, esi */ /* 0x12143F9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12143FB6; /* 0x12143F9C: je 0x12143fb6 */
L_12143F9E:
    eax = ebp + (-0x10); /* 0x12143F9E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12143FA1: push eax */
    PUSH32(esp, 2); /* 0x12143FA2: push 2 */
    eax = ebp + (-0x8); /* 0x12143FA4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12143FA7: push eax */
    ecx = edi; /* 0x12143FA8: mov ecx, edi */
    MEM32(ebp + (-0x8)) = 0x13u; /* 0x12143FAA: mov dword ptr [ebp - 8], 0x13 */
    RECOMP_CALL(sub_12146502); /* 0x12143FB1: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12143FB6:
    edi = MEM32(ebp + 0x8); /* 0x12143FB6: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x12143FB9: mov eax, dword ptr [edi + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x12143FBC: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(eax + esi * 4); /* 0x12143FBF: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(eax)); /* 0x12143FC2: push dword ptr [eax] */
    ecx = ebx; /* 0x12143FC4: mov ecx, ebx */
    RECOMP_CALL(sub_1214324E); /* 0x12143FC6: call 0x1214324e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC); /* 0x12143FCB: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x12143FCE: mov eax, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12143FD1: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x12143FD4: push 4 */
    ecx = POP32_VAL(esp); /* 0x12143FD6: pop ecx */
    edi = 0x12018324u; /* 0x12143FD7: mov edi, 0x12018324 */
    esi = eax; /* 0x12143FDC: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12143FDE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12143FE0: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12143FEC; /* 0x12143FE2: je 0x12143fec */
L_12143FE4:
    PUSH32(esp, eax); /* 0x12143FE4: push eax */
    ecx = ebx; /* 0x12143FE5: mov ecx, ebx */
    RECOMP_CALL(sub_121432AE); /* 0x12143FE7: call 0x121432ae */
    RECOMP_FLAGS_IN();
L_12143FEC:
    eax = MEM32(ebp + (-0x4)); /* 0x12143FEC: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12143FEF: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12143FF2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12143FF4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12143FF5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x12143FF6: mov dword ptr [ebp - 4], eax */
    edi = ebx + 0x30; /* 0x12143FF9: lea edi, [ebx + 0x30] */
    /* cmp eax, MEM32(ecx) */ /* 0x12143FFC: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12143F9A; /* 0x12143FFE: jb 0x12143f9a */
L_12144000:
    edi = MEM32(ebp + (-0xC)); /* 0x12144000: mov edi, dword ptr [ebp - 0xc] */
L_12144003:
    eax = ebp + (-0x10); /* 0x12144003: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12144006: push eax */
    PUSH32(esp, 2); /* 0x12144007: push 2 */
    eax = ebp + 0x8; /* 0x12144009: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214400C: push eax */
    ecx = edi; /* 0x1214400D: mov ecx, edi */
    MEM32(ebp + 0x8) = 0xFu; /* 0x1214400F: mov dword ptr [ebp + 8], 0xf */
    RECOMP_CALL(sub_12146502); /* 0x12144016: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1214401B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1214401E: push eax */
    PUSH32(esp, 2); /* 0x1214401F: push 2 */
    eax = ebp + 0x8; /* 0x12144021: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12144024: push eax */
    ecx = edi; /* 0x12144025: mov ecx, edi */
    MEM32(ebp + 0x8) = 0xBu; /* 0x12144027: mov dword ptr [ebp + 8], 0xb */
    RECOMP_CALL(sub_12146502); /* 0x1214402E: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12144033:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144033: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12144035:
    edi = POP32_VAL(esp); /* 0x12144035: pop edi */
    esi = POP32_VAL(esp); /* 0x12144036: pop esi */
    ebx = POP32_VAL(esp); /* 0x12144037: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144038: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12144039: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12144041(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144041u);

L_12144041:
    edi = edi; /* 0x12144041: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144043: push ebp */
    ebp = esp; /* 0x12144044: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8u; /* 0x12144046: sub esp, 0xa8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214404C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12144051: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12144053: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12144056: push ebx */
    PUSH32(esp, esi); /* 0x12144057: push esi */
    esi = ecx; /* 0x12144058: mov esi, ecx */
    eax = MEM32(esi + 0x50); /* 0x1214405A: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, edi); /* 0x1214405D: push edi */
    MEM32(ebp + (-0xA0)) = esi; /* 0x1214405E: mov dword ptr [ebp - 0xa0], esi */
    /* test eax, eax */ /* 0x12144064: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144259; /* 0x12144066: je 0x12144259 */
L_1214406C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214406C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ebx */ /* 0x1214406E: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144259; /* 0x12144070: je 0x12144259 */
L_12144076:
    eax = MEM32(esi + 0x54); /* 0x12144076: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x12144079: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144259; /* 0x1214407B: je 0x12144259 */
L_12144081:
    /* cmp MEM32(eax), ebx */ /* 0x12144081: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144259; /* 0x12144083: je 0x12144259 */
L_12144089:
    eax = MEM32(esi + 0x40); /* 0x12144089: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214408C: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121440A9; /* 0x1214408E: je 0x121440a9 */
L_12144090:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12144090: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121440CB; /* 0x12144091: jne 0x121440cb */
L_12144093:
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x12144093: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_12143B43); /* 0x12144096: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12011120u); /* 0x1214409B: push 0x12011120 */
    ecx = esi; /* 0x121440A0: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x121440A2: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_121440CB; /* 0x121440A7: jmp 0x121440cb */
L_121440A9:
    eax = ebp + (-0x98); /* 0x121440A9: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x121440AF: push eax */
    PUSH32(esp, 2); /* 0x121440B0: push 2 */
    eax = ebp + (-0x88); /* 0x121440B2: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x121440B8: push eax */
    ecx = esi + 0x30; /* 0x121440B9: lea ecx, [esi + 0x30] */
    MEM32(ebp + (-0x88)) = 0x37u; /* 0x121440BC: mov dword ptr [ebp - 0x88], 0x37 */
    RECOMP_CALL(sub_12146502); /* 0x121440C6: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_121440CB:
    PUSH32(esp, 1); /* 0x121440CB: push 1 */
    PUSH32(esp, ebx); /* 0x121440CD: push ebx */
    PUSH32(esp, ebx); /* 0x121440CE: push ebx */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x121440CF: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x121440D2: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121440D8: mov edi, eax */
    MEM32(ebp + (-0x9C)) = edi; /* 0x121440DA: mov dword ptr [ebp - 0x9c], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x121440E0: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121440EF; /* 0x121440E3: jne 0x121440ef */
L_121440E5:
    eax = 0x8876038Fu; /* 0x121440E5: mov eax, 0x8876038f */
    goto L_1214425B; /* 0x121440EA: jmp 0x1214425b */
L_121440EF:
    eax = MEM32(esi + 0x50); /* 0x121440EF: mov eax, dword ptr [esi + 0x50] */
    MEM32(ebp + (-0x88)) = ebx; /* 0x121440F2: mov dword ptr [ebp - 0x88], ebx */
    /* cmp MEM32(eax), ebx */ /* 0x121440F8: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12144259; /* 0x121440FA: jbe 0x12144259 */
L_12144100:
    eax = MEM32(esi + 0x54); /* 0x12144100: mov eax, dword ptr [esi + 0x54] */
    eax = MEM32(eax + 0xC); /* 0x12144103: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, 0); /* 0x12144106: push 0 */
    PUSH32(esp, 0); /* 0x12144108: push 0 */
    ecx = ebx; /* 0x1214410A: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x1214410C: push dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x1214410F: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x12144112: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12144118: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121440E5; /* 0x1214411B: je 0x121440e5 */
L_1214411D:
    PUSH32(esp, edi); /* 0x1214411D: push edi */
    ecx = esi; /* 0x1214411E: mov ecx, esi */
    RECOMP_CALL(sub_12142840); /* 0x12144120: call 0x12142840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x90)) = MEM32(ebp + (-0x90)) & 0; /* 0x12144125: and dword ptr [ebp - 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA4); /* 0x1214412C: lea ecx, [ebp - 0xa4] */
    PUSH32(esp, ecx); /* 0x12144132: push ecx */
    eax = esi + 0x30; /* 0x12144133: lea eax, [esi + 0x30] */
    PUSH32(esp, 4); /* 0x12144136: push 4 */
    ecx = ebp + (-0x90); /* 0x12144138: lea ecx, [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x1214413E: push ecx */
    ecx = eax; /* 0x1214413F: mov ecx, eax */
    MEM32(ebp + (-0x98)) = eax; /* 0x12144141: mov dword ptr [ebp - 0x98], eax */
    RECOMP_CALL(sub_12146502); /* 0x12144147: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1214414C: push 0 */
    PUSH32(esp, 0); /* 0x1214414E: push 0 */
    PUSH32(esp, edi); /* 0x12144150: push edi */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x12144151: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x12144154: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1214415A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121440E5; /* 0x1214415D: je 0x121440e5 */
L_1214415F:
    eax = MEM32(esi + 0x50); /* 0x1214415F: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x12144162: mov eax, dword ptr [eax + 0xc] */
    ecx = ebx; /* 0x12144165: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x12144167: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x12144167: shl ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1214416A: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214416C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1214416E: push ecx */
    PUSH32(esp, 0x08000080u); /* 0x1214416F: push 0x8000080 */
    PUSH32(esp, 3); /* 0x12144174: push 3 */
    PUSH32(esp, ecx); /* 0x12144176: push ecx */
    PUSH32(esp, ecx); /* 0x12144177: push ecx */
    PUSH32(esp, 0x80000000u); /* 0x12144178: push 0x80000000 */
    PUSH32(esp, MEM32(eax)); /* 0x1214417D: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x1214417F: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x90)) = eax; /* 0x12144185: mov dword ptr [ebp - 0x90], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1214418B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121440E5; /* 0x1214418E: je 0x121440e5 */
L_12144194:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x94)) = MEM32(ebp + (-0x94)) & 0; /* 0x12144194: and dword ptr [ebp - 0x94], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1214419B: push 0 */
    ecx = ebp + (-0x8C); /* 0x1214419D: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, ecx); /* 0x121441A3: push ecx */
    PUSH32(esp, 0x80u); /* 0x121441A4: push 0x80 */
    ecx = ebp + (-0x84); /* 0x121441A9: lea ecx, [ebp - 0x84] */
    PUSH32(esp, ecx); /* 0x121441AF: push ecx */
    PUSH32(esp, eax); /* 0x121441B0: push eax */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x121441B1: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121441B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214422F; /* 0x121441B9: je 0x1214422f */
L_121441BB:
    esi = MEM32(ebp + (-0x90)); /* 0x121441BB: mov esi, dword ptr [ebp - 0x90] */
    edi = MEM32(ebp + (-0x94)); /* 0x121441C1: mov edi, dword ptr [ebp - 0x94] */
    ebx = MEM32(ebp + (-0x98)); /* 0x121441C7: mov ebx, dword ptr [ebp - 0x98] */
L_121441CD:
    /* cmp MEM32(ebp + (-0x8C)), 0 */ /* 0x121441CD: cmp dword ptr [ebp - 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144217; /* 0x121441D4: je 0x12144217 */
L_121441D6:
    eax = ebp + (-0xA8); /* 0x121441D6: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x121441DC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x121441DD: push dword ptr [ebp - 0x8c] */
    eax = ebp + (-0x84); /* 0x121441E3: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x121441E9: push eax */
    ecx = ebx; /* 0x121441EA: mov ecx, ebx */
    RECOMP_CALL(sub_12146502); /* 0x121441EC: call 0x12146502 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8C)); /* 0x121441F1: add edi, dword ptr [ebp - 0x8c] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x121441F7: push 0 */
    eax = ebp + (-0x8C); /* 0x121441F9: lea eax, [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x121441FF: push eax */
    PUSH32(esp, 0x80u); /* 0x12144200: push 0x80 */
    eax = ebp + (-0x84); /* 0x12144205: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x1214420B: push eax */
    PUSH32(esp, esi); /* 0x1214420C: push esi */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x1214420D: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144213: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121441CD; /* 0x12144215: jne 0x121441cd */
L_12144217:
    esi = MEM32(ebp + (-0xA0)); /* 0x12144217: mov esi, dword ptr [ebp - 0xa0] */
    ebx = MEM32(ebp + (-0x88)); /* 0x1214421D: mov ebx, dword ptr [ebp - 0x88] */
    MEM32(ebp + (-0x94)) = edi; /* 0x12144223: mov dword ptr [ebp - 0x94], edi */
    edi = MEM32(ebp + (-0x9C)); /* 0x12144229: mov edi, dword ptr [ebp - 0x9c] */
L_1214422F:
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x1214422F: push dword ptr [ebp - 0x90] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144235: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x94)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x94)); /* 0x1214423B: add edi, dword ptr [ebp - 0x94] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x50); /* 0x12144241: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12144244: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x9C)) = edi; /* 0x12144245: mov dword ptr [ebp - 0x9c], edi */
    MEM32(ebp + (-0x88)) = ebx; /* 0x1214424B: mov dword ptr [ebp - 0x88], ebx */
    /* cmp ebx, MEM32(eax) */ /* 0x12144251: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12144100; /* 0x12144253: jb 0x12144100 */
L_12144259:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144259: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214425B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214425B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1214425E: pop edi */
    esi = POP32_VAL(esp); /* 0x1214425F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12144260: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12144262: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12144263: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144268: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12144269: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214426F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214426Fu);

L_1214426F:
    edi = edi; /* 0x1214426F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144271: push ebp */
    ebp = esp; /* 0x12144272: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12144274: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12144277: push ebx */
    PUSH32(esp, esi); /* 0x12144278: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12144279: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1214427C: push edi */
    edi = ecx; /* 0x1214427D: mov edi, ecx */
    ecx = esi; /* 0x1214427F: mov ecx, esi */
    RECOMP_CALL(sub_12146B31); /* 0x12144281: call 0x12146b31 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12144286: mov ebx, eax */
    eax = MEM32(esi); /* 0x12144288: mov eax, dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x1214428A: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x1214428D: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12144290: mov dword ptr [ebp - 4], eax */
    /* test ebx, ebx */ /* 0x12144293: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121442A1; /* 0x12144295: jne 0x121442a1 */
L_12144297:
    eax = 0x88760385u; /* 0x12144297: mov eax, 0x88760385 */
    goto L_12144450; /* 0x1214429C: jmp 0x12144450 */
L_121442A1:
    ecx = MEM32(edi + 0x40); /* 0x121442A1: mov ecx, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121442A4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x121442A6: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214435F; /* 0x121442A8: je 0x1214435f */
L_121442AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121442AE: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214444E; /* 0x121442AF: jne 0x1214444e */
L_121442B5:
    PUSH32(esp, MEM32(edi + 0x58)); /* 0x121442B5: push dword ptr [edi + 0x58] */
    ecx = edi; /* 0x121442B8: mov ecx, edi */
    RECOMP_CALL(sub_12143B43); /* 0x121442BA: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x121442BF: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121442E7; /* 0x121442C2: jne 0x121442e7 */
L_121442C4:
    eax = MEM32(ebp + 0x8); /* 0x121442C4: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x121442C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121442DD; /* 0x121442C9: je 0x121442dd */
L_121442CB:
    PUSH32(esp, eax); /* 0x121442CB: push eax */
    PUSH32(esp, ebx); /* 0x121442CC: push ebx */
    PUSH32(esp, 0x12011148u); /* 0x121442CD: push 0x12011148 */
    PUSH32(esp, edi); /* 0x121442D2: push edi */
    RECOMP_CALL(sub_12143315); /* 0x121442D3: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121442D8: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1214434E; /* 0x121442DB: jmp 0x1214434e */
L_121442DD:
    PUSH32(esp, ebx); /* 0x121442DD: push ebx */
    ecx = edi; /* 0x121442DE: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x121442E0: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_1214434E; /* 0x121442E5: jmp 0x1214434e */
L_121442E7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121442E7: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121442EA: push ebx */
    PUSH32(esp, 0x1201113Cu); /* 0x121442EB: push 0x1201113c */
    PUSH32(esp, edi); /* 0x121442F0: push edi */
    RECOMP_CALL(sub_12143315); /* 0x121442F1: call 0x12143315 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x121442F6: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121442F9: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), esi */ /* 0x121442FC: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214434E; /* 0x121442FE: jbe 0x1214434e */
L_12144300:
    PUSH32(esp, 0x1201111Cu); /* 0x12144300: push 0x1201111c */
    ecx = edi; /* 0x12144305: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x12144307: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x1214430C: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x1214430F: mov eax, dword ptr [eax + esi*4] */
    /* cmp MEM32(eax), 0 */ /* 0x12144312: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144329; /* 0x12144315: je 0x12144329 */
L_12144317:
    PUSH32(esp, MEM32(eax)); /* 0x12144317: push dword ptr [eax] */
    PUSH32(esp, 0x12011138u); /* 0x12144319: push 0x12011138 */
    PUSH32(esp, edi); /* 0x1214431E: push edi */
    RECOMP_CALL(sub_12143315); /* 0x1214431F: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12144324: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1214433D; /* 0x12144327: jmp 0x1214433d */
L_12144329:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x12144329: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144297; /* 0x1214432D: je 0x12144297 */
L_12144333:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12144333: push dword ptr [eax + 4] */
    ecx = edi; /* 0x12144336: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x12144338: call 0x121427c5 */
    RECOMP_FLAGS_IN();
L_1214433D:
    PUSH32(esp, 0x12011114u); /* 0x1214433D: push 0x12011114 */
    ecx = edi; /* 0x12144342: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x12144344: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12144349: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x1214434A: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12144300; /* 0x1214434C: jb 0x12144300 */
L_1214434E:
    PUSH32(esp, 0x12011134u); /* 0x1214434E: push 0x12011134 */
    ecx = edi; /* 0x12144353: mov ecx, edi */
    RECOMP_CALL(sub_121427C5); /* 0x12144355: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_1214444E; /* 0x1214435A: jmp 0x1214444e */
L_1214435F:
    /* test eax, eax */ /* 0x1214435F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214438E; /* 0x12144361: jne 0x1214438e */
L_12144363:
    PUSH32(esp, ebx); /* 0x12144363: push ebx */
    ecx = edi; /* 0x12144364: mov ecx, edi */
    RECOMP_CALL(sub_1214277A); /* 0x12144366: call 0x1214277a */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1214436B: mov ecx, edi */
    /* test eax, eax */ /* 0x1214436D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144379; /* 0x1214436F: je 0x12144379 */
L_12144371:
    PUSH32(esp, eax); /* 0x12144371: push eax */
    RECOMP_CALL(sub_1214281C); /* 0x12144372: call 0x1214281c */
    RECOMP_FLAGS_IN();
    goto L_1214437F; /* 0x12144377: jmp 0x1214437f */
L_12144379:
    PUSH32(esp, ebx); /* 0x12144379: push ebx */
    RECOMP_CALL(sub_1214324E); /* 0x1214437A: call 0x1214324e */
    RECOMP_FLAGS_IN();
L_1214437F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214437F: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x12144382: mov ecx, edi */
    RECOMP_CALL(sub_1214324E); /* 0x12144384: call 0x1214324e */
    RECOMP_FLAGS_IN();
    goto L_12144435; /* 0x12144389: jmp 0x12144435 */
L_1214438E:
    ecx = ebp + (-0xC); /* 0x1214438E: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x12144391: push ecx */
    PUSH32(esp, 2); /* 0x12144392: push 2 */
    ecx = ebp + (-0x8); /* 0x12144394: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x12144397: push ecx */
    ecx = edi + 0x30; /* 0x12144398: lea ecx, [edi + 0x30] */
    MEM32(ebp + (-0x8)) = 0x34u; /* 0x1214439B: mov dword ptr [ebp - 8], 0x34 */
    RECOMP_CALL(sub_12146502); /* 0x121443A2: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x121443A7: push ebx */
    ecx = edi; /* 0x121443A8: mov ecx, edi */
    RECOMP_CALL(sub_1214277A); /* 0x121443AA: call 0x1214277a */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x121443AF: mov ecx, edi */
    /* test eax, eax */ /* 0x121443B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121443BD; /* 0x121443B3: je 0x121443bd */
L_121443B5:
    PUSH32(esp, eax); /* 0x121443B5: push eax */
    RECOMP_CALL(sub_1214281C); /* 0x121443B6: call 0x1214281c */
    RECOMP_FLAGS_IN();
    goto L_121443C3; /* 0x121443BB: jmp 0x121443c3 */
L_121443BD:
    PUSH32(esp, ebx); /* 0x121443BD: push ebx */
    RECOMP_CALL(sub_1214324E); /* 0x121443BE: call 0x1214324e */
    RECOMP_FLAGS_IN();
L_121443C3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121443C3: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x121443C6: mov ecx, edi */
    RECOMP_CALL(sub_1214324E); /* 0x121443C8: call 0x1214324e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x121443CD: mov ebx, dword ptr [ebp - 4] */
    /* cmp MEM32(ebx), esi */ /* 0x121443D0: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12144435; /* 0x121443D2: jbe 0x12144435 */
L_121443D4:
    eax = ebp + (-0xC); /* 0x121443D4: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x121443D7: push eax */
    PUSH32(esp, 2); /* 0x121443D8: push 2 */
    eax = ebp + 0x8; /* 0x121443DA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x121443DD: push eax */
    ecx = edi + 0x30; /* 0x121443DE: lea ecx, [edi + 0x30] */
    MEM32(ebp + 0x8) = 0xEu; /* 0x121443E1: mov dword ptr [ebp + 8], 0xe */
    RECOMP_CALL(sub_12146502); /* 0x121443E8: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x121443ED: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x121443F0: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(eax); /* 0x121443F3: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x121443F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144403; /* 0x121443F7: je 0x12144403 */
L_121443F9:
    PUSH32(esp, ecx); /* 0x121443F9: push ecx */
    ecx = edi; /* 0x121443FA: mov ecx, edi */
    RECOMP_CALL(sub_12143217); /* 0x121443FC: call 0x12143217 */
    RECOMP_FLAGS_IN();
    goto L_12144417; /* 0x12144401: jmp 0x12144417 */
L_12144403:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x12144403: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144297; /* 0x12144407: je 0x12144297 */
L_1214440D:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1214440D: push dword ptr [eax + 4] */
    ecx = edi; /* 0x12144410: mov ecx, edi */
    RECOMP_CALL(sub_1214324E); /* 0x12144412: call 0x1214324e */
    RECOMP_FLAGS_IN();
L_12144417:
    eax = ebp + (-0x8); /* 0x12144417: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214441A: push eax */
    PUSH32(esp, 2); /* 0x1214441B: push 2 */
    eax = ebp + 0x8; /* 0x1214441D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12144420: push eax */
    ecx = edi + 0x30; /* 0x12144421: lea ecx, [edi + 0x30] */
    MEM32(ebp + 0x8) = 0xFu; /* 0x12144424: mov dword ptr [ebp + 8], 0xf */
    RECOMP_CALL(sub_12146502); /* 0x1214442B: call 0x12146502 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12144430: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x12144431: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121443D4; /* 0x12144433: jb 0x121443d4 */
L_12144435:
    eax = ebp + (-0xC); /* 0x12144435: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12144438: push eax */
    PUSH32(esp, 2); /* 0x12144439: push 2 */
    eax = ebp + 0x8; /* 0x1214443B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214443E: push eax */
    ecx = edi + 0x30; /* 0x1214443F: lea ecx, [edi + 0x30] */
    MEM32(ebp + 0x8) = 0x14u; /* 0x12144442: mov dword ptr [ebp + 8], 0x14 */
    RECOMP_CALL(sub_12146502); /* 0x12144449: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_1214444E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214444E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12144450:
    edi = POP32_VAL(esp); /* 0x12144450: pop edi */
    esi = POP32_VAL(esp); /* 0x12144451: pop esi */
    ebx = POP32_VAL(esp); /* 0x12144452: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144453: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12144454: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214445C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214445Cu);

L_1214445C:
    edi = edi; /* 0x1214445C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214445E: push ebp */
    ebp = esp; /* 0x1214445F: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12144461: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x12144464: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12144467: push esi */
    esi = ecx; /* 0x12144468: mov esi, ecx */
    MEM32(esi) = 0x12011150u; /* 0x1214446A: mov dword ptr [esi], 0x12011150 */
    MEM32(esi + 0x4) = 1; /* 0x12144470: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x12144477: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x18) = 0x64u; /* 0x1214447A: mov dword ptr [esi + 0x18], 0x64 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12144481: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x12144483: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = ecx; /* 0x12144486: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x12144489: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x1214448C: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = ecx; /* 0x1214448F: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x28) = 0xAu; /* 0x12144492: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x2C) = ecx; /* 0x12144499: mov dword ptr [esi + 0x2c], ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu));
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0xFFFFFFFFu; /* 0x1214449C: or dword ptr [esi + 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x121444A0: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(ebp + 0x14); /* 0x121444A3: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x34) = eax; /* 0x121444A6: mov dword ptr [esi + 0x34], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x121444A9: mov al, byte ptr [ebp + 0x18] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x121444AC: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x121444AF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x40) = ecx; /* 0x121444B2: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x121444B5: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0xC) = eax; /* 0x121444B8: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edx); /* 0x121444BB: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x121444BD: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x121444BE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121444C1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121444C3: pop esi */
    ebp = POP32_VAL(esp); /* 0x121444C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121444C5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121444CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121444CDu);

L_121444CD:
    edi = edi; /* 0x121444CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121444CF: push ebp */
    ebp = esp; /* 0x121444D0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x121444D2: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x121444D5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121444D8: push esi */
    esi = ecx; /* 0x121444D9: mov esi, ecx */
    MEM32(esi) = 0x12011150u; /* 0x121444DB: mov dword ptr [esi], 0x12011150 */
    MEM32(esi + 0x4) = 1; /* 0x121444E1: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x121444E8: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x18) = 0x64u; /* 0x121444EB: mov dword ptr [esi + 0x18], 0x64 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121444F2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x121444F4: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = ecx; /* 0x121444F7: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x121444FA: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x121444FD: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = ecx; /* 0x12144500: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x28) = 0xAu; /* 0x12144503: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x2C) = ecx; /* 0x1214450A: mov dword ptr [esi + 0x2c], ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu));
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0xFFFFFFFFu; /* 0x1214450D: or dword ptr [esi + 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x12144511: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144514: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x34) = eax; /* 0x12144517: mov dword ptr [esi + 0x34], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x1214451A: mov al, byte ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((LO8(eax) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x40u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x40u); /* 0x1214451D: or al, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x1214451F: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x12144522: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x40) = ecx; /* 0x12144525: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x12144528: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0xC) = eax; /* 0x1214452B: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edx); /* 0x1214452E: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12144530: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144531: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144534: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12144536: pop esi */
    ebp = POP32_VAL(esp); /* 0x12144537: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12144538: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12144540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144540u);

L_12144540:
    edi = edi; /* 0x12144540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144542: push ebp */
    ebp = esp; /* 0x12144543: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12144545: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x12144548: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214454B: push esi */
    esi = ecx; /* 0x1214454C: mov esi, ecx */
    MEM32(esi) = 0x12011150u; /* 0x1214454E: mov dword ptr [esi], 0x12011150 */
    MEM32(esi + 0x4) = 1; /* 0x12144554: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x1214455B: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x18) = 0x64u; /* 0x1214455E: mov dword ptr [esi + 0x18], 0x64 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12144565: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x12144567: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = ecx; /* 0x1214456A: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x1214456D: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x12144570: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = ecx; /* 0x12144573: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x28) = 0xAu; /* 0x12144576: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x2C) = ecx; /* 0x1214457D: mov dword ptr [esi + 0x2c], ecx */
    MEM32(esi + 0x30) = eax; /* 0x12144580: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144583: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x34) = eax; /* 0x12144586: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x12144589: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x38) = eax; /* 0x1214458C: mov dword ptr [esi + 0x38], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x1214458F: mov al, byte ptr [ebp + 0x1c] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x12144592: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x12144595: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x40) = ecx; /* 0x12144598: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x1214459B: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0xC) = eax; /* 0x1214459E: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edx); /* 0x121445A1: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x121445A3: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x121445A4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121445A7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121445A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x121445AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121445AB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121445B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121445B3u);

L_121445B3:
    edi = edi; /* 0x121445B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121445B5: push ebp */
    ebp = esp; /* 0x121445B6: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x121445B8: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x121445BB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121445BE: push esi */
    esi = ecx; /* 0x121445BF: mov esi, ecx */
    MEM32(esi) = 0x12011150u; /* 0x121445C1: mov dword ptr [esi], 0x12011150 */
    MEM32(esi + 0x4) = 1; /* 0x121445C7: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x121445CE: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x18) = 0x64u; /* 0x121445D1: mov dword ptr [esi + 0x18], 0x64 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121445D8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x121445DA: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = ecx; /* 0x121445DD: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x121445E0: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x121445E3: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = ecx; /* 0x121445E6: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x28) = 0xAu; /* 0x121445E9: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x2C) = ecx; /* 0x121445F0: mov dword ptr [esi + 0x2c], ecx */
    MEM32(esi + 0x30) = eax; /* 0x121445F3: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(ebp + 0x14); /* 0x121445F6: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x34) = eax; /* 0x121445F9: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x121445FC: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x38) = eax; /* 0x121445FF: mov dword ptr [esi + 0x38], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x12144602: mov al, byte ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((LO8(eax) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x40u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x40u); /* 0x12144605: or al, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x12144607: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x1214460A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x40) = ecx; /* 0x1214460D: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x12144610: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0xC) = eax; /* 0x12144613: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edx); /* 0x12144616: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12144618: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144619: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1214461C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214461E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214461F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12144620: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12144628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144628u);

    goto L_12144628;
L_12142B41:
    edi = edi; /* 0x12142B41: mov edi, edi */
    PUSH32(esp, esi); /* 0x12142B43: push esi */
    PUSH32(esp, edi); /* 0x12142B44: push edi */
    edi = ecx; /* 0x12142B45: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12142B47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC), esi */ /* 0x12142B49: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B4C: je 0x12142b6c */
L_12142B4E:
    /* cmp MEM32(edi), esi */ /* 0x12142B4E: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B50: jbe 0x12142b6c */
L_12142B52:
    eax = MEM32(edi + 0xC); /* 0x12142B52: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12142B55: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx + 0x18); /* 0x12142B58: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12142B5B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x18) = eax; /* 0x12142B5C: mov dword ptr [ecx + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12142B67; /* 0x12142B5F: jne 0x12142b67 */
L_12142B61:
    eax = MEM32(ecx); /* 0x12142B61: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12142B63: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x12142B65: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12142B67:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12142B67: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x12142B68: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12142B52; /* 0x12142B6A: jb 0x12142b52 */
L_12142B6C:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12142B6C: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12142B6F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12142B74: pop ecx */
    edi = POP32_VAL(esp); /* 0x12142B75: pop edi */
    esi = POP32_VAL(esp); /* 0x12142B76: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12142B77: ret  */
L_12144628:
    edi = edi; /* 0x12144628: mov edi, edi */
    PUSH32(esp, esi); /* 0x1214462A: push esi */
    PUSH32(esp, edi); /* 0x1214462B: push edi */
    edi = MEM32(0x120010F0); /* 0x1214462C: mov edi, dword ptr [0x120010f0] */
    esi = ecx; /* 0x12144632: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x12144634: push dword ptr [esi + 0x30] */
    MEM32(esi) = 0x12011150u; /* 0x12144637: mov dword ptr [esi], 0x12011150 */
    RECOMP_ICALL(edi); /* 0x1214463D: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214463F: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(edi); /* 0x12144642: call edi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x38), 0xFFFFFFFFu */ /* 0x12144644: cmp dword ptr [esi + 0x38], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214464F; /* 0x12144648: je 0x1214464f */
L_1214464A:
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x1214464A: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(edi); /* 0x1214464D: call edi */
    RECOMP_FLAGS_IN();
L_1214464F:
    SET_LO8(eax, MEM8(esi + 0x48)); /* 0x1214464F: mov al, byte ptr [esi + 0x48] */
    /* test LO8(eax), 0x40u */ /* 0x12144652: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144665; /* 0x12144654: je 0x12144665 */
L_12144656:
    /* test LO8(eax), LO8(eax) */ /* 0x12144656: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144672; /* 0x12144658: js 0x12144672 */
L_1214465A:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1214465A: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x1214465D: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    goto L_12144672; /* 0x12144663: jmp 0x12144672 */
L_12144665:
    /* test LO8(eax), LO8(eax) */ /* 0x12144665: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144672; /* 0x12144667: js 0x12144672 */
L_12144669:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x12144669: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x1214466C: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
L_12144672:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x12144672: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x12144675: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x1214467A: mov eax, dword ptr [esi + 8] */
    ecx = POP32_VAL(esp); /* 0x1214467D: pop ecx */
    ecx = MEM32(eax); /* 0x1214467E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12144680: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x12144681: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x12144684: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_121436A4); /* 0x12144687: call 0x121436a4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214468C: pop edi */
    ecx = esi + 0x10; /* 0x1214468D: lea ecx, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x12144690: pop esi */
    RECOMP_BACKEDGE();
    goto L_12142B41; /* 0x12144691: jmp 0x12142b41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214469B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214469Bu);

L_1214469B:
    edi = edi; /* 0x1214469B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214469D: push ebp */
    ebp = esp; /* 0x1214469E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x214u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x214u; /* 0x121446A0: sub esp, 0x214 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121446A6: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121446AB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121446AD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x121446B0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121446B3: push esi */
    PUSH32(esp, edi); /* 0x121446B4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121446B5: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20C)) = eax; /* 0x121446B8: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(ebp + 0x14); /* 0x121446BE: mov eax, dword ptr [ebp + 0x14] */
    ecx = edi; /* 0x121446C1: mov ecx, edi */
    MEM32(ebp + (-0x214)) = eax; /* 0x121446C3: mov dword ptr [ebp - 0x214], eax */
    edx = ecx + 0x1; /* 0x121446C9: lea edx, [ecx + 1] */
L_121446CC:
    SET_LO8(eax, MEM8(ecx)); /* 0x121446CC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121446CE: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121446CF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121446CC; /* 0x121446D1: jne 0x121446cc */
L_121446D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121446D3: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x121446D5: lea esi, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x121446D8: push 0x120014bc */
    PUSH32(esp, esi); /* 0x121446DD: push esi */
    RECOMP_CALL(sub_12018970); /* 0x121446DE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121446E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121446E4: pop ecx */
    MEM32(ebp + (-0x208)) = eax; /* 0x121446E5: mov dword ptr [ebp - 0x208], eax */
    /* test eax, eax */ /* 0x121446EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121446F9; /* 0x121446ED: jne 0x121446f9 */
L_121446EF:
    eax = 0x8007000Eu; /* 0x121446EF: mov eax, 0x8007000e */
    goto L_1214492D; /* 0x121446F4: jmp 0x1214492d */
L_121446F9:
    PUSH32(esp, ebx); /* 0x121446F9: push ebx */
    PUSH32(esp, esi); /* 0x121446FA: push esi */
    PUSH32(esp, edi); /* 0x121446FB: push edi */
    PUSH32(esp, eax); /* 0x121446FC: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121446FD: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12144702: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12144705: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12144707: push esi */
    PUSH32(esp, 0x08000080u); /* 0x12144708: push 0x8000080 */
    PUSH32(esp, 2); /* 0x1214470D: push 2 */
    PUSH32(esp, esi); /* 0x1214470F: push esi */
    PUSH32(esp, esi); /* 0x12144710: push esi */
    PUSH32(esp, 0x40000000u); /* 0x12144711: push 0x40000000 */
    PUSH32(esp, edi); /* 0x12144716: push edi */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12144717: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214471D: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214471F: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214472E; /* 0x12144722: jne 0x1214472e */
L_12144724:
    esi = 0x8876038Fu; /* 0x12144724: mov esi, 0x8876038f */
    goto L_121448CD; /* 0x12144729: jmp 0x121448cd */
L_1214472E:
    eax = ebp + (-0x200); /* 0x1214472E: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x12144734: push eax */
    PUSH32(esp, 0xF6u); /* 0x12144735: push 0xf6 */
    RECOMP_ICALL(MEM32(0x120010E0)); /* 0x1214473A: call dword ptr [0x120010e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144740: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214490D; /* 0x12144742: je 0x1214490d */
L_12144748:
    eax = ebp + (-0x108); /* 0x12144748: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1214474E: push eax */
    PUSH32(esp, esi); /* 0x1214474F: push esi */
    PUSH32(esp, 0x1201116Cu); /* 0x12144750: push 0x1201116c */
    eax = ebp + (-0x200); /* 0x12144755: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x1214475B: push eax */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x1214475C: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144762: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214490D; /* 0x12144764: je 0x1214490d */
L_1214476A:
    PUSH32(esp, esi); /* 0x1214476A: push esi */
    PUSH32(esp, 0x0C000100u); /* 0x1214476B: push 0xc000100 */
    PUSH32(esp, 2); /* 0x12144770: push 2 */
    PUSH32(esp, esi); /* 0x12144772: push esi */
    PUSH32(esp, esi); /* 0x12144773: push esi */
    PUSH32(esp, 0xC0000000u); /* 0x12144774: push 0xc0000000 */
    eax = ebp + (-0x108); /* 0x12144779: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1214477F: push eax */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12144780: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x204)) = eax; /* 0x12144786: mov dword ptr [ebp - 0x204], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1214478C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121447A9; /* 0x1214478F: jne 0x121447a9 */
L_12144791:
    PUSH32(esp, ebx); /* 0x12144791: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144792: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_12144798:
    PUSH32(esp, edi); /* 0x12144798: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x12144799: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    esi = 0x88760395u; /* 0x1214479F: mov esi, 0x88760395 */
    goto L_121448CD; /* 0x121447A4: jmp 0x121448cd */
L_121447A9:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x121447A9: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214487B; /* 0x121447AD: je 0x1214487b */
L_121447B3:
    eax = ebp + (-0x108); /* 0x121447B3: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x121447B9: push eax */
    PUSH32(esp, esi); /* 0x121447BA: push esi */
    PUSH32(esp, 0x1201116Cu); /* 0x121447BB: push 0x1201116c */
    eax = ebp + (-0x200); /* 0x121447C0: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x121447C6: push eax */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x121447C7: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121447CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121447F3; /* 0x121447CF: jne 0x121447f3 */
L_121447D1:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x121447D1: push dword ptr [ebp - 0x204] */
    esi = MEM32(0x120010F0); /* 0x121447D7: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x121447DD: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x121447DF: push ebx */
    RECOMP_ICALL(esi); /* 0x121447E0: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121447E2: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x121447E3: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    esi = 0x80004005u; /* 0x121447E9: mov esi, 0x80004005 */
    goto L_121448CD; /* 0x121447EE: jmp 0x121448cd */
L_121447F3:
    PUSH32(esp, esi); /* 0x121447F3: push esi */
    PUSH32(esp, 0x0C000100u); /* 0x121447F4: push 0xc000100 */
    PUSH32(esp, 2); /* 0x121447F9: push 2 */
    PUSH32(esp, esi); /* 0x121447FB: push esi */
    PUSH32(esp, esi); /* 0x121447FC: push esi */
    PUSH32(esp, 0xC0000000u); /* 0x121447FD: push 0xc0000000 */
    eax = ebp + (-0x108); /* 0x12144802: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12144808: push eax */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12144809: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x210)) = eax; /* 0x1214480F: mov dword ptr [ebp - 0x210], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12144815: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144830; /* 0x12144818: jne 0x12144830 */
L_1214481A:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x1214481A: push dword ptr [ebp - 0x204] */
    esi = MEM32(0x120010F0); /* 0x12144820: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12144826: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12144828: push ebx */
    RECOMP_ICALL(esi); /* 0x12144829: call esi */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12144798; /* 0x1214482B: jmp 0x12144798 */
L_12144830:
    PUSH32(esp, 0x120014BCu); /* 0x12144830: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x12144835: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x12144837: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214483C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214483D: pop ecx */
    /* test eax, eax */ /* 0x1214483E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144867; /* 0x12144840: je 0x12144867 */
L_12144842:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12144842: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x12144845: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x12144847: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144848: push dword ptr [ebp - 0x204] */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x1214484E: push dword ptr [ebp - 0x210] */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144854: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x1214485A: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_12144540); /* 0x12144860: call 0x12144540 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12144865: mov esi, eax */
L_12144867:
    /* test esi, esi */ /* 0x12144867: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121448DC; /* 0x12144869: jne 0x121448dc */
L_1214486B:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x1214486B: push dword ptr [ebp - 0x210] */
    esi = MEM32(0x120010F0); /* 0x12144871: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12144877: call esi */
    RECOMP_FLAGS_IN();
    goto L_121448B6; /* 0x12144879: jmp 0x121448b6 */
L_1214487B:
    PUSH32(esp, 0x120014BCu); /* 0x1214487B: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x12144880: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x12144882: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12144887: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12144888: pop ecx */
    /* test eax, eax */ /* 0x12144889: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121448AC; /* 0x1214488B: je 0x121448ac */
L_1214488D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214488D: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x12144890: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144892: push dword ptr [ebp - 0x204] */
    PUSH32(esp, ebx); /* 0x12144898: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144899: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x1214489F: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_1214445C); /* 0x121448A5: call 0x1214445c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121448AA: mov esi, eax */
L_121448AC:
    /* test esi, esi */ /* 0x121448AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121448DC; /* 0x121448AE: jne 0x121448dc */
L_121448B0:
    esi = MEM32(0x120010F0); /* 0x121448B0: mov esi, dword ptr [0x120010f0] */
L_121448B6:
    PUSH32(esp, ebx); /* 0x121448B6: push ebx */
    RECOMP_ICALL(esi); /* 0x121448B7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x121448B9: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(esi); /* 0x121448BF: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121448C1: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x121448C2: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x121448C8: mov esi, 0x8007000e */
L_121448CD:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x121448CD: push dword ptr [ebp - 0x208] */
    RECOMP_CALL(sub_121BF388); /* 0x121448D3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121448D8: mov eax, esi */
    goto L_1214492B; /* 0x121448DA: jmp 0x1214492b */
L_121448DC:
    ecx = esi; /* 0x121448DC: mov ecx, esi */
    RECOMP_CALL(sub_12142864); /* 0x121448DE: call 0x12142864 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121448E3: mov ebx, eax */
    /* test ebx, ebx */ /* 0x121448E5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12144901; /* 0x121448E7: jns 0x12144901 */
L_121448E9:
    /* test esi, esi */ /* 0x121448E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121448F6; /* 0x121448EB: je 0x121448f6 */
L_121448ED:
    edx = MEM32(esi); /* 0x121448ED: mov edx, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x121448EF: push 1 */
    ecx = esi; /* 0x121448F1: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x121448F3: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
L_121448F6:
    PUSH32(esp, edi); /* 0x121448F6: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x121448F7: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x121448FD: mov eax, ebx */
    goto L_1214492C; /* 0x121448FF: jmp 0x1214492c */
L_12144901:
    eax = MEM32(ebp + (-0x214)); /* 0x12144901: mov eax, dword ptr [ebp - 0x214] */
    MEM32(eax) = esi; /* 0x12144907: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144909: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214492C; /* 0x1214490B: jmp 0x1214492c */
L_1214490D:
    PUSH32(esp, ebx); /* 0x1214490D: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x1214490E: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12144914: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x12144915: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x1214491B: push dword ptr [ebp - 0x208] */
    RECOMP_CALL(sub_121BF388); /* 0x12144921: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x12144926: mov eax, 0x80004005 */
L_1214492B:
    ecx = POP32_VAL(esp); /* 0x1214492B: pop ecx */
L_1214492C:
    ebx = POP32_VAL(esp); /* 0x1214492C: pop ebx */
L_1214492D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214492D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12144930: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12144931: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12144933: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12144934: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144939: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1214493A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12144942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144942u);

L_12144942:
    edi = edi; /* 0x12144942: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144944: push ebp */
    ebp = esp; /* 0x12144945: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x214u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x214u; /* 0x12144947: sub esp, 0x214 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214494D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12144952: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12144954: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12144957: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214495A: push ebx */
    PUSH32(esp, esi); /* 0x1214495B: push esi */
    PUSH32(esp, edi); /* 0x1214495C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1214495D: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20C)) = eax; /* 0x12144960: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144966: mov eax, dword ptr [ebp + 0x14] */
    ecx = edi; /* 0x12144969: mov ecx, edi */
    PUSH32(esp, 2); /* 0x1214496B: push 2 */
    MEM32(ebp + (-0x214)) = eax; /* 0x1214496D: mov dword ptr [ebp - 0x214], eax */
    edx = ecx + 0x2; /* 0x12144973: lea edx, [ecx + 2] */
    ebx = POP32_VAL(esp); /* 0x12144976: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12144977: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12144979:
    SET_LO16(eax, MEM16(ecx)); /* 0x12144979: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1214497C: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1214497E: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144979; /* 0x12144981: jne 0x12144979 */
L_12144983:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12144983: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x12144985: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = ecx + 0x1; /* 0x12144987: lea ebx, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x1214498A: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214498F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x12144991: push 2 */
    edx = POP32_VAL(esp); /* 0x12144993: pop edx */
    eax = ebx; /* 0x12144994: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12144996: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12144998: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1214499B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1214499D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1214499F: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x121449A0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121449A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121449A6: pop ecx */
    ecx = eax; /* 0x121449A7: mov ecx, eax */
    MEM32(ebp + (-0x208)) = ecx; /* 0x121449A9: mov dword ptr [ebp - 0x208], ecx */
    /* test ecx, ecx */ /* 0x121449AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121449BD; /* 0x121449B1: jne 0x121449bd */
L_121449B3:
    eax = 0x8007000Eu; /* 0x121449B3: mov eax, 0x8007000e */
    goto L_12144BF6; /* 0x121449B8: jmp 0x12144bf6 */
L_121449BD:
    eax = ebx + ebx; /* 0x121449BD: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x121449C0: push eax */
    PUSH32(esp, edi); /* 0x121449C1: push edi */
    PUSH32(esp, ecx); /* 0x121449C2: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x121449C3: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121449C8: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x121449CB: push esi */
    PUSH32(esp, 0x08000080u); /* 0x121449CC: push 0x8000080 */
    PUSH32(esp, 2); /* 0x121449D1: push 2 */
    eax = POP32_VAL(esp); /* 0x121449D3: pop eax */
    PUSH32(esp, eax); /* 0x121449D4: push eax */
    PUSH32(esp, esi); /* 0x121449D5: push esi */
    PUSH32(esp, esi); /* 0x121449D6: push esi */
    PUSH32(esp, 0x40000000u); /* 0x121449D7: push 0x40000000 */
    PUSH32(esp, edi); /* 0x121449DC: push edi */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x121449DD: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121449E3: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x121449E5: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121449F4; /* 0x121449E8: jne 0x121449f4 */
L_121449EA:
    esi = 0x8876038Fu; /* 0x121449EA: mov esi, 0x8876038f */
    goto L_12144B97; /* 0x121449EF: jmp 0x12144b97 */
L_121449F4:
    eax = ebp + (-0x200); /* 0x121449F4: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x121449FA: push eax */
    PUSH32(esp, 0xF6u); /* 0x121449FB: push 0xf6 */
    RECOMP_ICALL(MEM32(0x120010E0)); /* 0x12144A00: call dword ptr [0x120010e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144A06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144BD7; /* 0x12144A08: je 0x12144bd7 */
L_12144A0E:
    eax = ebp + (-0x108); /* 0x12144A0E: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12144A14: push eax */
    PUSH32(esp, esi); /* 0x12144A15: push esi */
    PUSH32(esp, 0x1201116Cu); /* 0x12144A16: push 0x1201116c */
    eax = ebp + (-0x200); /* 0x12144A1B: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x12144A21: push eax */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x12144A22: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144A28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144BD7; /* 0x12144A2A: je 0x12144bd7 */
L_12144A30:
    PUSH32(esp, esi); /* 0x12144A30: push esi */
    PUSH32(esp, 0x0C000100u); /* 0x12144A31: push 0xc000100 */
    PUSH32(esp, 2); /* 0x12144A36: push 2 */
    eax = POP32_VAL(esp); /* 0x12144A38: pop eax */
    PUSH32(esp, eax); /* 0x12144A39: push eax */
    PUSH32(esp, esi); /* 0x12144A3A: push esi */
    PUSH32(esp, esi); /* 0x12144A3B: push esi */
    PUSH32(esp, 0xC0000000u); /* 0x12144A3C: push 0xc0000000 */
    eax = ebp + (-0x108); /* 0x12144A41: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12144A47: push eax */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12144A48: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x204)) = eax; /* 0x12144A4E: mov dword ptr [ebp - 0x204], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12144A54: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144A71; /* 0x12144A57: jne 0x12144a71 */
L_12144A59:
    PUSH32(esp, ebx); /* 0x12144A59: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144A5A: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_12144A60:
    PUSH32(esp, edi); /* 0x12144A60: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12144A61: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    esi = 0x88760395u; /* 0x12144A67: mov esi, 0x88760395 */
    goto L_12144B97; /* 0x12144A6C: jmp 0x12144b97 */
L_12144A71:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x12144A71: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144B45; /* 0x12144A75: je 0x12144b45 */
L_12144A7B:
    eax = ebp + (-0x108); /* 0x12144A7B: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12144A81: push eax */
    PUSH32(esp, esi); /* 0x12144A82: push esi */
    PUSH32(esp, 0x1201116Cu); /* 0x12144A83: push 0x1201116c */
    eax = ebp + (-0x200); /* 0x12144A88: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x12144A8E: push eax */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x12144A8F: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144A95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12144ABB; /* 0x12144A97: jne 0x12144abb */
L_12144A99:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144A99: push dword ptr [ebp - 0x204] */
    esi = MEM32(0x120010F0); /* 0x12144A9F: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12144AA5: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12144AA7: push ebx */
    RECOMP_ICALL(esi); /* 0x12144AA8: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12144AAA: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12144AAB: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    esi = 0x80004005u; /* 0x12144AB1: mov esi, 0x80004005 */
    goto L_12144B97; /* 0x12144AB6: jmp 0x12144b97 */
L_12144ABB:
    PUSH32(esp, esi); /* 0x12144ABB: push esi */
    PUSH32(esp, 0x0C000100u); /* 0x12144ABC: push 0xc000100 */
    PUSH32(esp, 2); /* 0x12144AC1: push 2 */
    eax = POP32_VAL(esp); /* 0x12144AC3: pop eax */
    PUSH32(esp, eax); /* 0x12144AC4: push eax */
    PUSH32(esp, esi); /* 0x12144AC5: push esi */
    PUSH32(esp, esi); /* 0x12144AC6: push esi */
    PUSH32(esp, 0xC0000000u); /* 0x12144AC7: push 0xc0000000 */
    eax = ebp + (-0x108); /* 0x12144ACC: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12144AD2: push eax */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12144AD3: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x210)) = eax; /* 0x12144AD9: mov dword ptr [ebp - 0x210], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12144ADF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144AFA; /* 0x12144AE2: jne 0x12144afa */
L_12144AE4:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144AE4: push dword ptr [ebp - 0x204] */
    esi = MEM32(0x120010F0); /* 0x12144AEA: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12144AF0: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12144AF2: push ebx */
    RECOMP_ICALL(esi); /* 0x12144AF3: call esi */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12144A60; /* 0x12144AF5: jmp 0x12144a60 */
L_12144AFA:
    PUSH32(esp, 0x120014BCu); /* 0x12144AFA: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x12144AFF: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x12144B01: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12144B06: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12144B07: pop ecx */
    /* test eax, eax */ /* 0x12144B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144B31; /* 0x12144B0A: je 0x12144b31 */
L_12144B0C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12144B0C: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x12144B0F: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x12144B11: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144B12: push dword ptr [ebp - 0x204] */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x12144B18: push dword ptr [ebp - 0x210] */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144B1E: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x12144B24: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_121445B3); /* 0x12144B2A: call 0x121445b3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12144B2F: mov esi, eax */
L_12144B31:
    /* test esi, esi */ /* 0x12144B31: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12144BA6; /* 0x12144B33: jne 0x12144ba6 */
L_12144B35:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x12144B35: push dword ptr [ebp - 0x210] */
    esi = MEM32(0x120010F0); /* 0x12144B3B: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12144B41: call esi */
    RECOMP_FLAGS_IN();
    goto L_12144B80; /* 0x12144B43: jmp 0x12144b80 */
L_12144B45:
    PUSH32(esp, 0x120014BCu); /* 0x12144B45: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x12144B4A: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x12144B4C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12144B51: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12144B52: pop ecx */
    /* test eax, eax */ /* 0x12144B53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144B76; /* 0x12144B55: je 0x12144b76 */
L_12144B57:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12144B57: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x12144B5A: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144B5C: push dword ptr [ebp - 0x204] */
    PUSH32(esp, ebx); /* 0x12144B62: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144B63: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x12144B69: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_121444CD); /* 0x12144B6F: call 0x121444cd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12144B74: mov esi, eax */
L_12144B76:
    /* test esi, esi */ /* 0x12144B76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12144BA6; /* 0x12144B78: jne 0x12144ba6 */
L_12144B7A:
    esi = MEM32(0x120010F0); /* 0x12144B7A: mov esi, dword ptr [0x120010f0] */
L_12144B80:
    PUSH32(esp, ebx); /* 0x12144B80: push ebx */
    RECOMP_ICALL(esi); /* 0x12144B81: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x12144B83: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(esi); /* 0x12144B89: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12144B8B: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12144B8C: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x12144B92: mov esi, 0x8007000e */
L_12144B97:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144B97: push dword ptr [ebp - 0x208] */
    RECOMP_CALL(sub_121BF388); /* 0x12144B9D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144BA2: mov eax, esi */
    goto L_12144BF5; /* 0x12144BA4: jmp 0x12144bf5 */
L_12144BA6:
    ecx = esi; /* 0x12144BA6: mov ecx, esi */
    RECOMP_CALL(sub_12142864); /* 0x12144BA8: call 0x12142864 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12144BAD: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12144BAF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12144BCB; /* 0x12144BB1: jns 0x12144bcb */
L_12144BB3:
    /* test esi, esi */ /* 0x12144BB3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144BC0; /* 0x12144BB5: je 0x12144bc0 */
L_12144BB7:
    edx = MEM32(esi); /* 0x12144BB7: mov edx, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x12144BB9: push 1 */
    ecx = esi; /* 0x12144BBB: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x12144BBD: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
L_12144BC0:
    PUSH32(esp, edi); /* 0x12144BC0: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12144BC1: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x12144BC7: mov eax, ebx */
    goto L_12144BF6; /* 0x12144BC9: jmp 0x12144bf6 */
L_12144BCB:
    eax = MEM32(ebp + (-0x214)); /* 0x12144BCB: mov eax, dword ptr [ebp - 0x214] */
    MEM32(eax) = esi; /* 0x12144BD1: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144BD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12144BF6; /* 0x12144BD5: jmp 0x12144bf6 */
L_12144BD7:
    PUSH32(esp, ebx); /* 0x12144BD7: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144BD8: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12144BDE: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12144BDF: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x12144BE5: push dword ptr [ebp - 0x208] */
    RECOMP_CALL(sub_121BF388); /* 0x12144BEB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x12144BF0: mov eax, 0x80004005 */
L_12144BF5:
    ecx = POP32_VAL(esp); /* 0x12144BF5: pop ecx */
L_12144BF6:
    ecx = MEM32(ebp + (-0x4)); /* 0x12144BF6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12144BF9: pop edi */
    esi = POP32_VAL(esp); /* 0x12144BFA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12144BFB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12144BFD: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12144BFE: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144C03: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12144C04: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12144C0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144C0Cu);

L_12144C0C:
    edi = edi; /* 0x12144C0C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144C0E: push ebp */
    ebp = esp; /* 0x12144C0F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12144C11: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x12144C14: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x12144C17: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x12144C1A: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x12144C1D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0xC) = eax; /* 0x12144C20: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144C23: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x10) = eax; /* 0x12144C26: mov dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144C29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x12011170u; /* 0x12144C2B: mov dword ptr [ecx], 0x12011170 */
    MEM32(ecx + 0x14) = eax; /* 0x12144C31: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x18) = eax; /* 0x12144C34: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x20) = eax; /* 0x12144C37: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x1C) = 0xAu; /* 0x12144C3A: mov dword ptr [ecx + 0x1c], 0xa */
    eax = ecx; /* 0x12144C41: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x12144C43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12144C44: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12144C4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144C4Cu);

L_12144C4C:
    edi = edi; /* 0x12144C4C: mov edi, edi */
    PUSH32(esp, esi); /* 0x12144C4E: push esi */
    esi = ecx; /* 0x12144C4F: mov esi, ecx */
    ecx = esi + 0x14; /* 0x12144C51: lea ecx, [esi + 0x14] */
    MEM32(esi) = 0x12011170u; /* 0x12144C54: mov dword ptr [esi], 0x12011170 */
    RECOMP_CALL(sub_121436DB); /* 0x12144C5A: call 0x121436db */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x12010FC0u; /* 0x12144C5F: mov dword ptr [esi], 0x12010fc0 */
    esi = POP32_VAL(esp); /* 0x12144C65: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12144C66: ret  */
    RECOMP_REGS_OUT();
}

void sub_12144C6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144C6Cu);

L_12144C6C:
    edi = edi; /* 0x12144C6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144C6E: push ebp */
    ebp = esp; /* 0x12144C6F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12144C71: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12144C74: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12144C77: push esi */
    esi = ecx; /* 0x12144C78: mov esi, ecx */
    MEM32(esi + 0xC) = eax; /* 0x12144C7A: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x12144C7D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x12144C80: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144C83: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12144C86: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = eax; /* 0x12144C88: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x12144C8B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi) = 0x120111B4u; /* 0x12144C8E: mov dword ptr [esi], 0x120111b4 */
    MEM32(esi + 0x4) = 1; /* 0x12144C94: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x12144C9B: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x14) = ecx; /* 0x12144C9E: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x12144CA1: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x12144CA4: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = eax; /* 0x12144CA7: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x28) = ecx; /* 0x12144CAA: mov dword ptr [esi + 0x28], ecx */
    MEM32(esi + 0x2C) = ecx; /* 0x12144CAD: mov dword ptr [esi + 0x2c], ecx */
    MEM8(esi + 0x30) = (uint8_t)(LO8(ecx)); /* 0x12144CB0: mov byte ptr [esi + 0x30], cl */
    MEM32(esi + 0x34) = ecx; /* 0x12144CB3: mov dword ptr [esi + 0x34], ecx */
    MEM32(esi + 0x38) = ecx; /* 0x12144CB6: mov dword ptr [esi + 0x38], ecx */
    MEM32(esi + 0x3C) = 0x64u; /* 0x12144CB9: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = ecx; /* 0x12144CC0: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x12144CC3: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0x48) = ecx; /* 0x12144CC6: mov dword ptr [esi + 0x48], ecx */
    MEM32(esi + 0x4C) = 0xAu; /* 0x12144CC9: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = ecx; /* 0x12144CD0: mov dword ptr [esi + 0x50], ecx */
    eax = MEM32(edx); /* 0x12144CD3: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12144CD5: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144CD6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144CD9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12144CDB: pop esi */
    ebp = POP32_VAL(esp); /* 0x12144CDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12144CDD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12144CE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144CE5u);

L_12144CE5:
    edi = edi; /* 0x12144CE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144CE7: push ebp */
    ebp = esp; /* 0x12144CE8: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12144CEA: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12144CED: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12144CF0: push esi */
    esi = ecx; /* 0x12144CF1: mov esi, ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu; /* 0x12144CF3: or dword ptr [esi + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu; /* 0x12144CF7: or dword ptr [esi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = eax; /* 0x12144CFB: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x12144CFE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x12144D01: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x12144D04: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12144D07: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x120111B4u; /* 0x12144D09: mov dword ptr [esi], 0x120111b4 */
    MEM32(esi + 0x4) = 1; /* 0x12144D0F: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x12144D16: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x1C) = ecx; /* 0x12144D19: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x12144D1C: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = eax; /* 0x12144D1F: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x28) = ecx; /* 0x12144D22: mov dword ptr [esi + 0x28], ecx */
    MEM32(esi + 0x2C) = ecx; /* 0x12144D25: mov dword ptr [esi + 0x2c], ecx */
    MEM8(esi + 0x30) = (uint8_t)(LO8(ecx)); /* 0x12144D28: mov byte ptr [esi + 0x30], cl */
    MEM32(esi + 0x34) = ecx; /* 0x12144D2B: mov dword ptr [esi + 0x34], ecx */
    MEM32(esi + 0x38) = ecx; /* 0x12144D2E: mov dword ptr [esi + 0x38], ecx */
    MEM32(esi + 0x3C) = 0x64u; /* 0x12144D31: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = ecx; /* 0x12144D38: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x12144D3B: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0x48) = ecx; /* 0x12144D3E: mov dword ptr [esi + 0x48], ecx */
    MEM32(esi + 0x4C) = 0xAu; /* 0x12144D41: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = ecx; /* 0x12144D48: mov dword ptr [esi + 0x50], ecx */
    eax = MEM32(edx); /* 0x12144D4B: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12144D4D: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144D4E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144D51: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12144D53: pop esi */
    ebp = POP32_VAL(esp); /* 0x12144D54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12144D55: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12144D5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144D5Du);

L_12144D5D:
    edi = edi; /* 0x12144D5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144D5F: push ebp */
    ebp = esp; /* 0x12144D60: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12144D62: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12144D65: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12144D68: push esi */
    esi = ecx; /* 0x12144D69: mov esi, ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu; /* 0x12144D6B: or dword ptr [esi + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu; /* 0x12144D6F: or dword ptr [esi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12144D73: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = eax; /* 0x12144D75: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0x10); /* 0x12144D78: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = 0x120111B4u; /* 0x12144D7B: mov dword ptr [esi], 0x120111b4 */
    MEM32(esi + 0x4) = 1; /* 0x12144D81: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = edx; /* 0x12144D88: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0x14) = ecx; /* 0x12144D8B: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x1C) = ecx; /* 0x12144D8E: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x12144D91: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x24) = eax; /* 0x12144D94: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x28) = ecx; /* 0x12144D97: mov dword ptr [esi + 0x28], ecx */
    MEM32(esi + 0x2C) = ecx; /* 0x12144D9A: mov dword ptr [esi + 0x2c], ecx */
    MEM8(esi + 0x30) = (uint8_t)(LO8(ecx)); /* 0x12144D9D: mov byte ptr [esi + 0x30], cl */
    MEM32(esi + 0x34) = ecx; /* 0x12144DA0: mov dword ptr [esi + 0x34], ecx */
    MEM32(esi + 0x38) = ecx; /* 0x12144DA3: mov dword ptr [esi + 0x38], ecx */
    MEM32(esi + 0x3C) = 0x64u; /* 0x12144DA6: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = ecx; /* 0x12144DAD: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x44) = ecx; /* 0x12144DB0: mov dword ptr [esi + 0x44], ecx */
    MEM32(esi + 0x48) = ecx; /* 0x12144DB3: mov dword ptr [esi + 0x48], ecx */
    MEM32(esi + 0x4C) = 0xAu; /* 0x12144DB6: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = ecx; /* 0x12144DBD: mov dword ptr [esi + 0x50], ecx */
    eax = MEM32(edx); /* 0x12144DC0: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12144DC2: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144DC3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144DC6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12144DC8: pop esi */
    ebp = POP32_VAL(esp); /* 0x12144DC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12144DCA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12144DD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144DD2u);

    goto L_12144DD2;
L_12142B41:
    edi = edi; /* 0x12142B41: mov edi, edi */
    PUSH32(esp, esi); /* 0x12142B43: push esi */
    PUSH32(esp, edi); /* 0x12142B44: push edi */
    edi = ecx; /* 0x12142B45: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12142B47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC), esi */ /* 0x12142B49: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B4C: je 0x12142b6c */
L_12142B4E:
    /* cmp MEM32(edi), esi */ /* 0x12142B4E: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B50: jbe 0x12142b6c */
L_12142B52:
    eax = MEM32(edi + 0xC); /* 0x12142B52: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12142B55: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx + 0x18); /* 0x12142B58: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12142B5B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x18) = eax; /* 0x12142B5C: mov dword ptr [ecx + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12142B67; /* 0x12142B5F: jne 0x12142b67 */
L_12142B61:
    eax = MEM32(ecx); /* 0x12142B61: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12142B63: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x12142B65: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12142B67:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12142B67: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x12142B68: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12142B52; /* 0x12142B6A: jb 0x12142b52 */
L_12142B6C:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12142B6C: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12142B6F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12142B74: pop ecx */
    edi = POP32_VAL(esp); /* 0x12142B75: pop edi */
    esi = POP32_VAL(esp); /* 0x12142B76: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12142B77: ret  */
L_12144DD2:
    edi = edi; /* 0x12144DD2: mov edi, edi */
    PUSH32(esp, esi); /* 0x12144DD4: push esi */
    esi = ecx; /* 0x12144DD5: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12144DD7: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x120111B4u; /* 0x12144DDB: mov dword ptr [esi], 0x120111b4 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144DEC; /* 0x12144DE1: je 0x12144dec */
L_12144DE3:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x12144DE3: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x120010A8)); /* 0x12144DE6: call dword ptr [0x120010a8] */
    RECOMP_FLAGS_IN();
L_12144DEC:
    /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu */ /* 0x12144DEC: cmp dword ptr [esi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144E04; /* 0x12144DF0: je 0x12144e04 */
L_12144DF2:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x12144DF2: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x12144DF5: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x12144DFB: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144DFE: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_12144E04:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x12144E04: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144E13; /* 0x12144E08: je 0x12144e13 */
L_12144E0A:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x12144E0A: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12144E0D: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_12144E13:
    /* test MEM8(esi + 0x30), 1 */ /* 0x12144E13: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12144E22; /* 0x12144E17: je 0x12144e22 */
L_12144E19:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x12144E19: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF586); /* 0x12144E1C: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12144E21: pop ecx */
L_12144E22:
    eax = MEM32(esi + 0x8); /* 0x12144E22: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x12144E25: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12144E27: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x12144E28: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x44; /* 0x12144E2B: lea ecx, [esi + 0x44] */
    RECOMP_CALL(sub_121436DB); /* 0x12144E2E: call 0x121436db */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x34; /* 0x12144E33: lea ecx, [esi + 0x34] */
    esi = POP32_VAL(esp); /* 0x12144E36: pop esi */
    RECOMP_BACKEDGE();
    goto L_12142B41; /* 0x12144E37: jmp 0x12142b41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12144E41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144E41u);

L_12144E41:
    edi = edi; /* 0x12144E41: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144E43: push ebp */
    ebp = esp; /* 0x12144E44: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12144E46: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12144E49: push ebx */
    PUSH32(esp, esi); /* 0x12144E4A: push esi */
    PUSH32(esp, edi); /* 0x12144E4B: push edi */
    edi = ecx; /* 0x12144E4C: mov edi, ecx */
    esi = MEM32(edi + 0x18); /* 0x12144E4E: mov esi, dword ptr [edi + 0x18] */
    /* cmp MEM32(esi), 0x20666F78u */ /* 0x12144E51: cmp dword ptr [esi], 0x20666f78 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x20666F78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144E57: jne 0x12144fd4 */
L_12144E5D:
    eax = 0x34303330u; /* 0x12144E5D: mov eax, 0x34303330 */
    ebx = 0x32333030u; /* 0x12144E62: mov ebx, 0x32333030 */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x12144E67: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144E6A: jne 0x12144fd4 */
L_12144E70:
    /* cmp MEM32(esi + 0x8), 0x206E6962u */ /* 0x12144E70: cmp dword ptr [esi + 8], 0x206e6962 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x206E6962u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144E82; /* 0x12144E77: jne 0x12144e82 */
L_12144E79:
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x12144E79: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12144F53; /* 0x12144E7C: je 0x12144f53 */
L_12144E82:
    /* cmp MEM32(esi + 0x4), eax */ /* 0x12144E82: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144E85: jne 0x12144fd4 */
L_12144E8B:
    /* cmp MEM32(esi + 0x8), 0x70697A62u */ /* 0x12144E8B: cmp dword ptr [esi + 8], 0x70697a62 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x70697A62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144E92: jne 0x12144fd4 */
L_12144E98:
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x12144E98: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144E9B: jne 0x12144fd4 */
L_12144EA1:
    ecx = ebp + (-0x10); /* 0x12144EA1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_12147B05); /* 0x12144EA4: call 0x12147b05 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x12144EA9: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_12147B40); /* 0x12144EAC: call 0x12147b40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12144EB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12144EC7; /* 0x12144EB3: jne 0x12144ec7 */
L_12144EB5:
    ecx = ebp + (-0x10); /* 0x12144EB5: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_12147B14); /* 0x12144EB8: call 0x12147b14 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x12144EBD: mov eax, 0x8007000e */
    goto L_12144FD9; /* 0x12144EC2: jmp 0x12144fd9 */
L_12144EC7:
    /* cmp MEM32(edi + 0x24), 0xFFFFFFFFu */ /* 0x12144EC7: cmp dword ptr [edi + 0x24], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12144ED7; /* 0x12144ECB: jbe 0x12144ed7 */
L_12144ECD:
    esi = 0x8007000Eu; /* 0x12144ECD: mov esi, 0x8007000e */
    goto L_12144FC8; /* 0x12144ED2: jmp 0x12144fc8 */
L_12144ED7:
    eax = ebp + (-0x4); /* 0x12144ED7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12144EDA: push eax */
    eax = ebp + (-0x8); /* 0x12144EDB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12144EDE: push eax */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x12144EDF: push dword ptr [edi + 0x24] */
    ecx = ebp + (-0x10); /* 0x12144EE2: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12144EE5: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_12147B75); /* 0x12144EE8: call 0x12147b75 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12144EED: mov esi, eax */
    /* test esi, esi */ /* 0x12144EEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144FC8; /* 0x12144EF1: js 0x12144fc8 */
L_12144EF7:
    esi = MEM32(edi + 0x8); /* 0x12144EF7: mov esi, dword ptr [edi + 8] */
    eax = MEM32(esi); /* 0x12144EFA: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12144EFC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12144EFD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x12144F00: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x12144F02: push 0 */
    ecx = edi; /* 0x12144F04: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x12144F06: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12144F09: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x12144F0C: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12144F0E: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x12144F11: push esi */
    RECOMP_CALL(sub_12144D5D); /* 0x12144F12: call 0x12144d5d */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x12144F17: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12144F19: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12144F1A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x18); /* 0x12144F1D: mov esi, dword ptr [edi + 0x18] */
    MEM8(edi + 0x30) = (uint8_t)(1); /* 0x12144F20: mov byte ptr [edi + 0x30], 1 */
    /* cmp MEM32(esi), 0x20666F78u */ /* 0x12144F24: cmp dword ptr [esi], 0x20666f78 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x20666F78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FC3; /* 0x12144F2A: jne 0x12144fc3 */
L_12144F30:
    /* cmp MEM32(esi + 0x4), 0x34303330u */ /* 0x12144F30: cmp dword ptr [esi + 4], 0x34303330 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x34303330u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FC3; /* 0x12144F37: jne 0x12144fc3 */
L_12144F3D:
    /* cmp MEM32(esi + 0x8), 0x206E6962u */ /* 0x12144F3D: cmp dword ptr [esi + 8], 0x206e6962 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x206E6962u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FC3; /* 0x12144F44: jne 0x12144fc3 */
L_12144F46:
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x12144F46: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12144FC3; /* 0x12144F49: jne 0x12144fc3 */
L_12144F4B:
    ecx = ebp + (-0x10); /* 0x12144F4B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_12147B14); /* 0x12144F4E: call 0x12147b14 */
    RECOMP_FLAGS_IN();
L_12144F53:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12144F53: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F57: jl 0x12144fd4 */
L_12144F59:
    if (CMP_G(_flag_a, _flag_b)) goto L_12144F61; /* 0x12144F59: jg 0x12144f61 */
L_12144F5B:
    /* cmp MEM32(esi + 0x10), 0x20u */ /* 0x12144F5B: cmp dword ptr [esi + 0x10], 0x20 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F5F: jb 0x12144fd4 */
L_12144F61:
    ebx = MEM32(esi + 0x1C); /* 0x12144F61: mov ebx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x18); /* 0x12144F64: mov eax, dword ptr [esi + 0x18] */
    /* test ebx, ebx */ /* 0x12144F67: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144FD4; /* 0x12144F69: jl 0x12144fd4 */
L_12144F6B:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12144F71; /* 0x12144F6B: jg 0x12144f71 */
L_12144F6D:
    /* test eax, eax */ /* 0x12144F6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_12144FD4; /* 0x12144F6F: jb 0x12144fd4 */
L_12144F71:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12144F71: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x24); /* 0x12144F75: mov ecx, dword ptr [edi + 0x24] */
    if (CMP_G(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F78: jg 0x12144fd4 */
L_12144F7A:
    if (CMP_L(_flag_a, _flag_b)) goto L_12144F81; /* 0x12144F7A: jl 0x12144f81 */
L_12144F7C:
    /* cmp MEM32(esi + 0x10), ecx */ /* 0x12144F7C: cmp dword ptr [esi + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F7F: ja 0x12144fd4 */
L_12144F81:
    /* test ebx, ebx */ /* 0x12144F81: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12144FD4; /* 0x12144F83: jg 0x12144fd4 */
L_12144F85:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144F8B; /* 0x12144F85: jl 0x12144f8b */
L_12144F87:
    /* cmp eax, ecx */ /* 0x12144F87: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F89: ja 0x12144fd4 */
L_12144F8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x12144F8B: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = MEM32(esi + 0x14), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12144F8E: adc ebx, dword ptr [esi + 0x14] */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test ebx, ebx */ /* 0x12144F91: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12144FD4; /* 0x12144F93: jg 0x12144fd4 */
L_12144F95:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12144F9B; /* 0x12144F95: jl 0x12144f9b */
L_12144F97:
    /* cmp eax, ecx */ /* 0x12144F97: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12144FD4; /* 0x12144F99: ja 0x12144fd4 */
L_12144F9B:
    eax = MEM32(esi + 0x18); /* 0x12144F9B: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x18); /* 0x12144F9E: add eax, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x12144FA1: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x12144FA4: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(esi + 0x10); /* 0x12144FA7: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x18); /* 0x12144FAA: add eax, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x12144FAD: mov dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x18); /* 0x12144FB0: sub ecx, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x10); /* 0x12144FB3: sub ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x2C) = ecx; /* 0x12144FB6: mov dword ptr [edi + 0x2c], ecx */
    eax = MEM32(esi + 0x18); /* 0x12144FB9: mov eax, dword ptr [esi + 0x18] */
    MEM32(edi + 0x28) = eax; /* 0x12144FBC: mov dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12144FBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12144FD9; /* 0x12144FC1: jmp 0x12144fd9 */
L_12144FC3:
    esi = 0x8876038Fu; /* 0x12144FC3: mov esi, 0x8876038f */
L_12144FC8:
    ecx = ebp + (-0x10); /* 0x12144FC8: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_12147B14); /* 0x12144FCB: call 0x12147b14 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12144FD0: mov eax, esi */
    goto L_12144FD9; /* 0x12144FD2: jmp 0x12144fd9 */
L_12144FD4:
    eax = 0x8876038Fu; /* 0x12144FD4: mov eax, 0x8876038f */
L_12144FD9:
    edi = POP32_VAL(esp); /* 0x12144FD9: pop edi */
    esi = POP32_VAL(esp); /* 0x12144FDA: pop esi */
    ebx = POP32_VAL(esp); /* 0x12144FDB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12144FDC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12144FDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_12144FE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12144FE3u);

L_12144FE3:
    edi = edi; /* 0x12144FE3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12144FE5: push ebp */
    ebp = esp; /* 0x12144FE6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x12144FE8: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12144FEB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12144FF0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12144FF2: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x12144FF5: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x12144FF8: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12144FFB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12144FFC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x12144FFF: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(edi); /* 0x12145002: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x20)) = edx; /* 0x12145004: mov dword ptr [ebp - 0x20], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12145007: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = edi; /* 0x12145009: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1214500C: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1214500F: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp edx, 8 */ /* 0x12145012: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12145021; /* 0x12145015: jae 0x12145021 */
L_12145017:
    eax = 0x8876038Fu; /* 0x12145017: mov eax, 0x8876038f */
    goto L_121451F1; /* 0x1214501C: jmp 0x121451f1 */
L_12145021:
    eax = MEM32(ecx); /* 0x12145021: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x12145023: push ebx */
    PUSH32(esp, esi); /* 0x12145024: push esi */
    esi = MEM32(ecx + 0x4); /* 0x12145025: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x12145028: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214502A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121451C5; /* 0x1214502C: jmp 0x121451c5 */
L_12145031:
    eax = MEM32(ecx); /* 0x12145031: mov eax, dword ptr [ecx] */
    /* cmp esi, ebx */ /* 0x12145033: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12145138; /* 0x12145035: jl 0x12145138 */
L_1214503B:
    if (CMP_G(_flag_a, _flag_b)) goto L_12145045; /* 0x1214503B: jg 0x12145045 */
L_1214503D:
    /* cmp eax, ebx */ /* 0x1214503D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12145138; /* 0x1214503F: jb 0x12145138 */
L_12145045:
    /* cmp edx, 0x38u */ /* 0x12145045: cmp edx, 0x38 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12145200; /* 0x12145048: jb 0x12145200 */
L_1214504E:
    edi = MEM32(ecx + 0xC); /* 0x1214504E: mov edi, dword ptr [ecx + 0xc] */
    edx = MEM32(ecx + 0x8); /* 0x12145051: mov edx, dword ptr [ecx + 8] */
    /* cmp edi, ebx */ /* 0x12145054: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x12145056: ja 0x12145200 */
L_1214505C:
    if (CMP_B(_flag_a, _flag_b)) goto L_1214506D; /* 0x1214505C: jb 0x1214506d */
L_1214505E:
    ecx = MEM32(ebp + (-0x18)); /* 0x1214505E: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp edx, MEM32(ecx + 0x2C) */ /* 0x12145061: cmp edx, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x1C)); /* 0x12145064: mov ecx, dword ptr [ebp - 0x1c] */
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x12145067: ja 0x12145200 */
L_1214506D:
    /* cmp esi, ebx */ /* 0x1214506D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x1214506F: ja 0x12145200 */
L_12145075:
    if (CMP_B(_flag_a, _flag_b)) goto L_12145086; /* 0x12145075: jb 0x12145086 */
L_12145077:
    ecx = MEM32(ebp + (-0x18)); /* 0x12145077: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp eax, MEM32(ecx + 0x2C) */ /* 0x1214507A: cmp eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x1C)); /* 0x1214507D: mov ecx, dword ptr [ebp - 0x1c] */
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x12145080: ja 0x12145200 */
L_12145086:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12145086: add edx, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12145088: adc edi, esi */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp edi, ebx */ /* 0x1214508A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x1214508C: ja 0x12145200 */
L_12145092:
    eax = MEM32(ebp + (-0x18)); /* 0x12145092: mov eax, dword ptr [ebp - 0x18] */
    if (CMP_B(_flag_a, _flag_b)) goto L_121450A0; /* 0x12145095: jb 0x121450a0 */
L_12145097:
    /* cmp edx, MEM32(eax + 0x2C) */ /* 0x12145097: cmp edx, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x1214509A: ja 0x12145200 */
L_121450A0:
    esi = ecx + 0x10; /* 0x121450A0: lea esi, [ecx + 0x10] */
    edi = ebp + (-0x14); /* 0x121450A3: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121450A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121450A7: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x30); /* 0x121450A8: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x121450AB: push ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121450AC: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x121450AD: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x121450B0: push ecx */
    ecx = eax; /* 0x121450B1: mov ecx, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121450B3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_121429AD); /* 0x121450B4: call 0x121429ad */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121450B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145200; /* 0x121450BB: je 0x12145200 */
L_121450C1:
    edi = MEM32(ebp + (-0x34)); /* 0x121450C1: mov edi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x38u; /* 0x121450C4: add dword ptr [edi], 0x38 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x121450C7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x121450CA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x121450CB: push dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x121450CE: push edi */
    RECOMP_CALL(sub_121428D6); /* 0x121450CF: call 0x121428d6 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121450D4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145200; /* 0x121450D6: je 0x12145200 */
L_121450DC:
    esi = MEM32(edi); /* 0x121450DC: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x2C)); /* 0x121450DE: sub esi, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x120014BCu); /* 0x121450E1: push 0x120014bc */
    PUSH32(esp, 0x24u); /* 0x121450E6: push 0x24 */
    RECOMP_CALL(sub_12018970); /* 0x121450E8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121450ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121450EE: pop ecx */
    /* test eax, eax */ /* 0x121450EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145108; /* 0x121450F1: je 0x12145108 */
L_121450F3:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x121450F3: push dword ptr [ebp - 0x30] */
    ecx = eax; /* 0x121450F6: mov ecx, eax */
    PUSH32(esp, esi); /* 0x121450F8: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x121450F9: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x121450FC: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_12144C0C); /* 0x121450FF: call 0x12144c0c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145104: mov esi, eax */
    goto L_1214510A; /* 0x12145106: jmp 0x1214510a */
L_12145108:
    esi = ebx; /* 0x12145108: mov esi, ebx */
L_1214510A:
    /* test esi, esi */ /* 0x1214510A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214512E; /* 0x1214510C: je 0x1214512e */
L_1214510E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1214510E: mov ecx, dword ptr [ebp - 0x24] */
    eax = ebp + (-0x1C); /* 0x12145111: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x12145114: push eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x12145115: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1214AE6F); /* 0x12145118: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214511D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121451AF; /* 0x1214511F: jne 0x121451af */
L_12145125:
    eax = MEM32(esi); /* 0x12145125: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x12145127: push 1 */
    ecx = esi; /* 0x12145129: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1214512B: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1214512E:
    eax = 0x8007000Eu; /* 0x1214512E: mov eax, 0x8007000e */
    goto L_121451EF; /* 0x12145133: jmp 0x121451ef */
L_12145138:
    edx = eax; /* 0x12145138: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1214513A: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _aa = esi, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1214513C: adc esi, ebx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1214513E: neg esi */
    _flag_k = FK_CMP;
    /* cmp esi, ebx */ /* 0x12145140: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x12145142: ja 0x12145200 */
L_12145148:
    if (CMP_B(_flag_a, _flag_b)) goto L_12145156; /* 0x12145148: jb 0x12145156 */
L_1214514A:
    esi = MEM32(ebp + (-0x18)); /* 0x1214514A: mov esi, dword ptr [ebp - 0x18] */
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x1214514D: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12145200; /* 0x12145150: ja 0x12145200 */
L_12145156:
    edx = ebp + (-0x28); /* 0x12145156: lea edx, [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12145159: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x18)); /* 0x1214515B: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1214515E: push edx */
    PUSH32(esp, eax); /* 0x1214515F: push eax */
    RECOMP_CALL(sub_1214362C); /* 0x12145160: call 0x1214362c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145165: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145200; /* 0x12145167: je 0x12145200 */
L_1214516D:
    PUSH32(esp, 0x120014BCu); /* 0x1214516D: push 0x120014bc */
    PUSH32(esp, 8); /* 0x12145172: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x12145174: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145179: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214517B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214517C: pop ecx */
    /* test esi, esi */ /* 0x1214517D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214518F; /* 0x1214517F: je 0x1214518f */
L_12145181:
    eax = MEM32(ebp + (-0x28)); /* 0x12145181: mov eax, dword ptr [ebp - 0x28] */
    MEM32(esi) = 0x12011028u; /* 0x12145184: mov dword ptr [esi], 0x12011028 */
    MEM32(esi + 0x4) = eax; /* 0x1214518A: mov dword ptr [esi + 4], eax */
    goto L_12145191; /* 0x1214518D: jmp 0x12145191 */
L_1214518F:
    esi = ebx; /* 0x1214518F: mov esi, ebx */
L_12145191:
    /* test esi, esi */ /* 0x12145191: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214512E; /* 0x12145193: je 0x1214512e */
L_12145195:
    ecx = MEM32(ebp + (-0x24)); /* 0x12145195: mov ecx, dword ptr [ebp - 0x24] */
    eax = ebp + (-0x28); /* 0x12145198: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1214519B: push eax */
    MEM32(ebp + (-0x28)) = esi; /* 0x1214519C: mov dword ptr [ebp - 0x28], esi */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214519F: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121451A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145125; /* 0x121451A6: je 0x12145125 */
L_121451AC:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 8; /* 0x121451AC: add dword ptr [edi], 8 */
    _flag_k = FK_ADD;
L_121451AF:
    ecx = MEM32(edi); /* 0x121451AF: mov ecx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x20)); /* 0x121451B1: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121451B4: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x121451B6: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp edx, 8 */ /* 0x121451B9: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12145200; /* 0x121451BC: jb 0x12145200 */
L_121451BE:
    eax = MEM32(ecx); /* 0x121451BE: mov eax, dword ptr [ecx] */
    esi = MEM32(ecx + 0x4); /* 0x121451C0: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x121451C3: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121451C5:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121451C5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145031; /* 0x121451C8: jne 0x12145031 */
L_121451CE:
    esi = MEM32(ebp + (-0x24)); /* 0x121451CE: mov esi, dword ptr [ebp - 0x24] */
    /* cmp MEM32(esi), ebx */ /* 0x121451D1: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121451ED; /* 0x121451D3: jbe 0x121451ed */
L_121451D5:
    edi = MEM32(ebp + (-0x20)); /* 0x121451D5: mov edi, dword ptr [ebp - 0x20] */
L_121451D8:
    eax = MEM32(esi + 0xC); /* 0x121451D8: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + ebx * 4); /* 0x121451DB: mov ecx, dword ptr [eax + ebx*4] */
    eax = MEM32(ecx); /* 0x121451DE: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x121451E0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x121451E1: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121451E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121451EF; /* 0x121451E6: js 0x121451ef */
L_121451E8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121451E8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi) */ /* 0x121451E9: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121451D8; /* 0x121451EB: jb 0x121451d8 */
L_121451ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121451ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121451EF:
    esi = POP32_VAL(esp); /* 0x121451EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x121451F0: pop ebx */
L_121451F1:
    ecx = MEM32(ebp + (-0x4)); /* 0x121451F1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121451F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x121451F6: pop edi */
    RECOMP_CALL(sub_121BECF5); /* 0x121451F7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121451FC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121451FD: ret 0xc */
L_12145200:
    eax = 0x8876038Fu; /* 0x12145200: mov eax, 0x8876038f */
    RECOMP_BACKEDGE();
    goto L_121451EF; /* 0x12145205: jmp 0x121451ef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214520C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214520Cu);

L_1214520C:
    edi = edi; /* 0x1214520C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214520E: push ebp */
    ebp = esp; /* 0x1214520F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145211: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12145212: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x12145215: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214524F; /* 0x12145217: je 0x1214524f */
L_12145219:
    PUSH32(esp, 0x120014BCu); /* 0x12145219: push 0x120014bc */
    PUSH32(esp, 0x18u); /* 0x1214521E: push 0x18 */
    RECOMP_CALL(sub_12018970); /* 0x12145220: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145225: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145226: pop ecx */
    /* test eax, eax */ /* 0x12145227: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145234; /* 0x12145229: je 0x12145234 */
L_1214522B:
    ecx = eax; /* 0x1214522B: mov ecx, eax */
    RECOMP_CALL(sub_121439A7); /* 0x1214522D: call 0x121439a7 */
    RECOMP_FLAGS_IN();
    goto L_12145236; /* 0x12145232: jmp 0x12145236 */
L_12145234:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145234: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145236:
    MEM32(esi) = eax; /* 0x12145236: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1214ADAB); /* 0x12145238: call 0x1214adab */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1214523D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1214523F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12145241: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x12145243: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x12145248: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    goto L_12145254; /* 0x1214524D: jmp 0x12145254 */
L_1214524F:
    eax = 0x80004003u; /* 0x1214524F: mov eax, 0x80004003 */
L_12145254:
    esi = POP32_VAL(esp); /* 0x12145254: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145255: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12145256: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214525E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214525Eu);

    goto L_1214525E;
L_12142B41:
    edi = edi; /* 0x12142B41: mov edi, edi */
    PUSH32(esp, esi); /* 0x12142B43: push esi */
    PUSH32(esp, edi); /* 0x12142B44: push edi */
    edi = ecx; /* 0x12142B45: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12142B47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC), esi */ /* 0x12142B49: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B4C: je 0x12142b6c */
L_12142B4E:
    /* cmp MEM32(edi), esi */ /* 0x12142B4E: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B50: jbe 0x12142b6c */
L_12142B52:
    eax = MEM32(edi + 0xC); /* 0x12142B52: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12142B55: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx + 0x18); /* 0x12142B58: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12142B5B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x18) = eax; /* 0x12142B5C: mov dword ptr [ecx + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12142B67; /* 0x12142B5F: jne 0x12142b67 */
L_12142B61:
    eax = MEM32(ecx); /* 0x12142B61: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12142B63: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x12142B65: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12142B67:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12142B67: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x12142B68: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12142B52; /* 0x12142B6A: jb 0x12142b52 */
L_12142B6C:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12142B6C: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12142B6F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12142B74: pop ecx */
    edi = POP32_VAL(esp); /* 0x12142B75: pop edi */
    esi = POP32_VAL(esp); /* 0x12142B76: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12142B77: ret  */
L_1214525E:
    edi = edi; /* 0x1214525E: mov edi, edi */
    PUSH32(esp, esi); /* 0x12145260: push esi */
    esi = ecx; /* 0x12145261: mov esi, ecx */
    PUSH32(esp, edi); /* 0x12145263: push edi */
    edi = MEM32(esi + 0x2C); /* 0x12145264: mov edi, dword ptr [esi + 0x2c] */
    MEM32(esi) = 0x12011004u; /* 0x12145267: mov dword ptr [esi], 0x12011004 */
    /* test edi, edi */ /* 0x1214526D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214527F; /* 0x1214526F: je 0x1214527f */
L_12145271:
    ecx = edi; /* 0x12145271: mov ecx, edi */
    RECOMP_CALL(sub_12143713); /* 0x12145273: call 0x12143713 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145278: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12145279: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214527E: pop ecx */
L_1214527F:
    ecx = MEM32(esi + 0xC); /* 0x1214527F: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x12145282: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214528C; /* 0x12145284: je 0x1214528c */
L_12145286:
    eax = MEM32(ecx); /* 0x12145286: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12145288: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1214528A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1214528C:
    eax = MEM32(esi + 0x8); /* 0x1214528C: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1214528F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12145291: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x12145292: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12145295: pop edi */
    ecx = esi + 0x10; /* 0x12145296: lea ecx, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x12145299: pop esi */
    RECOMP_BACKEDGE();
    goto L_12142B41; /* 0x1214529A: jmp 0x12142b41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121452A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121452A4u);

    goto L_121452A4;
L_12142B41:
    edi = edi; /* 0x12142B41: mov edi, edi */
    PUSH32(esp, esi); /* 0x12142B43: push esi */
    PUSH32(esp, edi); /* 0x12142B44: push edi */
    edi = ecx; /* 0x12142B45: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12142B47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC), esi */ /* 0x12142B49: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B4C: je 0x12142b6c */
L_12142B4E:
    /* cmp MEM32(edi), esi */ /* 0x12142B4E: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12142B6C; /* 0x12142B50: jbe 0x12142b6c */
L_12142B52:
    eax = MEM32(edi + 0xC); /* 0x12142B52: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12142B55: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx + 0x18); /* 0x12142B58: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12142B5B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x18) = eax; /* 0x12142B5C: mov dword ptr [ecx + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12142B67; /* 0x12142B5F: jne 0x12142b67 */
L_12142B61:
    eax = MEM32(ecx); /* 0x12142B61: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12142B63: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x12142B65: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12142B67:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12142B67: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x12142B68: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12142B52; /* 0x12142B6A: jb 0x12142b52 */
L_12142B6C:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12142B6C: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12142B6F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12142B74: pop ecx */
    edi = POP32_VAL(esp); /* 0x12142B75: pop edi */
    esi = POP32_VAL(esp); /* 0x12142B76: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12142B77: ret  */
L_121452A4:
    edi = edi; /* 0x121452A4: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121452A6: push ebx */
    PUSH32(esp, esi); /* 0x121452A7: push esi */
    esi = ecx; /* 0x121452A8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x121452AA: push edi */
    MEM32(esi) = 0x1201108Cu; /* 0x121452AB: mov dword ptr [esi], 0x1201108c */
    RECOMP_CALL(sub_12144041); /* 0x121452B1: call 0x12144041 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x30; /* 0x121452B6: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_121464B4); /* 0x121452B9: call 0x121464b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x121452BE: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121452C1: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x48); /* 0x121452C7: mov edi, dword ptr [esi + 0x48] */
    /* test edi, edi */ /* 0x121452CA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121452DE; /* 0x121452CC: je 0x121452de */
L_121452CE:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x121452CE: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121452D1: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121452D6: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x121452D7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121452DC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121452DD: pop ecx */
L_121452DE:
    edi = MEM32(esi + 0x4C); /* 0x121452DE: mov edi, dword ptr [esi + 0x4c] */
    /* test edi, edi */ /* 0x121452E1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121452F5; /* 0x121452E3: je 0x121452f5 */
L_121452E5:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x121452E5: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121452E8: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121452ED: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x121452EE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121452F3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121452F4: pop ecx */
L_121452F5:
    eax = MEM32(esi + 0x50); /* 0x121452F5: mov eax, dword ptr [esi + 0x50] */
    /* test eax, eax */ /* 0x121452F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214533F; /* 0x121452FA: je 0x1214533f */
L_121452FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121452FC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edi */ /* 0x121452FE: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12145328; /* 0x12145300: jbe 0x12145328 */
L_12145302:
    eax = MEM32(esi + 0x50); /* 0x12145302: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x12145305: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12145308: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x1214530B: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x50); /* 0x12145311: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x12145314: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12145317: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_121BF586); /* 0x1214531A: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x50); /* 0x1214531F: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12145322: inc edi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x12145323: pop ecx */
    /* cmp edi, MEM32(eax) */ /* 0x12145324: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12145302; /* 0x12145326: jb 0x12145302 */
L_12145328:
    edi = MEM32(esi + 0x50); /* 0x12145328: mov edi, dword ptr [esi + 0x50] */
    /* test edi, edi */ /* 0x1214532B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214533F; /* 0x1214532D: je 0x1214533f */
L_1214532F:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x1214532F: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12145332: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145337: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12145338: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214533D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214533E: pop ecx */
L_1214533F:
    edi = MEM32(esi + 0x54); /* 0x1214533F: mov edi, dword ptr [esi + 0x54] */
    /* test edi, edi */ /* 0x12145342: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145356; /* 0x12145344: je 0x12145356 */
L_12145346:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12145346: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12145349: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1214534E: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1214534F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145354: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145355: pop ecx */
L_12145356:
    /* cmp MEM8(esi + 0x5C), 0 */ /* 0x12145356: cmp byte ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x5C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214536C; /* 0x1214535A: je 0x1214536c */
L_1214535C:
    /* cmp MEM32(esi + 0x44), 1 */ /* 0x1214535C: cmp dword ptr [esi + 0x44], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214537A; /* 0x12145360: jne 0x1214537a */
L_12145362:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x12145362: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_121479DD); /* 0x12145365: call 0x121479dd */
    RECOMP_FLAGS_IN();
    goto L_1214537A; /* 0x1214536A: jmp 0x1214537a */
L_1214536C:
    /* cmp MEM32(esi + 0x44), 1 */ /* 0x1214536C: cmp dword ptr [esi + 0x44], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214537A; /* 0x12145370: jne 0x1214537a */
L_12145372:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x12145372: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_121478B5); /* 0x12145375: call 0x121478b5 */
    RECOMP_FLAGS_IN();
L_1214537A:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1214537A: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_121BF388); /* 0x1214537D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x12145382: mov eax, dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x12145385: mov edx, dword ptr [eax] */
    ecx = POP32_VAL(esp); /* 0x12145387: pop ecx */
    PUSH32(esp, eax); /* 0x12145388: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x12145389: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x30; /* 0x1214538C: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_12146583); /* 0x1214538F: call 0x12146583 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x1C; /* 0x12145394: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_12148D74); /* 0x12145397: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214539C: pop edi */
    ecx = esi + 0xC; /* 0x1214539D: lea ecx, [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x121453A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x121453A1: pop ebx */
    RECOMP_BACKEDGE();
    goto L_12142B41; /* 0x121453A2: jmp 0x12142b41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121453AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121453ACu);

L_121453AC:
    edi = edi; /* 0x121453AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121453AE: push ebp */
    ebp = esp; /* 0x121453AF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121453B1: push esi */
    PUSH32(esp, edi); /* 0x121453B2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121453B3: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x121453B6: mov ecx, edi */
    edx = ecx + 0x1; /* 0x121453B8: lea edx, [ecx + 1] */
L_121453BB:
    SET_LO8(eax, MEM8(ecx)); /* 0x121453BB: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121453BD: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121453BE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121453BB; /* 0x121453C0: jne 0x121453bb */
L_121453C2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121453C2: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x121453C4: lea esi, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x121453C7: push 0x120014bc */
    PUSH32(esp, esi); /* 0x121453CC: push esi */
    RECOMP_CALL(sub_12018970); /* 0x121453CD: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121453D2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121453D3: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x121453D4: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x121453D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121453E5; /* 0x121453D9: jne 0x121453e5 */
L_121453DB:
    eax = 0x8007000Eu; /* 0x121453DB: mov eax, 0x8007000e */
    goto L_12145496; /* 0x121453E0: jmp 0x12145496 */
L_121453E5:
    PUSH32(esp, ebx); /* 0x121453E5: push ebx */
    PUSH32(esp, esi); /* 0x121453E6: push esi */
    PUSH32(esp, edi); /* 0x121453E7: push edi */
    PUSH32(esp, eax); /* 0x121453E8: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121453E9: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121453EE: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121453F1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121453F3: push esi */
    PUSH32(esp, 0x08000080u); /* 0x121453F4: push 0x8000080 */
    PUSH32(esp, 2); /* 0x121453F9: push 2 */
    PUSH32(esp, esi); /* 0x121453FB: push esi */
    PUSH32(esp, esi); /* 0x121453FC: push esi */
    PUSH32(esp, 0x40000000u); /* 0x121453FD: push 0x40000000 */
    PUSH32(esp, edi); /* 0x12145402: push edi */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12145403: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12145409: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214540B: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145417; /* 0x1214540E: jne 0x12145417 */
L_12145410:
    esi = 0x8876038Fu; /* 0x12145410: mov esi, 0x8876038f */
    goto L_1214545F; /* 0x12145415: jmp 0x1214545f */
L_12145417:
    PUSH32(esp, 0x120014BCu); /* 0x12145417: push 0x120014bc */
    PUSH32(esp, 0x60u); /* 0x1214541C: push 0x60 */
    RECOMP_CALL(sub_12018970); /* 0x1214541E: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145423: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145424: pop ecx */
    /* test eax, eax */ /* 0x12145425: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145448; /* 0x12145427: je 0x12145448 */
L_12145429:
    edx = MEM32(ebp + 0x10); /* 0x12145429: mov edx, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x1214542C: mov ecx, edx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1214542E: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1214542E: shr ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x12145430: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12145433: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x12145434: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x12145437: push edx */
    PUSH32(esp, ebx); /* 0x12145438: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145439: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1214543C: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214543E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121439FD); /* 0x12145441: call 0x121439fd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145446: mov esi, eax */
L_12145448:
    /* test esi, esi */ /* 0x12145448: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214546C; /* 0x1214544A: jne 0x1214546c */
L_1214544C:
    PUSH32(esp, ebx); /* 0x1214544C: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x1214544D: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145453: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x12145454: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x1214545A: mov esi, 0x8007000e */
L_1214545F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214545F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x12145462: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145467: pop ecx */
    eax = esi; /* 0x12145468: mov eax, esi */
    goto L_12145495; /* 0x1214546A: jmp 0x12145495 */
L_1214546C:
    ecx = esi; /* 0x1214546C: mov ecx, esi */
    RECOMP_CALL(sub_12143BF8); /* 0x1214546E: call 0x12143bf8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145473: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214548E; /* 0x12145475: je 0x1214548e */
L_12145477:
    eax = MEM32(esi); /* 0x12145477: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x12145479: push 1 */
    ecx = esi; /* 0x1214547B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1214547D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145480: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x12145481: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x12145487: mov eax, 0x8876038f */
    goto L_12145495; /* 0x1214548C: jmp 0x12145495 */
L_1214548E:
    eax = MEM32(ebp + 0x14); /* 0x1214548E: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x12145491: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145493: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145495:
    ebx = POP32_VAL(esp); /* 0x12145495: pop ebx */
L_12145496:
    edi = POP32_VAL(esp); /* 0x12145496: pop edi */
    esi = POP32_VAL(esp); /* 0x12145497: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145498: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12145499: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121454A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121454A1u);

L_121454A1:
    edi = edi; /* 0x121454A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121454A3: push ebp */
    ebp = esp; /* 0x121454A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x121454A6: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121454AC: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121454B1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121454B3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x121454B6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121454B9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x121454BA: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121454BD: push esi */
    esi = MEM32(ebp + 0x14); /* 0x121454BE: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x121454C1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121454C2: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x114)) = eax; /* 0x121454C5: mov dword ptr [ebp - 0x114], eax */
    MEM32(ebp + (-0x118)) = esi; /* 0x121454CB: mov dword ptr [ebp - 0x118], esi */
    RECOMP_CALL(sub_12018843); /* 0x121454D1: call 0x12018843 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121454D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214550C; /* 0x121454D8: jne 0x1214550c */
L_121454DA:
    PUSH32(esp, 0x104u); /* 0x121454DA: push 0x104 */
    eax = ebp + (-0x108); /* 0x121454DF: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x121454E5: push edi */
    PUSH32(esp, eax); /* 0x121454E6: push eax */
    RECOMP_CALL(sub_121BF982); /* 0x121454E7: call 0x121bf982 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121454EC: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x121454EF: push esi */
    PUSH32(esp, ebx); /* 0x121454F0: push ebx */
    eax = ebp + (-0x108); /* 0x121454F1: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x121454F7: push eax */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x121454F8: push dword ptr [ebp - 0x114] */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x121454FE: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_121453AC); /* 0x12145502: call 0x121453ac */
    RECOMP_FLAGS_IN();
    goto L_1214562E; /* 0x12145507: jmp 0x1214562e */
L_1214550C:
    ecx = edi; /* 0x1214550C: mov ecx, edi */
    edx = ecx + 0x2; /* 0x1214550E: lea edx, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12145511: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145513:
    SET_LO16(eax, MEM16(ecx)); /* 0x12145513: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12145516: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x12145519: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145513; /* 0x1214551C: jne 0x12145513 */
L_1214551E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214551E: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x12145520: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0x1; /* 0x12145522: lea eax, [ecx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x12145525: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214552A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1214552C: push 2 */
    edx = POP32_VAL(esp); /* 0x1214552E: pop edx */
    MEM32(ebp + (-0x10C)) = eax; /* 0x1214552F: mov dword ptr [ebp - 0x10c], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12145535: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12145537: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1214553A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1214553C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1214553E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1214553F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145544: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145545: pop ecx */
    ecx = eax; /* 0x12145546: mov ecx, eax */
    MEM32(ebp + (-0x110)) = ecx; /* 0x12145548: mov dword ptr [ebp - 0x110], ecx */
    /* test ecx, ecx */ /* 0x1214554E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214555C; /* 0x12145550: jne 0x1214555c */
L_12145552:
    eax = 0x8007000Eu; /* 0x12145552: mov eax, 0x8007000e */
    goto L_1214562E; /* 0x12145557: jmp 0x1214562e */
L_1214555C:
    eax = MEM32(ebp + (-0x10C)); /* 0x1214555C: mov eax, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12145562: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12145564: push eax */
    PUSH32(esp, edi); /* 0x12145565: push edi */
    PUSH32(esp, ecx); /* 0x12145566: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12145567: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214556C: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1214556F: push esi */
    PUSH32(esp, 0x08000080u); /* 0x12145570: push 0x8000080 */
    PUSH32(esp, 2); /* 0x12145575: push 2 */
    eax = POP32_VAL(esp); /* 0x12145577: pop eax */
    PUSH32(esp, eax); /* 0x12145578: push eax */
    PUSH32(esp, esi); /* 0x12145579: push esi */
    PUSH32(esp, esi); /* 0x1214557A: push esi */
    PUSH32(esp, 0x40000000u); /* 0x1214557B: push 0x40000000 */
    PUSH32(esp, edi); /* 0x12145580: push edi */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x12145581: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10C)) = eax; /* 0x12145587: mov dword ptr [ebp - 0x10c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1214558D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145599; /* 0x12145590: jne 0x12145599 */
L_12145592:
    esi = 0x8876038Fu; /* 0x12145592: mov esi, 0x8876038f */
    goto L_121455F2; /* 0x12145597: jmp 0x121455f2 */
L_12145599:
    PUSH32(esp, 0x120014BCu); /* 0x12145599: push 0x120014bc */
    PUSH32(esp, 0x60u); /* 0x1214559E: push 0x60 */
    RECOMP_CALL(sub_12018970); /* 0x121455A0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121455A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121455A6: pop ecx */
    /* test eax, eax */ /* 0x121455A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121455D5; /* 0x121455A9: je 0x121455d5 */
L_121455AB:
    ecx = ebx; /* 0x121455AB: mov ecx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x121455AD: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x121455AD: shr ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x121455AF: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x121455B2: push ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x121455B3: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121455B6: push ebx */
    ebx = MEM32(ebp + (-0x10C)); /* 0x121455B7: mov ebx, dword ptr [ebp - 0x10c] */
    PUSH32(esp, ebx); /* 0x121455BD: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x121455BE: push dword ptr [ebp - 0x110] */
    ecx = eax; /* 0x121455C4: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x121455C6: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_12143A9F); /* 0x121455CC: call 0x12143a9f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121455D1: mov esi, eax */
    goto L_121455DB; /* 0x121455D3: jmp 0x121455db */
L_121455D5:
    ebx = MEM32(ebp + (-0x10C)); /* 0x121455D5: mov ebx, dword ptr [ebp - 0x10c] */
L_121455DB:
    /* test esi, esi */ /* 0x121455DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145602; /* 0x121455DD: jne 0x12145602 */
L_121455DF:
    PUSH32(esp, ebx); /* 0x121455DF: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121455E0: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121455E6: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x121455E7: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x121455ED: mov esi, 0x8007000e */
L_121455F2:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x121455F2: push dword ptr [ebp - 0x110] */
    RECOMP_CALL(sub_121BF388); /* 0x121455F8: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121455FD: pop ecx */
    eax = esi; /* 0x121455FE: mov eax, esi */
    goto L_1214562E; /* 0x12145600: jmp 0x1214562e */
L_12145602:
    ecx = esi; /* 0x12145602: mov ecx, esi */
    RECOMP_CALL(sub_12143BF8); /* 0x12145604: call 0x12143bf8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145609: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145624; /* 0x1214560B: je 0x12145624 */
L_1214560D:
    eax = MEM32(esi); /* 0x1214560D: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1214560F: push 1 */
    ecx = esi; /* 0x12145611: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x12145613: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145616: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12145617: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x1214561D: mov eax, 0x8876038f */
    goto L_1214562E; /* 0x12145622: jmp 0x1214562e */
L_12145624:
    eax = MEM32(ebp + (-0x118)); /* 0x12145624: mov eax, dword ptr [ebp - 0x118] */
    MEM32(eax) = esi; /* 0x1214562A: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214562C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214562E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214562E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12145631: pop edi */
    esi = POP32_VAL(esp); /* 0x12145632: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12145633: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12145635: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12145636: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214563B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1214563C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12145644(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145644u);

L_12145644:
    edi = edi; /* 0x12145644: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145646: push ebp */
    ebp = esp; /* 0x12145647: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145649: push esi */
    PUSH32(esp, edi); /* 0x1214564A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214564B: mov edi, dword ptr [ebp + 8] */
    eax = edi + 0x8; /* 0x1214564E: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x12145651: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x12145652: push dword ptr [edi + 4] */
    esi = ecx; /* 0x12145655: mov esi, ecx */
    RECOMP_CALL(sub_12143C9F); /* 0x12145657: call 0x12143c9f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214565C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121456C8; /* 0x1214565E: jne 0x121456c8 */
L_12145660:
    PUSH32(esp, ebx); /* 0x12145660: push ebx */
    ebx = MEM32(edi + 0x1C); /* 0x12145661: mov ebx, dword ptr [edi + 0x1c] */
    /* test ebx, ebx */ /* 0x12145664: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214568D; /* 0x12145666: je 0x1214568d */
L_12145668:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12145668: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x1214566A: mov dword ptr [ebp + 8], ecx */
    /* cmp MEM32(ebx), ecx */ /* 0x1214566D: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214568D; /* 0x1214566F: jbe 0x1214568d */
L_12145671:
    eax = MEM32(ebx + 0xC); /* 0x12145671: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x12145674: push dword ptr [eax + ecx*4] */
    ecx = esi; /* 0x12145677: mov ecx, esi */
    RECOMP_CALL(sub_1214426F); /* 0x12145679: call 0x1214426f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214567E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121456C7; /* 0x12145680: jne 0x121456c7 */
L_12145682:
    ecx = MEM32(ebp + 0x8); /* 0x12145682: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12145685: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x12145686: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(ebx) */ /* 0x12145689: cmp ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12145671; /* 0x1214568B: jb 0x12145671 */
L_1214568D:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x1214568D: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x12145691: mov ecx, esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214569C; /* 0x12145693: jne 0x1214569c */
L_12145695:
    RECOMP_CALL(sub_12143D92); /* 0x12145695: call 0x12143d92 */
    RECOMP_FLAGS_IN();
    goto L_121456B1; /* 0x1214569A: jmp 0x121456b1 */
L_1214569C:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x1214569C: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121456AC; /* 0x121456A0: je 0x121456ac */
L_121456A2:
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x121456A2: push dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_12143E81); /* 0x121456A5: call 0x12143e81 */
    RECOMP_FLAGS_IN();
    goto L_121456B1; /* 0x121456AA: jmp 0x121456b1 */
L_121456AC:
    RECOMP_CALL(sub_12143D34); /* 0x121456AC: call 0x12143d34 */
    RECOMP_FLAGS_IN();
L_121456B1:
    /* test eax, eax */ /* 0x121456B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121456C7; /* 0x121456B3: jne 0x121456c7 */
L_121456B5:
    eax = MEM32(esi + 0x40); /* 0x121456B5: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121456B8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121456C5; /* 0x121456B9: jne 0x121456c5 */
L_121456BB:
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x121456BB: push dword ptr [esi + 0x58] */
    ecx = esi; /* 0x121456BE: mov ecx, esi */
    RECOMP_CALL(sub_12143B43); /* 0x121456C0: call 0x12143b43 */
    RECOMP_FLAGS_IN();
L_121456C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121456C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121456C7:
    ebx = POP32_VAL(esp); /* 0x121456C7: pop ebx */
L_121456C8:
    edi = POP32_VAL(esp); /* 0x121456C8: pop edi */
    esi = POP32_VAL(esp); /* 0x121456C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x121456CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121456CB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121456D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121456D3u);

L_121456D3:
    edi = edi; /* 0x121456D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121456D5: push ebp */
    ebp = esp; /* 0x121456D6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121456D8: push esi */
    esi = ecx; /* 0x121456D9: mov esi, ecx */
    RECOMP_CALL(sub_12144628); /* 0x121456DB: call 0x12144628 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x121456E0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121456ED; /* 0x121456E4: je 0x121456ed */
L_121456E6:
    PUSH32(esp, esi); /* 0x121456E6: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x121456E7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121456EC: pop ecx */
L_121456ED:
    eax = esi; /* 0x121456ED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121456EF: pop esi */
    ebp = POP32_VAL(esp); /* 0x121456F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121456F1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121456F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121456F9u);

L_121456F9:
    edi = edi; /* 0x121456F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121456FB: push ebp */
    ebp = esp; /* 0x121456FC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121456FE: push esi */
    esi = ecx; /* 0x121456FF: mov esi, ecx */
    RECOMP_CALL(sub_12144C4C); /* 0x12145701: call 0x12144c4c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12145706: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145713; /* 0x1214570A: je 0x12145713 */
L_1214570C:
    PUSH32(esp, esi); /* 0x1214570C: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214570D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145712: pop ecx */
L_12145713:
    eax = esi; /* 0x12145713: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12145715: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145716: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12145717: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214571F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214571Fu);

L_1214571F:
    edi = edi; /* 0x1214571F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145721: push ebp */
    ebp = esp; /* 0x12145722: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145724: push esi */
    esi = ecx; /* 0x12145725: mov esi, ecx */
    RECOMP_CALL(sub_12144DD2); /* 0x12145727: call 0x12144dd2 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214572C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145739; /* 0x12145730: je 0x12145739 */
L_12145732:
    PUSH32(esp, esi); /* 0x12145732: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145733: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145738: pop ecx */
L_12145739:
    eax = esi; /* 0x12145739: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214573B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214573C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214573D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12145745(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145745u);

L_12145745:
    edi = edi; /* 0x12145745: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145747: push ebp */
    ebp = esp; /* 0x12145748: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1214574A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1214574D: push edi */
    eax = ebp + (-0x10); /* 0x1214574E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12145751: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145752: push dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x12145755: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145757: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1214575A: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_121428D6); /* 0x1214575D: call 0x121428d6 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145762: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145770; /* 0x12145764: jne 0x12145770 */
L_12145766:
    eax = 0x8876038Fu; /* 0x12145766: mov eax, 0x8876038f */
    goto L_12145998; /* 0x1214576B: jmp 0x12145998 */
L_12145770:
    eax = ebp + (-0xC); /* 0x12145770: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12145773: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145774: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145777: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121428D6); /* 0x1214577A: call 0x121428d6 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1214577F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145766; /* 0x12145781: je 0x12145766 */
L_12145783:
    PUSH32(esp, esi); /* 0x12145783: push esi */
    esi = MEM32(ebp + (-0xC)); /* 0x12145784: mov esi, dword ptr [ebp - 0xc] */
    /* cmp MEM8(esi), 0 */ /* 0x12145787: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = esi; /* 0x1214578A: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145794; /* 0x1214578D: jne 0x12145794 */
L_1214578F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214578F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x12145791: mov dword ptr [ebp - 0xc], esi */
L_12145794:
    eax = ebp + (-0x1); /* 0x12145794: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x12145797: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145798: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214579B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12142A12); /* 0x1214579E: call 0x12142a12 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121457A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121457B1; /* 0x121457A5: jne 0x121457b1 */
L_121457A7:
    eax = 0x8876038Fu; /* 0x121457A7: mov eax, 0x8876038f */
    goto L_12145997; /* 0x121457AC: jmp 0x12145997 */
L_121457B1:
    PUSH32(esp, ebx); /* 0x121457B1: push ebx */
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x121457B2: mov bl, byte ptr [ebp - 1] */
    /* cmp LO8(ebx), 2 */ /* 0x121457B5: cmp bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12145950; /* 0x121457B8: je 0x12145950 */
L_121457BE:
    PUSH32(esp, 0x120014BCu); /* 0x121457BE: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x121457C3: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x121457C5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121457CA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x121457CC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121457CD: pop ecx */
    /* test edi, edi */ /* 0x121457CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121457E6; /* 0x121457D0: je 0x121457e6 */
L_121457D2:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x121457D2: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x121457D5: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0; /* 0x121457D9: and dword ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x8) = 2; /* 0x121457DD: mov dword ptr [edi + 8], 2 */
    goto L_121457E8; /* 0x121457E4: jmp 0x121457e8 */
L_121457E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121457E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121457E8:
    /* test edi, edi */ /* 0x121457E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214598D; /* 0x121457EA: je 0x1214598d */
L_121457F0:
    /* test LO8(ebx), LO8(ebx) */ /* 0x121457F0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214583E; /* 0x121457F2: jne 0x1214583e */
L_121457F4:
    eax = ebp + (-0x14); /* 0x121457F4: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x121457F7: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121457F8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121457FB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12142A40); /* 0x121457FE: call 0x12142a40 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145803: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145939; /* 0x12145805: je 0x12145939 */
L_1214580B:
    PUSH32(esp, 0x120014BCu); /* 0x1214580B: push 0x120014bc */
    PUSH32(esp, 8); /* 0x12145810: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x12145812: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145817: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12145819: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214581A: pop ecx */
    /* test esi, esi */ /* 0x1214581B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214582A; /* 0x1214581D: je 0x1214582a */
L_1214581F:
    eax = MEM32(ebp + (-0x14)); /* 0x1214581F: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x12145822: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x12145826: mov dword ptr [esi], eax */
    goto L_1214582C; /* 0x12145828: jmp 0x1214582c */
L_1214582A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214582A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214582C:
    MEM32(ebp + (-0x8)) = esi; /* 0x1214582C: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x1214582F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214591A; /* 0x12145831: je 0x1214591a */
L_12145837:
    ecx = edi; /* 0x12145837: mov ecx, edi */
    goto L_121458C0; /* 0x12145839: jmp 0x121458c0 */
L_1214583E:
    /* cmp LO8(ebx), 1 */ /* 0x1214583E: cmp bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145939; /* 0x12145841: jne 0x12145939 */
L_12145847:
    eax = ebp + (-0x18); /* 0x12145847: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1214584A: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214584B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214584E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121428D6); /* 0x12145851: call 0x121428d6 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145856: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145939; /* 0x12145858: je 0x12145939 */
L_1214585E:
    esi = MEM32(ebp + (-0x18)); /* 0x1214585E: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12145861: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x12145863: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145899; /* 0x12145865: je 0x12145899 */
L_12145867:
    ecx = esi; /* 0x12145867: mov ecx, esi */
    edx = ecx + 0x1; /* 0x12145869: lea edx, [ecx + 1] */
L_1214586C:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214586C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214586E: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214586F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214586C; /* 0x12145871: jne 0x1214586c */
L_12145873:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12145873: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12145875: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12145878: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x12145879: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214587C: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12145881: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12145883: pop ecx */
    /* test ebx, ebx */ /* 0x12145884: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214591A; /* 0x12145886: je 0x1214591a */
L_1214588C:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214588C: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x1214588F: push esi */
    PUSH32(esp, ebx); /* 0x12145890: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x12145891: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12145896: add esp, 0xc */
    _flag_k = FK_ADD;
L_12145899:
    PUSH32(esp, 0x120014BCu); /* 0x12145899: push 0x120014bc */
    PUSH32(esp, 8); /* 0x1214589E: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x121458A0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121458A5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x121458A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121458A8: pop ecx */
    /* test esi, esi */ /* 0x121458A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121458B5; /* 0x121458AB: je 0x121458b5 */
L_121458AD:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x121458AD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ebx; /* 0x121458B0: mov dword ptr [esi + 4], ebx */
    goto L_121458B7; /* 0x121458B3: jmp 0x121458b7 */
L_121458B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121458B5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121458B7:
    MEM32(ebp + (-0x8)) = esi; /* 0x121458B7: mov dword ptr [ebp - 8], esi */
    ecx = edi; /* 0x121458BA: mov ecx, edi */
    /* test esi, esi */ /* 0x121458BC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145921; /* 0x121458BE: je 0x12145921 */
L_121458C0:
    eax = ebp + (-0x8); /* 0x121458C0: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x121458C3: push eax */
    RECOMP_CALL(sub_1214AE6F); /* 0x121458C4: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121458C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145911; /* 0x121458CB: je 0x12145911 */
L_121458CD:
    eax = ebp + (-0x1); /* 0x121458CD: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x121458D0: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121458D1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121458D4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12142A12); /* 0x121458D7: call 0x12142a12 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121458DC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145939; /* 0x121458DE: je 0x12145939 */
L_121458E0:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x121458E0: mov bl, byte ptr [ebp - 1] */
    /* cmp LO8(ebx), 2 */ /* 0x121458E3: cmp bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121457F0; /* 0x121458E6: jne 0x121457f0 */
L_121458EC:
    ecx = MEM32(ebp + (-0x1C)); /* 0x121458EC: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ecx + 0x8); /* 0x121458EF: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, edi); /* 0x121458F2: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x121458F3: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121458F6: push eax */
    eax = ecx + 0x34; /* 0x121458F7: lea eax, [ecx + 0x34] */
    PUSH32(esp, eax); /* 0x121458FA: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x121458FB: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x121458FE: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_12146A30); /* 0x12145901: call 0x12146a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145906: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x12145908: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x1214590B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214596F; /* 0x1214590D: jne 0x1214596f */
L_1214590F:
    goto L_1214591A; /* 0x1214590F: jmp 0x1214591a */
L_12145911:
    PUSH32(esp, 1); /* 0x12145911: push 1 */
    ecx = esi; /* 0x12145913: mov ecx, esi */
    RECOMP_CALL(sub_1214291B); /* 0x12145915: call 0x1214291b */
    RECOMP_FLAGS_IN();
L_1214591A:
    esi = 0x8007000Eu; /* 0x1214591A: mov esi, 0x8007000e */
    goto L_1214593E; /* 0x1214591F: jmp 0x1214593e */
L_12145921:
    RECOMP_CALL(sub_121437CE); /* 0x12145921: call 0x121437ce */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145926: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12145927: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214592C: pop ecx */
    /* test ebx, ebx */ /* 0x1214592D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214598D; /* 0x1214592F: je 0x1214598d */
L_12145931:
    PUSH32(esp, ebx); /* 0x12145931: push ebx */
    RECOMP_CALL(sub_121BF586); /* 0x12145932: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    goto L_1214598C; /* 0x12145937: jmp 0x1214598c */
L_12145939:
    esi = 0x8876038Fu; /* 0x12145939: mov esi, 0x8876038f */
L_1214593E:
    ecx = edi; /* 0x1214593E: mov ecx, edi */
    RECOMP_CALL(sub_121437CE); /* 0x12145940: call 0x121437ce */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145945: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12145946: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214594B: pop ecx */
    eax = esi; /* 0x1214594C: mov eax, esi */
    goto L_12145996; /* 0x1214594E: jmp 0x12145996 */
L_12145950:
    eax = MEM32(edi + 0x8); /* 0x12145950: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 0); /* 0x12145953: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12145955: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12145958: push eax */
    eax = edi + 0x34; /* 0x12145959: lea eax, [edi + 0x34] */
    PUSH32(esp, eax); /* 0x1214595C: push eax */
    PUSH32(esp, esi); /* 0x1214595D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214595E: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_12146A30); /* 0x12145961: call 0x12146a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145966: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x12145968: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x1214596B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214598D; /* 0x1214596D: je 0x1214598d */
L_1214596F:
    ecx = MEM32(ebp + 0x10); /* 0x1214596F: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x12145972: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12145975: push eax */
    RECOMP_CALL(sub_1214AE6F); /* 0x12145976: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214597B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145994; /* 0x1214597D: jne 0x12145994 */
L_1214597F:
    ecx = esi; /* 0x1214597F: mov ecx, esi */
    RECOMP_CALL(sub_12147160); /* 0x12145981: call 0x12147160 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145986: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145987: call 0x121bf388 */
    RECOMP_FLAGS_IN();
L_1214598C:
    ecx = POP32_VAL(esp); /* 0x1214598C: pop ecx */
L_1214598D:
    eax = 0x8007000Eu; /* 0x1214598D: mov eax, 0x8007000e */
    goto L_12145996; /* 0x12145992: jmp 0x12145996 */
L_12145994:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145994: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145996:
    ebx = POP32_VAL(esp); /* 0x12145996: pop ebx */
L_12145997:
    esi = POP32_VAL(esp); /* 0x12145997: pop esi */
L_12145998:
    edi = POP32_VAL(esp); /* 0x12145998: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12145999: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214599A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121459A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121459A2u);

L_121459A2:
    edi = edi; /* 0x121459A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121459A4: push ebp */
    ebp = esp; /* 0x121459A5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121459A7: push ecx */
    eax = MEM32(ecx + 0x1C); /* 0x121459A8: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(ecx + 0x28); /* 0x121459AB: mov edx, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x121459AE: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x121459B0: mov dword ptr [ebp - 4], eax */
    eax = ecx + 0x44; /* 0x121459B3: lea eax, [ecx + 0x44] */
    PUSH32(esp, eax); /* 0x121459B6: push eax */
    PUSH32(esp, edx); /* 0x121459B7: push edx */
    eax = ebp + (-0x4); /* 0x121459B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121459BB: push eax */
    RECOMP_CALL(sub_12144FE3); /* 0x121459BC: call 0x12144fe3 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121459C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121459C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_121459C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121459C8u);

L_121459C8:
    edi = edi; /* 0x121459C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121459CA: push ebp */
    ebp = esp; /* 0x121459CB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121459CD: push ebx */
    PUSH32(esp, esi); /* 0x121459CE: push esi */
    PUSH32(esp, edi); /* 0x121459CF: push edi */
    edi = MEM32(ebp + 0x18); /* 0x121459D0: mov edi, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x121459D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145A75; /* 0x121459D5: je 0x12145a75 */
L_121459DB:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121459DB: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12145A75; /* 0x121459DF: je 0x12145a75 */
L_121459E5:
    esi = MEM32(ebp + 0x14); /* 0x121459E5: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, 0xFFFFFFFCu */ /* 0x121459E8: test esi, 0xfffffffc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145A75; /* 0x121459EE: jne 0x12145a75 */
L_121459F4:
    ebx = MEM32(ebp + 0x10); /* 0x121459F4: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, 0xFFFFFFFEu */ /* 0x121459F7: test ebx, 0xfffffffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145A75; /* 0x121459FD: jne 0x12145a75 */
L_121459FF:
    PUSH32(esp, 0x121EB394u); /* 0x121459FF: push 0x121eb394 */
    RECOMP_ICALL(MEM32(0x120010B4)); /* 0x12145A04: call dword ptr [0x120010b4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x12145A0A: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x12145A0D: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x12145A0F: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x12145A12: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12145A40; /* 0x12145A15: jbe 0x12145a40 */
L_12145A17:
    /* cmp eax, 4 */ /* 0x12145A17: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145A39; /* 0x12145A1A: jne 0x12145a39 */
L_12145A1C:
    eax = ebp + 0x18; /* 0x12145A1C: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x12145A1F: push eax */
    PUSH32(esp, esi); /* 0x12145A20: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145A21: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145A24: push dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x12145A27: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145A32; /* 0x12145A29: jne 0x12145a32 */
L_12145A2B:
    RECOMP_CALL(sub_1214469B); /* 0x12145A2B: call 0x1214469b */
    RECOMP_FLAGS_IN();
    goto L_12145A5B; /* 0x12145A30: jmp 0x12145a5b */
L_12145A32:
    RECOMP_CALL(sub_12144942); /* 0x12145A32: call 0x12144942 */
    RECOMP_FLAGS_IN();
    goto L_12145A5B; /* 0x12145A37: jmp 0x12145a5b */
L_12145A39:
    esi = 0x88760385u; /* 0x12145A39: mov esi, 0x88760385 */
    goto L_12145A66; /* 0x12145A3E: jmp 0x12145a66 */
L_12145A40:
    eax = ebp + 0x18; /* 0x12145A40: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x12145A43: push eax */
    PUSH32(esp, esi); /* 0x12145A44: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145A45: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145A48: push dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x12145A4B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145A56; /* 0x12145A4D: jne 0x12145a56 */
L_12145A4F:
    RECOMP_CALL(sub_121453AC); /* 0x12145A4F: call 0x121453ac */
    RECOMP_FLAGS_IN();
    goto L_12145A5B; /* 0x12145A54: jmp 0x12145a5b */
L_12145A56:
    RECOMP_CALL(sub_121454A1); /* 0x12145A56: call 0x121454a1 */
    RECOMP_FLAGS_IN();
L_12145A5B:
    esi = eax; /* 0x12145A5B: mov esi, eax */
    /* test esi, esi */ /* 0x12145A5D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145A66; /* 0x12145A5F: js 0x12145a66 */
L_12145A61:
    eax = MEM32(ebp + 0x18); /* 0x12145A61: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi) = eax; /* 0x12145A64: mov dword ptr [edi], eax */
L_12145A66:
    PUSH32(esp, 0x121EB394u); /* 0x12145A66: push 0x121eb394 */
    RECOMP_ICALL(MEM32(0x120010B0)); /* 0x12145A6B: call dword ptr [0x120010b0] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12145A71: mov eax, esi */
    goto L_12145A7A; /* 0x12145A73: jmp 0x12145a7a */
L_12145A75:
    eax = 0x88760385u; /* 0x12145A75: mov eax, 0x88760385 */
L_12145A7A:
    edi = POP32_VAL(esp); /* 0x12145A7A: pop edi */
    esi = POP32_VAL(esp); /* 0x12145A7B: pop esi */
    ebx = POP32_VAL(esp); /* 0x12145A7C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12145A7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12145A7E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12145A86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145A86u);

L_12145A86:
    edi = edi; /* 0x12145A86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145A88: push ebp */
    ebp = esp; /* 0x12145A89: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12145A8B: push ecx */
    PUSH32(esp, ecx); /* 0x12145A8C: push ecx */
    PUSH32(esp, ebx); /* 0x12145A8D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12145A8E: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM8(ebx + 0x5D), 0 */ /* 0x12145A91: cmp byte ptr [ebx + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12145AA1; /* 0x12145A95: je 0x12145aa1 */
L_12145A97:
    eax = 0x88760384u; /* 0x12145A97: mov eax, 0x88760384 */
    goto L_12145B6B; /* 0x12145A9C: jmp 0x12145b6b */
L_12145AA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12145AA1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x40), 1 */ /* 0x12145AA3: cmp dword ptr [ebx + 0x40], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12145AA7: push esi */
    esi = ecx; /* 0x12145AA8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x12145AAA: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12145AAB: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12145AAE: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + 0x8) = esi; /* 0x12145AB1: mov dword ptr [ebp + 8], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145AF1; /* 0x12145AB4: jne 0x12145af1 */
L_12145AB6:
    PUSH32(esp, ecx); /* 0x12145AB6: push ecx */
    PUSH32(esp, 4); /* 0x12145AB7: push 4 */
    RECOMP_CALL(sub_121BF59E); /* 0x12145AB9: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x12145ABE: push eax */
    RECOMP_CALL(sub_121BF592); /* 0x12145ABF: call 0x121bf592 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145AC4: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12145AC6: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x12145AC9: mov dword ptr [ebp + 8], esi */
    /* test esi, esi */ /* 0x12145ACC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145AE1; /* 0x12145ACE: je 0x12145ae1 */
L_12145AD0:
    PUSH32(esp, 2); /* 0x12145AD0: push 2 */
    edi = 0x120066A4u; /* 0x12145AD2: mov edi, 0x120066a4 */
    ecx = POP32_VAL(esp); /* 0x12145AD7: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145AD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12145ADA: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    esi = MEM32(ebp + 0x8); /* 0x12145ADC: mov esi, dword ptr [ebp + 8] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12145AEF; /* 0x12145ADF: je 0x12145aef */
L_12145AE1:
    PUSH32(esp, 0x120066A4u); /* 0x12145AE1: push 0x120066a4 */
    PUSH32(esp, 4); /* 0x12145AE6: push 4 */
    RECOMP_CALL(sub_121BF59E); /* 0x12145AE8: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145AED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145AEE: pop ecx */
L_12145AEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12145AEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145AF1:
    edi = ecx; /* 0x12145AF1: mov edi, ecx */
    /* cmp MEM32(ebx + 0xC), ecx */ /* 0x12145AF3: cmp dword ptr [ebx + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12145B14; /* 0x12145AF6: jbe 0x12145b14 */
L_12145AF8:
    eax = MEM32(ebx + 0x18); /* 0x12145AF8: mov eax, dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12145AFB: push dword ptr [eax + edi*4] */
    ecx = ebx; /* 0x12145AFE: mov ecx, ebx */
    RECOMP_CALL(sub_12145644); /* 0x12145B00: call 0x12145644 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x12145B05: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x12145B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145B69; /* 0x12145B0A: js 0x12145b69 */
L_12145B0C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12145B0C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0xC) */ /* 0x12145B0D: cmp edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12145AF8; /* 0x12145B10: jb 0x12145af8 */
L_12145B12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12145B12: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145B14:
    /* cmp MEM32(ebx + 0x1C), ecx */ /* 0x12145B14: cmp dword ptr [ebx + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12145B38; /* 0x12145B17: jbe 0x12145b38 */
L_12145B19:
    eax = MEM32(ebx + 0x28); /* 0x12145B19: mov eax, dword ptr [ebx + 0x28] */
    ecx = MEM32(eax + ecx * 4); /* 0x12145B1C: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x12145B1F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x12145B21: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x12145B22: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x12145B25: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x12145B28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145B69; /* 0x12145B2A: js 0x12145b69 */
L_12145B2C:
    ecx = MEM32(ebp + (-0x8)); /* 0x12145B2C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12145B2F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x12145B30: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, MEM32(ebx + 0x1C) */ /* 0x12145B33: cmp ecx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12145B19; /* 0x12145B36: jb 0x12145b19 */
L_12145B38:
    /* test esi, esi */ /* 0x12145B38: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145B5E; /* 0x12145B3A: je 0x12145b5e */
L_12145B3C:
    PUSH32(esp, 2); /* 0x12145B3C: push 2 */
    edi = 0x120066A4u; /* 0x12145B3E: mov edi, 0x120066a4 */
    ecx = POP32_VAL(esp); /* 0x12145B43: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145B44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12145B46: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    esi = MEM32(ebp + 0x8); /* 0x12145B48: mov esi, dword ptr [ebp + 8] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12145B57; /* 0x12145B4B: je 0x12145b57 */
L_12145B4D:
    PUSH32(esp, esi); /* 0x12145B4D: push esi */
    PUSH32(esp, 4); /* 0x12145B4E: push 4 */
    RECOMP_CALL(sub_121BF59E); /* 0x12145B50: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145B55: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145B56: pop ecx */
L_12145B57:
    PUSH32(esp, esi); /* 0x12145B57: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12145B58: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145B5D: pop ecx */
L_12145B5E:
    eax = MEM32(ebp + (-0x4)); /* 0x12145B5E: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x12145B61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145B69; /* 0x12145B63: js 0x12145b69 */
L_12145B65:
    MEM8(ebx + 0x5D) = (uint8_t)(1); /* 0x12145B65: mov byte ptr [ebx + 0x5d], 1 */
L_12145B69:
    edi = POP32_VAL(esp); /* 0x12145B69: pop edi */
    esi = POP32_VAL(esp); /* 0x12145B6A: pop esi */
L_12145B6B:
    ebx = POP32_VAL(esp); /* 0x12145B6B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12145B6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12145B6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12145B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145B75u);

L_12145B75:
    edi = edi; /* 0x12145B75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145B77: push ebp */
    ebp = esp; /* 0x12145B78: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145B7A: push esi */
    esi = ecx; /* 0x12145B7B: mov esi, ecx */
    RECOMP_CALL(sub_1214525E); /* 0x12145B7D: call 0x1214525e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12145B82: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145B8F; /* 0x12145B86: je 0x12145b8f */
L_12145B88:
    PUSH32(esp, esi); /* 0x12145B88: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145B89: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145B8E: pop ecx */
L_12145B8F:
    eax = esi; /* 0x12145B8F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12145B91: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145B92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12145B93: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12145B9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145B9Bu);

L_12145B9B:
    edi = edi; /* 0x12145B9B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145B9D: push ebp */
    ebp = esp; /* 0x12145B9E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145BA0: push esi */
    esi = ecx; /* 0x12145BA1: mov esi, ecx */
    RECOMP_CALL(sub_121452A4); /* 0x12145BA3: call 0x121452a4 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12145BA8: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145BB5; /* 0x12145BAC: je 0x12145bb5 */
L_12145BAE:
    PUSH32(esp, esi); /* 0x12145BAE: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145BAF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145BB4: pop ecx */
L_12145BB5:
    eax = esi; /* 0x12145BB5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12145BB7: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145BB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12145BB9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12145BC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145BC1u);

L_12145BC1:
    edi = edi; /* 0x12145BC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145BC3: push ebp */
    ebp = esp; /* 0x12145BC4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12145BC6: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12145BC9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12145BCE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12145BD0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12145BD3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12145BD4: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x14); /* 0x12145BD7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x12145BDA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145BDB: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x12145BDE: mov dword ptr [ebp - 0x20], ecx */
    PUSH32(esp, ebx); /* 0x12145BE1: push ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x12145BE2: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_CALL(sub_121429E1); /* 0x12145BE5: call 0x121429e1 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145BEA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145BF8; /* 0x12145BEC: jne 0x12145bf8 */
L_12145BEE:
    eax = 0x8876038Fu; /* 0x12145BEE: mov eax, 0x8876038f */
    goto L_12145C82; /* 0x12145BF3: jmp 0x12145c82 */
L_12145BF8:
    eax = ebp + (-0x24); /* 0x12145BF8: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x12145BFB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145BFC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12145BFF: push ebx */
    RECOMP_CALL(sub_121428D6); /* 0x12145C00: call 0x121428d6 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145C05: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145BEE; /* 0x12145C07: je 0x12145bee */
L_12145C09:
    PUSH32(esp, esi); /* 0x12145C09: push esi */
    PUSH32(esp, edi); /* 0x12145C0A: push edi */
    PUSH32(esp, 0x120014BCu); /* 0x12145C0B: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x12145C10: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x12145C12: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145C17: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12145C19: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12145C1A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12145C1C: pop ecx */
    /* test esi, esi */ /* 0x12145C1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145C32; /* 0x12145C1F: je 0x12145c32 */
L_12145C21:
    MEM32(esi) = edi; /* 0x12145C21: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x12145C23: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = 0xAu; /* 0x12145C26: mov dword ptr [esi + 8], 0xa */
    MEM32(esi + 0xC) = edi; /* 0x12145C2D: mov dword ptr [esi + 0xc], edi */
    goto L_12145C34; /* 0x12145C30: jmp 0x12145c34 */
L_12145C32:
    esi = edi; /* 0x12145C32: mov esi, edi */
L_12145C34:
    /* test esi, esi */ /* 0x12145C34: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145C5C; /* 0x12145C36: jne 0x12145c5c */
L_12145C38:
    goto L_12145E81; /* 0x12145C38: jmp 0x12145e81 */
L_12145C3D:
    SET_LO8(eax, MEM8(ebp + (-0x15))); /* 0x12145C3D: mov al, byte ptr [ebp - 0x15] */
    /* cmp LO8(eax), 2 */ /* 0x12145C40: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12145CA3; /* 0x12145C42: je 0x12145ca3 */
L_12145C44:
    /* test LO8(eax), LO8(eax) */ /* 0x12145C44: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145C6D; /* 0x12145C46: jne 0x12145c6d */
L_12145C48:
    ecx = MEM32(ebp + (-0x20)); /* 0x12145C48: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x12145C4B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145C4C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12145C4F: push ebx */
    RECOMP_CALL(sub_12145745); /* 0x12145C50: call 0x12145745 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x12145C55: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x12145C58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145C91; /* 0x12145C5A: js 0x12145c91 */
L_12145C5C:
    eax = ebp + (-0x15); /* 0x12145C5C: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x12145C5F: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145C60: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12145C63: push ebx */
    RECOMP_CALL(sub_12142A12); /* 0x12145C64: call 0x12142a12 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145C69: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145C3D; /* 0x12145C6B: jne 0x12145c3d */
L_12145C6D:
    ecx = esi; /* 0x12145C6D: mov ecx, esi */
    RECOMP_CALL(sub_1214378D); /* 0x12145C6F: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145C74: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145C75: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x12145C7A: mov eax, 0x8876038f */
L_12145C7F:
    ecx = POP32_VAL(esp); /* 0x12145C7F: pop ecx */
L_12145C80:
    edi = POP32_VAL(esp); /* 0x12145C80: pop edi */
    esi = POP32_VAL(esp); /* 0x12145C81: pop esi */
L_12145C82:
    ecx = MEM32(ebp + (-0x4)); /* 0x12145C82: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12145C85: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12145C87: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12145C88: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12145C8D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12145C8E: ret 8 */
L_12145C91:
    ecx = esi; /* 0x12145C91: mov ecx, esi */
    RECOMP_CALL(sub_1214378D); /* 0x12145C93: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145C98: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145C99: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x12145C9E: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_12145C7F; /* 0x12145CA1: jmp 0x12145c7f */
L_12145CA3:
    eax = ebp + (-0x15); /* 0x12145CA3: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x12145CA6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145CA7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12145CAA: push ebx */
    RECOMP_CALL(sub_12142A12); /* 0x12145CAB: call 0x12142a12 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145CB0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145CBB; /* 0x12145CB2: jne 0x12145cbb */
L_12145CB4:
    edi = 0x8876038Fu; /* 0x12145CB4: mov edi, 0x8876038f */
    goto L_12145CF7; /* 0x12145CB9: jmp 0x12145cf7 */
L_12145CBB:
    /* cmp MEM8(ebp + (-0x15)), 3 */ /* 0x12145CBB: cmp byte ptr [ebp - 0x15], 3 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = edi; /* 0x12145CBF: mov ebx, edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12145D5D; /* 0x12145CC1: je 0x12145d5d */
L_12145CC7:
    PUSH32(esp, 0x120014BCu); /* 0x12145CC7: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x12145CCC: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x12145CCE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12145CD3: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12145CD5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145CD6: pop ecx */
    /* test ebx, ebx */ /* 0x12145CD7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145CEC; /* 0x12145CD9: je 0x12145cec */
L_12145CDB:
    MEM32(ebx) = edi; /* 0x12145CDB: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edi; /* 0x12145CDD: mov dword ptr [ebx + 4], edi */
    MEM32(ebx + 0x8) = 5; /* 0x12145CE0: mov dword ptr [ebx + 8], 5 */
    MEM32(ebx + 0xC) = edi; /* 0x12145CE7: mov dword ptr [ebx + 0xc], edi */
    goto L_12145CEE; /* 0x12145CEA: jmp 0x12145cee */
L_12145CEC:
    ebx = edi; /* 0x12145CEC: mov ebx, edi */
L_12145CEE:
    /* test ebx, ebx */ /* 0x12145CEE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145D56; /* 0x12145CF0: jne 0x12145d56 */
L_12145CF2:
    edi = 0x8007000Eu; /* 0x12145CF2: mov edi, 0x8007000e */
L_12145CF7:
    ecx = esi; /* 0x12145CF7: mov ecx, esi */
    RECOMP_CALL(sub_1214378D); /* 0x12145CF9: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145CFE: push esi */
L_12145CFF:
    RECOMP_CALL(sub_121BF388); /* 0x12145CFF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x12145D04: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_12145C7F; /* 0x12145D06: jmp 0x12145c7f */
L_12145D0B:
    /* test LO8(eax), LO8(eax) */ /* 0x12145D0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145D2B; /* 0x12145D0D: jne 0x12145d2b */
L_12145D0F:
    ecx = MEM32(ebp + (-0x20)); /* 0x12145D0F: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, 1); /* 0x12145D12: push 1 */
    PUSH32(esp, ebx); /* 0x12145D14: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145D15: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x12145D18: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_12143540); /* 0x12145D1B: call 0x12143540 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x12145D20: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x12145D23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12145D43; /* 0x12145D25: jns 0x12145d43 */
L_12145D27:
    edi = eax; /* 0x12145D27: mov edi, eax */
    goto L_12145D8E; /* 0x12145D29: jmp 0x12145d8e */
L_12145D2B:
    /* cmp LO8(eax), 1 */ /* 0x12145D2B: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145D89; /* 0x12145D2D: jne 0x12145d89 */
L_12145D2F:
    ecx = MEM32(ebp + (-0x20)); /* 0x12145D2F: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x12145D32: push edi */
    PUSH32(esp, ebx); /* 0x12145D33: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145D34: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x12145D37: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_12143540); /* 0x12145D3A: call 0x12143540 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145D3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145D85; /* 0x12145D41: js 0x12145d85 */
L_12145D43:
    eax = ebp + (-0x15); /* 0x12145D43: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x12145D46: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145D47: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x12145D4A: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_12142A12); /* 0x12145D4D: call 0x12142a12 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12145D52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145D89; /* 0x12145D54: je 0x12145d89 */
L_12145D56:
    SET_LO8(eax, MEM8(ebp + (-0x15))); /* 0x12145D56: mov al, byte ptr [ebp - 0x15] */
    /* cmp LO8(eax), 2 */ /* 0x12145D59: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12145D0B; /* 0x12145D5B: jne 0x12145d0b */
L_12145D5D:
    PUSH32(esp, 0x120014BCu); /* 0x12145D5D: push 0x120014bc */
    PUSH32(esp, 0xCu); /* 0x12145D62: push 0xc */
    RECOMP_CALL(sub_12018970); /* 0x12145D64: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145D69: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145D6A: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12145D6B: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x12145D6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145DA9; /* 0x12145D70: je 0x12145da9 */
L_12145D72:
    ecx = ebx; /* 0x12145D72: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12145D74: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12145D76: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x12145D78: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x12145D7B: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x12145D7D: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ecx; /* 0x12145D80: mov dword ptr [eax + 8], ecx */
    goto L_12145DAE; /* 0x12145D83: jmp 0x12145dae */
L_12145D85:
    edi = eax; /* 0x12145D85: mov edi, eax */
    goto L_12145D8E; /* 0x12145D87: jmp 0x12145d8e */
L_12145D89:
    edi = 0x8876038Fu; /* 0x12145D89: mov edi, 0x8876038f */
L_12145D8E:
    ecx = esi; /* 0x12145D8E: mov ecx, esi */
    RECOMP_CALL(sub_1214378D); /* 0x12145D90: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145D95: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145D96: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145D9B: pop ecx */
    ecx = ebx; /* 0x12145D9C: mov ecx, ebx */
    RECOMP_CALL(sub_12143755); /* 0x12145D9E: call 0x12143755 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12145DA3: push ebx */
    RECOMP_BACKEDGE();
    goto L_12145CFF; /* 0x12145DA4: jmp 0x12145cff */
L_12145DA9:
    eax = edi; /* 0x12145DA9: mov eax, edi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x12145DAB: mov dword ptr [ebp - 0x1c], edi */
L_12145DAE:
    /* test eax, eax */ /* 0x12145DAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145DDA; /* 0x12145DB0: jne 0x12145dda */
L_12145DB2:
    ecx = esi; /* 0x12145DB2: mov ecx, esi */
    RECOMP_CALL(sub_1214378D); /* 0x12145DB4: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12145DB9: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145DBA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145DBF: pop ecx */
    /* test ebx, ebx */ /* 0x12145DC0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145E81; /* 0x12145DC2: je 0x12145e81 */
L_12145DC8:
    ecx = ebx; /* 0x12145DC8: mov ecx, ebx */
    RECOMP_CALL(sub_12143755); /* 0x12145DCA: call 0x12143755 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12145DCF: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x12145DD0: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    goto L_12145E5D; /* 0x12145DD5: jmp 0x12145e5d */
L_12145DDA:
    esi = MEM32(ebp + (-0x24)); /* 0x12145DDA: mov esi, dword ptr [ebp - 0x24] */
    ebx = edi; /* 0x12145DDD: mov ebx, edi */
    /* test esi, esi */ /* 0x12145DDF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145E24; /* 0x12145DE1: je 0x12145e24 */
L_12145DE3:
    ecx = esi; /* 0x12145DE3: mov ecx, esi */
    edx = ecx + 0x1; /* 0x12145DE5: lea edx, [ecx + 1] */
L_12145DE8:
    SET_LO8(eax, MEM8(ecx)); /* 0x12145DE8: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12145DEA: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12145DEB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145DE8; /* 0x12145DED: jne 0x12145de8 */
L_12145DEF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12145DEF: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12145DF1: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12145DF4: push eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x12145DF5: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_121BF524); /* 0x12145DF8: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12145DFD: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12145DFF: pop ecx */
    /* test ebx, ebx */ /* 0x12145E00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145E17; /* 0x12145E02: jne 0x12145e17 */
L_12145E04:
    esi = MEM32(ebp + (-0x1C)); /* 0x12145E04: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x12145E07: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145E08: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x12145E0D: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_12145C7F; /* 0x12145E12: jmp 0x12145c7f */
L_12145E17:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x12145E17: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x12145E1A: push esi */
    PUSH32(esp, ebx); /* 0x12145E1B: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x12145E1C: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12145E21: add esp, 0xc */
    _flag_k = FK_ADD;
L_12145E24:
    PUSH32(esp, 0x120014BCu); /* 0x12145E24: push 0x120014bc */
    PUSH32(esp, 0x34u); /* 0x12145E29: push 0x34 */
    RECOMP_CALL(sub_12018970); /* 0x12145E2B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x12145E30: mov esi, dword ptr [ebp - 0x1c] */
    ecx = POP32_VAL(esp); /* 0x12145E33: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145E34: pop ecx */
    /* test eax, eax */ /* 0x12145E35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145E48; /* 0x12145E37: je 0x12145e48 */
L_12145E39:
    PUSH32(esp, esi); /* 0x12145E39: push esi */
    ecx = ebp + (-0x14); /* 0x12145E3A: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x12145E3D: push ecx */
    PUSH32(esp, ebx); /* 0x12145E3E: push ebx */
    ecx = eax; /* 0x12145E3F: mov ecx, eax */
    RECOMP_CALL(sub_12146BA5); /* 0x12145E41: call 0x12146ba5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145E46: mov edi, eax */
L_12145E48:
    PUSH32(esp, esi); /* 0x12145E48: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12145E49: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145E4E: pop ecx */
    /* test edi, edi */ /* 0x12145E4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145E60; /* 0x12145E51: jne 0x12145e60 */
L_12145E53:
    /* test ebx, ebx */ /* 0x12145E53: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145E81; /* 0x12145E55: je 0x12145e81 */
L_12145E57:
    PUSH32(esp, ebx); /* 0x12145E57: push ebx */
    RECOMP_CALL(sub_121BF586); /* 0x12145E58: call 0x121bf586 */
    RECOMP_FLAGS_IN();
L_12145E5D:
    ecx = POP32_VAL(esp); /* 0x12145E5D: pop ecx */
    goto L_12145E81; /* 0x12145E5E: jmp 0x12145e81 */
L_12145E60:
    ecx = MEM32(ebp + (-0x20)); /* 0x12145E60: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x12145E63: push edi */
    ecx = ecx + 0x34; /* 0x12145E64: lea ecx, [ecx + 0x34] */
    RECOMP_CALL(sub_12146E72); /* 0x12145E67: call 0x12146e72 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145E6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x12145E6E: mov eax, dword ptr [edi + 0x18] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145E8B; /* 0x12145E71: jne 0x12145e8b */
L_12145E73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12145E73: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x18) = eax; /* 0x12145E74: mov dword ptr [edi + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12145E81; /* 0x12145E77: jne 0x12145e81 */
L_12145E79:
    eax = MEM32(edi); /* 0x12145E79: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x12145E7B: push 1 */
    ecx = edi; /* 0x12145E7D: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x12145E7F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12145E81:
    eax = 0x8007000Eu; /* 0x12145E81: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_12145C80; /* 0x12145E86: jmp 0x12145c80 */
L_12145E8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12145E8B: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x18) = eax; /* 0x12145E8C: mov dword ptr [edi + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12145E99; /* 0x12145E8F: jne 0x12145e99 */
L_12145E91:
    eax = MEM32(edi); /* 0x12145E91: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x12145E93: push 1 */
    ecx = edi; /* 0x12145E95: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x12145E97: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_12145E99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145E99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_12145C80; /* 0x12145E9B: jmp 0x12145c80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12145EA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145EA5u);

L_12145EA5:
    edi = edi; /* 0x12145EA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145EA7: push ebp */
    ebp = esp; /* 0x12145EA8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12145EAA: push ecx */
    PUSH32(esp, esi); /* 0x12145EAB: push esi */
    PUSH32(esp, edi); /* 0x12145EAC: push edi */
    edi = ecx; /* 0x12145EAD: mov edi, ecx */
    eax = MEM32(edi + 0x18); /* 0x12145EAF: mov eax, dword ptr [edi + 0x18] */
    esi = MEM32(eax + 0x10); /* 0x12145EB2: mov esi, dword ptr [eax + 0x10] */
    edx = eax + 0x20; /* 0x12145EB5: lea edx, [eax + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12145EB8: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x12145EBA: mov dword ptr [ebp - 4], edx */
    /* cmp edx, esi */ /* 0x12145EBD: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12145ED6; /* 0x12145EBF: jae 0x12145ed6 */
L_12145EC1:
    PUSH32(esp, esi); /* 0x12145EC1: push esi */
    eax = ebp + (-0x4); /* 0x12145EC2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12145EC5: push eax */
    ecx = edi; /* 0x12145EC6: mov ecx, edi */
    RECOMP_CALL(sub_12145BC1); /* 0x12145EC8: call 0x12145bc1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145ECD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145ED8; /* 0x12145ECF: js 0x12145ed8 */
L_12145ED1:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x12145ED1: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12145EC1; /* 0x12145ED4: jb 0x12145ec1 */
L_12145ED6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145ED6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145ED8:
    edi = POP32_VAL(esp); /* 0x12145ED8: pop edi */
    esi = POP32_VAL(esp); /* 0x12145ED9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12145EDA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12145EDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_12145EE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145EE1u);

L_12145EE1:
    edi = edi; /* 0x12145EE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145EE3: push ebp */
    ebp = esp; /* 0x12145EE4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12145EE6: push esi */
    PUSH32(esp, 0x120014BCu); /* 0x12145EE7: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x12145EEC: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x12145EEE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145EF3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145EF4: pop ecx */
    /* test eax, eax */ /* 0x12145EF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145F0D; /* 0x12145EF7: je 0x12145f0d */
L_12145EF9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145EF9: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x12145EFC: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145EFE: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12145F01: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_12144D5D); /* 0x12145F04: call 0x12144d5d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145F09: mov esi, eax */
    goto L_12145F0F; /* 0x12145F0B: jmp 0x12145f0f */
L_12145F0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12145F0D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145F0F:
    /* test esi, esi */ /* 0x12145F0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145F1A; /* 0x12145F11: jne 0x12145f1a */
L_12145F13:
    eax = 0x8007000Eu; /* 0x12145F13: mov eax, 0x8007000e */
    goto L_12145F54; /* 0x12145F18: jmp 0x12145f54 */
L_12145F1A:
    PUSH32(esp, edi); /* 0x12145F1A: push edi */
    ecx = esi; /* 0x12145F1B: mov ecx, esi */
    RECOMP_CALL(sub_12144E41); /* 0x12145F1D: call 0x12144e41 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145F22: mov edi, eax */
    /* test edi, edi */ /* 0x12145F24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145F42; /* 0x12145F26: js 0x12145f42 */
L_12145F28:
    ecx = esi; /* 0x12145F28: mov ecx, esi */
    RECOMP_CALL(sub_12145EA5); /* 0x12145F2A: call 0x12145ea5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145F2F: mov edi, eax */
    /* test edi, edi */ /* 0x12145F31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12145F42; /* 0x12145F33: js 0x12145f42 */
L_12145F35:
    ecx = esi; /* 0x12145F35: mov ecx, esi */
    RECOMP_CALL(sub_121459A2); /* 0x12145F37: call 0x121459a2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145F3C: mov edi, eax */
    /* test edi, edi */ /* 0x12145F3E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12145F4C; /* 0x12145F40: jns 0x12145f4c */
L_12145F42:
    ecx = MEM32(esi); /* 0x12145F42: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12145F44: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x12145F45: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x12145F48: mov eax, edi */
    goto L_12145F53; /* 0x12145F4A: jmp 0x12145f53 */
L_12145F4C:
    eax = MEM32(ebp + 0x14); /* 0x12145F4C: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x12145F4F: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12145F51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145F53:
    edi = POP32_VAL(esp); /* 0x12145F53: pop edi */
L_12145F54:
    esi = POP32_VAL(esp); /* 0x12145F54: pop esi */
    ebp = POP32_VAL(esp); /* 0x12145F55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12145F56: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12145F5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12145F5Eu);

L_12145F5E:
    edi = edi; /* 0x12145F5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12145F60: push ebp */
    ebp = esp; /* 0x12145F61: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12145F63: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12145F64: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12145F67: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145F6A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x12001098)); /* 0x12145F6D: call dword ptr [0x12001098] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145F73: mov edi, eax */
    /* test edi, edi */ /* 0x12145F75: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145F83; /* 0x12145F77: jne 0x12145f83 */
L_12145F79:
    eax = 0x8876038Au; /* 0x12145F79: mov eax, 0x8876038a */
    goto L_12146039; /* 0x12145F7E: jmp 0x12146039 */
L_12145F83:
    PUSH32(esp, edi); /* 0x12145F83: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145F84: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1200109C)); /* 0x12145F87: call dword ptr [0x1200109c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12145F8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145F9B; /* 0x12145F8F: jne 0x12145f9b */
L_12145F91:
    eax = 0x8876038Bu; /* 0x12145F91: mov eax, 0x8876038b */
    goto L_12146039; /* 0x12145F96: jmp 0x12146039 */
L_12145F9B:
    PUSH32(esp, ebx); /* 0x12145F9B: push ebx */
    PUSH32(esp, esi); /* 0x12145F9C: push esi */
    PUSH32(esp, eax); /* 0x12145F9D: push eax */
    RECOMP_ICALL(MEM32(0x120010A0)); /* 0x12145F9E: call dword ptr [0x120010a0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12145FA4: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12145FA5: push dword ptr [ebp + 8] */
    ebx = eax; /* 0x12145FA8: mov ebx, eax */
    RECOMP_ICALL(MEM32(0x120010A4)); /* 0x12145FAA: call dword ptr [0x120010a4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145FB0: mov esi, eax */
    /* test ebx, ebx */ /* 0x12145FB2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214602B; /* 0x12145FB4: je 0x1214602b */
L_12145FB6:
    /* test esi, esi */ /* 0x12145FB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214602B; /* 0x12145FB8: je 0x1214602b */
L_12145FBA:
    PUSH32(esp, 0x120014BCu); /* 0x12145FBA: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x12145FBF: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x12145FC1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12145FC6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12145FC7: pop ecx */
    /* test eax, eax */ /* 0x12145FC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12145FDD; /* 0x12145FCA: je 0x12145fdd */
L_12145FCC:
    PUSH32(esp, esi); /* 0x12145FCC: push esi */
    PUSH32(esp, ebx); /* 0x12145FCD: push ebx */
    PUSH32(esp, edi); /* 0x12145FCE: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12145FCF: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x12145FD2: mov ecx, eax */
    RECOMP_CALL(sub_12144CE5); /* 0x12145FD4: call 0x12144ce5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12145FD9: mov esi, eax */
    goto L_12145FDF; /* 0x12145FDB: jmp 0x12145fdf */
L_12145FDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12145FDD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12145FDF:
    /* test esi, esi */ /* 0x12145FDF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12145FF1; /* 0x12145FE1: jne 0x12145ff1 */
L_12145FE3:
    PUSH32(esp, edi); /* 0x12145FE3: push edi */
    RECOMP_ICALL(MEM32(0x120010A8)); /* 0x12145FE4: call dword ptr [0x120010a8] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x12145FEA: mov eax, 0x8007000e */
    goto L_12146037; /* 0x12145FEF: jmp 0x12146037 */
L_12145FF1:
    ecx = esi; /* 0x12145FF1: mov ecx, esi */
    RECOMP_CALL(sub_12144E41); /* 0x12145FF3: call 0x12144e41 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12145FF8: mov edi, eax */
    /* test edi, edi */ /* 0x12145FFA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146018; /* 0x12145FFC: js 0x12146018 */
L_12145FFE:
    ecx = esi; /* 0x12145FFE: mov ecx, esi */
    RECOMP_CALL(sub_12145EA5); /* 0x12146000: call 0x12145ea5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146005: mov edi, eax */
    /* test edi, edi */ /* 0x12146007: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146018; /* 0x12146009: js 0x12146018 */
L_1214600B:
    ecx = esi; /* 0x1214600B: mov ecx, esi */
    RECOMP_CALL(sub_121459A2); /* 0x1214600D: call 0x121459a2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146012: mov edi, eax */
    /* test edi, edi */ /* 0x12146014: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146022; /* 0x12146016: jns 0x12146022 */
L_12146018:
    ecx = MEM32(esi); /* 0x12146018: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1214601A: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1214601B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1214601E: mov eax, edi */
    goto L_12146037; /* 0x12146020: jmp 0x12146037 */
L_12146022:
    eax = MEM32(ebp + 0x18); /* 0x12146022: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x12146025: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146027: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12146037; /* 0x12146029: jmp 0x12146037 */
L_1214602B:
    PUSH32(esp, edi); /* 0x1214602B: push edi */
    RECOMP_ICALL(MEM32(0x120010A8)); /* 0x1214602C: call dword ptr [0x120010a8] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Bu; /* 0x12146032: mov eax, 0x8876038b */
L_12146037:
    esi = POP32_VAL(esp); /* 0x12146037: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146038: pop ebx */
L_12146039:
    edi = POP32_VAL(esp); /* 0x12146039: pop edi */
    ebp = POP32_VAL(esp); /* 0x1214603A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1214603B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12146043(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146043u);

L_12146043:
    edi = edi; /* 0x12146043: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146045: push ebp */
    ebp = esp; /* 0x12146046: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12146048: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1214604B: push esi */
    PUSH32(esp, edi); /* 0x1214604C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214604D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214604F: push esi */
    PUSH32(esp, esi); /* 0x12146050: push esi */
    PUSH32(esp, 3); /* 0x12146051: push 3 */
    PUSH32(esp, esi); /* 0x12146053: push esi */
    PUSH32(esp, 1); /* 0x12146054: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x12146056: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214605B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x1214605E: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146064: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x12146066: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146075; /* 0x12146069: jne 0x12146075 */
L_1214606B:
    eax = 0x88760389u; /* 0x1214606B: mov eax, 0x88760389 */
    goto L_1214616B; /* 0x12146070: jmp 0x1214616b */
L_12146075:
    eax = ebp + (-0x8); /* 0x12146075: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12146078: push eax */
    PUSH32(esp, edi); /* 0x12146079: push edi */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x1214607A: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x12146080: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12146083: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146099; /* 0x12146086: jne 0x12146099 */
L_12146088:
    PUSH32(esp, edi); /* 0x12146088: push edi */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12146089: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x1214608F: mov eax, 0x8876038f */
    goto L_1214616B; /* 0x12146094: jmp 0x1214616b */
L_12146099:
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x12146099: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121460A5; /* 0x1214609C: jg 0x121460a5 */
L_1214609E:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12146088; /* 0x1214609E: jl 0x12146088 */
L_121460A0:
    /* cmp eax, 0x20u */ /* 0x121460A0: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146088; /* 0x121460A3: jb 0x12146088 */
L_121460A5:
    PUSH32(esp, ebx); /* 0x121460A5: push ebx */
    PUSH32(esp, esi); /* 0x121460A6: push esi */
    PUSH32(esp, esi); /* 0x121460A7: push esi */
    PUSH32(esp, esi); /* 0x121460A8: push esi */
    PUSH32(esp, 2); /* 0x121460A9: push 2 */
    PUSH32(esp, esi); /* 0x121460AB: push esi */
    PUSH32(esp, edi); /* 0x121460AC: push edi */
    RECOMP_ICALL(MEM32(0x1200108C)); /* 0x121460AD: call dword ptr [0x1200108c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121460B3: mov ebx, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x121460B5: mov dword ptr [ebp - 4], ebx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x121460B8: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121460CE; /* 0x121460BB: jne 0x121460ce */
L_121460BD:
    PUSH32(esp, edi); /* 0x121460BD: push edi */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121460BE: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x121460C4: mov eax, 0x8876038f */
    goto L_1214616A; /* 0x121460C9: jmp 0x1214616a */
L_121460CE:
    PUSH32(esp, esi); /* 0x121460CE: push esi */
    PUSH32(esp, esi); /* 0x121460CF: push esi */
    PUSH32(esp, esi); /* 0x121460D0: push esi */
    PUSH32(esp, 4); /* 0x121460D1: push 4 */
    PUSH32(esp, ebx); /* 0x121460D3: push ebx */
    RECOMP_ICALL(MEM32(0x12001090)); /* 0x121460D4: call dword ptr [0x12001090] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x121460DA: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x121460DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121460E8; /* 0x121460DF: jne 0x121460e8 */
L_121460E1:
    ebx = 0x8876038Fu; /* 0x121460E1: mov ebx, 0x8876038f */
    goto L_12146120; /* 0x121460E6: jmp 0x12146120 */
L_121460E8:
    PUSH32(esp, 0x120014BCu); /* 0x121460E8: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x121460ED: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x121460EF: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121460F4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121460F5: pop ecx */
    /* test eax, eax */ /* 0x121460F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214610E; /* 0x121460F8: je 0x1214610e */
L_121460FA:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x121460FA: push dword ptr [ebp - 0xc] */
    ecx = eax; /* 0x121460FD: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121460FF: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12146102: push ebx */
    PUSH32(esp, edi); /* 0x12146103: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146104: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_12144C6C); /* 0x12146107: call 0x12144c6c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214610C: mov esi, eax */
L_1214610E:
    /* test esi, esi */ /* 0x1214610E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146132; /* 0x12146110: jne 0x12146132 */
L_12146112:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146112: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x12146115: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    ebx = 0x8007000Eu; /* 0x1214611B: mov ebx, 0x8007000e */
L_12146120:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12146120: push dword ptr [ebp - 4] */
    esi = MEM32(0x120010F0); /* 0x12146123: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x12146129: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1214612B: push edi */
    RECOMP_ICALL(esi); /* 0x1214612C: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1214612E: mov eax, ebx */
    goto L_1214616A; /* 0x12146130: jmp 0x1214616a */
L_12146132:
    ecx = esi; /* 0x12146132: mov ecx, esi */
    RECOMP_CALL(sub_12144E41); /* 0x12146134: call 0x12144e41 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146139: mov edi, eax */
    /* test edi, edi */ /* 0x1214613B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146159; /* 0x1214613D: js 0x12146159 */
L_1214613F:
    ecx = esi; /* 0x1214613F: mov ecx, esi */
    RECOMP_CALL(sub_12145EA5); /* 0x12146141: call 0x12145ea5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146146: mov edi, eax */
    /* test edi, edi */ /* 0x12146148: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146159; /* 0x1214614A: js 0x12146159 */
L_1214614C:
    ecx = esi; /* 0x1214614C: mov ecx, esi */
    RECOMP_CALL(sub_121459A2); /* 0x1214614E: call 0x121459a2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146153: mov edi, eax */
    /* test edi, edi */ /* 0x12146155: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146163; /* 0x12146157: jns 0x12146163 */
L_12146159:
    ecx = MEM32(esi); /* 0x12146159: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1214615B: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1214615C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1214615F: mov eax, edi */
    goto L_1214616A; /* 0x12146161: jmp 0x1214616a */
L_12146163:
    eax = MEM32(ebp + 0x10); /* 0x12146163: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = esi; /* 0x12146166: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146168: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214616A:
    ebx = POP32_VAL(esp); /* 0x1214616A: pop ebx */
L_1214616B:
    edi = POP32_VAL(esp); /* 0x1214616B: pop edi */
    esi = POP32_VAL(esp); /* 0x1214616C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214616D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214616E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12146176(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146176u);

L_12146176:
    edi = edi; /* 0x12146176: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146178: push ebp */
    ebp = esp; /* 0x12146179: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x1214617B: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12146181: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12146186: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12146188: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1214618B: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1214618C: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214618F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12146190: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12146193: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12146194: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x120)) = esi; /* 0x12146197: mov dword ptr [ebp - 0x120], esi */
    MEM32(ebp + (-0x11C)) = ebx; /* 0x1214619D: mov dword ptr [ebp - 0x11c], ebx */
    RECOMP_CALL(sub_12018843); /* 0x121461A3: call 0x12018843 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121461A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121461D8; /* 0x121461AA: jne 0x121461d8 */
L_121461AC:
    PUSH32(esp, 0x104u); /* 0x121461AC: push 0x104 */
    eax = ebp + (-0x108); /* 0x121461B1: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x121461B7: push edi */
    PUSH32(esp, eax); /* 0x121461B8: push eax */
    RECOMP_CALL(sub_121BF982); /* 0x121461B9: call 0x121bf982 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121461BE: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x121461C1: push ebx */
    PUSH32(esp, esi); /* 0x121461C2: push esi */
    eax = ebp + (-0x108); /* 0x121461C3: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x121461C9: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x121461CA: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_12146043); /* 0x121461CE: call 0x12146043 */
    RECOMP_FLAGS_IN();
    goto L_12146302; /* 0x121461D3: jmp 0x12146302 */
L_121461D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121461D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121461DA: push esi */
    PUSH32(esp, esi); /* 0x121461DB: push esi */
    PUSH32(esp, 3); /* 0x121461DC: push 3 */
    PUSH32(esp, esi); /* 0x121461DE: push esi */
    PUSH32(esp, 1); /* 0x121461DF: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x121461E1: push 0x80000000 */
    PUSH32(esp, edi); /* 0x121461E6: push edi */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x121461E7: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121461ED: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x121461EF: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121461FE; /* 0x121461F2: jne 0x121461fe */
L_121461F4:
    eax = 0x88760389u; /* 0x121461F4: mov eax, 0x88760389 */
    goto L_12146302; /* 0x121461F9: jmp 0x12146302 */
L_121461FE:
    eax = ebp + (-0x114); /* 0x121461FE: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x12146204: push eax */
    PUSH32(esp, edi); /* 0x12146205: push edi */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x12146206: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x118)) = eax; /* 0x1214620C: mov dword ptr [ebp - 0x118], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12146212: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146228; /* 0x12146215: jne 0x12146228 */
L_12146217:
    PUSH32(esp, edi); /* 0x12146217: push edi */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12146218: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x1214621E: mov eax, 0x8876038f */
    goto L_12146302; /* 0x12146223: jmp 0x12146302 */
L_12146228:
    /* cmp MEM32(ebp + (-0x114)), esi */ /* 0x12146228: cmp dword ptr [ebp - 0x114], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12146237; /* 0x1214622E: jg 0x12146237 */
L_12146230:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12146217; /* 0x12146230: jl 0x12146217 */
L_12146232:
    /* cmp eax, 0x20u */ /* 0x12146232: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146217; /* 0x12146235: jb 0x12146217 */
L_12146237:
    PUSH32(esp, esi); /* 0x12146237: push esi */
    PUSH32(esp, esi); /* 0x12146238: push esi */
    PUSH32(esp, esi); /* 0x12146239: push esi */
    PUSH32(esp, 2); /* 0x1214623A: push 2 */
    PUSH32(esp, esi); /* 0x1214623C: push esi */
    PUSH32(esp, edi); /* 0x1214623D: push edi */
    RECOMP_ICALL(MEM32(0x1200108C)); /* 0x1214623E: call dword ptr [0x1200108c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12146244: mov ebx, eax */
    MEM32(ebp + (-0x110)) = ebx; /* 0x12146246: mov dword ptr [ebp - 0x110], ebx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214624C: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146217; /* 0x1214624F: je 0x12146217 */
L_12146251:
    PUSH32(esp, esi); /* 0x12146251: push esi */
    PUSH32(esp, esi); /* 0x12146252: push esi */
    PUSH32(esp, esi); /* 0x12146253: push esi */
    PUSH32(esp, 4); /* 0x12146254: push 4 */
    PUSH32(esp, ebx); /* 0x12146256: push ebx */
    RECOMP_ICALL(MEM32(0x12001090)); /* 0x12146257: call dword ptr [0x12001090] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10C)) = eax; /* 0x1214625D: mov dword ptr [ebp - 0x10c], eax */
    /* test eax, eax */ /* 0x12146263: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214626E; /* 0x12146265: jne 0x1214626e */
L_12146267:
    ebx = 0x8876038Fu; /* 0x12146267: mov ebx, 0x8876038f */
    goto L_121462B2; /* 0x1214626C: jmp 0x121462b2 */
L_1214626E:
    PUSH32(esp, 0x120014BCu); /* 0x1214626E: push 0x120014bc */
    PUSH32(esp, 0x54u); /* 0x12146273: push 0x54 */
    RECOMP_CALL(sub_12018970); /* 0x12146275: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214627A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214627B: pop ecx */
    /* test eax, eax */ /* 0x1214627C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214629D; /* 0x1214627E: je 0x1214629d */
L_12146280:
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x12146280: push dword ptr [ebp - 0x118] */
    ecx = eax; /* 0x12146286: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x12146288: push dword ptr [ebp - 0x10c] */
    PUSH32(esp, ebx); /* 0x1214628E: push ebx */
    PUSH32(esp, edi); /* 0x1214628F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x12146290: push dword ptr [ebp - 0x120] */
    RECOMP_CALL(sub_12144C6C); /* 0x12146296: call 0x12144c6c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214629B: mov esi, eax */
L_1214629D:
    /* test esi, esi */ /* 0x1214629D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121462C7; /* 0x1214629F: jne 0x121462c7 */
L_121462A1:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x121462A1: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x121462A7: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    ebx = 0x8007000Eu; /* 0x121462AD: mov ebx, 0x8007000e */
L_121462B2:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x121462B2: push dword ptr [ebp - 0x110] */
    esi = MEM32(0x120010F0); /* 0x121462B8: mov esi, dword ptr [0x120010f0] */
    RECOMP_ICALL(esi); /* 0x121462BE: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121462C0: push edi */
    RECOMP_ICALL(esi); /* 0x121462C1: call esi */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x121462C3: mov eax, ebx */
    goto L_12146302; /* 0x121462C5: jmp 0x12146302 */
L_121462C7:
    ecx = esi; /* 0x121462C7: mov ecx, esi */
    RECOMP_CALL(sub_12144E41); /* 0x121462C9: call 0x12144e41 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121462CE: mov edi, eax */
    /* test edi, edi */ /* 0x121462D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121462DE; /* 0x121462D2: jns 0x121462de */
L_121462D4:
    ecx = MEM32(esi); /* 0x121462D4: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x121462D6: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x121462D7: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x121462DA: mov eax, edi */
    goto L_12146302; /* 0x121462DC: jmp 0x12146302 */
L_121462DE:
    ecx = esi; /* 0x121462DE: mov ecx, esi */
    RECOMP_CALL(sub_12145EA5); /* 0x121462E0: call 0x12145ea5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121462E5: mov edi, eax */
    /* test edi, edi */ /* 0x121462E7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121462D4; /* 0x121462E9: js 0x121462d4 */
L_121462EB:
    ecx = esi; /* 0x121462EB: mov ecx, esi */
    RECOMP_CALL(sub_121459A2); /* 0x121462ED: call 0x121459a2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121462F2: mov edi, eax */
    /* test edi, edi */ /* 0x121462F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121462D4; /* 0x121462F6: js 0x121462d4 */
L_121462F8:
    eax = MEM32(ebp + (-0x11C)); /* 0x121462F8: mov eax, dword ptr [ebp - 0x11c] */
    MEM32(eax) = esi; /* 0x121462FE: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146300: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12146302:
    ecx = MEM32(ebp + (-0x4)); /* 0x12146302: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12146305: pop edi */
    esi = POP32_VAL(esp); /* 0x12146306: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12146307: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12146309: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214630A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214630F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12146310: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12146318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146318u);

L_12146318:
    edi = edi; /* 0x12146318: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214631A: push ebp */
    ebp = esp; /* 0x1214631B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214631D: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1214631E: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12146321: push edi */
    /* test ebx, ebx */ /* 0x12146322: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214645C; /* 0x12146324: je 0x1214645c */
L_1214632A:
    edi = MEM32(ebp + 0xC); /* 0x1214632A: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1214632D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214645C; /* 0x1214632F: je 0x1214645c */
L_12146335:
    PUSH32(esp, esi); /* 0x12146335: push esi */
    PUSH32(esp, 0x121EB394u); /* 0x12146336: push 0x121eb394 */
    RECOMP_ICALL(MEM32(0x120010B4)); /* 0x1214633B: call dword ptr [0x120010b4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146341: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x12146343: mov dword ptr [ebx], esi */
    MEM32(ebp + 0x14) = esi; /* 0x12146345: mov dword ptr [ebp + 0x14], esi */
    MEM32(ebp + 0xC) = esi; /* 0x12146348: mov dword ptr [ebp + 0xc], esi */
    RECOMP_CALL(sub_1214ADAB); /* 0x1214634B: call 0x1214adab */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x12146350: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x12146353: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121463F2; /* 0x12146355: je 0x121463f2 */
L_1214635B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214635B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121463D0; /* 0x1214635C: je 0x121463d0 */
L_1214635E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214635E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214639C; /* 0x1214635F: je 0x1214639c */
L_12146361:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12146361: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214636E; /* 0x12146362: je 0x1214636e */
L_12146364:
    esi = 0x80070057u; /* 0x12146364: mov esi, 0x80070057 */
    goto L_1214644C; /* 0x12146369: jmp 0x1214644c */
L_1214636E:
    eax = ebp + 0xC; /* 0x1214636E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12146371: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146372: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x12146375: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x12146378: push dword ptr [edi] */
    RECOMP_CALL(sub_12145EE1); /* 0x1214637A: call 0x12145ee1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214637F: mov esi, eax */
    /* test esi, esi */ /* 0x12146381: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146447; /* 0x12146383: jns 0x12146447 */
L_12146389:
    eax = ebp + 0x14; /* 0x12146389: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1214638C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214638D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x12146390: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x12146393: push dword ptr [edi] */
    RECOMP_CALL(sub_12142CEE); /* 0x12146395: call 0x12142cee */
    RECOMP_FLAGS_IN();
    goto L_12146412; /* 0x1214639A: jmp 0x12146412 */
L_1214639C:
    eax = ebp + 0xC; /* 0x1214639C: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1214639F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121463A0: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x121463A3: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x121463A6: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x121463A9: push dword ptr [edi] */
    RECOMP_CALL(sub_12145F5E); /* 0x121463AB: call 0x12145f5e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121463B0: mov esi, eax */
    /* test esi, esi */ /* 0x121463B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146447; /* 0x121463B4: jns 0x12146447 */
L_121463BA:
    eax = ebp + 0x14; /* 0x121463BA: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x121463BD: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121463BE: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x121463C1: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x121463C4: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x121463C7: push dword ptr [edi] */
    RECOMP_CALL(sub_12142D79); /* 0x121463C9: call 0x12142d79 */
    RECOMP_FLAGS_IN();
    goto L_12146412; /* 0x121463CE: jmp 0x12146412 */
L_121463D0:
    eax = ebp + 0xC; /* 0x121463D0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x121463D3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121463D4: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121463D7: push edi */
    RECOMP_CALL(sub_12146176); /* 0x121463D8: call 0x12146176 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121463DD: mov esi, eax */
    /* test esi, esi */ /* 0x121463DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146447; /* 0x121463E1: jns 0x12146447 */
L_121463E3:
    eax = ebp + 0x14; /* 0x121463E3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x121463E6: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121463E7: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121463EA: push edi */
    RECOMP_CALL(sub_12142F88); /* 0x121463EB: call 0x12142f88 */
    RECOMP_FLAGS_IN();
    goto L_12146412; /* 0x121463F0: jmp 0x12146412 */
L_121463F2:
    eax = ebp + 0xC; /* 0x121463F2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x121463F5: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121463F6: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121463F9: push edi */
    RECOMP_CALL(sub_12146043); /* 0x121463FA: call 0x12146043 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121463FF: mov esi, eax */
    /* test esi, esi */ /* 0x12146401: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12146447; /* 0x12146403: jns 0x12146447 */
L_12146405:
    eax = ebp + 0x14; /* 0x12146405: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x12146408: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146409: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1214640C: push edi */
    RECOMP_CALL(sub_12142E63); /* 0x1214640D: call 0x12142e63 */
    RECOMP_FLAGS_IN();
L_12146412:
    esi = eax; /* 0x12146412: mov esi, eax */
    /* test esi, esi */ /* 0x12146414: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214644C; /* 0x12146416: js 0x1214644c */
L_12146418:
    edi = MEM32(ebp + 0x14); /* 0x12146418: mov edi, dword ptr [ebp + 0x14] */
    ecx = edi; /* 0x1214641B: mov ecx, edi */
    RECOMP_CALL(sub_12142BC5); /* 0x1214641D: call 0x12142bc5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12146422: mov esi, eax */
    /* test esi, esi */ /* 0x12146424: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214643F; /* 0x12146426: js 0x1214643f */
L_12146428:
    PUSH32(esp, edi); /* 0x12146428: push edi */
    RECOMP_CALL(sub_1214C6E1); /* 0x12146429: call 0x1214c6e1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214642E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146437; /* 0x12146430: je 0x12146437 */
L_12146432:
    esi = 0x88760390u; /* 0x12146432: mov esi, 0x88760390 */
L_12146437:
    /* test esi, esi */ /* 0x12146437: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214643F; /* 0x12146439: js 0x1214643f */
L_1214643B:
    MEM32(ebx) = edi; /* 0x1214643B: mov dword ptr [ebx], edi */
    goto L_1214644C; /* 0x1214643D: jmp 0x1214644c */
L_1214643F:
    eax = MEM32(edi); /* 0x1214643F: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x12146441: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12146442: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1214644C; /* 0x12146445: jmp 0x1214644c */
L_12146447:
    eax = MEM32(ebp + 0xC); /* 0x12146447: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebx) = eax; /* 0x1214644A: mov dword ptr [ebx], eax */
L_1214644C:
    PUSH32(esp, 0x121EB394u); /* 0x1214644C: push 0x121eb394 */
    RECOMP_ICALL(MEM32(0x120010B0)); /* 0x12146451: call dword ptr [0x120010b0] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12146457: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12146459: pop esi */
    goto L_12146461; /* 0x1214645A: jmp 0x12146461 */
L_1214645C:
    eax = 0x88760385u; /* 0x1214645C: mov eax, 0x88760385 */
L_12146461:
    edi = POP32_VAL(esp); /* 0x12146461: pop edi */
    ebx = POP32_VAL(esp); /* 0x12146462: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12146463: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12146464: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1214646C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214646Cu);

L_1214646C:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1214646C: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x1214646F: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x12146473: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146475: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214647B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214647Bu);

L_1214647B:
    edi = edi; /* 0x1214647B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214647D: push ebp */
    ebp = esp; /* 0x1214647E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12146480: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12146483: push esi */
    esi = ecx; /* 0x12146484: mov esi, ecx */
    PUSH32(esp, 0x120014BCu); /* 0x12146486: push 0x120014bc */
    PUSH32(esp, 0x00010000u); /* 0x1214648B: push 0x10000 */
    MEM32(esi) = eax; /* 0x12146490: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_12018970); /* 0x12146492: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x12146497: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1214649A: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1214649C: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1214649D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x1214649F: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x121464A0: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x121464A5: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x121464AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x121464AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121464AC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121464B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121464B4u);

L_121464B4:
    edi = edi; /* 0x121464B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121464B6: push ebp */
    ebp = esp; /* 0x121464B7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121464B9: push ecx */
    PUSH32(esp, ebx); /* 0x121464BA: push ebx */
    PUSH32(esp, esi); /* 0x121464BB: push esi */
    esi = ecx; /* 0x121464BC: mov esi, ecx */
    PUSH32(esp, edi); /* 0x121464BE: push edi */
    edi = MEM32(esi + 0x4); /* 0x121464BF: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x121464C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121464CB; /* 0x121464C4: je 0x121464cb */
L_121464C6:
    /* cmp MEM32(esi), 0 */ /* 0x121464C6: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121464F3; /* 0x121464C9: jne 0x121464f3 */
L_121464CB:
    eax = 0x80004005u; /* 0x121464CB: mov eax, 0x80004005 */
L_121464D0:
    edi = POP32_VAL(esp); /* 0x121464D0: pop edi */
    esi = POP32_VAL(esp); /* 0x121464D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x121464D2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121464D3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121464D4: ret  */
L_121464D5:
    PUSH32(esp, 0); /* 0x121464D5: push 0 */
    eax = ebp + (-0x4); /* 0x121464D7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121464DA: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121464DB: push dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x121464DE: push edi */
    PUSH32(esp, MEM32(esi)); /* 0x121464DF: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x121464E1: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121464E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121464CB; /* 0x121464E9: je 0x121464cb */
L_121464EB:
    eax = MEM32(ebp + (-0x4)); /* 0x121464EB: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x121464EE: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - eax; /* 0x121464F0: sub dword ptr [esi + 8], eax */
    _flag_k = FK_CMP;
L_121464F3:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x121464F3: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_121464D5; /* 0x121464F7: jg 0x121464d5 */
L_121464F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121464F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121464D0; /* 0x121464FB: jmp 0x121464d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12146502(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146502u);

L_12146502:
    edi = edi; /* 0x12146502: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146504: push ebp */
    ebp = esp; /* 0x12146505: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12146507: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1214650A: push ebx */
    PUSH32(esp, esi); /* 0x1214650B: push esi */
    esi = ecx; /* 0x1214650C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214650E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x12146510: mov dword ptr [eax], ecx */
    PUSH32(esp, edi); /* 0x12146512: push edi */
    /* cmp MEM32(esi), ecx */ /* 0x12146513: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146572; /* 0x12146515: je 0x12146572 */
L_12146517:
    /* cmp MEM32(esi + 0x4), ecx */ /* 0x12146517: cmp dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146572; /* 0x1214651A: je 0x12146572 */
L_1214651C:
    edi = MEM32(ebp + 0xC); /* 0x1214651C: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1214651F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214656E; /* 0x12146521: je 0x1214656e */
L_12146523:
    ecx = esi + 0x8; /* 0x12146523: lea ecx, [esi + 8] */
L_12146526:
    ebx = 0x00010000u; /* 0x12146526: mov ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ecx); /* 0x1214652B: sub ebx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    /* cmp edi, ebx */ /* 0x1214652D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12146533; /* 0x1214652F: jae 0x12146533 */
L_12146531:
    ebx = edi; /* 0x12146531: mov ebx, edi */
L_12146533:
    eax = MEM32(esi + 0x4); /* 0x12146533: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x12146536: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x12146538: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146539: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214653C: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214653D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x12146542: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ebx; /* 0x12146545: add dword ptr [ebp + 8], ebx */
    _flag_k = FK_ADD;
    ecx = esi + 0x8; /* 0x12146548: lea ecx, [esi + 8] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + ebx; /* 0x1214654B: add dword ptr [ecx], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ebx; /* 0x1214654D: add dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214654F: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x12146552: sub edi, ebx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx), 0x00010000u */ /* 0x12146554: cmp dword ptr [ecx], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214656A; /* 0x1214655A: jne 0x1214656a */
L_1214655C:
    ecx = esi; /* 0x1214655C: mov ecx, esi */
    RECOMP_CALL(sub_121464B4); /* 0x1214655E: call 0x121464b4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146563: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146577; /* 0x12146565: js 0x12146577 */
L_12146567:
    ecx = esi + 0x8; /* 0x12146567: lea ecx, [esi + 8] */
L_1214656A:
    /* test edi, edi */ /* 0x1214656A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146526; /* 0x1214656C: jne 0x12146526 */
L_1214656E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214656E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12146577; /* 0x12146570: jmp 0x12146577 */
L_12146572:
    eax = 0x80004005u; /* 0x12146572: mov eax, 0x80004005 */
L_12146577:
    edi = POP32_VAL(esp); /* 0x12146577: pop edi */
    esi = POP32_VAL(esp); /* 0x12146578: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146579: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214657A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214657B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12146583(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146583u);

L_12146583:
    edi = edi; /* 0x12146583: mov edi, edi */
    PUSH32(esp, esi); /* 0x12146585: push esi */
    esi = ecx; /* 0x12146586: mov esi, ecx */
    RECOMP_CALL(sub_121464B4); /* 0x12146588: call 0x121464b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1214658D: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF388); /* 0x12146590: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12146595: pop ecx */
    esi = POP32_VAL(esp); /* 0x12146596: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146597: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214659D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214659Du);

L_1214659D:
    edi = edi; /* 0x1214659D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214659F: push ebp */
    ebp = esp; /* 0x121465A0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x121465A2: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121465A5: push ebx */
    ebx = ecx; /* 0x121465A6: mov ebx, ecx */
    ecx = MEM32(ebx + 0x8); /* 0x121465A8: mov ecx, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x121465AB: push edi */
    edi = MEM32(edx); /* 0x121465AC: mov edi, dword ptr [edx] */
    MEM32(ebx + 0x10) = edi; /* 0x121465AE: mov dword ptr [ebx + 0x10], edi */
    /* test ecx, ecx */ /* 0x121465B1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121465C9; /* 0x121465B3: je 0x121465c9 */
L_121465B5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121465B5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121465B8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121465BB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x121465BE: push edx */
    RECOMP_CALL(sub_12147027); /* 0x121465BF: call 0x12147027 */
    RECOMP_FLAGS_IN();
    goto L_12146763; /* 0x121465C4: jmp 0x12146763 */
L_121465C9:
    eax = MEM32(ebx + 0x4); /* 0x121465C9: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x121465CC: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x121465CF: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121465D2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121465D3: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x121465D6: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx) */ /* 0x121465D8: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12146719; /* 0x121465DA: ja 0x12146719 */
L_121465E0:
    ecx = MEM32(ebx + 0x4); /* 0x121465E0: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x121465E3: mov ecx, dword ptr [ecx + 4] */
    /* cmp ecx, 8 */ /* 0x121465E6: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12146750; /* 0x121465E9: ja 0x12146750 */
L_121465EF:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x12146769)); goto _ljump; }
L_121465F6:
    PUSH32(esp, eax); /* 0x121465F6: push eax */
    eax = MEM32(ebp + 0x14); /* 0x121465F7: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x121465FA: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x121465FC: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12146601: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x12146603: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146604: pop ecx */
    /* test edx, edx */ /* 0x12146605: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146719; /* 0x12146607: je 0x12146719 */
L_1214660D:
    eax = MEM32(ebp + 0x14); /* 0x1214660D: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edx; /* 0x12146610: mov dword ptr [eax], edx */
    ecx = MEM32(esi); /* 0x12146612: mov ecx, dword ptr [esi] */
    eax = MEM32(edi); /* 0x12146614: mov eax, dword ptr [edi] */
    MEM32(edx + ecx) = eax; /* 0x12146616: mov dword ptr [edx + ecx], eax */
L_12146619:
    ecx = MEM32(ebp + 0x8); /* 0x12146619: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0x4; /* 0x1214661C: lea eax, [edi + 4] */
    MEM32(ecx) = eax; /* 0x1214661F: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x12146621: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12146624: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x12146627: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
L_12146629:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146629: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12146762; /* 0x1214662B: jmp 0x12146762 */
L_12146630:
    PUSH32(esp, eax); /* 0x12146630: push eax */
    eax = MEM32(ebp + 0x14); /* 0x12146631: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x12146634: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x12146636: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1214663B: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1214663D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214663E: pop ecx */
    /* test edx, edx */ /* 0x1214663F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146719; /* 0x12146641: je 0x12146719 */
L_12146647:
    eax = MEM32(ebp + 0x14); /* 0x12146647: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edx; /* 0x1214664A: mov dword ptr [eax], edx */
    ecx = (uint32_t)MEM16(edi); /* 0x1214664C: movzx ecx, word ptr [edi] */
    eax = MEM32(esi); /* 0x1214664F: mov eax, dword ptr [esi] */
    MEM16(edx + eax) = (uint16_t)(LO16(ecx)); /* 0x12146651: mov word ptr [edx + eax], cx */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x12146655: mov word ptr [edi], cx */
    RECOMP_BACKEDGE();
    goto L_12146619; /* 0x12146658: jmp 0x12146619 */
L_1214665A:
    PUSH32(esp, eax); /* 0x1214665A: push eax */
    eax = MEM32(ebp + 0x14); /* 0x1214665B: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x1214665E: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x12146660: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12146665: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x12146667: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146668: pop ecx */
    /* test edx, edx */ /* 0x12146669: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146719; /* 0x1214666B: je 0x12146719 */
L_12146671:
    eax = MEM32(ebp + 0x14); /* 0x12146671: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edx; /* 0x12146674: mov dword ptr [eax], edx */
    SET_LO8(ecx, MEM8(edi)); /* 0x12146676: mov cl, byte ptr [edi] */
    eax = MEM32(esi); /* 0x12146678: mov eax, dword ptr [esi] */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x1214667A: mov byte ptr [edx + eax], cl */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1214667D: mov byte ptr [edi], cl */
    RECOMP_BACKEDGE();
    goto L_12146619; /* 0x1214667F: jmp 0x12146619 */
L_12146681:
    PUSH32(esp, eax); /* 0x12146681: push eax */
    eax = MEM32(ebp + 0x14); /* 0x12146682: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x12146685: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x12146687: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214668C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214668D: pop ecx */
    ecx = eax; /* 0x1214668E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12146690: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146719; /* 0x12146692: je 0x12146719 */
L_12146698:
    eax = MEM32(ebp + 0x14); /* 0x12146698: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x1214669B: mov dword ptr [eax], ecx */
    fp_push(*(float*)&MEM32(edi)); /* 0x1214669D: fld dword ptr [edi] */
    eax = MEM32(esi); /* 0x1214669F: mov eax, dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax) = _v; } /* 0x121466A1: fstp dword ptr [ecx + eax] */
    RECOMP_BACKEDGE();
    goto L_12146619; /* 0x121466A4: jmp 0x12146619 */
L_121466A9:
    PUSH32(esp, eax); /* 0x121466A9: push eax */
    eax = MEM32(ebp + 0x14); /* 0x121466AA: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x121466AD: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x121466AF: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121466B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121466B5: pop ecx */
    ecx = eax; /* 0x121466B6: mov ecx, eax */
    /* test ecx, ecx */ /* 0x121466B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146719; /* 0x121466BA: je 0x12146719 */
L_121466BC:
    eax = MEM32(ebp + 0x14); /* 0x121466BC: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x121466BF: mov dword ptr [eax], ecx */
    fp_push(*(float*)&MEM32(edi)); /* 0x121466C1: fld dword ptr [edi] */
    eax = MEM32(esi); /* 0x121466C3: mov eax, dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + eax) = _v; } /* 0x121466C5: fstp qword ptr [ecx + eax] */
    ecx = MEM32(ebp + 0x8); /* 0x121466C8: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0x4; /* 0x121466CB: lea eax, [edi + 4] */
    MEM32(ecx) = eax; /* 0x121466CE: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x121466D0: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x121466D3: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x121466D6: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x121466D8: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x121466DB: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_12146629; /* 0x121466DE: jmp 0x12146629 */
L_121466E3:
    ebx = MEM32(edi); /* 0x121466E3: mov ebx, dword ptr [edi] */
    /* test ebx, ebx */ /* 0x121466E5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121466F0; /* 0x121466E7: jne 0x121466f0 */
L_121466E9:
    eax = 0x80004005u; /* 0x121466E9: mov eax, 0x80004005 */
    goto L_12146762; /* 0x121466EE: jmp 0x12146762 */
L_121466F0:
    ecx = ebx; /* 0x121466F0: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x121466F2: lea edx, [ecx + 1] */
L_121466F5:
    SET_LO8(eax, MEM8(ecx)); /* 0x121466F5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121466F7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121466F8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121466F5; /* 0x121466FA: jne 0x121466f5 */
L_121466FC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121466FC: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x121466FE: lea eax, [ecx + 1] */
    MEM32(ebp + 0xC) = eax; /* 0x12146701: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x12146704: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12146706: push eax */
    eax = MEM32(ebp + 0x14); /* 0x12146707: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x1214670A: push dword ptr [eax] */
    RECOMP_CALL(sub_121BF5B6); /* 0x1214670C: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12146711: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146712: pop ecx */
    ecx = eax; /* 0x12146713: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12146715: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146720; /* 0x12146717: jne 0x12146720 */
L_12146719:
    eax = 0x8007000Eu; /* 0x12146719: mov eax, 0x8007000e */
    goto L_12146762; /* 0x1214671E: jmp 0x12146762 */
L_12146720:
    eax = MEM32(ebp + 0x14); /* 0x12146720: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146723: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x12146726: mov dword ptr [eax], ecx */
    eax = MEM32(esi); /* 0x12146728: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1214672A: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1214672C: push ebx */
    PUSH32(esp, eax); /* 0x1214672D: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214672E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x12146733: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0x4; /* 0x12146736: lea eax, [edi + 4] */
    MEM32(ecx) = eax; /* 0x12146739: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214673B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x1214673E: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x12146740: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x12146743: add eax, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12146746: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x12146749: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_12146629; /* 0x1214674B: jmp 0x12146629 */
L_12146750:
    ecx = edi + 0x4; /* 0x12146750: lea ecx, [edi + 4] */
    MEM32(edx) = ecx; /* 0x12146753: mov dword ptr [edx], ecx */
    ecx = MEM32(ebx + 0x4); /* 0x12146755: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x12146758: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x1214675B: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    eax = 0x88760388u; /* 0x1214675D: mov eax, 0x88760388 */
L_12146762:
    esi = POP32_VAL(esp); /* 0x12146762: pop esi */
L_12146763:
    edi = POP32_VAL(esp); /* 0x12146763: pop edi */
    ebx = POP32_VAL(esp); /* 0x12146764: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12146765: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12146766: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x121465F6u: goto L_121465F6;
      case 0x12146630u: goto L_12146630;
      case 0x1214665Au: goto L_1214665A;
      case 0x12146681u: goto L_12146681;
      case 0x121466A9u: goto L_121466A9;
      case 0x121466E3u: goto L_121466E3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12146792(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146792u);

L_12146792:
    edi = edi; /* 0x12146792: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146794: push ebp */
    ebp = esp; /* 0x12146795: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x12146797: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1214679A: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x10) = eax; /* 0x1214679C: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(ecx + 0x8); /* 0x1214679F: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x121467A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121467B6; /* 0x121467A4: je 0x121467b6 */
L_121467A6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121467A6: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x121467A9: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121467AB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x121467AE: push edx */
    RECOMP_CALL(sub_12146FD2); /* 0x121467AF: call 0x12146fd2 */
    RECOMP_FLAGS_IN();
    goto L_121467D3; /* 0x121467B4: jmp 0x121467d3 */
L_121467B6:
    eax = MEM32(ecx + 0x4); /* 0x121467B6: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x8); /* 0x121467B9: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(ebp + 0xC); /* 0x121467BC: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x121467BF: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121467C1: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x121467C3: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121467CF; /* 0x121467C6: jbe 0x121467cf */
L_121467C8:
    eax = 0x8007000Eu; /* 0x121467C8: mov eax, 0x8007000e */
    goto L_121467D3; /* 0x121467CD: jmp 0x121467d3 */
L_121467CF:
    MEM32(edx) = eax; /* 0x121467CF: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121467D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121467D3:
    ebp = POP32_VAL(esp); /* 0x121467D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121467D4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121467DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121467DCu);

L_121467DC:
    edi = edi; /* 0x121467DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121467DE: push ebp */
    ebp = esp; /* 0x121467DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x121467E1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121467E4: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121467E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121467EB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x121467EE: push esi */
    PUSH32(esp, 0xAu); /* 0x121467EF: push 0xa */
    eax = ebp + (-0x18); /* 0x121467F1: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x121467F4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121467F5: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x121467F8: mov esi, ecx */
    RECOMP_CALL(sub_121BF98E); /* 0x121467FA: call 0x121bf98e */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x18); /* 0x121467FF: lea ecx, [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12146802: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ecx + 0x1; /* 0x12146805: lea edx, [ecx + 1] */
L_12146808:
    SET_LO8(eax, MEM8(ecx)); /* 0x12146808: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214680A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214680B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146808; /* 0x1214680D: jne 0x12146808 */
L_1214680F:
    eax = ebp + (-0x1C); /* 0x1214680F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x12146812: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12146813: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x12146815: push ecx */
    eax = ebp + (-0x18); /* 0x12146816: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12146819: push eax */
    ecx = esi + 0x30; /* 0x1214681A: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x1214681D: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12146822: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x12146825: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12146828: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214682A: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x1214682B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146830: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12146831: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12146839(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146839u);

L_12146839:
    edi = edi; /* 0x12146839: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214683B: push ebp */
    ebp = esp; /* 0x1214683C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1214683E: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12146841: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12146846: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12146848: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1214684B: fld dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214684E: push esi */
    eax = ebp + (-0x24); /* 0x1214684F: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x12146852: push eax */
    PUSH32(esp, ecx); /* 0x12146853: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12146854: fstp dword ptr [esp] */
    esi = ecx; /* 0x12146857: mov esi, ecx */
    RECOMP_CALL(sub_1214C748); /* 0x12146859: call 0x1214c748 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1214685E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x12146861: push ecx */
    PUSH32(esp, eax); /* 0x12146862: push eax */
    eax = ebp + (-0x24); /* 0x12146863: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x12146866: push eax */
    ecx = esi + 0x30; /* 0x12146867: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x1214686A: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1214686F: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x12146872: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12146875: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12146877: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12146878: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214687D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214687E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12146886(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146886u);

L_12146886:
    edi = edi; /* 0x12146886: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146888: push ebp */
    ebp = esp; /* 0x12146889: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214688B: push esi */
    esi = ecx; /* 0x1214688C: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1214688E: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(esi), eax */ /* 0x12146891: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121468B8; /* 0x12146893: jne 0x121468b8 */
L_12146895:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x12146895: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214689D; /* 0x12146898: ja 0x1214689d */
L_1214689A:
    eax = MEM32(esi + 0x8); /* 0x1214689A: mov eax, dword ptr [esi + 8] */
L_1214689D:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x1214689D: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x121468A0: mov eax, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x121468A3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x121468A3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x121468A6: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x121468A7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF5B6); /* 0x121468AA: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121468AF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121468B0: pop ecx */
    /* test eax, eax */ /* 0x121468B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121468C9; /* 0x121468B3: je 0x121468c9 */
L_121468B5:
    MEM32(esi + 0xC) = eax; /* 0x121468B5: mov dword ptr [esi + 0xc], eax */
L_121468B8:
    eax = MEM32(ebp + 0x8); /* 0x121468B8: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x121468BB: fld dword ptr [eax] */
    edx = MEM32(esi); /* 0x121468BD: mov edx, dword ptr [esi] */
    ecx = MEM32(esi + 0xC); /* 0x121468BF: mov ecx, dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx * 4) = _v; } /* 0x121468C2: fstp dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x121468C5: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x121468C7: mov eax, dword ptr [esi] */
L_121468C9:
    esi = POP32_VAL(esp); /* 0x121468C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x121468CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121468CB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121468D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121468D3u);

L_121468D3:
    edi = edi; /* 0x121468D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121468D5: push ebp */
    ebp = esp; /* 0x121468D6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121468D8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121468DB: push ebx */
    PUSH32(esp, esi); /* 0x121468DC: push esi */
    PUSH32(esp, edi); /* 0x121468DD: push edi */
    esi = 0x12018324u; /* 0x121468DE: mov esi, 0x12018324 */
    edi = ebp + (-0x10); /* 0x121468E3: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121468E6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121468E7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121468E8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121468E9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x121468EA: mov esi, dword ptr [ebp + 8] */
    ebx = 0x120111DCu; /* 0x121468ED: mov ebx, 0x120111dc */
    /* test esi, esi */ /* 0x121468F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146903; /* 0x121468F4: je 0x12146903 */
L_121468F6:
    ebx = MEM32(esi + 0x4); /* 0x121468F6: mov ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x121468F9: add esi, 8 */
    _flag_k = FK_ADD;
    edi = ebp + (-0x10); /* 0x121468FC: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121468FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146900: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146901: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146902: movsd dword ptr es:[edi], dword ptr [esi] */
L_12146903:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146903: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x12146905: mov dword ptr [ebp + 8], esi */
    /* test ebx, ebx */ /* 0x12146908: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146938; /* 0x1214690A: je 0x12146938 */
L_1214690C:
    ecx = ebx; /* 0x1214690C: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x1214690E: lea edx, [ecx + 1] */
L_12146911:
    SET_LO8(eax, MEM8(ecx)); /* 0x12146911: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12146913: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12146914: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146911; /* 0x12146916: jne 0x12146911 */
L_12146918:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12146918: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x1214691A: lea edi, [ecx + 1] */
    PUSH32(esp, edi); /* 0x1214691D: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x1214691E: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12146923: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12146925: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x12146926: mov dword ptr [ebp + 8], eax */
    /* test esi, esi */ /* 0x12146929: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146970; /* 0x1214692B: je 0x12146970 */
L_1214692D:
    PUSH32(esp, edi); /* 0x1214692D: push edi */
    PUSH32(esp, ebx); /* 0x1214692E: push ebx */
    PUSH32(esp, esi); /* 0x1214692F: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x12146930: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12146935: add esp, 0xc */
    _flag_k = FK_ADD;
L_12146938:
    PUSH32(esp, 0x120014BCu); /* 0x12146938: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214693D: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214693F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12146944: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12146946: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146947: pop ecx */
    /* test ebx, ebx */ /* 0x12146948: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214695A; /* 0x1214694A: je 0x1214695a */
L_1214694C:
    MEM32(ebx) = esi; /* 0x1214694C: mov dword ptr [ebx], esi */
    edi = ebx + 0x4; /* 0x1214694E: lea edi, [ebx + 4] */
    esi = ebp + (-0x10); /* 0x12146951: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146954: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146955: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146956: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146957: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1214695C; /* 0x12146958: jmp 0x1214695c */
L_1214695A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214695A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214695C:
    /* test ebx, ebx */ /* 0x1214695C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214696E; /* 0x1214695E: jne 0x1214696e */
L_12146960:
    eax = MEM32(ebp + 0x8); /* 0x12146960: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x12146963: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214696E; /* 0x12146965: je 0x1214696e */
L_12146967:
    PUSH32(esp, eax); /* 0x12146967: push eax */
    RECOMP_CALL(sub_121BF586); /* 0x12146968: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214696D: pop ecx */
L_1214696E:
    eax = ebx; /* 0x1214696E: mov eax, ebx */
L_12146970:
    edi = POP32_VAL(esp); /* 0x12146970: pop edi */
    esi = POP32_VAL(esp); /* 0x12146971: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146972: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146973: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12146974: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214697C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214697Cu);

L_1214697C:
    edi = edi; /* 0x1214697C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214697E: push ebp */
    ebp = esp; /* 0x1214697F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12146981: push esi */
    PUSH32(esp, edi); /* 0x12146982: push edi */
    edi = ecx; /* 0x12146983: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146985: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x12146987: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121469B4; /* 0x12146989: jbe 0x121469b4 */
L_1214698B:
    eax = MEM32(edi + 0xC); /* 0x1214698B: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x1214698E: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146991: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146993: push dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146996: push -1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12146998: push dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214699B: push 1 */
    PUSH32(esp, 0x409u); /* 0x1214699D: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x121469A2: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x121469A8: push 2 */
    ecx = POP32_VAL(esp); /* 0x121469AA: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121469AB: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121469BC; /* 0x121469AD: je 0x121469bc */
L_121469AF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121469AF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x121469B0: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214698B; /* 0x121469B2: jb 0x1214698b */
L_121469B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121469B6:
    edi = POP32_VAL(esp); /* 0x121469B6: pop edi */
    esi = POP32_VAL(esp); /* 0x121469B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x121469B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121469B9: ret 8 */
L_121469BC:
    edx = MEM32(ebp + 0xC); /* 0x121469BC: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x121469BF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121469CB; /* 0x121469C1: je 0x121469cb */
L_121469C3:
    ecx = MEM32(edi + 0xC); /* 0x121469C3: mov ecx, dword ptr [edi + 0xc] */
    ecx = MEM32(ecx + esi * 4); /* 0x121469C6: mov ecx, dword ptr [ecx + esi*4] */
    MEM32(edx) = ecx; /* 0x121469C9: mov dword ptr [edx], ecx */
L_121469CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121469CD: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_121469B6; /* 0x121469CE: jmp 0x121469b6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121469D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121469D5u);

L_121469D5:
    edi = edi; /* 0x121469D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121469D7: push ebp */
    ebp = esp; /* 0x121469D8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121469DA: push ecx */
    PUSH32(esp, ecx); /* 0x121469DB: push ecx */
    edx = MEM32(ecx); /* 0x121469DC: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x121469DE: push ebx */
    PUSH32(esp, esi); /* 0x121469DF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121469E2: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x121469E3: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x121469E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A0E; /* 0x121469E8: je 0x12146a0e */
L_121469EA:
    ecx = MEM32(ecx + 0xC); /* 0x121469EA: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x121469ED: mov dword ptr [ebp - 8], ecx */
    ebx = ecx; /* 0x121469F0: mov ebx, ecx */
L_121469F2:
    esi = MEM32(ebx); /* 0x121469F2: mov esi, dword ptr [ebx] */
    edi = MEM32(ebp + 0x8); /* 0x121469F4: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x121469F7: push 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x121469F9: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121469FC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x121469FE: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x12146A01: pop ecx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12146A02: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12146A17; /* 0x12146A04: je 0x12146a17 */
L_12146A06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146A06: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12146A07: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x12146A0A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121469F2; /* 0x12146A0C: jb 0x121469f2 */
L_12146A0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12146A10:
    edi = POP32_VAL(esp); /* 0x12146A10: pop edi */
    esi = POP32_VAL(esp); /* 0x12146A11: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146A12: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146A13: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12146A14: ret 8 */
L_12146A17:
    ecx = MEM32(ebp + 0xC); /* 0x12146A17: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x12146A1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A26; /* 0x12146A1C: je 0x12146a26 */
L_12146A1E:
    edx = MEM32(ebp + (-0x8)); /* 0x12146A1E: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(edx + eax * 4); /* 0x12146A21: mov eax, dword ptr [edx + eax*4] */
    MEM32(ecx) = eax; /* 0x12146A24: mov dword ptr [ecx], eax */
L_12146A26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146A28: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_12146A10; /* 0x12146A29: jmp 0x12146a10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12146A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146A30u);

L_12146A30:
    edi = edi; /* 0x12146A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146A32: push ebp */
    ebp = esp; /* 0x12146A33: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12146A35: push ebx */
    PUSH32(esp, esi); /* 0x12146A36: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12146A37: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12146A3A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146A3B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x12146A3D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A71; /* 0x12146A3F: je 0x12146a71 */
L_12146A41:
    ecx = esi; /* 0x12146A41: mov ecx, esi */
    edx = ecx + 0x1; /* 0x12146A43: lea edx, [ecx + 1] */
L_12146A46:
    SET_LO8(eax, MEM8(ecx)); /* 0x12146A46: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12146A48: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12146A49: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146A46; /* 0x12146A4B: jne 0x12146a46 */
L_12146A4D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12146A4D: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x12146A4F: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x12146A52: push ebx */
    RECOMP_CALL(sub_121BF524); /* 0x12146A53: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12146A58: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x12146A5A: pop ecx */
    /* test edi, edi */ /* 0x12146A5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146A66; /* 0x12146A5D: jne 0x12146a66 */
L_12146A5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12146B25; /* 0x12146A61: jmp 0x12146b25 */
L_12146A66:
    PUSH32(esp, ebx); /* 0x12146A66: push ebx */
    PUSH32(esp, esi); /* 0x12146A67: push esi */
    PUSH32(esp, edi); /* 0x12146A68: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x12146A69: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12146A6E: add esp, 0xc */
    _flag_k = FK_ADD;
L_12146A71:
    ebx = MEM32(ebp + 0x18); /* 0x12146A71: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x12146A74: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A96; /* 0x12146A76: je 0x12146a96 */
L_12146A78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), eax */ /* 0x12146A7A: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12146A96; /* 0x12146A7C: jle 0x12146a96 */
L_12146A7E:
    ecx = MEM32(ebx + 0xC); /* 0x12146A7E: mov ecx, dword ptr [ebx + 0xc] */
L_12146A81:
    edx = MEM32(ecx); /* 0x12146A81: mov edx, dword ptr [ecx] */
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x12146A83: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146A8E; /* 0x12146A87: jne 0x12146a8e */
L_12146A89:
    /* cmp MEM32(edx), 1 */ /* 0x12146A89: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146A5F; /* 0x12146A8C: jb 0x12146a5f */
L_12146A8E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146A8E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12146A8F: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx) */ /* 0x12146A92: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12146A81; /* 0x12146A94: jl 0x12146a81 */
L_12146A96:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146A96: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214C969); /* 0x12146A99: call 0x1214c969 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x12146A9E: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x12146AA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146AC7; /* 0x12146AA3: je 0x12146ac7 */
L_12146AA5:
    PUSH32(esp, 0x120014BCu); /* 0x12146AA5: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x12146AAA: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x12146AAC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12146AB1: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12146AB3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146AB4: pop ecx */
    /* test esi, esi */ /* 0x12146AB5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B12; /* 0x12146AB7: je 0x12146b12 */
L_12146AB9:
    eax = MEM32(ebp + 0xC); /* 0x12146AB9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x12146ABC: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x12146AC0: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = eax; /* 0x12146AC2: mov dword ptr [esi + 4], eax */
    goto L_12146B0D; /* 0x12146AC5: jmp 0x12146b0d */
L_12146AC7:
    ecx = MEM32(ebp + 0x10); /* 0x12146AC7: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x12146ACA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12146ACD: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146ACE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214697C); /* 0x12146AD1: call 0x1214697c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146AD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146AED; /* 0x12146AD8: jne 0x12146aed */
L_12146ADA:
    ecx = MEM32(ebp + 0x14); /* 0x12146ADA: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebp + 0xC; /* 0x12146ADD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12146AE0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146AE1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214697C); /* 0x12146AE4: call 0x1214697c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146AE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B12; /* 0x12146AEB: je 0x12146b12 */
L_12146AED:
    PUSH32(esp, 0x120014BCu); /* 0x12146AED: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x12146AF2: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x12146AF4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12146AF9: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12146AFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146AFC: pop ecx */
    /* test esi, esi */ /* 0x12146AFD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B12; /* 0x12146AFF: je 0x12146b12 */
L_12146B01:
    eax = MEM32(ebp + 0xC); /* 0x12146B01: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi) = edi; /* 0x12146B04: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x12146B06: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x12146B0A: mov dword ptr [esi + 8], eax */
L_12146B0D:
    MEM32(esi + 0xC) = ebx; /* 0x12146B0D: mov dword ptr [esi + 0xc], ebx */
    goto L_12146B14; /* 0x12146B10: jmp 0x12146b14 */
L_12146B12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146B12: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12146B14:
    /* test esi, esi */ /* 0x12146B14: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146B23; /* 0x12146B16: jne 0x12146b23 */
L_12146B18:
    /* test edi, edi */ /* 0x12146B18: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B23; /* 0x12146B1A: je 0x12146b23 */
L_12146B1C:
    PUSH32(esp, edi); /* 0x12146B1C: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x12146B1D: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12146B22: pop ecx */
L_12146B23:
    eax = esi; /* 0x12146B23: mov eax, esi */
L_12146B25:
    edi = POP32_VAL(esp); /* 0x12146B25: pop edi */
    esi = POP32_VAL(esp); /* 0x12146B26: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146B27: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12146B28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12146B29: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12146B31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146B31u);

L_12146B31:
    eax = MEM32(ecx + 0x4); /* 0x12146B31: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x12146B34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B3B; /* 0x12146B36: je 0x12146b3b */
L_12146B38:
    eax = MEM32(eax); /* 0x12146B38: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B3A: ret  */
L_12146B3B:
    eax = MEM32(ecx + 0x8); /* 0x12146B3B: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x12146B3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B46; /* 0x12146B40: je 0x12146b46 */
L_12146B42:
    eax = MEM32(eax + 0x4); /* 0x12146B42: mov eax, dword ptr [eax + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B45: ret  */
L_12146B46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146B46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B48: ret  */
    RECOMP_REGS_OUT();
}

void sub_12146B4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146B4Eu);

L_12146B4E:
    eax = MEM32(ecx + 0x4); /* 0x12146B4E: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x12146B51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B68; /* 0x12146B53: je 0x12146b68 */
L_12146B55:
    /* cmp MEM32(eax + 0x4), 8 */ /* 0x12146B55: cmp dword ptr [eax + 4], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146B64; /* 0x12146B59: je 0x12146b64 */
L_12146B5B:
    /* cmp MEM32(eax + 0x8), 4 */ /* 0x12146B5B: cmp dword ptr [eax + 8], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146B64; /* 0x12146B5F: jne 0x12146b64 */
L_12146B61:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146B61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B63: ret  */
L_12146B64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146B64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146B66: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B67: ret  */
L_12146B68:
    eax = MEM32(ecx + 0x8); /* 0x12146B68: mov eax, dword ptr [ecx + 8] */
    eax = MEM32(eax + 0x28); /* 0x12146B6B: mov eax, dword ptr [eax + 0x28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_12146B74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146B74u);

L_12146B74:
    eax = MEM32(ecx + 0xC); /* 0x12146B74: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12146B77: push esi */
    /* test eax, eax */ /* 0x12146B78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B97; /* 0x12146B7A: je 0x12146b97 */
L_12146B7C:
    esi = MEM32(eax); /* 0x12146B7C: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12146B7E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x12146B80: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146B97; /* 0x12146B82: je 0x12146b97 */
L_12146B84:
    edx = MEM32(eax + 0xC); /* 0x12146B84: mov edx, dword ptr [eax + 0xc] */
L_12146B87:
    eax = MEM32(edx); /* 0x12146B87: mov eax, dword ptr [edx] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x12146B89: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146B9C; /* 0x12146B8D: jne 0x12146b9c */
L_12146B8F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12146B8F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12146B90: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x12146B93: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146B87; /* 0x12146B95: jb 0x12146b87 */
L_12146B97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146B97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146B99: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x12146B9A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B9B: ret  */
L_12146B9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146B9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12146B9E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146B9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_12146BA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146BA5u);

L_12146BA5:
    edi = edi; /* 0x12146BA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146BA7: push ebp */
    ebp = esp; /* 0x12146BA8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12146BAA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12146BAD: push ebx */
    ebx = ecx; /* 0x12146BAE: mov ebx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12146BB0: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12146BB3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12146BB4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12146BB7: push edi */
    MEM32(ebx) = 0x120111E4u; /* 0x12146BB8: mov dword ptr [ebx], 0x120111e4 */
    MEM32(ebx + 0x4) = eax; /* 0x12146BBE: mov dword ptr [ebx + 4], eax */
    edi = ebx + 0x8; /* 0x12146BC1: lea edi, [ebx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146BC4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146BC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146BC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12146BC7: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12146BC8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12146BCA: inc edx */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = edx; /* 0x12146BCB: mov dword ptr [ebx + 0x18], edx */
    eax = MEM32(ecx); /* 0x12146BCE: mov eax, dword ptr [ecx] */
    MEM32(ebx + 0x1C) = eax; /* 0x12146BD0: mov dword ptr [ebx + 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x12146BD3: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x20) = eax; /* 0x12146BD6: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ecx + 0x8); /* 0x12146BD9: mov eax, dword ptr [ecx + 8] */
    MEM32(ebp + 0x8) = edx; /* 0x12146BDC: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146BDF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x2C) = edx; /* 0x12146BE1: mov dword ptr [ebx + 0x2c], edx */
    edx = MEM32(ebx + 0x1C); /* 0x12146BE4: mov edx, dword ptr [ebx + 0x1c] */
    MEM32(ebx + 0x24) = eax; /* 0x12146BE7: mov dword ptr [ebx + 0x24], eax */
    MEM32(ebx + 0x28) = esi; /* 0x12146BEA: mov dword ptr [ebx + 0x28], esi */
    MEM32(ebx + 0x30) = esi; /* 0x12146BED: mov dword ptr [ebx + 0x30], esi */
    /* test edx, edx */ /* 0x12146BF0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146C2A; /* 0x12146BF2: je 0x12146c2a */
L_12146BF4:
    /* cmp MEM32(edx), esi */ /* 0x12146BF4: cmp dword ptr [edx], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12146C2A; /* 0x12146BF6: jbe 0x12146c2a */
L_12146BF8:
    edi = esi; /* 0x12146BF8: mov edi, esi */
L_12146BFA:
    ecx = MEM32(edx + 0xC); /* 0x12146BFA: mov ecx, dword ptr [edx + 0xc] */
    ecx = MEM32(ecx + esi * 4); /* 0x12146BFD: mov ecx, dword ptr [ecx + esi*4] */
    RECOMP_CALL(sub_12146B4E); /* 0x12146C00: call 0x12146b4e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x12146C05: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x28) = edi; /* 0x12146C07: mov dword ptr [ebx + 0x28], edi */
    ecx = MEM32(edx + 0xC); /* 0x12146C0A: mov ecx, dword ptr [edx + 0xc] */
    ecx = MEM32(ecx + esi * 4); /* 0x12146C0D: mov ecx, dword ptr [ecx + esi*4] */
    RECOMP_CALL(sub_12146B74); /* 0x12146C10: call 0x12146b74 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x12146C15: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x12146C18: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x2C) = ecx; /* 0x12146C1A: mov dword ptr [ebx + 0x2c], ecx */
    eax = MEM32(ebx + 0x1C); /* 0x12146C1D: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12146C20: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x12146C21: mov dword ptr [ebp + 8], ecx */
    edx = eax; /* 0x12146C24: mov edx, eax */
    /* cmp esi, MEM32(eax) */ /* 0x12146C26: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146BFA; /* 0x12146C28: jb 0x12146bfa */
L_12146C2A:
    edi = POP32_VAL(esp); /* 0x12146C2A: pop edi */
    esi = POP32_VAL(esp); /* 0x12146C2B: pop esi */
    eax = ebx; /* 0x12146C2C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12146C2E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12146C2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12146C30: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12146C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146C38u);

L_12146C38:
    edi = edi; /* 0x12146C38: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146C3A: push ebp */
    ebp = esp; /* 0x12146C3B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12146C3D: push ebx */
    PUSH32(esp, esi); /* 0x12146C3E: push esi */
    ebx = ecx; /* 0x12146C3F: mov ebx, ecx */
    eax = MEM32(ebx + 0x1C); /* 0x12146C41: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x12146C44: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146C45: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edi */ /* 0x12146C47: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12146C7B; /* 0x12146C49: jbe 0x12146c7b */
L_12146C4B:
    eax = MEM32(eax + 0xC); /* 0x12146C4B: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + edi * 4); /* 0x12146C4E: mov esi, dword ptr [eax + edi*4] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x12146C51: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146C7B; /* 0x12146C54: je 0x12146c7b */
L_12146C56:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146C56: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146C58: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146C5B: push -1 */
    PUSH32(esp, MEM32(esi)); /* 0x12146C5D: push dword ptr [esi] */
    PUSH32(esp, 1); /* 0x12146C5F: push 1 */
    PUSH32(esp, 0x409u); /* 0x12146C61: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x12146C66: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x12146C6C: push 2 */
    ecx = POP32_VAL(esp); /* 0x12146C6E: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12146C6F: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12146C87; /* 0x12146C71: je 0x12146c87 */
L_12146C73:
    eax = MEM32(ebx + 0x1C); /* 0x12146C73: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12146C76: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x12146C77: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146C4B; /* 0x12146C79: jb 0x12146c4b */
L_12146C7B:
    eax = 0x88760392u; /* 0x12146C7B: mov eax, 0x88760392 */
L_12146C80:
    edi = POP32_VAL(esp); /* 0x12146C80: pop edi */
    esi = POP32_VAL(esp); /* 0x12146C81: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146C82: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12146C83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12146C84: ret 0xc */
L_12146C87:
    eax = MEM32(esi + 0x4); /* 0x12146C87: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x12146C8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146C7B; /* 0x12146C8C: je 0x12146c7b */
L_12146C8E:
    eax = MEM32(eax + 0x4); /* 0x12146C8E: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x12146C91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146CBD; /* 0x12146C93: je 0x12146cbd */
L_12146C95:
    /* cmp eax, 1 */ /* 0x12146C95: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146CAE; /* 0x12146C98: je 0x12146cae */
L_12146C9A:
    /* cmp eax, 3 */ /* 0x12146C9A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12146C7B; /* 0x12146C9D: jle 0x12146c7b */
L_12146C9F:
    /* cmp eax, 5 */ /* 0x12146C9F: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12146CB5; /* 0x12146CA2: jle 0x12146cb5 */
L_12146CA4:
    /* cmp eax, 6 */ /* 0x12146CA4: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146CBD; /* 0x12146CA7: je 0x12146cbd */
L_12146CA9:
    /* cmp eax, 7 */ /* 0x12146CA9: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146C7B; /* 0x12146CAC: jne 0x12146c7b */
L_12146CAE:
    eax = MEM32(esi + 0x10); /* 0x12146CAE: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax); /* 0x12146CB1: mov ecx, dword ptr [eax] */
    goto L_12146CC3; /* 0x12146CB3: jmp 0x12146cc3 */
L_12146CB5:
    eax = MEM32(esi + 0x10); /* 0x12146CB5: mov eax, dword ptr [esi + 0x10] */
    ecx = (uint32_t)MEM8(eax); /* 0x12146CB8: movzx ecx, byte ptr [eax] */
    goto L_12146CC3; /* 0x12146CBB: jmp 0x12146cc3 */
L_12146CBD:
    eax = MEM32(esi + 0x10); /* 0x12146CBD: mov eax, dword ptr [esi + 0x10] */
    ecx = (uint32_t)MEM16(eax); /* 0x12146CC0: movzx ecx, word ptr [eax] */
L_12146CC3:
    eax = MEM32(ebp + 0x10); /* 0x12146CC3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x12146CC6: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146CC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_12146C80; /* 0x12146CCA: jmp 0x12146c80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12146CD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146CD1u);

L_12146CD1:
    edi = edi; /* 0x12146CD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146CD3: push ebp */
    ebp = esp; /* 0x12146CD4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12146CD6: push ecx */
    PUSH32(esp, ebx); /* 0x12146CD7: push ebx */
    PUSH32(esp, esi); /* 0x12146CD8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12146CD9: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x12146CDC: mov ebx, ecx */
    /* test esi, esi */ /* 0x12146CDE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146D17; /* 0x12146CE0: je 0x12146d17 */
L_12146CE2:
    PUSH32(esp, edi); /* 0x12146CE2: push edi */
    eax = ebp + (-0x4); /* 0x12146CE3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146CE6: push eax */
    PUSH32(esp, 2); /* 0x12146CE7: push 2 */
    eax = ebp + 0xC; /* 0x12146CE9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12146CEC: push eax */
    ecx = ebx + 0x30; /* 0x12146CED: lea ecx, [ebx + 0x30] */
    MEM32(ebp + 0xC) = 6; /* 0x12146CF0: mov dword ptr [ebp + 0xc], 6 */
    RECOMP_CALL(sub_12146502); /* 0x12146CF7: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12146CFC: push esi */
    ecx = ebx; /* 0x12146CFD: mov ecx, ebx */
    RECOMP_CALL(sub_12142840); /* 0x12146CFF: call 0x12142840 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x12146D04: mov edi, dword ptr [ebp + 8] */
L_12146D07:
    PUSH32(esp, MEM32(edi)); /* 0x12146D07: push dword ptr [edi] */
    ecx = ebx; /* 0x12146D09: mov ecx, ebx */
    RECOMP_CALL(sub_12142840); /* 0x12146D0B: call 0x12142840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12146D10: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12146D13: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12146D07; /* 0x12146D14: jne 0x12146d07 */
L_12146D16:
    edi = POP32_VAL(esp); /* 0x12146D16: pop edi */
L_12146D17:
    esi = POP32_VAL(esp); /* 0x12146D17: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146D18: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146D19: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12146D1A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12146D22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146D22u);

L_12146D22:
    edi = edi; /* 0x12146D22: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146D24: push ebp */
    ebp = esp; /* 0x12146D25: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12146D27: push ecx */
    PUSH32(esp, esi); /* 0x12146D28: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12146D29: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12146D2C: push edi */
    edi = ecx; /* 0x12146D2D: mov edi, ecx */
    /* test esi, esi */ /* 0x12146D2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146D72; /* 0x12146D31: je 0x12146d72 */
L_12146D33:
    PUSH32(esp, ebx); /* 0x12146D33: push ebx */
    eax = ebp + (-0x4); /* 0x12146D34: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146D37: push eax */
    PUSH32(esp, 2); /* 0x12146D38: push 2 */
    eax = ebp + 0xC; /* 0x12146D3A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12146D3D: push eax */
    ecx = edi + 0x30; /* 0x12146D3E: lea ecx, [edi + 0x30] */
    MEM32(ebp + 0xC) = 7; /* 0x12146D41: mov dword ptr [ebp + 0xc], 7 */
    RECOMP_CALL(sub_12146502); /* 0x12146D48: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12146D4D: push esi */
    ecx = edi; /* 0x12146D4E: mov ecx, edi */
    RECOMP_CALL(sub_12142840); /* 0x12146D50: call 0x12142840 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x12146D55: mov ebx, dword ptr [ebp + 8] */
L_12146D58:
    fp_push(*(float*)&MEM32(ebx)); /* 0x12146D58: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x12146D5A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12146D5B: fstp dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x12146D5E: mov ecx, edi */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12146D60: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12146D63: fstp dword ptr [esp] */
    RECOMP_CALL(sub_12142840); /* 0x12146D66: call 0x12142840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12146D6B: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12146D6E: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12146D58; /* 0x12146D6F: jne 0x12146d58 */
L_12146D71:
    ebx = POP32_VAL(esp); /* 0x12146D71: pop ebx */
L_12146D72:
    edi = POP32_VAL(esp); /* 0x12146D72: pop edi */
    esi = POP32_VAL(esp); /* 0x12146D73: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146D74: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12146D75: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12146D7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146D7Du);

L_12146D7D:
    edi = edi; /* 0x12146D7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146D7F: push ebp */
    ebp = esp; /* 0x12146D80: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12146D82: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12146D85: push esi */
    PUSH32(esp, edi); /* 0x12146D86: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146D87: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x12146D89: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x12146D8C: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146DA0; /* 0x12146D8F: je 0x12146da0 */
L_12146D91:
    edi = MEM32(ebp + 0x8); /* 0x12146D91: mov edi, dword ptr [ebp + 8] */
    edx = edi + 0x1; /* 0x12146D94: lea edx, [edi + 1] */
L_12146D97:
    SET_LO8(eax, MEM8(edi)); /* 0x12146D97: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12146D99: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12146D9A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12146D97; /* 0x12146D9C: jne 0x12146d97 */
L_12146D9E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x12146D9E: sub edi, edx */
    _flag_k = FK_CMP;
L_12146DA0:
    PUSH32(esp, 2); /* 0x12146DA0: push 2 */
    edx = POP32_VAL(esp); /* 0x12146DA2: pop edx */
    eax = ebp + (-0xC); /* 0x12146DA3: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12146DA6: push eax */
    esi = ecx + 0x30; /* 0x12146DA7: lea esi, [ecx + 0x30] */
    PUSH32(esp, edx); /* 0x12146DAA: push edx */
    eax = ebp + (-0x4); /* 0x12146DAB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146DAE: push eax */
    ecx = esi; /* 0x12146DAF: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x12146DB1: mov dword ptr [ebp - 4], edx */
    RECOMP_CALL(sub_12146502); /* 0x12146DB4: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x12146DB9: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x12146DBC: push edi */
    RECOMP_CALL(sub_12142840); /* 0x12146DBD: call 0x12142840 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x12146DC2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12146DC5: push eax */
    PUSH32(esp, edi); /* 0x12146DC6: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146DC7: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x12146DCA: mov ecx, esi */
    RECOMP_CALL(sub_12146502); /* 0x12146DCC: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x12146DD1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12146DD4: push eax */
    PUSH32(esp, 2); /* 0x12146DD5: push 2 */
    eax = ebp + 0x8; /* 0x12146DD7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12146DDA: push eax */
    ecx = esi; /* 0x12146DDB: mov ecx, esi */
    MEM32(ebp + 0x8) = 0x14u; /* 0x12146DDD: mov dword ptr [ebp + 8], 0x14 */
    RECOMP_CALL(sub_12146502); /* 0x12146DE4: call 0x12146502 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12146DE9: pop edi */
    esi = POP32_VAL(esp); /* 0x12146DEA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146DEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12146DEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12146DF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146DF4u);

L_12146DF4:
    edi = edi; /* 0x12146DF4: mov edi, edi */
    PUSH32(esp, esi); /* 0x12146DF6: push esi */
    esi = ecx; /* 0x12146DF7: mov esi, ecx */
    eax = MEM32(esi + 0x4C); /* 0x12146DF9: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x12146DFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146E2C; /* 0x12146DFE: je 0x12146e2c */
L_12146E00:
    /* cmp MEM32(eax), 0 */ /* 0x12146E00: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146E2C; /* 0x12146E03: je 0x12146e2c */
L_12146E05:
    PUSH32(esp, edi); /* 0x12146E05: push edi */
    PUSH32(esp, MEM32(eax)); /* 0x12146E06: push dword ptr [eax] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12146E08: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12146D22); /* 0x12146E0B: call 0x12146d22 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x4C); /* 0x12146E10: mov edi, dword ptr [esi + 0x4c] */
    /* test edi, edi */ /* 0x12146E13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146E27; /* 0x12146E15: je 0x12146e27 */
L_12146E17:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12146E17: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12146E1A: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12146E1F: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12146E20: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12146E25: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146E26: pop ecx */
L_12146E27:
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0; /* 0x12146E27: and dword ptr [esi + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12146E2B: pop edi */
L_12146E2C:
    esi = POP32_VAL(esp); /* 0x12146E2C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146E2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_12146E33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146E33u);

L_12146E33:
    edi = edi; /* 0x12146E33: mov edi, edi */
    PUSH32(esp, esi); /* 0x12146E35: push esi */
    esi = ecx; /* 0x12146E36: mov esi, ecx */
    eax = MEM32(esi + 0x48); /* 0x12146E38: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x12146E3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146E6B; /* 0x12146E3D: je 0x12146e6b */
L_12146E3F:
    /* cmp MEM32(eax), 0 */ /* 0x12146E3F: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146E6B; /* 0x12146E42: je 0x12146e6b */
L_12146E44:
    PUSH32(esp, edi); /* 0x12146E44: push edi */
    PUSH32(esp, MEM32(eax)); /* 0x12146E45: push dword ptr [eax] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12146E47: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12146CD1); /* 0x12146E4A: call 0x12146cd1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x48); /* 0x12146E4F: mov edi, dword ptr [esi + 0x48] */
    /* test edi, edi */ /* 0x12146E52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146E66; /* 0x12146E54: je 0x12146e66 */
L_12146E56:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12146E56: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12146E59: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12146E5E: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12146E5F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12146E64: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12146E65: pop ecx */
L_12146E66:
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0; /* 0x12146E66: and dword ptr [esi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12146E6A: pop edi */
L_12146E6B:
    esi = POP32_VAL(esp); /* 0x12146E6B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12146E6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_12146E72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146E72u);

L_12146E72:
    edi = edi; /* 0x12146E72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146E74: push ebp */
    ebp = esp; /* 0x12146E75: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12146E77: push esi */
    PUSH32(esp, edi); /* 0x12146E78: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12146E79: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x12146E7C: push 0 */
    eax = edi + 0x8; /* 0x12146E7E: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x12146E81: push eax */
    esi = ecx; /* 0x12146E82: mov esi, ecx */
    RECOMP_CALL(sub_121469D5); /* 0x12146E84: call 0x121469d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146E89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146E91; /* 0x12146E8B: je 0x12146e91 */
L_12146E8D:
    eax = MEM32(esi); /* 0x12146E8D: mov eax, dword ptr [esi] */
    goto L_12146EA3; /* 0x12146E8F: jmp 0x12146ea3 */
L_12146E91:
    eax = ebp + 0x8; /* 0x12146E91: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12146E94: push eax */
    ecx = esi; /* 0x12146E95: mov ecx, esi */
    RECOMP_CALL(sub_1214AE6F); /* 0x12146E97: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146E9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146EA3; /* 0x12146E9E: je 0x12146ea3 */
L_12146EA0:
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + 1; /* 0x12146EA0: inc dword ptr [edi + 0x18] */
    _flag_k = FK_INC;
L_12146EA3:
    edi = POP32_VAL(esp); /* 0x12146EA3: pop edi */
    esi = POP32_VAL(esp); /* 0x12146EA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x12146EA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12146EA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12146EAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146EAEu);

L_12146EAE:
    edi = edi; /* 0x12146EAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146EB0: push ebp */
    ebp = esp; /* 0x12146EB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12146EB3: push ecx */
    PUSH32(esp, ebx); /* 0x12146EB4: push ebx */
    PUSH32(esp, esi); /* 0x12146EB5: push esi */
    PUSH32(esp, edi); /* 0x12146EB6: push edi */
    ebx = ecx; /* 0x12146EB7: mov ebx, ecx */
    eax = MEM32(ebx + 0xC); /* 0x12146EB9: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146EBC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146EBE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12146EC0: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), esi */ /* 0x12146EC1: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12146EFC; /* 0x12146EC3: jbe 0x12146efc */
L_12146EC5:
    eax = MEM32(eax + 0xC); /* 0x12146EC5: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12146EC8: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx); /* 0x12146ECB: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x12146ECD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146ED6; /* 0x12146ECF: je 0x12146ed6 */
L_12146ED1:
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x12146ED1: imul edi, eax */
    goto L_12146EF4; /* 0x12146ED4: jmp 0x12146ef4 */
L_12146ED6:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x12146ED6: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12146F0A; /* 0x12146EDA: je 0x12146f0a */
L_12146EDC:
    eax = ebp + (-0x4); /* 0x12146EDC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146EDF: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x12146EE0: push dword ptr [ecx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12146EE3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12146EE6: push ebx */
    RECOMP_CALL(sub_12146C38); /* 0x12146EE7: call 0x12146c38 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146EEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146F03; /* 0x12146EEE: js 0x12146f03 */
L_12146EF0:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x4))); /* 0x12146EF0: imul edi, dword ptr [ebp - 4] */
L_12146EF4:
    eax = MEM32(ebx + 0xC); /* 0x12146EF4: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12146EF7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x12146EF8: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146EC5; /* 0x12146EFA: jb 0x12146ec5 */
L_12146EFC:
    eax = MEM32(ebp + 0xC); /* 0x12146EFC: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x12146EFF: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146F01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12146F03:
    edi = POP32_VAL(esp); /* 0x12146F03: pop edi */
    esi = POP32_VAL(esp); /* 0x12146F04: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146F05: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146F06: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12146F07: ret 8 */
L_12146F0A:
    eax = 0x88760391u; /* 0x12146F0A: mov eax, 0x88760391 */
    RECOMP_BACKEDGE();
    goto L_12146F03; /* 0x12146F0F: jmp 0x12146f03 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12146F16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146F16u);

L_12146F16:
    edi = edi; /* 0x12146F16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146F18: push ebp */
    ebp = esp; /* 0x12146F19: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12146F1B: push ecx */
    PUSH32(esp, esi); /* 0x12146F1C: push esi */
    PUSH32(esp, edi); /* 0x12146F1D: push edi */
    esi = ecx; /* 0x12146F1E: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146F20: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x12146F22: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146F37; /* 0x12146F25: jne 0x12146f37 */
L_12146F27:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12146F27: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146F2A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146F2D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12146792); /* 0x12146F30: call 0x12146792 */
    RECOMP_FLAGS_IN();
    goto L_12146F66; /* 0x12146F35: jmp 0x12146f66 */
L_12146F37:
    eax = ebp + (-0x4); /* 0x12146F37: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146F3A: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12146F3B: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_12146EAE); /* 0x12146F3E: call 0x12146eae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146F43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146F66; /* 0x12146F45: js 0x12146f66 */
L_12146F47:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x12146F47: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12146F66; /* 0x12146F4A: jbe 0x12146f66 */
L_12146F4C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12146F4C: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x12146F4F: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146F51: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146F54: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12146792); /* 0x12146F57: call 0x12146792 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146F5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146F66; /* 0x12146F5E: js 0x12146f66 */
L_12146F60:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12146F60: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x12146F61: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146F4C; /* 0x12146F64: jb 0x12146f4c */
L_12146F66:
    edi = POP32_VAL(esp); /* 0x12146F66: pop edi */
    esi = POP32_VAL(esp); /* 0x12146F67: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146F68: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12146F69: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12146F71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146F71u);

L_12146F71:
    edi = edi; /* 0x12146F71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146F73: push ebp */
    ebp = esp; /* 0x12146F74: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12146F76: push ecx */
    PUSH32(esp, esi); /* 0x12146F77: push esi */
    PUSH32(esp, edi); /* 0x12146F78: push edi */
    esi = ecx; /* 0x12146F79: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12146F7B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x12146F7D: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146F95; /* 0x12146F80: jne 0x12146f95 */
L_12146F82:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12146F82: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12146F85: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146F88: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146F8B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214659D); /* 0x12146F8E: call 0x1214659d */
    RECOMP_FLAGS_IN();
    goto L_12146FC7; /* 0x12146F93: jmp 0x12146fc7 */
L_12146F95:
    eax = ebp + (-0x4); /* 0x12146F95: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12146F98: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12146F99: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_12146EAE); /* 0x12146F9C: call 0x12146eae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146FA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146FC7; /* 0x12146FA3: js 0x12146fc7 */
L_12146FA5:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x12146FA5: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12146FC7; /* 0x12146FA8: jbe 0x12146fc7 */
L_12146FAA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12146FAA: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x12146FAD: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12146FAF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12146FB2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146FB5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214659D); /* 0x12146FB8: call 0x1214659d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12146FBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12146FC7; /* 0x12146FBF: js 0x12146fc7 */
L_12146FC1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12146FC1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x12146FC2: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146FAA; /* 0x12146FC5: jb 0x12146faa */
L_12146FC7:
    edi = POP32_VAL(esp); /* 0x12146FC7: pop edi */
    esi = POP32_VAL(esp); /* 0x12146FC8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146FC9: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12146FCA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12146FD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12146FD2u);

L_12146FD2:
    edi = edi; /* 0x12146FD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12146FD4: push ebp */
    ebp = esp; /* 0x12146FD5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12146FD7: push esi */
    esi = ecx; /* 0x12146FD8: mov esi, ecx */
    edx = MEM32(esi + 0x1C); /* 0x12146FDA: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146FDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x12146FDF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214701D; /* 0x12146FE1: je 0x1214701d */
L_12146FE3:
    /* cmp MEM32(esi + 0x2C), eax */ /* 0x12146FE3: cmp dword ptr [esi + 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12146FF4; /* 0x12146FE6: jne 0x12146ff4 */
L_12146FE8:
    eax = MEM32(ebp + 0xC); /* 0x12146FE8: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x12146FEB: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x12146FEE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146FF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214701D; /* 0x12146FF2: jmp 0x1214701d */
L_12146FF4:
    PUSH32(esp, edi); /* 0x12146FF4: push edi */
    edi = eax; /* 0x12146FF5: mov edi, eax */
    /* cmp MEM32(edx), eax */ /* 0x12146FF7: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214701C; /* 0x12146FF9: jbe 0x1214701c */
L_12146FFB:
    ecx = MEM32(edx + 0xC); /* 0x12146FFB: mov ecx, dword ptr [edx + 0xc] */
    ecx = MEM32(ecx + edi * 4); /* 0x12146FFE: mov ecx, dword ptr [ecx + edi*4] */
    PUSH32(esp, esi); /* 0x12147001: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12147002: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12147005: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147008: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12146F16); /* 0x1214700B: call 0x12146f16 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214701C; /* 0x12147012: jne 0x1214701c */
L_12147014:
    edx = MEM32(esi + 0x1C); /* 0x12147014: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12147017: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(edx) */ /* 0x12147018: cmp edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12146FFB; /* 0x1214701A: jb 0x12146ffb */
L_1214701C:
    edi = POP32_VAL(esp); /* 0x1214701C: pop edi */
L_1214701D:
    esi = POP32_VAL(esp); /* 0x1214701D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214701E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214701F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12147027(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147027u);

L_12147027:
    edi = edi; /* 0x12147027: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147029: push ebp */
    ebp = esp; /* 0x1214702A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214702C: push esi */
    esi = ecx; /* 0x1214702D: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x1214702F: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x12147032: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147068; /* 0x12147034: je 0x12147068 */
L_12147036:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12147036: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12147038: push edi */
    edi = ecx; /* 0x12147039: mov edi, ecx */
    /* cmp MEM32(eax), ecx */ /* 0x1214703B: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12147065; /* 0x1214703D: jbe 0x12147065 */
L_1214703F:
    ecx = MEM32(eax + 0xC); /* 0x1214703F: mov ecx, dword ptr [eax + 0xc] */
    ecx = MEM32(ecx + edi * 4); /* 0x12147042: mov ecx, dword ptr [ecx + edi*4] */
    PUSH32(esp, esi); /* 0x12147045: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12147046: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12147049: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214704C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214704F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12146F71); /* 0x12147052: call 0x12146f71 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x12147057: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12147059: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147065; /* 0x1214705B: jne 0x12147065 */
L_1214705D:
    eax = MEM32(esi + 0x1C); /* 0x1214705D: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12147060: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x12147061: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214703F; /* 0x12147063: jb 0x1214703f */
L_12147065:
    eax = ecx; /* 0x12147065: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x12147067: pop edi */
L_12147068:
    esi = POP32_VAL(esp); /* 0x12147068: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147069: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1214706A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12147072(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147072u);

L_12147072:
    edi = edi; /* 0x12147072: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147074: push ebp */
    ebp = esp; /* 0x12147075: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147077: push esi */
    esi = ecx; /* 0x12147078: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x1214707A: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x1214707D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214707E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x12147080: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12147091; /* 0x12147082: je 0x12147091 */
L_12147084:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12147084: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121470DA; /* 0x12147085: jne 0x121470da */
L_12147087:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147087: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121467DC); /* 0x1214708A: call 0x121467dc */
    RECOMP_FLAGS_IN();
    goto L_121470DA; /* 0x1214708F: jmp 0x121470da */
L_12147091:
    RECOMP_CALL(sub_12146DF4); /* 0x12147091: call 0x12146df4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x48), edi */ /* 0x12147096: cmp dword ptr [esi + 0x48], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121470CE; /* 0x12147099: jne 0x121470ce */
L_1214709B:
    PUSH32(esp, 0x120014BCu); /* 0x1214709B: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x121470A0: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x121470A2: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121470A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121470A8: pop ecx */
    /* test eax, eax */ /* 0x121470A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121470BE; /* 0x121470AB: je 0x121470be */
L_121470AD:
    MEM32(eax) = edi; /* 0x121470AD: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x121470AF: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 0xAu; /* 0x121470B2: mov dword ptr [eax + 8], 0xa */
    MEM32(eax + 0xC) = edi; /* 0x121470B9: mov dword ptr [eax + 0xc], edi */
    goto L_121470C0; /* 0x121470BC: jmp 0x121470c0 */
L_121470BE:
    eax = edi; /* 0x121470BE: mov eax, edi */
L_121470C0:
    MEM32(esi + 0x48) = eax; /* 0x121470C0: mov dword ptr [esi + 0x48], eax */
    /* test eax, eax */ /* 0x121470C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121470CE; /* 0x121470C5: jne 0x121470ce */
L_121470C7:
    eax = 0x8007000Eu; /* 0x121470C7: mov eax, 0x8007000e */
    goto L_121470DC; /* 0x121470CC: jmp 0x121470dc */
L_121470CE:
    ecx = MEM32(esi + 0x48); /* 0x121470CE: mov ecx, dword ptr [esi + 0x48] */
    eax = ebp + 0x8; /* 0x121470D1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x121470D4: push eax */
    RECOMP_CALL(sub_1214AE6F); /* 0x121470D5: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
L_121470DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121470DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121470DC:
    edi = POP32_VAL(esp); /* 0x121470DC: pop edi */
    esi = POP32_VAL(esp); /* 0x121470DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x121470DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121470DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121470E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121470E7u);

L_121470E7:
    edi = edi; /* 0x121470E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121470E9: push ebp */
    ebp = esp; /* 0x121470EA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121470EC: push esi */
    esi = ecx; /* 0x121470ED: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x121470EF: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x121470F2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121470F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x121470F5: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214710A; /* 0x121470F7: je 0x1214710a */
L_121470F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121470F9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12147153; /* 0x121470FA: jne 0x12147153 */
L_121470FC:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x121470FC: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x121470FF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12147100: fstp dword ptr [esp] */
    RECOMP_CALL(sub_12146839); /* 0x12147103: call 0x12146839 */
    RECOMP_FLAGS_IN();
    goto L_12147153; /* 0x12147108: jmp 0x12147153 */
L_1214710A:
    RECOMP_CALL(sub_12146E33); /* 0x1214710A: call 0x12146e33 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x4C), edi */ /* 0x1214710F: cmp dword ptr [esi + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147147; /* 0x12147112: jne 0x12147147 */
L_12147114:
    PUSH32(esp, 0x120014BCu); /* 0x12147114: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x12147119: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x1214711B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147120: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12147121: pop ecx */
    /* test eax, eax */ /* 0x12147122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147137; /* 0x12147124: je 0x12147137 */
L_12147126:
    MEM32(eax) = edi; /* 0x12147126: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x12147128: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 0xFAu; /* 0x1214712B: mov dword ptr [eax + 8], 0xfa */
    MEM32(eax + 0xC) = edi; /* 0x12147132: mov dword ptr [eax + 0xc], edi */
    goto L_12147139; /* 0x12147135: jmp 0x12147139 */
L_12147137:
    eax = edi; /* 0x12147137: mov eax, edi */
L_12147139:
    MEM32(esi + 0x4C) = eax; /* 0x12147139: mov dword ptr [esi + 0x4c], eax */
    /* test eax, eax */ /* 0x1214713C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147147; /* 0x1214713E: jne 0x12147147 */
L_12147140:
    eax = 0x8007000Eu; /* 0x12147140: mov eax, 0x8007000e */
    goto L_12147155; /* 0x12147145: jmp 0x12147155 */
L_12147147:
    ecx = MEM32(esi + 0x4C); /* 0x12147147: mov ecx, dword ptr [esi + 0x4c] */
    eax = ebp + 0x8; /* 0x1214714A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214714D: push eax */
    RECOMP_CALL(sub_12146886); /* 0x1214714E: call 0x12146886 */
    RECOMP_FLAGS_IN();
L_12147153:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147153: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147155:
    edi = POP32_VAL(esp); /* 0x12147155: pop edi */
    esi = POP32_VAL(esp); /* 0x12147156: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147158: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147160u);

L_12147160:
    edi = edi; /* 0x12147160: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147162: push esi */
    esi = ecx; /* 0x12147163: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x12147165: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147172; /* 0x12147168: je 0x12147172 */
L_1214716A:
    PUSH32(esp, MEM32(esi)); /* 0x1214716A: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF586); /* 0x1214716C: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147171: pop ecx */
L_12147172:
    esi = MEM32(esi + 0xC); /* 0x12147172: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x12147175: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147187; /* 0x12147177: je 0x12147187 */
L_12147179:
    ecx = esi; /* 0x12147179: mov ecx, esi */
    RECOMP_CALL(sub_121437CE); /* 0x1214717B: call 0x121437ce */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12147180: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147181: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147186: pop ecx */
L_12147187:
    esi = POP32_VAL(esp); /* 0x12147187: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147188: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214718E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214718Eu);

L_1214718E:
    edi = edi; /* 0x1214718E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147190: push ebp */
    ebp = esp; /* 0x12147191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12147193: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12147196: push edi */
    edi = ecx; /* 0x12147197: mov edi, ecx */
    eax = MEM32(edi + 0x40); /* 0x12147199: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1214719C: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121472AC; /* 0x1214719F: je 0x121472ac */
L_121471A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121471A5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121472C2; /* 0x121471A6: jne 0x121472c2 */
L_121471AC:
    PUSH32(esp, ebx); /* 0x121471AC: push ebx */
    PUSH32(esp, esi); /* 0x121471AD: push esi */
    eax = ebp + (-0x8); /* 0x121471AE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x121471B1: push eax */
    PUSH32(esp, 1); /* 0x121471B2: push 1 */
    eax = ebp + (-0x2); /* 0x121471B4: lea eax, [ebp - 2] */
    PUSH32(esp, eax); /* 0x121471B7: push eax */
    ecx = edi + 0x30; /* 0x121471B8: lea ecx, [edi + 0x30] */
    MEM8(ebp + (-0x2)) = (uint8_t)(0x22u); /* 0x121471BB: mov byte ptr [ebp - 2], 0x22 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0x5Cu); /* 0x121471BF: mov byte ptr [ebp - 1], 0x5c */
    RECOMP_CALL(sub_12146502); /* 0x121471C3: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x121471C8: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x121471CB: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = ecx; /* 0x121471CE: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147296; /* 0x121471D0: je 0x12147296 */
L_121471D6:
    SET_LO8(eax, MEM8(esi)); /* 0x121471D6: mov al, byte ptr [esi] */
    SET_LO8(edx, LO8(eax)); /* 0x121471D8: mov dl, al */
    /* cmp LO8(edx), 0x22u */ /* 0x121471DA: cmp dl, 0x22 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214724E; /* 0x121471DD: je 0x1214724e */
L_121471DF:
    /* cmp LO8(edx), 0x27u */ /* 0x121471DF: cmp dl, 0x27 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214724E; /* 0x121471E2: je 0x1214724e */
L_121471E4:
    /* cmp LO8(edx), 0x5Cu */ /* 0x121471E4: cmp dl, 0x5c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214724E; /* 0x121471E7: je 0x1214724e */
L_121471E9:
    /* cmp LO8(eax), 0x1Eu */ /* 0x121471E9: cmp al, 0x1e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_121471F5; /* 0x121471EB: jl 0x121471f5 */
L_121471ED:
    /* cmp LO8(eax), 0x7Eu */ /* 0x121471ED: cmp al, 0x7e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_12147278; /* 0x121471EF: jle 0x12147278 */
L_121471F5:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x121471F5: movsx eax, al */
    /* cmp eax, 0x80u */ /* 0x121471F8: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12147206; /* 0x121471FD: jl 0x12147206 */
L_121471FF:
    /* cmp eax, 0xFEu */ /* 0x121471FF: cmp eax, 0xfe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12147278; /* 0x12147204: jle 0x12147278 */
L_12147206:
    /* cmp esi, ecx */ /* 0x12147206: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214721C; /* 0x12147208: je 0x1214721c */
L_1214720A:
    eax = ebp + 0x8; /* 0x1214720A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214720D: push eax */
    eax = esi; /* 0x1214720E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12147210: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x12147212: push eax */
    PUSH32(esp, ecx); /* 0x12147213: push ecx */
    ecx = edi + 0x30; /* 0x12147214: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x12147217: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_1214721C:
    eax = (uint32_t)MEM8(esi); /* 0x1214721C: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1214721F: push eax */
    PUSH32(esp, 0x120111E8u); /* 0x12147220: push 0x120111e8 */
    PUSH32(esp, edi); /* 0x12147225: push edi */
    RECOMP_CALL(sub_12143315); /* 0x12147226: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214722B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x8); /* 0x1214722E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12147231: push eax */
    PUSH32(esp, 1); /* 0x12147232: push 1 */
    eax = ebp + (-0x1); /* 0x12147234: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x12147237: push eax */
    ecx = edi + 0x30; /* 0x12147238: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x1214723B: call 0x12146502 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x1; /* 0x12147240: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x12147243: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x12147246: mov ecx, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147278; /* 0x12147248: je 0x12147278 */
L_1214724A:
    esi = eax; /* 0x1214724A: mov esi, eax */
    goto L_12147278; /* 0x1214724C: jmp 0x12147278 */
L_1214724E:
    /* cmp esi, ecx */ /* 0x1214724E: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147264; /* 0x12147250: je 0x12147264 */
L_12147252:
    eax = ebp + (-0xC); /* 0x12147252: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12147255: push eax */
    eax = esi; /* 0x12147256: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12147258: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1214725A: push eax */
    PUSH32(esp, ecx); /* 0x1214725B: push ecx */
    ecx = edi + 0x30; /* 0x1214725C: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x1214725F: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12147264:
    eax = ebp + (-0x10); /* 0x12147264: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12147267: push eax */
    PUSH32(esp, 1); /* 0x12147268: push 1 */
    eax = ebp + (-0x1); /* 0x1214726A: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1214726D: push eax */
    ecx = edi + 0x30; /* 0x1214726E: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x12147271: call 0x12146502 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x12147276: mov ecx, esi */
L_12147278:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12147278: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x12147279: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121471D6; /* 0x1214727C: jne 0x121471d6 */
L_12147282:
    /* cmp esi, ecx */ /* 0x12147282: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147296; /* 0x12147284: je 0x12147296 */
L_12147286:
    eax = ebp + 0x8; /* 0x12147286: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12147289: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1214728A: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1214728C: push esi */
    PUSH32(esp, ecx); /* 0x1214728D: push ecx */
    ecx = edi + 0x30; /* 0x1214728E: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x12147291: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12147296:
    eax = ebp + 0x8; /* 0x12147296: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12147299: push eax */
    PUSH32(esp, 1); /* 0x1214729A: push 1 */
    eax = ebp + (-0x2); /* 0x1214729C: lea eax, [ebp - 2] */
    PUSH32(esp, eax); /* 0x1214729F: push eax */
    ecx = edi + 0x30; /* 0x121472A0: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_12146502); /* 0x121472A3: call 0x12146502 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x121472A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x121472A9: pop ebx */
    goto L_121472C2; /* 0x121472AA: jmp 0x121472c2 */
L_121472AC:
    RECOMP_CALL(sub_12146E33); /* 0x121472AC: call 0x12146e33 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x121472B1: mov ecx, edi */
    RECOMP_CALL(sub_12146DF4); /* 0x121472B3: call 0x12146df4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121472B8: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x121472BB: mov ecx, edi */
    RECOMP_CALL(sub_12146D7D); /* 0x121472BD: call 0x12146d7d */
    RECOMP_FLAGS_IN();
L_121472C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121472C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x121472C4: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121472C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121472C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121472CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121472CEu);

L_121472CE:
    edi = edi; /* 0x121472CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121472D0: push ebp */
    ebp = esp; /* 0x121472D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121472D3: push ecx */
    eax = MEM32(ecx + 0x8); /* 0x121472D4: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x121472D7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121472D8: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x121472DB: mov edx, dword ptr [esi] */
    MEM32(ebp + 0xC) = edx; /* 0x121472DD: mov dword ptr [ebp + 0xc], edx */
    MEM32(ecx + 0x10) = edx; /* 0x121472E0: mov dword ptr [ecx + 0x10], edx */
    /* test eax, eax */ /* 0x121472E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147301; /* 0x121472E5: je 0x12147301 */
L_121472E7:
    PUSH32(esp, 0); /* 0x121472E7: push 0 */
    ecx = ebp + 0xC; /* 0x121472E9: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x121472EC: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121472ED: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x121472F0: mov ecx, eax */
    RECOMP_CALL(sub_1214748C); /* 0x121472F2: call 0x1214748c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x121472F7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = ecx; /* 0x121472FA: mov dword ptr [esi], ecx */
    goto L_121473C7; /* 0x121472FC: jmp 0x121473c7 */
L_12147301:
    eax = MEM32(ecx + 0x4); /* 0x12147301: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4); /* 0x12147304: mov eax, dword ptr [eax + 4] */
    /* cmp eax, 8 */ /* 0x12147307: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121473C0; /* 0x1214730A: ja 0x121473c0 */
L_12147310:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x121473CE)); goto _ljump; }
L_12147317:
    PUSH32(esp, MEM32(edx)); /* 0x12147317: push dword ptr [edx] */
    ecx = MEM32(ebp + 0x8); /* 0x12147319: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12147072); /* 0x1214731C: call 0x12147072 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x12147321: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12147324: add ecx, 4 */
    _flag_k = FK_ADD;
    edx = eax; /* 0x12147327: mov edx, eax */
    MEM32(esi) = ecx; /* 0x12147329: mov dword ptr [esi], ecx */
    goto L_121473C5; /* 0x1214732B: jmp 0x121473c5 */
L_12147330:
    eax = (uint32_t)MEM16(edx); /* 0x12147330: movzx eax, word ptr [edx] */
    ecx = MEM32(ebp + 0x8); /* 0x12147333: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x12147336: push eax */
    RECOMP_CALL(sub_12147072); /* 0x12147337: call 0x12147072 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1214733C: mov edx, eax */
    eax = MEM32(ebp + 0xC); /* 0x1214733E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12147341: add eax, 2 */
    _flag_k = FK_ADD;
L_12147344:
    MEM32(esi) = eax; /* 0x12147344: mov dword ptr [esi], eax */
    goto L_121473C5; /* 0x12147346: jmp 0x121473c5 */
L_12147348:
    eax = (uint32_t)MEM8(edx); /* 0x12147348: movzx eax, byte ptr [edx] */
    ecx = MEM32(ebp + 0x8); /* 0x1214734B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214734E: push eax */
    RECOMP_CALL(sub_12147072); /* 0x1214734F: call 0x12147072 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12147354: mov edx, eax */
    eax = MEM32(ebp + 0xC); /* 0x12147356: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147359: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_12147344; /* 0x1214735A: jmp 0x12147344 */
L_1214735C:
    fp_push(*(float*)&MEM32(edx)); /* 0x1214735C: fld dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1214735E: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1214735F: mov ecx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12147362: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12147365: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12147368: fstp dword ptr [esp] */
    RECOMP_CALL(sub_121470E7); /* 0x1214736B: call 0x121470e7 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12147370: mov edx, eax */
    eax = MEM32(ebp + 0xC); /* 0x12147372: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12147375: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_12147344; /* 0x12147378: jmp 0x12147344 */
L_1214737A:
    fp_push(*(double*)ADDR(edx)); /* 0x1214737A: fld qword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1214737C: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1214737D: mov ecx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12147380: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12147383: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12147386: fstp dword ptr [esp] */
    RECOMP_CALL(sub_121470E7); /* 0x12147389: call 0x121470e7 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1214738E: mov edx, eax */
    eax = MEM32(ebp + 0xC); /* 0x12147390: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12147393: add eax, 8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_12147344; /* 0x12147396: jmp 0x12147344 */
L_12147398:
    ecx = MEM32(ebp + 0x8); /* 0x12147398: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214739B: push ebx */
    PUSH32(esp, edi); /* 0x1214739C: push edi */
    PUSH32(esp, edx); /* 0x1214739D: push edx */
    RECOMP_CALL(sub_1214718E); /* 0x1214739E: call 0x1214718e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x121473A3: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x121473A6: mov ecx, edi */
    edx = eax; /* 0x121473A8: mov edx, eax */
    ebx = ecx + 0x1; /* 0x121473AA: lea ebx, [ecx + 1] */
L_121473AD:
    SET_LO8(eax, MEM8(ecx)); /* 0x121473AD: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121473AF: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121473B0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121473AD; /* 0x121473B2: jne 0x121473ad */
L_121473B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x121473B4: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = ecx + edi + 0x1; /* 0x121473B6: lea eax, [ecx + edi + 1] */
    edi = POP32_VAL(esp); /* 0x121473BA: pop edi */
    MEM32(esi) = eax; /* 0x121473BB: mov dword ptr [esi], eax */
    ebx = POP32_VAL(esp); /* 0x121473BD: pop ebx */
    goto L_121473C5; /* 0x121473BE: jmp 0x121473c5 */
L_121473C0:
    edx = 0x88760388u; /* 0x121473C0: mov edx, 0x88760388 */
L_121473C5:
    eax = edx; /* 0x121473C5: mov eax, edx */
L_121473C7:
    esi = POP32_VAL(esp); /* 0x121473C7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121473C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121473C9: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12147317u: goto L_12147317;
      case 0x12147330u: goto L_12147330;
      case 0x12147348u: goto L_12147348;
      case 0x1214735Cu: goto L_1214735C;
      case 0x1214737Au: goto L_1214737A;
      case 0x12147398u: goto L_12147398;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121473F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121473F7u);

L_121473F7:
    edi = edi; /* 0x121473F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121473F9: push ebp */
    ebp = esp; /* 0x121473FA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121473FC: push ecx */
    PUSH32(esp, esi); /* 0x121473FD: push esi */
    esi = ecx; /* 0x121473FE: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x12147400: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147413; /* 0x12147404: jne 0x12147413 */
L_12147406:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12147406: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147409: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121472CE); /* 0x1214740C: call 0x121472ce */
    RECOMP_FLAGS_IN();
    goto L_12147482; /* 0x12147411: jmp 0x12147482 */
L_12147413:
    eax = ebp + (-0x4); /* 0x12147413: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12147416: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12147417: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_12146EAE); /* 0x1214741A: call 0x12146eae */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214741F: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12147421: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12147482; /* 0x12147423: js 0x12147482 */
L_12147425:
    PUSH32(esp, ebx); /* 0x12147425: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12147426: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x12147428: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214747F; /* 0x1214742B: jbe 0x1214747f */
L_1214742D:
    PUSH32(esp, edi); /* 0x1214742D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214742E: mov edi, dword ptr [ebp + 8] */
L_12147431:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12147431: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x12147434: mov ecx, esi */
    PUSH32(esp, edi); /* 0x12147436: push edi */
    RECOMP_CALL(sub_121472CE); /* 0x12147437: call 0x121472ce */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214743C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1214743E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214747E; /* 0x12147440: jne 0x1214747e */
L_12147442:
    eax = MEM32(ebp + (-0x4)); /* 0x12147442: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12147445: dec eax */
    _flag_k = FK_DEC;
    /* cmp ebx, eax */ /* 0x12147446: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147478; /* 0x12147448: je 0x12147478 */
L_1214744A:
    eax = MEM32(edi + 0x40); /* 0x1214744A: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214744D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214745F; /* 0x1214744E: jne 0x1214745f */
L_12147450:
    eax = (uint32_t)MEM8(0x12010F58); /* 0x12147450: movzx eax, byte ptr [0x12010f58] */
    PUSH32(esp, eax); /* 0x12147457: push eax */
    ecx = edi; /* 0x12147458: mov ecx, edi */
    RECOMP_CALL(sub_121427F8); /* 0x1214745A: call 0x121427f8 */
    RECOMP_FLAGS_IN();
L_1214745F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214745F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x12147461: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147478; /* 0x12147464: je 0x12147478 */
L_12147466:
    eax = MEM32(edi + 0x40); /* 0x12147466: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12147469: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12147476; /* 0x1214746A: jne 0x12147476 */
L_1214746C:
    PUSH32(esp, MEM32(edi + 0x58)); /* 0x1214746C: push dword ptr [edi + 0x58] */
    ecx = edi; /* 0x1214746F: mov ecx, edi */
    RECOMP_CALL(sub_12143B43); /* 0x12147471: call 0x12143b43 */
    RECOMP_FLAGS_IN();
L_12147476:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12147476: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147478:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12147478: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x12147479: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12147431; /* 0x1214747C: jb 0x12147431 */
L_1214747E:
    edi = POP32_VAL(esp); /* 0x1214747E: pop edi */
L_1214747F:
    eax = ecx; /* 0x1214747F: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x12147481: pop ebx */
L_12147482:
    esi = POP32_VAL(esp); /* 0x12147482: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12147483: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12147484: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1214748C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214748Cu);

L_1214748C:
    edi = edi; /* 0x1214748C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214748E: push ebp */
    ebp = esp; /* 0x1214748F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12147491: push ecx */
    edx = ecx; /* 0x12147492: mov edx, ecx */
    eax = MEM32(edx + 0x1C); /* 0x12147494: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0x4)) = edx; /* 0x12147497: mov dword ptr [ebp - 4], edx */
    /* test eax, eax */ /* 0x1214749A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214750C; /* 0x1214749C: je 0x1214750c */
L_1214749E:
    PUSH32(esp, ebx); /* 0x1214749E: push ebx */
    ebx = MEM32(eax); /* 0x1214749F: mov ebx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121474A1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121474A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121474A4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x121474A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147508; /* 0x121474A8: je 0x12147508 */
L_121474AA:
    PUSH32(esp, esi); /* 0x121474AA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121474AB: mov esi, dword ptr [ebp + 8] */
L_121474AE:
    eax = MEM32(edx + 0x1C); /* 0x121474AE: mov eax, dword ptr [edx + 0x1c] */
    ecx = MEM32(eax + 0xC); /* 0x121474B1: mov ecx, dword ptr [eax + 0xc] */
    ecx = MEM32(ecx + edi * 4); /* 0x121474B4: mov ecx, dword ptr [ecx + edi*4] */
    PUSH32(esp, edx); /* 0x121474B7: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121474B8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121474BB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121474BE: push esi */
    RECOMP_CALL(sub_121473F7); /* 0x121474BF: call 0x121473f7 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x121474C4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x121474C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147507; /* 0x121474C8: jne 0x12147507 */
L_121474CA:
    eax = MEM32(esi + 0x40); /* 0x121474CA: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121474CD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121474DF; /* 0x121474CE: jne 0x121474df */
L_121474D0:
    eax = (uint32_t)MEM8(0x12010F59); /* 0x121474D0: movzx eax, byte ptr [0x12010f59] */
    PUSH32(esp, eax); /* 0x121474D7: push eax */
    ecx = esi; /* 0x121474D8: mov ecx, esi */
    RECOMP_CALL(sub_121427F8); /* 0x121474DA: call 0x121427f8 */
    RECOMP_FLAGS_IN();
L_121474DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121474DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x121474E1: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121474FF; /* 0x121474E4: je 0x121474ff */
L_121474E6:
    eax = ebx + (-0x1); /* 0x121474E6: lea eax, [ebx - 1] */
    /* cmp edi, eax */ /* 0x121474E9: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121474FF; /* 0x121474EB: je 0x121474ff */
L_121474ED:
    eax = MEM32(esi + 0x40); /* 0x121474ED: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121474F0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121474FD; /* 0x121474F1: jne 0x121474fd */
L_121474F3:
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x121474F3: push dword ptr [esi + 0x58] */
    ecx = esi; /* 0x121474F6: mov ecx, esi */
    RECOMP_CALL(sub_12143B43); /* 0x121474F8: call 0x12143b43 */
    RECOMP_FLAGS_IN();
L_121474FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121474FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121474FF:
    edx = MEM32(ebp + (-0x4)); /* 0x121474FF: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12147502: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x12147503: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121474AE; /* 0x12147505: jb 0x121474ae */
L_12147507:
    esi = POP32_VAL(esp); /* 0x12147507: pop esi */
L_12147508:
    edi = POP32_VAL(esp); /* 0x12147508: pop edi */
    eax = ecx; /* 0x12147509: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1214750B: pop ebx */
L_1214750C:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214750C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214750D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12147515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147515u);

L_12147515:
    edi = edi; /* 0x12147515: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147517: push esi */
    esi = ecx; /* 0x12147518: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214751A: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x120111E4u; /* 0x1214751E: mov dword ptr [esi], 0x120111e4 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214752F; /* 0x12147524: je 0x1214752f */
L_12147526:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12147526: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12147529: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214752E: pop ecx */
L_1214752F:
    PUSH32(esp, edi); /* 0x1214752F: push edi */
    edi = MEM32(esi + 0x1C); /* 0x12147530: mov edi, dword ptr [esi + 0x1c] */
    /* test edi, edi */ /* 0x12147533: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147545; /* 0x12147535: je 0x12147545 */
L_12147537:
    ecx = edi; /* 0x12147537: mov ecx, edi */
    RECOMP_CALL(sub_1214378D); /* 0x12147539: call 0x1214378d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1214753E: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1214753F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147544: pop ecx */
L_12147545:
    esi = MEM32(esi + 0x20); /* 0x12147545: mov esi, dword ptr [esi + 0x20] */
    edi = POP32_VAL(esp); /* 0x12147548: pop edi */
    /* test esi, esi */ /* 0x12147549: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214755B; /* 0x1214754B: je 0x1214755b */
L_1214754D:
    ecx = esi; /* 0x1214754D: mov ecx, esi */
    RECOMP_CALL(sub_12143755); /* 0x1214754F: call 0x12143755 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12147554: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147555: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214755A: pop ecx */
L_1214755B:
    esi = POP32_VAL(esp); /* 0x1214755B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214755C: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147562u);

L_12147562:
    edi = edi; /* 0x12147562: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147564: push ebp */
    ebp = esp; /* 0x12147565: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147567: push esi */
    esi = ecx; /* 0x12147568: mov esi, ecx */
    RECOMP_CALL(sub_12147515); /* 0x1214756A: call 0x12147515 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214756F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214757C; /* 0x12147573: je 0x1214757c */
L_12147575:
    PUSH32(esp, esi); /* 0x12147575: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147576: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214757B: pop ecx */
L_1214757C:
    eax = esi; /* 0x1214757C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214757E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214757F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147580: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147588u);

L_12147588:
    edi = edi; /* 0x12147588: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214758A: push ebp */
    ebp = esp; /* 0x1214758B: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1214758D: pop ebp */
    goto L_121BF524; /* 0x1214758E: jmp 0x121bf524 */
L_121BF524:
    { _itail_tgt = (uint32_t)(MEM32(0x12001294)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12147598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147598u);

L_12147598:
    edi = edi; /* 0x12147598: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214759A: push ebp */
    ebp = esp; /* 0x1214759B: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1214759D: pop ebp */
    goto L_121BF586; /* 0x1214759E: jmp 0x121bf586 */
L_121BF586:
    { _itail_tgt = (uint32_t)(MEM32(0x12001284)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121475A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121475A8u);

L_121475A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121475A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121475AA: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121475AC: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121475AF: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121475B2: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x121475B5: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x121475B8: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x18) = eax; /* 0x121475BB: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x121475BE: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = eax; /* 0x121475C1: mov dword ptr [ecx + 0x20], eax */
    eax = ecx; /* 0x121475C4: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121475C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_121475CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121475CCu);

L_121475CC:
    edi = edi; /* 0x121475CC: mov edi, edi */
    PUSH32(esp, esi); /* 0x121475CE: push esi */
    esi = ecx; /* 0x121475CF: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x121475D1: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121475E0; /* 0x121475D5: je 0x121475e0 */
L_121475D7:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121475D7: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x121475DA: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121475DF: pop ecx */
L_121475E0:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x121475E0: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121475EF; /* 0x121475E4: je 0x121475ef */
L_121475E6:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121475E6: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x121475E9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121475EE: pop ecx */
L_121475EF:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x121475EF: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121475FE; /* 0x121475F3: je 0x121475fe */
L_121475F5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x121475F5: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121475F8: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121475FD: pop ecx */
L_121475FE:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x121475FE: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214760D; /* 0x12147602: je 0x1214760d */
L_12147604:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x12147604: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_121BF586); /* 0x12147607: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214760C: pop ecx */
L_1214760D:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x1214760D: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214761C; /* 0x12147611: je 0x1214761c */
L_12147613:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x12147613: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_121BF586); /* 0x12147616: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214761B: pop ecx */
L_1214761C:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x1214761C: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214762B; /* 0x12147620: je 0x1214762b */
L_12147622:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x12147622: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF586); /* 0x12147625: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214762A: pop ecx */
L_1214762B:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1214762B: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214763A; /* 0x1214762F: je 0x1214763a */
L_12147631:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x12147631: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_121BF586); /* 0x12147634: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147639: pop ecx */
L_1214763A:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x1214763A: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147649; /* 0x1214763E: je 0x12147649 */
L_12147640:
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12147640: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_121BF586); /* 0x12147643: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147648: pop ecx */
L_12147649:
    /* cmp MEM32(esi), 0 */ /* 0x12147649: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214765A; /* 0x1214764C: je 0x1214765a */
L_1214764E:
    PUSH32(esp, 0x12147598u); /* 0x1214764E: push 0x12147598 */
    PUSH32(esp, MEM32(esi)); /* 0x12147653: push dword ptr [esi] */
    RECOMP_CALL(sub_1214CA9A); /* 0x12147655: call 0x1214ca9a */
    RECOMP_FLAGS_IN();
L_1214765A:
    esi = POP32_VAL(esp); /* 0x1214765A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214765B: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147661u);

L_12147661:
    edi = edi; /* 0x12147661: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147663: push esi */
    PUSH32(esp, edi); /* 0x12147664: push edi */
    PUSH32(esp, 0x12147588u); /* 0x12147665: push 0x12147588 */
    esi = ecx; /* 0x1214766A: mov esi, ecx */
    RECOMP_CALL(sub_1214C9BB); /* 0x1214766C: call 0x1214c9bb */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12147671: mov edi, eax */
    MEM32(esi) = edi; /* 0x12147673: mov dword ptr [esi], edi */
    /* test edi, edi */ /* 0x12147675: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214771B; /* 0x12147677: je 0x1214771b */
L_1214767D:
    PUSH32(esp, ebx); /* 0x1214767D: push ebx */
    PUSH32(esp, 0x8000u); /* 0x1214767E: push 0x8000 */
    RECOMP_CALL(sub_121BF524); /* 0x12147683: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12147688: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1214768A: pop ecx */
    MEM32(esi + 0x4) = ebx; /* 0x1214768B: mov dword ptr [esi + 4], ebx */
    /* test ebx, ebx */ /* 0x1214768E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x12147690: je 0x12147703 */
L_12147692:
    PUSH32(esp, 0x8000u); /* 0x12147692: push 0x8000 */
    RECOMP_CALL(sub_121BF524); /* 0x12147697: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214769C: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x1214769D: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x121476A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x121476A2: je 0x12147703 */
L_121476A4:
    PUSH32(esp, eax); /* 0x121476A4: push eax */
    PUSH32(esp, ebx); /* 0x121476A5: push ebx */
    PUSH32(esp, edi); /* 0x121476A6: push edi */
    RECOMP_CALL(sub_1214CAAF); /* 0x121476A7: call 0x1214caaf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121476AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147703; /* 0x121476AE: jne 0x12147703 */
L_121476B0:
    edi = 0x00010000u; /* 0x121476B0: mov edi, 0x10000 */
    PUSH32(esp, edi); /* 0x121476B5: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x121476B6: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121476BB: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x121476BC: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x121476BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x121476C1: je 0x12147703 */
L_121476C3:
    PUSH32(esp, 0x8008u); /* 0x121476C3: push 0x8008 */
    RECOMP_CALL(sub_121BF524); /* 0x121476C8: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121476CD: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x121476CE: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x121476D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x121476D3: je 0x12147703 */
L_121476D5:
    PUSH32(esp, 0x200u); /* 0x121476D5: push 0x200 */
    RECOMP_CALL(sub_121BF524); /* 0x121476DA: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121476DF: pop ecx */
    MEM32(esi + 0x14) = eax; /* 0x121476E0: mov dword ptr [esi + 0x14], eax */
    /* test eax, eax */ /* 0x121476E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x121476E5: je 0x12147703 */
L_121476E7:
    PUSH32(esp, edi); /* 0x121476E7: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x121476E8: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121476ED: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x121476EE: mov dword ptr [esi + 0x18], eax */
    /* test eax, eax */ /* 0x121476F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147703; /* 0x121476F3: je 0x12147703 */
L_121476F5:
    PUSH32(esp, edi); /* 0x121476F5: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x121476F6: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121476FB: pop ecx */
    MEM32(esi + 0x1C) = eax; /* 0x121476FC: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x121476FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147707; /* 0x12147701: jne 0x12147707 */
L_12147703:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147703: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214771A; /* 0x12147705: jmp 0x1214771a */
L_12147707:
    PUSH32(esp, edi); /* 0x12147707: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x12147708: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214770D: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214770E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12147710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12147712: setne cl */
    MEM32(esi + 0x20) = eax; /* 0x12147715: mov dword ptr [esi + 0x20], eax */
    eax = ecx; /* 0x12147718: mov eax, ecx */
L_1214771A:
    ebx = POP32_VAL(esp); /* 0x1214771A: pop ebx */
L_1214771B:
    edi = POP32_VAL(esp); /* 0x1214771B: pop edi */
    esi = POP32_VAL(esp); /* 0x1214771C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214771D: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147723u);

L_12147723:
    edi = edi; /* 0x12147723: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147725: push ebp */
    ebp = esp; /* 0x12147726: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x12147728: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214772B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12147730: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12147732: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x12147735: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12147738: push ebx */
    ebx = ecx; /* 0x12147739: mov ebx, ecx */
    MEM32(ebp + (-0x34)) = eax; /* 0x1214773B: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebx + 0xC); /* 0x1214773E: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x12147741: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12147742: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x12147745: mov dword ptr [ebp - 0x2c], eax */
    eax = ebp + (-0x38); /* 0x12147748: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1214774B: push eax */
    PUSH32(esp, esi); /* 0x1214774C: push esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1214774D: mov dword ptr [ebp - 0x24], esi */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x12147750: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x12147754: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1214775A: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1214775E: mov dword ptr [ebp - 0x3c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_12147772; /* 0x12147761: jl 0x12147772 */
L_12147763:
    if (CMP_G(_flag_a, _flag_b)) goto L_1214776A; /* 0x12147763: jg 0x1214776a */
L_12147765:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12147765: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12147772; /* 0x12147768: jbe 0x12147772 */
L_1214776A:
    PUSH32(esp, 0xEu); /* 0x1214776A: push 0xe */
    eax = POP32_VAL(esp); /* 0x1214776C: pop eax */
    goto L_12147895; /* 0x1214776D: jmp 0x12147895 */
L_12147772:
    PUSH32(esp, 0); /* 0x12147772: push 0 */
    MEM32(ebp + (-0x30)) = eax; /* 0x12147774: mov dword ptr [ebp - 0x30], eax */
    eax = ebp + (-0x18); /* 0x12147777: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1214777A: push eax */
    PUSH32(esp, 0x10u); /* 0x1214777B: push 0x10 */
    eax = ebp + (-0x14); /* 0x1214777D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x12147780: push eax */
    PUSH32(esp, esi); /* 0x12147781: push esi */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x12147782: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147788: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147796; /* 0x1214778A: jne 0x12147796 */
L_1214778C:
    eax = 0x8876038Fu; /* 0x1214778C: mov eax, 0x8876038f */
    goto L_12147895; /* 0x12147791: jmp 0x12147895 */
L_12147796:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x12147796: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214776A; /* 0x1214779A: jne 0x1214776a */
L_1214779C:
    PUSH32(esp, edi); /* 0x1214779C: push edi */
    PUSH32(esp, 0); /* 0x1214779D: push 0 */
    esi = 0x120111ECu; /* 0x1214779F: mov esi, 0x120111ec */
    edi = ebp + (-0xB); /* 0x121477A4: lea edi, [ebp - 0xb] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x121477A7: movsw word ptr es:[edi], word ptr [esi] */
    eax = ebp + (-0x1C); /* 0x121477A9: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x121477AC: push eax */
    PUSH32(esp, 0x10u); /* 0x121477AD: push 0x10 */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x121477AF: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x34)); /* 0x121477B0: mov esi, dword ptr [ebp - 0x34] */
    edi = MEM32(0x120010DC); /* 0x121477B3: mov edi, dword ptr [0x120010dc] */
    eax = ebp + (-0x14); /* 0x121477B9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x121477BC: push eax */
    PUSH32(esp, esi); /* 0x121477BD: push esi */
    RECOMP_ICALL(edi); /* 0x121477BE: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121477C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214788F; /* 0x121477C2: je 0x1214788f */
L_121477C8:
    PUSH32(esp, 0); /* 0x121477C8: push 0 */
    eax = ebp + (-0x1C); /* 0x121477CA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x121477CD: push eax */
    PUSH32(esp, 4); /* 0x121477CE: push 4 */
    eax = ebp + (-0x30); /* 0x121477D0: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x121477D3: push eax */
    PUSH32(esp, esi); /* 0x121477D4: push esi */
    RECOMP_ICALL(edi); /* 0x121477D5: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121477D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214788F; /* 0x121477D9: je 0x1214788f */
L_121477DF:
    PUSH32(esp, 0); /* 0x121477DF: push 0 */
    eax = ebp + (-0x18); /* 0x121477E1: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x121477E4: push eax */
    PUSH32(esp, 0x8000u); /* 0x121477E5: push 0x8000 */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x121477EA: push dword ptr [ebp - 0x2c] */
    goto L_1214787E; /* 0x121477ED: jmp 0x1214787e */
L_121477F2:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x121477F2: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121478AC; /* 0x121477F6: je 0x121478ac */
L_121477FC:
    eax = ebp + (-0x20); /* 0x121477FC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121477FF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x12147800: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x12147803: push dword ptr [ebx + 0x20] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x12147806: push dword ptr [ebx + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x12147809: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1214780C: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0x8008u); /* 0x1214780F: push 0x8008 */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x12147814: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x12147817: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1214781A: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx)); /* 0x1214781D: push dword ptr [ebx] */
    RECOMP_CALL(sub_1214DFCA); /* 0x1214781F: call 0x1214dfca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147824: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121478A5; /* 0x12147826: jne 0x121478a5 */
L_12147828:
    PUSH32(esp, eax); /* 0x12147828: push eax */
    eax = ebp + (-0x1C); /* 0x12147829: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1214782C: push eax */
    PUSH32(esp, 2); /* 0x1214782D: push 2 */
    eax = ebp + (-0x18); /* 0x1214782F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12147832: push eax */
    PUSH32(esp, esi); /* 0x12147833: push esi */
    RECOMP_ICALL(edi); /* 0x12147834: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214788F; /* 0x12147838: je 0x1214788f */
L_1214783A:
    PUSH32(esp, 0); /* 0x1214783A: push 0 */
    eax = ebp + (-0x1C); /* 0x1214783C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1214783F: push eax */
    PUSH32(esp, 2); /* 0x12147840: push 2 */
    eax = ebp + (-0x20); /* 0x12147842: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12147845: push eax */
    PUSH32(esp, esi); /* 0x12147846: push esi */
    RECOMP_ICALL(edi); /* 0x12147847: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147849: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214788F; /* 0x1214784B: je 0x1214788f */
L_1214784D:
    PUSH32(esp, 0); /* 0x1214784D: push 0 */
    eax = ebp + (-0x1C); /* 0x1214784F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x12147852: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x12147853: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x12147856: push dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x12147859: push esi */
    RECOMP_ICALL(edi); /* 0x1214785A: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214785C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214788F; /* 0x1214785E: je 0x1214788f */
L_12147860:
    eax = MEM32(ebp + (-0x1C)); /* 0x12147860: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x12147863: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121478A5; /* 0x12147866: jne 0x121478a5 */
L_12147868:
    eax = MEM32(ebx + 0xC); /* 0x12147868: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0); /* 0x1214786B: push 0 */
    ecx = ebp + (-0x18); /* 0x1214786D: lea ecx, [ebp - 0x18] */
    edx = 0x8000u; /* 0x12147870: mov edx, 0x8000 */
    PUSH32(esp, ecx); /* 0x12147875: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12147876: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x12147878: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x12147879: mov byte ptr [ebp - 0x28], 1 */
    PUSH32(esp, eax); /* 0x1214787D: push eax */
L_1214787E:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1214787E: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x12147881: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147887: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121477F2; /* 0x12147889: jne 0x121477f2 */
L_1214788F:
    eax = 0x8876038Fu; /* 0x1214788F: mov eax, 0x8876038f */
L_12147894:
    edi = POP32_VAL(esp); /* 0x12147894: pop edi */
L_12147895:
    ecx = MEM32(ebp + (-0x4)); /* 0x12147895: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x12147898: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12147899: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214789B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214789C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121478A1: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121478A2: ret 8 */
L_121478A5:
    eax = 0x8007000Eu; /* 0x121478A5: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_12147894; /* 0x121478AA: jmp 0x12147894 */
L_121478AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121478AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_12147894; /* 0x121478AE: jmp 0x12147894 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121478B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121478B5u);

L_121478B5:
    edi = edi; /* 0x121478B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121478B7: push ebp */
    ebp = esp; /* 0x121478B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x130u; /* 0x121478BA: sub esp, 0x130 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121478C0: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121478C5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121478C7: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x121478CA: push ebx */
    PUSH32(esp, edi); /* 0x121478CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121478CC: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x108); /* 0x121478CF: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x121478D5: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121478D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121478D8: push ebx */
    PUSH32(esp, 0x120111F4u); /* 0x121478D9: push 0x120111f4 */
    PUSH32(esp, 0x120111F0u); /* 0x121478DE: push 0x120111f0 */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x121478E3: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121478E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121478F7; /* 0x121478EB: jne 0x121478f7 */
L_121478ED:
    eax = 0x88760387u; /* 0x121478ED: mov eax, 0x88760387 */
    goto L_121479C8; /* 0x121478F2: jmp 0x121479c8 */
L_121478F7:
    PUSH32(esp, esi); /* 0x121478F7: push esi */
    esi = MEM32(0x120010E8); /* 0x121478F8: mov esi, dword ptr [0x120010e8] */
    PUSH32(esp, ebx); /* 0x121478FE: push ebx */
    PUSH32(esp, 0x80u); /* 0x121478FF: push 0x80 */
    PUSH32(esp, 2); /* 0x12147904: push 2 */
    PUSH32(esp, ebx); /* 0x12147906: push ebx */
    PUSH32(esp, ebx); /* 0x12147907: push ebx */
    PUSH32(esp, 0x40000000u); /* 0x12147908: push 0x40000000 */
    eax = ebp + (-0x108); /* 0x1214790D: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12147913: push eax */
    RECOMP_ICALL(esi); /* 0x12147914: call esi */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12147916: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x12147918: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147927; /* 0x1214791B: jne 0x12147927 */
L_1214791D:
    eax = 0x8876038Fu; /* 0x1214791D: mov eax, 0x8876038f */
    goto L_121479C7; /* 0x12147922: jmp 0x121479c7 */
L_12147927:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147927: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12147929: push eax */
    PUSH32(esp, eax); /* 0x1214792A: push eax */
    PUSH32(esp, 3); /* 0x1214792B: push 3 */
    PUSH32(esp, eax); /* 0x1214792D: push eax */
    PUSH32(esp, 1); /* 0x1214792E: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x12147930: push 0x80000000 */
    PUSH32(esp, edi); /* 0x12147935: push edi */
    RECOMP_ICALL(esi); /* 0x12147936: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147938: mov esi, eax */
    MEM32(ebp + (-0x10C)) = esi; /* 0x1214793A: mov dword ptr [ebp - 0x10c], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x12147940: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214794C; /* 0x12147943: jne 0x1214794c */
L_12147945:
    esi = 0x8876038Fu; /* 0x12147945: mov esi, 0x8876038f */
    goto L_1214798D; /* 0x1214794A: jmp 0x1214798d */
L_1214794C:
    ecx = ebp + (-0x130); /* 0x1214794C: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_121475A8); /* 0x12147952: call 0x121475a8 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12147661); /* 0x12147957: call 0x12147661 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214795C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147967; /* 0x1214795E: jne 0x12147967 */
L_12147960:
    esi = 0x8007000Eu; /* 0x12147960: mov esi, 0x8007000e */
    goto L_12147976; /* 0x12147965: jmp 0x12147976 */
L_12147967:
    PUSH32(esp, ebx); /* 0x12147967: push ebx */
    PUSH32(esp, esi); /* 0x12147968: push esi */
    ecx = ebp + (-0x130); /* 0x12147969: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_12147723); /* 0x1214796F: call 0x12147723 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147974: mov esi, eax */
L_12147976:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x12147976: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x1214797C: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x130); /* 0x12147982: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_121475CC); /* 0x12147988: call 0x121475cc */
    RECOMP_FLAGS_IN();
L_1214798D:
    PUSH32(esp, ebx); /* 0x1214798D: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x1214798E: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x12147994: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121479A7; /* 0x12147996: jns 0x121479a7 */
L_12147998:
    eax = ebp + (-0x108); /* 0x12147998: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x1214799E: push eax */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x1214799F: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    goto L_121479C5; /* 0x121479A5: jmp 0x121479c5 */
L_121479A7:
    PUSH32(esp, edi); /* 0x121479A7: push edi */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x121479A8: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121479AE: push edi */
    eax = ebp + (-0x108); /* 0x121479AF: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x121479B5: push eax */
    RECOMP_ICALL(MEM32(0x120010E4)); /* 0x121479B6: call dword ptr [0x120010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121479BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121479C5; /* 0x121479BE: jne 0x121479c5 */
L_121479C0:
    esi = 0x8876038Fu; /* 0x121479C0: mov esi, 0x8876038f */
L_121479C5:
    eax = esi; /* 0x121479C5: mov eax, esi */
L_121479C7:
    esi = POP32_VAL(esp); /* 0x121479C7: pop esi */
L_121479C8:
    ecx = MEM32(ebp + (-0x4)); /* 0x121479C8: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121479CB: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121479CC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121479CE: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121479CF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121479D4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121479D5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121479DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121479DDu);

L_121479DD:
    edi = edi; /* 0x121479DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121479DF: push ebp */
    ebp = esp; /* 0x121479E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x234u; /* 0x121479E2: sub esp, 0x234 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121479E8: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121479ED: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121479EF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x121479F2: push ebx */
    PUSH32(esp, edi); /* 0x121479F3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121479F4: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x20C); /* 0x121479F7: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x121479FD: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121479FE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12147A00: push ebx */
    PUSH32(esp, 0x120111FCu); /* 0x12147A01: push 0x120111fc */
    PUSH32(esp, 0x120111F8u); /* 0x12147A06: push 0x120111f8 */
    RECOMP_ICALL(MEM32(0x12001148)); /* 0x12147A0B: call dword ptr [0x12001148] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147A11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147A1F; /* 0x12147A13: jne 0x12147a1f */
L_12147A15:
    eax = 0x88760387u; /* 0x12147A15: mov eax, 0x88760387 */
    goto L_12147AF0; /* 0x12147A1A: jmp 0x12147af0 */
L_12147A1F:
    PUSH32(esp, esi); /* 0x12147A1F: push esi */
    esi = MEM32(0x120010C8); /* 0x12147A20: mov esi, dword ptr [0x120010c8] */
    PUSH32(esp, ebx); /* 0x12147A26: push ebx */
    PUSH32(esp, 0x80u); /* 0x12147A27: push 0x80 */
    PUSH32(esp, 2); /* 0x12147A2C: push 2 */
    PUSH32(esp, ebx); /* 0x12147A2E: push ebx */
    PUSH32(esp, ebx); /* 0x12147A2F: push ebx */
    PUSH32(esp, 0x40000000u); /* 0x12147A30: push 0x40000000 */
    eax = ebp + (-0x20C); /* 0x12147A35: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x12147A3B: push eax */
    RECOMP_ICALL(esi); /* 0x12147A3C: call esi */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12147A3E: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x12147A40: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147A4F; /* 0x12147A43: jne 0x12147a4f */
L_12147A45:
    eax = 0x8876038Fu; /* 0x12147A45: mov eax, 0x8876038f */
    goto L_12147AEF; /* 0x12147A4A: jmp 0x12147aef */
L_12147A4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147A4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12147A51: push eax */
    PUSH32(esp, eax); /* 0x12147A52: push eax */
    PUSH32(esp, 3); /* 0x12147A53: push 3 */
    PUSH32(esp, eax); /* 0x12147A55: push eax */
    PUSH32(esp, 1); /* 0x12147A56: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x12147A58: push 0x80000000 */
    PUSH32(esp, edi); /* 0x12147A5D: push edi */
    RECOMP_ICALL(esi); /* 0x12147A5E: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147A60: mov esi, eax */
    MEM32(ebp + (-0x210)) = esi; /* 0x12147A62: mov dword ptr [ebp - 0x210], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x12147A68: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147A74; /* 0x12147A6B: jne 0x12147a74 */
L_12147A6D:
    esi = 0x8876038Fu; /* 0x12147A6D: mov esi, 0x8876038f */
    goto L_12147AB5; /* 0x12147A72: jmp 0x12147ab5 */
L_12147A74:
    ecx = ebp + (-0x234); /* 0x12147A74: lea ecx, [ebp - 0x234] */
    RECOMP_CALL(sub_121475A8); /* 0x12147A7A: call 0x121475a8 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12147661); /* 0x12147A7F: call 0x12147661 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147A84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147A8F; /* 0x12147A86: jne 0x12147a8f */
L_12147A88:
    esi = 0x8007000Eu; /* 0x12147A88: mov esi, 0x8007000e */
    goto L_12147A9E; /* 0x12147A8D: jmp 0x12147a9e */
L_12147A8F:
    PUSH32(esp, ebx); /* 0x12147A8F: push ebx */
    PUSH32(esp, esi); /* 0x12147A90: push esi */
    ecx = ebp + (-0x234); /* 0x12147A91: lea ecx, [ebp - 0x234] */
    RECOMP_CALL(sub_12147723); /* 0x12147A97: call 0x12147723 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147A9C: mov esi, eax */
L_12147A9E:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x12147A9E: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12147AA4: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x234); /* 0x12147AAA: lea ecx, [ebp - 0x234] */
    RECOMP_CALL(sub_121475CC); /* 0x12147AB0: call 0x121475cc */
    RECOMP_FLAGS_IN();
L_12147AB5:
    PUSH32(esp, ebx); /* 0x12147AB5: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12147AB6: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x12147ABC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12147ACF; /* 0x12147ABE: jns 0x12147acf */
L_12147AC0:
    eax = ebp + (-0x20C); /* 0x12147AC0: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x12147AC6: push eax */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12147AC7: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    goto L_12147AED; /* 0x12147ACD: jmp 0x12147aed */
L_12147ACF:
    PUSH32(esp, edi); /* 0x12147ACF: push edi */
    RECOMP_ICALL(MEM32(0x12001080)); /* 0x12147AD0: call dword ptr [0x12001080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12147AD6: push edi */
    eax = ebp + (-0x20C); /* 0x12147AD7: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x12147ADD: push eax */
    RECOMP_ICALL(MEM32(0x12001144)); /* 0x12147ADE: call dword ptr [0x12001144] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147AE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147AED; /* 0x12147AE6: jne 0x12147aed */
L_12147AE8:
    esi = 0x8876038Fu; /* 0x12147AE8: mov esi, 0x8876038f */
L_12147AED:
    eax = esi; /* 0x12147AED: mov eax, esi */
L_12147AEF:
    esi = POP32_VAL(esp); /* 0x12147AEF: pop esi */
L_12147AF0:
    ecx = MEM32(ebp + (-0x4)); /* 0x12147AF0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12147AF3: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12147AF4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12147AF6: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12147AF7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12147AFC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147AFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147B05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147B05u);

L_12147B05:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x12147B05: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x12147B08: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x12147B0C: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147B0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147B14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147B14u);

L_12147B14:
    edi = edi; /* 0x12147B14: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147B16: push esi */
    esi = ecx; /* 0x12147B17: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x12147B19: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147B28; /* 0x12147B1D: je 0x12147b28 */
L_12147B1F:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12147B1F: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12147B22: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147B27: pop ecx */
L_12147B28:
    /* cmp MEM32(esi), 0 */ /* 0x12147B28: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147B39; /* 0x12147B2B: je 0x12147b39 */
L_12147B2D:
    PUSH32(esp, 0x12147598u); /* 0x12147B2D: push 0x12147598 */
    PUSH32(esp, MEM32(esi)); /* 0x12147B32: push dword ptr [esi] */
    RECOMP_CALL(sub_1214CA9A); /* 0x12147B34: call 0x1214ca9a */
    RECOMP_FLAGS_IN();
L_12147B39:
    esi = POP32_VAL(esp); /* 0x12147B39: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147B3A: ret  */
    RECOMP_REGS_OUT();
}
