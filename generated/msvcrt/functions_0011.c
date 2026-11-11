#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1504A0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A0D0u);

L_1504A0D0:
    PUSH32(esp, 0x10u); /* 0x1504A0D0: push 0x10 */
    PUSH32(esp, 0x150B05A8u); /* 0x1504A0D2: push 0x150b05a8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A0D7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A0DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504A0DE: mov dword ptr [ebp - 0x1c], esi */
    ebx = MEM32(ebp + 0x8); /* 0x1504A0E1: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1504A0E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A10C; /* 0x1504A0E6: jne 0x1504a10c */
L_1504A0E8:
    RECOMP_CALL(sub_150363E0); /* 0x1504A0E8: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A0ED: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504A0EF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504A0F4: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1504A0FA: push esi */
    PUSH32(esp, esi); /* 0x1504A0FB: push esi */
    PUSH32(esp, esi); /* 0x1504A0FC: push esi */
    PUSH32(esp, esi); /* 0x1504A0FD: push esi */
    PUSH32(esp, esi); /* 0x1504A0FE: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504A0FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A104: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A107: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A163; /* 0x1504A10A: jmp 0x1504a163 */
L_1504A10C:
    edi = ebx; /* 0x1504A10C: mov edi, ebx */
    ecx = edi + 0x2; /* 0x1504A10E: lea ecx, [edi + 2] */
L_1504A111:
    SET_LO16(eax, MEM16(edi)); /* 0x1504A111: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1504A114: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1504A117: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A111; /* 0x1504A11A: jne 0x1504a111 */
L_1504A11C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1504A11C: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1504A11E: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, 3); /* 0x1504A120: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504A122: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A127: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A128: mov dword ptr [ebp - 4], esi */
L_1504A12B:
    eax = edi; /* 0x1504A12B: mov eax, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504A12D: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edi; /* 0x1504A12E: mov dword ptr [ebp - 0x20], edi */
    /* test eax, eax */ /* 0x1504A131: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A155; /* 0x1504A133: je 0x1504a155 */
L_1504A135:
    eax = (uint32_t)MEM16(ebx); /* 0x1504A135: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1504A138: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x1504A13B: mov dword ptr [ebp + 8], ebx */
    PUSH32(esp, eax); /* 0x1504A13E: push eax */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504A13F: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A144: pop ecx */
    ecx = 0xFFFFu; /* 0x1504A145: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1504A14A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A12B; /* 0x1504A14D: jne 0x1504a12b */
L_1504A14F:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504A14F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504A152: mov dword ptr [ebp - 0x1c], esi */
L_1504A155:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A155: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A176); /* 0x1504A15C: call 0x1504a176 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504A161: mov eax, esi */
L_1504A163:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A163: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A166: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A16D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A16E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A16F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A170: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A171: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A172: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A176(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A176u);

L_1504A176:
    PUSH32(esp, 3); /* 0x1504A176: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504A178: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A17D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A17E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A190u);

L_1504A190:
    PUSH32(esp, 0xCu); /* 0x1504A190: push 0xc */
    PUSH32(esp, 0x150B0588u); /* 0x1504A192: push 0x150b0588 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A197: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504A19C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504A19E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A1A3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504A1A4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504A1A8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504A1AB: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A1B0: pop ecx */
    SET_LO16(esi, LO16(eax)); /* 0x1504A1B1: mov si, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(esi)); /* 0x1504A1B4: mov word ptr [ebp - 0x1c], si */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A1B8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A1DB); /* 0x1504A1BF: call 0x1504a1db */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1504A1C4: mov ax, si */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A1C7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A1CA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A1D1: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A1D2: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A1D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A1D4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A1D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A1D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A1DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A1DBu);

L_1504A1DB:
    PUSH32(esp, 3); /* 0x1504A1DB: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504A1DD: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A1E2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A1E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A1EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A1EAu);

L_1504A1EA:
    edi = edi; /* 0x1504A1EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504A1EC: push ebp */
    ebp = esp; /* 0x1504A1ED: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504A1EF: push ecx */
    eax = MEM32(0x150BCED4); /* 0x1504A1F0: mov eax, dword ptr [0x150bced4] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1504A1F5: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A204; /* 0x1504A1F8: jne 0x1504a204 */
L_1504A1FA:
    RECOMP_CALL(sub_1504F798); /* 0x1504A1FA: call 0x1504f798 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BCED4); /* 0x1504A1FF: mov eax, dword ptr [0x150bced4] */
L_1504A204:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504A204: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A226; /* 0x1504A207: je 0x1504a226 */
L_1504A209:
    PUSH32(esp, 0); /* 0x1504A209: push 0 */
    ecx = ebp + (-0x4); /* 0x1504A20B: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1504A20E: push ecx */
    PUSH32(esp, 1); /* 0x1504A20F: push 1 */
    ecx = ebp + 0x8; /* 0x1504A211: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1504A214: push ecx */
    PUSH32(esp, eax); /* 0x1504A215: push eax */
    RECOMP_ICALL(MEM32(0x150C0014)); /* 0x1504A216: call dword ptr [0x150c0014] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504A21C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A226; /* 0x1504A21E: je 0x1504a226 */
L_1504A220:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1504A220: mov ax, word ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A224: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A225: ret  */
L_1504A226:
    eax = 0xFFFFu; /* 0x1504A226: mov eax, 0xffff */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A22B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A22C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A240u);

L_1504A240:
    edi = edi; /* 0x1504A240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504A242: push ebp */
    ebp = esp; /* 0x1504A243: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504A245: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1504A246: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1504A249: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x1504A24A: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504A24F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504A252: push eax */
    PUSH32(esp, 0x40u); /* 0x1504A253: push 0x40 */
    PUSH32(esp, 0x302u); /* 0x1504A255: push 0x302 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504A25A: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x1504A25D: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A260: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, eax); /* 0x1504A263: push eax */
    RECOMP_CALL(sub_1504CC00); /* 0x1504A264: call 0x1504cc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A269: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504A26C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x4)); } /* 0x1504A26E: cmove esi, dword ptr [ebp - 4] */
    eax = esi; /* 0x1504A272: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504A274: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A275: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A276: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A280u);

L_1504A280:
    PUSH32(esp, 0x14u); /* 0x1504A280: push 0x14 */
    PUSH32(esp, 0x150B05C8u); /* 0x1504A282: push 0x150b05c8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A287: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504A28C: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504A28F: mov dword ptr [ebp - 0x1c], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1504A292: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504A295: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A2BF; /* 0x1504A298: jne 0x1504a2bf */
L_1504A29A:
    RECOMP_CALL(sub_150363E0); /* 0x1504A29A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A29F: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504A2A2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A2A7: mov dword ptr [eax], 9 */
L_1504A2AD:
    eax = ebx; /* 0x1504A2AD: mov eax, ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A2AF: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A2B2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A2B9: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A2BA: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A2BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A2BC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A2BD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A2BE: ret  */
L_1504A2BF:
    /* test edi, edi */ /* 0x1504A2BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504A2D2; /* 0x1504A2C1: js 0x1504a2d2 */
L_1504A2C3:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504A2C3: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A2D2; /* 0x1504A2C9: jae 0x1504a2d2 */
L_1504A2CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504A2CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504A2CD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A2CE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A2D6; /* 0x1504A2D0: jmp 0x1504a2d6 */
L_1504A2D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A2D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504A2D4: mov eax, esi */
L_1504A2D6:
    /* test eax, eax */ /* 0x1504A2D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A2FB; /* 0x1504A2D8: jne 0x1504a2fb */
L_1504A2DA:
    RECOMP_CALL(sub_150363E0); /* 0x1504A2DA: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A2DF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504A2E1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A2E6: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504A2EC: push esi */
    PUSH32(esp, esi); /* 0x1504A2ED: push esi */
    PUSH32(esp, esi); /* 0x1504A2EE: push esi */
    PUSH32(esp, esi); /* 0x1504A2EF: push esi */
    PUSH32(esp, esi); /* 0x1504A2F0: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504A2F1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A2F6: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504A2AD; /* 0x1504A2F9: jmp 0x1504a2ad */
L_1504A2FB:
    ecx = edi; /* 0x1504A2FB: mov ecx, edi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504A2FD: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504A300: mov dword ptr [ebp - 0x20], ecx */
    eax = edi; /* 0x1504A303: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A305: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A308: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x24)) = edx; /* 0x1504A30B: mov dword ptr [ebp - 0x24], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504A30E: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x1504A315: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A2DA; /* 0x1504A31A: je 0x1504a2da */
L_1504A31C:
    PUSH32(esp, edi); /* 0x1504A31C: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504A31D: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A322: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A323: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x20)); /* 0x1504A326: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504A329: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1504A330: mov ecx, dword ptr [ebp - 0x24] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504A333: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A345; /* 0x1504A338: je 0x1504a345 */
L_1504A33A:
    PUSH32(esp, edi); /* 0x1504A33A: push edi */
    RECOMP_CALL(sub_1504A37F); /* 0x1504A33B: call 0x1504a37f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A340: pop ecx */
    ebx = eax; /* 0x1504A341: mov ebx, eax */
    goto L_1504A357; /* 0x1504A343: jmp 0x1504a357 */
L_1504A345:
    RECOMP_CALL(sub_15036430); /* 0x1504A345: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A34A: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504A350: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A355: mov dword ptr [eax], esi */
L_1504A357:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504A357: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A35A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A371); /* 0x1504A361: call 0x1504a371 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1504A2AD; /* 0x1504A366: jmp 0x1504a2ad */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504A371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A371u);

L_1504A371:
    PUSH32(esp, edi); /* 0x1504A371: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504A372: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A377: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A378: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A37F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A37Fu);

L_1504A37F:
    PUSH32(esp, 0x20u); /* 0x1504A37F: push 0x20 */
    PUSH32(esp, 0x150B05E8u); /* 0x1504A381: push 0x150b05e8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A386: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A38B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1504A38D: mov dword ptr [ebp - 0x20], esi */
    ecx = MEM32(ebp + 0x8); /* 0x1504A390: mov ecx, dword ptr [ebp + 8] */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504A393: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x24)) = ecx; /* 0x1504A396: mov dword ptr [ebp - 0x24], ecx */
    eax = MEM32(ebp + 0x8); /* 0x1504A399: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A39C: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A39F: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x28)) = edx; /* 0x1504A3A2: mov dword ptr [ebp - 0x28], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504A3A5: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(eax + edx + 0x4)); /* 0x1504A3AC: mov al, byte ptr [eax + edx + 4] */
    MEM8(ebp + (-0x19)) = (uint8_t)(LO8(eax)); /* 0x1504A3B0: mov byte ptr [ebp - 0x19], al */
    /* test LO8(eax), 1 */ /* 0x1504A3B3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A3BF; /* 0x1504A3B5: jne 0x1504a3bf */
L_1504A3B7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A3B7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A4C0; /* 0x1504A3BA: jmp 0x1504a4c0 */
L_1504A3BF:
    RECOMP_CALL(sub_1504BAF6); /* 0x1504A3BF: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1504A3C4: mov ebx, eax */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1504A3C6: mov dword ptr [ebp - 0x30], ebx */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504A3C9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1504A3CC: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A3E9; /* 0x1504A3CE: jne 0x1504a3e9 */
L_1504A3D0:
    RECOMP_CALL(sub_15036430); /* 0x1504A3D0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1504A3D5: mov dword ptr [eax], 0x18 */
    RECOMP_CALL(sub_150363E0); /* 0x1504A3DB: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A3E0: mov dword ptr [eax], esi */
    eax = edi; /* 0x1504A3E2: mov eax, edi */
    goto L_1504A4C0; /* 0x1504A3E4: jmp 0x1504a4c0 */
L_1504A3E9:
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A3E9: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, 2); /* 0x1504A3EC: push 2 */
    PUSH32(esp, 1); /* 0x1504A3EE: push 1 */
    PUSH32(esp, esi); /* 0x1504A3F0: push esi */
    eax = ebp + (-0x2C); /* 0x1504A3F1: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504A3F4: push eax */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x1504A3F5: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504A3FB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504A3FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504BD60); /* 0x1504A3FF: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A404: pop ecx */
    PUSH32(esp, eax); /* 0x1504A405: push eax */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x1504A406: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504A40C: push eax */
    RECOMP_ICALL(MEM32(0x150C0120)); /* 0x1504A40D: call dword ptr [0x150c0120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504A413: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A421; /* 0x1504A415: jne 0x1504a421 */
L_1504A417:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504A417: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504A41D: mov esi, eax */
    goto L_1504A42C; /* 0x1504A41F: jmp 0x1504a42c */
L_1504A421:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1504A421: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1504A424: push ebx */
    RECOMP_CALL(sub_1504BF76); /* 0x1504A425: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A42A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A42B: pop ecx */
L_1504A42C:
    /* test esi, esi */ /* 0x1504A42C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A439; /* 0x1504A42E: je 0x1504a439 */
L_1504A430:
    PUSH32(esp, esi); /* 0x1504A430: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x1504A431: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A436: pop ecx */
    goto L_1504A4AC; /* 0x1504A437: jmp 0x1504a4ac */
L_1504A439:
    edx = ebx; /* 0x1504A439: mov edx, ebx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504A43B: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = ebx; /* 0x1504A43E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A440: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A443: imul esi, eax, 0x24 */
    SET_LO8(ecx, MEM8(ebp + (-0x19))); /* 0x1504A446: mov cl, byte ptr [ebp - 0x19] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xEFu); /* 0x1504A449: and cl, 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A44C: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(esi + eax + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1504A453: mov byte ptr [esi + eax + 4], cl */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A457: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    edi = MEM32(ebp + (-0x24)); /* 0x1504A45E: mov edi, dword ptr [ebp - 0x24] */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504A461: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    edi = MEM32(ebp + (-0x28)); /* 0x1504A468: mov edi, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + edi + 0x8); /* 0x1504A46B: mov eax, dword ptr [eax + edi + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A46F: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1504A473: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A476: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + esi + 0x8) = eax; /* 0x1504A47A: mov dword ptr [ecx + esi + 8], eax */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A47E: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    edi = MEM32(ebp + (-0x24)); /* 0x1504A485: mov edi, dword ptr [ebp - 0x24] */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504A488: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    edx = MEM32(ebp + (-0x28)); /* 0x1504A48F: mov edx, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + edx + 0x8); /* 0x1504A492: mov eax, dword ptr [eax + edx + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A496: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1504A49A: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A49D: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + esi + 0x8) = eax; /* 0x1504A4A1: mov dword ptr [ecx + esi + 8], eax */
    MEM32(ebp + (-0x20)) = 1; /* 0x1504A4A5: mov dword ptr [ebp - 0x20], 1 */
L_1504A4AC:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A4AC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A4D3); /* 0x1504A4B3: call 0x1504a4d3 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1504A4B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504A4BA: push -1 */
    eax = POP32_VAL(esp); /* 0x1504A4BC: pop eax */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ebx; } /* 0x1504A4BD: cmovne eax, ebx */
L_1504A4C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A4C0: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A4C3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A4CA: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A4CB: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A4CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A4CD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A4CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A4CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A4D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A4D3u);

L_1504A4D3:
    esi = MEM32(ebp + (-0x20)); /* 0x1504A4D3: mov esi, dword ptr [ebp - 0x20] */
    /* test esi, esi */ /* 0x1504A4D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A4FF; /* 0x1504A4D8: jne 0x1504a4ff */
L_1504A4DA:
    edi = ebx; /* 0x1504A4DA: mov edi, ebx */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1504A4DC: sar edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 5u);
    esi = ebx; /* 0x1504A4DF: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504A4E1: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504A4E4: imul ecx, esi, 0x24 */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504A4E7: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    SET_LO8(edx, MEM8(eax + ecx + 0x4)); /* 0x1504A4EE: mov dl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFEu); /* 0x1504A4F2: and dl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504A4F5: imul ecx, esi, 0x24 */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504A4F8: mov byte ptr [eax + ecx + 4], dl */
    esi = MEM32(ebp + (-0x20)); /* 0x1504A4FC: mov esi, dword ptr [ebp - 0x20] */
L_1504A4FF:
    PUSH32(esp, ebx); /* 0x1504A4FF: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504A500: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A505: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A506: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A510u);

L_1504A510:
    PUSH32(esp, 0xCu); /* 0x1504A510: push 0xc */
    PUSH32(esp, 0x150B0608u); /* 0x1504A512: push 0x150b0608 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A517: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504A51C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504A51F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A53F; /* 0x1504A522: jne 0x1504a53f */
L_1504A524:
    RECOMP_CALL(sub_150363E0); /* 0x1504A524: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A529: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A52C:
    RECOMP_CALL(sub_15036430); /* 0x1504A52C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A531: mov dword ptr [eax], 9 */
L_1504A537:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A537: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A60E; /* 0x1504A53A: jmp 0x1504a60e */
L_1504A53F:
    /* test edi, edi */ /* 0x1504A53F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504A552; /* 0x1504A541: js 0x1504a552 */
L_1504A543:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504A543: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A552; /* 0x1504A549: jae 0x1504a552 */
L_1504A54B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504A54B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504A54D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A54E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A556; /* 0x1504A550: jmp 0x1504a556 */
L_1504A552:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A552: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504A554: mov eax, esi */
L_1504A556:
    /* test eax, eax */ /* 0x1504A556: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A57B; /* 0x1504A558: jne 0x1504a57b */
L_1504A55A:
    RECOMP_CALL(sub_150363E0); /* 0x1504A55A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A55F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504A561: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A566: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504A56C: push esi */
    PUSH32(esp, esi); /* 0x1504A56D: push esi */
    PUSH32(esp, esi); /* 0x1504A56E: push esi */
    PUSH32(esp, esi); /* 0x1504A56F: push esi */
    PUSH32(esp, esi); /* 0x1504A570: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504A571: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A576: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504A537; /* 0x1504A579: jmp 0x1504a537 */
L_1504A57B:
    edx = edi; /* 0x1504A57B: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504A57D: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edi; /* 0x1504A580: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A582: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A585: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A588: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504A58F: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A55A; /* 0x1504A594: je 0x1504a55a */
L_1504A596:
    ebx = MEM32(ebp + 0xC); /* 0x1504A596: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504A599: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A5A7; /* 0x1504A59C: jne 0x1504a5a7 */
L_1504A59E:
    RECOMP_CALL(sub_150363E0); /* 0x1504A59E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A5A3: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1504A52C; /* 0x1504A5A5: jmp 0x1504a52c */
L_1504A5A7:
    /* cmp ebx, 0x800u */ /* 0x1504A5A7: cmp ebx, 0x800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A55A; /* 0x1504A5AD: jae 0x1504a55a */
L_1504A5AF:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504A5AF: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504A5D2; /* 0x1504A5B5: jl 0x1504a5d2 */
L_1504A5B7:
    PUSH32(esp, ebx); /* 0x1504A5B7: push ebx */
    RECOMP_CALL(sub_1504A76A); /* 0x1504A5B8: call 0x1504a76a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A5BD: pop ecx */
    /* test eax, eax */ /* 0x1504A5BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A5D2; /* 0x1504A5C0: je 0x1504a5d2 */
L_1504A5C2:
    RECOMP_CALL(sub_15036430); /* 0x1504A5C2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1504A5C7: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1504A537; /* 0x1504A5CD: jmp 0x1504a537 */
L_1504A5D2:
    /* cmp edi, ebx */ /* 0x1504A5D2: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504A5DF; /* 0x1504A5D4: jge 0x1504a5df */
L_1504A5D6:
    PUSH32(esp, edi); /* 0x1504A5D6: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504A5D7: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504A5DC: push ebx */
    goto L_1504A5E8; /* 0x1504A5DD: jmp 0x1504a5e8 */
L_1504A5DF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_1504A5EF; /* 0x1504A5DF: jle 0x1504a5ef */
L_1504A5E1:
    PUSH32(esp, ebx); /* 0x1504A5E1: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504A5E2: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1504A5E7: push edi */
L_1504A5E8:
    RECOMP_CALL(sub_1504BA49); /* 0x1504A5E8: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A5ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A5EE: pop ecx */
L_1504A5EF:
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A5EF: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, ebx); /* 0x1504A5F2: push ebx */
    PUSH32(esp, edi); /* 0x1504A5F3: push edi */
    RECOMP_CALL(sub_1504A63C); /* 0x1504A5F4: call 0x1504a63c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A5F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A5FA: pop ecx */
    esi = eax; /* 0x1504A5FB: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504A5FD: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A600: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A627); /* 0x1504A607: call 0x1504a627 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504A60C: mov eax, esi */
L_1504A60E:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A60E: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A611: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A618: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A619: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A61A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A61B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A61C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A61D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A627(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A627u);

L_1504A627:
    PUSH32(esp, edi); /* 0x1504A627: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504A628: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504A62D: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504A62E: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A633: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A634: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A635: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A63Cu);

L_1504A63C:
    edi = edi; /* 0x1504A63C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504A63E: push ebp */
    ebp = esp; /* 0x1504A63F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1504A641: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504A644: push ebx */
    PUSH32(esp, edi); /* 0x1504A645: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1504A646: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x1504A649: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A64B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x1504A64E: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504A650: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A653: imul ecx, eax, 0x24 */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A656: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1504A65D: mov dword ptr [ebp - 8], ecx */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504A660: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A682; /* 0x1504A665: jne 0x1504a682 */
L_1504A667:
    RECOMP_CALL(sub_15036430); /* 0x1504A667: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A66C: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504A672: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A677: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A67A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A760; /* 0x1504A67D: jmp 0x1504a760 */
L_1504A682:
    PUSH32(esp, esi); /* 0x1504A682: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1504A683: mov esi, dword ptr [ebp + 0xc] */
    /* cmp edi, esi */ /* 0x1504A686: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A75D; /* 0x1504A688: je 0x1504a75d */
L_1504A68E:
    eax = esi; /* 0x1504A68E: mov eax, esi */
    ecx = esi; /* 0x1504A690: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A692: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504A695: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A698: imul edx, eax, 0x24 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1504A69B: mov dword ptr [ebp - 0xc], ecx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504A69E: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1504A6A5: mov dword ptr [ebp - 0x10], edx */
    /* test MEM8(eax + edx + 0x4), 1 */ /* 0x1504A6A8: test byte ptr [eax + edx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A6B6; /* 0x1504A6AD: je 0x1504a6b6 */
L_1504A6AF:
    PUSH32(esp, esi); /* 0x1504A6AF: push esi */
    RECOMP_CALL(sub_15049E7E); /* 0x1504A6B0: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A6B5: pop ecx */
L_1504A6B6:
    PUSH32(esp, 2); /* 0x1504A6B6: push 2 */
    PUSH32(esp, 1); /* 0x1504A6B8: push 1 */
    PUSH32(esp, 0); /* 0x1504A6BA: push 0 */
    eax = ebp + (-0x4); /* 0x1504A6BC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1504A6BF: push eax */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x1504A6C0: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504A6C6: push eax */
    PUSH32(esp, edi); /* 0x1504A6C7: push edi */
    RECOMP_CALL(sub_1504BD60); /* 0x1504A6C8: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A6CD: pop ecx */
    PUSH32(esp, eax); /* 0x1504A6CE: push eax */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x1504A6CF: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504A6D5: push eax */
    RECOMP_ICALL(MEM32(0x150C0120)); /* 0x1504A6D6: call dword ptr [0x150c0120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504A6DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A6F6; /* 0x1504A6DE: jne 0x1504a6f6 */
L_1504A6E0:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504A6E0: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504A6E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A701; /* 0x1504A6E8: je 0x1504a701 */
L_1504A6EA:
    PUSH32(esp, eax); /* 0x1504A6EA: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504A6EB: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A6F0: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A6F1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A75F; /* 0x1504A6F4: jmp 0x1504a75f */
L_1504A6F6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1504A6F6: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1504A6F9: push esi */
    RECOMP_CALL(sub_1504BF76); /* 0x1504A6FA: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A6FF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A700: pop ecx */
L_1504A701:
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A701: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    edi = MEM32(ebp + (-0x8)); /* 0x1504A708: mov edi, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x1504A70B: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x1504A70E: mov esi, dword ptr [ebp - 0x10] */
    SET_LO8(ecx, MEM8(eax + edi + 0x4)); /* 0x1504A711: mov cl, byte ptr [eax + edi + 4] */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A715: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xEFu); /* 0x1504A71C: and cl, 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1504A71F: mov byte ptr [eax + esi + 4], cl */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A723: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A72A: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    eax = MEM32(eax + edi + 0x8); /* 0x1504A731: mov eax, dword ptr [eax + edi + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A735: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1504A739: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + esi + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + esi + 0x8) ^ eax));
    MEM32(ecx + esi + 0x8) = MEM32(ecx + esi + 0x8) ^ eax; /* 0x1504A73C: xor dword ptr [ecx + esi + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A740: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504A747: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    eax = MEM32(eax + edi + 0x8); /* 0x1504A74E: mov eax, dword ptr [eax + edi + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + esi + 0x8)));
    eax = eax ^ MEM32(ecx + esi + 0x8); /* 0x1504A752: xor eax, dword ptr [ecx + esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1504A756: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + esi + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + esi + 0x8) ^ eax));
    MEM32(ecx + esi + 0x8) = MEM32(ecx + esi + 0x8) ^ eax; /* 0x1504A759: xor dword ptr [ecx + esi + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A75D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504A75D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A75F:
    esi = POP32_VAL(esp); /* 0x1504A75F: pop esi */
L_1504A760:
    edi = POP32_VAL(esp); /* 0x1504A760: pop edi */
    ebx = POP32_VAL(esp); /* 0x1504A761: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A762: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A763: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A76A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A76Au);

L_1504A76A:
    edi = edi; /* 0x1504A76A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504A76C: push ebp */
    ebp = esp; /* 0x1504A76D: mov ebp, esp */
    ecx = MEM32(0x150BEBAC); /* 0x1504A76F: mov ecx, dword ptr [0x150bebac] */
    PUSH32(esp, esi); /* 0x1504A775: push esi */
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1504A776: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504A7E2; /* 0x1504A779: jl 0x1504a7e2 */
L_1504A77B:
    esi = 0x150BEBC0u; /* 0x1504A77B: mov esi, 0x150bebc0 */
L_1504A780:
    /* cmp MEM32(esi), 0 */ /* 0x1504A780: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A7DA; /* 0x1504A783: jne 0x1504a7da */
L_1504A785:
    PUSH32(esp, 0x24u); /* 0x1504A785: push 0x24 */
    PUSH32(esp, 0x20u); /* 0x1504A787: push 0x20 */
    RECOMP_CALL(sub_15048EE2); /* 0x1504A789: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1504A78E: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1504A790: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504A791: pop ecx */
    /* test edx, edx */ /* 0x1504A792: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A7E7; /* 0x1504A794: je 0x1504a7e7 */
L_1504A796:
    ecx = MEM32(0x150BEBAC); /* 0x1504A796: mov ecx, dword ptr [0x150bebac] */
    eax = edx + 0x480; /* 0x1504A79C: lea eax, [edx + 0x480] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1504A7A2: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esi) = edx; /* 0x1504A7A5: mov dword ptr [esi], edx */
    MEM32(0x150BEBAC) = ecx; /* 0x1504A7A7: mov dword ptr [0x150bebac], ecx */
    /* cmp edx, eax */ /* 0x1504A7AD: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A7DA; /* 0x1504A7AF: jae 0x1504a7da */
L_1504A7B1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 5; /* 0x1504A7B1: add edx, 5 */
    _flag_k = FK_ADD;
L_1504A7B4:
    _flag_a = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu));
    MEM32(edx + (-0x5)) = MEM32(edx + (-0x5)) | 0xFFFFFFFFu; /* 0x1504A7B4: or dword ptr [edx - 5], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edx + 0x24; /* 0x1504A7B8: lea edx, [edx + 0x24] */
    _flag_a = (uint32_t)(MEM32(edx + (-0x21))); _flag_b = (uint32_t)(0);
    MEM32(edx + (-0x21)) = MEM32(edx + (-0x21)) & 0; /* 0x1504A7BB: and dword ptr [edx - 0x21], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + (-0x5); /* 0x1504A7BF: lea eax, [edx - 5] */
    MEM16(edx + (-0x25)) = (uint16_t)(0xA00u); /* 0x1504A7C2: mov word ptr [edx - 0x25], 0xa00 */
    ecx = MEM32(esi); /* 0x1504A7C8: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x480u; /* 0x1504A7CA: add ecx, 0x480 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1504A7D0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504A7B4; /* 0x1504A7D2: jb 0x1504a7b4 */
L_1504A7D4:
    ecx = MEM32(0x150BEBAC); /* 0x1504A7D4: mov ecx, dword ptr [0x150bebac] */
L_1504A7DA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1504A7DA: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1504A7DD: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504A780; /* 0x1504A7E0: jge 0x1504a780 */
L_1504A7E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504A7E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A7E4:
    esi = POP32_VAL(esp); /* 0x1504A7E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504A7E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A7E6: ret  */
L_1504A7E7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A7E7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504A7E4; /* 0x1504A7EA: jmp 0x1504a7e4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504A800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A800u);

L_1504A800:
    PUSH32(esp, 0x14u); /* 0x1504A800: push 0x14 */
    PUSH32(esp, 0x150B0628u); /* 0x1504A802: push 0x150b0628 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A807: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504A80C: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1504A80F: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A8F1; /* 0x1504A812: je 0x1504a8f1 */
L_1504A818:
    /* test esi, esi */ /* 0x1504A818: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504A8F1; /* 0x1504A81A: js 0x1504a8f1 */
L_1504A820:
    /* cmp esi, MEM32(0x150BEBAC) */ /* 0x1504A820: cmp esi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A8F1; /* 0x1504A826: jae 0x1504a8f1 */
L_1504A82C:
    edi = esi; /* 0x1504A82C: mov edi, esi */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1504A82E: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1504A82E: shr edi, 5 */
    eax = esi; /* 0x1504A831: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A833: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A836: imul ebx, eax, 0x24 */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504A839: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x1504A840: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A8F1; /* 0x1504A845: je 0x1504a8f1 */
L_1504A84B:
    PUSH32(esp, esi); /* 0x1504A84B: push esi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504A84C: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A851: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504A852: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504A854: mov dword ptr [ebp - 4], ecx */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504A857: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    /* test MEM8(ebx + eax + 0x4), 1 */ /* 0x1504A85E: test byte ptr [ebx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A8BA; /* 0x1504A863: je 0x1504a8ba */
L_1504A865:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504A865: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504A867: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1504A868: push edi */
    PUSH32(esp, ecx); /* 0x1504A869: push ecx */
    PUSH32(esp, ecx); /* 0x1504A86A: push ecx */
    PUSH32(esp, esi); /* 0x1504A86B: push esi */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504A86C: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504A871: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1504A874: mov dword ptr [ebp - 0x20], eax */
    ebx = edx; /* 0x1504A877: mov ebx, edx */
    ecx = eax; /* 0x1504A879: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x1504A87B: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1504A87D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A8CD; /* 0x1504A880: je 0x1504a8cd */
L_1504A882:
    PUSH32(esp, 2); /* 0x1504A882: push 2 */
    PUSH32(esp, 0); /* 0x1504A884: push 0 */
    PUSH32(esp, 0); /* 0x1504A886: push 0 */
    PUSH32(esp, esi); /* 0x1504A888: push esi */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504A889: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504A88E: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x1504A891: mov dword ptr [ebp - 0x24], eax */
    ecx = eax; /* 0x1504A894: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1504A896: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1504A898: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A8CD; /* 0x1504A89B: je 0x1504a8cd */
L_1504A89D:
    eax = MEM32(ebp + (-0x20)); /* 0x1504A89D: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1504A8A0: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A8A9; /* 0x1504A8A3: jne 0x1504a8a9 */
L_1504A8A5:
    /* cmp ebx, edx */ /* 0x1504A8A5: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504A8D0; /* 0x1504A8A7: je 0x1504a8d0 */
L_1504A8A9:
    PUSH32(esp, 0); /* 0x1504A8A9: push 0 */
    PUSH32(esp, ebx); /* 0x1504A8AB: push ebx */
    PUSH32(esp, eax); /* 0x1504A8AC: push eax */
    PUSH32(esp, esi); /* 0x1504A8AD: push esi */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504A8AE: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504A8B3: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504A8B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A8D0; /* 0x1504A8B8: jmp 0x1504a8d0 */
L_1504A8BA:
    RECOMP_CALL(sub_15036430); /* 0x1504A8BA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A8BF: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504A8C5: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A8CA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A8CD:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504A8CD: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A8D0:
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504A8D0: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A8D3: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A8E9); /* 0x1504A8DA: call 0x1504a8e9 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1504A8DF: mov eax, edi */
    goto L_1504A907; /* 0x1504A8E1: jmp 0x1504a907 */
L_1504A8F1:
    RECOMP_CALL(sub_150363E0); /* 0x1504A8F1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A8F6: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504A8F9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A8FE: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A904: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504A907:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A907: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A90A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A911: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A912: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A913: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A914: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A915: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A916: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A8E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A8E9u);

L_1504A8E9:
    PUSH32(esp, esi); /* 0x1504A8E9: push esi */
    RECOMP_CALL(sub_1504C004); /* 0x1504A8EA: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A8EF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A8F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A920u);

L_1504A920:
    PUSH32(esp, 0x10u); /* 0x1504A920: push 0x10 */
    PUSH32(esp, 0x150B0648u); /* 0x1504A922: push 0x150b0648 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A927: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504A92C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504A92F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A94F; /* 0x1504A932: jne 0x1504a94f */
L_1504A934:
    RECOMP_CALL(sub_150363E0); /* 0x1504A934: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504A939: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504A93C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A941: mov dword ptr [eax], 9 */
L_1504A947:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A947: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504AA25; /* 0x1504A94A: jmp 0x1504aa25 */
L_1504A94F:
    /* test edi, edi */ /* 0x1504A94F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504A962; /* 0x1504A951: js 0x1504a962 */
L_1504A953:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504A953: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504A962; /* 0x1504A959: jae 0x1504a962 */
L_1504A95B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504A95B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504A95D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A95E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A966; /* 0x1504A960: jmp 0x1504a966 */
L_1504A962:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A962: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504A964: mov eax, esi */
L_1504A966:
    /* test eax, eax */ /* 0x1504A966: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A98B; /* 0x1504A968: jne 0x1504a98b */
L_1504A96A:
    RECOMP_CALL(sub_150363E0); /* 0x1504A96A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A96F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504A971: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504A976: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504A97C: push esi */
    PUSH32(esp, esi); /* 0x1504A97D: push esi */
    PUSH32(esp, esi); /* 0x1504A97E: push esi */
    PUSH32(esp, esi); /* 0x1504A97F: push esi */
    PUSH32(esp, esi); /* 0x1504A980: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504A981: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A986: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504A947; /* 0x1504A989: jmp 0x1504a947 */
L_1504A98B:
    ebx = edi; /* 0x1504A98B: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504A98D: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x1504A990: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504A992: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504A995: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504A998: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A99B: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504A9A2: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A96A; /* 0x1504A9A7: je 0x1504a96a */
L_1504A9A9:
    PUSH32(esp, edi); /* 0x1504A9A9: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504A9AA: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A9AF: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A9B0: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504A9B3: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504A9BA: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504A9BD: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A9FF; /* 0x1504A9C2: je 0x1504a9ff */
L_1504A9C4:
    PUSH32(esp, 1); /* 0x1504A9C4: push 1 */
    PUSH32(esp, esi); /* 0x1504A9C6: push esi */
    PUSH32(esp, edi); /* 0x1504A9C7: push edi */
    RECOMP_CALL(sub_1504C621); /* 0x1504A9C8: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504A9CD: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1504A9D0: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504A9D3: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1504A9D6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AA14; /* 0x1504A9D8: je 0x1504aa14 */
L_1504A9DA:
    PUSH32(esp, 2); /* 0x1504A9DA: push 2 */
    PUSH32(esp, esi); /* 0x1504A9DC: push esi */
    PUSH32(esp, edi); /* 0x1504A9DD: push edi */
    RECOMP_CALL(sub_1504C621); /* 0x1504A9DE: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504A9E3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1504A9E6: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504A9E8: mov dword ptr [ebp - 0x1c], ebx */
    eax = MEM32(ebp + (-0x20)); /* 0x1504A9EB: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, ebx */ /* 0x1504A9EE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AA17; /* 0x1504A9F0: je 0x1504aa17 */
L_1504A9F2:
    PUSH32(esp, esi); /* 0x1504A9F2: push esi */
    PUSH32(esp, eax); /* 0x1504A9F3: push eax */
    PUSH32(esp, edi); /* 0x1504A9F4: push edi */
    RECOMP_CALL(sub_1504C621); /* 0x1504A9F5: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504A9FA: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1504AA17; /* 0x1504A9FD: jmp 0x1504aa17 */
L_1504A9FF:
    RECOMP_CALL(sub_15036430); /* 0x1504A9FF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504AA04: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504AA0A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504AA0F: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504AA11: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504AA14:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504AA14: mov dword ptr [ebp - 0x1c], ebx */
L_1504AA17:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504AA17: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504AA3B); /* 0x1504AA1E: call 0x1504aa3b */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1504AA23: mov eax, ebx */
L_1504AA25:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504AA25: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504AA28: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504AA2F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504AA30: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AA31: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AA32: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AA33: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AA34: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AA3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AA3Bu);

L_1504AA3B:
    PUSH32(esp, edi); /* 0x1504AA3B: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504AA3C: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AA41: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AA42: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AA50u);

L_1504AA50:
    PUSH32(esp, 0x18u); /* 0x1504AA50: push 0x18 */
    PUSH32(esp, 0x150B0668u); /* 0x1504AA52: push 0x150b0668 */
    RECOMP_CALL(sub_1505E988); /* 0x1504AA57: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1504AA5C: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504AA5F: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AA81; /* 0x1504AA62: jne 0x1504aa81 */
L_1504AA64:
    RECOMP_CALL(sub_150363E0); /* 0x1504AA64: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504AA69: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504AA6C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504AA71: mov dword ptr [eax], 9 */
L_1504AA77:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504AA77: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504AA7A: mov eax, esi */
    goto L_1504AB60; /* 0x1504AA7C: jmp 0x1504ab60 */
L_1504AA81:
    /* test ebx, ebx */ /* 0x1504AA81: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504AA94; /* 0x1504AA83: js 0x1504aa94 */
L_1504AA85:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504AA85: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504AA94; /* 0x1504AA8B: jae 0x1504aa94 */
L_1504AA8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504AA8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504AA8F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504AA90: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504AA98; /* 0x1504AA92: jmp 0x1504aa98 */
L_1504AA94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504AA94: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1504AA96: mov eax, edi */
L_1504AA98:
    /* test eax, eax */ /* 0x1504AA98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504AABD; /* 0x1504AA9A: jne 0x1504aabd */
L_1504AA9C:
    RECOMP_CALL(sub_150363E0); /* 0x1504AA9C: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504AAA1: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036430); /* 0x1504AAA3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504AAA8: mov dword ptr [eax], 9 */
    PUSH32(esp, edi); /* 0x1504AAAE: push edi */
    PUSH32(esp, edi); /* 0x1504AAAF: push edi */
    PUSH32(esp, edi); /* 0x1504AAB0: push edi */
    PUSH32(esp, edi); /* 0x1504AAB1: push edi */
    PUSH32(esp, edi); /* 0x1504AAB2: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1504AAB3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504AAB8: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504AA77; /* 0x1504AABB: jmp 0x1504aa77 */
L_1504AABD:
    esi = ebx; /* 0x1504AABD: mov esi, ebx */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1504AABF: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    eax = ebx; /* 0x1504AAC2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504AAC4: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504AAC7: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1504AACA: mov dword ptr [ebp - 0x1c], ecx */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1504AACD: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504AAD4: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AA9C; /* 0x1504AAD9: je 0x1504aa9c */
L_1504AADB:
    PUSH32(esp, ebx); /* 0x1504AADB: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504AADC: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AAE1: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1504AAE2: mov dword ptr [ebp - 4], edi */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1504AAE5: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1504AAEC: mov ecx, dword ptr [ebp - 0x1c] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504AAEF: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AB72; /* 0x1504AAF4: je 0x1504ab72 */
L_1504AAF6:
    PUSH32(esp, 1); /* 0x1504AAF6: push 1 */
    PUSH32(esp, edi); /* 0x1504AAF8: push edi */
    PUSH32(esp, edi); /* 0x1504AAF9: push edi */
    PUSH32(esp, ebx); /* 0x1504AAFA: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504AAFB: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504AB00: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1504AB03: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504AB05: mov dword ptr [ebp - 0x20], ecx */
    eax = edx; /* 0x1504AB08: mov eax, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504AB0A: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1504AB0D: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504AB0F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, esi */ /* 0x1504AB12: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AB20; /* 0x1504AB14: jne 0x1504ab20 */
L_1504AB16:
    edi = esi; /* 0x1504AB16: mov edi, esi */
    MEM32(ebp + (-0x28)) = edi; /* 0x1504AB18: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1504AB1B: mov dword ptr [ebp - 0x24], esi */
    goto L_1504AB52; /* 0x1504AB1E: jmp 0x1504ab52 */
L_1504AB20:
    PUSH32(esp, 2); /* 0x1504AB20: push 2 */
    PUSH32(esp, edi); /* 0x1504AB22: push edi */
    PUSH32(esp, edi); /* 0x1504AB23: push edi */
    PUSH32(esp, ebx); /* 0x1504AB24: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504AB25: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504AB2A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x1504AB2D: mov dword ptr [ebp - 0x28], eax */
    esi = edx; /* 0x1504AB30: mov esi, edx */
    MEM32(ebp + (-0x24)) = esi; /* 0x1504AB32: mov dword ptr [ebp - 0x24], esi */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504AB35: mov ecx, dword ptr [ebp - 0x20] */
    /* cmp ecx, eax */ /* 0x1504AB38: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x1504AB3A: mov eax, dword ptr [ebp - 0x1c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AB43; /* 0x1504AB3D: jne 0x1504ab43 */
L_1504AB3F:
    /* cmp eax, esi */ /* 0x1504AB3F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AB4F; /* 0x1504AB41: je 0x1504ab4f */
L_1504AB43:
    PUSH32(esp, edi); /* 0x1504AB43: push edi */
    PUSH32(esp, eax); /* 0x1504AB44: push eax */
    PUSH32(esp, ecx); /* 0x1504AB45: push ecx */
    PUSH32(esp, ebx); /* 0x1504AB46: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504AB47: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504AB4C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1504AB4F:
    edi = MEM32(ebp + (-0x28)); /* 0x1504AB4F: mov edi, dword ptr [ebp - 0x28] */
L_1504AB52:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504AB52: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504AB92); /* 0x1504AB59: call 0x1504ab92 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1504AB5E: mov eax, edi */
L_1504AB60:
    edx = esi; /* 0x1504AB60: mov edx, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504AB62: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504AB65: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504AB6C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504AB6D: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AB6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AB6F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AB70: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AB71: ret  */
L_1504AB72:
    RECOMP_CALL(sub_15036430); /* 0x1504AB72: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504AB77: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504AB7D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504AB82: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504AB84: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504AB16; /* 0x1504AB87: jmp 0x1504ab16 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504AB92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AB92u);

L_1504AB92:
    PUSH32(esp, ebx); /* 0x1504AB92: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504AB93: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AB98: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AB99: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504ABA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504ABA0u);

L_1504ABA0:
    edi = edi; /* 0x1504ABA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504ABA2: push ebp */
    ebp = esp; /* 0x1504ABA3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504ABA5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1504ABA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ABBE; /* 0x1504ABAA: je 0x1504abbe */
L_1504ABAC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1504ABAC: sub eax, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(eax), 0xDDDDu */ /* 0x1504ABAF: cmp dword ptr [eax], 0xdddd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDDDDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504ABBE; /* 0x1504ABB5: jne 0x1504abbe */
L_1504ABB7:
    PUSH32(esp, eax); /* 0x1504ABB7: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1504ABB8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504ABBD: pop ecx */
L_1504ABBE:
    ebp = POP32_VAL(esp); /* 0x1504ABBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504ABBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504ABD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504ABD0u);

L_1504ABD0:
    PUSH32(esp, 0xCu); /* 0x1504ABD0: push 0xc */
    PUSH32(esp, 0x150B0688u); /* 0x1504ABD2: push 0x150b0688 */
    RECOMP_CALL(sub_1505E988); /* 0x1504ABD7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504ABDC: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504ABDE: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504ABE3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504ABE4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504AC22); /* 0x1504ABE8: call 0x1504ac22 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504ABED: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504ABEF: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504ABF2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504AC13); /* 0x1504ABF9: call 0x1504ac13 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504ABFE: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504AC00: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504AC03: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504AC0A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504AC0B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AC0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AC0D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AC0E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AC0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AC13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AC13u);

L_1504AC13:
    PUSH32(esp, 3); /* 0x1504AC13: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504AC15: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AC1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AC1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AC22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AC22u);

L_1504AC22:
    edi = edi; /* 0x1504AC22: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504AC24: push ebp */
    ebp = esp; /* 0x1504AC25: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1504AC27: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1504AC2A: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504AC2F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504AC31: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1504AC34: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BCEC4); /* 0x1504AC38: mov eax, dword ptr [0x150bcec4] */
    PUSH32(esp, edi); /* 0x1504AC3D: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504AC3E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1504AC41: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AC53; /* 0x1504AC43: je 0x1504ac53 */
L_1504AC45:
    MEM32(0x150BCEC4) = edi; /* 0x1504AC45: mov dword ptr [0x150bcec4], edi */
    eax = (uint32_t)LO8(eax); /* 0x1504AC4B: movzx eax, al */
    goto L_1504ACED; /* 0x1504AC4E: jmp 0x1504aced */
L_1504AC53:
    ecx = MEM32(0x150BCED0); /* 0x1504AC53: mov ecx, dword ptr [0x150bced0] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1504AC59: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AC69; /* 0x1504AC5C: jne 0x1504ac69 */
L_1504AC5E:
    RECOMP_CALL(sub_1504F773); /* 0x1504AC5E: call 0x1504f773 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x150BCED0); /* 0x1504AC63: mov ecx, dword ptr [0x150bced0] */
L_1504AC69:
    /* cmp ecx, edi */ /* 0x1504AC69: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AC71; /* 0x1504AC6B: jne 0x1504ac71 */
L_1504AC6D:
    eax = edi; /* 0x1504AC6D: mov eax, edi */
    goto L_1504ACED; /* 0x1504AC6F: jmp 0x1504aced */
L_1504AC71:
    PUSH32(esp, ebx); /* 0x1504AC71: push ebx */
    PUSH32(esp, esi); /* 0x1504AC72: push esi */
    eax = ebp + (-0x1C); /* 0x1504AC73: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504AC76: push eax */
    PUSH32(esp, ecx); /* 0x1504AC77: push ecx */
    RECOMP_ICALL(MEM32(0x150C0020)); /* 0x1504AC78: call dword ptr [0x150c0020] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1504AC7E: push 0 */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504AC80: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x1504AC86: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504AC8C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504AC8E: inc ebx */
    _flag_k = FK_INC;
    goto L_1504ACB9; /* 0x1504AC8F: jmp 0x1504acb9 */
L_1504AC91:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1504AC91: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ACD2; /* 0x1504AC95: je 0x1504acd2 */
L_1504AC97:
    /* cmp MEM16(ebp + (-0x18)), LO16(ebx) */ /* 0x1504AC97: cmp word ptr [ebp - 0x18], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x18))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504ACB9; /* 0x1504AC9B: jne 0x1504acb9 */
L_1504AC9D:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1504AC9D: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ACB9; /* 0x1504ACA1: je 0x1504acb9 */
L_1504ACA3:
    esi = (uint32_t)MEM8(ebp + (-0xA)); /* 0x1504ACA3: movzx esi, byte ptr [ebp - 0xa] */
    /* test esi, esi */ /* 0x1504ACA7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504ACD4; /* 0x1504ACA9: jne 0x1504acd4 */
L_1504ACAB:
    eax = ebp + (-0x14); /* 0x1504ACAB: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504ACAE: push eax */
    RECOMP_CALL(sub_1504AD9D); /* 0x1504ACAF: call 0x1504ad9d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504ACB4: pop ecx */
    /* test eax, eax */ /* 0x1504ACB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504ACFA; /* 0x1504ACB7: jne 0x1504acfa */
L_1504ACB9:
    eax = ebp + (-0x20); /* 0x1504ACB9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504ACBC: push eax */
    PUSH32(esp, ebx); /* 0x1504ACBD: push ebx */
    eax = ebp + (-0x18); /* 0x1504ACBE: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1504ACC1: push eax */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504ACC2: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C001C)); /* 0x1504ACC8: call dword ptr [0x150c001c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504ACCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504AC91; /* 0x1504ACD0: jne 0x1504ac91 */
L_1504ACD2:
    esi = edi; /* 0x1504ACD2: mov esi, edi */
L_1504ACD4:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1504ACD4: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ACE9; /* 0x1504ACD8: je 0x1504ace9 */
L_1504ACDA:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504ACDA: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504ACDD: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x1504ACE3: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
L_1504ACE9:
    eax = esi; /* 0x1504ACE9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504ACEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504ACEC: pop ebx */
L_1504ACED:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504ACED: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504ACF0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1504ACF2: pop edi */
    RECOMP_CALL(sub_1505E540); /* 0x1504ACF3: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504ACF8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504ACF9: ret  */
L_1504ACFA:
    esi = (uint32_t)MEM8(eax); /* 0x1504ACFA: movzx esi, byte ptr [eax] */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x1504ACFD: movzx eax, byte ptr [eax + 1] */
    MEM32(0x150BCEC4) = eax; /* 0x1504AD01: mov dword ptr [0x150bcec4], eax */
    RECOMP_BACKEDGE();
    goto L_1504ACD4; /* 0x1504AD06: jmp 0x1504acd4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504AD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AD10u);

L_1504AD10:
    PUSH32(esp, 0xCu); /* 0x1504AD10: push 0xc */
    PUSH32(esp, 0x150B06A8u); /* 0x1504AD12: push 0x150b06a8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504AD17: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504AD1C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504AD1E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AD23: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504AD24: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504AD62); /* 0x1504AD28: call 0x1504ad62 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504AD2D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504AD2F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504AD32: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504AD53); /* 0x1504AD39: call 0x1504ad53 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504AD3E: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504AD40: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504AD43: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504AD4A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504AD4B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AD4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AD4D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AD4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AD4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AD53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AD53u);

L_1504AD53:
    PUSH32(esp, 3); /* 0x1504AD53: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504AD55: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AD5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AD5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AD62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AD62u);

L_1504AD62:
    eax = MEM32(0x150BCEC4); /* 0x1504AD62: mov eax, dword ptr [0x150bcec4] */
    PUSH32(esp, esi); /* 0x1504AD67: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504AD68: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1504AD6B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AD7A; /* 0x1504AD6D: je 0x1504ad7a */
L_1504AD6F:
    MEM32(0x150BCEC4) = esi; /* 0x1504AD6F: mov dword ptr [0x150bcec4], esi */
    eax = (uint32_t)LO8(eax); /* 0x1504AD75: movzx eax, al */
    esi = POP32_VAL(esp); /* 0x1504AD78: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AD79: ret  */
L_1504AD7A:
    PUSH32(esp, edi); /* 0x1504AD7A: push edi */
    RECOMP_CALL(sub_1504AC22); /* 0x1504AD7B: call 0x1504ac22 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1504AD80: mov edi, eax */
    /* cmp edi, esi */ /* 0x1504AD82: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AD92; /* 0x1504AD84: je 0x1504ad92 */
L_1504AD86:
    PUSH32(esp, edi); /* 0x1504AD86: push edi */
    RECOMP_CALL(sub_1504D706); /* 0x1504AD87: call 0x1504d706 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1504AD8C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1504AD8E: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) { esi = edi; } /* 0x1504AD8F: cmovne esi, edi */
L_1504AD92:
    edi = POP32_VAL(esp); /* 0x1504AD92: pop edi */
    eax = esi; /* 0x1504AD93: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504AD95: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AD96: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AD9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AD9Du);

L_1504AD9D:
    edi = edi; /* 0x1504AD9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504AD9F: push ebp */
    ebp = esp; /* 0x1504ADA0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1504ADA2: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504ADA5: push esi */
    PUSH32(esp, edi); /* 0x1504ADA6: push edi */
    ecx = MEM32(edx + 0xC); /* 0x1504ADA7: mov ecx, dword ptr [edx + 0xc] */
    /* test ecx, 0x100u */ /* 0x1504ADAA: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AE02; /* 0x1504ADB0: je 0x1504ae02 */
L_1504ADB2:
    edi = (uint32_t)MEM16(edx + 0x8); /* 0x1504ADB2: movzx edi, word ptr [edx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504ADB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1504ADB8: mov esi, eax */
    edx = eax; /* 0x1504ADBA: mov edx, eax */
L_1504ADBC:
    /* cmp MEM16(edx + 0x15004980), LO16(edi) */ /* 0x1504ADBC: cmp word ptr [edx + 0x15004980], di */
    _flag_a = (uint32_t)(MEM16(edx + 0x15004980)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504ADD0; /* 0x1504ADC3: je 0x1504add0 */
L_1504ADC5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xAu; /* 0x1504ADC5: add edx, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504ADC8: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, 0x78u */ /* 0x1504ADC9: cmp edx, 0x78 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504ADBC; /* 0x1504ADCC: jb 0x1504adbc */
L_1504ADCE:
    goto L_1504AE4A; /* 0x1504ADCE: jmp 0x1504ae4a */
L_1504ADD0:
    eax = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x1504ADD0: imul eax, esi, 0xa */
    /* test LO8(ecx), 3 */ /* 0x1504ADD3: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ADE0; /* 0x1504ADD6: je 0x1504ade0 */
L_1504ADD8:
    eax = eax + 0x15004988; /* 0x1504ADD8: lea eax, [eax + 0x15004988] */
    goto L_1504AE4A; /* 0x1504ADDE: jmp 0x1504ae4a */
L_1504ADE0:
    /* test LO8(ecx), 0xCu */ /* 0x1504ADE0: test cl, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ADED; /* 0x1504ADE3: je 0x1504aded */
L_1504ADE5:
    eax = eax + 0x15004986; /* 0x1504ADE5: lea eax, [eax + 0x15004986] */
    goto L_1504AE4A; /* 0x1504ADEB: jmp 0x1504ae4a */
L_1504ADED:
    /* test LO8(ecx), 0x10u */ /* 0x1504ADED: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504ADFA; /* 0x1504ADF0: je 0x1504adfa */
L_1504ADF2:
    eax = eax + 0x15004984; /* 0x1504ADF2: lea eax, [eax + 0x15004984] */
    goto L_1504AE4A; /* 0x1504ADF8: jmp 0x1504ae4a */
L_1504ADFA:
    eax = eax + 0x15004982; /* 0x1504ADFA: lea eax, [eax + 0x15004982] */
    goto L_1504AE4A; /* 0x1504AE00: jmp 0x1504ae4a */
L_1504AE02:
    eax = (uint32_t)MEM16(edx + 0x8); /* 0x1504AE02: movzx eax, word ptr [edx + 8] */
    /* test LO8(ecx), 3 */ /* 0x1504AE06: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AE14; /* 0x1504AE09: je 0x1504ae14 */
L_1504AE0B:
    eax = eax * 8 + 0x150049FE; /* 0x1504AE0B: lea eax, [eax*8 + 0x150049fe] */
    goto L_1504AE37; /* 0x1504AE12: jmp 0x1504ae37 */
L_1504AE14:
    /* test LO8(ecx), 0xCu */ /* 0x1504AE14: test cl, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AE22; /* 0x1504AE17: je 0x1504ae22 */
L_1504AE19:
    eax = eax * 8 + 0x150049FC; /* 0x1504AE19: lea eax, [eax*8 + 0x150049fc] */
    goto L_1504AE37; /* 0x1504AE20: jmp 0x1504ae37 */
L_1504AE22:
    /* test LO8(ecx), 0x10u */ /* 0x1504AE22: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AE30; /* 0x1504AE25: je 0x1504ae30 */
L_1504AE27:
    eax = eax * 8 + 0x150049FA; /* 0x1504AE27: lea eax, [eax*8 + 0x150049fa] */
    goto L_1504AE37; /* 0x1504AE2E: jmp 0x1504ae37 */
L_1504AE30:
    eax = eax * 8 + 0x150049F8; /* 0x1504AE30: lea eax, [eax*8 + 0x150049f8] */
L_1504AE37:
    SET_LO8(ecx, MEM8(eax)); /* 0x1504AE37: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504AE39: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AE42; /* 0x1504AE3B: je 0x1504ae42 */
L_1504AE3D:
    /* cmp LO8(ecx), 0xE0u */ /* 0x1504AE3D: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AE48; /* 0x1504AE40: jne 0x1504ae48 */
L_1504AE42:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x1504AE42: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AE4A; /* 0x1504AE46: jne 0x1504ae4a */
L_1504AE48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504AE48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504AE4A:
    edi = POP32_VAL(esp); /* 0x1504AE4A: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AE4B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504AE4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AE4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AE60u);

L_1504AE60:
    PUSH32(esp, 0xCu); /* 0x1504AE60: push 0xc */
    PUSH32(esp, 0x150B06C8u); /* 0x1504AE62: push 0x150b06c8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504AE67: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504AE6C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504AE6E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AE73: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504AE74: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504AEB2); /* 0x1504AE78: call 0x1504aeb2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504AE7D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504AE7F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504AE82: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504AEA3); /* 0x1504AE89: call 0x1504aea3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504AE8E: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504AE90: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504AE93: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504AE9A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504AE9B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AE9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AE9D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AE9E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AE9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AEA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AEA3u);

L_1504AEA3:
    PUSH32(esp, 3); /* 0x1504AEA3: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504AEA5: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AEAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AEAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504AEB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504AEB2u);

L_1504AEB2:
    edi = edi; /* 0x1504AEB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504AEB4: push ebp */
    ebp = esp; /* 0x1504AEB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1504AEB7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1504AEBA: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504AEBF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504AEC1: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1504AEC4: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BCEC4), 0xFFFFFFFFu */ /* 0x1504AEC8: cmp dword ptr [0x150bcec4], -1 */
    _flag_a = (uint32_t)(MEM32(0x150BCEC4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504AECF: push ebx */
    PUSH32(esp, esi); /* 0x1504AED0: push esi */
    PUSH32(esp, edi); /* 0x1504AED1: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AEDC; /* 0x1504AED2: je 0x1504aedc */
L_1504AED4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504AED4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504AED6: inc eax */
    _flag_k = FK_INC;
    goto L_1504AFDF; /* 0x1504AED7: jmp 0x1504afdf */
L_1504AEDC:
    eax = MEM32(0x150BCED0); /* 0x1504AEDC: mov eax, dword ptr [0x150bced0] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1504AEE1: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AEF0; /* 0x1504AEE4: jne 0x1504aef0 */
L_1504AEE6:
    RECOMP_CALL(sub_1504F773); /* 0x1504AEE6: call 0x1504f773 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BCED0); /* 0x1504AEEB: mov eax, dword ptr [0x150bced0] */
L_1504AEF0:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504AEF0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AEF3: je 0x1504afdd */
L_1504AEF9:
    ecx = ebp + (-0x8); /* 0x1504AEF9: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1504AEFC: push ecx */
    PUSH32(esp, eax); /* 0x1504AEFD: push eax */
    RECOMP_ICALL(MEM32(0x150C0018)); /* 0x1504AEFE: call dword ptr [0x150c0018] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504AF04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF06: je 0x1504afdd */
L_1504AF0C:
    edi = MEM32(ebp + (-0x8)); /* 0x1504AF0C: mov edi, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1504AF0F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF11: je 0x1504afdd */
L_1504AF17:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1504AF17: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504AF19: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1504AF1B: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1504AF1C: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 0x14u */ /* 0x1504AF1E: cmp eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF21: jb 0x1504afdd */
L_1504AF27:
    eax = (uint32_t)((int32_t)edi * (int32_t)0x14u); /* 0x1504AF27: imul eax, edi, 0x14 */
    ecx = eax + 0x8; /* 0x1504AF2A: lea ecx, [eax + 8] */
    /* cmp ecx, eax */ /* 0x1504AF2D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504AF6D; /* 0x1504AF2F: jbe 0x1504af6d */
L_1504AF31:
    /* cmp ecx, 0x400u */ /* 0x1504AF31: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504AF52; /* 0x1504AF37: ja 0x1504af52 */
L_1504AF39:
    eax = ecx; /* 0x1504AF39: mov eax, ecx */
    RECOMP_CALL(sub_15069EB0); /* 0x1504AF3B: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x1504AF40: mov esi, esp */
    /* test esi, esi */ /* 0x1504AF42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF44: je 0x1504afdd */
L_1504AF4A:
    MEM32(esi) = 0xCCCCu; /* 0x1504AF4A: mov dword ptr [esi], 0xcccc */
    goto L_1504AF65; /* 0x1504AF50: jmp 0x1504af65 */
L_1504AF52:
    PUSH32(esp, ecx); /* 0x1504AF52: push ecx */
    RECOMP_CALL(sub_15048A30); /* 0x1504AF53: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504AF58: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1504AF5A: pop ecx */
    /* test esi, esi */ /* 0x1504AF5B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF5D: je 0x1504afdd */
L_1504AF5F:
    MEM32(esi) = 0xDDDDu; /* 0x1504AF5F: mov dword ptr [esi], 0xdddd */
L_1504AF65:
    edi = MEM32(ebp + (-0x8)); /* 0x1504AF65: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1504AF68: add esi, 8 */
    _flag_k = FK_ADD;
    goto L_1504AF6F; /* 0x1504AF6B: jmp 0x1504af6f */
L_1504AF6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504AF6D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504AF6F:
    /* test esi, esi */ /* 0x1504AF6F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFDD; /* 0x1504AF71: je 0x1504afdd */
L_1504AF73:
    eax = ebp + (-0xC); /* 0x1504AF73: lea eax, [ebp - 0xc] */
    ebx = esi; /* 0x1504AF76: mov ebx, esi */
    PUSH32(esp, eax); /* 0x1504AF78: push eax */
    PUSH32(esp, edi); /* 0x1504AF79: push edi */
    PUSH32(esp, esi); /* 0x1504AF7A: push esi */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504AF7B: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0038)); /* 0x1504AF81: call dword ptr [0x150c0038] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504AF87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFD1; /* 0x1504AF89: je 0x1504afd1 */
L_1504AF8B:
    edi = MEM32(ebp + (-0xC)); /* 0x1504AF8B: mov edi, dword ptr [ebp - 0xc] */
    /* test edi, edi */ /* 0x1504AF8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFD1; /* 0x1504AF90: je 0x1504afd1 */
L_1504AF92:
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x1504AF92: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504AFD1; /* 0x1504AF95: ja 0x1504afd1 */
L_1504AF97:
    /* test edi, edi */ /* 0x1504AF97: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFD1; /* 0x1504AF99: je 0x1504afd1 */
L_1504AF9B:
    ebx = esi + 0x4; /* 0x1504AF9B: lea ebx, [esi + 4] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1504AF9E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504AFA1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504AFA3: inc esi */
    _flag_k = FK_INC;
L_1504AFA4:
    /* cmp MEM16(ebx + (-0x4)), LO16(esi) */ /* 0x1504AFA4: cmp word ptr [ebx - 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AFC3; /* 0x1504AFA8: jne 0x1504afc3 */
L_1504AFAA:
    /* cmp MEM32(ebx), 0 */ /* 0x1504AFAA: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504AFC3; /* 0x1504AFAD: je 0x1504afc3 */
L_1504AFAF:
    /* cmp MEM8(ebx + 0xA), 0 */ /* 0x1504AFAF: cmp byte ptr [ebx + 0xa], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xA)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504AFC0; /* 0x1504AFB3: jne 0x1504afc0 */
L_1504AFB5:
    PUSH32(esp, ebx); /* 0x1504AFB5: push ebx */
    RECOMP_CALL(sub_1504AD9D); /* 0x1504AFB6: call 0x1504ad9d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504AFBB: pop ecx */
    /* test eax, eax */ /* 0x1504AFBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504AFC3; /* 0x1504AFBE: je 0x1504afc3 */
L_1504AFC0:
    MEM32(ebp + (-0x10)) = esi; /* 0x1504AFC0: mov dword ptr [ebp - 0x10], esi */
L_1504AFC3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504AFC3: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x1504AFC4: add ebx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edi; /* 0x1504AFC7: mov dword ptr [ebp - 0xc], edi */
    /* test edi, edi */ /* 0x1504AFCA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504AFA4; /* 0x1504AFCC: jne 0x1504afa4 */
L_1504AFCE:
    ebx = MEM32(ebp + (-0x14)); /* 0x1504AFCE: mov ebx, dword ptr [ebp - 0x14] */
L_1504AFD1:
    PUSH32(esp, ebx); /* 0x1504AFD1: push ebx */
    RECOMP_CALL(sub_1504ABA0); /* 0x1504AFD2: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1504AFD7: mov eax, dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x1504AFDA: pop ecx */
    goto L_1504AFDF; /* 0x1504AFDB: jmp 0x1504afdf */
L_1504AFDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504AFDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504AFDF:
    esp = ebp + (-0x20); /* 0x1504AFDF: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x1504AFE2: pop edi */
    esi = POP32_VAL(esp); /* 0x1504AFE3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504AFE4: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1504AFE5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504AFE8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1504AFEA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504AFEF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504AFF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B000u);

L_1504B000:
    PUSH32(esp, 0xCu); /* 0x1504B000: push 0xc */
    PUSH32(esp, 0x150B06E8u); /* 0x1504B002: push 0x150b06e8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504B007: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504B00C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504B00E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B013: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504B014: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504B018: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504B056); /* 0x1504B01B: call 0x1504b056 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B020: pop ecx */
    esi = eax; /* 0x1504B021: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504B023: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504B026: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504B047); /* 0x1504B02D: call 0x1504b047 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504B032: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504B034: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504B037: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504B03E: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504B03F: pop edi */
    esi = POP32_VAL(esp); /* 0x1504B040: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504B041: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504B042: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B043: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B047(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B047u);

L_1504B047:
    PUSH32(esp, 3); /* 0x1504B047: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504B049: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B04E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B04F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B056(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B056u);

L_1504B056:
    edi = edi; /* 0x1504B056: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B058: push ebp */
    ebp = esp; /* 0x1504B059: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504B05B: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504B05E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B076; /* 0x1504B061: je 0x1504b076 */
L_1504B063:
    /* cmp MEM32(0x150BCEC4), 0xFFFFFFFFu */ /* 0x1504B063: cmp dword ptr [0x150bcec4], -1 */
    _flag_a = (uint32_t)(MEM32(0x150BCEC4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B076; /* 0x1504B06A: jne 0x1504b076 */
L_1504B06C:
    eax = (uint32_t)LO8(eax); /* 0x1504B06C: movzx eax, al */
    MEM32(0x150BCEC4) = eax; /* 0x1504B06F: mov dword ptr [0x150bcec4], eax */
    ebp = POP32_VAL(esp); /* 0x1504B074: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B075: ret  */
L_1504B076:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504B076: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504B079: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B07A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B090u);

L_1504B090:
    edi = edi; /* 0x1504B090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B092: push ebp */
    ebp = esp; /* 0x1504B093: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1504B095: pop ebp */
    goto L_1504B0A1; /* 0x1504B096: jmp 0x1504b0a1 */
L_1504B0A1:
    PUSH32(esp, 0x6Cu); /* 0x1504B0A1: push 0x6c */
    PUSH32(esp, 0x150B0708u); /* 0x1504B0A3: push 0x150b0708 */
    RECOMP_CALL(sub_1505E9E8); /* 0x1504B0A8: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1504B0AD: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1504B0B0: mov edx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x64)) = edx; /* 0x1504B0B3: mov dword ptr [ebp - 0x64], edx */
    MEM32(ebp + (-0x7C)) = edx; /* 0x1504B0B6: mov dword ptr [ebp - 0x7c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504B0B9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = esi; /* 0x1504B0BB: mov dword ptr [ebp - 0x68], esi */
    /* test ebx, ebx */ /* 0x1504B0BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B0E9; /* 0x1504B0C0: jne 0x1504b0e9 */
L_1504B0C2:
    RECOMP_CALL(sub_150363E0); /* 0x1504B0C2: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B0C7: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B0C9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504B0CE: mov dword ptr [eax], 0x16 */
L_1504B0D4:
    PUSH32(esp, esi); /* 0x1504B0D4: push esi */
    PUSH32(esp, esi); /* 0x1504B0D5: push esi */
    PUSH32(esp, esi); /* 0x1504B0D6: push esi */
    PUSH32(esp, esi); /* 0x1504B0D7: push esi */
    PUSH32(esp, esi); /* 0x1504B0D8: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504B0D9: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504B0DE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504B0E1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504B0E1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504B19D; /* 0x1504B0E4: jmp 0x1504b19d */
L_1504B0E9:
    PUSH32(esp, 9); /* 0x1504B0E9: push 9 */
    ecx = POP32_VAL(esp); /* 0x1504B0EB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B0EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1504B0EE: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1504B0F0: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1504B0F2: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B10B; /* 0x1504B0F5: jne 0x1504b10b */
L_1504B0F7:
    RECOMP_CALL(sub_150363E0); /* 0x1504B0F7: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B0FC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B0FE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B103: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B0E1; /* 0x1504B109: jmp 0x1504b0e1 */
L_1504B10B:
    /* test edx, edx */ /* 0x1504B10B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504B11E; /* 0x1504B10D: js 0x1504b11e */
L_1504B10F:
    /* cmp edx, MEM32(0x150BEBAC) */ /* 0x1504B10F: cmp edx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504B11E; /* 0x1504B115: jae 0x1504b11e */
L_1504B117:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504B117: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504B119: inc edi */
    _flag_k = FK_INC;
    eax = edi; /* 0x1504B11A: mov eax, edi */
    goto L_1504B121; /* 0x1504B11C: jmp 0x1504b121 */
L_1504B11E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504B11E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504B120: inc edi */
    _flag_k = FK_INC;
L_1504B121:
    /* test eax, eax */ /* 0x1504B121: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B139; /* 0x1504B123: jne 0x1504b139 */
L_1504B125:
    RECOMP_CALL(sub_150363E0); /* 0x1504B125: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B12A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B12C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B131: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B0D4; /* 0x1504B137: jmp 0x1504b0d4 */
L_1504B139:
    ecx = edx; /* 0x1504B139: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504B13B: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x70)) = ecx; /* 0x1504B13E: mov dword ptr [ebp - 0x70], ecx */
    eax = edx; /* 0x1504B141: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504B143: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504B146: imul eax, eax, 0x24 */
    MEM32(ebp + (-0x6C)) = eax; /* 0x1504B149: mov dword ptr [ebp - 0x6c], eax */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504B14C: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504B153: mov ecx, dword ptr [ebp - 0x6c] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504B156: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B125; /* 0x1504B15B: je 0x1504b125 */
L_1504B15D:
    PUSH32(esp, edx); /* 0x1504B15D: push edx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504B15E: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B163: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504B164: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x70)); /* 0x1504B167: mov eax, dword ptr [ebp - 0x70] */
    ecx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B16A: mov ecx, dword ptr [eax*4 + 0x150bebc0] */
    eax = MEM32(ebp + (-0x6C)); /* 0x1504B171: mov eax, dword ptr [ebp - 0x6c] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504B174: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B1AD; /* 0x1504B179: jne 0x1504b1ad */
L_1504B17B:
    RECOMP_CALL(sub_15036430); /* 0x1504B17B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B180: mov dword ptr [eax], 9 */
L_1504B186:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504B186: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = esi; /* 0x1504B189: mov dword ptr [ebp - 0x68], esi */
L_1504B18C:
    edi = MEM32(ebp + (-0x64)); /* 0x1504B18C: mov edi, dword ptr [ebp - 0x64] */
L_1504B18F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504B18F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504B3ED); /* 0x1504B196: call 0x1504b3ed */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504B19B: mov eax, esi */
L_1504B19D:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504B19D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504B1A0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504B1A7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504B1A8: pop edi */
    esi = POP32_VAL(esp); /* 0x1504B1A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504B1AA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504B1AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B1AC: ret  */
L_1504B1AD:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504B1AD: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504B1B0: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x1504B1B6: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1504B1BB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B251; /* 0x1504B1BD: je 0x1504b251 */
L_1504B1C3:
    /* cmp eax, 2 */ /* 0x1504B1C3: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B1E5; /* 0x1504B1C6: je 0x1504b1e5 */
L_1504B1C8:
    /* cmp eax, 3 */ /* 0x1504B1C8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B1E0; /* 0x1504B1CB: je 0x1504b1e0 */
L_1504B1CD:
    /* test eax, eax */ /* 0x1504B1CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B17B; /* 0x1504B1CF: je 0x1504b17b */
L_1504B1D1:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504B1D1: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504B1D7: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504B1D8: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B1DD: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504B186; /* 0x1504B1DE: jmp 0x1504b186 */
L_1504B1E0:
    /* cmp eax, 2 */ /* 0x1504B1E0: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B1EC; /* 0x1504B1E3: jne 0x1504b1ec */
L_1504B1E5:
    ecx = 0x2000u; /* 0x1504B1E5: mov ecx, 0x2000 */
    goto L_1504B1F1; /* 0x1504B1EA: jmp 0x1504b1f1 */
L_1504B1EC:
    ecx = 0x1000u; /* 0x1504B1EC: mov ecx, 0x1000 */
L_1504B1F1:
    MEM16(ebx + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1504B1F1: mov word ptr [ebx + 6], cx */
    edi = MEM32(ebp + (-0x64)); /* 0x1504B1F5: mov edi, dword ptr [ebp - 0x64] */
    MEM32(ebx) = edi; /* 0x1504B1F8: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x10) = edi; /* 0x1504B1FA: mov dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B1FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504B1FF: inc ecx */
    _flag_k = FK_INC;
    MEM16(ebx + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1504B200: mov word ptr [ebx + 8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B204: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1504B206: mov word ptr [ebx + 4], cx */
    MEM32(ebx + 0xA) = ecx; /* 0x1504B20A: mov dword ptr [ebx + 0xa], ecx */
    MEM32(ebx + 0x20) = esi; /* 0x1504B20D: mov dword ptr [ebx + 0x20], esi */
    MEM32(ebx + 0x1C) = esi; /* 0x1504B210: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebx + 0x18) = esi; /* 0x1504B213: mov dword ptr [ebx + 0x18], esi */
    /* cmp eax, 2 */ /* 0x1504B216: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B223; /* 0x1504B219: jne 0x1504b223 */
L_1504B21B:
    MEM32(ebx + 0x14) = esi; /* 0x1504B21B: mov dword ptr [ebx + 0x14], esi */
    RECOMP_BACKEDGE();
    goto L_1504B18F; /* 0x1504B21E: jmp 0x1504b18f */
L_1504B223:
    PUSH32(esp, esi); /* 0x1504B223: push esi */
    eax = ebp + (-0x64); /* 0x1504B224: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1504B227: push eax */
    PUSH32(esp, esi); /* 0x1504B228: push esi */
    PUSH32(esp, esi); /* 0x1504B229: push esi */
    PUSH32(esp, esi); /* 0x1504B22A: push esi */
    eax = MEM32(ebp + (-0x70)); /* 0x1504B22B: mov eax, dword ptr [ebp - 0x70] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B22E: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504B235: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504B238: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C01C0)); /* 0x1504B23B: call dword ptr [0x150c01c0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B241: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1504B243: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x64)); } /* 0x1504B245: cmovne ecx, dword ptr [ebp - 0x64] */
    MEM32(ebx + 0x14) = ecx; /* 0x1504B249: mov dword ptr [ebx + 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_1504B18F; /* 0x1504B24C: jmp 0x1504b18f */
L_1504B251:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B251: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = eax; /* 0x1504B253: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xA) = eax; /* 0x1504B256: mov dword ptr [ebx + 0xa], eax */
    MEM16(ebx + 0x8) = (uint16_t)(LO16(edi)); /* 0x1504B259: mov word ptr [ebx + 8], di */
    eax = ebp + (-0x60); /* 0x1504B25D: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1504B260: push eax */
    eax = MEM32(ebp + (-0x70)); /* 0x1504B261: mov eax, dword ptr [ebp - 0x70] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B264: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504B26B: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504B26E: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C00F4)); /* 0x1504B271: call dword ptr [0x150c00f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B277: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B1D1; /* 0x1504B279: je 0x1504b1d1 */
L_1504B27F:
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x1504B27F: movzx eax, word ptr [ebx + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x1504B283: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B290; /* 0x1504B287: je 0x1504b290 */
L_1504B289:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x1504B289: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504B295; /* 0x1504B28E: jmp 0x1504b295 */
L_1504B290:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x1504B290: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504B295:
    MEM16(ebx + 0x6) = (uint16_t)(LO16(eax)); /* 0x1504B295: mov word ptr [ebx + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1504B299: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B2AC; /* 0x1504B29D: jne 0x1504b2ac */
L_1504B29F:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x1504B29F: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B2AC; /* 0x1504B2A3: jne 0x1504b2ac */
L_1504B2A5:
    MEM32(ebx + 0x1C) = esi; /* 0x1504B2A5: mov dword ptr [ebx + 0x1c], esi */
    eax = esi; /* 0x1504B2A8: mov eax, esi */
    goto L_1504B303; /* 0x1504B2AA: jmp 0x1504b303 */
L_1504B2AC:
    eax = ebp + (-0x78); /* 0x1504B2AC: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B2AF: push eax */
    eax = ebp + (-0x4C); /* 0x1504B2B0: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1504B2B3: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B2B4: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B2BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B2BC: je 0x1504b186 */
L_1504B2C2:
    eax = ebp + (-0x2C); /* 0x1504B2C2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B2C5: push eax */
    eax = ebp + (-0x78); /* 0x1504B2C6: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B2C9: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B2CA: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B2D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B2D2: je 0x1504b186 */
L_1504B2D8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B2D8: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B2DA: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B2DE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B2DF: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B2E3: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B2E4: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B2E8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B2E9: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B2ED: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B2EE: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B2F2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B2F3: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B2F7: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504B2F8: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B2FD: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x1C) = eax; /* 0x1504B300: mov dword ptr [ebx + 0x1c], eax */
L_1504B303:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x1504B303: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B30F; /* 0x1504B307: jne 0x1504b30f */
L_1504B309:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x1504B309: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B363; /* 0x1504B30D: je 0x1504b363 */
L_1504B30F:
    eax = ebp + (-0x78); /* 0x1504B30F: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B312: push eax */
    eax = ebp + (-0x54); /* 0x1504B313: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1504B316: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B317: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B31D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B31F: je 0x1504b186 */
L_1504B325:
    eax = ebp + (-0x2C); /* 0x1504B325: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B328: push eax */
    eax = ebp + (-0x78); /* 0x1504B329: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B32C: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B32D: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B335: je 0x1504b186 */
L_1504B33B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B33B: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B33D: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B341: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B342: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B346: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B347: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B34B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B34C: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B350: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B351: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B355: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B356: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B35A: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504B35B: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B360: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1504B363:
    MEM32(ebx + 0x18) = eax; /* 0x1504B363: mov dword ptr [ebx + 0x18], eax */
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x1504B366: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B377; /* 0x1504B36A: jne 0x1504b377 */
L_1504B36C:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x1504B36C: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B377; /* 0x1504B370: jne 0x1504b377 */
L_1504B372:
    eax = MEM32(ebx + 0x1C); /* 0x1504B372: mov eax, dword ptr [ebx + 0x1c] */
    goto L_1504B3CB; /* 0x1504B375: jmp 0x1504b3cb */
L_1504B377:
    eax = ebp + (-0x78); /* 0x1504B377: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B37A: push eax */
    eax = ebp + (-0x5C); /* 0x1504B37B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1504B37E: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B37F: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B387: je 0x1504b186 */
L_1504B38D:
    eax = ebp + (-0x2C); /* 0x1504B38D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B390: push eax */
    eax = ebp + (-0x78); /* 0x1504B391: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B394: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B395: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B39B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B186; /* 0x1504B39D: je 0x1504b186 */
L_1504B3A3:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B3A3: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B3A5: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B3A9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B3AA: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B3AE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B3AF: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B3B3: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B3B4: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B3B8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B3B9: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B3BD: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B3BE: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B3C2: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504B3C3: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B3C8: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1504B3CB:
    MEM32(ebx + 0x20) = eax; /* 0x1504B3CB: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1504B3CE: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebx + 0x14) = eax; /* 0x1504B3D1: mov dword ptr [ebx + 0x14], eax */
    eax = 0x8000u; /* 0x1504B3D4: mov eax, 0x8000 */
    _flag_a = (uint32_t)((MEM16(ebx + 0x6) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(ebx + 0x6) | LO16(eax))) << 16;
    MEM16(ebx + 0x6) = (uint16_t)(MEM16(ebx + 0x6) | LO16(eax)); /* 0x1504B3D9: or word ptr [ebx + 6], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ebx) = esi; /* 0x1504B3DD: mov dword ptr [ebx], esi */
    MEM32(ebx + 0x10) = esi; /* 0x1504B3DF: mov dword ptr [ebx + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_1504B18C; /* 0x1504B3E2: jmp 0x1504b18c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504B3ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B3EDu);

L_1504B3ED:
    PUSH32(esp, edi); /* 0x1504B3ED: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504B3EE: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B3F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B3F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B400u);

L_1504B400:
    edi = edi; /* 0x1504B400: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B402: push ebp */
    ebp = esp; /* 0x1504B403: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1504B405: pop ebp */
    goto L_1504F7BD; /* 0x1504B406: jmp 0x1504f7bd */
L_1504F7BD:
    PUSH32(esp, 0x6Cu); /* 0x1504F7BD: push 0x6c */
    PUSH32(esp, 0x150B0998u); /* 0x1504F7BF: push 0x150b0998 */
    RECOMP_CALL(sub_1505E9E8); /* 0x1504F7C4: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1504F7C9: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x1504F7CC: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1504F7CF: mov dword ptr [ebp - 0x7c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504F7D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x1504F7D4: mov dword ptr [ebp - 0x64], esi */
    /* test edi, edi */ /* 0x1504F7D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F802; /* 0x1504F7D9: jne 0x1504f802 */
L_1504F7DB:
    RECOMP_CALL(sub_150363E0); /* 0x1504F7DB: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504F7E0: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504F7E2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504F7E7: mov dword ptr [eax], 0x16 */
L_1504F7ED:
    PUSH32(esp, esi); /* 0x1504F7ED: push esi */
    PUSH32(esp, esi); /* 0x1504F7EE: push esi */
    PUSH32(esp, esi); /* 0x1504F7EF: push esi */
    PUSH32(esp, esi); /* 0x1504F7F0: push esi */
    PUSH32(esp, esi); /* 0x1504F7F1: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504F7F2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504F7F7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504F7FA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504F7FA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504F8B0; /* 0x1504F7FD: jmp 0x1504f8b0 */
L_1504F802:
    PUSH32(esp, 0x30u); /* 0x1504F802: push 0x30 */
    PUSH32(esp, esi); /* 0x1504F804: push esi */
    PUSH32(esp, edi); /* 0x1504F805: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504F806: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504F80B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504F80E: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F827; /* 0x1504F811: jne 0x1504f827 */
L_1504F813:
    RECOMP_CALL(sub_150363E0); /* 0x1504F813: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504F818: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504F81A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504F81F: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504F7FA; /* 0x1504F825: jmp 0x1504f7fa */
L_1504F827:
    /* test ebx, ebx */ /* 0x1504F827: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504F838; /* 0x1504F829: js 0x1504f838 */
L_1504F82B:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504F82B: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504F838; /* 0x1504F831: jae 0x1504f838 */
L_1504F833:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F833: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504F835: inc eax */
    _flag_k = FK_INC;
    goto L_1504F83A; /* 0x1504F836: jmp 0x1504f83a */
L_1504F838:
    eax = esi; /* 0x1504F838: mov eax, esi */
L_1504F83A:
    /* test eax, eax */ /* 0x1504F83A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F852; /* 0x1504F83C: jne 0x1504f852 */
L_1504F83E:
    RECOMP_CALL(sub_150363E0); /* 0x1504F83E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504F843: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504F845: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504F84A: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504F7ED; /* 0x1504F850: jmp 0x1504f7ed */
L_1504F852:
    ecx = ebx; /* 0x1504F852: mov ecx, ebx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504F854: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x68)) = ecx; /* 0x1504F857: mov dword ptr [ebp - 0x68], ecx */
    eax = ebx; /* 0x1504F85A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504F85C: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504F85F: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x6C)) = edx; /* 0x1504F862: mov dword ptr [ebp - 0x6c], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504F865: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x1504F86C: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F83E; /* 0x1504F871: je 0x1504f83e */
L_1504F873:
    PUSH32(esp, ebx); /* 0x1504F873: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504F874: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F879: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504F87A: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x68)); /* 0x1504F87D: mov eax, dword ptr [ebp - 0x68] */
    ecx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F880: mov ecx, dword ptr [eax*4 + 0x150bebc0] */
    eax = MEM32(ebp + (-0x6C)); /* 0x1504F887: mov eax, dword ptr [ebp - 0x6c] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504F88A: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504F8C0; /* 0x1504F88F: jne 0x1504f8c0 */
L_1504F891:
    RECOMP_CALL(sub_15036430); /* 0x1504F891: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504F896: mov dword ptr [eax], 9 */
L_1504F89C:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504F89C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x1504F89F: mov dword ptr [ebp - 0x64], esi */
L_1504F8A2:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504F8A2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504FB0D); /* 0x1504F8A9: call 0x1504fb0d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504F8AE: mov eax, esi */
L_1504F8B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504F8B0: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504F8B3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504F8BA: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504F8BB: pop edi */
    esi = POP32_VAL(esp); /* 0x1504F8BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504F8BD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504F8BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504F8BF: ret  */
L_1504F8C0:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504F8C0: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504F8C3: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x1504F8C9: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F8CE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504F8D0: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1504F8D1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F967; /* 0x1504F8D3: je 0x1504f967 */
L_1504F8D9:
    /* cmp eax, 2 */ /* 0x1504F8D9: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F8FB; /* 0x1504F8DC: je 0x1504f8fb */
L_1504F8DE:
    /* cmp eax, 3 */ /* 0x1504F8DE: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F8F6; /* 0x1504F8E1: je 0x1504f8f6 */
L_1504F8E3:
    /* test eax, eax */ /* 0x1504F8E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F891; /* 0x1504F8E5: je 0x1504f891 */
L_1504F8E7:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504F8E7: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504F8ED: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504F8EE: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504F8F3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504F89C; /* 0x1504F8F4: jmp 0x1504f89c */
L_1504F8F6:
    /* cmp eax, 2 */ /* 0x1504F8F6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F902; /* 0x1504F8F9: jne 0x1504f902 */
L_1504F8FB:
    edx = 0x2000u; /* 0x1504F8FB: mov edx, 0x2000 */
    goto L_1504F907; /* 0x1504F900: jmp 0x1504f907 */
L_1504F902:
    edx = 0x1000u; /* 0x1504F902: mov edx, 0x1000 */
L_1504F907:
    MEM16(edi + 0x6) = (uint16_t)(LO16(edx)); /* 0x1504F907: mov word ptr [edi + 6], dx */
    MEM32(edi) = ebx; /* 0x1504F90B: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1504F90D: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1504F910: mov word ptr [edi + 8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504F914: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1504F916: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x1504F91A: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x28) = esi; /* 0x1504F91D: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x24) = esi; /* 0x1504F920: mov dword ptr [edi + 0x24], esi */
    MEM32(edi + 0x20) = esi; /* 0x1504F923: mov dword ptr [edi + 0x20], esi */
    /* cmp eax, 2 */ /* 0x1504F926: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504F95C; /* 0x1504F929: je 0x1504f95c */
L_1504F92B:
    PUSH32(esp, esi); /* 0x1504F92B: push esi */
    eax = ebp + (-0x78); /* 0x1504F92C: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504F92F: push eax */
    PUSH32(esp, esi); /* 0x1504F930: push esi */
    PUSH32(esp, esi); /* 0x1504F931: push esi */
    PUSH32(esp, esi); /* 0x1504F932: push esi */
    eax = MEM32(ebp + (-0x68)); /* 0x1504F933: mov eax, dword ptr [ebp - 0x68] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F936: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504F93D: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504F940: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C01C0)); /* 0x1504F943: call dword ptr [0x150c01c0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F949: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F95C; /* 0x1504F94B: je 0x1504f95c */
L_1504F94D:
    eax = MEM32(ebp + (-0x78)); /* 0x1504F94D: mov eax, dword ptr [ebp - 0x78] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504F950: cdq  */
    MEM32(edi + 0x18) = eax; /* 0x1504F951: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = edx; /* 0x1504F954: mov dword ptr [edi + 0x1c], edx */
    RECOMP_BACKEDGE();
    goto L_1504F8A2; /* 0x1504F957: jmp 0x1504f8a2 */
L_1504F95C:
    MEM32(edi + 0x18) = esi; /* 0x1504F95C: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x1504F95F: mov dword ptr [edi + 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_1504F8A2; /* 0x1504F962: jmp 0x1504f8a2 */
L_1504F967:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504F967: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1504F969: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x1504F96C: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1504F96F: mov word ptr [edi + 8], cx */
    eax = ebp + (-0x60); /* 0x1504F973: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1504F976: push eax */
    eax = MEM32(ebp + (-0x68)); /* 0x1504F977: mov eax, dword ptr [ebp - 0x68] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504F97A: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504F981: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504F984: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C00F4)); /* 0x1504F987: call dword ptr [0x150c00f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F98D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F8E7; /* 0x1504F98F: je 0x1504f8e7 */
L_1504F995:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1504F995: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x1504F999: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F9A6; /* 0x1504F99D: je 0x1504f9a6 */
L_1504F99F:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x1504F99F: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504F9AB; /* 0x1504F9A4: jmp 0x1504f9ab */
L_1504F9A6:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x1504F9A6: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504F9AB:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1504F9AB: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1504F9AF: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F9C2; /* 0x1504F9B3: jne 0x1504f9c2 */
L_1504F9B5:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x1504F9B5: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504F9C2; /* 0x1504F9B9: jne 0x1504f9c2 */
L_1504F9BB:
    MEM32(edi + 0x24) = esi; /* 0x1504F9BB: mov dword ptr [edi + 0x24], esi */
    eax = esi; /* 0x1504F9BE: mov eax, esi */
    goto L_1504FA19; /* 0x1504F9C0: jmp 0x1504fa19 */
L_1504F9C2:
    eax = ebp + (-0x74); /* 0x1504F9C2: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504F9C5: push eax */
    eax = ebp + (-0x4C); /* 0x1504F9C6: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1504F9C9: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504F9CA: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F9D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504F9D2: je 0x1504f89c */
L_1504F9D8:
    eax = ebp + (-0x2C); /* 0x1504F9D8: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504F9DB: push eax */
    eax = ebp + (-0x74); /* 0x1504F9DC: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504F9DF: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504F9E0: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504F9E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504F9E8: je 0x1504f89c */
L_1504F9EE:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504F9EE: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504F9F0: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504F9F4: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504F9F5: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504F9F9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504F9FA: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504F9FE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504F9FF: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504FA03: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504FA04: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504FA08: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504FA09: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504FA0D: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504FA0E: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504FA13: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x1504FA16: mov dword ptr [edi + 0x24], eax */
L_1504FA19:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x1504FA19: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FA25; /* 0x1504FA1D: jne 0x1504fa25 */
L_1504FA1F:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x1504FA1F: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504FA79; /* 0x1504FA23: je 0x1504fa79 */
L_1504FA25:
    eax = ebp + (-0x74); /* 0x1504FA25: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504FA28: push eax */
    eax = ebp + (-0x54); /* 0x1504FA29: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1504FA2C: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504FA2D: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504FA33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504FA35: je 0x1504f89c */
L_1504FA3B:
    eax = ebp + (-0x2C); /* 0x1504FA3B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504FA3E: push eax */
    eax = ebp + (-0x74); /* 0x1504FA3F: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504FA42: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504FA43: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504FA49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504FA4B: je 0x1504f89c */
L_1504FA51:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504FA51: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504FA53: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504FA57: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504FA58: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504FA5C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504FA5D: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504FA61: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504FA62: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504FA66: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504FA67: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504FA6B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504FA6C: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504FA70: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504FA71: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504FA76: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1504FA79:
    MEM32(edi + 0x20) = eax; /* 0x1504FA79: mov dword ptr [edi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x1504FA7C: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FA8D; /* 0x1504FA80: jne 0x1504fa8d */
L_1504FA82:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x1504FA82: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504FA8D; /* 0x1504FA86: jne 0x1504fa8d */
L_1504FA88:
    eax = MEM32(edi + 0x24); /* 0x1504FA88: mov eax, dword ptr [edi + 0x24] */
    goto L_1504FAE1; /* 0x1504FA8B: jmp 0x1504fae1 */
L_1504FA8D:
    eax = ebp + (-0x74); /* 0x1504FA8D: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504FA90: push eax */
    eax = ebp + (-0x5C); /* 0x1504FA91: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1504FA94: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504FA95: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504FA9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504FA9D: je 0x1504f89c */
L_1504FAA3:
    eax = ebp + (-0x2C); /* 0x1504FAA3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504FAA6: push eax */
    eax = ebp + (-0x74); /* 0x1504FAA7: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504FAAA: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504FAAB: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504FAB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504F89C; /* 0x1504FAB3: je 0x1504f89c */
L_1504FAB9:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504FAB9: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504FABB: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504FABF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504FAC0: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504FAC4: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504FAC5: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504FAC9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504FACA: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504FACE: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504FACF: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504FAD3: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504FAD4: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504FAD8: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1504FAD9: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504FADE: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1504FAE1:
    MEM32(edi + 0x28) = eax; /* 0x1504FAE1: mov dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504FAE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x40)); /* 0x1504FAE6: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x1504FAE9: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1504FAEC: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x1504FAEE: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ecx; /* 0x1504FAF1: mov dword ptr [edi + 0x1c], ecx */
    eax = 0x8000u; /* 0x1504FAF4: mov eax, 0x8000 */
    _flag_a = (uint32_t)((MEM16(edi + 0x6) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x6) | LO16(eax))) << 16;
    MEM16(edi + 0x6) = (uint16_t)(MEM16(edi + 0x6) | LO16(eax)); /* 0x1504FAF9: or word ptr [edi + 6], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(edi) = esi; /* 0x1504FAFD: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x1504FAFF: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_1504F8A2; /* 0x1504FB02: jmp 0x1504f8a2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504B420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B420u);

L_1504B420:
    PUSH32(esp, 0x70u); /* 0x1504B420: push 0x70 */
    PUSH32(esp, 0x150B0728u); /* 0x1504B422: push 0x150b0728 */
    RECOMP_CALL(sub_1505E9E8); /* 0x1504B427: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1504B42C: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x1504B42F: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x80)) = ebx; /* 0x1504B432: mov dword ptr [ebp - 0x80], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504B435: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x1504B437: mov dword ptr [ebp - 0x64], esi */
    /* test edi, edi */ /* 0x1504B43A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B465; /* 0x1504B43C: jne 0x1504b465 */
L_1504B43E:
    RECOMP_CALL(sub_150363E0); /* 0x1504B43E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B443: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B445: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504B44A: mov dword ptr [eax], 0x16 */
L_1504B450:
    PUSH32(esp, esi); /* 0x1504B450: push esi */
    PUSH32(esp, esi); /* 0x1504B451: push esi */
    PUSH32(esp, esi); /* 0x1504B452: push esi */
    PUSH32(esp, esi); /* 0x1504B453: push esi */
    PUSH32(esp, esi); /* 0x1504B454: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504B455: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504B45A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504B45D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504B45D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504B513; /* 0x1504B460: jmp 0x1504b513 */
L_1504B465:
    PUSH32(esp, 0x38u); /* 0x1504B465: push 0x38 */
    PUSH32(esp, esi); /* 0x1504B467: push esi */
    PUSH32(esp, edi); /* 0x1504B468: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504B469: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504B46E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504B471: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B48A; /* 0x1504B474: jne 0x1504b48a */
L_1504B476:
    RECOMP_CALL(sub_150363E0); /* 0x1504B476: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B47B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B47D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B482: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B45D; /* 0x1504B488: jmp 0x1504b45d */
L_1504B48A:
    /* test ebx, ebx */ /* 0x1504B48A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504B49B; /* 0x1504B48C: js 0x1504b49b */
L_1504B48E:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504B48E: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504B49B; /* 0x1504B494: jae 0x1504b49b */
L_1504B496:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B496: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504B498: inc eax */
    _flag_k = FK_INC;
    goto L_1504B49D; /* 0x1504B499: jmp 0x1504b49d */
L_1504B49B:
    eax = esi; /* 0x1504B49B: mov eax, esi */
L_1504B49D:
    /* test eax, eax */ /* 0x1504B49D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B4B5; /* 0x1504B49F: jne 0x1504b4b5 */
L_1504B4A1:
    RECOMP_CALL(sub_150363E0); /* 0x1504B4A1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504B4A6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504B4A8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B4AD: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B450; /* 0x1504B4B3: jmp 0x1504b450 */
L_1504B4B5:
    ecx = ebx; /* 0x1504B4B5: mov ecx, ebx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504B4B7: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x68)) = ecx; /* 0x1504B4BA: mov dword ptr [ebp - 0x68], ecx */
    eax = ebx; /* 0x1504B4BD: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504B4BF: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504B4C2: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x6C)) = edx; /* 0x1504B4C5: mov dword ptr [ebp - 0x6c], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504B4C8: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x1504B4CF: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4A1; /* 0x1504B4D4: je 0x1504b4a1 */
L_1504B4D6:
    PUSH32(esp, ebx); /* 0x1504B4D6: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504B4D7: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B4DC: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504B4DD: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x68)); /* 0x1504B4E0: mov eax, dword ptr [ebp - 0x68] */
    ecx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B4E3: mov ecx, dword ptr [eax*4 + 0x150bebc0] */
    eax = MEM32(ebp + (-0x6C)); /* 0x1504B4EA: mov eax, dword ptr [ebp - 0x6c] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504B4ED: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B523; /* 0x1504B4F2: jne 0x1504b523 */
L_1504B4F4:
    RECOMP_CALL(sub_15036430); /* 0x1504B4F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B4F9: mov dword ptr [eax], 9 */
L_1504B4FF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504B4FF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x1504B502: mov dword ptr [ebp - 0x64], esi */
L_1504B505:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504B505: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504B79A); /* 0x1504B50C: call 0x1504b79a */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504B511: mov eax, esi */
L_1504B513:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504B513: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504B516: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504B51D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504B51E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504B51F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504B520: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504B521: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B522: ret  */
L_1504B523:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504B523: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504B526: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x1504B52C: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B531: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504B533: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1504B534: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B5D3; /* 0x1504B536: je 0x1504b5d3 */
L_1504B53C:
    /* cmp eax, 2 */ /* 0x1504B53C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B55E; /* 0x1504B53F: je 0x1504b55e */
L_1504B541:
    /* cmp eax, 3 */ /* 0x1504B541: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B559; /* 0x1504B544: je 0x1504b559 */
L_1504B546:
    /* test eax, eax */ /* 0x1504B546: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4F4; /* 0x1504B548: je 0x1504b4f4 */
L_1504B54A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504B54A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504B550: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504B551: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B556: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504B4FF; /* 0x1504B557: jmp 0x1504b4ff */
L_1504B559:
    /* cmp eax, 2 */ /* 0x1504B559: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B565; /* 0x1504B55C: jne 0x1504b565 */
L_1504B55E:
    edx = 0x2000u; /* 0x1504B55E: mov edx, 0x2000 */
    goto L_1504B56A; /* 0x1504B563: jmp 0x1504b56a */
L_1504B565:
    edx = 0x1000u; /* 0x1504B565: mov edx, 0x1000 */
L_1504B56A:
    MEM16(edi + 0x6) = (uint16_t)(LO16(edx)); /* 0x1504B56A: mov word ptr [edi + 6], dx */
    MEM32(edi) = ebx; /* 0x1504B56E: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1504B570: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1504B573: mov word ptr [edi + 8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B577: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1504B579: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x1504B57D: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x30) = esi; /* 0x1504B580: mov dword ptr [edi + 0x30], esi */
    MEM32(edi + 0x34) = esi; /* 0x1504B583: mov dword ptr [edi + 0x34], esi */
    MEM32(edi + 0x28) = esi; /* 0x1504B586: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x2C) = esi; /* 0x1504B589: mov dword ptr [edi + 0x2c], esi */
    MEM32(edi + 0x20) = esi; /* 0x1504B58C: mov dword ptr [edi + 0x20], esi */
    MEM32(edi + 0x24) = esi; /* 0x1504B58F: mov dword ptr [edi + 0x24], esi */
    /* cmp eax, 2 */ /* 0x1504B592: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B5C8; /* 0x1504B595: je 0x1504b5c8 */
L_1504B597:
    PUSH32(esp, esi); /* 0x1504B597: push esi */
    eax = ebp + (-0x78); /* 0x1504B598: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1504B59B: push eax */
    PUSH32(esp, esi); /* 0x1504B59C: push esi */
    PUSH32(esp, esi); /* 0x1504B59D: push esi */
    PUSH32(esp, esi); /* 0x1504B59E: push esi */
    eax = MEM32(ebp + (-0x68)); /* 0x1504B59F: mov eax, dword ptr [ebp - 0x68] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B5A2: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504B5A9: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504B5AC: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C01C0)); /* 0x1504B5AF: call dword ptr [0x150c01c0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B5B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B5C8; /* 0x1504B5B7: je 0x1504b5c8 */
L_1504B5B9:
    eax = MEM32(ebp + (-0x78)); /* 0x1504B5B9: mov eax, dword ptr [ebp - 0x78] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504B5BC: cdq  */
    MEM32(edi + 0x18) = eax; /* 0x1504B5BD: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = edx; /* 0x1504B5C0: mov dword ptr [edi + 0x1c], edx */
    RECOMP_BACKEDGE();
    goto L_1504B505; /* 0x1504B5C3: jmp 0x1504b505 */
L_1504B5C8:
    MEM32(edi + 0x18) = esi; /* 0x1504B5C8: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x1504B5CB: mov dword ptr [edi + 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_1504B505; /* 0x1504B5CE: jmp 0x1504b505 */
L_1504B5D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B5D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1504B5D5: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x1504B5D8: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1504B5DB: mov word ptr [edi + 8], cx */
    eax = ebp + (-0x60); /* 0x1504B5DF: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1504B5E2: push eax */
    eax = MEM32(ebp + (-0x68)); /* 0x1504B5E3: mov eax, dword ptr [ebp - 0x68] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B5E6: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x1504B5ED: mov ecx, dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504B5F0: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C00F4)); /* 0x1504B5F3: call dword ptr [0x150c00f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B5F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B54A; /* 0x1504B5FB: je 0x1504b54a */
L_1504B601:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1504B601: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x1504B605: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B612; /* 0x1504B609: je 0x1504b612 */
L_1504B60B:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x1504B60B: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504B617; /* 0x1504B610: jmp 0x1504b617 */
L_1504B612:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x1504B612: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504B617:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1504B617: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1504B61B: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B63D; /* 0x1504B61F: jne 0x1504b63d */
L_1504B621:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x1504B621: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B63D; /* 0x1504B625: jne 0x1504b63d */
L_1504B627:
    MEM32(edi + 0x28) = esi; /* 0x1504B627: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x2C) = esi; /* 0x1504B62A: mov dword ptr [edi + 0x2c], esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1504B62D: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x7C)) = _xmm[0].u64[0]; /* 0x1504B630: movlpd qword ptr [ebp - 0x7c], xmm0 */
    edx = MEM32(ebp + (-0x78)); /* 0x1504B635: mov edx, dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0x7C)); /* 0x1504B638: mov eax, dword ptr [ebp - 0x7c] */
    goto L_1504B697; /* 0x1504B63B: jmp 0x1504b697 */
L_1504B63D:
    eax = ebp + (-0x74); /* 0x1504B63D: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B640: push eax */
    eax = ebp + (-0x4C); /* 0x1504B641: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1504B644: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B645: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B64B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B64D: je 0x1504b4ff */
L_1504B653:
    eax = ebp + (-0x2C); /* 0x1504B653: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B656: push eax */
    eax = ebp + (-0x74); /* 0x1504B657: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B65A: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B65B: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B661: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B663: je 0x1504b4ff */
L_1504B669:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B669: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B66B: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B66F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B670: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B674: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B675: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B679: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B67A: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B67E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B67F: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B683: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B684: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B688: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x1504B689: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B68E: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x1504B691: mov dword ptr [edi + 0x28], eax */
    MEM32(edi + 0x2C) = edx; /* 0x1504B694: mov dword ptr [edi + 0x2c], edx */
L_1504B697:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x1504B697: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B6A3; /* 0x1504B69B: jne 0x1504b6a3 */
L_1504B69D:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x1504B69D: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B6F7; /* 0x1504B6A1: je 0x1504b6f7 */
L_1504B6A3:
    eax = ebp + (-0x74); /* 0x1504B6A3: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B6A6: push eax */
    eax = ebp + (-0x54); /* 0x1504B6A7: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1504B6AA: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B6AB: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B6B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B6B3: je 0x1504b4ff */
L_1504B6B9:
    eax = ebp + (-0x2C); /* 0x1504B6B9: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B6BC: push eax */
    eax = ebp + (-0x74); /* 0x1504B6BD: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B6C0: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B6C1: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B6C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B6C9: je 0x1504b4ff */
L_1504B6CF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B6CF: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B6D1: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B6D5: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B6D6: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B6DA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B6DB: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B6DF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B6E0: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B6E4: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B6E5: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B6E9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B6EA: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B6EE: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x1504B6EF: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B6F4: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1504B6F7:
    MEM32(edi + 0x20) = eax; /* 0x1504B6F7: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x1504B6FA: mov dword ptr [edi + 0x24], edx */
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x1504B6FD: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B717; /* 0x1504B701: jne 0x1504b717 */
L_1504B703:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x1504B703: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B717; /* 0x1504B707: jne 0x1504b717 */
L_1504B709:
    eax = MEM32(edi + 0x28); /* 0x1504B709: mov eax, dword ptr [edi + 0x28] */
    ecx = MEM32(edi + 0x2C); /* 0x1504B70C: mov ecx, dword ptr [edi + 0x2c] */
    MEM32(edi + 0x30) = eax; /* 0x1504B70F: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = ecx; /* 0x1504B712: mov dword ptr [edi + 0x34], ecx */
    goto L_1504B771; /* 0x1504B715: jmp 0x1504b771 */
L_1504B717:
    eax = ebp + (-0x74); /* 0x1504B717: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B71A: push eax */
    eax = ebp + (-0x5C); /* 0x1504B71B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1504B71E: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1504B71F: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B727: je 0x1504b4ff */
L_1504B72D:
    eax = ebp + (-0x2C); /* 0x1504B72D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B730: push eax */
    eax = ebp + (-0x74); /* 0x1504B731: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1504B734: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1504B735: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504B73B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B4FF; /* 0x1504B73D: je 0x1504b4ff */
L_1504B743:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504B743: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x1504B745: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504B749: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x1504B74A: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x1504B74E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x1504B74F: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504B753: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x1504B754: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x1504B758: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x1504B759: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x1504B75D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x1504B75E: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504B762: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x1504B763: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504B768: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x30) = eax; /* 0x1504B76B: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = edx; /* 0x1504B76E: mov dword ptr [edi + 0x34], edx */
L_1504B771:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B771: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x40)); /* 0x1504B773: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x1504B776: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1504B779: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x1504B77B: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ecx; /* 0x1504B77E: mov dword ptr [edi + 0x1c], ecx */
    eax = 0x8000u; /* 0x1504B781: mov eax, 0x8000 */
    _flag_a = (uint32_t)((MEM16(edi + 0x6) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x6) | LO16(eax))) << 16;
    MEM16(edi + 0x6) = (uint16_t)(MEM16(edi + 0x6) | LO16(eax)); /* 0x1504B786: or word ptr [edi + 6], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(edi) = esi; /* 0x1504B78A: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x1504B78C: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_1504B505; /* 0x1504B78F: jmp 0x1504b505 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504B79A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B79Au);

L_1504B79A:
    PUSH32(esp, ebx); /* 0x1504B79A: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504B79B: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B7A0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B7A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B7B0u);

L_1504B7B0:
    edi = edi; /* 0x1504B7B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B7B2: push ebp */
    ebp = esp; /* 0x1504B7B3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1504B7B5: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1504B7B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B7DB; /* 0x1504B7BA: jne 0x1504b7db */
L_1504B7BC:
    RECOMP_CALL(sub_15036430); /* 0x1504B7BC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B7C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1504B7C3: push ecx */
    PUSH32(esp, ecx); /* 0x1504B7C4: push ecx */
    PUSH32(esp, ecx); /* 0x1504B7C5: push ecx */
    PUSH32(esp, ecx); /* 0x1504B7C6: push ecx */
    PUSH32(esp, ecx); /* 0x1504B7C7: push ecx */
    MEM32(eax) = 0x16u; /* 0x1504B7C8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504B7CE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504B7D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1504B7D6: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1504B7D8: pop eax */
    ebp = POP32_VAL(esp); /* 0x1504B7D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B7DA: ret  */
L_1504B7DB:
    eax = MEM32(0x150BDB80); /* 0x1504B7DB: mov eax, dword ptr [0x150bdb80] */
    MEM32(ecx) = eax; /* 0x1504B7E0: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B7E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504B7E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B7E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B7F0u);

L_1504B7F0:
    edi = edi; /* 0x1504B7F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B7F2: push ebp */
    ebp = esp; /* 0x1504B7F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504B7F5: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x4000u */ /* 0x1504B7F8: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B82C; /* 0x1504B7FD: je 0x1504b82c */
L_1504B7FF:
    /* cmp eax, 0x8000u */ /* 0x1504B7FF: cmp eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B82C; /* 0x1504B804: je 0x1504b82c */
L_1504B806:
    /* cmp eax, 0x00010000u */ /* 0x1504B806: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B82C; /* 0x1504B80B: je 0x1504b82c */
L_1504B80D:
    RECOMP_CALL(sub_15036430); /* 0x1504B80D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504B812: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1504B814: push ecx */
    PUSH32(esp, ecx); /* 0x1504B815: push ecx */
    PUSH32(esp, ecx); /* 0x1504B816: push ecx */
    PUSH32(esp, ecx); /* 0x1504B817: push ecx */
    PUSH32(esp, ecx); /* 0x1504B818: push ecx */
    MEM32(eax) = 0x16u; /* 0x1504B819: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504B81F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504B824: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1504B827: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1504B829: pop eax */
    ebp = POP32_VAL(esp); /* 0x1504B82A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B82B: ret  */
L_1504B82C:
    ecx = 0x150BDB80u; /* 0x1504B82C: mov ecx, 0x150bdb80 */
    { uint32_t _tmp = MEM32(ecx); /* 0x1504B831: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B833: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504B835: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B836: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B840u);

L_1504B840:
    PUSH32(esp, 0x14u); /* 0x1504B840: push 0x14 */
    PUSH32(esp, 0x150B0748u); /* 0x1504B842: push 0x150b0748 */
    RECOMP_CALL(sub_1505E988); /* 0x1504B847: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x1504B84C: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 0x4000u */ /* 0x1504B84F: cmp ebx, 0x4000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B880; /* 0x1504B855: je 0x1504b880 */
L_1504B857:
    /* cmp ebx, 0x8000u */ /* 0x1504B857: cmp ebx, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B880; /* 0x1504B85D: je 0x1504b880 */
L_1504B85F:
    /* cmp ebx, 0x00010000u */ /* 0x1504B85F: cmp ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B880; /* 0x1504B865: je 0x1504b880 */
L_1504B867:
    /* cmp ebx, 0x00040000u */ /* 0x1504B867: cmp ebx, 0x40000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B880; /* 0x1504B86D: je 0x1504b880 */
L_1504B86F:
    /* cmp ebx, 0x00020000u */ /* 0x1504B86F: cmp ebx, 0x20000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B880; /* 0x1504B875: je 0x1504b880 */
L_1504B877:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504B877: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1504B879: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B87B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504B87D: inc eax */
    _flag_k = FK_INC;
    goto L_1504B887; /* 0x1504B87E: jmp 0x1504b887 */
L_1504B880:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504B880: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504B882: inc eax */
    _flag_k = FK_INC;
    ecx = eax; /* 0x1504B883: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504B885: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504B887:
    /* test ecx, ecx */ /* 0x1504B887: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B8AB; /* 0x1504B889: jne 0x1504b8ab */
L_1504B88B:
    RECOMP_CALL(sub_15036430); /* 0x1504B88B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504B890: mov dword ptr [eax], 0x16 */
L_1504B896:
    PUSH32(esp, esi); /* 0x1504B896: push esi */
    PUSH32(esp, esi); /* 0x1504B897: push esi */
    PUSH32(esp, esi); /* 0x1504B898: push esi */
    PUSH32(esp, esi); /* 0x1504B899: push esi */
    PUSH32(esp, esi); /* 0x1504B89A: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504B89B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504B8A0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504B8A3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504B8A3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504B94A; /* 0x1504B8A6: jmp 0x1504b94a */
L_1504B8AB:
    edi = MEM32(ebp + 0x8); /* 0x1504B8AB: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504B8AE: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504B8C0; /* 0x1504B8B1: jne 0x1504b8c0 */
L_1504B8B3:
    RECOMP_CALL(sub_15036430); /* 0x1504B8B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B8B8: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B8A3; /* 0x1504B8BE: jmp 0x1504b8a3 */
L_1504B8C0:
    /* test edi, edi */ /* 0x1504B8C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504B8CC; /* 0x1504B8C2: js 0x1504b8cc */
L_1504B8C4:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504B8C4: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504B8CE; /* 0x1504B8CA: jb 0x1504b8ce */
L_1504B8CC:
    eax = esi; /* 0x1504B8CC: mov eax, esi */
L_1504B8CE:
    /* test eax, eax */ /* 0x1504B8CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504B8DF; /* 0x1504B8D0: jne 0x1504b8df */
L_1504B8D2:
    RECOMP_CALL(sub_15036430); /* 0x1504B8D2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B8D7: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_1504B896; /* 0x1504B8DD: jmp 0x1504b896 */
L_1504B8DF:
    ecx = edi; /* 0x1504B8DF: mov ecx, edi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504B8E1: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504B8E4: mov dword ptr [ebp - 0x20], ecx */
    eax = edi; /* 0x1504B8E7: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504B8E9: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504B8EC: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x24)) = edx; /* 0x1504B8EF: mov dword ptr [ebp - 0x24], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504B8F2: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(eax + edx + 0x4), 1 */ /* 0x1504B8F9: test byte ptr [eax + edx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B8D2; /* 0x1504B8FE: je 0x1504b8d2 */
L_1504B900:
    PUSH32(esp, edi); /* 0x1504B900: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504B901: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B906: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504B907: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x20)); /* 0x1504B90A: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504B90D: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1504B914: mov ecx, dword ptr [ebp - 0x24] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504B917: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504B92B; /* 0x1504B91C: je 0x1504b92b */
L_1504B91E:
    PUSH32(esp, ebx); /* 0x1504B91E: push ebx */
    PUSH32(esp, edi); /* 0x1504B91F: push edi */
    RECOMP_CALL(sub_1504B96E); /* 0x1504B920: call 0x1504b96e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B925: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504B926: pop ecx */
    esi = eax; /* 0x1504B927: mov esi, eax */
    goto L_1504B939; /* 0x1504B929: jmp 0x1504b939 */
L_1504B92B:
    RECOMP_CALL(sub_15036430); /* 0x1504B92B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504B930: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504B936: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504B939:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504B939: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504B93C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504B960); /* 0x1504B943: call 0x1504b960 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504B948: mov eax, esi */
L_1504B94A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504B94A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504B94D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504B954: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504B955: pop edi */
    esi = POP32_VAL(esp); /* 0x1504B956: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504B957: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504B958: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B959: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B960u);

L_1504B960:
    PUSH32(esp, edi); /* 0x1504B960: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504B961: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504B966: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504B967: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504B96E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504B96Eu);

L_1504B96E:
    edi = edi; /* 0x1504B96E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504B970: push ebp */
    ebp = esp; /* 0x1504B971: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504B973: push ecx */
    PUSH32(esp, ecx); /* 0x1504B974: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1504B975: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1504B978: push ebx */
    ebx = eax; /* 0x1504B979: mov ebx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504B97B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504B97E: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504B981: imul edx, eax, 0x24 */
    PUSH32(esp, esi); /* 0x1504B984: push esi */
    PUSH32(esp, edi); /* 0x1504B985: push edi */
    edi = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504B986: mov edi, dword ptr [ebx*4 + 0x150bebc0] */
    esi = 0x00010000u; /* 0x1504B98D: mov esi, 0x10000 */
    SET_LO8(eax, MEM8(edx + edi + 0x4)); /* 0x1504B992: mov al, byte ptr [edx + edi + 4] */
    ecx = (uint32_t)LO8(eax); /* 0x1504B996: movzx ecx, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    ecx = ecx & 0x80u; /* 0x1504B999: and ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504B99F: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(edx + edi + 0x8); /* 0x1504B9A2: mov ecx, dword ptr [edx + edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1504B9A6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1504B9A9: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1504B9AC: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0x4000u */ /* 0x1504B9AF: cmp ecx, 0x4000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504BA11; /* 0x1504B9B5: je 0x1504ba11 */
L_1504B9B7:
    /* cmp ecx, 0x8000u */ /* 0x1504B9B7: cmp ecx, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504BA09; /* 0x1504B9BD: je 0x1504ba09 */
L_1504B9BF:
    /* cmp ecx, esi */ /* 0x1504B9BF: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B9F0; /* 0x1504B9C1: je 0x1504b9f0 */
L_1504B9C3:
    /* cmp ecx, 0x00020000u */ /* 0x1504B9C3: cmp ecx, 0x20000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504B9F0; /* 0x1504B9C9: je 0x1504b9f0 */
L_1504B9CB:
    /* cmp ecx, 0x00040000u */ /* 0x1504B9CB: cmp ecx, 0x40000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BA23; /* 0x1504B9D1: jne 0x1504ba23 */
L_1504B9D3:
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x1504B9D3: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504B9D5: mov byte ptr [edx + edi + 4], al */
    ecx = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504B9D9: mov ecx, dword ptr [ebx*4 + 0x150bebc0] */
    eax = MEM32(edx + ecx + 0x8); /* 0x1504B9E0: mov eax, dword ptr [edx + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x1504B9E4: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1504B9E7: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504B9EA:
    MEM32(edx + ecx + 0x8) = eax; /* 0x1504B9EA: mov dword ptr [edx + ecx + 8], eax */
    goto L_1504BA23; /* 0x1504B9EE: jmp 0x1504ba23 */
L_1504B9F0:
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x1504B9F0: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504B9F2: mov byte ptr [edx + edi + 4], al */
    ecx = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504B9F6: mov ecx, dword ptr [ebx*4 + 0x150bebc0] */
    eax = MEM32(edx + ecx + 0x8); /* 0x1504B9FD: mov eax, dword ptr [edx + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1504BA01: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1504BA04: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504B9EA; /* 0x1504BA07: jmp 0x1504b9ea */
L_1504BA09:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x1504BA09: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504BA0B: mov byte ptr [edx + edi + 4], al */
    goto L_1504BA23; /* 0x1504BA0F: jmp 0x1504ba23 */
L_1504BA11:
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x1504BA11: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504BA13: mov byte ptr [edx + edi + 4], al */
    ecx = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504BA17: mov ecx, dword ptr [ebx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(edx + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(edx + ecx + 0x8) = MEM32(edx + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504BA1E: and dword ptr [edx + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BA23:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1504BA23: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BA30; /* 0x1504BA27: jne 0x1504ba30 */
L_1504BA29:
    eax = 0x8000u; /* 0x1504BA29: mov eax, 0x8000 */
    goto L_1504BA3E; /* 0x1504BA2E: jmp 0x1504ba3e */
L_1504BA30:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1504BA30: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x4000u; /* 0x1504BA34: mov eax, 0x4000 */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x1504BA39: cmove esi, eax */
    eax = esi; /* 0x1504BA3C: mov eax, esi */
L_1504BA3E:
    edi = POP32_VAL(esp); /* 0x1504BA3E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BA3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504BA40: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504BA41: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BA42: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BA49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BA49u);

L_1504BA49:
    PUSH32(esp, 0x14u); /* 0x1504BA49: push 0x14 */
    PUSH32(esp, 0x150B0790u); /* 0x1504BA4B: push 0x150b0790 */
    RECOMP_CALL(sub_1505E988); /* 0x1504BA50: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1504BA55: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1504BA58: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504BA5A: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ebx = eax * 4 + 0x150BEBC0; /* 0x1504BA5D: lea ebx, [eax*4 + 0x150bebc0] */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1504BA64: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504BA67: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504BA6A: imul eax, ecx, 0x24 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1504BA6D: mov dword ptr [ebp - 0x24], eax */
    edi = MEM32(ebx); /* 0x1504BA70: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1504BA72: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504BA74: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504BA76: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BA77: mov dword ptr [ebp - 0x1c], esi */
    /* test MEM8(edi + 0x8), 4 */ /* 0x1504BA7A: test byte ptr [edi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BABA; /* 0x1504BA7E: jne 0x1504baba */
L_1504BA80:
    PUSH32(esp, 0xAu); /* 0x1504BA80: push 0xa */
    RECOMP_CALL(sub_15068D80); /* 0x1504BA82: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BA87: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504BA88: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(edi + 0x8), 4 */ /* 0x1504BA8C: test byte ptr [edi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BAAE; /* 0x1504BA90: jne 0x1504baae */
L_1504BA92:
    PUSH32(esp, 0xFA0u); /* 0x1504BA92: push 0xfa0 */
    eax = edi + 0xC; /* 0x1504BA97: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1504BA9A: push eax */
    RECOMP_ICALL(MEM32(0x150C0260)); /* 0x1504BA9B: call dword ptr [0x150c0260] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1504BAA1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1504BAA3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1504BAA5: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BAA7: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 4));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 4; /* 0x1504BAAA: or dword ptr [edi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BAAE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504BAAE: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504BAE4); /* 0x1504BAB5: call 0x1504bae4 */
    RECOMP_FLAGS_IN();
L_1504BABA:
    /* test esi, esi */ /* 0x1504BABA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504BACC; /* 0x1504BABC: je 0x1504bacc */
L_1504BABE:
    ecx = MEM32(ebx); /* 0x1504BABE: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1504BAC0: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1504BAC3: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1504BAC5: push ecx */
    RECOMP_ICALL(MEM32(0x150C0268)); /* 0x1504BAC6: call dword ptr [0x150c0268] */
    RECOMP_FLAGS_IN();
L_1504BACC:
    eax = esi; /* 0x1504BACC: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504BACE: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504BAD1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504BAD8: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504BAD9: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BADA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504BADB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504BADC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BADD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BAE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BAE4u);

L_1504BAE4:
    PUSH32(esp, 0xAu); /* 0x1504BAE4: push 0xa */
    RECOMP_CALL(sub_15068F50); /* 0x1504BAE6: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BAEB: pop ecx */
    eax = MEM32(ebp + (-0x24)); /* 0x1504BAEC: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BAEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BAF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BAF6u);

L_1504BAF6:
    PUSH32(esp, 0x1Cu); /* 0x1504BAF6: push 0x1c */
    PUSH32(esp, 0x150B0768u); /* 0x1504BAF8: push 0x150b0768 */
    RECOMP_CALL(sub_1505E988); /* 0x1504BAFD: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504BB02: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1504BB05: mov esi, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BB07: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1504BB0A: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xBu); /* 0x1504BB0E: push 0xb */
    RECOMP_CALL(sub_15068E1A); /* 0x1504BB10: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BB15: pop ecx */
    /* test eax, eax */ /* 0x1504BB16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BB21; /* 0x1504BB18: jne 0x1504bb21 */
L_1504BB1A:
    eax = ebx; /* 0x1504BB1A: mov eax, ebx */
    goto L_1504BCA8; /* 0x1504BB1C: jmp 0x1504bca8 */
L_1504BB21:
    PUSH32(esp, 0xBu); /* 0x1504BB21: push 0xb */
    RECOMP_CALL(sub_15068D80); /* 0x1504BB23: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BB28: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504BB29: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504BB2D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x24u); /* 0x1504BB2F: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x1504BB31: pop ecx */
L_1504BB32:
    MEM32(ebp + (-0x28)) = ebx; /* 0x1504BB32: mov dword ptr [ebp - 0x28], ebx */
    /* cmp ebx, 0x40u */ /* 0x1504BB35: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504BC9A; /* 0x1504BB38: jge 0x1504bc9a */
L_1504BB3E:
    eax = ebx * 4 + 0x150BEBC0; /* 0x1504BB3E: lea eax, [ebx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504BB45: mov dword ptr [ebp - 0x2c], eax */
    edi = MEM32(eax); /* 0x1504BB48: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x1504BB4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504BC22; /* 0x1504BB4C: je 0x1504bc22 */
L_1504BB52:
    MEM32(ebp + (-0x20)) = edi; /* 0x1504BB52: mov dword ptr [ebp - 0x20], edi */
    eax = MEM32(eax); /* 0x1504BB55: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x480u; /* 0x1504BB57: add eax, 0x480 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x1504BB5C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504BC17; /* 0x1504BB5E: jae 0x1504bc17 */
L_1504BB64:
    /* test MEM8(edi + 0x4), 1 */ /* 0x1504BB64: test byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBD2; /* 0x1504BB68: jne 0x1504bbd2 */
L_1504BB6A:
    /* test MEM8(edi + 0x8), 4 */ /* 0x1504BB6A: test byte ptr [edi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBAE; /* 0x1504BB6E: jne 0x1504bbae */
L_1504BB70:
    PUSH32(esp, 0xAu); /* 0x1504BB70: push 0xa */
    RECOMP_CALL(sub_15068D80); /* 0x1504BB72: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BB77: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1504BB78: mov dword ptr [ebp - 4], 1 */
    /* test MEM8(edi + 0x8), 4 */ /* 0x1504BB7F: test byte ptr [edi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBA5; /* 0x1504BB83: jne 0x1504bba5 */
L_1504BB85:
    PUSH32(esp, 0xFA0u); /* 0x1504BB85: push 0xfa0 */
    eax = edi + 0xC; /* 0x1504BB8A: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1504BB8D: push eax */
    RECOMP_ICALL(MEM32(0x150C0260)); /* 0x1504BB8E: call dword ptr [0x150c0260] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504BB94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBA1; /* 0x1504BB96: jne 0x1504bba1 */
L_1504BB98:
    MEM32(ebp + (-0x24)) = 1; /* 0x1504BB98: mov dword ptr [ebp - 0x24], 1 */
    goto L_1504BBA5; /* 0x1504BB9F: jmp 0x1504bba5 */
L_1504BBA1:
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 4));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 4; /* 0x1504BBA1: or dword ptr [edi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BBA5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504BBA5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504BBE5); /* 0x1504BBA9: call 0x1504bbe5 */
    RECOMP_FLAGS_IN();
L_1504BBAE:
    eax = MEM32(ebp + (-0x24)); /* 0x1504BBAE: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x1504BBB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBCF; /* 0x1504BBB3: jne 0x1504bbcf */
L_1504BBB5:
    eax = edi + 0xC; /* 0x1504BBB5: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1504BBB8: push eax */
    RECOMP_ICALL(MEM32(0x150C0268)); /* 0x1504BBB9: call dword ptr [0x150c0268] */
    RECOMP_FLAGS_IN();
    /* test MEM8(edi + 0x4), 1 */ /* 0x1504BBBF: test byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504BBEE; /* 0x1504BBC3: je 0x1504bbee */
L_1504BBC5:
    eax = edi + 0xC; /* 0x1504BBC5: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1504BBC8: push eax */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x1504BBC9: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
L_1504BBCF:
    PUSH32(esp, 0x24u); /* 0x1504BBCF: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x1504BBD1: pop ecx */
L_1504BBD2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1504BBD2: add edi, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x2C)); /* 0x1504BBD4: mov eax, dword ptr [ebp - 0x2c] */
    RECOMP_BACKEDGE();
    goto L_1504BB52; /* 0x1504BBD7: jmp 0x1504bb52 */
L_1504BBEE:
    eax = MEM32(ebp + (-0x24)); /* 0x1504BBEE: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x1504BBF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BBCF; /* 0x1504BBF3: jne 0x1504bbcf */
L_1504BBF5:
    MEM8(edi + 0x4) = (uint8_t)(1); /* 0x1504BBF5: mov byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1504BBF9: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx * 4 + 0x150BEBC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504BBFC: sub edi, dword ptr [ebx*4 + 0x150bebc0] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x1504BC03: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504BC05: cdq  */
    PUSH32(esp, 0x24u); /* 0x1504BC06: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x1504BC08: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1504BC09: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1504BC0B: mov esi, eax */
    eax = ebx; /* 0x1504BC0D: mov eax, ebx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1504BC0F: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1504BC0F: shl eax, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1504BC12: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BC14: mov dword ptr [ebp - 0x1c], esi */
L_1504BC17:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1504BC17: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BC9A; /* 0x1504BC1A: jne 0x1504bc9a */
L_1504BC1C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504BC1C: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1504BB32; /* 0x1504BC1D: jmp 0x1504bb32 */
L_1504BC22:
    PUSH32(esp, ecx); /* 0x1504BC22: push ecx */
    PUSH32(esp, 0x20u); /* 0x1504BC23: push 0x20 */
    RECOMP_CALL(sub_15048EE2); /* 0x1504BC25: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BC2A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504BC2B: pop ecx */
    ecx = eax; /* 0x1504BC2C: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504BC2E: mov dword ptr [ebp - 0x20], ecx */
    /* test ecx, ecx */ /* 0x1504BC31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504BC9A; /* 0x1504BC33: je 0x1504bc9a */
L_1504BC35:
    eax = MEM32(ebp + (-0x2C)); /* 0x1504BC35: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x1504BC38: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(0x150BEBAC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x150BEBAC) = MEM32(0x150BEBAC) + 0x20u; /* 0x1504BC3A: add dword ptr [0x150bebac], 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504BC41: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x24u); /* 0x1504BC44: push 0x24 */
    edx = POP32_VAL(esp); /* 0x1504BC46: pop edx */
L_1504BC47:
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504BC47: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x480u; /* 0x1504BC4E: add eax, 0x480 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1504BC53: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504BC6A; /* 0x1504BC55: jae 0x1504bc6a */
L_1504BC57:
    MEM16(ecx + 0x4) = (uint16_t)(0xA00u); /* 0x1504BC57: mov word ptr [ecx + 4], 0xa00 */
    MEM32(ecx) = edi; /* 0x1504BC5D: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x1504BC5F: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1504BC63: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504BC65: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_BACKEDGE();
    goto L_1504BC47; /* 0x1504BC68: jmp 0x1504bc47 */
L_1504BC6A:
    esi = ebx; /* 0x1504BC6A: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x1504BC6C: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x1504BC6C: shl esi, 5 */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BC6F: mov dword ptr [ebp - 0x1c], esi */
    edx = esi; /* 0x1504BC72: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504BC74: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504BC77: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504BC79: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504BC7C: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504BC7F: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(1); /* 0x1504BC86: mov byte ptr [eax + ecx + 4], 1 */
    PUSH32(esp, esi); /* 0x1504BC8B: push esi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504BC8C: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BC91: pop ecx */
    /* test eax, eax */ /* 0x1504BC92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = edi; } /* 0x1504BC94: cmove esi, edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504BC97: mov dword ptr [ebp - 0x1c], esi */
L_1504BC9A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504BC9A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504BCBB); /* 0x1504BCA1: call 0x1504bcbb */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504BCA6: mov eax, esi */
L_1504BCA8:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504BCA8: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504BCAB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504BCB2: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504BCB3: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BCB4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504BCB5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504BCB6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BCB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BBE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BBE5u);

L_1504BBE5:
    PUSH32(esp, 0xAu); /* 0x1504BBE5: push 0xa */
    RECOMP_CALL(sub_15068F50); /* 0x1504BBE7: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BBEC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BBED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BCBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BCBBu);

L_1504BCBB:
    PUSH32(esp, 0xBu); /* 0x1504BCBB: push 0xb */
    RECOMP_CALL(sub_15068F50); /* 0x1504BCBD: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BCC2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BCC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BCCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BCCAu);

L_1504BCCA:
    edi = edi; /* 0x1504BCCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504BCCC: push ebp */
    ebp = esp; /* 0x1504BCCD: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1504BCCF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504BCD2: push esi */
    PUSH32(esp, edi); /* 0x1504BCD3: push edi */
    /* test ecx, ecx */ /* 0x1504BCD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504BD3C; /* 0x1504BCD6: js 0x1504bd3c */
L_1504BCD8:
    /* cmp ecx, MEM32(0x150BEBAC) */ /* 0x1504BCD8: cmp ecx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504BD3C; /* 0x1504BCDE: jae 0x1504bd3c */
L_1504BCE0:
    eax = ecx; /* 0x1504BCE0: mov eax, ecx */
    edi = ecx; /* 0x1504BCE2: mov edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504BCE4: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1504BCE7: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1504BCE7: shr edi, 5 */
    esi = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504BCEA: imul esi, eax, 0x24 */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504BCED: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    /* test MEM8(esi + eax + 0x4), 1 */ /* 0x1504BCF4: test byte ptr [esi + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504BD3C; /* 0x1504BCF9: je 0x1504bd3c */
L_1504BCFB:
    /* cmp MEM32(esi + eax), 0xFFFFFFFFu */ /* 0x1504BCFB: cmp dword ptr [esi + eax], -1 */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504BD3C; /* 0x1504BCFF: je 0x1504bd3c */
L_1504BD01:
    /* cmp MEM32(0x150BDB08), 1 */ /* 0x1504BD01: cmp dword ptr [0x150bdb08], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BD2D; /* 0x1504BD08: jne 0x1504bd2d */
L_1504BD0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504BD0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1504BD0C: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504BD24; /* 0x1504BD0E: je 0x1504bd24 */
L_1504BD10:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1504BD10: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504BD1F; /* 0x1504BD13: je 0x1504bd1f */
L_1504BD15:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1504BD15: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504BD2D; /* 0x1504BD18: jne 0x1504bd2d */
L_1504BD1A:
    PUSH32(esp, eax); /* 0x1504BD1A: push eax */
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1504BD1B: push -0xc */
    goto L_1504BD27; /* 0x1504BD1D: jmp 0x1504bd27 */
L_1504BD1F:
    PUSH32(esp, eax); /* 0x1504BD1F: push eax */
    PUSH32(esp, 0xFFFFFFF5u); /* 0x1504BD20: push -0xb */
    goto L_1504BD27; /* 0x1504BD22: jmp 0x1504bd27 */
L_1504BD24:
    PUSH32(esp, eax); /* 0x1504BD24: push eax */
    PUSH32(esp, 0xFFFFFFF6u); /* 0x1504BD25: push -0xa */
L_1504BD27:
    RECOMP_ICALL(MEM32(0x150C01E4)); /* 0x1504BD27: call dword ptr [0x150c01e4] */
    RECOMP_FLAGS_IN();
L_1504BD2D:
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504BD2D: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM32(esi + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + eax) | 0xFFFFFFFFu));
    MEM32(esi + eax) = MEM32(esi + eax) | 0xFFFFFFFFu; /* 0x1504BD34: or dword ptr [esi + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504BD38: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504BD52; /* 0x1504BD3A: jmp 0x1504bd52 */
L_1504BD3C:
    RECOMP_CALL(sub_15036430); /* 0x1504BD3C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504BD41: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504BD47: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504BD4C: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504BD4F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BD52:
    edi = POP32_VAL(esp); /* 0x1504BD52: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BD53: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504BD54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BD55: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BD60u);

L_1504BD60:
    edi = edi; /* 0x1504BD60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504BD62: push ebp */
    ebp = esp; /* 0x1504BD63: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1504BD65: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504BD68: push esi */
    PUSH32(esp, edi); /* 0x1504BD69: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504BD6A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x1504BD6D: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504BDFD; /* 0x1504BD6F: je 0x1504bdfd */
L_1504BD75:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1504BD75: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504BDF5; /* 0x1504BD78: je 0x1504bdf5 */
L_1504BD7A:
    /* test edx, edx */ /* 0x1504BD7A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504BDF5; /* 0x1504BD7C: js 0x1504bdf5 */
L_1504BD7E:
    /* cmp edx, MEM32(0x150BEBAC) */ /* 0x1504BD7E: cmp edx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504BDF5; /* 0x1504BD84: jae 0x1504bdf5 */
L_1504BD86:
    esi = edx; /* 0x1504BD86: mov esi, edx */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1504BD88: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x1504BD88: shr esi, 5 */
    /* cmp edx, 2 */ /* 0x1504BD8B: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1504BDB9; /* 0x1504BD8E: jg 0x1504bdb9 */
L_1504BD90:
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x1504BD90: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1504BD97: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x24u); /* 0x1504BD9A: imul ecx, edx, 0x24 */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504BD9D: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BDBC; /* 0x1504BDA2: jne 0x1504bdbc */
L_1504BDA4:
    RECOMP_CALL(sub_15036430); /* 0x1504BDA4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504BDA9: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504BDAF: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504BDB4: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504BE08; /* 0x1504BDB7: jmp 0x1504be08 */
L_1504BDB9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1504BDB9: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BDBC:
    ecx = MEM32(esi * 4 + 0x150BEBC0); /* 0x1504BDBC: mov ecx, dword ptr [esi*4 + 0x150bebc0] */
    eax = (uint32_t)((int32_t)edx * (int32_t)0x24u); /* 0x1504BDC3: imul eax, edx, 0x24 */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504BDC6: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BDF0; /* 0x1504BDCB: jne 0x1504bdf0 */
L_1504BDCD:
    RECOMP_CALL(sub_150363E0); /* 0x1504BDCD: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504BDD2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1504BDD4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504BDD6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1504BDDB: push esi */
    PUSH32(esp, esi); /* 0x1504BDDC: push esi */
    PUSH32(esp, esi); /* 0x1504BDDD: push esi */
    PUSH32(esp, esi); /* 0x1504BDDE: push esi */
    PUSH32(esp, esi); /* 0x1504BDDF: push esi */
    MEM32(eax) = 9; /* 0x1504BDE0: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1505A110); /* 0x1504BDE6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504BDEB: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1504BE08; /* 0x1504BDEE: jmp 0x1504be08 */
L_1504BDF0:
    eax = MEM32(ecx + eax); /* 0x1504BDF0: mov eax, dword ptr [ecx + eax] */
    goto L_1504BE0A; /* 0x1504BDF3: jmp 0x1504be0a */
L_1504BDF5:
    RECOMP_CALL(sub_150363E0); /* 0x1504BDF5: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504BDFA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BDFD:
    RECOMP_CALL(sub_15036430); /* 0x1504BDFD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504BE02: mov dword ptr [eax], 9 */
L_1504BE08:
    eax = edi; /* 0x1504BE08: mov eax, edi */
L_1504BE0A:
    edi = POP32_VAL(esp); /* 0x1504BE0A: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BE0B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504BE0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BE0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BE20u);

L_1504BE20:
    PUSH32(esp, 0x10u); /* 0x1504BE20: push 0x10 */
    PUSH32(esp, 0x150B07B0u); /* 0x1504BE22: push 0x150b07b0 */
    RECOMP_CALL(sub_1505E988); /* 0x1504BE27: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1504BE2C: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x1504BE30: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(edx, LO8(edx) & 8); /* 0x1504BE33: and dl, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (2u) _cf = (((LO8(edx)) >> 6) & 1u); /* 0x1504BE36: shl dl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 2u); /* 0x1504BE36: shl dl, 2 */
    SET_LO8(eax, LO8(edx)); /* 0x1504BE39: mov al, dl */
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x1504BE3B: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = (uint32_t)LO8(eax); /* 0x1504BE3D: movzx ebx, al */
    eax = (uint32_t)LO8(edx); /* 0x1504BE40: movzx eax, dl */
    /* test MEM32(ebp + 0xC), 0x4000u */ /* 0x1504BE43: test dword ptr [ebp + 0xc], 0x4000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ebx = eax; } /* 0x1504BE4A: cmove ebx, eax */
    ecx = MEM32(ebp + 0xC); /* 0x1504BE4D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x80u); /* 0x1504BE50: and cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0xC) = ecx; /* 0x1504BE53: mov dword ptr [ebp + 0xc], ecx */
    SET_LO8(eax, LO8(ebx)); /* 0x1504BE56: mov al, bl */
    _flag_a = (uint32_t)((LO8(eax) | 0x10u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x10u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x10u); /* 0x1504BE58: or al, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x1504BE5A: movzx eax, al */
    MEM32(ebp + (-0x20)) = eax; /* 0x1504BE5D: mov dword ptr [ebp - 0x20], eax */
    eax = (uint32_t)LO8(ebx); /* 0x1504BE60: movzx eax, bl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504BE63: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x20)); /* 0x1504BE65: mov ebx, dword ptr [ebp - 0x20] */
    if (TEST_Z(_flag_a, _flag_b)) { ebx = eax; } /* 0x1504BE68: cmove ebx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504BE6B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504BE6E: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504BE74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BE8D; /* 0x1504BE76: jne 0x1504be8d */
L_1504BE78:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504BE78: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504BE7E: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504BE7F: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BE84: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504BE85: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504BF25; /* 0x1504BE88: jmp 0x1504bf25 */
L_1504BE8D:
    /* cmp eax, 2 */ /* 0x1504BE8D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BE97; /* 0x1504BE90: jne 0x1504be97 */
L_1504BE92:
    _flag_a = (uint32_t)((LO8(ebx) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0x40u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0x40u); /* 0x1504BE92: or bl, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1504BE9F; /* 0x1504BE95: jmp 0x1504be9f */
L_1504BE97:
    /* cmp eax, 3 */ /* 0x1504BE97: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BE9F; /* 0x1504BE9A: jne 0x1504be9f */
L_1504BE9C:
    _flag_a = (uint32_t)((LO8(ebx) | 8)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 8)) << 24;
    SET_LO8(ebx, LO8(ebx) | 8); /* 0x1504BE9C: or bl, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504BE9F:
    RECOMP_CALL(sub_1504BAF6); /* 0x1504BE9F: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504BEA4: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1504BEA6: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504BEA9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x1504BEAC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BEC7; /* 0x1504BEAE: jne 0x1504bec7 */
L_1504BEB0:
    RECOMP_CALL(sub_15036430); /* 0x1504BEB0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1504BEB5: mov dword ptr [eax], 0x18 */
    RECOMP_CALL(sub_150363E0); /* 0x1504BEBB: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504BEC0: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1504BEC3: mov eax, edi */
    goto L_1504BF25; /* 0x1504BEC5: jmp 0x1504bf25 */
L_1504BEC7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504BEC7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504BECB: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504BECE: push esi */
    RECOMP_CALL(sub_1504BF76); /* 0x1504BECF: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BED4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504BED5: pop ecx */
    _flag_a = (uint32_t)((LO8(ebx) | 1)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 1)) << 24;
    SET_LO8(ebx, LO8(ebx) | 1); /* 0x1504BED6: or bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = esi; /* 0x1504BED9: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504BEDB: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504BEDE: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504BEE0: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504BEE3: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504BEE6: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1504BEED: mov byte ptr [eax + ecx + 4], bl */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504BEF1: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504BEF8: and dword ptr [eax + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504BEFD: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFF7u; /* 0x1504BF04: and dword ptr [eax + ecx + 8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504BF09: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504BF0B: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504BF0C: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504BF0F: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504BF16: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504BF3E); /* 0x1504BF19: call 0x1504bf3e */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1504BF1E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = esi; } /* 0x1504BF20: cmovne ebx, esi */
    eax = ebx; /* 0x1504BF23: mov eax, ebx */
L_1504BF25:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504BF25: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504BF28: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504BF2F: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504BF30: pop edi */
    esi = POP32_VAL(esp); /* 0x1504BF31: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504BF32: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504BF33: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BF34: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BF3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BF3Eu);

L_1504BF3E:
    /* test edi, edi */ /* 0x1504BF3E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504BF65; /* 0x1504BF40: jne 0x1504bf65 */
L_1504BF42:
    edi = esi; /* 0x1504BF42: mov edi, esi */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1504BF44: sar edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504BF47: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504BF4A: imul ecx, esi, 0x24 */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504BF4D: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    SET_LO8(edx, MEM8(eax + ecx + 0x4)); /* 0x1504BF54: mov dl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFEu); /* 0x1504BF58: and dl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504BF5B: imul ecx, esi, 0x24 */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504BF5E: mov byte ptr [eax + ecx + 4], dl */
    edi = MEM32(ebp + (-0x1C)); /* 0x1504BF62: mov edi, dword ptr [ebp - 0x1c] */
L_1504BF65:
    esi = MEM32(ebp + (-0x20)); /* 0x1504BF65: mov esi, dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x1504BF68: push esi */
    RECOMP_CALL(sub_1504C004); /* 0x1504BF69: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504BF6E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BF6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504BF76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504BF76u);

L_1504BF76:
    edi = edi; /* 0x1504BF76: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504BF78: push ebp */
    ebp = esp; /* 0x1504BF79: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1504BF7B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1504BF7E: push ebx */
    PUSH32(esp, edi); /* 0x1504BF7F: push edi */
    /* test ecx, ecx */ /* 0x1504BF80: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504BFE4; /* 0x1504BF82: js 0x1504bfe4 */
L_1504BF84:
    /* cmp ecx, MEM32(0x150BEBAC) */ /* 0x1504BF84: cmp ecx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504BFE4; /* 0x1504BF8A: jae 0x1504bfe4 */
L_1504BF8C:
    eax = ecx; /* 0x1504BF8C: mov eax, ecx */
    edi = ecx; /* 0x1504BF8E: mov edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504BF90: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1504BF93: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1504BF93: shr edi, 5 */
    ebx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504BF96: imul ebx, eax, 0x24 */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504BF99: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    /* cmp MEM32(ebx + eax), 0xFFFFFFFFu */ /* 0x1504BFA0: cmp dword ptr [ebx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BFE4; /* 0x1504BFA4: jne 0x1504bfe4 */
L_1504BFA6:
    /* cmp MEM32(0x150BDB08), 1 */ /* 0x1504BFA6: cmp dword ptr [0x150bdb08], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1504BFAD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1504BFAE: mov esi, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504BFD5; /* 0x1504BFB1: jne 0x1504bfd5 */
L_1504BFB3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1504BFB3: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504BFCC; /* 0x1504BFB6: je 0x1504bfcc */
L_1504BFB8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1504BFB8: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504BFC7; /* 0x1504BFBB: je 0x1504bfc7 */
L_1504BFBD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1504BFBD: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504BFD5; /* 0x1504BFC0: jne 0x1504bfd5 */
L_1504BFC2:
    PUSH32(esp, esi); /* 0x1504BFC2: push esi */
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1504BFC3: push -0xc */
    goto L_1504BFCF; /* 0x1504BFC5: jmp 0x1504bfcf */
L_1504BFC7:
    PUSH32(esp, esi); /* 0x1504BFC7: push esi */
    PUSH32(esp, 0xFFFFFFF5u); /* 0x1504BFC8: push -0xb */
    goto L_1504BFCF; /* 0x1504BFCA: jmp 0x1504bfcf */
L_1504BFCC:
    PUSH32(esp, esi); /* 0x1504BFCC: push esi */
    PUSH32(esp, 0xFFFFFFF6u); /* 0x1504BFCD: push -0xa */
L_1504BFCF:
    RECOMP_ICALL(MEM32(0x150C01E4)); /* 0x1504BFCF: call dword ptr [0x150c01e4] */
    RECOMP_FLAGS_IN();
L_1504BFD5:
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x1504BFD5: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    MEM32(ebx + eax) = esi; /* 0x1504BFDC: mov dword ptr [ebx + eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504BFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1504BFE1: pop esi */
    goto L_1504BFFA; /* 0x1504BFE2: jmp 0x1504bffa */
L_1504BFE4:
    RECOMP_CALL(sub_15036430); /* 0x1504BFE4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504BFE9: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504BFEF: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504BFF4: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504BFF7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504BFFA:
    edi = POP32_VAL(esp); /* 0x1504BFFA: pop edi */
    ebx = POP32_VAL(esp); /* 0x1504BFFB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1504BFFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504BFFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C004(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C004u);

L_1504C004:
    edi = edi; /* 0x1504C004: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C006: push ebp */
    ebp = esp; /* 0x1504C007: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504C009: mov eax, dword ptr [ebp + 8] */
    edx = eax; /* 0x1504C00C: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504C00E: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504C011: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504C014: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504C017: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1504C01E: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504C021: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1504C023: push eax */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x1504C024: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1504C02A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C02B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C040u);

L_1504C040:
    PUSH32(esp, 0xCu); /* 0x1504C040: push 0xc */
    PUSH32(esp, 0x150B07D0u); /* 0x1504C042: push 0x150b07d0 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C047: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504C04C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504C04E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C053: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504C054: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504C096); /* 0x1504C058: call 0x1504c096 */
    RECOMP_FLAGS_IN();
    SET_LO16(esi, LO16(eax)); /* 0x1504C05D: mov si, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(esi)); /* 0x1504C060: mov word ptr [ebp - 0x1c], si */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C064: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C087); /* 0x1504C06B: call 0x1504c087 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1504C070: mov ax, si */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C073: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C076: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C07D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C07E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C07F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C080: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C081: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C082: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C087(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C087u);

L_1504C087:
    PUSH32(esp, 3); /* 0x1504C087: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504C089: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C08E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C08F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C096(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C096u);

L_1504C096:
    edi = edi; /* 0x1504C096: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C098: push ebp */
    ebp = esp; /* 0x1504C099: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1504C09B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1504C09E: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504C0A3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504C0A5: mov dword ptr [ebp - 4], eax */
    SET_LO16(eax, MEM16(0x150BCEC8)); /* 0x1504C0A8: mov ax, word ptr [0x150bcec8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1504C0AE: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1504C0B2: push edi */
    edi = 0xFFFFu; /* 0x1504C0B3: mov edi, 0xffff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1504C0B8: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C0CC; /* 0x1504C0BB: je 0x1504c0cc */
L_1504C0BD:
    eax = (uint32_t)LO16(eax); /* 0x1504C0BD: movzx eax, ax */
    MEM16(0x150BCEC8) = (uint16_t)(LO16(edi)); /* 0x1504C0C0: mov word ptr [0x150bcec8], di */
    goto L_1504C164; /* 0x1504C0C7: jmp 0x1504c164 */
L_1504C0CC:
    eax = MEM32(0x150BCED0); /* 0x1504C0CC: mov eax, dword ptr [0x150bced0] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1504C0D1: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C0E0; /* 0x1504C0D4: jne 0x1504c0e0 */
L_1504C0D6:
    RECOMP_CALL(sub_1504F773); /* 0x1504C0D6: call 0x1504f773 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BCED0); /* 0x1504C0DB: mov eax, dword ptr [0x150bced0] */
L_1504C0E0:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504C0E0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C0EA; /* 0x1504C0E3: jne 0x1504c0ea */
L_1504C0E5:
    SET_LO16(eax, LO16(edi)); /* 0x1504C0E5: mov ax, di */
    goto L_1504C164; /* 0x1504C0E8: jmp 0x1504c164 */
L_1504C0EA:
    PUSH32(esp, ebx); /* 0x1504C0EA: push ebx */
    PUSH32(esp, esi); /* 0x1504C0EB: push esi */
    ecx = ebp + (-0x20); /* 0x1504C0EC: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1504C0EF: push ecx */
    PUSH32(esp, eax); /* 0x1504C0F0: push eax */
    RECOMP_ICALL(MEM32(0x150C0020)); /* 0x1504C0F1: call dword ptr [0x150c0020] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1504C0F7: push 0 */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504C0F9: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x1504C0FF: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504C105: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504C107: inc ebx */
    _flag_k = FK_INC;
    goto L_1504C135; /* 0x1504C108: jmp 0x1504c135 */
L_1504C10A:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1504C10A: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C14E; /* 0x1504C10E: je 0x1504c14e */
L_1504C110:
    /* cmp MEM16(ebp + (-0x18)), LO16(ebx) */ /* 0x1504C110: cmp word ptr [ebp - 0x18], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x18))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C135; /* 0x1504C114: jne 0x1504c135 */
L_1504C116:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1504C116: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C135; /* 0x1504C11A: je 0x1504c135 */
L_1504C11C:
    esi = (uint32_t)MEM16(ebp + (-0xA)); /* 0x1504C11C: movzx esi, word ptr [ebp - 0xa] */
    /* test LO16(esi), LO16(esi) */ /* 0x1504C120: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C150; /* 0x1504C123: jne 0x1504c150 */
L_1504C125:
    eax = ebp + (-0x14); /* 0x1504C125: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504C128: push eax */
    RECOMP_CALL(sub_1504AD9D); /* 0x1504C129: call 0x1504ad9d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C12E: pop ecx */
    ecx = eax; /* 0x1504C12F: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1504C131: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C171; /* 0x1504C133: jne 0x1504c171 */
L_1504C135:
    eax = ebp + (-0x1C); /* 0x1504C135: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504C138: push eax */
    PUSH32(esp, ebx); /* 0x1504C139: push ebx */
    eax = ebp + (-0x18); /* 0x1504C13A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1504C13D: push eax */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504C13E: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0024)); /* 0x1504C144: call dword ptr [0x150c0024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504C14A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C10A; /* 0x1504C14C: jne 0x1504c10a */
L_1504C14E:
    esi = edi; /* 0x1504C14E: mov esi, edi */
L_1504C150:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504C150: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504C153: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x1504C159: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1504C15F: mov ax, si */
    esi = POP32_VAL(esp); /* 0x1504C162: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C163: pop ebx */
L_1504C164:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504C164: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504C167: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1504C169: pop edi */
    RECOMP_CALL(sub_1505E540); /* 0x1504C16A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C16F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C170: ret  */
L_1504C171:
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1504C171: movzx eax, byte ptr [ecx + 1] */
    esi = (uint32_t)MEM8(ecx); /* 0x1504C175: movzx esi, byte ptr [ecx] */
    MEM16(0x150BCEC8) = (uint16_t)(LO16(eax)); /* 0x1504C178: mov word ptr [0x150bcec8], ax */
    RECOMP_BACKEDGE();
    goto L_1504C150; /* 0x1504C17E: jmp 0x1504c150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504C190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C190u);

L_1504C190:
    PUSH32(esp, 0xCu); /* 0x1504C190: push 0xc */
    PUSH32(esp, 0x150B07F0u); /* 0x1504C192: push 0x150b07f0 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C197: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504C19C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504C19E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C1A3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504C1A4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504C1E6); /* 0x1504C1A8: call 0x1504c1e6 */
    RECOMP_FLAGS_IN();
    SET_LO16(esi, LO16(eax)); /* 0x1504C1AD: mov si, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(esi)); /* 0x1504C1B0: mov word ptr [ebp - 0x1c], si */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C1B4: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C1D7); /* 0x1504C1BB: call 0x1504c1d7 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1504C1C0: mov ax, si */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C1C3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C1C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C1CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C1CE: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C1CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C1D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C1D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C1D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C1D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C1D7u);

L_1504C1D7:
    PUSH32(esp, 3); /* 0x1504C1D7: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504C1D9: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C1DE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C1DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C1E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C1E6u);

L_1504C1E6:
    SET_LO16(eax, MEM16(0x150BCEC8)); /* 0x1504C1E6: mov ax, word ptr [0x150bcec8] */
    PUSH32(esp, esi); /* 0x1504C1EC: push esi */
    esi = 0xFFFFu; /* 0x1504C1ED: mov esi, 0xffff */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1504C1F2: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C203; /* 0x1504C1F5: je 0x1504c203 */
L_1504C1F7:
    MEM16(0x150BCEC8) = (uint16_t)(LO16(esi)); /* 0x1504C1F7: mov word ptr [0x150bcec8], si */
    eax = (uint32_t)LO16(eax); /* 0x1504C1FE: movzx eax, ax */
    esi = POP32_VAL(esp); /* 0x1504C201: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C202: ret  */
L_1504C203:
    PUSH32(esp, edi); /* 0x1504C203: push edi */
    RECOMP_CALL(sub_1504C096); /* 0x1504C204: call 0x1504c096 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x1504C209: movzx edi, ax */
    /* cmp LO16(edi), LO16(esi) */ /* 0x1504C20C: cmp di, si */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C220; /* 0x1504C20F: je 0x1504c220 */
L_1504C211:
    PUSH32(esp, edi); /* 0x1504C211: push edi */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504C212: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C217: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1504C218: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = edi; /* 0x1504C21B: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x1504C21D: cmovne esi, ecx */
L_1504C220:
    edi = POP32_VAL(esp); /* 0x1504C220: pop edi */
    SET_LO16(eax, LO16(esi)); /* 0x1504C221: mov ax, si */
    esi = POP32_VAL(esp); /* 0x1504C224: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C225: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C230u);

L_1504C230:
    PUSH32(esp, 0xCu); /* 0x1504C230: push 0xc */
    PUSH32(esp, 0x150B0810u); /* 0x1504C232: push 0x150b0810 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C237: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504C23C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504C23E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C243: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504C244: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504C248: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504C28A); /* 0x1504C24B: call 0x1504c28a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C250: pop ecx */
    SET_LO16(esi, LO16(eax)); /* 0x1504C251: mov si, ax */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(esi)); /* 0x1504C254: mov word ptr [ebp - 0x1c], si */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C258: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C27B); /* 0x1504C25F: call 0x1504c27b */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x1504C264: mov ax, si */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C267: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C26A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C271: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C272: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C273: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C274: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C275: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C276: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C27B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C27Bu);

L_1504C27B:
    PUSH32(esp, 3); /* 0x1504C27B: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504C27D: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C282: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C283: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C28A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C28Au);

L_1504C28A:
    edi = edi; /* 0x1504C28A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C28C: push ebp */
    ebp = esp; /* 0x1504C28D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504C28F: mov eax, dword ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x1504C292: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1504C297: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C2B0; /* 0x1504C29A: je 0x1504c2b0 */
L_1504C29C:
    /* cmp MEM16(0x150BCEC8), LO16(ecx) */ /* 0x1504C29C: cmp word ptr [0x150bcec8], cx */
    _flag_a = (uint32_t)(MEM16(0x150BCEC8)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C2B0; /* 0x1504C2A3: jne 0x1504c2b0 */
L_1504C2A5:
    eax = (uint32_t)LO8(eax); /* 0x1504C2A5: movzx eax, al */
    MEM16(0x150BCEC8) = (uint16_t)(LO16(eax)); /* 0x1504C2A8: mov word ptr [0x150bcec8], ax */
    ebp = POP32_VAL(esp); /* 0x1504C2AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C2AF: ret  */
L_1504C2B0:
    SET_LO16(eax, LO16(ecx)); /* 0x1504C2B0: mov ax, cx */
    ebp = POP32_VAL(esp); /* 0x1504C2B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C2B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C2C0u);

L_1504C2C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C2C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504C2C2: mov dx, word ptr [esp + 4] */
    /* in: no port I/O under Win32 */ /* 0x1504C2C7: in al, dx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C2C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C2D0u);

L_1504C2D0:
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504C2D0: mov dx, word ptr [esp + 4] */
    /* in: no port I/O under Win32 */ /* 0x1504C2D5: in ax, dx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C2D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C2E0u);

L_1504C2E0:
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504C2E0: mov dx, word ptr [esp + 4] */
    /* in: no port I/O under Win32 */ /* 0x1504C2E5: in eax, dx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C2E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C2F0u);

L_1504C2F0:
    edi = edi; /* 0x1504C2F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C2F2: push ebp */
    ebp = esp; /* 0x1504C2F3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1504C2F5: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1504C2F8: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C30A; /* 0x1504C2FB: jne 0x1504c30a */
L_1504C2FD:
    RECOMP_CALL(sub_15036430); /* 0x1504C2FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C302: mov dword ptr [eax], 9 */
    goto L_1504C34C; /* 0x1504C308: jmp 0x1504c34c */
L_1504C30A:
    /* test ecx, ecx */ /* 0x1504C30A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504C332; /* 0x1504C30C: js 0x1504c332 */
L_1504C30E:
    /* cmp ecx, MEM32(0x150BEBAC) */ /* 0x1504C30E: cmp ecx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C332; /* 0x1504C314: jae 0x1504c332 */
L_1504C316:
    eax = ecx; /* 0x1504C316: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504C318: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504C31B: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1504C31B: shr eax, 5 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504C31E: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504C321: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x1504C328: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x1504C32D: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504C330: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C331: ret  */
L_1504C332:
    RECOMP_CALL(sub_15036430); /* 0x1504C332: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C337: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C33D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504C33F: push eax */
    PUSH32(esp, eax); /* 0x1504C340: push eax */
    PUSH32(esp, eax); /* 0x1504C341: push eax */
    PUSH32(esp, eax); /* 0x1504C342: push eax */
    PUSH32(esp, eax); /* 0x1504C343: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504C344: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C349: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504C34C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C34C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504C34E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C34F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C360u);

L_1504C360:
    PUSH32(esp, 0x10u); /* 0x1504C360: push 0x10 */
    PUSH32(esp, 0x150B0830u); /* 0x1504C362: push 0x150b0830 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C367: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504C36C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504C36F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C38F; /* 0x1504C372: jne 0x1504c38f */
L_1504C374:
    RECOMP_CALL(sub_150363E0); /* 0x1504C374: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504C379: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504C37C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C381: mov dword ptr [eax], 9 */
L_1504C387:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504C387: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C43D; /* 0x1504C38A: jmp 0x1504c43d */
L_1504C38F:
    /* test edi, edi */ /* 0x1504C38F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504C3A2; /* 0x1504C391: js 0x1504c3a2 */
L_1504C393:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504C393: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C3A2; /* 0x1504C399: jae 0x1504c3a2 */
L_1504C39B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C39B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504C39D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C39E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C3A6; /* 0x1504C3A0: jmp 0x1504c3a6 */
L_1504C3A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C3A2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504C3A4: mov eax, esi */
L_1504C3A6:
    /* test eax, eax */ /* 0x1504C3A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C3CB; /* 0x1504C3A8: jne 0x1504c3cb */
L_1504C3AA:
    RECOMP_CALL(sub_150363E0); /* 0x1504C3AA: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C3AF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504C3B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C3B6: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504C3BC: push esi */
    PUSH32(esp, esi); /* 0x1504C3BD: push esi */
    PUSH32(esp, esi); /* 0x1504C3BE: push esi */
    PUSH32(esp, esi); /* 0x1504C3BF: push esi */
    PUSH32(esp, esi); /* 0x1504C3C0: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504C3C1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C3C6: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504C387; /* 0x1504C3C9: jmp 0x1504c387 */
L_1504C3CB:
    ebx = edi; /* 0x1504C3CB: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504C3CD: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x1504C3D0: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504C3D2: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504C3D5: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504C3D8: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504C3DB: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504C3E2: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C3AA; /* 0x1504C3E7: je 0x1504c3aa */
L_1504C3E9:
    PUSH32(esp, edi); /* 0x1504C3E9: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504C3EA: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C3EF: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504C3F0: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504C3F3: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504C3FA: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504C3FD: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C417; /* 0x1504C402: je 0x1504c417 */
L_1504C404:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504C404: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504C407: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504C40A: push edi */
    RECOMP_CALL(sub_1504C461); /* 0x1504C40B: call 0x1504c461 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504C410: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1504C413: mov esi, eax */
    goto L_1504C42C; /* 0x1504C415: jmp 0x1504c42c */
L_1504C417:
    RECOMP_CALL(sub_15036430); /* 0x1504C417: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C41C: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504C422: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C427: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504C429: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504C42C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504C42C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C42F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C453); /* 0x1504C436: call 0x1504c453 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504C43B: mov eax, esi */
L_1504C43D:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C43D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C440: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C447: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C448: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C449: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C44A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C44B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C44C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C453u);

L_1504C453:
    PUSH32(esp, edi); /* 0x1504C453: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504C454: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C459: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C45A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C461u);

L_1504C461:
    edi = edi; /* 0x1504C461: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C463: push ebp */
    ebp = esp; /* 0x1504C464: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504C466: push ecx */
    PUSH32(esp, ebx); /* 0x1504C467: push ebx */
    PUSH32(esp, esi); /* 0x1504C468: push esi */
    PUSH32(esp, edi); /* 0x1504C469: push edi */
    PUSH32(esp, 1); /* 0x1504C46A: push 1 */
    PUSH32(esp, 0); /* 0x1504C46C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504C46E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504C621); /* 0x1504C471: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504C476: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504C479: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504C47C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C4F3; /* 0x1504C47F: je 0x1504c4f3 */
L_1504C481:
    edi = MEM32(ebp + 0xC); /* 0x1504C481: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 1 */ /* 0x1504C484: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C492; /* 0x1504C487: je 0x1504c492 */
L_1504C489:
    /* cmp edi, 3 */ /* 0x1504C489: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C492; /* 0x1504C48C: je 0x1504c492 */
L_1504C48E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504C48E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C495; /* 0x1504C490: jmp 0x1504c495 */
L_1504C492:
    PUSH32(esp, 9); /* 0x1504C492: push 9 */
    ebx = POP32_VAL(esp); /* 0x1504C494: pop ebx */
L_1504C495:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C495: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504C497: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504C498: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1504C49B: push esi */
    PUSH32(esp, eax); /* 0x1504C49C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504C49D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504BD60); /* 0x1504C4A0: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C4A5: pop ecx */
    PUSH32(esp, eax); /* 0x1504C4A6: push eax */
    /* test edi, edi */ /* 0x1504C4A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C4B3; /* 0x1504C4A9: jne 0x1504c4b3 */
L_1504C4AB:
    RECOMP_ICALL(MEM32(0x150C00FC)); /* 0x1504C4AB: call dword ptr [0x150c00fc] */
    RECOMP_FLAGS_IN();
    goto L_1504C4B9; /* 0x1504C4B1: jmp 0x1504c4b9 */
L_1504C4B3:
    RECOMP_ICALL(MEM32(0x150C00F8)); /* 0x1504C4B3: call dword ptr [0x150c00f8] */
    RECOMP_FLAGS_IN();
L_1504C4B9:
    /* test eax, eax */ /* 0x1504C4B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C4C5; /* 0x1504C4BB: jne 0x1504c4c5 */
L_1504C4BD:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504C4BD: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504C4C3: mov esi, eax */
L_1504C4C5:
    /* test ebx, ebx */ /* 0x1504C4C5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504C4DE; /* 0x1504C4C7: jle 0x1504c4de */
L_1504C4C9:
    /* test esi, esi */ /* 0x1504C4C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C50F; /* 0x1504C4CB: je 0x1504c50f */
L_1504C4CD:
    PUSH32(esp, 0x3E8u); /* 0x1504C4CD: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x1504C4D2: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1504C4D8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1504C4DB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1504C495; /* 0x1504C4DC: jmp 0x1504c495 */
L_1504C4DE:
    /* test esi, esi */ /* 0x1504C4DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C50F; /* 0x1504C4E0: je 0x1504c50f */
L_1504C4E2:
    /* cmp edi, 1 */ /* 0x1504C4E2: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C4FB; /* 0x1504C4E5: je 0x1504c4fb */
L_1504C4E7:
    /* cmp edi, 3 */ /* 0x1504C4E7: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C4FB; /* 0x1504C4EA: je 0x1504c4fb */
L_1504C4EC:
    PUSH32(esp, esi); /* 0x1504C4EC: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x1504C4ED: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C4F2: pop ecx */
L_1504C4F3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504C4F3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504C4F6:
    edi = POP32_VAL(esp); /* 0x1504C4F6: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C4F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C4F8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C4F9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C4FA: ret  */
L_1504C4FB:
    RECOMP_CALL(sub_15036430); /* 0x1504C4FB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x24u; /* 0x1504C500: mov dword ptr [eax], 0x24 */
    RECOMP_CALL(sub_150363E0); /* 0x1504C506: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C50B: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1504C4F3; /* 0x1504C50D: jmp 0x1504c4f3 */
L_1504C50F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C50F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504C4F6; /* 0x1504C511: jmp 0x1504c4f6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504C520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C520u);

L_1504C520:
    PUSH32(esp, 0x10u); /* 0x1504C520: push 0x10 */
    PUSH32(esp, 0x150B0850u); /* 0x1504C522: push 0x150b0850 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C527: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504C52C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504C52F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C54F; /* 0x1504C532: jne 0x1504c54f */
L_1504C534:
    RECOMP_CALL(sub_150363E0); /* 0x1504C534: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504C539: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504C53C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C541: mov dword ptr [eax], 9 */
L_1504C547:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504C547: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C5FD; /* 0x1504C54A: jmp 0x1504c5fd */
L_1504C54F:
    /* test edi, edi */ /* 0x1504C54F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504C562; /* 0x1504C551: js 0x1504c562 */
L_1504C553:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504C553: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C562; /* 0x1504C559: jae 0x1504c562 */
L_1504C55B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C55B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504C55D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C55E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C566; /* 0x1504C560: jmp 0x1504c566 */
L_1504C562:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C562: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504C564: mov eax, esi */
L_1504C566:
    /* test eax, eax */ /* 0x1504C566: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C58B; /* 0x1504C568: jne 0x1504c58b */
L_1504C56A:
    RECOMP_CALL(sub_150363E0); /* 0x1504C56A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C56F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504C571: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C576: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504C57C: push esi */
    PUSH32(esp, esi); /* 0x1504C57D: push esi */
    PUSH32(esp, esi); /* 0x1504C57E: push esi */
    PUSH32(esp, esi); /* 0x1504C57F: push esi */
    PUSH32(esp, esi); /* 0x1504C580: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504C581: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C586: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504C547; /* 0x1504C589: jmp 0x1504c547 */
L_1504C58B:
    ebx = edi; /* 0x1504C58B: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504C58D: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x1504C590: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504C592: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504C595: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504C598: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504C59B: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x1504C5A2: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C56A; /* 0x1504C5A7: je 0x1504c56a */
L_1504C5A9:
    PUSH32(esp, edi); /* 0x1504C5A9: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504C5AA: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C5AF: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504C5B0: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504C5B3: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504C5BA: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504C5BD: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C5D7; /* 0x1504C5C2: je 0x1504c5d7 */
L_1504C5C4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504C5C4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504C5C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504C5CA: push edi */
    RECOMP_CALL(sub_1504C621); /* 0x1504C5CB: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504C5D0: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1504C5D3: mov esi, eax */
    goto L_1504C5EC; /* 0x1504C5D5: jmp 0x1504c5ec */
L_1504C5D7:
    RECOMP_CALL(sub_15036430); /* 0x1504C5D7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C5DC: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504C5E2: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C5E7: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504C5E9: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504C5EC:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504C5EC: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C5EF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C613); /* 0x1504C5F6: call 0x1504c613 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504C5FB: mov eax, esi */
L_1504C5FD:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C5FD: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C600: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C607: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C608: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C609: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C60A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C60B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C60C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C613(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C613u);

L_1504C613:
    PUSH32(esp, edi); /* 0x1504C613: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504C614: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C619: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C61A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C621(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C621u);

L_1504C621:
    edi = edi; /* 0x1504C621: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C623: push ebp */
    ebp = esp; /* 0x1504C624: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1504C626: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504C627: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504C62A: push esi */
    RECOMP_CALL(sub_1504BD60); /* 0x1504C62B: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C630: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504C631: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C646; /* 0x1504C634: jne 0x1504c646 */
L_1504C636:
    RECOMP_CALL(sub_15036430); /* 0x1504C636: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C63B: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504C641: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C68C; /* 0x1504C644: jmp 0x1504c68c */
L_1504C646:
    PUSH32(esp, edi); /* 0x1504C646: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504C647: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1504C64A: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504C64C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1504C64F: push eax */
    RECOMP_ICALL(MEM32(0x150C0100)); /* 0x1504C650: call dword ptr [0x150c0100] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1504C656: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1504C658: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C672; /* 0x1504C65B: jne 0x1504c672 */
L_1504C65D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504C65D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504C663: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C672; /* 0x1504C665: je 0x1504c672 */
L_1504C667:
    PUSH32(esp, eax); /* 0x1504C667: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504C668: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C66D: pop ecx */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x1504C66E: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C68B; /* 0x1504C670: jmp 0x1504c68b */
L_1504C672:
    eax = esi; /* 0x1504C672: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504C674: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504C677: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504C67A: imul ecx, esi, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504C67D: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFDu); /* 0x1504C684: and byte ptr [eax + ecx + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edi; /* 0x1504C689: mov eax, edi */
L_1504C68B:
    edi = POP32_VAL(esp); /* 0x1504C68B: pop edi */
L_1504C68C:
    esi = POP32_VAL(esp); /* 0x1504C68C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504C68D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C68E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C6A0u);

L_1504C6A0:
    PUSH32(esp, 0x18u); /* 0x1504C6A0: push 0x18 */
    PUSH32(esp, 0x150B0870u); /* 0x1504C6A2: push 0x150b0870 */
    RECOMP_CALL(sub_1505E988); /* 0x1504C6A7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504C6AC: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = edi; /* 0x1504C6AF: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x24)) = edi; /* 0x1504C6B2: mov dword ptr [ebp - 0x24], edi */
    ebx = MEM32(ebp + 0x8); /* 0x1504C6B5: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504C6B8: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C6D7; /* 0x1504C6BB: jne 0x1504c6d7 */
L_1504C6BD:
    RECOMP_CALL(sub_150363E0); /* 0x1504C6BD: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504C6C2: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504C6C5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C6CA: mov dword ptr [eax], 9 */
L_1504C6D0:
    edx = edi; /* 0x1504C6D0: mov edx, edi */
    goto L_1504C792; /* 0x1504C6D2: jmp 0x1504c792 */
L_1504C6D7:
    /* test ebx, ebx */ /* 0x1504C6D7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504C6EA; /* 0x1504C6D9: js 0x1504c6ea */
L_1504C6DB:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504C6DB: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C6EA; /* 0x1504C6E1: jae 0x1504c6ea */
L_1504C6E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C6E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504C6E5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C6E6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C6EE; /* 0x1504C6E8: jmp 0x1504c6ee */
L_1504C6EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504C6EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504C6EC: mov eax, esi */
L_1504C6EE:
    /* test eax, eax */ /* 0x1504C6EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C713; /* 0x1504C6F0: jne 0x1504c713 */
L_1504C6F2:
    RECOMP_CALL(sub_150363E0); /* 0x1504C6F2: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C6F7: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504C6F9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C6FE: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x1504C704: push esi */
    PUSH32(esp, esi); /* 0x1504C705: push esi */
    PUSH32(esp, esi); /* 0x1504C706: push esi */
    PUSH32(esp, esi); /* 0x1504C707: push esi */
    PUSH32(esp, esi); /* 0x1504C708: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504C709: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C70E: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504C6D0; /* 0x1504C711: jmp 0x1504c6d0 */
L_1504C713:
    ecx = ebx; /* 0x1504C713: mov ecx, ebx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504C715: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1504C718: mov dword ptr [ebp - 0x1c], ecx */
    eax = ebx; /* 0x1504C71B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504C71D: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504C720: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = edx; /* 0x1504C723: mov dword ptr [ebp - 0x20], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504C726: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x1504C72D: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C6F2; /* 0x1504C732: je 0x1504c6f2 */
L_1504C734:
    PUSH32(esp, ebx); /* 0x1504C734: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x1504C735: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C73A: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504C73B: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x1C)); /* 0x1504C73E: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504C741: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504C748: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504C74B: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C76A; /* 0x1504C750: je 0x1504c76a */
L_1504C752:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504C752: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504C755: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504C758: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1504C75B: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504C75C: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504C761: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504C764: mov edi, eax */
    esi = edx; /* 0x1504C766: mov esi, edx */
    goto L_1504C77E; /* 0x1504C768: jmp 0x1504c77e */
L_1504C76A:
    RECOMP_CALL(sub_15036430); /* 0x1504C76A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C76F: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504C775: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504C77A: mov dword ptr [eax], esi */
    esi = edi; /* 0x1504C77C: mov esi, edi */
L_1504C77E:
    MEM32(ebp + (-0x28)) = edi; /* 0x1504C77E: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1504C781: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504C784: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504C7AD); /* 0x1504C78B: call 0x1504c7ad */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x1504C790: mov edx, esi */
L_1504C792:
    eax = edi; /* 0x1504C792: mov eax, edi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504C794: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504C797: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504C79E: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504C79F: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C7A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C7A1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C7A2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C7A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C7AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C7ADu);

L_1504C7AD:
    PUSH32(esp, ebx); /* 0x1504C7AD: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x1504C7AE: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C7B3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C7B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C7BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C7BBu);

L_1504C7BB:
    edi = edi; /* 0x1504C7BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C7BD: push ebp */
    ebp = esp; /* 0x1504C7BE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504C7C0: push ecx */
    PUSH32(esp, ecx); /* 0x1504C7C1: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1504C7C2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1504C7C5: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1504C7C8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504C7C9: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1504C7CC: push edi */
    PUSH32(esp, esi); /* 0x1504C7CD: push esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x1504C7CE: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504C7D1: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_1504BD60); /* 0x1504C7D4: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504C7D9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1504C7DC: pop ecx */
    /* cmp eax, edi */ /* 0x1504C7DD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C7F2; /* 0x1504C7DF: jne 0x1504c7f2 */
L_1504C7E1:
    RECOMP_CALL(sub_15036430); /* 0x1504C7E1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504C7E6: mov dword ptr [eax], 9 */
L_1504C7EC:
    eax = edi; /* 0x1504C7EC: mov eax, edi */
    edx = edi; /* 0x1504C7EE: mov edx, edi */
    goto L_1504C83A; /* 0x1504C7F0: jmp 0x1504c83a */
L_1504C7F2:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504C7F2: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x4); /* 0x1504C7F5: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1504C7F8: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1504C7F9: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1504C7FC: push eax */
    RECOMP_ICALL(MEM32(0x150C0100)); /* 0x1504C7FD: call dword ptr [0x150c0100] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1504C803: mov dword ptr [ebp - 8], eax */
    /* cmp eax, edi */ /* 0x1504C806: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C81D; /* 0x1504C808: jne 0x1504c81d */
L_1504C80A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504C80A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504C810: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C81D; /* 0x1504C812: je 0x1504c81d */
L_1504C814:
    PUSH32(esp, eax); /* 0x1504C814: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504C815: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C81A: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504C7EC; /* 0x1504C81B: jmp 0x1504c7ec */
L_1504C81D:
    eax = esi; /* 0x1504C81D: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504C81F: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504C822: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504C825: imul ecx, esi, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504C828: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFDu); /* 0x1504C82F: and byte ptr [eax + ecx + 4], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x8)); /* 0x1504C834: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x1504C837: mov edx, dword ptr [ebp - 4] */
L_1504C83A:
    edi = POP32_VAL(esp); /* 0x1504C83A: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C83B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C83C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C83D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C850u);

L_1504C850:
    edi = edi; /* 0x1504C850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C852: push ebp */
    ebp = esp; /* 0x1504C853: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1504C855: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504C856: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504C859: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C87B; /* 0x1504C85B: jne 0x1504c87b */
L_1504C85D:
    RECOMP_CALL(sub_15036430); /* 0x1504C85D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504C862: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C868: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504C86A: push eax */
    PUSH32(esp, eax); /* 0x1504C86B: push eax */
    PUSH32(esp, eax); /* 0x1504C86C: push eax */
    PUSH32(esp, eax); /* 0x1504C86D: push eax */
    PUSH32(esp, eax); /* 0x1504C86E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504C86F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C874: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C877: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C89F; /* 0x1504C879: jmp 0x1504c89f */
L_1504C87B:
    ecx = esi; /* 0x1504C87B: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1504C87D: lea edx, [ecx + 1] */
L_1504C880:
    SET_LO8(eax, MEM8(ecx)); /* 0x1504C880: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504C882: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1504C883: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C880; /* 0x1504C885: jne 0x1504c880 */
L_1504C887:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1504C887: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1504C889: push 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504C88B: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1504C88C: push ecx */
    PUSH32(esp, esi); /* 0x1504C88D: push esi */
    RECOMP_CALL(sub_1504C8CD); /* 0x1504C88E: call 0x1504c8cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504C893: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504C895: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504C898: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x1504C89A: cmovne esi, ecx */
    eax = esi; /* 0x1504C89D: mov eax, esi */
L_1504C89F:
    esi = POP32_VAL(esp); /* 0x1504C89F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504C8A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C8A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C8B0u);

L_1504C8B0:
    edi = edi; /* 0x1504C8B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C8B2: push ebp */
    ebp = esp; /* 0x1504C8B3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504C8B5: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504C8B7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504C8BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504C8CD); /* 0x1504C8BD: call 0x1504c8cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504C8C2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504C8C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C8C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504C8CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504C8CDu);

L_1504C8CD:
    edi = edi; /* 0x1504C8CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504C8CF: push ebp */
    ebp = esp; /* 0x1504C8D0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504C8D2: push ecx */
    PUSH32(esp, ecx); /* 0x1504C8D3: push ecx */
    PUSH32(esp, ebx); /* 0x1504C8D4: push ebx */
    PUSH32(esp, esi); /* 0x1504C8D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504C8D6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1504C8D9: push edi */
    /* test esi, esi */ /* 0x1504C8DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C9D3; /* 0x1504C8DC: je 0x1504c9d3 */
L_1504C8E2:
    edi = MEM32(ebp + 0xC); /* 0x1504C8E2: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1504C8E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C9D3; /* 0x1504C8E7: je 0x1504c9d3 */
L_1504C8ED:
    PUSH32(esp, edi); /* 0x1504C8ED: push edi */
    PUSH32(esp, esi); /* 0x1504C8EE: push esi */
    RECOMP_CALL(sub_1508ECC0); /* 0x1504C8EF: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1504C8F4: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1504C8F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504C8F7: pop ecx */
    /* cmp ebx, edi */ /* 0x1504C8F8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504C90F; /* 0x1504C8FA: jb 0x1504c90f */
L_1504C8FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504C8FC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504C8FE:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1504C8FE: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C905; /* 0x1504C901: je 0x1504c905 */
L_1504C903:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1504C903: mov byte ptr [esi], bl */
L_1504C905:
    RECOMP_CALL(sub_15036430); /* 0x1504C905: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1504C9DA; /* 0x1504C90A: jmp 0x1504c9da */
L_1504C90F:
    RECOMP_CALL(sub_15068630); /* 0x1504C90F: call 0x15068630 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1504C914: mov dword ptr [ebp - 8], eax */
    edi = ebx + (-0x1); /* 0x1504C917: lea edi, [ebx - 1] */
    /* cmp ebx, 6 */ /* 0x1504C91A: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504C8FC; /* 0x1504C91D: jb 0x1504c8fc */
L_1504C91F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504C91F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1504C921: add edi, esi */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1504C923: mov eax, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1504C925: mov dword ptr [ebp - 4], eax */
    /* cmp edi, esi */ /* 0x1504C928: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504C964; /* 0x1504C92A: jb 0x1504c964 */
L_1504C92C:
    PUSH32(esp, edi); /* 0x1504C92C: push edi */
    PUSH32(esp, esi); /* 0x1504C92D: push esi */
    RECOMP_CALL(sub_15051200); /* 0x1504C92E: call 0x15051200 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C933: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504C934: pop ecx */
    /* test eax, eax */ /* 0x1504C935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504C961; /* 0x1504C937: jne 0x1504c961 */
L_1504C939:
    /* cmp MEM8(edi), 0x58u */ /* 0x1504C939: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C8FE; /* 0x1504C93C: jne 0x1504c8fe */
L_1504C93E:
    eax = MEM32(ebp + (-0x4)); /* 0x1504C93E: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, 5 */ /* 0x1504C941: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C964; /* 0x1504C944: jae 0x1504c964 */
L_1504C946:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504C946: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504C947: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504C949: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1504C94C: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0xAu); /* 0x1504C94F: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1504C951: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1504C952: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1504C954: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + (-0x8)) = eax; /* 0x1504C957: mov dword ptr [ebp - 8], eax */
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1504C95A: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504C95C: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1504C95D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504C92C; /* 0x1504C95F: jae 0x1504c92c */
L_1504C961:
    eax = MEM32(ebp + (-0x4)); /* 0x1504C961: mov eax, dword ptr [ebp - 4] */
L_1504C964:
    /* cmp MEM8(edi), 0x58u */ /* 0x1504C964: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C8FE; /* 0x1504C967: jne 0x1504c8fe */
L_1504C969:
    /* cmp eax, 5 */ /* 0x1504C969: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504C8FE; /* 0x1504C96C: jb 0x1504c8fe */
L_1504C96E:
    MEM8(edi) = (uint8_t)(0x61u); /* 0x1504C96E: mov byte ptr [edi], 0x61 */
    MEM32(ebp + (-0x8)) = 0x62u; /* 0x1504C971: mov dword ptr [ebp - 8], 0x62 */
    RECOMP_CALL(sub_15036430); /* 0x1504C978: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1504C97D: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1504C97F: mov dword ptr [ebp - 4], eax */
L_1504C982:
    RECOMP_CALL(sub_15036430); /* 0x1504C982: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504C987: push ebx */
    PUSH32(esp, esi); /* 0x1504C988: push esi */
    MEM32(eax) = ebx; /* 0x1504C989: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036590); /* 0x1504C98B: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504C990: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504C991: pop ecx */
    /* test eax, eax */ /* 0x1504C992: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504C9A0; /* 0x1504C994: je 0x1504c9a0 */
L_1504C996:
    RECOMP_CALL(sub_15036430); /* 0x1504C996: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x1504C99B: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504C9B0; /* 0x1504C99E: jne 0x1504c9b0 */
L_1504C9A0:
    eax = MEM32(ebp + (-0x8)); /* 0x1504C9A0: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0x7Bu */ /* 0x1504C9A3: cmp eax, 0x7b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C9BE; /* 0x1504C9A6: je 0x1504c9be */
L_1504C9A8:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1504C9A8: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504C9AA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1504C9AB: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_1504C982; /* 0x1504C9AE: jmp 0x1504c982 */
L_1504C9B0:
    RECOMP_CALL(sub_15036430); /* 0x1504C9B0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1504C9B5: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1504C9B8: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504C9BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504C9EE; /* 0x1504C9BC: jmp 0x1504c9ee */
L_1504C9BE:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1504C9BE: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504C9C5; /* 0x1504C9C1: je 0x1504c9c5 */
L_1504C9C3:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1504C9C3: mov byte ptr [esi], bl */
L_1504C9C5:
    RECOMP_CALL(sub_15036430); /* 0x1504C9C5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11u); /* 0x1504C9CA: push 0x11 */
    ecx = POP32_VAL(esp); /* 0x1504C9CC: pop ecx */
    MEM32(eax) = ecx; /* 0x1504C9CD: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1504C9CF: mov eax, ecx */
    goto L_1504C9EE; /* 0x1504C9D1: jmp 0x1504c9ee */
L_1504C9D3:
    RECOMP_CALL(sub_15036430); /* 0x1504C9D3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504C9D8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504C9DA:
    PUSH32(esp, 0x16u); /* 0x1504C9DA: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504C9DC: pop esi */
    PUSH32(esp, ebx); /* 0x1504C9DD: push ebx */
    PUSH32(esp, ebx); /* 0x1504C9DE: push ebx */
    PUSH32(esp, ebx); /* 0x1504C9DF: push ebx */
    PUSH32(esp, ebx); /* 0x1504C9E0: push ebx */
    PUSH32(esp, ebx); /* 0x1504C9E1: push ebx */
    MEM32(eax) = esi; /* 0x1504C9E2: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504C9E4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504C9E9: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504C9EB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504C9EE:
    edi = POP32_VAL(esp); /* 0x1504C9EE: pop edi */
    esi = POP32_VAL(esp); /* 0x1504C9EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504C9F0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504C9F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504C9F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CA00u);

L_1504CA00:
    PUSH32(esp, 0x14u); /* 0x1504CA00: push 0x14 */
    PUSH32(esp, 0x150B08B0u); /* 0x1504CA02: push 0x150b08b0 */
    RECOMP_CALL(sub_1505E988); /* 0x1504CA07: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x1504CA0C: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504CA10: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1504CA12: mov dword ptr [ebp - 0x20], esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1504CA15: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CA3A; /* 0x1504CA18: jne 0x1504ca3a */
L_1504CA1A:
    RECOMP_CALL(sub_15036430); /* 0x1504CA1A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504CA1F: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1504CA25: push esi */
    PUSH32(esp, esi); /* 0x1504CA26: push esi */
    PUSH32(esp, esi); /* 0x1504CA27: push esi */
    PUSH32(esp, esi); /* 0x1504CA28: push esi */
    PUSH32(esp, esi); /* 0x1504CA29: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504CA2A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504CA2F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504CA32:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504CA32: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504CAC5; /* 0x1504CA35: jmp 0x1504cac5 */
L_1504CA3A:
    MEM32(ebp + (-0x4)) = esi; /* 0x1504CA3A: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, esi); /* 0x1504CA3D: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CA3E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x1504CA41: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504CA43: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504CA46: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x1504CA49: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504CA4C: push eax */
    eax = ebp + (-0x20); /* 0x1504CA4D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504CA50: push eax */
    RECOMP_CALL(sub_1504CC26); /* 0x1504CA51: call 0x1504cc26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504CA56: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504CA59: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x1504CA5B: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504CA5E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504CA7A); /* 0x1504CA65: call 0x1504ca7a */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1504CA6A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CAC2; /* 0x1504CA6C: je 0x1504cac2 */
L_1504CA6E:
    RECOMP_CALL(sub_15036430); /* 0x1504CA6E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504CA73: mov dword ptr [eax], edi */
    RECOMP_BACKEDGE();
    goto L_1504CA32; /* 0x1504CA75: jmp 0x1504ca32 */
L_1504CAC2:
    eax = MEM32(ebp + (-0x1C)); /* 0x1504CAC2: mov eax, dword ptr [ebp - 0x1c] */
L_1504CAC5:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504CAC5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504CAC8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504CACF: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504CAD0: pop edi */
    esi = POP32_VAL(esp); /* 0x1504CAD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504CAD2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504CAD3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CAD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CA7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CA7Au);

L_1504CA7A:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1504CA7A: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CAC1; /* 0x1504CA7E: je 0x1504cac1 */
L_1504CA80:
    /* test edi, edi */ /* 0x1504CA80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CAB8; /* 0x1504CA82: je 0x1504cab8 */
L_1504CA84:
    esi = MEM32(ebp + (-0x1C)); /* 0x1504CA84: mov esi, dword ptr [ebp - 0x1c] */
    edx = esi; /* 0x1504CA87: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504CA89: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504CA8C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504CA8E: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504CA91: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504CA94: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(edx, MEM8(eax + ecx + 0x4)); /* 0x1504CA9B: mov dl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFEu); /* 0x1504CA9F: and dl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi; /* 0x1504CAA2: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504CAA4: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1504CAA7: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1504CAAA: imul ecx, esi, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504CAAD: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504CAB4: mov byte ptr [eax + ecx + 4], dl */
L_1504CAB8:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504CAB8: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1504C004); /* 0x1504CABB: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504CAC0: pop ecx */
L_1504CAC1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CAC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CAE0u);

L_1504CAE0:
    edi = edi; /* 0x1504CAE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504CAE2: push ebp */
    ebp = esp; /* 0x1504CAE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504CAE5: push ecx */
    PUSH32(esp, esi); /* 0x1504CAE6: push esi */
    PUSH32(esp, 0); /* 0x1504CAE7: push 0 */
    eax = ebp + (-0x4); /* 0x1504CAE9: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504CAEC: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504CAEF: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504CAF0: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504CAF3: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CAF6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504CAF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504CAFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504CB1A); /* 0x1504CAFF: call 0x1504cb1a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1504CB04: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1504CB07: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504CB0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = esi; } /* 0x1504CB0C: cmovne ecx, esi */
    eax = ecx; /* 0x1504CB0F: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1504CB11: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504CB12: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CB13: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CB1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CB1Au);

L_1504CB1A:
    PUSH32(esp, 0x10u); /* 0x1504CB1A: push 0x10 */
    PUSH32(esp, 0x150B0890u); /* 0x1504CB1C: push 0x150b0890 */
    RECOMP_CALL(sub_1505E988); /* 0x1504CB21: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504CB26: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504CB28: mov dword ptr [ebp - 0x1c], edi */
    esi = MEM32(ebp + 0x18); /* 0x1504CB2B: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1504CB2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CB4D; /* 0x1504CB30: jne 0x1504cb4d */
L_1504CB32:
    RECOMP_CALL(sub_15036430); /* 0x1504CB32: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504CB37: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504CB39: pop esi */
    MEM32(eax) = esi; /* 0x1504CB3A: mov dword ptr [eax], esi */
    PUSH32(esp, edi); /* 0x1504CB3C: push edi */
    PUSH32(esp, edi); /* 0x1504CB3D: push edi */
    PUSH32(esp, edi); /* 0x1504CB3E: push edi */
    PUSH32(esp, edi); /* 0x1504CB3F: push edi */
    PUSH32(esp, edi); /* 0x1504CB40: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1504CB41: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504CB46: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504CB49: mov eax, esi */
    goto L_1504CB9C; /* 0x1504CB4B: jmp 0x1504cb9c */
L_1504CB4D:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1504CB4D: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1504CB50: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CB32; /* 0x1504CB53: je 0x1504cb32 */
L_1504CB55:
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x1504CB55: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CB63; /* 0x1504CB58: je 0x1504cb63 */
L_1504CB5A:
    /* test MEM32(ebp + 0x14), 0xFFFFFE7Fu */ /* 0x1504CB5A: test dword ptr [ebp + 0x14], 0xfffffe7f */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CB32; /* 0x1504CB61: jne 0x1504cb32 */
L_1504CB63:
    MEM32(ebp + (-0x4)) = edi; /* 0x1504CB63: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1504CB66: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504CB69: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CB6C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504CB6F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504CB72: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504CB75: push esi */
    eax = ebp + (-0x1C); /* 0x1504CB76: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1504CB79: push eax */
    RECOMP_CALL(sub_1504CC26); /* 0x1504CB7A: call 0x1504cc26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504CB7F: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504CB82: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504CB84: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504CB87: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504CBB2); /* 0x1504CB8E: call 0x1504cbb2 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1504CB93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CB9A; /* 0x1504CB95: je 0x1504cb9a */
L_1504CB97:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1504CB97: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504CB9A:
    eax = edi; /* 0x1504CB9A: mov eax, edi */
L_1504CB9C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504CB9C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504CB9F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504CBA6: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504CBA7: pop edi */
    esi = POP32_VAL(esp); /* 0x1504CBA8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504CBA9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504CBAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CBAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CBB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CBB2u);

L_1504CBB2:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1504CBB2: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CBF7; /* 0x1504CBB6: je 0x1504cbf7 */
L_1504CBB8:
    /* test edi, edi */ /* 0x1504CBB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CBEF; /* 0x1504CBBA: je 0x1504cbef */
L_1504CBBC:
    edx = MEM32(esi); /* 0x1504CBBC: mov edx, dword ptr [esi] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504CBBE: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = MEM32(esi); /* 0x1504CBC1: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504CBC3: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504CBC6: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504CBC9: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(ebx, MEM8(eax + ecx + 0x4)); /* 0x1504CBD0: mov bl, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xFEu); /* 0x1504CBD4: and bl, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(esi); /* 0x1504CBD7: mov edx, dword ptr [esi] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504CBD9: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = MEM32(esi); /* 0x1504CBDC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504CBDE: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504CBE1: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504CBE4: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1504CBEB: mov byte ptr [eax + ecx + 4], bl */
L_1504CBEF:
    PUSH32(esp, MEM32(esi)); /* 0x1504CBEF: push dword ptr [esi] */
    RECOMP_CALL(sub_1504C004); /* 0x1504CBF1: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504CBF6: pop ecx */
L_1504CBF7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CBF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CC00u);

L_1504CC00:
    edi = edi; /* 0x1504CC00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504CC02: push ebp */
    ebp = esp; /* 0x1504CC03: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504CC05: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504CC07: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1504CC0A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1504CC0D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CC10: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504CC13: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1504CB1A); /* 0x1504CC16: call 0x1504cb1a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1504CC1B: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504CC1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504CC1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504CC26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504CC26u);

L_1504CC26:
    edi = edi; /* 0x1504CC26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504CC28: push ebp */
    ebp = esp; /* 0x1504CC29: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1504CC2B: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504CC2E: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504CC2F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 0xCu; /* 0x1504CC31: mov dword ptr [ebp - 0x34], 0xc */
    /* test MEM32(ebp + 0x14), 0x80u */ /* 0x1504CC38: test dword ptr [ebp + 0x14], 0x80 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x80u);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504CC3F: push esi */
    PUSH32(esp, ebx); /* 0x1504CC40: push ebx */
    eax = POP32_VAL(esp); /* 0x1504CC41: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504CC42: sete al */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1504CC45: mov dword ptr [ebp - 0x24], ebx */
    /* test MEM32(ebp + 0x14), 0x80u */ /* 0x1504CC48: test dword ptr [ebp + 0x14], 0x80 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x80u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504CC4F: mov dword ptr [ebp - 0x2c], eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504CC52: sete al */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1504CC55: mov byte ptr [ebp - 2], bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1504CC58: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM32(ebp + (-0x30)) = ebx; /* 0x1504CC5A: mov dword ptr [ebp - 0x30], ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    SET_LO8(eax, LO8(eax) & 0x10u); /* 0x1504CC5D: and al, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504CC5F: mov byte ptr [ebp - 1], al */
    eax = ebp + (-0x24); /* 0x1504CC62: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504CC65: push eax */
    RECOMP_CALL(sub_1504B7B0); /* 0x1504CC66: call 0x1504b7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504CC6B: pop ecx */
    /* test eax, eax */ /* 0x1504CC6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CC7D; /* 0x1504CC6E: je 0x1504cc7d */
L_1504CC70:
    PUSH32(esp, ebx); /* 0x1504CC70: push ebx */
    PUSH32(esp, ebx); /* 0x1504CC71: push ebx */
    PUSH32(esp, ebx); /* 0x1504CC72: push ebx */
    PUSH32(esp, ebx); /* 0x1504CC73: push ebx */
    PUSH32(esp, ebx); /* 0x1504CC74: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504CC75: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504CC7A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504CC7D:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1504CC7D: mov al, byte ptr [ebp - 1] */
    esi = 0x8000u; /* 0x1504CC80: mov esi, 0x8000 */
    ecx = MEM32(ebp + 0x14); /* 0x1504CC85: mov ecx, dword ptr [ebp + 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504CC88: mov byte ptr [ebp - 1], al */
    /* test esi, ecx */ /* 0x1504CC8B: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CCA7; /* 0x1504CC8D: jne 0x1504cca7 */
L_1504CC8F:
    /* test ecx, 0x00074000u */ /* 0x1504CC8F: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CC9F; /* 0x1504CC95: jne 0x1504cc9f */
L_1504CC97:
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1504CC97: mov byte ptr [ebp - 1], al */
    /* cmp MEM32(ebp + (-0x24)), esi */ /* 0x1504CC9A: cmp dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CCA7; /* 0x1504CC9D: je 0x1504cca7 */
L_1504CC9F:
    SET_LO8(edx, LO8(eax)); /* 0x1504CC9F: mov dl, al */
    _flag_a = (uint32_t)((LO8(edx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0x80u)) << 24;
    SET_LO8(edx, LO8(edx) | 0x80u); /* 0x1504CCA1: or dl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1504CCA4: mov byte ptr [ebp - 1], dl */
L_1504CCA7:
    eax = ecx; /* 0x1504CCA7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1504CCA9: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1504CCAC: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CD10; /* 0x1504CCAE: je 0x1504cd10 */
L_1504CCB0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504CCB0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CCEC; /* 0x1504CCB3: je 0x1504ccec */
L_1504CCB5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504CCB5: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CCE5; /* 0x1504CCB8: je 0x1504cce5 */
L_1504CCBA:
    RECOMP_CALL(sub_150363E0); /* 0x1504CCBA: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504CCBF: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1504CCC1: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1504CCC4: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504CCC7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504CCCC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504CCCE: pop esi */
    PUSH32(esp, ebx); /* 0x1504CCCF: push ebx */
    PUSH32(esp, ebx); /* 0x1504CCD0: push ebx */
    PUSH32(esp, ebx); /* 0x1504CCD1: push ebx */
    PUSH32(esp, ebx); /* 0x1504CCD2: push ebx */
    PUSH32(esp, ebx); /* 0x1504CCD3: push ebx */
    MEM32(eax) = esi; /* 0x1504CCD4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504CCD6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504CCDB: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504CCDE: mov eax, esi */
    goto L_1504D3D4; /* 0x1504CCE0: jmp 0x1504d3d4 */
L_1504CCE5:
    esi = 0xC0000000u; /* 0x1504CCE5: mov esi, 0xc0000000 */
    goto L_1504CD15; /* 0x1504CCEA: jmp 0x1504cd15 */
L_1504CCEC:
    esi = ecx; /* 0x1504CCEC: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00070000u);
    esi = esi & 0x00070000u; /* 0x1504CCEE: and esi, 0x70000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1504CCF4: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1504CCF6: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1504CCF8: neg esi */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 8 */ /* 0x1504CCFA: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504CCFD: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1504CD00: movzx eax, al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1504CD03: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((esi) >> 1) & 1u); /* 0x1504CD05: shl esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 31u; /* 0x1504CD05: shl esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40000000u; /* 0x1504CD08: add esi, 0x40000000 */
    _flag_k = FK_ADD;
    goto L_1504CD15; /* 0x1504CD0E: jmp 0x1504cd15 */
L_1504CD10:
    esi = 0x80000000u; /* 0x1504CD10: mov esi, 0x80000000 */
L_1504CD15:
    eax = MEM32(ebp + 0x18); /* 0x1504CD15: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1504CD18: push edi */
    PUSH32(esp, 0x10u); /* 0x1504CD19: push 0x10 */
    edi = POP32_VAL(esp); /* 0x1504CD1B: pop edi */
    MEM32(ebp + (-0x18)) = esi; /* 0x1504CD1C: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x8)) = 1; /* 0x1504CD1F: mov dword ptr [ebp - 8], 1 */
    PUSH32(esp, 2); /* 0x1504CD26: push 2 */
    edx = POP32_VAL(esp); /* 0x1504CD28: pop edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1504CD29: mov dword ptr [ebp - 0x28], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504CD2C: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CD5F; /* 0x1504CD2E: je 0x1504cd5f */
L_1504CD30:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504CD30: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CD5A; /* 0x1504CD32: je 0x1504cd5a */
L_1504CD34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504CD34: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CD56; /* 0x1504CD36: je 0x1504cd56 */
L_1504CD38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504CD38: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504CD51; /* 0x1504CD3A: je 0x1504cd51 */
L_1504CD3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x40u; /* 0x1504CD3C: sub eax, 0x40 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504CDB9; /* 0x1504CD3F: jne 0x1504cdb9 */
L_1504CD41:
    /* cmp esi, 0x80000000u */ /* 0x1504CD41: cmp esi, 0x80000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504CD47: sete al */
    MEM32(ebp + (-0xC)) = eax; /* 0x1504CD4A: mov dword ptr [ebp - 0xc], eax */
    edi = eax; /* 0x1504CD4D: mov edi, eax */
    goto L_1504CD64; /* 0x1504CD4F: jmp 0x1504cd64 */
L_1504CD51:
    PUSH32(esp, 3); /* 0x1504CD51: push 3 */
    edi = POP32_VAL(esp); /* 0x1504CD53: pop edi */
    goto L_1504CD61; /* 0x1504CD54: jmp 0x1504cd61 */
L_1504CD56:
    edi = edx; /* 0x1504CD56: mov edi, edx */
    goto L_1504CD61; /* 0x1504CD58: jmp 0x1504cd61 */
L_1504CD5A:
    edi = MEM32(ebp + (-0x8)); /* 0x1504CD5A: mov edi, dword ptr [ebp - 8] */
    goto L_1504CD61; /* 0x1504CD5D: jmp 0x1504cd61 */
L_1504CD5F:
    edi = ebx; /* 0x1504CD5F: mov edi, ebx */
L_1504CD61:
    MEM32(ebp + (-0xC)) = edi; /* 0x1504CD61: mov dword ptr [ebp - 0xc], edi */
L_1504CD64:
    eax = ecx; /* 0x1504CD64: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1504CD66: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x400u */ /* 0x1504CD6B: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504CDA4; /* 0x1504CD70: ja 0x1504cda4 */
L_1504CD72:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CD9B; /* 0x1504CD72: je 0x1504cd9b */
L_1504CD74:
    /* test eax, eax */ /* 0x1504CD74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CD9B; /* 0x1504CD76: je 0x1504cd9b */
L_1504CD78:
    /* cmp eax, 0x100u */ /* 0x1504CD78: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CD92; /* 0x1504CD7D: je 0x1504cd92 */
L_1504CD7F:
    /* cmp eax, 0x200u */ /* 0x1504CD7F: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CDE4; /* 0x1504CD84: je 0x1504cde4 */
L_1504CD86:
    /* cmp eax, 0x300u */ /* 0x1504CD86: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CDB9; /* 0x1504CD8B: jne 0x1504cdb9 */
L_1504CD8D:
    MEM32(ebp + (-0x10)) = edx; /* 0x1504CD8D: mov dword ptr [ebp - 0x10], edx */
    goto L_1504CDF3; /* 0x1504CD90: jmp 0x1504cdf3 */
L_1504CD92:
    MEM32(ebp + (-0x10)) = 4; /* 0x1504CD92: mov dword ptr [ebp - 0x10], 4 */
    goto L_1504CDF3; /* 0x1504CD99: jmp 0x1504cdf3 */
L_1504CD9B:
    MEM32(ebp + (-0x10)) = 3; /* 0x1504CD9B: mov dword ptr [ebp - 0x10], 3 */
    goto L_1504CDF3; /* 0x1504CDA2: jmp 0x1504cdf3 */
L_1504CDA4:
    /* cmp eax, 0x500u */ /* 0x1504CDA4: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CDED; /* 0x1504CDA9: je 0x1504cded */
L_1504CDAB:
    /* cmp eax, 0x600u */ /* 0x1504CDAB: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CDE4; /* 0x1504CDB0: je 0x1504cde4 */
L_1504CDB2:
    /* cmp eax, 0x700u */ /* 0x1504CDB2: cmp eax, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504CDED; /* 0x1504CDB7: je 0x1504cded */
L_1504CDB9:
    RECOMP_CALL(sub_150363E0); /* 0x1504CDB9: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504CDBE: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1504CDC0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1504CDC3: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504CDC6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504CDCB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504CDCD: pop esi */
    PUSH32(esp, ebx); /* 0x1504CDCE: push ebx */
    PUSH32(esp, ebx); /* 0x1504CDCF: push ebx */
    PUSH32(esp, ebx); /* 0x1504CDD0: push ebx */
    PUSH32(esp, ebx); /* 0x1504CDD1: push ebx */
    PUSH32(esp, ebx); /* 0x1504CDD2: push ebx */
    MEM32(eax) = esi; /* 0x1504CDD3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504CDD5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504CDDA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1504CDDD: mov eax, esi */
    goto L_1504D3D3; /* 0x1504CDDF: jmp 0x1504d3d3 */
L_1504CDE4:
    MEM32(ebp + (-0x10)) = 5; /* 0x1504CDE4: mov dword ptr [ebp - 0x10], 5 */
    goto L_1504CDF3; /* 0x1504CDEB: jmp 0x1504cdf3 */
L_1504CDED:
    eax = MEM32(ebp + (-0x8)); /* 0x1504CDED: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1504CDF0: mov dword ptr [ebp - 0x10], eax */
L_1504CDF3:
    edx = 0x80u; /* 0x1504CDF3: mov edx, 0x80 */
    /* test ecx, 0x100u */ /* 0x1504CDF8: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CE10; /* 0x1504CDFE: je 0x1504ce10 */
L_1504CE00:
    SET_LO8(eax, MEM8(0x150BDFAC)); /* 0x1504CE00: mov al, byte ptr [0x150bdfac] */
    SET_LO8(eax, ~LO8(eax)); /* 0x1504CE05: not al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x1C)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(ebp + 0x1C)); /* 0x1504CE07: and al, byte ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(edx), LO8(eax) */ /* 0x1504CE0A: test dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x8)); } /* 0x1504CE0C: cmove edx, dword ptr [ebp - 8] */
L_1504CE10:
    /* test LO8(ecx), 0x40u */ /* 0x1504CE10: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CE2A; /* 0x1504CE13: je 0x1504ce2a */
L_1504CE15:
    _flag_a = (uint32_t)((esi | 0x00010000u)); _flag_b = (uint32_t)((esi | 0x00010000u));
    esi = esi | 0x00010000u; /* 0x1504CE15: or esi, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0x04000000u)); _flag_b = (uint32_t)((edx | 0x04000000u));
    edx = edx | 0x04000000u; /* 0x1504CE1B: or edx, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 4)); _flag_b = (uint32_t)((edi | 4));
    edi = edi | 4; /* 0x1504CE21: or edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = esi; /* 0x1504CE24: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1504CE27: mov dword ptr [ebp - 0xc], edi */
L_1504CE2A:
    edi = edx; /* 0x1504CE2A: mov edi, edx */
    _flag_a = (uint32_t)((edi | 0x100u)); _flag_b = (uint32_t)((edi | 0x100u));
    edi = edi | 0x100u; /* 0x1504CE2C: or edi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, 0x1000u */ /* 0x1504CE32: test ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edi = edx; } /* 0x1504CE38: cmove edi, edx */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504CE3B: mov dword ptr [ebp - 0x20], edi */
    /* test LO8(ecx), 0x20u */ /* 0x1504CE3E: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CE4B; /* 0x1504CE41: je 0x1504ce4b */
L_1504CE43:
    _flag_a = (uint32_t)((edi | 0x08000000u)); _flag_b = (uint32_t)((edi | 0x08000000u));
    edi = edi | 0x08000000u; /* 0x1504CE43: or edi, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504CE56; /* 0x1504CE49: jmp 0x1504ce56 */
L_1504CE4B:
    /* test LO8(ecx), 0x10u */ /* 0x1504CE4B: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CE59; /* 0x1504CE4E: je 0x1504ce59 */
L_1504CE50:
    _flag_a = (uint32_t)((edi | 0x10000000u)); _flag_b = (uint32_t)((edi | 0x10000000u));
    edi = edi | 0x10000000u; /* 0x1504CE50: or edi, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504CE56:
    MEM32(ebp + (-0x20)) = edi; /* 0x1504CE56: mov dword ptr [ebp - 0x20], edi */
L_1504CE59:
    RECOMP_CALL(sub_1504BAF6); /* 0x1504CE59: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1504CE5E: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi) = eax; /* 0x1504CE61: mov dword ptr [edi], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504CE63: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CE83; /* 0x1504CE66: jne 0x1504ce83 */
L_1504CE68:
    RECOMP_CALL(sub_150363E0); /* 0x1504CE68: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504CE6D: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1504CE6F: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504CE72: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x18u); /* 0x1504CE77: push 0x18 */
    ecx = POP32_VAL(esp); /* 0x1504CE79: pop ecx */
    MEM32(eax) = ecx; /* 0x1504CE7A: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1504CE7C: mov eax, ecx */
    goto L_1504D3D3; /* 0x1504CE7E: jmp 0x1504d3d3 */
L_1504CE83:
    eax = MEM32(ebp + 0x8); /* 0x1504CE83: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1504CE86: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x1504CE89: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504CE8A: push dword ptr [ebp - 0x20] */
    MEM32(eax) = ecx; /* 0x1504CE8D: mov dword ptr [eax], ecx */
    eax = ebp + (-0x34); /* 0x1504CE8F: lea eax, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504CE92: push dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1504CE95: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1504CE96: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1504CE99: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CE9A: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00E4)); /* 0x1504CE9D: call dword ptr [0x150c00e4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504CEA3: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504CEA6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CF1B; /* 0x1504CEA9: jne 0x1504cf1b */
L_1504CEAB:
    ecx = 0xC0000000u; /* 0x1504CEAB: mov ecx, 0xc0000000 */
    eax = esi; /* 0x1504CEB0: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1504CEB2: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1504CEB4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CEE9; /* 0x1504CEB6: jne 0x1504cee9 */
L_1504CEB8:
    eax = MEM32(ebp + (-0x8)); /* 0x1504CEB8: mov eax, dword ptr [ebp - 8] */
    /* test MEM8(ebp + 0x14), LO8(eax) */ /* 0x1504CEBB: test byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504CEE9; /* 0x1504CEBE: je 0x1504cee9 */
L_1504CEC0:
    PUSH32(esp, ebx); /* 0x1504CEC0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504CEC1: push dword ptr [ebp - 0x20] */
    eax = ebp + (-0x34); /* 0x1504CEC4: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1504CEC7: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504CECD: push dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1504CED0: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, eax); /* 0x1504CED3: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1504CED4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1504CED7: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504CED8: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00E4)); /* 0x1504CEDB: call dword ptr [0x150c00e4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504CEE1: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504CEE4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CF1B; /* 0x1504CEE7: jne 0x1504cf1b */
L_1504CEE9:
    ecx = MEM32(edi); /* 0x1504CEE9: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504CEEB: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504CEED: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504CEF0: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504CEF3: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504CEF6: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504CEFD: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504CF02: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504CF08: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504CF09: call 0x150363fb */
    RECOMP_FLAGS_IN();
L_1504CF0E:
    ecx = POP32_VAL(esp); /* 0x1504CF0E: pop ecx */
L_1504CF0F:
    RECOMP_CALL(sub_15036430); /* 0x1504CF0F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1504CF14: mov ebx, dword ptr [eax] */
    goto L_1504D3D1; /* 0x1504CF16: jmp 0x1504d3d1 */
L_1504CF1B:
    PUSH32(esp, eax); /* 0x1504CF1B: push eax */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1504CF1C: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504CF22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CF68; /* 0x1504CF24: jne 0x1504cf68 */
L_1504CF26:
    ecx = MEM32(edi); /* 0x1504CF26: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504CF28: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504CF2A: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504CF2D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504CF30: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504CF33: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504CF3A: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504CF3F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504CF45: mov esi, eax */
    PUSH32(esp, esi); /* 0x1504CF47: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x1504CF48: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504CF4D: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504CF4E: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504CF51: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1504CF57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504CF0F; /* 0x1504CF59: jne 0x1504cf0f */
L_1504CF5B:
    RECOMP_CALL(sub_15036430); /* 0x1504CF5B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x1504CF60: mov dword ptr [eax], 0xd */
    RECOMP_BACKEDGE();
    goto L_1504CF0F; /* 0x1504CF66: jmp 0x1504cf0f */
L_1504CF68:
    /* cmp eax, 2 */ /* 0x1504CF68: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CF73; /* 0x1504CF6B: jne 0x1504cf73 */
L_1504CF6D:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 0x40u); /* 0x1504CF6D: or byte ptr [ebp - 1], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1504CF7C; /* 0x1504CF71: jmp 0x1504cf7c */
L_1504CF73:
    /* cmp eax, 3 */ /* 0x1504CF73: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CF7C; /* 0x1504CF76: jne 0x1504cf7c */
L_1504CF78:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 8); /* 0x1504CF78: or byte ptr [ebp - 1], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504CF7C:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504CF7C: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(edi)); /* 0x1504CF7F: push dword ptr [edi] */
    RECOMP_CALL(sub_1504BF76); /* 0x1504CF81: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504CF86: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504CF87: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504CF88: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504CF9E; /* 0x1504CF8B: jne 0x1504cf9e */
L_1504CF8D:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504CF8D: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504CF90: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504CF96: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504D3D3; /* 0x1504CF99: jmp 0x1504d3d3 */
L_1504CF9E:
    ecx = MEM32(edi); /* 0x1504CF9E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504CFA0: mov eax, ecx */
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1504CFA2: mov dl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504CFA5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x8)))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x8)))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(ebp + (-0x8))); /* 0x1504CFA8: or dl, byte ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504CFAB: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504CFAE: imul ecx, ecx, 0x24 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1504CFB1: mov byte ptr [ebp - 1], dl */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504CFB4: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1504CFBB: mov byte ptr [eax + ecx + 4], dl */
    ecx = MEM32(edi); /* 0x1504CFBF: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504CFC1: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504CFC3: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504CFC6: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504CFC9: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504CFCC: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504CFD3: and dword ptr [eax + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, LO8(edx)); /* 0x1504CFD8: mov al, dl */
    ecx = MEM32(ebp + 0x14); /* 0x1504CFDA: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC8u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC8u); /* 0x1504CFDD: and al, 0xc8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x1504CFDF: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D061; /* 0x1504CFE1: jne 0x1504d061 */
L_1504CFE3:
    /* test LO8(ecx), 2 */ /* 0x1504CFE3: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D061; /* 0x1504CFE6: je 0x1504d061 */
L_1504CFE8:
    PUSH32(esp, 2); /* 0x1504CFE8: push 2 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504CFEA: push -1 */
    PUSH32(esp, MEM32(edi)); /* 0x1504CFEC: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504CFEE: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504CFF3: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x1504CFF6: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504CFF9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D017; /* 0x1504CFFC: jne 0x1504d017 */
L_1504CFFE:
    RECOMP_CALL(sub_150363E0); /* 0x1504CFFE: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x83u */ /* 0x1504D003: cmp dword ptr [eax], 0x83 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D05B; /* 0x1504D009: je 0x1504d05b */
L_1504D00B:
    PUSH32(esp, MEM32(edi)); /* 0x1504D00B: push dword ptr [edi] */
    RECOMP_CALL(sub_15049E7E); /* 0x1504D00D: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1504CF0E; /* 0x1504D012: jmp 0x1504cf0e */
L_1504D017:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1504D017: push dword ptr [ebp - 8] */
    eax = ebp + (-0x3); /* 0x1504D01A: lea eax, [ebp - 3] */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x1504D01D: mov byte ptr [ebp - 3], bl */
    PUSH32(esp, eax); /* 0x1504D020: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504D021: push dword ptr [edi] */
    RECOMP_CALL(sub_1504D8AE); /* 0x1504D023: call 0x1504d8ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D028: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504D02B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D04A; /* 0x1504D02D: jne 0x1504d04a */
L_1504D02F:
    /* cmp MEM8(ebp + (-0x3)), 0x1Au */ /* 0x1504D02F: cmp byte ptr [ebp - 3], 0x1a */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3))) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D04A; /* 0x1504D033: jne 0x1504d04a */
L_1504D035:
    eax = MEM32(ebp + (-0x14)); /* 0x1504D035: mov eax, dword ptr [ebp - 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504D038: cdq  */
    PUSH32(esp, edx); /* 0x1504D039: push edx */
    PUSH32(esp, eax); /* 0x1504D03A: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504D03B: push dword ptr [edi] */
    RECOMP_CALL(sub_15049AA2); /* 0x1504D03D: call 0x15049aa2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D042: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D045: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D048: je 0x1504d00b */
L_1504D04A:
    PUSH32(esp, ebx); /* 0x1504D04A: push ebx */
    PUSH32(esp, ebx); /* 0x1504D04B: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D04C: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504D04E: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D053: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D056: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D059: je 0x1504d00b */
L_1504D05B:
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1504D05B: mov dl, byte ptr [ebp - 1] */
    ecx = MEM32(ebp + 0x14); /* 0x1504D05E: mov ecx, dword ptr [ebp + 0x14] */
L_1504D061:
    /* test LO8(edx), LO8(edx) */ /* 0x1504D061: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1504D2D2; /* 0x1504D063: jns 0x1504d2d2 */
L_1504D069:
    /* test ecx, 0x00074000u */ /* 0x1504D069: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D088; /* 0x1504D06F: jne 0x1504d088 */
L_1504D071:
    eax = MEM32(ebp + (-0x24)); /* 0x1504D071: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x1504D074: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D083; /* 0x1504D079: jne 0x1504d083 */
L_1504D07B:
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1504D07B: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504D085; /* 0x1504D081: jmp 0x1504d085 */
L_1504D083:
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504D083: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504D085:
    MEM32(ebp + 0x14) = ecx; /* 0x1504D085: mov dword ptr [ebp + 0x14], ecx */
L_1504D088:
    eax = ecx; /* 0x1504D088: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x1504D08A: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x4000u */ /* 0x1504D08F: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0E3; /* 0x1504D094: je 0x1504d0e3 */
L_1504D096:
    /* cmp eax, 0x00010000u */ /* 0x1504D096: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0CB; /* 0x1504D09B: je 0x1504d0cb */
L_1504D09D:
    /* cmp eax, 0x00014000u */ /* 0x1504D09D: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0CB; /* 0x1504D0A2: je 0x1504d0cb */
L_1504D0A4:
    /* cmp eax, 0x00020000u */ /* 0x1504D0A4: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0C5; /* 0x1504D0A9: je 0x1504d0c5 */
L_1504D0AB:
    /* cmp eax, 0x00024000u */ /* 0x1504D0AB: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0C5; /* 0x1504D0B0: je 0x1504d0c5 */
L_1504D0B2:
    /* cmp eax, 0x00040000u */ /* 0x1504D0B2: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D0C0; /* 0x1504D0B7: je 0x1504d0c0 */
L_1504D0B9:
    /* cmp eax, 0x00044000u */ /* 0x1504D0B9: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D0E6; /* 0x1504D0BE: jne 0x1504d0e6 */
L_1504D0C0:
    eax = MEM32(ebp + (-0x8)); /* 0x1504D0C0: mov eax, dword ptr [ebp - 8] */
    goto L_1504D0DE; /* 0x1504D0C3: jmp 0x1504d0de */
L_1504D0C5:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1504D0C5: mov byte ptr [ebp - 2], 2 */
    goto L_1504D0E6; /* 0x1504D0C9: jmp 0x1504d0e6 */
L_1504D0CB:
    eax = ecx; /* 0x1504D0CB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x1504D0CD: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1504D0D2: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504D0D7: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1504D0DA: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x1504D0DC: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504D0DE:
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1504D0DE: mov byte ptr [ebp - 2], al */
    goto L_1504D0E6; /* 0x1504D0E1: jmp 0x1504d0e6 */
L_1504D0E3:
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1504D0E3: mov byte ptr [ebp - 2], bl */
L_1504D0E6:
    /* test ecx, 0x00070000u */ /* 0x1504D0E6: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D0EC: je 0x1504d2d2 */
L_1504D0F2:
    MEM32(ebp + (-0x14)) = ebx; /* 0x1504D0F2: mov dword ptr [ebp - 0x14], ebx */
    /* test LO8(edx), 0x40u */ /* 0x1504D0F5: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D0F8: jne 0x1504d2d2 */
L_1504D0FE:
    eax = 0xC0000000u; /* 0x1504D0FE: mov eax, 0xc0000000 */
    ecx = 0xFEFFu; /* 0x1504D103: mov ecx, 0xfeff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1504D108: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x40000000u */ /* 0x1504D10A: cmp esi, 0x40000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D259; /* 0x1504D110: je 0x1504d259 */
L_1504D116:
    /* cmp esi, 0x80000000u */ /* 0x1504D116: cmp esi, 0x80000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D193; /* 0x1504D11C: je 0x1504d193 */
L_1504D11E:
    /* cmp esi, eax */ /* 0x1504D11E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D120: jne 0x1504d2d2 */
L_1504D126:
    eax = MEM32(ebp + (-0x10)); /* 0x1504D126: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D129: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D241; /* 0x1504D12C: je 0x1504d241 */
L_1504D132:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D132: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D241; /* 0x1504D135: je 0x1504d241 */
L_1504D13B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D13B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D153; /* 0x1504D13E: je 0x1504d153 */
L_1504D140:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D140: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D153; /* 0x1504D143: je 0x1504d153 */
L_1504D145:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D145: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D241; /* 0x1504D148: je 0x1504d241 */
L_1504D14E:
    goto L_1504D2D2; /* 0x1504D14E: jmp 0x1504d2d2 */
L_1504D153:
    PUSH32(esp, 2); /* 0x1504D153: push 2 */
    PUSH32(esp, ebx); /* 0x1504D155: push ebx */
    PUSH32(esp, ebx); /* 0x1504D156: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D157: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504D159: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504D15E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1504D161: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D184; /* 0x1504D163: je 0x1504d184 */
L_1504D165:
    PUSH32(esp, ebx); /* 0x1504D165: push ebx */
    PUSH32(esp, ebx); /* 0x1504D166: push ebx */
    PUSH32(esp, ebx); /* 0x1504D167: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D168: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504D16A: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504D16F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504D171: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D174: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D177: je 0x1504d00b */
L_1504D17D:
    eax = MEM32(ebp + (-0x8)); /* 0x1504D17D: mov eax, dword ptr [ebp - 8] */
    esi = ebx; /* 0x1504D180: mov esi, ebx */
    goto L_1504D189; /* 0x1504D182: jmp 0x1504d189 */
L_1504D184:
    esi = MEM32(ebp + (-0x8)); /* 0x1504D184: mov esi, dword ptr [ebp - 8] */
    eax = ebx; /* 0x1504D187: mov eax, ebx */
L_1504D189:
    /* test eax, eax */ /* 0x1504D189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D234; /* 0x1504D18B: je 0x1504d234 */
L_1504D191:
    goto L_1504D195; /* 0x1504D191: jmp 0x1504d195 */
L_1504D193:
    esi = ebx; /* 0x1504D193: mov esi, ebx */
L_1504D195:
    PUSH32(esp, 3); /* 0x1504D195: push 3 */
    eax = ebp + (-0x14); /* 0x1504D197: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504D19A: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504D19B: push dword ptr [edi] */
    RECOMP_CALL(sub_1504D8AE); /* 0x1504D19D: call 0x1504d8ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D1A2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504D1A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504D1B2; /* 0x1504D1A7: jle 0x1504d1b2 */
L_1504D1A9:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x1504D1A9: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D1BB; /* 0x1504D1AC: jne 0x1504d1bb */
L_1504D1AE:
    esi = ebx; /* 0x1504D1AE: mov esi, ebx */
    goto L_1504D1BB; /* 0x1504D1B0: jmp 0x1504d1bb */
L_1504D1B2:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D1B2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D1B5: je 0x1504d00b */
L_1504D1BB:
    ecx = MEM32(ebp + (-0x14)); /* 0x1504D1BB: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 2); /* 0x1504D1BE: push 2 */
    edx = POP32_VAL(esp); /* 0x1504D1C0: pop edx */
    /* cmp eax, edx */ /* 0x1504D1C1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D1DA; /* 0x1504D1C3: je 0x1504d1da */
L_1504D1C5:
    /* cmp eax, 3 */ /* 0x1504D1C5: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D21F; /* 0x1504D1C8: jne 0x1504d21f */
L_1504D1CA:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x1504D1CA: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D1DA; /* 0x1504D1D0: jne 0x1504d1da */
L_1504D1D2:
    eax = MEM32(ebp + (-0x8)); /* 0x1504D1D2: mov eax, dword ptr [ebp - 8] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1504D1D5: mov byte ptr [ebp - 2], al */
    goto L_1504D234; /* 0x1504D1D8: jmp 0x1504d234 */
L_1504D1DA:
    eax = (uint32_t)LO16(ecx); /* 0x1504D1DA: movzx eax, cx */
    /* cmp eax, 0xFFFEu */ /* 0x1504D1DD: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D1FD; /* 0x1504D1E2: jne 0x1504d1fd */
L_1504D1E4:
    PUSH32(esp, MEM32(edi)); /* 0x1504D1E4: push dword ptr [edi] */
    RECOMP_CALL(sub_15049E7E); /* 0x1504D1E6: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D1EB: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x1504D1EC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1504D1F1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1504D1F3: pop esi */
    ebx = esi; /* 0x1504D1F4: mov ebx, esi */
    MEM32(eax) = esi; /* 0x1504D1F6: mov dword ptr [eax], esi */
    goto L_1504D3D1; /* 0x1504D1F8: jmp 0x1504d3d1 */
L_1504D1FD:
    /* cmp eax, 0xFEFFu */ /* 0x1504D1FD: cmp eax, 0xfeff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D21F; /* 0x1504D202: jne 0x1504d21f */
L_1504D204:
    PUSH32(esp, ebx); /* 0x1504D204: push ebx */
    PUSH32(esp, edx); /* 0x1504D205: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D206: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504D208: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D20D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D210: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D213: je 0x1504d00b */
L_1504D219:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1504D219: mov byte ptr [ebp - 2], 2 */
    goto L_1504D234; /* 0x1504D21D: jmp 0x1504d234 */
L_1504D21F:
    PUSH32(esp, ebx); /* 0x1504D21F: push ebx */
    PUSH32(esp, ebx); /* 0x1504D220: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D221: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C621); /* 0x1504D223: call 0x1504c621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D228: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D22B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D22E: je 0x1504d00b */
L_1504D234:
    /* test esi, esi */ /* 0x1504D234: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D236: je 0x1504d2d2 */
L_1504D23C:
    ecx = 0xFEFFu; /* 0x1504D23C: mov ecx, 0xfeff */
L_1504D241:
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x1504D241: movzx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1504D245: mov esi, ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1504D247: mov dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D24A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D29F; /* 0x1504D24D: je 0x1504d29f */
L_1504D24F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D24F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D252: jne 0x1504d2d2 */
L_1504D254:
    PUSH32(esp, 2); /* 0x1504D254: push 2 */
    eax = POP32_VAL(esp); /* 0x1504D256: pop eax */
    goto L_1504D2AA; /* 0x1504D257: jmp 0x1504d2aa */
L_1504D259:
    eax = MEM32(ebp + (-0x10)); /* 0x1504D259: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D25C: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D241; /* 0x1504D25F: je 0x1504d241 */
L_1504D261:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D261: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D241; /* 0x1504D264: je 0x1504d241 */
L_1504D266:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D266: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D274; /* 0x1504D269: je 0x1504d274 */
L_1504D26B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D26B: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504D145; /* 0x1504D26E: jne 0x1504d145 */
L_1504D274:
    PUSH32(esp, 2); /* 0x1504D274: push 2 */
    PUSH32(esp, ebx); /* 0x1504D276: push ebx */
    PUSH32(esp, ebx); /* 0x1504D277: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D278: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504D27A: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504D27F: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1504D282: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D23C; /* 0x1504D284: je 0x1504d23c */
L_1504D286:
    PUSH32(esp, ebx); /* 0x1504D286: push ebx */
    PUSH32(esp, ebx); /* 0x1504D287: push ebx */
    PUSH32(esp, ebx); /* 0x1504D288: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1504D289: push dword ptr [edi] */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504D28B: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504D290: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504D292: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D295: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D2D2; /* 0x1504D298: jne 0x1504d2d2 */
L_1504D29A:
    RECOMP_BACKEDGE();
    goto L_1504D00B; /* 0x1504D29A: jmp 0x1504d00b */
L_1504D29F:
    PUSH32(esp, 3); /* 0x1504D29F: push 3 */
    eax = POP32_VAL(esp); /* 0x1504D2A1: pop eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1504D2A2: mov dword ptr [ebp - 0x28], eax */
    ecx = 0x00BFBBEFu; /* 0x1504D2A5: mov ecx, 0xbfbbef */
L_1504D2AA:
    MEM32(ebp + (-0x14)) = ecx; /* 0x1504D2AA: mov dword ptr [ebp - 0x14], ecx */
L_1504D2AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1504D2AD: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1504D2AF: push eax */
    eax = ebp + (-0x14); /* 0x1504D2B0: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1504D2B3: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1504D2B5: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1504D2B6: push dword ptr [edi] */
    RECOMP_CALL(sub_1504EDD0); /* 0x1504D2B8: call 0x1504edd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D2BD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D2C0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D00B; /* 0x1504D2C3: je 0x1504d00b */
L_1504D2C9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1504D2C9: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x28)); /* 0x1504D2CB: mov eax, dword ptr [ebp - 0x28] */
    /* cmp eax, esi */ /* 0x1504D2CE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1504D2AD; /* 0x1504D2D0: jg 0x1504d2ad */
L_1504D2D2:
    ecx = MEM32(edi); /* 0x1504D2D2: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504D2D4: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504D2D6: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504D2D9: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504D2DC: imul esi, ecx, 0x24 */
    edx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504D2DF: mov edx, dword ptr [eax*4 + 0x150bebc0] */
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x1504D2E6: movzx eax, byte ptr [ebp - 2] */
    ecx = MEM32(edx + esi + 0x8); /* 0x1504D2EA: mov ecx, dword ptr [edx + esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x1504D2EE: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504D2F1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + esi + 0x8) = ecx; /* 0x1504D2F3: mov dword ptr [edx + esi + 8], ecx */
    ecx = MEM32(edi); /* 0x1504D2F7: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504D2F9: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504D2FB: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504D2FE: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504D301: imul edx, ecx, 0x24 */
    ecx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504D304: mov ecx, dword ptr [eax*4 + 0x150bebc0] */
    eax = MEM32(ebp + 0x14); /* 0x1504D30B: mov eax, dword ptr [ebp + 0x14] */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x1504D30E: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x1504D30E: shr eax, 0xd */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + edx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + edx + 0x8)));
    eax = eax ^ MEM32(ecx + edx + 0x8); /* 0x1504D311: xor eax, dword ptr [ecx + edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1504D315: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + edx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + edx + 0x8) ^ eax));
    MEM32(ecx + edx + 0x8) = MEM32(ecx + edx + 0x8) ^ eax; /* 0x1504D318: xor dword ptr [ecx + edx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x1)), 0x48u */ /* 0x1504D31C: test byte ptr [ebp - 1], 0x48 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1504D320: mov ecx, dword ptr [ebp + 0x14] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D346; /* 0x1504D323: jne 0x1504d346 */
L_1504D325:
    /* test LO8(ecx), 8 */ /* 0x1504D325: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D346; /* 0x1504D328: je 0x1504d346 */
L_1504D32A:
    ecx = MEM32(edi); /* 0x1504D32A: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504D32C: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504D32E: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504D331: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504D334: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504D337: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1504D33E: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1504D343: mov ecx, dword ptr [ebp + 0x14] */
L_1504D346:
    esi = MEM32(ebp + (-0x18)); /* 0x1504D346: mov esi, dword ptr [ebp - 0x18] */
    edx = 0xC0000000u; /* 0x1504D349: mov edx, 0xc0000000 */
    eax = esi; /* 0x1504D34E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504D350: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1504D352: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D3D1; /* 0x1504D354: jne 0x1504d3d1 */
L_1504D356:
    eax = MEM32(ebp + (-0x8)); /* 0x1504D356: mov eax, dword ptr [ebp - 8] */
    /* test LO8(eax), LO8(ecx) */ /* 0x1504D359: test al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D3D1; /* 0x1504D35B: je 0x1504d3d1 */
L_1504D35D:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1504D35D: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504D360: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504D366: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1504D367: push dword ptr [ebp - 0x20] */
    eax = ebp + (-0x34); /* 0x1504D36A: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1504D36D: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1504D373: push 3 */
    PUSH32(esp, eax); /* 0x1504D375: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1504D376: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1504D379: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504D37A: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x150C00E4)); /* 0x1504D37D: call dword ptr [0x150c00e4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D383: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D3BA; /* 0x1504D386: jne 0x1504d3ba */
L_1504D388:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504D388: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504D38E: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504D38F: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1504D394: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1504D396: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1504D398: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504D39B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x1504D39E: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504D3A1: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1504D3A8: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1504D3AD: push dword ptr [edi] */
    RECOMP_CALL(sub_1504BCCA); /* 0x1504D3AF: call 0x1504bcca */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D3B4: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504CF0E; /* 0x1504D3B5: jmp 0x1504cf0e */
L_1504D3BA:
    edx = MEM32(edi); /* 0x1504D3BA: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1504D3BC: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504D3BE: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1504D3C1: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x24u); /* 0x1504D3C4: imul edx, edx, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504D3C7: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM32(edx + ecx) = eax; /* 0x1504D3CE: mov dword ptr [edx + ecx], eax */
L_1504D3D1:
    eax = ebx; /* 0x1504D3D1: mov eax, ebx */
L_1504D3D3:
    edi = POP32_VAL(esp); /* 0x1504D3D3: pop edi */
L_1504D3D4:
    esi = POP32_VAL(esp); /* 0x1504D3D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504D3D5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504D3D6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D3D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D3E0u);

L_1504D3E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D3E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504D3E2: mov dx, word ptr [esp + 4] */
    SET_LO8(eax, MEM8(esp + 0x8)); /* 0x1504D3E7: mov al, byte ptr [esp + 8] */
    /* out: no port I/O under Win32 */ /* 0x1504D3EB: out dx, al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D3EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D3ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D3EDu);

L_1504D3ED:
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504D3ED: mov dx, word ptr [esp + 4] */
    SET_LO16(eax, MEM16(esp + 0x8)); /* 0x1504D3F2: mov ax, word ptr [esp + 8] */
    /* out: no port I/O under Win32 */ /* 0x1504D3F7: out dx, ax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D3F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D3FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D3FAu);

L_1504D3FA:
    SET_LO16(edx, MEM16(esp + 0x4)); /* 0x1504D3FA: mov dx, word ptr [esp + 4] */
    eax = MEM32(esp + 0x8); /* 0x1504D3FF: mov eax, dword ptr [esp + 8] */
    /* out: no port I/O under Win32 */ /* 0x1504D403: out dx, eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D404: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D410u);

L_1504D410:
    PUSH32(esp, 0x34u); /* 0x1504D410: push 0x34 */
    PUSH32(esp, 0x150B08D0u); /* 0x1504D412: push 0x150b08d0 */
    RECOMP_CALL(sub_1505E988); /* 0x1504D417: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504D41C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504D41E: mov dword ptr [ebp - 0x1c], ebx */
    ecx = MEM32(ebp + 0x8); /* 0x1504D421: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1504D424: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D44F; /* 0x1504D426: jne 0x1504d44f */
L_1504D428:
    RECOMP_CALL(sub_150363E0); /* 0x1504D428: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504D42D: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504D42F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504D434: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x1504D43A: push ebx */
    PUSH32(esp, ebx); /* 0x1504D43B: push ebx */
    PUSH32(esp, ebx); /* 0x1504D43C: push ebx */
    PUSH32(esp, ebx); /* 0x1504D43D: push ebx */
    PUSH32(esp, ebx); /* 0x1504D43E: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1504D43F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504D444: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504D447:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504D447: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504D699; /* 0x1504D44A: jmp 0x1504d699 */
L_1504D44F:
    eax = ecx + 0x4; /* 0x1504D44F: lea eax, [ecx + 4] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1504D452: mov dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1504D455: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x1504D458: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x1504D45B: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, 0xFFFF3F7Fu */ /* 0x1504D45E: test ecx, 0xffff3f7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF3F7Fu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D428; /* 0x1504D464: jne 0x1504d428 */
L_1504D466:
    eax = ecx; /* 0x1504D466: mov eax, ecx */
    edx = 0xC000u; /* 0x1504D468: mov edx, 0xc000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1504D46D: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1504D46F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D428; /* 0x1504D471: je 0x1504d428 */
L_1504D473:
    MEM32(ebp + (-0x44)) = 0xCu; /* 0x1504D473: mov dword ptr [ebp - 0x44], 0xc */
    MEM32(ebp + (-0x40)) = ebx; /* 0x1504D47A: mov dword ptr [ebp - 0x40], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    ecx = ecx & 0x80u; /* 0x1504D47D: and ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = ecx; /* 0x1504D483: mov dword ptr [ebp - 0x34], ecx */
    PUSH32(esp, 0); /* 0x1504D486: push 0 */
    eax = POP32_VAL(esp); /* 0x1504D488: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504D489: sete al */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1504D48C: mov dword ptr [ebp - 0x3c], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504D48F: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x44); /* 0x1504D492: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1504D495: push eax */
    eax = ebp + (-0x30); /* 0x1504D496: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1504D499: push eax */
    eax = ebp + (-0x2C); /* 0x1504D49A: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504D49D: push eax */
    RECOMP_ICALL(MEM32(0x150C01C4)); /* 0x1504D49E: call dword ptr [0x150c01c4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504D4A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D4B7; /* 0x1504D4A6: jne 0x1504d4b7 */
L_1504D4A8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504D4A8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504D4AE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504D4AF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D4B4: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1504D447; /* 0x1504D4B5: jmp 0x1504d447 */
L_1504D4B7:
    RECOMP_CALL(sub_1504BAF6); /* 0x1504D4B7: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504D4BC: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1504D4BE: mov dword ptr [ebp - 0x20], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1504D4C1: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D65A; /* 0x1504D4C4: je 0x1504d65a */
L_1504D4CA:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1504D4CA: mov dword ptr [ebp - 4], ebx */
    edx = esi; /* 0x1504D4CD: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D4CF: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D4D2: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D4D5: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D4D8: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(ecx + eax + 0x4) = (uint8_t)(0x89u); /* 0x1504D4DF: mov byte ptr [ecx + eax + 4], 0x89 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D4E4: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504D4EB: and dword ptr [eax + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D4F0: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFF7u; /* 0x1504D4F7: and dword ptr [eax + ecx + 8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504D4FC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504D623); /* 0x1504D503: call 0x1504d623 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1504BAF6); /* 0x1504D508: call 0x1504baf6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1504D50D: mov edi, eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x1504D50F: mov dword ptr [ebp - 0x28], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1504D512: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D640; /* 0x1504D515: je 0x1504d640 */
L_1504D51B:
    MEM32(ebp + (-0x24)) = ebx; /* 0x1504D51B: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1504D51E: mov dword ptr [ebp - 4], 1 */
    edx = edi; /* 0x1504D525: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D527: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D52A: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D52D: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D530: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(ecx + eax + 0x4) = (uint8_t)(0x89u); /* 0x1504D537: mov byte ptr [ecx + eax + 4], 0x89 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D53C: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFFCu; /* 0x1504D543: and dword ptr [eax + ecx + 8], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D548: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(eax + ecx + 0x8) = MEM32(eax + ecx + 0x8) & 0xFFFFFFF7u; /* 0x1504D54F: and dword ptr [eax + ecx + 8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504D554: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504D633); /* 0x1504D55B: call 0x1504d633 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1504D560: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1504D563: push eax */
    RECOMP_CALL(sub_1504B7B0); /* 0x1504D564: call 0x1504b7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D569: pop ecx */
    /* test eax, eax */ /* 0x1504D56A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D57B; /* 0x1504D56C: je 0x1504d57b */
L_1504D56E:
    PUSH32(esp, ebx); /* 0x1504D56E: push ebx */
    PUSH32(esp, ebx); /* 0x1504D56F: push ebx */
    PUSH32(esp, ebx); /* 0x1504D570: push ebx */
    PUSH32(esp, ebx); /* 0x1504D571: push ebx */
    PUSH32(esp, ebx); /* 0x1504D572: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504D573: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504D578: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504D57B:
    ecx = 0x8000u; /* 0x1504D57B: mov ecx, 0x8000 */
    eax = MEM32(ebp + 0x10); /* 0x1504D580: mov eax, dword ptr [ebp + 0x10] */
    /* test ecx, eax */ /* 0x1504D583: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D593; /* 0x1504D585: jne 0x1504d593 */
L_1504D587:
    /* test eax, 0x4000u */ /* 0x1504D587: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D5C5; /* 0x1504D58C: jne 0x1504d5c5 */
L_1504D58E:
    /* cmp MEM32(ebp + (-0x24)), ecx */ /* 0x1504D58E: cmp dword ptr [ebp - 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D5C5; /* 0x1504D591: jne 0x1504d5c5 */
L_1504D593:
    edx = esi; /* 0x1504D593: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D595: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504D598: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D59A: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D59D: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D5A0: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0x7Fu); /* 0x1504D5A7: and byte ptr [eax + ecx + 4], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = edi; /* 0x1504D5AC: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D5AE: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edi; /* 0x1504D5B1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D5B3: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D5B6: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D5B9: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0x7Fu); /* 0x1504D5C0: and byte ptr [eax + ecx + 4], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504D5C5:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1504D5C5: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D5FD; /* 0x1504D5C9: je 0x1504d5fd */
L_1504D5CB:
    edx = esi; /* 0x1504D5CB: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D5CD: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504D5D0: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D5D2: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D5D5: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D5D8: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x10u); /* 0x1504D5DF: or byte ptr [eax + ecx + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = edi; /* 0x1504D5E4: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D5E6: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edi; /* 0x1504D5E9: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D5EB: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D5EE: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D5F1: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x10u); /* 0x1504D5F8: or byte ptr [eax + ecx + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504D5FD:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1504D5FD: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1504D600: push esi */
    RECOMP_CALL(sub_1504BF76); /* 0x1504D601: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1504D606: push dword ptr [ebp - 0x30] */
    PUSH32(esp, edi); /* 0x1504D609: push edi */
    RECOMP_CALL(sub_1504BF76); /* 0x1504D60A: call 0x1504bf76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504D60F: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1504D612: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504D617: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1504D619: mov eax, dword ptr [ebp - 0x1c] */
    goto L_1504D660; /* 0x1504D61C: jmp 0x1504d660 */
L_1504D640:
    edx = esi; /* 0x1504D640: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D642: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = esi; /* 0x1504D645: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D647: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D64A: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D64D: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1504D654: mov byte ptr [eax + ecx + 4], bl */
    goto L_1504D65D; /* 0x1504D658: jmp 0x1504d65d */
L_1504D65A:
    edi = MEM32(ebp + (-0x28)); /* 0x1504D65A: mov edi, dword ptr [ebp - 0x28] */
L_1504D65D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D65D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504D65F: inc eax */
    _flag_k = FK_INC;
L_1504D660:
    /* test eax, eax */ /* 0x1504D660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D68D; /* 0x1504D662: je 0x1504d68d */
L_1504D664:
    RECOMP_CALL(sub_15036430); /* 0x1504D664: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1504D669: mov dword ptr [eax], 0x18 */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1504D66F: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504D672: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1504D678: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504D67B: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150363E0); /* 0x1504D681: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504D686: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_1504D447; /* 0x1504D688: jmp 0x1504d447 */
L_1504D68D:
    eax = MEM32(ebp + 0x8); /* 0x1504D68D: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1504D690: mov dword ptr [eax], esi */
    eax = MEM32(ebp + (-0x38)); /* 0x1504D692: mov eax, dword ptr [ebp - 0x38] */
    MEM32(eax) = edi; /* 0x1504D695: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D697: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504D699:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504D699: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504D69C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504D6A3: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504D6A4: pop edi */
    esi = POP32_VAL(esp); /* 0x1504D6A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504D6A6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504D6A7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D6A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D623(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D623u);

L_1504D623:
    PUSH32(esp, esi); /* 0x1504D623: push esi */
    RECOMP_CALL(sub_1504C004); /* 0x1504D624: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D629: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D62A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D633(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D633u);

L_1504D633:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1504D633: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D63F; /* 0x1504D636: je 0x1504d63f */
L_1504D638:
    PUSH32(esp, edi); /* 0x1504D638: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504D639: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D63E: pop ecx */
L_1504D63F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D63F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D6B0u);

L_1504D6B0:
    PUSH32(esp, 0xCu); /* 0x1504D6B0: push 0xc */
    PUSH32(esp, 0x150B08F8u); /* 0x1504D6B2: push 0x150b08f8 */
    RECOMP_CALL(sub_1505E988); /* 0x1504D6B7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1504D6BC: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504D6BE: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D6C3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504D6C4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504D6C8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504D706); /* 0x1504D6CB: call 0x1504d706 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D6D0: pop ecx */
    esi = eax; /* 0x1504D6D1: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504D6D3: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504D6D6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504D6F7); /* 0x1504D6DD: call 0x1504d6f7 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504D6E2: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504D6E4: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504D6E7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504D6EE: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504D6EF: pop edi */
    esi = POP32_VAL(esp); /* 0x1504D6F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504D6F1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504D6F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D6F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D6F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D6F7u);

L_1504D6F7:
    PUSH32(esp, 3); /* 0x1504D6F7: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504D6F9: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D6FE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D6FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D706(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D706u);

L_1504D706:
    edi = edi; /* 0x1504D706: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504D708: push ebp */
    ebp = esp; /* 0x1504D709: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504D70B: push ecx */
    PUSH32(esp, ebx); /* 0x1504D70C: push ebx */
    PUSH32(esp, esi); /* 0x1504D70D: push esi */
    PUSH32(esp, edi); /* 0x1504D70E: push edi */
    RECOMP_CALL(sub_15068820); /* 0x1504D70F: call 0x15068820 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x1504D714: mov bl, byte ptr [ebp + 8] */
    edi = eax; /* 0x1504D717: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D719: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504D71B: inc eax */
    _flag_k = FK_INC;
    esi = edi + 0x4C; /* 0x1504D71C: lea esi, [edi + 0x4c] */
    /* cmp MEM16(edi + 0x52), LO16(eax) */ /* 0x1504D71F: cmp word ptr [edi + 0x52], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x52)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D72A; /* 0x1504D723: jne 0x1504d72a */
L_1504D725:
    MEM8(esi + 0x1) = (uint8_t)(LO8(ebx)); /* 0x1504D725: mov byte ptr [esi + 1], bl */
    goto L_1504D72C; /* 0x1504D728: jmp 0x1504d72c */
L_1504D72A:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1504D72A: mov byte ptr [esi], bl */
L_1504D72C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D72C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x52), LO16(eax) */ /* 0x1504D72E: cmp word ptr [edi + 0x52], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x52)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D747; /* 0x1504D732: jne 0x1504d747 */
L_1504D734:
    eax = (uint32_t)MEM8(esi); /* 0x1504D734: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1504D737: push eax */
    RECOMP_CALL(sub_150316F0); /* 0x1504D738: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D73D: pop ecx */
    /* test eax, eax */ /* 0x1504D73E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D747; /* 0x1504D740: je 0x1504d747 */
L_1504D742:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D742: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504D744: inc eax */
    _flag_k = FK_INC;
    goto L_1504D777; /* 0x1504D745: jmp 0x1504d777 */
L_1504D747:
    eax = (uint32_t)MEM16(edi + 0x52); /* 0x1504D747: movzx eax, word ptr [edi + 0x52] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504D74B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1504D74C: push eax */
    eax = ebp + (-0x4); /* 0x1504D74D: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x1504D750: push esi */
    PUSH32(esp, eax); /* 0x1504D751: push eax */
    RECOMP_CALL(sub_150320D0); /* 0x1504D752: call 0x150320d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D757: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504D75A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504D772; /* 0x1504D75D: je 0x1504d772 */
L_1504D75F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1504D75F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1504A1EA); /* 0x1504D762: call 0x1504a1ea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D767: pop ecx */
    ecx = 0xFFFFu; /* 0x1504D768: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1504D76D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D775; /* 0x1504D770: jne 0x1504d775 */
L_1504D772:
    _flag_a = (uint32_t)((LO8(ebx) | 0xFFu)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0xFFu)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0xFFu); /* 0x1504D772: or bl, 0xff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504D775:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D775: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504D777:
    MEM16(edi + 0x52) = (uint16_t)(LO16(eax)); /* 0x1504D777: mov word ptr [edi + 0x52], ax */
    edi = POP32_VAL(esp); /* 0x1504D77B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504D77C: pop esi */
    eax = (uint32_t)LO8(ebx); /* 0x1504D77D: movzx eax, bl */
    ebx = POP32_VAL(esp); /* 0x1504D780: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504D781: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D782: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D790u);

L_1504D790:
    PUSH32(esp, 0x10u); /* 0x1504D790: push 0x10 */
    PUSH32(esp, 0x150B0918u); /* 0x1504D792: push 0x150b0918 */
    RECOMP_CALL(sub_1505E988); /* 0x1504D797: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504D79C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1504D79F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D7BF; /* 0x1504D7A2: jne 0x1504d7bf */
L_1504D7A4:
    RECOMP_CALL(sub_150363E0); /* 0x1504D7A4: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504D7A9: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x1504D7AC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504D7B1: mov dword ptr [eax], 9 */
L_1504D7B7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504D7B7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504D88A; /* 0x1504D7BA: jmp 0x1504d88a */
L_1504D7BF:
    /* test edi, edi */ /* 0x1504D7BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504D7D2; /* 0x1504D7C1: js 0x1504d7d2 */
L_1504D7C3:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x1504D7C3: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504D7D2; /* 0x1504D7C9: jae 0x1504d7d2 */
L_1504D7CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504D7CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504D7CD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504D7CE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504D7D6; /* 0x1504D7D0: jmp 0x1504d7d6 */
L_1504D7D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504D7D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1504D7D4: mov eax, esi */
L_1504D7D6:
    /* test eax, eax */ /* 0x1504D7D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D7FB; /* 0x1504D7D8: jne 0x1504d7fb */
L_1504D7DA:
    RECOMP_CALL(sub_150363E0); /* 0x1504D7DA: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504D7DF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504D7E1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504D7E6: mov dword ptr [eax], 9 */
L_1504D7EC:
    PUSH32(esp, esi); /* 0x1504D7EC: push esi */
    PUSH32(esp, esi); /* 0x1504D7ED: push esi */
    PUSH32(esp, esi); /* 0x1504D7EE: push esi */
    PUSH32(esp, esi); /* 0x1504D7EF: push esi */
    PUSH32(esp, esi); /* 0x1504D7F0: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504D7F1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504D7F6: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504D7B7; /* 0x1504D7F9: jmp 0x1504d7b7 */
L_1504D7FB:
    ebx = edi; /* 0x1504D7FB: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1504D7FD: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x1504D800: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D802: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D805: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1504D808: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504D80B: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504D812: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D7DA; /* 0x1504D817: je 0x1504d7da */
L_1504D819:
    /* cmp MEM32(ebp + 0x10), 0x7FFFFFFFu */ /* 0x1504D819: cmp dword ptr [ebp + 0x10], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504D836; /* 0x1504D820: jbe 0x1504d836 */
L_1504D822:
    RECOMP_CALL(sub_150363E0); /* 0x1504D822: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504D827: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504D829: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504D82E: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1504D7EC; /* 0x1504D834: jmp 0x1504d7ec */
L_1504D836:
    PUSH32(esp, edi); /* 0x1504D836: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x1504D837: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D83C: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504D83D: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x1504D840: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504D847: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x1504D84A: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D864; /* 0x1504D84F: je 0x1504d864 */
L_1504D851:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504D851: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504D854: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504D857: push edi */
    RECOMP_CALL(sub_1504D8AE); /* 0x1504D858: call 0x1504d8ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504D85D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1504D860: mov esi, eax */
    goto L_1504D879; /* 0x1504D862: jmp 0x1504d879 */
L_1504D864:
    RECOMP_CALL(sub_15036430); /* 0x1504D864: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504D869: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504D86F: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504D874: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504D876: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504D879:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504D879: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504D87C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504D8A0); /* 0x1504D883: call 0x1504d8a0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504D888: mov eax, esi */
L_1504D88A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504D88A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504D88D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504D894: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504D895: pop edi */
    esi = POP32_VAL(esp); /* 0x1504D896: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504D897: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504D898: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D899: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D8A0u);

L_1504D8A0:
    PUSH32(esp, edi); /* 0x1504D8A0: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504D8A1: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504D8A6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504D8A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504D8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504D8AEu);

L_1504D8AE:
    edi = edi; /* 0x1504D8AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504D8B0: push ebp */
    ebp = esp; /* 0x1504D8B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1504D8B3: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504D8B6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504D8B7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504D8BA: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1504D8BB: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1504D8BE: push edi */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1504D8BF: push -2 */
    eax = POP32_VAL(esp); /* 0x1504D8C1: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504D8C2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1504D8C4: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1504D8C7: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x30)) = esi; /* 0x1504D8CA: mov dword ptr [ebp - 0x30], esi */
    /* cmp ebx, eax */ /* 0x1504D8CD: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D8E8; /* 0x1504D8CF: jne 0x1504d8e8 */
L_1504D8D1:
    RECOMP_CALL(sub_150363E0); /* 0x1504D8D1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504D8D6: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036430); /* 0x1504D8D8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504D8DD: mov dword ptr [eax], 9 */
    goto L_1504E173; /* 0x1504D8E3: jmp 0x1504e173 */
L_1504D8E8:
    /* test ebx, ebx */ /* 0x1504D8E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504E154; /* 0x1504D8EA: js 0x1504e154 */
L_1504D8F0:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x1504D8F0: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E154; /* 0x1504D8F6: jae 0x1504e154 */
L_1504D8FC:
    eax = ebx; /* 0x1504D8FC: mov eax, ebx */
    edx = ebx; /* 0x1504D8FE: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504D900: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504D903: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504D903: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504D906: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x18)) = edx; /* 0x1504D909: mov dword ptr [ebp - 0x18], edx */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D90C: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1504D913: mov dword ptr [ebp - 0x28], ecx */
    SET_LO8(eax, MEM8(ecx + eax + 0x4)); /* 0x1504D916: mov al, byte ptr [ecx + eax + 4] */
    /* test LO8(eax), 1 */ /* 0x1504D91A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E154; /* 0x1504D91C: je 0x1504e154 */
L_1504D922:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x1504D922: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504D941; /* 0x1504D928: jbe 0x1504d941 */
L_1504D92A:
    RECOMP_CALL(sub_150363E0); /* 0x1504D92A: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504D92F: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036430); /* 0x1504D931: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504D936: mov dword ptr [eax], 0x16 */
    goto L_1504E166; /* 0x1504D93C: jmp 0x1504e166 */
L_1504D941:
    /* test esi, esi */ /* 0x1504D941: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E150; /* 0x1504D943: je 0x1504e150 */
L_1504D949:
    /* test LO8(eax), 2 */ /* 0x1504D949: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E150; /* 0x1504D94B: jne 0x1504e150 */
L_1504D951:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1504D951: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504D974; /* 0x1504D954: jne 0x1504d974 */
L_1504D956:
    RECOMP_CALL(sub_150363E0); /* 0x1504D956: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504D95B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1504D95D: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504D95F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1504D964: push ebx */
    PUSH32(esp, ebx); /* 0x1504D965: push ebx */
    PUSH32(esp, ebx); /* 0x1504D966: push ebx */
    PUSH32(esp, ebx); /* 0x1504D967: push ebx */
    MEM32(eax) = 0x16u; /* 0x1504D968: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x1504D96E: push ebx */
    goto L_1504E16B; /* 0x1504D96F: jmp 0x1504e16b */
L_1504D974:
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D974: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x1C)) = 4; /* 0x1504D97B: mov dword ptr [ebp - 0x1c], 4 */
    eax = MEM32(ecx + eax + 0x8); /* 0x1504D982: mov eax, dword ptr [ecx + eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1504D986: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1504D989: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D98C: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504D9A9; /* 0x1504D98F: je 0x1504d9a9 */
L_1504D991:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504D991: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504D9A1; /* 0x1504D994: jne 0x1504d9a1 */
L_1504D996:
    eax = esi; /* 0x1504D996: mov eax, esi */
    eax = ~eax; /* 0x1504D998: not eax */
    /* test LO8(eax), 1 */ /* 0x1504D99A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D956; /* 0x1504D99C: je 0x1504d956 */
L_1504D99E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    esi = esi & 0xFFFFFFFEu; /* 0x1504D99E: and esi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504D9A1:
    eax = MEM32(ebp + 0xC); /* 0x1504D9A1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1504D9A4: mov dword ptr [ebp - 0xc], eax */
    goto L_1504D9E9; /* 0x1504D9A7: jmp 0x1504d9e9 */
L_1504D9A9:
    eax = esi; /* 0x1504D9A9: mov eax, esi */
    eax = ~eax; /* 0x1504D9AB: not eax */
    /* test LO8(eax), 1 */ /* 0x1504D9AD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504D956; /* 0x1504D9AF: je 0x1504d956 */
L_1504D9B1:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1504D9B1: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1504D9B1: shr esi, 1 */
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x1504D9B3: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x1C)); } /* 0x1504D9B6: cmovb esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1504D9BA: push esi */
    RECOMP_CALL(sub_15048F2F); /* 0x1504D9BB: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1504D9C0: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1504D9C3: pop ecx */
    /* test eax, eax */ /* 0x1504D9C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504D9E3; /* 0x1504D9C6: jne 0x1504d9e3 */
L_1504D9C8:
    RECOMP_CALL(sub_15036430); /* 0x1504D9C8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1504D9CD: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_150363E0); /* 0x1504D9D3: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x1504D9D8: mov dword ptr [eax], 8 */
    goto L_1504E173; /* 0x1504D9DE: jmp 0x1504e173 */
L_1504D9E3:
    ecx = MEM32(ebp + (-0x28)); /* 0x1504D9E3: mov ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x18)); /* 0x1504D9E6: mov edx, dword ptr [ebp - 0x18] */
L_1504D9E9:
    edx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504D9E9: mov edx, dword ptr [edx*4 + 0x150bebc0] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1504D9F0: mov dword ptr [ebp - 0x10], eax */
    /* test MEM8(ecx + edx + 0x4), 0x48u */ /* 0x1504D9F3: test byte ptr [ecx + edx + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504D9F8: je 0x1504dae0 */
L_1504D9FE:
    SET_LO8(ecx, MEM8(ecx + edx + 0x5)); /* 0x1504D9FE: mov cl, byte ptr [ecx + edx + 5] */
    PUSH32(esp, 0xAu); /* 0x1504DA02: push 0xa */
    edx = POP32_VAL(esp); /* 0x1504DA04: pop edx */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x1504DA05: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA07: je 0x1504dae0 */
L_1504DA0D:
    /* test esi, esi */ /* 0x1504DA0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA0F: je 0x1504dae0 */
L_1504DA15:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1504DA15: mov byte ptr [eax], cl */
    edx = ebx; /* 0x1504DA17: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504DA19: inc eax */
    _flag_k = FK_INC;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DA1A: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DA1A: shr edx, 5 */
    MEM32(ebp + (-0x10)) = eax; /* 0x1504DA1D: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504DA20: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1504DA22: mov eax, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504DA24: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DA25: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504DA28: dec esi */
    _flag_k = FK_DEC;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DA29: imul ecx, eax, 0x24 */
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1504DA2C: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DA30: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    PUSH32(esp, 0xAu); /* 0x1504DA37: push 0xa */
    edx = POP32_VAL(esp); /* 0x1504DA39: pop edx */
    MEM8(eax + ecx + 0x5) = (uint8_t)(LO8(edx)); /* 0x1504DA3A: mov byte ptr [eax + ecx + 5], dl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA3E: je 0x1504dae0 */
L_1504DA44:
    eax = ebx; /* 0x1504DA44: mov eax, ebx */
    edx = ebx; /* 0x1504DA46: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DA48: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DA4B: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DA4B: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DA4E: imul ecx, eax, 0x24 */
    PUSH32(esp, 0xAu); /* 0x1504DA51: push 0xa */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DA53: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(ecx, MEM8(eax + ecx + 0x6)); /* 0x1504DA5A: mov cl, byte ptr [eax + ecx + 6] */
    eax = POP32_VAL(esp); /* 0x1504DA5E: pop eax */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x1504DA5F: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA61: je 0x1504dae0 */
L_1504DA63:
    /* test esi, esi */ /* 0x1504DA63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA65: je 0x1504dae0 */
L_1504DA67:
    eax = MEM32(ebp + (-0x10)); /* 0x1504DA67: mov eax, dword ptr [ebp - 0x10] */
    edx = ebx; /* 0x1504DA6A: mov edx, ebx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DA6C: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DA6C: shr edx, 5 */
    PUSH32(esp, 2); /* 0x1504DA6F: push 2 */
    edi = POP32_VAL(esp); /* 0x1504DA71: pop edi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1504DA72: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504DA74: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1504DA75: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504DA78: dec esi */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x1504DA79: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DA7B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DA7E: imul ecx, eax, 0x24 */
    /* cmp MEM32(ebp + (-0x24)), 1 */ /* 0x1504DA81: cmp dword ptr [ebp - 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DA85: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    PUSH32(esp, 0xAu); /* 0x1504DA8C: push 0xa */
    edx = POP32_VAL(esp); /* 0x1504DA8E: pop edx */
    MEM8(eax + ecx + 0x6) = (uint8_t)(LO8(edx)); /* 0x1504DA8F: mov byte ptr [eax + ecx + 6], dl */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DA93: jne 0x1504dae0 */
L_1504DA95:
    eax = ebx; /* 0x1504DA95: mov eax, ebx */
    edx = ebx; /* 0x1504DA97: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DA99: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DA9C: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DA9C: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DA9F: imul ecx, eax, 0x24 */
    PUSH32(esp, 0xAu); /* 0x1504DAA2: push 0xa */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DAA4: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(ecx, MEM8(eax + ecx + 0x7)); /* 0x1504DAAB: mov cl, byte ptr [eax + ecx + 7] */
    eax = POP32_VAL(esp); /* 0x1504DAAF: pop eax */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x1504DAB0: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DAB2: je 0x1504dae0 */
L_1504DAB4:
    /* test esi, esi */ /* 0x1504DAB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DAE0; /* 0x1504DAB6: je 0x1504dae0 */
L_1504DAB8:
    eax = MEM32(ebp + (-0x10)); /* 0x1504DAB8: mov eax, dword ptr [ebp - 0x10] */
    edx = ebx; /* 0x1504DABB: mov edx, ebx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DABD: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DABD: shr edx, 5 */
    PUSH32(esp, 3); /* 0x1504DAC0: push 3 */
    edi = POP32_VAL(esp); /* 0x1504DAC2: pop edi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1504DAC3: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504DAC5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1504DAC6: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504DAC9: dec esi */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x1504DACA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DACC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DACF: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DAD2: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    PUSH32(esp, 0xAu); /* 0x1504DAD9: push 0xa */
    edx = POP32_VAL(esp); /* 0x1504DADB: pop edx */
    MEM8(eax + ecx + 0x7) = (uint8_t)(LO8(edx)); /* 0x1504DADC: mov byte ptr [eax + ecx + 7], dl */
L_1504DAE0:
    PUSH32(esp, ebx); /* 0x1504DAE0: push ebx */
    RECOMP_CALL(sub_1504C2F0); /* 0x1504DAE1: call 0x1504c2f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504DAE6: pop ecx */
    /* test eax, eax */ /* 0x1504DAE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DB74; /* 0x1504DAE9: je 0x1504db74 */
L_1504DAEF:
    eax = ebx; /* 0x1504DAEF: mov eax, ebx */
    ecx = ebx; /* 0x1504DAF1: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DAF3: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504DAF6: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x1504DAF6: shr ecx, 5 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DAF9: imul eax, eax, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DAFC: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    /* cmp MEM8(ecx + eax + 0x4), 0 */ /* 0x1504DB03: cmp byte ptr [ecx + eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504DB74; /* 0x1504DB08: jge 0x1504db74 */
L_1504DB0A:
    edx = ebp + (-0x2C); /* 0x1504DB0A: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x1504DB0D: push edx */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504DB0E: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0020)); /* 0x1504DB11: call dword ptr [0x150c0020] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504DB17: mov dword ptr [ebp - 0x2c], eax */
    /* test eax, eax */ /* 0x1504DB1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DB74; /* 0x1504DB1C: je 0x1504db74 */
L_1504DB1E:
    /* cmp MEM32(ebp + (-0x24)), 2 */ /* 0x1504DB1E: cmp dword ptr [ebp - 0x24], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DB74; /* 0x1504DB22: jne 0x1504db74 */
L_1504DB24:
    PUSH32(esp, 0); /* 0x1504DB24: push 0 */
    eax = ebp + (-0x14); /* 0x1504DB26: lea eax, [ebp - 0x14] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1504DB29: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1504DB29: shr esi, 1 */
    PUSH32(esp, eax); /* 0x1504DB2B: push eax */
    eax = ebx; /* 0x1504DB2C: mov eax, ebx */
    edx = ebx; /* 0x1504DB2E: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DB30: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DB33: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DB33: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DB36: imul ecx, eax, 0x24 */
    PUSH32(esp, esi); /* 0x1504DB39: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504DB3A: push dword ptr [ebp - 0x10] */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DB3D: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504DB44: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C0010)); /* 0x1504DB47: call dword ptr [0x150c0010] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504DB4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504DB69; /* 0x1504DB4F: jne 0x1504db69 */
L_1504DB51:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504DB51: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
L_1504DB57:
    PUSH32(esp, eax); /* 0x1504DB57: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504DB58: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504DB5D: pop ecx */
L_1504DB5E:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504DB5E: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504DB61:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DB61: mov ecx, dword ptr [ebp - 0xc] */
    goto L_1504DE72; /* 0x1504DB64: jmp 0x1504de72 */
L_1504DB69:
    eax = MEM32(ebp + (-0x14)); /* 0x1504DB69: mov eax, dword ptr [ebp - 0x14] */
    esi = eax + eax; /* 0x1504DB6C: lea esi, [eax + eax] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1504DB6F: mov dword ptr [ebp - 0x14], esi */
    goto L_1504DBB8; /* 0x1504DB72: jmp 0x1504dbb8 */
L_1504DB74:
    PUSH32(esp, 0); /* 0x1504DB74: push 0 */
    eax = ebp + (-0x14); /* 0x1504DB76: lea eax, [ebp - 0x14] */
    edx = ebx; /* 0x1504DB79: mov edx, ebx */
    PUSH32(esp, eax); /* 0x1504DB7B: push eax */
    eax = ebx; /* 0x1504DB7C: mov eax, ebx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DB7E: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DB7E: shr edx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DB81: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DB84: imul ecx, eax, 0x24 */
    PUSH32(esp, esi); /* 0x1504DB87: push esi */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DB88: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504DB8F: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1504DB92: push dword ptr [eax + ecx] */
    RECOMP_ICALL(MEM32(0x150C0104)); /* 0x1504DB95: call dword ptr [0x150c0104] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504DB9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E11C; /* 0x1504DB9D: je 0x1504e11c */
L_1504DBA3:
    eax = MEM32(ebp + (-0x14)); /* 0x1504DBA3: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x1504DBA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504E11C; /* 0x1504DBA8: js 0x1504e11c */
L_1504DBAE:
    /* cmp eax, esi */ /* 0x1504DBAE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504E11C; /* 0x1504DBB0: ja 0x1504e11c */
L_1504DBB6:
    esi = eax; /* 0x1504DBB6: mov esi, eax */
L_1504DBB8:
    eax = ebx; /* 0x1504DBB8: mov eax, ebx */
    edx = ebx; /* 0x1504DBBA: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DBBC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1504DBBF: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1504DBBF: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DBC2: imul ecx, eax, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1504DBC5: add edi, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504DBC7: mov edx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1504DBCE: add edx, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edx + 0x4)); /* 0x1504DBD0: mov al, byte ptr [edx + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504DBD3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1504DE6C; /* 0x1504DBD5: jns 0x1504de6c */
L_1504DBDB:
    /* cmp MEM32(ebp + (-0x24)), 2 */ /* 0x1504DBDB: cmp dword ptr [ebp - 0x24], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DBDF: mov ecx, dword ptr [ebp - 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DE8B; /* 0x1504DBE2: je 0x1504de8b */
L_1504DBE8:
    /* test esi, esi */ /* 0x1504DBE8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DBF5; /* 0x1504DBEA: je 0x1504dbf5 */
L_1504DBEC:
    /* cmp MEM8(ecx), 0xAu */ /* 0x1504DBEC: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DBF5; /* 0x1504DBEF: jne 0x1504dbf5 */
L_1504DBF1:
    _flag_a = (uint32_t)((LO8(eax) | 4)) << 24; _flag_b = (uint32_t)((LO8(eax) | 4)) << 24;
    SET_LO8(eax, LO8(eax) | 4); /* 0x1504DBF1: or al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1504DBF7; /* 0x1504DBF3: jmp 0x1504dbf7 */
L_1504DBF5:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFBu); /* 0x1504DBF5: and al, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504DBF7:
    esi = MEM32(ebp + (-0x1C)); /* 0x1504DBF7: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504DBFA: mov dword ptr [ebp - 0x10], ecx */
    MEM8(esi + edx) = (uint8_t)(LO8(eax)); /* 0x1504DBFD: mov byte ptr [esi + edx], al */
    eax = ecx + edi; /* 0x1504DC00: lea eax, [ecx + edi] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1504DC03: mov dword ptr [ebp - 0x18], eax */
    esi = ecx; /* 0x1504DC06: mov esi, ecx */
    /* cmp ecx, eax */ /* 0x1504DC08: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504DD34; /* 0x1504DC0A: jae 0x1504dd34 */
L_1504DC10:
    edi = MEM32(ebp + (-0xC)); /* 0x1504DC10: mov edi, dword ptr [ebp - 0xc] */
    eax = ebx; /* 0x1504DC13: mov eax, ebx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504DC15: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1504DC15: shr eax, 5 */
    MEM32(ebp + (-0x28)) = eax; /* 0x1504DC18: mov dword ptr [ebp - 0x28], eax */
    eax = ebx; /* 0x1504DC1B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DC1D: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DC20: imul eax, eax, 0x24 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504DC23: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1504DC26: mov eax, dword ptr [ebp - 0x18] */
L_1504DC29:
    SET_LO8(edx, MEM8(ecx)); /* 0x1504DC29: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), 0x1Au */ /* 0x1504DC2B: cmp dl, 0x1a */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DD0D; /* 0x1504DC2E: je 0x1504dd0d */
L_1504DC34:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504DC34: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(edx), 0xDu */ /* 0x1504DC35: cmp dl, 0xd */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DC45; /* 0x1504DC38: je 0x1504dc45 */
L_1504DC3A:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1504DC3A: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DC3C: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504DC3D: mov dword ptr [ebp - 0x10], ecx */
    goto L_1504DD03; /* 0x1504DC40: jmp 0x1504dd03 */
L_1504DC45:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1504DC45: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x10)), eax */ /* 0x1504DC46: cmp dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504DC6A; /* 0x1504DC49: jae 0x1504dc6a */
L_1504DC4B:
    SET_LO8(edx, MEM8(ecx)); /* 0x1504DC4B: mov dl, byte ptr [ecx] */
    PUSH32(esp, 0xAu); /* 0x1504DC4D: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504DC4F: pop eax */
    /* cmp LO8(edx), LO8(eax) */ /* 0x1504DC50: cmp dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DC5A; /* 0x1504DC52: jne 0x1504dc5a */
L_1504DC54:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 2; /* 0x1504DC54: add dword ptr [ebp - 0x10], 2 */
    _flag_k = FK_ADD;
    goto L_1504DC5D; /* 0x1504DC58: jmp 0x1504dc5d */
L_1504DC5A:
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504DC5A: mov dword ptr [ebp - 0x10], ecx */
L_1504DC5D:
    PUSH32(esp, 0xAu); /* 0x1504DC5D: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1504DC5F: pop ecx */
    /* cmp LO8(edx), LO8(ecx) */ /* 0x1504DC60: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0xDu); /* 0x1504DC62: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1504DC64: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x1504DC65: cmovne eax, ecx */
    goto L_1504DCBF; /* 0x1504DC68: jmp 0x1504dcbf */
L_1504DC6A:
    PUSH32(esp, 0); /* 0x1504DC6A: push 0 */
    eax = ebp + (-0x14); /* 0x1504DC6C: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504DC6F: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1504DC72: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1504DC75: push eax */
    PUSH32(esp, 1); /* 0x1504DC76: push 1 */
    eax = ebp + (-0x1); /* 0x1504DC78: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1504DC7B: push eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1504DC7C: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504DC7F: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504DC86: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0104)); /* 0x1504DC89: call dword ptr [0x150c0104] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504DC8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504DC9D; /* 0x1504DC91: jne 0x1504dc9d */
L_1504DC93:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504DC93: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504DC99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504DCF9; /* 0x1504DC9B: jne 0x1504dcf9 */
L_1504DC9D:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1504DC9D: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DCF9; /* 0x1504DCA1: je 0x1504dcf9 */
L_1504DCA3:
    ecx = MEM32(ebp + (-0x28)); /* 0x1504DCA3: mov ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x2C)); /* 0x1504DCA6: mov edx, dword ptr [ebp - 0x2c] */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DCA9: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 0x48u */ /* 0x1504DCB0: test byte ptr [edx + eax + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DCD6; /* 0x1504DCB5: je 0x1504dcd6 */
L_1504DCB7:
    PUSH32(esp, 0xAu); /* 0x1504DCB7: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504DCB9: pop eax */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1504DCBA: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DCC3; /* 0x1504DCBD: jne 0x1504dcc3 */
L_1504DCBF:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1504DCBF: mov byte ptr [esi], al */
    goto L_1504DCFC; /* 0x1504DCC1: jmp 0x1504dcfc */
L_1504DCC3:
    MEM8(esi) = (uint8_t)(0xDu); /* 0x1504DCC3: mov byte ptr [esi], 0xd */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DCC6: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1504DCCD: mov al, byte ptr [ebp - 1] */
    MEM8(edx + ecx + 0x5) = (uint8_t)(LO8(eax)); /* 0x1504DCD0: mov byte ptr [edx + ecx + 5], al */
    goto L_1504DCFC; /* 0x1504DCD4: jmp 0x1504dcfc */
L_1504DCD6:
    /* cmp esi, edi */ /* 0x1504DCD6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DCE2; /* 0x1504DCD8: jne 0x1504dce2 */
L_1504DCDA:
    PUSH32(esp, 0xAu); /* 0x1504DCDA: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504DCDC: pop eax */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1504DCDD: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DCBF; /* 0x1504DCE0: je 0x1504dcbf */
L_1504DCE2:
    PUSH32(esp, 1); /* 0x1504DCE2: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504DCE4: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504DCE6: push -1 */
    PUSH32(esp, ebx); /* 0x1504DCE8: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504DCE9: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504DCEE: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x1504DCF1: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504DCF3: pop eax */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1504DCF4: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DCFD; /* 0x1504DCF7: je 0x1504dcfd */
L_1504DCF9:
    MEM8(esi) = (uint8_t)(0xDu); /* 0x1504DCF9: mov byte ptr [esi], 0xd */
L_1504DCFC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DCFC: inc esi */
    _flag_k = FK_INC;
L_1504DCFD:
    eax = MEM32(ebp + (-0x18)); /* 0x1504DCFD: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504DD00: mov ecx, dword ptr [ebp - 0x10] */
L_1504DD03:
    /* cmp ecx, eax */ /* 0x1504DD03: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504DC29; /* 0x1504DD05: jb 0x1504dc29 */
L_1504DD0B:
    goto L_1504DD34; /* 0x1504DD0B: jmp 0x1504dd34 */
L_1504DD0D:
    eax = ebx; /* 0x1504DD0D: mov eax, ebx */
    ecx = ebx; /* 0x1504DD0F: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DD11: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504DD14: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x1504DD14: shr ecx, 5 */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DD17: imul edi, eax, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DD1A: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(ecx + edi + 0x4)); /* 0x1504DD21: mov al, byte ptr [ecx + edi + 4] */
    /* test LO8(eax), 0x40u */ /* 0x1504DD25: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504DD31; /* 0x1504DD27: jne 0x1504dd31 */
L_1504DD29:
    _flag_a = (uint32_t)((LO8(eax) | 2)) << 24; _flag_b = (uint32_t)((LO8(eax) | 2)) << 24;
    SET_LO8(eax, LO8(eax) | 2); /* 0x1504DD29: or al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504DD2B: mov byte ptr [ecx + edi + 4], al */
    goto L_1504DD34; /* 0x1504DD2F: jmp 0x1504dd34 */
L_1504DD31:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1504DD31: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DD33: inc esi */
    _flag_k = FK_INC;
L_1504DD34:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DD34: mov ecx, dword ptr [ebp - 0xc] */
    edi = esi; /* 0x1504DD37: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1504DD39: sub edi, ecx */
    _flag_k = FK_CMP;
    edx = esi; /* 0x1504DD3B: mov edx, esi */
    /* cmp MEM32(ebp + (-0x24)), 1 */ /* 0x1504DD3D: cmp dword ptr [ebp - 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DE6F; /* 0x1504DD41: jne 0x1504de6f */
L_1504DD47:
    /* test edi, edi */ /* 0x1504DD47: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DE6F; /* 0x1504DD49: je 0x1504de6f */
L_1504DD4F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504DD4F: dec esi */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(esi)); /* 0x1504DD50: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504DD52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504DD5D; /* 0x1504DD54: js 0x1504dd5d */
L_1504DD56:
    esi = edx; /* 0x1504DD56: mov esi, edx */
    goto L_1504DE3A; /* 0x1504DD58: jmp 0x1504de3a */
L_1504DD5D:
    eax = (uint32_t)LO8(eax); /* 0x1504DD5D: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504DD60: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1504DD62: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = edx; /* 0x1504DD63: mov dword ptr [ebp - 0x24], edx */
    /* cmp MEM8(eax + 0x15004CC0), 0 */ /* 0x1504DD66: cmp byte ptr [eax + 0x15004cc0], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15004CC0)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DD8E; /* 0x1504DD6D: jne 0x1504dd8e */
L_1504DD6F:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1504DD6F: mov ebx, dword ptr [ebp - 0x1c] */
L_1504DD72:
    /* cmp edx, ebx */ /* 0x1504DD72: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1504DD88; /* 0x1504DD74: jg 0x1504dd88 */
L_1504DD76:
    /* cmp esi, ecx */ /* 0x1504DD76: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504DD88; /* 0x1504DD78: jb 0x1504dd88 */
L_1504DD7A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504DD7A: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1504DD7B: inc edx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1504DD7C: movzx eax, byte ptr [esi] */
    /* cmp MEM8(eax + 0x15004CC0), 0 */ /* 0x1504DD7F: cmp byte ptr [eax + 0x15004cc0], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15004CC0)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DD72; /* 0x1504DD86: je 0x1504dd72 */
L_1504DD88:
    ebx = MEM32(ebp + 0x8); /* 0x1504DD88: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1504DD8B: mov dword ptr [ebp - 0x24], edx */
L_1504DD8E:
    eax = (uint32_t)MEM8(esi); /* 0x1504DD8E: movzx eax, byte ptr [esi] */
    eax = (int32_t)(int8_t)MEM8(eax + 0x15004CC0); /* 0x1504DD91: movsx eax, byte ptr [eax + 0x15004cc0] */
    /* test eax, eax */ /* 0x1504DD98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504DDAC; /* 0x1504DD9A: jne 0x1504ddac */
L_1504DD9C:
    RECOMP_CALL(sub_15036430); /* 0x1504DD9C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1504DDA1: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_1504DB5E; /* 0x1504DDA7: jmp 0x1504db5e */
L_1504DDAC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504DDAC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1504DDAD: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DDB8; /* 0x1504DDAF: jne 0x1504ddb8 */
L_1504DDB1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1504DDB1: add esi, edx */
    _flag_k = FK_ADD;
    goto L_1504DE3A; /* 0x1504DDB3: jmp 0x1504de3a */
L_1504DDB8:
    eax = ebx; /* 0x1504DDB8: mov eax, ebx */
    ecx = ebx; /* 0x1504DDBA: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DDBC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504DDBF: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x1504DDBF: shr ecx, 5 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DDC2: imul eax, eax, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DDC5: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(ecx + eax + 0x4), 0x48u */ /* 0x1504DDCC: test byte ptr [ecx + eax + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DE25; /* 0x1504DDD1: je 0x1504de25 */
L_1504DDD3:
    SET_LO8(edx, MEM8(esi)); /* 0x1504DDD3: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DDD5: inc esi */
    _flag_k = FK_INC;
    MEM8(ecx + eax + 0x5) = (uint8_t)(LO8(edx)); /* 0x1504DDD6: mov byte ptr [ecx + eax + 5], dl */
    edx = MEM32(ebp + (-0x24)); /* 0x1504DDDA: mov edx, dword ptr [ebp - 0x24] */
    /* cmp edx, 2 */ /* 0x1504DDDD: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504DE00; /* 0x1504DDE0: jl 0x1504de00 */
L_1504DDE2:
    eax = ebx; /* 0x1504DDE2: mov eax, ebx */
    ecx = ebx; /* 0x1504DDE4: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DDE6: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504DDE9: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x1504DDE9: shr ecx, 5 */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DDEC: imul edx, eax, 0x24 */
    SET_LO8(eax, MEM8(esi)); /* 0x1504DDEF: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DDF1: inc esi */
    _flag_k = FK_INC;
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DDF2: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM8(ecx + edx + 0x6) = (uint8_t)(LO8(eax)); /* 0x1504DDF9: mov byte ptr [ecx + edx + 6], al */
    edx = MEM32(ebp + (-0x24)); /* 0x1504DDFD: mov edx, dword ptr [ebp - 0x24] */
L_1504DE00:
    /* cmp edx, 3 */ /* 0x1504DE00: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DE21; /* 0x1504DE03: jne 0x1504de21 */
L_1504DE05:
    SET_LO8(eax, MEM8(esi)); /* 0x1504DE05: mov al, byte ptr [esi] */
    ecx = ebx; /* 0x1504DE07: mov ecx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1504DE09: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504DE0C: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x1504DE0C: shr ecx, 5 */
    edx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1504DE0F: imul edx, ebx, 0x24 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504DE12: inc esi */
    _flag_k = FK_INC;
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x1504DE13: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM8(ecx + edx + 0x7) = (uint8_t)(LO8(eax)); /* 0x1504DE1A: mov byte ptr [ecx + edx + 7], al */
    edx = MEM32(ebp + (-0x24)); /* 0x1504DE1E: mov edx, dword ptr [ebp - 0x24] */
L_1504DE21:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1504DE21: sub esi, edx */
    _flag_k = FK_CMP;
    goto L_1504DE37; /* 0x1504DE23: jmp 0x1504de37 */
L_1504DE25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1504DE25: neg edx */
    _flag_k = FK_CMP;
    eax = edx; /* 0x1504DE27: mov eax, edx */
    PUSH32(esp, 1); /* 0x1504DE29: push 1 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504DE2B: cdq  */
    PUSH32(esp, edx); /* 0x1504DE2C: push edx */
    PUSH32(esp, eax); /* 0x1504DE2D: push eax */
    PUSH32(esp, ebx); /* 0x1504DE2E: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504DE2F: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504DE34: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1504DE37:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DE37: mov ecx, dword ptr [ebp - 0xc] */
L_1504DE3A:
    edi = esi; /* 0x1504DE3A: mov edi, esi */
    esi = MEM32(ebp + (-0x30)); /* 0x1504DE3C: mov esi, dword ptr [ebp - 0x30] */
    eax = esi; /* 0x1504DE3F: mov eax, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1504DE41: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1504DE43: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1504DE43: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1504DE45: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504DE46: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504DE49: push edi */
    PUSH32(esp, ecx); /* 0x1504DE4A: push ecx */
    PUSH32(esp, 0); /* 0x1504DE4B: push 0 */
    PUSH32(esp, 0xFDE9u); /* 0x1504DE4D: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1504DE52: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504DE58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DB51; /* 0x1504DE5A: je 0x1504db51 */
L_1504DE60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1504DE60: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1504DE62: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1504DB51; /* 0x1504DE64: ja 0x1504db51 */
L_1504DE6A:
    edi = eax; /* 0x1504DE6A: mov edi, eax */
L_1504DE6C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DE6C: mov ecx, dword ptr [ebp - 0xc] */
L_1504DE6F:
    ebx = MEM32(ebp + (-0x20)); /* 0x1504DE6F: mov ebx, dword ptr [ebp - 0x20] */
L_1504DE72:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1504DE72: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DE7E; /* 0x1504DE75: je 0x1504de7e */
L_1504DE77:
    PUSH32(esp, ecx); /* 0x1504DE77: push ecx */
    RECOMP_CALL(sub_15048840); /* 0x1504DE78: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504DE7D: pop ecx */
L_1504DE7E:
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1504DE7E: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = edi; } /* 0x1504DE81: cmove ebx, edi */
    eax = ebx; /* 0x1504DE84: mov eax, ebx */
    goto L_1504E176; /* 0x1504DE86: jmp 0x1504e176 */
L_1504DE8B:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1504DE8B: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DF4F; /* 0x1504DE8F: je 0x1504df4f */
L_1504DE95:
    eax = edi; /* 0x1504DE95: mov eax, edi */
    esi = ecx; /* 0x1504DE97: mov esi, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504DE99: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1504DE9A: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1504DE9C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edi = ecx + eax * 2; /* 0x1504DE9E: lea edi, [ecx + eax*2] */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1504DEA1: mov dword ptr [ebp - 0x2c], edi */
    /* cmp ecx, edi */ /* 0x1504DEA4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504DF43; /* 0x1504DEA6: jae 0x1504df43 */
L_1504DEAC:
    MEM32(ebp + (-0x18)) = 0xDu; /* 0x1504DEAC: mov dword ptr [ebp - 0x18], 0xd */
    edx = ecx; /* 0x1504DEB3: mov edx, ecx */
L_1504DEB5:
    eax = (uint32_t)MEM16(edx); /* 0x1504DEB5: movzx eax, word ptr [edx] */
    ebx = eax; /* 0x1504DEB8: mov ebx, eax */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1504DEBA: mov dword ptr [ebp - 0x30], ebx */
    PUSH32(esp, 0x1Au); /* 0x1504DEBD: push 0x1a */
    ebx = POP32_VAL(esp); /* 0x1504DEBF: pop ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1504DEC0: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = MEM32(ebp + 0x8); /* 0x1504DEC3: mov ebx, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DF29; /* 0x1504DEC6: je 0x1504df29 */
L_1504DEC8:
    /* cmp LO16(eax), MEM16(ebp + (-0x18)) */ /* 0x1504DEC8: cmp ax, word ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DEE1; /* 0x1504DECC: je 0x1504dee1 */
L_1504DECE:
    PUSH32(esp, 2); /* 0x1504DECE: push 2 */
    ebx = POP32_VAL(esp); /* 0x1504DED0: pop ebx */
    eax = ebx; /* 0x1504DED1: mov eax, ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504DED3: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x30)); /* 0x1504DED6: mov ebx, dword ptr [ebp - 0x30] */
    ebx = (uint32_t)LO16(ebx); /* 0x1504DED9: movzx ebx, bx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1504DEDC: mov dword ptr [ebp - 0x24], ebx */
    goto L_1504DF0E; /* 0x1504DEDF: jmp 0x1504df0e */
L_1504DEE1:
    eax = edi + (-0x2); /* 0x1504DEE1: lea eax, [edi - 2] */
    /* cmp edx, eax */ /* 0x1504DEE4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504DEB5; /* 0x1504DEE6: jae 0x1504deb5 */
L_1504DEE8:
    PUSH32(esp, 0xAu); /* 0x1504DEE8: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504DEEA: pop eax */
    PUSH32(esp, 2); /* 0x1504DEEB: push 2 */
    /* cmp MEM16(edx + 0x2), LO16(eax) */ /* 0x1504DEED: cmp word ptr [edx + 2], ax */
    _flag_a = (uint32_t)(MEM16(edx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DF01; /* 0x1504DEF1: jne 0x1504df01 */
L_1504DEF3:
    ecx = POP32_VAL(esp); /* 0x1504DEF3: pop ecx */
    PUSH32(esp, 0xAu); /* 0x1504DEF4: push 0xa */
    eax = ecx; /* 0x1504DEF6: mov eax, ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1504DEF8: mov dword ptr [ebp - 0x1c], ecx */
    ecx = POP32_VAL(esp); /* 0x1504DEFB: pop ecx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1504DEFC: mov dword ptr [ebp - 0x24], ecx */
    goto L_1504DF0E; /* 0x1504DEFF: jmp 0x1504df0e */
L_1504DF01:
    ebx = POP32_VAL(esp); /* 0x1504DF01: pop ebx */
    eax = ebx; /* 0x1504DF02: mov eax, ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504DF04: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x24)) = 0xDu; /* 0x1504DF07: mov dword ptr [ebp - 0x24], 0xd */
L_1504DF0E:
    ecx = MEM32(ebp + (-0x24)); /* 0x1504DF0E: mov ecx, dword ptr [ebp - 0x24] */
    edi = esi; /* 0x1504DF11: mov edi, esi */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1504DF13: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1504DF16: add edx, eax */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x1C)); /* 0x1504DF18: mov esi, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DF1B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1504DF1E: add esi, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x2C)); /* 0x1504DF20: mov edi, dword ptr [ebp - 0x2c] */
    /* cmp edx, edi */ /* 0x1504DF23: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504DEB5; /* 0x1504DF25: jb 0x1504deb5 */
L_1504DF27:
    goto L_1504DF43; /* 0x1504DF27: jmp 0x1504df43 */
L_1504DF29:
    eax = ebx; /* 0x1504DF29: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1504DF2B: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504DF2E: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1504DF2E: shr eax, 5 */
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1504DF31: imul ecx, ebx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504DF34: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 2)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 2); /* 0x1504DF3B: or byte ptr [eax + ecx + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + (-0xC)); /* 0x1504DF40: mov ecx, dword ptr [ebp - 0xc] */
L_1504DF43:
    edi = esi; /* 0x1504DF43: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1504DF45: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edi = edi & 0xFFFFFFFEu; /* 0x1504DF47: and edi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504DE6F; /* 0x1504DF4A: jmp 0x1504de6f */
L_1504DF4F:
    /* test esi, esi */ /* 0x1504DF4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504DF5F; /* 0x1504DF51: je 0x1504df5f */
L_1504DF53:
    PUSH32(esp, 0xAu); /* 0x1504DF53: push 0xa */
    esi = POP32_VAL(esp); /* 0x1504DF55: pop esi */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1504DF56: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DF5F; /* 0x1504DF59: jne 0x1504df5f */
L_1504DF5B:
    _flag_a = (uint32_t)((LO8(eax) | 4)) << 24; _flag_b = (uint32_t)((LO8(eax) | 4)) << 24;
    SET_LO8(eax, LO8(eax) | 4); /* 0x1504DF5B: or al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1504DF61; /* 0x1504DF5D: jmp 0x1504df61 */
L_1504DF5F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFBu); /* 0x1504DF5F: and al, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504DF61:
    esi = MEM32(ebp + (-0x1C)); /* 0x1504DF61: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504DF64: mov dword ptr [ebp - 0x10], ecx */
    MEM8(edx + esi) = (uint8_t)(LO8(eax)); /* 0x1504DF67: mov byte ptr [edx + esi], al */
    eax = ecx + (-0x1); /* 0x1504DF6A: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1504DF6D: add eax, edi */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1504DF6F: mov esi, ecx */
    /* cmp ecx, eax */ /* 0x1504DF71: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E113; /* 0x1504DF73: jae 0x1504e113 */
L_1504DF79:
    eax = ebx; /* 0x1504DF79: mov eax, ebx */
    MEM32(ebp + (-0x18)) = 0xDu; /* 0x1504DF7B: mov dword ptr [ebp - 0x18], 0xd */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504DF82: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1504DF82: shr eax, 5 */
    MEM32(ebp + (-0x28)) = eax; /* 0x1504DF85: mov dword ptr [ebp - 0x28], eax */
    eax = ebx; /* 0x1504DF88: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504DF8A: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = 0x1Au; /* 0x1504DF8D: mov dword ptr [ebp - 0x30], 0x1a */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504DF94: imul eax, eax, 0x24 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1504DF97: mov dword ptr [ebp - 0x24], eax */
    eax = ecx; /* 0x1504DF9A: mov eax, ecx */
L_1504DF9C:
    edx = (uint32_t)MEM16(eax); /* 0x1504DF9C: movzx edx, word ptr [eax] */
    /* cmp LO16(edx), MEM16(ebp + (-0x30)) */ /* 0x1504DF9F: cmp dx, word ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x30))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E0EB; /* 0x1504DFA3: je 0x1504e0eb */
L_1504DFA9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1504DFA9: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1504DFAC: mov dword ptr [ebp - 0x2c], eax */
    /* cmp LO16(edx), MEM16(ebp + (-0x18)) */ /* 0x1504DFAF: cmp dx, word ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504DFC3; /* 0x1504DFB3: je 0x1504dfc3 */
L_1504DFB5:
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x1504DFB5: mov word ptr [esi], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504DFB8: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x1504DFBB: mov dword ptr [ebp - 0x10], eax */
    goto L_1504E0DC; /* 0x1504DFBE: jmp 0x1504e0dc */
L_1504DFC3:
    edx = MEM32(ebp + (-0x2C)); /* 0x1504DFC3: mov edx, dword ptr [ebp - 0x2c] */
    eax = edi + (-0x2); /* 0x1504DFC6: lea eax, [edi - 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504DFC9: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), eax */ /* 0x1504DFCB: cmp dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504E005; /* 0x1504DFCE: jae 0x1504e005 */
L_1504DFD0:
    eax = (uint32_t)MEM16(edx); /* 0x1504DFD0: movzx eax, word ptr [edx] */
    ebx = eax; /* 0x1504DFD3: mov ebx, eax */
    PUSH32(esp, 0xAu); /* 0x1504DFD5: push 0xa */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1504DFD7: mov dword ptr [ebp - 0x2c], ebx */
    ebx = POP32_VAL(esp); /* 0x1504DFDA: pop ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1504DFDB: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DFE8; /* 0x1504DFDE: jne 0x1504dfe8 */
L_1504DFE0:
    eax = MEM32(ebp + (-0x1C)); /* 0x1504DFE0: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + eax; /* 0x1504DFE3: add dword ptr [ebp - 0x10], eax */
    _flag_k = FK_ADD;
    goto L_1504DFEB; /* 0x1504DFE6: jmp 0x1504dfeb */
L_1504DFE8:
    MEM32(ebp + (-0x10)) = edx; /* 0x1504DFE8: mov dword ptr [ebp - 0x10], edx */
L_1504DFEB:
    /* cmp MEM16(ebp + (-0x2C)), LO16(ebx) */ /* 0x1504DFEB: cmp word ptr [ebp - 0x2c], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2C))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = ebx; /* 0x1504DFEF: mov eax, ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504DFF1: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 0xDu); /* 0x1504DFF4: push 0xd */
    edx = POP32_VAL(esp); /* 0x1504DFF6: pop edx */
    if (CMP_NE(_flag_a, _flag_b)) { eax = edx; } /* 0x1504DFF7: cmovne eax, edx */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1504DFFA: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504DFFD: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_1504E0D9; /* 0x1504E000: jmp 0x1504e0d9 */
L_1504E005:
    ecx = MEM32(ebp + (-0x24)); /* 0x1504E005: mov ecx, dword ptr [ebp - 0x24] */
    eax = ebp + (-0x14); /* 0x1504E008: lea eax, [ebp - 0x14] */
    PUSH32(esp, 0); /* 0x1504E00B: push 0 */
    PUSH32(esp, eax); /* 0x1504E00D: push eax */
    PUSH32(esp, 2); /* 0x1504E00E: push 2 */
    eax = ebp + (-0x8); /* 0x1504E010: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1504E013: mov dword ptr [ebp - 0x10], edx */
    PUSH32(esp, eax); /* 0x1504E016: push eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1504E017: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E01A: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1504E021: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x150C0104)); /* 0x1504E024: call dword ptr [0x150c0104] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504E02A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E03C; /* 0x1504E02C: jne 0x1504e03c */
L_1504E02E:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504E02E: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504E034: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E0CD; /* 0x1504E036: jne 0x1504e0cd */
L_1504E03C:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1504E03C: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E0CD; /* 0x1504E040: je 0x1504e0cd */
L_1504E046:
    edx = MEM32(ebp + (-0x28)); /* 0x1504E046: mov edx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1504E049: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504E04C: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(ecx + eax + 0x4), 0x48u */ /* 0x1504E053: test byte ptr [ecx + eax + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504E09D; /* 0x1504E058: je 0x1504e09d */
L_1504E05A:
    PUSH32(esp, 0xAu); /* 0x1504E05A: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504E05C: pop eax */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1504E05D: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E0D0; /* 0x1504E061: je 0x1504e0d0 */
L_1504E063:
    ebx = MEM32(ebp + (-0x24)); /* 0x1504E063: mov ebx, dword ptr [ebp - 0x24] */
    PUSH32(esp, 0xDu); /* 0x1504E066: push 0xd */
    eax = POP32_VAL(esp); /* 0x1504E068: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1504E069: mov word ptr [esi], ax */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504E06C: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x1504E073: mov al, byte ptr [ebp - 8] */
    PUSH32(esp, 0xAu); /* 0x1504E076: push 0xa */
    MEM8(ebx + ecx + 0x5) = (uint8_t)(LO8(eax)); /* 0x1504E078: mov byte ptr [ebx + ecx + 5], al */
    ecx = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504E07C: mov ecx, dword ptr [edx*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(ebp + (-0x7))); /* 0x1504E083: mov al, byte ptr [ebp - 7] */
    MEM8(ebx + ecx + 0x6) = (uint8_t)(LO8(eax)); /* 0x1504E086: mov byte ptr [ebx + ecx + 6], al */
    ecx = ebx; /* 0x1504E08A: mov ecx, ebx */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504E08C: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    ebx = MEM32(ebp + 0x8); /* 0x1504E093: mov ebx, dword ptr [ebp + 8] */
    edx = POP32_VAL(esp); /* 0x1504E096: pop edx */
    MEM8(ecx + eax + 0x7) = (uint8_t)(LO8(edx)); /* 0x1504E097: mov byte ptr [ecx + eax + 7], dl */
    goto L_1504E0D3; /* 0x1504E09B: jmp 0x1504e0d3 */
L_1504E09D:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504E09D: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp esi, ecx */ /* 0x1504E0A0: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E0B5; /* 0x1504E0A2: jne 0x1504e0b5 */
L_1504E0A4:
    PUSH32(esp, 0xAu); /* 0x1504E0A4: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504E0A6: pop eax */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1504E0A7: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E0B5; /* 0x1504E0AB: jne 0x1504e0b5 */
L_1504E0AD:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1504E0AD: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504E0B0: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_1504E0D9; /* 0x1504E0B3: jmp 0x1504e0d9 */
L_1504E0B5:
    PUSH32(esp, 1); /* 0x1504E0B5: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504E0B7: push -1 */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1504E0B9: push -2 */
    PUSH32(esp, ebx); /* 0x1504E0BB: push ebx */
    RECOMP_CALL(sub_1504C7BB); /* 0x1504E0BC: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504E0C1: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x1504E0C4: push 0xa */
    eax = POP32_VAL(esp); /* 0x1504E0C6: pop eax */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1504E0C7: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504E0D6; /* 0x1504E0CB: je 0x1504e0d6 */
L_1504E0CD:
    PUSH32(esp, 0xDu); /* 0x1504E0CD: push 0xd */
    eax = POP32_VAL(esp); /* 0x1504E0CF: pop eax */
L_1504E0D0:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1504E0D0: mov word ptr [esi], ax */
L_1504E0D3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504E0D3: add esi, 2 */
    _flag_k = FK_ADD;
L_1504E0D6:
    ecx = MEM32(ebp + (-0xC)); /* 0x1504E0D6: mov ecx, dword ptr [ebp - 0xc] */
L_1504E0D9:
    eax = MEM32(ebp + (-0x10)); /* 0x1504E0D9: mov eax, dword ptr [ebp - 0x10] */
L_1504E0DC:
    edx = ecx + (-0x1); /* 0x1504E0DC: lea edx, [ecx - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1504E0DF: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x1504E0E1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504DF9C; /* 0x1504E0E3: jb 0x1504df9c */
L_1504E0E9:
    goto L_1504E113; /* 0x1504E0E9: jmp 0x1504e113 */
L_1504E0EB:
    eax = ebx; /* 0x1504E0EB: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x1504E0ED: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1504E0F0: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1504E0F0: shr eax, 5 */
    edi = (uint32_t)((int32_t)ebx * (int32_t)0x24u); /* 0x1504E0F3: imul edi, ebx, 0x24 */
    ebx = MEM32(eax * 4 + 0x150BEBC0); /* 0x1504E0F6: mov ebx, dword ptr [eax*4 + 0x150bebc0] */
    SET_LO8(eax, MEM8(ebx + edi + 0x4)); /* 0x1504E0FD: mov al, byte ptr [ebx + edi + 4] */
    /* test LO8(eax), 0x40u */ /* 0x1504E101: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504E10D; /* 0x1504E103: jne 0x1504e10d */
L_1504E105:
    _flag_a = (uint32_t)((LO8(eax) | 2)) << 24; _flag_b = (uint32_t)((LO8(eax) | 2)) << 24;
    SET_LO8(eax, LO8(eax) | 2); /* 0x1504E105: or al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504E107: mov byte ptr [ebx + edi + 4], al */
    goto L_1504E113; /* 0x1504E10B: jmp 0x1504e113 */
L_1504E10D:
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x1504E10D: mov word ptr [esi], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504E110: add esi, 2 */
    _flag_k = FK_ADD;
L_1504E113:
    edi = esi; /* 0x1504E113: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1504E115: sub edi, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1504DE6F; /* 0x1504E117: jmp 0x1504de6f */
L_1504E11C:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1504E11C: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x1504E122: push 5 */
    esi = POP32_VAL(esp); /* 0x1504E124: pop esi */
    /* cmp eax, esi */ /* 0x1504E125: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504E140; /* 0x1504E127: jne 0x1504e140 */
L_1504E129:
    RECOMP_CALL(sub_15036430); /* 0x1504E129: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504E12E: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x1504E134: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504E139: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1504DB5E; /* 0x1504E13B: jmp 0x1504db5e */
L_1504E140:
    /* cmp eax, 0x6Du */ /* 0x1504E140: cmp eax, 0x6d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504DB57; /* 0x1504E143: jne 0x1504db57 */
L_1504E149:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504E149: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1504DB61; /* 0x1504E14B: jmp 0x1504db61 */
L_1504E150:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504E150: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504E176; /* 0x1504E152: jmp 0x1504e176 */
L_1504E154:
    RECOMP_CALL(sub_150363E0); /* 0x1504E154: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504E159: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036430); /* 0x1504E15B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1504E160: mov dword ptr [eax], 9 */
L_1504E166:
    PUSH32(esp, edi); /* 0x1504E166: push edi */
    PUSH32(esp, edi); /* 0x1504E167: push edi */
    PUSH32(esp, edi); /* 0x1504E168: push edi */
    PUSH32(esp, edi); /* 0x1504E169: push edi */
    PUSH32(esp, edi); /* 0x1504E16A: push edi */
L_1504E16B:
    RECOMP_CALL(sub_1505A110); /* 0x1504E16B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504E170: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504E173:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504E173: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504E176:
    edi = POP32_VAL(esp); /* 0x1504E176: pop edi */
    esi = POP32_VAL(esp); /* 0x1504E177: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504E178: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504E179: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E17A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504E190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504E190u);

L_1504E190:
    edi = edi; /* 0x1504E190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504E192: push ebp */
    ebp = esp; /* 0x1504E193: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1504E195: push 1 */
    PUSH32(esp, 0); /* 0x1504E197: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504E199: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504C520); /* 0x1504E19C: call 0x1504c520 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504E1A1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1504E1A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504E1A5: ret  */
    RECOMP_REGS_OUT();
}
