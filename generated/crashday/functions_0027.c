#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005C8890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8890u);

L_005C8890:
    PUSH32(esp, ebp); /* 0x005C8890: push ebp */
    ebp = esp; /* 0x005C8891: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005C8893: push ecx */
    PUSH32(esp, ebx); /* 0x005C8894: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x005C8895: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x005C8898: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005C8899: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005C889C: push edi */
    edi = MEM32(ebp + 0x14); /* 0x005C889D: mov edi, dword ptr [ebp + 0x14] */
    /* cmp ebx, 0x110u */ /* 0x005C88A0: cmp ebx, 0x110 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C88B2; /* 0x005C88A6: jne 0x5c88b2 */
L_005C88A8:
    PUSH32(esp, edi); /* 0x005C88A8: push edi */
    PUSH32(esp, 0xFFFFFFEBu); /* 0x005C88A9: push -0x15 */
    PUSH32(esp, esi); /* 0x005C88AB: push esi */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x005C88AC: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
L_005C88B2:
    PUSH32(esp, 0xFFFFFFEBu); /* 0x005C88B2: push -0x15 */
    PUSH32(esp, esi); /* 0x005C88B4: push esi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x005C88B5: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005C88BB: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005C88BC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x005C88BF: push ebx */
    PUSH32(esp, esi); /* 0x005C88C0: push esi */
    /* test eax, eax */ /* 0x005C88C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C88D4; /* 0x005C88C3: je 0x5c88d4 */
L_005C88C5:
    ecx = eax; /* 0x005C88C5: mov ecx, eax */
    RECOMP_CALL(sub_005C8730); /* 0x005C88C7: call 0x5c8730 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005C88CC: pop edi */
    esi = POP32_VAL(esp); /* 0x005C88CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C88CE: pop ebx */
    ecx = POP32_VAL(esp); /* 0x005C88CF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005C88D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005C88D1: ret 0x10 */
L_005C88D4:
    RECOMP_ICALL(MEM32(0x7CC700)); /* 0x005C88D4: call dword ptr [0x7cc700] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005C88DA: pop edi */
    esi = POP32_VAL(esp); /* 0x005C88DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C88DC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x005C88DD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005C88DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005C88DF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005C88F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C88F0u);

L_005C88F0:
    PUSH32(esp, ebp); /* 0x005C88F0: push ebp */
    ebp = esp; /* 0x005C88F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C88F3: push esi */
    esi = ecx; /* 0x005C88F4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C88F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C88F8: push -1 */
    PUSH32(esp, eax); /* 0x005C88FA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C88FB: push dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 7; /* 0x005C88FE: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C8905: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C890C: mov word ptr [esi], ax */
    RECOMP_CALL(sub_005C9000); /* 0x005C890F: call 0x5c9000 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005C8914: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C8916: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C8917: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8918: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C8920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8920u);

L_005C8920:
    PUSH32(esp, ebp); /* 0x005C8920: push ebp */
    ebp = esp; /* 0x005C8921: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x005C8923: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C8926: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x005C8928: push esi */
    esi = ecx; /* 0x005C8929: mov esi, ecx */
    MEM32(esi + 0x14) = 7; /* 0x005C892B: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C8932: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C8939: mov word ptr [esi], ax */
    /* cmp MEM16(edx), LO16(eax) */ /* 0x005C893C: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8953; /* 0x005C893F: jne 0x5c8953 */
L_005C8941:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C8941: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x005C8943: push ecx */
    PUSH32(esp, edx); /* 0x005C8944: push edx */
    ecx = esi; /* 0x005C8945: mov ecx, esi */
    RECOMP_CALL(sub_005C9540); /* 0x005C8947: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005C894C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C894E: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C894F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8950: ret 4 */
L_005C8953:
    ecx = edx; /* 0x005C8953: mov ecx, edx */
    PUSH32(esp, edi); /* 0x005C8955: push edi */
    edi = ecx + 0x2; /* 0x005C8956: lea edi, [ecx + 2] */
    esp = esp; /* 0x005C8959: lea esp, [esp] */
L_005C8960:
    SET_LO16(eax, MEM16(ecx)); /* 0x005C8960: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x005C8963: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x005C8966: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C8960; /* 0x005C8969: jne 0x5c8960 */
L_005C896B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005C896B: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005C896D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    edi = POP32_VAL(esp); /* 0x005C896F: pop edi */
    PUSH32(esp, ecx); /* 0x005C8970: push ecx */
    PUSH32(esp, edx); /* 0x005C8971: push edx */
    ecx = esi; /* 0x005C8972: mov ecx, esi */
    RECOMP_CALL(sub_005C9540); /* 0x005C8974: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005C8979: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C897B: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C897C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C897D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C8980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8980u);

L_005C8980:
    goto L_005C9270; /* 0x005C8980: jmp 0x5c9270 */
L_005C9270:
    PUSH32(esp, esi); /* 0x005C9270: push esi */
    PUSH32(esp, edi); /* 0x005C9271: push edi */
    edi = ecx; /* 0x005C9272: mov edi, ecx */
    esi = MEM32(edi); /* 0x005C9274: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x005C9276: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C92B0; /* 0x005C9278: je 0x5c92b0 */
L_005C927A:
    PUSH32(esp, ebx); /* 0x005C927A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x005C927B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x005C927E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9290; /* 0x005C9280: je 0x5c9290 */
L_005C9282:
    ecx = esi; /* 0x005C9282: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C9284: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C9289: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C928C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9282; /* 0x005C928E: jne 0x5c9282 */
L_005C9290:
    PUSH32(esp, MEM32(edi)); /* 0x005C9290: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9292: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9298: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x005C929B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005C92A1: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005C92A8: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x005C92AF: pop ebx */
L_005C92B0:
    edi = POP32_VAL(esp); /* 0x005C92B0: pop edi */
    esi = POP32_VAL(esp); /* 0x005C92B1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C92B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C8990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8990u);

L_005C8990:
    PUSH32(esp, ebp); /* 0x005C8990: push ebp */
    ebp = esp; /* 0x005C8991: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8993: push -1 */
    PUSH32(esp, 0x007AD750u); /* 0x005C8995: push 0x7ad750 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C899A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C89A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005C89A1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C89A4: push ebx */
    PUSH32(esp, esi); /* 0x005C89A5: push esi */
    PUSH32(esp, edi); /* 0x005C89A6: push edi */
    eax = MEM32(0x855000); /* 0x005C89A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C89AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C89AE: push eax */
    eax = ebp + (-0xC); /* 0x005C89AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C89B2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C89B8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005C89BB: mov edi, ecx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x005C89BD: mov dword ptr [ebp - 0x1c], edi */
    ebx = MEM32(ebp + 0x8); /* 0x005C89C0: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x005C89C3: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C8A61; /* 0x005C89C5: je 0x5c8a61 */
L_005C89CB:
    eax = MEM32(ebx); /* 0x005C89CB: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebx + 0x4); /* 0x005C89CD: mov ecx, dword ptr [ebx + 4] */
    /* cmp eax, ecx */ /* 0x005C89D0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C89E0; /* 0x005C89D2: jne 0x5c89e0 */
L_005C89D4:
    ecx = edi; /* 0x005C89D4: mov ecx, edi */
    RECOMP_CALL(sub_005C9100); /* 0x005C89D6: call 0x5c9100 */
    RECOMP_FLAGS_IN();
    goto L_005C8A61; /* 0x005C89DB: jmp 0x5c8a61 */
L_005C89E0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005C89E0: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C89E2: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C89E7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C89E9: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C89EC: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C89EE: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C89EE: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C89F1: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005C89F3: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(edi); /* 0x005C89F6: mov esi, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x005C89F8: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005C89FB: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C89FD: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C8A02: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8A04: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C8A07: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C8A09: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C8A09: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C8A0C: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005C8A0E: mov dword ptr [ebp - 0x18], eax */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x005C8A11: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8A77; /* 0x005C8A14: ja 0x5c8a77 */
L_005C8A16:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8A16: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005C8A19: push esi */
    edx = MEM32(ebx + 0x4); /* 0x005C8A1A: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005C8A1D: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005CAAE0); /* 0x005C8A1F: call 0x5caae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005C8A24: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005C8A27: mov esi, eax */
    eax = MEM32(edi + 0x4); /* 0x005C8A29: mov eax, dword ptr [edi + 4] */
    /* cmp esi, eax */ /* 0x005C8A2C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C8A43; /* 0x005C8A2E: je 0x5c8a43 */
L_005C8A30:
    ebx = eax; /* 0x005C8A30: mov ebx, eax */
L_005C8A32:
    ecx = esi; /* 0x005C8A32: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C8A34: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C8A39: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C8A3C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8A32; /* 0x005C8A3E: jne 0x5c8a32 */
L_005C8A40:
    ebx = MEM32(ebp + 0x8); /* 0x005C8A40: mov ebx, dword ptr [ebp + 8] */
L_005C8A43:
    ecx = MEM32(ebx + 0x4); /* 0x005C8A43: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005C8A46: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C8A48: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C8A4D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8A4F: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C8A52: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C8A54: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C8A54: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C8A57: add eax, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x005C8A59: imul eax, eax, 0x58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x005C8A5C: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
L_005C8A5E:
    MEM32(edi + 0x4) = eax; /* 0x005C8A5E: mov dword ptr [edi + 4], eax */
L_005C8A61:
    eax = edi; /* 0x005C8A61: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8A63: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8A66: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8A6D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C8A6E: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8A6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C8A70: pop ebx */
    esp = ebp; /* 0x005C8A71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8A73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8A74: ret 4 */
L_005C8A77:
    ecx = MEM32(edi + 0x8); /* 0x005C8A77: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005C8A7A: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C8A7C: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C8A81: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8A83: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C8A86: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C8A88: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C8A88: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C8A8B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x005C8A8D: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8ABF; /* 0x005C8A90: ja 0x5c8abf */
L_005C8A92:
    esi = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x58u); /* 0x005C8A92: imul esi, dword ptr [ebp - 0x18], 0x58 */
    ecx = MEM32(ebx); /* 0x005C8A96: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005C8A98: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8A9A: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi)); /* 0x005C8A9D: push dword ptr [edi] */
    edx = esi; /* 0x005C8A9F: mov edx, esi */
    RECOMP_CALL(sub_005CAAE0); /* 0x005C8AA1: call 0x5caae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005C8AA6: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8AA9: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8AAC: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005C8AAD: push dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x4); /* 0x005C8AB0: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x005C8AB3: mov ecx, esi */
    RECOMP_CALL(sub_005CAE60); /* 0x005C8AB5: call 0x5cae60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C8ABA: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005C8A5E; /* 0x005C8ABD: jmp 0x5c8a5e */
L_005C8ABF:
    /* test esi, esi */ /* 0x005C8ABF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8AD7; /* 0x005C8AC1: je 0x5c8ad7 */
L_005C8AC3:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005C8AC3: push dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x005C8AC6: push esi */
    RECOMP_CALL(sub_005C91A0); /* 0x005C8AC7: call 0x5c91a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x005C8ACC: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C8ACE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C8AD4: add esp, 4 */
    _flag_k = FK_ADD;
L_005C8AD7:
    ecx = MEM32(ebx + 0x4); /* 0x005C8AD7: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005C8ADA: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C8ADC: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C8AE1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8AE3: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C8AE6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C8AE8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C8AE8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C8AEB: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005C8AED: push eax */
    ecx = edi; /* 0x005C8AEE: mov ecx, edi */
    RECOMP_CALL(sub_005C9130); /* 0x005C8AF0: call 0x5c9130 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005C8AF5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8A61; /* 0x005C8AF7: je 0x5c8a61 */
L_005C8AFD:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8AFD: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8B04: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8B07: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x005C8B08: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x005C8B0A: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005C8B0D: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005CAE60); /* 0x005C8B0F: call 0x5cae60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C8B14: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005C8B17: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8B1A: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_005C8A61; /* 0x005C8B21: jmp 0x5c8a61 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C8B26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8B26u);

L_005C8B26:
    ecx = MEM32(ebp + (-0x1C)); /* 0x005C8B26: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_005C9270); /* 0x005C8B29: call 0x5c9270 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005C8B2E: push 0 */
    PUSH32(esp, 0); /* 0x005C8B30: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005C8B32: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C8B37u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C8B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8B40u);

L_005C8B40:
    PUSH32(esp, ebp); /* 0x005C8B40: push ebp */
    ebp = esp; /* 0x005C8B41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8B43: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005C8B45: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005C8B4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C8B50: push eax */
    PUSH32(esp, esi); /* 0x005C8B51: push esi */
    PUSH32(esp, edi); /* 0x005C8B52: push edi */
    eax = MEM32(0x855000); /* 0x005C8B53: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C8B58: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C8B5A: push eax */
    eax = ebp + (-0xC); /* 0x005C8B5B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C8B5E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005C8B64: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005C8B66: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005C8B69: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005C8B6C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C8BAC; /* 0x005C8B6E: jae 0x5c8bac */
L_005C8B70:
    eax = MEM32(esi); /* 0x005C8B70: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005C8B72: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8BAC; /* 0x005C8B74: ja 0x5c8bac */
L_005C8B76:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005C8B76: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C8B78: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005C8B7D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8B7F: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    edi = edx; /* 0x005C8B82: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005C8B84: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005C8B84: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005C8B87: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005C8B89: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8B96; /* 0x005C8B8C: jne 0x5c8b96 */
L_005C8B8E:
    PUSH32(esp, ecx); /* 0x005C8B8E: push ecx */
    ecx = esi; /* 0x005C8B8F: mov ecx, esi */
    RECOMP_CALL(sub_005C91D0); /* 0x005C8B91: call 0x5c91d0 */
    RECOMP_FLAGS_IN();
L_005C8B96:
    ecx = MEM32(esi + 0x4); /* 0x005C8B96: mov ecx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x58u); /* 0x005C8B99: imul eax, edi, 0x58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x005C8B9C: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8B9E: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005C8BA5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8BCD; /* 0x005C8BA7: je 0x5c8bcd */
L_005C8BA9:
    PUSH32(esp, eax); /* 0x005C8BA9: push eax */
    goto L_005C8BC8; /* 0x005C8BAA: jmp 0x5c8bc8 */
L_005C8BAC:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005C8BAC: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8BB9; /* 0x005C8BAF: jne 0x5c8bb9 */
L_005C8BB1:
    PUSH32(esp, ecx); /* 0x005C8BB1: push ecx */
    ecx = esi; /* 0x005C8BB2: mov ecx, esi */
    RECOMP_CALL(sub_005C91D0); /* 0x005C8BB4: call 0x5c91d0 */
    RECOMP_FLAGS_IN();
L_005C8BB9:
    ecx = MEM32(esi + 0x4); /* 0x005C8BB9: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005C8BBC: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005C8BC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8BCD; /* 0x005C8BC5: je 0x5c8bcd */
L_005C8BC7:
    PUSH32(esp, edi); /* 0x005C8BC7: push edi */
L_005C8BC8:
    RECOMP_CALL(sub_005C7850); /* 0x005C8BC8: call 0x5c7850 */
    RECOMP_FLAGS_IN();
L_005C8BCD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8BCD: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x58u; /* 0x005C8BD4: add dword ptr [esi + 4], 0x58 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8BD8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8BDB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8BE2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C8BE3: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8BE4: pop esi */
    esp = ebp; /* 0x005C8BE5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8BE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8BE8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C8BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8BF0u);

L_005C8BF0:
    PUSH32(esp, ebp); /* 0x005C8BF0: push ebp */
    ebp = esp; /* 0x005C8BF1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005C8BF3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x005C8BF6: push ebx */
    PUSH32(esp, esi); /* 0x005C8BF7: push esi */
    ebx = ecx; /* 0x005C8BF8: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x005C8BFA: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005C8BFB: push dword ptr [ebp + 0xc] */
    ecx = eax + 0x58; /* 0x005C8BFE: lea ecx, [eax + 0x58] */
    edx = MEM32(ebx + 0x4); /* 0x005C8C01: mov edx, dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x005C8C04: push eax */
    RECOMP_CALL(sub_005CAAE0); /* 0x005C8C05: call 0x5caae0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x4); /* 0x005C8C0A: mov edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005C8C0D: add esp, 8 */
    _flag_k = FK_ADD;
    esi = edi + (-0x58); /* 0x005C8C10: lea esi, [edi - 0x58] */
    /* cmp esi, edi */ /* 0x005C8C13: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C8C25; /* 0x005C8C15: je 0x5c8c25 */
L_005C8C17:
    ecx = esi; /* 0x005C8C17: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C8C19: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C8C1E: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005C8C21: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8C17; /* 0x005C8C23: jne 0x5c8c17 */
L_005C8C25:
    eax = MEM32(ebp + 0x8); /* 0x005C8C25: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0xFFFFFFA8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 0xFFFFFFA8u; /* 0x005C8C28: add dword ptr [ebx + 4], -0x58 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005C8C2C: mov ecx, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x005C8C2F: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8C30: pop esi */
    MEM32(eax) = ecx; /* 0x005C8C31: mov dword ptr [eax], ecx */
    ebx = POP32_VAL(esp); /* 0x005C8C33: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C8C34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C8C35: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C8C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8C40u);

L_005C8C40:
    PUSH32(esp, ebp); /* 0x005C8C40: push ebp */
    ebp = esp; /* 0x005C8C41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8C43: push -1 */
    PUSH32(esp, 0x007AD793u); /* 0x005C8C45: push 0x7ad793 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C8C4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C8C50: push eax */
    PUSH32(esp, ecx); /* 0x005C8C51: push ecx */
    PUSH32(esp, esi); /* 0x005C8C52: push esi */
    eax = MEM32(0x855000); /* 0x005C8C53: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C8C58: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C8C5A: push eax */
    eax = ebp + (-0xC); /* 0x005C8C5B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C8C5E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005C8C64: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005C8C66: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8C69: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi + 0x8); /* 0x005C8C70: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x005C8C73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8C96; /* 0x005C8C75: je 0x5c8c96 */
L_005C8C77:
    PUSH32(esp, eax); /* 0x005C8C77: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C8C78: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C8C7E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x005C8C81: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005C8C88: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005C8C8F: mov dword ptr [esi + 0x10], 0 */
L_005C8C96:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8C96: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005C8C9D: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x005C8CA0: mov dword ptr [ebp - 4], 2 */
    ecx = esi; /* 0x005C8CA7: mov ecx, esi */
    RECOMP_CALL(sub_005C9DE0); /* 0x005C8CA9: call 0x5c9de0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8CAE: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005C8CB5: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C8CB7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C8CBD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8CC0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8CC3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8CCA: pop ecx */
    esi = POP32_VAL(esp); /* 0x005C8CCB: pop esi */
    esp = ebp; /* 0x005C8CCC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8CCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8CCF: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C8CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8CD0u);

L_005C8CD0:
    PUSH32(esp, ebp); /* 0x005C8CD0: push ebp */
    ebp = esp; /* 0x005C8CD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8CD3: push -1 */
    PUSH32(esp, 0x007AD7BAu); /* 0x005C8CD5: push 0x7ad7ba */
    eax = MEM32(FS_BASE + (0)); /* 0x005C8CDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C8CE0: push eax */
    PUSH32(esp, ecx); /* 0x005C8CE1: push ecx */
    PUSH32(esp, esi); /* 0x005C8CE2: push esi */
    PUSH32(esp, edi); /* 0x005C8CE3: push edi */
    eax = MEM32(0x855000); /* 0x005C8CE4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C8CE9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C8CEB: push eax */
    eax = ebp + (-0xC); /* 0x005C8CEC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C8CEF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005C8CF5: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x005C8CF7: mov eax, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005C8CFA: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x005C8CFD: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C8D27; /* 0x005C8CFF: jae 0x5c8d27 */
L_005C8D01:
    ecx = MEM32(esi); /* 0x005C8D01: mov ecx, dword ptr [esi] */
    /* cmp ecx, edi */ /* 0x005C8D03: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8D27; /* 0x005C8D05: ja 0x5c8d27 */
L_005C8D07:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x005C8D07: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x005C8D09: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8D16; /* 0x005C8D0C: jne 0x5c8d16 */
L_005C8D0E:
    PUSH32(esp, ecx); /* 0x005C8D0E: push ecx */
    ecx = esi; /* 0x005C8D0F: mov ecx, esi */
    RECOMP_CALL(sub_005C9480); /* 0x005C8D11: call 0x5c9480 */
    RECOMP_FLAGS_IN();
L_005C8D16:
    ecx = MEM32(esi + 0x4); /* 0x005C8D16: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edi = edi & 0xFFFFFFF0u; /* 0x005C8D19: and edi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x005C8D1C: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8D1E: mov dword ptr [ebp - 4], 0 */
    goto L_005C8D3E; /* 0x005C8D25: jmp 0x5c8d3e */
L_005C8D27:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x005C8D27: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8D34; /* 0x005C8D2A: jne 0x5c8d34 */
L_005C8D2C:
    PUSH32(esp, ecx); /* 0x005C8D2C: push ecx */
    ecx = esi; /* 0x005C8D2D: mov ecx, esi */
    RECOMP_CALL(sub_005C9480); /* 0x005C8D2F: call 0x5c9480 */
    RECOMP_FLAGS_IN();
L_005C8D34:
    ecx = MEM32(esi + 0x4); /* 0x005C8D34: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005C8D37: mov dword ptr [ebp - 4], 1 */
L_005C8D3E:
    /* test ecx, ecx */ /* 0x005C8D3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8D48; /* 0x005C8D40: je 0x5c8d48 */
L_005C8D42:
    PUSH32(esp, edi); /* 0x005C8D42: push edi */
    RECOMP_CALL(sub_005C5F20); /* 0x005C8D43: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
L_005C8D48:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8D48: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x10u; /* 0x005C8D4F: add dword ptr [esi + 4], 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8D53: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8D56: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8D5D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C8D5E: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8D5F: pop esi */
    esp = ebp; /* 0x005C8D60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8D62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8D63: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C8D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8D70u);

L_005C8D70:
    PUSH32(esp, ebp); /* 0x005C8D70: push ebp */
    ebp = esp; /* 0x005C8D71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8D73: push -1 */
    PUSH32(esp, 0x007AD7E0u); /* 0x005C8D75: push 0x7ad7e0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C8D7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C8D80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005C8D81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C8D84: push ebx */
    PUSH32(esp, esi); /* 0x005C8D85: push esi */
    PUSH32(esp, edi); /* 0x005C8D86: push edi */
    eax = MEM32(0x855000); /* 0x005C8D87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C8D8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C8D8E: push eax */
    eax = ebp + (-0xC); /* 0x005C8D8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C8D92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C8D98: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005C8D9B: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x005C8D9D: mov dword ptr [ebp - 0x14], edi */
    esi = MEM32(ebp + 0x8); /* 0x005C8DA0: mov esi, dword ptr [ebp + 8] */
    /* cmp edi, esi */ /* 0x005C8DA3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C8DD5; /* 0x005C8DA5: je 0x5c8dd5 */
L_005C8DA7:
    eax = MEM32(esi); /* 0x005C8DA7: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x4); /* 0x005C8DA9: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(edi + 0x4); /* 0x005C8DAC: mov ebx, dword ptr [edi + 4] */
    /* cmp eax, ecx */ /* 0x005C8DAF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8DEB; /* 0x005C8DB1: jne 0x5c8deb */
L_005C8DB3:
    esi = MEM32(edi); /* 0x005C8DB3: mov esi, dword ptr [edi] */
    /* cmp esi, ebx */ /* 0x005C8DB5: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C8DD0; /* 0x005C8DB7: je 0x5c8dd0 */
L_005C8DB9:
    esp = esp; /* 0x005C8DB9: lea esp, [esp] */
L_005C8DC0:
    PUSH32(esp, 0); /* 0x005C8DC0: push 0 */
    ecx = esi; /* 0x005C8DC2: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005C8DC4: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005C8DC9: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C8DCC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C8DC0; /* 0x005C8DCE: jne 0x5c8dc0 */
L_005C8DD0:
    eax = MEM32(edi); /* 0x005C8DD0: mov eax, dword ptr [edi] */
L_005C8DD2:
    MEM32(edi + 0x4) = eax; /* 0x005C8DD2: mov dword ptr [edi + 4], eax */
L_005C8DD5:
    eax = edi; /* 0x005C8DD5: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8DD7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8DDA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8DE1: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C8DE2: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8DE3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C8DE4: pop ebx */
    esp = ebp; /* 0x005C8DE5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8DE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8DE8: ret 4 */
L_005C8DEB:
    edx = ecx; /* 0x005C8DEB: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x005C8DED: sub edx, eax */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C8DEF: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    ecx = MEM32(edi); /* 0x005C8DF2: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x005C8DF4: sub ebx, ecx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((ebx) >> 3) & 1u); /* 0x005C8DF6: sar ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 4u);
    /* cmp edx, ebx */ /* 0x005C8DF9: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8E23; /* 0x005C8DFB: ja 0x5c8e23 */
L_005C8DFD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8DFD: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8E00: push ecx */
    edx = MEM32(esi + 0x4); /* 0x005C8E01: mov edx, dword ptr [esi + 4] */
    ecx = eax; /* 0x005C8E04: mov ecx, eax */
    RECOMP_CALL(sub_005CAB70); /* 0x005C8E06: call 0x5cab70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005C8E0B: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005C8E0E: push dword ptr [edi + 4] */
    PUSH32(esp, eax); /* 0x005C8E11: push eax */
    RECOMP_CALL(sub_005C9450); /* 0x005C8E12: call 0x5c9450 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x005C8E17: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005C8E1A: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x005C8E1C: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x005C8E1F: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005C8DD2; /* 0x005C8E21: jmp 0x5c8dd2 */
L_005C8E23:
    eax = MEM32(edi + 0x8); /* 0x005C8E23: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C8E26: sub eax, ecx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x005C8E28: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp edx, eax */ /* 0x005C8E2B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C8E5D; /* 0x005C8E2D: ja 0x5c8e5d */
L_005C8E2F:
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x005C8E2F: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x005C8E2F: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi); /* 0x005C8E32: add ebx, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8E34: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8E37: push ecx */
    edx = ebx; /* 0x005C8E38: mov edx, ebx */
    ecx = MEM32(esi); /* 0x005C8E3A: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_005CAB70); /* 0x005C8E3C: call 0x5cab70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005C8E41: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8E44: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8E47: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005C8E48: push dword ptr [edi + 4] */
    edx = MEM32(esi + 0x4); /* 0x005C8E4B: mov edx, dword ptr [esi + 4] */
    ecx = ebx; /* 0x005C8E4E: mov ecx, ebx */
    RECOMP_CALL(sub_005CAF10); /* 0x005C8E50: call 0x5caf10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C8E55: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005C8DD2; /* 0x005C8E58: jmp 0x5c8dd2 */
L_005C8E5D:
    /* test ecx, ecx */ /* 0x005C8E5D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8E75; /* 0x005C8E5F: je 0x5c8e75 */
L_005C8E61:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005C8E61: push dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x005C8E64: push ecx */
    RECOMP_CALL(sub_005C9450); /* 0x005C8E65: call 0x5c9450 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x005C8E6A: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C8E6C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C8E72: add esp, 4 */
    _flag_k = FK_ADD;
L_005C8E75:
    eax = MEM32(esi + 0x4); /* 0x005C8E75: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005C8E78: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x005C8E7A: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x005C8E7D: push eax */
    ecx = edi; /* 0x005C8E7E: mov ecx, edi */
    RECOMP_CALL(sub_005C93E0); /* 0x005C8E80: call 0x5c93e0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005C8E85: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8DD5; /* 0x005C8E87: je 0x5c8dd5 */
L_005C8E8D:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8E8D: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C8E94: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005C8E97: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x005C8E98: push dword ptr [edi] */
    edx = MEM32(esi + 0x4); /* 0x005C8E9A: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x005C8E9D: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_005CAF10); /* 0x005C8E9F: call 0x5caf10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C8EA4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005C8EA7: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8EAA: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_005C8DD5; /* 0x005C8EB1: jmp 0x5c8dd5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C8EB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8EB6u);

L_005C8EB6:
    ecx = MEM32(ebp + (-0x14)); /* 0x005C8EB6: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_005C94F0); /* 0x005C8EB9: call 0x5c94f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005C8EBE: push 0 */
    PUSH32(esp, 0); /* 0x005C8EC0: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005C8EC2: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C8EC7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C8ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8ED0u);

L_005C8ED0:
    eax = 0x200u; /* 0x005C8ED0: mov eax, 0x200 */
    /* test MEM16(ecx + 0xE), LO16(eax) */ /* 0x005C8ED5: test word ptr [ecx + 0xe], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0xE)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C8EDE; /* 0x005C8ED9: jne 0x5c8ede */
L_005C8EDB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005C8EDB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8EDD: ret  */
L_005C8EDE:
    _xmm[1].u64[0] = MEM64(ecx); _xmm[1].u64[1] = 0; /* 0x005C8EDE: movsd xmm1, qword ptr [ecx] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], sse_f64(MEM64(0x809998))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005C8EE2: comisd xmm1, xmmword ptr [0x809998] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005C8F00; /* 0x005C8EEA: jb 0x5c8f00 */
L_005C8EEC:
    _xmm[0].u64[0] = MEM64(0x8097A8); _xmm[0].u64[1] = 0; /* 0x005C8EEC: movsd xmm0, qword ptr [0x8097a8] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[1].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005C8EF4: comisd xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005C8F00; /* 0x005C8EF8: jb 0x5c8f00 */
L_005C8EFA:
    eax = 1; /* 0x005C8EFA: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8EFF: ret  */
L_005C8F00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C8F00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8F02: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C8F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8F10u);

L_005C8F10:
    eax = (uint32_t)MEM16(ecx + 0xE); /* 0x005C8F10: movzx eax, word ptr [ecx + 0xe] */
    /* test eax, 0x200u */ /* 0x005C8F14: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8F20; /* 0x005C8F19: je 0x5c8f20 */
L_005C8F1B:
    _xmm[0].u64[0] = MEM64(ecx); _xmm[0].u64[1] = 0; /* 0x005C8F1B: movsd xmm0, qword ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8F1F: ret  */
L_005C8F20:
    /* test LO8(eax), 0x20u */ /* 0x005C8F20: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8F2D; /* 0x005C8F22: je 0x5c8f2d */
L_005C8F24:
    _xmm[0].u64[0] = (uint32_t)(MEM32(ecx)); _xmm[0].u64[1] = 0; /* 0x005C8F24: movd xmm0, dword ptr [ecx] */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005C8F28: cvtdq2pd xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8F2C: ret  */
L_005C8F2D:
    /* test LO8(eax), 0x40u */ /* 0x005C8F2D: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8F48; /* 0x005C8F2F: je 0x5c8f48 */
L_005C8F31:
    eax = MEM32(ecx); /* 0x005C8F31: mov eax, dword ptr [ecx] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x005C8F33: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005C8F37: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C8F3B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C8F3B: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x005C8F3E: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C8F47: ret  */
L_005C8F48:
    edx = MEM32(ecx + 0x4); /* 0x005C8F48: mov edx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x005C8F4B: mov ecx, dword ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x005C8F4D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0078074F; /* 0x005C8F4F: js 0x78074f */
L_005C8F55:
    goto L_007806BE; /* 0x005C8F55: jmp 0x7806be */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_007806BE: RECOMP_ITAIL(0x007806BEu); { RECOMP_REGS_OUT(); return; }
    L_0078074F: RECOMP_ITAIL(0x0078074Fu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_005C8F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C8F60u);

L_005C8F60:
    PUSH32(esp, ebp); /* 0x005C8F60: push ebp */
    ebp = esp; /* 0x005C8F61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C8F63: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x005C8F65: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C8F6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C8F70: push eax */
    PUSH32(esp, esi); /* 0x005C8F71: push esi */
    PUSH32(esp, edi); /* 0x005C8F72: push edi */
    eax = MEM32(0x855000); /* 0x005C8F73: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C8F78: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C8F7A: push eax */
    eax = ebp + (-0xC); /* 0x005C8F7B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C8F7E: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005C8F84: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005C8F86: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C8F89: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C8FA5; /* 0x005C8F8D: jae 0x5c8fa5 */
L_005C8F8F:
    eax = MEM32(esi + 0x10); /* 0x005C8F8F: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005C8F92: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005C8FC1; /* 0x005C8F93: je 0x5c8fc1 */
L_005C8F95:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x005C8F95: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005C8F97: push eax */
    PUSH32(esp, esi); /* 0x005C8F98: push esi */
    PUSH32(esp, edi); /* 0x005C8F99: push edi */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005C8F9A: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C8FA0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_005C8FC1; /* 0x005C8FA3: jmp 0x5c8fc1 */
L_005C8FA5:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C8FA5: mov dword ptr [ebp - 4], 0 */
    /* test edi, edi */ /* 0x005C8FAC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C8FB4; /* 0x005C8FAE: je 0x5c8fb4 */
L_005C8FB0:
    eax = MEM32(esi); /* 0x005C8FB0: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x005C8FB2: mov dword ptr [edi], eax */
L_005C8FB4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C8FB4: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi) = 0; /* 0x005C8FBB: mov dword ptr [esi], 0 */
L_005C8FC1:
    eax = MEM32(esi + 0x10); /* 0x005C8FC1: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x10) = eax; /* 0x005C8FC4: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x14); /* 0x005C8FC7: mov eax, dword ptr [esi + 0x14] */
    MEM32(edi + 0x14) = eax; /* 0x005C8FCA: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C8FCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x005C8FCF: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C8FD6: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C8FDD: mov word ptr [esi], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C8FE0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C8FE3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C8FEA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C8FEB: pop edi */
    esi = POP32_VAL(esp); /* 0x005C8FEC: pop esi */
    esp = ebp; /* 0x005C8FED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C8FEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C8FF0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9000u);

L_005C9000:
    PUSH32(esp, ebp); /* 0x005C9000: push ebp */
    ebp = esp; /* 0x005C9001: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005C9003: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005C9004: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005C9007: push esi */
    PUSH32(esp, edi); /* 0x005C9008: push edi */
    esi = ecx; /* 0x005C9009: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x005C900B: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebx + 0x10); /* 0x005C900E: mov edi, dword ptr [ebx + 0x10] */
    /* cmp edi, ecx */ /* 0x005C9011: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9020; /* 0x005C9013: jae 0x5c9020 */
L_005C9015:
    PUSH32(esp, 0x007CCE6Cu); /* 0x005C9015: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x005C901A: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_005C9020:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x005C9020: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x005C9022: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = MEM32(ebp + 0x10); } /* 0x005C9025: cmovb edi, dword ptr [ebp + 0x10] */
    /* cmp esi, ebx */ /* 0x005C9029: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C904D; /* 0x005C902B: jne 0x5c904d */
L_005C902D:
    eax = edi + ecx; /* 0x005C902D: lea eax, [edi + ecx] */
    ecx = esi; /* 0x005C9030: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005C9032: push eax */
    RECOMP_CALL(sub_005C9640); /* 0x005C9033: call 0x5c9640 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005C9038: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x005C903B: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005C903D: push 0 */
    RECOMP_CALL(sub_005C9680); /* 0x005C903F: call 0x5c9680 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005C9044: pop edi */
    eax = esi; /* 0x005C9045: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C9047: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9048: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C9049: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C904A: ret 0xc */
L_005C904D:
    /* cmp edi, 0x7FFFFFFEu */ /* 0x005C904D: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C9060; /* 0x005C9053: jbe 0x5c9060 */
L_005C9055:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005C9055: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C905A: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C9060:
    eax = MEM32(esi + 0x14); /* 0x005C9060: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x005C9063: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C908B; /* 0x005C9065: jae 0x5c908b */
L_005C9067:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005C9067: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x005C906A: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005C906C: push edi */
    RECOMP_CALL(sub_005C9C30); /* 0x005C906D: call 0x5c9c30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x005C9072: mov ecx, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x005C9075: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C90EE; /* 0x005C9077: je 0x5c90ee */
L_005C9079:
    /* cmp MEM32(ebx + 0x14), 8 */ /* 0x005C9079: cmp dword ptr [ebx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9081; /* 0x005C907D: jb 0x5c9081 */
L_005C907F:
    ebx = MEM32(ebx); /* 0x005C907F: mov ebx, dword ptr [ebx] */
L_005C9081:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9081: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C90B5; /* 0x005C9085: jb 0x5c90b5 */
L_005C9087:
    edx = MEM32(esi); /* 0x005C9087: mov edx, dword ptr [esi] */
    goto L_005C90B7; /* 0x005C9089: jmp 0x5c90b7 */
L_005C908B:
    /* test edi, edi */ /* 0x005C908B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C9079; /* 0x005C908D: jne 0x5c9079 */
L_005C908F:
    MEM32(esi + 0x10) = edi; /* 0x005C908F: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 8 */ /* 0x005C9092: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C90A7; /* 0x005C9095: jb 0x5c90a7 */
L_005C9097:
    eax = MEM32(esi); /* 0x005C9097: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9099: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C909B: pop edi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x005C909C: mov word ptr [eax], cx */
    eax = esi; /* 0x005C909F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C90A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C90A2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C90A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C90A4: ret 0xc */
L_005C90A7:
    eax = esi; /* 0x005C90A7: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C90A9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C90AB: pop edi */
    esi = POP32_VAL(esp); /* 0x005C90AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C90AD: pop ebx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x005C90AE: mov word ptr [eax], cx */
    ebp = POP32_VAL(esp); /* 0x005C90B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C90B2: ret 0xc */
L_005C90B5:
    edx = esi; /* 0x005C90B5: mov edx, esi */
L_005C90B7:
    /* test edi, edi */ /* 0x005C90B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C90CC; /* 0x005C90B9: je 0x5c90cc */
L_005C90BB:
    eax = edi + edi; /* 0x005C90BB: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x005C90BE: push eax */
    eax = ebx + ecx * 2; /* 0x005C90BF: lea eax, [ebx + ecx*2] */
    PUSH32(esp, eax); /* 0x005C90C2: push eax */
    PUSH32(esp, edx); /* 0x005C90C3: push edx */
    RECOMP_CALL(sub_00780838); /* 0x005C90C4: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C90C9: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C90CC:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C90CC: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x005C90D0: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C90E6; /* 0x005C90D3: jb 0x5c90e6 */
L_005C90D5:
    eax = MEM32(esi); /* 0x005C90D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C90D7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C90D9: mov word ptr [eax + edi*2], cx */
    eax = esi; /* 0x005C90DD: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x005C90DF: pop edi */
    esi = POP32_VAL(esp); /* 0x005C90E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C90E1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C90E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C90E3: ret 0xc */
L_005C90E6:
    eax = esi; /* 0x005C90E6: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C90E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C90EA: mov word ptr [eax + edi*2], cx */
L_005C90EE:
    edi = POP32_VAL(esp); /* 0x005C90EE: pop edi */
    eax = esi; /* 0x005C90EF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C90F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C90F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C90F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C90F4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005C9100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9100u);

L_005C9100:
    PUSH32(esp, ebx); /* 0x005C9100: push ebx */
    PUSH32(esp, esi); /* 0x005C9101: push esi */
    PUSH32(esp, edi); /* 0x005C9102: push edi */
    edi = ecx; /* 0x005C9103: mov edi, ecx */
    ebx = MEM32(edi + 0x4); /* 0x005C9105: mov ebx, dword ptr [edi + 4] */
    esi = MEM32(edi); /* 0x005C9108: mov esi, dword ptr [edi] */
    /* cmp esi, ebx */ /* 0x005C910A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9127; /* 0x005C910C: je 0x5c9127 */
L_005C910E:
    edi = edi; /* 0x005C910E: mov edi, edi */
L_005C9110:
    ecx = esi; /* 0x005C9110: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C9112: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C9117: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C911A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9110; /* 0x005C911C: jne 0x5c9110 */
L_005C911E:
    eax = MEM32(edi); /* 0x005C911E: mov eax, dword ptr [edi] */
    MEM32(edi + 0x4) = eax; /* 0x005C9120: mov dword ptr [edi + 4], eax */
    edi = POP32_VAL(esp); /* 0x005C9123: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9124: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9125: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C9126: ret  */
L_005C9127:
    eax = esi; /* 0x005C9127: mov eax, esi */
    MEM32(edi + 0x4) = eax; /* 0x005C9129: mov dword ptr [edi + 4], eax */
    edi = POP32_VAL(esp); /* 0x005C912C: pop edi */
    esi = POP32_VAL(esp); /* 0x005C912D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C912E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C912F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C9130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9130u);

L_005C9130:
    PUSH32(esp, ebp); /* 0x005C9130: push ebp */
    ebp = esp; /* 0x005C9131: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005C9133: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005C9136: push esi */
    esi = ecx; /* 0x005C9137: mov esi, ecx */
    MEM32(esi) = 0; /* 0x005C9139: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005C913F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005C9146: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x005C914D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C9158; /* 0x005C914F: jne 0x5c9158 */
L_005C9151:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005C9151: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005C9153: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9154: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C9155: ret 4 */
L_005C9158:
    /* cmp eax, 0x02E8BA2Eu */ /* 0x005C9158: cmp eax, 0x2e8ba2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02E8BA2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C916A; /* 0x005C915D: jbe 0x5c916a */
L_005C915F:
    PUSH32(esp, 0x007DFAB0u); /* 0x005C915F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9164: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C916A:
    PUSH32(esp, edi); /* 0x005C916A: push edi */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x005C916B: imul edi, eax, 0x58 */
    PUSH32(esp, edi); /* 0x005C916E: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005C916F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9175: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005C9178: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C918E; /* 0x005C917A: je 0x5c918e */
L_005C917C:
    MEM32(esi) = eax; /* 0x005C917C: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005C917E: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005C9181: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005C9183: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005C9186: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005C9188: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9189: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C918A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C918B: ret 4 */
L_005C918E:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005C918E: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C9194u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C91A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C91A0u);

L_005C91A0:
    PUSH32(esp, ebp); /* 0x005C91A0: push ebp */
    ebp = esp; /* 0x005C91A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C91A3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005C91A4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005C91A7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x005C91A8: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, edi */ /* 0x005C91AB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C91BE; /* 0x005C91AD: je 0x5c91be */
L_005C91AF:
    /* nop */ /* 0x005C91AF: nop  */
L_005C91B0:
    ecx = esi; /* 0x005C91B0: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C91B2: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C91B7: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005C91BA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C91B0; /* 0x005C91BC: jne 0x5c91b0 */
L_005C91BE:
    edi = POP32_VAL(esp); /* 0x005C91BE: pop edi */
    esi = POP32_VAL(esp); /* 0x005C91BF: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C91C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C91C1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C91D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C91D0u);

L_005C91D0:
    PUSH32(esp, esi); /* 0x005C91D0: push esi */
    esi = MEM32(ecx + 0x4); /* 0x005C91D1: mov esi, dword ptr [ecx + 4] */
    eax = 0x2E8BA2E9u; /* 0x005C91D4: mov eax, 0x2e8ba2e9 */
    PUSH32(esp, edi); /* 0x005C91D9: push edi */
    edi = MEM32(ecx + 0x8); /* 0x005C91DA: mov edi, dword ptr [ecx + 8] */
    edx = edi; /* 0x005C91DD: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x005C91DF: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005C91E1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C91E3: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C91E6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C91E8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C91E8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C91EB: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005C91ED: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C925D; /* 0x005C91F0: jae 0x5c925d */
L_005C91F2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005C91F2: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C91F4: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005C91F9: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x005C91FB: push ebx */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C91FC: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    ebx = 0x02E8BA2Eu; /* 0x005C91FF: mov ebx, 0x2e8ba2e */
    esi = edx; /* 0x005C9204: mov esi, edx */
    eax = ebx; /* 0x005C9206: mov eax, ebx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005C9208: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005C9208: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005C920B: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005C920D: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005C920F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C921F; /* 0x005C9212: jae 0x5c921f */
L_005C9214:
    PUSH32(esp, 0x007DFAB0u); /* 0x005C9214: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9219: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C921F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx); /* 0x005C921F: sub edi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C9221: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005C9226: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005C9228: inc esi */
    _flag_k = FK_INC;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C9229: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C922C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C922E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C922E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C9231: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x005C9233: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005C9235: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005C9235: shr edx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x005C9237: sub ebx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x005C9239: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x005C923B: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9250; /* 0x005C923C: jae 0x5c9250 */
L_005C923E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C923E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x005C9240: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005C9242: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005C9245: push eax */
    RECOMP_CALL(sub_005C97F0); /* 0x005C9246: call 0x5c97f0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005C924B: pop edi */
    esi = POP32_VAL(esp); /* 0x005C924C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C924D: ret 4 */
L_005C9250:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C9250: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x005C9252: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005C9254: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005C9257: push eax */
    RECOMP_CALL(sub_005C97F0); /* 0x005C9258: call 0x5c97f0 */
    RECOMP_FLAGS_IN();
L_005C925D:
    edi = POP32_VAL(esp); /* 0x005C925D: pop edi */
    esi = POP32_VAL(esp); /* 0x005C925E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C925F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9270u);

L_005C9270:
    PUSH32(esp, esi); /* 0x005C9270: push esi */
    PUSH32(esp, edi); /* 0x005C9271: push edi */
    edi = ecx; /* 0x005C9272: mov edi, ecx */
    esi = MEM32(edi); /* 0x005C9274: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x005C9276: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C92B0; /* 0x005C9278: je 0x5c92b0 */
L_005C927A:
    PUSH32(esp, ebx); /* 0x005C927A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x005C927B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x005C927E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9290; /* 0x005C9280: je 0x5c9290 */
L_005C9282:
    ecx = esi; /* 0x005C9282: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C9284: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C9289: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C928C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9282; /* 0x005C928E: jne 0x5c9282 */
L_005C9290:
    PUSH32(esp, MEM32(edi)); /* 0x005C9290: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9292: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9298: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x005C929B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005C92A1: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005C92A8: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x005C92AF: pop ebx */
L_005C92B0:
    edi = POP32_VAL(esp); /* 0x005C92B0: pop edi */
    esi = POP32_VAL(esp); /* 0x005C92B1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C92B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C92C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C92C0u);

L_005C92C0:
    PUSH32(esp, ebp); /* 0x005C92C0: push ebp */
    ebp = esp; /* 0x005C92C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C92C3: push -1 */
    PUSH32(esp, 0x007AD823u); /* 0x005C92C5: push 0x7ad823 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C92CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C92D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005C92D1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005C92D4: push esi */
    eax = MEM32(0x855000); /* 0x005C92D5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C92DA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C92DC: push eax */
    eax = ebp + (-0xC); /* 0x005C92DD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C92E0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005C92E6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005C92E8: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, 0); /* 0x005C92EB: push 0 */
    PUSH32(esp, 0); /* 0x005C92ED: push 0 */
    MEM32(ebp + (-0x10)) = esi; /* 0x005C92EF: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x005C92F2: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005C92F8: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005CA1C0); /* 0x005C92FF: call 0x5ca1c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005C9304: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x005C9306: mov dword ptr [ebp - 4], 2 */
    ecx = esi + 0x8; /* 0x005C930D: lea ecx, [esi + 8] */
    MEM32(ecx) = 0; /* 0x005C9310: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x005C9316: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x005C931D: mov dword ptr [ecx + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005C9324: mov byte ptr [ebp - 4], 3 */
    edx = ebp + (-0x10); /* 0x005C9328: lea edx, [ebp - 0x10] */
    eax = MEM32(esi); /* 0x005C932B: mov eax, dword ptr [esi] */
    PUSH32(esp, edx); /* 0x005C932D: push edx */
    MEM32(esi + 0x1C) = 0x3F800000u; /* 0x005C932E: mov dword ptr [esi + 0x1c], 0x3f800000 */
    MEM32(ebp + (-0x10)) = eax; /* 0x005C9335: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx); /* 0x005C9338: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x005C933A: push 0x10 */
    PUSH32(esp, eax); /* 0x005C933C: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x005C933D: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x18); /* 0x005C9340: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005C9343: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x005C9344: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 7; /* 0x005C9349: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x18) = 8; /* 0x005C9350: mov dword ptr [esi + 0x18], 8 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9357: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005C935E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9360: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9363: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C936A: pop ecx */
    esi = POP32_VAL(esp); /* 0x005C936B: pop esi */
    esp = ebp; /* 0x005C936C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C936E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C936F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9380u);

L_005C9380:
    PUSH32(esp, ebp); /* 0x005C9380: push ebp */
    ebp = esp; /* 0x005C9381: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9383: push -1 */
    PUSH32(esp, 0x00789280u); /* 0x005C9385: push 0x789280 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C938A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9390: push eax */
    PUSH32(esp, ecx); /* 0x005C9391: push ecx */
    PUSH32(esp, esi); /* 0x005C9392: push esi */
    eax = MEM32(0x855000); /* 0x005C9393: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9398: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C939A: push eax */
    eax = ebp + (-0xC); /* 0x005C939B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C939E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005C93A4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005C93A6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005C93A9: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_005C9DE0); /* 0x005C93B0: call 0x5c9de0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C93B5: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005C93BC: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C93BE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C93C4: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005C93C7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C93CA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C93D1: pop ecx */
    esi = POP32_VAL(esp); /* 0x005C93D2: pop esi */
    esp = ebp; /* 0x005C93D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C93D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C93D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C93E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C93E0u);

L_005C93E0:
    PUSH32(esp, ebp); /* 0x005C93E0: push ebp */
    ebp = esp; /* 0x005C93E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C93E3: push esi */
    esi = ecx; /* 0x005C93E4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005C93E6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005C93E7: mov edi, dword ptr [ebp + 8] */
    MEM32(esi) = 0; /* 0x005C93EA: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005C93F0: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005C93F7: mov dword ptr [esi + 8], 0 */
    /* test edi, edi */ /* 0x005C93FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C940A; /* 0x005C9400: jne 0x5c940a */
L_005C9402:
    edi = POP32_VAL(esp); /* 0x005C9402: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005C9403: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005C9405: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9406: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C9407: ret 4 */
L_005C940A:
    /* cmp edi, 0x0FFFFFFFu */ /* 0x005C940A: cmp edi, 0xfffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C941D; /* 0x005C9410: jbe 0x5c941d */
L_005C9412:
    PUSH32(esp, 0x007DFAB0u); /* 0x005C9412: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9417: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C941D:
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x005C941D: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x005C941D: shl edi, 4 */
    PUSH32(esp, edi); /* 0x005C9420: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005C9421: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9427: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005C942A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9440; /* 0x005C942C: je 0x5c9440 */
L_005C942E:
    MEM32(esi) = eax; /* 0x005C942E: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005C9430: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005C9433: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005C9435: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005C9438: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005C943A: pop edi */
    esi = POP32_VAL(esp); /* 0x005C943B: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C943C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C943D: ret 4 */
L_005C9440:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005C9440: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C9446u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C9450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9450u);

L_005C9450:
    PUSH32(esp, ebp); /* 0x005C9450: push ebp */
    ebp = esp; /* 0x005C9451: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C9453: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005C9454: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005C9457: push edi */
    edi = MEM32(ebp + 0xC); /* 0x005C9458: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, edi */ /* 0x005C945B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9470; /* 0x005C945D: je 0x5c9470 */
L_005C945F:
    /* nop */ /* 0x005C945F: nop  */
L_005C9460:
    PUSH32(esp, 0); /* 0x005C9460: push 0 */
    ecx = esi; /* 0x005C9462: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005C9464: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005C9469: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005C946C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9460; /* 0x005C946E: jne 0x5c9460 */
L_005C9470:
    edi = POP32_VAL(esp); /* 0x005C9470: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9471: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9472: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9473: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9480u);

L_005C9480:
    edx = MEM32(ecx + 0x8); /* 0x005C9480: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x005C9483: mov eax, edx */
    PUSH32(esp, esi); /* 0x005C9485: push esi */
    esi = MEM32(ecx + 0x4); /* 0x005C9486: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005C9489: sub eax, esi */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x005C948B: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, edi); /* 0x005C948E: push edi */
    /* cmp eax, 1 */ /* 0x005C948F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C94E1; /* 0x005C9492: jae 0x5c94e1 */
L_005C9494:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005C9494: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    edi = 0x0FFFFFFFu; /* 0x005C9496: mov edi, 0xfffffff */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x005C949B: sar esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 4u);
    eax = edi; /* 0x005C949E: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005C94A0: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005C94A2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C94B2; /* 0x005C94A5: jae 0x5c94b2 */
L_005C94A7:
    PUSH32(esp, 0x007DFAB0u); /* 0x005C94A7: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C94AC: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C94B2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x005C94B2: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005C94B4: inc esi */
    _flag_k = FK_INC;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C94B5: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C94B8: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005C94BA: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x005C94BA: shr eax, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005C94BC: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp edi, edx */ /* 0x005C94BE: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C94D4; /* 0x005C94C0: jae 0x5c94d4 */
L_005C94C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005C94C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x005C94C4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x005C94C6: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x005C94C9: push edx */
    RECOMP_CALL(sub_005C9A70); /* 0x005C94CA: call 0x5c9a70 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005C94CF: pop edi */
    esi = POP32_VAL(esp); /* 0x005C94D0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C94D1: ret 4 */
L_005C94D4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x005C94D4: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x005C94D6: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x005C94D8: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x005C94DB: push edx */
    RECOMP_CALL(sub_005C9A70); /* 0x005C94DC: call 0x5c9a70 */
    RECOMP_FLAGS_IN();
L_005C94E1:
    edi = POP32_VAL(esp); /* 0x005C94E1: pop edi */
    esi = POP32_VAL(esp); /* 0x005C94E2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C94E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C94F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C94F0u);

L_005C94F0:
    PUSH32(esp, esi); /* 0x005C94F0: push esi */
    PUSH32(esp, edi); /* 0x005C94F1: push edi */
    edi = ecx; /* 0x005C94F2: mov edi, ecx */
    esi = MEM32(edi); /* 0x005C94F4: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x005C94F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9532; /* 0x005C94F8: je 0x5c9532 */
L_005C94FA:
    PUSH32(esp, ebx); /* 0x005C94FA: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x005C94FB: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x005C94FE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9512; /* 0x005C9500: je 0x5c9512 */
L_005C9502:
    PUSH32(esp, 0); /* 0x005C9502: push 0 */
    ecx = esi; /* 0x005C9504: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005C9506: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005C950B: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005C950E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9502; /* 0x005C9510: jne 0x5c9502 */
L_005C9512:
    PUSH32(esp, MEM32(edi)); /* 0x005C9512: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9514: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C951A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x005C951D: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005C9523: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005C952A: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x005C9531: pop ebx */
L_005C9532:
    edi = POP32_VAL(esp); /* 0x005C9532: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9533: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C9534: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C9540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9540u);

L_005C9540:
    PUSH32(esp, ebp); /* 0x005C9540: push ebp */
    ebp = esp; /* 0x005C9541: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005C9543: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005C9544: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005C9547: push esi */
    esi = ecx; /* 0x005C9548: mov esi, ecx */
    /* test ebx, ebx */ /* 0x005C954A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9596; /* 0x005C954C: je 0x5c9596 */
L_005C954E:
    ecx = MEM32(esi + 0x14); /* 0x005C954E: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 8 */ /* 0x005C9551: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C955A; /* 0x005C9554: jb 0x5c955a */
L_005C9556:
    eax = MEM32(esi); /* 0x005C9556: mov eax, dword ptr [esi] */
    goto L_005C955C; /* 0x005C9558: jmp 0x5c955c */
L_005C955A:
    eax = esi; /* 0x005C955A: mov eax, esi */
L_005C955C:
    /* cmp ebx, eax */ /* 0x005C955C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9596; /* 0x005C955E: jb 0x5c9596 */
L_005C9560:
    /* cmp ecx, 8 */ /* 0x005C9560: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9569; /* 0x005C9563: jb 0x5c9569 */
L_005C9565:
    edx = MEM32(esi); /* 0x005C9565: mov edx, dword ptr [esi] */
    goto L_005C956B; /* 0x005C9567: jmp 0x5c956b */
L_005C9569:
    edx = esi; /* 0x005C9569: mov edx, esi */
L_005C956B:
    eax = MEM32(esi + 0x10); /* 0x005C956B: mov eax, dword ptr [esi + 0x10] */
    eax = edx + eax * 2; /* 0x005C956E: lea eax, [edx + eax*2] */
    /* cmp eax, ebx */ /* 0x005C9571: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C9596; /* 0x005C9573: jbe 0x5c9596 */
L_005C9575:
    /* cmp ecx, 8 */ /* 0x005C9575: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C957E; /* 0x005C9578: jb 0x5c957e */
L_005C957A:
    eax = MEM32(esi); /* 0x005C957A: mov eax, dword ptr [esi] */
    goto L_005C9580; /* 0x005C957C: jmp 0x5c9580 */
L_005C957E:
    eax = esi; /* 0x005C957E: mov eax, esi */
L_005C9580:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005C9580: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x005C9583: sub ebx, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x005C9585: mov ecx, esi */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x005C9587: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    PUSH32(esp, ebx); /* 0x005C9589: push ebx */
    PUSH32(esp, esi); /* 0x005C958A: push esi */
    RECOMP_CALL(sub_005C9000); /* 0x005C958B: call 0x5c9000 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005C9590: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9591: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C9592: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9593: ret 8 */
L_005C9596:
    PUSH32(esp, edi); /* 0x005C9596: push edi */
    edi = MEM32(ebp + 0xC); /* 0x005C9597: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 0x7FFFFFFEu */ /* 0x005C959A: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C95AD; /* 0x005C95A0: jbe 0x5c95ad */
L_005C95A2:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005C95A2: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C95A7: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C95AD:
    eax = MEM32(esi + 0x14); /* 0x005C95AD: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x005C95B0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C95CD; /* 0x005C95B2: jae 0x5c95cd */
L_005C95B4:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005C95B4: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x005C95B7: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005C95B9: push edi */
    RECOMP_CALL(sub_005C9C30); /* 0x005C95BA: call 0x5c9c30 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x005C95BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C962D; /* 0x005C95C1: je 0x5c962d */
L_005C95C3:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C95C3: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C95F7; /* 0x005C95C7: jb 0x5c95f7 */
L_005C95C9:
    ecx = MEM32(esi); /* 0x005C95C9: mov ecx, dword ptr [esi] */
    goto L_005C95F9; /* 0x005C95CB: jmp 0x5c95f9 */
L_005C95CD:
    /* test edi, edi */ /* 0x005C95CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C95C3; /* 0x005C95CF: jne 0x5c95c3 */
L_005C95D1:
    MEM32(esi + 0x10) = edi; /* 0x005C95D1: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 8 */ /* 0x005C95D4: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C95E9; /* 0x005C95D7: jb 0x5c95e9 */
L_005C95D9:
    eax = MEM32(esi); /* 0x005C95D9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C95DB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C95DD: pop edi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x005C95DE: mov word ptr [eax], cx */
    eax = esi; /* 0x005C95E1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C95E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C95E4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C95E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C95E6: ret 8 */
L_005C95E9:
    eax = esi; /* 0x005C95E9: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C95EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C95ED: pop edi */
    esi = POP32_VAL(esp); /* 0x005C95EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C95EF: pop ebx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x005C95F0: mov word ptr [eax], cx */
    ebp = POP32_VAL(esp); /* 0x005C95F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C95F4: ret 8 */
L_005C95F7:
    ecx = esi; /* 0x005C95F7: mov ecx, esi */
L_005C95F9:
    /* test edi, edi */ /* 0x005C95F9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C960B; /* 0x005C95FB: je 0x5c960b */
L_005C95FD:
    eax = edi + edi; /* 0x005C95FD: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x005C9600: push eax */
    PUSH32(esp, ebx); /* 0x005C9601: push ebx */
    PUSH32(esp, ecx); /* 0x005C9602: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x005C9603: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C9608: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C960B:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C960B: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x005C960F: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9625; /* 0x005C9612: jb 0x5c9625 */
L_005C9614:
    eax = MEM32(esi); /* 0x005C9614: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9616: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C9618: mov word ptr [eax + edi*2], cx */
    eax = esi; /* 0x005C961C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x005C961E: pop edi */
    esi = POP32_VAL(esp); /* 0x005C961F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9620: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C9621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9622: ret 8 */
L_005C9625:
    eax = esi; /* 0x005C9625: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9627: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C9629: mov word ptr [eax + edi*2], cx */
L_005C962D:
    edi = POP32_VAL(esp); /* 0x005C962D: pop edi */
    eax = esi; /* 0x005C962E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C9630: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9631: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C9632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9633: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9640u);

L_005C9640:
    PUSH32(esp, ebp); /* 0x005C9640: push ebp */
    ebp = esp; /* 0x005C9641: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005C9643: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x005C9646: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9656; /* 0x005C9649: jae 0x5c9656 */
L_005C964B:
    PUSH32(esp, 0x007CCE6Cu); /* 0x005C964B: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x005C9650: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_005C9656:
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x005C9656: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = eax; /* 0x005C965A: mov dword ptr [ecx + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C966F; /* 0x005C965D: jb 0x5c966f */
L_005C965F:
    edx = MEM32(ecx); /* 0x005C965F: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x005C9661: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005C9662: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx + eax * 2) = (uint16_t)(LO16(esi)); /* 0x005C9664: mov word ptr [edx + eax*2], si */
    eax = ecx; /* 0x005C9668: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x005C966A: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C966B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C966C: ret 4 */
L_005C966F:
    edx = ecx; /* 0x005C966F: mov edx, ecx */
    PUSH32(esp, esi); /* 0x005C9671: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005C9672: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx + eax * 2) = (uint16_t)(LO16(esi)); /* 0x005C9674: mov word ptr [edx + eax*2], si */
    eax = ecx; /* 0x005C9678: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x005C967A: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C967B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C967C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9680u);

L_005C9680:
    PUSH32(esp, ebp); /* 0x005C9680: push ebp */
    ebp = esp; /* 0x005C9681: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C9683: push esi */
    esi = ecx; /* 0x005C9684: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x005C9686: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005C9689: push edi */
    edi = MEM32(esi + 0x10); /* 0x005C968A: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, ecx */ /* 0x005C968D: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C969C; /* 0x005C968F: jae 0x5c969c */
L_005C9691:
    PUSH32(esp, 0x007CCE6Cu); /* 0x005C9691: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x005C9696: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_005C969C:
    edx = MEM32(ebp + 0xC); /* 0x005C969C: mov edx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x005C969F: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C96A1: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x005C96A3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C96CE; /* 0x005C96A5: ja 0x5c96ce */
L_005C96A7:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C96A7: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x005C96AB: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C96C0; /* 0x005C96AE: jb 0x5c96c0 */
L_005C96B0:
    eax = MEM32(esi); /* 0x005C96B0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005C96B2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C96B4: pop edi */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x005C96B5: mov word ptr [eax + ecx*2], dx */
    eax = esi; /* 0x005C96B9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C96BB: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C96BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C96BD: ret 8 */
L_005C96C0:
    eax = esi; /* 0x005C96C0: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005C96C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C96C4: pop edi */
    esi = POP32_VAL(esp); /* 0x005C96C5: pop esi */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x005C96C6: mov word ptr [eax + ecx*2], dx */
    ebp = POP32_VAL(esp); /* 0x005C96CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C96CB: ret 8 */
L_005C96CE:
    /* test edx, edx */ /* 0x005C96CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C971D; /* 0x005C96D0: je 0x5c971d */
L_005C96D2:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C96D2: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C96DC; /* 0x005C96D6: jb 0x5c96dc */
L_005C96D8:
    eax = MEM32(esi); /* 0x005C96D8: mov eax, dword ptr [esi] */
    goto L_005C96DE; /* 0x005C96DA: jmp 0x5c96de */
L_005C96DC:
    eax = esi; /* 0x005C96DC: mov eax, esi */
L_005C96DE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x005C96DE: sub edi, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C96E0: push ebx */
    ebx = eax + ecx * 2; /* 0x005C96E1: lea ebx, [eax + ecx*2] */
    eax = edi; /* 0x005C96E4: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C96E6: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005C96FB; /* 0x005C96E8: je 0x5c96fb */
L_005C96EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x005C96EA: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005C96EC: push eax */
    eax = ebx + edx * 2; /* 0x005C96ED: lea eax, [ebx + edx*2] */
    PUSH32(esp, eax); /* 0x005C96F0: push eax */
    PUSH32(esp, ebx); /* 0x005C96F1: push ebx */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005C96F2: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C96F8: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C96FB:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C96FB: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x005C96FF: mov dword ptr [esi + 0x10], edi */
    ebx = POP32_VAL(esp); /* 0x005C9702: pop ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9715; /* 0x005C9703: jb 0x5c9715 */
L_005C9705:
    eax = MEM32(esi); /* 0x005C9705: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9707: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C9709: mov word ptr [eax + edi*2], cx */
    eax = esi; /* 0x005C970D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x005C970F: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9710: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9711: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9712: ret 8 */
L_005C9715:
    eax = esi; /* 0x005C9715: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9717: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x005C9719: mov word ptr [eax + edi*2], cx */
L_005C971D:
    edi = POP32_VAL(esp); /* 0x005C971D: pop edi */
    eax = esi; /* 0x005C971E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C9720: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9721: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9722: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9730u);

L_005C9730:
    PUSH32(esp, ebp); /* 0x005C9730: push ebp */
    ebp = esp; /* 0x005C9731: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005C9733: push esi */
    PUSH32(esp, edi); /* 0x005C9734: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005C9735: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005C9738: mov esi, ecx */
    /* cmp edi, 0x7FFFFFFEu */ /* 0x005C973A: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C974D; /* 0x005C9740: jbe 0x5c974d */
L_005C9742:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005C9742: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9747: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C974D:
    eax = MEM32(esi + 0x14); /* 0x005C974D: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x005C9750: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C976B; /* 0x005C9752: jae 0x5c976b */
L_005C9754:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005C9754: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x005C9757: push edi */
    RECOMP_CALL(sub_005C9C30); /* 0x005C9758: call 0x5c9c30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C975D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x005C975F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x005C9761: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x005C9762: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x005C9764: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005C9766: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9767: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9768: ret 8 */
L_005C976B:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005C976B: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C97C5; /* 0x005C976F: je 0x5c97c5 */
L_005C9771:
    /* cmp edi, 8 */ /* 0x005C9771: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C97C5; /* 0x005C9774: jae 0x5c97c5 */
L_005C9776:
    PUSH32(esp, ebx); /* 0x005C9776: push ebx */
    ebx = MEM32(esi + 0x10); /* 0x005C9777: mov ebx, dword ptr [esi + 0x10] */
    /* cmp edi, ebx */ /* 0x005C977A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ebx = edi; } /* 0x005C977C: cmovb ebx, edi */
    /* cmp eax, 8 */ /* 0x005C977F: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C97A8; /* 0x005C9782: jb 0x5c97a8 */
L_005C9784:
    ecx = MEM32(esi); /* 0x005C9784: mov ecx, dword ptr [esi] */
    MEM32(ebp + 0xC) = ecx; /* 0x005C9786: mov dword ptr [ebp + 0xc], ecx */
    /* test ebx, ebx */ /* 0x005C9789: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C979E; /* 0x005C978B: je 0x5c979e */
L_005C978D:
    eax = ebx + ebx; /* 0x005C978D: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x005C9790: push eax */
    PUSH32(esp, ecx); /* 0x005C9791: push ecx */
    PUSH32(esp, esi); /* 0x005C9792: push esi */
    RECOMP_CALL(sub_00780838); /* 0x005C9793: call 0x780838 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x005C9798: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C979B: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C979E:
    PUSH32(esp, ecx); /* 0x005C979E: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C979F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C97A5: add esp, 4 */
    _flag_k = FK_ADD;
L_005C97A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C97A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ebx; /* 0x005C97AA: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = 7; /* 0x005C97AD: mov dword ptr [esi + 0x14], 7 */
    /* cmp eax, edi */ /* 0x005C97B4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(esi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x005C97B6: mov word ptr [esi + ebx*2], ax */
    ebx = POP32_VAL(esp); /* 0x005C97BA: pop ebx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x005C97BB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x005C97BD: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x005C97BE: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005C97C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C97C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C97C2: ret 8 */
L_005C97C5:
    /* test edi, edi */ /* 0x005C97C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C97D8; /* 0x005C97C7: jne 0x5c97d8 */
L_005C97C9:
    MEM32(esi + 0x10) = edi; /* 0x005C97C9: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 8 */ /* 0x005C97CC: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C97D3; /* 0x005C97CF: jb 0x5c97d3 */
L_005C97D1:
    esi = MEM32(esi); /* 0x005C97D1: mov esi, dword ptr [esi] */
L_005C97D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C97D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C97D5: mov word ptr [esi], ax */
L_005C97D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C97D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x005C97DA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x005C97DC: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x005C97DD: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x005C97DF: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005C97E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C97E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C97E3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C97F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C97F0u);

L_005C97F0:
    PUSH32(esp, ebp); /* 0x005C97F0: push ebp */
    ebp = esp; /* 0x005C97F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C97F3: push -1 */
    PUSH32(esp, 0x007AD840u); /* 0x005C97F5: push 0x7ad840 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C97FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9800: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005C9801: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9804: push ebx */
    PUSH32(esp, esi); /* 0x005C9805: push esi */
    PUSH32(esp, edi); /* 0x005C9806: push edi */
    eax = MEM32(0x855000); /* 0x005C9807: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C980C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C980E: push eax */
    eax = ebp + (-0xC); /* 0x005C980F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9812: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9818: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005C981B: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005C981D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x005C981F: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(ebp + 0x8); /* 0x005C9822: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x005C9825: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C984C; /* 0x005C9827: je 0x5c984c */
L_005C9829:
    /* cmp eax, 0x02E8BA2Eu */ /* 0x005C9829: cmp eax, 0x2e8ba2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02E8BA2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C9846; /* 0x005C982E: ja 0x5c9846 */
L_005C9830:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x005C9830: imul eax, eax, 0x58 */
    PUSH32(esp, eax); /* 0x005C9833: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005C9834: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C983A: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x005C983D: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x005C983F: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x005C9842: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C984C; /* 0x005C9844: jne 0x5c984c */
L_005C9846:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005C9846: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005C984C:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C984C: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C9853: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005C9856: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005C9859: push edi */
    edx = MEM32(ebx + 0x4); /* 0x005C985A: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005C985D: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005CAE60); /* 0x005C985F: call 0x5cae60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005C9864: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9867: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx + 0x4); /* 0x005C986E: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005C9871: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(ebx); /* 0x005C9874: mov esi, dword ptr [ebx] */
    ecx = eax; /* 0x005C9876: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005C9878: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005C987A: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005C987F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005C9881: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005C9884: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005C9886: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005C9886: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005C9889: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005C988B: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x005C988E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C98B1; /* 0x005C9890: je 0x5c98b1 */
L_005C9892:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x005C9892: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C98A6; /* 0x005C9895: je 0x5c98a6 */
L_005C9897:
    ecx = esi; /* 0x005C9897: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005C9899: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005C989E: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x005C98A1: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9897; /* 0x005C98A4: jne 0x5c9897 */
L_005C98A6:
    PUSH32(esp, MEM32(ebx)); /* 0x005C98A6: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C98A8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C98AE: add esp, 4 */
    _flag_k = FK_ADD;
L_005C98B1:
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x58u); /* 0x005C98B1: imul eax, dword ptr [ebp + 8], 0x58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005C98B5: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x005C98B7: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x58u); /* 0x005C98BA: imul eax, dword ptr [ebp - 0x18], 0x58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005C98BE: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005C98C0: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = edi; /* 0x005C98C3: mov dword ptr [ebx], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C98C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C98C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C98CF: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C98D0: pop edi */
    esi = POP32_VAL(esp); /* 0x005C98D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C98D2: pop ebx */
    esp = ebp; /* 0x005C98D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C98D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C98D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C98D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C98D9u);

L_005C98D9:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005C98D9: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C98DC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C98E2: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005C98E5: push 0 */
    PUSH32(esp, 0); /* 0x005C98E7: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005C98E9: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C98EEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C98F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C98F0u);

L_005C98F0:
    PUSH32(esp, ebp); /* 0x005C98F0: push ebp */
    ebp = esp; /* 0x005C98F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C98F3: push -1 */
    PUSH32(esp, 0x007AD860u); /* 0x005C98F5: push 0x7ad860 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C98FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9900: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005C9901: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9904: push ebx */
    PUSH32(esp, esi); /* 0x005C9905: push esi */
    PUSH32(esp, edi); /* 0x005C9906: push edi */
    eax = MEM32(0x855000); /* 0x005C9907: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C990C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C990E: push eax */
    eax = ebp + (-0xC); /* 0x005C990F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9912: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9918: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005C991B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005C991D: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x005C9920: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x14); /* 0x005C9923: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x005C9926: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x18); /* 0x005C9929: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x005C992C: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x005C992F: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x005C9932: mov dword ptr [esi + 0x1c], eax */
    RECOMP_CALL(sub_005C9DE0); /* 0x005C9935: call 0x5c9de0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005C993A: mov dword ptr [ebp - 4], 0 */
    /* fwait */ /* 0x005C9941: wait  */
    eax = MEM32(esi); /* 0x005C9942: mov eax, dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x005C9944: mov dword ptr [ebp + 8], eax */
    edx = MEM32(edi + 0xC); /* 0x005C9947: mov edx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0x8); /* 0x005C994A: sub edx, dword ptr [edi + 8] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x005C994D: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ecx = esi + 0x8; /* 0x005C9950: lea ecx, [esi + 8] */
    eax = MEM32(ecx); /* 0x005C9953: mov eax, dword ptr [ecx] */
    MEM32(ecx + 0x4) = eax; /* 0x005C9955: mov dword ptr [ecx + 4], eax */
    eax = ebp + 0x8; /* 0x005C9958: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005C995B: push eax */
    PUSH32(esp, edx); /* 0x005C995C: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x005C995D: push dword ptr [ecx] */
    eax = ebp + (-0x18); /* 0x005C995F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005C9962: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x005C9963: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005C9968: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x005C996A: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005C996B: push dword ptr [eax] */
    ecx = esi; /* 0x005C996D: mov ecx, esi */
    RECOMP_CALL(sub_005CA600); /* 0x005C996F: call 0x5ca600 */
    RECOMP_FLAGS_IN();
    /* fwait */ /* 0x005C9974: wait  */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9975: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C997C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C997F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9986: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C9987: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9988: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9989: pop ebx */
    esp = ebp; /* 0x005C998A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C998C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C998D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9990u);

L_005C9990:
    ecx = MEM32(ebp + (-0x14)); /* 0x005C9990: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_005C9DA0); /* 0x005C9993: call 0x5c9da0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005C9998: push 0 */
    PUSH32(esp, 0); /* 0x005C999A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005C999C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C99A1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C99B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C99B0u);

L_005C99B0:
    PUSH32(esp, ebp); /* 0x005C99B0: push ebp */
    ebp = esp; /* 0x005C99B1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x005C99B3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005C99B6: push ebx */
    PUSH32(esp, esi); /* 0x005C99B7: push esi */
    PUSH32(esp, edi); /* 0x005C99B8: push edi */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005C99B9: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x005C99BD: mov ebx, ecx */
    edi = MEM32(edx + 0x10); /* 0x005C99BF: mov edi, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C99C6; /* 0x005C99C2: jb 0x5c99c6 */
L_005C99C4:
    edx = MEM32(edx); /* 0x005C99C4: mov edx, dword ptr [edx] */
L_005C99C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C99C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x811C9DC5u; /* 0x005C99C8: mov esi, 0x811c9dc5 */
    /* test edi, edi */ /* 0x005C99CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C99E2; /* 0x005C99CF: je 0x5c99e2 */
L_005C99D1:
    eax = (uint32_t)MEM8(edx + ecx); /* 0x005C99D1: movzx eax, byte ptr [edx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005C99D5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x005C99D6: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)((int32_t)eax * (int32_t)0x01000193u); /* 0x005C99D8: imul esi, eax, 0x1000193 */
    /* cmp ecx, edi */ /* 0x005C99DE: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005C99D1; /* 0x005C99E0: jb 0x5c99d1 */
L_005C99E2:
    edx = MEM32(ebx + 0x14); /* 0x005C99E2: mov edx, dword ptr [ebx + 0x14] */
    eax = edx; /* 0x005C99E5: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x005C99E7: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x005C99E8: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x18), eax */ /* 0x005C99EA: cmp dword ptr [ebx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x005C99ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C99EE: pop ebx */
    if (CMP_A(_flag_a, _flag_b)) goto L_005C99FA; /* 0x005C99EF: ja 0x5c99fa */
L_005C99F1:
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005C99F1: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005C99F1: shr edx, 1 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x005C99F3: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x005C99F6: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005C99F8: add eax, ecx */
    _flag_k = FK_ADD;
L_005C99FA:
    ebp = POP32_VAL(esp); /* 0x005C99FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C99FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9A00u);

L_005C9A00:
    PUSH32(esp, ebp); /* 0x005C9A00: push ebp */
    ebp = esp; /* 0x005C9A01: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x005C9A03: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x005C9A06: push esi */
    PUSH32(esp, edi); /* 0x005C9A07: push edi */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005C9A08: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(edx + 0x10); /* 0x005C9A0C: mov esi, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9A13; /* 0x005C9A0F: jb 0x5c9a13 */
L_005C9A11:
    edx = MEM32(edx); /* 0x005C9A11: mov edx, dword ptr [edx] */
L_005C9A13:
    ecx = MEM32(ebp + 0x8); /* 0x005C9A13: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005C9A16: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ecx + 0x10); /* 0x005C9A1A: mov edi, dword ptr [ecx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9A21; /* 0x005C9A1D: jb 0x5c9a21 */
L_005C9A1F:
    ecx = MEM32(ecx); /* 0x005C9A1F: mov ecx, dword ptr [ecx] */
L_005C9A21:
    /* cmp edi, esi */ /* 0x005C9A21: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x005C9A23: mov eax, esi */
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x005C9A25: cmovb eax, edi */
    PUSH32(esp, eax); /* 0x005C9A28: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005C9A29: call 0x424360 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005C9A2E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9A30: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x005C9A33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C9A50; /* 0x005C9A35: jne 0x5c9a50 */
L_005C9A37:
    /* cmp edi, esi */ /* 0x005C9A37: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9A49; /* 0x005C9A39: jae 0x5c9a49 */
L_005C9A3B:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x005C9A3B: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x005C9A3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C9A40: pop edi */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005C9A41: setne al */
    esi = POP32_VAL(esp); /* 0x005C9A44: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9A46: ret 8 */
L_005C9A49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9A49: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x005C9A4B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005C9A4D: setne cl */
L_005C9A50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9A50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x005C9A52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005C9A54: pop edi */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005C9A55: setne al */
    esi = POP32_VAL(esp); /* 0x005C9A58: pop esi */
    ebp = POP32_VAL(esp); /* 0x005C9A59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9A5A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9A60u);

L_005C9A60:
    eax = ecx; /* 0x005C9A60: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9A62: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9A70u);

L_005C9A70:
    PUSH32(esp, ebp); /* 0x005C9A70: push ebp */
    ebp = esp; /* 0x005C9A71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9A73: push -1 */
    PUSH32(esp, 0x007AD880u); /* 0x005C9A75: push 0x7ad880 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C9A7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9A80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005C9A81: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9A84: push ebx */
    PUSH32(esp, esi); /* 0x005C9A85: push esi */
    PUSH32(esp, edi); /* 0x005C9A86: push edi */
    eax = MEM32(0x855000); /* 0x005C9A87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9A8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C9A8E: push eax */
    eax = ebp + (-0xC); /* 0x005C9A8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9A92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9A98: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005C9A9B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005C9A9D: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005C9AA0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x005C9AA2: mov dword ptr [ebp - 0x18], ebx */
    edi = MEM32(ebp + 0x8); /* 0x005C9AA5: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x005C9AA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9AD2; /* 0x005C9AAA: je 0x5c9ad2 */
L_005C9AAC:
    /* cmp edi, 0x0FFFFFFFu */ /* 0x005C9AAC: cmp edi, 0xfffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C9ACC; /* 0x005C9AB2: ja 0x5c9acc */
L_005C9AB4:
    eax = edi; /* 0x005C9AB4: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005C9AB6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005C9AB6: shl eax, 4 */
    PUSH32(esp, eax); /* 0x005C9AB9: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005C9ABA: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9AC0: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x005C9AC3: mov ebx, eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x005C9AC5: mov dword ptr [ebp - 0x18], ebx */
    /* test ebx, ebx */ /* 0x005C9AC8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C9AD2; /* 0x005C9ACA: jne 0x5c9ad2 */
L_005C9ACC:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005C9ACC: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005C9AD2:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C9AD2: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005C9AD9: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005C9ADC: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9ADF: push ebx */
    edx = MEM32(esi + 0x4); /* 0x005C9AE0: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x005C9AE3: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_005CAFC0); /* 0x005C9AE5: call 0x5cafc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005C9AEA: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9AED: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4); /* 0x005C9AF4: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + 0x8) = ecx; /* 0x005C9AF7: mov dword ptr [ebp + 8], ecx */
    esi = MEM32(esi); /* 0x005C9AFA: mov esi, dword ptr [esi] */
    eax = ecx; /* 0x005C9AFC: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005C9AFE: sub eax, esi */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x005C9B00: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(ebp + (-0x18)) = eax; /* 0x005C9B03: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x005C9B06: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9B34; /* 0x005C9B08: je 0x5c9b34 */
L_005C9B0A:
    /* cmp esi, ecx */ /* 0x005C9B0A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9B21; /* 0x005C9B0C: je 0x5c9b21 */
L_005C9B0E:
    edi = edi; /* 0x005C9B0E: mov edi, edi */
L_005C9B10:
    PUSH32(esp, 0); /* 0x005C9B10: push 0 */
    ecx = esi; /* 0x005C9B12: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005C9B14: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005C9B19: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005C9B1C: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9B10; /* 0x005C9B1F: jne 0x5c9b10 */
L_005C9B21:
    esi = MEM32(ebp + (-0x14)); /* 0x005C9B21: mov esi, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(esi)); /* 0x005C9B24: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9B26: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9B2C: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x005C9B2F: mov eax, dword ptr [ebp - 0x18] */
    goto L_005C9B37; /* 0x005C9B32: jmp 0x5c9b37 */
L_005C9B34:
    esi = MEM32(ebp + (-0x14)); /* 0x005C9B34: mov esi, dword ptr [ebp - 0x14] */
L_005C9B37:
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x005C9B37: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x005C9B37: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x005C9B3A: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = edi; /* 0x005C9B3C: mov dword ptr [esi + 8], edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005C9B3F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005C9B3F: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005C9B42: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x005C9B44: mov dword ptr [esi + 4], eax */
    MEM32(esi) = ebx; /* 0x005C9B47: mov dword ptr [esi], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9B49: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9B4C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9B53: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C9B54: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9B55: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9B56: pop ebx */
    esp = ebp; /* 0x005C9B57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9B59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C9B5A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9B5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9B5Du);

L_005C9B5D:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005C9B5D: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9B60: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9B66: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005C9B69: push 0 */
    PUSH32(esp, 0); /* 0x005C9B6B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005C9B6D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C9B72u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C9B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9B80u);

L_005C9B80:
    PUSH32(esp, ebp); /* 0x005C9B80: push ebp */
    ebp = esp; /* 0x005C9B81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005C9B83: push ebx */
    PUSH32(esp, esi); /* 0x005C9B84: push esi */
    PUSH32(esp, edi); /* 0x005C9B85: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005C9B86: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005C9B89: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x005C9B8B: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x10); /* 0x005C9B8E: mov eax, dword ptr [edi + 0x10] */
    /* cmp eax, ecx */ /* 0x005C9B91: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9BA0; /* 0x005C9B93: jae 0x5c9ba0 */
L_005C9B95:
    PUSH32(esp, 0x007CCE6Cu); /* 0x005C9B95: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x005C9B9A: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
L_005C9BA0:
    ebx = MEM32(ebp + 0x10); /* 0x005C9BA0: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C9BA3: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x10); /* 0x005C9BA5: mov ecx, dword ptr [esi + 0x10] */
    /* cmp eax, ebx */ /* 0x005C9BA8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x005C9BAA: mov dword ptr [ebp + 8], ecx */
    if (CMP_B(_flag_a, _flag_b)) { ebx = eax; } /* 0x005C9BAD: cmovb ebx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005C9BB0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C9BB3: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x005C9BB5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C9BC4; /* 0x005C9BB7: ja 0x5c9bc4 */
L_005C9BB9:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005C9BB9: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9BBE: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C9BC4:
    /* test ebx, ebx */ /* 0x005C9BC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9C18; /* 0x005C9BC6: je 0x5c9c18 */
L_005C9BC8:
    eax = ecx + ebx; /* 0x005C9BC8: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x005C9BCB: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005C9BCD: push 0 */
    PUSH32(esp, eax); /* 0x005C9BCF: push eax */
    RECOMP_CALL(sub_005C9730); /* 0x005C9BD0: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005C9BD5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9C18; /* 0x005C9BD7: je 0x5c9c18 */
L_005C9BD9:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x005C9BD9: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9BE1; /* 0x005C9BDD: jb 0x5c9be1 */
L_005C9BDF:
    edi = MEM32(edi); /* 0x005C9BDF: mov edi, dword ptr [edi] */
L_005C9BE1:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9BE1: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9BEB; /* 0x005C9BE5: jb 0x5c9beb */
L_005C9BE7:
    ecx = MEM32(esi); /* 0x005C9BE7: mov ecx, dword ptr [esi] */
    goto L_005C9BED; /* 0x005C9BE9: jmp 0x5c9bed */
L_005C9BEB:
    ecx = esi; /* 0x005C9BEB: mov ecx, esi */
L_005C9BED:
    /* test ebx, ebx */ /* 0x005C9BED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9C0B; /* 0x005C9BEF: je 0x5c9c0b */
L_005C9BF1:
    eax = ebx + ebx; /* 0x005C9BF1: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x005C9BF4: push eax */
    eax = MEM32(ebp + 0xC); /* 0x005C9BF5: mov eax, dword ptr [ebp + 0xc] */
    eax = edi + eax * 2; /* 0x005C9BF8: lea eax, [edi + eax*2] */
    PUSH32(esp, eax); /* 0x005C9BFB: push eax */
    eax = MEM32(esi + 0x10); /* 0x005C9BFC: mov eax, dword ptr [esi + 0x10] */
    eax = ecx + eax * 2; /* 0x005C9BFF: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x005C9C02: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005C9C03: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C9C08: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C9C0B:
    eax = MEM32(ebp + 0x8); /* 0x005C9C0B: mov eax, dword ptr [ebp + 8] */
    ecx = esi; /* 0x005C9C0E: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005C9C10: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005C9C12: push eax */
    RECOMP_CALL(sub_0055A480); /* 0x005C9C13: call 0x55a480 */
    RECOMP_FLAGS_IN();
L_005C9C18:
    edi = POP32_VAL(esp); /* 0x005C9C18: pop edi */
    eax = esi; /* 0x005C9C19: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005C9C1B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9C1C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005C9C1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005C9C1E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005C9C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9C30u);
    RECOMP_EH_ENTER();

L_005C9C30:
    PUSH32(esp, ebp); /* 0x005C9C30: push ebp */
    ebp = esp; /* 0x005C9C31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9C33: push -1 */
    PUSH32(esp, 0x007AD8A5u); /* 0x005C9C35: push 0x7ad8a5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C9C3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9C40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005C9C41: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9C44: push ebx */
    PUSH32(esp, esi); /* 0x005C9C45: push esi */
    PUSH32(esp, edi); /* 0x005C9C46: push edi */
    eax = MEM32(0x855000); /* 0x005C9C47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9C4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C9C4E: push eax */
    eax = ebp + (-0xC); /* 0x005C9C4F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9C52: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9C58: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005C9C5B: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x005C9C5D: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(ebp + 0x8); /* 0x005C9C60: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x005C9C63: mov edi, eax */
    _flag_a = (uint32_t)((edi | 7)); _flag_b = (uint32_t)((edi | 7));
    edi = edi | 7; /* 0x005C9C65: or edi, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x7FFFFFFEu */ /* 0x005C9C68: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C9C74; /* 0x005C9C6E: jbe 0x5c9c74 */
L_005C9C70:
    edi = eax; /* 0x005C9C70: mov edi, eax */
    goto L_005C9C9B; /* 0x005C9C72: jmp 0x5c9c9b */
L_005C9C74:
    ebx = MEM32(esi + 0x14); /* 0x005C9C74: mov ebx, dword ptr [esi + 0x14] */
    ecx = ebx; /* 0x005C9C77: mov ecx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005C9C79: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005C9C79: shr ecx, 1 */
    eax = 0xAAAAAAABu; /* 0x005C9C7B: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x005C9C80: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005C9C82: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005C9C82: shr edx, 1 */
    /* cmp ecx, edx */ /* 0x005C9C84: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C9C9B; /* 0x005C9C86: jbe 0x5c9c9b */
L_005C9C88:
    eax = 0x7FFFFFFEu; /* 0x005C9C88: mov eax, 0x7ffffffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005C9C8D: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x005C9C8F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx + ebx; /* 0x005C9C91: lea edi, [ecx + ebx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_005C9C9B; /* 0x005C9C94: jbe 0x5c9c9b */
L_005C9C96:
    edi = 0x7FFFFFFEu; /* 0x005C9C96: mov edi, 0x7ffffffe */
L_005C9C9B:
    MEM32(ebp + (-0x4)) = 0; /* 0x005C9C9B: mov dword ptr [ebp - 4], 0 */
    eax = edi + 0x1; /* 0x005C9CA2: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x005C9CA5: push eax */
    RECOMP_CALL(sub_005C9E90); /* 0x005C9CA6: call 0x5c9e90 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005C9CAB: mov ecx, eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005C9CAD: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9CB0: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_005C9CED; /* 0x005C9CB7: jmp 0x5c9ced */
L_005C9CDD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9CDD: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + (-0x18)); /* 0x005C9CE4: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x8); /* 0x005C9CE7: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x005C9CEA: mov ecx, dword ptr [ebp - 0x14] */
L_005C9CED:
    ebx = MEM32(ebp + 0xC); /* 0x005C9CED: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x005C9CF0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9D12; /* 0x005C9CF2: je 0x5c9d12 */
L_005C9CF4:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9CF4: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9CFE; /* 0x005C9CF8: jb 0x5c9cfe */
L_005C9CFA:
    edx = MEM32(esi); /* 0x005C9CFA: mov edx, dword ptr [esi] */
    goto L_005C9D00; /* 0x005C9CFC: jmp 0x5c9d00 */
L_005C9CFE:
    edx = esi; /* 0x005C9CFE: mov edx, esi */
L_005C9D00:
    /* test ebx, ebx */ /* 0x005C9D00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9D12; /* 0x005C9D02: je 0x5c9d12 */
L_005C9D04:
    eax = ebx + ebx; /* 0x005C9D04: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x005C9D07: push eax */
    PUSH32(esp, edx); /* 0x005C9D08: push edx */
    PUSH32(esp, ecx); /* 0x005C9D09: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x005C9D0A: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C9D0F: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C9D12:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9D12: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9D23; /* 0x005C9D16: jb 0x5c9d23 */
L_005C9D18:
    PUSH32(esp, MEM32(esi)); /* 0x005C9D18: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9D1A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9D20: add esp, 4 */
    _flag_k = FK_ADD;
L_005C9D23:
    MEM32(esi + 0x14) = 7; /* 0x005C9D23: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C9D2A: mov dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C9D33: mov word ptr [esi], ax */
    MEM32(ebp + (-0x4)) = 4; /* 0x005C9D36: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0x14)); /* 0x005C9D3D: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x005C9D40: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9D42: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi + 0x14) = edi; /* 0x005C9D49: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = ebx; /* 0x005C9D4C: mov dword ptr [esi + 0x10], ebx */
    /* cmp edi, 8 */ /* 0x005C9D4F: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9D56; /* 0x005C9D52: jb 0x5c9d56 */
L_005C9D54:
    esi = MEM32(esi); /* 0x005C9D54: mov esi, dword ptr [esi] */
L_005C9D56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9D56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x005C9D58: mov word ptr [esi + ebx*2], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9D5C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9D5F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9D66: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C9D67: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9D68: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9D69: pop ebx */
    esp = ebp; /* 0x005C9D6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9D6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x005C9D6D: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005C9CDDu: goto L_005C9CDD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_005C9CB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9CB9u);

L_005C9CB9:
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9CB9: mov dword ptr [ebp - 0x10], esp */
    eax = MEM32(ebp + 0x8); /* 0x005C9CBC: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x005C9CBF: mov dword ptr [ebp + 8], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005C9CC2: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005C9CC6: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x005C9CC7: push eax */
    RECOMP_CALL(sub_005C9E90); /* 0x005C9CC8: call 0x5c9e90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x005C9CCD: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x005C9CD0: mov dword ptr [ebp - 4], 1 */
    eax = 0x005C9CDDu; /* 0x005C9CD7: mov eax, 0x5c9cdd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C9CDC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C9CDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9CDDu);

L_005C9CDD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9CDD: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + (-0x18)); /* 0x005C9CE4: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x8); /* 0x005C9CE7: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x005C9CEA: mov ecx, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + 0xC); /* 0x005C9CED: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x005C9CF0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9D12; /* 0x005C9CF2: je 0x5c9d12 */
L_005C9CF4:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9CF4: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9CFE; /* 0x005C9CF8: jb 0x5c9cfe */
L_005C9CFA:
    edx = MEM32(esi); /* 0x005C9CFA: mov edx, dword ptr [esi] */
    goto L_005C9D00; /* 0x005C9CFC: jmp 0x5c9d00 */
L_005C9CFE:
    edx = esi; /* 0x005C9CFE: mov edx, esi */
L_005C9D00:
    /* test ebx, ebx */ /* 0x005C9D00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9D12; /* 0x005C9D02: je 0x5c9d12 */
L_005C9D04:
    eax = ebx + ebx; /* 0x005C9D04: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x005C9D07: push eax */
    PUSH32(esp, edx); /* 0x005C9D08: push edx */
    PUSH32(esp, ecx); /* 0x005C9D09: push ecx */
    RECOMP_CALL(sub_00780838); /* 0x005C9D0A: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005C9D0F: add esp, 0xc */
    _flag_k = FK_ADD;
L_005C9D12:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9D12: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9D23; /* 0x005C9D16: jb 0x5c9d23 */
L_005C9D18:
    PUSH32(esp, MEM32(esi)); /* 0x005C9D18: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9D1A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9D20: add esp, 4 */
    _flag_k = FK_ADD;
L_005C9D23:
    MEM32(esi + 0x14) = 7; /* 0x005C9D23: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C9D2A: mov dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C9D33: mov word ptr [esi], ax */
    MEM32(ebp + (-0x4)) = 4; /* 0x005C9D36: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(ebp + (-0x14)); /* 0x005C9D3D: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x005C9D40: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9D42: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi + 0x14) = edi; /* 0x005C9D49: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x10) = ebx; /* 0x005C9D4C: mov dword ptr [esi + 0x10], ebx */
    /* cmp edi, 8 */ /* 0x005C9D4F: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9D56; /* 0x005C9D52: jb 0x5c9d56 */
L_005C9D54:
    esi = MEM32(esi); /* 0x005C9D54: mov esi, dword ptr [esi] */
L_005C9D56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9D56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x005C9D58: mov word ptr [esi + ebx*2], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9D5C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9D5F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9D66: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C9D67: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9D68: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9D69: pop ebx */
    esp = ebp; /* 0x005C9D6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9D6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005C9D6D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005C9D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9D70u);

L_005C9D70:
    esi = MEM32(ebp + (-0x18)); /* 0x005C9D70: mov esi, dword ptr [ebp - 0x18] */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005C9D73: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9D84; /* 0x005C9D77: jb 0x5c9d84 */
L_005C9D79:
    PUSH32(esp, MEM32(esi)); /* 0x005C9D79: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9D7B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9D81: add esp, 4 */
    _flag_k = FK_ADD;
L_005C9D84:
    MEM32(esi + 0x14) = 7; /* 0x005C9D84: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005C9D8B: mov dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9D92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x005C9D94: mov word ptr [esi], ax */
    PUSH32(esp, eax); /* 0x005C9D97: push eax */
    PUSH32(esp, eax); /* 0x005C9D98: push eax */
    RECOMP_CALL(sub_00780016); /* 0x005C9D99: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005C9D9Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005C9DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9DA0u);

L_005C9DA0:
    PUSH32(esp, ebp); /* 0x005C9DA0: push ebp */
    ebp = esp; /* 0x005C9DA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005C9DA3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005C9DA6: push esi */
    esi = ecx; /* 0x005C9DA7: mov esi, ecx */
    RECOMP_CALL(sub_005C9DE0); /* 0x005C9DA9: call 0x5c9de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005C9DAE: mov eax, dword ptr [esi] */
    edx = ebp + (-0x4); /* 0x005C9DB0: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x005C9DB3: push edx */
    ecx = esi + 0x8; /* 0x005C9DB4: lea ecx, [esi + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005C9DB7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x005C9DBA: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x005C9DBC: push 0x10 */
    PUSH32(esp, eax); /* 0x005C9DBE: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x005C9DBF: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x8); /* 0x005C9DC2: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x005C9DC5: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x005C9DC6: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 7; /* 0x005C9DCB: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x18) = 8; /* 0x005C9DD2: mov dword ptr [esi + 0x18], 8 */
    esi = POP32_VAL(esp); /* 0x005C9DD9: pop esi */
    esp = ebp; /* 0x005C9DDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9DDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C9DDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C9DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9DE0u);

L_005C9DE0:
    PUSH32(esp, ebp); /* 0x005C9DE0: push ebp */
    ebp = esp; /* 0x005C9DE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9DE3: push -1 */
    PUSH32(esp, 0x007AD8D3u); /* 0x005C9DE5: push 0x7ad8d3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C9DEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9DF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005C9DF1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9DF4: push ebx */
    PUSH32(esp, esi); /* 0x005C9DF5: push esi */
    PUSH32(esp, edi); /* 0x005C9DF6: push edi */
    eax = MEM32(0x855000); /* 0x005C9DF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9DFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C9DFE: push eax */
    eax = ebp + (-0xC); /* 0x005C9DFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9E02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005C9E08: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(ecx); /* 0x005C9E0B: mov eax, dword ptr [ecx] */
    edi = MEM32(eax); /* 0x005C9E0D: mov edi, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x005C9E0F: mov dword ptr [eax], eax */
    eax = MEM32(ecx); /* 0x005C9E11: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x4) = eax; /* 0x005C9E13: mov dword ptr [eax + 4], eax */
    MEM32(ecx + 0x4) = 0; /* 0x005C9E16: mov dword ptr [ecx + 4], 0 */
    /* cmp edi, MEM32(ecx) */ /* 0x005C9E1D: cmp edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005C9E76; /* 0x005C9E1F: je 0x5c9e76 */
L_005C9E21:
    ebx = MEM32(edi); /* 0x005C9E21: mov ebx, dword ptr [edi] */
    esi = edi + 0x8; /* 0x005C9E23: lea esi, [edi + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005C9E26: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005C9E29: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x005C9E30: lea ecx, [esi + 0x18] */
    PUSH32(esp, 0); /* 0x005C9E33: push 0 */
    RECOMP_CALL(sub_005C64E0); /* 0x005C9E35: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9E3A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005C9E41: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9E52; /* 0x005C9E45: jb 0x5c9e52 */
L_005C9E47:
    PUSH32(esp, MEM32(esi)); /* 0x005C9E47: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9E49: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9E4F: add esp, 4 */
    _flag_k = FK_ADD;
L_005C9E52:
    MEM32(esi + 0x14) = 0xFu; /* 0x005C9E52: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005C9E59: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, edi); /* 0x005C9E60: push edi */
    MEM8(esi) = (uint8_t)(0); /* 0x005C9E61: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9E64: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005C9E6A: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9E6D: add esp, 4 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x005C9E70: mov edi, ebx */
    /* cmp ebx, MEM32(eax) */ /* 0x005C9E72: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005C9E21; /* 0x005C9E74: jne 0x5c9e21 */
L_005C9E76:
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9E76: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9E79: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9E80: pop ecx */
    edi = POP32_VAL(esp); /* 0x005C9E81: pop edi */
    esi = POP32_VAL(esp); /* 0x005C9E82: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9E83: pop ebx */
    esp = ebp; /* 0x005C9E84: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9E86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005C9E87: ret  */
    RECOMP_REGS_OUT();
}

void sub_005C9E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9E90u);

L_005C9E90:
    PUSH32(esp, ebp); /* 0x005C9E90: push ebp */
    ebp = esp; /* 0x005C9E91: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005C9E93: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005C9E96: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x005C9E98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005C9EBB; /* 0x005C9E9A: je 0x5c9ebb */
L_005C9E9C:
    /* cmp eax, 0x7FFFFFFFu */ /* 0x005C9E9C: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005C9EB5; /* 0x005C9EA1: ja 0x5c9eb5 */
L_005C9EA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x005C9EA3: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005C9EA5: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005C9EA6: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005C9EAC: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9EAE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x005C9EB1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005C9EBB; /* 0x005C9EB3: jne 0x5c9ebb */
L_005C9EB5:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005C9EB5: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005C9EBB:
    eax = ecx; /* 0x005C9EBB: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x005C9EBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C9EBE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9ED0u);

L_005C9ED0:
    PUSH32(esp, ebp); /* 0x005C9ED0: push ebp */
    ebp = esp; /* 0x005C9ED1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9ED3: push -1 */
    PUSH32(esp, 0x007AD903u); /* 0x005C9ED5: push 0x7ad903 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C9EDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9EE0: push eax */
    PUSH32(esp, ebx); /* 0x005C9EE1: push ebx */
    PUSH32(esp, esi); /* 0x005C9EE2: push esi */
    eax = MEM32(0x855000); /* 0x005C9EE3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9EE8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C9EEA: push eax */
    eax = ebp + (-0xC); /* 0x005C9EEB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9EEE: mov dword ptr fs:[0], eax */
    ebx = MEM32(ebp + 0x8); /* 0x005C9EF4: mov ebx, dword ptr [ebp + 8] */
    esi = ebx + 0x8; /* 0x005C9EF7: lea esi, [ebx + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x005C9EFA: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005C9EFD: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x005C9F04: lea ecx, [esi + 0x18] */
    PUSH32(esp, 0); /* 0x005C9F07: push 0 */
    RECOMP_CALL(sub_005C64E0); /* 0x005C9F09: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005C9F0E: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005C9F15: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005C9F26; /* 0x005C9F19: jb 0x5c9f26 */
L_005C9F1B:
    PUSH32(esp, MEM32(esi)); /* 0x005C9F1B: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9F1D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9F23: add esp, 4 */
    _flag_k = FK_ADD;
L_005C9F26:
    MEM32(esi + 0x14) = 0xFu; /* 0x005C9F26: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005C9F2D: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x005C9F34: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x005C9F35: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005C9F38: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005C9F3E: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005C9F41: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005C9F44: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005C9F4B: pop ecx */
    esi = POP32_VAL(esp); /* 0x005C9F4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005C9F4D: pop ebx */
    esp = ebp; /* 0x005C9F4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005C9F50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005C9F51: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005C9F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005C9F70u);

L_005C9F70:
    PUSH32(esp, ebp); /* 0x005C9F70: push ebp */
    ebp = esp; /* 0x005C9F71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005C9F73: push -1 */
    PUSH32(esp, 0x007AD920u); /* 0x005C9F75: push 0x7ad920 */
    eax = MEM32(FS_BASE + (0)); /* 0x005C9F7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005C9F80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005C9F81: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005C9F84: push ebx */
    PUSH32(esp, esi); /* 0x005C9F85: push esi */
    PUSH32(esp, edi); /* 0x005C9F86: push edi */
    eax = MEM32(0x855000); /* 0x005C9F87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005C9F8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005C9F8E: push eax */
    eax = ebp + (-0xC); /* 0x005C9F8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005C9F92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005C9F98: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005C9F9B: mov ebx, ecx */
    edx = MEM32(ebx); /* 0x005C9F9D: mov edx, dword ptr [ebx] */
    ecx = MEM32(ebp + 0xC); /* 0x005C9F9F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005C9FA2: mov dword ptr [ebp - 0x14], ecx */
    eax = ecx; /* 0x005C9FA5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005C9FA7: sub eax, edx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005C9FA9: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebp + (-0x20)) = eax; /* 0x005C9FAC: mov dword ptr [ebp - 0x20], eax */
    esi = MEM32(ebp + 0x10); /* 0x005C9FAF: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x005C9FB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA191; /* 0x005C9FB4: je 0x5ca191 */
L_005C9FBA:
    edi = MEM32(ebx + 0x4); /* 0x005C9FBA: mov edi, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x005C9FBD: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005C9FC0: sub eax, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005C9FC2: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp eax, esi */ /* 0x005C9FC5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA0DB; /* 0x005C9FC7: jae 0x5ca0db */
L_005C9FCD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x005C9FCD: sub edi, edx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x005C9FCF: sar edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 2u);
    eax = 0x3FFFFFFFu; /* 0x005C9FD2: mov eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005C9FD7: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005C9FD9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005C9FE8; /* 0x005C9FDB: jae 0x5c9fe8 */
L_005C9FDD:
    PUSH32(esp, 0x007DFAB0u); /* 0x005C9FDD: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005C9FE2: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005C9FE8:
    eax = edi + esi; /* 0x005C9FE8: lea eax, [edi + esi] */
    PUSH32(esp, eax); /* 0x005C9FEB: push eax */
    ecx = ebx; /* 0x005C9FEC: mov ecx, ebx */
    RECOMP_CALL(sub_005CA270); /* 0x005C9FEE: call 0x5ca270 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005C9FF3: mov ecx, eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x005C9FF5: mov dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005C9FF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x005C9FFA: mov dword ptr [ebp + 0x10], eax */
    /* test ecx, ecx */ /* 0x005C9FFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA028; /* 0x005C9FFF: je 0x5ca028 */
L_005CA001:
    /* cmp ecx, 0x3FFFFFFFu */ /* 0x005CA001: cmp ecx, 0x3fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005CA022; /* 0x005CA007: ja 0x5ca022 */
L_005CA009:
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x005CA009: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x005CA009: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x005CA00C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005CA00D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA013: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x005CA016: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x005CA019: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA022; /* 0x005CA01B: je 0x5ca022 */
L_005CA01D:
    edi = MEM32(ebp + 0xC); /* 0x005CA01D: mov edi, dword ptr [ebp + 0xc] */
    goto L_005CA02B; /* 0x005CA020: jmp 0x5ca02b */
L_005CA022:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005CA022: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005CA028:
    edi = MEM32(ebp + (-0x14)); /* 0x005CA028: mov edi, dword ptr [ebp - 0x14] */
L_005CA02B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx); /* 0x005CA02B: sub edi, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x005CA02D: sar edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 2u);
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA030: mov dword ptr [ebp - 4], 0 */
    ecx = eax + edi * 4; /* 0x005CA037: lea ecx, [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA03A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA03D: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005CA040: push dword ptr [ebp + 0x14] */
    edx = esi; /* 0x005CA043: mov edx, esi */
    RECOMP_CALL(sub_005CAC20); /* 0x005CA045: call 0x5cac20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA04A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = 1; /* 0x005CA04D: mov dword ptr [ebp - 0x18], 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA054: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA057: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CA05A: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x005CA05D: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx); /* 0x005CA060: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005CB060); /* 0x005CA062: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA067: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = 2; /* 0x005CA06A: mov dword ptr [ebp - 0x18], 2 */
    eax = edi + esi; /* 0x005CA071: lea eax, [edi + esi] */
    edi = MEM32(ebp + 0x10); /* 0x005CA074: mov edi, dword ptr [ebp + 0x10] */
    eax = edi + eax * 4; /* 0x005CA077: lea eax, [edi + eax*4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA07A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA07D: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005CA080: push eax */
    edx = MEM32(ebx + 0x4); /* 0x005CA081: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0xC); /* 0x005CA084: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005CB060); /* 0x005CA087: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA08C: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA08F: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx); /* 0x005CA096: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebx + 0x4); /* 0x005CA098: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA09B: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA09D: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x005CA0A0: add esi, eax */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x005CA0A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA0B0; /* 0x005CA0A4: je 0x5ca0b0 */
L_005CA0A6:
    PUSH32(esp, ecx); /* 0x005CA0A6: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CA0A7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA0AD: add esp, 4 */
    _flag_k = FK_ADD;
L_005CA0B0:
    eax = MEM32(ebp + (-0x1C)); /* 0x005CA0B0: mov eax, dword ptr [ebp - 0x1c] */
    eax = edi + eax * 4; /* 0x005CA0B3: lea eax, [edi + eax*4] */
    MEM32(ebx + 0x8) = eax; /* 0x005CA0B6: mov dword ptr [ebx + 8], eax */
    eax = edi + esi * 4; /* 0x005CA0B9: lea eax, [edi + esi*4] */
    MEM32(ebx + 0x4) = eax; /* 0x005CA0BC: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = edi; /* 0x005CA0BF: mov dword ptr [ebx], edi */
    goto L_005CA191; /* 0x005CA0C1: jmp 0x5ca191 */
L_005CA0DB:
    eax = edi; /* 0x005CA0DB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA0DD: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA0DF: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA0E2: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x005CA0E5: mov edx, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA0E7: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005CA0EA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x005CA0EC: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x005CA0EF: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x14) = eax; /* 0x005CA0F1: mov dword ptr [ebp + 0x14], eax */
    eax = esi * 4; /* 0x005CA0F4: lea eax, [esi*4] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA14E; /* 0x005CA0FB: jae 0x5ca14e */
L_005CA0FD:
    MEM32(ebp + 0x10) = eax; /* 0x005CA0FD: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005CA100: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005CA102: push eax */
    RECOMP_CALL(sub_005CB060); /* 0x005CA103: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA108: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 2; /* 0x005CA10B: mov dword ptr [ebp - 4], 2 */
    ecx = MEM32(ebx + 0x4); /* 0x005CA112: mov ecx, dword ptr [ebx + 4] */
    eax = ecx; /* 0x005CA115: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x005CA117: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA11A: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA11D: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA11F: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA122: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + 0x14; /* 0x005CA125: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA128: push eax */
    edx = esi; /* 0x005CA129: mov edx, esi */
    RECOMP_CALL(sub_005CAC20); /* 0x005CA12B: call 0x5cac20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA130: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA133: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x10); /* 0x005CA13A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + eax; /* 0x005CA13D: add dword ptr [ebx + 4], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x005CA140: mov edx, dword ptr [ebx + 4] */
    ecx = ebp + 0x14; /* 0x005CA143: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005CA146: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x005CA147: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x005CA149: mov ecx, dword ptr [ebp + 0xc] */
    goto L_005CA189; /* 0x005CA14C: jmp 0x5ca189 */
L_005CA14E:
    MEM32(ebp + 0x10) = eax; /* 0x005CA14E: mov dword ptr [ebp + 0x10], eax */
    esi = edi; /* 0x005CA151: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA153: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005CA155: push edi */
    ecx = esi; /* 0x005CA156: mov ecx, esi */
    RECOMP_CALL(sub_005CB060); /* 0x005CA158: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA15D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005CA160: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA163: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA166: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA17F; /* 0x005CA168: je 0x5ca17f */
L_005CA16A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x005CA16A: sub edi, esi */
    _flag_k = FK_CMP;
    esp = esp; /* 0x005CA16C: lea esp, [esp] */
L_005CA170:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005CA170: sub esi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x005CA173: mov eax, dword ptr [esi] */
    MEM32(edi + esi) = eax; /* 0x005CA175: mov dword ptr [edi + esi], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA178: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA17B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA170; /* 0x005CA17D: jne 0x5ca170 */
L_005CA17F:
    eax = ebp + 0x14; /* 0x005CA17F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA182: push eax */
    edx = MEM32(ebp + 0x10); /* 0x005CA183: mov edx, dword ptr [ebp + 0x10] */
    edx = edx + ecx; /* 0x005CA186: lea edx, [edx + ecx] */
L_005CA189:
    RECOMP_CALL(sub_005CA680); /* 0x005CA189: call 0x5ca680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA18E: add esp, 4 */
    _flag_k = FK_ADD;
L_005CA191:
    eax = MEM32(ebx); /* 0x005CA191: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x005CA193: mov ecx, dword ptr [ebp - 0x20] */
    ecx = eax + ecx * 4; /* 0x005CA196: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x8); /* 0x005CA199: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005CA19C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA19E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA1A1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA1A8: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA1A9: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA1AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA1AB: pop ebx */
    esp = ebp; /* 0x005CA1AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA1AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005CA1AF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005CA0C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA0C6u);

L_005CA0C6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CA0C6: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CA0C9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA0CF: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005CA0D2: push 0 */
    PUSH32(esp, 0); /* 0x005CA0D4: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CA0D6: call 0x780016 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x005CA0DB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA0DD: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA0DF: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA0E2: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x005CA0E5: mov edx, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA0E7: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005CA0EA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x005CA0EC: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x005CA0EF: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x14) = eax; /* 0x005CA0F1: mov dword ptr [ebp + 0x14], eax */
    eax = esi * 4; /* 0x005CA0F4: lea eax, [esi*4] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA14E; /* 0x005CA0FB: jae 0x5ca14e */
L_005CA0FD:
    MEM32(ebp + 0x10) = eax; /* 0x005CA0FD: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005CA100: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005CA102: push eax */
    RECOMP_CALL(sub_005CB060); /* 0x005CA103: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA108: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 2; /* 0x005CA10B: mov dword ptr [ebp - 4], 2 */
    ecx = MEM32(ebx + 0x4); /* 0x005CA112: mov ecx, dword ptr [ebx + 4] */
    eax = ecx; /* 0x005CA115: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x005CA117: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA11A: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA11D: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA11F: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA122: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + 0x14; /* 0x005CA125: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA128: push eax */
    edx = esi; /* 0x005CA129: mov edx, esi */
    RECOMP_CALL(sub_005CAC20); /* 0x005CA12B: call 0x5cac20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA130: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA133: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x10); /* 0x005CA13A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + eax; /* 0x005CA13D: add dword ptr [ebx + 4], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x005CA140: mov edx, dword ptr [ebx + 4] */
    ecx = ebp + 0x14; /* 0x005CA143: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005CA146: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x005CA147: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x005CA149: mov ecx, dword ptr [ebp + 0xc] */
    goto L_005CA189; /* 0x005CA14C: jmp 0x5ca189 */
L_005CA14E:
    MEM32(ebp + 0x10) = eax; /* 0x005CA14E: mov dword ptr [ebp + 0x10], eax */
    esi = edi; /* 0x005CA151: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA153: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005CA155: push edi */
    ecx = esi; /* 0x005CA156: mov ecx, esi */
    RECOMP_CALL(sub_005CB060); /* 0x005CA158: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA15D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005CA160: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA163: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA166: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA17F; /* 0x005CA168: je 0x5ca17f */
L_005CA16A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x005CA16A: sub edi, esi */
    _flag_k = FK_CMP;
    esp = esp; /* 0x005CA16C: lea esp, [esp] */
L_005CA170:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005CA170: sub esi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x005CA173: mov eax, dword ptr [esi] */
    MEM32(edi + esi) = eax; /* 0x005CA175: mov dword ptr [edi + esi], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA178: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA17B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA170; /* 0x005CA17D: jne 0x5ca170 */
L_005CA17F:
    eax = ebp + 0x14; /* 0x005CA17F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA182: push eax */
    edx = MEM32(ebp + 0x10); /* 0x005CA183: mov edx, dword ptr [ebp + 0x10] */
    edx = edx + ecx; /* 0x005CA186: lea edx, [edx + ecx] */
L_005CA189:
    RECOMP_CALL(sub_005CA680); /* 0x005CA189: call 0x5ca680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA18E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx); /* 0x005CA191: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x005CA193: mov ecx, dword ptr [ebp - 0x20] */
    ecx = eax + ecx * 4; /* 0x005CA196: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x8); /* 0x005CA199: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005CA19C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA19E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA1A1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA1A8: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA1A9: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA1AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA1AB: pop ebx */
    esp = ebp; /* 0x005CA1AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA1AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005CA1AF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005CA0D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA0D2u);

L_005CA0D2:
    PUSH32(esp, 0); /* 0x005CA0D2: push 0 */
    PUSH32(esp, 0); /* 0x005CA0D4: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CA0D6: call 0x780016 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x005CA0DB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA0DD: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA0DF: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA0E2: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x005CA0E5: mov edx, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA0E7: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005CA0EA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x005CA0EC: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x005CA0EF: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x14) = eax; /* 0x005CA0F1: mov dword ptr [ebp + 0x14], eax */
    eax = esi * 4; /* 0x005CA0F4: lea eax, [esi*4] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA14E; /* 0x005CA0FB: jae 0x5ca14e */
L_005CA0FD:
    MEM32(ebp + 0x10) = eax; /* 0x005CA0FD: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005CA100: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005CA102: push eax */
    RECOMP_CALL(sub_005CB060); /* 0x005CA103: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA108: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 2; /* 0x005CA10B: mov dword ptr [ebp - 4], 2 */
    ecx = MEM32(ebx + 0x4); /* 0x005CA112: mov ecx, dword ptr [ebx + 4] */
    eax = ecx; /* 0x005CA115: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x005CA117: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005CA11A: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA11D: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA11F: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA122: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + 0x14; /* 0x005CA125: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA128: push eax */
    edx = esi; /* 0x005CA129: mov edx, esi */
    RECOMP_CALL(sub_005CAC20); /* 0x005CA12B: call 0x5cac20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA130: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA133: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x10); /* 0x005CA13A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + eax; /* 0x005CA13D: add dword ptr [ebx + 4], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x4); /* 0x005CA140: mov edx, dword ptr [ebx + 4] */
    ecx = ebp + 0x14; /* 0x005CA143: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005CA146: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x005CA147: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x005CA149: mov ecx, dword ptr [ebp + 0xc] */
    goto L_005CA189; /* 0x005CA14C: jmp 0x5ca189 */
L_005CA14E:
    MEM32(ebp + 0x10) = eax; /* 0x005CA14E: mov dword ptr [ebp + 0x10], eax */
    esi = edi; /* 0x005CA151: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x005CA153: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005CA155: push edi */
    ecx = esi; /* 0x005CA156: mov ecx, esi */
    RECOMP_CALL(sub_005CB060); /* 0x005CA158: call 0x5cb060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CA15D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005CA160: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA163: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA166: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA17F; /* 0x005CA168: je 0x5ca17f */
L_005CA16A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x005CA16A: sub edi, esi */
    _flag_k = FK_CMP;
    esp = esp; /* 0x005CA16C: lea esp, [esp] */
L_005CA170:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005CA170: sub esi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x005CA173: mov eax, dword ptr [esi] */
    MEM32(edi + esi) = eax; /* 0x005CA175: mov dword ptr [edi + esi], eax */
    ecx = MEM32(ebp + 0xC); /* 0x005CA178: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x005CA17B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA170; /* 0x005CA17D: jne 0x5ca170 */
L_005CA17F:
    eax = ebp + 0x14; /* 0x005CA17F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x005CA182: push eax */
    edx = MEM32(ebp + 0x10); /* 0x005CA183: mov edx, dword ptr [ebp + 0x10] */
    edx = edx + ecx; /* 0x005CA186: lea edx, [edx + ecx] */
L_005CA189:
    RECOMP_CALL(sub_005CA680); /* 0x005CA189: call 0x5ca680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA18E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx); /* 0x005CA191: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x005CA193: mov ecx, dword ptr [ebp - 0x20] */
    ecx = eax + ecx * 4; /* 0x005CA196: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x8); /* 0x005CA199: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005CA19C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA19E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA1A1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA1A8: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA1A9: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA1AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA1AB: pop ebx */
    esp = ebp; /* 0x005CA1AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA1AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005CA1AF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005CA1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA1C0u);

L_005CA1C0:
    PUSH32(esp, ebp); /* 0x005CA1C0: push ebp */
    ebp = esp; /* 0x005CA1C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA1C3: push -1 */
    PUSH32(esp, 0x007AD94Au); /* 0x005CA1C5: push 0x7ad94a */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA1CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA1D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA1D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CA1D4: push ebx */
    PUSH32(esp, esi); /* 0x005CA1D5: push esi */
    PUSH32(esp, edi); /* 0x005CA1D6: push edi */
    eax = MEM32(0x855000); /* 0x005CA1D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA1DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA1DE: push eax */
    eax = ebp + (-0xC); /* 0x005CA1DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA1E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CA1E8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x30u); /* 0x005CA1EB: push 0x30 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005CA1ED: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA1F3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005CA1F6: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x005CA1F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CA203; /* 0x005CA1FB: jne 0x5ca203 */
L_005CA1FD:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005CA1FD: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005CA203:
    ecx = MEM32(ebp + 0x8); /* 0x005CA203: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x005CA206: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CA210; /* 0x005CA208: jne 0x5ca210 */
L_005CA20A:
    ecx = eax; /* 0x005CA20A: mov ecx, eax */
    edx = eax; /* 0x005CA20C: mov edx, eax */
    goto L_005CA213; /* 0x005CA20E: jmp 0x5ca213 */
L_005CA210:
    edx = MEM32(ebp + 0xC); /* 0x005CA210: mov edx, dword ptr [ebp + 0xc] */
L_005CA213:
    MEM32(ebp + (-0x4)) = 1; /* 0x005CA213: mov dword ptr [ebp - 4], 1 */
    MEM32(eax) = ecx; /* 0x005CA21A: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CA21C: mov byte ptr [ebp - 4], 0 */
    ecx = eax + 0x4; /* 0x005CA220: lea ecx, [eax + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CA223: mov byte ptr [ebp - 4], 2 */
    /* test ecx, ecx */ /* 0x005CA227: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA22D; /* 0x005CA229: je 0x5ca22d */
L_005CA22B:
    MEM32(ecx) = edx; /* 0x005CA22B: mov dword ptr [ecx], edx */
L_005CA22D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CA22D: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA231: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA238: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA23B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA242: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA243: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA244: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA245: pop ebx */
    esp = ebp; /* 0x005CA246: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA249: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CA24C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA24Cu);

L_005CA24C:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005CA24C: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CA24F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA255: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005CA258: push 0 */
    PUSH32(esp, 0); /* 0x005CA25A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CA25C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CA261u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CA270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA270u);

L_005CA270:
    PUSH32(esp, ebp); /* 0x005CA270: push ebp */
    ebp = esp; /* 0x005CA271: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x005CA273: mov edx, dword ptr [ecx + 8] */
    eax = 0x3FFFFFFFu; /* 0x005CA276: mov eax, 0x3fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x005CA27B: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x005CA27D: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ecx = edx; /* 0x005CA280: mov ecx, edx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005CA282: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005CA282: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA284: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x005CA286: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA299; /* 0x005CA288: jae 0x5ca299 */
L_005CA28A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005CA28A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x005CA28C: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = MEM32(ebp + 0x8); } /* 0x005CA28F: cmovb edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x005CA293: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x005CA295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005CA296: ret 4 */
L_005CA299:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005CA299: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x005CA29B: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = MEM32(ebp + 0x8); } /* 0x005CA29E: cmovb edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x005CA2A2: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x005CA2A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005CA2A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005CA2B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA2B0u);

L_005CA2B0:
    PUSH32(esp, ebp); /* 0x005CA2B0: push ebp */
    ebp = esp; /* 0x005CA2B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA2B3: push -1 */
    PUSH32(esp, 0x007AD983u); /* 0x005CA2B5: push 0x7ad983 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA2BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA2C0: push eax */
    PUSH32(esp, ecx); /* 0x005CA2C1: push ecx */
    PUSH32(esp, esi); /* 0x005CA2C2: push esi */
    PUSH32(esp, edi); /* 0x005CA2C3: push edi */
    eax = MEM32(0x855000); /* 0x005CA2C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA2C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA2CB: push eax */
    eax = ebp + (-0xC); /* 0x005CA2CC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA2CF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CA2D5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005CA2D7: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x005CA2DA: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x005CA2DD: mov edx, dword ptr [eax] */
    MEM32(esi + 0x14) = 0xFu; /* 0x005CA2DF: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005CA2E6: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005CA2ED: mov byte ptr [esi], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x005CA2F0: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA2F9; /* 0x005CA2F3: jne 0x5ca2f9 */
L_005CA2F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CA2F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005CA309; /* 0x005CA2F7: jmp 0x5ca309 */
L_005CA2F9:
    ecx = edx; /* 0x005CA2F9: mov ecx, edx */
    edi = ecx + 0x1; /* 0x005CA2FB: lea edi, [ecx + 1] */
    edi = edi; /* 0x005CA2FE: mov edi, edi */
L_005CA300:
    SET_LO8(eax, MEM8(ecx)); /* 0x005CA300: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005CA302: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005CA303: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CA300; /* 0x005CA305: jne 0x5ca300 */
L_005CA307:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005CA307: sub ecx, edi */
    _flag_k = FK_CMP;
L_005CA309:
    PUSH32(esp, ecx); /* 0x005CA309: push ecx */
    PUSH32(esp, edx); /* 0x005CA30A: push edx */
    ecx = esi; /* 0x005CA30B: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x005CA30D: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA312: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x18; /* 0x005CA319: lea ecx, [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA31C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005C5FE0); /* 0x005CA31F: call 0x5c5fe0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA324: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005CA32B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA32D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA330: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA337: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA338: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA339: pop esi */
    esp = ebp; /* 0x005CA33A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA33C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA33D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CA340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA340u);

L_005CA340:
    PUSH32(esp, ebp); /* 0x005CA340: push ebp */
    ebp = esp; /* 0x005CA341: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005CA343: push esi */
    PUSH32(esp, edi); /* 0x005CA344: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA345: push dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x005CA348: mov edi, ecx */
    eax = MEM32(edi); /* 0x005CA34A: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x005CA34C: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CA34E: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x005CA351: push esi */
    RECOMP_CALL(sub_005CAD80); /* 0x005CA352: call 0x5cad80 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005CA357: mov edx, eax */
    ecx = 0x05555554u; /* 0x005CA359: mov ecx, 0x5555554 */
    eax = MEM32(edi + 0x4); /* 0x005CA35E: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005CA361: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x005CA363: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CA373; /* 0x005CA366: jae 0x5ca373 */
L_005CA368:
    PUSH32(esp, 0x007E1400u); /* 0x005CA368: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005CA36D: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005CA373:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005CA373: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x005CA374: mov ecx, edi */
    MEM32(edi + 0x4) = eax; /* 0x005CA376: mov dword ptr [edi + 4], eax */
    MEM32(esi + 0x4) = edx; /* 0x005CA379: mov dword ptr [esi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x005CA37C: mov eax, dword ptr [edx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x005CA37F: mov esi, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x005CA382: mov dword ptr [eax], edx */
    eax = MEM32(edi); /* 0x005CA384: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x005CA386: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x005CA388: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x005CA389: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005CA38C: push eax */
    PUSH32(esp, esi); /* 0x005CA38D: push esi */
    RECOMP_CALL(sub_005CA960); /* 0x005CA38E: call 0x5ca960 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005CA393: pop edi */
    eax = esi; /* 0x005CA394: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005CA396: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA397: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA398: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CA3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA3A0u);

L_005CA3A0:
    PUSH32(esp, ebp); /* 0x005CA3A0: push ebp */
    ebp = esp; /* 0x005CA3A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA3A3: push -1 */
    PUSH32(esp, 0x007AD9B9u); /* 0x005CA3A5: push 0x7ad9b9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA3AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA3B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA3B1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005CA3B4: push esi */
    PUSH32(esp, edi); /* 0x005CA3B5: push edi */
    eax = MEM32(0x855000); /* 0x005CA3B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA3BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA3BD: push eax */
    eax = ebp + (-0xC); /* 0x005CA3BE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA3C1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CA3C7: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA3C9: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = 0; /* 0x005CA3CC: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM16(edx), 0 */ /* 0x005CA3D3: cmp word ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA3DD; /* 0x005CA3D7: jne 0x5ca3dd */
L_005CA3D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CA3D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005CA3F1; /* 0x005CA3DB: jmp 0x5ca3f1 */
L_005CA3DD:
    eax = edx; /* 0x005CA3DD: mov eax, edx */
    edi = eax + 0x2; /* 0x005CA3DF: lea edi, [eax + 2] */
L_005CA3E2:
    SET_LO16(ecx, MEM16(eax)); /* 0x005CA3E2: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x005CA3E5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO16(ecx), LO16(ecx) */ /* 0x005CA3E8: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CA3E2; /* 0x005CA3EB: jne 0x5ca3e2 */
L_005CA3ED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005CA3ED: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005CA3EF: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
L_005CA3F1:
    PUSH32(esp, eax); /* 0x005CA3F1: push eax */
    PUSH32(esp, edx); /* 0x005CA3F2: push edx */
    PUSH32(esp, ecx); /* 0x005CA3F3: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x005CA3F4: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005CA880); /* 0x005CA3F7: call 0x5ca880 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CA3FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x005CA3FE: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005CA405: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x005CA40C: mov word ptr [esi], cx */
    ecx = esi; /* 0x005CA40F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CA411: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x005CA412: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA417: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005CA41E: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005CA425: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA427: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA42A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA431: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA432: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA433: pop esi */
    esp = ebp; /* 0x005CA434: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA436: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CA437: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CA440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA440u);

L_005CA440:
    PUSH32(esp, ebp); /* 0x005CA440: push ebp */
    ebp = esp; /* 0x005CA441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA443: push -1 */
    PUSH32(esp, 0x007AD9F9u); /* 0x005CA445: push 0x7ad9f9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA44A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA450: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA451: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CA454: push ebx */
    PUSH32(esp, esi); /* 0x005CA455: push esi */
    PUSH32(esp, edi); /* 0x005CA456: push edi */
    eax = MEM32(0x855000); /* 0x005CA457: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA45C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA45E: push eax */
    eax = ebp + (-0xC); /* 0x005CA45F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA462: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x005CA468: mov ebx, edx */
    esi = ecx; /* 0x005CA46A: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA46C: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x005CA46F: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005CA472: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM16(edi), 0 */ /* 0x005CA479: cmp word ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA483; /* 0x005CA47D: jne 0x5ca483 */
L_005CA47F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CA47F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005CA49F; /* 0x005CA481: jmp 0x5ca49f */
L_005CA483:
    eax = edi; /* 0x005CA483: mov eax, edi */
    edx = eax + 0x2; /* 0x005CA485: lea edx, [eax + 2] */
    goto L_005CA490; /* 0x005CA488: jmp 0x5ca490 */
L_005CA490:
    SET_LO16(ecx, MEM16(eax)); /* 0x005CA490: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x005CA493: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO16(ecx), LO16(ecx) */ /* 0x005CA496: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CA490; /* 0x005CA499: jne 0x5ca490 */
L_005CA49B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005CA49B: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005CA49D: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
L_005CA49F:
    PUSH32(esp, eax); /* 0x005CA49F: push eax */
    PUSH32(esp, edi); /* 0x005CA4A0: push edi */
    ecx = ebx; /* 0x005CA4A1: mov ecx, ebx */
    RECOMP_CALL(sub_005CA6C0); /* 0x005CA4A3: call 0x5ca6c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CA4A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x005CA4AA: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005CA4B1: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x005CA4B8: mov word ptr [esi], cx */
    ecx = esi; /* 0x005CA4BB: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CA4BD: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x005CA4BE: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA4C3: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005CA4CA: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005CA4D1: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA4D3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA4D6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA4DD: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CA4DE: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA4DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA4E0: pop ebx */
    esp = ebp; /* 0x005CA4E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA4E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CA4E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CA4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA4F0u);

L_005CA4F0:
    PUSH32(esp, ebp); /* 0x005CA4F0: push ebp */
    ebp = esp; /* 0x005CA4F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA4F3: push -1 */
    PUSH32(esp, 0x007ADA39u); /* 0x005CA4F5: push 0x7ada39 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA4FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA500: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA501: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005CA504: push esi */
    eax = MEM32(0x855000); /* 0x005CA505: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA50A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA50C: push eax */
    eax = ebp + (-0xC); /* 0x005CA50D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA510: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CA516: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA518: mov dword ptr [ebp - 0x14], esi */
    ecx = MEM32(ebp + 0x8); /* 0x005CA51B: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = 0; /* 0x005CA51E: mov dword ptr [ebp - 0x10], 0 */
    eax = MEM32(edx + 0x14); /* 0x005CA525: mov eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x10); /* 0x005CA528: sub eax, dword ptr [edx + 0x10] */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x005CA52B: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005CA563; /* 0x005CA52E: jbe 0x5ca563 */
L_005CA530:
    eax = MEM32(ecx + 0x14); /* 0x005CA530: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x10); /* 0x005CA533: sub eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x005CA536: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA563; /* 0x005CA539: jb 0x5ca563 */
L_005CA53B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA53B: push -1 */
    PUSH32(esp, 0); /* 0x005CA53D: push 0 */
    PUSH32(esp, edx); /* 0x005CA53F: push edx */
    PUSH32(esp, ecx); /* 0x005CA540: push ecx */
    RECOMP_CALL(sub_005CA780); /* 0x005CA541: call 0x5ca780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CA546: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x005CA548: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005CA54F: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x005CA556: mov word ptr [esi], cx */
    ecx = esi; /* 0x005CA559: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CA55B: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x005CA55C: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    goto L_005CA58A; /* 0x005CA561: jmp 0x5ca58a */
L_005CA563:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA563: push -1 */
    PUSH32(esp, 0); /* 0x005CA565: push 0 */
    PUSH32(esp, ecx); /* 0x005CA567: push ecx */
    ecx = edx; /* 0x005CA568: mov ecx, edx */
    RECOMP_CALL(sub_005C9B80); /* 0x005CA56A: call 0x5c9b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CA56F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x005CA571: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x005CA578: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x005CA57F: mov word ptr [esi], cx */
    ecx = esi; /* 0x005CA582: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CA584: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x005CA585: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
L_005CA58A:
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA58A: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005CA591: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005CA598: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA59A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA59D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA5A4: pop ecx */
    esi = POP32_VAL(esp); /* 0x005CA5A5: pop esi */
    esp = ebp; /* 0x005CA5A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA5A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CA5A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CA5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA5B0u);

L_005CA5B0:
    PUSH32(esp, ebp); /* 0x005CA5B0: push ebp */
    ebp = esp; /* 0x005CA5B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA5B3: push -1 */
    PUSH32(esp, 0x00781C75u); /* 0x005CA5B5: push 0x781c75 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA5BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA5C0: push eax */
    eax = MEM32(0x855000); /* 0x005CA5C1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA5C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA5C8: push eax */
    eax = ebp + (-0xC); /* 0x005CA5C9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA5CC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA5D2: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x005CA5D9: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x005CA5DC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA5E8; /* 0x005CA5DE: je 0x5ca5e8 */
L_005CA5E0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA5E0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005C5F20); /* 0x005CA5E3: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
L_005CA5E8:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA5E8: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CA5EF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CA5F2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CA5F9: pop ecx */
    esp = ebp; /* 0x005CA5FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA5FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA5FD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CA600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA600u);

L_005CA600:
    PUSH32(esp, ebp); /* 0x005CA600: push ebp */
    ebp = esp; /* 0x005CA601: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005CA603: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x005CA606: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CA609: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005CA60C: push esi */
    esi = ecx; /* 0x005CA60D: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005CA60F: push edi */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x005CA610: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA667; /* 0x005CA613: je 0x5ca667 */
L_005CA615:
    ecx = eax + 0x8; /* 0x005CA615: lea ecx, [eax + 8] */
    eax = MEM32(esi); /* 0x005CA618: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x005CA61A: push ecx */
    edi = MEM32(eax); /* 0x005CA61B: mov edi, dword ptr [eax] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CA61D: push dword ptr [edi + 4] */
    PUSH32(esp, edi); /* 0x005CA620: push edi */
    RECOMP_CALL(sub_005CB0E0); /* 0x005CA621: call 0x5cb0e0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005CA626: mov edx, eax */
    ecx = 0x05555554u; /* 0x005CA628: mov ecx, 0x5555554 */
    eax = MEM32(esi + 0x4); /* 0x005CA62D: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005CA630: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 1 */ /* 0x005CA632: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA66F; /* 0x005CA635: jb 0x5ca66f */
L_005CA637:
    ecx = eax + 0x1; /* 0x005CA637: lea ecx, [eax + 1] */
    MEM32(esi + 0x4) = ecx; /* 0x005CA63A: mov dword ptr [esi + 4], ecx */
    ecx = esi; /* 0x005CA63D: mov ecx, esi */
    MEM32(edi + 0x4) = edx; /* 0x005CA63F: mov dword ptr [edi + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x005CA642: mov eax, dword ptr [edx + 4] */
    MEM32(eax) = edx; /* 0x005CA645: mov dword ptr [eax], edx */
    eax = MEM32(esi); /* 0x005CA647: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x005CA649: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x005CA64B: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x005CA64C: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005CA64F: push eax */
    eax = esp + 0x10; /* 0x005CA650: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005CA654: push eax */
    RECOMP_CALL(sub_005CA960); /* 0x005CA655: call 0x5ca960 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005CA65A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x005CA65D: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x005CA65F: mov dword ptr [ebp + 8], eax */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x005CA662: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA615; /* 0x005CA665: jne 0x5ca615 */
L_005CA667:
    edi = POP32_VAL(esp); /* 0x005CA667: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA668: pop esi */
    esp = ebp; /* 0x005CA669: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CA66B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA66C: ret 8 */
L_005CA66F:
    PUSH32(esp, 0x007E1400u); /* 0x005CA66F: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005CA674: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CA67Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CA680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA680u);

L_005CA680:
    PUSH32(esp, ebp); /* 0x005CA680: push ebp */
    ebp = esp; /* 0x005CA681: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005CA683: push esi */
    PUSH32(esp, edi); /* 0x005CA684: push edi */
    edi = edx; /* 0x005CA685: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CA687: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x005CA689: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005CA68B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 3; /* 0x005CA68D: add edi, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x005CA690: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x005CA690: shr edi, 2 */
    /* cmp ecx, edx */ /* 0x005CA693: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = eax; } /* 0x005CA695: cmova edi, eax */
    /* test edi, edi */ /* 0x005CA698: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA6AD; /* 0x005CA69A: je 0x5ca6ad */
L_005CA69C:
    edx = MEM32(ebp + 0x8); /* 0x005CA69C: mov edx, dword ptr [ebp + 8] */
    /* nop */ /* 0x005CA69F: nop  */
L_005CA6A0:
    eax = MEM32(edx); /* 0x005CA6A0: mov eax, dword ptr [edx] */
    ecx = ecx + 0x4; /* 0x005CA6A2: lea ecx, [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005CA6A5: inc esi */
    _flag_k = FK_INC;
    MEM32(ecx + (-0x4)) = eax; /* 0x005CA6A6: mov dword ptr [ecx - 4], eax */
    /* cmp esi, edi */ /* 0x005CA6A9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA6A0; /* 0x005CA6AB: jne 0x5ca6a0 */
L_005CA6AD:
    edi = POP32_VAL(esp); /* 0x005CA6AD: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA6AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA6AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CA6B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CA6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA6C0u);

L_005CA6C0:
    PUSH32(esp, ebp); /* 0x005CA6C0: push ebp */
    ebp = esp; /* 0x005CA6C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005CA6C3: push esi */
    PUSH32(esp, edi); /* 0x005CA6C4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005CA6C5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005CA6C8: mov esi, ecx */
    /* test edi, edi */ /* 0x005CA6CA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA716; /* 0x005CA6CC: je 0x5ca716 */
L_005CA6CE:
    ecx = MEM32(esi + 0x14); /* 0x005CA6CE: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 8 */ /* 0x005CA6D1: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA6DA; /* 0x005CA6D4: jb 0x5ca6da */
L_005CA6D6:
    eax = MEM32(esi); /* 0x005CA6D6: mov eax, dword ptr [esi] */
    goto L_005CA6DC; /* 0x005CA6D8: jmp 0x5ca6dc */
L_005CA6DA:
    eax = esi; /* 0x005CA6DA: mov eax, esi */
L_005CA6DC:
    /* cmp edi, eax */ /* 0x005CA6DC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA716; /* 0x005CA6DE: jb 0x5ca716 */
L_005CA6E0:
    /* cmp ecx, 8 */ /* 0x005CA6E0: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA6E9; /* 0x005CA6E3: jb 0x5ca6e9 */
L_005CA6E5:
    edx = MEM32(esi); /* 0x005CA6E5: mov edx, dword ptr [esi] */
    goto L_005CA6EB; /* 0x005CA6E7: jmp 0x5ca6eb */
L_005CA6E9:
    edx = esi; /* 0x005CA6E9: mov edx, esi */
L_005CA6EB:
    eax = MEM32(esi + 0x10); /* 0x005CA6EB: mov eax, dword ptr [esi + 0x10] */
    eax = edx + eax * 2; /* 0x005CA6EE: lea eax, [edx + eax*2] */
    /* cmp eax, edi */ /* 0x005CA6F1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005CA716; /* 0x005CA6F3: jbe 0x5ca716 */
L_005CA6F5:
    /* cmp ecx, 8 */ /* 0x005CA6F5: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA6FE; /* 0x005CA6F8: jb 0x5ca6fe */
L_005CA6FA:
    eax = MEM32(esi); /* 0x005CA6FA: mov eax, dword ptr [esi] */
    goto L_005CA700; /* 0x005CA6FC: jmp 0x5ca700 */
L_005CA6FE:
    eax = esi; /* 0x005CA6FE: mov eax, esi */
L_005CA700:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA700: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005CA703: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x005CA705: mov ecx, esi */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x005CA707: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, edi); /* 0x005CA709: push edi */
    PUSH32(esp, esi); /* 0x005CA70A: push esi */
    RECOMP_CALL(sub_005C9B80); /* 0x005CA70B: call 0x5c9b80 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005CA710: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA711: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA712: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA713: ret 8 */
L_005CA716:
    ecx = MEM32(esi + 0x10); /* 0x005CA716: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005CA719: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x005CA71C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x005CA71D: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA720: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x005CA722: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005CA731; /* 0x005CA724: ja 0x5ca731 */
L_005CA726:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005CA726: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005CA72B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005CA731:
    /* test ebx, ebx */ /* 0x005CA731: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA777; /* 0x005CA733: je 0x5ca777 */
L_005CA735:
    eax = ecx + ebx; /* 0x005CA735: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x005CA738: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005CA73A: push 0 */
    PUSH32(esp, eax); /* 0x005CA73C: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x005CA73D: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_005C9730); /* 0x005CA740: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005CA745: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA777; /* 0x005CA747: je 0x5ca777 */
L_005CA749:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005CA749: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA753; /* 0x005CA74D: jb 0x5ca753 */
L_005CA74F:
    ecx = MEM32(esi); /* 0x005CA74F: mov ecx, dword ptr [esi] */
    goto L_005CA755; /* 0x005CA751: jmp 0x5ca755 */
L_005CA753:
    ecx = esi; /* 0x005CA753: mov ecx, esi */
L_005CA755:
    /* test ebx, ebx */ /* 0x005CA755: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA76D; /* 0x005CA757: je 0x5ca76d */
L_005CA759:
    eax = ebx + ebx; /* 0x005CA759: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x005CA75C: push eax */
    eax = MEM32(esi + 0x10); /* 0x005CA75D: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x005CA760: push edi */
    eax = ecx + eax * 2; /* 0x005CA761: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x005CA764: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005CA765: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CA76A: add esp, 0xc */
    _flag_k = FK_ADD;
L_005CA76D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CA76D: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x005CA770: mov ecx, esi */
    RECOMP_CALL(sub_0055A480); /* 0x005CA772: call 0x55a480 */
    RECOMP_FLAGS_IN();
L_005CA777:
    ebx = POP32_VAL(esp); /* 0x005CA777: pop ebx */
    edi = POP32_VAL(esp); /* 0x005CA778: pop edi */
    eax = esi; /* 0x005CA779: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005CA77B: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA77C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CA77D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CA780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA780u);

L_005CA780:
    PUSH32(esp, ebp); /* 0x005CA780: push ebp */
    ebp = esp; /* 0x005CA781: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005CA783: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x005CA786: push ebx */
    PUSH32(esp, esi); /* 0x005CA787: push esi */
    PUSH32(esp, edi); /* 0x005CA788: push edi */
    eax = MEM32(eax + 0x10); /* 0x005CA789: mov eax, dword ptr [eax + 0x10] */
    esi = ecx; /* 0x005CA78C: mov esi, ecx */
    edi = MEM32(ebp + 0x10); /* 0x005CA78E: mov edi, dword ptr [ebp + 0x10] */
    /* cmp eax, edi */ /* 0x005CA791: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA86E; /* 0x005CA793: jb 0x5ca86e */
L_005CA799:
    ebx = MEM32(ebp + 0x14); /* 0x005CA799: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005CA79C: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x10); /* 0x005CA79E: mov ecx, dword ptr [esi + 0x10] */
    /* cmp eax, ebx */ /* 0x005CA7A1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ebx = eax; } /* 0x005CA7A3: cmovb ebx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005CA7A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA7A9: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x005CA7AB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005CA7BA; /* 0x005CA7AD: ja 0x5ca7ba */
L_005CA7AF:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005CA7AF: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005CA7B4: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005CA7BA:
    /* test ebx, ebx */ /* 0x005CA7BA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA865; /* 0x005CA7BC: je 0x5ca865 */
L_005CA7C2:
    eax = ecx + ebx; /* 0x005CA7C2: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x005CA7C5: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005CA7C7: push 0 */
    PUSH32(esp, eax); /* 0x005CA7C9: push eax */
    MEM32(ebp + 0x10) = eax; /* 0x005CA7CA: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_005C9730); /* 0x005CA7CD: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005CA7D2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA865; /* 0x005CA7D4: je 0x5ca865 */
L_005CA7DA:
    eax = MEM32(esi + 0x14); /* 0x005CA7DA: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 8 */ /* 0x005CA7DD: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA7E6; /* 0x005CA7E0: jb 0x5ca7e6 */
L_005CA7E2:
    edx = MEM32(esi); /* 0x005CA7E2: mov edx, dword ptr [esi] */
    goto L_005CA7E8; /* 0x005CA7E4: jmp 0x5ca7e8 */
L_005CA7E6:
    edx = esi; /* 0x005CA7E6: mov edx, esi */
L_005CA7E8:
    /* cmp eax, 8 */ /* 0x005CA7E8: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA7F1; /* 0x005CA7EB: jb 0x5ca7f1 */
L_005CA7ED:
    eax = MEM32(esi); /* 0x005CA7ED: mov eax, dword ptr [esi] */
    goto L_005CA7F3; /* 0x005CA7EF: jmp 0x5ca7f3 */
L_005CA7F1:
    eax = esi; /* 0x005CA7F1: mov eax, esi */
L_005CA7F3:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005CA7F3: push dword ptr [esi + 0x10] */
    ecx = eax + ebx * 2; /* 0x005CA7F6: lea ecx, [eax + ebx*2] */
    RECOMP_CALL(sub_005C5D50); /* 0x005CA7F9: call 0x5c5d50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005CA7FE: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA801: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005CA804: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CA83B; /* 0x005CA806: jne 0x5ca83b */
L_005CA808:
    /* test edi, edi */ /* 0x005CA808: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA80E; /* 0x005CA80A: je 0x5ca80e */
L_005CA80C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x005CA80C: add edi, ebx */
    _flag_k = FK_ADD;
L_005CA80E:
    eax = MEM32(esi + 0x14); /* 0x005CA80E: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 8 */ /* 0x005CA811: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA81A; /* 0x005CA814: jb 0x5ca81a */
L_005CA816:
    edx = MEM32(esi); /* 0x005CA816: mov edx, dword ptr [esi] */
    goto L_005CA81C; /* 0x005CA818: jmp 0x5ca81c */
L_005CA81A:
    edx = esi; /* 0x005CA81A: mov edx, esi */
L_005CA81C:
    /* cmp eax, 8 */ /* 0x005CA81C: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA82E; /* 0x005CA81F: jb 0x5ca82e */
L_005CA821:
    ecx = MEM32(esi); /* 0x005CA821: mov ecx, dword ptr [esi] */
    edx = edx + edi * 2; /* 0x005CA823: lea edx, [edx + edi*2] */
    PUSH32(esp, ebx); /* 0x005CA826: push ebx */
    RECOMP_CALL(sub_005C5D50); /* 0x005CA827: call 0x5c5d50 */
    RECOMP_FLAGS_IN();
    goto L_005CA858; /* 0x005CA82C: jmp 0x5ca858 */
L_005CA82E:
    ecx = esi; /* 0x005CA82E: mov ecx, esi */
    edx = edx + edi * 2; /* 0x005CA830: lea edx, [edx + edi*2] */
    PUSH32(esp, ebx); /* 0x005CA833: push ebx */
    RECOMP_CALL(sub_005C5D50); /* 0x005CA834: call 0x5c5d50 */
    RECOMP_FLAGS_IN();
    goto L_005CA858; /* 0x005CA839: jmp 0x5ca858 */
L_005CA83B:
    /* cmp MEM32(eax + 0x14), 8 */ /* 0x005CA83B: cmp dword ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA843; /* 0x005CA83F: jb 0x5ca843 */
L_005CA841:
    eax = MEM32(eax); /* 0x005CA841: mov eax, dword ptr [eax] */
L_005CA843:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005CA843: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA84D; /* 0x005CA847: jb 0x5ca84d */
L_005CA849:
    ecx = MEM32(esi); /* 0x005CA849: mov ecx, dword ptr [esi] */
    goto L_005CA84F; /* 0x005CA84B: jmp 0x5ca84f */
L_005CA84D:
    ecx = esi; /* 0x005CA84D: mov ecx, esi */
L_005CA84F:
    PUSH32(esp, ebx); /* 0x005CA84F: push ebx */
    edx = eax + edi * 2; /* 0x005CA850: lea edx, [eax + edi*2] */
    RECOMP_CALL(sub_00546670); /* 0x005CA853: call 0x546670 */
    RECOMP_FLAGS_IN();
L_005CA858:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA858: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005CA85B: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CA85D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_0055A480); /* 0x005CA860: call 0x55a480 */
    RECOMP_FLAGS_IN();
L_005CA865:
    edi = POP32_VAL(esp); /* 0x005CA865: pop edi */
    eax = esi; /* 0x005CA866: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005CA868: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CA869: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005CA86A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005CA86B: ret 0x10 */
L_005CA86E:
    PUSH32(esp, 0x007CCE6Cu); /* 0x005CA86E: push 0x7cce6c */
    RECOMP_ICALL(MEM32(0x7CC410)); /* 0x005CA873: call dword ptr [0x7cc410] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CA879u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CA880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA880u);

L_005CA880:
    PUSH32(esp, ebp); /* 0x005CA880: push ebp */
    ebp = esp; /* 0x005CA881: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005CA883: push esi */
    PUSH32(esp, edi); /* 0x005CA884: push edi */
    edi = MEM32(ebp + 0xC); /* 0x005CA885: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x005CA888: mov esi, ecx */
    /* test edi, edi */ /* 0x005CA88A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA8D7; /* 0x005CA88C: je 0x5ca8d7 */
L_005CA88E:
    ecx = MEM32(esi + 0x14); /* 0x005CA88E: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 8 */ /* 0x005CA891: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA89A; /* 0x005CA894: jb 0x5ca89a */
L_005CA896:
    eax = MEM32(esi); /* 0x005CA896: mov eax, dword ptr [esi] */
    goto L_005CA89C; /* 0x005CA898: jmp 0x5ca89c */
L_005CA89A:
    eax = esi; /* 0x005CA89A: mov eax, esi */
L_005CA89C:
    /* cmp edi, eax */ /* 0x005CA89C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA8D7; /* 0x005CA89E: jb 0x5ca8d7 */
L_005CA8A0:
    /* cmp ecx, 8 */ /* 0x005CA8A0: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA8A9; /* 0x005CA8A3: jb 0x5ca8a9 */
L_005CA8A5:
    edx = MEM32(esi); /* 0x005CA8A5: mov edx, dword ptr [esi] */
    goto L_005CA8AB; /* 0x005CA8A7: jmp 0x5ca8ab */
L_005CA8A9:
    edx = esi; /* 0x005CA8A9: mov edx, esi */
L_005CA8AB:
    eax = MEM32(esi + 0x10); /* 0x005CA8AB: mov eax, dword ptr [esi + 0x10] */
    eax = edx + eax * 2; /* 0x005CA8AE: lea eax, [edx + eax*2] */
    /* cmp eax, edi */ /* 0x005CA8B1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005CA8D7; /* 0x005CA8B3: jbe 0x5ca8d7 */
L_005CA8B5:
    /* cmp ecx, 8 */ /* 0x005CA8B5: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA8BE; /* 0x005CA8B8: jb 0x5ca8be */
L_005CA8BA:
    eax = MEM32(esi); /* 0x005CA8BA: mov eax, dword ptr [esi] */
    goto L_005CA8C0; /* 0x005CA8BC: jmp 0x5ca8c0 */
L_005CA8BE:
    eax = esi; /* 0x005CA8BE: mov eax, esi */
L_005CA8C0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CA8C0: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005CA8C3: sub edi, eax */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x005CA8C5: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, edi); /* 0x005CA8C7: push edi */
    PUSH32(esp, esi); /* 0x005CA8C8: push esi */
    PUSH32(esp, ecx); /* 0x005CA8C9: push ecx */
    ecx = esi; /* 0x005CA8CA: mov ecx, esi */
    RECOMP_CALL(sub_005CA780); /* 0x005CA8CC: call 0x5ca780 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005CA8D1: pop edi */
    esi = POP32_VAL(esp); /* 0x005CA8D2: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA8D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CA8D4: ret 0xc */
L_005CA8D7:
    ecx = MEM32(esi + 0x10); /* 0x005CA8D7: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005CA8DA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x005CA8DD: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x005CA8DE: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005CA8E1: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x005CA8E3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005CA8F2; /* 0x005CA8E5: ja 0x5ca8f2 */
L_005CA8E7:
    PUSH32(esp, 0x007CCE5Cu); /* 0x005CA8E7: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005CA8EC: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005CA8F2:
    /* test ebx, ebx */ /* 0x005CA8F2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA952; /* 0x005CA8F4: je 0x5ca952 */
L_005CA8F6:
    eax = ecx + ebx; /* 0x005CA8F6: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x005CA8F9: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005CA8FB: push 0 */
    PUSH32(esp, eax); /* 0x005CA8FD: push eax */
    MEM32(ebp + 0x10) = eax; /* 0x005CA8FE: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_005C9730); /* 0x005CA901: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005CA906: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA952; /* 0x005CA908: je 0x5ca952 */
L_005CA90A:
    eax = MEM32(esi + 0x14); /* 0x005CA90A: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 8 */ /* 0x005CA90D: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA916; /* 0x005CA910: jb 0x5ca916 */
L_005CA912:
    edx = MEM32(esi); /* 0x005CA912: mov edx, dword ptr [esi] */
    goto L_005CA918; /* 0x005CA914: jmp 0x5ca918 */
L_005CA916:
    edx = esi; /* 0x005CA916: mov edx, esi */
L_005CA918:
    /* cmp eax, 8 */ /* 0x005CA918: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA921; /* 0x005CA91B: jb 0x5ca921 */
L_005CA91D:
    eax = MEM32(esi); /* 0x005CA91D: mov eax, dword ptr [esi] */
    goto L_005CA923; /* 0x005CA91F: jmp 0x5ca923 */
L_005CA921:
    eax = esi; /* 0x005CA921: mov eax, esi */
L_005CA923:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005CA923: push dword ptr [esi + 0x10] */
    ecx = eax + ebx * 2; /* 0x005CA926: lea ecx, [eax + ebx*2] */
    RECOMP_CALL(sub_005C5D50); /* 0x005CA929: call 0x5c5d50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA92E: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x005CA931: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CA93B; /* 0x005CA935: jb 0x5ca93b */
L_005CA937:
    ecx = MEM32(esi); /* 0x005CA937: mov ecx, dword ptr [esi] */
    goto L_005CA93D; /* 0x005CA939: jmp 0x5ca93d */
L_005CA93B:
    ecx = esi; /* 0x005CA93B: mov ecx, esi */
L_005CA93D:
    PUSH32(esp, ebx); /* 0x005CA93D: push ebx */
    edx = edi; /* 0x005CA93E: mov edx, edi */
    RECOMP_CALL(sub_00546670); /* 0x005CA940: call 0x546670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CA945: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005CA948: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CA94A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_0055A480); /* 0x005CA94D: call 0x55a480 */
    RECOMP_FLAGS_IN();
L_005CA952:
    ebx = POP32_VAL(esp); /* 0x005CA952: pop ebx */
    edi = POP32_VAL(esp); /* 0x005CA953: pop edi */
    eax = esi; /* 0x005CA954: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005CA956: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CA957: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CA958: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005CA960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CA960u);

L_005CA960:
    PUSH32(esp, ebp); /* 0x005CA960: push ebp */
    ebp = esp; /* 0x005CA961: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CA963: push -1 */
    PUSH32(esp, 0x007ADA60u); /* 0x005CA965: push 0x7ada60 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CA96A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CA970: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005CA971: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CA974: push ebx */
    PUSH32(esp, esi); /* 0x005CA975: push esi */
    PUSH32(esp, edi); /* 0x005CA976: push edi */
    eax = MEM32(0x855000); /* 0x005CA977: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CA97C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CA97E: push eax */
    eax = ebp + (-0xC); /* 0x005CA97F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CA982: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CA988: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005CA98B: mov ebx, ecx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x005CA98D: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CA990: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0xC); /* 0x005CA997: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x005CA99A: push edi */
    RECOMP_CALL(sub_005C99B0); /* 0x005CA99B: call 0x5c99b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x005CA9A0: mov dword ptr [ebp - 0x1c], eax */
    esi = MEM32(ebx); /* 0x005CA9A3: mov esi, dword ptr [ebx] */
    ecx = eax * 8; /* 0x005CA9A5: lea ecx, [eax*8] */
    MEM32(ebp + 0xC) = ecx; /* 0x005CA9AC: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(ebx + 0x8); /* 0x005CA9AF: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ecx + eax), esi */ /* 0x005CA9B2: cmp dword ptr [ecx + eax], esi */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA9C0; /* 0x005CA9B5: je 0x5ca9c0 */
L_005CA9B7:
    esi = MEM32(ecx + eax + 0x4); /* 0x005CA9B7: mov esi, dword ptr [ecx + eax + 4] */
    esi = MEM32(esi); /* 0x005CA9BB: mov esi, dword ptr [esi] */
    MEM32(ebp + (-0x20)) = esi; /* 0x005CA9BD: mov dword ptr [ebp - 0x20], esi */
L_005CA9C0:
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA9C0: mov dword ptr [ebp - 0x14], esi */
L_005CA9C3:
    eax = MEM32(ebx + 0x8); /* 0x005CA9C3: mov eax, dword ptr [ebx + 8] */
    /* cmp esi, MEM32(ecx + eax) */ /* 0x005CA9C6: cmp esi, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CA9F7; /* 0x005CA9C9: je 0x5ca9f7 */
L_005CA9CB:
    esi = MEM32(esi + 0x4); /* 0x005CA9CB: mov esi, dword ptr [esi + 4] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA9CE: mov dword ptr [ebp - 0x14], esi */
    eax = esi + 0x8; /* 0x005CA9D1: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005CA9D4: push eax */
    PUSH32(esp, edi); /* 0x005CA9D5: push edi */
    RECOMP_CALL(sub_005C9A00); /* 0x005CA9D6: call 0x5c9a00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005CA9DB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CA9E4; /* 0x005CA9DD: je 0x5ca9e4 */
L_005CA9DF:
    ecx = MEM32(ebp + 0xC); /* 0x005CA9DF: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_005CA9C3; /* 0x005CA9E2: jmp 0x5ca9c3 */
L_005CA9E4:
    eax = esi + 0x8; /* 0x005CA9E4: lea eax, [esi + 8] */
    PUSH32(esp, edi); /* 0x005CA9E7: push edi */
    PUSH32(esp, eax); /* 0x005CA9E8: push eax */
    RECOMP_CALL(sub_005C9A00); /* 0x005CA9E9: call 0x5c9a00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005CA9EE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAA41; /* 0x005CA9F0: je 0x5caa41 */
L_005CA9F2:
    esi = MEM32(esi); /* 0x005CA9F2: mov esi, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CA9F4: mov dword ptr [ebp - 0x14], esi */
L_005CA9F7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CA9F7: mov dword ptr [ebp - 4], 0xffffffff */
    edi = MEM32(ebp + 0x10); /* 0x005CA9FE: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x005CAA01: mov eax, dword ptr [edi] */
    /* cmp esi, eax */ /* 0x005CAA03: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAA28; /* 0x005CAA05: je 0x5caa28 */
L_005CAA07:
    ecx = MEM32(edi + 0x4); /* 0x005CAA07: mov ecx, dword ptr [edi + 4] */
    MEM32(ecx) = eax; /* 0x005CAA0A: mov dword ptr [ecx], eax */
    ecx = MEM32(eax + 0x4); /* 0x005CAA0C: mov ecx, dword ptr [eax + 4] */
    MEM32(ecx) = esi; /* 0x005CAA0F: mov dword ptr [ecx], esi */
    ecx = MEM32(esi + 0x4); /* 0x005CAA11: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx) = edi; /* 0x005CAA14: mov dword ptr [ecx], edi */
    edx = MEM32(esi + 0x4); /* 0x005CAA16: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005CAA19: mov ecx, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x005CAA1C: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(edi + 0x4); /* 0x005CAA1F: mov ecx, dword ptr [edi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x005CAA22: mov dword ptr [eax + 4], ecx */
    MEM32(edi + 0x4) = edx; /* 0x005CAA25: mov dword ptr [edi + 4], edx */
L_005CAA28:
    edx = MEM32(ebx + 0x8); /* 0x005CAA28: mov edx, dword ptr [ebx + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x005CAA2B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005CAA2E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x005CAA30: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(ebx) */ /* 0x005CAA32: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAA79; /* 0x005CAA34: jne 0x5caa79 */
L_005CAA36:
    MEM32(edx) = edi; /* 0x005CAA36: mov dword ptr [edx], edi */
    eax = MEM32(ebx + 0x8); /* 0x005CAA38: mov eax, dword ptr [ebx + 8] */
    MEM32(ecx + eax + 0x4) = edi; /* 0x005CAA3B: mov dword ptr [ecx + eax + 4], edi */
    goto L_005CAA99; /* 0x005CAA3F: jmp 0x5caa99 */
L_005CAA41:
    edx = MEM32(ebp + 0x10); /* 0x005CAA41: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(edx); /* 0x005CAA44: mov ecx, dword ptr [edx] */
    eax = MEM32(edx + 0x4); /* 0x005CAA46: mov eax, dword ptr [edx + 4] */
    MEM32(eax) = ecx; /* 0x005CAA49: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x005CAA4B: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x005CAA4E: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x005CAA50: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) - 1; /* 0x005CAA53: dec dword ptr [ebx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, edx); /* 0x005CAA56: push edx */
    RECOMP_CALL(sub_005C9ED0); /* 0x005CAA57: call 0x5c9ed0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005CAA5C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x005CAA5F: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005CAA61: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAA65: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAA68: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAA6F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAA70: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAA71: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAA72: pop ebx */
    esp = ebp; /* 0x005CAA73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAA75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CAA76: ret 0xc */
L_005CAA79:
    /* cmp eax, esi */ /* 0x005CAA79: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAA81; /* 0x005CAA7B: jne 0x5caa81 */
L_005CAA7D:
    MEM32(edx) = edi; /* 0x005CAA7D: mov dword ptr [edx], edi */
    goto L_005CAA99; /* 0x005CAA7F: jmp 0x5caa99 */
L_005CAA81:
    eax = MEM32(edx + 0x4); /* 0x005CAA81: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax); /* 0x005CAA84: mov eax, dword ptr [eax] */
    MEM32(edx + 0x4) = eax; /* 0x005CAA86: mov dword ptr [edx + 4], eax */
    /* cmp eax, edi */ /* 0x005CAA89: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAA99; /* 0x005CAA8B: je 0x5caa99 */
L_005CAA8D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x8); /* 0x005CAA8D: add ecx, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x4); /* 0x005CAA90: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4); /* 0x005CAA93: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005CAA96: mov dword ptr [ecx + 4], eax */
L_005CAA99:
    ecx = ebx; /* 0x005CAA99: mov ecx, ebx */
    RECOMP_CALL(sub_005CACC0); /* 0x005CAA9B: call 0x5cacc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005CAAA0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x005CAAA3: mov dword ptr [eax], edi */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x005CAAA5: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAAA9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAAAC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAAB3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAAB4: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAAB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAAB6: pop ebx */
    esp = ebp; /* 0x005CAAB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAAB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CAABA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005CAABD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAABDu);

L_005CAABD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005CAABD: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005CAAC0: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_005CAC90); /* 0x005CAAC3: call 0x5cac90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CAAC8: push 0 */
    PUSH32(esp, 0); /* 0x005CAACA: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CAACC: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CAAD1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CAAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAAE0u);

L_005CAAE0:
    PUSH32(esp, ebp); /* 0x005CAAE0: push ebp */
    ebp = esp; /* 0x005CAAE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005CAAE3: push ecx */
    eax = edx; /* 0x005CAAE4: mov eax, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005CAAE6: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x005CAAE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAB63; /* 0x005CAAEB: je 0x5cab63 */
L_005CAAED:
    PUSH32(esp, ebx); /* 0x005CAAED: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005CAAEE: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005CAAF1: push esi */
    PUSH32(esp, edi); /* 0x005CAAF2: push edi */
    esi = ecx + 0xC; /* 0x005CAAF3: lea esi, [ecx + 0xc] */
    edi = ebx + 0xC; /* 0x005CAAF6: lea edi, [ebx + 0xc] */
    esp = esp; /* 0x005CAAF9: lea esp, [esp] */
L_005CAB00:
    eax = MEM32(esi + (-0xC)); /* 0x005CAB00: mov eax, dword ptr [esi - 0xc] */
    MEM32(ebx) = eax; /* 0x005CAB03: mov dword ptr [ebx], eax */
    eax = MEM32(esi + (-0x8)); /* 0x005CAB05: mov eax, dword ptr [esi - 8] */
    MEM32(ebx + 0x4) = eax; /* 0x005CAB08: mov dword ptr [ebx + 4], eax */
    SET_LO8(eax, MEM8(esi + (-0x4))); /* 0x005CAB0B: mov al, byte ptr [esi - 4] */
    MEM8(edi + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x005CAB0E: mov byte ptr [edi - 4], al */
    /* cmp edi, esi */ /* 0x005CAB11: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAB21; /* 0x005CAB13: je 0x5cab21 */
L_005CAB15:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAB15: push -1 */
    PUSH32(esp, 0); /* 0x005CAB17: push 0 */
    PUSH32(esp, esi); /* 0x005CAB19: push esi */
    ecx = edi; /* 0x005CAB1A: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005CAB1C: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CAB21:
    eax = esi + 0x18; /* 0x005CAB21: lea eax, [esi + 0x18] */
    ecx = edi + 0x18; /* 0x005CAB24: lea ecx, [edi + 0x18] */
    /* cmp ecx, eax */ /* 0x005CAB27: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAB35; /* 0x005CAB29: je 0x5cab35 */
L_005CAB2B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAB2B: push -1 */
    PUSH32(esp, 0); /* 0x005CAB2D: push 0 */
    PUSH32(esp, eax); /* 0x005CAB2F: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005CAB30: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CAB35:
    eax = esi + 0x30; /* 0x005CAB35: lea eax, [esi + 0x30] */
    ecx = edi + 0x30; /* 0x005CAB38: lea ecx, [edi + 0x30] */
    /* cmp ecx, eax */ /* 0x005CAB3B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAB49; /* 0x005CAB3D: je 0x5cab49 */
L_005CAB3F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAB3F: push -1 */
    PUSH32(esp, 0); /* 0x005CAB41: push 0 */
    PUSH32(esp, eax); /* 0x005CAB43: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005CAB44: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CAB49:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005CAB49: add esi, 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x58u; /* 0x005CAB4C: add ebx, 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x58u; /* 0x005CAB4F: add edi, 0x58 */
    _flag_k = FK_ADD;
    ecx = esi + (-0xC); /* 0x005CAB52: lea ecx, [esi - 0xc] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005CAB55: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAB00; /* 0x005CAB58: jne 0x5cab00 */
L_005CAB5A:
    edi = POP32_VAL(esp); /* 0x005CAB5A: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAB5B: pop esi */
    eax = ebx; /* 0x005CAB5C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005CAB5E: pop ebx */
    esp = ebp; /* 0x005CAB5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAB61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAB62: ret  */
L_005CAB63:
    eax = MEM32(ebp + 0x8); /* 0x005CAB63: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005CAB66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAB68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAB69: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CAB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAB70u);

L_005CAB70:
    PUSH32(esp, ebp); /* 0x005CAB70: push ebp */
    ebp = esp; /* 0x005CAB71: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005CAB73: push ebx */
    ebx = edx; /* 0x005CAB74: mov ebx, edx */
    /* cmp ecx, ebx */ /* 0x005CAB76: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CABF7; /* 0x005CAB78: je 0x5cabf7 */
L_005CAB7A:
    PUSH32(esp, esi); /* 0x005CAB7A: push esi */
    PUSH32(esp, edi); /* 0x005CAB7B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005CAB7C: mov edi, dword ptr [ebp + 8] */
    esi = ecx + 0x8; /* 0x005CAB7F: lea esi, [ecx + 8] */
L_005CAB82:
    PUSH32(esp, MEM32(esi + (-0x8))); /* 0x005CAB82: push dword ptr [esi - 8] */
    ecx = edi; /* 0x005CAB85: mov ecx, edi */
    RECOMP_CALL(sub_005C64E0); /* 0x005CAB87: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + (-0x4)); /* 0x005CAB8C: mov eax, dword ptr [esi - 4] */
    MEM32(edi + 0x4) = eax; /* 0x005CAB8F: mov dword ptr [edi + 4], eax */
    eax = MEM32(edi); /* 0x005CAB92: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005CAB94: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 4 */ /* 0x005CAB95: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005CABE3; /* 0x005CAB98: ja 0x5cabe3 */
L_005CAB9A:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5CAC00)); goto _ljump; }
L_005CABA1:
    SET_LO8(eax, MEM8(esi)); /* 0x005CABA1: mov al, byte ptr [esi] */
    MEM8(edi + 0x8) = (uint8_t)(LO8(eax)); /* 0x005CABA3: mov byte ptr [edi + 8], al */
    goto L_005CABE3; /* 0x005CABA6: jmp 0x5cabe3 */
L_005CABA8:
    _xmm[0].u64[0] = MEM64(esi); _xmm[0].u64[1] = 0; /* 0x005CABA8: movsd xmm0, qword ptr [esi] */
    MEM64(edi + 0x8) = _xmm[0].u64[0]; /* 0x005CABAC: movsd qword ptr [edi + 8], xmm0 */
    goto L_005CABE3; /* 0x005CABB1: jmp 0x5cabe3 */
L_005CABB3:
    eax = MEM32(esi); /* 0x005CABB3: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + 0x8); /* 0x005CABB5: mov ecx, dword ptr [edi + 8] */
    /* cmp ecx, eax */ /* 0x005CABB8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CABE3; /* 0x005CABBA: je 0x5cabe3 */
L_005CABBC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CABBC: push -1 */
    PUSH32(esp, 0); /* 0x005CABBE: push 0 */
    PUSH32(esp, eax); /* 0x005CABC0: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005CABC1: call 0x40a030 */
    RECOMP_FLAGS_IN();
    goto L_005CABE3; /* 0x005CABC6: jmp 0x5cabe3 */
L_005CABC8:
    PUSH32(esp, MEM32(esi)); /* 0x005CABC8: push dword ptr [esi] */
    ecx = MEM32(edi + 0x8); /* 0x005CABCA: mov ecx, dword ptr [edi + 8] */
    RECOMP_CALL(sub_005C8D70); /* 0x005CABCD: call 0x5c8d70 */
    RECOMP_FLAGS_IN();
    goto L_005CABE3; /* 0x005CABD2: jmp 0x5cabe3 */
L_005CABD4:
    eax = MEM32(esi); /* 0x005CABD4: mov eax, dword ptr [esi] */
    ecx = MEM32(edi + 0x8); /* 0x005CABD6: mov ecx, dword ptr [edi + 8] */
    /* cmp ecx, eax */ /* 0x005CABD9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CABE3; /* 0x005CABDB: je 0x5cabe3 */
L_005CABDD:
    PUSH32(esp, eax); /* 0x005CABDD: push eax */
    RECOMP_CALL(sub_005C98F0); /* 0x005CABDE: call 0x5c98f0 */
    RECOMP_FLAGS_IN();
L_005CABE3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005CABE3: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x005CABE6: add edi, 0x10 */
    _flag_k = FK_ADD;
    ecx = esi + (-0x8); /* 0x005CABE9: lea ecx, [esi - 8] */
    /* cmp ecx, ebx */ /* 0x005CABEC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAB82; /* 0x005CABEE: jne 0x5cab82 */
L_005CABF0:
    eax = edi; /* 0x005CABF0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005CABF2: pop edi */
    esi = POP32_VAL(esp); /* 0x005CABF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CABF4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005CABF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CABF6: ret  */
L_005CABF7:
    eax = MEM32(ebp + 0x8); /* 0x005CABF7: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x005CABFA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005CABFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CABFC: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x005CABA1u: goto L_005CABA1;
      case 0x005CABA8u: goto L_005CABA8;
      case 0x005CABB3u: goto L_005CABB3;
      case 0x005CABC8u: goto L_005CABC8;
      case 0x005CABD4u: goto L_005CABD4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005CAC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAC20u);

L_005CAC20:
    PUSH32(esp, ebp); /* 0x005CAC20: push ebp */
    ebp = esp; /* 0x005CAC21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAC23: push -1 */
    PUSH32(esp, 0x007ADA80u); /* 0x005CAC25: push 0x7ada80 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CAC2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CAC30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005CAC31: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CAC34: push ebx */
    PUSH32(esp, esi); /* 0x005CAC35: push esi */
    PUSH32(esp, edi); /* 0x005CAC36: push edi */
    eax = MEM32(0x855000); /* 0x005CAC37: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CAC3C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CAC3E: push eax */
    eax = ebp + (-0xC); /* 0x005CAC3F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CAC42: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CAC48: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CAC4B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x005CAC52: mov esi, dword ptr [ebp + 8] */
L_005CAC55:
    /* test edx, edx */ /* 0x005CAC55: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAC6D; /* 0x005CAC57: je 0x5cac6d */
L_005CAC59:
    /* test ecx, ecx */ /* 0x005CAC59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAC61; /* 0x005CAC5B: je 0x5cac61 */
L_005CAC5D:
    eax = MEM32(esi); /* 0x005CAC5D: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x005CAC5F: mov dword ptr [ecx], eax */
L_005CAC61:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005CAC61: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = edx; /* 0x005CAC62: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005CAC65: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x005CAC68: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    goto L_005CAC55; /* 0x005CAC6B: jmp 0x5cac55 */
L_005CAC6D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CAC6D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAC74: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAC77: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAC7E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAC7F: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAC80: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAC81: pop ebx */
    esp = ebp; /* 0x005CAC82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAC84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAC85: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CAC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAC86u);

L_005CAC86:
    PUSH32(esp, 0); /* 0x005CAC86: push 0 */
    PUSH32(esp, 0); /* 0x005CAC88: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CAC8A: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CAC8Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CAC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAC90u);

L_005CAC90:
    PUSH32(esp, ebp); /* 0x005CAC90: push ebp */
    ebp = esp; /* 0x005CAC91: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005CAC93: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005CAC94: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005CAC97: push esi */
    edx = MEM32(esi + 0x4); /* 0x005CAC98: mov edx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x005CAC9B: mov eax, dword ptr [esi] */
    MEM32(edx) = eax; /* 0x005CAC9D: mov dword ptr [edx], eax */
    edx = MEM32(esi); /* 0x005CAC9F: mov edx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x005CACA1: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005CACA4: mov dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x005CACA7: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_005C9ED0); /* 0x005CACAA: call 0x5c9ed0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005CACAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x005CACB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005CACB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005CACC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CACC0u);

L_005CACC0:
    PUSH32(esp, ebp); /* 0x005CACC0: push ebp */
    ebp = esp; /* 0x005CACC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005CACC3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CACC6: push ebx */
    ebx = ecx; /* 0x005CACC7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005CACC9: push esi */
    eax = MEM32(ebx + 0x4); /* 0x005CACCA: mov eax, dword ptr [ebx + 4] */
    esi = MEM32(ebx + 0x18); /* 0x005CACCD: mov esi, dword ptr [ebx + 0x18] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x005CACD0: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005CACD4: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005CACD8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005CACD8: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x005CACDB: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = esi; /* 0x005CACE4: mov eax, esi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005CACE6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005CACE6: shr eax, 0x1f */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x005CACE9: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(esi); _xmm[0].u64[1] = 0; /* 0x005CACED: movd xmm0, esi */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005CACF1: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x005CACF5: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x005CACFE: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x005CAD02: divss xmm1, xmm0 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(ebx + 0x1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005CAD06: comiss xmm1, dword ptr [ebx + 0x1c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005CAD6E; /* 0x005CAD0A: jbe 0x5cad6e */
L_005CAD0C:
    /* cmp esi, 0x200u */ /* 0x005CAD0C: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CAD19; /* 0x005CAD12: jae 0x5cad19 */
L_005CAD14:
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x005CAD14: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x005CAD14: shl esi, 3 */
    goto L_005CAD23; /* 0x005CAD17: jmp 0x5cad23 */
L_005CAD19:
    /* cmp esi, 0x1FFFFFFFu */ /* 0x005CAD19: cmp esi, 0x1fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005CAD23; /* 0x005CAD1F: jae 0x5cad23 */
L_005CAD21:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005CAD21: add esi, esi */
    _flag_k = FK_ADD;
L_005CAD23:
    eax = MEM32(ebx); /* 0x005CAD23: mov eax, dword ptr [ebx] */
    edx = ebp + (-0x4); /* 0x005CAD25: lea edx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x005CAD28: push edi */
    PUSH32(esp, edx); /* 0x005CAD29: push edx */
    ecx = ebx + 0x8; /* 0x005CAD2A: lea ecx, [ebx + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005CAD2D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x005CAD30: mov eax, dword ptr [ecx] */
    edx = esi + esi; /* 0x005CAD32: lea edx, [esi + esi] */
    PUSH32(esp, edx); /* 0x005CAD35: push edx */
    PUSH32(esp, eax); /* 0x005CAD36: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x005CAD37: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x8); /* 0x005CAD3A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x005CAD3D: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x005CAD3E: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx); /* 0x005CAD43: mov edi, dword ptr [ebx] */
    eax = esi + (-0x1); /* 0x005CAD45: lea eax, [esi - 1] */
    MEM32(ebx + 0x14) = eax; /* 0x005CAD48: mov dword ptr [ebx + 0x14], eax */
    MEM32(ebx + 0x18) = esi; /* 0x005CAD4B: mov dword ptr [ebx + 0x18], esi */
    /* cmp MEM32(edi), edi */ /* 0x005CAD4E: cmp dword ptr [edi], edi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAD6D; /* 0x005CAD50: je 0x5cad6d */
L_005CAD52:
    edi = MEM32(edi + 0x4); /* 0x005CAD52: mov edi, dword ptr [edi + 4] */
L_005CAD55:
    esi = MEM32(ebx); /* 0x005CAD55: mov esi, dword ptr [ebx] */
    ecx = ebx; /* 0x005CAD57: mov ecx, ebx */
    esi = MEM32(esi); /* 0x005CAD59: mov esi, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x005CAD5B: push esi */
    eax = esi + 0x8; /* 0x005CAD5C: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005CAD5F: push eax */
    eax = ebp + (-0xC); /* 0x005CAD60: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x005CAD63: push eax */
    RECOMP_CALL(sub_005CA960); /* 0x005CAD64: call 0x5ca960 */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x005CAD69: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAD55; /* 0x005CAD6B: jne 0x5cad55 */
L_005CAD6D:
    edi = POP32_VAL(esp); /* 0x005CAD6D: pop edi */
L_005CAD6E:
    esi = POP32_VAL(esp); /* 0x005CAD6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAD6F: pop ebx */
    esp = ebp; /* 0x005CAD70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAD72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAD73: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CAD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAD80u);

L_005CAD80:
    PUSH32(esp, ebp); /* 0x005CAD80: push ebp */
    ebp = esp; /* 0x005CAD81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAD83: push -1 */
    PUSH32(esp, 0x007ADAB8u); /* 0x005CAD85: push 0x7adab8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CAD8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CAD90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CAD91: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CAD94: push ebx */
    PUSH32(esp, esi); /* 0x005CAD95: push esi */
    PUSH32(esp, edi); /* 0x005CAD96: push edi */
    eax = MEM32(0x855000); /* 0x005CAD97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CAD9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CAD9E: push eax */
    eax = ebp + (-0xC); /* 0x005CAD9F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CADA2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CADA8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CADAB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CADAE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005CA1C0); /* 0x005CADB1: call 0x5ca1c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005CADB6: mov ebx, eax */
    MEM32(ebp + 0xC) = ebx; /* 0x005CADB8: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CADBB: mov dword ptr [ebp - 4], 0 */
    edi = ebx + 0x8; /* 0x005CADC2: lea edi, [ebx + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x005CADC5: mov dword ptr [ebp + 8], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CADC8: mov byte ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x005CADCC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAE1E; /* 0x005CADCE: je 0x5cae1e */
L_005CADD0:
    MEM32(edi + 0x10) = 0; /* 0x005CADD0: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x14) = 0; /* 0x005CADD7: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x005CADDE: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005CADE5: mov dword ptr [edi + 0x10], 0 */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005CADEC: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CADF6; /* 0x005CADF0: jb 0x5cadf6 */
L_005CADF2:
    eax = MEM32(edi); /* 0x005CADF2: mov eax, dword ptr [edi] */
    goto L_005CADF8; /* 0x005CADF4: jmp 0x5cadf8 */
L_005CADF6:
    eax = edi; /* 0x005CADF6: mov eax, edi */
L_005CADF8:
    MEM8(eax) = (uint8_t)(0); /* 0x005CADF8: mov byte ptr [eax], 0 */
    esi = MEM32(ebp + 0x10); /* 0x005CADFB: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005CADFE: push esi */
    ecx = edi; /* 0x005CADFF: mov ecx, edi */
    RECOMP_CALL(sub_00419890); /* 0x005CAE01: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CAE06: mov byte ptr [ebp - 4], 2 */
    eax = esi + 0x18; /* 0x005CAE0A: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x005CAE0D: push eax */
    ecx = edi + 0x18; /* 0x005CAE0E: lea ecx, [edi + 0x18] */
    RECOMP_CALL(sub_005C5F20); /* 0x005CAE11: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CAE16: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CAE1A: mov byte ptr [ebp - 4], 1 */
L_005CAE1E:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CAE1E: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CAE22: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005CAE29: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAE2B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAE2E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAE35: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAE36: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAE37: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAE38: pop ebx */
    esp = ebp; /* 0x005CAE39: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAE3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CAE3C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005CAE3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAE3Fu);

L_005CAE3F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CAE3F: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CAE42: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CAE48: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005CAE4B: push 0 */
    PUSH32(esp, 0); /* 0x005CAE4D: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CAE4F: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CAE54u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CAE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAE60u);

L_005CAE60:
    PUSH32(esp, ebp); /* 0x005CAE60: push ebp */
    ebp = esp; /* 0x005CAE61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAE63: push -1 */
    PUSH32(esp, 0x007ADAE5u); /* 0x005CAE65: push 0x7adae5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CAE6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CAE70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005CAE71: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CAE74: push ebx */
    PUSH32(esp, esi); /* 0x005CAE75: push esi */
    PUSH32(esp, edi); /* 0x005CAE76: push edi */
    eax = MEM32(0x855000); /* 0x005CAE77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CAE7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CAE7E: push eax */
    eax = ebp + (-0xC); /* 0x005CAE7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CAE82: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CAE88: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005CAE8B: mov ebx, edx */
    edi = ecx; /* 0x005CAE8D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005CAE8F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CAE92: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CAE95: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005CAE9C: lea esp, [esp] */
L_005CAEA0:
    /* cmp edi, ebx */ /* 0x005CAEA0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAEC6; /* 0x005CAEA2: je 0x5caec6 */
L_005CAEA4:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CAEA4: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005CAEA8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAEB4; /* 0x005CAEAA: je 0x5caeb4 */
L_005CAEAC:
    PUSH32(esp, edi); /* 0x005CAEAC: push edi */
    ecx = esi; /* 0x005CAEAD: mov ecx, esi */
    RECOMP_CALL(sub_005C7850); /* 0x005CAEAF: call 0x5c7850 */
    RECOMP_FLAGS_IN();
L_005CAEB4:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CAEB4: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005CAEB8: add esi, 0x58 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005CAEBB: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x58u; /* 0x005CAEBE: add edi, 0x58 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005CAEC1: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005CAEA0; /* 0x005CAEC4: jmp 0x5caea0 */
L_005CAEC6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CAEC6: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005CAECD: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAECF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAED2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAED9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAEDA: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAEDB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAEDC: pop ebx */
    esp = ebp; /* 0x005CAEDD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAEDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAEE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CAEE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAEE1u);

L_005CAEE1:
    esi = MEM32(ebp + (-0x14)); /* 0x005CAEE1: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005CAEE4: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005CAEE7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAEFE; /* 0x005CAEE9: je 0x5caefe */
L_005CAEEB:
    goto L_005CAEF0; /* 0x005CAEEB: jmp 0x5caef0 */
L_005CAEF0:
    ecx = esi; /* 0x005CAEF0: mov ecx, esi */
    RECOMP_CALL(sub_005C7920); /* 0x005CAEF2: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x005CAEF7: add esi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005CAEFA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAEF0; /* 0x005CAEFC: jne 0x5caef0 */
L_005CAEFE:
    PUSH32(esp, 0); /* 0x005CAEFE: push 0 */
    PUSH32(esp, 0); /* 0x005CAF00: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CAF02: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CAF07u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CAF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAF10u);

L_005CAF10:
    PUSH32(esp, ebp); /* 0x005CAF10: push ebp */
    ebp = esp; /* 0x005CAF11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAF13: push -1 */
    PUSH32(esp, 0x007ADB05u); /* 0x005CAF15: push 0x7adb05 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CAF1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CAF20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005CAF21: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CAF24: push ebx */
    PUSH32(esp, esi); /* 0x005CAF25: push esi */
    PUSH32(esp, edi); /* 0x005CAF26: push edi */
    eax = MEM32(0x855000); /* 0x005CAF27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CAF2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CAF2E: push eax */
    eax = ebp + (-0xC); /* 0x005CAF2F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CAF32: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CAF38: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005CAF3B: mov ebx, edx */
    edi = ecx; /* 0x005CAF3D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005CAF3F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005CAF42: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CAF45: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005CAF4C: lea esp, [esp] */
L_005CAF50:
    /* cmp edi, ebx */ /* 0x005CAF50: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAF76; /* 0x005CAF52: je 0x5caf76 */
L_005CAF54:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CAF54: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005CAF58: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CAF64; /* 0x005CAF5A: je 0x5caf64 */
L_005CAF5C:
    PUSH32(esp, edi); /* 0x005CAF5C: push edi */
    ecx = esi; /* 0x005CAF5D: mov ecx, esi */
    RECOMP_CALL(sub_005C5F20); /* 0x005CAF5F: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
L_005CAF64:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CAF64: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005CAF68: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005CAF6B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x005CAF6E: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005CAF71: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005CAF50; /* 0x005CAF74: jmp 0x5caf50 */
L_005CAF76:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CAF76: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005CAF7D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CAF7F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CAF82: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CAF89: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CAF8A: pop edi */
    esi = POP32_VAL(esp); /* 0x005CAF8B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CAF8C: pop ebx */
    esp = ebp; /* 0x005CAF8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CAF8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CAF90: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CAF91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAF91u);

L_005CAF91:
    esi = MEM32(ebp + (-0x14)); /* 0x005CAF91: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005CAF94: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005CAF97: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CAFB0; /* 0x005CAF99: je 0x5cafb0 */
L_005CAF9B:
    goto L_005CAFA0; /* 0x005CAF9B: jmp 0x5cafa0 */
L_005CAFA0:
    PUSH32(esp, 0); /* 0x005CAFA0: push 0 */
    ecx = esi; /* 0x005CAFA2: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005CAFA4: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005CAFA9: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005CAFAC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CAFA0; /* 0x005CAFAE: jne 0x5cafa0 */
L_005CAFB0:
    PUSH32(esp, 0); /* 0x005CAFB0: push 0 */
    PUSH32(esp, 0); /* 0x005CAFB2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CAFB4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CAFB9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CAFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CAFC0u);

L_005CAFC0:
    PUSH32(esp, ebp); /* 0x005CAFC0: push ebp */
    ebp = esp; /* 0x005CAFC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CAFC3: push -1 */
    PUSH32(esp, 0x007ADB20u); /* 0x005CAFC5: push 0x7adb20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CAFCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CAFD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005CAFD1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CAFD4: push ebx */
    PUSH32(esp, esi); /* 0x005CAFD5: push esi */
    PUSH32(esp, edi); /* 0x005CAFD6: push edi */
    eax = MEM32(0x855000); /* 0x005CAFD7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CAFDC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CAFDE: push eax */
    eax = ebp + (-0xC); /* 0x005CAFDF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CAFE2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CAFE8: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005CAFEB: mov ebx, edx */
    esi = ecx; /* 0x005CAFED: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005CAFEF: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = edi; /* 0x005CAFF2: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CAFF5: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005CAFFC: lea esp, [esp] */
L_005CB000:
    /* cmp esi, ebx */ /* 0x005CB000: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB019; /* 0x005CB002: je 0x5cb019 */
L_005CB004:
    PUSH32(esp, esi); /* 0x005CB004: push esi */
    PUSH32(esp, edi); /* 0x005CB005: push edi */
    RECOMP_CALL(sub_005CA5B0); /* 0x005CB006: call 0x5ca5b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x005CB00B: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x005CB00E: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005CB011: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x005CB014: mov dword ptr [ebp - 0x18], esi */
    RECOMP_BACKEDGE();
    goto L_005CB000; /* 0x005CB017: jmp 0x5cb000 */
L_005CB019:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB019: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005CB020: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB022: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB025: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB02C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CB02D: pop edi */
    esi = POP32_VAL(esp); /* 0x005CB02E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CB02F: pop ebx */
    esp = ebp; /* 0x005CB030: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB032: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CB033: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CB034(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB034u);

L_005CB034:
    esi = MEM32(ebp + (-0x14)); /* 0x005CB034: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005CB037: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005CB03A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB050; /* 0x005CB03C: je 0x5cb050 */
L_005CB03E:
    edi = edi; /* 0x005CB03E: mov edi, edi */
L_005CB040:
    PUSH32(esp, 0); /* 0x005CB040: push 0 */
    ecx = esi; /* 0x005CB042: mov ecx, esi */
    RECOMP_CALL(sub_005C64E0); /* 0x005CB044: call 0x5c64e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x005CB049: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005CB04C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CB040; /* 0x005CB04E: jne 0x5cb040 */
L_005CB050:
    PUSH32(esp, 0); /* 0x005CB050: push 0 */
    PUSH32(esp, 0); /* 0x005CB052: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CB054: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CB059u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CB060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB060u);

L_005CB060:
    PUSH32(esp, ebp); /* 0x005CB060: push ebp */
    ebp = esp; /* 0x005CB061: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB063: push -1 */
    PUSH32(esp, 0x007ADB45u); /* 0x005CB065: push 0x7adb45 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB06A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB070: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005CB071: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005CB074: push ebx */
    PUSH32(esp, esi); /* 0x005CB075: push esi */
    PUSH32(esp, edi); /* 0x005CB076: push edi */
    eax = MEM32(0x855000); /* 0x005CB077: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB07C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CB07E: push eax */
    eax = ebp + (-0xC); /* 0x005CB07F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB082: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CB088: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB08B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x005CB092: mov esi, dword ptr [ebp + 8] */
L_005CB095:
    /* cmp ecx, edx */ /* 0x005CB095: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB0B7; /* 0x005CB097: je 0x5cb0b7 */
L_005CB099:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CB099: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005CB09D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CB0A5; /* 0x005CB09F: je 0x5cb0a5 */
L_005CB0A1:
    eax = MEM32(ecx); /* 0x005CB0A1: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x005CB0A3: mov dword ptr [esi], eax */
L_005CB0A5:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CB0A5: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005CB0A9: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005CB0AC: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005CB0AF: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x005CB0B2: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_005CB095; /* 0x005CB0B5: jmp 0x5cb095 */
L_005CB0B7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB0B7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005CB0BE: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB0C0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB0C3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB0CA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CB0CB: pop edi */
    esi = POP32_VAL(esp); /* 0x005CB0CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CB0CD: pop ebx */
    esp = ebp; /* 0x005CB0CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB0D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CB0D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CB0D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB0D2u);

L_005CB0D2:
    PUSH32(esp, 0); /* 0x005CB0D2: push 0 */
    PUSH32(esp, 0); /* 0x005CB0D4: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CB0D6: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CB0DBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CB0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB0E0u);

L_005CB0E0:
    PUSH32(esp, ebp); /* 0x005CB0E0: push ebp */
    ebp = esp; /* 0x005CB0E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB0E3: push -1 */
    PUSH32(esp, 0x007ADB78u); /* 0x005CB0E5: push 0x7adb78 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB0EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB0F0: push eax */
    PUSH32(esp, ecx); /* 0x005CB0F1: push ecx */
    PUSH32(esp, ebx); /* 0x005CB0F2: push ebx */
    PUSH32(esp, esi); /* 0x005CB0F3: push esi */
    PUSH32(esp, edi); /* 0x005CB0F4: push edi */
    eax = MEM32(0x855000); /* 0x005CB0F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB0FA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CB0FC: push eax */
    eax = ebp + (-0xC); /* 0x005CB0FD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB100: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005CB106: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CB109: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CB10C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005CA1C0); /* 0x005CB10F: call 0x5ca1c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005CB114: mov ebx, eax */
    MEM32(ebp + 0xC) = ebx; /* 0x005CB116: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB119: mov dword ptr [ebp - 4], 0 */
    edi = ebx + 0x8; /* 0x005CB120: lea edi, [ebx + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x005CB123: mov dword ptr [ebp + 8], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CB126: mov byte ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x005CB12A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CB180; /* 0x005CB12C: je 0x5cb180 */
L_005CB12E:
    MEM32(edi + 0x10) = 0; /* 0x005CB12E: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x14) = 0; /* 0x005CB135: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x005CB13C: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005CB143: mov dword ptr [edi + 0x10], 0 */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005CB14A: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB154; /* 0x005CB14E: jb 0x5cb154 */
L_005CB150:
    eax = MEM32(edi); /* 0x005CB150: mov eax, dword ptr [edi] */
    goto L_005CB156; /* 0x005CB152: jmp 0x5cb156 */
L_005CB154:
    eax = edi; /* 0x005CB154: mov eax, edi */
L_005CB156:
    MEM8(eax) = (uint8_t)(0); /* 0x005CB156: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB159: push -1 */
    PUSH32(esp, 0); /* 0x005CB15B: push 0 */
    esi = MEM32(ebp + 0x10); /* 0x005CB15D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005CB160: push esi */
    ecx = edi; /* 0x005CB161: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005CB163: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CB168: mov byte ptr [ebp - 4], 2 */
    eax = esi + 0x18; /* 0x005CB16C: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x005CB16F: push eax */
    ecx = edi + 0x18; /* 0x005CB170: lea ecx, [edi + 0x18] */
    RECOMP_CALL(sub_005C5F20); /* 0x005CB173: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CB178: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CB17C: mov byte ptr [ebp - 4], 1 */
L_005CB180:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CB180: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB184: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005CB18B: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB18D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB190: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB197: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CB198: pop edi */
    esi = POP32_VAL(esp); /* 0x005CB199: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CB19A: pop ebx */
    esp = ebp; /* 0x005CB19B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB19D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CB19E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005CB1A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB1A1u);

L_005CB1A1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CB1A1: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CB1A4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB1AA: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005CB1AD: push 0 */
    PUSH32(esp, 0); /* 0x005CB1AF: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005CB1B1: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005CB1B6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005CB1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB1C0u);

L_005CB1C0:
    PUSH32(esp, ebp); /* 0x005CB1C0: push ebp */
    ebp = esp; /* 0x005CB1C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB1C3: push -1 */
    PUSH32(esp, 0x007AD122u); /* 0x005CB1C5: push 0x7ad122 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB1CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB1D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x005CB1D1: sub esp, 0x8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CB1D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB1DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CB1DE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x005CB1E1: push esi */
    PUSH32(esp, eax); /* 0x005CB1E2: push eax */
    eax = ebp + (-0xC); /* 0x005CB1E3: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB1E6: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CB1EC: mov esi, ecx */
    PUSH32(esp, edx); /* 0x005CB1EE: push edx */
    PUSH32(esp, 0x007F53D0u); /* 0x005CB1EF: push 0x7f53d0 */
    eax = ebp + (-0x90); /* 0x005CB1F4: lea eax, [ebp - 0x90] */
    MEM32(ebp + (-0x98)) = esi; /* 0x005CB1FA: mov dword ptr [ebp - 0x98], esi */
    PUSH32(esp, 0x40u); /* 0x005CB200: push 0x40 */
    PUSH32(esp, eax); /* 0x005CB202: push eax */
    MEM32(ebp + (-0x94)) = 0; /* 0x005CB203: mov dword ptr [ebp - 0x94], 0 */
    RECOMP_ICALL(MEM32(0x7CC4C8)); /* 0x005CB20D: call dword ptr [0x7cc4c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CB213: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x90); /* 0x005CB216: lea eax, [ebp - 0x90] */
    ecx = esi; /* 0x005CB21C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CB21E: push eax */
    RECOMP_CALL(sub_005C8920); /* 0x005CB21F: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB224: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x94)) = 1; /* 0x005CB22B: mov dword ptr [ebp - 0x94], 1 */
    eax = esi; /* 0x005CB235: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB237: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB23A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB241: pop ecx */
    esi = POP32_VAL(esp); /* 0x005CB242: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CB243: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CB246: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CB248: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CB24D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB24F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CB250: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CB260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB260u);

L_005CB260:
    PUSH32(esp, ebp); /* 0x005CB260: push ebp */
    ebp = esp; /* 0x005CB261: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB263: push -1 */
    PUSH32(esp, 0x007AD122u); /* 0x005CB265: push 0x7ad122 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB26A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB270: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x005CB271: sub esp, 0x8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CB277: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB27C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CB27E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x005CB281: push esi */
    PUSH32(esp, eax); /* 0x005CB282: push eax */
    eax = ebp + (-0xC); /* 0x005CB283: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB286: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CB28C: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005CB28E: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x90); /* 0x005CB291: lea eax, [ebp - 0x90] */
    MEM32(ebp + (-0x98)) = esi; /* 0x005CB297: mov dword ptr [ebp - 0x98], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CB29D: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x94)) = 0; /* 0x005CB2A0: mov dword ptr [ebp - 0x94], 0 */
    PUSH32(esp, 0x007F53C4u); /* 0x005CB2AA: push 0x7f53c4 */
    PUSH32(esp, 0x40u); /* 0x005CB2AF: push 0x40 */
    PUSH32(esp, eax); /* 0x005CB2B1: push eax */
    RECOMP_ICALL(MEM32(0x7CC4C8)); /* 0x005CB2B2: call dword ptr [0x7cc4c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x005CB2B8: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x90); /* 0x005CB2BB: lea eax, [ebp - 0x90] */
    ecx = esi; /* 0x005CB2C1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CB2C3: push eax */
    RECOMP_CALL(sub_005C8920); /* 0x005CB2C4: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB2C9: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x94)) = 1; /* 0x005CB2D0: mov dword ptr [ebp - 0x94], 1 */
    eax = esi; /* 0x005CB2DA: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB2DC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB2DF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB2E6: pop ecx */
    esi = POP32_VAL(esp); /* 0x005CB2E7: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CB2E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CB2EB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CB2ED: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CB2F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB2F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CB2F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CB300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB300u);

L_005CB300:
    PUSH32(esp, ebp); /* 0x005CB300: push ebp */
    ebp = esp; /* 0x005CB301: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB303: push -1 */
    PUSH32(esp, 0x007ADBC1u); /* 0x005CB305: push 0x7adbc1 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB30A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB310: push eax */
    PUSH32(esp, ecx); /* 0x005CB311: push ecx */
    PUSH32(esp, ebx); /* 0x005CB312: push ebx */
    PUSH32(esp, esi); /* 0x005CB313: push esi */
    PUSH32(esp, edi); /* 0x005CB314: push edi */
    eax = MEM32(0x855000); /* 0x005CB315: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB31A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CB31C: push eax */
    eax = ebp + (-0xC); /* 0x005CB31D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB320: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CB326: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005CB328: mov dword ptr [ebp - 0x10], esi */
    ecx = esi + 0xC; /* 0x005CB32B: lea ecx, [esi + 0xc] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005CB32E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005CB335: mov dword ptr [ecx + 0x10], 0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005CB33C: mov byte ptr [ecx], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB33F: mov dword ptr [ebp - 4], 0 */
    edi = esi + 0x24; /* 0x005CB346: lea edi, [esi + 0x24] */
    MEM32(edi + 0x14) = 0xFu; /* 0x005CB349: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005CB350: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x005CB357: mov byte ptr [edi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CB35A: mov byte ptr [ebp - 4], 1 */
    ebx = esi + 0x3C; /* 0x005CB35E: lea ebx, [esi + 0x3c] */
    MEM32(ebx + 0x14) = 0xFu; /* 0x005CB361: mov dword ptr [ebx + 0x14], 0xf */
    MEM32(ebx + 0x10) = 0; /* 0x005CB368: mov dword ptr [ebx + 0x10], 0 */
    MEM8(ebx) = (uint8_t)(0); /* 0x005CB36F: mov byte ptr [ebx], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CB372: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(ebp + 0x8); /* 0x005CB376: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x005CB379: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x005CB37B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x005CB37E: mov dword ptr [esi + 4], eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x005CB381: mov al, byte ptr [ebp + 0x10] */
    MEM8(esi + 0x8) = (uint8_t)(LO8(eax)); /* 0x005CB384: mov byte ptr [esi + 8], al */
    eax = MEM32(ebp + 0x14); /* 0x005CB387: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x005CB38A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB398; /* 0x005CB38C: je 0x5cb398 */
L_005CB38E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB38E: push -1 */
    PUSH32(esp, 0); /* 0x005CB390: push 0 */
    PUSH32(esp, eax); /* 0x005CB392: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005CB393: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CB398:
    eax = MEM32(ebp + 0x18); /* 0x005CB398: mov eax, dword ptr [ebp + 0x18] */
    /* cmp edi, eax */ /* 0x005CB39B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB3AB; /* 0x005CB39D: je 0x5cb3ab */
L_005CB39F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB39F: push -1 */
    PUSH32(esp, 0); /* 0x005CB3A1: push 0 */
    PUSH32(esp, eax); /* 0x005CB3A3: push eax */
    ecx = edi; /* 0x005CB3A4: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005CB3A6: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CB3AB:
    eax = MEM32(ebp + 0x1C); /* 0x005CB3AB: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp ebx, eax */ /* 0x005CB3AE: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CB3BE; /* 0x005CB3B0: je 0x5cb3be */
L_005CB3B2:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB3B2: push -1 */
    PUSH32(esp, 0); /* 0x005CB3B4: push 0 */
    PUSH32(esp, eax); /* 0x005CB3B6: push eax */
    ecx = ebx; /* 0x005CB3B7: mov ecx, ebx */
    RECOMP_CALL(sub_0040A030); /* 0x005CB3B9: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005CB3BE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB3BE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005CB3C5: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB3C7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB3CA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB3D1: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CB3D2: pop edi */
    esi = POP32_VAL(esp); /* 0x005CB3D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CB3D4: pop ebx */
    esp = ebp; /* 0x005CB3D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB3D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x005CB3D8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_005CB3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB3E0u);

L_005CB3E0:
    PUSH32(esp, ebp); /* 0x005CB3E0: push ebp */
    ebp = esp; /* 0x005CB3E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB3E3: push -1 */
    PUSH32(esp, 0x007ADC10u); /* 0x005CB3E5: push 0x7adc10 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB3EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB3F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005CB3F1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CB3F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CB3F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CB3FB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005CB3FE: push ebx */
    PUSH32(esp, esi); /* 0x005CB3FF: push esi */
    PUSH32(esp, edi); /* 0x005CB400: push edi */
    PUSH32(esp, eax); /* 0x005CB401: push eax */
    eax = ebp + (-0xC); /* 0x005CB402: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB405: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005CB40B: mov edi, ecx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x005CB40D: mov dword ptr [ebp - 0x2c], edi */
    eax = MEM32(ebp + 0x8); /* 0x005CB410: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x005CB413: push 0 */
    MEM32(edi) = eax; /* 0x005CB415: mov dword ptr [edi], eax */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x005CB417: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005CB41D: push edi */
    PUSH32(esp, 0x005CD7A0u); /* 0x005CB41E: push 0x5cd7a0 */
    PUSH32(esp, 0); /* 0x005CB423: push 0 */
    PUSH32(esp, 0x69u); /* 0x005CB425: push 0x69 */
    PUSH32(esp, eax); /* 0x005CB427: push eax */
    MEM32(edi + 0x10) = eax; /* 0x005CB428: mov dword ptr [edi + 0x10], eax */
    RECOMP_ICALL(MEM32(0x7CC70C)); /* 0x005CB42B: call dword ptr [0x7cc70c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CB431: push 0 */
    PUSH32(esp, eax); /* 0x005CB433: push eax */
    MEM32(edi + 0x4) = eax; /* 0x005CB434: mov dword ptr [edi + 4], eax */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x005CB437: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x65u); /* 0x005CB43D: push 0x65 */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x005CB43F: push dword ptr [edi + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC8A8)); /* 0x005CB442: call dword ptr [0x7cc8a8] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC708); /* 0x005CB448: mov ebx, dword ptr [0x7cc708] */
    esi = eax; /* 0x005CB44E: mov esi, eax */
    PUSH32(esp, esi); /* 0x005CB450: push esi */
    PUSH32(esp, 0); /* 0x005CB451: push 0 */
    PUSH32(esp, 0x80u); /* 0x005CB453: push 0x80 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CB458: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CB45B: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005CB45D: push esi */
    PUSH32(esp, 1); /* 0x005CB45E: push 1 */
    PUSH32(esp, 0x80u); /* 0x005CB460: push 0x80 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CB465: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CB468: call ebx */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 3); /* 0x005CB46A: mov cl, 3 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB46C: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB471: push eax */
    PUSH32(esp, 0x3EAu); /* 0x005CB472: push 0x3ea */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CB477: push dword ptr [edi + 4] */
    edi = MEM32(0x7CC8B0); /* 0x005CB47A: mov edi, dword ptr [0x7cc8b0] */
    RECOMP_ICALL(edi); /* 0x005CB480: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC6FC); /* 0x005CB482: mov esi, dword ptr [0x7cc6fc] */
    PUSH32(esp, eax); /* 0x005CB488: push eax */
    RECOMP_ICALL(esi); /* 0x005CB489: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 4); /* 0x005CB48B: mov cl, 4 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB48D: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB492: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB493: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3ECu); /* 0x005CB496: push 0x3ec */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB49B: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB49E: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4A0: push eax */
    RECOMP_ICALL(esi); /* 0x005CB4A1: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 6); /* 0x005CB4A3: mov cl, 6 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB4A5: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4AA: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB4AB: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3EDu); /* 0x005CB4AE: push 0x3ed */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB4B3: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB4B6: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4B8: push eax */
    RECOMP_ICALL(esi); /* 0x005CB4B9: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 5); /* 0x005CB4BB: mov cl, 5 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB4BD: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4C2: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB4C3: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3EEu); /* 0x005CB4C6: push 0x3ee */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB4CB: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB4CE: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4D0: push eax */
    RECOMP_ICALL(esi); /* 0x005CB4D1: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0xBu); /* 0x005CB4D3: mov cl, 0xb */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB4D5: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4DA: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB4DB: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F0u); /* 0x005CB4DE: push 0x3f0 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB4E3: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB4E6: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4E8: push eax */
    RECOMP_ICALL(esi); /* 0x005CB4E9: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0xDu); /* 0x005CB4EB: mov cl, 0xd */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB4ED: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB4F2: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB4F3: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F3u); /* 0x005CB4F6: push 0x3f3 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB4FB: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB4FE: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB500: push eax */
    RECOMP_ICALL(esi); /* 0x005CB501: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0xEu); /* 0x005CB503: mov cl, 0xe */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB505: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB50A: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB50B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F4u); /* 0x005CB50E: push 0x3f4 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB513: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB516: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB518: push eax */
    RECOMP_ICALL(esi); /* 0x005CB519: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x10u); /* 0x005CB51B: mov cl, 0x10 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB51D: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB522: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB523: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F6u); /* 0x005CB526: push 0x3f6 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB52B: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB52E: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB530: push eax */
    RECOMP_ICALL(esi); /* 0x005CB531: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x11u); /* 0x005CB533: mov cl, 0x11 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB535: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB53A: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB53B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F7u); /* 0x005CB53E: push 0x3f7 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB543: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB546: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB548: push eax */
    RECOMP_ICALL(esi); /* 0x005CB549: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x12u); /* 0x005CB54B: mov cl, 0x12 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB54D: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB552: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB553: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F8u); /* 0x005CB556: push 0x3f8 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB55B: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB55E: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB560: push eax */
    RECOMP_ICALL(esi); /* 0x005CB561: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x13u); /* 0x005CB563: mov cl, 0x13 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB565: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB56A: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB56B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3F9u); /* 0x005CB56E: push 0x3f9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB573: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB576: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB578: push eax */
    RECOMP_ICALL(esi); /* 0x005CB579: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x14u); /* 0x005CB57B: mov cl, 0x14 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB57D: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB582: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB583: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3FAu); /* 0x005CB586: push 0x3fa */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB58B: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB58E: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB590: push eax */
    RECOMP_ICALL(esi); /* 0x005CB591: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x15u); /* 0x005CB593: mov cl, 0x15 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB595: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB59A: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB59B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3FCu); /* 0x005CB59E: push 0x3fc */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB5A3: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB5A6: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5A8: push eax */
    RECOMP_ICALL(esi); /* 0x005CB5A9: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x16u); /* 0x005CB5AB: mov cl, 0x16 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB5AD: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5B2: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB5B3: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3FDu); /* 0x005CB5B6: push 0x3fd */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB5BB: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB5BE: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5C0: push eax */
    RECOMP_ICALL(esi); /* 0x005CB5C1: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x19u); /* 0x005CB5C3: mov cl, 0x19 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB5C5: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5CA: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB5CB: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0x3FBu); /* 0x005CB5CE: push 0x3fb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB5D3: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB5D6: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5D8: push eax */
    RECOMP_ICALL(esi); /* 0x005CB5D9: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x005CB5DB: mov ecx, dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x005CB5DE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x005CB5E1: push 0 */
    PUSH32(esp, 0); /* 0x005CB5E3: push 0 */
    PUSH32(esp, 0x1037u); /* 0x005CB5E5: push 0x1037 */
    PUSH32(esp, 0x3EBu); /* 0x005CB5EA: push 0x3eb */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CB5EF: push dword ptr [ecx + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x005CB5F2: mov dword ptr [ecx + 8], eax */
    RECOMP_ICALL(edi); /* 0x005CB5F5: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB5F7: push eax */
    RECOMP_ICALL(ebx); /* 0x005CB5F8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0x24u)); _flag_b = (uint32_t)((eax | 0x24u));
    eax = eax | 0x24u; /* 0x005CB5FA: or eax, 0x24 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CB5FD: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005CB5FE: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x005CB601: push 0 */
    PUSH32(esp, 0x1036u); /* 0x005CB603: push 0x1036 */
    PUSH32(esp, 0x3EBu); /* 0x005CB608: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CB60D: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x005CB610: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB612: push eax */
    RECOMP_ICALL(ebx); /* 0x005CB613: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007F5470u); /* 0x005CB615: push 0x7f5470 */
    PUSH32(esp, 0x20u); /* 0x005CB61A: push 0x20 */
    PUSH32(esp, 0); /* 0x005CB61C: push 0 */
    PUSH32(esp, 0); /* 0x005CB61E: push 0 */
    PUSH32(esp, 0); /* 0x005CB620: push 0 */
    PUSH32(esp, 0); /* 0x005CB622: push 0 */
    PUSH32(esp, 0); /* 0x005CB624: push 0 */
    PUSH32(esp, 0); /* 0x005CB626: push 0 */
    PUSH32(esp, 0); /* 0x005CB628: push 0 */
    PUSH32(esp, 0x2BCu); /* 0x005CB62A: push 0x2bc */
    PUSH32(esp, 0); /* 0x005CB62F: push 0 */
    PUSH32(esp, 0); /* 0x005CB631: push 0 */
    PUSH32(esp, 0); /* 0x005CB633: push 0 */
    PUSH32(esp, 0x1Eu); /* 0x005CB635: push 0x1e */
    RECOMP_ICALL(MEM32(0x7CC08C)); /* 0x005CB637: call dword ptr [0x7cc08c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x005CB63D: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 1); /* 0x005CB640: push 1 */
    PUSH32(esp, eax); /* 0x005CB642: push eax */
    PUSH32(esp, 0x30u); /* 0x005CB643: push 0x30 */
    PUSH32(esp, 0x3F5u); /* 0x005CB645: push 0x3f5 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CB64A: push dword ptr [ecx + 4] */
    MEM32(ecx + 0xC) = eax; /* 0x005CB64D: mov dword ptr [ecx + 0xc], eax */
    RECOMP_ICALL(edi); /* 0x005CB650: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB652: push eax */
    RECOMP_ICALL(ebx); /* 0x005CB653: call ebx */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0xFu); /* 0x005CB655: mov cl, 0xf */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB657: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x2C)); /* 0x005CB65C: mov ebx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005CB65F: push eax */
    PUSH32(esp, 0x3F5u); /* 0x005CB660: push 0x3f5 */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x005CB665: push dword ptr [ebx + 4] */
    RECOMP_ICALL(edi); /* 0x005CB668: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB66A: push eax */
    RECOMP_ICALL(esi); /* 0x005CB66B: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x17u); /* 0x005CB66D: mov cl, 0x17 */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB66F: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB674: push eax */
    ecx = ebp + (-0x28); /* 0x005CB675: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB678: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CB67D: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x28); /* 0x005CB684: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x64u); /* 0x005CB687: push 0x64 */
    PUSH32(esp, eax); /* 0x005CB689: push eax */
    ecx = ebx; /* 0x005CB68A: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB68C: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB691: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB698: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x005CB69C: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB6AC; /* 0x005CB6A2: jb 0x5cb6ac */
L_005CB6A4:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB6A4: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB6A7: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB6A9: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB6AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB6AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB6AE: mov dword ptr [ebp - 0x14], 7 */
    SET_LO8(ecx, 0xAu); /* 0x005CB6B5: mov cl, 0xa */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB6B7: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB6BE: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB6C2: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB6C7: push eax */
    ecx = ebp + (-0x28); /* 0x005CB6C8: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB6CB: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005CB6D0: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x28); /* 0x005CB6D7: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x64u); /* 0x005CB6DA: push 0x64 */
    PUSH32(esp, eax); /* 0x005CB6DC: push eax */
    ecx = ebx; /* 0x005CB6DD: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB6DF: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB6E4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB6EB: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB6F9; /* 0x005CB6EF: jb 0x5cb6f9 */
L_005CB6F1:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB6F1: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB6F4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB6F6: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB6F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB6F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB6FB: mov dword ptr [ebp - 0x14], 7 */
    SET_LO8(ecx, 8); /* 0x005CB702: mov cl, 8 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB704: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB70B: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB70F: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB714: push eax */
    ecx = ebp + (-0x28); /* 0x005CB715: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB718: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005CB71D: mov dword ptr [ebp - 4], 2 */
    eax = ebp + (-0x28); /* 0x005CB724: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0xFAu); /* 0x005CB727: push 0xfa */
    PUSH32(esp, eax); /* 0x005CB72C: push eax */
    ecx = ebx; /* 0x005CB72D: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB72F: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB734: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB73B: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB749; /* 0x005CB73F: jb 0x5cb749 */
L_005CB741:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB741: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB744: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB746: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB749:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB749: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB74B: mov dword ptr [ebp - 0x14], 7 */
    SET_LO8(ecx, 7); /* 0x005CB752: mov cl, 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB754: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB75B: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB75F: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB764: push eax */
    ecx = ebp + (-0x28); /* 0x005CB765: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB768: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x005CB76D: mov dword ptr [ebp - 4], 3 */
    eax = ebp + (-0x28); /* 0x005CB774: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x140u); /* 0x005CB777: push 0x140 */
    PUSH32(esp, eax); /* 0x005CB77C: push eax */
    ecx = ebx; /* 0x005CB77D: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB77F: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB784: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB78B: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB799; /* 0x005CB78F: jb 0x5cb799 */
L_005CB791:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB791: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB794: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB796: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB799:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB799: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB79B: mov dword ptr [ebp - 0x14], 7 */
    SET_LO8(ecx, 0xCu); /* 0x005CB7A2: mov cl, 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB7A4: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB7AB: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB7AF: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB7B4: push eax */
    ecx = ebp + (-0x28); /* 0x005CB7B5: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB7B8: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x005CB7BD: mov dword ptr [ebp - 4], 4 */
    eax = ebp + (-0x28); /* 0x005CB7C4: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x46u); /* 0x005CB7C7: push 0x46 */
    PUSH32(esp, eax); /* 0x005CB7C9: push eax */
    ecx = ebx; /* 0x005CB7CA: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB7CC: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB7D1: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB7D8: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB7E6; /* 0x005CB7DC: jb 0x5cb7e6 */
L_005CB7DE:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB7DE: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB7E1: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB7E3: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB7E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB7E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB7E8: mov dword ptr [ebp - 0x14], 7 */
    SET_LO8(ecx, 9); /* 0x005CB7EF: mov cl, 9 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB7F1: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB7F8: mov word ptr [ebp - 0x28], ax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CB7FC: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CB801: push eax */
    ecx = ebp + (-0x28); /* 0x005CB802: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C8920); /* 0x005CB805: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 5; /* 0x005CB80A: mov dword ptr [ebp - 4], 5 */
    eax = ebp + (-0x28); /* 0x005CB811: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x50u); /* 0x005CB814: push 0x50 */
    PUSH32(esp, eax); /* 0x005CB816: push eax */
    ecx = ebx; /* 0x005CB817: mov ecx, ebx */
    RECOMP_CALL(sub_005CBB80); /* 0x005CB819: call 0x5cbb80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CB81E: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CB825: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB833; /* 0x005CB829: jb 0x5cb833 */
L_005CB82B:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CB82B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CB82E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB830: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB833:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB833: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CB835: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CB83C: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CB843: mov word ptr [ebp - 0x28], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CB847: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CB84A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CB851: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CB852: pop edi */
    esi = POP32_VAL(esp); /* 0x005CB853: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CB854: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CB855: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CB858: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CB85A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CB85F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CB861: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CB862: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CB870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CB870u);

L_005CB870:
    PUSH32(esp, ebp); /* 0x005CB870: push ebp */
    ebp = esp; /* 0x005CB871: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005CB873: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CB876: push -1 */
    PUSH32(esp, 0x007ADC69u); /* 0x005CB878: push 0x7adc69 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CB87D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CB883: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x005CB884: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CB88A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005CB88F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xB0) = eax; /* 0x005CB891: mov dword ptr [esp + 0xb0], eax */
    PUSH32(esp, ebx); /* 0x005CB898: push ebx */
    PUSH32(esp, esi); /* 0x005CB899: push esi */
    PUSH32(esp, edi); /* 0x005CB89A: push edi */
    eax = MEM32(0x855000); /* 0x005CB89B: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005CB8A0: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005CB8A2: push eax */
    eax = esp + 0xC8; /* 0x005CB8A3: lea eax, [esp + 0xc8] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CB8AA: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CB8B0: mov esi, ecx */
    MEM32(esp + 0x18) = esi; /* 0x005CB8B2: mov dword ptr [esp + 0x18], esi */
    ebx = MEM32(0x7CC8B0); /* 0x005CB8B6: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0); /* 0x005CB8BC: push 0 */
    PUSH32(esp, 0); /* 0x005CB8BE: push 0 */
    PUSH32(esp, 0x1009u); /* 0x005CB8C0: push 0x1009 */
    PUSH32(esp, 0x3EBu); /* 0x005CB8C5: push 0x3eb */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CB8CA: push dword ptr [esi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CB8CD: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x005CB8CF: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, eax); /* 0x005CB8D5: push eax */
    RECOMP_ICALL(edi); /* 0x005CB8D6: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x007F5430u); /* 0x005CB8D8: push 0x7f5430 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CB8DD: push dword ptr [esi + 4] */
    MEM32(esi + 0x14) = 0; /* 0x005CB8E0: mov dword ptr [esi + 0x14], 0 */
    MEM16(esi + 0x18) = (uint16_t)(0); /* 0x005CB8E7: mov word ptr [esi + 0x18], 0 */
    RECOMP_ICALL(MEM32(0x7CC6FC)); /* 0x005CB8ED: call dword ptr [0x7cc6fc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005CB8F3: mov eax, dword ptr [esi] */
    MEM32(esp + 0x14) = 0; /* 0x005CB8F5: mov dword ptr [esp + 0x14], 0 */
    ecx = MEM32(eax + 0x4); /* 0x005CB8FD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005CB900: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005CB902: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005CB907: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005CB909: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005CB90C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005CB90E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005CB90E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005CB911: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005CBA84; /* 0x005CB913: je 0x5cba84 */
L_005CB919:
    ebx = MEM32(0x7CC694); /* 0x005CB919: mov ebx, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CB91F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = ecx; /* 0x005CB921: mov dword ptr [esp + 0x10], ecx */
L_005CB925:
    eax = MEM32(esi); /* 0x005CB925: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x005CB927: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005CB929: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = esp + 0x64; /* 0x005CB92B: lea ecx, [esp + 0x64] */
    PUSH32(esp, eax); /* 0x005CB92F: push eax */
    RECOMP_CALL(sub_005C7850); /* 0x005CB930: call 0x5c7850 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0xD0) = 0; /* 0x005CB935: mov dword ptr [esp + 0xd0], 0 */
    edx = esp + 0xA0; /* 0x005CB940: lea edx, [esp + 0xa0] */
    ecx = esp + 0x34; /* 0x005CB947: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_00665240); /* 0x005CB94B: call 0x665240 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005CB950: mov edi, eax */
    MEM8(esp + 0xD0) = (uint8_t)(1); /* 0x005CB952: mov byte ptr [esp + 0xd0], 1 */
    edx = esp + 0x88; /* 0x005CB95A: lea edx, [esp + 0x88] */
    ecx = esp + 0x4C; /* 0x005CB961: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_00665240); /* 0x005CB965: call 0x665240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005CB96A: mov esi, eax */
    MEM8(esp + 0xD0) = (uint8_t)(2); /* 0x005CB96C: mov byte ptr [esp + 0xd0], 2 */
    edx = esp + 0x70; /* 0x005CB974: lea edx, [esp + 0x70] */
    ecx = esp + 0x1C; /* 0x005CB978: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_00665240); /* 0x005CB97C: call 0x665240 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xD0) = (uint8_t)(3); /* 0x005CB981: mov byte ptr [esp + 0xd0], 3 */
    PUSH32(esp, edi); /* 0x005CB989: push edi */
    PUSH32(esp, MEM32(esp + 0x6C)); /* 0x005CB98A: push dword ptr [esp + 0x6c] */
    PUSH32(esp, MEM32(esp + 0x6C)); /* 0x005CB98E: push dword ptr [esp + 0x6c] */
    PUSH32(esp, esi); /* 0x005CB992: push esi */
    esi = MEM32(esp + 0x28); /* 0x005CB993: mov esi, dword ptr [esp + 0x28] */
    ecx = esi; /* 0x005CB997: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005CB999: push eax */
    PUSH32(esp, MEM32(esp + 0x80)); /* 0x005CB99A: push dword ptr [esp + 0x80] */
    RECOMP_CALL(sub_005CBBF0); /* 0x005CB9A1: call 0x5cbbf0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xD0) = (uint8_t)(2); /* 0x005CB9A6: mov byte ptr [esp + 0xd0], 2 */
    /* cmp MEM32(esp + 0x30), 8 */ /* 0x005CB9AE: cmp dword ptr [esp + 0x30], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB9BE; /* 0x005CB9B3: jb 0x5cb9be */
L_005CB9B5:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005CB9B5: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(ebx); /* 0x005CB9B9: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB9BB: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB9BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB9BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = 7; /* 0x005CB9C0: mov dword ptr [esp + 0x30], 7 */
    MEM32(esp + 0x2C) = 0; /* 0x005CB9C8: mov dword ptr [esp + 0x2c], 0 */
    MEM16(esp + 0x1C) = (uint16_t)(LO16(eax)); /* 0x005CB9D0: mov word ptr [esp + 0x1c], ax */
    MEM8(esp + 0xD0) = (uint8_t)(1); /* 0x005CB9D5: mov byte ptr [esp + 0xd0], 1 */
    /* cmp MEM32(esp + 0x60), 8 */ /* 0x005CB9DD: cmp dword ptr [esp + 0x60], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x60)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB9ED; /* 0x005CB9E2: jb 0x5cb9ed */
L_005CB9E4:
    PUSH32(esp, MEM32(esp + 0x4C)); /* 0x005CB9E4: push dword ptr [esp + 0x4c] */
    RECOMP_ICALL(ebx); /* 0x005CB9E8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CB9EA: add esp, 4 */
    _flag_k = FK_ADD;
L_005CB9ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CB9ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x60) = 7; /* 0x005CB9EF: mov dword ptr [esp + 0x60], 7 */
    MEM32(esp + 0x5C) = 0; /* 0x005CB9F7: mov dword ptr [esp + 0x5c], 0 */
    MEM16(esp + 0x4C) = (uint16_t)(LO16(eax)); /* 0x005CB9FF: mov word ptr [esp + 0x4c], ax */
    MEM8(esp + 0xD0) = (uint8_t)(LO8(eax)); /* 0x005CBA04: mov byte ptr [esp + 0xd0], al */
    /* cmp MEM32(esp + 0x48), 8 */ /* 0x005CBA0B: cmp dword ptr [esp + 0x48], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x48)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBA1B; /* 0x005CBA10: jb 0x5cba1b */
L_005CBA12:
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x005CBA12: push dword ptr [esp + 0x34] */
    RECOMP_ICALL(ebx); /* 0x005CBA16: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBA18: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBA1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBA1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x48) = 7; /* 0x005CBA1D: mov dword ptr [esp + 0x48], 7 */
    MEM32(esp + 0x44) = 0; /* 0x005CBA25: mov dword ptr [esp + 0x44], 0 */
    MEM16(esp + 0x34) = (uint16_t)(LO16(eax)); /* 0x005CBA2D: mov word ptr [esp + 0x34], ax */
    MEM32(esp + 0xD0) = 0xFFFFFFFFu; /* 0x005CBA32: mov dword ptr [esp + 0xd0], 0xffffffff */
    ecx = esp + 0x64; /* 0x005CBA3D: lea ecx, [esp + 0x64] */
    RECOMP_CALL(sub_005C7920); /* 0x005CBA41: call 0x5c7920 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005CBA46: mov eax, dword ptr [esi] */
    edi = MEM32(esp + 0x14); /* 0x005CBA48: mov edi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x58u; /* 0x005CBA4C: add dword ptr [esp + 0x10], 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005CBA51: inc edi */
    _flag_k = FK_INC;
    MEM32(esp + 0x14) = edi; /* 0x005CBA52: mov dword ptr [esp + 0x14], edi */
    ecx = MEM32(eax + 0x4); /* 0x005CBA56: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005CBA59: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x2E8BA2E9u; /* 0x005CBA5B: mov eax, 0x2e8ba2e9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005CBA60: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(esp + 0x10); /* 0x005CBA62: mov ecx, dword ptr [esp + 0x10] */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005CBA66: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005CBA69: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005CBA6B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005CBA6B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005CBA6E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005CBA70: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005CB925; /* 0x005CBA72: jb 0x5cb925 */
L_005CBA78:
    ebx = MEM32(0x7CC8B0); /* 0x005CBA78: mov ebx, dword ptr [0x7cc8b0] */
    edi = MEM32(0x7CC708); /* 0x005CBA7E: mov edi, dword ptr [0x7cc708] */
L_005CBA84:
    eax = MEM32(esi); /* 0x005CBA84: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CBA86: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x005CBA88: push 0 */
    /* cmp MEM8(eax + 0xC), LO8(ecx) */ /* 0x005CBA8A: cmp byte ptr [eax + 0xc], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CBA8D: setne cl */
    PUSH32(esp, ecx); /* 0x005CBA90: push ecx */
    PUSH32(esp, 0xF1u); /* 0x005CBA91: push 0xf1 */
    PUSH32(esp, 0x3ECu); /* 0x005CBA96: push 0x3ec */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBA9B: push dword ptr [esi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CBA9E: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBAA0: push eax */
    RECOMP_ICALL(edi); /* 0x005CBAA1: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005CBAA3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CBAA5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x005CBAA7: push 0 */
    /* cmp MEM8(eax + 0xD), LO8(ecx) */ /* 0x005CBAA9: cmp byte ptr [eax + 0xd], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CBAAC: setne cl */
    PUSH32(esp, ecx); /* 0x005CBAAF: push ecx */
    PUSH32(esp, 0xF1u); /* 0x005CBAB0: push 0xf1 */
    PUSH32(esp, 0x3F7u); /* 0x005CBAB5: push 0x3f7 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBABA: push dword ptr [esi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CBABD: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBABF: push eax */
    RECOMP_ICALL(edi); /* 0x005CBAC0: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x005CBAC2: push 5 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBAC4: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x005CBAC7: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CBACD: push 0 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005CBACF: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x005CBAD2: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005CBAD8: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x7CC880)); /* 0x005CBADB: call dword ptr [0x7cc880] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBAE1: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC89C)); /* 0x005CBAE4: call dword ptr [0x7cc89c] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x64; /* 0x005CBAEA: lea eax, [esp + 0x64] */
    MEM32(esp + 0x74) = 2; /* 0x005CBAEE: mov dword ptr [esp + 0x74], 2 */
    PUSH32(esp, eax); /* 0x005CBAF6: push eax */
    PUSH32(esp, 0); /* 0x005CBAF7: push 0 */
    PUSH32(esp, 0x102Bu); /* 0x005CBAF9: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CBAFE: push 0x3eb */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBB03: push dword ptr [esi + 4] */
    MEM32(esp + 0x84) = 2; /* 0x005CBB06: mov dword ptr [esp + 0x84], 2 */
    RECOMP_ICALL(ebx); /* 0x005CBB11: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBB13: push eax */
    RECOMP_ICALL(edi); /* 0x005CBB14: call edi */
    RECOMP_FLAGS_IN();
    eax = esp + 0x64; /* 0x005CBB16: lea eax, [esp + 0x64] */
    MEM32(esp + 0x74) = 1; /* 0x005CBB1A: mov dword ptr [esp + 0x74], 1 */
    PUSH32(esp, eax); /* 0x005CBB22: push eax */
    PUSH32(esp, 0); /* 0x005CBB23: push 0 */
    PUSH32(esp, 0x102Bu); /* 0x005CBB25: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CBB2A: push 0x3eb */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBB2F: push dword ptr [esi + 4] */
    MEM32(esp + 0x84) = 1; /* 0x005CBB32: mov dword ptr [esp + 0x84], 1 */
    RECOMP_ICALL(ebx); /* 0x005CBB3D: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBB3F: push eax */
    RECOMP_ICALL(edi); /* 0x005CBB40: call edi */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005CBB42: mov ecx, esi */
    RECOMP_CALL(sub_005CC8B0); /* 0x005CBB44: call 0x5cc8b0 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x18) = (uint8_t)(1); /* 0x005CBB49: mov byte ptr [esi + 0x18], 1 */
    ecx = MEM32(esp + 0xC8); /* 0x005CBB4D: mov ecx, dword ptr [esp + 0xc8] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CBB54: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CBB5B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CBB5C: pop edi */
    esi = POP32_VAL(esp); /* 0x005CBB5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CBB5E: pop ebx */
    ecx = MEM32(esp + 0xB0); /* 0x005CBB5F: mov ecx, dword ptr [esp + 0xb0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005CBB66: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CBB68: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CBB6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CBB6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CBB70: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CBB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CBB80u);

L_005CBB80:
    PUSH32(esp, ebp); /* 0x005CBB80: push ebp */
    ebp = esp; /* 0x005CBB81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005CBB83: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005CBB86: push esi */
    PUSH32(esp, 0x3EBu); /* 0x005CBB87: push 0x3eb */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CBB8C: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CBB8F: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x005CBB95: push 0x2c */
    esi = eax; /* 0x005CBB97: mov esi, eax */
    eax = ebp + (-0x2C); /* 0x005CBB99: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x005CBB9C: push 0 */
    PUSH32(esp, eax); /* 0x005CBB9E: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CBB9F: call 0x78083e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005CBBA4: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CBBA7: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = 7; /* 0x005CBBAA: mov dword ptr [ebp - 0x2c], 7 */
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x005CBBB1: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBBB9; /* 0x005CBBB5: jb 0x5cbbb9 */
L_005CBBB7:
    ecx = MEM32(ecx); /* 0x005CBBB7: mov ecx, dword ptr [ecx] */
L_005CBBB9:
    eax = MEM32(ebp + 0xC); /* 0x005CBBB9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005CBBBC: mov dword ptr [ebp - 0x24], eax */
    eax = ebp + (-0x2C); /* 0x005CBBBF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x005CBBC2: push eax */
    PUSH32(esp, 0); /* 0x005CBBC3: push 0 */
    PUSH32(esp, 0x1061u); /* 0x005CBBC5: push 0x1061 */
    PUSH32(esp, esi); /* 0x005CBBCA: push esi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x005CBBCB: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x28)) = 2; /* 0x005CBBCE: mov dword ptr [ebp - 0x28], 2 */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CBBD5: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x005CBBDB: pop esi */
    esp = ebp; /* 0x005CBBDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CBBDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CBBDF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CBBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CBBF0u);

L_005CBBF0:
    PUSH32(esp, ebp); /* 0x005CBBF0: push ebp */
    ebp = esp; /* 0x005CBBF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CBBF3: push -1 */
    PUSH32(esp, 0x007ADCB8u); /* 0x005CBBF5: push 0x7adcb8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CBBFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CBC00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x005CBC01: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CBC07: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CBC0C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CBC0E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005CBC11: push ebx */
    PUSH32(esp, esi); /* 0x005CBC12: push esi */
    PUSH32(esp, edi); /* 0x005CBC13: push edi */
    PUSH32(esp, eax); /* 0x005CBC14: push eax */
    eax = ebp + (-0xC); /* 0x005CBC15: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CBC18: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CBC1E: mov esi, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005CBC20: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x48)) = eax; /* 0x005CBC23: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x10); /* 0x005CBC26: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005CBC29: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0x14); /* 0x005CBC2C: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x44)) = eax; /* 0x005CBC2F: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0x18); /* 0x005CBC32: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x3EBu); /* 0x005CBC35: push 0x3eb */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CBC3A: push dword ptr [esi + 4] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005CBC3D: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x005CBC40: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x54)) = eax; /* 0x005CBC43: mov dword ptr [ebp - 0x54], eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CBC46: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005CBC4C: mov edi, eax */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CBC4E: mov dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBC55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0; /* 0x005CBC57: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 7; /* 0x005CBC5E: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CBC65: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CBC6C: mov word ptr [ebp - 0x28], ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x005CBC70: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0x3Cu); /* 0x005CBC73: push 0x3c */
    PUSH32(esp, eax); /* 0x005CBC75: push eax */
    eax = ebp + (-0x94); /* 0x005CBC76: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBC7C: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CBC7D: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x005CBC82: mov eax, dword ptr [esi + 0x14] */
    ecx = ebp + (-0x28); /* 0x005CBC85: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CBC88: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = eax; /* 0x005CBC8B: mov dword ptr [ebp - 0x90], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005CBC91: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x94)) = 1; /* 0x005CBC92: mov dword ptr [ebp - 0x94], 1 */
    MEM32(ebp + (-0x7C)) = 0x100u; /* 0x005CBC9C: mov dword ptr [ebp - 0x7c], 0x100 */
    MEM32(esi + 0x14) = eax; /* 0x005CBCA3: mov dword ptr [esi + 0x14], eax */
    PUSH32(esp, 0); /* 0x005CBCA6: push 0 */
    PUSH32(esp, 0x007F533Cu); /* 0x005CBCA8: push 0x7f533c */
    MEM32(ebp + (-0x8C)) = 0; /* 0x005CBCAD: mov dword ptr [ebp - 0x8c], 0 */
    RECOMP_CALL(sub_005C9540); /* 0x005CBCB7: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBCBC: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CBCC0: lea eax, [ebp - 0x28] */
    ebx = MEM32(0x7CC708); /* 0x005CBCC3: mov ebx, dword ptr [0x7cc708] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBCC9: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBCCD: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBCD0: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBCD6: push eax */
    PUSH32(esp, 0); /* 0x005CBCD7: push 0 */
    PUSH32(esp, 0x104Du); /* 0x005CBCD9: push 0x104d */
    PUSH32(esp, edi); /* 0x005CBCDE: push edi */
    RECOMP_ICALL(ebx); /* 0x005CBCDF: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBCE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC0)) = 0xF000u; /* 0x005CBCE3: mov dword ptr [ebp - 0xc0], 0xf000 */
    /* cmp MEM8(ebp + 0x8), LO8(eax) */ /* 0x005CBCED: cmp byte ptr [ebp + 8], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CBCF0: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005CBCF3: inc eax */
    _flag_k = FK_INC;
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x005CBCF4: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x005CBCF4: shl eax, 0xc */
    MEM32(ebp + (-0xC4)) = eax; /* 0x005CBCF7: mov dword ptr [ebp - 0xc4], eax */
    eax = ebp + (-0xD0); /* 0x005CBCFD: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005CBD03: push eax */
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x005CBD04: push dword ptr [ebp - 0x90] */
    PUSH32(esp, 0x102Bu); /* 0x005CBD0A: push 0x102b */
    PUSH32(esp, edi); /* 0x005CBD0F: push edi */
    RECOMP_ICALL(ebx); /* 0x005CBD10: call ebx */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x14); /* 0x005CBD12: mov edx, dword ptr [esi + 0x14] */
    ecx = ebp + (-0x40); /* 0x005CBD15: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x8C)) = 1; /* 0x005CBD18: mov dword ptr [ebp - 0x8c], 1 */
    RECOMP_CALL(sub_005CB1C0); /* 0x005CBD22: call 0x5cb1c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x005CBD27: mov dword ptr [ebp - 0x58], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CBD2A: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x28); /* 0x005CBD2E: lea ecx, [ebp - 0x28] */
    esi = MEM32(0x7CC694); /* 0x005CBD31: mov esi, dword ptr [0x7cc694] */
    /* cmp ecx, eax */ /* 0x005CBD37: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CBD69; /* 0x005CBD39: je 0x5cbd69 */
L_005CBD3B:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBD3B: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBD4C; /* 0x005CBD3F: jb 0x5cbd4c */
L_005CBD41:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CBD41: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CBD44: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x58)); /* 0x005CBD46: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBD49: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBD4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CBD4C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CBD4E: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(ecx)); /* 0x005CBD55: mov word ptr [ebp - 0x28], cx */
    ecx = ebp + (-0x28); /* 0x005CBD59: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005CBD5C: push eax */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CBD5D: mov dword ptr [ebp - 0x18], 0 */
    RECOMP_CALL(sub_005C8F60); /* 0x005CBD64: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
L_005CBD69:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CBD69: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x005CBD6D: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBD7B; /* 0x005CBD71: jb 0x5cbd7b */
L_005CBD73:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005CBD73: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x005CBD76: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBD78: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBD7B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBD7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x005CBD7D: mov dword ptr [ebp - 0x2c], 7 */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBD84: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x005CBD88: mov word ptr [ebp - 0x40], ax */
    eax = ebp + (-0x28); /* 0x005CBD8C: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBD8F: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBD93: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBD96: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBD9C: push eax */
    PUSH32(esp, 0); /* 0x005CBD9D: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CBD9F: push 0x104c */
    PUSH32(esp, edi); /* 0x005CBDA4: push edi */
    MEM32(ebp + (-0x30)) = 0; /* 0x005CBDA5: mov dword ptr [ebp - 0x30], 0 */
    RECOMP_ICALL(ebx); /* 0x005CBDAC: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x005CBDAE: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x28); /* 0x005CBDB1: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x8C)) = 2; /* 0x005CBDB4: mov dword ptr [ebp - 0x8c], 2 */
    /* cmp ecx, eax */ /* 0x005CBDBE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CBDCC; /* 0x005CBDC0: je 0x5cbdcc */
L_005CBDC2:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CBDC2: push -1 */
    PUSH32(esp, 0); /* 0x005CBDC4: push 0 */
    PUSH32(esp, eax); /* 0x005CBDC6: push eax */
    RECOMP_CALL(sub_005C9000); /* 0x005CBDC7: call 0x5c9000 */
    RECOMP_FLAGS_IN();
L_005CBDCC:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBDCC: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CBDD0: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBDD3: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBDD7: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBDDA: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBDE0: push eax */
    PUSH32(esp, 0); /* 0x005CBDE1: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CBDE3: push 0x104c */
    PUSH32(esp, edi); /* 0x005CBDE8: push edi */
    RECOMP_ICALL(ebx); /* 0x005CBDE9: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x005CBDEB: mov eax, dword ptr [ebp - 0x50] */
    ecx = ebp + (-0x28); /* 0x005CBDEE: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x8C)) = 3; /* 0x005CBDF1: mov dword ptr [ebp - 0x8c], 3 */
    /* cmp ecx, eax */ /* 0x005CBDFB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CBE09; /* 0x005CBDFD: je 0x5cbe09 */
L_005CBDFF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CBDFF: push -1 */
    PUSH32(esp, 0); /* 0x005CBE01: push 0 */
    PUSH32(esp, eax); /* 0x005CBE03: push eax */
    RECOMP_CALL(sub_005C9000); /* 0x005CBE04: call 0x5c9000 */
    RECOMP_FLAGS_IN();
L_005CBE09:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBE09: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CBE0D: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBE10: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBE14: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBE17: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBE1D: push eax */
    PUSH32(esp, 0); /* 0x005CBE1E: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CBE20: push 0x104c */
    PUSH32(esp, edi); /* 0x005CBE25: push edi */
    RECOMP_ICALL(ebx); /* 0x005CBE26: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x005CBE28: push dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x40); /* 0x005CBE2B: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x8C)) = 4; /* 0x005CBE2E: mov dword ptr [ebp - 0x8c], 4 */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005CBE38: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_005CB260); /* 0x005CBE3B: call 0x5cb260 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005CBE40: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x005CBE43: mov dword ptr [ebp - 0x44], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CBE46: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x28); /* 0x005CBE4A: lea ecx, [ebp - 0x28] */
    /* cmp ecx, eax */ /* 0x005CBE4D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CBE7F; /* 0x005CBE4F: je 0x5cbe7f */
L_005CBE51:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBE51: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBE62; /* 0x005CBE55: jb 0x5cbe62 */
L_005CBE57:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CBE57: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CBE5A: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x005CBE5C: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBE5F: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBE62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CBE62: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CBE64: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(ecx)); /* 0x005CBE6B: mov word ptr [ebp - 0x28], cx */
    ecx = ebp + (-0x28); /* 0x005CBE6F: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005CBE72: push eax */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CBE73: mov dword ptr [ebp - 0x18], 0 */
    RECOMP_CALL(sub_005C8F60); /* 0x005CBE7A: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
L_005CBE7F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CBE7F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x005CBE83: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBE91; /* 0x005CBE87: jb 0x5cbe91 */
L_005CBE89:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005CBE89: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x005CBE8C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBE8E: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBE91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBE91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x005CBE93: mov dword ptr [ebp - 0x2c], 7 */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBE9A: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x005CBE9E: mov word ptr [ebp - 0x40], ax */
    eax = ebp + (-0x28); /* 0x005CBEA2: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBEA5: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBEA9: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBEAC: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBEB2: push eax */
    PUSH32(esp, 0); /* 0x005CBEB3: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CBEB5: push 0x104c */
    PUSH32(esp, edi); /* 0x005CBEBA: push edi */
    MEM32(ebp + (-0x30)) = 0; /* 0x005CBEBB: mov dword ptr [ebp - 0x30], 0 */
    RECOMP_ICALL(ebx); /* 0x005CBEC2: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x54)); /* 0x005CBEC4: mov eax, dword ptr [ebp - 0x54] */
    ecx = ebp + (-0x28); /* 0x005CBEC7: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x8C)) = 5; /* 0x005CBECA: mov dword ptr [ebp - 0x8c], 5 */
    /* cmp ecx, eax */ /* 0x005CBED4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005CBEE2; /* 0x005CBED6: je 0x5cbee2 */
L_005CBED8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CBED8: push -1 */
    PUSH32(esp, 0); /* 0x005CBEDA: push 0 */
    PUSH32(esp, eax); /* 0x005CBEDC: push eax */
    RECOMP_CALL(sub_005C9000); /* 0x005CBEDD: call 0x5c9000 */
    RECOMP_FLAGS_IN();
L_005CBEE2:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBEE2: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CBEE6: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CBEE9: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x80)) = eax; /* 0x005CBEED: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x94); /* 0x005CBEF0: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x005CBEF6: push eax */
    PUSH32(esp, 0); /* 0x005CBEF7: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CBEF9: push 0x104c */
    PUSH32(esp, edi); /* 0x005CBEFE: push edi */
    RECOMP_ICALL(ebx); /* 0x005CBEFF: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CBF01: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CBF08: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CBF16; /* 0x005CBF0C: jb 0x5cbf16 */
L_005CBF0E:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CBF0E: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CBF11: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CBF13: add esp, 4 */
    _flag_k = FK_ADD;
L_005CBF16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CBF16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CBF18: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CBF1F: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CBF26: mov word ptr [ebp - 0x28], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CBF2A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CBF2D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CBF34: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CBF35: pop edi */
    esi = POP32_VAL(esp); /* 0x005CBF36: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CBF37: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CBF38: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CBF3B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CBF3D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CBF42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CBF44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x005CBF45: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_005CBF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CBF50u);

L_005CBF50:
    PUSH32(esp, 3); /* 0x005CBF50: push 3 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CBF52: push -1 */
    PUSH32(esp, 0x100Cu); /* 0x005CBF54: push 0x100c */
    PUSH32(esp, 0x3EBu); /* 0x005CBF59: push 0x3eb */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CBF5E: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CBF61: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBF67: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CBF68: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CBF6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CBF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CBF70u);

L_005CBF70:
    PUSH32(esp, ebp); /* 0x005CBF70: push ebp */
    ebp = esp; /* 0x005CBF71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x005CBF73: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x005CBF76: mov eax, ecx */
    MEM32(ebp + (-0x30)) = 2; /* 0x005CBF78: mov dword ptr [ebp - 0x30], 2 */
    ecx = ebp + (-0x40); /* 0x005CBF7F: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005CBF82: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ecx); /* 0x005CBF85: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CBF86: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x34)) = 2; /* 0x005CBF89: mov dword ptr [ebp - 0x34], 2 */
    PUSH32(esp, 0x102Bu); /* 0x005CBF90: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CBF95: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CBF9A: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CBF9D: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBFA3: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CBFA4: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x005CBFAA: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x30)) = 1; /* 0x005CBFAD: mov dword ptr [ebp - 0x30], 1 */
    PUSH32(esp, eax); /* 0x005CBFB4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CBFB5: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x005CBFB8: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x102Bu); /* 0x005CBFBB: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CBFC0: push 0x3eb */
    MEM32(ebp + (-0x34)) = 1; /* 0x005CBFC5: mov dword ptr [ebp - 0x34], 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CBFCC: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CBFCF: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CBFD5: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CBFD6: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CBFDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CBFDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005CBFDF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005CBFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CBFF0u);

L_005CBFF0:
    PUSH32(esp, ebp); /* 0x005CBFF0: push ebp */
    ebp = esp; /* 0x005CBFF1: mov ebp, esp */
    PUSH32(esp, 0xF000u); /* 0x005CBFF3: push 0xf000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005CBFF8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x102Cu); /* 0x005CBFFB: push 0x102c */
    PUSH32(esp, 0x3EBu); /* 0x005CC000: push 0x3eb */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CC005: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC008: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC00E: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CC00F: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x005CC015: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x005CC015: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005CC018: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x005CC019: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC01C: sete al */
    ebp = POP32_VAL(esp); /* 0x005CC01F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005CC020: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005CC030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CC030u);

L_005CC030:
    PUSH32(esp, ebp); /* 0x005CC030: push ebp */
    ebp = esp; /* 0x005CC031: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CC033: push -1 */
    PUSH32(esp, 0x007ADD0Du); /* 0x005CC035: push 0x7add0d */
    eax = MEM32(FS_BASE + (0)); /* 0x005CC03A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CC040: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x264u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x264u; /* 0x005CC041: sub esp, 0x264 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CC047: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CC04C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005CC04E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x005CC051: push esi */
    PUSH32(esp, edi); /* 0x005CC052: push edi */
    PUSH32(esp, eax); /* 0x005CC053: push eax */
    eax = ebp + (-0xC); /* 0x005CC054: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CC057: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005CC05D: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005CC05F: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x270); /* 0x005CC062: lea eax, [ebp - 0x270] */
    PUSH32(esp, 0x3Cu); /* 0x005CC068: push 0x3c */
    PUSH32(esp, 0); /* 0x005CC06A: push 0 */
    PUSH32(esp, eax); /* 0x005CC06C: push eax */
    MEM32(ebp + (-0x234)) = edi; /* 0x005CC06D: mov dword ptr [ebp - 0x234], edi */
    MEM32(ebp + (-0x230)) = 0; /* 0x005CC073: mov dword ptr [ebp - 0x230], 0 */
    RECOMP_CALL(sub_0078083E); /* 0x005CC07D: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC082: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x270)) = 1; /* 0x005CC085: mov dword ptr [ebp - 0x270], 1 */
    eax = ebp + (-0x214); /* 0x005CC08F: lea eax, [ebp - 0x214] */
    MEM32(ebp + (-0x258)) = 0x100u; /* 0x005CC095: mov dword ptr [ebp - 0x258], 0x100 */
    MEM32(ebp + (-0x25C)) = eax; /* 0x005CC09F: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0xC); /* 0x005CC0A5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x005CC0A8: mov dword ptr [ebp - 0x26c], eax */
    eax = MEM32(ebp + 0x10); /* 0x005CC0AE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x268)) = eax; /* 0x005CC0B1: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x270); /* 0x005CC0B7: lea eax, [ebp - 0x270] */
    PUSH32(esp, eax); /* 0x005CC0BD: push eax */
    PUSH32(esp, 0); /* 0x005CC0BE: push 0 */
    PUSH32(esp, 0x104Bu); /* 0x005CC0C0: push 0x104b */
    PUSH32(esp, 0x3EBu); /* 0x005CC0C5: push 0x3eb */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CC0CA: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC0CD: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC0D3: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CC0D4: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC0DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x21C)) = 0; /* 0x005CC0DC: mov dword ptr [ebp - 0x21c], 0 */
    MEM32(ebp + (-0x218)) = 0; /* 0x005CC0E6: mov dword ptr [ebp - 0x218], 0 */
    MEM32(ebp + (-0x218)) = 7; /* 0x005CC0F0: mov dword ptr [ebp - 0x218], 7 */
    MEM32(ebp + (-0x21C)) = 0; /* 0x005CC0FA: mov dword ptr [ebp - 0x21c], 0 */
    MEM16(ebp + (-0x22C)) = (uint16_t)(LO16(eax)); /* 0x005CC104: mov word ptr [ebp - 0x22c], ax */
    /* cmp MEM16(ebp + (-0x214)), LO16(eax) */ /* 0x005CC10B: cmp word ptr [ebp - 0x214], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x214))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CC118; /* 0x005CC112: jne 0x5cc118 */
L_005CC114:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CC114: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005CC130; /* 0x005CC116: jmp 0x5cc130 */
L_005CC118:
    ecx = ebp + (-0x214); /* 0x005CC118: lea ecx, [ebp - 0x214] */
    edx = ecx + 0x2; /* 0x005CC11E: lea edx, [ecx + 2] */
L_005CC121:
    SET_LO16(eax, MEM16(ecx)); /* 0x005CC121: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x005CC124: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x005CC127: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CC121; /* 0x005CC12A: jne 0x5cc121 */
L_005CC12C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x005CC12C: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005CC12E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
L_005CC130:
    PUSH32(esp, ecx); /* 0x005CC130: push ecx */
    eax = ebp + (-0x214); /* 0x005CC131: lea eax, [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x005CC137: push eax */
    ecx = ebp + (-0x22C); /* 0x005CC138: lea ecx, [ebp - 0x22c] */
    RECOMP_CALL(sub_005C9540); /* 0x005CC13E: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005CC143: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x214); /* 0x005CC14A: lea eax, [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x005CC150: push eax */
    ecx = edi; /* 0x005CC151: mov ecx, edi */
    RECOMP_CALL(sub_005C8920); /* 0x005CC153: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x230)) = 1; /* 0x005CC158: mov dword ptr [ebp - 0x230], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005CC162: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x218)), 8 */ /* 0x005CC166: cmp dword ptr [ebp - 0x218], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x218))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC17E; /* 0x005CC16D: jb 0x5cc17e */
L_005CC16F:
    PUSH32(esp, MEM32(ebp + (-0x22C))); /* 0x005CC16F: push dword ptr [ebp - 0x22c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005CC175: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC17B: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC17E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC17E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = 7; /* 0x005CC180: mov dword ptr [ebp - 0x218], 7 */
    MEM32(ebp + (-0x21C)) = 0; /* 0x005CC18A: mov dword ptr [ebp - 0x21c], 0 */
    MEM16(ebp + (-0x22C)) = (uint16_t)(LO16(eax)); /* 0x005CC194: mov word ptr [ebp - 0x22c], ax */
    eax = edi; /* 0x005CC19B: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CC19D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CC1A0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CC1A7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CC1A8: pop edi */
    esi = POP32_VAL(esp); /* 0x005CC1A9: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x005CC1AA: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CC1AD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CC1AF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CC1B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CC1B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005CC1B7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005CC1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CC1C0u);

L_005CC1C0:
    PUSH32(esp, ebp); /* 0x005CC1C0: push ebp */
    ebp = esp; /* 0x005CC1C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CC1C3: push -1 */
    PUSH32(esp, 0x007ADD8Cu); /* 0x005CC1C5: push 0x7add8c */
    eax = MEM32(FS_BASE + (0)); /* 0x005CC1CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CC1D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10Cu; /* 0x005CC1D1: sub esp, 0x10c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CC1D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CC1DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CC1DE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005CC1E1: push ebx */
    PUSH32(esp, esi); /* 0x005CC1E2: push esi */
    PUSH32(esp, edi); /* 0x005CC1E3: push edi */
    PUSH32(esp, eax); /* 0x005CC1E4: push eax */
    eax = ebp + (-0xC); /* 0x005CC1E5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CC1E8: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0xD4)) = ecx; /* 0x005CC1EE: mov dword ptr [ebp - 0xd4], ecx */
    eax = MEM32(ebp + 0x8); /* 0x005CC1F4: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0xC); /* 0x005CC1F7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xF000u); /* 0x005CC1FA: push 0xf000 */
    PUSH32(esp, eax); /* 0x005CC1FF: push eax */
    PUSH32(esp, 0x102Cu); /* 0x005CC200: push 0x102c */
    PUSH32(esp, 0x3EBu); /* 0x005CC205: push 0x3eb */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005CC20A: push dword ptr [ecx + 4] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x005CC20D: mov dword ptr [ebp - 0xd8], eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC213: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x005CC219: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, eax); /* 0x005CC21F: push eax */
    RECOMP_ICALL(edi); /* 0x005CC220: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC222: mov ecx, dword ptr [ebp - 0xd4] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x005CC228: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x005CC228: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005CC22B: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 2); /* 0x005CC22C: push 2 */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005CC22E: push dword ptr [ebp - 0xd8] */
    /* cmp eax, 1 */ /* 0x005CC234: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x005CC237: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x005CC23A: push eax */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC23B: sete bl */
    RECOMP_CALL(sub_005CC030); /* 0x005CC23E: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005CC243: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0xD0); /* 0x005CC24A: lea eax, [ebp - 0xd0] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC250: mov ecx, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 3); /* 0x005CC256: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005CC258: push dword ptr [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x005CC25E: push eax */
    RECOMP_CALL(sub_005CC030); /* 0x005CC25F: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CC264: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0xA0); /* 0x005CC268: lea eax, [ebp - 0xa0] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC26E: mov ecx, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 4); /* 0x005CC274: push 4 */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005CC276: push dword ptr [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x005CC27C: push eax */
    RECOMP_CALL(sub_005CC030); /* 0x005CC27D: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CC282: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x70); /* 0x005CC286: lea eax, [ebp - 0x70] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC289: mov ecx, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 5); /* 0x005CC28F: push 5 */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x005CC291: push dword ptr [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x005CC297: push eax */
    RECOMP_CALL(sub_005CC030); /* 0x005CC298: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CC29D: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC2A1: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0xF000u); /* 0x005CC2A7: push 0xf000 */
    PUSH32(esp, esi); /* 0x005CC2AC: push esi */
    PUSH32(esp, 0x102Cu); /* 0x005CC2AD: push 0x102c */
    PUSH32(esp, 0x3EBu); /* 0x005CC2B2: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC2B7: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC2BA: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC2C0: push eax */
    RECOMP_ICALL(edi); /* 0x005CC2C1: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC2C3: mov ecx, dword ptr [ebp - 0xd4] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x005CC2C9: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x005CC2C9: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005CC2CC: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 2); /* 0x005CC2CD: push 2 */
    /* cmp eax, 1 */ /* 0x005CC2CF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CC2D2: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x005CC2D5: push esi */
    PUSH32(esp, eax); /* 0x005CC2D6: push eax */
    SET_HI8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC2D7: sete bh */
    RECOMP_CALL(sub_005CC030); /* 0x005CC2DA: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005CC2DF: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x40); /* 0x005CC2E3: lea eax, [ebp - 0x40] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC2E6: mov ecx, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 3); /* 0x005CC2EC: push 3 */
    PUSH32(esp, esi); /* 0x005CC2EE: push esi */
    PUSH32(esp, eax); /* 0x005CC2EF: push eax */
    RECOMP_CALL(sub_005CC030); /* 0x005CC2F0: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005CC2F5: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x88); /* 0x005CC2F9: lea eax, [ebp - 0x88] */
    PUSH32(esp, 4); /* 0x005CC2FF: push 4 */
    PUSH32(esp, esi); /* 0x005CC301: push esi */
    PUSH32(esp, eax); /* 0x005CC302: push eax */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC303: mov ecx, dword ptr [ebp - 0xd4] */
    RECOMP_CALL(sub_005CC030); /* 0x005CC309: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005CC30E: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0xB8); /* 0x005CC312: lea eax, [ebp - 0xb8] */
    ecx = MEM32(ebp + (-0xD4)); /* 0x005CC318: mov ecx, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 5); /* 0x005CC31E: push 5 */
    PUSH32(esp, esi); /* 0x005CC320: push esi */
    PUSH32(esp, eax); /* 0x005CC321: push eax */
    RECOMP_CALL(sub_005CC030); /* 0x005CC322: call 0x5cc030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005CC327: mov byte ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC32B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x005CC32D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x104)) = 0xF000u; /* 0x005CC32F: mov dword ptr [ebp - 0x104], 0xf000 */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC339: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005CC33C: inc eax */
    _flag_k = FK_INC;
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x005CC33D: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x005CC33D: shl eax, 0xc */
    MEM32(ebp + (-0x108)) = eax; /* 0x005CC340: mov dword ptr [ebp - 0x108], eax */
    eax = ebp + (-0x114); /* 0x005CC346: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC34C: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC34D: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, esi); /* 0x005CC353: push esi */
    PUSH32(esp, 0x102Bu); /* 0x005CC354: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CC359: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC35E: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC361: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC367: push eax */
    RECOMP_ICALL(edi); /* 0x005CC368: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC36A: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC36C: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC372: push 0 */
    PUSH32(esp, eax); /* 0x005CC374: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC375: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC37A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC37D: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x005CC387: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x005CC38B: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC38E: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x58)); } /* 0x005CC398: cmovae eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC39C: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC3A2: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC3A8: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC3A9: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC3AF: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC3B1: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC3B6: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC3BB: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = esi; /* 0x005CC3BE: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x10C)) = 2; /* 0x005CC3C4: mov dword ptr [ebp - 0x10c], 2 */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC3CE: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC3D4: push eax */
    RECOMP_ICALL(edi); /* 0x005CC3D5: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC3D7: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC3D9: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC3DF: push 0 */
    PUSH32(esp, eax); /* 0x005CC3E1: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC3E2: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC3E7: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC3EA: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0xBC)), 8 */ /* 0x005CC3F4: cmp dword ptr [ebp - 0xbc], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0xD0); /* 0x005CC3FB: lea eax, [ebp - 0xd0] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC401: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0xD0)); } /* 0x005CC40B: cmovae eax, dword ptr [ebp - 0xd0] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC412: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC418: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC41E: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC41F: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC425: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC427: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC42C: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC431: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = esi; /* 0x005CC434: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x10C)) = 3; /* 0x005CC43A: mov dword ptr [ebp - 0x10c], 3 */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC444: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC44A: push eax */
    RECOMP_ICALL(edi); /* 0x005CC44B: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC44D: push 0x3c */
    PUSH32(esp, 0); /* 0x005CC44F: push 0 */
    eax = ebp + (-0x114); /* 0x005CC451: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC457: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC458: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC45D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC460: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0x8C)), 8 */ /* 0x005CC46A: cmp dword ptr [ebp - 0x8c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0xA0); /* 0x005CC471: lea eax, [ebp - 0xa0] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC477: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0xA0)); } /* 0x005CC481: cmovae eax, dword ptr [ebp - 0xa0] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC488: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC48E: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC494: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC495: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC49B: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC49D: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC4A2: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC4A7: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = esi; /* 0x005CC4AA: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x10C)) = 4; /* 0x005CC4B0: mov dword ptr [ebp - 0x10c], 4 */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x005CC4BA: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC4C0: push eax */
    RECOMP_ICALL(edi); /* 0x005CC4C1: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC4C3: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC4C5: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC4CB: push 0 */
    PUSH32(esp, eax); /* 0x005CC4CD: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC4CE: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC4D3: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x110)) = esi; /* 0x005CC4D6: mov dword ptr [ebp - 0x110], esi */
    /* cmp MEM32(ebp + (-0x5C)), 8 */ /* 0x005CC4DC: cmp dword ptr [ebp - 0x5c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x70); /* 0x005CC4E0: lea eax, [ebp - 0x70] */
    esi = MEM32(0x7CC8B0); /* 0x005CC4E3: mov esi, dword ptr [0x7cc8b0] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x70)); } /* 0x005CC4E9: cmovae eax, dword ptr [ebp - 0x70] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC4ED: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC4F3: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC4F9: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC4FA: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC500: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC502: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC507: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC50C: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC50F: mov dword ptr [ebp - 0x114], 1 */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC519: mov dword ptr [ebp - 0xfc], 0x100 */
    MEM32(ebp + (-0x10C)) = 5; /* 0x005CC523: mov dword ptr [ebp - 0x10c], 5 */
    RECOMP_ICALL(esi); /* 0x005CC52D: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC52F: push eax */
    RECOMP_ICALL(edi); /* 0x005CC530: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC532: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x104)) = 0xF000u; /* 0x005CC534: mov dword ptr [ebp - 0x104], 0xf000 */
    /* test HI8(ebx), HI8(ebx) */ /* 0x005CC53E: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0xD8)); /* 0x005CC540: mov ebx, dword ptr [ebp - 0xd8] */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC546: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005CC549: inc eax */
    _flag_k = FK_INC;
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x005CC54A: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x005CC54A: shl eax, 0xc */
    MEM32(ebp + (-0x108)) = eax; /* 0x005CC54D: mov dword ptr [ebp - 0x108], eax */
    eax = ebp + (-0x114); /* 0x005CC553: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC559: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC55A: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, ebx); /* 0x005CC560: push ebx */
    PUSH32(esp, 0x102Bu); /* 0x005CC561: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CC566: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC56B: push dword ptr [eax + 4] */
    RECOMP_ICALL(esi); /* 0x005CC56E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC570: push eax */
    RECOMP_ICALL(edi); /* 0x005CC571: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC573: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC575: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC57B: push 0 */
    PUSH32(esp, eax); /* 0x005CC57D: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC57E: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC583: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC586: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CC590: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x005CC594: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC597: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CC5A1: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC5A5: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC5AB: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC5B1: push eax */
    PUSH32(esp, 0); /* 0x005CC5B2: push 0 */
    MEM32(ebp + (-0x110)) = ebx; /* 0x005CC5B4: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + (-0x10C)) = 2; /* 0x005CC5BA: mov dword ptr [ebp - 0x10c], 2 */
    PUSH32(esp, 0x104Cu); /* 0x005CC5C4: push 0x104c */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC5C9: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0x3EBu); /* 0x005CC5CF: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC5D4: push dword ptr [eax + 4] */
    RECOMP_ICALL(esi); /* 0x005CC5D7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC5D9: push eax */
    RECOMP_ICALL(edi); /* 0x005CC5DA: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC5DC: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC5DE: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC5E4: push 0 */
    PUSH32(esp, eax); /* 0x005CC5E6: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC5E7: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC5EC: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC5EF: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x005CC5F9: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x40); /* 0x005CC5FD: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC600: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x40)); } /* 0x005CC60A: cmovae eax, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC60E: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC614: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC61A: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC61B: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC621: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC623: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC628: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC62D: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = ebx; /* 0x005CC630: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + (-0x10C)) = 3; /* 0x005CC636: mov dword ptr [ebp - 0x10c], 3 */
    RECOMP_ICALL(esi); /* 0x005CC640: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC642: push eax */
    RECOMP_ICALL(edi); /* 0x005CC643: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC645: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC647: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC64D: push 0 */
    PUSH32(esp, eax); /* 0x005CC64F: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC650: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC655: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC658: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0x74)), 8 */ /* 0x005CC662: cmp dword ptr [ebp - 0x74], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x88); /* 0x005CC666: lea eax, [ebp - 0x88] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC66C: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x88)); } /* 0x005CC676: cmovae eax, dword ptr [ebp - 0x88] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC67D: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC683: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC689: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC68A: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC690: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC692: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC697: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC69C: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = ebx; /* 0x005CC69F: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + (-0x10C)) = 4; /* 0x005CC6A5: mov dword ptr [ebp - 0x10c], 4 */
    RECOMP_ICALL(esi); /* 0x005CC6AF: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC6B1: push eax */
    RECOMP_ICALL(edi); /* 0x005CC6B2: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Cu); /* 0x005CC6B4: push 0x3c */
    eax = ebp + (-0x114); /* 0x005CC6B6: lea eax, [ebp - 0x114] */
    PUSH32(esp, 0); /* 0x005CC6BC: push 0 */
    PUSH32(esp, eax); /* 0x005CC6BE: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC6BF: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC6C4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = 1; /* 0x005CC6C7: mov dword ptr [ebp - 0x114], 1 */
    /* cmp MEM32(ebp + (-0xA4)), 8 */ /* 0x005CC6D1: cmp dword ptr [ebp - 0xa4], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0xB8); /* 0x005CC6D8: lea eax, [ebp - 0xb8] */
    MEM32(ebp + (-0xFC)) = 0x100u; /* 0x005CC6DE: mov dword ptr [ebp - 0xfc], 0x100 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0xB8)); } /* 0x005CC6E8: cmovae eax, dword ptr [ebp - 0xb8] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005CC6EF: mov dword ptr [ebp - 0x100], eax */
    eax = ebp + (-0x114); /* 0x005CC6F5: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x005CC6FB: push eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x005CC6FC: mov eax, dword ptr [ebp - 0xd4] */
    PUSH32(esp, 0); /* 0x005CC702: push 0 */
    PUSH32(esp, 0x104Cu); /* 0x005CC704: push 0x104c */
    PUSH32(esp, 0x3EBu); /* 0x005CC709: push 0x3eb */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005CC70E: push dword ptr [eax + 4] */
    MEM32(ebp + (-0x110)) = ebx; /* 0x005CC711: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + (-0x10C)) = 5; /* 0x005CC717: mov dword ptr [ebp - 0x10c], 5 */
    RECOMP_ICALL(esi); /* 0x005CC721: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC723: push eax */
    RECOMP_ICALL(edi); /* 0x005CC724: call edi */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005CC726: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(ebp + (-0xA4)), 8 */ /* 0x005CC72A: cmp dword ptr [ebp - 0xa4], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x005CC731: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC744; /* 0x005CC737: jb 0x5cc744 */
L_005CC739:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x005CC739: push dword ptr [ebp - 0xb8] */
    RECOMP_ICALL(esi); /* 0x005CC73F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC741: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC744:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA4)) = 7; /* 0x005CC746: mov dword ptr [ebp - 0xa4], 7 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x005CC750: mov dword ptr [ebp - 0xa8], 0 */
    MEM16(ebp + (-0xB8)) = (uint16_t)(LO16(eax)); /* 0x005CC75A: mov word ptr [ebp - 0xb8], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005CC761: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x74)), 8 */ /* 0x005CC765: cmp dword ptr [ebp - 0x74], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC776; /* 0x005CC769: jb 0x5cc776 */
L_005CC76B:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x005CC76B: push dword ptr [ebp - 0x88] */
    RECOMP_ICALL(esi); /* 0x005CC771: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC773: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC776:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC776: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x74)) = 7; /* 0x005CC778: mov dword ptr [ebp - 0x74], 7 */
    MEM32(ebp + (-0x78)) = 0; /* 0x005CC77F: mov dword ptr [ebp - 0x78], 0 */
    MEM16(ebp + (-0x88)) = (uint16_t)(LO16(eax)); /* 0x005CC786: mov word ptr [ebp - 0x88], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005CC78D: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x005CC791: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC79F; /* 0x005CC795: jb 0x5cc79f */
L_005CC797:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005CC797: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x005CC79A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC79C: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC79F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x005CC7A1: mov dword ptr [ebp - 0x2c], 7 */
    MEM32(ebp + (-0x30)) = 0; /* 0x005CC7A8: mov dword ptr [ebp - 0x30], 0 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x005CC7AF: mov word ptr [ebp - 0x40], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CC7B3: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CC7B7: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC7C5; /* 0x005CC7BB: jb 0x5cc7c5 */
L_005CC7BD:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CC7BD: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CC7C0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC7C2: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC7C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC7C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CC7C7: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CC7CE: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CC7D5: mov word ptr [ebp - 0x28], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CC7D9: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x5C)), 8 */ /* 0x005CC7DD: cmp dword ptr [ebp - 0x5c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC7EB; /* 0x005CC7E1: jb 0x5cc7eb */
L_005CC7E3:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x005CC7E3: push dword ptr [ebp - 0x70] */
    RECOMP_ICALL(esi); /* 0x005CC7E6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC7E8: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC7EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC7EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = 7; /* 0x005CC7ED: mov dword ptr [ebp - 0x5c], 7 */
    MEM32(ebp + (-0x60)) = 0; /* 0x005CC7F4: mov dword ptr [ebp - 0x60], 0 */
    MEM16(ebp + (-0x70)) = (uint16_t)(LO16(eax)); /* 0x005CC7FB: mov word ptr [ebp - 0x70], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CC7FF: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x8C)), 8 */ /* 0x005CC803: cmp dword ptr [ebp - 0x8c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC817; /* 0x005CC80A: jb 0x5cc817 */
L_005CC80C:
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x005CC80C: push dword ptr [ebp - 0xa0] */
    RECOMP_ICALL(esi); /* 0x005CC812: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC814: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC817:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC817: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8C)) = 7; /* 0x005CC819: mov dword ptr [ebp - 0x8c], 7 */
    MEM32(ebp + (-0x90)) = 0; /* 0x005CC823: mov dword ptr [ebp - 0x90], 0 */
    MEM16(ebp + (-0xA0)) = (uint16_t)(LO16(eax)); /* 0x005CC82D: mov word ptr [ebp - 0xa0], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x005CC834: mov byte ptr [ebp - 4], al */
    /* cmp MEM32(ebp + (-0xBC)), 8 */ /* 0x005CC837: cmp dword ptr [ebp - 0xbc], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC84B; /* 0x005CC83E: jb 0x5cc84b */
L_005CC840:
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x005CC840: push dword ptr [ebp - 0xd0] */
    RECOMP_ICALL(esi); /* 0x005CC846: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC848: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC84B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC84B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xBC)) = 7; /* 0x005CC84D: mov dword ptr [ebp - 0xbc], 7 */
    MEM32(ebp + (-0xC0)) = 0; /* 0x005CC857: mov dword ptr [ebp - 0xc0], 0 */
    MEM16(ebp + (-0xD0)) = (uint16_t)(LO16(eax)); /* 0x005CC861: mov word ptr [ebp - 0xd0], ax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CC868: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x005CC86F: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC87D; /* 0x005CC873: jb 0x5cc87d */
L_005CC875:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005CC875: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x005CC878: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CC87A: add esp, 4 */
    _flag_k = FK_ADD;
L_005CC87D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC87D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x005CC87F: mov dword ptr [ebp - 0x44], 7 */
    MEM32(ebp + (-0x48)) = 0; /* 0x005CC886: mov dword ptr [ebp - 0x48], 0 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x005CC88D: mov word ptr [ebp - 0x58], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CC891: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CC894: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CC89B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CC89C: pop edi */
    esi = POP32_VAL(esp); /* 0x005CC89D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CC89E: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CC89F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CC8A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CC8A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CC8A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CC8AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005CC8AC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005CC8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CC8B0u);

L_005CC8B0:
    PUSH32(esp, ebp); /* 0x005CC8B0: push ebp */
    ebp = esp; /* 0x005CC8B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CC8B3: push -1 */
    PUSH32(esp, 0x007ADE01u); /* 0x005CC8B5: push 0x7ade01 */
    eax = MEM32(FS_BASE + (0)); /* 0x005CC8BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005CC8C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF4u; /* 0x005CC8C1: sub esp, 0xf4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005CC8C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005CC8CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005CC8CE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005CC8D1: push ebx */
    PUSH32(esp, esi); /* 0x005CC8D2: push esi */
    PUSH32(esp, edi); /* 0x005CC8D3: push edi */
    PUSH32(esp, eax); /* 0x005CC8D4: push eax */
    eax = ebp + (-0xC); /* 0x005CC8D5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005CC8D8: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005CC8DE: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CC8E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0; /* 0x005CC8E2: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005CC8E9: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 7; /* 0x005CC8F0: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CC8F7: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CC8FE: mov word ptr [ebp - 0x28], ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x005CC902: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005CC905: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(0x7CC8B0); /* 0x005CC907: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, edx); /* 0x005CC90D: push edx */
    PUSH32(esp, edx); /* 0x005CC90E: push edx */
    PUSH32(esp, 0x1004u); /* 0x005CC90F: push 0x1004 */
    PUSH32(esp, 0x3EBu); /* 0x005CC914: push 0x3eb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CC919: push dword ptr [edi + 4] */
    MEM32(ebp + (-0xC0)) = edx; /* 0x005CC91C: mov dword ptr [ebp - 0xc0], edx */
    RECOMP_ICALL(ebx); /* 0x005CC922: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC924: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CC925: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005CC92B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC4)) = eax; /* 0x005CC92D: mov dword ptr [ebp - 0xc4], eax */
    /* test eax, eax */ /* 0x005CC933: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CC974; /* 0x005CC935: je 0x5cc974 */
L_005CC937:
    goto L_005CC940; /* 0x005CC937: jmp 0x5cc940 */
L_005CC940:
    PUSH32(esp, 0xF000u); /* 0x005CC940: push 0xf000 */
    PUSH32(esp, esi); /* 0x005CC945: push esi */
    PUSH32(esp, 0x102Cu); /* 0x005CC946: push 0x102c */
    PUSH32(esp, 0x3EBu); /* 0x005CC94B: push 0x3eb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CC950: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CC953: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC955: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x005CC956: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x005CC95C: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x005CC95C: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005CC95F: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x005CC960: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CC96B; /* 0x005CC963: jne 0x5cc96b */
L_005CC965:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) + 1; /* 0x005CC965: inc dword ptr [ebp - 0xc0] */
    _flag_k = FK_INC;
L_005CC96B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005CC96B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0xC4)) */ /* 0x005CC96C: cmp esi, dword ptr [ebp - 0xc4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005CC940; /* 0x005CC972: jb 0x5cc940 */
L_005CC974:
    PUSH32(esp, 0); /* 0x005CC974: push 0 */
    PUSH32(esp, 0); /* 0x005CC976: push 0 */
    PUSH32(esp, 0xF0u); /* 0x005CC978: push 0xf0 */
    PUSH32(esp, 0x3F7u); /* 0x005CC97D: push 0x3f7 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CC982: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CC985: call ebx */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC708); /* 0x005CC987: mov esi, dword ptr [0x7cc708] */
    PUSH32(esp, eax); /* 0x005CC98D: push eax */
    RECOMP_ICALL(esi); /* 0x005CC98E: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x005CC990: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005CC993: sete al */
    MEM8(ebp + (-0xB9)) = (uint8_t)(LO8(eax)); /* 0x005CC996: mov byte ptr [ebp - 0xb9], al */
    /* test LO8(eax), LO8(eax) */ /* 0x005CC99C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005CCA4A; /* 0x005CC99E: je 0x5cca4a */
L_005CC9A4:
    PUSH32(esp, 0x3Cu); /* 0x005CC9A4: push 0x3c */
    eax = ebp + (-0x100); /* 0x005CC9A6: lea eax, [ebp - 0x100] */
    PUSH32(esp, 0); /* 0x005CC9AC: push 0 */
    PUSH32(esp, eax); /* 0x005CC9AE: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x005CC9AF: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005CC9B4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x100)) = 8; /* 0x005CC9B7: mov dword ptr [ebp - 0x100], 8 */
    eax = ebp + (-0x100); /* 0x005CC9C1: lea eax, [ebp - 0x100] */
    MEM32(ebp + (-0xF0)) = 2; /* 0x005CC9C7: mov dword ptr [ebp - 0xf0], 2 */
    PUSH32(esp, eax); /* 0x005CC9D1: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CC9D2: push -1 */
    PUSH32(esp, 0x102Bu); /* 0x005CC9D4: push 0x102b */
    PUSH32(esp, 0x3EBu); /* 0x005CC9D9: push 0x3eb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CC9DE: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CC9E1: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CC9E3: push eax */
    RECOMP_ICALL(esi); /* 0x005CC9E4: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CC9E6: push 1 */
    PUSH32(esp, 0x3ECu); /* 0x005CC9E8: push 0x3ec */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CC9ED: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CC9F0: call ebx */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC884); /* 0x005CC9F2: mov esi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x005CC9F8: push eax */
    RECOMP_ICALL(esi); /* 0x005CC9F9: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CC9FB: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x005CC9FD: push 0x3e8 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA02: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA05: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA07: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA08: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CCA0A: push 0 */
    PUSH32(esp, 0x3E9u); /* 0x005CCA0C: push 0x3e9 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA11: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA14: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA16: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA17: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CCA19: push 0 */
    PUSH32(esp, 0x3EAu); /* 0x005CCA1B: push 0x3ea */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA20: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA23: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA25: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA26: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CCA28: push 0 */
    PUSH32(esp, 0x3F3u); /* 0x005CCA2A: push 0x3f3 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA2F: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA32: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA34: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA35: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CCA37: push 0 */
    PUSH32(esp, 0x3FBu); /* 0x005CCA39: push 0x3fb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA3E: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA41: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA43: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA44: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005CCA46: push 0 */
    goto L_005CCAAC; /* 0x005CCA48: jmp 0x5ccaac */
L_005CCA4A:
    PUSH32(esp, 1); /* 0x005CCA4A: push 1 */
    PUSH32(esp, 0x3ECu); /* 0x005CCA4C: push 0x3ec */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA51: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA54: call ebx */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC884); /* 0x005CCA56: mov esi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x005CCA5C: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA5D: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCA5F: push 1 */
    PUSH32(esp, 0x3E8u); /* 0x005CCA61: push 0x3e8 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA66: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA69: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA6B: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA6C: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCA6E: push 1 */
    PUSH32(esp, 0x3E9u); /* 0x005CCA70: push 0x3e9 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA75: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA78: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA7A: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA7B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCA7D: push 1 */
    PUSH32(esp, 0x3EAu); /* 0x005CCA7F: push 0x3ea */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA84: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA87: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA89: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA8A: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCA8C: push 1 */
    PUSH32(esp, 0x3F3u); /* 0x005CCA8E: push 0x3f3 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCA93: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCA96: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCA98: push eax */
    RECOMP_ICALL(esi); /* 0x005CCA99: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCA9B: push 1 */
    PUSH32(esp, 0x3FBu); /* 0x005CCA9D: push 0x3fb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCAA2: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCAA5: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCAA7: push eax */
    RECOMP_ICALL(esi); /* 0x005CCAA8: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x005CCAAA: push 1 */
L_005CCAAC:
    PUSH32(esp, 0x3EBu); /* 0x005CCAAC: push 0x3eb */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCAB1: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x005CCAB4: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCAB6: push eax */
    RECOMP_ICALL(esi); /* 0x005CCAB7: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC0)); /* 0x005CCAB9: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CCABF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0xB9)), LO8(ecx) */ /* 0x005CCAC1: cmp byte ptr [ebp - 0xb9], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xB9))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x005CCAC7: cmovne eax, ecx */
    SET_LO8(ecx, 0xFu); /* 0x005CCACA: mov cl, 0xf */
    MEM32(ebp + (-0xC0)) = eax; /* 0x005CCACC: mov dword ptr [ebp - 0xc0], eax */
    RECOMP_CALL(sub_005C5E10); /* 0x005CCAD2: call 0x5c5e10 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005CCAD7: mov edx, eax */
    /* cmp MEM16(edx), 0 */ /* 0x005CCAD9: cmp word ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CCAE3; /* 0x005CCADD: jne 0x5ccae3 */
L_005CCADF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005CCADF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005CCAFF; /* 0x005CCAE1: jmp 0x5ccaff */
L_005CCAE3:
    ecx = edx; /* 0x005CCAE3: mov ecx, edx */
    esi = ecx + 0x2; /* 0x005CCAE5: lea esi, [ecx + 2] */
    goto L_005CCAF0; /* 0x005CCAE8: jmp 0x5ccaf0 */
L_005CCAF0:
    SET_LO16(eax, MEM16(ecx)); /* 0x005CCAF0: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x005CCAF3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x005CCAF6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005CCAF0; /* 0x005CCAF9: jne 0x5ccaf0 */
L_005CCAFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005CCAFB: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005CCAFD: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
L_005CCAFF:
    PUSH32(esp, ecx); /* 0x005CCAFF: push ecx */
    PUSH32(esp, edx); /* 0x005CCB00: push edx */
    ecx = ebp + (-0x28); /* 0x005CCB01: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_005C9540); /* 0x005CCB04: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC4)); /* 0x005CCB09: mov edx, dword ptr [ebp - 0xc4] */
    ecx = ebp + (-0x88); /* 0x005CCB0F: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_005CB1C0); /* 0x005CCB15: call 0x5cb1c0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005CCB1A: mov esi, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CCB1C: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0xA0); /* 0x005CCB20: lea ecx, [ebp - 0xa0] */
    edx = MEM32(ebp + (-0xC0)); /* 0x005CCB26: mov edx, dword ptr [ebp - 0xc0] */
    RECOMP_CALL(sub_005CB1C0); /* 0x005CCB2C: call 0x5cb1c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CCB31: mov byte ptr [ebp - 4], 2 */
    edx = 0x007F5420u; /* 0x005CCB35: mov edx, 0x7f5420 */
    PUSH32(esp, eax); /* 0x005CCB3A: push eax */
    ecx = ebp + (-0xB8); /* 0x005CCB3B: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_005CA3A0); /* 0x005CCB41: call 0x5ca3a0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CCB46: mov byte ptr [ebp - 4], 3 */
    edx = eax; /* 0x005CCB4A: mov edx, eax */
    PUSH32(esp, 0x007F5428u); /* 0x005CCB4C: push 0x7f5428 */
    ecx = ebp + (-0x58); /* 0x005CCB51: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_005CA440); /* 0x005CCB54: call 0x5ca440 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005CCB59: mov byte ptr [ebp - 4], 4 */
    edx = eax; /* 0x005CCB5D: mov edx, eax */
    PUSH32(esp, esi); /* 0x005CCB5F: push esi */
    ecx = ebp + (-0x40); /* 0x005CCB60: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_005CA4F0); /* 0x005CCB63: call 0x5ca4f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005CCB68: mov byte ptr [ebp - 4], 5 */
    edx = eax; /* 0x005CCB6C: mov edx, eax */
    PUSH32(esp, 0x007F537Cu); /* 0x005CCB6E: push 0x7f537c */
    ecx = ebp + (-0x70); /* 0x005CCB73: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_005CA440); /* 0x005CCB76: call 0x5ca440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005CCB7B: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005CCB7E: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + (-0x28); /* 0x005CCB82: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005CCB85: push -1 */
    PUSH32(esp, 0); /* 0x005CCB87: push 0 */
    PUSH32(esp, eax); /* 0x005CCB89: push eax */
    RECOMP_CALL(sub_005C9B80); /* 0x005CCB8A: call 0x5c9b80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005CCB8F: mov byte ptr [ebp - 4], 5 */
    /* cmp MEM32(ebp + (-0x5C)), 8 */ /* 0x005CCB93: cmp dword ptr [ebp - 0x5c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x005CCB97: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCBA7; /* 0x005CCB9D: jb 0x5ccba7 */
L_005CCB9F:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x005CCB9F: push dword ptr [ebp - 0x70] */
    RECOMP_ICALL(esi); /* 0x005CCBA2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCBA4: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCBA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCBA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = 7; /* 0x005CCBA9: mov dword ptr [ebp - 0x5c], 7 */
    MEM32(ebp + (-0x60)) = 0; /* 0x005CCBB0: mov dword ptr [ebp - 0x60], 0 */
    MEM16(ebp + (-0x70)) = (uint16_t)(LO16(eax)); /* 0x005CCBB7: mov word ptr [ebp - 0x70], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005CCBBB: mov byte ptr [ebp - 4], 4 */
    /* cmp MEM32(ebp + (-0x2C)), 8 */ /* 0x005CCBBF: cmp dword ptr [ebp - 0x2c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCBCD; /* 0x005CCBC3: jb 0x5ccbcd */
L_005CCBC5:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x005CCBC5: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x005CCBC8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCBCA: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCBCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCBCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 7; /* 0x005CCBCF: mov dword ptr [ebp - 0x2c], 7 */
    MEM32(ebp + (-0x30)) = 0; /* 0x005CCBD6: mov dword ptr [ebp - 0x30], 0 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x005CCBDD: mov word ptr [ebp - 0x40], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005CCBE1: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x005CCBE5: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCBF3; /* 0x005CCBE9: jb 0x5ccbf3 */
L_005CCBEB:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x005CCBEB: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x005CCBEE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCBF0: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCBF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCBF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x005CCBF5: mov dword ptr [ebp - 0x44], 7 */
    MEM32(ebp + (-0x48)) = 0; /* 0x005CCBFC: mov dword ptr [ebp - 0x48], 0 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x005CCC03: mov word ptr [ebp - 0x58], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005CCC07: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0xA4)), 8 */ /* 0x005CCC0B: cmp dword ptr [ebp - 0xa4], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCC1F; /* 0x005CCC12: jb 0x5ccc1f */
L_005CCC14:
    PUSH32(esp, MEM32(ebp + (-0xB8))); /* 0x005CCC14: push dword ptr [ebp - 0xb8] */
    RECOMP_ICALL(esi); /* 0x005CCC1A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCC1C: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCC1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCC1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA4)) = 7; /* 0x005CCC21: mov dword ptr [ebp - 0xa4], 7 */
    MEM32(ebp + (-0xA8)) = 0; /* 0x005CCC2B: mov dword ptr [ebp - 0xa8], 0 */
    MEM16(ebp + (-0xB8)) = (uint16_t)(LO16(eax)); /* 0x005CCC35: mov word ptr [ebp - 0xb8], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005CCC3C: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x8C)), 8 */ /* 0x005CCC40: cmp dword ptr [ebp - 0x8c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCC54; /* 0x005CCC47: jb 0x5ccc54 */
L_005CCC49:
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x005CCC49: push dword ptr [ebp - 0xa0] */
    RECOMP_ICALL(esi); /* 0x005CCC4F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCC51: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCC54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCC54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8C)) = 7; /* 0x005CCC56: mov dword ptr [ebp - 0x8c], 7 */
    MEM32(ebp + (-0x90)) = 0; /* 0x005CCC60: mov dword ptr [ebp - 0x90], 0 */
    MEM16(ebp + (-0xA0)) = (uint16_t)(LO16(eax)); /* 0x005CCC6A: mov word ptr [ebp - 0xa0], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x005CCC71: mov byte ptr [ebp - 4], al */
    /* cmp MEM32(ebp + (-0x74)), 8 */ /* 0x005CCC74: cmp dword ptr [ebp - 0x74], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCC85; /* 0x005CCC78: jb 0x5ccc85 */
L_005CCC7A:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x005CCC7A: push dword ptr [ebp - 0x88] */
    RECOMP_ICALL(esi); /* 0x005CCC80: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCC82: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCC85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCC85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x74)) = 7; /* 0x005CCC87: mov dword ptr [ebp - 0x74], 7 */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CCC8E: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebp + (-0x88)) = (uint16_t)(LO16(eax)); /* 0x005CCC92: mov word ptr [ebp - 0x88], ax */
    eax = ebp + (-0x28); /* 0x005CCC99: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x005CCC9C: cmovae eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x005CCCA0: push eax */
    PUSH32(esp, 0x3F5u); /* 0x005CCCA1: push 0x3f5 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005CCCA6: push dword ptr [edi + 4] */
    MEM32(ebp + (-0x78)) = 0; /* 0x005CCCA9: mov dword ptr [ebp - 0x78], 0 */
    RECOMP_ICALL(ebx); /* 0x005CCCB0: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005CCCB2: push eax */
    RECOMP_ICALL(MEM32(0x7CC6FC)); /* 0x005CCCB3: call dword ptr [0x7cc6fc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005CCCB9: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x005CCCC0: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005CCCCE; /* 0x005CCCC4: jb 0x5cccce */
L_005CCCC6:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005CCCC6: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x005CCCC9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005CCCCB: add esp, 4 */
    _flag_k = FK_ADD;
L_005CCCCE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005CCCCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x005CCCD0: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005CCCD7: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x005CCCDE: mov word ptr [ebp - 0x28], ax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005CCCE2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005CCCE5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005CCCEC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005CCCED: pop edi */
    esi = POP32_VAL(esp); /* 0x005CCCEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005CCCEF: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005CCCF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005CCCF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005CCCF5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005CCCFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005CCCFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CCCFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_005CCD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005CCD00u);

L_005CCD00:
    PUSH32(esp, esi); /* 0x005CCD00: push esi */
    esi = ecx; /* 0x005CCD01: mov esi, ecx */
    /* cmp MEM8(esi + 0x19), 0 */ /* 0x005CCD03: cmp byte ptr [esi + 0x19], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005CCD17; /* 0x005CCD07: jne 0x5ccd17 */
L_005CCD09:
    PUSH32(esp, 0x007F53D8u); /* 0x005CCD09: push 0x7f53d8 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005CCD0E: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC6FC)); /* 0x005CCD11: call dword ptr [0x7cc6fc] */
    RECOMP_FLAGS_IN();
L_005CCD17:
    MEM8(esi + 0x19) = (uint8_t)(1); /* 0x005CCD17: mov byte ptr [esi + 0x19], 1 */
    esi = POP32_VAL(esp); /* 0x005CCD1B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005CCD1C: ret  */
    RECOMP_REGS_OUT();
}
