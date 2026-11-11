#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1504E1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E1B0u);

L_1504E1B0:
    edi = edi; /* 0x1504E1B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E1B2: push ebp */
    ebp = esp; /* 0x1504E1B3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504E1B5: push 1 */
    PUSH32(esp, 0); /* 0x1504E1B7: push 0 */
    PUSH32(esp, 0); /* 0x1504E1B9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504E1BB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504C6A0); /* 0x1504E1BE: call 0x1504c6a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504E1C3: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504E1C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E1C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E1D0u);

L_1504E1D0:
    edi = edi; /* 0x1504E1D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E1D2: push ebp */
    ebp = esp; /* 0x1504E1D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504E1D5: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1504E1D6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1504E1D9: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x1504E1DA: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504E1DF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504E1E2: push eax */
    PUSH32(esp, 0x40u); /* 0x1504E1E3: push 0x40 */
    PUSH32(esp, 0x302u); /* 0x1504E1E5: push 0x302 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504E1EA: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x1504E1ED: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504E1F0: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, eax); /* 0x1504E1F3: push eax */
    RECOMP_CALL(sub_1504EDA0); /* 0x1504E1F4: call 0x1504eda0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E1F9: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504E1FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x4)); } /* 0x1504E1FE: cmove esi, dword ptr [ebp - 4] */
    eax = esi; /* 0x1504E202: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504E204: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504E205: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E206: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E210u);

L_1504E210:
    edi = edi; /* 0x1504E210: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E212: push ebp */
    ebp = esp; /* 0x1504E213: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1504E215: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504E216: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504E219: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E23B; /* 0x1504E21B: jne 0x1504e23b */
L_1504E21D:
    RECOMP_CALL(sub_15036430); /* 0x1504E21D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504E222: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1504E224: push ecx */
    PUSH32(esp, ecx); /* 0x1504E225: push ecx */
    PUSH32(esp, ecx); /* 0x1504E226: push ecx */
    PUSH32(esp, ecx); /* 0x1504E227: push ecx */
    PUSH32(esp, ecx); /* 0x1504E228: push ecx */
    MEM32(eax) = 0x16u; /* 0x1504E229: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504E22F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E234: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E237: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504E26A; /* 0x1504E239: jmp 0x1504e26a */
L_1504E23B:
    edx = esi; /* 0x1504E23B: mov edx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504E23D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1504E23F: push edi */
    edi = edx + 0x2; /* 0x1504E240: lea edi, [edx + 2] */
L_1504E243:
    SET_LO16(eax, MEM16(edx)); /* 0x1504E243: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1504E246: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1504E249: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E243; /* 0x1504E24C: jne 0x1504e243 */
L_1504E24E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1504E24E: sub edx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1504E250: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    PUSH32(esp, ecx); /* 0x1504E252: push ecx */
    ecx = edx + 0x1; /* 0x1504E253: lea ecx, [edx + 1] */
    PUSH32(esp, ecx); /* 0x1504E256: push ecx */
    PUSH32(esp, esi); /* 0x1504E257: push esi */
    RECOMP_CALL(sub_1504E29D); /* 0x1504E258: call 0x1504e29d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E25D: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504E260: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1504E262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x1504E264: cmovne esi, ecx */
    eax = esi; /* 0x1504E267: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x1504E269: pop edi */
L_1504E26A:
    esi = POP32_VAL(esp); /* 0x1504E26A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504E26B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E26C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E280u);

L_1504E280:
    edi = edi; /* 0x1504E280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E282: push ebp */
    ebp = esp; /* 0x1504E283: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504E285: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504E287: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504E28A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504E29D); /* 0x1504E28D: call 0x1504e29d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E292: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504E295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E296: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E29D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E29Du);

L_1504E29D:
    edi = edi; /* 0x1504E29D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E29F: push ebp */
    ebp = esp; /* 0x1504E2A0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504E2A2: push ecx */
    PUSH32(esp, ecx); /* 0x1504E2A3: push ecx */
    PUSH32(esp, ebx); /* 0x1504E2A4: push ebx */
    PUSH32(esp, esi); /* 0x1504E2A5: push esi */
    PUSH32(esp, edi); /* 0x1504E2A6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1504E2A7: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1504E2AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E3AF; /* 0x1504E2AC: je 0x1504e3af */
L_1504E2B2:
    esi = MEM32(ebp + 0xC); /* 0x1504E2B2: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1504E2B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E3AF; /* 0x1504E2B7: je 0x1504e3af */
L_1504E2BD:
    PUSH32(esp, esi); /* 0x1504E2BD: push esi */
    PUSH32(esp, edi); /* 0x1504E2BE: push edi */
    RECOMP_CALL(sub_1508F6A0); /* 0x1504E2BF: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1504E2C4: mov ebx, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1504E2C6: mov dword ptr [ebp - 4], ebx */
    ecx = POP32_VAL(esp); /* 0x1504E2C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504E2CA: pop ecx */
    /* cmp ebx, esi */ /* 0x1504E2CB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E3A4; /* 0x1504E2CD: jae 0x1504e3a4 */
L_1504E2D3:
    RECOMP_CALL(sub_15068630); /* 0x1504E2D3: call 0x15068630 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1504E2D8: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x4)), 6 */ /* 0x1504E2D9: cmp dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = edi + ebx * 2; /* 0x1504E2DD: lea ebx, [edi + ebx*2] */
    if (CMP_B(_flag_a, _flag_b)) goto L_1504E3A4; /* 0x1504E2E0: jb 0x1504e3a4 */
L_1504E2E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504E2E6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1504E2E8: mov ecx, esi */
    goto L_1504E316; /* 0x1504E2EA: jmp 0x1504e316 */
L_1504E2EC:
    /* cmp MEM16(ebx), LO16(edx) */ /* 0x1504E2EC: cmp word ptr [ebx], dx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E393; /* 0x1504E2EF: jne 0x1504e393 */
L_1504E2F5:
    /* cmp ecx, 5 */ /* 0x1504E2F5: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E31D; /* 0x1504E2F8: jae 0x1504e31d */
L_1504E2FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504E2FA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x1504E2FC: mov dword ptr [ebp - 4], 0xa */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x4)); /* 0x1504E303: div dword ptr [ebp - 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504E306: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504E307: mov dword ptr [ebp - 4], eax */
    eax = edx + 0x30; /* 0x1504E30A: lea eax, [edx + 0x30] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1504E30D: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x1504E310: sub ebx, 2 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x1504E313: mov eax, dword ptr [ebp - 4] */
L_1504E316:
    PUSH32(esp, 0x58u); /* 0x1504E316: push 0x58 */
    edx = POP32_VAL(esp); /* 0x1504E318: pop edx */
    /* cmp ebx, edi */ /* 0x1504E319: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E2EC; /* 0x1504E31B: jae 0x1504e2ec */
L_1504E31D:
    /* cmp MEM16(ebx), LO16(edx) */ /* 0x1504E31D: cmp word ptr [ebx], dx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E393; /* 0x1504E320: jne 0x1504e393 */
L_1504E322:
    /* cmp ecx, 5 */ /* 0x1504E322: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504E393; /* 0x1504E325: jb 0x1504e393 */
L_1504E327:
    PUSH32(esp, 0x61u); /* 0x1504E327: push 0x61 */
    eax = POP32_VAL(esp); /* 0x1504E329: pop eax */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1504E32A: mov word ptr [ebx], ax */
    MEM32(ebp + (-0x4)) = 0x62u; /* 0x1504E32D: mov dword ptr [ebp - 4], 0x62 */
    RECOMP_CALL(sub_15036430); /* 0x1504E334: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1504E339: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1504E33B: mov dword ptr [ebp - 8], eax */
L_1504E33E:
    RECOMP_CALL(sub_15036430); /* 0x1504E33E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1504E343: push esi */
    PUSH32(esp, edi); /* 0x1504E344: push edi */
    MEM32(eax) = esi; /* 0x1504E345: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15037B60); /* 0x1504E347: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504E34C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504E34D: pop ecx */
    /* test eax, eax */ /* 0x1504E34E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E35C; /* 0x1504E350: je 0x1504e35c */
L_1504E352:
    RECOMP_CALL(sub_15036430); /* 0x1504E352: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x1504E357: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E36D; /* 0x1504E35A: jne 0x1504e36d */
L_1504E35C:
    eax = MEM32(ebp + (-0x4)); /* 0x1504E35C: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, 0x7Bu */ /* 0x1504E35F: cmp eax, 0x7b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E37B; /* 0x1504E362: je 0x1504e37b */
L_1504E364:
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1504E364: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504E367: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504E368: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_1504E33E; /* 0x1504E36B: jmp 0x1504e33e */
L_1504E36D:
    RECOMP_CALL(sub_15036430); /* 0x1504E36D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1504E372: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1504E375: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E377: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504E3CA; /* 0x1504E379: jmp 0x1504e3ca */
L_1504E37B:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1504E37B: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E385; /* 0x1504E37E: je 0x1504e385 */
L_1504E380:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E380: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1504E382: mov word ptr [edi], ax */
L_1504E385:
    RECOMP_CALL(sub_15036430); /* 0x1504E385: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x1504E38A: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x1504E38C: pop ecx */
    MEM32(eax) = ecx; /* 0x1504E38D: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1504E38F: mov eax, ecx */
    goto L_1504E3CA; /* 0x1504E391: jmp 0x1504e3ca */
L_1504E393:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1504E393: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E39D; /* 0x1504E396: je 0x1504e39d */
L_1504E398:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E398: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1504E39A: mov word ptr [edi], ax */
L_1504E39D:
    RECOMP_CALL(sub_15036430); /* 0x1504E39D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1504E3B6; /* 0x1504E3A2: jmp 0x1504e3b6 */
L_1504E3A4:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1504E3A4: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E3AF; /* 0x1504E3A8: je 0x1504e3af */
L_1504E3AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E3AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1504E3AC: mov word ptr [edi], ax */
L_1504E3AF:
    RECOMP_CALL(sub_15036430); /* 0x1504E3AF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504E3B4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504E3B6:
    PUSH32(esp, 0x16u); /* 0x1504E3B6: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1504E3B8: pop edi */
    PUSH32(esp, esi); /* 0x1504E3B9: push esi */
    PUSH32(esp, esi); /* 0x1504E3BA: push esi */
    PUSH32(esp, esi); /* 0x1504E3BB: push esi */
    PUSH32(esp, esi); /* 0x1504E3BC: push esi */
    PUSH32(esp, esi); /* 0x1504E3BD: push esi */
    MEM32(eax) = edi; /* 0x1504E3BE: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1504E3C0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1504E3C5: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E3C7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504E3CA:
    edi = POP32_VAL(esp); /* 0x1504E3CA: pop edi */
    esi = POP32_VAL(esp); /* 0x1504E3CB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504E3CC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504E3CD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E3CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E3D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E3D5u);

L_1504E3D5:
    edi = edi; /* 0x1504E3D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E3D7: push ebp */
    ebp = esp; /* 0x1504E3D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1504E3DA: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504E3DD: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504E3DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = 0xCu; /* 0x1504E3E0: mov dword ptr [ebp - 0x38], 0xc */
    /* test MEM32(ebp + 0x14), 0x80u */ /* 0x1504E3E7: test dword ptr [ebp + 0x14], 0x80 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x80u);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504E3EE: push esi */
    PUSH32(esp, ebx); /* 0x1504E3EF: push ebx */
    eax = POP32_VAL(esp); /* 0x1504E3F0: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504E3F1: sete al */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1504E3F4: mov dword ptr [ebp - 0x28], ebx */
    /* test MEM32(ebp + 0x14), 0x80u */ /* 0x1504E3F7: test dword ptr [ebp + 0x14], 0x80 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x80u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = eax; /* 0x1504E3FE: mov dword ptr [ebp - 0x30], eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504E401: sete al */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1504E404: mov byte ptr [ebp - 2], bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1504E407: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM32(ebp + (-0x34)) = ebx; /* 0x1504E409: mov dword ptr [ebp - 0x34], ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    SET_LO8(eax, LO8(eax) & 0x10u); /* 0x1504E40C: and al, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504E40E: mov byte ptr [ebp - 1], al */
    eax = ebp + (-0x28); /* 0x1504E411: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1504E414: push eax */
    RECOMP_CALL(sub_1504B7B0); /* 0x1504E415: call 0x1504b7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504E41A: pop ecx */
    /* test eax, eax */ /* 0x1504E41B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E42C; /* 0x1504E41D: je 0x1504e42c */
L_1504E41F:
    PUSH32(esp, ebx); /* 0x1504E41F: push ebx */
    PUSH32(esp, ebx); /* 0x1504E420: push ebx */
    PUSH32(esp, ebx); /* 0x1504E421: push ebx */
    PUSH32(esp, ebx); /* 0x1504E422: push ebx */
    PUSH32(esp, ebx); /* 0x1504E423: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504E424: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E429: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504E42C:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1504E42C: mov al, byte ptr [ebp - 1] */
    esi = 0x8000u; /* 0x1504E42F: mov esi, 0x8000 */
    ecx = MEM32(ebp + 0x14); /* 0x1504E434: mov ecx, dword ptr [ebp + 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504E437: mov byte ptr [ebp - 1], al */
    /* test esi, ecx */ /* 0x1504E43A: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E456; /* 0x1504E43C: jne 0x1504e456 */
L_1504E43E:
    /* test ecx, 0x00074000u */ /* 0x1504E43E: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E44E; /* 0x1504E444: jne 0x1504e44e */
L_1504E446:
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504E446: mov byte ptr [ebp - 1], al */
    /* cmp MEM32(ebp + (-0x28)), esi */ /* 0x1504E449: cmp dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E456; /* 0x1504E44C: je 0x1504e456 */
L_1504E44E:
    SET_LO8(edx, LO8(eax)); /* 0x1504E44E: mov dl, al */
    _flag_a = (uint32_t)((LO8(edx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x80u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x80u); /* 0x1504E450: or dl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1504E453: mov byte ptr [ebp - 1], dl */
L_1504E456:
    eax = ecx; /* 0x1504E456: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1504E458: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1504E45B: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E4BF; /* 0x1504E45D: je 0x1504e4bf */
L_1504E45F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E45F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E49B; /* 0x1504E462: je 0x1504e49b */
L_1504E464:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E464: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E494; /* 0x1504E467: je 0x1504e494 */
L_1504E469:
    RECOMP_CALL(sub_150363E0); /* 0x1504E469: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504E46E: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1504E470: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1504E473: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504E476: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504E47B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504E47D: pop esi */
    PUSH32(esp, ebx); /* 0x1504E47E: push ebx */
    PUSH32(esp, ebx); /* 0x1504E47F: push ebx */
    PUSH32(esp, ebx); /* 0x1504E480: push ebx */
    PUSH32(esp, ebx); /* 0x1504E481: push ebx */
    PUSH32(esp, ebx); /* 0x1504E482: push ebx */
    MEM32(eax) = esi; /* 0x1504E483: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504E485: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E48A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504E48D: mov eax, esi */
    goto L_1504EB8B; /* 0x1504E48F: jmp 0x1504eb8b */
L_1504E494:
    esi = 0xC0000000u; /* 0x1504E494: mov esi, 0xc0000000 */
    goto L_1504E4C4; /* 0x1504E499: jmp 0x1504e4c4 */
L_1504E49B:
    esi = ecx; /* 0x1504E49B: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00070000u);
    esi = esi & 0x00070000u; /* 0x1504E49D: and esi, 0x70000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1504E4A3: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1504E4A5: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1504E4A7: neg esi */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 8 */ /* 0x1504E4A9: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504E4AC: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1504E4AF: movzx eax, al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1504E4B2: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x1504E4B4: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x1504E4B4: shl esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40000000u; /* 0x1504E4B7: add esi, 0x40000000 */
    _flag_k = FK_ADD;
    goto L_1504E4C4; /* 0x1504E4BD: jmp 0x1504e4c4 */
L_1504E4BF:
    esi = 0x80000000u; /* 0x1504E4BF: mov esi, 0x80000000 */
L_1504E4C4:
    eax = MEM32(ebp + 0x18); /* 0x1504E4C4: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1504E4C7: push edi */
    PUSH32(esp, 0x10u); /* 0x1504E4C8: push 0x10 */
    edi = POP32_VAL(esp); /* 0x1504E4CA: pop edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504E4CB: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0xC)) = 1; /* 0x1504E4CE: mov dword ptr [ebp - 0xc], 1 */
    PUSH32(esp, 2); /* 0x1504E4D5: push 2 */
    edx = POP32_VAL(esp); /* 0x1504E4D7: pop edx */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1504E4D8: mov dword ptr [ebp - 0x2c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504E4DB: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E50E; /* 0x1504E4DD: je 0x1504e50e */
L_1504E4DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504E4DF: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E509; /* 0x1504E4E1: je 0x1504e509 */
L_1504E4E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504E4E3: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E505; /* 0x1504E4E5: je 0x1504e505 */
L_1504E4E7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504E4E7: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E500; /* 0x1504E4E9: je 0x1504e500 */
L_1504E4EB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x40u; /* 0x1504E4EB: sub eax, 0x40 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504E568; /* 0x1504E4EE: jne 0x1504e568 */
L_1504E4F0:
    /* cmp esi, 0x80000000u */ /* 0x1504E4F0: cmp esi, 0x80000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504E4F6: sete al */
    MEM32(ebp + (-0x10)) = eax; /* 0x1504E4F9: mov dword ptr [ebp - 0x10], eax */
    edi = eax; /* 0x1504E4FC: mov edi, eax */
    goto L_1504E513; /* 0x1504E4FE: jmp 0x1504e513 */
L_1504E500:
    PUSH32(esp, 3); /* 0x1504E500: push 3 */
    edi = POP32_VAL(esp); /* 0x1504E502: pop edi */
    goto L_1504E510; /* 0x1504E503: jmp 0x1504e510 */
L_1504E505:
    edi = edx; /* 0x1504E505: mov edi, edx */
    goto L_1504E510; /* 0x1504E507: jmp 0x1504e510 */
L_1504E509:
    edi = MEM32(ebp + (-0xC)); /* 0x1504E509: mov edi, dword ptr [ebp - 0xc] */
    goto L_1504E510; /* 0x1504E50C: jmp 0x1504e510 */
L_1504E50E:
    edi = ebx; /* 0x1504E50E: mov edi, ebx */
L_1504E510:
    MEM32(ebp + (-0x10)) = edi; /* 0x1504E510: mov dword ptr [ebp - 0x10], edi */
L_1504E513:
    eax = ecx; /* 0x1504E513: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1504E515: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x400u */ /* 0x1504E51A: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504E553; /* 0x1504E51F: ja 0x1504e553 */
L_1504E521:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E54A; /* 0x1504E521: je 0x1504e54a */
L_1504E523:
    /* test eax, eax */ /* 0x1504E523: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E54A; /* 0x1504E525: je 0x1504e54a */
L_1504E527:
    /* cmp eax, 0x100u */ /* 0x1504E527: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E541; /* 0x1504E52C: je 0x1504e541 */
L_1504E52E:
    /* cmp eax, 0x200u */ /* 0x1504E52E: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E593; /* 0x1504E533: je 0x1504e593 */
L_1504E535:
    /* cmp eax, 0x300u */ /* 0x1504E535: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E568; /* 0x1504E53A: jne 0x1504e568 */
L_1504E53C:
    MEM32(ebp + (-0x14)) = edx; /* 0x1504E53C: mov dword ptr [ebp - 0x14], edx */
    goto L_1504E5A2; /* 0x1504E53F: jmp 0x1504e5a2 */
L_1504E541:
    MEM32(ebp + (-0x14)) = 4; /* 0x1504E541: mov dword ptr [ebp - 0x14], 4 */
    goto L_1504E5A2; /* 0x1504E548: jmp 0x1504e5a2 */
L_1504E54A:
    MEM32(ebp + (-0x14)) = 3; /* 0x1504E54A: mov dword ptr [ebp - 0x14], 3 */
    goto L_1504E5A2; /* 0x1504E551: jmp 0x1504e5a2 */
L_1504E553:
    /* cmp eax, 0x500u */ /* 0x1504E553: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E59C; /* 0x1504E558: je 0x1504e59c */
L_1504E55A:
    /* cmp eax, 0x600u */ /* 0x1504E55A: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E593; /* 0x1504E55F: je 0x1504e593 */
L_1504E561:
    /* cmp eax, 0x700u */ /* 0x1504E561: cmp eax, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E59C; /* 0x1504E566: je 0x1504e59c */
L_1504E568:
    RECOMP_CALL(sub_150363E0); /* 0x1504E568: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504E56D: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1504E56F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1504E572: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504E575: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504E57A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504E57C: pop esi */
    PUSH32(esp, ebx); /* 0x1504E57D: push ebx */
    PUSH32(esp, ebx); /* 0x1504E57E: push ebx */
    PUSH32(esp, ebx); /* 0x1504E57F: push ebx */
    PUSH32(esp, ebx); /* 0x1504E580: push ebx */
    PUSH32(esp, ebx); /* 0x1504E581: push ebx */
    MEM32(eax) = esi; /* 0x1504E582: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504E584: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E589: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504E58C: mov eax, esi */
    goto L_1504EB8A; /* 0x1504E58E: jmp 0x1504eb8a */
L_1504E593:
    MEM32(ebp + (-0x14)) = 5; /* 0x1504E593: mov dword ptr [ebp - 0x14], 5 */
    goto L_1504E5A2; /* 0x1504E59A: jmp 0x1504e5a2 */
L_1504E59C:
    eax = MEM32(ebp + (-0xC)); /* 0x1504E59C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1504E59F: mov dword ptr [ebp - 0x14], eax */
L_1504E5A2:
    edx = 0x80u; /* 0x1504E5A2: mov edx, 0x80 */
    /* test ecx, 0x100u */ /* 0x1504E5A7: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E5BF; /* 0x1504E5AD: je 0x1504e5bf */
L_1504E5AF:
    SET_LO8(eax, MEM8(0x150BDFAC)); /* 0x1504E5AF: mov al, byte ptr [0x150bdfac] */
    SET_LO8(eax, ~LO8(eax)); /* 0x1504E5B4: not al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x1C)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(ebp + 0x1C)); /* 0x1504E5B6: and al, byte ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(edx), LO8(eax) */ /* 0x1504E5B9: test dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0xC)); } /* 0x1504E5BB: cmove edx, dword ptr [ebp - 0xc] */
L_1504E5BF:
    /* test LO8(ecx), 0x40u */ /* 0x1504E5BF: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E5D9; /* 0x1504E5C2: je 0x1504e5d9 */
L_1504E5C4:
    _flag_a = (uint32_t)((esi | 0x00010000u)); _flag_b = (uint32_t)((esi | 0x00010000u));
    esi = esi | 0x00010000u; /* 0x1504E5C4: or esi, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0x04000000u)); _flag_b = (uint32_t)((edx | 0x04000000u));
    edx = edx | 0x04000000u; /* 0x1504E5CA: or edx, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 4)); _flag_b = (uint32_t)((edi | 4));
    edi = edi | 4; /* 0x1504E5D0: or edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504E5D3: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1504E5D6: mov dword ptr [ebp - 0x10], edi */
L_1504E5D9:
    edi = edx; /* 0x1504E5D9: mov edi, edx */
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x1504E5DB: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, 0x1000u */ /* 0x1504E5E1: test ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edi = edx; } /* 0x1504E5E7: cmove edi, edx */
    MEM32(ebp + (-0x24)) = edi; /* 0x1504E5EA: mov dword ptr [ebp - 0x24], edi */
    /* test LO8(ecx), 0x20u */ /* 0x1504E5ED: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E5FA; /* 0x1504E5F0: je 0x1504e5fa */
L_1504E5F2:
    _flag_a = (uint32_t)((edi | 0x08000000u)); _flag_b = (uint32_t)((edi | 0x08000000u));
    edi = edi | 0x08000000u; /* 0x1504E5F2: or edi, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504E605; /* 0x1504E5F8: jmp 0x1504e605 */
L_1504E5FA:
    /* test LO8(ecx), 0x10u */ /* 0x1504E5FA: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E608; /* 0x1504E5FD: je 0x1504e608 */
L_1504E5FF:
    _flag_a = (uint32_t)((edi | 0x10000000u)); _flag_b = (uint32_t)((edi | 0x10000000u));
    edi = edi | 0x10000000u; /* 0x1504E5FF: or edi, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504E605:
    MEM32(ebp + (-0x24)) = edi; /* 0x1504E605: mov dword ptr [ebp - 0x24], edi */
L_1504E608:
    RECOMP_CALL(sub_1504BAF6); /* 0x1504E608: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1504E60D: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi) = eax; /* 0x1504E610: mov dword ptr [edi], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E612: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E632; /* 0x1504E615: jne 0x1504e632 */
L_1504E617:
    RECOMP_CALL(sub_150363E0); /* 0x1504E617: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504E61C: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1504E61E: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504E621: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x18u); /* 0x1504E626: push 0x18 */
    ecx = POP32_VAL(esp); /* 0x1504E628: pop ecx */
    MEM32(eax) = ecx; /* 0x1504E629: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1504E62B: mov eax, ecx */
    goto L_1504EB8A; /* 0x1504E62D: jmp 0x1504eb8a */
L_1504E632:
    eax = MEM32(ebp + 0x8); /* 0x1504E632: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1504E635: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x1504E638: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1504E639: push dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x1504E63C: mov dword ptr [eax], ecx */
    eax = ebp + (-0x38); /* 0x1504E63E: lea eax, [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1504E641: push dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504E644: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504E645: push dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1504E648: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504E649: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x1504E64C: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1504E652: mov dword ptr [ebp - 0x20], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E655: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E6CA; /* 0x1504E658: jne 0x1504e6ca */
L_1504E65A:
    ecx = 0xC0000000u; /* 0x1504E65A: mov ecx, 0xc0000000 */
    eax = esi; /* 0x1504E65F: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1504E661: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1504E663: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E698; /* 0x1504E665: jne 0x1504e698 */
L_1504E667:
    eax = MEM32(ebp + (-0xC)); /* 0x1504E667: mov eax, dword ptr [ebp - 0xc] */
    /* test MEM8(ebp + 0x14), LO8(eax) */ /* 0x1504E66A: test byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E698; /* 0x1504E66D: je 0x1504e698 */
L_1504E66F:
    PUSH32(esp, ebx); /* 0x1504E66F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1504E670: push dword ptr [ebp - 0x24] */
    eax = ebp + (-0x38); /* 0x1504E673: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1504E676: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1504E67C: push dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504E67F: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, eax); /* 0x1504E682: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504E683: push dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1504E686: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504E687: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x1504E68A: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1504E690: mov dword ptr [ebp - 0x20], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E693: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E6CA; /* 0x1504E696: jne 0x1504e6ca */
L_1504E698:
    ecx = MEM32(edi); /* 0x1504E698: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504E69A: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504E69C: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504E69F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504E6A2: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E6A5: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504E6AC: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504E6B1: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504E6B7: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504E6B8: call 0x150363fb */
    RECOMP_FLAGS_IN();
L_1504E6BD:
    ecx = POP32_VAL(esp); /* 0x1504E6BD: pop ecx */
L_1504E6BE:
    RECOMP_CALL(sub_15036430); /* 0x1504E6BE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1504E6C3: mov ebx, dword ptr [eax] */
    goto L_1504EB88; /* 0x1504E6C5: jmp 0x1504eb88 */
L_1504E6CA:
    PUSH32(esp, eax); /* 0x1504E6CA: push eax */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504E6CB: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504E6D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E717; /* 0x1504E6D3: jne 0x1504e717 */
L_1504E6D5:
    ecx = MEM32(edi); /* 0x1504E6D5: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504E6D7: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504E6D9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504E6DC: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504E6DF: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E6E2: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504E6E9: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504E6EE: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504E6F4: mov esi, eax */
    PUSH32(esp, esi); /* 0x1504E6F6: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x1504E6F7: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504E6FC: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504E6FD: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504E700: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1504E706: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E6BE; /* 0x1504E708: jne 0x1504e6be */
L_1504E70A:
    RECOMP_CALL(sub_15036430); /* 0x1504E70A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x1504E70F: mov dword ptr [eax], 0xd */
    RECOMP_BACKEDGE();
    goto L_1504E6BE; /* 0x1504E715: jmp 0x1504e6be */
L_1504E717:
    /* cmp eax, 2 */ /* 0x1504E717: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E722; /* 0x1504E71A: jne 0x1504e722 */
L_1504E71C:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 0x40u); /* 0x1504E71C: or byte ptr [ebp - 1], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1504E72B; /* 0x1504E720: jmp 0x1504e72b */
L_1504E722:
    /* cmp eax, 3 */ /* 0x1504E722: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E72B; /* 0x1504E725: jne 0x1504e72b */
L_1504E727:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 8); /* 0x1504E727: or byte ptr [ebp - 1], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504E72B:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504E72B: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(edi)); /* 0x1504E72E: push dword ptr [edi] */
    RECOMP_CALL(sub_1504BF76); /* 0x1504E730: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504E735: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504E736: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E737: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E74D; /* 0x1504E73A: jne 0x1504e74d */
L_1504E73C:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504E73C: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504E73F: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504E745: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504EB8A; /* 0x1504E748: jmp 0x1504eb8a */
L_1504E74D:
    ecx = MEM32(edi); /* 0x1504E74D: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504E74F: mov eax, ecx */
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1504E751: mov dl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504E754: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(ebp + (-0xC)))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(ebp + (-0xC)))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(ebp + (-0xC))); /* 0x1504E757: or dl, byte ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504E75A: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504E75D: imul ecx, ecx, 0x24 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1504E760: mov byte ptr [ebp - 1], dl */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E763: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504E76A: mov byte ptr [eax + ecx + 4], dl */
    ecx = MEM32(edi); /* 0x1504E76E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504E770: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504E772: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504E775: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504E778: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E77B: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504E782: and dword ptr [eax + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, LO8(edx)); /* 0x1504E787: mov al, dl */
    ecx = MEM32(ebp + 0x14); /* 0x1504E789: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC8u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC8u); /* 0x1504E78C: and al, 0xc8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x1504E78E: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E818; /* 0x1504E790: jne 0x1504e818 */
L_1504E796:
    /* test LO8(ecx), 2 */ /* 0x1504E796: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E818; /* 0x1504E799: je 0x1504e818 */
L_1504E79B:
    PUSH32(esp, 2); /* 0x1504E79B: push 2 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504E79D: push -1 */
    PUSH32(esp, MEM32(edi)); /* 0x1504E79F: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504E7A1: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E7A6: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x1504E7A9: mov dword ptr [ebp - 0x18], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E7AC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E7CA; /* 0x1504E7AF: jne 0x1504e7ca */
L_1504E7B1:
    RECOMP_CALL(sub_150363E0); /* 0x1504E7B1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x83u */ /* 0x1504E7B6: cmp dword ptr [eax], 0x83 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E812; /* 0x1504E7BC: je 0x1504e812 */
L_1504E7BE:
    PUSH32(esp, MEM32(edi)); /* 0x1504E7BE: push dword ptr [edi] */
    RECOMP_CALL(sub_15049E7E); /* 0x1504E7C0: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1504E6BD; /* 0x1504E7C5: jmp 0x1504e6bd */
L_1504E7CA:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1504E7CA: push dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E7CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1504E7CF: mov word ptr [ebp - 8], ax */
    eax = ebp + (-0x8); /* 0x1504E7D3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1504E7D6: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504E7D7: push dword ptr [edi] */
    RECOMP_CALL(sub_1504D8AE); /* 0x1504E7D9: call 0x1504d8ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E7DE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504E7E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E801; /* 0x1504E7E3: jne 0x1504e801 */
L_1504E7E5:
    /* cmp MEM16(ebp + (-0x8)), 0x1Au */ /* 0x1504E7E5: cmp word ptr [ebp - 8], 0x1a */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(0x1Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E801; /* 0x1504E7EA: jne 0x1504e801 */
L_1504E7EC:
    eax = MEM32(ebp + (-0x18)); /* 0x1504E7EC: mov eax, dword ptr [ebp - 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504E7EF: cdq  */
    PUSH32(esp, edx); /* 0x1504E7F0: push edx */
    PUSH32(esp, eax); /* 0x1504E7F1: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504E7F2: push dword ptr [edi] */
    RECOMP_CALL(sub_15049AA2); /* 0x1504E7F4: call 0x15049aa2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E7F9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E7FC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E7FF: je 0x1504e7be */
L_1504E801:
    PUSH32(esp, ebx); /* 0x1504E801: push ebx */
    PUSH32(esp, ebx); /* 0x1504E802: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504E803: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504E805: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E80A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E80D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E810: je 0x1504e7be */
L_1504E812:
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1504E812: mov dl, byte ptr [ebp - 1] */
    ecx = MEM32(ebp + 0x14); /* 0x1504E815: mov ecx, dword ptr [ebp + 0x14] */
L_1504E818:
    /* test LO8(edx), LO8(edx) */ /* 0x1504E818: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1504EA89; /* 0x1504E81A: jns 0x1504ea89 */
L_1504E820:
    /* test ecx, 0x00074000u */ /* 0x1504E820: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E83F; /* 0x1504E826: jne 0x1504e83f */
L_1504E828:
    eax = MEM32(ebp + (-0x28)); /* 0x1504E828: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x1504E82B: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E83A; /* 0x1504E830: jne 0x1504e83a */
L_1504E832:
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1504E832: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504E83C; /* 0x1504E838: jmp 0x1504e83c */
L_1504E83A:
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504E83A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504E83C:
    MEM32(ebp + 0x14) = ecx; /* 0x1504E83C: mov dword ptr [ebp + 0x14], ecx */
L_1504E83F:
    eax = ecx; /* 0x1504E83F: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x1504E841: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x4000u */ /* 0x1504E846: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E89A; /* 0x1504E84B: je 0x1504e89a */
L_1504E84D:
    /* cmp eax, 0x00010000u */ /* 0x1504E84D: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E882; /* 0x1504E852: je 0x1504e882 */
L_1504E854:
    /* cmp eax, 0x00014000u */ /* 0x1504E854: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E882; /* 0x1504E859: je 0x1504e882 */
L_1504E85B:
    /* cmp eax, 0x00020000u */ /* 0x1504E85B: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E87C; /* 0x1504E860: je 0x1504e87c */
L_1504E862:
    /* cmp eax, 0x00024000u */ /* 0x1504E862: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E87C; /* 0x1504E867: je 0x1504e87c */
L_1504E869:
    /* cmp eax, 0x00040000u */ /* 0x1504E869: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E877; /* 0x1504E86E: je 0x1504e877 */
L_1504E870:
    /* cmp eax, 0x00044000u */ /* 0x1504E870: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E89D; /* 0x1504E875: jne 0x1504e89d */
L_1504E877:
    eax = MEM32(ebp + (-0xC)); /* 0x1504E877: mov eax, dword ptr [ebp - 0xc] */
    goto L_1504E895; /* 0x1504E87A: jmp 0x1504e895 */
L_1504E87C:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1504E87C: mov byte ptr [ebp - 2], 2 */
    goto L_1504E89D; /* 0x1504E880: jmp 0x1504e89d */
L_1504E882:
    eax = ecx; /* 0x1504E882: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x1504E884: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1504E889: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504E88E: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1504E891: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x1504E893: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504E895:
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1504E895: mov byte ptr [ebp - 2], al */
    goto L_1504E89D; /* 0x1504E898: jmp 0x1504e89d */
L_1504E89A:
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1504E89A: mov byte ptr [ebp - 2], bl */
L_1504E89D:
    /* test ecx, 0x00070000u */ /* 0x1504E89D: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504E8A3: je 0x1504ea89 */
L_1504E8A9:
    MEM32(ebp + (-0x18)) = ebx; /* 0x1504E8A9: mov dword ptr [ebp - 0x18], ebx */
    /* test LO8(edx), 0x40u */ /* 0x1504E8AC: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504E8AF: jne 0x1504ea89 */
L_1504E8B5:
    eax = 0xC0000000u; /* 0x1504E8B5: mov eax, 0xc0000000 */
    ecx = 0xFEFFu; /* 0x1504E8BA: mov ecx, 0xfeff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1504E8BF: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x40000000u */ /* 0x1504E8C1: cmp esi, 0x40000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504EA10; /* 0x1504E8C7: je 0x1504ea10 */
L_1504E8CD:
    /* cmp esi, 0x80000000u */ /* 0x1504E8CD: cmp esi, 0x80000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E94A; /* 0x1504E8D3: je 0x1504e94a */
L_1504E8D5:
    /* cmp esi, eax */ /* 0x1504E8D5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504E8D7: jne 0x1504ea89 */
L_1504E8DD:
    eax = MEM32(ebp + (-0x14)); /* 0x1504E8DD: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E8E0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E9F8; /* 0x1504E8E3: je 0x1504e9f8 */
L_1504E8E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E8E9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E9F8; /* 0x1504E8EC: je 0x1504e9f8 */
L_1504E8F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E8F2: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E90A; /* 0x1504E8F5: je 0x1504e90a */
L_1504E8F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E8F7: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E90A; /* 0x1504E8FA: je 0x1504e90a */
L_1504E8FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504E8FC: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E9F8; /* 0x1504E8FF: je 0x1504e9f8 */
L_1504E905:
    goto L_1504EA89; /* 0x1504E905: jmp 0x1504ea89 */
L_1504E90A:
    PUSH32(esp, 2); /* 0x1504E90A: push 2 */
    PUSH32(esp, ebx); /* 0x1504E90C: push ebx */
    PUSH32(esp, ebx); /* 0x1504E90D: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504E90E: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504E910: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504E915: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1504E918: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E93B; /* 0x1504E91A: je 0x1504e93b */
L_1504E91C:
    PUSH32(esp, ebx); /* 0x1504E91C: push ebx */
    PUSH32(esp, ebx); /* 0x1504E91D: push ebx */
    PUSH32(esp, ebx); /* 0x1504E91E: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504E91F: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504E921: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504E926: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504E928: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E92B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E92E: je 0x1504e7be */
L_1504E934:
    eax = MEM32(ebp + (-0xC)); /* 0x1504E934: mov eax, dword ptr [ebp - 0xc] */
    esi = ebx; /* 0x1504E937: mov esi, ebx */
    goto L_1504E940; /* 0x1504E939: jmp 0x1504e940 */
L_1504E93B:
    esi = MEM32(ebp + (-0xC)); /* 0x1504E93B: mov esi, dword ptr [ebp - 0xc] */
    eax = ebx; /* 0x1504E93E: mov eax, ebx */
L_1504E940:
    /* test eax, eax */ /* 0x1504E940: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E9EB; /* 0x1504E942: je 0x1504e9eb */
L_1504E948:
    goto L_1504E94C; /* 0x1504E948: jmp 0x1504e94c */
L_1504E94A:
    esi = ebx; /* 0x1504E94A: mov esi, ebx */
L_1504E94C:
    PUSH32(esp, 3); /* 0x1504E94C: push 3 */
    eax = ebp + (-0x18); /* 0x1504E94E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1504E951: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504E952: push dword ptr [edi] */
    RECOMP_CALL(sub_1504D8AE); /* 0x1504E954: call 0x1504d8ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E959: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504E95C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504E969; /* 0x1504E95E: jle 0x1504e969 */
L_1504E960:
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x1504E960: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E972; /* 0x1504E963: jne 0x1504e972 */
L_1504E965:
    esi = ebx; /* 0x1504E965: mov esi, ebx */
    goto L_1504E972; /* 0x1504E967: jmp 0x1504e972 */
L_1504E969:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E969: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E96C: je 0x1504e7be */
L_1504E972:
    ecx = MEM32(ebp + (-0x18)); /* 0x1504E972: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, 2); /* 0x1504E975: push 2 */
    edx = POP32_VAL(esp); /* 0x1504E977: pop edx */
    /* cmp eax, edx */ /* 0x1504E978: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E991; /* 0x1504E97A: je 0x1504e991 */
L_1504E97C:
    /* cmp eax, 3 */ /* 0x1504E97C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E9D6; /* 0x1504E97F: jne 0x1504e9d6 */
L_1504E981:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x1504E981: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E991; /* 0x1504E987: jne 0x1504e991 */
L_1504E989:
    eax = MEM32(ebp + (-0xC)); /* 0x1504E989: mov eax, dword ptr [ebp - 0xc] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1504E98C: mov byte ptr [ebp - 2], al */
    goto L_1504E9EB; /* 0x1504E98F: jmp 0x1504e9eb */
L_1504E991:
    eax = (uint32_t)LO16(ecx); /* 0x1504E991: movzx eax, cx */
    /* cmp eax, 0xFFFEu */ /* 0x1504E994: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E9B4; /* 0x1504E999: jne 0x1504e9b4 */
L_1504E99B:
    PUSH32(esp, MEM32(edi)); /* 0x1504E99B: push dword ptr [edi] */
    RECOMP_CALL(sub_15049E7E); /* 0x1504E99D: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504E9A2: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x1504E9A3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504E9A8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504E9AA: pop esi */
    ebx = esi; /* 0x1504E9AB: mov ebx, esi */
    MEM32(eax) = esi; /* 0x1504E9AD: mov dword ptr [eax], esi */
    goto L_1504EB88; /* 0x1504E9AF: jmp 0x1504eb88 */
L_1504E9B4:
    /* cmp eax, 0xFEFFu */ /* 0x1504E9B4: cmp eax, 0xfeff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E9D6; /* 0x1504E9B9: jne 0x1504e9d6 */
L_1504E9BB:
    PUSH32(esp, ebx); /* 0x1504E9BB: push ebx */
    PUSH32(esp, edx); /* 0x1504E9BC: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x1504E9BD: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504E9BF: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E9C4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E9C7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E9CA: je 0x1504e7be */
L_1504E9D0:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1504E9D0: mov byte ptr [ebp - 2], 2 */
    goto L_1504E9EB; /* 0x1504E9D4: jmp 0x1504e9eb */
L_1504E9D6:
    PUSH32(esp, ebx); /* 0x1504E9D6: push ebx */
    PUSH32(esp, ebx); /* 0x1504E9D7: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504E9D8: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504E9DA: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E9DF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504E9E2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504E9E5: je 0x1504e7be */
L_1504E9EB:
    /* test esi, esi */ /* 0x1504E9EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504E9ED: je 0x1504ea89 */
L_1504E9F3:
    ecx = 0xFEFFu; /* 0x1504E9F3: mov ecx, 0xfeff */
L_1504E9F8:
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x1504E9F8: movzx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1504E9FC: mov esi, ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1504E9FE: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA01: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504EA56; /* 0x1504EA04: je 0x1504ea56 */
L_1504EA06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA06: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504EA09: jne 0x1504ea89 */
L_1504EA0B:
    PUSH32(esp, 2); /* 0x1504EA0B: push 2 */
    eax = POP32_VAL(esp); /* 0x1504EA0D: pop eax */
    goto L_1504EA61; /* 0x1504EA0E: jmp 0x1504ea61 */
L_1504EA10:
    eax = MEM32(ebp + (-0x14)); /* 0x1504EA10: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA13: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E9F8; /* 0x1504EA16: je 0x1504e9f8 */
L_1504EA18:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA18: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504E9F8; /* 0x1504EA1B: je 0x1504e9f8 */
L_1504EA1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA1D: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504EA2B; /* 0x1504EA20: je 0x1504ea2b */
L_1504EA22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504EA22: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504E8FC; /* 0x1504EA25: jne 0x1504e8fc */
L_1504EA2B:
    PUSH32(esp, 2); /* 0x1504EA2B: push 2 */
    PUSH32(esp, ebx); /* 0x1504EA2D: push ebx */
    PUSH32(esp, ebx); /* 0x1504EA2E: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504EA2F: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504EA31: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504EA36: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1504EA39: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E9F3; /* 0x1504EA3B: je 0x1504e9f3 */
L_1504EA3D:
    PUSH32(esp, ebx); /* 0x1504EA3D: push ebx */
    PUSH32(esp, ebx); /* 0x1504EA3E: push ebx */
    PUSH32(esp, ebx); /* 0x1504EA3F: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504EA40: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504EA42: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504EA47: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504EA49: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504EA4C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EA89; /* 0x1504EA4F: jne 0x1504ea89 */
L_1504EA51:
    RECOMP_BACKEDGE();
    goto L_1504E7BE; /* 0x1504EA51: jmp 0x1504e7be */
L_1504EA56:
    PUSH32(esp, 3); /* 0x1504EA56: push 3 */
    eax = POP32_VAL(esp); /* 0x1504EA58: pop eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504EA59: mov dword ptr [ebp - 0x2c], eax */
    ecx = 0x00BFBBEFu; /* 0x1504EA5C: mov ecx, 0xbfbbef */
L_1504EA61:
    MEM32(ebp + (-0x18)) = ecx; /* 0x1504EA61: mov dword ptr [ebp - 0x18], ecx */
L_1504EA64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1504EA64: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1504EA66: push eax */
    eax = ebp + (-0x18); /* 0x1504EA67: lea eax, [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1504EA6A: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1504EA6C: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504EA6D: push dword ptr [edi] */
    RECOMP_CALL(sub_1504EDD0); /* 0x1504EA6F: call 0x1504edd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504EA74: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504EA77: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E7BE; /* 0x1504EA7A: je 0x1504e7be */
L_1504EA80:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1504EA80: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x2C)); /* 0x1504EA82: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, esi */ /* 0x1504EA85: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1504EA64; /* 0x1504EA87: jg 0x1504ea64 */
L_1504EA89:
    ecx = MEM32(edi); /* 0x1504EA89: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504EA8B: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504EA8D: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504EA90: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504EA93: imul esi, ecx, 0x24 */
    edx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EA96: mov edx, dword ptr [eax*4 + 0x150bebc0] */
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x1504EA9D: movzx eax, byte ptr [ebp - 2] */
    ecx = MEM32(edx + esi + 0x8); /* 0x1504EAA1: mov ecx, dword ptr [edx + esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x1504EAA5: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504EAA8: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + esi + 0x8) = ecx; /* 0x1504EAAA: mov dword ptr [edx + esi + 8], ecx */
    ecx = MEM32(edi); /* 0x1504EAAE: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504EAB0: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504EAB2: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504EAB5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504EAB8: imul edx, ecx, 0x24 */
    ecx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EABB: mov ecx, dword ptr [eax*4 + 0x150bebc0] */
    eax = MEM32(ebp + 0x14); /* 0x1504EAC2: mov eax, dword ptr [ebp + 0x14] */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x1504EAC5: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x1504EAC5: shr eax, 0xd */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + edx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + edx + 0x8)));
    eax = eax ^ MEM32(ecx + edx + 0x8); /* 0x1504EAC8: xor eax, dword ptr [ecx + edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1504EACC: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + edx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + edx + 0x8) ^ eax));
    MEM32(ecx + edx + 0x8) = MEM32(ecx + edx + 0x8) ^ eax; /* 0x1504EACF: xor dword ptr [ecx + edx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x1)), 0x48u */ /* 0x1504EAD3: test byte ptr [ebp - 1], 0x48 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1504EAD7: mov ecx, dword ptr [ebp + 0x14] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504EAFD; /* 0x1504EADA: jne 0x1504eafd */
L_1504EADC:
    /* test LO8(ecx), 8 */ /* 0x1504EADC: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EAFD; /* 0x1504EADF: je 0x1504eafd */
L_1504EAE1:
    ecx = MEM32(edi); /* 0x1504EAE1: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504EAE3: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504EAE5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504EAE8: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504EAEB: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EAEE: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1504EAF5: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1504EAFA: mov ecx, dword ptr [ebp + 0x14] */
L_1504EAFD:
    esi = MEM32(ebp + (-0x1C)); /* 0x1504EAFD: mov esi, dword ptr [ebp - 0x1c] */
    edx = 0xC0000000u; /* 0x1504EB00: mov edx, 0xc0000000 */
    eax = esi; /* 0x1504EB05: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504EB07: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1504EB09: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EB88; /* 0x1504EB0B: jne 0x1504eb88 */
L_1504EB0D:
    eax = MEM32(ebp + (-0xC)); /* 0x1504EB0D: mov eax, dword ptr [ebp - 0xc] */
    /* test LO8(eax), LO8(ecx) */ /* 0x1504EB10: test al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EB88; /* 0x1504EB12: je 0x1504eb88 */
L_1504EB14:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504EB14: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504EB17: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504EB1D: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1504EB1E: push dword ptr [ebp - 0x24] */
    eax = ebp + (-0x38); /* 0x1504EB21: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1504EB24: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1504EB2A: push 3 */
    PUSH32(esp, eax); /* 0x1504EB2C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504EB2D: push dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1504EB30: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504EB31: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x1504EB34: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504EB3A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EB71; /* 0x1504EB3D: jne 0x1504eb71 */
L_1504EB3F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504EB3F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504EB45: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504EB46: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1504EB4B: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504EB4D: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504EB4F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504EB52: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504EB55: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EB58: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504EB5F: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1504EB64: push dword ptr [edi] */
    RECOMP_CALL(sub_1504BCCA); /* 0x1504EB66: call 0x1504bcca */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504EB6B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504E6BD; /* 0x1504EB6C: jmp 0x1504e6bd */
L_1504EB71:
    edx = MEM32(edi); /* 0x1504EB71: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1504EB73: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504EB75: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1504EB78: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x24u); /* 0x1504EB7B: imul edx, edx, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504EB7E: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM32(edx + ecx) = eax; /* 0x1504EB85: mov dword ptr [edx + ecx], eax */
L_1504EB88:
    eax = ebx; /* 0x1504EB88: mov eax, ebx */
L_1504EB8A:
    edi = POP32_VAL(esp); /* 0x1504EB8A: pop edi */
L_1504EB8B:
    esi = POP32_VAL(esp); /* 0x1504EB8B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504EB8C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504EB8D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EB8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EBA0u);

L_1504EBA0:
    PUSH32(esp, 0x14u); /* 0x1504EBA0: push 0x14 */
    PUSH32(esp, 0x150B0958u); /* 0x1504EBA2: push 0x150b0958 */
    RECOMP_CALL(sub_1505E988); /* 0x1504EBA7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x1504EBAC: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504EBB0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1504EBB2: mov dword ptr [ebp - 0x20], esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1504EBB5: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EBDA; /* 0x1504EBB8: jne 0x1504ebda */
L_1504EBBA:
    RECOMP_CALL(sub_15036430); /* 0x1504EBBA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504EBBF: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1504EBC5: push esi */
    PUSH32(esp, esi); /* 0x1504EBC6: push esi */
    PUSH32(esp, esi); /* 0x1504EBC7: push esi */
    PUSH32(esp, esi); /* 0x1504EBC8: push esi */
    PUSH32(esp, esi); /* 0x1504EBC9: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504EBCA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504EBCF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504EBD2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504EBD2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504EC65; /* 0x1504EBD5: jmp 0x1504ec65 */
L_1504EBDA:
    MEM32(ebp + (-0x4)) = esi; /* 0x1504EBDA: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, esi); /* 0x1504EBDD: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504EBDE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x1504EBE1: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504EBE3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504EBE6: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x1504EBE9: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504EBEC: push eax */
    eax = ebp + (-0x20); /* 0x1504EBED: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504EBF0: push eax */
    RECOMP_CALL(sub_1504E3D5); /* 0x1504EBF1: call 0x1504e3d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504EBF6: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504EBF9: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1504EBFB: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504EBFE: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504EC1A); /* 0x1504EC05: call 0x1504ec1a */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1504EC0A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EC62; /* 0x1504EC0C: je 0x1504ec62 */
L_1504EC0E:
    RECOMP_CALL(sub_15036430); /* 0x1504EC0E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504EC13: mov dword ptr [eax], edi */
    RECOMP_BACKEDGE();
    goto L_1504EBD2; /* 0x1504EC15: jmp 0x1504ebd2 */
L_1504EC62:
    eax = MEM32(ebp + (-0x1C)); /* 0x1504EC62: mov eax, dword ptr [ebp - 0x1c] */
L_1504EC65:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504EC65: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504EC68: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504EC6F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504EC70: pop edi */
    esi = POP32_VAL(esp); /* 0x1504EC71: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504EC72: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504EC73: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EC74: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EC1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EC1Au);

L_1504EC1A:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1504EC1A: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504EC61; /* 0x1504EC1E: je 0x1504ec61 */
L_1504EC20:
    /* test edi, edi */ /* 0x1504EC20: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EC58; /* 0x1504EC22: je 0x1504ec58 */
L_1504EC24:
    esi = MEM32(ebp + (-0x1C)); /* 0x1504EC24: mov esi, dword ptr [ebp - 0x1c] */
    edx = esi; /* 0x1504EC27: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504EC29: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504EC2C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504EC2E: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504EC31: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504EC34: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(edx, MEM8(eax + ecx + 0x4)); /* 0x1504EC3B: mov dl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFEu); /* 0x1504EC3F: and dl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi; /* 0x1504EC42: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504EC44: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504EC47: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504EC4A: imul ecx, esi, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EC4D: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504EC54: mov byte ptr [eax + ecx + 4], dl */
L_1504EC58:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504EC58: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1504C004); /* 0x1504EC5B: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504EC60: pop ecx */
L_1504EC61:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EC61: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EC80u);

L_1504EC80:
    edi = edi; /* 0x1504EC80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504EC82: push ebp */
    ebp = esp; /* 0x1504EC83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504EC85: push ecx */
    PUSH32(esp, esi); /* 0x1504EC86: push esi */
    PUSH32(esp, 0); /* 0x1504EC87: push 0 */
    eax = ebp + (-0x4); /* 0x1504EC89: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504EC8C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504EC8F: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504EC90: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504EC93: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504EC96: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504EC99: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504EC9C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504ECBA); /* 0x1504EC9F: call 0x1504ecba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1504ECA4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1504ECA7: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504ECAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = esi; } /* 0x1504ECAC: cmovne ecx, esi */
    eax = ecx; /* 0x1504ECAF: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1504ECB1: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504ECB2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504ECB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504ECBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504ECBAu);

L_1504ECBA:
    PUSH32(esp, 0x10u); /* 0x1504ECBA: push 0x10 */
    PUSH32(esp, 0x150B0938u); /* 0x1504ECBC: push 0x150b0938 */
    RECOMP_CALL(sub_1505E988); /* 0x1504ECC1: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504ECC6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504ECC8: mov dword ptr [ebp - 0x1c], edi */
    esi = MEM32(ebp + 0x18); /* 0x1504ECCB: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1504ECCE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504ECED; /* 0x1504ECD0: jne 0x1504eced */
L_1504ECD2:
    RECOMP_CALL(sub_15036430); /* 0x1504ECD2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504ECD7: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504ECD9: pop esi */
    MEM32(eax) = esi; /* 0x1504ECDA: mov dword ptr [eax], esi */
    PUSH32(esp, edi); /* 0x1504ECDC: push edi */
    PUSH32(esp, edi); /* 0x1504ECDD: push edi */
    PUSH32(esp, edi); /* 0x1504ECDE: push edi */
    PUSH32(esp, edi); /* 0x1504ECDF: push edi */
    PUSH32(esp, edi); /* 0x1504ECE0: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1504ECE1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504ECE6: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504ECE9: mov eax, esi */
    goto L_1504ED3C; /* 0x1504ECEB: jmp 0x1504ed3c */
L_1504ECED:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1504ECED: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1504ECF0: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ECD2; /* 0x1504ECF3: je 0x1504ecd2 */
L_1504ECF5:
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x1504ECF5: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ED03; /* 0x1504ECF8: je 0x1504ed03 */
L_1504ECFA:
    /* test MEM32(ebp + 0x14), 0xFFFFFE7Fu */ /* 0x1504ECFA: test dword ptr [ebp + 0x14], 0xfffffe7f */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504ECD2; /* 0x1504ED01: jne 0x1504ecd2 */
L_1504ED03:
    MEM32(ebp + (-0x4)) = edi; /* 0x1504ED03: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1504ED06: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504ED09: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504ED0C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504ED0F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504ED12: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504ED15: push esi */
    eax = ebp + (-0x1C); /* 0x1504ED16: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504ED19: push eax */
    RECOMP_CALL(sub_1504E3D5); /* 0x1504ED1A: call 0x1504e3d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504ED1F: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504ED22: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504ED24: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504ED27: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504ED52); /* 0x1504ED2E: call 0x1504ed52 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1504ED33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ED3A; /* 0x1504ED35: je 0x1504ed3a */
L_1504ED37:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1504ED37: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504ED3A:
    eax = edi; /* 0x1504ED3A: mov eax, edi */
L_1504ED3C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504ED3C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504ED3F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504ED46: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504ED47: pop edi */
    esi = POP32_VAL(esp); /* 0x1504ED48: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504ED49: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504ED4A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504ED4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504ED52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504ED52u);

L_1504ED52:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1504ED52: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ED97; /* 0x1504ED56: je 0x1504ed97 */
L_1504ED58:
    /* test edi, edi */ /* 0x1504ED58: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ED8F; /* 0x1504ED5A: je 0x1504ed8f */
L_1504ED5C:
    edx = MEM32(esi); /* 0x1504ED5C: mov edx, dword ptr [esi] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504ED5E: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = MEM32(esi); /* 0x1504ED61: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504ED63: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504ED66: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504ED69: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(ebx, MEM8(eax + ecx + 0x4)); /* 0x1504ED70: mov bl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xFEu); /* 0x1504ED74: and bl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(esi); /* 0x1504ED77: mov edx, dword ptr [esi] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504ED79: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = MEM32(esi); /* 0x1504ED7C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504ED7E: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504ED81: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504ED84: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1504ED8B: mov byte ptr [eax + ecx + 4], bl */
L_1504ED8F:
    PUSH32(esp, MEM32(esi)); /* 0x1504ED8F: push dword ptr [esi] */
    RECOMP_CALL(sub_1504C004); /* 0x1504ED91: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504ED96: pop ecx */
L_1504ED97:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504ED97: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EDA0u);

L_1504EDA0:
    edi = edi; /* 0x1504EDA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504EDA2: push ebp */
    ebp = esp; /* 0x1504EDA3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504EDA5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504EDA7: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1504EDAA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504EDAD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504EDB0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504EDB3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1504ECBA); /* 0x1504EDB6: call 0x1504ecba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1504EDBB: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504EDBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EDBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EDD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EDD0u);

L_1504EDD0:
    PUSH32(esp, 0x10u); /* 0x1504EDD0: push 0x10 */
    PUSH32(esp, 0x150B0978u); /* 0x1504EDD2: push 0x150b0978 */
    RECOMP_CALL(sub_1505E988); /* 0x1504EDD7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504EDDC: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504EDDF: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EDFF; /* 0x1504EDE2: jne 0x1504edff */
L_1504EDE4:
    RECOMP_CALL(sub_150363E0); /* 0x1504EDE4: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504EDE9: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504EDEC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504EDF1: mov dword ptr [eax], 9 */
L_1504EDF7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504EDF7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504EEAD; /* 0x1504EDFA: jmp 0x1504eead */
L_1504EDFF:
    /* test edi, edi */ /* 0x1504EDFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504EE12; /* 0x1504EE01: js 0x1504ee12 */
L_1504EE03:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504EE03: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504EE12; /* 0x1504EE09: jae 0x1504ee12 */
L_1504EE0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504EE0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504EE0D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504EE0E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504EE16; /* 0x1504EE10: jmp 0x1504ee16 */
L_1504EE12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504EE12: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504EE14: mov eax, esi */
L_1504EE16:
    /* test eax, eax */ /* 0x1504EE16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504EE3B; /* 0x1504EE18: jne 0x1504ee3b */
L_1504EE1A:
    RECOMP_CALL(sub_150363E0); /* 0x1504EE1A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504EE1F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504EE21: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504EE26: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504EE2C: push esi */
    PUSH32(esp, esi); /* 0x1504EE2D: push esi */
    PUSH32(esp, esi); /* 0x1504EE2E: push esi */
    PUSH32(esp, esi); /* 0x1504EE2F: push esi */
    PUSH32(esp, esi); /* 0x1504EE30: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504EE31: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504EE36: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504EDF7; /* 0x1504EE39: jmp 0x1504edf7 */
L_1504EE3B:
    ebx = edi; /* 0x1504EE3B: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504EE3D: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x1504EE40: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504EE42: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504EE45: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504EE48: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504EE4B: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504EE52: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EE1A; /* 0x1504EE57: je 0x1504ee1a */
L_1504EE59:
    PUSH32(esp, edi); /* 0x1504EE59: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504EE5A: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504EE5F: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504EE60: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504EE63: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504EE6A: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504EE6D: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EE87; /* 0x1504EE72: je 0x1504ee87 */
L_1504EE74:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504EE74: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504EE77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504EE7A: push edi */
    RECOMP_CALL(sub_1504EED1); /* 0x1504EE7B: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504EE80: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1504EE83: mov esi, eax */
    goto L_1504EE9C; /* 0x1504EE85: jmp 0x1504ee9c */
L_1504EE87:
    RECOMP_CALL(sub_15036430); /* 0x1504EE87: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504EE8C: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504EE92: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504EE97: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504EE99: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504EE9C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504EE9C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504EE9F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504EEC3); /* 0x1504EEA6: call 0x1504eec3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504EEAB: mov eax, esi */
L_1504EEAD:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504EEAD: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504EEB0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504EEB7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504EEB8: pop edi */
    esi = POP32_VAL(esp); /* 0x1504EEB9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504EEBA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504EEBB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EEBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EEC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EEC3u);

L_1504EEC3:
    PUSH32(esp, edi); /* 0x1504EEC3: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504EEC4: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504EEC9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504EECA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504EED1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504EED1u);

L_1504EED1:
    edi = edi; /* 0x1504EED1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504EED3: push ebp */
    ebp = esp; /* 0x1504EED4: mov ebp, esp */
    eax = 0x3C4Cu; /* 0x1504EED6: mov eax, 0x3c4c */
    RECOMP_CALL(sub_15069EF0); /* 0x1504EEDB: call 0x15069ef0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BD340); /* 0x1504EEE0: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504EEE5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504EEE7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1504EEEA: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1504EEED: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1504EEF0: push ebx */
    PUSH32(esp, esi); /* 0x1504EEF1: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1504EEF2: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504EEF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C40)) = eax; /* 0x1504EEF7: mov dword ptr [ebp - 0x3c40], eax */
    MEM32(ebp + (-0x3C14)) = ecx; /* 0x1504EEFD: mov dword ptr [ebp - 0x3c14], ecx */
    MEM32(ebp + (-0x3C38)) = ebx; /* 0x1504EF03: mov dword ptr [ebp - 0x3c38], ebx */
    PUSH32(esp, edi); /* 0x1504EF09: push edi */
    edi = ebx; /* 0x1504EF0A: mov edi, ebx */
    /* test esi, esi */ /* 0x1504EF0C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F729; /* 0x1504EF0E: je 0x1504f729 */
L_1504EF14:
    /* test ecx, ecx */ /* 0x1504EF14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504EF3F; /* 0x1504EF16: jne 0x1504ef3f */
L_1504EF18:
    RECOMP_CALL(sub_150363E0); /* 0x1504EF18: call 0x150363e0 */
    RECOMP_FLAGS_IN();
L_1504EF1D:
    MEM32(eax) = ebx; /* 0x1504EF1D: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504EF1F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504EF24: push ebx */
    PUSH32(esp, ebx); /* 0x1504EF25: push ebx */
    PUSH32(esp, ebx); /* 0x1504EF26: push ebx */
    PUSH32(esp, ebx); /* 0x1504EF27: push ebx */
    PUSH32(esp, ebx); /* 0x1504EF28: push ebx */
    MEM32(eax) = 0x16u; /* 0x1504EF29: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504EF2F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504EF34: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504EF37:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504EF37: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504F72B; /* 0x1504EF3A: jmp 0x1504f72b */
L_1504EF3F:
    edx = eax; /* 0x1504EF3F: mov edx, eax */
    ecx = eax; /* 0x1504EF41: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1504EF43: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504EF46: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x3C48)) = edx; /* 0x1504EF49: mov dword ptr [ebp - 0x3c48], edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x24u); /* 0x1504EF4F: imul edx, edx, 0x24 */
    MEM32(ebp + (-0x3C34)) = ecx; /* 0x1504EF52: mov dword ptr [ebp - 0x3c34], ecx */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504EF58: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x3C1C)) = edx; /* 0x1504EF5F: mov dword ptr [ebp - 0x3c1c], edx */
    ebx = MEM32(edx + ecx + 0x8); /* 0x1504EF65: mov ebx, dword ptr [edx + ecx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1504EF69: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 2 */ /* 0x1504EF6C: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504EF76; /* 0x1504EF6F: je 0x1504ef76 */
L_1504EF71:
    /* cmp ebx, 1 */ /* 0x1504EF71: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504EF8D; /* 0x1504EF74: jne 0x1504ef8d */
L_1504EF76:
    eax = esi; /* 0x1504EF76: mov eax, esi */
    eax = ~eax; /* 0x1504EF78: not eax */
    /* test LO8(eax), 1 */ /* 0x1504EF7A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504EF87; /* 0x1504EF7C: jne 0x1504ef87 */
L_1504EF7E:
    RECOMP_CALL(sub_150363E0); /* 0x1504EF7E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504EF83: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504EF1D; /* 0x1504EF85: jmp 0x1504ef1d */
L_1504EF87:
    eax = MEM32(ebp + (-0x3C40)); /* 0x1504EF87: mov eax, dword ptr [ebp - 0x3c40] */
L_1504EF8D:
    /* test MEM8(edx + ecx + 0x4), 0x20u */ /* 0x1504EF8D: test byte ptr [edx + ecx + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504EFA3; /* 0x1504EF92: je 0x1504efa3 */
L_1504EF94:
    PUSH32(esp, 2); /* 0x1504EF94: push 2 */
    PUSH32(esp, 0); /* 0x1504EF96: push 0 */
    PUSH32(esp, 0); /* 0x1504EF98: push 0 */
    PUSH32(esp, eax); /* 0x1504EF9A: push eax */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504EF9B: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504EFA0: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1504EFA3:
    PUSH32(esp, MEM32(ebp + (-0x3C40))); /* 0x1504EFA3: push dword ptr [ebp - 0x3c40] */
    RECOMP_CALL(sub_1504C2F0); /* 0x1504EFA9: call 0x1504c2f0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x3C34)); /* 0x1504EFAE: mov edx, dword ptr [ebp - 0x3c34] */
    ecx = POP32_VAL(esp); /* 0x1504EFB4: pop ecx */
    /* test eax, eax */ /* 0x1504EFB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F29C; /* 0x1504EFB7: je 0x1504f29c */
L_1504EFBD:
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504EFBD: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504EFC4: mov ecx, dword ptr [ebp - 0x3c1c] */
    /* cmp MEM8(ecx + eax + 0x4), 0 */ /* 0x1504EFCA: cmp byte ptr [ecx + eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504F29C; /* 0x1504EFCF: jge 0x1504f29c */
L_1504EFD5:
    RECOMP_CALL(sub_15068820); /* 0x1504EFD5: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504EFDA: mov ecx, dword ptr [ebp - 0x3c1c] */
    eax = MEM32(eax + 0x6C); /* 0x1504EFE0: mov eax, dword ptr [eax + 0x6c] */
    eax = MEM32(eax + 0x14); /* 0x1504EFE3: mov eax, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x3C30)) = eax; /* 0x1504EFE6: mov dword ptr [ebp - 0x3c30], eax */
    eax = ebp + (-0x3C44); /* 0x1504EFEC: lea eax, [ebp - 0x3c44] */
    PUSH32(esp, eax); /* 0x1504EFF2: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504EFF3: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504EFF9: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F000: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0020)); /* 0x1504F003: call dword ptr [0x150c0020] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F009: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F296; /* 0x1504F00B: je 0x1504f296 */
L_1504F011:
    /* cmp MEM32(ebp + (-0x3C30)), edi */ /* 0x1504F011: cmp dword ptr [ebp - 0x3c30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F021; /* 0x1504F017: jne 0x1504f021 */
L_1504F019:
    /* test ebx, ebx */ /* 0x1504F019: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F296; /* 0x1504F01B: je 0x1504f296 */
L_1504F021:
    RECOMP_ICALL(MEM32(0x150C0028)); /* 0x1504F021: call dword ptr [0x150c0028] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F027: mov edx, dword ptr [ebp - 0x3c14] */
    ecx = edx; /* 0x1504F02D: mov ecx, edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C18))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x3C18)) = MEM32(ebp + (-0x3C18)) & edi; /* 0x1504F02F: and dword ptr [ebp - 0x3c18], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C4C)) = eax; /* 0x1504F035: mov dword ptr [ebp - 0x3c4c], eax */
    MEM32(ebp + (-0x3C28)) = ecx; /* 0x1504F03B: mov dword ptr [ebp - 0x3c28], ecx */
    /* test esi, esi */ /* 0x1504F041: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F28B; /* 0x1504F043: je 0x1504f28b */
L_1504F049:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F049: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C40)) = 0xAu; /* 0x1504F04B: mov dword ptr [ebp - 0x3c40], 0xa */
    MEM32(ebp + (-0x3C2C)) = eax; /* 0x1504F055: mov dword ptr [ebp - 0x3c2c], eax */
L_1504F05B:
    /* test ebx, ebx */ /* 0x1504F05B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F1D5; /* 0x1504F05D: jne 0x1504f1d5 */
L_1504F063:
    SET_LO8(ecx, MEM8(ecx)); /* 0x1504F063: mov cl, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F065: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0xAu */ /* 0x1504F067: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x3C1D)) = (uint8_t)(LO8(ecx)); /* 0x1504F06A: mov byte ptr [ebp - 0x3c1d], cl */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504F070: sete al */
    MEM32(ebp + (-0x3C30)) = eax; /* 0x1504F073: mov dword ptr [ebp - 0x3c30], eax */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1504F079: movsx eax, cl */
    PUSH32(esp, eax); /* 0x1504F07C: push eax */
    RECOMP_CALL(sub_150316F0); /* 0x1504F07D: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F082: pop ecx */
    ecx = MEM32(ebp + (-0x3C28)); /* 0x1504F083: mov ecx, dword ptr [ebp - 0x3c28] */
    /* test eax, eax */ /* 0x1504F089: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F0B6; /* 0x1504F08B: jne 0x1504f0b6 */
L_1504F08D:
    PUSH32(esp, 1); /* 0x1504F08D: push 1 */
    PUSH32(esp, ecx); /* 0x1504F08F: push ecx */
    eax = ebp + (-0x3C24); /* 0x1504F090: lea eax, [ebp - 0x3c24] */
    PUSH32(esp, eax); /* 0x1504F096: push eax */
    RECOMP_CALL(sub_150320D0); /* 0x1504F097: call 0x150320d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504F09C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504F09F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F0A2: je 0x1504f273 */
L_1504F0A8:
    eax = MEM32(ebp + (-0x3C28)); /* 0x1504F0A8: mov eax, dword ptr [ebp - 0x3c28] */
    ecx = MEM32(ebp + (-0x3C2C)); /* 0x1504F0AE: mov ecx, dword ptr [ebp - 0x3c2c] */
    goto L_1504F0F2; /* 0x1504F0B4: jmp 0x1504f0f2 */
L_1504F0B6:
    eax = MEM32(ebp + (-0x3C14)); /* 0x1504F0B6: mov eax, dword ptr [ebp - 0x3c14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1504F0BC: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1504F0BE: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1504F0C0: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F0C3: jbe 0x1504f273 */
L_1504F0C9:
    PUSH32(esp, 2); /* 0x1504F0C9: push 2 */
    PUSH32(esp, ecx); /* 0x1504F0CB: push ecx */
    eax = ebp + (-0x3C24); /* 0x1504F0CC: lea eax, [ebp - 0x3c24] */
    PUSH32(esp, eax); /* 0x1504F0D2: push eax */
    RECOMP_CALL(sub_150320D0); /* 0x1504F0D3: call 0x150320d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504F0D8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504F0DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F0DE: je 0x1504f273 */
L_1504F0E4:
    eax = MEM32(ebp + (-0x3C28)); /* 0x1504F0E4: mov eax, dword ptr [ebp - 0x3c28] */
    ecx = MEM32(ebp + (-0x3C2C)); /* 0x1504F0EA: mov ecx, dword ptr [ebp - 0x3c2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504F0F0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504F0F1: inc ecx */
    _flag_k = FK_INC;
L_1504F0F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504F0F2: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504F0F3: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C2C)) = ecx; /* 0x1504F0F4: mov dword ptr [ebp - 0x3c2c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F0FA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1504F0FC: push ecx */
    PUSH32(esp, ecx); /* 0x1504F0FD: push ecx */
    PUSH32(esp, 5); /* 0x1504F0FE: push 5 */
    MEM32(ebp + (-0x3C28)) = eax; /* 0x1504F100: mov dword ptr [ebp - 0x3c28], eax */
    eax = ebp + (-0xC); /* 0x1504F106: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1504F109: push eax */
    PUSH32(esp, 1); /* 0x1504F10A: push 1 */
    eax = ebp + (-0x3C24); /* 0x1504F10C: lea eax, [ebp - 0x3c24] */
    PUSH32(esp, eax); /* 0x1504F112: push eax */
    PUSH32(esp, ecx); /* 0x1504F113: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x3C4C))); /* 0x1504F114: push dword ptr [ebp - 0x3c4c] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1504F11A: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C44)) = eax; /* 0x1504F120: mov dword ptr [ebp - 0x3c44], eax */
    /* test eax, eax */ /* 0x1504F126: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F128: je 0x1504f273 */
L_1504F12E:
    PUSH32(esp, 0); /* 0x1504F12E: push 0 */
    ecx = ebp + (-0x3C18); /* 0x1504F130: lea ecx, [ebp - 0x3c18] */
    PUSH32(esp, ecx); /* 0x1504F136: push ecx */
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504F137: mov ecx, dword ptr [ebp - 0x3c1c] */
    PUSH32(esp, eax); /* 0x1504F13D: push eax */
    eax = ebp + (-0xC); /* 0x1504F13E: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1504F141: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F142: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F148: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F14F: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F152: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F158: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F15A: je 0x1504f27e */
L_1504F160:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x3C18)); /* 0x1504F160: add edi, dword ptr [ebp - 0x3c18] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x3C44)); /* 0x1504F166: mov eax, dword ptr [ebp - 0x3c44] */
    /* cmp MEM32(ebp + (-0x3C18)), eax */ /* 0x1504F16C: cmp dword ptr [ebp - 0x3c18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F172: jl 0x1504f273 */
L_1504F178:
    /* cmp MEM8(ebp + (-0x3C1D)), 0xAu */ /* 0x1504F178: cmp byte ptr [ebp - 0x3c1d], 0xa */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3C1D))) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F25F; /* 0x1504F17F: jne 0x1504f25f */
L_1504F185:
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504F185: mov ecx, dword ptr [ebp - 0x3c1c] */
    eax = ebp + (-0x3C18); /* 0x1504F18B: lea eax, [ebp - 0x3c18] */
    PUSH32(esp, 0); /* 0x1504F191: push 0 */
    PUSH32(esp, eax); /* 0x1504F193: push eax */
    PUSH32(esp, 1); /* 0x1504F194: push 1 */
    eax = ebp + (-0xC); /* 0x1504F196: lea eax, [ebp - 0xc] */
    MEM8(ebp + (-0xC)) = (uint8_t)(0xDu); /* 0x1504F199: mov byte ptr [ebp - 0xc], 0xd */
    PUSH32(esp, eax); /* 0x1504F19D: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F19E: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F1A4: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F1AB: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F1AE: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F1B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F1B6: je 0x1504f27e */
L_1504F1BC:
    /* cmp MEM32(ebp + (-0x3C18)), 1 */ /* 0x1504F1BC: cmp dword ptr [ebp - 0x3c18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504F273; /* 0x1504F1C3: jl 0x1504f273 */
L_1504F1C9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3C38)) = MEM32(ebp + (-0x3C38)) + 1; /* 0x1504F1C9: inc dword ptr [ebp - 0x3c38] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504F1CF: inc edi */
    _flag_k = FK_INC;
    goto L_1504F25F; /* 0x1504F1D0: jmp 0x1504f25f */
L_1504F1D5:
    /* cmp ebx, 1 */ /* 0x1504F1D5: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F1DF; /* 0x1504F1D8: je 0x1504f1df */
L_1504F1DA:
    /* cmp ebx, 2 */ /* 0x1504F1DA: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F213; /* 0x1504F1DD: jne 0x1504f213 */
L_1504F1DF:
    eax = (uint32_t)MEM16(ecx); /* 0x1504F1DF: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504F1E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(ebp + (-0x3C40)) */ /* 0x1504F1E4: cmp ax, word ptr [ebp - 0x3c40] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x3C40))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0x3C24)) = (uint16_t)(LO16(eax)); /* 0x1504F1EB: mov word ptr [ebp - 0x3c24], ax */
    eax = MEM32(ebp + (-0x3C2C)); /* 0x1504F1F2: mov eax, dword ptr [ebp - 0x3c2c] */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504F1F8: sete dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1504F1FB: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C30)) = edx; /* 0x1504F1FE: mov dword ptr [ebp - 0x3c30], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1504F204: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C28)) = ecx; /* 0x1504F207: mov dword ptr [ebp - 0x3c28], ecx */
    MEM32(ebp + (-0x3C2C)) = eax; /* 0x1504F20D: mov dword ptr [ebp - 0x3c2c], eax */
L_1504F213:
    /* cmp ebx, 1 */ /* 0x1504F213: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F21D; /* 0x1504F216: je 0x1504f21d */
L_1504F218:
    /* cmp ebx, 2 */ /* 0x1504F218: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F26B; /* 0x1504F21B: jne 0x1504f26b */
L_1504F21D:
    PUSH32(esp, MEM32(ebp + (-0x3C24))); /* 0x1504F21D: push dword ptr [ebp - 0x3c24] */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504F223: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F228: pop ecx */
    /* cmp LO16(eax), MEM16(ebp + (-0x3C24)) */ /* 0x1504F229: cmp ax, word ptr [ebp - 0x3c24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x3C24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F230: jne 0x1504f27e */
L_1504F232:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1504F232: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x3C30)), 0 */ /* 0x1504F235: cmp dword ptr [ebp - 0x3c30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F25F; /* 0x1504F23C: je 0x1504f25f */
L_1504F23E:
    PUSH32(esp, 0xDu); /* 0x1504F23E: push 0xd */
    eax = POP32_VAL(esp); /* 0x1504F240: pop eax */
    PUSH32(esp, eax); /* 0x1504F241: push eax */
    MEM16(ebp + (-0x3C24)) = (uint16_t)(LO16(eax)); /* 0x1504F242: mov word ptr [ebp - 0x3c24], ax */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504F249: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F24E: pop ecx */
    /* cmp LO16(eax), MEM16(ebp + (-0x3C24)) */ /* 0x1504F24F: cmp ax, word ptr [ebp - 0x3c24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x3C24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F256: jne 0x1504f27e */
L_1504F258:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504F258: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3C38)) = MEM32(ebp + (-0x3C38)) + 1; /* 0x1504F259: inc dword ptr [ebp - 0x3c38] */
    _flag_k = FK_INC;
L_1504F25F:
    eax = MEM32(ebp + (-0x3C2C)); /* 0x1504F25F: mov eax, dword ptr [ebp - 0x3c2c] */
    ecx = MEM32(ebp + (-0x3C28)); /* 0x1504F265: mov ecx, dword ptr [ebp - 0x3c28] */
L_1504F26B:
    /* cmp eax, esi */ /* 0x1504F26B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F05B; /* 0x1504F26D: jb 0x1504f05b */
L_1504F273:
    esi = MEM32(ebp + (-0x3C30)); /* 0x1504F273: mov esi, dword ptr [ebp - 0x3c30] */
    goto L_1504F6A1; /* 0x1504F279: jmp 0x1504f6a1 */
L_1504F27E:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504F27E: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504F284: mov esi, eax */
    goto L_1504F6A1; /* 0x1504F286: jmp 0x1504f6a1 */
L_1504F28B:
    esi = MEM32(ebp + (-0x3C30)); /* 0x1504F28B: mov esi, dword ptr [ebp - 0x3c30] */
    goto L_1504F6C3; /* 0x1504F291: jmp 0x1504f6c3 */
L_1504F296:
    edx = MEM32(ebp + (-0x3C34)); /* 0x1504F296: mov edx, dword ptr [ebp - 0x3c34] */
L_1504F29C:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x3C48)) * (int32_t)0x24u); /* 0x1504F29C: imul eax, dword ptr [ebp - 0x3c48], 0x24 */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504F2A3: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    /* cmp MEM8(ecx + eax + 0x4), 0 */ /* 0x1504F2AA: cmp byte ptr [ecx + eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504F67C; /* 0x1504F2AF: jge 0x1504f67c */
L_1504F2B5:
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F2B5: mov edx, dword ptr [ebp - 0x3c14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504F2BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C24)) = esi; /* 0x1504F2BD: mov dword ptr [ebp - 0x3c24], esi */
    /* test ebx, ebx */ /* 0x1504F2C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F3B1; /* 0x1504F2C5: jne 0x1504f3b1 */
L_1504F2CB:
    MEM32(ebp + (-0x3C1C)) = edx; /* 0x1504F2CB: mov dword ptr [ebp - 0x3c1c], edx */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1504F2D1: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504F6F1; /* 0x1504F2D4: jbe 0x1504f6f1 */
L_1504F2DA:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x3C48)) * (int32_t)0x24u); /* 0x1504F2DA: imul eax, dword ptr [ebp - 0x3c48], 0x24 */
    MEM32(ebp + (-0x3C44)) = eax; /* 0x1504F2E1: mov dword ptr [ebp - 0x3c44], eax */
L_1504F2E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F2E7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebp + (-0x2810); /* 0x1504F2E9: lea ebx, [ebp - 0x2810] */
    eax = edx; /* 0x1504F2EF: mov eax, edx */
    MEM32(ebp + (-0x3C30)) = ecx; /* 0x1504F2F1: mov dword ptr [ebp - 0x3c30], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x3C14)); /* 0x1504F2F7: sub eax, dword ptr [ebp - 0x3c14] */
    _flag_k = FK_CMP;
L_1504F2FD:
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1504F2FD: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504F346; /* 0x1504F300: jae 0x1504f346 */
L_1504F302:
    SET_LO8(ecx, MEM8(edx)); /* 0x1504F302: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1504F304: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504F305: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x3C1D)) = (uint8_t)(LO8(ecx)); /* 0x1504F306: mov byte ptr [ebp - 0x3c1d], cl */
    /* cmp LO8(ecx), 0xAu */ /* 0x1504F30C: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x3C1C)) = edx; /* 0x1504F30F: mov dword ptr [ebp - 0x3c1c], edx */
    ecx = MEM32(ebp + (-0x3C30)); /* 0x1504F315: mov ecx, dword ptr [ebp - 0x3c30] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F328; /* 0x1504F31B: jne 0x1504f328 */
L_1504F31D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3C38)) = MEM32(ebp + (-0x3C38)) + 1; /* 0x1504F31D: inc dword ptr [ebp - 0x3c38] */
    _flag_k = FK_INC;
    MEM8(ebx) = (uint8_t)(0xDu); /* 0x1504F323: mov byte ptr [ebx], 0xd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504F326: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504F327: inc ecx */
    _flag_k = FK_INC;
L_1504F328:
    SET_LO8(edx, MEM8(ebp + (-0x3C1D))); /* 0x1504F328: mov dl, byte ptr [ebp - 0x3c1d] */
    MEM8(ebx) = (uint8_t)(LO8(edx)); /* 0x1504F32E: mov byte ptr [ebx], dl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504F330: inc ebx */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x3C1C)); /* 0x1504F331: mov edx, dword ptr [ebp - 0x3c1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504F337: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C30)) = ecx; /* 0x1504F338: mov dword ptr [ebp - 0x3c30], ecx */
    /* cmp ecx, 0x13FFu */ /* 0x1504F33E: cmp ecx, 0x13ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F2FD; /* 0x1504F344: jb 0x1504f2fd */
L_1504F346:
    ecx = MEM32(ebp + (-0x3C44)); /* 0x1504F346: mov ecx, dword ptr [ebp - 0x3c44] */
    eax = ebp + (-0x2810); /* 0x1504F34C: lea eax, [ebp - 0x2810] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1504F352: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x3C3C); /* 0x1504F354: lea eax, [ebp - 0x3c3c] */
    PUSH32(esp, 0); /* 0x1504F35A: push 0 */
    PUSH32(esp, eax); /* 0x1504F35C: push eax */
    PUSH32(esp, ebx); /* 0x1504F35D: push ebx */
    eax = ebp + (-0x2810); /* 0x1504F35E: lea eax, [ebp - 0x2810] */
    PUSH32(esp, eax); /* 0x1504F364: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F365: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F36B: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F372: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F375: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F37B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F37D: je 0x1504f27e */
L_1504F383:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x3C3C)); /* 0x1504F383: add edi, dword ptr [ebp - 0x3c3c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x3C3C)), ebx */ /* 0x1504F389: cmp dword ptr [ebp - 0x3c3c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C3C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504F6A1; /* 0x1504F38F: jl 0x1504f6a1 */
L_1504F395:
    edx = MEM32(ebp + (-0x3C1C)); /* 0x1504F395: mov edx, dword ptr [ebp - 0x3c1c] */
    eax = edx; /* 0x1504F39B: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x3C14)); /* 0x1504F39D: sub eax, dword ptr [ebp - 0x3c14] */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1504F3A3: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F2E7; /* 0x1504F3A6: jb 0x1504f2e7 */
L_1504F3AC:
    goto L_1504F6A1; /* 0x1504F3AC: jmp 0x1504f6a1 */
L_1504F3B1:
    /* cmp ebx, 2 */ /* 0x1504F3B1: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F4EE; /* 0x1504F3B4: jne 0x1504f4ee */
L_1504F3BA:
    eax = edx; /* 0x1504F3BA: mov eax, edx */
    MEM32(ebp + (-0x3C18)) = eax; /* 0x1504F3BC: mov dword ptr [ebp - 0x3c18], eax */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1504F3C2: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504F6F1; /* 0x1504F3C5: jbe 0x1504f6f1 */
L_1504F3CB:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x3C48)) * (int32_t)0x24u); /* 0x1504F3CB: imul ecx, dword ptr [ebp - 0x3c48], 0x24 */
    MEM32(ebp + (-0x3C40)) = 0xAu; /* 0x1504F3D2: mov dword ptr [ebp - 0x3c40], 0xa */
    MEM32(ebp + (-0x3C30)) = ecx; /* 0x1504F3DC: mov dword ptr [ebp - 0x3c30], ecx */
L_1504F3E2:
    MEM32(ebp + (-0x3C1C)) = eax; /* 0x1504F3E2: mov dword ptr [ebp - 0x3c1c], eax */
    ebx = ebp + (-0x3C10); /* 0x1504F3E8: lea ebx, [ebp - 0x3c10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F3EE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C1C))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x3C1C)) = MEM32(ebp + (-0x3C1C)) - edx; /* 0x1504F3F0: sub dword ptr [ebp - 0x3c1c], edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x3C1C)); /* 0x1504F3F6: mov edx, dword ptr [ebp - 0x3c1c] */
L_1504F3FC:
    MEM32(ebp + (-0x3C4C)) = eax; /* 0x1504F3FC: mov dword ptr [ebp - 0x3c4c], eax */
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1504F402: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504F477; /* 0x1504F405: jae 0x1504f477 */
L_1504F407:
    esi = (uint32_t)MEM16(eax); /* 0x1504F407: movzx esi, word ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1504F40A: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1504F40D: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C44)) = esi; /* 0x1504F410: mov dword ptr [ebp - 0x3c44], esi */
    /* cmp LO16(esi), MEM16(ebp + (-0x3C40)) */ /* 0x1504F416: cmp si, word ptr [ebp - 0x3c40] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x3C40))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = MEM32(ebp + (-0x3C24)); /* 0x1504F41D: mov esi, dword ptr [ebp - 0x3c24] */
    MEM32(ebp + (-0x3C18)) = eax; /* 0x1504F423: mov dword ptr [ebp - 0x3c18], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F44C; /* 0x1504F429: jne 0x1504f44c */
L_1504F42B:
    /* cmp ecx, 0x13FCu */ /* 0x1504F42B: cmp ecx, 0x13fc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13FCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504F46B; /* 0x1504F431: ja 0x1504f46b */
L_1504F433:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C38))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C38)) = MEM32(ebp + (-0x3C38)) + 2; /* 0x1504F433: add dword ptr [ebp - 0x3c38], 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xDu); /* 0x1504F43A: push 0xd */
    eax = POP32_VAL(esp); /* 0x1504F43C: pop eax */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1504F43D: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1504F440: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x3C18)); /* 0x1504F443: mov eax, dword ptr [ebp - 0x3c18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1504F449: add ecx, 2 */
    _flag_k = FK_ADD;
L_1504F44C:
    esi = MEM32(ebp + (-0x3C44)); /* 0x1504F44C: mov esi, dword ptr [ebp - 0x3c44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1504F452: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM16(ebx) = (uint16_t)(LO16(esi)); /* 0x1504F455: mov word ptr [ebx], si */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1504F458: add ebx, 2 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x3C24)); /* 0x1504F45B: mov esi, dword ptr [ebp - 0x3c24] */
    /* cmp ecx, 0x13FEu */ /* 0x1504F461: cmp ecx, 0x13fe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x13FEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F3FC; /* 0x1504F467: jb 0x1504f3fc */
L_1504F469:
    goto L_1504F477; /* 0x1504F469: jmp 0x1504f477 */
L_1504F46B:
    eax = MEM32(ebp + (-0x3C4C)); /* 0x1504F46B: mov eax, dword ptr [ebp - 0x3c4c] */
    MEM32(ebp + (-0x3C18)) = eax; /* 0x1504F471: mov dword ptr [ebp - 0x3c18], eax */
L_1504F477:
    ecx = MEM32(ebp + (-0x3C30)); /* 0x1504F477: mov ecx, dword ptr [ebp - 0x3c30] */
    eax = ebp + (-0x3C10); /* 0x1504F47D: lea eax, [ebp - 0x3c10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1504F483: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x3C3C); /* 0x1504F485: lea eax, [ebp - 0x3c3c] */
    PUSH32(esp, 0); /* 0x1504F48B: push 0 */
    PUSH32(esp, eax); /* 0x1504F48D: push eax */
    PUSH32(esp, ebx); /* 0x1504F48E: push ebx */
    eax = ebp + (-0x3C10); /* 0x1504F48F: lea eax, [ebp - 0x3c10] */
    PUSH32(esp, eax); /* 0x1504F495: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F496: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F49C: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F4A3: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F4A6: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F4AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F4AE: je 0x1504f27e */
L_1504F4B4:
    eax = MEM32(ebp + (-0x3C3C)); /* 0x1504F4B4: mov eax, dword ptr [ebp - 0x3c3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1504F4BA: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x1504F4BC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504F6A1; /* 0x1504F4BE: jl 0x1504f6a1 */
L_1504F4C4:
    /* test eax, eax */ /* 0x1504F4C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F6A1; /* 0x1504F4C6: je 0x1504f6a1 */
L_1504F4CC:
    eax = MEM32(ebp + (-0x3C18)); /* 0x1504F4CC: mov eax, dword ptr [ebp - 0x3c18] */
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F4D2: mov edx, dword ptr [ebp - 0x3c14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1504F4D8: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1504F4DA: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x3C18)); /* 0x1504F4DD: mov eax, dword ptr [ebp - 0x3c18] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F3E2; /* 0x1504F4E3: jb 0x1504f3e2 */
L_1504F4E9:
    goto L_1504F6A7; /* 0x1504F4E9: jmp 0x1504f6a7 */
L_1504F4EE:
    ebx = MEM32(ebp + 0x10); /* 0x1504F4EE: mov ebx, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x1504F4F1: mov ecx, edx */
    MEM32(ebp + (-0x3C1C)) = ecx; /* 0x1504F4F3: mov dword ptr [ebp - 0x3c1c], ecx */
    /* test ebx, ebx */ /* 0x1504F4F9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F6F1; /* 0x1504F4FB: je 0x1504f6f1 */
L_1504F501:
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x3C48)) * (int32_t)0x24u); /* 0x1504F501: imul eax, dword ptr [ebp - 0x3c48], 0x24 */
    MEM32(ebp + (-0x3C40)) = 0xAu; /* 0x1504F508: mov dword ptr [ebp - 0x3c40], 0xa */
    MEM32(ebp + (-0x3C28)) = eax; /* 0x1504F512: mov dword ptr [ebp - 0x3c28], eax */
L_1504F518:
    esi = ecx; /* 0x1504F518: mov esi, ecx */
    eax = ebp + (-0x6B8); /* 0x1504F51A: lea eax, [ebp - 0x6b8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504F520: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x3C14)); /* 0x1504F522: sub esi, dword ptr [ebp - 0x3c14] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C18)) = esi; /* 0x1504F528: mov dword ptr [ebp - 0x3c18], esi */
    esi = MEM32(ebp + (-0x3C24)); /* 0x1504F52E: mov esi, dword ptr [ebp - 0x3c24] */
L_1504F534:
    MEM32(ebp + (-0x3C4C)) = ecx; /* 0x1504F534: mov dword ptr [ebp - 0x3c4c], ecx */
    /* cmp MEM32(ebp + (-0x3C18)), ebx */ /* 0x1504F53A: cmp dword ptr [ebp - 0x3c18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504F5AF; /* 0x1504F540: jae 0x1504f5af */
L_1504F542:
    esi = (uint32_t)MEM16(ecx); /* 0x1504F542: movzx esi, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1504F545: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C18)) = MEM32(ebp + (-0x3C18)) + 2; /* 0x1504F548: add dword ptr [ebp - 0x3c18], 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), MEM16(ebp + (-0x3C40)) */ /* 0x1504F54F: cmp si, word ptr [ebp - 0x3c40] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x3C40))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x3C44)) = esi; /* 0x1504F556: mov dword ptr [ebp - 0x3c44], esi */
    esi = MEM32(ebp + (-0x3C24)); /* 0x1504F55C: mov esi, dword ptr [ebp - 0x3c24] */
    MEM32(ebp + (-0x3C1C)) = ecx; /* 0x1504F562: mov dword ptr [ebp - 0x3c1c], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F584; /* 0x1504F568: jne 0x1504f584 */
L_1504F56A:
    /* cmp edx, 0x6A6u */ /* 0x1504F56A: cmp edx, 0x6a6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6A6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504F5A3; /* 0x1504F570: ja 0x1504f5a3 */
L_1504F572:
    PUSH32(esp, 0xDu); /* 0x1504F572: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1504F574: pop ecx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1504F575: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1504F578: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504F57B: mov ecx, dword ptr [ebp - 0x3c1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1504F581: add edx, 2 */
    _flag_k = FK_ADD;
L_1504F584:
    esi = MEM32(ebp + (-0x3C44)); /* 0x1504F584: mov esi, dword ptr [ebp - 0x3c44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1504F58A: add edx, 2 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x1504F58D: mov word ptr [eax], si */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1504F590: add eax, 2 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x3C24)); /* 0x1504F593: mov esi, dword ptr [ebp - 0x3c24] */
    /* cmp edx, 0x6A8u */ /* 0x1504F599: cmp edx, 0x6a8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6A8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F534; /* 0x1504F59F: jb 0x1504f534 */
L_1504F5A1:
    goto L_1504F5AF; /* 0x1504F5A1: jmp 0x1504f5af */
L_1504F5A3:
    ecx = MEM32(ebp + (-0x3C4C)); /* 0x1504F5A3: mov ecx, dword ptr [ebp - 0x3c4c] */
    MEM32(ebp + (-0x3C1C)) = ecx; /* 0x1504F5A9: mov dword ptr [ebp - 0x3c1c], ecx */
L_1504F5AF:
    PUSH32(esp, 0); /* 0x1504F5AF: push 0 */
    PUSH32(esp, 0); /* 0x1504F5B1: push 0 */
    PUSH32(esp, 0xD55u); /* 0x1504F5B3: push 0xd55 */
    ecx = ebp + (-0x1410); /* 0x1504F5B8: lea ecx, [ebp - 0x1410] */
    PUSH32(esp, ecx); /* 0x1504F5BE: push ecx */
    ecx = ebp + (-0x6B8); /* 0x1504F5BF: lea ecx, [ebp - 0x6b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1504F5C5: sub eax, ecx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504F5C7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1504F5C8: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1504F5CA: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    PUSH32(esp, eax); /* 0x1504F5CC: push eax */
    eax = ecx; /* 0x1504F5CD: mov eax, ecx */
    PUSH32(esp, eax); /* 0x1504F5CF: push eax */
    PUSH32(esp, 0); /* 0x1504F5D0: push 0 */
    PUSH32(esp, 0xFDE9u); /* 0x1504F5D2: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1504F5D7: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C2C)) = eax; /* 0x1504F5DD: mov dword ptr [ebp - 0x3c2c], eax */
    /* test eax, eax */ /* 0x1504F5E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F27E; /* 0x1504F5E5: je 0x1504f27e */
L_1504F5EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F5EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C18)) = ecx; /* 0x1504F5ED: mov dword ptr [ebp - 0x3c18], ecx */
L_1504F5F3:
    PUSH32(esp, 0); /* 0x1504F5F3: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1504F5F5: sub eax, ecx */
    _flag_k = FK_CMP;
    edx = ebp + (-0x3C3C); /* 0x1504F5F7: lea edx, [ebp - 0x3c3c] */
    PUSH32(esp, edx); /* 0x1504F5FD: push edx */
    PUSH32(esp, eax); /* 0x1504F5FE: push eax */
    eax = ebp + (-0x1410); /* 0x1504F5FF: lea eax, [ebp - 0x1410] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504F605: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x3C28)); /* 0x1504F607: mov ecx, dword ptr [ebp - 0x3c28] */
    PUSH32(esp, eax); /* 0x1504F60D: push eax */
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F60E: mov eax, dword ptr [ebp - 0x3c34] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F614: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F61B: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F61E: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F646; /* 0x1504F626: je 0x1504f646 */
L_1504F628:
    ecx = MEM32(ebp + (-0x3C18)); /* 0x1504F628: mov ecx, dword ptr [ebp - 0x3c18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x3C3C)); /* 0x1504F62E: add ecx, dword ptr [ebp - 0x3c3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x3C2C)); /* 0x1504F634: mov eax, dword ptr [ebp - 0x3c2c] */
    MEM32(ebp + (-0x3C18)) = ecx; /* 0x1504F63A: mov dword ptr [ebp - 0x3c18], ecx */
    /* cmp eax, ecx */ /* 0x1504F640: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1504F5F3; /* 0x1504F642: jg 0x1504f5f3 */
L_1504F644:
    goto L_1504F662; /* 0x1504F644: jmp 0x1504f662 */
L_1504F646:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504F646: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504F64C: mov esi, eax */
    eax = MEM32(ebp + (-0x3C2C)); /* 0x1504F64E: mov eax, dword ptr [ebp - 0x3c2c] */
    MEM32(ebp + (-0x3C24)) = esi; /* 0x1504F654: mov dword ptr [ebp - 0x3c24], esi */
    /* cmp eax, MEM32(ebp + (-0x3C18)) */ /* 0x1504F65A: cmp eax, dword ptr [ebp - 0x3c18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1504F6A1; /* 0x1504F660: jg 0x1504f6a1 */
L_1504F662:
    ecx = MEM32(ebp + (-0x3C1C)); /* 0x1504F662: mov ecx, dword ptr [ebp - 0x3c1c] */
    edi = ecx; /* 0x1504F668: mov edi, ecx */
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F66A: mov edx, dword ptr [ebp - 0x3c14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1504F670: sub edi, edx */
    _flag_k = FK_CMP;
    /* cmp edi, ebx */ /* 0x1504F672: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504F518; /* 0x1504F674: jb 0x1504f518 */
L_1504F67A:
    goto L_1504F6A7; /* 0x1504F67A: jmp 0x1504f6a7 */
L_1504F67C:
    PUSH32(esp, 0); /* 0x1504F67C: push 0 */
    edx = ebp + (-0x3C3C); /* 0x1504F67E: lea edx, [ebp - 0x3c3c] */
    PUSH32(esp, edx); /* 0x1504F684: push edx */
    PUSH32(esp, esi); /* 0x1504F685: push esi */
    PUSH32(esp, MEM32(ebp + (-0x3C14))); /* 0x1504F686: push dword ptr [ebp - 0x3c14] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F68C: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1504F68F: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F6B5; /* 0x1504F697: je 0x1504f6b5 */
L_1504F699:
    edi = MEM32(ebp + (-0x3C3C)); /* 0x1504F699: mov edi, dword ptr [ebp - 0x3c3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504F69F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504F6A1:
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F6A1: mov edx, dword ptr [ebp - 0x3c14] */
L_1504F6A7:
    /* test edi, edi */ /* 0x1504F6A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F6C3; /* 0x1504F6A9: je 0x1504f6c3 */
L_1504F6AB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x3C38)); /* 0x1504F6AB: sub edi, dword ptr [ebp - 0x3c38] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x1504F6B1: mov eax, edi */
    goto L_1504F72B; /* 0x1504F6B3: jmp 0x1504f72b */
L_1504F6B5:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504F6B5: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x3C14)); /* 0x1504F6BB: mov edx, dword ptr [ebp - 0x3c14] */
    esi = eax; /* 0x1504F6C1: mov esi, eax */
L_1504F6C3:
    /* test esi, esi */ /* 0x1504F6C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F6F1; /* 0x1504F6C5: je 0x1504f6f1 */
L_1504F6C7:
    PUSH32(esp, 5); /* 0x1504F6C7: push 5 */
    ebx = POP32_VAL(esp); /* 0x1504F6C9: pop ebx */
    /* cmp esi, ebx */ /* 0x1504F6CA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F6E5; /* 0x1504F6CC: jne 0x1504f6e5 */
L_1504F6CE:
    RECOMP_CALL(sub_15036430); /* 0x1504F6CE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504F6D3: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504F6D9: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504F6DE: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_1504EF37; /* 0x1504F6E0: jmp 0x1504ef37 */
L_1504F6E5:
    PUSH32(esp, esi); /* 0x1504F6E5: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x1504F6E6: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F6EB: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504EF37; /* 0x1504F6EC: jmp 0x1504ef37 */
L_1504F6F1:
    eax = MEM32(ebp + (-0x3C34)); /* 0x1504F6F1: mov eax, dword ptr [ebp - 0x3c34] */
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x3C48)) * (int32_t)0x24u); /* 0x1504F6F7: imul ecx, dword ptr [ebp - 0x3c48], 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F6FE: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 0x40u */ /* 0x1504F705: test byte ptr [eax + ecx + 4], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F711; /* 0x1504F70A: je 0x1504f711 */
L_1504F70C:
    /* cmp MEM8(edx), 0x1Au */ /* 0x1504F70C: cmp byte ptr [edx], 0x1a */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F729; /* 0x1504F70F: je 0x1504f729 */
L_1504F711:
    RECOMP_CALL(sub_15036430); /* 0x1504F711: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x1Cu; /* 0x1504F716: mov dword ptr [eax], 0x1c */
    RECOMP_CALL(sub_150363E0); /* 0x1504F71C: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504F721: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504EF37; /* 0x1504F724: jmp 0x1504ef37 */
L_1504F729:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F729: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504F72B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504F72B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1504F72E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504F72F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504F730: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1504F732: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1504F733: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504F738: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504F739: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504F773(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504F773u);

L_1504F773:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F773: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504F775: push eax */
    PUSH32(esp, eax); /* 0x1504F776: push eax */
    PUSH32(esp, 3); /* 0x1504F777: push 3 */
    PUSH32(esp, eax); /* 0x1504F779: push eax */
    PUSH32(esp, 3); /* 0x1504F77A: push 3 */
    PUSH32(esp, 0xC0000000u); /* 0x1504F77C: push 0xc0000000 */
    PUSH32(esp, 0x15004DC0u); /* 0x1504F781: push 0x15004dc0 */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x1504F786: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BCED0) = eax; /* 0x1504F78C: mov dword ptr [0x150bced0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504F791: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504F798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504F798u);

L_1504F798:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F798: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504F79A: push eax */
    PUSH32(esp, eax); /* 0x1504F79B: push eax */
    PUSH32(esp, 3); /* 0x1504F79C: push 3 */
    PUSH32(esp, eax); /* 0x1504F79E: push eax */
    PUSH32(esp, 3); /* 0x1504F79F: push 3 */
    PUSH32(esp, 0x40000000u); /* 0x1504F7A1: push 0x40000000 */
    PUSH32(esp, 0x15004DD0u); /* 0x1504F7A6: push 0x15004dd0 */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x1504F7AB: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BCED4) = eax; /* 0x1504F7B1: mov dword ptr [0x150bced4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504F7B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FB0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FB0Du);

L_1504FB0D:
    PUSH32(esp, ebx); /* 0x1504FB0D: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504FB0E: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FB13: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB14: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FB1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FB1Bu);

L_1504FB1B:
    edi = edi; /* 0x1504FB1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504FB1D: push ebp */
    ebp = esp; /* 0x1504FB1E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504FB20: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3A4u; /* 0x1504FB23: sub eax, 0x3a4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504FB52; /* 0x1504FB28: je 0x1504fb52 */
L_1504FB2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1504FB2A: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504FB4B; /* 0x1504FB2D: je 0x1504fb4b */
L_1504FB2F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x1504FB2F: sub eax, 0xd */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504FB44; /* 0x1504FB32: je 0x1504fb44 */
L_1504FB34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504FB34: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504FB3D; /* 0x1504FB37: je 0x1504fb3d */
L_1504FB39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504FB39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504FB3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB3C: ret  */
L_1504FB3D:
    eax = 0x404u; /* 0x1504FB3D: mov eax, 0x404 */
    ebp = POP32_VAL(esp); /* 0x1504FB42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB43: ret  */
L_1504FB44:
    eax = 0x412u; /* 0x1504FB44: mov eax, 0x412 */
    ebp = POP32_VAL(esp); /* 0x1504FB49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB4A: ret  */
L_1504FB4B:
    eax = 0x804u; /* 0x1504FB4B: mov eax, 0x804 */
    ebp = POP32_VAL(esp); /* 0x1504FB50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB51: ret  */
L_1504FB52:
    eax = 0x411u; /* 0x1504FB52: mov eax, 0x411 */
    ebp = POP32_VAL(esp); /* 0x1504FB57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FB58: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FB5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FB5Fu);

L_1504FB5F:
    edi = edi; /* 0x1504FB5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504FB61: push ebp */
    ebp = esp; /* 0x1504FB62: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1504FB64: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1504FB67: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1504FB6A: push 0 */
    RECOMP_CALL(sub_1502F870); /* 0x1504FB6C: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BDB9C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDB9C) = MEM32(0x150BDB9C) & 0; /* 0x1504FB71: and dword ptr [0x150bdb9c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1504FB78: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1504FB7B: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FB92; /* 0x1504FB7E: jne 0x1504fb92 */
L_1504FB80:
    MEM32(0x150BDB9C) = 1; /* 0x1504FB80: mov dword ptr [0x150bdb9c], 1 */
    RECOMP_ICALL(MEM32(0x150C01A4)); /* 0x1504FB8A: call dword ptr [0x150c01a4] */
    RECOMP_FLAGS_IN();
    goto L_1504FBBE; /* 0x1504FB90: jmp 0x1504fbbe */
L_1504FB92:
    /* cmp eax, 0xFFFFFFFDu */ /* 0x1504FB92: cmp eax, -3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FBA9; /* 0x1504FB95: jne 0x1504fba9 */
L_1504FB97:
    MEM32(0x150BDB9C) = 1; /* 0x1504FB97: mov dword ptr [0x150bdb9c], 1 */
    RECOMP_ICALL(MEM32(0x150C01A0)); /* 0x1504FBA1: call dword ptr [0x150c01a0] */
    RECOMP_FLAGS_IN();
    goto L_1504FBBE; /* 0x1504FBA7: jmp 0x1504fbbe */
L_1504FBA9:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x1504FBA9: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FBBE; /* 0x1504FBAC: jne 0x1504fbbe */
L_1504FBAE:
    eax = MEM32(ebp + (-0x10)); /* 0x1504FBAE: mov eax, dword ptr [ebp - 0x10] */
    MEM32(0x150BDB9C) = 1; /* 0x1504FBB1: mov dword ptr [0x150bdb9c], 1 */
    eax = MEM32(eax + 0x4); /* 0x1504FBBB: mov eax, dword ptr [eax + 4] */
L_1504FBBE:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1504FBBE: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FBCB; /* 0x1504FBC2: je 0x1504fbcb */
L_1504FBC4:
    ecx = MEM32(ebp + (-0x8)); /* 0x1504FBC4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1504FBC7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504FBCB:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504FBCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FBCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FBD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FBD3u);

L_1504FBD3:
    edi = edi; /* 0x1504FBD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504FBD5: push ebp */
    ebp = esp; /* 0x1504FBD6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1504FBD8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504FBD9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504FBDC: push esi */
    PUSH32(esp, edi); /* 0x1504FBDD: push edi */
    PUSH32(esp, 0x101u); /* 0x1504FBDE: push 0x101 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504FBE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x1C; /* 0x1504FBE5: lea eax, [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1504FBE8: push esi */
    PUSH32(esp, eax); /* 0x1504FBE9: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504FBEA: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504FBEF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = esi; /* 0x1504FBF2: mov dword ptr [ebx + 4], esi */
    MEM32(ebx + 0x8) = esi; /* 0x1504FBF5: mov dword ptr [ebx + 8], esi */
    edi = ebx + 0x10; /* 0x1504FBF8: lea edi, [ebx + 0x10] */
    MEM32(ebx + 0xC) = esi; /* 0x1504FBFB: mov dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504FBFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1504FC00: stosd dword ptr es:[edi], eax */
    ecx = esi; /* 0x1504FC01: mov ecx, esi */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1504FC03: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1504FC04: stosd dword ptr es:[edi], eax */
L_1504FC05:
    SET_LO8(eax, MEM8(ecx + 0x150BD0FC)); /* 0x1504FC05: mov al, byte ptr [ecx + 0x150bd0fc] */
    MEM8(ebx + ecx + 0x1C) = (uint8_t)(LO8(eax)); /* 0x1504FC0B: mov byte ptr [ebx + ecx + 0x1c], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FC0F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x101u */ /* 0x1504FC10: cmp ecx, 0x101 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1504FC05; /* 0x1504FC16: jl 0x1504fc05 */
L_1504FC18:
    SET_LO8(eax, MEM8(esi + 0x150BD1FD)); /* 0x1504FC18: mov al, byte ptr [esi + 0x150bd1fd] */
    MEM8(ebx + esi + 0x11D) = (uint8_t)(LO8(eax)); /* 0x1504FC1E: mov byte ptr [ebx + esi + 0x11d], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504FC25: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x100u */ /* 0x1504FC26: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1504FC18; /* 0x1504FC2C: jl 0x1504fc18 */
L_1504FC2E:
    edi = POP32_VAL(esp); /* 0x1504FC2E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504FC2F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504FC30: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1504FC31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FC32: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FC39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FC39u);

L_1504FC39:
    edi = edi; /* 0x1504FC39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504FC3B: push ebp */
    ebp = esp; /* 0x1504FC3C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x520u; /* 0x1504FC3E: sub esp, 0x520 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1504FC44: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504FC49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504FC4B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1504FC4E: push ebx */
    PUSH32(esp, esi); /* 0x1504FC4F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504FC50: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x518); /* 0x1504FC53: lea eax, [ebp - 0x518] */
    PUSH32(esp, edi); /* 0x1504FC59: push edi */
    PUSH32(esp, eax); /* 0x1504FC5A: push eax */
    MEM32(ebp + (-0x51C)) = esi; /* 0x1504FC5B: mov dword ptr [ebp - 0x51c], esi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1504FC61: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x150C0194)); /* 0x1504FC64: call dword ptr [0x150c0194] */
    RECOMP_FLAGS_IN();
    edi = 0x100u; /* 0x1504FC6A: mov edi, 0x100 */
    /* test eax, eax */ /* 0x1504FC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504FD73; /* 0x1504FC71: je 0x1504fd73 */
L_1504FC77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504FC77: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1504FC79: mov eax, ebx */
L_1504FC7B:
    MEM8(ebp + eax + (-0x104)) = (uint8_t)(LO8(eax)); /* 0x1504FC7B: mov byte ptr [ebp + eax - 0x104], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504FC82: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1504FC83: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504FC7B; /* 0x1504FC85: jb 0x1504fc7b */
L_1504FC87:
    SET_LO8(eax, MEM8(ebp + (-0x512))); /* 0x1504FC87: mov al, byte ptr [ebp - 0x512] */
    MEM8(ebp + (-0x104)) = (uint8_t)(0x20u); /* 0x1504FC8D: mov byte ptr [ebp - 0x104], 0x20 */
    /* test LO8(eax), LO8(eax) */ /* 0x1504FC94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504FCCF; /* 0x1504FC96: je 0x1504fccf */
L_1504FC98:
    esi = ebp + (-0x512); /* 0x1504FC98: lea esi, [ebp - 0x512] */
L_1504FC9E:
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x1504FC9E: movzx ecx, byte ptr [esi + 1] */
    edx = (uint32_t)LO8(eax); /* 0x1504FCA2: movzx edx, al */
    /* cmp edx, ecx */ /* 0x1504FCA5: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504FCC0; /* 0x1504FCA7: ja 0x1504fcc0 */
L_1504FCA9:
    eax = ebp + (-0x104); /* 0x1504FCA9: lea eax, [ebp - 0x104] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1504FCAF: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1504FCB1: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FCB3: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1504FCB4: push ecx */
    PUSH32(esp, 0x20u); /* 0x1504FCB5: push 0x20 */
    PUSH32(esp, eax); /* 0x1504FCB7: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504FCB8: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504FCBD: add esp, 0xc */
    _flag_k = FK_ADD;
L_1504FCC0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504FCC0: add esi, 2 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x1504FCC3: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504FCC5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504FC9E; /* 0x1504FCC7: jne 0x1504fc9e */
L_1504FCC9:
    esi = MEM32(ebp + (-0x51C)); /* 0x1504FCC9: mov esi, dword ptr [ebp - 0x51c] */
L_1504FCCF:
    PUSH32(esp, ebx); /* 0x1504FCCF: push ebx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1504FCD0: push dword ptr [esi + 0xc] */
    eax = ebp + (-0x504); /* 0x1504FCD3: lea eax, [ebp - 0x504] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1504FCD9: push dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x1504FCDC: push eax */
    PUSH32(esp, edi); /* 0x1504FCDD: push edi */
    eax = ebp + (-0x104); /* 0x1504FCDE: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1504FCE4: push eax */
    PUSH32(esp, 1); /* 0x1504FCE5: push 1 */
    PUSH32(esp, ebx); /* 0x1504FCE7: push ebx */
    RECOMP_CALL(sub_1505E653); /* 0x1504FCE8: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504FCED: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1504FCEE: push dword ptr [esi + 4] */
    eax = ebp + (-0x204); /* 0x1504FCF1: lea eax, [ebp - 0x204] */
    PUSH32(esp, edi); /* 0x1504FCF7: push edi */
    PUSH32(esp, eax); /* 0x1504FCF8: push eax */
    PUSH32(esp, edi); /* 0x1504FCF9: push edi */
    eax = ebp + (-0x104); /* 0x1504FCFA: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1504FD00: push eax */
    PUSH32(esp, edi); /* 0x1504FD01: push edi */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1504FD02: push dword ptr [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x1504FD05: push ebx */
    RECOMP_CALL(sub_15058910); /* 0x1504FD06: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x1504FD0B: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x304); /* 0x1504FD0E: lea eax, [ebp - 0x304] */
    PUSH32(esp, ebx); /* 0x1504FD14: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1504FD15: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1504FD18: push edi */
    PUSH32(esp, eax); /* 0x1504FD19: push eax */
    PUSH32(esp, edi); /* 0x1504FD1A: push edi */
    eax = ebp + (-0x104); /* 0x1504FD1B: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1504FD21: push eax */
    PUSH32(esp, 0x200u); /* 0x1504FD22: push 0x200 */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1504FD27: push dword ptr [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x1504FD2A: push ebx */
    RECOMP_CALL(sub_15058910); /* 0x1504FD2B: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1504FD30: add esp, 0x24 */
    _flag_k = FK_ADD;
    eax = esi + 0x1D; /* 0x1504FD33: lea eax, [esi + 0x1d] */
    ecx = ebx; /* 0x1504FD36: mov ecx, ebx */
L_1504FD38:
    edx = (uint32_t)MEM16(ebp + ecx * 2 + (-0x504)); /* 0x1504FD38: movzx edx, word ptr [ebp + ecx*2 - 0x504] */
    /* test LO8(edx), 1 */ /* 0x1504FD40: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504FD51; /* 0x1504FD43: je 0x1504fd51 */
L_1504FD45:
    _flag_a = (uint32_t)((MEM8(eax) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 0x10u)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 0x10u); /* 0x1504FD45: or byte ptr [eax], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, MEM8(ebp + ecx + (-0x204))); /* 0x1504FD48: mov dl, byte ptr [ebp + ecx - 0x204] */
    goto L_1504FD64; /* 0x1504FD4F: jmp 0x1504fd64 */
L_1504FD51:
    /* test LO8(edx), 2 */ /* 0x1504FD51: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504FD62; /* 0x1504FD54: je 0x1504fd62 */
L_1504FD56:
    _flag_a = (uint32_t)((MEM8(eax) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 0x20u)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 0x20u); /* 0x1504FD56: or byte ptr [eax], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, MEM8(ebp + ecx + (-0x304))); /* 0x1504FD59: mov dl, byte ptr [ebp + ecx - 0x304] */
    goto L_1504FD64; /* 0x1504FD60: jmp 0x1504fd64 */
L_1504FD62:
    SET_LO8(edx, LO8(ebx)); /* 0x1504FD62: mov dl, bl */
L_1504FD64:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FD64: inc ecx */
    _flag_k = FK_INC;
    MEM8(eax + 0x100) = (uint8_t)(LO8(edx)); /* 0x1504FD65: mov byte ptr [eax + 0x100], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504FD6B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1504FD6C: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504FD38; /* 0x1504FD6F: jne 0x1504fd38 */
L_1504FD71:
    goto L_1504FDD0; /* 0x1504FD71: jmp 0x1504fdd0 */
L_1504FD73:
    PUSH32(esp, 0xFFFFFFA2u); /* 0x1504FD73: push -0x5e */
    eax = POP32_VAL(esp); /* 0x1504FD75: pop eax */
    PUSH32(esp, 0xFFFFFF82u); /* 0x1504FD76: push -0x7e */
    edx = POP32_VAL(esp); /* 0x1504FD78: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1504FD79: sub edx, esi */
    _flag_k = FK_CMP;
    ecx = esi + 0x1D; /* 0x1504FD7B: lea ecx, [esi + 0x1d] */
    MEM32(ebp + (-0x51C)) = edx; /* 0x1504FD7E: mov dword ptr [ebp - 0x51c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1504FD84: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0xFFFFFFE3u); /* 0x1504FD86: push -0x1d */
    edx = POP32_VAL(esp); /* 0x1504FD88: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1504FD89: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x520)) = eax; /* 0x1504FD8B: mov dword ptr [ebp - 0x520], eax */
    esi = MEM32(ebp + (-0x51C)); /* 0x1504FD91: mov esi, dword ptr [ebp - 0x51c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504FD97: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504FD99:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504FD99: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x19u */ /* 0x1504FD9B: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504FDA8; /* 0x1504FD9E: ja 0x1504fda8 */
L_1504FDA0:
    _flag_a = (uint32_t)((MEM8(ecx) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(ecx) | 0x10u)) << 24;
    MEM8(ecx) = (uint8_t)(MEM8(ecx) | 0x10u); /* 0x1504FDA0: or byte ptr [ecx], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx + 0x20; /* 0x1504FDA3: lea eax, [ecx + 0x20] */
    goto L_1504FDB6; /* 0x1504FDA6: jmp 0x1504fdb6 */
L_1504FDA8:
    eax = esi + ecx; /* 0x1504FDA8: lea eax, [esi + ecx] */
    /* cmp eax, 0x19u */ /* 0x1504FDAB: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504FDBA; /* 0x1504FDAE: ja 0x1504fdba */
L_1504FDB0:
    _flag_a = (uint32_t)((MEM8(ecx) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(ecx) | 0x20u)) << 24;
    MEM8(ecx) = (uint8_t)(MEM8(ecx) | 0x20u); /* 0x1504FDB0: or byte ptr [ecx], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx + (-0x20); /* 0x1504FDB3: lea eax, [ecx - 0x20] */
L_1504FDB6:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x1504FDB6: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1504FDBC; /* 0x1504FDB8: jmp 0x1504fdbc */
L_1504FDBA:
    SET_LO8(eax, LO8(ebx)); /* 0x1504FDBA: mov al, bl */
L_1504FDBC:
    MEM8(ecx + 0x100) = (uint8_t)(LO8(eax)); /* 0x1504FDBC: mov byte ptr [ecx + 0x100], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FDC2: inc ecx */
    _flag_k = FK_INC;
    eax = ecx + edx; /* 0x1504FDC3: lea eax, [ecx + edx] */
    /* cmp eax, edi */ /* 0x1504FDC6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x520)); /* 0x1504FDC8: mov eax, dword ptr [ebp - 0x520] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504FD99; /* 0x1504FDCE: jb 0x1504fd99 */
L_1504FDD0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504FDD0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1504FDD3: pop edi */
    esi = POP32_VAL(esp); /* 0x1504FDD4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504FDD5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1504FDD7: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1504FDD8: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504FDDD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FDDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FDE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FDE5u);

L_1504FDE5:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x1504FDE5: push -3 */
    RECOMP_CALL(sub_1504FEF0); /* 0x1504FDE7: call 0x1504fef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FDEC: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504FDED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FDEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FDF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FDF6u);

L_1504FDF6:
    PUSH32(esp, 0xCu); /* 0x1504FDF6: push 0xc */
    PUSH32(esp, 0x150B09B8u); /* 0x1504FDF8: push 0x150b09b8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504FDFD: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504FE02: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504FE04: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_15068820); /* 0x1504FE07: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1504FE0C: mov edi, eax */
    /* test MEM8(edi + 0x70), 2 */ /* 0x1504FE0E: test byte ptr [edi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504FE1D; /* 0x1504FE12: jne 0x1504fe1d */
L_1504FE14:
    /* test MEM8(0x150BD32C), 1 */ /* 0x1504FE14: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504FE22; /* 0x1504FE1B: jne 0x1504fe22 */
L_1504FE1D:
    /* cmp MEM32(edi + 0x6C), esi */ /* 0x1504FE1D: cmp dword ptr [edi + 0x6c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FE85; /* 0x1504FE20: jne 0x1504fe85 */
L_1504FE22:
    PUSH32(esp, 0xDu); /* 0x1504FE22: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x1504FE24: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FE29: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504FE2A: mov dword ptr [ebp - 4], esi */
    esi = MEM32(edi + 0x68); /* 0x1504FE2D: mov esi, dword ptr [edi + 0x68] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504FE30: mov dword ptr [ebp - 0x1c], esi */
    /* cmp esi, MEM32(0x150BC06C) */ /* 0x1504FE33: cmp esi, dword ptr [0x150bc06c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BC06C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FE6B; /* 0x1504FE39: je 0x1504fe6b */
L_1504FE3B:
    /* test esi, esi */ /* 0x1504FE3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504FE57; /* 0x1504FE3D: je 0x1504fe57 */
L_1504FE3F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504FE3F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x1504FE42: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1504FE57; /* 0x1504FE46: jne 0x1504fe57 */
L_1504FE48:
    /* cmp esi, 0x150BD0E0u */ /* 0x1504FE48: cmp esi, 0x150bd0e0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FE57; /* 0x1504FE4E: je 0x1504fe57 */
L_1504FE50:
    PUSH32(esp, esi); /* 0x1504FE50: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1504FE51: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FE56: pop ecx */
L_1504FE57:
    eax = MEM32(0x150BC06C); /* 0x1504FE57: mov eax, dword ptr [0x150bc06c] */
    MEM32(edi + 0x68) = eax; /* 0x1504FE5C: mov dword ptr [edi + 0x68], eax */
    esi = MEM32(0x150BC06C); /* 0x1504FE5F: mov esi, dword ptr [0x150bc06c] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504FE65: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1504FE68: lock inc dword ptr [esi] */
    _flag_k = FK_INC;
L_1504FE6B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504FE6B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504FE7C); /* 0x1504FE72: call 0x1504fe7c */
    RECOMP_FLAGS_IN();
    goto L_1504FE88; /* 0x1504FE77: jmp 0x1504fe88 */
L_1504FE85:
    esi = MEM32(edi + 0x68); /* 0x1504FE85: mov esi, dword ptr [edi + 0x68] */
L_1504FE88:
    /* test esi, esi */ /* 0x1504FE88: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504FE94; /* 0x1504FE8A: jne 0x1504fe94 */
L_1504FE8C:
    PUSH32(esp, 0x20u); /* 0x1504FE8C: push 0x20 */
    RECOMP_CALL(sub_15068070); /* 0x1504FE8E: call 0x15068070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FE93: pop ecx */
L_1504FE94:
    eax = esi; /* 0x1504FE94: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504FE96: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504FE99: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504FEA0: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504FEA1: pop edi */
    esi = POP32_VAL(esp); /* 0x1504FEA2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504FEA3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504FEA4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FEA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FE7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FE7Cu);

L_1504FE7C:
    PUSH32(esp, 0xDu); /* 0x1504FE7C: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x1504FE7E: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FE83: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FE84: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FEB0u);

L_1504FEB0:
    edi = edi; /* 0x1504FEB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504FEB2: push ebp */
    ebp = esp; /* 0x1504FEB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1504FEB5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1504FEB8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504FEB9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10); /* 0x1504FEBB: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1504FEBE: push esi */
    RECOMP_CALL(sub_1502F870); /* 0x1504FEBF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1504FEC4: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1504FEC7: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FECF; /* 0x1504FECA: je 0x1504fecf */
L_1504FECC:
    esi = MEM32(eax + 0x4); /* 0x1504FECC: mov esi, dword ptr [eax + 4] */
L_1504FECF:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1504FECF: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FEDC; /* 0x1504FED3: je 0x1504fedc */
L_1504FED5:
    ecx = MEM32(ebp + (-0x8)); /* 0x1504FED5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1504FED8: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504FEDC:
    eax = esi; /* 0x1504FEDC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504FEDE: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504FEDF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504FEE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504FEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504FEF0u);

L_1504FEF0:
    PUSH32(esp, 0x14u); /* 0x1504FEF0: push 0x14 */
    PUSH32(esp, 0x150B09D8u); /* 0x1504FEF2: push 0x150b09d8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504FEF7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504FEFC: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15068820); /* 0x1504FEFF: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1504FF04: mov ebx, eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1504FF06: mov dword ptr [ebp - 0x20], ebx */
    RECOMP_CALL(sub_1504FDF6); /* 0x1504FF09: call 0x1504fdf6 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x68); /* 0x1504FF0E: mov esi, dword ptr [ebx + 0x68] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504FF11: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504FB5F); /* 0x1504FF14: call 0x1504fb5f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FF19: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1504FF1A: mov dword ptr [ebp - 0x24], eax */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1504FF1D: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505007E; /* 0x1504FF20: je 0x1505007e */
L_1504FF26:
    PUSH32(esp, 0x220u); /* 0x1504FF26: push 0x220 */
    RECOMP_CALL(sub_15048F2F); /* 0x1504FF2B: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FF30: pop ecx */
    ebx = eax; /* 0x1504FF31: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1504FF33: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050080; /* 0x1504FF35: je 0x15050080 */
L_1504FF3B:
    ecx = 0x88u; /* 0x1504FF3B: mov ecx, 0x88 */
    esi = MEM32(ebp + (-0x20)); /* 0x1504FF40: mov esi, dword ptr [ebp - 0x20] */
    esi = MEM32(esi + 0x68); /* 0x1504FF43: mov esi, dword ptr [esi + 0x68] */
    edi = ebx; /* 0x1504FF46: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1504FF48: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504FF4A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x1504FF4C: mov dword ptr [ebx], esi */
    PUSH32(esp, ebx); /* 0x1504FF4E: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1504FF4F: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_15050098); /* 0x1504FF52: call 0x15050098 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FF57: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504FF58: pop ecx */
    edi = eax; /* 0x1504FF59: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1504FF5B: mov dword ptr [ebp - 0x24], edi */
    /* test edi, edi */ /* 0x1504FF5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505005D; /* 0x1504FF60: jne 0x1505005d */
L_1504FF66:
    eax = MEM32(ebp + (-0x20)); /* 0x1504FF66: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax + 0x68); /* 0x1504FF69: mov ecx, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1504FF6C: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x1504FF6F: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1504FF8A; /* 0x1504FF73: jne 0x1504ff8a */
L_1504FF75:
    ecx = MEM32(eax + 0x68); /* 0x1504FF75: mov ecx, dword ptr [eax + 0x68] */
    /* cmp ecx, 0x150BD0E0u */ /* 0x1504FF78: cmp ecx, 0x150bd0e0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FF8A; /* 0x1504FF7E: je 0x1504ff8a */
L_1504FF80:
    PUSH32(esp, ecx); /* 0x1504FF80: push ecx */
    RECOMP_CALL(sub_15048840); /* 0x1504FF81: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FF86: pop ecx */
    eax = MEM32(ebp + (-0x20)); /* 0x1504FF87: mov eax, dword ptr [ebp - 0x20] */
L_1504FF8A:
    MEM32(eax + 0x68) = ebx; /* 0x1504FF8A: mov dword ptr [eax + 0x68], ebx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1504FF8D: lock inc dword ptr [ebx] */
    _flag_k = FK_INC;
    /* test MEM8(eax + 0x70), 2 */ /* 0x1504FF90: test byte ptr [eax + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050080; /* 0x1504FF94: jne 0x15050080 */
L_1504FF9A:
    /* test MEM8(0x150BD32C), 1 */ /* 0x1504FF9A: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050080; /* 0x1504FFA1: je 0x15050080 */
L_1504FFA7:
    PUSH32(esp, 0xDu); /* 0x1504FFA7: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x1504FFA9: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504FFAE: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504FFAF: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx + 0x4); /* 0x1504FFB2: mov eax, dword ptr [ebx + 4] */
    MEM32(0x150BDB84) = eax; /* 0x1504FFB5: mov dword ptr [0x150bdb84], eax */
    eax = MEM32(ebx + 0x8); /* 0x1504FFBA: mov eax, dword ptr [ebx + 8] */
    MEM32(0x150BDB88) = eax; /* 0x1504FFBD: mov dword ptr [0x150bdb88], eax */
    eax = MEM32(ebx + 0xC); /* 0x1504FFC2: mov eax, dword ptr [ebx + 0xc] */
    MEM32(0x150BDB8C) = eax; /* 0x1504FFC5: mov dword ptr [0x150bdb8c], eax */
    ecx = esi; /* 0x1504FFCA: mov ecx, esi */
L_1504FFCC:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1504FFCC: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 5 */ /* 0x1504FFCF: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504FFE4; /* 0x1504FFD2: jge 0x1504ffe4 */
L_1504FFD4:
    SET_LO16(eax, MEM16(ebx + ecx * 2 + 0x10)); /* 0x1504FFD4: mov ax, word ptr [ebx + ecx*2 + 0x10] */
    MEM16(ecx * 2 + 0x150BDB90) = (uint16_t)(LO16(eax)); /* 0x1504FFD9: mov word ptr [ecx*2 + 0x150bdb90], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FFE1: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1504FFCC; /* 0x1504FFE2: jmp 0x1504ffcc */
L_1504FFE4:
    ecx = esi; /* 0x1504FFE4: mov ecx, esi */
L_1504FFE6:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1504FFE6: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0x101u */ /* 0x1504FFE9: cmp ecx, 0x101 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504FFFE; /* 0x1504FFEF: jge 0x1504fffe */
L_1504FFF1:
    SET_LO8(eax, MEM8(ecx + ebx + 0x1C)); /* 0x1504FFF1: mov al, byte ptr [ecx + ebx + 0x1c] */
    MEM8(ecx + 0x150BCED8) = (uint8_t)(LO8(eax)); /* 0x1504FFF5: mov byte ptr [ecx + 0x150bced8], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504FFFB: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1504FFE6; /* 0x1504FFFC: jmp 0x1504ffe6 */
L_1504FFFE:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504FFFE: mov dword ptr [ebp - 0x1c], esi */
    /* cmp esi, 0x100u */ /* 0x15050001: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15050019; /* 0x15050007: jge 0x15050019 */
L_15050009:
    SET_LO8(eax, MEM8(esi + ebx + 0x11D)); /* 0x15050009: mov al, byte ptr [esi + ebx + 0x11d] */
    MEM8(esi + 0x150BCFE0) = (uint8_t)(LO8(eax)); /* 0x15050010: mov byte ptr [esi + 0x150bcfe0], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050016: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1504FFFE; /* 0x15050017: jmp 0x1504fffe */
L_15050019:
    eax = MEM32(0x150BC06C); /* 0x15050019: mov eax, dword ptr [0x150bc06c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1505001E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x15050021: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1505003A; /* 0x15050025: jne 0x1505003a */
L_15050027:
    eax = MEM32(0x150BC06C); /* 0x15050027: mov eax, dword ptr [0x150bc06c] */
    /* cmp eax, 0x150BD0E0u */ /* 0x1505002C: cmp eax, 0x150bd0e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505003A; /* 0x15050031: je 0x1505003a */
L_15050033:
    PUSH32(esp, eax); /* 0x15050033: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15050034: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050039: pop ecx */
L_1505003A:
    MEM32(0x150BC06C) = ebx; /* 0x1505003A: mov dword ptr [0x150bc06c], ebx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x15050040: lock inc dword ptr [ebx] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15050043: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15050054); /* 0x1505004A: call 0x15050054 */
    RECOMP_FLAGS_IN();
    goto L_15050080; /* 0x1505004F: jmp 0x15050080 */
L_1505005D:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1505005D: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050080; /* 0x15050060: jne 0x15050080 */
L_15050062:
    /* cmp ebx, 0x150BD0E0u */ /* 0x15050062: cmp ebx, 0x150bd0e0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050071; /* 0x15050068: je 0x15050071 */
L_1505006A:
    PUSH32(esp, ebx); /* 0x1505006A: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1505006B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050070: pop ecx */
L_15050071:
    RECOMP_CALL(sub_15036430); /* 0x15050071: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15050076: mov dword ptr [eax], 0x16 */
    goto L_15050080; /* 0x1505007C: jmp 0x15050080 */
L_1505007E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505007E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050080:
    eax = edi; /* 0x15050080: mov eax, edi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15050082: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15050085: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505008C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505008D: pop edi */
    esi = POP32_VAL(esp); /* 0x1505008E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505008F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050090: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050091: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050054u);

L_15050054:
    PUSH32(esp, 0xDu); /* 0x15050054: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x15050056: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505005B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505005C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050098u);

L_15050098:
    edi = edi; /* 0x15050098: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505009A: push ebp */
    ebp = esp; /* 0x1505009B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1505009D: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150500A0: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150500A5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150500A7: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150500AA: push ebx */
    PUSH32(esp, esi); /* 0x150500AB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150500AC: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150500AF: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150500B0: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x28)) = esi; /* 0x150500B3: mov dword ptr [ebp - 0x28], esi */
    RECOMP_CALL(sub_1504FB5F); /* 0x150500B6: call 0x1504fb5f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150500BB: mov ebx, eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x150500BD: mov dword ptr [ebp - 0x2c], ebx */
    ecx = POP32_VAL(esp); /* 0x150500C0: pop ecx */
    /* test ebx, ebx */ /* 0x150500C1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505027B; /* 0x150500C3: je 0x1505027b */
L_150500C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150500C9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x150500CB: mov ecx, edi */
    eax = edi; /* 0x150500CD: mov eax, edi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x150500CF: mov dword ptr [ebp - 0x20], ecx */
L_150500D2:
    /* cmp MEM32(eax + 0x15004DE8), ebx */ /* 0x150500D2: cmp dword ptr [eax + 0x15004de8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x15004DE8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150501CA; /* 0x150500D8: je 0x150501ca */
L_150500DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150500DE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x150500DF: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x150500E2: mov dword ptr [ebp - 0x20], ecx */
    /* cmp eax, 0xF0u */ /* 0x150500E5: cmp eax, 0xf0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150500D2; /* 0x150500EA: jb 0x150500d2 */
L_150500EC:
    /* cmp ebx, 0xFDE8u */ /* 0x150500EC: cmp ebx, 0xfde8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFDE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150501C2; /* 0x150500F2: je 0x150501c2 */
L_150500F8:
    /* cmp ebx, 0xFDE9u */ /* 0x150500F8: cmp ebx, 0xfde9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFDE9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505010E; /* 0x150500FE: jne 0x1505010e */
L_15050100:
    RECOMP_ICALL(MEM32(0x150C01A0)); /* 0x15050100: call dword ptr [0x150c01a0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x15050106: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150501C2; /* 0x15050108: jne 0x150501c2 */
L_1505010E:
    eax = (uint32_t)LO16(ebx); /* 0x1505010E: movzx eax, bx */
    PUSH32(esp, eax); /* 0x15050111: push eax */
    RECOMP_ICALL(MEM32(0x150C0198)); /* 0x15050112: call dword ptr [0x150c0198] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15050118: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150501C2; /* 0x1505011A: je 0x150501c2 */
L_15050120:
    eax = ebp + (-0x18); /* 0x15050120: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15050123: push eax */
    PUSH32(esp, ebx); /* 0x15050124: push ebx */
    RECOMP_ICALL(MEM32(0x150C0194)); /* 0x15050125: call dword ptr [0x150c0194] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505012B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150501B6; /* 0x1505012D: je 0x150501b6 */
L_15050133:
    PUSH32(esp, 0x101u); /* 0x15050133: push 0x101 */
    eax = esi + 0x1C; /* 0x15050138: lea eax, [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x1505013B: push edi */
    PUSH32(esp, eax); /* 0x1505013C: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1505013D: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15050142: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = ebx; /* 0x15050145: mov dword ptr [esi + 4], ebx */
    /* cmp MEM32(ebp + (-0x18)), 2 */ /* 0x15050148: cmp dword ptr [ebp - 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xC) = edi; /* 0x1505014C: mov dword ptr [esi + 0xc], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150501A6; /* 0x1505014F: jne 0x150501a6 */
L_15050151:
    /* cmp MEM8(ebp + (-0x12)), 0 */ /* 0x15050151: cmp byte ptr [ebp - 0x12], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x12); /* 0x15050155: lea eax, [ebp - 0x12] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050184; /* 0x15050158: je 0x15050184 */
L_1505015A:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x1505015A: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505015D: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050184; /* 0x1505015F: je 0x15050184 */
L_15050161:
    edi = (uint32_t)MEM8(eax); /* 0x15050161: movzx edi, byte ptr [eax] */
    ecx = (uint32_t)LO8(ecx); /* 0x15050164: movzx ecx, cl */
    /* cmp edi, ecx */ /* 0x15050167: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505017C; /* 0x15050169: ja 0x1505017c */
L_1505016B:
    edx = esi + 0x1D; /* 0x1505016B: lea edx, [esi + 0x1d] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1505016E: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x15050170: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15050172: inc ecx */
    _flag_k = FK_INC;
L_15050173:
    _flag_a = (uint32_t)((MEM8(edx) | 4)) << 24; _flag_b = (uint32_t)((MEM8(edx) | 4)) << 24;
    MEM8(edx) = (uint8_t)(MEM8(edx) | 4); /* 0x15050173: or byte ptr [edx], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15050176: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15050177: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15050173; /* 0x1505017A: jne 0x15050173 */
L_1505017C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1505017C: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1505017F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505015A; /* 0x15050182: jne 0x1505015a */
L_15050184:
    eax = esi + 0x1E; /* 0x15050184: lea eax, [esi + 0x1e] */
    ecx = 0xFEu; /* 0x15050187: mov ecx, 0xfe */
L_1505018C:
    _flag_a = (uint32_t)((MEM8(eax) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 8)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 8); /* 0x1505018C: or byte ptr [eax], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505018F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15050190: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505018C; /* 0x15050193: jne 0x1505018c */
L_15050195:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15050195: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1504FB1B); /* 0x15050198: call 0x1504fb1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505019D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1505019F: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x150501A2: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150501A5: inc edi */
    _flag_k = FK_INC;
L_150501A6:
    MEM32(esi + 0x8) = edi; /* 0x150501A6: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150501A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x10; /* 0x150501AB: lea edi, [esi + 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x150501AE: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x150501AF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x150501B0: stosd dword ptr es:[edi], eax */
    goto L_15050273; /* 0x150501B1: jmp 0x15050273 */
L_150501B6:
    /* cmp MEM32(0x150BDB9C), edi */ /* 0x150501B6: cmp dword ptr [0x150bdb9c], edi */
    _flag_a = (uint32_t)(MEM32(0x150BDB9C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505027B; /* 0x150501BC: jne 0x1505027b */
L_150501C2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150501C2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15050284; /* 0x150501C5: jmp 0x15050284 */
L_150501CA:
    PUSH32(esp, 0x101u); /* 0x150501CA: push 0x101 */
    eax = esi + 0x1C; /* 0x150501CF: lea eax, [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x150501D2: push edi */
    PUSH32(esp, eax); /* 0x150501D3: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x150501D4: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150501D9: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x20)) * (int32_t)0x30u); /* 0x150501DC: imul eax, dword ptr [ebp - 0x20], 0x30 */
    MEM32(ebp + (-0x30)) = eax; /* 0x150501E0: mov dword ptr [ebp - 0x30], eax */
    edx = eax + 0x15004DF8; /* 0x150501E3: lea edx, [eax + 0x15004df8] */
    MEM32(ebp + (-0x20)) = edx; /* 0x150501E9: mov dword ptr [ebp - 0x20], edx */
L_150501EC:
    /* cmp MEM8(edx), 0 */ /* 0x150501EC: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edx; /* 0x150501EF: mov ecx, edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505022E; /* 0x150501F1: je 0x1505022e */
L_150501F3:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x150501F3: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x150501F6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505022B; /* 0x150501F8: je 0x1505022b */
L_150501FA:
    ebx = (uint32_t)MEM8(ecx); /* 0x150501FA: movzx ebx, byte ptr [ecx] */
    eax = (uint32_t)LO8(eax); /* 0x150501FD: movzx eax, al */
    /* cmp ebx, eax */ /* 0x15050200: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050223; /* 0x15050202: ja 0x15050223 */
L_15050204:
    SET_LO8(edx, MEM8(edi + 0x15004DE0)); /* 0x15050204: mov dl, byte ptr [edi + 0x15004de0] */
    eax = esi + 0x1D; /* 0x1505020A: lea eax, [esi + 0x1d] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1505020D: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x1505020F: mov dword ptr [ebp - 0x24], eax */
    esi = eax; /* 0x15050212: mov esi, eax */
L_15050214:
    _flag_a = (uint32_t)((MEM8(esi) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(esi) | LO8(edx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | LO8(edx)); /* 0x15050214: or byte ptr [esi], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15050216: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x15050217: movzx eax, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505021B: inc esi */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x1505021C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_15050214; /* 0x1505021E: jbe 0x15050214 */
L_15050220:
    esi = MEM32(ebp + (-0x28)); /* 0x15050220: mov esi, dword ptr [ebp - 0x28] */
L_15050223:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15050223: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ecx), 0 */ /* 0x15050226: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150501F3; /* 0x15050229: jne 0x150501f3 */
L_1505022B:
    edx = MEM32(ebp + (-0x20)); /* 0x1505022B: mov edx, dword ptr [ebp - 0x20] */
L_1505022E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505022E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1505022F: add edx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edx; /* 0x15050232: mov dword ptr [ebp - 0x20], edx */
    /* cmp edi, 4 */ /* 0x15050235: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150501EC; /* 0x15050238: jb 0x150501ec */
L_1505023A:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1505023A: mov ebx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1505023D: push ebx */
    MEM32(esi + 0x4) = ebx; /* 0x1505023E: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = 1; /* 0x15050241: mov dword ptr [esi + 8], 1 */
    RECOMP_CALL(sub_1504FB1B); /* 0x15050248: call 0x1504fb1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1505024D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = eax; /* 0x15050250: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x15050253: mov eax, dword ptr [ebp - 0x30] */
    ecx = esi + 0x10; /* 0x15050256: lea ecx, [esi + 0x10] */
    PUSH32(esp, 6); /* 0x15050259: push 6 */
    edx = eax + 0x15004DEC; /* 0x1505025B: lea edx, [eax + 0x15004dec] */
    edi = POP32_VAL(esp); /* 0x15050261: pop edi */
L_15050262:
    SET_LO16(eax, MEM16(edx)); /* 0x15050262: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x15050265: lea edx, [edx + 2] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15050268: mov word ptr [ecx], ax */
    ecx = ecx + 0x2; /* 0x1505026B: lea ecx, [ecx + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505026E: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15050262; /* 0x15050271: jne 0x15050262 */
L_15050273:
    PUSH32(esp, esi); /* 0x15050273: push esi */
    RECOMP_CALL(sub_1504FC39); /* 0x15050274: call 0x1504fc39 */
    RECOMP_FLAGS_IN();
    goto L_15050281; /* 0x15050279: jmp 0x15050281 */
L_1505027B:
    PUSH32(esp, esi); /* 0x1505027B: push esi */
    RECOMP_CALL(sub_1504FBD3); /* 0x1505027C: call 0x1504fbd3 */
    RECOMP_FLAGS_IN();
L_15050281:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050281: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15050283: pop ecx */
L_15050284:
    ecx = MEM32(ebp + (-0x4)); /* 0x15050284: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15050287: pop edi */
    esi = POP32_VAL(esp); /* 0x15050288: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15050289: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505028B: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505028C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050291: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050292: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050299(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050299u);

L_15050299:
    edi = edi; /* 0x15050299: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505029B: push ebp */
    ebp = esp; /* 0x1505029C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1505029E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150502A1: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x150502A4: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150502A7: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)MEM8(ebp + 0xC); /* 0x150502AC: movzx edx, byte ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x150502B0: mov eax, dword ptr [ebp - 0xc] */
    SET_LO8(ecx, MEM8(ebp + 0x14)); /* 0x150502B3: mov cl, byte ptr [ebp + 0x14] */
    /* test MEM8(eax + edx + 0x1D), LO8(ecx) */ /* 0x150502B6: test byte ptr [eax + edx + 0x1d], cl */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150502D8; /* 0x150502BA: jne 0x150502d8 */
L_150502BC:
    ecx = MEM32(ebp + 0x10); /* 0x150502BC: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x150502BF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150502D4; /* 0x150502C1: je 0x150502d4 */
L_150502C3:
    eax = MEM32(ebp + (-0x10)); /* 0x150502C3: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xC8); /* 0x150502C6: mov eax, dword ptr [eax + 0xc8] */
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x150502CC: movzx eax, word ptr [eax + edx*2] */
    /* test ecx, eax */ /* 0x150502D0: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150502D8; /* 0x150502D2: jne 0x150502d8 */
L_150502D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150502D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150502DB; /* 0x150502D6: jmp 0x150502db */
L_150502D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150502D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150502DA: inc eax */
    _flag_k = FK_INC;
L_150502DB:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150502DB: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150502E8; /* 0x150502DF: je 0x150502e8 */
L_150502E1:
    ecx = MEM32(ebp + (-0x8)); /* 0x150502E1: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150502E4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150502E8:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150502E8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150502E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150502F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150502F0u);

L_150502F0:
    edi = edi; /* 0x150502F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150502F2: push ebp */
    ebp = esp; /* 0x150502F3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x150502F5: push 1 */
    PUSH32(esp, 0x107u); /* 0x150502F7: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150502FC: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x150502FF: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x15050301: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050306: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050309: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505030A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050320u);

L_15050320:
    edi = edi; /* 0x15050320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050322: push ebp */
    ebp = esp; /* 0x15050323: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15050325: push 1 */
    PUSH32(esp, 0x107u); /* 0x15050327: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505032C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505032F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x15050332: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050337: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505033A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505033B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050350u);

L_15050350:
    edi = edi; /* 0x15050350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050352: push ebp */
    ebp = esp; /* 0x15050353: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15050355: push 1 */
    PUSH32(esp, 0x103u); /* 0x15050357: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505035C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505035F: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x15050361: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050366: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050369: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505036A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050380u);

L_15050380:
    edi = edi; /* 0x15050380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050382: push ebp */
    ebp = esp; /* 0x15050383: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15050385: push 1 */
    PUSH32(esp, 0x103u); /* 0x15050387: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505038C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505038F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x15050392: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050397: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505039A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505039B: ret  */
    RECOMP_REGS_OUT();
}

void sub_150503B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150503B0u);

L_150503B0:
    edi = edi; /* 0x150503B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150503B2: push ebp */
    ebp = esp; /* 0x150503B3: mov ebp, esp */
    PUSH32(esp, 3); /* 0x150503B5: push 3 */
    PUSH32(esp, 0x117u); /* 0x150503B7: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150503BC: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x150503BF: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x150503C1: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150503C6: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150503C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150503CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150503E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150503E0u);

L_150503E0:
    edi = edi; /* 0x150503E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150503E2: push ebp */
    ebp = esp; /* 0x150503E3: mov ebp, esp */
    PUSH32(esp, 3); /* 0x150503E5: push 3 */
    PUSH32(esp, 0x117u); /* 0x150503E7: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150503EC: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150503EF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x150503F2: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150503F7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150503FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150503FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050410u);

L_15050410:
    edi = edi; /* 0x15050410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050412: push ebp */
    ebp = esp; /* 0x15050413: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15050415: push 1 */
    PUSH32(esp, 0); /* 0x15050417: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050419: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505041C: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x1505041E: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050423: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050426: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050427: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050430u);

L_15050430:
    edi = edi; /* 0x15050430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050432: push ebp */
    ebp = esp; /* 0x15050433: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15050435: push 1 */
    PUSH32(esp, 0); /* 0x15050437: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050439: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505043C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505043F: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050444: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050447: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050448: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050450u);

L_15050450:
    edi = edi; /* 0x15050450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050452: push ebp */
    ebp = esp; /* 0x15050453: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050455: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050457: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050470); /* 0x1505045A: call 0x15050470 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505045F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050460: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050461: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050462: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050470u);

L_15050470:
    edi = edi; /* 0x15050470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050472: push ebp */
    ebp = esp; /* 0x15050473: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050475: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050478: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1505047B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505047E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15050483: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x15050486: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150504A9; /* 0x15050488: je 0x150504a9 */
L_1505048A:
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x1505048A: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150504A9; /* 0x15050491: jne 0x150504a9 */
L_15050493:
    PUSH32(esp, 3); /* 0x15050493: push 3 */
    PUSH32(esp, 0); /* 0x15050495: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050497: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505049A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505049D: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150504A2: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x150504A5: mov ecx, eax */
    goto L_150504AB; /* 0x150504A7: jmp 0x150504ab */
L_150504A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150504A9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150504AB:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150504AB: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150504B8; /* 0x150504AF: je 0x150504b8 */
L_150504B1:
    eax = MEM32(ebp + (-0x8)); /* 0x150504B1: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150504B4: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150504B8:
    eax = ecx; /* 0x150504B8: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150504BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150504BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150504D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150504D0u);

L_150504D0:
    edi = edi; /* 0x150504D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150504D2: push ebp */
    ebp = esp; /* 0x150504D3: mov ebp, esp */
    PUSH32(esp, 3); /* 0x150504D5: push 3 */
    PUSH32(esp, 0); /* 0x150504D7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150504D9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x150504DC: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x150504DE: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150504E3: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150504E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150504E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150504F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150504F0u);

L_150504F0:
    edi = edi; /* 0x150504F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150504F2: push ebp */
    ebp = esp; /* 0x150504F3: mov ebp, esp */
    PUSH32(esp, 3); /* 0x150504F5: push 3 */
    PUSH32(esp, 0); /* 0x150504F7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150504F9: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150504FC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x150504FF: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050504: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050507: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050508: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050510u);

L_15050510:
    edi = edi; /* 0x15050510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050512: push ebp */
    ebp = esp; /* 0x15050513: mov ebp, esp */
    PUSH32(esp, 2); /* 0x15050515: push 2 */
    PUSH32(esp, 0); /* 0x15050517: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050519: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505051C: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x1505051E: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050523: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050526: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050527: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050530u);

L_15050530:
    edi = edi; /* 0x15050530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050532: push ebp */
    ebp = esp; /* 0x15050533: mov ebp, esp */
    PUSH32(esp, 2); /* 0x15050535: push 2 */
    PUSH32(esp, 0); /* 0x15050537: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050539: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505053C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505053F: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050544: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050547: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050548: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050550u);

L_15050550:
    edi = edi; /* 0x15050550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050552: push ebp */
    ebp = esp; /* 0x15050553: mov ebp, esp */
    PUSH32(esp, 4); /* 0x15050555: push 4 */
    PUSH32(esp, 0); /* 0x15050557: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050559: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505055C: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x1505055E: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050563: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050566: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050567: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050570u);

L_15050570:
    edi = edi; /* 0x15050570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050572: push ebp */
    ebp = esp; /* 0x15050573: mov ebp, esp */
    PUSH32(esp, 4); /* 0x15050575: push 4 */
    PUSH32(esp, 0); /* 0x15050577: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050579: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505057C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505057F: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050584: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050587: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050588: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050590u);

L_15050590:
    edi = edi; /* 0x15050590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050592: push ebp */
    ebp = esp; /* 0x15050593: mov ebp, esp */
    PUSH32(esp, 3); /* 0x15050595: push 3 */
    PUSH32(esp, 0x157u); /* 0x15050597: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505059C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505059F: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x150505A1: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150505A6: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150505A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150505AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150505C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150505C0u);

L_150505C0:
    edi = edi; /* 0x150505C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150505C2: push ebp */
    ebp = esp; /* 0x150505C3: mov ebp, esp */
    PUSH32(esp, 3); /* 0x150505C5: push 3 */
    PUSH32(esp, 0x157u); /* 0x150505C7: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150505CC: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150505CF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x150505D2: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150505D7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150505DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150505DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150505F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150505F0u);

L_150505F0:
    edi = edi; /* 0x150505F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150505F2: push ebp */
    ebp = esp; /* 0x150505F3: mov ebp, esp */
    PUSH32(esp, 2); /* 0x150505F5: push 2 */
    PUSH32(esp, 0x10u); /* 0x150505F7: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150505F9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x150505FC: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x150505FE: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050603: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050606: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050607: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050610u);

L_15050610:
    edi = edi; /* 0x15050610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050612: push ebp */
    ebp = esp; /* 0x15050613: mov ebp, esp */
    PUSH32(esp, 2); /* 0x15050615: push 2 */
    PUSH32(esp, 0x10u); /* 0x15050617: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050619: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505061C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505061F: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050624: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050627: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050628: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050630u);

L_15050630:
    edi = edi; /* 0x15050630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050632: push ebp */
    ebp = esp; /* 0x15050633: mov ebp, esp */
    PUSH32(esp, 8); /* 0x15050635: push 8 */
    PUSH32(esp, 0); /* 0x15050637: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050639: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1505063C: push 0 */
    RECOMP_CALL(sub_15050299); /* 0x1505063E: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050643: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050646: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050647: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050650u);

L_15050650:
    edi = edi; /* 0x15050650: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050652: push ebp */
    ebp = esp; /* 0x15050653: mov ebp, esp */
    PUSH32(esp, 8); /* 0x15050655: push 8 */
    PUSH32(esp, 0); /* 0x15050657: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050659: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505065C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15050299); /* 0x1505065F: call 0x15050299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15050664: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15050667: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050668: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050670u);

L_15050670:
    edi = edi; /* 0x15050670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050672: push ebp */
    ebp = esp; /* 0x15050673: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050675: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050677: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050690); /* 0x1505067A: call 0x15050690 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505067F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050680: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050681: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050682: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050690u);

L_15050690:
    edi = edi; /* 0x15050690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050692: push ebp */
    ebp = esp; /* 0x15050693: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050695: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050698: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505069B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505069C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x1505069F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x150506A4: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x150506A7: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150506FC; /* 0x150506AD: jbe 0x150506fc */
L_150506AF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x150506AF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x150506B3: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x150506B5: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x150506B5: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x150506B8: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x150506BB: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x150506BE: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x150506C1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505071D; /* 0x150506C5: je 0x1505071d */
L_150506C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150506C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150506C9: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x150506CA: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x150506CB: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x150506CE: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x150506D1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150506D4: push eax */
    PUSH32(esp, 2); /* 0x150506D5: push 2 */
    eax = ebp + (-0x4); /* 0x150506D7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150506DA: push eax */
    PUSH32(esp, esi); /* 0x150506DB: push esi */
    PUSH32(esp, 0); /* 0x150506DC: push 0 */
    RECOMP_CALL(sub_1505E653); /* 0x150506DE: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150506E3: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150506E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505071D; /* 0x150506E8: je 0x1505071d */
L_150506EA:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x150506EA: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505071D; /* 0x150506EF: jne 0x1505071d */
L_150506F1:
    /* test MEM32(ebp + (-0x8)), 0x107u */ /* 0x150506F1: test dword ptr [ebp - 8], 0x107 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x107u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050724; /* 0x150506F8: jne 0x15050724 */
L_150506FA:
    goto L_1505071D; /* 0x150506FA: jmp 0x1505071d */
L_150506FC:
    eax = MEM32(ebp + (-0x18)); /* 0x150506FC: mov eax, dword ptr [ebp - 0x18] */
    edx = 0x107u; /* 0x150506FF: mov edx, 0x107 */
    ecx = (uint32_t)LO8(ecx); /* 0x15050704: movzx ecx, cl */
    eax = MEM32(eax + 0xC8); /* 0x15050707: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1505070D: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050721; /* 0x15050711: jne 0x15050721 */
L_15050713:
    eax = MEM32(ebp + (-0x14)); /* 0x15050713: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(ecx + eax + 0x1D), 1 */ /* 0x15050716: test byte ptr [ecx + eax + 0x1d], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050721; /* 0x1505071B: jne 0x15050721 */
L_1505071D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505071D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15050724; /* 0x1505071F: jmp 0x15050724 */
L_15050721:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050721: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050723: inc esi */
    _flag_k = FK_INC;
L_15050724:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15050724: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050731; /* 0x15050728: je 0x15050731 */
L_1505072A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505072A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505072D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050731:
    eax = esi; /* 0x15050731: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15050733: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050734: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050735: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050740u);

L_15050740:
    edi = edi; /* 0x15050740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050742: push ebp */
    ebp = esp; /* 0x15050743: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050745: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050747: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050760); /* 0x1505074A: call 0x15050760 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505074F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050750: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050751: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050752: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050760u);

L_15050760:
    edi = edi; /* 0x15050760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050762: push ebp */
    ebp = esp; /* 0x15050763: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050765: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050768: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505076B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505076C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x1505076F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050774: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050777: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150507CE; /* 0x1505077D: jbe 0x150507ce */
L_1505077F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1505077F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050783: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050785: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050785: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050788: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x1505078B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x1505078E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050791: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150507EF; /* 0x15050795: je 0x150507ef */
L_15050797:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050797: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050799: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1505079A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1505079B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1505079E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x150507A1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150507A4: push eax */
    PUSH32(esp, 2); /* 0x150507A5: push 2 */
    eax = ebp + (-0x4); /* 0x150507A7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150507AA: push eax */
    eax = ebp + (-0x18); /* 0x150507AB: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x150507AE: push esi */
    PUSH32(esp, eax); /* 0x150507AF: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x150507B0: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150507B5: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150507B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150507EF; /* 0x150507BA: je 0x150507ef */
L_150507BC:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x150507BC: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150507EF; /* 0x150507C1: jne 0x150507ef */
L_150507C3:
    /* test MEM32(ebp + (-0x8)), 0x103u */ /* 0x150507C3: test dword ptr [ebp - 8], 0x103 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x103u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150507F6; /* 0x150507CA: jne 0x150507f6 */
L_150507CC:
    goto L_150507EF; /* 0x150507CC: jmp 0x150507ef */
L_150507CE:
    eax = MEM32(ebp + (-0x18)); /* 0x150507CE: mov eax, dword ptr [ebp - 0x18] */
    edx = 0x103u; /* 0x150507D1: mov edx, 0x103 */
    ecx = (uint32_t)LO8(ecx); /* 0x150507D6: movzx ecx, cl */
    eax = MEM32(eax + 0xC8); /* 0x150507D9: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x150507DF: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150507F3; /* 0x150507E3: jne 0x150507f3 */
L_150507E5:
    eax = MEM32(ebp + (-0x14)); /* 0x150507E5: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(ecx + eax + 0x1D), 1 */ /* 0x150507E8: test byte ptr [ecx + eax + 0x1d], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150507F3; /* 0x150507ED: jne 0x150507f3 */
L_150507EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150507EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150507F6; /* 0x150507F1: jmp 0x150507f6 */
L_150507F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150507F3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150507F5: inc esi */
    _flag_k = FK_INC;
L_150507F6:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x150507F6: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050803; /* 0x150507FA: je 0x15050803 */
L_150507FC:
    ecx = MEM32(ebp + (-0x10)); /* 0x150507FC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150507FF: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050803:
    eax = esi; /* 0x15050803: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15050805: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050806: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050807: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050810u);

L_15050810:
    edi = edi; /* 0x15050810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050812: push ebp */
    ebp = esp; /* 0x15050813: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050815: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050817: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050830); /* 0x1505081A: call 0x15050830 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505081F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050820: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050821: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050822: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050830u);

L_15050830:
    edi = edi; /* 0x15050830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050832: push ebp */
    ebp = esp; /* 0x15050833: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050835: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050838: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505083B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505083C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x1505083F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050844: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050847: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505089D; /* 0x1505084D: jbe 0x1505089d */
L_1505084F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1505084F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050853: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050855: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050855: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050858: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x1505085B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x1505085E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050861: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050899; /* 0x15050865: je 0x15050899 */
L_15050867:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050867: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050869: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1505086A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1505086B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1505086E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15050871: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15050874: push eax */
    PUSH32(esp, 2); /* 0x15050875: push 2 */
    eax = ebp + (-0x4); /* 0x15050877: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505087A: push eax */
    eax = ebp + (-0x18); /* 0x1505087B: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505087E: push esi */
    PUSH32(esp, eax); /* 0x1505087F: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15050880: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15050885: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15050888: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050899; /* 0x1505088A: je 0x15050899 */
L_1505088C:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x1505088C: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050899; /* 0x15050891: jne 0x15050899 */
L_15050893:
    /* test MEM8(ebp + (-0x8)), 4 */ /* 0x15050893: test byte ptr [ebp - 8], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150508C9; /* 0x15050897: jne 0x150508c9 */
L_15050899:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050899: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150508C9; /* 0x1505089B: jmp 0x150508c9 */
L_1505089D:
    eax = MEM32(ebp + (-0x18)); /* 0x1505089D: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x150508A0: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150508BC; /* 0x150508A7: jle 0x150508bc */
L_150508A9:
    eax = ebp + (-0x18); /* 0x150508A9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x150508AC: push eax */
    PUSH32(esp, 4); /* 0x150508AD: push 4 */
    PUSH32(esp, ecx); /* 0x150508AF: push ecx */
    RECOMP_CALL(sub_150305E0); /* 0x150508B0: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150508B5: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150508B8: mov esi, eax */
    goto L_150508C9; /* 0x150508BA: jmp 0x150508c9 */
L_150508BC:
    eax = MEM32(eax + 0xC8); /* 0x150508BC: mov eax, dword ptr [eax + 0xc8] */
    esi = (uint32_t)MEM16(eax + ecx * 2); /* 0x150508C2: movzx esi, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    esi = esi & 4; /* 0x150508C6: and esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150508C9:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x150508C9: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150508D6; /* 0x150508CD: je 0x150508d6 */
L_150508CF:
    eax = MEM32(ebp + (-0x10)); /* 0x150508CF: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150508D2: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150508D6:
    eax = esi; /* 0x150508D6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150508D8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150508D9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150508DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150508F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150508F0u);

L_150508F0:
    edi = edi; /* 0x150508F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150508F2: push ebp */
    ebp = esp; /* 0x150508F3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150508F5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150508F7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050910); /* 0x150508FA: call 0x15050910 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150508FF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050900: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050901: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050902: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050910u);

L_15050910:
    edi = edi; /* 0x15050910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050912: push ebp */
    ebp = esp; /* 0x15050913: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050915: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050918: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505091B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505091C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x1505091F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050924: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050927: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505097E; /* 0x1505092D: jbe 0x1505097e */
L_1505092F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1505092F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050933: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050935: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050935: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050938: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x1505093B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x1505093E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050941: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505099F; /* 0x15050945: je 0x1505099f */
L_15050947:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050947: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050949: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1505094A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1505094B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1505094E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15050951: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15050954: push eax */
    PUSH32(esp, 2); /* 0x15050955: push 2 */
    eax = ebp + (-0x4); /* 0x15050957: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505095A: push eax */
    eax = ebp + (-0x18); /* 0x1505095B: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505095E: push esi */
    PUSH32(esp, eax); /* 0x1505095F: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15050960: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15050965: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15050968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505099F; /* 0x1505096A: je 0x1505099f */
L_1505096C:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x1505096C: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505099F; /* 0x15050971: jne 0x1505099f */
L_15050973:
    /* test MEM32(ebp + (-0x8)), 0x117u */ /* 0x15050973: test dword ptr [ebp - 8], 0x117 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x117u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150509A6; /* 0x1505097A: jne 0x150509a6 */
L_1505097C:
    goto L_1505099F; /* 0x1505097C: jmp 0x1505099f */
L_1505097E:
    eax = MEM32(ebp + (-0x18)); /* 0x1505097E: mov eax, dword ptr [ebp - 0x18] */
    edx = 0x117u; /* 0x15050981: mov edx, 0x117 */
    ecx = (uint32_t)LO8(ecx); /* 0x15050986: movzx ecx, cl */
    eax = MEM32(eax + 0xC8); /* 0x15050989: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1505098F: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150509A3; /* 0x15050993: jne 0x150509a3 */
L_15050995:
    eax = MEM32(ebp + (-0x14)); /* 0x15050995: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(ecx + eax + 0x1D), 3 */ /* 0x15050998: test byte ptr [ecx + eax + 0x1d], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150509A3; /* 0x1505099D: jne 0x150509a3 */
L_1505099F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505099F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150509A6; /* 0x150509A1: jmp 0x150509a6 */
L_150509A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150509A3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150509A5: inc esi */
    _flag_k = FK_INC;
L_150509A6:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x150509A6: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150509B3; /* 0x150509AA: je 0x150509b3 */
L_150509AC:
    ecx = MEM32(ebp + (-0x10)); /* 0x150509AC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150509AF: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150509B3:
    eax = esi; /* 0x150509B3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150509B5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150509B6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150509B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150509C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150509C0u);

L_150509C0:
    edi = edi; /* 0x150509C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150509C2: push ebp */
    ebp = esp; /* 0x150509C3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150509C5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150509C7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150509E0); /* 0x150509CA: call 0x150509e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150509CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150509D0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150509D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150509D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150509E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150509E0u);

L_150509E0:
    edi = edi; /* 0x150509E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150509E2: push ebp */
    ebp = esp; /* 0x150509E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150509E5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150509E8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x150509EB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150509EE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x150509F3: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x150509F6: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050A11; /* 0x150509FD: jne 0x15050a11 */
L_150509FF:
    eax = MEM32(ebp + 0x8); /* 0x150509FF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7D61u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFF7D61u; /* 0x15050A02: add eax, 0xffff7d61 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x52u */ /* 0x15050A07: cmp eax, 0x52 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050A11; /* 0x15050A0A: ja 0x15050a11 */
L_15050A0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050A0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050A0E: inc eax */
    _flag_k = FK_INC;
    goto L_15050A13; /* 0x15050A0F: jmp 0x15050a13 */
L_15050A11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050A11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050A13:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050A13: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050A20; /* 0x15050A17: je 0x15050a20 */
L_15050A19:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050A19: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050A1C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050A20:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050A20: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050A21: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050A30u);

L_15050A30:
    edi = edi; /* 0x15050A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050A32: push ebp */
    ebp = esp; /* 0x15050A33: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050A35: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050A37: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050A50); /* 0x15050A3A: call 0x15050a50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050A3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050A40: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050A41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050A42: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050A50u);

L_15050A50:
    edi = edi; /* 0x15050A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050A52: push ebp */
    ebp = esp; /* 0x15050A53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050A55: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050A58: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050A5B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050A5E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15050A63: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x15050A66: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050A8A; /* 0x15050A6D: jne 0x15050a8a */
L_15050A6F:
    ecx = MEM32(ebp + 0x8); /* 0x15050A6F: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x8340); /* 0x15050A72: lea eax, [ecx - 0x8340] */
    /* cmp eax, 0x56u */ /* 0x15050A78: cmp eax, 0x56 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050A8A; /* 0x15050A7B: ja 0x15050a8a */
L_15050A7D:
    /* cmp ecx, 0x837Fu */ /* 0x15050A7D: cmp ecx, 0x837f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050A8A; /* 0x15050A83: je 0x15050a8a */
L_15050A85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050A85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050A87: inc eax */
    _flag_k = FK_INC;
    goto L_15050A8C; /* 0x15050A88: jmp 0x15050a8c */
L_15050A8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050A8A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050A8C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050A8C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050A99; /* 0x15050A90: je 0x15050a99 */
L_15050A92:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050A92: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050A95: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050A99:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050A99: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050A9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050AB0u);

L_15050AB0:
    edi = edi; /* 0x15050AB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050AB2: push ebp */
    ebp = esp; /* 0x15050AB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050AB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050AB7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050AD0); /* 0x15050ABA: call 0x15050ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050ABF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050AC0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050AC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050AC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050AD0u);

L_15050AD0:
    edi = edi; /* 0x15050AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050AD2: push ebp */
    ebp = esp; /* 0x15050AD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050AD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050AD8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050ADB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050ADE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15050AE3: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x15050AE6: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050B0A; /* 0x15050AED: jne 0x15050b0a */
L_15050AEF:
    ecx = MEM32(ebp + 0x8); /* 0x15050AEF: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x8141); /* 0x15050AF2: lea eax, [ecx - 0x8141] */
    /* cmp eax, 0x6Bu */ /* 0x15050AF8: cmp eax, 0x6b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050B0A; /* 0x15050AFB: ja 0x15050b0a */
L_15050AFD:
    /* cmp ecx, 0x817Fu */ /* 0x15050AFD: cmp ecx, 0x817f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x817Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050B0A; /* 0x15050B03: je 0x15050b0a */
L_15050B05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050B05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050B07: inc eax */
    _flag_k = FK_INC;
    goto L_15050B0C; /* 0x15050B08: jmp 0x15050b0c */
L_15050B0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050B0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050B0C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050B0C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050B19; /* 0x15050B10: je 0x15050b19 */
L_15050B12:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050B12: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050B15: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050B19:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050B19: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050B1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050B30u);

L_15050B30:
    edi = edi; /* 0x15050B30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050B32: push ebp */
    ebp = esp; /* 0x15050B33: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050B35: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050B37: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050B50); /* 0x15050B3A: call 0x15050b50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050B3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050B40: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050B41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050B42: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050B50u);

L_15050B50:
    edi = edi; /* 0x15050B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050B52: push ebp */
    ebp = esp; /* 0x15050B53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050B55: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050B58: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050B5B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050B5E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x15050B63: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ecx + 0x4), 0x3A4u */ /* 0x15050B66: cmp dword ptr [ecx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050B98; /* 0x15050B6D: jne 0x15050b98 */
L_15050B6F:
    edx = MEM32(ebp + 0x8); /* 0x15050B6F: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x15050B72: mov eax, edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050B74: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050B74: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15050B77: movzx eax, al */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15050B7A: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050B98; /* 0x15050B7F: je 0x15050b98 */
L_15050B81:
    eax = (uint32_t)LO8(edx); /* 0x15050B81: movzx eax, dl */
    /* test MEM8(eax + ecx + 0x1D), 8 */ /* 0x15050B84: test byte ptr [eax + ecx + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050B98; /* 0x15050B89: je 0x15050b98 */
L_15050B8B:
    /* cmp edx, 0x889Fu */ /* 0x15050B8B: cmp edx, 0x889f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x889Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15050B98; /* 0x15050B91: jae 0x15050b98 */
L_15050B93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050B93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050B95: inc eax */
    _flag_k = FK_INC;
    goto L_15050B9A; /* 0x15050B96: jmp 0x15050b9a */
L_15050B98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050B98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050B9A:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050B9A: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050BA7; /* 0x15050B9E: je 0x15050ba7 */
L_15050BA0:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050BA0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050BA3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050BA7:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050BA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050BA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050BB0u);

L_15050BB0:
    edi = edi; /* 0x15050BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050BB2: push ebp */
    ebp = esp; /* 0x15050BB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050BB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050BB7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050BD0); /* 0x15050BBA: call 0x15050bd0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050BBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050BC0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050BC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050BC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050BD0u);

L_15050BD0:
    edi = edi; /* 0x15050BD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050BD2: push ebp */
    ebp = esp; /* 0x15050BD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050BD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050BD8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050BDB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050BDE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x15050BE3: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x4), 0x3A4u */ /* 0x15050BE6: cmp dword ptr [edx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050C20; /* 0x15050BED: jne 0x15050c20 */
L_15050BEF:
    ecx = MEM32(ebp + 0x8); /* 0x15050BEF: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15050BF2: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050BF4: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050BF4: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15050BF7: movzx eax, al */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15050BFA: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050C20; /* 0x15050BFF: je 0x15050c20 */
L_15050C01:
    eax = (uint32_t)LO8(ecx); /* 0x15050C01: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 8 */ /* 0x15050C04: test byte ptr [eax + edx + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050C20; /* 0x15050C09: je 0x15050c20 */
L_15050C0B:
    /* cmp ecx, 0x889Fu */ /* 0x15050C0B: cmp ecx, 0x889f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x889Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15050C20; /* 0x15050C11: jb 0x15050c20 */
L_15050C13:
    /* cmp ecx, 0x9872u */ /* 0x15050C13: cmp ecx, 0x9872 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9872u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050C20; /* 0x15050C19: ja 0x15050c20 */
L_15050C1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050C1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050C1D: inc eax */
    _flag_k = FK_INC;
    goto L_15050C22; /* 0x15050C1E: jmp 0x15050c22 */
L_15050C20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050C20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050C22:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050C22: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050C2F; /* 0x15050C26: je 0x15050c2f */
L_15050C28:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050C28: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050C2B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050C2F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050C2F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050C30: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050C40u);

L_15050C40:
    edi = edi; /* 0x15050C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050C42: push ebp */
    ebp = esp; /* 0x15050C43: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050C45: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050C47: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050C60); /* 0x15050C4A: call 0x15050c60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050C4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050C50: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050C51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050C52: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050C60u);

L_15050C60:
    edi = edi; /* 0x15050C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050C62: push ebp */
    ebp = esp; /* 0x15050C63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050C65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050C68: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050C6B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050C6E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x15050C73: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x4), 0x3A4u */ /* 0x15050C76: cmp dword ptr [edx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050CB0; /* 0x15050C7D: jne 0x15050cb0 */
L_15050C7F:
    ecx = MEM32(ebp + 0x8); /* 0x15050C7F: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15050C82: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050C84: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050C84: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15050C87: movzx eax, al */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15050C8A: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050CB0; /* 0x15050C8F: je 0x15050cb0 */
L_15050C91:
    eax = (uint32_t)LO8(ecx); /* 0x15050C91: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 8 */ /* 0x15050C94: test byte ptr [eax + edx + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050CB0; /* 0x15050C99: je 0x15050cb0 */
L_15050C9B:
    /* cmp ecx, 0x989Fu */ /* 0x15050C9B: cmp ecx, 0x989f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x989Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15050CB0; /* 0x15050CA1: jb 0x15050cb0 */
L_15050CA3:
    /* cmp ecx, 0xEAA4u */ /* 0x15050CA3: cmp ecx, 0xeaa4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEAA4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15050CB0; /* 0x15050CA9: ja 0x15050cb0 */
L_15050CAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050CAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050CAD: inc eax */
    _flag_k = FK_INC;
    goto L_15050CB2; /* 0x15050CAE: jmp 0x15050cb2 */
L_15050CB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050CB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050CB2:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050CB2: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050CBF; /* 0x15050CB6: je 0x15050cbf */
L_15050CB8:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050CB8: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050CBB: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050CBF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050CBF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050CC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050CD0u);

L_15050CD0:
    edi = edi; /* 0x15050CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050CD2: push ebp */
    ebp = esp; /* 0x15050CD3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050CD5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050CD7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050CF0); /* 0x15050CDA: call 0x15050cf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050CDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050CE0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050CE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050CE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050CF0u);

L_15050CF0:
    edi = edi; /* 0x15050CF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050CF2: push ebp */
    ebp = esp; /* 0x15050CF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15050CF5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050CF8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15050CFB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15050CFE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050D03: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15050D06: mov eax, ecx */
    edx = MEM32(ebp + (-0xC)); /* 0x15050D08: mov edx, dword ptr [ebp - 0xc] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050D0B: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050D0B: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15050D0E: movzx eax, al */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15050D11: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050D27; /* 0x15050D16: je 0x15050d27 */
L_15050D18:
    eax = (uint32_t)LO8(ecx); /* 0x15050D18: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 8 */ /* 0x15050D1B: test byte ptr [eax + edx + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050D27; /* 0x15050D20: je 0x15050d27 */
L_15050D22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050D22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15050D24: inc eax */
    _flag_k = FK_INC;
    goto L_15050D29; /* 0x15050D25: jmp 0x15050d29 */
L_15050D27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15050D27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050D29:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15050D29: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050D36; /* 0x15050D2D: je 0x15050d36 */
L_15050D2F:
    ecx = MEM32(ebp + (-0x8)); /* 0x15050D2F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050D32: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050D36:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050D36: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050D37: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050D40u);

L_15050D40:
    edi = edi; /* 0x15050D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050D42: push ebp */
    ebp = esp; /* 0x15050D43: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050D45: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050D47: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050D60); /* 0x15050D4A: call 0x15050d60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050D4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050D50: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050D51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050D52: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050D60u);

L_15050D60:
    edi = edi; /* 0x15050D60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050D62: push ebp */
    ebp = esp; /* 0x15050D63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050D65: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050D68: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050D6B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050D6C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15050D6F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050D74: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050D77: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15050DCD; /* 0x15050D7D: jbe 0x15050dcd */
L_15050D7F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15050D7F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050D83: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050D85: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050D85: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050D88: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x15050D8B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x15050D8E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050D91: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050DC9; /* 0x15050D95: je 0x15050dc9 */
L_15050D97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050D97: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050D99: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15050D9A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15050D9B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15050D9E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15050DA1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15050DA4: push eax */
    PUSH32(esp, 2); /* 0x15050DA5: push 2 */
    eax = ebp + (-0x4); /* 0x15050DA7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15050DAA: push eax */
    eax = ebp + (-0x18); /* 0x15050DAB: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050DAE: push esi */
    PUSH32(esp, eax); /* 0x15050DAF: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15050DB0: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15050DB5: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15050DB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050DC9; /* 0x15050DBA: je 0x15050dc9 */
L_15050DBC:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x15050DBC: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050DC9; /* 0x15050DC1: jne 0x15050dc9 */
L_15050DC3:
    /* test MEM8(ebp + (-0x8)), 2 */ /* 0x15050DC3: test byte ptr [ebp - 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050DDB; /* 0x15050DC7: jne 0x15050ddb */
L_15050DC9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050DC9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15050DDB; /* 0x15050DCB: jmp 0x15050ddb */
L_15050DCD:
    eax = MEM32(ebp + (-0x14)); /* 0x15050DCD: mov eax, dword ptr [ebp - 0x14] */
    esi = (uint32_t)MEM8(eax + ecx + 0x1D); /* 0x15050DD0: movzx esi, byte ptr [eax + ecx + 0x1d] */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x15050DD5: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x15050DD5: shr esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x15050DD8: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050DDB:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15050DDB: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050DE8; /* 0x15050DDF: je 0x15050de8 */
L_15050DE1:
    ecx = MEM32(ebp + (-0x10)); /* 0x15050DE1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050DE4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050DE8:
    eax = esi; /* 0x15050DE8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15050DEA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050DEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050DEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050E00u);

L_15050E00:
    edi = edi; /* 0x15050E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050E02: push ebp */
    ebp = esp; /* 0x15050E03: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050E05: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050E07: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050E20); /* 0x15050E0A: call 0x15050e20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050E0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050E10: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050E11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050E12: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050E20u);

L_15050E20:
    edi = edi; /* 0x15050E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050E22: push ebp */
    ebp = esp; /* 0x15050E23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050E25: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050E28: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050E2B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050E2C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15050E2F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050E34: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050E37: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15050E8B; /* 0x15050E3D: jbe 0x15050e8b */
L_15050E3F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15050E3F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050E43: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050E45: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050E45: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050E48: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x15050E4B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x15050E4E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050E51: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050EAC; /* 0x15050E55: je 0x15050eac */
L_15050E57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050E57: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050E59: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15050E5A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15050E5B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15050E5E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15050E61: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15050E64: push eax */
    PUSH32(esp, 2); /* 0x15050E65: push 2 */
    eax = ebp + (-0x4); /* 0x15050E67: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15050E6A: push eax */
    eax = ebp + (-0x18); /* 0x15050E6B: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050E6E: push esi */
    PUSH32(esp, eax); /* 0x15050E6F: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15050E70: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15050E75: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15050E78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050EAC; /* 0x15050E7A: je 0x15050eac */
L_15050E7C:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x15050E7C: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050EAC; /* 0x15050E81: jne 0x15050eac */
L_15050E83:
    /* test MEM8(ebp + (-0x8)), 0x20u */ /* 0x15050E83: test byte ptr [ebp - 8], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050EB3; /* 0x15050E87: je 0x15050eb3 */
L_15050E89:
    goto L_15050EAC; /* 0x15050E89: jmp 0x15050eac */
L_15050E8B:
    eax = MEM32(ebp + (-0x18)); /* 0x15050E8B: mov eax, dword ptr [ebp - 0x18] */
    edx = 0x157u; /* 0x15050E8E: mov edx, 0x157 */
    ecx = (uint32_t)LO8(ecx); /* 0x15050E93: movzx ecx, cl */
    eax = MEM32(eax + 0xC8); /* 0x15050E96: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x15050E9C: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050EB0; /* 0x15050EA0: jne 0x15050eb0 */
L_15050EA2:
    eax = MEM32(ebp + (-0x14)); /* 0x15050EA2: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(ecx + eax + 0x1D), 3 */ /* 0x15050EA5: test byte ptr [ecx + eax + 0x1d], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050EB0; /* 0x15050EAA: jne 0x15050eb0 */
L_15050EAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050EAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15050EB3; /* 0x15050EAE: jmp 0x15050eb3 */
L_15050EB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050EB0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050EB2: inc esi */
    _flag_k = FK_INC;
L_15050EB3:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15050EB3: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050EC0; /* 0x15050EB7: je 0x15050ec0 */
L_15050EB9:
    ecx = MEM32(ebp + (-0x10)); /* 0x15050EB9: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050EBC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050EC0:
    eax = esi; /* 0x15050EC0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15050EC2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050EC3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050EC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050ED0u);

L_15050ED0:
    edi = edi; /* 0x15050ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050ED2: push ebp */
    ebp = esp; /* 0x15050ED3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050ED5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050ED7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050EF0); /* 0x15050EDA: call 0x15050ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050EDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050EE0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050EE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050EE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050EF0u);

L_15050EF0:
    edi = edi; /* 0x15050EF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050EF2: push ebp */
    ebp = esp; /* 0x15050EF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050EF5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050EF8: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050EFB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050EFC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15050EFF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050F04: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050F07: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15050F5B; /* 0x15050F0D: jbe 0x15050f5b */
L_15050F0F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15050F0F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050F13: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050F15: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050F15: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050F18: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x15050F1B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x15050F1E: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050F21: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050F77; /* 0x15050F25: je 0x15050f77 */
L_15050F27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050F27: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050F29: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15050F2A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15050F2B: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15050F2E: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15050F31: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15050F34: push eax */
    PUSH32(esp, 2); /* 0x15050F35: push 2 */
    eax = ebp + (-0x4); /* 0x15050F37: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15050F3A: push eax */
    eax = ebp + (-0x18); /* 0x15050F3B: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050F3E: push esi */
    PUSH32(esp, eax); /* 0x15050F3F: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x15050F40: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15050F45: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15050F48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15050F77; /* 0x15050F4A: je 0x15050f77 */
L_15050F4C:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x15050F4C: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15050F77; /* 0x15050F51: jne 0x15050f77 */
L_15050F53:
    /* test MEM8(ebp + (-0x8)), 0x10u */ /* 0x15050F53: test byte ptr [ebp - 8], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050F7E; /* 0x15050F57: jne 0x15050f7e */
L_15050F59:
    goto L_15050F77; /* 0x15050F59: jmp 0x15050f77 */
L_15050F5B:
    eax = MEM32(ebp + (-0x18)); /* 0x15050F5B: mov eax, dword ptr [ebp - 0x18] */
    ecx = (uint32_t)LO8(ecx); /* 0x15050F5E: movzx ecx, cl */
    eax = MEM32(eax + 0xC8); /* 0x15050F61: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM8(eax + ecx * 2), 0x10u */ /* 0x15050F67: test byte ptr [eax + ecx*2], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050F7B; /* 0x15050F6B: jne 0x15050f7b */
L_15050F6D:
    eax = MEM32(ebp + (-0x14)); /* 0x15050F6D: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(ecx + eax + 0x1D), 2 */ /* 0x15050F70: test byte ptr [ecx + eax + 0x1d], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15050F7B; /* 0x15050F75: jne 0x15050f7b */
L_15050F77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050F77: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15050F7E; /* 0x15050F79: jmp 0x15050f7e */
L_15050F7B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050F7B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050F7D: inc esi */
    _flag_k = FK_INC;
L_15050F7E:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15050F7E: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15050F8B; /* 0x15050F82: je 0x15050f8b */
L_15050F84:
    ecx = MEM32(ebp + (-0x10)); /* 0x15050F84: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15050F87: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15050F8B:
    eax = esi; /* 0x15050F8B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15050F8D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15050F8E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050F8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050FA0u);

L_15050FA0:
    edi = edi; /* 0x15050FA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050FA2: push ebp */
    ebp = esp; /* 0x15050FA3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15050FA5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15050FA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15050FC0); /* 0x15050FAA: call 0x15050fc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15050FAF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15050FB0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15050FB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15050FB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15050FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15050FC0u);

L_15050FC0:
    edi = edi; /* 0x15050FC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15050FC2: push ebp */
    ebp = esp; /* 0x15050FC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15050FC5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15050FC8: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x15050FCB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15050FCC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15050FCF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15050FD4: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x15050FD7: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505102B; /* 0x15050FDD: jbe 0x1505102b */
L_15050FDF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15050FDF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x15050FE3: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15050FE5: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15050FE5: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15050FE8: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x15050FEB: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x15050FEE: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15050FF1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051027; /* 0x15050FF5: je 0x15051027 */
L_15050FF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15050FF7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15050FF9: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15050FFA: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15050FFB: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15050FFE: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x15051001: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15051004: push eax */
    PUSH32(esp, 2); /* 0x15051005: push 2 */
    eax = ebp + (-0x4); /* 0x15051007: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505100A: push eax */
    PUSH32(esp, esi); /* 0x1505100B: push esi */
    PUSH32(esp, 0); /* 0x1505100C: push 0 */
    RECOMP_CALL(sub_1505E653); /* 0x1505100E: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15051013: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15051016: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051027; /* 0x15051018: je 0x15051027 */
L_1505101A:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x1505101A: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051027; /* 0x1505101F: jne 0x15051027 */
L_15051021:
    /* test MEM8(ebp + (-0x8)), 8 */ /* 0x15051021: test byte ptr [ebp - 8], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051057; /* 0x15051025: jne 0x15051057 */
L_15051027:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15051027: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15051057; /* 0x15051029: jmp 0x15051057 */
L_1505102B:
    eax = MEM32(ebp + (-0x18)); /* 0x1505102B: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x1505102E: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1505104A; /* 0x15051035: jle 0x1505104a */
L_15051037:
    eax = ebp + (-0x18); /* 0x15051037: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1505103A: push eax */
    PUSH32(esp, 8); /* 0x1505103B: push 8 */
    PUSH32(esp, ecx); /* 0x1505103D: push ecx */
    RECOMP_CALL(sub_150305E0); /* 0x1505103E: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051043: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15051046: mov esi, eax */
    goto L_15051057; /* 0x15051048: jmp 0x15051057 */
L_1505104A:
    eax = MEM32(eax + 0xC8); /* 0x1505104A: mov eax, dword ptr [eax + 0xc8] */
    esi = (uint32_t)MEM16(eax + ecx * 2); /* 0x15051050: movzx esi, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    esi = esi & 8; /* 0x15051054: and esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051057:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15051057: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051064; /* 0x1505105B: je 0x15051064 */
L_1505105D:
    eax = MEM32(ebp + (-0x10)); /* 0x1505105D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15051060: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051064:
    eax = esi; /* 0x15051064: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15051066: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051067: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051068: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051070u);

L_15051070:
    edi = edi; /* 0x15051070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051072: push ebp */
    ebp = esp; /* 0x15051073: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051075: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051077: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051090); /* 0x1505107A: call 0x15051090 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505107F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051080: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051081: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051082: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051090u);

L_15051090:
    edi = edi; /* 0x15051090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051092: push ebp */
    ebp = esp; /* 0x15051093: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15051095: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15051098: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1505109B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505109C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x1505109F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x150510A4: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x150510A7: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150510FD; /* 0x150510AD: jbe 0x150510fd */
L_150510AF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x150510AF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x150510B3: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x150510B5: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x150510B5: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x150510B8: mov byte ptr [ebp - 4], al */
    eax = MEM32(ebp + (-0x14)); /* 0x150510BB: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ecx)); /* 0x150510BE: mov byte ptr [ebp - 3], cl */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x150510C1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150510F9; /* 0x150510C5: je 0x150510f9 */
L_150510C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150510C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150510C9: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x150510CA: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x150510CB: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x150510CE: push dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x150510D1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150510D4: push eax */
    PUSH32(esp, 2); /* 0x150510D5: push 2 */
    eax = ebp + (-0x4); /* 0x150510D7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150510DA: push eax */
    eax = ebp + (-0x18); /* 0x150510DB: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x150510DE: push esi */
    PUSH32(esp, eax); /* 0x150510DF: push eax */
    RECOMP_CALL(sub_1505E653); /* 0x150510E0: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150510E5: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150510E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150510F9; /* 0x150510EA: je 0x150510f9 */
L_150510EC:
    /* cmp MEM16(ebp + (-0x6)), 0 */ /* 0x150510EC: cmp word ptr [ebp - 6], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150510F9; /* 0x150510F1: jne 0x150510f9 */
L_150510F3:
    /* test MEM8(ebp + (-0x8)), 1 */ /* 0x150510F3: test byte ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505110B; /* 0x150510F7: jne 0x1505110b */
L_150510F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150510F9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505110B; /* 0x150510FB: jmp 0x1505110b */
L_150510FD:
    eax = MEM32(ebp + (-0x14)); /* 0x150510FD: mov eax, dword ptr [ebp - 0x14] */
    esi = (uint32_t)MEM8(eax + ecx + 0x1D); /* 0x15051100: movzx esi, byte ptr [eax + ecx + 0x1d] */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x15051105: shr esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 4u; /* 0x15051105: shr esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x15051108: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505110B:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1505110B: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051118; /* 0x1505110F: je 0x15051118 */
L_15051111:
    ecx = MEM32(ebp + (-0x10)); /* 0x15051111: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051114: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051118:
    eax = esi; /* 0x15051118: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505111A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505111B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505111C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051130u);

L_15051130:
    edi = edi; /* 0x15051130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051132: push ebp */
    ebp = esp; /* 0x15051133: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051135: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051137: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505113A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051150); /* 0x1505113D: call 0x15051150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051142: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051146: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051150u);

L_15051150:
    edi = edi; /* 0x15051150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051152: push ebp */
    ebp = esp; /* 0x15051153: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051155: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15051158: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15051159: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1505115C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505117E; /* 0x1505115E: jne 0x1505117e */
L_15051160:
    RECOMP_CALL(sub_15036430); /* 0x15051160: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15051165: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x15051167: push edx */
    PUSH32(esp, edx); /* 0x15051168: push edx */
    PUSH32(esp, edx); /* 0x15051169: push edx */
    PUSH32(esp, edx); /* 0x1505116A: push edx */
    PUSH32(esp, edx); /* 0x1505116B: push edx */
    MEM32(eax) = 0x16u; /* 0x1505116C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051172: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051177: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505117A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150511F0; /* 0x1505117C: jmp 0x150511f0 */
L_1505117E:
    PUSH32(esp, edi); /* 0x1505117E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505117F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15051182: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150511A4; /* 0x15051184: jne 0x150511a4 */
L_15051186:
    RECOMP_CALL(sub_15036430); /* 0x15051186: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505118B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1505118D: push edx */
    PUSH32(esp, edx); /* 0x1505118E: push edx */
    PUSH32(esp, edx); /* 0x1505118F: push edx */
    PUSH32(esp, edx); /* 0x15051190: push edx */
    PUSH32(esp, edx); /* 0x15051191: push edx */
    MEM32(eax) = 0x16u; /* 0x15051192: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051198: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505119D: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150511A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150511EF; /* 0x150511A2: jmp 0x150511ef */
L_150511A4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150511A4: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x150511A7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150511AA: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x150511AF: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150511B2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x150511B4: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150511E0; /* 0x150511B7: je 0x150511e0 */
L_150511B9:
    goto L_150511D7; /* 0x150511B9: jmp 0x150511d7 */
L_150511BB:
    SET_LO8(eax, MEM8(esi)); /* 0x150511BB: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x150511BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150511E0; /* 0x150511BF: je 0x150511e0 */
L_150511C1:
    eax = (uint32_t)LO8(eax); /* 0x150511C1: movzx eax, al */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x150511C4: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150511D6; /* 0x150511C9: je 0x150511d6 */
L_150511CB:
    eax = esi; /* 0x150511CB: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150511CD: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x150511CE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150511DD; /* 0x150511D0: je 0x150511dd */
L_150511D2:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x150511D2: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150511E0; /* 0x150511D4: je 0x150511e0 */
L_150511D6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150511D6: inc esi */
    _flag_k = FK_INC;
L_150511D7:
    /* cmp esi, edi */ /* 0x150511D7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_150511BB; /* 0x150511D9: jbe 0x150511bb */
L_150511DB:
    goto L_150511E0; /* 0x150511DB: jmp 0x150511e0 */
L_150511DD:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x150511DD: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150511E0:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150511E0: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150511ED; /* 0x150511E4: je 0x150511ed */
L_150511E6:
    ecx = MEM32(ebp + (-0x8)); /* 0x150511E6: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150511E9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150511ED:
    eax = edx; /* 0x150511ED: mov eax, edx */
L_150511EF:
    edi = POP32_VAL(esp); /* 0x150511EF: pop edi */
L_150511F0:
    esi = POP32_VAL(esp); /* 0x150511F0: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150511F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150511F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051200u);

L_15051200:
    edi = edi; /* 0x15051200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051202: push ebp */
    ebp = esp; /* 0x15051203: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051205: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051207: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505120A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051220); /* 0x1505120D: call 0x15051220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051212: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051215: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051216: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051220u);

L_15051220:
    edi = edi; /* 0x15051220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051222: push ebp */
    ebp = esp; /* 0x15051223: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051225: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15051228: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15051229: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1505122C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505124E; /* 0x1505122E: jne 0x1505124e */
L_15051230:
    RECOMP_CALL(sub_15036430); /* 0x15051230: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15051235: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x15051237: push edx */
    PUSH32(esp, edx); /* 0x15051238: push edx */
    PUSH32(esp, edx); /* 0x15051239: push edx */
    PUSH32(esp, edx); /* 0x1505123A: push edx */
    PUSH32(esp, edx); /* 0x1505123B: push edx */
    MEM32(eax) = 0x16u; /* 0x1505123C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051242: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051247: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505124A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150512BE; /* 0x1505124C: jmp 0x150512be */
L_1505124E:
    PUSH32(esp, edi); /* 0x1505124E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505124F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15051252: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051274; /* 0x15051254: jne 0x15051274 */
L_15051256:
    RECOMP_CALL(sub_15036430); /* 0x15051256: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505125B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1505125D: push edx */
    PUSH32(esp, edx); /* 0x1505125E: push edx */
    PUSH32(esp, edx); /* 0x1505125F: push edx */
    PUSH32(esp, edx); /* 0x15051260: push edx */
    PUSH32(esp, edx); /* 0x15051261: push edx */
    MEM32(eax) = 0x16u; /* 0x15051262: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051268: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505126D: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15051270: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150512BD; /* 0x15051272: jmp 0x150512bd */
L_15051274:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15051274: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x15051277: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505127A: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1505127F: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15051282: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x15051284: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150512AE; /* 0x15051287: je 0x150512ae */
L_15051289:
    goto L_150512A5; /* 0x15051289: jmp 0x150512a5 */
L_1505128B:
    SET_LO8(eax, MEM8(esi)); /* 0x1505128B: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505128D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150512AE; /* 0x1505128F: je 0x150512ae */
L_15051291:
    eax = (uint32_t)LO8(eax); /* 0x15051291: movzx eax, al */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15051294: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150512A4; /* 0x15051299: je 0x150512a4 */
L_1505129B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505129B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1505129C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150512AB; /* 0x1505129E: je 0x150512ab */
L_150512A0:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x150512A0: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150512AE; /* 0x150512A2: je 0x150512ae */
L_150512A4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150512A4: inc esi */
    _flag_k = FK_INC;
L_150512A5:
    /* cmp esi, edi */ /* 0x150512A5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505128B; /* 0x150512A7: jbe 0x1505128b */
L_150512A9:
    goto L_150512AE; /* 0x150512A9: jmp 0x150512ae */
L_150512AB:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x150512AB: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150512AE:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150512AE: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150512BB; /* 0x150512B2: je 0x150512bb */
L_150512B4:
    ecx = MEM32(ebp + (-0x8)); /* 0x150512B4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150512B7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150512BB:
    eax = edx; /* 0x150512BB: mov eax, edx */
L_150512BD:
    edi = POP32_VAL(esp); /* 0x150512BD: pop edi */
L_150512BE:
    esi = POP32_VAL(esp); /* 0x150512BE: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150512BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150512C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150512D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150512D0u);

L_150512D0:
    edi = edi; /* 0x150512D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150512D2: push ebp */
    ebp = esp; /* 0x150512D3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150512D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150512D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150512F0); /* 0x150512DA: call 0x150512f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150512DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150512E0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150512E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150512E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150512F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150512F0u);

L_150512F0:
    edi = edi; /* 0x150512F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150512F2: push ebp */
    ebp = esp; /* 0x150512F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150512F5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150512F8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x150512FB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150512FE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15051303: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x15051306: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x15051309: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505135F; /* 0x15051310: jne 0x1505135f */
L_15051312:
    eax = edx + (-0x20); /* 0x15051312: lea eax, [edx - 0x20] */
    /* cmp eax, 0x5Eu */ /* 0x15051315: cmp eax, 0x5e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15051324; /* 0x15051318: ja 0x15051324 */
L_1505131A:
    edx = (uint32_t)MEM16(edx * 2 + 0x15004E98); /* 0x1505131A: movzx edx, word ptr [edx*2 + 0x15004e98] */
    goto L_1505135F; /* 0x15051322: jmp 0x1505135f */
L_15051324:
    /* cmp edx, 0xDCu */ /* 0x15051324: cmp edx, 0xdc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051333; /* 0x1505132A: jne 0x15051333 */
L_1505132C:
    edx = 0x838Fu; /* 0x1505132C: mov edx, 0x838f */
    goto L_1505135F; /* 0x15051331: jmp 0x1505135f */
L_15051333:
    eax = edx + (-0xA1); /* 0x15051333: lea eax, [edx - 0xa1] */
    /* cmp eax, 0x3Eu */ /* 0x15051339: cmp eax, 0x3e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505135F; /* 0x1505133C: ja 0x1505135f */
L_1505133E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505133E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 0xA7u); /* 0x15051340: mov al, 0xa7 */
L_15051342:
    eax = (uint32_t)LO8(eax); /* 0x15051342: movzx eax, al */
    /* cmp edx, eax */ /* 0x15051345: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051357; /* 0x15051347: je 0x15051357 */
L_15051349:
    SET_LO8(eax, MEM8(ecx * 4 + 0x15004F9C)); /* 0x15051349: mov al, byte ptr [ecx*4 + 0x15004f9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15051350: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15051351: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051342; /* 0x15051353: jne 0x15051342 */
L_15051355:
    goto L_1505135F; /* 0x15051355: jmp 0x1505135f */
L_15051357:
    edx = (uint32_t)MEM16(ecx * 4 + 0x15004F9A); /* 0x15051357: movzx edx, word ptr [ecx*4 + 0x15004f9a] */
L_1505135F:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505135F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505136C; /* 0x15051363: je 0x1505136c */
L_15051365:
    ecx = MEM32(ebp + (-0x8)); /* 0x15051365: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051368: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505136C:
    eax = edx; /* 0x1505136C: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505136E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505136F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051380u);

L_15051380:
    edi = edi; /* 0x15051380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051382: push ebp */
    ebp = esp; /* 0x15051383: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051385: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051387: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150513A0); /* 0x1505138A: call 0x150513a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505138F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051390: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051391: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051392: ret  */
    RECOMP_REGS_OUT();
}

void sub_150513A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150513A0u);

L_150513A0:
    edi = edi; /* 0x150513A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150513A2: push ebp */
    ebp = esp; /* 0x150513A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150513A5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150513A8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150513A9: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x150513AC: lea ecx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x150513AF: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150513B0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x150513B3: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x150513B8: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x150513BB: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051428; /* 0x150513C2: jne 0x15051428 */
L_150513C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150513C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x150513C6: mov edx, ecx */
L_150513C8:
    eax = (uint32_t)MEM16(edx * 2 + 0x15004ED8); /* 0x150513C8: movzx eax, word ptr [edx*2 + 0x15004ed8] */
    /* cmp esi, eax */ /* 0x150513D0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051425; /* 0x150513D2: je 0x15051425 */
L_150513D4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150513D4: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 0x5Eu */ /* 0x150513D5: cmp edx, 0x5e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x5Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_150513C8; /* 0x150513D8: jle 0x150513c8 */
L_150513DA:
    /* cmp esi, 0x8396u */ /* 0x150513DA: cmp esi, 0x8396 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8396u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15051428; /* 0x150513E0: ja 0x15051428 */
L_150513E2:
    eax = ecx; /* 0x150513E2: mov eax, ecx */
L_150513E4:
    edi = (uint32_t)MEM16(eax + 0x15004F9A); /* 0x150513E4: movzx edi, word ptr [eax + 0x15004f9a] */
    edx = esi; /* 0x150513EB: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x150513ED: sub edx, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505141B; /* 0x150513EF: je 0x1505141b */
L_150513F1:
    _flag_a = (uint32_t)((edi ^ esi)); _flag_b = (uint32_t)((edi ^ esi));
    edi = edi ^ esi; /* 0x150513F1: xor edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, 0xFF00u */ /* 0x150513F3: test edi, 0xff00 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505140A; /* 0x150513F9: jne 0x1505140a */
L_150513FB:
    /* test edx, edx */ /* 0x150513FB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505140A; /* 0x150513FD: jle 0x1505140a */
L_150513FF:
    eax = (int32_t)(int8_t)MEM8(eax + 0x15004F99); /* 0x150513FF: movsx eax, byte ptr [eax + 0x15004f99] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x15051406: sub edx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1505141B; /* 0x15051408: js 0x1505141b */
L_1505140A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505140A: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1505140B: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1505140D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1505140D: shl eax, 2 */
    /* cmp MEM8(eax + 0x15004F98), 0 */ /* 0x15051410: cmp byte ptr [eax + 0x15004f98], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15004F98)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150513E4; /* 0x15051417: jne 0x150513e4 */
L_15051419:
    goto L_15051428; /* 0x15051419: jmp 0x15051428 */
L_1505141B:
    esi = (uint32_t)MEM8(ecx * 4 + 0x15004F98); /* 0x1505141B: movzx esi, byte ptr [ecx*4 + 0x15004f98] */
    goto L_15051428; /* 0x15051423: jmp 0x15051428 */
L_15051425:
    esi = edx + 0x20; /* 0x15051425: lea esi, [edx + 0x20] */
L_15051428:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15051428: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051435; /* 0x1505142C: je 0x15051435 */
L_1505142E:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505142E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051431: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051435:
    edi = POP32_VAL(esp); /* 0x15051435: pop edi */
    eax = esi; /* 0x15051436: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15051438: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051439: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505143A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051450u);

L_15051450:
    edi = edi; /* 0x15051450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051452: push ebp */
    ebp = esp; /* 0x15051453: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051455: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051457: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505145A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505146D); /* 0x1505145D: call 0x1505146d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051462: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051465: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051466: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505146D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505146Du);

L_1505146D:
    edi = edi; /* 0x1505146D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505146F: push ebp */
    ebp = esp; /* 0x15051470: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051472: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15051475: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x15051478: push ebx */
    PUSH32(esp, esi); /* 0x15051479: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505147A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505147D: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x15051482: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15051485: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15051487: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505148A: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1505148B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150514AB; /* 0x1505148D: je 0x150514ab */
L_1505148F:
    /* test eax, eax */ /* 0x1505148F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150514AB; /* 0x15051491: je 0x150514ab */
L_15051493:
    /* cmp eax, ecx */ /* 0x15051493: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150514AB; /* 0x15051495: jne 0x150514ab */
L_15051497:
    ecx = (uint32_t)MEM8(ebp + 0x8); /* 0x15051497: movzx ecx, byte ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1505149B: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 2); /* 0x1505149E: push 2 */
    /* test MEM8(ecx + eax + 0x1D), 8 */ /* 0x150514A0: test byte ptr [ecx + eax + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x150514A5: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = edx; } /* 0x150514A6: cmove ecx, edx */
    goto L_150514D6; /* 0x150514A9: jmp 0x150514d6 */
L_150514AB:
    esi = (uint32_t)MEM8(ebp + 0x8); /* 0x150514AB: movzx esi, byte ptr [ebp + 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x150514AF: mov eax, dword ptr [ebp - 0xc] */
    SET_LO8(ebx, MEM8(esi + eax + 0x1D)); /* 0x150514B2: mov bl, byte ptr [esi + eax + 0x1d] */
    /* test LO8(ebx), 4 */ /* 0x150514B6: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150514D6; /* 0x150514B9: jne 0x150514d6 */
L_150514BB:
    eax = MEM32(ebp + (-0x10)); /* 0x150514BB: mov eax, dword ptr [ebp - 0x10] */
    ecx = 0x157u; /* 0x150514BE: mov ecx, 0x157 */
    eax = MEM32(eax + 0xC8); /* 0x150514C3: mov eax, dword ptr [eax + 0xc8] */
    /* test MEM16(eax + esi * 2), LO16(ecx) */ /* 0x150514C9: test word ptr [eax + esi*2], cx */
    _flag_a = (uint32_t)(MEM16(eax + esi * 2)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150514D4; /* 0x150514CD: jne 0x150514d4 */
L_150514CF:
    /* test LO8(ebx), 3 */ /* 0x150514CF: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150514D8; /* 0x150514D2: je 0x150514d8 */
L_150514D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150514D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150514D6:
    edx = ecx; /* 0x150514D6: mov edx, ecx */
L_150514D8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150514D8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x150514DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x150514DD: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150514E7; /* 0x150514DE: je 0x150514e7 */
L_150514E0:
    ecx = MEM32(ebp + (-0x8)); /* 0x150514E0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150514E3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150514E7:
    eax = edx; /* 0x150514E7: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150514E9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150514EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051500u);

L_15051500:
    edi = edi; /* 0x15051500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051502: push ebp */
    ebp = esp; /* 0x15051503: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051505: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051507: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1505150A: push 0 */
    PUSH32(esp, 2); /* 0x1505150C: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505150E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051620); /* 0x15051511: call 0x15051620 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051516: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051519: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505151A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051530u);

L_15051530:
    edi = edi; /* 0x15051530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051532: push ebp */
    ebp = esp; /* 0x15051533: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15051535: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051538: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1505153B: push 0 */
    PUSH32(esp, 2); /* 0x1505153D: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505153F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051620); /* 0x15051542: call 0x15051620 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051547: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505154A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505154B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051560u);

L_15051560:
    edi = edi; /* 0x15051560: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051562: push ebp */
    ebp = esp; /* 0x15051563: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15051565: push ebx */
    PUSH32(esp, esi); /* 0x15051566: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15051567: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505156A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1505156C: push edi */
    /* test esi, esi */ /* 0x1505156D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051573; /* 0x1505156F: je 0x15051573 */
L_15051571:
    MEM32(esi) = ebx; /* 0x15051571: mov dword ptr [esi], ebx */
L_15051573:
    edi = MEM32(ebp + 0x8); /* 0x15051573: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15051576: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051588; /* 0x15051578: je 0x15051588 */
L_1505157A:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1505157A: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15051588; /* 0x1505157D: jbe 0x15051588 */
L_1505157F:
    ebx = MEM32(ebp + 0x14); /* 0x1505157F: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x15051582: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150515A6; /* 0x15051584: jne 0x150515a6 */
L_15051586:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15051586: mov byte ptr [edi], bl */
L_15051588:
    RECOMP_CALL(sub_15036430); /* 0x15051588: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505158D: push 0x16 */
L_1505158F:
    esi = POP32_VAL(esp); /* 0x1505158F: pop esi */
    PUSH32(esp, ebx); /* 0x15051590: push ebx */
    PUSH32(esp, ebx); /* 0x15051591: push ebx */
    PUSH32(esp, ebx); /* 0x15051592: push ebx */
    PUSH32(esp, ebx); /* 0x15051593: push ebx */
    PUSH32(esp, ebx); /* 0x15051594: push ebx */
    MEM32(eax) = esi; /* 0x15051595: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15051597: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505159C: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505159E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150515A1:
    edi = POP32_VAL(esp); /* 0x150515A1: pop edi */
    esi = POP32_VAL(esp); /* 0x150515A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x150515A3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x150515A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150515A5: ret  */
L_150515A6:
    eax = (uint32_t)MEM8(ebx); /* 0x150515A6: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x150515A9: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150515AA: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150515AF: pop ecx */
    /* test eax, eax */ /* 0x150515B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150515FD; /* 0x150515B2: je 0x150515fd */
L_150515B4:
    /* cmp MEM8(ebx + 0x1), 0 */ /* 0x150515B4: cmp byte ptr [ebx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150515D6; /* 0x150515B8: jne 0x150515d6 */
L_150515BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150515BA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150515BC: mov byte ptr [edi], bl */
    /* test esi, esi */ /* 0x150515BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150515C8; /* 0x150515C0: je 0x150515c8 */
L_150515C2:
    MEM32(esi) = 1; /* 0x150515C2: mov dword ptr [esi], 1 */
L_150515C8:
    RECOMP_CALL(sub_15036430); /* 0x150515C8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150515CD: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x150515CF: pop ecx */
    MEM32(eax) = ecx; /* 0x150515D0: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x150515D2: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_150515A1; /* 0x150515D4: jmp 0x150515a1 */
L_150515D6:
    PUSH32(esp, 2); /* 0x150515D6: push 2 */
    ecx = POP32_VAL(esp); /* 0x150515D8: pop ecx */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x150515D9: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150515EB; /* 0x150515DC: jae 0x150515eb */
L_150515DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150515DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150515E0: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150515E2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150515E7: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1505158F; /* 0x150515E9: jmp 0x1505158f */
L_150515EB:
    SET_LO8(eax, MEM8(ebx)); /* 0x150515EB: mov al, byte ptr [ebx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150515ED: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x150515EF: mov al, byte ptr [ebx + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x150515F2: mov byte ptr [edi + 1], al */
    /* test esi, esi */ /* 0x150515F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505160B; /* 0x150515F7: je 0x1505160b */
L_150515F9:
    MEM32(esi) = ecx; /* 0x150515F9: mov dword ptr [esi], ecx */
    goto L_1505160B; /* 0x150515FB: jmp 0x1505160b */
L_150515FD:
    SET_LO8(eax, MEM8(ebx)); /* 0x150515FD: mov al, byte ptr [ebx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150515FF: mov byte ptr [edi], al */
    /* test esi, esi */ /* 0x15051601: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505160B; /* 0x15051603: je 0x1505160b */
L_15051605:
    MEM32(esi) = 1; /* 0x15051605: mov dword ptr [esi], 1 */
L_1505160B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505160B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150515A1; /* 0x1505160D: jmp 0x150515a1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15051620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051620u);

L_15051620:
    edi = edi; /* 0x15051620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051622: push ebp */
    ebp = esp; /* 0x15051623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051625: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15051628: push ebx */
    PUSH32(esp, esi); /* 0x15051629: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1505162A: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505162D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1505162F: push edi */
    /* test esi, esi */ /* 0x15051630: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051636; /* 0x15051632: je 0x15051636 */
L_15051634:
    MEM32(esi) = ebx; /* 0x15051634: mov dword ptr [esi], ebx */
L_15051636:
    edi = MEM32(ebp + 0x8); /* 0x15051636: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15051639: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505164B; /* 0x1505163B: je 0x1505164b */
L_1505163D:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1505163D: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505164B; /* 0x15051640: jbe 0x1505164b */
L_15051642:
    ebx = MEM32(ebp + 0x14); /* 0x15051642: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x15051645: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051669; /* 0x15051647: jne 0x15051669 */
L_15051649:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15051649: mov byte ptr [edi], bl */
L_1505164B:
    RECOMP_CALL(sub_15036430); /* 0x1505164B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15051650: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15051652: pop esi */
    PUSH32(esp, ebx); /* 0x15051653: push ebx */
    PUSH32(esp, ebx); /* 0x15051654: push ebx */
    PUSH32(esp, ebx); /* 0x15051655: push ebx */
    PUSH32(esp, ebx); /* 0x15051656: push ebx */
    PUSH32(esp, ebx); /* 0x15051657: push ebx */
    MEM32(eax) = esi; /* 0x15051658: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505165A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505165F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15051662:
    edi = POP32_VAL(esp); /* 0x15051662: pop edi */
    eax = esi; /* 0x15051663: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15051665: pop esi */
    ebx = POP32_VAL(esp); /* 0x15051666: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051667: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051668: ret  */
L_15051669:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15051669: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x10); /* 0x1505166C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505166F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(ebx); /* 0x15051674: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x10); /* 0x15051677: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1505167A: push ecx */
    PUSH32(esp, eax); /* 0x1505167B: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505167C: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051681: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051682: pop ecx */
    /* test eax, eax */ /* 0x15051683: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150516DE; /* 0x15051685: je 0x150516de */
L_15051687:
    /* cmp MEM8(ebx + 0x1), 0 */ /* 0x15051687: cmp byte ptr [ebx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150516A7; /* 0x1505168B: jne 0x150516a7 */
L_1505168D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505168D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505168F: mov byte ptr [edi], bl */
    /* test esi, esi */ /* 0x15051691: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505169B; /* 0x15051693: je 0x1505169b */
L_15051695:
    MEM32(esi) = 1; /* 0x15051695: mov dword ptr [esi], 1 */
L_1505169B:
    RECOMP_CALL(sub_15036430); /* 0x1505169B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150516A0: push 0x2a */
    esi = POP32_VAL(esp); /* 0x150516A2: pop esi */
    MEM32(eax) = esi; /* 0x150516A3: mov dword ptr [eax], esi */
    goto L_150516F0; /* 0x150516A5: jmp 0x150516f0 */
L_150516A7:
    PUSH32(esp, 2); /* 0x150516A7: push 2 */
    ecx = POP32_VAL(esp); /* 0x150516A9: pop ecx */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x150516AA: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150516CC; /* 0x150516AD: jae 0x150516cc */
L_150516AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150516AF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150516B1: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150516B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150516B8: push 0x22 */
    esi = POP32_VAL(esp); /* 0x150516BA: pop esi */
    PUSH32(esp, ebx); /* 0x150516BB: push ebx */
    PUSH32(esp, ebx); /* 0x150516BC: push ebx */
    PUSH32(esp, ebx); /* 0x150516BD: push ebx */
    PUSH32(esp, ebx); /* 0x150516BE: push ebx */
    PUSH32(esp, ebx); /* 0x150516BF: push ebx */
    MEM32(eax) = esi; /* 0x150516C0: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150516C2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150516C7: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150516F0; /* 0x150516CA: jmp 0x150516f0 */
L_150516CC:
    SET_LO8(eax, MEM8(ebx)); /* 0x150516CC: mov al, byte ptr [ebx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150516CE: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ebx + 0x1)); /* 0x150516D0: mov al, byte ptr [ebx + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x150516D3: mov byte ptr [edi + 1], al */
    /* test esi, esi */ /* 0x150516D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150516EC; /* 0x150516D8: je 0x150516ec */
L_150516DA:
    MEM32(esi) = ecx; /* 0x150516DA: mov dword ptr [esi], ecx */
    goto L_150516EC; /* 0x150516DC: jmp 0x150516ec */
L_150516DE:
    SET_LO8(eax, MEM8(ebx)); /* 0x150516DE: mov al, byte ptr [ebx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150516E0: mov byte ptr [edi], al */
    /* test esi, esi */ /* 0x150516E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150516EC; /* 0x150516E4: je 0x150516ec */
L_150516E6:
    MEM32(esi) = 1; /* 0x150516E6: mov dword ptr [esi], 1 */
L_150516EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150516EC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x150516EE: mov esi, ebx */
L_150516F0:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150516F0: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051662; /* 0x150516F4: je 0x15051662 */
L_150516FA:
    ecx = MEM32(ebp + (-0x8)); /* 0x150516FA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150516FD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15051662; /* 0x15051701: jmp 0x15051662 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15051710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051710u);

L_15051710:
    edi = edi; /* 0x15051710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051712: push ebp */
    ebp = esp; /* 0x15051713: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051715: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051717: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051730); /* 0x1505171A: call 0x15051730 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505171F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051720: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051721: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051722: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051730u);

L_15051730:
    edi = edi; /* 0x15051730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051732: push ebp */
    ebp = esp; /* 0x15051733: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051735: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051738: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1505173B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505173E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15051743: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x4), 0x3A4u */ /* 0x15051746: cmp dword ptr [eax + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051754; /* 0x1505174D: je 0x15051754 */
L_1505174F:
    edx = MEM32(ebp + 0x8); /* 0x1505174F: mov edx, dword ptr [ebp + 8] */
    goto L_150517BF; /* 0x15051752: jmp 0x150517bf */
L_15051754:
    ecx = MEM32(ebp + 0x8); /* 0x15051754: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15051757: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15051759: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15051759: shr eax, 8 */
    edx = (uint32_t)LO8(eax); /* 0x1505175C: movzx edx, al */
    PUSH32(esp, esi); /* 0x1505175F: push esi */
    PUSH32(esp, edi); /* 0x15051760: push edi */
    esi = (uint32_t)LO8(ecx); /* 0x15051761: movzx esi, cl */
    edi = edx + (-0x21); /* 0x15051764: lea edi, [edx - 0x21] */
    /* cmp edi, 0x5Du */ /* 0x15051767: cmp edi, 0x5d */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150517B0; /* 0x1505176A: ja 0x150517b0 */
L_1505176C:
    eax = esi + (-0x21); /* 0x1505176C: lea eax, [esi - 0x21] */
    /* cmp eax, 0x5Du */ /* 0x1505176F: cmp eax, 0x5d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150517B0; /* 0x15051772: ja 0x150517b0 */
L_15051774:
    /* test LO8(edx), 1 */ /* 0x15051774: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051787; /* 0x15051777: je 0x15051787 */
L_15051779:
    PUSH32(esp, 0x5Fu); /* 0x15051779: push 0x5f */
    eax = POP32_VAL(esp); /* 0x1505177B: pop eax */
    /* cmp eax, esi */ /* 0x1505177C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505177E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x15051780: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Fu; /* 0x15051782: add ecx, 0x1f */
    _flag_k = FK_ADD;
    goto L_1505178A; /* 0x15051785: jmp 0x1505178a */
L_15051787:
    PUSH32(esp, 0x7Eu); /* 0x15051787: push 0x7e */
    ecx = POP32_VAL(esp); /* 0x15051789: pop ecx */
L_1505178A:
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1505178A: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1505178A: shr edi, 1 */
    edx = 0x9Fu; /* 0x1505178C: mov edx, 0x9f */
    eax = edi + 0x81; /* 0x15051791: lea eax, [edi + 0x81] */
    /* cmp edx, eax */ /* 0x15051797: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi + ecx; /* 0x15051799: lea eax, [esi + ecx] */
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505179C: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    edx = edx & 0x40u; /* 0x1505179E: and edx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x81u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x81u; /* 0x150517A1: add edx, 0x81 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x150517A7: add edx, edi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x150517A9: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x150517A9: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x150517AC: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150517BD; /* 0x150517AE: jmp 0x150517bd */
L_150517B0:
    RECOMP_CALL(sub_15036430); /* 0x150517B0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150517B5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x150517B7: mov dword ptr [eax], 0x2a */
L_150517BD:
    edi = POP32_VAL(esp); /* 0x150517BD: pop edi */
    esi = POP32_VAL(esp); /* 0x150517BE: pop esi */
L_150517BF:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150517BF: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150517CC; /* 0x150517C3: je 0x150517cc */
L_150517C5:
    ecx = MEM32(ebp + (-0x8)); /* 0x150517C5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150517C8: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150517CC:
    eax = edx; /* 0x150517CC: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150517CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150517CF: ret  */
    RECOMP_REGS_OUT();
}
