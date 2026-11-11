#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100CA55E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA55Eu);

L_100CA55E:
    PUSH32(esp, ebp); /* 0x100CA55E: push ebp */
    ebp = esp; /* 0x100CA55F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CA561: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CA562: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100CA565: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA56E; /* 0x100CA568: jne 0x100ca56e */
L_100CA56A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA56A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CA59A; /* 0x100CA56C: jmp 0x100ca59a */
L_100CA56E:
    PUSH32(esp, edi); /* 0x100CA56E: push edi */
    RECOMP_CALL(sub_100D6D0A); /* 0x100CA56F: call 0x100d6d0a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100CA574: mov edi, eax */
    /* test esi, edi */ /* 0x100CA576: test esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA57E; /* 0x100CA578: jne 0x100ca57e */
L_100CA57A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA57A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CA599; /* 0x100CA57C: jmp 0x100ca599 */
L_100CA57E:
    esi = ~esi; /* 0x100CA57E: not esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x100CA580: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100CA582: push edi */
    RECOMP_CALL(sub_100D6DD9); /* 0x100CA583: call 0x100d6dd9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100CA588: push edi */
    RECOMP_CALL(sub_100CA719); /* 0x100CA589: call 0x100ca719 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA58E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA58F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA590: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x100CA592: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100CA594: setne cl */
    eax = ecx; /* 0x100CA597: mov eax, ecx */
L_100CA599:
    edi = POP32_VAL(esp); /* 0x100CA599: pop edi */
L_100CA59A:
    esi = POP32_VAL(esp); /* 0x100CA59A: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA59B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA59C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA59D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA59Du);

L_100CA59D:
    PUSH32(esp, ebp); /* 0x100CA59D: push ebp */
    ebp = esp; /* 0x100CA59E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CA5A0: push esi */
    RECOMP_CALL(sub_100D6CB8); /* 0x100CA5A1: call 0x100d6cb8 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x100CA5A6: mov esi, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x100CA5A9: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_100D6D0A); /* 0x100CA5AB: call 0x100d6d0a */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x100CA5B0: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA5B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100CA5B5: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA5B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA5B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA5B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA5B8u);

L_100CA5B8:
    PUSH32(esp, ebp); /* 0x100CA5B8: push ebp */
    ebp = esp; /* 0x100CA5B9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CA5BB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100CA5BC: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100CA5BF: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA5CB; /* 0x100CA5C2: jne 0x100ca5cb */
L_100CA5C4:
    eax = MEM32(ebp + 0x8); /* 0x100CA5C4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    MEM32(eax) = MEM32(eax) & esi; /* 0x100CA5C7: and dword ptr [eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CA5D7; /* 0x100CA5C9: jmp 0x100ca5d7 */
L_100CA5CB:
    RECOMP_CALL(sub_100D6D0A); /* 0x100CA5CB: call 0x100d6d0a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100CA5D0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100CA5D3: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x100CA5D5: mov dword ptr [ecx], eax */
L_100CA5D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA5D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100CA5D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA5DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA5DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA5DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA5DCu);

L_100CA5DC:
    RECOMP_CALL(sub_100D6CB8); /* 0x100CA5DC: call 0x100d6cb8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    eax = eax & 0x300u; /* 0x100CA5E1: and eax, 0x300 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA5E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA5E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA5E7u);

L_100CA5E7:
    PUSH32(esp, ebp); /* 0x100CA5E7: push ebp */
    ebp = esp; /* 0x100CA5E8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA5EA: push ecx */
    PUSH32(esp, ecx); /* 0x100CA5EB: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100CA5EC: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x100CA5F0: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100CA5F3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100CA5F7: push eax */
    RECOMP_CALL(sub_100CA59D); /* 0x100CA5F8: call 0x100ca59d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA5FD: pop ecx */
    /* test eax, eax */ /* 0x100CA5FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA607; /* 0x100CA600: je 0x100ca607 */
L_100CA602:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA602: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CA604: inc eax */
    _flag_k = FK_INC;
    goto L_100CA61C; /* 0x100CA605: jmp 0x100ca61c */
L_100CA607:
    ecx = MEM32(ebp + 0x8); /* 0x100CA607: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x100CA60A: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x100CA60D: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x100CA60F: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x4) = eax; /* 0x100CA612: mov dword ptr [ecx + 4], eax */
    RECOMP_CALL(sub_100AB30C); /* 0x100CA615: call 0x100ab30c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA61A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CA61C:
    esp = ebp; /* 0x100CA61C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA61E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA61F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA620u);

L_100CA620:
    PUSH32(esp, ebp); /* 0x100CA620: push ebp */
    ebp = esp; /* 0x100CA621: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CA623: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CA624: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100CA627: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA653; /* 0x100CA62A: je 0x100ca653 */
L_100CA62C:
    eax = ebp + 0x8; /* 0x100CA62C: lea eax, [ebp + 8] */
    PUSH32(esp, 0x1Fu); /* 0x100CA62F: push 0x1f */
    PUSH32(esp, eax); /* 0x100CA631: push eax */
    RECOMP_CALL(sub_100CA5B8); /* 0x100CA632: call 0x100ca5b8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100CA637: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x100CA63A: mov eax, ecx */
    eax = ~eax; /* 0x100CA63C: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100CA63E: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100CA640: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x100CA642: lea eax, [ebp + 8] */
    PUSH32(esp, 0x1Fu); /* 0x100CA645: push 0x1f */
    PUSH32(esp, eax); /* 0x100CA647: push eax */
    MEM32(ebp + 0x8) = ecx; /* 0x100CA648: mov dword ptr [ebp + 8], ecx */
    RECOMP_CALL(sub_100CA69F); /* 0x100CA64B: call 0x100ca69f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CA650: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100CA653:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA653: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100CA655: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA656: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA657: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA658u);

L_100CA658:
    PUSH32(esp, ebp); /* 0x100CA658: push ebp */
    ebp = esp; /* 0x100CA659: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA65B: push ecx */
    PUSH32(esp, ecx); /* 0x100CA65C: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100CA65D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100CA661: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100CA665: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CA666: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x100CA669: push dword ptr [esi] */
    RECOMP_CALL(sub_100D6D5A); /* 0x100CA66B: call 0x100d6d5a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100CA670: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_100D6DD9); /* 0x100CA673: call 0x100d6dd9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100CA678: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CA67B: push eax */
    RECOMP_CALL(sub_100CA59D); /* 0x100CA67C: call 0x100ca59d */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x100CA681: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CA683: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x100CA686: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA697; /* 0x100CA689: jne 0x100ca697 */
L_100CA68B:
    eax = MEM32(esi + 0x4); /* 0x100CA68B: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x100CA68E: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA697; /* 0x100CA691: jne 0x100ca697 */
L_100CA693:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA693: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CA69A; /* 0x100CA695: jmp 0x100ca69a */
L_100CA697:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA697: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CA699: inc eax */
    _flag_k = FK_INC;
L_100CA69A:
    esi = POP32_VAL(esp); /* 0x100CA69A: pop esi */
    esp = ebp; /* 0x100CA69B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA69D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA69E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA69F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA69Fu);

L_100CA69F:
    PUSH32(esp, ebp); /* 0x100CA69F: push ebp */
    ebp = esp; /* 0x100CA6A0: mov ebp, esp */
    /* test MEM8(ebp + 0xC), 0x1Fu */ /* 0x100CA6A2: test byte ptr [ebp + 0xc], 0x1f */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA6AC; /* 0x100CA6A6: jne 0x100ca6ac */
L_100CA6A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA6A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CA6AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA6AB: ret  */
L_100CA6AC:
    PUSH32(esp, esi); /* 0x100CA6AC: push esi */
    RECOMP_CALL(sub_100D6D0A); /* 0x100CA6AD: call 0x100d6d0a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x100CA6B2: mov ecx, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x100CA6B5: mov esi, eax */
    ecx = ~ecx; /* 0x100CA6B7: not ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    esi = esi & ecx; /* 0x100CA6B9: and esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100CA6BB: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x100CA6BE: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    ecx = ecx & MEM32(ebp + 0xC); /* 0x100CA6C0: and ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x100CA6C3: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100CA6C5: push esi */
    RECOMP_CALL(sub_100D6DD9); /* 0x100CA6C6: call 0x100d6dd9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CA6CB: push esi */
    RECOMP_CALL(sub_100CA719); /* 0x100CA6CC: call 0x100ca719 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA6D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA6D2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA6D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x100CA6D5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x100CA6D7: pop esi */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100CA6D8: setne cl */
    eax = ecx; /* 0x100CA6DB: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x100CA6DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA6DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA6DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA6DFu);

L_100CA6DF:
    PUSH32(esp, ebp); /* 0x100CA6DF: push ebp */
    ebp = esp; /* 0x100CA6E0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100CA6E2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    eax = eax & 0x300u; /* 0x100CA6E5: and eax, 0x300 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x100CA6EA: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CA6F4; /* 0x100CA6ED: je 0x100ca6f4 */
L_100CA6EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA6EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CA6F1: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100CA6F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA6F3: ret  */
L_100CA6F4:
    RECOMP_CALL(sub_100D6CB8); /* 0x100CA6F4: call 0x100d6cb8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFCFFu);
    eax = eax & 0xFFFFFCFFu; /* 0x100CA6F9: and eax, 0xfffffcff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x100CA6FE: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100CA701: push eax */
    RECOMP_CALL(sub_100D6D5A); /* 0x100CA702: call 0x100d6d5a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA707: pop ecx */
    RECOMP_CALL(sub_100CA5DC); /* 0x100CA708: call 0x100ca5dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA70D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x100CA70F: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100CA712: setne cl */
    eax = ecx; /* 0x100CA715: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x100CA717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA718: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA719u);

L_100CA719:
    PUSH32(esp, ebp); /* 0x100CA719: push ebp */
    ebp = esp; /* 0x100CA71A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA71C: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100CA71D: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100CA720: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x100CA724: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CA727: push eax */
    RECOMP_CALL(sub_100CA5B8); /* 0x100CA728: call 0x100ca5b8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100CA72D: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CA730: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA731: pop ecx */
    esp = ebp; /* 0x100CA732: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA734: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA735: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA736(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA736u);

L_100CA736:
    PUSH32(esp, ebp); /* 0x100CA736: push ebp */
    ebp = esp; /* 0x100CA737: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CA739: push esi */
    PUSH32(esp, 0x1Fu); /* 0x100CA73A: push 0x1f */
    RECOMP_CALL(sub_100CA719); /* 0x100CA73C: call 0x100ca719 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100CA741: push dword ptr [ebp + 8] */
    esi = eax; /* 0x100CA744: mov esi, eax */
    RECOMP_CALL(sub_100CA658); /* 0x100CA746: call 0x100ca658 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA74B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA74C: pop ecx */
    /* test eax, eax */ /* 0x100CA74D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA75C; /* 0x100CA74F: jne 0x100ca75c */
L_100CA751:
    PUSH32(esp, esi); /* 0x100CA751: push esi */
    RECOMP_CALL(sub_100CA620); /* 0x100CA752: call 0x100ca620 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA757: pop ecx */
    /* test eax, eax */ /* 0x100CA758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA75F; /* 0x100CA75A: je 0x100ca75f */
L_100CA75C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA75C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CA75E: inc eax */
    _flag_k = FK_INC;
L_100CA75F:
    esi = POP32_VAL(esp); /* 0x100CA75F: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA760: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA762(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA762u);

L_100CA762:
    PUSH32(esp, ebp); /* 0x100CA762: push ebp */
    ebp = esp; /* 0x100CA763: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CA765: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA768: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CA76B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CA76C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CA76F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CA770: mov esi, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CA773: fstp qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x100CA776: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAA3D; /* 0x100CA778: je 0x100caa3d */
L_100CA77E:
    PUSH32(esp, edi); /* 0x100CA77E: push edi */
    eax = ebp + (-0x10); /* 0x100CA77F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CA782: push eax */
    eax = ebp + 0x8; /* 0x100CA783: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA786: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CA787: call 0x100d687a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA78C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA78D: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CA78E: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA791: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CA793: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA7FB; /* 0x100CA796: jge 0x100ca7fb */
L_100CA798:
    PUSH32(esp, 2); /* 0x100CA798: push 2 */
    edi = POP32_VAL(esp); /* 0x100CA79A: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CA79B: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CA7F1; /* 0x100CA79E: je 0x100ca7f1 */
L_100CA7A0:
    PUSH32(esp, esi); /* 0x100CA7A0: push esi */
    RECOMP_CALL(sub_100BFE08); /* 0x100CA7A1: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CA7A6: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CA7A9: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CA7AA: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CA7F1; /* 0x100CA7AD: jle 0x100ca7f1 */
L_100CA7AF:
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CA7AF: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CA7B2: je 0x100caa3c */
L_100CA7B8:
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x100CA7B8: mov ax, word ptr [esi + 6] */
    ecx = 0x8000u; /* 0x100CA7BC: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CA7C1: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CA7C5: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CA7C8: je 0x100caa3c */
L_100CA7CE:
    PUSH32(esp, 1); /* 0x100CA7CE: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CA7D0: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100CA7D5: fld qword ptr [0x10065b58] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CA7DB: fstp qword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x100CA7DD: pop ecx */
    /* cmp ebx, 1 */ /* 0x100CA7DE: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CA7E1: jle 0x100caa3c */
L_100CA7E7:
    fp_push(0.0); /* 0x100CA7E7: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x100CA7E9: fstp qword ptr [esi + 8] */
    goto L_100CAA3C; /* 0x100CA7EC: jmp 0x100caa3c */
L_100CA7F1:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA7F1: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CA7F4: fstp qword ptr [esi] */
    goto L_100CAA3C; /* 0x100CA7F6: jmp 0x100caa3c */
L_100CA7FB:
    /* test LO16(eax), LO16(eax) */ /* 0x100CA7FB: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CAA3C; /* 0x100CA7FE: jns 0x100caa3c */
L_100CA804:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100CA804: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x100CA806: mov dword ptr [ebp - 4], 0x800 */
    /* test ebx, ebx */ /* 0x100CA80D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CAA3C; /* 0x100CA80F: jle 0x100caa3c */
L_100CA815:
    eax = esi + edi * 8; /* 0x100CA815: lea eax, [esi + edi*8] */
    fp_push(*(double*)ADDR(eax)); /* 0x100CA818: fld qword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CA81A: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x100CA81D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100CA820: push eax */
    eax = ebp + 0xC; /* 0x100CA821: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CA824: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100CA825: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_100D687A); /* 0x100CA828: call 0x100d687a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA82D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA82E: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CA82F: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA832: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CA834: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CA837: jl 0x100caa3c */
L_100CA83D:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA83D: fld qword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x100CA840: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAA2C; /* 0x100CA843: je 0x100caa2c */
L_100CA849:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CA849: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CA84D: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x100CA851: mov ecx, edx */
    fp_push(0.0); /* 0x100CA853: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100CA855: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFE6u */ /* 0x100CA857: cmp ecx, -0x1a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100CA8A6; /* 0x100CA85A: jg 0x100ca8a6 */
L_100CA85C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA85C: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA85E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA860: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CA8A6; /* 0x100CA863: jnp 0x100ca8a6 */
L_100CA865:
    ecx = edi; /* 0x100CA865: mov ecx, edi */
L_100CA867:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CA867: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CA868: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA878; /* 0x100CA86A: jge 0x100ca878 */
L_100CA86C:
    fp_push(*(double*)ADDR(esi + ecx * 8)); /* 0x100CA86C: fld qword ptr [esi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA86F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA871: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA873: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA867; /* 0x100CA876: jp 0x100ca867 */
L_100CA878:
    eax = ebx + (-0x1); /* 0x100CA878: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x100CA87B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA882; /* 0x100CA87D: jge 0x100ca882 */
L_100CA87F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CA87F: inc ecx */
    _flag_k = FK_INC;
    goto L_100CA887; /* 0x100CA880: jmp 0x100ca887 */
L_100CA882:
    /* cmp ecx, ebx */ /* 0x100CA882: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA887; /* 0x100CA884: jne 0x100ca887 */
L_100CA886:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CA886: dec ecx */
    _flag_k = FK_DEC;
L_100CA887:
    /* cmp edi, ecx */ /* 0x100CA887: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA897; /* 0x100CA889: jge 0x100ca897 */
L_100CA88B:
    fp_push(*(double*)ADDR(esi + ecx * 8 + (-0x8))); /* 0x100CA88B: fld qword ptr [esi + ecx*8 - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx * 8) = _v; } /* 0x100CA88F: fstp qword ptr [esi + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CA892: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, edi */ /* 0x100CA893: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100CA88B; /* 0x100CA895: jg 0x100ca88b */
L_100CA897:
    eax = MEM32(ebp + (-0x8)); /* 0x100CA897: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x100CA89A: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x100CA89C: fstp qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CA89E: fstp qword ptr [ebp + 0x10] */
    goto L_100CAA23; /* 0x100CA8A1: jmp 0x100caa23 */
L_100CA8A6:
    PUSH32(esp, 0x1Au); /* 0x100CA8A6: push 0x1a */
    eax = POP32_VAL(esp); /* 0x100CA8A8: pop eax */
    /* cmp ecx, eax */ /* 0x100CA8A9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100CA8C3; /* 0x100CA8AB: jl 0x100ca8c3 */
L_100CA8AD:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA8AD: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA8AF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA8B1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CA8C3; /* 0x100CA8B4: jnp 0x100ca8c3 */
L_100CA8B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA8B6: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x100CA8B8: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA8BB: fstp st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CA8BD: inc edi */
    _flag_k = FK_INC;
    goto L_100CAA23; /* 0x100CA8BE: jmp 0x100caa23 */
L_100CA8C3:
    ecx = MEM32(ebp + (-0x8)); /* 0x100CA8C3: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CA8C6: fld qword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CA8C8: faddp st(2) */
    fp_xch(1); /* 0x100CA8CA: fxch st(1) */
    *(double*)ADDR(ecx) = _st[0]; /* 0x100CA8CC: fst qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA8CE: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA8D0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA8D2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA902; /* 0x100CA8D5: jp 0x100ca902 */
L_100CA8D7:
    edx = edi; /* 0x100CA8D7: mov edx, edi */
L_100CA8D9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CA8D9: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x100CA8DA: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA8EE; /* 0x100CA8DC: jge 0x100ca8ee */
L_100CA8DE:
    fp_push(*(double*)ADDR(esi + edx * 8)); /* 0x100CA8DE: fld qword ptr [esi + edx*8] */
    *(double*)ADDR(esi + edx * 8 + (-0x8)) = _st[0]; /* 0x100CA8E1: fst qword ptr [esi + edx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA8E5: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA8E7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA8E9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA8D9; /* 0x100CA8EC: jp 0x100ca8d9 */
L_100CA8EE:
    *(double*)ADDR(esi + ebx * 8 + (-0x8)) = _st[0]; /* 0x100CA8EE: fst qword ptr [esi + ebx*8 - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CA8F2: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA8F4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA8F6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA8F8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA904; /* 0x100CA8FB: jp 0x100ca904 */
L_100CA8FD:
    goto L_100CAA3C; /* 0x100CA8FD: jmp 0x100caa3c */
L_100CA902:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA902: fstp st(0) */
L_100CA904:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CA904: fld qword ptr [ecx] */
    eax = ebp + 0x10; /* 0x100CA906: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CA909: push eax */
    eax = ebp + 0x8; /* 0x100CA90A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA90D: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CA90E: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D687A); /* 0x100CA911: call 0x100d687a */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x100CA916: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100CA919: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CA91D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA91E: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x100CA91F: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0x1A); /* 0x100CA923: lea ecx, [edx - 0x1a] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CA926: cwde  */
    /* cmp ecx, eax */ /* 0x100CA927: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA9BC; /* 0x100CA929: jge 0x100ca9bc */
L_100CA92F:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x100CA92F: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0x1Au); /* 0x100CA933: push 0x1a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x100CA935: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x100CA938: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CA939: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x100CA93C: movzx eax, ax */
    PUSH32(esp, eax); /* 0x100CA93F: push eax */
    eax = ebp + 0x10; /* 0x100CA940: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CA943: push eax */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CA944: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CA949: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA94D: push eax */
    eax = ebp + 0x10; /* 0x100CA94E: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CA951: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100CA952: call 0x100d649e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x100CA957: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CA95A: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(eax)); /* 0x100CA95D: fld qword ptr [eax] */
    _st[0] -= *(double*)ADDR(ebp + 0x10); /* 0x100CA95F: fsub qword ptr [ebp + 0x10] */
    *(double*)ADDR(eax) = _st[0]; /* 0x100CA962: fst qword ptr [eax] */
    fp_push(0.0); /* 0x100CA964: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA966: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA968: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CA96A: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CA96C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA98E; /* 0x100CA96F: jp 0x100ca98e */
L_100CA971:
    ecx = edi; /* 0x100CA971: mov ecx, edi */
L_100CA973:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CA973: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CA974: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CA988; /* 0x100CA976: jge 0x100ca988 */
L_100CA978:
    fp_push(*(double*)ADDR(esi + ecx * 8)); /* 0x100CA978: fld qword ptr [esi + ecx*8] */
    *(double*)ADDR(esi + ecx * 8 + (-0x8)) = _st[0]; /* 0x100CA97B: fst qword ptr [esi + ecx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA97F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA981: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA983: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA973; /* 0x100CA986: jp 0x100ca973 */
L_100CA988:
    { double _v = fp_pop(); *(double*)ADDR(esi + ebx * 8 + (-0x8)) = _v; } /* 0x100CA988: fstp qword ptr [esi + ebx*8 - 8] */
    goto L_100CA990; /* 0x100CA98C: jmp 0x100ca990 */
L_100CA98E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA98E: fstp st(0) */
L_100CA990:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100CA990: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CA99F; /* 0x100CA991: jne 0x100ca99f */
L_100CA993:
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x100CA993: mov dword ptr [ebp - 4], 0x800 */
    goto L_100CAA23; /* 0x100CA99A: jmp 0x100caa23 */
L_100CA99F:
    fp_push(*(double*)ADDR(esi + edi * 8 + (-0x8))); /* 0x100CA99F: fld qword ptr [esi + edi*8 - 8] */
    eax = ebp + (-0x10); /* 0x100CA9A3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CA9A6: push eax */
    eax = ebp + 0xC; /* 0x100CA9A7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CA9AA: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CA9AB: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100D687A); /* 0x100CA9AE: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CA9B3: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CA9B7: mov dword ptr [ebp - 4], eax */
    goto L_100CAA21; /* 0x100CA9BA: jmp 0x100caa21 */
L_100CA9BC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CA9BC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100CA9BD: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CA9BF: je 0x100caa3c */
L_100CA9C1:
    eax = MEM32(ebp + (-0x8)); /* 0x100CA9C1: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CA9C4: push eax */
    fp_push(*(double*)ADDR(eax)); /* 0x100CA9C5: fld qword ptr [eax] */
    eax = ebp + 0xC; /* 0x100CA9C7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CA9CA: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CA9CB: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D687A); /* 0x100CA9CE: call 0x100d687a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x100CA9D3: push 0x1a */
    eax = POP32_VAL(esp); /* 0x100CA9D5: pop eax */
    PUSH32(esp, eax); /* 0x100CA9D6: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x100CA9D7: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CA9DA: push eax */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CA9DB: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CA9E0: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CA9E4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100CA9E5: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D649E); /* 0x100CA9E8: call 0x100d649e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x100CA9ED: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CA9F0: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA9F3: fld qword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CA9F6: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CA9FA: mov dword ptr [ebp - 4], eax */
    _st[0] -= *(double*)ADDR(ecx); /* 0x100CA9FD: fsub qword ptr [ecx] */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100CA9FF: fst qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CAA02: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAA04: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAA06: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CAA08: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CAA11; /* 0x100CAA0B: jp 0x100caa11 */
L_100CAA0D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CAA0D: fstp st(0) */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CAA0F: fld qword ptr [ecx] */
L_100CAA11:
    eax = ebp + (-0x10); /* 0x100CAA11: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CAA14: push eax */
    eax = ebp + 0x8; /* 0x100CAA15: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CAA18: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CAA19: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100D687A); /* 0x100CAA1C: call 0x100d687a */
    RECOMP_FLAGS_IN();
L_100CAA21:
    ecx = POP32_VAL(esp); /* 0x100CAA21: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAA22: pop ecx */
L_100CAA23:
    /* cmp edi, ebx */ /* 0x100CAA23: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CAA25: jge 0x100caa3c */
L_100CAA27:
    RECOMP_BACKEDGE();
    goto L_100CA815; /* 0x100CAA27: jmp 0x100ca815 */
L_100CAA2C:
    ecx = edi + 0x1; /* 0x100CAA2C: lea ecx, [edi + 1] */
    { double _v = fp_pop(); *(double*)ADDR(esi + edi * 8) = _v; } /* 0x100CAA2F: fstp qword ptr [esi + edi*8] */
    /* cmp ecx, ebx */ /* 0x100CAA32: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CAA3C; /* 0x100CAA34: jge 0x100caa3c */
L_100CAA36:
    fp_push(0.0); /* 0x100CAA36: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + edi * 8 + 0x8) = _v; } /* 0x100CAA38: fstp qword ptr [esi + edi*8 + 8] */
L_100CAA3C:
    edi = POP32_VAL(esp); /* 0x100CAA3C: pop edi */
L_100CAA3D:
    eax = esi; /* 0x100CAA3D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CAA3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CAA40: pop ebx */
    esp = ebp; /* 0x100CAA41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CAA43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CAA44: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CAA45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CAA45u);

L_100CAA45:
    PUSH32(esp, ebp); /* 0x100CAA45: push ebp */
    ebp = esp; /* 0x100CAA46: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CAA48: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CAA49: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x100CAA4B: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CAA83; /* 0x100CAA4E: jle 0x100caa83 */
L_100CAA50:
    fp_push(0.0); /* 0x100CAA50: fldz  */
    PUSH32(esp, edi); /* 0x100CAA52: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100CAA53: mov edi, dword ptr [ebp + 0x10] */
L_100CAA56:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x100CAA56: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAA59: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAA5B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CAA5D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CAA82; /* 0x100CAA60: jnp 0x100caa82 */
L_100CAA62:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x100CAA62: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x100CAA65: push ecx */
    PUSH32(esp, ecx); /* 0x100CAA66: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAA67: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100CAA6A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100CAA6D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100CA762); /* 0x100CAA70: call 0x100ca762 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CAA75: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CAA77: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CAA7A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x100CAA7B: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CAA56; /* 0x100CAA7E: jl 0x100caa56 */
L_100CAA80:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CAA80: fstp st(0) */
L_100CAA82:
    edi = POP32_VAL(esp); /* 0x100CAA82: pop edi */
L_100CAA83:
    eax = MEM32(ebp + 0x8); /* 0x100CAA83: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x100CAA86: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CAA87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CAA88: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CAA89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CAA89u);

L_100CAA89:
    PUSH32(esp, ebp); /* 0x100CAA89: push ebp */
    ebp = esp; /* 0x100CAA8A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x100CAA8C: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CAA8F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CAA94: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CAA96: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CAA99: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CAA9C: fldz  */
    PUSH32(esp, ebx); /* 0x100CAA9E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CAA9F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CAAA2: push esi */
    PUSH32(esp, edi); /* 0x100CAAA3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CAAA4: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x100CAAA7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CAB00; /* 0x100CAAA9: jle 0x100cab00 */
L_100CAAAB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CAAAB: fstp st(0) */
    eax = ebp + (-0x24); /* 0x100CAAAD: lea eax, [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(edi); /* 0x100CAAB0: fmul qword ptr [edi] */
    PUSH32(esp, eax); /* 0x100CAAB2: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100CAAB3: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_100BFE08); /* 0x100CAAB6: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CAABB: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CAABE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100CAAC0: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CAAC1: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100CAAF7; /* 0x100CAAC4: jg 0x100caaf7 */
L_100CAAC6:
    /* cmp LO16(esi), 2 */ /* 0x100CAAC6: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CAAD4; /* 0x100CAACA: jne 0x100caad4 */
L_100CAACC:
    PUSH32(esp, 1); /* 0x100CAACC: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CAACE: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CAAD3: pop ecx */
L_100CAAD4:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CAAD4: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CAAD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CAAD9: fstp qword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CAADB: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CABE6; /* 0x100CAADE: jge 0x100cabe6 */
L_100CAAE4:
    /* cmp ebx, 1 */ /* 0x100CAAE4: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CABE6; /* 0x100CAAE7: jle 0x100cabe6 */
L_100CAAED:
    fp_push(0.0); /* 0x100CAAED: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x100CAAEF: fstp qword ptr [edi + 8] */
    goto L_100CABE6; /* 0x100CAAF2: jmp 0x100cabe6 */
L_100CAAF7:
    fp_push(0.0); /* 0x100CAAF7: fldz  */
    *(double*)ADDR(edi) = _st[0]; /* 0x100CAAF9: fst qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CAAFB: fld qword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x100CAAFE: fxch st(1) */
L_100CAB00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CAB00: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CAB02: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CAB04: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x100CAB05: mov dword ptr [ebp - 0x2c], edx */
    /* test ebx, ebx */ /* 0x100CAB08: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CAB15; /* 0x100CAB0A: jg 0x100cab15 */
L_100CAB0C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CAB0C: fstp st(0) */
    goto L_100CABE4; /* 0x100CAB0E: jmp 0x100cabe4 */
L_100CAB13:
    fp_xch(1); /* 0x100CAB13: fxch st(1) */
L_100CAB15:
    /* cmp esi, 4 */ /* 0x100CAB15: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CAB4D; /* 0x100CAB18: jge 0x100cab4d */
L_100CAB1A:
    eax = edx + esi; /* 0x100CAB1A: lea eax, [edx + esi] */
    ecx = edi + eax * 8; /* 0x100CAB1D: lea ecx, [edi + eax*8] */
L_100CAB20:
    eax = edx + esi; /* 0x100CAB20: lea eax, [edx + esi] */
    /* cmp eax, ebx */ /* 0x100CAB23: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CABF9; /* 0x100CAB25: jge 0x100cabf9 */
L_100CAB2B:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CAB2B: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAB2D: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAB2F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CAB31: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CABF9; /* 0x100CAB34: jnp 0x100cabf9 */
L_100CAB3A:
    fp_push(_st[1]); /* 0x100CAB3A: fld st(1) */
    _st[0] *= *(double*)ADDR(ecx); /* 0x100CAB3C: fmul qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _v; } /* 0x100CAB3E: fstp qword ptr [ebp + esi*8 - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CAB42: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ecx) = _st[0]; /* 0x100CAB43: fst qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x100CAB45: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x100CAB48: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CAB20; /* 0x100CAB4B: jl 0x100cab20 */
L_100CAB4D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CAB4D: fstp st(1) */
L_100CAB4F:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CAB4F: fld qword ptr [ebp - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAB52: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAB54: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CAB56: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CAB58: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CABE4; /* 0x100CAB5B: jnp 0x100cabe4 */
L_100CAB61:
    eax = ebp + (-0x34); /* 0x100CAB61: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CAB64: push eax */
    eax = ebp + (-0x28); /* 0x100CAB65: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100CAB68: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x100CAB69: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_100D687A); /* 0x100CAB6C: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x100CAB71: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0x1Au); /* 0x100CAB74: push 0x1a */
    PUSH32(esp, eax); /* 0x100CAB76: push eax */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CAB77: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x28)); /* 0x100CAB7C: movsx eax, word ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100CAB80: push eax */
    eax = ebp + (-0x34); /* 0x100CAB81: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CAB84: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100CAB85: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CAB8A: fld qword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CAB8D: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAB90: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CAB93: push ebx */
    PUSH32(esp, edi); /* 0x100CAB94: push edi */
    RECOMP_CALL(sub_100CA762); /* 0x100CAB95: call 0x100ca762 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CAB9A: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CAB9D: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebp + (-0x34)); /* 0x100CABA0: fsub qword ptr [ebp - 0x34] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CABA3: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CABA6: push ebx */
    PUSH32(esp, edi); /* 0x100CABA7: push edi */
    RECOMP_CALL(sub_100CA762); /* 0x100CABA8: call 0x100ca762 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CABAD: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CABAF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CABB1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CABB2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x100CABB5: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CABCF; /* 0x100CABB7: jle 0x100cabcf */
L_100CABB9:
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x24))); /* 0x100CABB9: fld qword ptr [ebp + ecx*8 - 0x24] */
    *(double*)ADDR(ebp + ecx * 8 + (-0x2C)) = _st[0]; /* 0x100CABBD: fst qword ptr [ebp + ecx*8 - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CABC1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CABC3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CABC5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CABCF; /* 0x100CABC8: jnp 0x100cabcf */
L_100CABCA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CABCA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x100CABCB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CABB9; /* 0x100CABCD: jl 0x100cabb9 */
L_100CABCF:
    edx = MEM32(ebp + (-0x2C)); /* 0x100CABCF: mov edx, dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CABD2: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CABD5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100CABD6: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x100CABD7: mov dword ptr [ebp - 0x2c], edx */
    /* cmp edx, ebx */ /* 0x100CABDA: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CAB13; /* 0x100CABDC: jl 0x100cab13 */
L_100CABE2:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CABE2: fstp st(1) */
L_100CABE4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CABE4: fstp st(0) */
L_100CABE6:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CABE6: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x100CABE9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100CABEB: pop edi */
    esi = POP32_VAL(esp); /* 0x100CABEC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CABED: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CABEF: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CABF0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CABF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CABF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CABF8: ret  */
L_100CABF9:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CABF9: fstp st(1) */
    PUSH32(esp, 8); /* 0x100CABFB: push 8 */
    *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _st[0]; /* 0x100CABFD: fst qword ptr [ebp + esi*8 - 0x24] */
    esi = POP32_VAL(esp); /* 0x100CAC01: pop esi */
    RECOMP_BACKEDGE();
    goto L_100CAB4F; /* 0x100CAC02: jmp 0x100cab4f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100CAC07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CAC07u);

L_100CAC07:
    PUSH32(esp, ebp); /* 0x100CAC07: push ebp */
    ebp = esp; /* 0x100CAC08: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CAC0A: push ecx */
    PUSH32(esp, ecx); /* 0x100CAC0B: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CAC0C: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CAC0F: push ebx */
    PUSH32(esp, esi); /* 0x100CAC10: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CAC11: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CAC14: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100CAC15: mov edi, dword ptr [ebp + 0xc] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CAC18: fst qword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x100CAC1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CACEA; /* 0x100CAC1D: jle 0x100cacea */
L_100CAC23:
    /* cmp edi, 1 */ /* 0x100CAC23: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CACE6; /* 0x100CAC26: je 0x100cace6 */
L_100CAC2C:
    eax = ebp + (-0x8); /* 0x100CAC2C: lea eax, [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CAC2F: fstp st(0) */
    PUSH32(esp, eax); /* 0x100CAC31: push eax */
    eax = ebp + 0xC; /* 0x100CAC32: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CAC35: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CAC36: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CAC3B: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CAC3E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAC3F: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CAC40: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CACE3; /* 0x100CAC43: je 0x100cace3 */
L_100CAC49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CAC49: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CAC4B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CAC5F; /* 0x100CAC4E: jge 0x100cac5f */
L_100CAC50:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CAC50: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CAC53: fstp qword ptr [esi] */
    fp_push(0.0); /* 0x100CAC55: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x100CAC57: fstp qword ptr [esi + 8] */
    goto L_100CACEC; /* 0x100CAC5A: jmp 0x100cacec */
L_100CAC5F:
    eax = ebp + (-0x8); /* 0x100CAC5F: lea eax, [ebp - 8] */
    PUSH32(esp, 0x1Au); /* 0x100CAC62: push 0x1a */
    PUSH32(esp, eax); /* 0x100CAC64: push eax */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CAC65: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CAC6A: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CAC6E: push eax */
    eax = ebp + (-0x8); /* 0x100CAC6F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CAC72: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100CAC73: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CAC78: fld qword ptr [ebp - 8] */
    ebx = esi + 0x8; /* 0x100CAC7B: lea ebx, [esi + 8] */
    *(double*)ADDR(esi) = _st[0]; /* 0x100CAC7E: fst qword ptr [esi] */
    _st[0] = *(double*)ADDR(ebp + 0x10) - _st[0]; /* 0x100CAC80: fsubr qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CAC83: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100CAC86: fst qword ptr [ebp + 0x10] */
    *(double*)ADDR(ebx) = _st[0]; /* 0x100CAC89: fst qword ptr [ebx] */
    /* cmp edi, 2 */ /* 0x100CAC8B: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CACEA; /* 0x100CAC8E: jle 0x100cacea */
L_100CAC90:
    fp_push(0.0); /* 0x100CAC90: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAC92: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAC94: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CAC96: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CAC98: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CACDE; /* 0x100CAC9B: jnp 0x100cacde */
L_100CAC9D:
    eax = ebp + 0xC; /* 0x100CAC9D: lea eax, [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CACA0: fstp st(0) */
    PUSH32(esp, ebx); /* 0x100CACA2: push ebx */
    PUSH32(esp, eax); /* 0x100CACA3: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CACA4: call 0x100d687a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x100CACA9: push 0x1a */
    PUSH32(esp, ebx); /* 0x100CACAB: push ebx */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CACAC: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CACB1: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CACB5: push eax */
    PUSH32(esp, ebx); /* 0x100CACB6: push ebx */
    RECOMP_CALL(sub_100D649E); /* 0x100CACB7: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CACBC: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CACBF: add esp, 0x18 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebx); /* 0x100CACC2: fsub qword ptr [ebx] */
    *(double*)ADDR(esi + 0x10) = _st[0]; /* 0x100CACC4: fst qword ptr [esi + 0x10] */
    /* cmp edi, 3 */ /* 0x100CACC7: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CACEA; /* 0x100CACCA: jle 0x100cacea */
L_100CACCC:
    fp_push(0.0); /* 0x100CACCC: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CACCE: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CACD0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CACD2: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CACD4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CACEA; /* 0x100CACD7: jnp 0x100cacea */
L_100CACD9:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x18) = _v; } /* 0x100CACD9: fstp qword ptr [esi + 0x18] */
    goto L_100CACEC; /* 0x100CACDC: jmp 0x100cacec */
L_100CACDE:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x100CACDE: fstp qword ptr [esi + 0x10] */
    goto L_100CACEC; /* 0x100CACE1: jmp 0x100cacec */
L_100CACE3:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CACE3: fld qword ptr [ebp - 8] */
L_100CACE6:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CACE6: fstp qword ptr [esi] */
    goto L_100CACEC; /* 0x100CACE8: jmp 0x100cacec */
L_100CACEA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CACEA: fstp st(0) */
L_100CACEC:
    edi = POP32_VAL(esp); /* 0x100CACEC: pop edi */
    eax = esi; /* 0x100CACED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CACEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CACF0: pop ebx */
    esp = ebp; /* 0x100CACF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CACF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CACF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CACF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CACF5u);

L_100CACF5:
    PUSH32(esp, ebp); /* 0x100CACF5: push ebp */
    ebp = esp; /* 0x100CACF6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x100CACF8: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CACFE: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CAD03: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CAD05: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CAD08: fld qword ptr [ebp + 8] */
    eax = ebp + (-0x60); /* 0x100CAD0B: lea eax, [ebp - 0x60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x60)) = _v; } /* 0x100CAD0E: fstp qword ptr [ebp - 0x60] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CAD11: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CAD14: push ebx */
    PUSH32(esp, edi); /* 0x100CAD15: push edi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x100CAD16: fstp qword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x100CAD19: fld qword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100CAD1C: push eax */
    eax = ebp + (-0x4C); /* 0x100CAD1D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100CAD20: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x100CAD21: fstp qword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_100D687A); /* 0x100CAD24: call 0x100d687a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CAD29: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAD2A: pop ecx */
    PUSH32(esp, 2); /* 0x100CAD2B: push 2 */
    edi = (uint32_t)LO16(eax); /* 0x100CAD2D: movzx edi, ax */
    ebx = POP32_VAL(esp); /* 0x100CAD30: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100CAD31: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CAD3E; /* 0x100CAD34: jne 0x100cad3e */
L_100CAD36:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CAD36: fld qword ptr [ebp + 8] */
    goto L_100CAEFA; /* 0x100CAD39: jmp 0x100caefa */
L_100CAD3E:
    PUSH32(esp, esi); /* 0x100CAD3E: push esi */
    eax = ebp + (-0x68); /* 0x100CAD3F: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x100CAD42: push eax */
    eax = ebp + (-0x50); /* 0x100CAD43: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x100CAD46: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CAD47: call 0x100d687a */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CAD4C: movzx esi, ax */
    ecx = POP32_VAL(esp); /* 0x100CAD4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAD50: pop ecx */
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100CAD51: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CAD5E; /* 0x100CAD54: jne 0x100cad5e */
L_100CAD56:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CAD56: fld qword ptr [ebp + 0x10] */
    goto L_100CAEF9; /* 0x100CAD59: jmp 0x100caef9 */
L_100CAD5E:
    eax = ebp + (-0x58); /* 0x100CAD5E: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100CAD61: push eax */
    eax = ebp + (-0x48); /* 0x100CAD62: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x100CAD65: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CAD66: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CAD6B: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CAD6E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAD6F: pop ecx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100CAD70: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAD8F; /* 0x100CAD73: je 0x100cad8f */
L_100CAD75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CAD75: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CAD77: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(edi), LO16(edx) */ /* 0x100CAD78: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAEBD; /* 0x100CAD7B: je 0x100caebd */
L_100CAD81:
    /* cmp LO16(esi), LO16(edx) */ /* 0x100CAD81: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAEBD; /* 0x100CAD84: je 0x100caebd */
L_100CAD8A:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CAD8A: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CAD97; /* 0x100CAD8D: jne 0x100cad97 */
L_100CAD8F:
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x100CAD8F: fld qword ptr [ebp + 0x18] */
    goto L_100CAEF9; /* 0x100CAD92: jmp 0x100caef9 */
L_100CAD97:
    /* test LO16(edi), LO16(edi) */ /* 0x100CAD97: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CAD9A: je 0x100caee1 */
L_100CADA0:
    /* test LO16(esi), LO16(esi) */ /* 0x100CADA0: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CADA3: je 0x100caee1 */
L_100CADA9:
    /* test LO16(eax), LO16(eax) */ /* 0x100CADA9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CADAC: je 0x100caee1 */
L_100CADB2:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4C)); /* 0x100CADB2: movsx eax, word ptr [ebp - 0x4c] */
    edx = 0x8000u; /* 0x100CADB6: mov edx, 0x8000 */
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x50)); /* 0x100CADBB: movsx esi, word ptr [ebp - 0x50] */
    SET_LO16(ecx, MEM16(ebp + (-0x48))); /* 0x100CADBF: mov cx, word ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100CADC3: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xE); /* 0x100CADC5: mov eax, dword ptr [ebp + 0xe] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - LO16(esi)); /* 0x100CADC8: sub cx, si */
    _flag_k = FK_NARROW(FK_CMP, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CADCB: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x1E)); /* 0x100CADCF: xor ax, word ptr [ebp + 0x1e] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x48)) = (uint16_t)(LO16(ecx)); /* 0x100CADD3: mov word ptr [ebp - 0x48], cx */
    /* test LO16(edx), LO16(eax) */ /* 0x100CADD7: test dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CADDA: je 0x100caee1 */
L_100CADE0:
    PUSH32(esp, 4); /* 0x100CADE0: push 4 */
    eax = ebx + ecx; /* 0x100CADE2: lea eax, [ebx + ecx] */
    edi = POP32_VAL(esp); /* 0x100CADE5: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CADE6: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CADE9: ja 0x100caee1 */
L_100CADEF:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x100CADEF: movsx eax, cx */
    PUSH32(esp, eax); /* 0x100CADF2: push eax */
    eax = ebp + (-0x58); /* 0x100CADF3: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100CADF6: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100CADF7: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x60))); /* 0x100CADFC: fld qword ptr [ebp - 0x60] */
    eax = ebp + (-0x24); /* 0x100CADFF: lea eax, [ebp - 0x24] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE02: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CAE05: push edi */
    PUSH32(esp, eax); /* 0x100CAE06: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CAE07: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x68))); /* 0x100CAE0C: fld qword ptr [ebp - 0x68] */
    eax = ebp + (-0x78); /* 0x100CAE0F: lea eax, [ebp - 0x78] */
    ecx = POP32_VAL(esp); /* 0x100CAE12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAE13: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE14: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CAE17: push ebx */
    PUSH32(esp, eax); /* 0x100CAE18: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CAE19: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x58))); /* 0x100CAE1E: fld qword ptr [ebp - 0x58] */
    eax = ebp + (-0x88); /* 0x100CAE21: lea eax, [ebp - 0x88] */
    ecx = POP32_VAL(esp); /* 0x100CAE27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAE28: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE29: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CAE2C: push ebx */
    PUSH32(esp, eax); /* 0x100CAE2D: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CAE2E: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x78))); /* 0x100CAE33: fld qword ptr [ebp - 0x78] */
    eax = ebp + (-0x24); /* 0x100CAE36: lea eax, [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x100CAE39: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAE3A: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE3B: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CAE3E: push edi */
    PUSH32(esp, eax); /* 0x100CAE3F: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CAE40: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x70))); /* 0x100CAE45: fld qword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CAE48: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CAE4B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CAE4D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CAE4F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CAE51: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CAE8C; /* 0x100CAE54: jnp 0x100cae8c */
L_100CAE56:
    fp_push(*(double*)ADDR(ebp + (-0x60))); /* 0x100CAE56: fld qword ptr [ebp - 0x60] */
    eax = ebp + (-0x44); /* 0x100CAE59: lea eax, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x100CAE5C: push ecx */
    PUSH32(esp, ecx); /* 0x100CAE5D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE5E: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CAE61: push edi */
    PUSH32(esp, eax); /* 0x100CAE62: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CAE63: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x70))); /* 0x100CAE68: fld qword ptr [ebp - 0x70] */
    eax = ebp + (-0x44); /* 0x100CAE6B: lea eax, [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x100CAE6E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAE6F: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CAE70: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CAE73: push edi */
    PUSH32(esp, eax); /* 0x100CAE74: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CAE75: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100CAE7A: push edi */
    eax = ebp + (-0x44); /* 0x100CAE7B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x100CAE7E: push eax */
    eax = ebp + (-0x24); /* 0x100CAE7F: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CAE82: push edi */
    PUSH32(esp, eax); /* 0x100CAE83: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CAE84: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CAE89: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CAE8C:
    PUSH32(esp, ebx); /* 0x100CAE8C: push ebx */
    eax = ebp + (-0x88); /* 0x100CAE8D: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x100CAE93: push eax */
    eax = ebp + (-0x24); /* 0x100CAE94: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CAE97: push edi */
    PUSH32(esp, eax); /* 0x100CAE98: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CAE99: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x100CAE9E: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CAEA1: push edi */
    PUSH32(esp, eax); /* 0x100CAEA2: push eax */
    RECOMP_CALL(sub_100CBA16); /* 0x100CAEA3: call 0x100cba16 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x100CAEA8: lea eax, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x100CAEAB: push esi */
    PUSH32(esp, eax); /* 0x100CAEAC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x100CAEAD: fstp qword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_100D649E); /* 0x100CAEB0: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x58))); /* 0x100CAEB5: fld qword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CAEB8: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_100CAEF9; /* 0x100CAEBB: jmp 0x100caef9 */
L_100CAEBD:
    /* test LO16(edi), LO16(edi) */ /* 0x100CAEBD: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEEC; /* 0x100CAEC0: je 0x100caeec */
L_100CAEC2:
    /* test LO16(esi), LO16(esi) */ /* 0x100CAEC2: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CAEEC; /* 0x100CAEC5: je 0x100caeec */
L_100CAEC7:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CAEC7: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CAEE1; /* 0x100CAECA: jne 0x100caee1 */
L_100CAECC:
    eax = MEM32(ebp + 0xE); /* 0x100CAECC: mov eax, dword ptr [ebp + 0xe] */
    ecx = 0x8000u; /* 0x100CAECF: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CAED4: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x1E)); /* 0x100CAED8: xor ax, word ptr [ebp + 0x1e] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CAEDC: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CAEEC; /* 0x100CAEDF: jne 0x100caeec */
L_100CAEE1:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CAEE1: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100CAEE4: fmul qword ptr [ebp + 0x10] */
    _st[0] += *(double*)ADDR(ebp + 0x18); /* 0x100CAEE7: fadd qword ptr [ebp + 0x18] */
    goto L_100CAEF9; /* 0x100CAEEA: jmp 0x100caef9 */
L_100CAEEC:
    PUSH32(esp, edx); /* 0x100CAEEC: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CAEED: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100CAEF2: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100CAEF8: pop ecx */
L_100CAEF9:
    esi = POP32_VAL(esp); /* 0x100CAEF9: pop esi */
L_100CAEFA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CAEFA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100CAEFD: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CAEFE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CAF00: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CAF01: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CAF06: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CAF08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CAF09: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CAF0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CAF0Au);

L_100CAF0A:
    PUSH32(esp, ebp); /* 0x100CAF0A: push ebp */
    ebp = esp; /* 0x100CAF0B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CAF0D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CAF10: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CAF13: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CAF14: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CAF17: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CAF18: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CAF1B: fstp dword ptr [ebp - 0xc] */
    /* test ebx, ebx */ /* 0x100CAF1E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB200; /* 0x100CAF20: je 0x100cb200 */
L_100CAF26:
    PUSH32(esp, edi); /* 0x100CAF26: push edi */
    eax = ebp + (-0xC); /* 0x100CAF27: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CAF2A: push eax */
    eax = ebp + 0x8; /* 0x100CAF2B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CAF2E: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CAF2F: call 0x100d690e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CAF34: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAF35: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CAF36: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CAF39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CAF3B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CAFA3; /* 0x100CAF3E: jge 0x100cafa3 */
L_100CAF40:
    PUSH32(esp, 2); /* 0x100CAF40: push 2 */
    edi = POP32_VAL(esp); /* 0x100CAF42: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CAF43: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CAF99; /* 0x100CAF46: je 0x100caf99 */
L_100CAF48:
    PUSH32(esp, esi); /* 0x100CAF48: push esi */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CAF49: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CAF4E: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CAF51: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CAF52: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CAF99; /* 0x100CAF55: jle 0x100caf99 */
L_100CAF57:
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CAF57: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CAF5A: je 0x100cb1ff */
L_100CAF60:
    SET_LO16(eax, MEM16(esi + 0x2)); /* 0x100CAF60: mov ax, word ptr [esi + 2] */
    ecx = 0x8000u; /* 0x100CAF64: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x12)); /* 0x100CAF69: xor ax, word ptr [ebp + 0x12] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CAF6D: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CAF70: je 0x100cb1ff */
L_100CAF76:
    PUSH32(esp, 1); /* 0x100CAF76: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CAF78: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CAF7D: fld dword ptr [0x10065b78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100CAF83: fstp dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x100CAF85: pop ecx */
    /* cmp ebx, 1 */ /* 0x100CAF86: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CAF89: jle 0x100cb1ff */
L_100CAF8F:
    fp_push(0.0); /* 0x100CAF8F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x100CAF91: fstp dword ptr [esi + 4] */
    goto L_100CB1FF; /* 0x100CAF94: jmp 0x100cb1ff */
L_100CAF99:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CAF99: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100CAF9C: fstp dword ptr [esi] */
    goto L_100CB1FF; /* 0x100CAF9E: jmp 0x100cb1ff */
L_100CAFA3:
    /* test LO16(eax), LO16(eax) */ /* 0x100CAFA3: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CB1FF; /* 0x100CAFA6: jns 0x100cb1ff */
L_100CAFAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100CAFAC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x100u; /* 0x100CAFAE: mov dword ptr [ebp - 4], 0x100 */
    /* test ebx, ebx */ /* 0x100CAFB5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CB1FF; /* 0x100CAFB7: jle 0x100cb1ff */
L_100CAFBD:
    eax = esi + edi * 4; /* 0x100CAFBD: lea eax, [esi + edi*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x100CAFC0: fld dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CAFC2: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x100CAFC5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CAFC8: push eax */
    eax = ebp + 0xC; /* 0x100CAFC9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CAFCC: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CAFCD: fstp dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100D690E); /* 0x100CAFD0: call 0x100d690e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CAFD5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CAFD6: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CAFD7: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CAFDA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CAFDC: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CAFDF: jl 0x100cb1ff */
L_100CAFE5:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CAFE5: fld dword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x100CAFE8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB1EF; /* 0x100CAFEB: je 0x100cb1ef */
L_100CAFF1:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CAFF1: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CAFF5: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x100CAFF9: mov ecx, edx */
    fp_push(0.0); /* 0x100CAFFB: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100CAFFD: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFF4u */ /* 0x100CAFFF: cmp ecx, -0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100CB04E; /* 0x100CB002: jg 0x100cb04e */
L_100CB004:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB004: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB006: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB008: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB04E; /* 0x100CB00B: jnp 0x100cb04e */
L_100CB00D:
    ecx = edi; /* 0x100CB00D: mov ecx, edi */
L_100CB00F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB00F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CB010: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB020; /* 0x100CB012: jge 0x100cb020 */
L_100CB014:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x100CB014: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB017: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB019: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB01B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB00F; /* 0x100CB01E: jp 0x100cb00f */
L_100CB020:
    eax = ebx + (-0x1); /* 0x100CB020: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x100CB023: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB02A; /* 0x100CB025: jge 0x100cb02a */
L_100CB027:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB027: inc ecx */
    _flag_k = FK_INC;
    goto L_100CB02F; /* 0x100CB028: jmp 0x100cb02f */
L_100CB02A:
    /* cmp ecx, ebx */ /* 0x100CB02A: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB02F; /* 0x100CB02C: jne 0x100cb02f */
L_100CB02E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CB02E: dec ecx */
    _flag_k = FK_DEC;
L_100CB02F:
    /* cmp edi, ecx */ /* 0x100CB02F: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB03F; /* 0x100CB031: jge 0x100cb03f */
L_100CB033:
    fp_push(*(float*)&MEM32(esi + ecx * 4 + (-0x4))); /* 0x100CB033: fld dword ptr [esi + ecx*4 - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx * 4) = _v; } /* 0x100CB037: fstp dword ptr [esi + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CB03A: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, edi */ /* 0x100CB03B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100CB033; /* 0x100CB03D: jg 0x100cb033 */
L_100CB03F:
    eax = MEM32(ebp + (-0x8)); /* 0x100CB03F: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x100CB042: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x100CB044: fstp dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB046: fstp dword ptr [ebp + 0x10] */
    goto L_100CB1E6; /* 0x100CB049: jmp 0x100cb1e6 */
L_100CB04E:
    PUSH32(esp, 0xCu); /* 0x100CB04E: push 0xc */
    eax = POP32_VAL(esp); /* 0x100CB050: pop eax */
    /* cmp ecx, eax */ /* 0x100CB051: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB06B; /* 0x100CB053: jl 0x100cb06b */
L_100CB055:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB055: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB057: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB059: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB06B; /* 0x100CB05C: jnp 0x100cb06b */
L_100CB05E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB05E: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x100CB060: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB063: fstp st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CB065: inc edi */
    _flag_k = FK_INC;
    goto L_100CB1E6; /* 0x100CB066: jmp 0x100cb1e6 */
L_100CB06B:
    ecx = MEM32(ebp + (-0x8)); /* 0x100CB06B: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB06E: fld dword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CB070: faddp st(2) */
    fp_xch(1); /* 0x100CB072: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB074: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB077: fld dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x100CB07A: fst dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB07C: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB07E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB080: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB0B6; /* 0x100CB083: jp 0x100cb0b6 */
L_100CB085:
    edx = edi; /* 0x100CB085: mov edx, edi */
L_100CB087:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CB087: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x100CB088: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB0A2; /* 0x100CB08A: jge 0x100cb0a2 */
L_100CB08C:
    fp_push(*(float*)&MEM32(esi + edx * 4)); /* 0x100CB08C: fld dword ptr [esi + edx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB08F: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB092: fld dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + edx * 4 + (-0x4)) = _v; } /* 0x100CB095: fst dword ptr [esi + edx*4 - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB099: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB09B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB09D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB087; /* 0x100CB0A0: jp 0x100cb087 */
L_100CB0A2:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + ebx * 4 + (-0x4)) = _v; } /* 0x100CB0A2: fst dword ptr [esi + ebx*4 - 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB0A6: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB0A8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB0AA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB0AC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB0B8; /* 0x100CB0AF: jp 0x100cb0b8 */
L_100CB0B1:
    goto L_100CB1FF; /* 0x100CB0B1: jmp 0x100cb1ff */
L_100CB0B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB0B6: fstp st(0) */
L_100CB0B8:
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB0B8: fld dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x100CB0BA: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB0BD: push eax */
    eax = ebp + 0x8; /* 0x100CB0BE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB0C1: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB0C2: fstp dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB0C5: call 0x100d690e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x100CB0CA: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100CB0CD: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CB0D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB0D2: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x100CB0D3: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0xC); /* 0x100CB0D7: lea ecx, [edx - 0xc] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CB0DA: cwde  */
    /* cmp ecx, eax */ /* 0x100CB0DB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB17C; /* 0x100CB0DD: jge 0x100cb17c */
L_100CB0E3:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x100CB0E3: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0xCu); /* 0x100CB0E7: push 0xc */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x100CB0E9: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x100CB0EC: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CB0ED: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x100CB0F0: movzx eax, ax */
    PUSH32(esp, eax); /* 0x100CB0F3: push eax */
    eax = ebp + 0x10; /* 0x100CB0F4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB0F7: push eax */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CB0F8: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CB0FD: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB101: push eax */
    eax = ebp + 0x10; /* 0x100CB102: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB105: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB106: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x100CB10B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CB10E: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax)); /* 0x100CB111: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x100CB113: fsub dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CB116: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CB119: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x100CB11C: fst dword ptr [eax] */
    fp_push(0.0); /* 0x100CB11E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB120: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB122: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB124: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CB126: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB14E; /* 0x100CB129: jp 0x100cb14e */
L_100CB12B:
    ecx = edi; /* 0x100CB12B: mov ecx, edi */
L_100CB12D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB12D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CB12E: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB148; /* 0x100CB130: jge 0x100cb148 */
L_100CB132:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x100CB132: fld dword ptr [esi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CB135: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CB138: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + ecx * 4 + (-0x4)) = _v; } /* 0x100CB13B: fst dword ptr [esi + ecx*4 - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB13F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB141: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB143: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB12D; /* 0x100CB146: jp 0x100cb12d */
L_100CB148:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ebx * 4 + (-0x4)) = _v; } /* 0x100CB148: fstp dword ptr [esi + ebx*4 - 4] */
    goto L_100CB150; /* 0x100CB14C: jmp 0x100cb150 */
L_100CB14E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB14E: fstp st(0) */
L_100CB150:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100CB150: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CB15F; /* 0x100CB151: jne 0x100cb15f */
L_100CB153:
    MEM32(ebp + (-0x4)) = 0x100u; /* 0x100CB153: mov dword ptr [ebp - 4], 0x100 */
    goto L_100CB1E6; /* 0x100CB15A: jmp 0x100cb1e6 */
L_100CB15F:
    fp_push(*(float*)&MEM32(esi + edi * 4 + (-0x4))); /* 0x100CB15F: fld dword ptr [esi + edi*4 - 4] */
    eax = ebp + (-0xC); /* 0x100CB163: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CB166: push eax */
    eax = ebp + 0xC; /* 0x100CB167: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB16A: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CB16B: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB16E: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB173: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB177: mov dword ptr [ebp - 4], eax */
    goto L_100CB1E4; /* 0x100CB17A: jmp 0x100cb1e4 */
L_100CB17C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CB17C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100CB17D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CB17F: je 0x100cb1ff */
L_100CB181:
    eax = MEM32(ebp + (-0x8)); /* 0x100CB181: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CB184: push eax */
    fp_push(*(float*)&MEM32(eax)); /* 0x100CB185: fld dword ptr [eax] */
    eax = ebp + 0xC; /* 0x100CB187: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB18A: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB18B: fstp dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB18E: call 0x100d690e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x100CB193: push 0xc */
    eax = POP32_VAL(esp); /* 0x100CB195: pop eax */
    PUSH32(esp, eax); /* 0x100CB196: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x100CB197: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CB19A: push eax */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CB19B: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB1A0: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB1A4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100CB1A5: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB1A8: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x100CB1AD: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CB1B0: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB1B3: fld dword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB1B6: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB1BA: mov dword ptr [ebp - 4], eax */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x100CB1BD: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100CB1BF: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB1C2: fld dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CB1C5: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB1C7: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB1C9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB1CB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB1D4; /* 0x100CB1CE: jp 0x100cb1d4 */
L_100CB1D0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB1D0: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB1D2: fld dword ptr [ecx] */
L_100CB1D4:
    eax = ebp + (-0xC); /* 0x100CB1D4: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CB1D7: push eax */
    eax = ebp + 0x8; /* 0x100CB1D8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB1DB: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CB1DC: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB1DF: call 0x100d690e */
    RECOMP_FLAGS_IN();
L_100CB1E4:
    ecx = POP32_VAL(esp); /* 0x100CB1E4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB1E5: pop ecx */
L_100CB1E6:
    /* cmp edi, ebx */ /* 0x100CB1E6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CB1E8: jge 0x100cb1ff */
L_100CB1EA:
    RECOMP_BACKEDGE();
    goto L_100CAFBD; /* 0x100CB1EA: jmp 0x100cafbd */
L_100CB1EF:
    ecx = edi + 0x1; /* 0x100CB1EF: lea ecx, [edi + 1] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + edi * 4) = _v; } /* 0x100CB1F2: fstp dword ptr [esi + edi*4] */
    /* cmp ecx, ebx */ /* 0x100CB1F5: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB1FF; /* 0x100CB1F7: jge 0x100cb1ff */
L_100CB1F9:
    fp_push(0.0); /* 0x100CB1F9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + edi * 4 + 0x4) = _v; } /* 0x100CB1FB: fstp dword ptr [esi + edi*4 + 4] */
L_100CB1FF:
    edi = POP32_VAL(esp); /* 0x100CB1FF: pop edi */
L_100CB200:
    eax = esi; /* 0x100CB200: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CB202: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CB203: pop ebx */
    esp = ebp; /* 0x100CB204: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CB206: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB207: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB208(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB208u);

L_100CB208:
    PUSH32(esp, ebp); /* 0x100CB208: push ebp */
    ebp = esp; /* 0x100CB209: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CB20B: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CB20C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x100CB20E: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB245; /* 0x100CB211: jle 0x100cb245 */
L_100CB213:
    fp_push(0.0); /* 0x100CB213: fldz  */
    PUSH32(esp, edi); /* 0x100CB215: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100CB216: mov edi, dword ptr [ebp + 0x10] */
L_100CB219:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x100CB219: fld dword ptr [edi + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB21C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB21E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB220: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB244; /* 0x100CB223: jnp 0x100cb244 */
L_100CB225:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x100CB225: fld dword ptr [edi + esi*4] */
    PUSH32(esp, ecx); /* 0x100CB228: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB229: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100CB22C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100CB22F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100CAF0A); /* 0x100CB232: call 0x100caf0a */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CB237: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CB239: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CB23C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x100CB23D: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB219; /* 0x100CB240: jl 0x100cb219 */
L_100CB242:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB242: fstp st(0) */
L_100CB244:
    edi = POP32_VAL(esp); /* 0x100CB244: pop edi */
L_100CB245:
    eax = MEM32(ebp + 0x8); /* 0x100CB245: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x100CB248: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CB249: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB24A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB24B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB24Bu);

L_100CB24B:
    PUSH32(esp, ebp); /* 0x100CB24B: push ebp */
    ebp = esp; /* 0x100CB24C: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100CB24E: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100CB251: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CB259; /* 0x100CB253: jne 0x100cb259 */
L_100CB255:
    fp_push(0.0); /* 0x100CB255: fldz  */
    ebp = POP32_VAL(esp); /* 0x100CB257: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB258: ret  */
L_100CB259:
    ecx = MEM32(ebp + 0x8); /* 0x100CB259: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, 1 */ /* 0x100CB25C: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB2A9; /* 0x100CB25F: je 0x100cb2a9 */
L_100CB261:
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB261: fld dword ptr [ecx] */
    fp_push(0.0); /* 0x100CB263: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB265: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB267: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB269: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CB26B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB2A7; /* 0x100CB26E: jnp 0x100cb2a7 */
L_100CB270:
    /* cmp edx, 1 */ /* 0x100CB270: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB283; /* 0x100CB273: jle 0x100cb283 */
L_100CB275:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x100CB275: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB278: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB27A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB27C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB285; /* 0x100CB27F: jp 0x100cb285 */
L_100CB281:
    goto L_100CB2A9; /* 0x100CB281: jmp 0x100cb2a9 */
L_100CB283:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB283: fstp st(0) */
L_100CB285:
    /* cmp edx, 2 */ /* 0x100CB285: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB297; /* 0x100CB288: jne 0x100cb297 */
L_100CB28A:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x100CB28A: fld dword ptr [ecx + 4] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x100CB28D: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100CB28F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CB292: fld dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x100CB295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB296: ret  */
L_100CB297:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x100CB297: fld dword ptr [ecx + 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x100CB29A: fadd dword ptr [ecx + 4] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x100CB29D: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100CB29F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CB2A2: fld dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x100CB2A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB2A6: ret  */
L_100CB2A7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB2A7: fstp st(0) */
L_100CB2A9:
    fp_push(*(float*)&MEM32(ecx)); /* 0x100CB2A9: fld dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x100CB2AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB2AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB2AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB2ADu);

L_100CB2AD:
    PUSH32(esp, ebp); /* 0x100CB2AD: push ebp */
    ebp = esp; /* 0x100CB2AE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100CB2B0: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CB2B3: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CB2B8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB2BA: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB2BD: fld dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CB2C0: fldz  */
    PUSH32(esp, ebx); /* 0x100CB2C2: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CB2C3: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CB2C6: push esi */
    PUSH32(esp, edi); /* 0x100CB2C7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CB2C8: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x100CB2CB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CB324; /* 0x100CB2CD: jle 0x100cb324 */
L_100CB2CF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB2CF: fstp st(0) */
    eax = ebp + (-0x14); /* 0x100CB2D1: lea eax, [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x100CB2D4: fmul dword ptr [edi] */
    PUSH32(esp, eax); /* 0x100CB2D6: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100CB2D7: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CB2DA: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CB2DF: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CB2E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100CB2E4: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CB2E5: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100CB31B; /* 0x100CB2E8: jg 0x100cb31b */
L_100CB2EA:
    /* cmp LO16(esi), 2 */ /* 0x100CB2EA: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB2F8; /* 0x100CB2EE: jne 0x100cb2f8 */
L_100CB2F0:
    PUSH32(esp, 1); /* 0x100CB2F0: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CB2F2: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CB2F7: pop ecx */
L_100CB2F8:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100CB2F8: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CB2FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x100CB2FD: fstp dword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CB2FF: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB416; /* 0x100CB302: jge 0x100cb416 */
L_100CB308:
    /* cmp ebx, 1 */ /* 0x100CB308: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB416; /* 0x100CB30B: jle 0x100cb416 */
L_100CB311:
    fp_push(0.0); /* 0x100CB311: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x100CB313: fstp dword ptr [edi + 4] */
    goto L_100CB416; /* 0x100CB316: jmp 0x100cb416 */
L_100CB31B:
    fp_push(0.0); /* 0x100CB31B: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(edi) = _v; } /* 0x100CB31D: fst dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB31F: fld dword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x100CB322: fxch st(1) */
L_100CB324:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CB324: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CB326: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CB328: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x100CB329: mov dword ptr [ebp - 0x24], ecx */
    /* test ebx, ebx */ /* 0x100CB32C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CB339; /* 0x100CB32E: jg 0x100cb339 */
L_100CB330:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB330: fstp st(0) */
    goto L_100CB414; /* 0x100CB332: jmp 0x100cb414 */
L_100CB337:
    fp_xch(1); /* 0x100CB337: fxch st(1) */
L_100CB339:
    /* cmp esi, 4 */ /* 0x100CB339: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB371; /* 0x100CB33C: jge 0x100cb371 */
L_100CB33E:
    eax = esi + ecx; /* 0x100CB33E: lea eax, [esi + ecx] */
    edx = edi + eax * 4; /* 0x100CB341: lea edx, [edi + eax*4] */
L_100CB344:
    eax = esi + ecx; /* 0x100CB344: lea eax, [esi + ecx] */
    /* cmp eax, ebx */ /* 0x100CB347: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB429; /* 0x100CB349: jge 0x100cb429 */
L_100CB34F:
    fp_push(*(float*)&MEM32(edx)); /* 0x100CB34F: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB351: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB353: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB355: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB429; /* 0x100CB358: jnp 0x100cb429 */
L_100CB35E:
    fp_push(_st[1]); /* 0x100CB35E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x100CB360: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x14)) = _v; } /* 0x100CB362: fstp dword ptr [ebp + esi*4 - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CB366: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x100CB367: fst dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x100CB369: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x100CB36C: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB344; /* 0x100CB36F: jl 0x100cb344 */
L_100CB371:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB371: fstp st(1) */
L_100CB373:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100CB373: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB376: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB378: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB37A: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CB37C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB414; /* 0x100CB37F: jnp 0x100cb414 */
L_100CB385:
    eax = ebp + (-0x18); /* 0x100CB385: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100CB388: push eax */
    eax = ebp + (-0x1C); /* 0x100CB389: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100CB38C: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100CB38D: fstp dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB390: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100CB395: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0xCu); /* 0x100CB398: push 0xc */
    PUSH32(esp, eax); /* 0x100CB39A: push eax */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CB39B: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x1C)); /* 0x100CB3A0: movsx eax, word ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100CB3A4: push eax */
    eax = ebp + (-0x18); /* 0x100CB3A5: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100CB3A8: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB3A9: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100CB3AE: fld dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CB3B1: add esp, 0x14 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB3B4: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CB3B7: push ebx */
    PUSH32(esp, edi); /* 0x100CB3B8: push edi */
    RECOMP_CALL(sub_100CAF0A); /* 0x100CB3B9: call 0x100caf0a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100CB3BE: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CB3C1: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x100CB3C4: fsub dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100CB3C7: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100CB3CA: fld dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB3CD: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CB3D0: push ebx */
    PUSH32(esp, edi); /* 0x100CB3D1: push edi */
    RECOMP_CALL(sub_100CAF0A); /* 0x100CB3D2: call 0x100caf0a */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CB3D7: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CB3D9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB3DB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CB3DC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x100CB3DF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB3FF; /* 0x100CB3E1: jle 0x100cb3ff */
L_100CB3E3:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x14))); /* 0x100CB3E3: fld dword ptr [ebp + ecx*4 - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100CB3E7: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100CB3EA: fld dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0x18)) = _v; } /* 0x100CB3ED: fst dword ptr [ebp + ecx*4 - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB3F1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB3F3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB3F5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB3FF; /* 0x100CB3F8: jnp 0x100cb3ff */
L_100CB3FA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB3FA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x100CB3FB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB3E3; /* 0x100CB3FD: jl 0x100cb3e3 */
L_100CB3FF:
    ecx = MEM32(ebp + (-0x24)); /* 0x100CB3FF: mov ecx, dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB402: fld dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB405: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100CB406: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x100CB407: mov dword ptr [ebp - 0x24], ecx */
    /* cmp ecx, ebx */ /* 0x100CB40A: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB337; /* 0x100CB40C: jl 0x100cb337 */
L_100CB412:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB412: fstp st(1) */
L_100CB414:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB414: fstp st(0) */
L_100CB416:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CB416: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x100CB419: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100CB41B: pop edi */
    esi = POP32_VAL(esp); /* 0x100CB41C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CB41D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CB41F: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CB420: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CB425: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CB427: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB428: ret  */
L_100CB429:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB429: fstp st(1) */
    PUSH32(esp, 8); /* 0x100CB42B: push 8 */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + esi * 4 + (-0x14)) = _v; } /* 0x100CB42D: fst dword ptr [ebp + esi*4 - 0x14] */
    esi = POP32_VAL(esp); /* 0x100CB431: pop esi */
    RECOMP_BACKEDGE();
    goto L_100CB373; /* 0x100CB432: jmp 0x100cb373 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100CB437(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB437u);

L_100CB437:
    PUSH32(esp, ebp); /* 0x100CB437: push ebp */
    ebp = esp; /* 0x100CB438: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CB43A: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100CB43B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB43F: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100CB442: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CB443: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CB446: fstp dword ptr [ebp - 4] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB4B4; /* 0x100CB449: jle 0x100cb4b4 */
L_100CB44B:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x100CB44B: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB4AF; /* 0x100CB44F: je 0x100cb4af */
L_100CB451:
    eax = ebp + (-0x4); /* 0x100CB451: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CB454: push eax */
    eax = ebp + 0x8; /* 0x100CB455: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB458: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CB459: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CB45E: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CB461: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB462: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CB463: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB4AF; /* 0x100CB466: je 0x100cb4af */
L_100CB468:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CB468: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CB46A: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB47B; /* 0x100CB46D: jge 0x100cb47b */
L_100CB46F:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CB46F: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100CB472: fstp dword ptr [esi] */
    fp_push(0.0); /* 0x100CB474: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x100CB476: fstp dword ptr [esi + 4] */
    goto L_100CB4B4; /* 0x100CB479: jmp 0x100cb4b4 */
L_100CB47B:
    eax = ebp + (-0x4); /* 0x100CB47B: lea eax, [ebp - 4] */
    PUSH32(esp, 0xCu); /* 0x100CB47E: push 0xc */
    PUSH32(esp, eax); /* 0x100CB480: push eax */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CB481: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CB486: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB48A: push eax */
    eax = ebp + (-0x4); /* 0x100CB48B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CB48E: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB48F: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CB494: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CB497: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x100CB49A: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x100CB49E: fst dword ptr [esi] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x10) - _st[0]; /* 0x100CB4A0: fsubr dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x100CB4A3: fstp dword ptr [esi + 4] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB4B4; /* 0x100CB4A6: jle 0x100cb4b4 */
L_100CB4A8:
    fp_push(0.0); /* 0x100CB4A8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x100CB4AA: fstp dword ptr [esi + 8] */
    goto L_100CB4B4; /* 0x100CB4AD: jmp 0x100cb4b4 */
L_100CB4AF:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CB4AF: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100CB4B2: fstp dword ptr [esi] */
L_100CB4B4:
    eax = esi; /* 0x100CB4B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CB4B6: pop esi */
    esp = ebp; /* 0x100CB4B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CB4B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB4BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB4BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB4BBu);

L_100CB4BB:
    PUSH32(esp, ebp); /* 0x100CB4BB: push ebp */
    ebp = esp; /* 0x100CB4BC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x100CB4BE: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CB4C1: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CB4C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB4C8: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CB4CB: fld dword ptr [ebp + 8] */
    eax = ebp + (-0x34); /* 0x100CB4CE: lea eax, [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x100CB4D1: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CB4D4: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100CB4D7: push ebx */
    PUSH32(esp, edi); /* 0x100CB4D8: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x100CB4D9: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB4DC: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB4DF: push eax */
    eax = ebp + (-0x38); /* 0x100CB4E0: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100CB4E3: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x100CB4E4: fstp dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_100D690E); /* 0x100CB4E7: call 0x100d690e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CB4EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB4ED: pop ecx */
    PUSH32(esp, 2); /* 0x100CB4EE: push 2 */
    edi = (uint32_t)LO16(eax); /* 0x100CB4F0: movzx edi, ax */
    ebx = POP32_VAL(esp); /* 0x100CB4F3: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100CB4F4: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB501; /* 0x100CB4F7: jne 0x100cb501 */
L_100CB4F9:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CB4F9: fld dword ptr [ebp + 8] */
    goto L_100CB6DF; /* 0x100CB4FC: jmp 0x100cb6df */
L_100CB501:
    PUSH32(esp, esi); /* 0x100CB501: push esi */
    eax = ebp + (-0x28); /* 0x100CB502: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100CB505: push eax */
    eax = ebp + (-0x3C); /* 0x100CB506: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x100CB509: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CB50A: call 0x100d690e */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CB50F: movzx esi, ax */
    ecx = POP32_VAL(esp); /* 0x100CB512: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB513: pop ecx */
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100CB514: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB521; /* 0x100CB517: jne 0x100cb521 */
L_100CB519:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CB519: fld dword ptr [ebp + 0xc] */
    goto L_100CB6DE; /* 0x100CB51C: jmp 0x100cb6de */
L_100CB521:
    eax = ebp + (-0x2C); /* 0x100CB521: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100CB524: push eax */
    eax = ebp + (-0x30); /* 0x100CB525: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100CB528: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CB529: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CB52E: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CB531: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB532: pop ecx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100CB533: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB552; /* 0x100CB536: je 0x100cb552 */
L_100CB538:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CB538: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CB53A: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(edi), LO16(edx) */ /* 0x100CB53B: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB69C; /* 0x100CB53E: je 0x100cb69c */
L_100CB544:
    /* cmp LO16(esi), LO16(edx) */ /* 0x100CB544: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB69C; /* 0x100CB547: je 0x100cb69c */
L_100CB54D:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CB54D: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB55A; /* 0x100CB550: jne 0x100cb55a */
L_100CB552:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100CB552: fld dword ptr [ebp + 0x10] */
    goto L_100CB6DE; /* 0x100CB555: jmp 0x100cb6de */
L_100CB55A:
    /* test LO16(edi), LO16(edi) */ /* 0x100CB55A: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB68B; /* 0x100CB55D: je 0x100cb68b */
L_100CB563:
    /* test LO16(esi), LO16(esi) */ /* 0x100CB563: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB68B; /* 0x100CB566: je 0x100cb68b */
L_100CB56C:
    /* test LO16(eax), LO16(eax) */ /* 0x100CB56C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB68B; /* 0x100CB56F: je 0x100cb68b */
L_100CB575:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x38)); /* 0x100CB575: movsx eax, word ptr [ebp - 0x38] */
    edx = 0x8000u; /* 0x100CB579: mov edx, 0x8000 */
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x3C)); /* 0x100CB57E: movsx esi, word ptr [ebp - 0x3c] */
    SET_LO16(ecx, MEM16(ebp + (-0x30))); /* 0x100CB582: mov cx, word ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100CB586: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xA); /* 0x100CB588: mov eax, dword ptr [ebp + 0xa] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - LO16(esi)); /* 0x100CB58B: sub cx, si */
    _flag_k = FK_NARROW(FK_CMP, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0xE))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0xE))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0xE)); /* 0x100CB58E: xor ax, word ptr [ebp + 0xe] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x12)); /* 0x100CB592: xor ax, word ptr [ebp + 0x12] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x30)) = (uint16_t)(LO16(ecx)); /* 0x100CB596: mov word ptr [ebp - 0x30], cx */
    /* test LO16(edx), LO16(eax) */ /* 0x100CB59A: test dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB67A; /* 0x100CB59D: je 0x100cb67a */
L_100CB5A3:
    PUSH32(esp, 4); /* 0x100CB5A3: push 4 */
    eax = ebx + ecx; /* 0x100CB5A5: lea eax, [ebx + ecx] */
    edi = POP32_VAL(esp); /* 0x100CB5A8: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CB5A9: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100CB67A; /* 0x100CB5AC: ja 0x100cb67a */
L_100CB5B2:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x100CB5B2: movsx eax, cx */
    PUSH32(esp, eax); /* 0x100CB5B5: push eax */
    eax = ebp + (-0x2C); /* 0x100CB5B6: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100CB5B9: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB5BA: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x100CB5BF: fld dword ptr [ebp - 0x34] */
    eax = ebp + (-0x14); /* 0x100CB5C2: lea eax, [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x100CB5C5: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB5C6: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CB5C9: push edi */
    PUSH32(esp, eax); /* 0x100CB5CA: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CB5CB: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x100CB5D0: fld dword ptr [ebp - 0x28] */
    eax = ebp + (-0x44); /* 0x100CB5D3: lea eax, [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x100CB5D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB5D7: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB5D8: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CB5DB: push ebx */
    PUSH32(esp, eax); /* 0x100CB5DC: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CB5DD: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x100CB5E2: fld dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x4C); /* 0x100CB5E5: lea eax, [ebp - 0x4c] */
    ecx = POP32_VAL(esp); /* 0x100CB5E8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB5E9: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB5EA: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CB5ED: push ebx */
    PUSH32(esp, eax); /* 0x100CB5EE: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CB5EF: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CB5F4: fld dword ptr [ebp - 0x44] */
    eax = ebp + (-0x14); /* 0x100CB5F7: lea eax, [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x100CB5FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB5FB: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB5FC: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CB5FF: push edi */
    PUSH32(esp, eax); /* 0x100CB600: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CB601: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x100CB606: fld dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CB609: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CB60C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB60E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB610: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB612: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB64C; /* 0x100CB615: jnp 0x100cb64c */
L_100CB617:
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x100CB617: fld dword ptr [ebp - 0x34] */
    eax = ebp + (-0x24); /* 0x100CB61A: lea eax, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x100CB61D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB61E: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CB621: push edi */
    PUSH32(esp, eax); /* 0x100CB622: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CB623: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x100CB628: fld dword ptr [ebp - 0x40] */
    eax = ebp + (-0x24); /* 0x100CB62B: lea eax, [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x100CB62E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB62F: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CB630: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CB633: push edi */
    PUSH32(esp, eax); /* 0x100CB634: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CB635: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100CB63A: push edi */
    eax = ebp + (-0x24); /* 0x100CB63B: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100CB63E: push eax */
    eax = ebp + (-0x14); /* 0x100CB63F: lea eax, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x100CB642: push edi */
    PUSH32(esp, eax); /* 0x100CB643: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CB644: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CB649: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100CB64C:
    PUSH32(esp, ebx); /* 0x100CB64C: push ebx */
    eax = ebp + (-0x4C); /* 0x100CB64D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100CB650: push eax */
    eax = ebp + (-0x14); /* 0x100CB651: lea eax, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x100CB654: push edi */
    PUSH32(esp, eax); /* 0x100CB655: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CB656: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x100CB65B: lea eax, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x100CB65E: push edi */
    PUSH32(esp, eax); /* 0x100CB65F: push eax */
    RECOMP_CALL(sub_100CB24B); /* 0x100CB660: call 0x100cb24b */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x100CB665: lea eax, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x100CB668: push esi */
    PUSH32(esp, eax); /* 0x100CB669: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x100CB66A: fstp dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_100D66D7); /* 0x100CB66D: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x100CB672: fld dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CB675: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_100CB6DE; /* 0x100CB678: jmp 0x100cb6de */
L_100CB67A:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CB67A: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100CB67D: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x100CB680: fadd dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x100CB683: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x100CB686: fld dword ptr [ebp - 0x28] */
    goto L_100CB6DE; /* 0x100CB689: jmp 0x100cb6de */
L_100CB68B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CB68B: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100CB68E: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x100CB691: fadd dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x100CB694: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x100CB697: fld dword ptr [ebp - 0x28] */
    goto L_100CB6DE; /* 0x100CB69A: jmp 0x100cb6de */
L_100CB69C:
    /* test LO16(edi), LO16(edi) */ /* 0x100CB69C: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB6D1; /* 0x100CB69F: je 0x100cb6d1 */
L_100CB6A1:
    /* test LO16(esi), LO16(esi) */ /* 0x100CB6A1: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB6D1; /* 0x100CB6A4: je 0x100cb6d1 */
L_100CB6A6:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CB6A6: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB6C0; /* 0x100CB6A9: jne 0x100cb6c0 */
L_100CB6AB:
    eax = MEM32(ebp + 0xA); /* 0x100CB6AB: mov eax, dword ptr [ebp + 0xa] */
    ecx = 0x8000u; /* 0x100CB6AE: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0xE))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0xE))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0xE)); /* 0x100CB6B3: xor ax, word ptr [ebp + 0xe] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x12))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x12)); /* 0x100CB6B7: xor ax, word ptr [ebp + 0x12] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CB6BB: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CB6D1; /* 0x100CB6BE: jne 0x100cb6d1 */
L_100CB6C0:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CB6C0: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100CB6C3: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x100CB6C6: fadd dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x100CB6C9: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x100CB6CC: fld dword ptr [ebp - 0x28] */
    goto L_100CB6DE; /* 0x100CB6CF: jmp 0x100cb6de */
L_100CB6D1:
    PUSH32(esp, edx); /* 0x100CB6D1: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CB6D2: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CB6D7: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100CB6DD: pop ecx */
L_100CB6DE:
    esi = POP32_VAL(esp); /* 0x100CB6DE: pop esi */
L_100CB6DF:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CB6DF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100CB6E2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CB6E3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CB6E5: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CB6E6: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CB6EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CB6ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB6EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB6EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB6EFu);

L_100CB6EF:
    PUSH32(esp, ebp); /* 0x100CB6EF: push ebp */
    ebp = esp; /* 0x100CB6F0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CB6F2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CB6F5: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CB6F8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CB6F9: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CB6FC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CB6FD: mov esi, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CB700: fstp qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x100CB703: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB9CA; /* 0x100CB705: je 0x100cb9ca */
L_100CB70B:
    PUSH32(esp, edi); /* 0x100CB70B: push edi */
    eax = ebp + (-0x10); /* 0x100CB70C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CB70F: push eax */
    eax = ebp + 0x8; /* 0x100CB710: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB713: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CB714: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CB719: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB71A: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CB71B: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CB71E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CB720: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB788; /* 0x100CB723: jge 0x100cb788 */
L_100CB725:
    PUSH32(esp, 2); /* 0x100CB725: push 2 */
    edi = POP32_VAL(esp); /* 0x100CB727: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CB728: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB77E; /* 0x100CB72B: je 0x100cb77e */
L_100CB72D:
    PUSH32(esp, esi); /* 0x100CB72D: push esi */
    RECOMP_CALL(sub_100C0034); /* 0x100CB72E: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CB733: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CB736: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CB737: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CB77E; /* 0x100CB73A: jle 0x100cb77e */
L_100CB73C:
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CB73C: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB73F: je 0x100cb9c9 */
L_100CB745:
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x100CB745: mov ax, word ptr [esi + 6] */
    ecx = 0x8000u; /* 0x100CB749: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CB74E: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CB752: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB755: je 0x100cb9c9 */
L_100CB75B:
    PUSH32(esp, 1); /* 0x100CB75B: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CB75D: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100CB762: fld qword ptr [0x10065b98] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CB768: fstp qword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x100CB76A: pop ecx */
    /* cmp ebx, 1 */ /* 0x100CB76B: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB76E: jle 0x100cb9c9 */
L_100CB774:
    fp_push(0.0); /* 0x100CB774: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x100CB776: fstp qword ptr [esi + 8] */
    goto L_100CB9C9; /* 0x100CB779: jmp 0x100cb9c9 */
L_100CB77E:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CB77E: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CB781: fstp qword ptr [esi] */
    goto L_100CB9C9; /* 0x100CB783: jmp 0x100cb9c9 */
L_100CB788:
    /* test LO16(eax), LO16(eax) */ /* 0x100CB788: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CB9C9; /* 0x100CB78B: jns 0x100cb9c9 */
L_100CB791:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100CB791: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x100CB793: mov dword ptr [ebp - 4], 0x800 */
    /* test ebx, ebx */ /* 0x100CB79A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CB9C9; /* 0x100CB79C: jle 0x100cb9c9 */
L_100CB7A2:
    eax = esi + edi * 8; /* 0x100CB7A2: lea eax, [esi + edi*8] */
    fp_push(*(double*)ADDR(eax)); /* 0x100CB7A5: fld qword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CB7A7: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x100CB7AA: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100CB7AD: push eax */
    eax = ebp + 0xC; /* 0x100CB7AE: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB7B1: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100CB7B2: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_100D6993); /* 0x100CB7B5: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CB7BA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB7BB: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x100CB7BC: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CB7BF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CB7C1: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB7C4: jl 0x100cb9c9 */
L_100CB7CA:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CB7CA: fld qword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x100CB7CD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CB9B9; /* 0x100CB7D0: je 0x100cb9b9 */
L_100CB7D6:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB7D6: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CB7DA: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x100CB7DE: mov ecx, edx */
    fp_push(0.0); /* 0x100CB7E0: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100CB7E2: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFE6u */ /* 0x100CB7E4: cmp ecx, -0x1a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100CB833; /* 0x100CB7E7: jg 0x100cb833 */
L_100CB7E9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB7E9: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB7EB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB7ED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB833; /* 0x100CB7F0: jnp 0x100cb833 */
L_100CB7F2:
    ecx = edi; /* 0x100CB7F2: mov ecx, edi */
L_100CB7F4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB7F4: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CB7F5: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB805; /* 0x100CB7F7: jge 0x100cb805 */
L_100CB7F9:
    fp_push(*(double*)ADDR(esi + ecx * 8)); /* 0x100CB7F9: fld qword ptr [esi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB7FC: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB7FE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB800: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB7F4; /* 0x100CB803: jp 0x100cb7f4 */
L_100CB805:
    eax = ebx + (-0x1); /* 0x100CB805: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x100CB808: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB80F; /* 0x100CB80A: jge 0x100cb80f */
L_100CB80C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB80C: inc ecx */
    _flag_k = FK_INC;
    goto L_100CB814; /* 0x100CB80D: jmp 0x100cb814 */
L_100CB80F:
    /* cmp ecx, ebx */ /* 0x100CB80F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CB814; /* 0x100CB811: jne 0x100cb814 */
L_100CB813:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CB813: dec ecx */
    _flag_k = FK_DEC;
L_100CB814:
    /* cmp edi, ecx */ /* 0x100CB814: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB824; /* 0x100CB816: jge 0x100cb824 */
L_100CB818:
    fp_push(*(double*)ADDR(esi + ecx * 8 + (-0x8))); /* 0x100CB818: fld qword ptr [esi + ecx*8 - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx * 8) = _v; } /* 0x100CB81C: fstp qword ptr [esi + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CB81F: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, edi */ /* 0x100CB820: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100CB818; /* 0x100CB822: jg 0x100cb818 */
L_100CB824:
    eax = MEM32(ebp + (-0x8)); /* 0x100CB824: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x100CB827: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x100CB829: fstp qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CB82B: fstp qword ptr [ebp + 0x10] */
    goto L_100CB9B0; /* 0x100CB82E: jmp 0x100cb9b0 */
L_100CB833:
    PUSH32(esp, 0x1Au); /* 0x100CB833: push 0x1a */
    eax = POP32_VAL(esp); /* 0x100CB835: pop eax */
    /* cmp ecx, eax */ /* 0x100CB836: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB850; /* 0x100CB838: jl 0x100cb850 */
L_100CB83A:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB83A: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB83C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB83E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CB850; /* 0x100CB841: jnp 0x100cb850 */
L_100CB843:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB843: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x100CB845: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB848: fstp st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CB84A: inc edi */
    _flag_k = FK_INC;
    goto L_100CB9B0; /* 0x100CB84B: jmp 0x100cb9b0 */
L_100CB850:
    ecx = MEM32(ebp + (-0x8)); /* 0x100CB850: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CB853: fld qword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CB855: faddp st(2) */
    fp_xch(1); /* 0x100CB857: fxch st(1) */
    *(double*)ADDR(ecx) = _st[0]; /* 0x100CB859: fst qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB85B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB85D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB85F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB88F; /* 0x100CB862: jp 0x100cb88f */
L_100CB864:
    edx = edi; /* 0x100CB864: mov edx, edi */
L_100CB866:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CB866: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x100CB867: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB87B; /* 0x100CB869: jge 0x100cb87b */
L_100CB86B:
    fp_push(*(double*)ADDR(esi + edx * 8)); /* 0x100CB86B: fld qword ptr [esi + edx*8] */
    *(double*)ADDR(esi + edx * 8 + (-0x8)) = _st[0]; /* 0x100CB86E: fst qword ptr [esi + edx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB872: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB874: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB876: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB866; /* 0x100CB879: jp 0x100cb866 */
L_100CB87B:
    *(double*)ADDR(esi + ebx * 8 + (-0x8)) = _st[0]; /* 0x100CB87B: fst qword ptr [esi + ebx*8 - 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CB87F: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB881: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB883: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB885: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB891; /* 0x100CB888: jp 0x100cb891 */
L_100CB88A:
    goto L_100CB9C9; /* 0x100CB88A: jmp 0x100cb9c9 */
L_100CB88F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB88F: fstp st(0) */
L_100CB891:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CB891: fld qword ptr [ecx] */
    eax = ebp + 0x10; /* 0x100CB893: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB896: push eax */
    eax = ebp + 0x8; /* 0x100CB897: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB89A: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CB89B: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D6993); /* 0x100CB89E: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x100CB8A3: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100CB8A6: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CB8AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB8AB: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x100CB8AC: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0x1A); /* 0x100CB8B0: lea ecx, [edx - 0x1a] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CB8B3: cwde  */
    /* cmp ecx, eax */ /* 0x100CB8B4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB949; /* 0x100CB8B6: jge 0x100cb949 */
L_100CB8BC:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x100CB8BC: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0x1Au); /* 0x100CB8C0: push 0x1a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x100CB8C2: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x100CB8C5: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CB8C6: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x100CB8C9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x100CB8CC: push eax */
    eax = ebp + 0x10; /* 0x100CB8CD: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB8D0: push eax */
    RECOMP_CALL(sub_100C002B); /* 0x100CB8D1: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x100CB8D6: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB8DA: push eax */
    eax = ebp + 0x10; /* 0x100CB8DB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CB8DE: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100CB8DF: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x100CB8E4: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CB8E7: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(eax)); /* 0x100CB8EA: fld qword ptr [eax] */
    _st[0] -= *(double*)ADDR(ebp + 0x10); /* 0x100CB8EC: fsub qword ptr [ebp + 0x10] */
    *(double*)ADDR(eax) = _st[0]; /* 0x100CB8EF: fst qword ptr [eax] */
    fp_push(0.0); /* 0x100CB8F1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB8F3: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB8F5: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CB8F7: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CB8F9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB91B; /* 0x100CB8FC: jp 0x100cb91b */
L_100CB8FE:
    ecx = edi; /* 0x100CB8FE: mov ecx, edi */
L_100CB900:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CB900: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x100CB901: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB915; /* 0x100CB903: jge 0x100cb915 */
L_100CB905:
    fp_push(*(double*)ADDR(esi + ecx * 8)); /* 0x100CB905: fld qword ptr [esi + ecx*8] */
    *(double*)ADDR(esi + ecx * 8 + (-0x8)) = _st[0]; /* 0x100CB908: fst qword ptr [esi + ecx*8 - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB90C: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB90E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB910: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB900; /* 0x100CB913: jp 0x100cb900 */
L_100CB915:
    { double _v = fp_pop(); *(double*)ADDR(esi + ebx * 8 + (-0x8)) = _v; } /* 0x100CB915: fstp qword ptr [esi + ebx*8 - 8] */
    goto L_100CB91D; /* 0x100CB919: jmp 0x100cb91d */
L_100CB91B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB91B: fstp st(0) */
L_100CB91D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100CB91D: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CB92C; /* 0x100CB91E: jne 0x100cb92c */
L_100CB920:
    MEM32(ebp + (-0x4)) = 0x800u; /* 0x100CB920: mov dword ptr [ebp - 4], 0x800 */
    goto L_100CB9B0; /* 0x100CB927: jmp 0x100cb9b0 */
L_100CB92C:
    fp_push(*(double*)ADDR(esi + edi * 8 + (-0x8))); /* 0x100CB92C: fld qword ptr [esi + edi*8 - 8] */
    eax = ebp + (-0x10); /* 0x100CB930: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CB933: push eax */
    eax = ebp + 0xC; /* 0x100CB934: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB937: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CB938: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100D6993); /* 0x100CB93B: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB940: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB944: mov dword ptr [ebp - 4], eax */
    goto L_100CB9AE; /* 0x100CB947: jmp 0x100cb9ae */
L_100CB949:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100CB949: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100CB94A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB94C: je 0x100cb9c9 */
L_100CB94E:
    eax = MEM32(ebp + (-0x8)); /* 0x100CB94E: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CB951: push eax */
    fp_push(*(double*)ADDR(eax)); /* 0x100CB952: fld qword ptr [eax] */
    eax = ebp + 0xC; /* 0x100CB954: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB957: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100CB958: fstp qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100D6993); /* 0x100CB95B: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x100CB960: push 0x1a */
    eax = POP32_VAL(esp); /* 0x100CB962: pop eax */
    PUSH32(esp, eax); /* 0x100CB963: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x100CB964: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CB967: push eax */
    RECOMP_CALL(sub_100C002B); /* 0x100CB968: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB96D: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CB971: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100CB972: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D6871); /* 0x100CB975: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x100CB97A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CB97D: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CB980: fld qword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CB983: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CB987: mov dword ptr [ebp - 4], eax */
    _st[0] -= *(double*)ADDR(ecx); /* 0x100CB98A: fsub qword ptr [ecx] */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100CB98C: fst qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CB98F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB991: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB993: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB995: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CB99E; /* 0x100CB998: jp 0x100cb99e */
L_100CB99A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CB99A: fstp st(0) */
    fp_push(*(double*)ADDR(ecx)); /* 0x100CB99C: fld qword ptr [ecx] */
L_100CB99E:
    eax = ebp + (-0x10); /* 0x100CB99E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100CB9A1: push eax */
    eax = ebp + 0x8; /* 0x100CB9A2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CB9A5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CB9A6: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100D6993); /* 0x100CB9A9: call 0x100d6993 */
    RECOMP_FLAGS_IN();
L_100CB9AE:
    ecx = POP32_VAL(esp); /* 0x100CB9AE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CB9AF: pop ecx */
L_100CB9B0:
    /* cmp edi, ebx */ /* 0x100CB9B0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB9B2: jge 0x100cb9c9 */
L_100CB9B4:
    RECOMP_BACKEDGE();
    goto L_100CB7A2; /* 0x100CB9B4: jmp 0x100cb7a2 */
L_100CB9B9:
    ecx = edi + 0x1; /* 0x100CB9B9: lea ecx, [edi + 1] */
    { double _v = fp_pop(); *(double*)ADDR(esi + edi * 8) = _v; } /* 0x100CB9BC: fstp qword ptr [esi + edi*8] */
    /* cmp ecx, ebx */ /* 0x100CB9BF: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CB9C9; /* 0x100CB9C1: jge 0x100cb9c9 */
L_100CB9C3:
    fp_push(0.0); /* 0x100CB9C3: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + edi * 8 + 0x8) = _v; } /* 0x100CB9C5: fstp qword ptr [esi + edi*8 + 8] */
L_100CB9C9:
    edi = POP32_VAL(esp); /* 0x100CB9C9: pop edi */
L_100CB9CA:
    eax = esi; /* 0x100CB9CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CB9CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CB9CD: pop ebx */
    esp = ebp; /* 0x100CB9CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CB9D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CB9D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CB9D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CB9D2u);

L_100CB9D2:
    PUSH32(esp, ebp); /* 0x100CB9D2: push ebp */
    ebp = esp; /* 0x100CB9D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100CB9D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CB9D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x100CB9D8: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBA10; /* 0x100CB9DB: jle 0x100cba10 */
L_100CB9DD:
    fp_push(0.0); /* 0x100CB9DD: fldz  */
    PUSH32(esp, edi); /* 0x100CB9DF: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100CB9E0: mov edi, dword ptr [ebp + 0x10] */
L_100CB9E3:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x100CB9E3: fld qword ptr [edi + esi*8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CB9E6: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CB9E8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CB9EA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBA0F; /* 0x100CB9ED: jnp 0x100cba0f */
L_100CB9EF:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x100CB9EF: fld qword ptr [edi + esi*8] */
    PUSH32(esp, ecx); /* 0x100CB9F2: push ecx */
    PUSH32(esp, ecx); /* 0x100CB9F3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CB9F4: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100CB9F7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100CB9FA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100CB6EF); /* 0x100CB9FD: call 0x100cb6ef */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CBA02: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CBA04: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CBA07: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x100CBA08: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CB9E3; /* 0x100CBA0B: jl 0x100cb9e3 */
L_100CBA0D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBA0D: fstp st(0) */
L_100CBA0F:
    edi = POP32_VAL(esp); /* 0x100CBA0F: pop edi */
L_100CBA10:
    eax = MEM32(ebp + 0x8); /* 0x100CBA10: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x100CBA13: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CBA14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBA15: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBA16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBA16u);

L_100CBA16:
    PUSH32(esp, ebp); /* 0x100CBA16: push ebp */
    ebp = esp; /* 0x100CBA17: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100CBA19: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100CBA1C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CBA24; /* 0x100CBA1E: jne 0x100cba24 */
L_100CBA20:
    fp_push(0.0); /* 0x100CBA20: fldz  */
    ebp = POP32_VAL(esp); /* 0x100CBA22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBA23: ret  */
L_100CBA24:
    ecx = MEM32(ebp + 0x8); /* 0x100CBA24: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, 1 */ /* 0x100CBA27: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBA66; /* 0x100CBA2A: je 0x100cba66 */
L_100CBA2C:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CBA2C: fld qword ptr [ecx] */
    fp_push(0.0); /* 0x100CBA2E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBA30: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBA32: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBA34: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CBA36: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBA64; /* 0x100CBA39: jnp 0x100cba64 */
L_100CBA3B:
    /* cmp edx, 1 */ /* 0x100CBA3B: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBA4E; /* 0x100CBA3E: jle 0x100cba4e */
L_100CBA40:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x100CBA40: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBA43: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBA45: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBA47: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CBA50; /* 0x100CBA4A: jp 0x100cba50 */
L_100CBA4C:
    goto L_100CBA66; /* 0x100CBA4C: jmp 0x100cba66 */
L_100CBA4E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBA4E: fstp st(0) */
L_100CBA50:
    /* cmp edx, 2 */ /* 0x100CBA50: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBA5C; /* 0x100CBA53: jne 0x100cba5c */
L_100CBA55:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x100CBA55: fld qword ptr [ecx + 8] */
L_100CBA58:
    _st[0] += *(double*)ADDR(ecx); /* 0x100CBA58: fadd qword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x100CBA5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBA5B: ret  */
L_100CBA5C:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x100CBA5C: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x100CBA5F: fadd qword ptr [ecx + 8] */
    RECOMP_BACKEDGE();
    goto L_100CBA58; /* 0x100CBA62: jmp 0x100cba58 */
L_100CBA64:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBA64: fstp st(0) */
L_100CBA66:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CBA66: fld qword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x100CBA68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBA69: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBA6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBA6Au);

L_100CBA6A:
    PUSH32(esp, ebp); /* 0x100CBA6A: push ebp */
    ebp = esp; /* 0x100CBA6B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x100CBA6D: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CBA70: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CBA75: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CBA77: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBA7A: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x100CBA7D: fldz  */
    PUSH32(esp, ebx); /* 0x100CBA7F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100CBA80: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100CBA83: push esi */
    PUSH32(esp, edi); /* 0x100CBA84: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CBA85: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x100CBA88: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CBAE1; /* 0x100CBA8A: jle 0x100cbae1 */
L_100CBA8C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBA8C: fstp st(0) */
    eax = ebp + (-0x24); /* 0x100CBA8E: lea eax, [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(edi); /* 0x100CBA91: fmul qword ptr [edi] */
    PUSH32(esp, eax); /* 0x100CBA93: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100CBA94: fstp qword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_100C0034); /* 0x100CBA97: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CBA9C: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CBA9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100CBAA1: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBAA2: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100CBAD8; /* 0x100CBAA5: jg 0x100cbad8 */
L_100CBAA7:
    /* cmp LO16(esi), 2 */ /* 0x100CBAA7: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBAB5; /* 0x100CBAAB: jne 0x100cbab5 */
L_100CBAAD:
    PUSH32(esp, 1); /* 0x100CBAAD: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CBAAF: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBAB4: pop ecx */
L_100CBAB5:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CBAB5: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CBAB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CBABA: fstp qword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBABC: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CBBC7; /* 0x100CBABF: jge 0x100cbbc7 */
L_100CBAC5:
    /* cmp ebx, 1 */ /* 0x100CBAC5: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBBC7; /* 0x100CBAC8: jle 0x100cbbc7 */
L_100CBACE:
    fp_push(0.0); /* 0x100CBACE: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x100CBAD0: fstp qword ptr [edi + 8] */
    goto L_100CBBC7; /* 0x100CBAD3: jmp 0x100cbbc7 */
L_100CBAD8:
    fp_push(0.0); /* 0x100CBAD8: fldz  */
    *(double*)ADDR(edi) = _st[0]; /* 0x100CBADA: fst qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBADC: fld qword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x100CBADF: fxch st(1) */
L_100CBAE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CBAE1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CBAE3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CBAE5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x100CBAE6: mov dword ptr [ebp - 0x2c], edx */
    /* test ebx, ebx */ /* 0x100CBAE9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CBAF6; /* 0x100CBAEB: jg 0x100cbaf6 */
L_100CBAED:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBAED: fstp st(0) */
    goto L_100CBBC5; /* 0x100CBAEF: jmp 0x100cbbc5 */
L_100CBAF4:
    fp_xch(1); /* 0x100CBAF4: fxch st(1) */
L_100CBAF6:
    /* cmp esi, 4 */ /* 0x100CBAF6: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CBB2E; /* 0x100CBAF9: jge 0x100cbb2e */
L_100CBAFB:
    eax = edx + esi; /* 0x100CBAFB: lea eax, [edx + esi] */
    ecx = edi + eax * 8; /* 0x100CBAFE: lea ecx, [edi + eax*8] */
L_100CBB01:
    eax = edx + esi; /* 0x100CBB01: lea eax, [edx + esi] */
    /* cmp eax, ebx */ /* 0x100CBB04: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CBBDA; /* 0x100CBB06: jge 0x100cbbda */
L_100CBB0C:
    fp_push(*(double*)ADDR(ecx)); /* 0x100CBB0C: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBB0E: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBB10: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBB12: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBBDA; /* 0x100CBB15: jnp 0x100cbbda */
L_100CBB1B:
    fp_push(_st[1]); /* 0x100CBB1B: fld st(1) */
    _st[0] *= *(double*)ADDR(ecx); /* 0x100CBB1D: fmul qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _v; } /* 0x100CBB1F: fstp qword ptr [ebp + esi*8 - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CBB23: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ecx) = _st[0]; /* 0x100CBB24: fst qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x100CBB26: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x100CBB29: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CBB01; /* 0x100CBB2C: jl 0x100cbb01 */
L_100CBB2E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBB2E: fstp st(1) */
L_100CBB30:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CBB30: fld qword ptr [ebp - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBB33: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBB35: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBB37: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CBB39: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBBC5; /* 0x100CBB3C: jnp 0x100cbbc5 */
L_100CBB42:
    eax = ebp + (-0x34); /* 0x100CBB42: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CBB45: push eax */
    eax = ebp + (-0x28); /* 0x100CBB46: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100CBB49: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x100CBB4A: fstp qword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_100D6993); /* 0x100CBB4D: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x100CBB52: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0x1Au); /* 0x100CBB55: push 0x1a */
    PUSH32(esp, eax); /* 0x100CBB57: push eax */
    RECOMP_CALL(sub_100C002B); /* 0x100CBB58: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x28)); /* 0x100CBB5D: movsx eax, word ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100CBB61: push eax */
    eax = ebp + (-0x34); /* 0x100CBB62: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CBB65: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100CBB66: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CBB6B: fld qword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CBB6E: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBB71: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CBB74: push ebx */
    PUSH32(esp, edi); /* 0x100CBB75: push edi */
    RECOMP_CALL(sub_100CB6EF); /* 0x100CBB76: call 0x100cb6ef */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x100CBB7B: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CBB7E: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebp + (-0x34)); /* 0x100CBB81: fsub qword ptr [ebp - 0x34] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBB84: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CBB87: push ebx */
    PUSH32(esp, edi); /* 0x100CBB88: push edi */
    RECOMP_CALL(sub_100CB6EF); /* 0x100CBB89: call 0x100cb6ef */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CBB8E: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CBB90: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CBB92: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CBB93: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x100CBB96: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBBB0; /* 0x100CBB98: jle 0x100cbbb0 */
L_100CBB9A:
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x24))); /* 0x100CBB9A: fld qword ptr [ebp + ecx*8 - 0x24] */
    *(double*)ADDR(ebp + ecx * 8 + (-0x2C)) = _st[0]; /* 0x100CBB9E: fst qword ptr [ebp + ecx*8 - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBBA2: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBBA4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBBA6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBBB0; /* 0x100CBBA9: jnp 0x100cbbb0 */
L_100CBBAB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CBBAB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x100CBBAC: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CBB9A; /* 0x100CBBAE: jl 0x100cbb9a */
L_100CBBB0:
    edx = MEM32(ebp + (-0x2C)); /* 0x100CBBB0: mov edx, dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBBB3: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CBBB6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100CBBB7: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x100CBBB8: mov dword ptr [ebp - 0x2c], edx */
    /* cmp edx, ebx */ /* 0x100CBBBB: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100CBAF4; /* 0x100CBBBD: jl 0x100cbaf4 */
L_100CBBC3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBBC3: fstp st(1) */
L_100CBBC5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBBC5: fstp st(0) */
L_100CBBC7:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CBBC7: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x100CBBCA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100CBBCC: pop edi */
    esi = POP32_VAL(esp); /* 0x100CBBCD: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CBBCE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CBBD0: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CBBD1: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CBBD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CBBD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBBD9: ret  */
L_100CBBDA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBBDA: fstp st(1) */
    PUSH32(esp, 8); /* 0x100CBBDC: push 8 */
    *(double*)ADDR(ebp + esi * 8 + (-0x24)) = _st[0]; /* 0x100CBBDE: fst qword ptr [ebp + esi*8 - 0x24] */
    esi = POP32_VAL(esp); /* 0x100CBBE2: pop esi */
    RECOMP_BACKEDGE();
    goto L_100CBB30; /* 0x100CBBE3: jmp 0x100cbb30 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100CBBE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBBE8u);

L_100CBBE8:
    PUSH32(esp, ebp); /* 0x100CBBE8: push ebp */
    ebp = esp; /* 0x100CBBE9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CBBEB: push ecx */
    PUSH32(esp, ecx); /* 0x100CBBEC: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBBED: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CBBF0: push ebx */
    PUSH32(esp, esi); /* 0x100CBBF1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100CBBF2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CBBF5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100CBBF6: mov edi, dword ptr [ebp + 0xc] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CBBF9: fst qword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x100CBBFC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CBCCB; /* 0x100CBBFE: jle 0x100cbccb */
L_100CBC04:
    /* cmp edi, 1 */ /* 0x100CBC04: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBCC7; /* 0x100CBC07: je 0x100cbcc7 */
L_100CBC0D:
    eax = ebp + (-0x8); /* 0x100CBC0D: lea eax, [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBC10: fstp st(0) */
    PUSH32(esp, eax); /* 0x100CBC12: push eax */
    eax = ebp + 0xC; /* 0x100CBC13: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CBC16: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CBC17: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CBC1C: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CBC1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBC20: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100CBC21: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBCC4; /* 0x100CBC24: je 0x100cbcc4 */
L_100CBC2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CBC2A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CBC2C: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CBC40; /* 0x100CBC2F: jge 0x100cbc40 */
L_100CBC31:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CBC31: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CBC34: fstp qword ptr [esi] */
    fp_push(0.0); /* 0x100CBC36: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x100CBC38: fstp qword ptr [esi + 8] */
    goto L_100CBCCD; /* 0x100CBC3B: jmp 0x100cbccd */
L_100CBC40:
    eax = ebp + (-0x8); /* 0x100CBC40: lea eax, [ebp - 8] */
    PUSH32(esp, 0x1Au); /* 0x100CBC43: push 0x1a */
    PUSH32(esp, eax); /* 0x100CBC45: push eax */
    RECOMP_CALL(sub_100C002B); /* 0x100CBC46: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CBC4B: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CBC4F: push eax */
    eax = ebp + (-0x8); /* 0x100CBC50: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CBC53: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100CBC54: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CBC59: fld qword ptr [ebp - 8] */
    ebx = esi + 0x8; /* 0x100CBC5C: lea ebx, [esi + 8] */
    *(double*)ADDR(esi) = _st[0]; /* 0x100CBC5F: fst qword ptr [esi] */
    _st[0] = *(double*)ADDR(ebp + 0x10) - _st[0]; /* 0x100CBC61: fsubr qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CBC64: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100CBC67: fst qword ptr [ebp + 0x10] */
    *(double*)ADDR(ebx) = _st[0]; /* 0x100CBC6A: fst qword ptr [ebx] */
    /* cmp edi, 2 */ /* 0x100CBC6C: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBCCB; /* 0x100CBC6F: jle 0x100cbccb */
L_100CBC71:
    fp_push(0.0); /* 0x100CBC71: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBC73: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBC75: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBC77: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CBC79: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBCBF; /* 0x100CBC7C: jnp 0x100cbcbf */
L_100CBC7E:
    eax = ebp + 0xC; /* 0x100CBC7E: lea eax, [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBC81: fstp st(0) */
    PUSH32(esp, ebx); /* 0x100CBC83: push ebx */
    PUSH32(esp, eax); /* 0x100CBC84: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CBC85: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Au); /* 0x100CBC8A: push 0x1a */
    PUSH32(esp, ebx); /* 0x100CBC8C: push ebx */
    RECOMP_CALL(sub_100C002B); /* 0x100CBC8D: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x100CBC92: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CBC96: push eax */
    PUSH32(esp, ebx); /* 0x100CBC97: push ebx */
    RECOMP_CALL(sub_100D6871); /* 0x100CBC98: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBC9D: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CBCA0: add esp, 0x18 */
    _flag_k = FK_ADD;
    _st[0] -= *(double*)ADDR(ebx); /* 0x100CBCA3: fsub qword ptr [ebx] */
    *(double*)ADDR(esi + 0x10) = _st[0]; /* 0x100CBCA5: fst qword ptr [esi + 0x10] */
    /* cmp edi, 3 */ /* 0x100CBCA8: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CBCCB; /* 0x100CBCAB: jle 0x100cbccb */
L_100CBCAD:
    fp_push(0.0); /* 0x100CBCAD: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBCAF: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBCB1: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBCB3: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CBCB5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBCCB; /* 0x100CBCB8: jnp 0x100cbccb */
L_100CBCBA:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x18) = _v; } /* 0x100CBCBA: fstp qword ptr [esi + 0x18] */
    goto L_100CBCCD; /* 0x100CBCBD: jmp 0x100cbccd */
L_100CBCBF:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x100CBCBF: fstp qword ptr [esi + 0x10] */
    goto L_100CBCCD; /* 0x100CBCC2: jmp 0x100cbccd */
L_100CBCC4:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CBCC4: fld qword ptr [ebp - 8] */
L_100CBCC7:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CBCC7: fstp qword ptr [esi] */
    goto L_100CBCCD; /* 0x100CBCC9: jmp 0x100cbccd */
L_100CBCCB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBCCB: fstp st(0) */
L_100CBCCD:
    edi = POP32_VAL(esp); /* 0x100CBCCD: pop edi */
    eax = esi; /* 0x100CBCCE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100CBCD0: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CBCD1: pop ebx */
    esp = ebp; /* 0x100CBCD2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CBCD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBCD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBCD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBCD6u);

L_100CBCD6:
    PUSH32(esp, ebp); /* 0x100CBCD6: push ebp */
    ebp = esp; /* 0x100CBCD7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x100CBCD9: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CBCDF: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CBCE4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CBCE6: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBCE9: fld qword ptr [ebp + 8] */
    eax = ebp + (-0x60); /* 0x100CBCEC: lea eax, [ebp - 0x60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x60)) = _v; } /* 0x100CBCEF: fstp qword ptr [ebp - 0x60] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBCF2: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100CBCF5: push ebx */
    PUSH32(esp, edi); /* 0x100CBCF6: push edi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x100CBCF7: fstp qword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x100CBCFA: fld qword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x100CBCFD: push eax */
    eax = ebp + (-0x4C); /* 0x100CBCFE: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100CBD01: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x100CBD02: fstp qword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_100D6993); /* 0x100CBD05: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBD0A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBD0B: pop ecx */
    PUSH32(esp, 2); /* 0x100CBD0C: push 2 */
    edi = (uint32_t)LO16(eax); /* 0x100CBD0E: movzx edi, ax */
    ebx = POP32_VAL(esp); /* 0x100CBD11: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100CBD12: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBD1F; /* 0x100CBD15: jne 0x100cbd1f */
L_100CBD17:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBD17: fld qword ptr [ebp + 8] */
    goto L_100CBEDB; /* 0x100CBD1A: jmp 0x100cbedb */
L_100CBD1F:
    PUSH32(esp, esi); /* 0x100CBD1F: push esi */
    eax = ebp + (-0x68); /* 0x100CBD20: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x100CBD23: push eax */
    eax = ebp + (-0x50); /* 0x100CBD24: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x100CBD27: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CBD28: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100CBD2D: movzx esi, ax */
    ecx = POP32_VAL(esp); /* 0x100CBD30: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBD31: pop ecx */
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100CBD32: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBD3F; /* 0x100CBD35: jne 0x100cbd3f */
L_100CBD37:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBD37: fld qword ptr [ebp + 0x10] */
    goto L_100CBEDA; /* 0x100CBD3A: jmp 0x100cbeda */
L_100CBD3F:
    eax = ebp + (-0x58); /* 0x100CBD3F: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100CBD42: push eax */
    eax = ebp + (-0x48); /* 0x100CBD43: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x100CBD46: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CBD47: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100CBD4C: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x100CBD4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBD50: pop ecx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100CBD51: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBD70; /* 0x100CBD54: je 0x100cbd70 */
L_100CBD56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CBD56: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CBD58: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(edi), LO16(edx) */ /* 0x100CBD59: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBE9E; /* 0x100CBD5C: je 0x100cbe9e */
L_100CBD62:
    /* cmp LO16(esi), LO16(edx) */ /* 0x100CBD62: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBE9E; /* 0x100CBD65: je 0x100cbe9e */
L_100CBD6B:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CBD6B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBD78; /* 0x100CBD6E: jne 0x100cbd78 */
L_100CBD70:
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x100CBD70: fld qword ptr [ebp + 0x18] */
    goto L_100CBEDA; /* 0x100CBD73: jmp 0x100cbeda */
L_100CBD78:
    /* test LO16(edi), LO16(edi) */ /* 0x100CBD78: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBD7B: je 0x100cbec2 */
L_100CBD81:
    /* test LO16(esi), LO16(esi) */ /* 0x100CBD81: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBD84: je 0x100cbec2 */
L_100CBD8A:
    /* test LO16(eax), LO16(eax) */ /* 0x100CBD8A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBD8D: je 0x100cbec2 */
L_100CBD93:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4C)); /* 0x100CBD93: movsx eax, word ptr [ebp - 0x4c] */
    edx = 0x8000u; /* 0x100CBD97: mov edx, 0x8000 */
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x50)); /* 0x100CBD9C: movsx esi, word ptr [ebp - 0x50] */
    SET_LO16(ecx, MEM16(ebp + (-0x48))); /* 0x100CBDA0: mov cx, word ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100CBDA4: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xE); /* 0x100CBDA6: mov eax, dword ptr [ebp + 0xe] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - LO16(esi)); /* 0x100CBDA9: sub cx, si */
    _flag_k = FK_NARROW(FK_CMP, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CBDAC: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x1E)); /* 0x100CBDB0: xor ax, word ptr [ebp + 0x1e] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + (-0x48)) = (uint16_t)(LO16(ecx)); /* 0x100CBDB4: mov word ptr [ebp - 0x48], cx */
    /* test LO16(edx), LO16(eax) */ /* 0x100CBDB8: test dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBDBB: je 0x100cbec2 */
L_100CBDC1:
    PUSH32(esp, 4); /* 0x100CBDC1: push 4 */
    eax = ebx + ecx; /* 0x100CBDC3: lea eax, [ebx + ecx] */
    edi = POP32_VAL(esp); /* 0x100CBDC6: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CBDC7: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBDCA: ja 0x100cbec2 */
L_100CBDD0:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x100CBDD0: movsx eax, cx */
    PUSH32(esp, eax); /* 0x100CBDD3: push eax */
    eax = ebp + (-0x58); /* 0x100CBDD4: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100CBDD7: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100CBDD8: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x60))); /* 0x100CBDDD: fld qword ptr [ebp - 0x60] */
    eax = ebp + (-0x24); /* 0x100CBDE0: lea eax, [ebp - 0x24] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBDE3: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CBDE6: push edi */
    PUSH32(esp, eax); /* 0x100CBDE7: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CBDE8: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x68))); /* 0x100CBDED: fld qword ptr [ebp - 0x68] */
    eax = ebp + (-0x78); /* 0x100CBDF0: lea eax, [ebp - 0x78] */
    ecx = POP32_VAL(esp); /* 0x100CBDF3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBDF4: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBDF5: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CBDF8: push ebx */
    PUSH32(esp, eax); /* 0x100CBDF9: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CBDFA: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x58))); /* 0x100CBDFF: fld qword ptr [ebp - 0x58] */
    eax = ebp + (-0x88); /* 0x100CBE02: lea eax, [ebp - 0x88] */
    ecx = POP32_VAL(esp); /* 0x100CBE08: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBE09: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBE0A: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x100CBE0D: push ebx */
    PUSH32(esp, eax); /* 0x100CBE0E: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CBE0F: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x78))); /* 0x100CBE14: fld qword ptr [ebp - 0x78] */
    eax = ebp + (-0x24); /* 0x100CBE17: lea eax, [ebp - 0x24] */
    ecx = POP32_VAL(esp); /* 0x100CBE1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBE1B: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBE1C: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CBE1F: push edi */
    PUSH32(esp, eax); /* 0x100CBE20: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CBE21: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x70))); /* 0x100CBE26: fld qword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CBE29: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CBE2C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBE2E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBE30: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBE32: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBE6D; /* 0x100CBE35: jnp 0x100cbe6d */
L_100CBE37:
    fp_push(*(double*)ADDR(ebp + (-0x60))); /* 0x100CBE37: fld qword ptr [ebp - 0x60] */
    eax = ebp + (-0x44); /* 0x100CBE3A: lea eax, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x100CBE3D: push ecx */
    PUSH32(esp, ecx); /* 0x100CBE3E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBE3F: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CBE42: push edi */
    PUSH32(esp, eax); /* 0x100CBE43: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CBE44: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x70))); /* 0x100CBE49: fld qword ptr [ebp - 0x70] */
    eax = ebp + (-0x44); /* 0x100CBE4C: lea eax, [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x100CBE4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CBE50: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CBE51: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x100CBE54: push edi */
    PUSH32(esp, eax); /* 0x100CBE55: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CBE56: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100CBE5B: push edi */
    eax = ebp + (-0x44); /* 0x100CBE5C: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x100CBE5F: push eax */
    eax = ebp + (-0x24); /* 0x100CBE60: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CBE63: push edi */
    PUSH32(esp, eax); /* 0x100CBE64: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CBE65: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CBE6A: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CBE6D:
    PUSH32(esp, ebx); /* 0x100CBE6D: push ebx */
    eax = ebp + (-0x88); /* 0x100CBE6E: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x100CBE74: push eax */
    eax = ebp + (-0x24); /* 0x100CBE75: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CBE78: push edi */
    PUSH32(esp, eax); /* 0x100CBE79: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CBE7A: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x100CBE7F: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x100CBE82: push edi */
    PUSH32(esp, eax); /* 0x100CBE83: push eax */
    RECOMP_CALL(sub_100CBA16); /* 0x100CBE84: call 0x100cba16 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x100CBE89: lea eax, [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x100CBE8C: push esi */
    PUSH32(esp, eax); /* 0x100CBE8D: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x100CBE8E: fstp qword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_100D6871); /* 0x100CBE91: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x58))); /* 0x100CBE96: fld qword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CBE99: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_100CBEDA; /* 0x100CBE9C: jmp 0x100cbeda */
L_100CBE9E:
    /* test LO16(edi), LO16(edi) */ /* 0x100CBE9E: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBECD; /* 0x100CBEA1: je 0x100cbecd */
L_100CBEA3:
    /* test LO16(esi), LO16(esi) */ /* 0x100CBEA3: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBECD; /* 0x100CBEA6: je 0x100cbecd */
L_100CBEA8:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100CBEA8: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBEC2; /* 0x100CBEAB: jne 0x100cbec2 */
L_100CBEAD:
    eax = MEM32(ebp + 0xE); /* 0x100CBEAD: mov eax, dword ptr [ebp + 0xe] */
    ecx = 0x8000u; /* 0x100CBEB0: mov ecx, 0x8000 */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100CBEB5: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x1E))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x1E)); /* 0x100CBEB9: xor ax, word ptr [ebp + 0x1e] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test LO16(ecx), LO16(eax) */ /* 0x100CBEBD: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CBECD; /* 0x100CBEC0: jne 0x100cbecd */
L_100CBEC2:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBEC2: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100CBEC5: fmul qword ptr [ebp + 0x10] */
    _st[0] += *(double*)ADDR(ebp + 0x18); /* 0x100CBEC8: fadd qword ptr [ebp + 0x18] */
    goto L_100CBEDA; /* 0x100CBECB: jmp 0x100cbeda */
L_100CBECD:
    PUSH32(esp, edx); /* 0x100CBECD: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CBECE: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100CBED3: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100CBED9: pop ecx */
L_100CBEDA:
    esi = POP32_VAL(esp); /* 0x100CBEDA: pop esi */
L_100CBEDB:
    ecx = MEM32(ebp + (-0x4)); /* 0x100CBEDB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100CBEDE: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CBEDF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CBEE1: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100CBEE2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CBEE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CBEE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBEEA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBEEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBEEBu);

L_100CBEEB:
    PUSH32(esp, ebp); /* 0x100CBEEB: push ebp */
    ebp = esp; /* 0x100CBEEC: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CBEEE: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CBEF1: push esi */
    PUSH32(esp, eax); /* 0x100CBEF2: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CBEF3: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBEF8: pop ecx */
    PUSH32(esp, 2); /* 0x100CBEF9: push 2 */
    esi = POP32_VAL(esp); /* 0x100CBEFB: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBEFC: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBF06; /* 0x100CBEFF: jne 0x100cbf06 */
L_100CBF01:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBF01: fld qword ptr [ebp + 0x10] */
    goto L_100CBF45; /* 0x100CBF04: jmp 0x100cbf45 */
L_100CBF06:
    eax = ebp + 0x10; /* 0x100CBF06: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CBF09: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CBF0A: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBF0F: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBF10: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBF1A; /* 0x100CBF13: jne 0x100cbf1a */
L_100CBF15:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBF15: fld qword ptr [ebp + 8] */
    goto L_100CBF45; /* 0x100CBF18: jmp 0x100cbf45 */
L_100CBF1A:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBF1A: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBF1D: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBF20: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBF22: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CBF24: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBF43; /* 0x100CBF27: jnp 0x100cbf43 */
L_100CBF29:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBF29: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBF2B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBF2D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CBF3F; /* 0x100CBF30: jp 0x100cbf3f */
L_100CBF32:
    eax = MEM32(ebp + 0xE); /* 0x100CBF32: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CBF35: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CBF38: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CBF43; /* 0x100CBF3D: jne 0x100cbf43 */
L_100CBF3F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBF3F: fstp st(1) */
    goto L_100CBF45; /* 0x100CBF41: jmp 0x100cbf45 */
L_100CBF43:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBF43: fstp st(0) */
L_100CBF45:
    esi = POP32_VAL(esp); /* 0x100CBF45: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CBF46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBF47: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBF48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBF48u);

L_100CBF48:
    PUSH32(esp, ebp); /* 0x100CBF48: push ebp */
    ebp = esp; /* 0x100CBF49: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CBF4B: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CBF4E: push esi */
    PUSH32(esp, eax); /* 0x100CBF4F: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CBF50: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBF55: pop ecx */
    PUSH32(esp, 2); /* 0x100CBF56: push 2 */
    esi = POP32_VAL(esp); /* 0x100CBF58: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBF59: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBF63; /* 0x100CBF5C: jne 0x100cbf63 */
L_100CBF5E:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CBF5E: fld dword ptr [ebp + 0xc] */
    goto L_100CBFA1; /* 0x100CBF61: jmp 0x100cbfa1 */
L_100CBF63:
    eax = ebp + 0xC; /* 0x100CBF63: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CBF66: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CBF67: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CBF6C: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CBF6F: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBF70: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CBFA1; /* 0x100CBF73: je 0x100cbfa1 */
L_100CBF75:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CBF75: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBF78: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBF7A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CBF7C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CBF9F; /* 0x100CBF7F: je 0x100cbf9f */
L_100CBF81:
    fp_push(_st[1]); /* 0x100CBF81: fld st(1) */
    fp_push(_st[1]); /* 0x100CBF83: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBF85: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBF87: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBF89: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CBF9B; /* 0x100CBF8C: jp 0x100cbf9b */
L_100CBF8E:
    eax = MEM32(ebp + 0xA); /* 0x100CBF8E: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100CBF91: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CBF94: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CBF9F; /* 0x100CBF99: jne 0x100cbf9f */
L_100CBF9B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBF9B: fstp st(0) */
    goto L_100CBFA1; /* 0x100CBF9D: jmp 0x100cbfa1 */
L_100CBF9F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBF9F: fstp st(1) */
L_100CBFA1:
    esi = POP32_VAL(esp); /* 0x100CBFA1: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CBFA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CBFA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CBFA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CBFA4u);

L_100CBFA4:
    PUSH32(esp, ebp); /* 0x100CBFA4: push ebp */
    ebp = esp; /* 0x100CBFA5: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CBFA7: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CBFAA: push esi */
    PUSH32(esp, eax); /* 0x100CBFAB: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CBFAC: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBFB1: pop ecx */
    PUSH32(esp, 2); /* 0x100CBFB2: push 2 */
    esi = POP32_VAL(esp); /* 0x100CBFB4: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBFB5: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBFBF; /* 0x100CBFB8: jne 0x100cbfbf */
L_100CBFBA:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBFBA: fld qword ptr [ebp + 0x10] */
    goto L_100CBFFE; /* 0x100CBFBD: jmp 0x100cbffe */
L_100CBFBF:
    eax = ebp + 0x10; /* 0x100CBFBF: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CBFC2: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CBFC3: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CBFC8: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CBFC9: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CBFD3; /* 0x100CBFCC: jne 0x100cbfd3 */
L_100CBFCE:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBFCE: fld qword ptr [ebp + 8] */
    goto L_100CBFFE; /* 0x100CBFD1: jmp 0x100cbffe */
L_100CBFD3:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CBFD3: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CBFD6: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBFD9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBFDB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CBFDD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CBFFC; /* 0x100CBFE0: jnp 0x100cbffc */
L_100CBFE2:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CBFE2: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CBFE4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CBFE6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CBFF8; /* 0x100CBFE9: jp 0x100cbff8 */
L_100CBFEB:
    eax = MEM32(ebp + 0xE); /* 0x100CBFEB: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CBFEE: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CBFF1: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CBFFC; /* 0x100CBFF6: jne 0x100cbffc */
L_100CBFF8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CBFF8: fstp st(1) */
    goto L_100CBFFE; /* 0x100CBFFA: jmp 0x100cbffe */
L_100CBFFC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CBFFC: fstp st(0) */
L_100CBFFE:
    esi = POP32_VAL(esp); /* 0x100CBFFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CBFFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC000: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC001(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC001u);

L_100CC001:
    PUSH32(esp, ebp); /* 0x100CC001: push ebp */
    ebp = esp; /* 0x100CC002: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CC004: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CC007: push esi */
    PUSH32(esp, eax); /* 0x100CC008: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CC009: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC00E: pop ecx */
    PUSH32(esp, 2); /* 0x100CC00F: push 2 */
    esi = POP32_VAL(esp); /* 0x100CC011: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC012: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC01C; /* 0x100CC015: jne 0x100cc01c */
L_100CC017:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CC017: fld qword ptr [ebp + 0x10] */
    goto L_100CC05B; /* 0x100CC01A: jmp 0x100cc05b */
L_100CC01C:
    eax = ebp + 0x10; /* 0x100CC01C: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CC01F: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CC020: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC025: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC026: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC030; /* 0x100CC029: jne 0x100cc030 */
L_100CC02B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC02B: fld qword ptr [ebp + 8] */
    goto L_100CC05B; /* 0x100CC02E: jmp 0x100cc05b */
L_100CC030:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CC030: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC033: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC036: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC038: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CC03A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC059; /* 0x100CC03D: jnp 0x100cc059 */
L_100CC03F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC03F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC041: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC043: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC055; /* 0x100CC046: jp 0x100cc055 */
L_100CC048:
    eax = MEM32(ebp + 0xE); /* 0x100CC048: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CC04B: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CC04E: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC059; /* 0x100CC053: jne 0x100cc059 */
L_100CC055:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CC055: fstp st(0) */
    goto L_100CC05B; /* 0x100CC057: jmp 0x100cc05b */
L_100CC059:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CC059: fstp st(1) */
L_100CC05B:
    esi = POP32_VAL(esp); /* 0x100CC05B: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CC05C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC05D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC05E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC05Eu);

L_100CC05E:
    PUSH32(esp, ebp); /* 0x100CC05E: push ebp */
    ebp = esp; /* 0x100CC05F: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CC061: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CC064: push esi */
    PUSH32(esp, eax); /* 0x100CC065: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CC066: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC06B: pop ecx */
    PUSH32(esp, 2); /* 0x100CC06C: push 2 */
    esi = POP32_VAL(esp); /* 0x100CC06E: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC06F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC079; /* 0x100CC072: jne 0x100cc079 */
L_100CC074:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CC074: fld dword ptr [ebp + 0xc] */
    goto L_100CC0B7; /* 0x100CC077: jmp 0x100cc0b7 */
L_100CC079:
    eax = ebp + 0xC; /* 0x100CC079: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CC07C: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CC07D: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CC082: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CC085: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC086: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CC0B7; /* 0x100CC089: je 0x100cc0b7 */
L_100CC08B:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CC08B: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC08E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC090: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC092: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CC0B5; /* 0x100CC095: je 0x100cc0b5 */
L_100CC097:
    fp_push(_st[1]); /* 0x100CC097: fld st(1) */
    fp_push(_st[1]); /* 0x100CC099: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC09B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC09D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC09F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC0B1; /* 0x100CC0A2: jp 0x100cc0b1 */
L_100CC0A4:
    eax = MEM32(ebp + 0xA); /* 0x100CC0A4: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100CC0A7: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CC0AA: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC0B5; /* 0x100CC0AF: jne 0x100cc0b5 */
L_100CC0B1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CC0B1: fstp st(1) */
    goto L_100CC0B7; /* 0x100CC0B3: jmp 0x100cc0b7 */
L_100CC0B5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CC0B5: fstp st(0) */
L_100CC0B7:
    esi = POP32_VAL(esp); /* 0x100CC0B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CC0B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC0B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC0BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC0BAu);

L_100CC0BA:
    PUSH32(esp, ebp); /* 0x100CC0BA: push ebp */
    ebp = esp; /* 0x100CC0BB: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CC0BD: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CC0C0: push esi */
    PUSH32(esp, eax); /* 0x100CC0C1: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CC0C2: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC0C7: pop ecx */
    PUSH32(esp, 2); /* 0x100CC0C8: push 2 */
    esi = POP32_VAL(esp); /* 0x100CC0CA: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC0CB: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC0D5; /* 0x100CC0CE: jne 0x100cc0d5 */
L_100CC0D0:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CC0D0: fld qword ptr [ebp + 0x10] */
    goto L_100CC114; /* 0x100CC0D3: jmp 0x100cc114 */
L_100CC0D5:
    eax = ebp + 0x10; /* 0x100CC0D5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CC0D8: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CC0D9: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC0DE: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CC0DF: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC0E9; /* 0x100CC0E2: jne 0x100cc0e9 */
L_100CC0E4:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC0E4: fld qword ptr [ebp + 8] */
    goto L_100CC114; /* 0x100CC0E7: jmp 0x100cc114 */
L_100CC0E9:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CC0E9: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC0EC: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC0EF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC0F1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CC0F3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC112; /* 0x100CC0F6: jnp 0x100cc112 */
L_100CC0F8:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC0F8: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC0FA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC0FC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC10E; /* 0x100CC0FF: jp 0x100cc10e */
L_100CC101:
    eax = MEM32(ebp + 0xE); /* 0x100CC101: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CC104: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CC107: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC112; /* 0x100CC10C: jne 0x100cc112 */
L_100CC10E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CC10E: fstp st(0) */
    goto L_100CC114; /* 0x100CC110: jmp 0x100cc114 */
L_100CC112:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CC112: fstp st(1) */
L_100CC114:
    esi = POP32_VAL(esp); /* 0x100CC114: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CC115: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC116: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC117(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC117u);

L_100CC117:
    PUSH32(esp, ebp); /* 0x100CC117: push ebp */
    ebp = esp; /* 0x100CC118: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CC11A: push ecx */
    PUSH32(esp, ecx); /* 0x100CC11B: push ecx */
    PUSH32(esp, esi); /* 0x100CC11C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x100CC11D: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x100CC120: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC13B; /* 0x100CC122: jne 0x100cc13b */
L_100CC124:
    RECOMP_CALL(sub_1001177D); /* 0x100CC124: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100CC129: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100CC12F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100CC134: fldz  */
    goto L_100CC1EC; /* 0x100CC136: jmp 0x100cc1ec */
L_100CC13B:
    PUSH32(esp, ebx); /* 0x100CC13B: push ebx */
    PUSH32(esp, edi); /* 0x100CC13C: push edi */
    ebx = 0xFFFFu; /* 0x100CC13D: mov ebx, 0xffff */
    PUSH32(esp, ebx); /* 0x100CC142: push ebx */
    PUSH32(esp, 0x133Fu); /* 0x100CC143: push 0x133f */
    RECOMP_CALL(sub_100D3175); /* 0x100CC148: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC14D: fld qword ptr [ebp + 8] */
    edi = eax; /* 0x100CC150: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x100CC152: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC153: pop ecx */
    ecx = MEM32(ebp + 0xE); /* 0x100CC154: mov ecx, dword ptr [ebp + 0xe] */
    eax = 0x7FF0u; /* 0x100CC157: mov eax, 0x7ff0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100CC15C: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100CC15F: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CC161: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC1CF; /* 0x100CC164: jne 0x100cc1cf */
L_100CC166:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x100CC166: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100CC169: push ecx */
    PUSH32(esp, ecx); /* 0x100CC16A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC16B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D305A); /* 0x100CC16E: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC173: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC174: pop ecx */
    /* test eax, eax */ /* 0x100CC175: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CC1AB; /* 0x100CC177: jle 0x100cc1ab */
L_100CC179:
    /* cmp eax, 2 */ /* 0x100CC179: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CC198; /* 0x100CC17C: jle 0x100cc198 */
L_100CC17E:
    /* cmp eax, 3 */ /* 0x100CC17E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC1AB; /* 0x100CC181: jne 0x100cc1ab */
L_100CC183:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC183: fld qword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CC186: push edi */
    PUSH32(esp, ecx); /* 0x100CC187: push ecx */
    PUSH32(esp, ecx); /* 0x100CC188: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC189: fstp qword ptr [esp] */
    PUSH32(esp, 0x17u); /* 0x100CC18C: push 0x17 */
    RECOMP_CALL(sub_100C03F1); /* 0x100CC18E: call 0x100c03f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC193: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CC1EA; /* 0x100CC196: jmp 0x100cc1ea */
L_100CC198:
    fp_push(*(double*)ADDR(0x100E28D8)); /* 0x100CC198: fld qword ptr [0x100e28d8] */
    PUSH32(esp, edi); /* 0x100CC19E: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CC19F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC1A2: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC1A6: fld qword ptr [ebp + 8] */
    goto L_100CC1BE; /* 0x100CC1A9: jmp 0x100cc1be */
L_100CC1AB:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC1AB: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10067CD8)); /* 0x100CC1AE: fld qword ptr [0x10067cd8] */
    PUSH32(esp, edi); /* 0x100CC1B4: push edi */
    _st[0] += _st[1]; /* 0x100CC1B5: fadd st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CC1B7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC1BA: fstp qword ptr [esp + 8] */
L_100CC1BE:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC1BE: fstp qword ptr [esp] */
    PUSH32(esp, 0x17u); /* 0x100CC1C1: push 0x17 */
    PUSH32(esp, 8); /* 0x100CC1C3: push 8 */
    RECOMP_CALL(sub_100C006F); /* 0x100CC1C5: call 0x100c006f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CC1CA: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_100CC1EA; /* 0x100CC1CD: jmp 0x100cc1ea */
L_100CC1CF:
    PUSH32(esp, esi); /* 0x100CC1CF: push esi */
    PUSH32(esp, ecx); /* 0x100CC1D0: push ecx */
    PUSH32(esp, ecx); /* 0x100CC1D1: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC1D2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100CC1D5: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x100CC1DA: push ebx */
    PUSH32(esp, edi); /* 0x100CC1DB: push edi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CC1DC: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D3175); /* 0x100CC1DF: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CC1E4: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CC1E7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100CC1EA:
    edi = POP32_VAL(esp); /* 0x100CC1EA: pop edi */
    ebx = POP32_VAL(esp); /* 0x100CC1EB: pop ebx */
L_100CC1EC:
    esi = POP32_VAL(esp); /* 0x100CC1EC: pop esi */
    esp = ebp; /* 0x100CC1ED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC1EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC1F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC1F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC1F1u);

L_100CC1F1:
    PUSH32(esp, ebp); /* 0x100CC1F1: push ebp */
    ebp = esp; /* 0x100CC1F2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CC1F4: push ecx */
    eax = ebp + 0x8; /* 0x100CC1F5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CC1F8: push eax */
    eax = ebp + (-0x4); /* 0x100CC1F9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CC1FC: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CC1FD: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC202: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CC203: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC204: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CC205: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC220; /* 0x100CC208: je 0x100cc220 */
L_100CC20A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC20A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC219; /* 0x100CC20B: je 0x100cc219 */
L_100CC20D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC20D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC219; /* 0x100CC20E: je 0x100cc219 */
L_100CC210:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CC210: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CC214: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC216: cwde  */
    goto L_100CC225; /* 0x100CC217: jmp 0x100cc225 */
L_100CC219:
    eax = 0x7FFFFFFFu; /* 0x100CC219: mov eax, 0x7fffffff */
    goto L_100CC225; /* 0x100CC21E: jmp 0x100cc225 */
L_100CC220:
    eax = 0x80000000u; /* 0x100CC220: mov eax, 0x80000000 */
L_100CC225:
    esp = ebp; /* 0x100CC225: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC227: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC228: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC229(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC229u);

L_100CC229:
    PUSH32(esp, ebp); /* 0x100CC229: push ebp */
    ebp = esp; /* 0x100CC22A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CC22C: push ecx */
    eax = ebp + 0x8; /* 0x100CC22D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CC230: push eax */
    eax = ebp + (-0x4); /* 0x100CC231: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CC234: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CC235: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC23A: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CC23B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC23C: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CC23D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC258; /* 0x100CC240: je 0x100cc258 */
L_100CC242:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC242: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC251; /* 0x100CC243: je 0x100cc251 */
L_100CC245:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC245: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC251; /* 0x100CC246: je 0x100cc251 */
L_100CC248:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CC248: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CC24C: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC24E: cwde  */
    goto L_100CC25D; /* 0x100CC24F: jmp 0x100cc25d */
L_100CC251:
    eax = 0x7FFFFFFFu; /* 0x100CC251: mov eax, 0x7fffffff */
    goto L_100CC25D; /* 0x100CC256: jmp 0x100cc25d */
L_100CC258:
    eax = 0x80000000u; /* 0x100CC258: mov eax, 0x80000000 */
L_100CC25D:
    esp = ebp; /* 0x100CC25D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC25F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC260: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC261(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC261u);

L_100CC261:
    PUSH32(esp, ebp); /* 0x100CC261: push ebp */
    ebp = esp; /* 0x100CC262: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CC264: push ecx */
    eax = ebp + 0x8; /* 0x100CC265: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CC268: push eax */
    eax = ebp + (-0x4); /* 0x100CC269: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CC26C: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CC26D: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC272: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CC273: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC274: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CC275: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC290; /* 0x100CC278: je 0x100cc290 */
L_100CC27A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC27A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC289; /* 0x100CC27B: je 0x100cc289 */
L_100CC27D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CC27D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CC289; /* 0x100CC27E: je 0x100cc289 */
L_100CC280:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CC280: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CC284: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC286: cwde  */
    goto L_100CC295; /* 0x100CC287: jmp 0x100cc295 */
L_100CC289:
    eax = 0x7FFFFFFFu; /* 0x100CC289: mov eax, 0x7fffffff */
    goto L_100CC295; /* 0x100CC28E: jmp 0x100cc295 */
L_100CC290:
    eax = 0x80000000u; /* 0x100CC290: mov eax, 0x80000000 */
L_100CC295:
    esp = ebp; /* 0x100CC295: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC297: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC298: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC299(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC299u);

L_100CC299:
    PUSH32(esp, ebp); /* 0x100CC299: push ebp */
    ebp = esp; /* 0x100CC29A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100CC29C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100CC29F: push esi */
    PUSH32(esp, edi); /* 0x100CC2A0: push edi */
    edi = 0xFFFFu; /* 0x100CC2A1: mov edi, 0xffff */
    PUSH32(esp, edi); /* 0x100CC2A6: push edi */
    PUSH32(esp, 0x133Fu); /* 0x100CC2A7: push 0x133f */
    RECOMP_CALL(sub_100D3175); /* 0x100CC2AC: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC2B1: fld qword ptr [ebp + 8] */
    esi = eax; /* 0x100CC2B4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100CC2B6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC2B7: pop ecx */
    ecx = MEM32(ebp + 0xE); /* 0x100CC2B8: mov ecx, dword ptr [ebp + 0xe] */
    eax = 0x7FF0u; /* 0x100CC2BB: mov eax, 0x7ff0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100CC2C0: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100CC2C3: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CC2C5: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC347; /* 0x100CC2C8: jne 0x100cc347 */
L_100CC2CA:
    PUSH32(esp, ecx); /* 0x100CC2CA: push ecx */
    PUSH32(esp, ecx); /* 0x100CC2CB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC2CC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D305A); /* 0x100CC2CF: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC2D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC2D5: pop ecx */
    /* test eax, eax */ /* 0x100CC2D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CC31B; /* 0x100CC2D8: jle 0x100cc31b */
L_100CC2DA:
    /* cmp eax, 2 */ /* 0x100CC2DA: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CC30A; /* 0x100CC2DD: jle 0x100cc30a */
L_100CC2DF:
    /* cmp eax, 3 */ /* 0x100CC2DF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CC31B; /* 0x100CC2E2: jne 0x100cc31b */
L_100CC2E4:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC2E4: fild dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100CC2E7: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CC2E8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CC2EB: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CC2EE: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC2F1: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC2F5: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC2F8: fstp qword ptr [esp] */
    PUSH32(esp, 0x19u); /* 0x100CC2FB: push 0x19 */
    RECOMP_CALL(sub_100C0441); /* 0x100CC2FD: call 0x100c0441 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CC302: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_100CC47F; /* 0x100CC305: jmp 0x100cc47f */
L_100CC30A:
    PUSH32(esp, edi); /* 0x100CC30A: push edi */
    PUSH32(esp, esi); /* 0x100CC30B: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100CC30C: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC311: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC312: pop ecx */
L_100CC313:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC313: fld qword ptr [ebp + 8] */
    goto L_100CC47F; /* 0x100CC316: jmp 0x100cc47f */
L_100CC31B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC31B: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10067CD8)); /* 0x100CC31E: fld qword ptr [0x10067cd8] */
    _st[0] += _st[1]; /* 0x100CC324: fadd st(1) */
    PUSH32(esp, esi); /* 0x100CC326: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CC327: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100CC32A: fstp qword ptr [esp + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC32E: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CC331: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC334: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC337: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC33B: fstp qword ptr [esp] */
    PUSH32(esp, 0x19u); /* 0x100CC33E: push 0x19 */
    PUSH32(esp, 8); /* 0x100CC340: push 8 */
    goto L_100CC477; /* 0x100CC342: jmp 0x100cc477 */
L_100CC347:
    fp_push(0.0); /* 0x100CC347: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC349: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC34B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC34D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC356; /* 0x100CC350: jp 0x100cc356 */
L_100CC352:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CC352: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_100CC30A; /* 0x100CC354: jmp 0x100cc30a */
L_100CC356:
    eax = ebp + (-0x4); /* 0x100CC356: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CC359: push eax */
    PUSH32(esp, ecx); /* 0x100CC35A: push ecx */
    PUSH32(esp, ecx); /* 0x100CC35B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC35C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100CC35F: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x100CC364: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CC367: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x100CC36A: mov edx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x100CC36D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CC37E; /* 0x100CC36F: jns 0x100cc37e */
L_100CC371:
    eax = 0x80000000u; /* 0x100CC371: mov eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100CC376: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp edx, eax */ /* 0x100CC378: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CC38D; /* 0x100CC37A: jge 0x100cc38d */
L_100CC37C:
    goto L_100CC3D6; /* 0x100CC37C: jmp 0x100cc3d6 */
L_100CC37E:
    eax = 0x7FFFFFFFu; /* 0x100CC37E: mov eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100CC383: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp edx, eax */ /* 0x100CC385: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100CC445; /* 0x100CC387: jg 0x100cc445 */
L_100CC38D:
    eax = edx + ecx; /* 0x100CC38D: lea eax, [edx + ecx] */
    /* cmp eax, 0xA00u */ /* 0x100CC390: cmp eax, 0xa00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100CC445; /* 0x100CC395: jg 0x100cc445 */
L_100CC39B:
    /* cmp eax, 0x400u */ /* 0x100CC39B: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CC3CF; /* 0x100CC3A0: jle 0x100cc3cf */
L_100CC3A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFA00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFA00u; /* 0x100CC3A2: add eax, 0xfffffa00 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100CC3A7: push eax */
    PUSH32(esp, ecx); /* 0x100CC3A8: push ecx */
    PUSH32(esp, ecx); /* 0x100CC3A9: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC3AA: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D302B); /* 0x100CC3AD: call 0x100d302b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CC3B2: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100CC3B5: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CC3B6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100CC3B9: fstp qword ptr [esp + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC3BD: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CC3C0: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CC3C3: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC3C6: fstp qword ptr [esp + 8] */
    goto L_100CC46D; /* 0x100CC3CA: jmp 0x100cc46d */
L_100CC3CF:
    /* cmp eax, 0xFFFFF603u */ /* 0x100CC3CF: cmp eax, 0xfffff603 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF603u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CC3FB; /* 0x100CC3D4: jge 0x100cc3fb */
L_100CC3D6:
    fp_push(0.0); /* 0x100CC3D6: fldz  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CC3D8: fmulp st(1) */
    PUSH32(esp, esi); /* 0x100CC3DA: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CC3DB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100CC3DE: fstp qword ptr [esp + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC3E2: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CC3E5: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CC3E8: fld qword ptr [ebp - 0xc] */
L_100CC3EB:
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC3EB: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC3EF: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC3F2: fstp qword ptr [esp] */
    PUSH32(esp, 0x19u); /* 0x100CC3F5: push 0x19 */
    PUSH32(esp, 0x12u); /* 0x100CC3F7: push 0x12 */
    goto L_100CC477; /* 0x100CC3F9: jmp 0x100cc477 */
L_100CC3FB:
    /* cmp eax, 0xFFFFFC03u */ /* 0x100CC3FB: cmp eax, 0xfffffc03 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFC03u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CC428; /* 0x100CC400: jge 0x100cc428 */
L_100CC402:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x600u; /* 0x100CC402: add eax, 0x600 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100CC407: push eax */
    PUSH32(esp, ecx); /* 0x100CC408: push ecx */
    PUSH32(esp, ecx); /* 0x100CC409: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC40A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D302B); /* 0x100CC40D: call 0x100d302b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CC412: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100CC415: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100CC416: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100CC419: fstp qword ptr [esp + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC41D: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CC420: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CC423: fld qword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_100CC3EB; /* 0x100CC426: jmp 0x100cc3eb */
L_100CC428:
    PUSH32(esp, eax); /* 0x100CC428: push eax */
    PUSH32(esp, ecx); /* 0x100CC429: push ecx */
    PUSH32(esp, ecx); /* 0x100CC42A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC42B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D302B); /* 0x100CC42E: call 0x100d302b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100CC433: push edi */
    PUSH32(esp, esi); /* 0x100CC434: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CC435: fstp qword ptr [ebp + 8] */
    RECOMP_CALL(sub_100D3175); /* 0x100CC438: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CC43D: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100CC313; /* 0x100CC440: jmp 0x100cc313 */
L_100CC445:
    PUSH32(esp, esi); /* 0x100CC445: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CC446: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC449: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x100E28D0)); /* 0x100CC44D: fld qword ptr [0x100e28d0] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC453: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100BF7B6); /* 0x100CC456: call 0x100bf7b6 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC45B: fstp qword ptr [esp + 8] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100CC45F: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CC462: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CC465: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC468: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x100CC46B: push ecx */
    PUSH32(esp, ecx); /* 0x100CC46C: push ecx */
L_100CC46D:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CC46D: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC470: fstp qword ptr [esp] */
    PUSH32(esp, 0x19u); /* 0x100CC473: push 0x19 */
    PUSH32(esp, 0x11u); /* 0x100CC475: push 0x11 */
L_100CC477:
    RECOMP_CALL(sub_100C0137); /* 0x100CC477: call 0x100c0137 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100CC47C: add esp, 0x24 */
    _flag_k = FK_ADD;
L_100CC47F:
    edi = POP32_VAL(esp); /* 0x100CC47F: pop edi */
    esi = POP32_VAL(esp); /* 0x100CC480: pop esi */
    esp = ebp; /* 0x100CC481: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC483: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC484: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC485(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC485u);

L_100CC485:
    PUSH32(esp, ebp); /* 0x100CC485: push ebp */
    ebp = esp; /* 0x100CC486: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x100CC488: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CC48E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CC493: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CC495: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x100CC498: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CC499: mov edi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(edi)); /* 0x100CC49C: fld qword ptr [edi] */
    *(double*)ADDR(ebp + (-0xA8)) = _st[0]; /* 0x100CC49E: fst qword ptr [ebp - 0xa8] */
    fp_push(*(double*)ADDR(0x10064E20)); /* 0x100CC4A4: fld qword ptr [0x10064e20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC4AA: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC4AC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CC4AE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC569; /* 0x100CC4B1: jp 0x100cc569 */
L_100CC4B7:
    fp_push(*(double*)ADDR(0x10064E00)); /* 0x100CC4B7: fld qword ptr [0x10064e00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC4BD: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC4BF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC4C1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC569; /* 0x100CC4C4: jne 0x100cc569 */
L_100CC4CA:
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100CC4CA: fmul qword ptr [0x10063bd8] */
    fp_push(0.0); /* 0x100CC4D0: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC4D2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC4D4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC4D6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC4E3; /* 0x100CC4D9: jp 0x100cc4e3 */
L_100CC4DB:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CC4DB: fadd qword ptr [0x10063bd0] */
    goto L_100CC4E9; /* 0x100CC4E1: jmp 0x100cc4e9 */
L_100CC4E3:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CC4E3: fsub qword ptr [0x10063bd0] */
L_100CC4E9:
    eax = ebp + (-0x9C); /* 0x100CC4E9: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CC4EF: push 0 */
    PUSH32(esp, eax); /* 0x100CC4F1: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CC4F2: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CC4F8: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CC4FD: fld qword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x100CC503: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC505: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC507: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CC509: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC50A: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CC50B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC55C; /* 0x100CC50E: jnp 0x100cc55c */
L_100CC510:
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100CC510: fld qword ptr [0x10063c60] */
    _st[0] *= _st[1]; /* 0x100CC516: fmul st(1) */
    _st[0] *= *(double*)ADDR(0x10064D58); /* 0x100CC518: fmul qword ptr [0x10064d58] */
    fp_push(*(double*)ADDR(0x10064E08)); /* 0x100CC51E: fld qword ptr [0x10064e08] */
    _st[0] *= _st[1]; /* 0x100CC524: fmul st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0xA8)) - _st[0]; /* 0x100CC526: fsubr qword ptr [ebp - 0xa8] */
    fp_push(_st[1]); /* 0x100CC52C: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064DF8); /* 0x100CC52E: fmul qword ptr [0x10064df8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CC534: fsubp st(1) */
    fp_push(_st[1]); /* 0x100CC536: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064D60); /* 0x100CC538: fmul qword ptr [0x10064d60] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CC53E: fsubp st(1) */
    fp_push(_st[1]); /* 0x100CC540: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064D40); /* 0x100CC542: fmul qword ptr [0x10064d40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CC548: fsubp st(1) */
    fp_xch(1); /* 0x100CC54A: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064D38); /* 0x100CC54C: fmul qword ptr [0x10064d38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CC552: fsubp st(1) */
    *(double*)ADDR(ebp + (-0xA8)) = _st[0]; /* 0x100CC554: fst qword ptr [ebp - 0xa8] */
    goto L_100CC562; /* 0x100CC55A: jmp 0x100cc562 */
L_100CC55C:
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CC55C: fld qword ptr [ebp - 0xa8] */
L_100CC562:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CC562: fstp qword ptr [edi] */
    goto L_100CC830; /* 0x100CC564: jmp 0x100cc830 */
L_100CC569:
    PUSH32(esp, ebx); /* 0x100CC569: push ebx */
    PUSH32(esp, esi); /* 0x100CC56A: push esi */
    PUSH32(esp, 6); /* 0x100CC56B: push 6 */
    esi = POP32_VAL(esp); /* 0x100CC56D: pop esi */
    eax = ebp + (-0x9C); /* 0x100CC56E: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x100CC574: push eax */
    eax = ebp + (-0xA0); /* 0x100CC575: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x100CC57B: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CC57C: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100D687A); /* 0x100CC582: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA0)); /* 0x100CC587: mov eax, dword ptr [ebp - 0xa0] */
    ecx = POP32_VAL(esp); /* 0x100CC58D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC58E: pop ecx */
    /* cmp LO16(eax), 0x56u */ /* 0x100CC58F: cmp ax, 0x56 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x56u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CC5B2; /* 0x100CC593: jge 0x100cc5b2 */
L_100CC595:
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CC595: fld qword ptr [ebp - 0xa8] */
    eax = ebp + (-0x34); /* 0x100CC59B: lea eax, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CC59E: push ecx */
    PUSH32(esp, ecx); /* 0x100CC59F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC5A0: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC5A3: push esi */
    PUSH32(esp, eax); /* 0x100CC5A4: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CC5A5: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC5AA: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CC674; /* 0x100CC5AD: jmp 0x100cc674 */
L_100CC5B2:
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC5B2: cwde  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x36u; /* 0x100CC5B3: sub eax, 0x36 */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100CC5B6: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    eax = (uint32_t)LO16(eax); /* 0x100CC5B9: movzx eax, ax */
    MEM32(ebp + (-0xA0)) = eax; /* 0x100CC5BC: mov dword ptr [ebp - 0xa0], eax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CC5C2: cwde  */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x100CC5C3: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x100CC5C3: shl eax, 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CC5C6: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100CC5C8: push eax */
    eax = ebp + (-0xA8); /* 0x100CC5C9: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x100CC5CF: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100CC5D0: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CC5D5: fld qword ptr [ebp - 0xa8] */
    eax = ebp + (-0xB8); /* 0x100CC5DB: lea eax, [ebp - 0xb8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC5E1: fstp qword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CC5E4: push 2 */
    PUSH32(esp, eax); /* 0x100CC5E6: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CC5E7: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0xA0)); /* 0x100CC5EC: movsx eax, word ptr [ebp - 0xa0] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30u); /* 0x100CC5F3: imul eax, eax, 0x30 */
    PUSH32(esp, 0x30u); /* 0x100CC5F6: push 0x30 */
    eax = eax + 0x100CC880; /* 0x100CC5F8: lea eax, [eax + 0x100cc880] */
    PUSH32(esp, eax); /* 0x100CC5FE: push eax */
    eax = ebp + (-0x34); /* 0x100CC5FF: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CC602: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CC603: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB8))); /* 0x100CC608: fld qword ptr [ebp - 0xb8] */
    eax = ebp + (-0x34); /* 0x100CC60E: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CC611: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC614: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC617: push esi */
    PUSH32(esp, eax); /* 0x100CC618: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CC619: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CC61E: fld qword ptr [ebp - 0xb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC624: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CC627: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC629: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC62B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC62D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC674; /* 0x100CC630: jnp 0x100cc674 */
L_100CC632:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0xA0)); /* 0x100CC632: movsx eax, word ptr [ebp - 0xa0] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30u); /* 0x100CC639: imul eax, eax, 0x30 */
    PUSH32(esp, 0x30u); /* 0x100CC63C: push 0x30 */
    eax = eax + 0x100CC880; /* 0x100CC63E: lea eax, [eax + 0x100cc880] */
    PUSH32(esp, eax); /* 0x100CC644: push eax */
    eax = ebp + (-0x64); /* 0x100CC645: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CC648: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CC649: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CC64E: fld qword ptr [ebp - 0xb0] */
    eax = ebp + (-0x64); /* 0x100CC654: lea eax, [ebp - 0x64] */
    ecx = POP32_VAL(esp); /* 0x100CC657: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC658: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC65B: push esi */
    PUSH32(esp, eax); /* 0x100CC65C: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CC65D: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CC662: push esi */
    eax = ebp + (-0x64); /* 0x100CC663: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CC666: push eax */
    eax = ebp + (-0x34); /* 0x100CC667: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CC66A: push esi */
    PUSH32(esp, eax); /* 0x100CC66B: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CC66C: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CC671: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CC674:
    ebx = 0x100CC880u; /* 0x100CC674: mov ebx, 0x100cc880 */
L_100CC679:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CC679: fld qword ptr [ebp - 0x34] */
    fp_push(*(double*)ADDR(0x10064E20)); /* 0x100CC67C: fld qword ptr [0x10064e20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC682: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC684: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC686: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CC69C; /* 0x100CC689: je 0x100cc69c */
L_100CC68B:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064E00)); /* 0x100CC68B: fcom qword ptr [0x10064e00] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC691: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC693: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC777; /* 0x100CC696: jne 0x100cc777 */
L_100CC69C:
    _st[0] += *(double*)ADDR(ebp + (-0x2C)); /* 0x100CC69C: fadd qword ptr [ebp - 0x2c] */
    eax = ebp + (-0x9C); /* 0x100CC69F: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CC6A5: push 0 */
    PUSH32(esp, eax); /* 0x100CC6A7: push eax */
    _st[0] *= *(double*)ADDR(0x10064DC8); /* 0x100CC6A8: fmul qword ptr [0x10064dc8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CC6AE: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CC6B4: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CC6B9: fld qword ptr [ebp - 0x9c] */
    eax = ebp + (-0xB8); /* 0x100CC6BF: lea eax, [ebp - 0xb8] */
    _st[0] *= *(double*)ADDR(0x10064E10); /* 0x100CC6C5: fmul qword ptr [0x10064e10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC6CB: fstp qword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CC6CE: push 2 */
    PUSH32(esp, eax); /* 0x100CC6D0: push eax */
    RECOMP_CALL(sub_100CAC07); /* 0x100CC6D1: call 0x100cac07 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100CC6D6: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100CC6D8: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100CC6D8: shl eax, 3 */
    PUSH32(esp, eax); /* 0x100CC6DB: push eax */
    eax = ebp + (-0x64); /* 0x100CC6DC: lea eax, [ebp - 0x64] */
    PUSH32(esp, ebx); /* 0x100CC6DF: push ebx */
    PUSH32(esp, eax); /* 0x100CC6E0: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CC6E1: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB8))); /* 0x100CC6E6: fld qword ptr [ebp - 0xb8] */
    eax = ebp + (-0x64); /* 0x100CC6EC: lea eax, [ebp - 0x64] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CC6EF: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC6F2: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC6F5: push esi */
    PUSH32(esp, eax); /* 0x100CC6F6: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CC6F7: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CC6FC: fld qword ptr [ebp - 0xb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC702: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CC705: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC707: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC709: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CC70B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC760; /* 0x100CC70E: jnp 0x100cc760 */
L_100CC710:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CC710: fld qword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CC713: push ecx */
    PUSH32(esp, ecx); /* 0x100CC714: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC715: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CCF92); /* 0x100CC718: call 0x100ccf92 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CC71D: mov esi, eax */
    eax = ebp + (-0x94); /* 0x100CC71F: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x100CC725: mov ecx, esi */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x100CC727: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x100CC727: shl ecx, 3 */
    PUSH32(esp, ecx); /* 0x100CC72A: push ecx */
    PUSH32(esp, ebx); /* 0x100CC72B: push ebx */
    PUSH32(esp, eax); /* 0x100CC72C: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CC72D: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CC732: fld qword ptr [ebp - 0xb0] */
    eax = ebp + (-0x94); /* 0x100CC738: lea eax, [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CC73E: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC741: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC744: push esi */
    PUSH32(esp, eax); /* 0x100CC745: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CC746: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CC74B: push esi */
    eax = ebp + (-0x94); /* 0x100CC74C: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x100CC752: push eax */
    eax = ebp + (-0x64); /* 0x100CC753: lea eax, [ebp - 0x64] */
    PUSH32(esp, esi); /* 0x100CC756: push esi */
    PUSH32(esp, eax); /* 0x100CC757: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CC758: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CC75D: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CC760:
    PUSH32(esp, esi); /* 0x100CC760: push esi */
    eax = ebp + (-0x64); /* 0x100CC761: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CC764: push eax */
    eax = ebp + (-0x34); /* 0x100CC765: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CC768: push esi */
    PUSH32(esp, eax); /* 0x100CC769: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CC76A: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC76F: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100CC679; /* 0x100CC772: jmp 0x100cc679 */
L_100CC777:
    _st[0] += *(double*)ADDR(ebp + (-0x2C)); /* 0x100CC777: fadd qword ptr [ebp - 0x2c] */
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100CC77A: fmul qword ptr [0x10063bd8] */
    fp_push(0.0); /* 0x100CC780: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC782: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC784: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC786: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CC793; /* 0x100CC789: jp 0x100cc793 */
L_100CC78B:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CC78B: fadd qword ptr [0x10063bd0] */
    goto L_100CC799; /* 0x100CC791: jmp 0x100cc799 */
L_100CC793:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CC793: fsub qword ptr [0x10063bd0] */
L_100CC799:
    eax = ebp + (-0x9C); /* 0x100CC799: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CC79F: push 0 */
    PUSH32(esp, eax); /* 0x100CC7A1: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CC7A2: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CC7A8: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CC7AD: fld qword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x100CC7B3: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC7B5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC7B7: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CC7B9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC7BA: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CC7BB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CC81A; /* 0x100CC7BE: jnp 0x100cc81a */
L_100CC7C0:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CC7C0: fld qword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CC7C3: push ecx */
    PUSH32(esp, ecx); /* 0x100CC7C4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC7C5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CCF92); /* 0x100CC7C8: call 0x100ccf92 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CC7CD: mov esi, eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100CC7CF: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100CC7CF: shl eax, 3 */
    PUSH32(esp, eax); /* 0x100CC7D2: push eax */
    eax = ebp + (-0x94); /* 0x100CC7D3: lea eax, [ebp - 0x94] */
    PUSH32(esp, ebx); /* 0x100CC7D9: push ebx */
    PUSH32(esp, eax); /* 0x100CC7DA: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CC7DB: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CC7E0: fld qword ptr [ebp - 0x9c] */
    eax = ebp + (-0x94); /* 0x100CC7E6: lea eax, [ebp - 0x94] */
    _st[0] *= *(double*)ADDR(0x10064E18); /* 0x100CC7EC: fmul qword ptr [0x10064e18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CC7F2: add esp, 0xc */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10064D58); /* 0x100CC7F5: fmul qword ptr [0x10064d58] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC7FB: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CC7FE: push esi */
    PUSH32(esp, eax); /* 0x100CC7FF: push eax */
    RECOMP_CALL(sub_100CAA89); /* 0x100CC800: call 0x100caa89 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CC805: push esi */
    eax = ebp + (-0x94); /* 0x100CC806: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x100CC80C: push eax */
    eax = ebp + (-0x34); /* 0x100CC80D: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CC810: push esi */
    PUSH32(esp, eax); /* 0x100CC811: push eax */
    RECOMP_CALL(sub_100CAA45); /* 0x100CC812: call 0x100caa45 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CC817: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CC81A:
    eax = ebp + (-0x34); /* 0x100CC81A: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CC81D: push esi */
    PUSH32(esp, eax); /* 0x100CC81E: push eax */
    RECOMP_CALL(sub_100CBA16); /* 0x100CC81F: call 0x100cba16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CC824: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CC825: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CC826: fstp qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CC828: fld qword ptr [ebp - 0x9c] */
    esi = POP32_VAL(esp); /* 0x100CC82E: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CC82F: pop ebx */
L_100CC830:
    fp_push(*(double*)ADDR(0x10064E28)); /* 0x100CC830: fld qword ptr [0x10064e28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CC836: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC838: fnstsw ax */
    edi = POP32_VAL(esp); /* 0x100CC83A: pop edi */
    /* test HI8(eax), 0x41u */ /* 0x100CC83B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CC84D; /* 0x100CC83E: je 0x100cc84d */
L_100CC840:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064510)); /* 0x100CC840: fcom qword ptr [0x10064510] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CC846: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CC848: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CC865; /* 0x100CC84B: jne 0x100cc865 */
L_100CC84D:
    fp_push(*(double*)ADDR(0x10064538)); /* 0x100CC84D: fld qword ptr [0x10064538] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CC853: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CC856: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CC85A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036786); /* 0x100CC85D: call 0x10036786 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CC862: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100CC865:
    RECOMP_CALL(sub_10051B40); /* 0x100CC865: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x100CC86A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100CC86D: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CC870: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100CC872: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CC877: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CC879: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CC87A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CC880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CC880u);

L_100CC880:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC880: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x5))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x5)) = (uint8_t)(MEM8(eax + (-0x5)) + LO8(edx)); /* 0x100CC882: add byte ptr [eax - 5], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(ecx + 0x41)); _flag_b = (uint32_t)(edi);
    MEM32(ecx + 0x41) = MEM32(ecx + 0x41) & edi; /* 0x100CC885: and dword ptr [ecx + 0x41], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSHAD(); /* 0x100CC88B: pushal  */
    SET_HI8(eax, 0x10u); /* 0x100CC88C: mov ah, 0x10 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CC88E: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC891: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100CC893: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100CC895: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x100CC896: push ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC897: add byte ptr ds:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC89A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100CC89C: pop esp */
    { uint32_t _aa = LO8(eax), _ab = 0xD3u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CC89D: adc al, 0xd3 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp LO8(eax), 0 */ /* 0x100CC89F: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x3B3B83)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    MEM8(edx + 0x3B3B83) = (uint8_t)(MEM8(edx + 0x3B3B83) & LO8(ebx)); /* 0x100CC8A3: and byte ptr [edx + 0x3b3b83], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100CC8AB: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ecx + edi + (-0x80000000)), _ab = 0xC0054A76u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CC8AD: adc dword ptr [ecx + edi - 0x80000000], 0xc0054a76 */
      MEM32(ecx + edi + (-0x80000000)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3E573E78)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E573E78) = (uint8_t)(MEM8(eax + 0x3E573E78) + LO8(eax)); /* 0x100CC8BA: add byte ptr [eax + 0x3e573e78], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3CC8E643)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3CC8E643) = (uint8_t)(MEM8(eax + 0x3CC8E643) + LO8(ecx)); /* 0x100CC8C2: add byte ptr [eax + 0x3cc8e643], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CC8CA: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x100CC8CC: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    _df = -1; /* 0x100CC8CD: std  */
    PUSH32(esp, _seg_ds); /* 0x100CC8CE: push ds */
    /* cmp eax, MEM32(eax) */ /* 0x100CC8CF: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi) = (uint8_t)(MEM8(esi) - HI8(ebx)); /* 0x100CC8D3: sub byte ptr [esi], bh */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100CC8D5; /* falls through past a gap */
L_100CC8D4:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100CC8D4: add byte ptr ds:[ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CC8DB; /* falls through past a gap */
L_100CC8D5:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100CC8D5: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100CC8DB:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100CC8DB: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100CC8DD: sub eax, ebx */
    _flag_k = FK_CMP;
    void_lift_trap(0x100CC8DFu, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8E0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CC8E2: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100CC8E4: movsd dword ptr es:[edi], dword ptr [esi] */
    void_lift_trap(0x100CC8E5u, "int1 ");
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100CC8E6: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x3E5EA969)); /* 0x100CC8EB: mov al, byte ptr [0x3e5ea969] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100CC8D4; /* 0x100CC8F4: jle 0x100cc8d4 */
L_100CC8F6:
    SET_HI8(ebx, MEM8(eax + eax)); /* 0x100CC8F6: mov bh, byte ptr [eax + eax] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC8F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100CC8FB: nop  */
    /* cmp LO8(edx), HI8(ebx) */ /* 0x100CC8FC: cmp dl, bh */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(ebx), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CC8FE: adc byte ptr [ebx], bh */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC900: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CC902: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100CC904: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x39)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax + 0x39)); /* 0x100CC905: and ch, byte ptr [eax + 0x39] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CC908: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100CC90A: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((HI8(ebx) | MEM8(ecx))) << 24; _flag_b = (uint32_t)((HI8(ebx) | MEM8(ecx))) << 24;
    SET_HI8(ebx, HI8(ebx) | MEM8(ecx)); /* 0x100CC90C: or bh, byte ptr [ecx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ITAIL(0x100CC90Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100CCE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CCE80u);

L_100CCE80:
    PUSH32(esp, ebp); /* 0x100CCE80: push ebp */
    ebp = esp; /* 0x100CCE81: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CCE83: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CCE86: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CCE87: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CCE8C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CCE8D: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CCE8E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CCF7B; /* 0x100CCE91: je 0x100ccf7b */
L_100CCE97:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CCE97: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CCF6B; /* 0x100CCE98: je 0x100ccf6b */
L_100CCE9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CCE9E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CCF66; /* 0x100CCE9F: je 0x100ccf66 */
L_100CCEA5:
    eax = ebp + 0x8; /* 0x100CCEA5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CCEA8: push eax */
    RECOMP_CALL(sub_100CC485); /* 0x100CCEA9: call 0x100cc485 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065BB8)); /* 0x100CCEAE: fld qword ptr [0x10065bb8] */
    fp_push(_st[0]); /* 0x100CCEB4: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CCEB6: fchs  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCEB8: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CCEBB: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x100CCEBC: mov ecx, dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CCEBF: fcom st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100CCEC1: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CCEC3: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CCEC5: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CCEC7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CCEE6; /* 0x100CCECA: jne 0x100ccee6 */
L_100CCECC:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CCECC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CCECE: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CCED0: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CCED2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CCEE8; /* 0x100CCED5: jp 0x100ccee8 */
L_100CCED7:
    /* test LO8(ecx), 1 */ /* 0x100CCED7: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CCF61; /* 0x100CCEDA: je 0x100ccf61 */
L_100CCEE0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CCEE0: fstp st(0) */
    fp_push(1.0); /* 0x100CCEE2: fld1  */
    goto L_100CCF61; /* 0x100CCEE4: jmp 0x100ccf61 */
L_100CCEE6:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CCEE6: fstp st(1) */
L_100CCEE8:
    fp_push(_st[0]); /* 0x100CCEE8: fld st(0) */
    _st[0] *= _st[1]; /* 0x100CCEEA: fmul st(1) */
    /* test LO8(ecx), 1 */ /* 0x100CCEEC: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CCF2B; /* 0x100CCEEF: je 0x100ccf2b */
L_100CCEF1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CCEF1: fstp st(1) */
    fp_push(*(double*)ADDR(0x10064D50)); /* 0x100CCEF3: fld qword ptr [0x10064d50] */
    _st[0] *= _st[1]; /* 0x100CCEF9: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D78); /* 0x100CCEFB: fsub qword ptr [0x10064d78] */
    _st[0] *= _st[1]; /* 0x100CCF01: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064D88); /* 0x100CCF03: fadd qword ptr [0x10064d88] */
    _st[0] *= _st[1]; /* 0x100CCF09: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DA0); /* 0x100CCF0B: fsub qword ptr [0x10064da0] */
    _st[0] *= _st[1]; /* 0x100CCF11: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064DB8); /* 0x100CCF13: fadd qword ptr [0x10064db8] */
    _st[0] *= _st[1]; /* 0x100CCF19: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DE0); /* 0x100CCF1B: fsub qword ptr [0x10064de0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CCF21: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100CCF23: fadd qword ptr [0x10067cd8] */
    goto L_100CCF61; /* 0x100CCF29: jmp 0x100ccf61 */
L_100CCF2B:
    fp_push(*(double*)ADDR(0x10064D48)); /* 0x100CCF2B: fld qword ptr [0x10064d48] */
    _st[0] *= _st[1]; /* 0x100CCF31: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D68); /* 0x100CCF33: fsub qword ptr [0x10064d68] */
    _st[0] *= _st[1]; /* 0x100CCF39: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064D80); /* 0x100CCF3B: fadd qword ptr [0x10064d80] */
    _st[0] *= _st[1]; /* 0x100CCF41: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D90); /* 0x100CCF43: fsub qword ptr [0x10064d90] */
    _st[0] *= _st[1]; /* 0x100CCF49: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064DB0); /* 0x100CCF4B: fadd qword ptr [0x10064db0] */
    _st[0] *= _st[1]; /* 0x100CCF51: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DD0); /* 0x100CCF53: fsub qword ptr [0x10064dd0] */
    fp_xch(1); /* 0x100CCF59: fxch st(1) */
    _st[0] *= _st[2]; /* 0x100CCF5B: fmul st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CCF5D: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CCF5F: faddp st(1) */
L_100CCF61:
    /* test LO8(ecx), 2 */ /* 0x100CCF61: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100CCF8C; /* 0x100CCF64: jmp 0x100ccf8c */
L_100CCF66:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCF66: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CCF69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CCF6A: ret  */
L_100CCF6B:
    PUSH32(esp, 1); /* 0x100CCF6B: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CCF6D: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100CCF72: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100CCF78: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100CCF79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CCF7A: ret  */
L_100CCF7B:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x100CCF7B: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CCF85; /* 0x100CCF7F: je 0x100ccf85 */
L_100CCF81:
    fp_push(1.0); /* 0x100CCF81: fld1  */
    goto L_100CCF88; /* 0x100CCF83: jmp 0x100ccf88 */
L_100CCF85:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCF85: fld qword ptr [ebp + 8] */
L_100CCF88:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x100CCF88: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100CCF8C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100CCF90; /* 0x100CCF8C: je 0x100ccf90 */
L_100CCF8E:
    _st[0] = -_st[0]; /* 0x100CCF8E: fchs  */
L_100CCF90:
    ebp = POP32_VAL(esp); /* 0x100CCF90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CCF91: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CCF92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CCF92u);

L_100CCF92:
    PUSH32(esp, ebp); /* 0x100CCF92: push ebp */
    ebp = esp; /* 0x100CCF93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CCF95: push ecx */
    eax = ebp + 0x8; /* 0x100CCF96: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CCF99: push eax */
    eax = ebp + (-0x4); /* 0x100CCF9A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CCF9D: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CCF9E: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CCFA3: movsx eax, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CCFA7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CCFA8: pop ecx */
    PUSH32(esp, 0x35u); /* 0x100CCFA9: push 0x35 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100CCFAB: cdq  */
    ecx = POP32_VAL(esp); /* 0x100CCFAC: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100CCFAD: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = eax * 2 + 0x5; /* 0x100CCFAF: lea eax, [eax*2 + 5] */
    /* cmp eax, 6 */ /* 0x100CCFB6: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CCFBE; /* 0x100CCFB9: jbe 0x100ccfbe */
L_100CCFBB:
    PUSH32(esp, 6); /* 0x100CCFBB: push 6 */
    eax = POP32_VAL(esp); /* 0x100CCFBD: pop eax */
L_100CCFBE:
    esp = ebp; /* 0x100CCFBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CCFC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CCFC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CCFC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CCFC2u);

L_100CCFC2:
    PUSH32(esp, ebp); /* 0x100CCFC2: push ebp */
    ebp = esp; /* 0x100CCFC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100CCFC5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCFC8: fld qword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x100CCFCB: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100CCFCE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CCFCF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100CCFD1: push esi */
    PUSH32(esp, eax); /* 0x100CCFD2: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CCFD3: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100CCFD6: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCFDB: fld qword ptr [ebp + 8] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CCFDE: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CCFDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CCFE0: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100CCFE1: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CD002; /* 0x100CCFE3: je 0x100cd002 */
L_100CCFE5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CCFE5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CCFF5; /* 0x100CCFE6: je 0x100ccff5 */
L_100CCFE8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CCFE8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CD021; /* 0x100CCFE9: jne 0x100cd021 */
L_100CCFEB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CCFEB: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CCFED: fld qword ptr [ebp + 8] */
    goto L_100CD1C4; /* 0x100CCFF0: jmp 0x100cd1c4 */
L_100CCFF5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CCFF5: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CCFF7: fld qword ptr [0x10065b48] */
    goto L_100CD1C4; /* 0x100CCFFD: jmp 0x100cd1c4 */
L_100CD002:
    fp_push(0.0); /* 0x100CD002: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD004: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD006: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CD008: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD021; /* 0x100CD00B: jne 0x100cd021 */
L_100CD00D:
    PUSH32(esp, 4); /* 0x100CD00D: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CD00F: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CD011: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CD016: fld qword ptr [0x10065b48] */
    goto L_100CD1C3; /* 0x100CD01C: jmp 0x100cd1c3 */
L_100CD021:
    fp_push(*(double*)ADDR(0x100E2490)); /* 0x100CD021: fld qword ptr [0x100e2490] */
    fp_push(_st[0]); /* 0x100CD027: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CD029: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100CD02B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD02D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD02F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD07A; /* 0x100CD032: jne 0x100cd07a */
L_100CD034:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CD034: fstp st(0) */
    _st[0] -= *(double*)ADDR(ebp + (-0xC)); /* 0x100CD036: fsub qword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100CD039: push esi */
    PUSH32(esp, esi); /* 0x100CD03A: push esi */
    PUSH32(esp, ecx); /* 0x100CD03B: push ecx */
    PUSH32(esp, ecx); /* 0x100CD03C: push ecx */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100CD03D: fmul qword ptr [0x10063bf8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD043: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CCE80); /* 0x100CD046: call 0x100cce80 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100CD04B: fmul qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CD04E: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = *(double*)ADDR(0x10063BF8) / _st[0]; /* 0x100CD051: fdivr qword ptr [0x10063bf8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD057: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF3A6); /* 0x100CD05A: call 0x100cf3a6 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100CD05F: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CD062: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CD065: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100CD068: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD06A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CD3A8); /* 0x100CD06D: call 0x100cd3a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x14)) - _st[0]; /* 0x100CD072: fsubr qword ptr [ebp - 0x14] */
    goto L_100CD1C2; /* 0x100CD075: jmp 0x100cd1c2 */
L_100CD07A:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD07A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD07C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD07E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CD092; /* 0x100CD081: jp 0x100cd092 */
L_100CD083:
    PUSH32(esp, ecx); /* 0x100CD083: push ecx */
    PUSH32(esp, ecx); /* 0x100CD084: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD085: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CD3A8); /* 0x100CD088: call 0x100cd3a8 */
    RECOMP_FLAGS_IN();
    goto L_100CD1C2; /* 0x100CD08D: jmp 0x100cd1c2 */
L_100CD092:
    edx = esi; /* 0x100CD092: mov edx, esi */
    ecx = esi; /* 0x100CD094: mov ecx, esi */
L_100CD096:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x100CD1F0)); /* 0x100CD096: fcom qword ptr [ecx + 0x100cd1f0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD09C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD09E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD0B0; /* 0x100CD0A1: jne 0x100cd0b0 */
L_100CD0A3:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x100CD1F8)); /* 0x100CD0A3: fcom qword ptr [ecx + 0x100cd1f8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD0A9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CD0AB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD0BC; /* 0x100CD0AE: jnp 0x100cd0bc */
L_100CD0B0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x100CD0B0: add ecx, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CD0B3: inc edx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x1B8u */ /* 0x100CD0B4: cmp ecx, 0x1b8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CD096; /* 0x100CD0BA: jb 0x100cd096 */
L_100CD0BC:
    /* cmp edx, 0xBu */ /* 0x100CD0BC: cmp edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100CD0EE; /* 0x100CD0BF: jae 0x100cd0ee */
L_100CD0C1:
    eax = (uint32_t)((int32_t)edx * (int32_t)0x28u); /* 0x100CD0C1: imul eax, edx, 0x28 */
    _st[0] -= *(double*)ADDR(eax + 0x100CD200); /* 0x100CD0C4: fsub qword ptr [eax + 0x100cd200] */
    PUSH32(esp, MEM32(eax + 0x100CD214)); /* 0x100CD0CA: push dword ptr [eax + 0x100cd214] */
    _st[0] -= *(double*)ADDR(eax + 0x100CD208); /* 0x100CD0D0: fsub qword ptr [eax + 0x100cd208] */
    PUSH32(esp, MEM32(eax + 0x100CD210)); /* 0x100CD0D6: push dword ptr [eax + 0x100cd210] */
    PUSH32(esp, ecx); /* 0x100CD0DC: push ecx */
    PUSH32(esp, ecx); /* 0x100CD0DD: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD0DE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CD0E1: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CD0E6: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CD1C4; /* 0x100CD0E9: jmp 0x100cd1c4 */
L_100CD0EE:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064DF0)); /* 0x100CD0EE: fcom qword ptr [0x10064df0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD0F4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD0F6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD16A; /* 0x100CD0F9: jne 0x100cd16a */
L_100CD0FB:
    fp_push(*(double*)ADDR(0x10063C98)); /* 0x100CD0FB: fld qword ptr [0x10063c98] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD101: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD103: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD105: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD16A; /* 0x100CD108: jne 0x100cd16a */
L_100CD10A:
    ecx = 0x100CD1D0u; /* 0x100CD10A: mov ecx, 0x100cd1d0 */
L_100CD10F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100CD10F: fcom qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD111: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CD113: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD121; /* 0x100CD116: jnp 0x100cd121 */
L_100CD118:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CD118: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100CD119: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x100CD11C: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CD10F; /* 0x100CD11F: jb 0x100cd10f */
L_100CD121:
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x100CD121: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x100CD121: shl esi, 5 */
    PUSH32(esp, MEM32(esi + 0x100CD1E4)); /* 0x100CD124: push dword ptr [esi + 0x100cd1e4] */
    _st[0] -= *(double*)ADDR(esi + 0x100CD1D8); /* 0x100CD12A: fsub qword ptr [esi + 0x100cd1d8] */
    PUSH32(esp, MEM32(esi + 0x100CD1E0)); /* 0x100CD130: push dword ptr [esi + 0x100cd1e0] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x100CD136: fst qword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x100CD139: push ecx */
    PUSH32(esp, ecx); /* 0x100CD13A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD13B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CD13E: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CD143: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100CD146: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100CD149: fld qword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(esi + 0x100CD1EC)); /* 0x100CD14C: push dword ptr [esi + 0x100cd1ec] */
    PUSH32(esp, MEM32(esi + 0x100CD1E8)); /* 0x100CD152: push dword ptr [esi + 0x100cd1e8] */
    PUSH32(esp, ecx); /* 0x100CD158: push ecx */
    PUSH32(esp, ecx); /* 0x100CD159: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD15A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CD15D: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x1C)) / _st[0]; /* 0x100CD162: fdivr qword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CD165: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CD1C4; /* 0x100CD168: jmp 0x100cd1c4 */
L_100CD16A:
    eax = ebp + (-0x4); /* 0x100CD16A: lea eax, [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CD16D: fstp st(0) */
    PUSH32(esp, eax); /* 0x100CD16F: push eax */
    eax = ebp + 0x8; /* 0x100CD170: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CD173: push eax */
    RECOMP_CALL(sub_100D1388); /* 0x100CD174: call 0x100d1388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CD179: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD17A: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CD17B: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CD17E: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CD181: push esi */
    PUSH32(esp, ecx); /* 0x100CD182: push ecx */
    _st[0] = fabs(_st[0]); /* 0x100CD183: fabs  */
    PUSH32(esp, ecx); /* 0x100CD185: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD186: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF3A6); /* 0x100CD189: call 0x100cf3a6 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CD18E: movsx eax, word ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100CD192: fchs  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CD194: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CD196: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x100CD199: mov dword ptr [ebp + 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x100CD19C: fild dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(0x10064D70)); /* 0x100CD19F: fld qword ptr [0x10064d70] */
    _st[0] *= _st[1]; /* 0x100CD1A5: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CD1A7: faddp st(2) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CD1A9: fmul qword ptr [0x10064de8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CD1AF: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CD1B1: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CD1B4: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD1B7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100CD1BA: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100CD1BF: fadd qword ptr [ebp + 8] */
L_100CD1C2:
    ecx = POP32_VAL(esp); /* 0x100CD1C2: pop ecx */
L_100CD1C3:
    ecx = POP32_VAL(esp); /* 0x100CD1C3: pop ecx */
L_100CD1C4:
    esi = POP32_VAL(esp); /* 0x100CD1C4: pop esi */
    esp = ebp; /* 0x100CD1C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CD1C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CD1C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CD1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CD1D0u);

    goto L_100CD1D0;
L_100CD1BC:
    _seg_ds = POP32_VAL(esp); /* 0x100CD1BC: pop ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100CD1BF: fadd qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CD1C2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD1C3: pop ecx */
    esi = POP32_VAL(esp); /* 0x100CD1C4: pop esi */
    esp = ebp; /* 0x100CD1C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CD1C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CD1C8: ret  */
L_100CD1D0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100CD1D6: clc  */
    void_lift_trap(0x100CD1D7u, "aas ");
    void_lift_trap(0x100CD1D8u, "lcall 0xf599, 0x99999999");
    void_lift_trap(0x100CD1DFu, "aas ");
    eax = 0x0C100645u; /* 0x100CD1E0: mov eax, 0xc100645 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD1E7: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CD1E9: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100CD1EA: push es */
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD1EB: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD1ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x3C4B09E9)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x3C4B09E9) = (uint8_t)(MEM8(esi + 0x3C4B09E9) + LO8(ecx)); /* 0x100CD1EF: add byte ptr [esi + 0x3c4b09e9], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax * 8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax * 8) = (uint8_t)(MEM8(eax + eax * 8) + LO8(ebx)); /* 0x100CD1F5: add byte ptr [eax + eax*8], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (ecx == 0) goto L_100CD1BC; /* 0x100CD1F8: jecxz 0x100cd1bc */
L_100CD1FA:
    { uint32_t _aa = MEM32(eax + (-0x3FE3FFD4)), _ab = 0xFDEDFE1Fu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD1FA: adc dword ptr [eax - 0x3fe3ffd4], 0xfdedfe1f */
      MEM32(eax + (-0x3FE3FFD4)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100CD204: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = LO8(eax), _sb = 0xC0u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD206: sbb al, 0xc0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100CD250; /* 0x100CD208: js 0x100cd250 */
L_100CD20A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x100CD20A: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(ebx, 0xBu); /* 0x100CD20C: mov bh, 0xb */
    SET_LO8(edx, 0x3Cu); /* 0x100CD20E: mov dl, 0x3c */
    /* cmp MEM8(esi + 0x6), LO8(eax) */ /* 0x100CD210: cmp byte ptr [esi + 6], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x6)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(eax + eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD213: adc byte ptr [eax + eax], al */
      MEM8(eax + eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD216: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(edi) = eax; edi += _df * 4; /* 0x100CD218: stosd dword ptr es:[edi], eax */
    SET_LO8(edx, 0xEFu); /* 0x100CD219: mov dl, 0xef */
    SET_HI8(eax, LO8(eax)); /* 0x100CD21B: mov ah, al */
    RECOMP_ICALL(MEM32(ebx)); /* 0x100CD21D: call ptr [ebx] */
    RECOMP_FLAGS_IN();
    { uint32_t _rv = (MEM8(esi + 0x65)) & 255u, _rn = ((0xDFu) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi + 0x65) = (uint8_t)(_rv); } /* 0x100CD21F: rcl byte ptr [esi + 0x65], 0xdf */
    { uint32_t _aa = eax, _ab = 0xC01BFFC1u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD223: adc eax, 0xc01bffc1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _tmp = MEM8(ebx + (-0x9)); /* 0x100CD228: lock xchg byte ptr [ebx - 9], ch */
      MEM8(ebx + (-0x9)) = (uint8_t)(HI8(ecx));
      SET_HI8(ecx, _tmp); }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100CD22C: retf  */
L_100CD250:
    edi = ecx + ecx * 4 + 0x25; /* 0x100CD250: lea edi, [ecx + ecx*4 + 0x25] */
    eax = (uint32_t)((int32_t)MEM32(ecx) * (int32_t)0x18u); /* 0x100CD254: imul eax, dword ptr [ecx], 0x18 */
    if (4u) _cf = (((MEM8(edx + (-0x46))) >> 4) & 1u); /* 0x100CD257: sal byte ptr [edx - 0x46], 0xa4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edx + (-0x46)) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edx + (-0x46)) = (uint8_t)(MEM8(edx + (-0x46)) << 4u); /* 0x100CD257: sal byte ptr [edx - 0x46], 0xa4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CD25B: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edx + 0x646883C) = (uint32_t)_mm[2]; /* 0x100CD25C: movd dword ptr [edx + 0x646883c], mm2 */
    { uint32_t _aa = MEM8(eax), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD263: adc byte ptr [eax], bl */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD265: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + (-0x54C985F1))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + (-0x54C985F1)) = (uint8_t)(MEM8(ecx + (-0x54C985F1)) + LO8(edx)); /* 0x100CD267: add byte ptr [ecx - 0x54c985f1], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100CD26Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100CD3A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CD3A8u);

L_100CD3A8:
    PUSH32(esp, ebp); /* 0x100CD3A8: push ebp */
    ebp = esp; /* 0x100CD3A9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100CD3AB: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x100CD3AE: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CD3B0: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100CD3B3: fdiv st(1), st(0) */
    fp_xch(1); /* 0x100CD3B5: fxch st(1) */
    PUSH32(esp, 0); /* 0x100CD3B7: push 0 */
    PUSH32(esp, ecx); /* 0x100CD3B9: push ecx */
    PUSH32(esp, ecx); /* 0x100CD3BA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100CD3BB: fstp qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CD3BE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF3A6); /* 0x100CD3C1: call 0x100cf3a6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100CD3C6: fld1  */
    eax = ebp + (-0xC); /* 0x100CD3C8: lea eax, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CD3CB: fsubp st(1) */
    PUSH32(esp, eax); /* 0x100CD3CD: push eax */
    eax = ebp + (-0x4); /* 0x100CD3CE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CD3D1: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100CD3D2: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CD3D5: fld qword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CD3D8: fsub qword ptr [0x10063bd0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CD3DE: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100CD3E1: fld qword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x100CD3E4: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CD3E6: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CD3E8: fstp qword ptr [ebp + 8] */
    RECOMP_CALL(sub_100D687A); /* 0x100CD3EB: call 0x100d687a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CD3F0: fld qword ptr [ebp - 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CD3F3: movsx eax, word ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x100CD3F7: fmul qword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100CD3FA: push eax */
    eax = ebp + (-0xC); /* 0x100CD3FB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CD3FE: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CD3FF: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100D649E); /* 0x100CD402: call 0x100d649e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CD407: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100CD40A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CD436; /* 0x100CD40D: jns 0x100cd436 */
L_100CD40F:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CD40F: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10064D98)); /* 0x100CD412: fld qword ptr [0x10064d98] */
    _st[0] *= _st[1]; /* 0x100CD418: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DA8); /* 0x100CD41A: fsub qword ptr [0x10064da8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CD420: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10064DC0); /* 0x100CD422: fadd qword ptr [0x10064dc0] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x100CD428: fmul qword ptr [ebp - 0x14] */
    _st[0] += *(double*)ADDR(0x10064DD8); /* 0x100CD42B: fadd qword ptr [0x10064dd8] */
    _st[0] += *(double*)ADDR(ebp + (-0xC)); /* 0x100CD431: fadd qword ptr [ebp - 0xc] */
    goto L_100CD441; /* 0x100CD434: jmp 0x100cd441 */
L_100CD436:
    PUSH32(esp, 8); /* 0x100CD436: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CD438: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CD43D: fld qword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100CD440: pop ecx */
L_100CD441:
    esp = ebp; /* 0x100CD441: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CD443: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CD444: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CD445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CD445u);

L_100CD445:
    PUSH32(esp, ebp); /* 0x100CD445: push ebp */
    ebp = esp; /* 0x100CD446: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100CD448: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CD44B: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CD450: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CD452: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x100CD455: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CD456: mov edi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x100CD459: fld dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x100CD45B: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x100CD45E: fld dword ptr [ebp - 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100CD998)); /* 0x100CD461: fcom qword ptr [0x100cd998] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD467: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD469: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD51E; /* 0x100CD46C: jne 0x100cd51e */
L_100CD472:
    fp_push(*(float*)&MEM32(0x100CD990)); /* 0x100CD472: fld dword ptr [0x100cd990] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD478: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD47A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD47C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD51E; /* 0x100CD47F: jne 0x100cd51e */
L_100CD485:
    _st[0] *= *(double*)ADDR(0x100CD970); /* 0x100CD485: fmul qword ptr [0x100cd970] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD48B: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD48E: fld dword ptr [ebp - 0x44] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100CD491: fcom qword ptr [0x10067cd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD497: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CD499: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD4A6; /* 0x100CD49C: jne 0x100cd4a6 */
L_100CD49E:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CD49E: fadd qword ptr [0x10063bd0] */
    goto L_100CD4AC; /* 0x100CD4A4: jmp 0x100cd4ac */
L_100CD4A6:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CD4A6: fsub qword ptr [0x10063bd0] */
L_100CD4AC:
    eax = ebp + (-0x44); /* 0x100CD4AC: lea eax, [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x100CD4AF: push 0 */
    PUSH32(esp, eax); /* 0x100CD4B1: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD4B2: fstp dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CD4B5: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD4BA: fld dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x100CD4BD: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD4BF: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD4C1: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CD4C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD4C4: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CD4C5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD514; /* 0x100CD4C8: jnp 0x100cd514 */
L_100CD4CA:
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100CD4CA: fld qword ptr [0x10063c60] */
    _st[0] *= _st[1]; /* 0x100CD4D0: fmul st(1) */
    _st[0] *= *(double*)ADDR(0x100CD958); /* 0x100CD4D2: fmul qword ptr [0x100cd958] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x100CD4D8: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x100CD4DB: fld dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x100CD4DE: fld dword ptr [ebp - 0x4c] */
    fp_push(*(double*)ADDR(0x100CD988)); /* 0x100CD4E1: fld qword ptr [0x100cd988] */
    _st[0] *= _st[1]; /* 0x100CD4E7: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CD4E9: fsubp st(2) */
    fp_push(*(double*)ADDR(0x100CD978)); /* 0x100CD4EB: fld qword ptr [0x100cd978] */
    _st[0] *= _st[1]; /* 0x100CD4F1: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CD4F3: fsubp st(2) */
    fp_push(*(double*)ADDR(0x100CD960)); /* 0x100CD4F5: fld qword ptr [0x100cd960] */
    _st[0] *= _st[1]; /* 0x100CD4FB: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CD4FD: fsubp st(2) */
    fp_push(*(double*)ADDR(0x100CD950)); /* 0x100CD4FF: fld qword ptr [0x100cd950] */
    _st[0] *= _st[1]; /* 0x100CD505: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CD507: fsubp st(2) */
    _st[0] *= *(double*)ADDR(0x100CD948); /* 0x100CD509: fmul qword ptr [0x100cd948] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CD50F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x100CD511: fstp dword ptr [ebp - 0x48] */
L_100CD514:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x100CD514: fld dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x100CD517: fstp dword ptr [edi] */
    goto L_100CD7B0; /* 0x100CD519: jmp 0x100cd7b0 */
L_100CD51E:
    PUSH32(esp, ebx); /* 0x100CD51E: push ebx */
    PUSH32(esp, esi); /* 0x100CD51F: push esi */
    PUSH32(esp, 5); /* 0x100CD520: push 5 */
    esi = POP32_VAL(esp); /* 0x100CD522: pop esi */
    eax = ebp + (-0x44); /* 0x100CD523: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x100CD526: push eax */
    eax = ebp + (-0x4C); /* 0x100CD527: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100CD52A: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD52B: fstp dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_100D690E); /* 0x100CD52E: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x100CD533: mov eax, dword ptr [ebp - 0x4c] */
    ecx = POP32_VAL(esp); /* 0x100CD536: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD537: pop ecx */
    /* cmp LO16(eax), 0x21u */ /* 0x100CD538: cmp ax, 0x21 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x21u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CD557; /* 0x100CD53C: jge 0x100cd557 */
L_100CD53E:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x100CD53E: fld dword ptr [ebp - 0x48] */
    eax = ebp + (-0x18); /* 0x100CD541: lea eax, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100CD544: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD545: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD548: push esi */
    PUSH32(esp, eax); /* 0x100CD549: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CD54A: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CD54F: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100CD600; /* 0x100CD552: jmp 0x100cd600 */
L_100CD557:
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CD557: cwde  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x19u; /* 0x100CD558: sub eax, 0x19 */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x100CD55B: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    eax = (uint32_t)LO16(eax); /* 0x100CD55E: movzx eax, ax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x100CD561: mov dword ptr [ebp - 0x4c], eax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CD564: cwde  */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100CD565: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100CD565: shl eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CD568: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100CD56A: push eax */
    eax = ebp + (-0x48); /* 0x100CD56B: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x100CD56E: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100CD56F: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x100CD574: fld dword ptr [ebp - 0x48] */
    eax = ebp + (-0x58); /* 0x100CD577: lea eax, [ebp - 0x58] */
    ecx = POP32_VAL(esp); /* 0x100CD57A: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD57B: fstp dword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CD57E: push 2 */
    PUSH32(esp, eax); /* 0x100CD580: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CD581: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4C)); /* 0x100CD586: movsx eax, word ptr [ebp - 0x4c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x100CD58A: imul eax, eax, 0x14 */
    PUSH32(esp, 0x14u); /* 0x100CD58D: push 0x14 */
    eax = eax + 0x100CD804; /* 0x100CD58F: lea eax, [eax + 0x100cd804] */
    PUSH32(esp, eax); /* 0x100CD595: push eax */
    eax = ebp + (-0x18); /* 0x100CD596: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100CD599: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CD59A: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x100CD59F: fld dword ptr [ebp - 0x58] */
    eax = ebp + (-0x18); /* 0x100CD5A2: lea eax, [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CD5A5: add esp, 0x14 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD5A8: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD5AB: push esi */
    PUSH32(esp, eax); /* 0x100CD5AC: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CD5AD: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x100CD5B2: fld dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CD5B5: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CD5B8: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD5BA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD5BC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CD5BE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD600; /* 0x100CD5C1: jnp 0x100cd600 */
L_100CD5C3:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4C)); /* 0x100CD5C3: movsx eax, word ptr [ebp - 0x4c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x100CD5C7: imul eax, eax, 0x14 */
    PUSH32(esp, 0x14u); /* 0x100CD5CA: push 0x14 */
    eax = eax + 0x100CD804; /* 0x100CD5CC: lea eax, [eax + 0x100cd804] */
    PUSH32(esp, eax); /* 0x100CD5D2: push eax */
    eax = ebp + (-0x2C); /* 0x100CD5D3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100CD5D6: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CD5D7: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x100CD5DC: fld dword ptr [ebp - 0x54] */
    eax = ebp + (-0x2C); /* 0x100CD5DF: lea eax, [ebp - 0x2c] */
    ecx = POP32_VAL(esp); /* 0x100CD5E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD5E3: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD5E4: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD5E7: push esi */
    PUSH32(esp, eax); /* 0x100CD5E8: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CD5E9: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CD5EE: push esi */
    eax = ebp + (-0x2C); /* 0x100CD5EF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100CD5F2: push eax */
    eax = ebp + (-0x18); /* 0x100CD5F3: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x100CD5F6: push esi */
    PUSH32(esp, eax); /* 0x100CD5F7: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CD5F8: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CD5FD: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100CD600:
    ebx = 0x100CD800u; /* 0x100CD600: mov ebx, 0x100cd800 */
L_100CD605:
    fp_push(*(float*)&MEM32(0x100CD9A0)); /* 0x100CD605: fld dword ptr [0x100cd9a0] */
    fp_push(*(double*)ADDR(0x100CD980)); /* 0x100CD60B: fld qword ptr [0x100cd980] */
    fp_push(*(double*)ADDR(0x100CD968)); /* 0x100CD611: fld qword ptr [0x100cd968] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100CD617: fld dword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100CD61A: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD61C: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100CD61E: fstp st(3) */
    /* test HI8(eax), 5 */ /* 0x100CD620: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD65D; /* 0x100CD623: jnp 0x100cd65d */
L_100CD625:
    fp_xch(1); /* 0x100CD625: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100CD627: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD629: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CD62B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD65F; /* 0x100CD62E: jnp 0x100cd65f */
L_100CD630:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CD630: fstp st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x100CD632: fadd dword ptr [ebp - 0x14] */
    _st[0] *= *(double*)ADDR(0x100CD970); /* 0x100CD635: fmul qword ptr [0x100cd970] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD63B: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD63E: fld dword ptr [ebp - 0x44] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100CD641: fcom qword ptr [0x10067cd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD647: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CD649: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD724; /* 0x100CD64C: jne 0x100cd724 */
L_100CD652:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CD652: fadd qword ptr [0x10063bd0] */
    goto L_100CD72A; /* 0x100CD658: jmp 0x100cd72a */
L_100CD65D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CD65D: fstp st(1) */
L_100CD65F:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100CD65F: fld dword ptr [ebp - 0x14] */
    eax = ebp + (-0x44); /* 0x100CD662: lea eax, [ebp - 0x44] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CD665: faddp st(2) */
    PUSH32(esp, 0); /* 0x100CD667: push 0 */
    PUSH32(esp, eax); /* 0x100CD669: push eax */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CD66A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD66C: fstp dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CD66F: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD674: fld dword ptr [ebp - 0x44] */
    eax = ebp + (-0x58); /* 0x100CD677: lea eax, [ebp - 0x58] */
    _st[0] = -_st[0]; /* 0x100CD67A: fchs  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CD67C: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x100CD958); /* 0x100CD67F: fmul qword ptr [0x100cd958] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x100CD685: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x100CD688: fld dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD68B: fstp dword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CD68E: push 2 */
    PUSH32(esp, eax); /* 0x100CD690: push eax */
    RECOMP_CALL(sub_100CB437); /* 0x100CD691: call 0x100cb437 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100CD696: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100CD698: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100CD698: shl eax, 2 */
    PUSH32(esp, eax); /* 0x100CD69B: push eax */
    eax = ebp + (-0x2C); /* 0x100CD69C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x100CD69F: push ebx */
    PUSH32(esp, eax); /* 0x100CD6A0: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CD6A1: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x100CD6A6: fld dword ptr [ebp - 0x58] */
    eax = ebp + (-0x2C); /* 0x100CD6A9: lea eax, [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CD6AC: add esp, 0x14 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD6AF: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD6B2: push esi */
    PUSH32(esp, eax); /* 0x100CD6B3: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CD6B4: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x100CD6B9: fld dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CD6BC: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CD6BF: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD6C1: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD6C3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CD6C5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD70D; /* 0x100CD6C8: jnp 0x100cd70d */
L_100CD6CA:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100CD6CA: fld dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100CD6CD: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD6CE: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CDB03); /* 0x100CD6D1: call 0x100cdb03 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CD6D6: mov esi, eax */
    eax = ebp + (-0x40); /* 0x100CD6D8: lea eax, [ebp - 0x40] */
    ecx = esi; /* 0x100CD6DB: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x100CD6DD: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x100CD6DD: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x100CD6E0: push ecx */
    PUSH32(esp, ebx); /* 0x100CD6E1: push ebx */
    PUSH32(esp, eax); /* 0x100CD6E2: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CD6E3: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x100CD6E8: fld dword ptr [ebp - 0x54] */
    eax = ebp + (-0x40); /* 0x100CD6EB: lea eax, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CD6EE: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD6F1: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD6F4: push esi */
    PUSH32(esp, eax); /* 0x100CD6F5: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CD6F6: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CD6FB: push esi */
    eax = ebp + (-0x40); /* 0x100CD6FC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x100CD6FF: push eax */
    eax = ebp + (-0x2C); /* 0x100CD700: lea eax, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x100CD703: push esi */
    PUSH32(esp, eax); /* 0x100CD704: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CD705: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CD70A: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100CD70D:
    PUSH32(esp, esi); /* 0x100CD70D: push esi */
    eax = ebp + (-0x2C); /* 0x100CD70E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100CD711: push eax */
    eax = ebp + (-0x18); /* 0x100CD712: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x100CD715: push esi */
    PUSH32(esp, eax); /* 0x100CD716: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CD717: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CD71C: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100CD605; /* 0x100CD71F: jmp 0x100cd605 */
L_100CD724:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CD724: fsub qword ptr [0x10063bd0] */
L_100CD72A:
    eax = ebp + (-0x44); /* 0x100CD72A: lea eax, [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x100CD72D: push 0 */
    PUSH32(esp, eax); /* 0x100CD72F: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD730: fstp dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CD733: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD738: fld dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x100CD73B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD73D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD73F: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CD741: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD742: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CD743: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CD79D; /* 0x100CD746: jnp 0x100cd79d */
L_100CD748:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100CD748: fld dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100CD74B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD74C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CDB03); /* 0x100CD74F: call 0x100cdb03 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CD754: mov esi, eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100CD756: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100CD756: shl eax, 2 */
    PUSH32(esp, eax); /* 0x100CD759: push eax */
    eax = ebp + (-0x40); /* 0x100CD75A: lea eax, [ebp - 0x40] */
    PUSH32(esp, ebx); /* 0x100CD75D: push ebx */
    PUSH32(esp, eax); /* 0x100CD75E: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CD75F: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD764: fld dword ptr [ebp - 0x44] */
    eax = ebp + (-0x40); /* 0x100CD767: lea eax, [ebp - 0x40] */
    _st[0] = -_st[0]; /* 0x100CD76A: fchs  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CD76C: add esp, 0xc */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10063C60); /* 0x100CD76F: fmul qword ptr [0x10063c60] */
    _st[0] *= *(double*)ADDR(0x100CD958); /* 0x100CD775: fmul qword ptr [0x100cd958] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x100CD77B: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x100CD77E: fld dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD781: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CD784: push esi */
    PUSH32(esp, eax); /* 0x100CD785: push eax */
    RECOMP_CALL(sub_100CB2AD); /* 0x100CD786: call 0x100cb2ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CD78B: push esi */
    eax = ebp + (-0x40); /* 0x100CD78C: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x100CD78F: push eax */
    eax = ebp + (-0x18); /* 0x100CD790: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x100CD793: push esi */
    PUSH32(esp, eax); /* 0x100CD794: push eax */
    RECOMP_CALL(sub_100CB208); /* 0x100CD795: call 0x100cb208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CD79A: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100CD79D:
    eax = ebp + (-0x18); /* 0x100CD79D: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x100CD7A0: push esi */
    PUSH32(esp, eax); /* 0x100CD7A1: push eax */
    RECOMP_CALL(sub_100CB24B); /* 0x100CD7A2: call 0x100cb24b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CD7A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD7A8: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x100CD7A9: fstp dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD7AB: fld dword ptr [ebp - 0x44] */
    esi = POP32_VAL(esp); /* 0x100CD7AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CD7AF: pop ebx */
L_100CD7B0:
    fp_push(*(float*)&MEM32(0x10064544)); /* 0x100CD7B0: fld dword ptr [0x10064544] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD7B6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD7B8: fnstsw ax */
    edi = POP32_VAL(esp); /* 0x100CD7BA: pop edi */
    /* test HI8(eax), 0x41u */ /* 0x100CD7BB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CD7CD; /* 0x100CD7BE: je 0x100cd7cd */
L_100CD7C0:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064538)); /* 0x100CD7C0: fcom qword ptr [0x10064538] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD7C6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CD7C8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CD7E9; /* 0x100CD7CB: jne 0x100cd7e9 */
L_100CD7CD:
    fp_push(*(float*)&MEM32(0x10065080)); /* 0x100CD7CD: fld dword ptr [0x10065080] */
    PUSH32(esp, ecx); /* 0x100CD7D3: push ecx */
    PUSH32(esp, ecx); /* 0x100CD7D4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100CD7D5: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CD7D9: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CDAE0); /* 0x100CD7DC: call 0x100cdae0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x100CD7E1: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x100CD7E4: fld dword ptr [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x100CD7E7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CD7E8: pop ecx */
L_100CD7E9:
    RECOMP_CALL(sub_10051B40); /* 0x100CD7E9: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x100CD7EE: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100CD7F1: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CD7F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100CD7F6: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CD7FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CD7FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CD7FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CD800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CD800u);

L_100CD800:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD800: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100CD802: leave  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CD803: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax + 0x200040FD)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x200040FD) = (uint8_t)(MEM8(eax + 0x200040FD) + HI8(eax)); /* 0x100CD804: add byte ptr [eax + 0x200040fd], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(0x3400003A) = (uint8_t)(LO8(eax)); /* 0x100CD80A: mov byte ptr [0x3400003a], al */
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100CD80F: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) ^ LO8(eax))) << 24;
    SET_LO8(edx, LO8(edx) ^ LO8(eax)); /* 0x100CD811: xor dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* nop */ /* 0x100CD813: nop  */
    /* nop */ /* 0x100CD815: nop  */
    /* nop */ /* 0x100CD816: nop  */
    /* nop */ /* 0x100CD817: nop  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100CD818: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD81Au, "into ");
    edi = 0x397E0000u; /* 0x100CD81B: mov edi, 0x397e0000 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x76))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x76)) = (uint8_t)(MEM8(eax + (-0x76)) + LO8(eax)); /* 0x100CD820: add byte ptr [eax - 0x76], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100CD823: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + (-0x69CFFFD3)) ^ LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi + (-0x69CFFFD3)) ^ LO8(ecx))) << 24;
    MEM8(esi + (-0x69CFFFD3)) = (uint8_t)(MEM8(esi + (-0x69CFFFD3)) ^ LO8(ecx)); /* 0x100CD825: xor byte ptr [esi - 0x69cfffd3], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100CD82Bu, "daa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD82C: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD82E: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = MEM8(ecx + 0x65A00039), _sb = 0x34u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD831: sbb byte ptr [ecx + 0x65a00039], 0x34 */
      MEM8(ecx + 0x65A00039) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x100CD838: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0x2Eu */ /* 0x100CD83A: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x1FFFD890))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1FFFD890)) = (uint8_t)(MEM8(eax + (-0x1FFFD890)) + LO8(eax)); /* 0x100CD83C: add byte ptr [eax - 0x1fffd890], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = 0x389B4000u; /* 0x100CD842: mov edi, 0x389b4000 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x100CD848: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100CD84A: pushfd  */
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100CD84B: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebx + (-0xBFFFFD3))) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    MEM8(ebx + (-0xBFFFFD3)) = (uint8_t)(MEM8(ebx + (-0xBFFFFD3)) & HI8(ebx)); /* 0x100CD84D: and byte ptr [ebx - 0xbffffd3], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, LO8(eax) & 0); /* 0x100CD853: and al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSHAD(); /* 0x100CD855: pushal  */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(eax)); /* 0x100CD856: sub al, al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CD858: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100CD85A: inc esp */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100CD85B: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp MEM8(ecx + 0x67800032), 0x2Eu */ /* 0x100CD85D: cmp byte ptr [ecx + 0x67800032], 0x2e */
    _flag_a = (uint32_t)(MEM8(ecx + 0x67800032)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0xC) = (uint8_t)(MEM8(eax + 0xC) + HI8(edx)); /* 0x100CD864: add byte ptr [eax + 0xc], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100CD867: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSHAD(); /* 0x100CD869: pushal  */
    { uint32_t _rv = (MEM8(eax)) & 255u, _rn = ((0) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(eax) = (uint8_t)(_rv); } /* 0x100CD86A: rol byte ptr cs:[eax], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CD86E: dec ecx */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100CD86F: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100CD871: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100CD873: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100CD875: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x61))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x61)) = (uint8_t)(MEM8(eax + (-0x61)) + LO8(eax)); /* 0x100CD877: add byte ptr cs:[eax - 0x61], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD87Bu, "daa ");
    _flag_a = (uint32_t)(MEM8(eax + 0x60003E04)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x60003E04) = (uint8_t)(MEM8(eax + 0x60003E04) + LO8(eax)); /* 0x100CD87C: add byte ptr [eax + 0x60003e04], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD882u, "hlt ");
    /* cmp MEM32(eax), eax */ /* 0x100CD883: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _rv = (MEM8(ebx + (-0x6BFFFFCD))) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(ebx + (-0x6BFFFFCD)) = (uint8_t)(_rv); } /* 0x100CD885: rol byte ptr [ebx - 0x6bffffcd], 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0); /* 0x100CD88B: sub al, 0 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CD88D: inc eax */
    _flag_k = FK_INC;
    MEM16(esi) = (uint16_t)(_seg_fs); /* 0x100CD88E: mov word ptr [esi], fs */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD890: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD892u, "ljmp 0x39:0x96f0003f");
    { uint32_t _rv = (MEM8(esi + (-0x33FFFCE))) & 255u, _rn = ((0x2Cu) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi + (-0x33FFFCE)) = (uint8_t)(_rv); } /* 0x100CD899: rcr byte ptr [esi - 0x33fffce], 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CD8A0: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD8A2u, "daa ");
    _flag_a = (uint32_t)(MEM8(eax + (-0x1FFFBFB9))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1FFFBFB9)) = (uint8_t)(MEM8(eax + (-0x1FFFBFB9)) + LO8(eax)); /* 0x100CD8A4: add byte ptr [eax - 0x1fffbfb9], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x100CD8AA: push edx */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100CD8AB: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + HI8(edx)); /* 0x100CD8AD: add ch, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100CD8AF: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* nop */ /* 0x100CD8B1: nop  */
    PUSH32(esp, _seg_ss); /* 0x100CD8B2: push ss */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x100CD8B3: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & HI8(ecx)); /* 0x100CD8B6: and byte ptr [eax], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD8B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_100CD8FA; /* 0x100CD8BA: ja 0x100cd8fa */
L_100CD8BC:
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4C) = (uint8_t)(MEM8(eax + 0x4C) + HI8(eax)); /* 0x100CD8BC: add byte ptr [eax + 0x4c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM32(eax), eax */ /* 0x100CD8BF: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = MEM8(eax + 0x6C000033), _sb = 0x2Du, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD8C1: sbb byte ptr [eax + 0x6c000033], 0x2d */
      MEM8(eax + 0x6C000033) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax + 0x1A)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1A) = (uint8_t)(MEM8(eax + 0x1A) + HI8(eax)); /* 0x100CD8C8: add byte ptr [eax + 0x1a], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD8CBu, "daa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD8CC: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* test MEM8(edi + 0x3996F000), HI8(ebx) */ /* 0x100CD8CE: test byte ptr [edi + 0x3996f000], bh */
    _flag_a = (uint32_t)(MEM8(edi + 0x3996F000)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3FFFCD38))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3FFFCD38)) = (uint8_t)(MEM8(eax + (-0x3FFFCD38)) + LO8(eax)); /* 0x100CD8D4: add byte ptr [eax - 0x3fffcd38], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100CD909; /* 0x100CD8DA: jge 0x100cd909 */
L_100CD8DC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD8DC: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD8DEu, "fldenv [edi]"); /* 0x100CD8DE: fldenv [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CD8E0: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100CD8E2: nop  */
    esi = 0x39558000u; /* 0x100CD8E3: mov esi, 0x39558000 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x100CD8E8: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = ebx; /* 0x100CD8EA: lea esi, [ebx] */
    _flag_a = (uint32_t)(MEM8(eax + 0x50002DB9)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x50002DB9) = (uint8_t)(MEM8(eax + 0x50002DB9) + LO8(eax)); /* 0x100CD8EC: add byte ptr [eax + 0x50002db9], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100CD8F2: pushfd  */
    void_lift_trap(0x100CD8F3u, "daa ");
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x100CD8F4: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100CD8F6: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CD8F7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax + (-0x7FFFC6CF))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x7FFFC6CF)) = (uint8_t)(MEM8(eax + (-0x7FFFC6CF)) + LO8(eax)); /* 0x100CD8F8: add byte ptr [eax - 0x7fffc6cf], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD8FE; /* falls through past a gap */
L_100CD8FA:
    _flag_a = (uint32_t)((MEM32(ecx) ^ edi)); _flag_b = (uint32_t)((MEM32(ecx) ^ edi));
    MEM32(ecx) = MEM32(ecx) ^ edi; /* 0x100CD8FA: xor dword ptr [ecx], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax + 0x3303)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3303) = (uint8_t)(MEM8(eax + 0x3303) + LO8(eax)); /* 0x100CD8FC: add byte ptr [eax + 0x3303], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD902; /* falls through past a gap */
L_100CD8FE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx); /* 0x100CD8FE: add esi, dword ptr [ebx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD900: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100CD902:
    void_lift_trap(0x100CD902u, "bound ebp, qword ptr [esi]");
    _flag_a = (uint32_t)(MEM8(eax + (-0x45))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x45)) = (uint8_t)(MEM8(eax + (-0x45)) + HI8(eax)); /* 0x100CD904: add byte ptr [eax - 0x45], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD907u, "daa ");
    _flag_a = (uint32_t)(MEM8(eax + (-0x5FFFC00E))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x5FFFC00E)) = (uint8_t)(MEM8(eax + (-0x5FFFC00E)) + LO8(edx)); /* 0x100CD908: add byte ptr [eax - 0x5fffc00e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD90E; /* falls through past a gap */
L_100CD909:
    /* nop */ /* 0x100CD909: nop  */
    void_lift_trap(0x100CD90Au, "aas ");
    _flag_a = (uint32_t)(MEM8(eax + 0x3927)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3927) = (uint8_t)(MEM8(eax + 0x3927) + HI8(eax)); /* 0x100CD90C: add byte ptr [eax + 0x3927], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD912; /* falls through past a gap */
L_100CD90E:
    void_lift_trap(0x100CD90Eu, "daa ");
    /* cmp MEM32(eax), eax */ /* 0x100CD90F: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(ecx)); /* 0x100CD911: add ah, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD913; /* falls through past a gap */
L_100CD912:
    void_lift_trap(0x100CD912u, "int3 ");
L_100CD913:
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100CD913: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x1880002A)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1880002A) = (uint8_t)(MEM8(eax + 0x1880002A) + LO8(eax)); /* 0x100CD915: add byte ptr [eax + 0x1880002a], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD91B; /* falls through past a gap */
L_100CD916:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(edx) = (uint8_t)(MEM8(edx) - 0); /* 0x100CD916: sub byte ptr [edx], 0 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = MEM8(eax), _sb = 0x26u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD919: sbb byte ptr [eax], 0x26 */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100CD91C; /* falls through past a gap */
L_100CD91B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD91B: add byte ptr es:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD91E; /* falls through past a gap */
L_100CD91C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD91C: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100CD91E:
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100CD91E: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x100CD91Fu, "aas ");
    _flag_a = (uint32_t)(MEM8(eax + (-0x5E))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x5E)) = (uint8_t)(MEM8(eax + (-0x5E)) + HI8(edx)); /* 0x100CD920: add byte ptr [eax - 0x5e], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM32(eax), eax */ /* 0x100CD923: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    { int _zc = (CMP_NE(_flag_a, _flag_b)); if (--ecx != 0 && _zc) goto L_100CD916; } /* 0x100CD925: loopne 0x100cd916 */
L_100CD927:
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100CD927: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* nop */ /* 0x100CD929: nop  */
    { int _zc = (TEST_NZ(_flag_a, _flag_b)); if (--ecx != 0 && _zc) goto L_100CD959; } /* 0x100CD92A: loopne 0x100cd959 */
L_100CD92C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CD92C: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100CD92Eu, "insd dword ptr es:[edi], dx");
    void_lift_trap(0x100CD92Fu, "daa ");
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x30) = (uint8_t)(MEM8(eax + 0x30) + LO8(eax)); /* 0x100CD930: add byte ptr [eax + 0x30], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CD933: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CD934: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ecx), 0 */ /* 0x100CD936: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CD939: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100CD93A: cdq  */
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100CD93B: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM8(ebx), _sb = 0x2Eu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CD93D: sbb byte ptr [ebx], 0x2e */
      MEM8(ebx) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD940: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8((-0x6F6F6F70))) << 24; _flag_b = (uint32_t)(0) << 24;
    MEM8((-0x6F6F6F70)) = (uint8_t)(MEM8((-0x6F6F6F70)) & 0); /* 0x100CD942: and byte ptr [0x90909090], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD949: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD94B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CD94D: inc esi */
    _flag_k = FK_INC;
    _st[0] = (double)*(float*)ADDR(0) / _st[0]; /* 0x100CD94E: fdivr dword ptr [0] */
    _flag_a = (uint32_t)(MEM8(eax + 0x3E66)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E66) = (uint8_t)(MEM8(eax + 0x3E66) + LO8(eax)); /* 0x100CD954: add byte ptr [eax + 0x3e66], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95A; /* falls through past a gap */
L_100CD959:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD959: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95B; /* falls through past a gap */
L_100CD95A:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD95A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95C; /* falls through past a gap */
L_100CD95B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD95B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95D; /* falls through past a gap */
L_100CD95C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD95C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95E; /* falls through past a gap */
L_100CD95D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100CD95D: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CD95F; /* falls through past a gap */
L_100CD95E:
    _flag_a = (uint32_t)((MEM8(edi) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(edi) ^ HI8(ebx))) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) ^ HI8(ebx)); /* 0x100CD95E: xor byte ptr [edi], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100CD960; /* falls through past a gap */
L_100CD95F:
    void_lift_trap(0x100CD95Fu, "aas ");
L_100CD960:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD960: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD962: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edx * 2 + 0x3F)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edx * 2 + 0x3F) = (uint8_t)(MEM8(esp + edx * 2 + 0x3F) + LO8(eax)); /* 0x100CD964: add byte ptr [esp + edx*2 + 0x3f], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD968: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x30) = (uint8_t)(MEM8(eax + 0x30) + HI8(eax)); /* 0x100CD96A: add byte ptr [eax + 0x30], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = POP32_VAL(esp); /* 0x100CD96D: pop edi */
    edi = MEM32(edi); _seg_es = MEM16(edi + 4); /* 0x100CD96E: les edi, ptr [edi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD970: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x30) = (uint8_t)(MEM8(eax + 0x30) + HI8(eax)); /* 0x100CD972: add byte ptr [eax + 0x30], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = POP32_VAL(esp); /* 0x100CD975: pop edi */
    /* in: no port I/O under Win32 */ /* 0x100CD976: in al, 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD978: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD97A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi + ebx + 0x40)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + ebx + 0x40) = (uint8_t)(MEM8(edi + ebx + 0x40) + HI8(edx)); /* 0x100CD97C: add byte ptr [edi + ebx + 0x40], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x100CD983: pushal  */
    _flag_a = (uint32_t)((MEM8(edi + (-0x5C)) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(edi + (-0x5C)) ^ LO8(ebx))) << 24;
    MEM8(edi + (-0x5C)) = (uint8_t)(MEM8(edi + (-0x5C)) ^ LO8(ebx)); /* 0x100CD984: xor byte ptr [edi - 0x5c], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100CD987: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD988: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD98A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100CD98C: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    fp_push(*(float*)&MEM32(eax + (-0x7D))); /* 0x100CD98E: fld dword ptr [eax - 0x7d] */
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100CD991: stc  */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x70))) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(ebp + (-0x70))); /* 0x100CD992: and al, byte ptr [ebp - 0x70] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* nop */ /* 0x100CD995: nop  */
    /* nop */ /* 0x100CD996: nop  */
    /* nop */ /* 0x100CD997: nop  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CD998: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x30) = (uint8_t)(MEM8(eax + 0x30) + HI8(eax)); /* 0x100CD99A: add byte ptr [eax + 0x30], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = POP32_VAL(esp); /* 0x100CD99D: pop edi */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100CD99E: movsb byte ptr es:[edi], byte ptr [esi] */
    { uint32_t _rv = (MEM8(ebx + 0x55C522F9)) & 255u, _rn = ((0x8Bu) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(ebx + 0x55C522F9) = (uint8_t)(_rv); } /* 0x100CD99F: rol byte ptr [ebx + 0x55c522f9], 0x8b */
    /* in: no port I/O under Win32 */ /* 0x100CD9A6: in al, dx */
    PUSH32(esp, ecx); /* 0x100CD9A7: push ecx */
    eax = ebp + 0x8; /* 0x100CD9A8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CD9AB: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CD9AC: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CD9B1: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CD9B2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CD9B3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA89; /* 0x100CD9B6: je 0x100cda89 */
L_100CD9BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CD9BC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA79; /* 0x100CD9BD: je 0x100cda79 */
L_100CD9C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CD9C3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA74; /* 0x100CD9C4: je 0x100cda74 */
L_100CD9CA:
    eax = ebp + 0x8; /* 0x100CD9CA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CD9CD: push eax */
    RECOMP_CALL(sub_100CD445); /* 0x100CD9CE: call 0x100cd445 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065BD8)); /* 0x100CD9D3: fld dword ptr [0x10065bd8] */
    fp_push(_st[0]); /* 0x100CD9D9: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CD9DB: fchs  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CD9DD: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CD9E0: pop ecx */
    ecx = MEM32(ebp + 0xC); /* 0x100CD9E1: mov ecx, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD9E4: fcom st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100CD9E6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD9E8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CD9EA: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CD9EC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDA07; /* 0x100CD9EF: jne 0x100cda07 */
L_100CD9F1:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD9F1: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD9F3: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CD9F5: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CD9F7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CDA09; /* 0x100CD9FA: jp 0x100cda09 */
L_100CD9FC:
    /* test LO8(ecx), 1 */ /* 0x100CD9FC: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA65; /* 0x100CD9FF: je 0x100cda65 */
L_100CDA01:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDA01: fstp st(0) */
    fp_push(1.0); /* 0x100CDA03: fld1  */
    goto L_100CDA5F; /* 0x100CDA05: jmp 0x100cda5f */
L_100CDA07:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CDA07: fstp st(1) */
L_100CDA09:
    fp_push(_st[0]); /* 0x100CDA09: fld st(0) */
    _st[0] *= _st[1]; /* 0x100CDA0B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA0D: fstp dword ptr [ebp - 4] */
    /* test LO8(ecx), 1 */ /* 0x100CDA10: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA3C; /* 0x100CDA13: je 0x100cda3c */
L_100CDA15:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDA15: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA17: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100CDAB8)); /* 0x100CDA1A: fld qword ptr [0x100cdab8] */
    _st[0] *= _st[1]; /* 0x100CDA20: fmul st(1) */
    _st[0] = *(double*)ADDR(0x100CDAC8) - _st[0]; /* 0x100CDA22: fsubr qword ptr [0x100cdac8] */
    fp_push(_st[1]); /* 0x100CDA28: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA2A: fmulp st(1) */
    _st[0] -= *(double*)ADDR(0x100CDAD8); /* 0x100CDA2C: fsub qword ptr [0x100cdad8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA32: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100CDA34: fadd qword ptr [0x10067cd8] */
    goto L_100CDA5F; /* 0x100CDA3A: jmp 0x100cda5f */
L_100CDA3C:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA3C: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100CDAB0)); /* 0x100CDA3F: fld qword ptr [0x100cdab0] */
    _st[0] *= _st[1]; /* 0x100CDA45: fmul st(1) */
    _st[0] = *(double*)ADDR(0x100CDAC0) - _st[0]; /* 0x100CDA47: fsubr qword ptr [0x100cdac0] */
    fp_push(_st[1]); /* 0x100CDA4D: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA4F: fmulp st(1) */
    _st[0] -= *(double*)ADDR(0x100CDAD0); /* 0x100CDA51: fsub qword ptr [0x100cdad0] */
    fp_push(_st[2]); /* 0x100CDA57: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100CDA59: fmulp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA5B: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CDA5D: faddp st(1) */
L_100CDA5F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDA5F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA62: fld dword ptr [ebp + 8] */
L_100CDA65:
    /* test LO8(ecx), 2 */ /* 0x100CDA65: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA6C; /* 0x100CDA68: je 0x100cda6c */
L_100CDA6A:
    _st[0] = -_st[0]; /* 0x100CDA6A: fchs  */
L_100CDA6C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA6C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA6F: fld dword ptr [ebp - 4] */
    goto L_100CDAA5; /* 0x100CDA72: jmp 0x100cdaa5 */
L_100CDA74:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA74: fld dword ptr [ebp + 8] */
    goto L_100CDAA5; /* 0x100CDA77: jmp 0x100cdaa5 */
L_100CDA79:
    PUSH32(esp, 1); /* 0x100CDA79: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CDA7B: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CDA80: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100CDA86: pop ecx */
    goto L_100CDAA5; /* 0x100CDA87: jmp 0x100cdaa5 */
L_100CDA89:
    /* test MEM8(ebp + 0xC), 1 */ /* 0x100CDA89: test byte ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA94; /* 0x100CDA8D: je 0x100cda94 */
L_100CDA8F:
    fp_push(1.0); /* 0x100CDA8F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDA91: fstp dword ptr [ebp + 8] */
L_100CDA94:
    /* test MEM8(ebp + 0xC), 2 */ /* 0x100CDA94: test byte ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA98: fld dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA9F; /* 0x100CDA9B: je 0x100cda9f */
L_100CDA9D:
    _st[0] = -_st[0]; /* 0x100CDA9D: fchs  */
L_100CDA9F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA9F: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDAA2: fld dword ptr [ebp - 4] */
L_100CDAA5:
    esp = ebp; /* 0x100CDAA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CDAA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDAA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CD9A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CD9A4u);

L_100CD9A4:
    PUSH32(esp, ebp); /* 0x100CD9A4: push ebp */
    ebp = esp; /* 0x100CD9A5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CD9A7: push ecx */
    eax = ebp + 0x8; /* 0x100CD9A8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CD9AB: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CD9AC: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CD9B1: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CD9B2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CD9B3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA89; /* 0x100CD9B6: je 0x100cda89 */
L_100CD9BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CD9BC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA79; /* 0x100CD9BD: je 0x100cda79 */
L_100CD9C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CD9C3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDA74; /* 0x100CD9C4: je 0x100cda74 */
L_100CD9CA:
    eax = ebp + 0x8; /* 0x100CD9CA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CD9CD: push eax */
    RECOMP_CALL(sub_100CD445); /* 0x100CD9CE: call 0x100cd445 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065BD8)); /* 0x100CD9D3: fld dword ptr [0x10065bd8] */
    fp_push(_st[0]); /* 0x100CD9D9: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CD9DB: fchs  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CD9DD: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CD9E0: pop ecx */
    ecx = MEM32(ebp + 0xC); /* 0x100CD9E1: mov ecx, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD9E4: fcom st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100CD9E6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD9E8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CD9EA: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CD9EC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDA07; /* 0x100CD9EF: jne 0x100cda07 */
L_100CD9F1:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CD9F1: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CD9F3: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CD9F5: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CD9F7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CDA09; /* 0x100CD9FA: jp 0x100cda09 */
L_100CD9FC:
    /* test LO8(ecx), 1 */ /* 0x100CD9FC: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA65; /* 0x100CD9FF: je 0x100cda65 */
L_100CDA01:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDA01: fstp st(0) */
    fp_push(1.0); /* 0x100CDA03: fld1  */
    goto L_100CDA5F; /* 0x100CDA05: jmp 0x100cda5f */
L_100CDA07:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CDA07: fstp st(1) */
L_100CDA09:
    fp_push(_st[0]); /* 0x100CDA09: fld st(0) */
    _st[0] *= _st[1]; /* 0x100CDA0B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA0D: fstp dword ptr [ebp - 4] */
    /* test LO8(ecx), 1 */ /* 0x100CDA10: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA3C; /* 0x100CDA13: je 0x100cda3c */
L_100CDA15:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDA15: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA17: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100CDAB8)); /* 0x100CDA1A: fld qword ptr [0x100cdab8] */
    _st[0] *= _st[1]; /* 0x100CDA20: fmul st(1) */
    _st[0] = *(double*)ADDR(0x100CDAC8) - _st[0]; /* 0x100CDA22: fsubr qword ptr [0x100cdac8] */
    fp_push(_st[1]); /* 0x100CDA28: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA2A: fmulp st(1) */
    _st[0] -= *(double*)ADDR(0x100CDAD8); /* 0x100CDA2C: fsub qword ptr [0x100cdad8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA32: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100CDA34: fadd qword ptr [0x10067cd8] */
    goto L_100CDA5F; /* 0x100CDA3A: jmp 0x100cda5f */
L_100CDA3C:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA3C: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100CDAB0)); /* 0x100CDA3F: fld qword ptr [0x100cdab0] */
    _st[0] *= _st[1]; /* 0x100CDA45: fmul st(1) */
    _st[0] = *(double*)ADDR(0x100CDAC0) - _st[0]; /* 0x100CDA47: fsubr qword ptr [0x100cdac0] */
    fp_push(_st[1]); /* 0x100CDA4D: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA4F: fmulp st(1) */
    _st[0] -= *(double*)ADDR(0x100CDAD0); /* 0x100CDA51: fsub qword ptr [0x100cdad0] */
    fp_push(_st[2]); /* 0x100CDA57: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100CDA59: fmulp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CDA5B: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CDA5D: faddp st(1) */
L_100CDA5F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDA5F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA62: fld dword ptr [ebp + 8] */
L_100CDA65:
    /* test LO8(ecx), 2 */ /* 0x100CDA65: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA6C; /* 0x100CDA68: je 0x100cda6c */
L_100CDA6A:
    _st[0] = -_st[0]; /* 0x100CDA6A: fchs  */
L_100CDA6C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA6C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDA6F: fld dword ptr [ebp - 4] */
    goto L_100CDAA5; /* 0x100CDA72: jmp 0x100cdaa5 */
L_100CDA74:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA74: fld dword ptr [ebp + 8] */
    goto L_100CDAA5; /* 0x100CDA77: jmp 0x100cdaa5 */
L_100CDA79:
    PUSH32(esp, 1); /* 0x100CDA79: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CDA7B: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CDA80: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100CDA86: pop ecx */
    goto L_100CDAA5; /* 0x100CDA87: jmp 0x100cdaa5 */
L_100CDA89:
    /* test MEM8(ebp + 0xC), 1 */ /* 0x100CDA89: test byte ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA94; /* 0x100CDA8D: je 0x100cda94 */
L_100CDA8F:
    fp_push(1.0); /* 0x100CDA8F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDA91: fstp dword ptr [ebp + 8] */
L_100CDA94:
    /* test MEM8(ebp + 0xC), 2 */ /* 0x100CDA94: test byte ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDA98: fld dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDA9F; /* 0x100CDA9B: je 0x100cda9f */
L_100CDA9D:
    _st[0] = -_st[0]; /* 0x100CDA9D: fchs  */
L_100CDA9F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDA9F: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDAA2: fld dword ptr [ebp - 4] */
L_100CDAA5:
    esp = ebp; /* 0x100CDAA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CDAA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDAA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CDAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CDAE0u);

L_100CDAE0:
    PUSH32(esp, ebp); /* 0x100CDAE0: push ebp */
    ebp = esp; /* 0x100CDAE1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CDAE3: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CDAE6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CDAE9: fstp qword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDAED: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CDAF0: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036786); /* 0x100CDAF3: call 0x10036786 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100CDAF8: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CDAFB: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CDAFE: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CDB01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDB02: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CDB03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CDB03u);

L_100CDB03:
    PUSH32(esp, ebp); /* 0x100CDB03: push ebp */
    ebp = esp; /* 0x100CDB04: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CDB06: push ecx */
    eax = ebp + 0x8; /* 0x100CDB07: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CDB0A: push eax */
    eax = ebp + (-0x4); /* 0x100CDB0B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CDB0E: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CDB0F: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CDB14: movsx eax, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CDB18: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CDB19: pop ecx */
    PUSH32(esp, 0x18u); /* 0x100CDB1A: push 0x18 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100CDB1C: cdq  */
    ecx = POP32_VAL(esp); /* 0x100CDB1D: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100CDB1E: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = eax * 2 + 0x4; /* 0x100CDB20: lea eax, [eax*2 + 4] */
    /* cmp eax, 5 */ /* 0x100CDB27: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CDB2F; /* 0x100CDB2A: jbe 0x100cdb2f */
L_100CDB2C:
    PUSH32(esp, 5); /* 0x100CDB2C: push 5 */
    eax = POP32_VAL(esp); /* 0x100CDB2E: pop eax */
L_100CDB2F:
    esp = ebp; /* 0x100CDB2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CDB31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDB32: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CDB33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CDB33u);

L_100CDB33:
    PUSH32(esp, ebp); /* 0x100CDB33: push ebp */
    ebp = esp; /* 0x100CDB34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100CDB36: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDB39: fld dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x100CDB3C: push 0 */
    PUSH32(esp, ecx); /* 0x100CDB3E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDB3F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF541); /* 0x100CDB42: call 0x100cf541 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100CDB47: fld1  */
    eax = ebp + (-0x8); /* 0x100CDB49: lea eax, [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CDB4C: fsubp st(1) */
    PUSH32(esp, eax); /* 0x100CDB4E: push eax */
    eax = ebp + (-0x4); /* 0x100CDB4F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CDB52: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDB53: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDB56: fld dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CDB59: fsub qword ptr [0x10063bd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CDB5F: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D690E); /* 0x100CDB62: call 0x100d690e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CDB67: fld dword ptr [ebp - 8] */
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CDB6A: movsx eax, word ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x100CDB6E: fmul dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CDB71: push eax */
    eax = ebp + (-0x8); /* 0x100CDB72: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CDB75: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CDB76: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D66D7); /* 0x100CDB79: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100CDB7E: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100CDB81: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CDBA7; /* 0x100CDB84: jns 0x100cdba7 */
L_100CDB86:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDB86: fld dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x100CDB89: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100CDB8B: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDB8D: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDB90: fld dword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(0x100CDBB8); /* 0x100CDB93: fmul qword ptr [0x100cdbb8] */
    _st[0] += *(double*)ADDR(0x100CDBC0); /* 0x100CDB99: fadd qword ptr [0x100cdbc0] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100CDB9F: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CDBA2: fstp dword ptr [ebp - 8] */
    goto L_100CDBAF; /* 0x100CDBA5: jmp 0x100cdbaf */
L_100CDBA7:
    PUSH32(esp, 8); /* 0x100CDBA7: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CDBA9: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CDBAE: pop ecx */
L_100CDBAF:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CDBAF: fld dword ptr [ebp - 8] */
    esp = ebp; /* 0x100CDBB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CDBB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDBB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CDBC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CDBC8u);

L_100CDBC8:
    PUSH32(esp, ebp); /* 0x100CDBC8: push ebp */
    ebp = esp; /* 0x100CDBC9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CDBCB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDBCE: fld dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x100CDBD1: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x100CDBD4: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CDBD5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100CDBD7: push esi */
    PUSH32(esp, eax); /* 0x100CDBD8: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CDBD9: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100CDBDC: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDBE1: fld dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x100CDBE4: fldz  */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CDBE6: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CDBE7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CDBE8: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100CDBE9: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDC09; /* 0x100CDBEB: je 0x100cdc09 */
L_100CDBED:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDBED: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CDBEF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CDBFC; /* 0x100CDBF0: je 0x100cdbfc */
L_100CDBF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CDBF2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CDC1E; /* 0x100CDBF3: jne 0x100cdc1e */
L_100CDBF5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDBF5: fstp st(0) */
    goto L_100CDE0D; /* 0x100CDBF7: jmp 0x100cde0d */
L_100CDBFC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDBFC: fstp st(0) */
L_100CDBFE:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100CDBFE: fld dword ptr [0x10065b68] */
    goto L_100CDE10; /* 0x100CDC04: jmp 0x100cde10 */
L_100CDC09:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDC09: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDC0B: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CDC0D: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDC1E; /* 0x100CDC10: jne 0x100cdc1e */
L_100CDC12:
    PUSH32(esp, 4); /* 0x100CDC12: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDC14: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CDC16: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CDC1B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100CDBFE; /* 0x100CDC1C: jmp 0x100cdbfe */
L_100CDC1E:
    fp_push(*(float*)&MEM32(0x100E2498)); /* 0x100CDC1E: fld dword ptr [0x100e2498] */
    fp_push(_st[0]); /* 0x100CDC24: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CDC26: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100CDC28: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDC2A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDC2C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDC89; /* 0x100CDC2F: jne 0x100cdc89 */
L_100CDC31:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDC31: fstp st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100CDC33: fsub dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x100CDC36: push esi */
    PUSH32(esp, esi); /* 0x100CDC37: push esi */
    PUSH32(esp, ecx); /* 0x100CDC38: push ecx */
    _st[0] *= *(double*)ADDR(0x10065078); /* 0x100CDC39: fmul qword ptr [0x10065078] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDC3F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100CDC42: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDC45: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CD9A4); /* 0x100CDC48: call 0x100cd9a4 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x100CDC4D: fmul dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CDC50: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = *(double*)ADDR(0x10065078) / _st[0]; /* 0x100CDC53: fdivr qword ptr [0x10065078] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDC59: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100CDC5C: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDC5F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF541); /* 0x100CDC62: call 0x100cf541 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CDC67: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDC6A: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CDC6D: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100CDC70: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDC72: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CDB33); /* 0x100CDC75: call 0x100cdb33 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100CDC7A: fsubr qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100CDC7D: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDC7E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDC81: fld dword ptr [ebp + 8] */
    goto L_100CDE10; /* 0x100CDC84: jmp 0x100cde10 */
L_100CDC89:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDC89: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDC8B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDC8D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CDCA1; /* 0x100CDC90: jp 0x100cdca1 */
L_100CDC92:
    PUSH32(esp, ecx); /* 0x100CDC92: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDC93: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CDB33); /* 0x100CDC96: call 0x100cdb33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CDC9B: pop ecx */
    goto L_100CDE10; /* 0x100CDC9C: jmp 0x100cde10 */
L_100CDCA1:
    edx = esi; /* 0x100CDCA1: mov edx, esi */
    ecx = esi; /* 0x100CDCA3: mov ecx, esi */
L_100CDCA5:
    fp_push(*(float*)&MEM32(ecx + 0x100CDE30)); /* 0x100CDCA5: fld dword ptr [ecx + 0x100cde30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDCAB: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDCAD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CDCAF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CDCC3; /* 0x100CDCB2: jp 0x100cdcc3 */
L_100CDCB4:
    fp_push(*(float*)&MEM32(ecx + 0x100CDE34)); /* 0x100CDCB4: fld dword ptr [ecx + 0x100cde34] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDCBA: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDCBC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDCBE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDCCF; /* 0x100CDCC1: je 0x100cdccf */
L_100CDCC3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x100CDCC3: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CDCC6: inc edx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x120u */ /* 0x100CDCC7: cmp ecx, 0x120 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CDCA5; /* 0x100CDCCD: jb 0x100cdca5 */
L_100CDCCF:
    /* cmp edx, 0xCu */ /* 0x100CDCCF: cmp edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100CDD06; /* 0x100CDCD2: jae 0x100cdd06 */
L_100CDCD4:
    eax = (uint32_t)((int32_t)edx * (int32_t)0x18u); /* 0x100CDCD4: imul eax, edx, 0x18 */
    _st[0] -= (double)*(float*)ADDR(eax + 0x100CDE38); /* 0x100CDCD7: fsub dword ptr [eax + 0x100cde38] */
    PUSH32(esp, MEM32(eax + 0x100CDE44)); /* 0x100CDCDD: push dword ptr [eax + 0x100cde44] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x100CDE3C); /* 0x100CDCE3: fsub dword ptr [eax + 0x100cde3c] */
    PUSH32(esp, MEM32(eax + 0x100CDE40)); /* 0x100CDCE9: push dword ptr [eax + 0x100cde40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDCEF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100CDCF2: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100CDCF5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDCF6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100CDCF9: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CDCFE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100CDE10; /* 0x100CDD01: jmp 0x100cde10 */
L_100CDD06:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100CDF50)); /* 0x100CDD06: fcom qword ptr [0x100cdf50] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDD0C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDD0E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDD8F; /* 0x100CDD11: jne 0x100cdd8f */
L_100CDD13:
    fp_push(*(float*)&MEM32(0x100645B0)); /* 0x100CDD13: fld dword ptr [0x100645b0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDD19: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDD1B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDD1D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDD8F; /* 0x100CDD20: jne 0x100cdd8f */
L_100CDD22:
    ecx = esi; /* 0x100CDD22: mov ecx, esi */
L_100CDD24:
    fp_push(*(float*)&MEM32(ecx + 0x100CDE18)); /* 0x100CDD24: fld dword ptr [ecx + 0x100cde18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDD2A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDD2C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDD2E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CDD3C; /* 0x100CDD31: je 0x100cdd3c */
L_100CDD33:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x100CDD33: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CDD36: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, 0x18u */ /* 0x100CDD37: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CDD24; /* 0x100CDD3A: jb 0x100cdd24 */
L_100CDD3C:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x18u); /* 0x100CDD3C: imul esi, esi, 0x18 */
    _st[0] -= (double)*(float*)ADDR(esi + 0x100CDE1C); /* 0x100CDD3F: fsub dword ptr [esi + 0x100cde1c] */
    PUSH32(esp, MEM32(esi + 0x100CDE24)); /* 0x100CDD45: push dword ptr [esi + 0x100cde24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CDD4B: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x100CDE20)); /* 0x100CDD4E: push dword ptr [esi + 0x100cde20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDD54: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100CDD57: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDD58: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100CDD5B: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CDD60: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100CDD63: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CDD66: fld dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x100CDE2C)); /* 0x100CDD69: push dword ptr [esi + 0x100cde2c] */
    PUSH32(esp, MEM32(esi + 0x100CDE28)); /* 0x100CDD6F: push dword ptr [esi + 0x100cde28] */
    PUSH32(esp, ecx); /* 0x100CDD75: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDD76: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100CDD79: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100CDD7E: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CDD81: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDD84: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDD87: fld dword ptr [ebp + 8] */
    goto L_100CDE10; /* 0x100CDD8A: jmp 0x100cde10 */
L_100CDD8F:
    eax = ebp + (-0x4); /* 0x100CDD8F: lea eax, [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CDD92: fstp st(0) */
    PUSH32(esp, eax); /* 0x100CDD94: push eax */
    eax = ebp + 0x8; /* 0x100CDD95: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CDD98: push eax */
    RECOMP_CALL(sub_100D1E6C); /* 0x100CDD99: call 0x100d1e6c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CDD9E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDDA1: fld dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x100CDDA4: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDDA6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDDA8: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CDDAA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CDDAB: pop ecx */
    /* test HI8(eax), 0x41u */ /* 0x100CDDAC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CDDB3; /* 0x100CDDAF: jne 0x100cddb3 */
L_100CDDB1:
    _st[0] = -_st[0]; /* 0x100CDDB1: fchs  */
L_100CDDB3:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDDB3: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100CDDB6: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100CDDB9: push esi */
    PUSH32(esp, ecx); /* 0x100CDDBA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDDBB: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF541); /* 0x100CDDBE: call 0x100cf541 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CDDC3: movsx eax, word ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100CDDC7: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDDC9: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CDDCC: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CDDCE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x100CDDD1: mov dword ptr [ebp - 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x100CDDD4: fild dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CDDD7: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100CDDDA: fld dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(0x10065070)); /* 0x100CDDDD: fld qword ptr [0x10065070] */
    _st[0] *= _st[1]; /* 0x100CDDE3: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x100CDDE5: fadd dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDDE8: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDDEB: fld dword ptr [ebp + 8] */
    fp_xch(1); /* 0x100CDDEE: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CDDF0: fmul qword ptr [0x10064de8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CDDF6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDDF8: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CDDFB: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CDDFE: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100CDE01: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x100CDE06: fadd dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CDE09: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CDE0A: fstp dword ptr [ebp + 8] */
L_100CDE0D:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CDE0D: fld dword ptr [ebp + 8] */
L_100CDE10:
    esi = POP32_VAL(esp); /* 0x100CDE10: pop esi */
    esp = ebp; /* 0x100CDE11: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CDE13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CDE14: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CDF58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CDF58u);

L_100CDF58:
    PUSH32(esp, ebp); /* 0x100CDF58: push ebp */
    ebp = esp; /* 0x100CDF59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x100CDF5B: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100CDF61: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100CDF66: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CDF68: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x100CDF6B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100CDF6C: mov edi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(edi)); /* 0x100CDF6F: fld qword ptr [edi] */
    *(double*)ADDR(ebp + (-0xA8)) = _st[0]; /* 0x100CDF71: fst qword ptr [ebp - 0xa8] */
    fp_push(*(double*)ADDR(0x10064E20)); /* 0x100CDF77: fld qword ptr [0x10064e20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDF7D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDF7F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CDF81: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CE03C; /* 0x100CDF84: jp 0x100ce03c */
L_100CDF8A:
    fp_push(*(double*)ADDR(0x10064E00)); /* 0x100CDF8A: fld qword ptr [0x10064e00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDF90: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDF92: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDF94: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CE03C; /* 0x100CDF97: jne 0x100ce03c */
L_100CDF9D:
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100CDF9D: fmul qword ptr [0x10063bd8] */
    fp_push(0.0); /* 0x100CDFA3: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDFA5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDFA7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CDFA9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CDFB6; /* 0x100CDFAC: jp 0x100cdfb6 */
L_100CDFAE:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CDFAE: fadd qword ptr [0x10063bd0] */
    goto L_100CDFBC; /* 0x100CDFB4: jmp 0x100cdfbc */
L_100CDFB6:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CDFB6: fsub qword ptr [0x10063bd0] */
L_100CDFBC:
    eax = ebp + (-0x9C); /* 0x100CDFBC: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CDFC2: push 0 */
    PUSH32(esp, eax); /* 0x100CDFC4: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CDFC5: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100C002B); /* 0x100CDFCB: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CDFD0: fld qword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x100CDFD6: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CDFD8: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CDFDA: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CDFDC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CDFDD: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CDFDE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CE02F; /* 0x100CDFE1: jnp 0x100ce02f */
L_100CDFE3:
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100CDFE3: fld qword ptr [0x10063c60] */
    _st[0] *= _st[1]; /* 0x100CDFE9: fmul st(1) */
    _st[0] *= *(double*)ADDR(0x10064D58); /* 0x100CDFEB: fmul qword ptr [0x10064d58] */
    fp_push(*(double*)ADDR(0x10064E08)); /* 0x100CDFF1: fld qword ptr [0x10064e08] */
    _st[0] *= _st[1]; /* 0x100CDFF7: fmul st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0xA8)) - _st[0]; /* 0x100CDFF9: fsubr qword ptr [ebp - 0xa8] */
    fp_push(_st[1]); /* 0x100CDFFF: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064DF8); /* 0x100CE001: fmul qword ptr [0x10064df8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CE007: fsubp st(1) */
    fp_push(_st[1]); /* 0x100CE009: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064D60); /* 0x100CE00B: fmul qword ptr [0x10064d60] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CE011: fsubp st(1) */
    fp_push(_st[1]); /* 0x100CE013: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10064D40); /* 0x100CE015: fmul qword ptr [0x10064d40] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CE01B: fsubp st(1) */
    fp_xch(1); /* 0x100CE01D: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064D38); /* 0x100CE01F: fmul qword ptr [0x10064d38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CE025: fsubp st(1) */
    *(double*)ADDR(ebp + (-0xA8)) = _st[0]; /* 0x100CE027: fst qword ptr [ebp - 0xa8] */
    goto L_100CE035; /* 0x100CE02D: jmp 0x100ce035 */
L_100CE02F:
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CE02F: fld qword ptr [ebp - 0xa8] */
L_100CE035:
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CE035: fstp qword ptr [edi] */
    goto L_100CE303; /* 0x100CE037: jmp 0x100ce303 */
L_100CE03C:
    PUSH32(esp, ebx); /* 0x100CE03C: push ebx */
    PUSH32(esp, esi); /* 0x100CE03D: push esi */
    PUSH32(esp, 6); /* 0x100CE03E: push 6 */
    esi = POP32_VAL(esp); /* 0x100CE040: pop esi */
    eax = ebp + (-0x9C); /* 0x100CE041: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x100CE047: push eax */
    eax = ebp + (-0xA0); /* 0x100CE048: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x100CE04E: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CE04F: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100D6993); /* 0x100CE055: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA0)); /* 0x100CE05A: mov eax, dword ptr [ebp - 0xa0] */
    ecx = POP32_VAL(esp); /* 0x100CE060: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CE061: pop ecx */
    /* cmp LO16(eax), 0x56u */ /* 0x100CE062: cmp ax, 0x56 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x56u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100CE085; /* 0x100CE066: jge 0x100ce085 */
L_100CE068:
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CE068: fld qword ptr [ebp - 0xa8] */
    eax = ebp + (-0x34); /* 0x100CE06E: lea eax, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CE071: push ecx */
    PUSH32(esp, ecx); /* 0x100CE072: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE073: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE076: push esi */
    PUSH32(esp, eax); /* 0x100CE077: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CE078: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CE07D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CE147; /* 0x100CE080: jmp 0x100ce147 */
L_100CE085:
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CE085: cwde  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x36u; /* 0x100CE086: sub eax, 0x36 */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100CE089: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    eax = (uint32_t)LO16(eax); /* 0x100CE08C: movzx eax, ax */
    MEM32(ebp + (-0xA0)) = eax; /* 0x100CE08F: mov dword ptr [ebp - 0xa0], eax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CE095: cwde  */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x100CE096: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x100CE096: shl eax, 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CE099: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100CE09B: push eax */
    eax = ebp + (-0xA8); /* 0x100CE09C: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x100CE0A2: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100CE0A3: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100CE0A8: fld qword ptr [ebp - 0xa8] */
    eax = ebp + (-0xB8); /* 0x100CE0AE: lea eax, [ebp - 0xb8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE0B4: fstp qword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CE0B7: push 2 */
    PUSH32(esp, eax); /* 0x100CE0B9: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CE0BA: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0xA0)); /* 0x100CE0BF: movsx eax, word ptr [ebp - 0xa0] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30u); /* 0x100CE0C6: imul eax, eax, 0x30 */
    PUSH32(esp, 0x30u); /* 0x100CE0C9: push 0x30 */
    eax = eax + 0x100CE350; /* 0x100CE0CB: lea eax, [eax + 0x100ce350] */
    PUSH32(esp, eax); /* 0x100CE0D1: push eax */
    eax = ebp + (-0x34); /* 0x100CE0D2: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100CE0D5: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CE0D6: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB8))); /* 0x100CE0DB: fld qword ptr [ebp - 0xb8] */
    eax = ebp + (-0x34); /* 0x100CE0E1: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CE0E4: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE0E7: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE0EA: push esi */
    PUSH32(esp, eax); /* 0x100CE0EB: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CE0EC: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CE0F1: fld qword ptr [ebp - 0xb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CE0F7: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CE0FA: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE0FC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE0FE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CE100: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CE147; /* 0x100CE103: jnp 0x100ce147 */
L_100CE105:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0xA0)); /* 0x100CE105: movsx eax, word ptr [ebp - 0xa0] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x30u); /* 0x100CE10C: imul eax, eax, 0x30 */
    PUSH32(esp, 0x30u); /* 0x100CE10F: push 0x30 */
    eax = eax + 0x100CE350; /* 0x100CE111: lea eax, [eax + 0x100ce350] */
    PUSH32(esp, eax); /* 0x100CE117: push eax */
    eax = ebp + (-0x64); /* 0x100CE118: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CE11B: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CE11C: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CE121: fld qword ptr [ebp - 0xb0] */
    eax = ebp + (-0x64); /* 0x100CE127: lea eax, [ebp - 0x64] */
    ecx = POP32_VAL(esp); /* 0x100CE12A: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE12B: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE12E: push esi */
    PUSH32(esp, eax); /* 0x100CE12F: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CE130: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CE135: push esi */
    eax = ebp + (-0x64); /* 0x100CE136: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CE139: push eax */
    eax = ebp + (-0x34); /* 0x100CE13A: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CE13D: push esi */
    PUSH32(esp, eax); /* 0x100CE13E: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CE13F: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CE144: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CE147:
    ebx = 0x100CE350u; /* 0x100CE147: mov ebx, 0x100ce350 */
L_100CE14C:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CE14C: fld qword ptr [ebp - 0x34] */
    fp_push(*(double*)ADDR(0x10064E20)); /* 0x100CE14F: fld qword ptr [0x10064e20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE155: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE157: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CE159: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CE16F; /* 0x100CE15C: je 0x100ce16f */
L_100CE15E:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064E00)); /* 0x100CE15E: fcom qword ptr [0x10064e00] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE164: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CE166: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CE24A; /* 0x100CE169: jne 0x100ce24a */
L_100CE16F:
    _st[0] += *(double*)ADDR(ebp + (-0x2C)); /* 0x100CE16F: fadd qword ptr [ebp - 0x2c] */
    eax = ebp + (-0x9C); /* 0x100CE172: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CE178: push 0 */
    PUSH32(esp, eax); /* 0x100CE17A: push eax */
    _st[0] *= *(double*)ADDR(0x10064DC8); /* 0x100CE17B: fmul qword ptr [0x10064dc8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CE181: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100C002B); /* 0x100CE187: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CE18C: fld qword ptr [ebp - 0x9c] */
    eax = ebp + (-0xB8); /* 0x100CE192: lea eax, [ebp - 0xb8] */
    _st[0] *= *(double*)ADDR(0x10064E10); /* 0x100CE198: fmul qword ptr [0x10064e10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE19E: fstp qword ptr [esp] */
    PUSH32(esp, 2); /* 0x100CE1A1: push 2 */
    PUSH32(esp, eax); /* 0x100CE1A3: push eax */
    RECOMP_CALL(sub_100CBBE8); /* 0x100CE1A4: call 0x100cbbe8 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100CE1A9: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100CE1AB: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100CE1AB: shl eax, 3 */
    PUSH32(esp, eax); /* 0x100CE1AE: push eax */
    eax = ebp + (-0x64); /* 0x100CE1AF: lea eax, [ebp - 0x64] */
    PUSH32(esp, ebx); /* 0x100CE1B2: push ebx */
    PUSH32(esp, eax); /* 0x100CE1B3: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CE1B4: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB8))); /* 0x100CE1B9: fld qword ptr [ebp - 0xb8] */
    eax = ebp + (-0x64); /* 0x100CE1BF: lea eax, [ebp - 0x64] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100CE1C2: add esp, 0x14 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE1C5: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE1C8: push esi */
    PUSH32(esp, eax); /* 0x100CE1C9: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CE1CA: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CE1CF: fld qword ptr [ebp - 0xb0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CE1D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100CE1D8: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE1DA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE1DC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CE1DE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CE233; /* 0x100CE1E1: jnp 0x100ce233 */
L_100CE1E3:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CE1E3: fld qword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CE1E6: push ecx */
    PUSH32(esp, ecx); /* 0x100CE1E7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE1E8: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CEA7F); /* 0x100CE1EB: call 0x100cea7f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CE1F0: mov esi, eax */
    eax = ebp + (-0x94); /* 0x100CE1F2: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x100CE1F8: mov ecx, esi */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x100CE1FA: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x100CE1FA: shl ecx, 3 */
    PUSH32(esp, ecx); /* 0x100CE1FD: push ecx */
    PUSH32(esp, ebx); /* 0x100CE1FE: push ebx */
    PUSH32(esp, eax); /* 0x100CE1FF: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CE200: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xB0))); /* 0x100CE205: fld qword ptr [ebp - 0xb0] */
    eax = ebp + (-0x94); /* 0x100CE20B: lea eax, [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CE211: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE214: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE217: push esi */
    PUSH32(esp, eax); /* 0x100CE218: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CE219: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CE21E: push esi */
    eax = ebp + (-0x94); /* 0x100CE21F: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x100CE225: push eax */
    eax = ebp + (-0x64); /* 0x100CE226: lea eax, [ebp - 0x64] */
    PUSH32(esp, esi); /* 0x100CE229: push esi */
    PUSH32(esp, eax); /* 0x100CE22A: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CE22B: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CE230: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CE233:
    PUSH32(esp, esi); /* 0x100CE233: push esi */
    eax = ebp + (-0x64); /* 0x100CE234: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x100CE237: push eax */
    eax = ebp + (-0x34); /* 0x100CE238: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CE23B: push esi */
    PUSH32(esp, eax); /* 0x100CE23C: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CE23D: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CE242: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100CE14C; /* 0x100CE245: jmp 0x100ce14c */
L_100CE24A:
    _st[0] += *(double*)ADDR(ebp + (-0x2C)); /* 0x100CE24A: fadd qword ptr [ebp - 0x2c] */
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100CE24D: fmul qword ptr [0x10063bd8] */
    fp_push(0.0); /* 0x100CE253: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE255: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE257: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CE259: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CE266; /* 0x100CE25C: jp 0x100ce266 */
L_100CE25E:
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100CE25E: fadd qword ptr [0x10063bd0] */
    goto L_100CE26C; /* 0x100CE264: jmp 0x100ce26c */
L_100CE266:
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CE266: fsub qword ptr [0x10063bd0] */
L_100CE26C:
    eax = ebp + (-0x9C); /* 0x100CE26C: lea eax, [ebp - 0x9c] */
    PUSH32(esp, 0); /* 0x100CE272: push 0 */
    PUSH32(esp, eax); /* 0x100CE274: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x9C)) = _v; } /* 0x100CE275: fstp qword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_100C002B); /* 0x100CE27B: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CE280: fld qword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x100CE286: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE288: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE28A: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CE28C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CE28D: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CE28E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CE2ED; /* 0x100CE291: jnp 0x100ce2ed */
L_100CE293:
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x100CE293: fld qword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x100CE296: push ecx */
    PUSH32(esp, ecx); /* 0x100CE297: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE298: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CEA7F); /* 0x100CE29B: call 0x100cea7f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100CE2A0: mov esi, eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100CE2A2: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100CE2A2: shl eax, 3 */
    PUSH32(esp, eax); /* 0x100CE2A5: push eax */
    eax = ebp + (-0x94); /* 0x100CE2A6: lea eax, [ebp - 0x94] */
    PUSH32(esp, ebx); /* 0x100CE2AC: push ebx */
    PUSH32(esp, eax); /* 0x100CE2AD: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100CE2AE: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CE2B3: fld qword ptr [ebp - 0x9c] */
    eax = ebp + (-0x94); /* 0x100CE2B9: lea eax, [ebp - 0x94] */
    _st[0] *= *(double*)ADDR(0x10064E18); /* 0x100CE2BF: fmul qword ptr [0x10064e18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CE2C5: add esp, 0xc */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10064D58); /* 0x100CE2C8: fmul qword ptr [0x10064d58] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE2CE: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x100CE2D1: push esi */
    PUSH32(esp, eax); /* 0x100CE2D2: push eax */
    RECOMP_CALL(sub_100CBA6A); /* 0x100CE2D3: call 0x100cba6a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100CE2D8: push esi */
    eax = ebp + (-0x94); /* 0x100CE2D9: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x100CE2DF: push eax */
    eax = ebp + (-0x34); /* 0x100CE2E0: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CE2E3: push esi */
    PUSH32(esp, eax); /* 0x100CE2E4: push eax */
    RECOMP_CALL(sub_100CB9D2); /* 0x100CE2E5: call 0x100cb9d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100CE2EA: add esp, 0x20 */
    _flag_k = FK_ADD;
L_100CE2ED:
    eax = ebp + (-0x34); /* 0x100CE2ED: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x100CE2F0: push esi */
    PUSH32(esp, eax); /* 0x100CE2F1: push eax */
    RECOMP_CALL(sub_100CBA16); /* 0x100CE2F2: call 0x100cba16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CE2F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CE2F8: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100CE2F9: fstp qword ptr [edi] */
    fp_push(*(double*)ADDR(ebp + (-0x9C))); /* 0x100CE2FB: fld qword ptr [ebp - 0x9c] */
    esi = POP32_VAL(esp); /* 0x100CE301: pop esi */
    ebx = POP32_VAL(esp); /* 0x100CE302: pop ebx */
L_100CE303:
    fp_push(*(double*)ADDR(0x10064E28)); /* 0x100CE303: fld qword ptr [0x10064e28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE309: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE30B: fnstsw ax */
    edi = POP32_VAL(esp); /* 0x100CE30D: pop edi */
    /* test HI8(eax), 0x41u */ /* 0x100CE30E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CE320; /* 0x100CE311: je 0x100ce320 */
L_100CE313:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064510)); /* 0x100CE313: fcom qword ptr [0x10064510] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE319: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CE31B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CE338; /* 0x100CE31E: jne 0x100ce338 */
L_100CE320:
    fp_push(*(double*)ADDR(0x10064538)); /* 0x100CE320: fld qword ptr [0x10064538] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CE326: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CE329: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CE32D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CEA62); /* 0x100CE330: call 0x100cea62 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CE335: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100CE338:
    RECOMP_CALL(sub_10051B40); /* 0x100CE338: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x100CE33D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100CE340: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100CE343: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100CE345: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100CE34A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CE34C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CE34D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CE350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CE350u);

L_100CE350:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE350: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x5))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x5)) = (uint8_t)(MEM8(eax + (-0x5)) + LO8(edx)); /* 0x100CE352: add byte ptr [eax - 5], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(ecx + 0x41)); _flag_b = (uint32_t)(edi);
    MEM32(ecx + 0x41) = MEM32(ecx + 0x41) & edi; /* 0x100CE355: and dword ptr [ecx + 0x41], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSHAD(); /* 0x100CE35B: pushal  */
    SET_HI8(eax, 0x10u); /* 0x100CE35C: mov ah, 0x10 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CE35E: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE361: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100CE363: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100CE365: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x100CE366: push ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE367: add byte ptr ds:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE36A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100CE36C: pop esp */
    { uint32_t _aa = LO8(eax), _ab = 0xD3u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CE36D: adc al, 0xd3 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp LO8(eax), 0 */ /* 0x100CE36F: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE371: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x3B3B83)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    MEM8(edx + 0x3B3B83) = (uint8_t)(MEM8(edx + 0x3B3B83) & LO8(ebx)); /* 0x100CE373: and byte ptr [edx + 0x3b3b83], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100CE37B: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ecx + edi + (-0x80000000)), _ab = 0xC0054A76u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CE37D: adc dword ptr [ecx + edi - 0x80000000], 0xc0054a76 */
      MEM32(ecx + edi + (-0x80000000)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE388: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3E573E78)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E573E78) = (uint8_t)(MEM8(eax + 0x3E573E78) + LO8(eax)); /* 0x100CE38A: add byte ptr [eax + 0x3e573e78], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE390: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3CC8E643)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3CC8E643) = (uint8_t)(MEM8(eax + 0x3CC8E643) + LO8(ecx)); /* 0x100CE392: add byte ptr [eax + 0x3cc8e643], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE398: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CE39A: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x100CE39C: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    _df = -1; /* 0x100CE39D: std  */
    PUSH32(esp, _seg_ds); /* 0x100CE39E: push ds */
    /* cmp eax, MEM32(eax) */ /* 0x100CE39F: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi) = (uint8_t)(MEM8(esi) - HI8(ebx)); /* 0x100CE3A3: sub byte ptr [esi], bh */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100CE3A5; /* falls through past a gap */
L_100CE3A4:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100CE3A4: add byte ptr ds:[ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100CE3AB; /* falls through past a gap */
L_100CE3A5:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100CE3A5: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100CE3AB:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100CE3AB: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100CE3AD: sub eax, ebx */
    _flag_k = FK_CMP;
    void_lift_trap(0x100CE3AFu, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CE3B2: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100CE3B4: movsd dword ptr es:[edi], dword ptr [esi] */
    void_lift_trap(0x100CE3B5u, "int1 ");
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100CE3B6: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x3E5EA969)); /* 0x100CE3BB: mov al, byte ptr [0x3e5ea969] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100CE3A4; /* 0x100CE3C4: jle 0x100ce3a4 */
L_100CE3C6:
    SET_HI8(ebx, MEM8(eax + eax)); /* 0x100CE3C6: mov bh, byte ptr [eax + eax] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100CE3CB: nop  */
    /* cmp LO8(edx), HI8(ebx) */ /* 0x100CE3CC: cmp dl, bh */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(ebx), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CE3CE: adc byte ptr [ebx], bh */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x100CE3D2: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100CE3D4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x39)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax + 0x39)); /* 0x100CE3D5: and ch, byte ptr [eax + 0x39] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CE3D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100CE3DA: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((HI8(ebx) | MEM8(ecx))) << 24; _flag_b = (uint32_t)((HI8(ebx) | MEM8(ecx))) << 24;
    SET_HI8(ebx, HI8(ebx) | MEM8(ecx)); /* 0x100CE3DC: or bh, byte ptr [ecx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ITAIL(0x100CE3DEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100CE950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CE950u);

L_100CE950:
    PUSH32(esp, ebp); /* 0x100CE950: push ebp */
    ebp = esp; /* 0x100CE951: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CE953: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CE956: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CE957: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CE95C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CE95D: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CE95E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CEA4B; /* 0x100CE961: je 0x100cea4b */
L_100CE967:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CE967: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CEA3B; /* 0x100CE968: je 0x100cea3b */
L_100CE96E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CE96E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CEA36; /* 0x100CE96F: je 0x100cea36 */
L_100CE975:
    eax = ebp + 0x8; /* 0x100CE975: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CE978: push eax */
    RECOMP_CALL(sub_100CDF58); /* 0x100CE979: call 0x100cdf58 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065BF8)); /* 0x100CE97E: fld qword ptr [0x10065bf8] */
    fp_push(_st[0]); /* 0x100CE984: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CE986: fchs  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CE988: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100CE98B: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x100CE98C: mov ecx, dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE98F: fcom st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100CE991: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE993: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CE995: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CE997: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CE9B6; /* 0x100CE99A: jne 0x100ce9b6 */
L_100CE99C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CE99C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CE99E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CE9A0: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CE9A2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CE9B8; /* 0x100CE9A5: jp 0x100ce9b8 */
L_100CE9A7:
    /* test LO8(ecx), 1 */ /* 0x100CE9A7: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CEA31; /* 0x100CE9AA: je 0x100cea31 */
L_100CE9B0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CE9B0: fstp st(0) */
    fp_push(1.0); /* 0x100CE9B2: fld1  */
    goto L_100CEA31; /* 0x100CE9B4: jmp 0x100cea31 */
L_100CE9B6:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CE9B6: fstp st(1) */
L_100CE9B8:
    fp_push(_st[0]); /* 0x100CE9B8: fld st(0) */
    _st[0] *= _st[1]; /* 0x100CE9BA: fmul st(1) */
    /* test LO8(ecx), 1 */ /* 0x100CE9BC: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CE9FB; /* 0x100CE9BF: je 0x100ce9fb */
L_100CE9C1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CE9C1: fstp st(1) */
    fp_push(*(double*)ADDR(0x10064D50)); /* 0x100CE9C3: fld qword ptr [0x10064d50] */
    _st[0] *= _st[1]; /* 0x100CE9C9: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D78); /* 0x100CE9CB: fsub qword ptr [0x10064d78] */
    _st[0] *= _st[1]; /* 0x100CE9D1: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064D88); /* 0x100CE9D3: fadd qword ptr [0x10064d88] */
    _st[0] *= _st[1]; /* 0x100CE9D9: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DA0); /* 0x100CE9DB: fsub qword ptr [0x10064da0] */
    _st[0] *= _st[1]; /* 0x100CE9E1: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064DB8); /* 0x100CE9E3: fadd qword ptr [0x10064db8] */
    _st[0] *= _st[1]; /* 0x100CE9E9: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DE0); /* 0x100CE9EB: fsub qword ptr [0x10064de0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CE9F1: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100CE9F3: fadd qword ptr [0x10067cd8] */
    goto L_100CEA31; /* 0x100CE9F9: jmp 0x100cea31 */
L_100CE9FB:
    fp_push(*(double*)ADDR(0x10064D48)); /* 0x100CE9FB: fld qword ptr [0x10064d48] */
    _st[0] *= _st[1]; /* 0x100CEA01: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D68); /* 0x100CEA03: fsub qword ptr [0x10064d68] */
    _st[0] *= _st[1]; /* 0x100CEA09: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064D80); /* 0x100CEA0B: fadd qword ptr [0x10064d80] */
    _st[0] *= _st[1]; /* 0x100CEA11: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064D90); /* 0x100CEA13: fsub qword ptr [0x10064d90] */
    _st[0] *= _st[1]; /* 0x100CEA19: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064DB0); /* 0x100CEA1B: fadd qword ptr [0x10064db0] */
    _st[0] *= _st[1]; /* 0x100CEA21: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DD0); /* 0x100CEA23: fsub qword ptr [0x10064dd0] */
    fp_xch(1); /* 0x100CEA29: fxch st(1) */
    _st[0] *= _st[2]; /* 0x100CEA2B: fmul st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CEA2D: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CEA2F: faddp st(1) */
L_100CEA31:
    /* test LO8(ecx), 2 */ /* 0x100CEA31: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100CEA5C; /* 0x100CEA34: jmp 0x100cea5c */
L_100CEA36:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEA36: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CEA39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEA3A: ret  */
L_100CEA3B:
    PUSH32(esp, 1); /* 0x100CEA3B: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEA3D: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100CEA42: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100CEA48: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100CEA49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEA4A: ret  */
L_100CEA4B:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x100CEA4B: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CEA55; /* 0x100CEA4F: je 0x100cea55 */
L_100CEA51:
    fp_push(1.0); /* 0x100CEA51: fld1  */
    goto L_100CEA58; /* 0x100CEA53: jmp 0x100cea58 */
L_100CEA55:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEA55: fld qword ptr [ebp + 8] */
L_100CEA58:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x100CEA58: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100CEA5C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100CEA60; /* 0x100CEA5C: je 0x100cea60 */
L_100CEA5E:
    _st[0] = -_st[0]; /* 0x100CEA5E: fchs  */
L_100CEA60:
    ebp = POP32_VAL(esp); /* 0x100CEA60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEA61: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CEA62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEA62u);

L_100CEA62:
    PUSH32(esp, ebp); /* 0x100CEA62: push ebp */
    ebp = esp; /* 0x100CEA63: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CEA65: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CEA68: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CEA6B: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEA6F: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEA72: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036786); /* 0x100CEA75: call 0x10036786 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CEA7A: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CEA7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEA7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CEA7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEA7Fu);

L_100CEA7F:
    PUSH32(esp, ebp); /* 0x100CEA7F: push ebp */
    ebp = esp; /* 0x100CEA80: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CEA82: push ecx */
    eax = ebp + 0x8; /* 0x100CEA83: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CEA86: push eax */
    eax = ebp + (-0x4); /* 0x100CEA87: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CEA8A: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CEA8B: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CEA90: movsx eax, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CEA94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CEA95: pop ecx */
    PUSH32(esp, 0x35u); /* 0x100CEA96: push 0x35 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100CEA98: cdq  */
    ecx = POP32_VAL(esp); /* 0x100CEA99: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100CEA9A: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = eax * 2 + 0x5; /* 0x100CEA9C: lea eax, [eax*2 + 5] */
    /* cmp eax, 6 */ /* 0x100CEAA3: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CEAAB; /* 0x100CEAA6: jbe 0x100ceaab */
L_100CEAA8:
    PUSH32(esp, 6); /* 0x100CEAA8: push 6 */
    eax = POP32_VAL(esp); /* 0x100CEAAA: pop eax */
L_100CEAAB:
    esp = ebp; /* 0x100CEAAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CEAAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEAAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CEAAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEAAFu);

L_100CEAAF:
    PUSH32(esp, ebp); /* 0x100CEAAF: push ebp */
    ebp = esp; /* 0x100CEAB0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100CEAB2: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x100CEAB5: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEAB7: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100CEABA: fdiv st(1), st(0) */
    fp_xch(1); /* 0x100CEABC: fxch st(1) */
    PUSH32(esp, 0); /* 0x100CEABE: push 0 */
    PUSH32(esp, ecx); /* 0x100CEAC0: push ecx */
    PUSH32(esp, ecx); /* 0x100CEAC1: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100CEAC2: fstp qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEAC5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF701); /* 0x100CEAC8: call 0x100cf701 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100CEACD: fld1  */
    eax = ebp + (-0xC); /* 0x100CEACF: lea eax, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CEAD2: fsubp st(1) */
    PUSH32(esp, eax); /* 0x100CEAD4: push eax */
    eax = ebp + (-0x4); /* 0x100CEAD5: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CEAD8: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100CEAD9: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEADC: fld qword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(0x10063BD0); /* 0x100CEADF: fsub qword ptr [0x10063bd0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CEAE5: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100CEAE8: fld qword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x100CEAEB: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CEAED: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CEAEF: fstp qword ptr [ebp + 8] */
    RECOMP_CALL(sub_100D6993); /* 0x100CEAF2: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CEAF7: fld qword ptr [ebp - 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CEAFA: movsx eax, word ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x100CEAFE: fmul qword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100CEB01: push eax */
    eax = ebp + (-0xC); /* 0x100CEB02: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100CEB05: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CEB06: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100D6871); /* 0x100CEB09: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CEB0E: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100CEB11: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100CEB3D; /* 0x100CEB14: jns 0x100ceb3d */
L_100CEB16:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEB16: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10064D98)); /* 0x100CEB19: fld qword ptr [0x10064d98] */
    _st[0] *= _st[1]; /* 0x100CEB1F: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10064DA8); /* 0x100CEB21: fsub qword ptr [0x10064da8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CEB27: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10064DC0); /* 0x100CEB29: fadd qword ptr [0x10064dc0] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x100CEB2F: fmul qword ptr [ebp - 0x14] */
    _st[0] += *(double*)ADDR(0x10064DD8); /* 0x100CEB32: fadd qword ptr [0x10064dd8] */
    _st[0] += *(double*)ADDR(ebp + (-0xC)); /* 0x100CEB38: fadd qword ptr [ebp - 0xc] */
    goto L_100CEB48; /* 0x100CEB3B: jmp 0x100ceb48 */
L_100CEB3D:
    PUSH32(esp, 8); /* 0x100CEB3D: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEB3F: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CEB44: fld qword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100CEB47: pop ecx */
L_100CEB48:
    esp = ebp; /* 0x100CEB48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CEB4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEB4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CEB4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEB4Cu);

L_100CEB4C:
    PUSH32(esp, ebp); /* 0x100CEB4C: push ebp */
    ebp = esp; /* 0x100CEB4D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100CEB4F: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEB52: fld qword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x100CEB55: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100CEB58: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100CEB59: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100CEB5B: push esi */
    PUSH32(esp, eax); /* 0x100CEB5C: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CEB5D: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100C002B); /* 0x100CEB60: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEB65: fld qword ptr [ebp + 8] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CEB68: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CEB69: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CEB6A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100CEB6B: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CEB8C; /* 0x100CEB6D: je 0x100ceb8c */
L_100CEB6F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CEB6F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CEB7F; /* 0x100CEB70: je 0x100ceb7f */
L_100CEB72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CEB72: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CEBAB; /* 0x100CEB73: jne 0x100cebab */
L_100CEB75:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEB75: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEB77: fld qword ptr [ebp + 8] */
    goto L_100CED4E; /* 0x100CEB7A: jmp 0x100ced4e */
L_100CEB7F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEB7F: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CEB81: fld qword ptr [0x10065b88] */
    goto L_100CED4E; /* 0x100CEB87: jmp 0x100ced4e */
L_100CEB8C:
    fp_push(0.0); /* 0x100CEB8C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEB8E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEB90: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CEB92: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CEBAB; /* 0x100CEB95: jne 0x100cebab */
L_100CEB97:
    PUSH32(esp, 4); /* 0x100CEB97: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEB99: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEB9B: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CEBA0: fld qword ptr [0x10065b88] */
    goto L_100CED4D; /* 0x100CEBA6: jmp 0x100ced4d */
L_100CEBAB:
    fp_push(*(double*)ADDR(0x100E28C8)); /* 0x100CEBAB: fld qword ptr [0x100e28c8] */
    fp_push(_st[0]); /* 0x100CEBB1: fld st(0) */
    _st[0] = -_st[0]; /* 0x100CEBB3: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100CEBB5: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEBB7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CEBB9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CEC04; /* 0x100CEBBC: jne 0x100cec04 */
L_100CEBBE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEBBE: fstp st(0) */
    _st[0] -= *(double*)ADDR(ebp + (-0xC)); /* 0x100CEBC0: fsub qword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x100CEBC3: push esi */
    PUSH32(esp, esi); /* 0x100CEBC4: push esi */
    PUSH32(esp, ecx); /* 0x100CEBC5: push ecx */
    PUSH32(esp, ecx); /* 0x100CEBC6: push ecx */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100CEBC7: fmul qword ptr [0x10063bf8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEBCD: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CE950); /* 0x100CEBD0: call 0x100ce950 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100CEBD5: fmul qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CEBD8: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = *(double*)ADDR(0x10063BF8) / _st[0]; /* 0x100CEBDB: fdivr qword ptr [0x10063bf8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEBE1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF701); /* 0x100CEBE4: call 0x100cf701 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100CEBE9: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEBEC: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CEBEF: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100CEBF2: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEBF4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CEAAF); /* 0x100CEBF7: call 0x100ceaaf */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x14)) - _st[0]; /* 0x100CEBFC: fsubr qword ptr [ebp - 0x14] */
    goto L_100CED4C; /* 0x100CEBFF: jmp 0x100ced4c */
L_100CEC04:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEC04: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC06: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CEC08: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CEC1C; /* 0x100CEC0B: jp 0x100cec1c */
L_100CEC0D:
    PUSH32(esp, ecx); /* 0x100CEC0D: push ecx */
    PUSH32(esp, ecx); /* 0x100CEC0E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEC0F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CEAAF); /* 0x100CEC12: call 0x100ceaaf */
    RECOMP_FLAGS_IN();
    goto L_100CED4C; /* 0x100CEC17: jmp 0x100ced4c */
L_100CEC1C:
    edx = esi; /* 0x100CEC1C: mov edx, esi */
    ecx = esi; /* 0x100CEC1E: mov ecx, esi */
L_100CEC20:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x100CED78)); /* 0x100CEC20: fcom qword ptr [ecx + 0x100ced78] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC26: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CEC28: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CEC3A; /* 0x100CEC2B: jne 0x100cec3a */
L_100CEC2D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x100CED80)); /* 0x100CEC2D: fcom qword ptr [ecx + 0x100ced80] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC33: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CEC35: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CEC46; /* 0x100CEC38: jnp 0x100cec46 */
L_100CEC3A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x100CEC3A: add ecx, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100CEC3D: inc edx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x1B8u */ /* 0x100CEC3E: cmp ecx, 0x1b8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CEC20; /* 0x100CEC44: jb 0x100cec20 */
L_100CEC46:
    /* cmp edx, 0xBu */ /* 0x100CEC46: cmp edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100CEC78; /* 0x100CEC49: jae 0x100cec78 */
L_100CEC4B:
    eax = (uint32_t)((int32_t)edx * (int32_t)0x28u); /* 0x100CEC4B: imul eax, edx, 0x28 */
    _st[0] -= *(double*)ADDR(eax + 0x100CED88); /* 0x100CEC4E: fsub qword ptr [eax + 0x100ced88] */
    PUSH32(esp, MEM32(eax + 0x100CED9C)); /* 0x100CEC54: push dword ptr [eax + 0x100ced9c] */
    _st[0] -= *(double*)ADDR(eax + 0x100CED90); /* 0x100CEC5A: fsub qword ptr [eax + 0x100ced90] */
    PUSH32(esp, MEM32(eax + 0x100CED98)); /* 0x100CEC60: push dword ptr [eax + 0x100ced98] */
    PUSH32(esp, ecx); /* 0x100CEC66: push ecx */
    PUSH32(esp, ecx); /* 0x100CEC67: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEC68: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CEC6B: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CEC70: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CED4E; /* 0x100CEC73: jmp 0x100ced4e */
L_100CEC78:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064DF0)); /* 0x100CEC78: fcom qword ptr [0x10064df0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC7E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CEC80: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CECF4; /* 0x100CEC83: jne 0x100cecf4 */
L_100CEC85:
    fp_push(*(double*)ADDR(0x10063C98)); /* 0x100CEC85: fld qword ptr [0x10063c98] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEC8B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC8D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CEC8F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CECF4; /* 0x100CEC92: jne 0x100cecf4 */
L_100CEC94:
    ecx = 0x100CED58u; /* 0x100CEC94: mov ecx, 0x100ced58 */
L_100CEC99:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100CEC99: fcom qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEC9B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CEC9D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CECAB; /* 0x100CECA0: jnp 0x100cecab */
L_100CECA2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100CECA2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100CECA3: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x100CECA6: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100CEC99; /* 0x100CECA9: jb 0x100cec99 */
L_100CECAB:
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x100CECAB: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x100CECAB: shl esi, 5 */
    PUSH32(esp, MEM32(esi + 0x100CED6C)); /* 0x100CECAE: push dword ptr [esi + 0x100ced6c] */
    _st[0] -= *(double*)ADDR(esi + 0x100CED60); /* 0x100CECB4: fsub qword ptr [esi + 0x100ced60] */
    PUSH32(esp, MEM32(esi + 0x100CED68)); /* 0x100CECBA: push dword ptr [esi + 0x100ced68] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x100CECC0: fst qword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x100CECC3: push ecx */
    PUSH32(esp, ecx); /* 0x100CECC4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CECC5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CECC8: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CECCD: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100CECD0: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100CECD3: fld qword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(esi + 0x100CED74)); /* 0x100CECD6: push dword ptr [esi + 0x100ced74] */
    PUSH32(esp, MEM32(esi + 0x100CED70)); /* 0x100CECDC: push dword ptr [esi + 0x100ced70] */
    PUSH32(esp, ecx); /* 0x100CECE2: push ecx */
    PUSH32(esp, ecx); /* 0x100CECE3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CECE4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100CECE7: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x1C)) / _st[0]; /* 0x100CECEC: fdivr qword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CECEF: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CED4E; /* 0x100CECF2: jmp 0x100ced4e */
L_100CECF4:
    eax = ebp + (-0x4); /* 0x100CECF4: lea eax, [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CECF7: fstp st(0) */
    PUSH32(esp, eax); /* 0x100CECF9: push eax */
    eax = ebp + 0x8; /* 0x100CECFA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CECFD: push eax */
    RECOMP_CALL(sub_100D2A78); /* 0x100CECFE: call 0x100d2a78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CED03: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CED04: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CED05: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CED08: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CED0B: push esi */
    PUSH32(esp, ecx); /* 0x100CED0C: push ecx */
    _st[0] = fabs(_st[0]); /* 0x100CED0D: fabs  */
    PUSH32(esp, ecx); /* 0x100CED0F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CED10: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF701); /* 0x100CED13: call 0x100cf701 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x100CED18: movsx eax, word ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100CED1C: fchs  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100CED1E: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100CED20: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x100CED23: mov dword ptr [ebp + 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x100CED26: fild dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(0x10064D70)); /* 0x100CED29: fld qword ptr [0x10064d70] */
    _st[0] *= _st[1]; /* 0x100CED2F: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CED31: faddp st(2) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CED33: fmul qword ptr [0x10064de8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CED39: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CED3B: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CED3E: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CED41: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100CED44: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100CED49: fadd qword ptr [ebp + 8] */
L_100CED4C:
    ecx = POP32_VAL(esp); /* 0x100CED4C: pop ecx */
L_100CED4D:
    ecx = POP32_VAL(esp); /* 0x100CED4D: pop ecx */
L_100CED4E:
    esi = POP32_VAL(esp); /* 0x100CED4E: pop esi */
    esp = ebp; /* 0x100CED4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CED51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CED52: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CED58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CED58u);

L_100CED58:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CED58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CED5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CED5C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100CED5E: clc  */
    void_lift_trap(0x100CED5Fu, "aas ");
    void_lift_trap(0x100CED60u, "lcall 0xf599, 0x99999999");
    void_lift_trap(0x100CED67u, "aas ");
    MEM8(eax + 0x6) = (uint8_t)(LO8(edx)); /* 0x100CED68: mov byte ptr [eax + 6], dl */
    { uint32_t _aa = MEM8(eax + eax), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100CED6B: adc byte ptr [eax + eax], cl */
      MEM8(eax + eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100CED6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100CED70u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100CEF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEF30u);

L_100CEF30:
    PUSH32(esp, ebp); /* 0x100CEF30: push ebp */
    ebp = esp; /* 0x100CEF31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CEF33: push ecx */
    PUSH32(esp, ecx); /* 0x100CEF34: push ecx */
    eax = ebp + 0x8; /* 0x100CEF35: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CEF38: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CEF39: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CEF3E: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CEF3F: pop ecx */
    /* test eax, eax */ /* 0x100CEF40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CEFA4; /* 0x100CEF42: je 0x100cefa4 */
L_100CEF44:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CEF4B; /* 0x100CEF44: jle 0x100cef4b */
L_100CEF46:
    /* cmp eax, 2 */ /* 0x100CEF46: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CEF9C; /* 0x100CEF49: jle 0x100cef9c */
L_100CEF4B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEF4B: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CEF4E: push ecx */
    PUSH32(esp, ecx); /* 0x100CEF4F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CEF50: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFBEF); /* 0x100CEF53: call 0x100cfbef */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CEF58: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CEF5B: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CEF5E: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEF61: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEF63: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CEF65: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CEF77; /* 0x100CEF68: jnp 0x100cef77 */
L_100CEF6A:
    PUSH32(esp, 0x20u); /* 0x100CEF6A: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEF6C: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEF6E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CEF73: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100CEF76: pop ecx */
L_100CEF77:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CEF77: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEF7D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CEF7F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CEF9A; /* 0x100CEF82: jne 0x100cef9a */
L_100CEF84:
    fp_push(*(double*)ADDR(0x10065808)); /* 0x100CEF84: fld qword ptr [0x10065808] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEF8A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEF8C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CEF8E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CEF9A; /* 0x100CEF91: jne 0x100cef9a */
L_100CEF93:
    RECOMP_CALL(sub_10051B5C); /* 0x100CEF93: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    goto L_100CEFA8; /* 0x100CEF98: jmp 0x100cefa8 */
L_100CEF9A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEF9A: fstp st(0) */
L_100CEF9C:
    PUSH32(esp, 1); /* 0x100CEF9C: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEF9E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CEFA3: pop ecx */
L_100CEFA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CEFA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CEFA6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CEFA8:
    esp = ebp; /* 0x100CEFA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CEFAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CEFAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CEFAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CEFACu);

L_100CEFAC:
    PUSH32(esp, ebp); /* 0x100CEFAC: push ebp */
    ebp = esp; /* 0x100CEFAD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CEFAF: push ecx */
    eax = ebp + 0x8; /* 0x100CEFB0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CEFB3: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CEFB4: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CEFB9: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CEFBA: pop ecx */
    /* test eax, eax */ /* 0x100CEFBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF021; /* 0x100CEFBD: je 0x100cf021 */
L_100CEFBF:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CEFC6; /* 0x100CEFBF: jle 0x100cefc6 */
L_100CEFC1:
    /* cmp eax, 2 */ /* 0x100CEFC1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF019; /* 0x100CEFC4: jle 0x100cf019 */
L_100CEFC6:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CEFC6: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CEFC9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CEFCA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CFC13); /* 0x100CEFCD: call 0x100cfc13 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CEFD2: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CEFD5: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100CEFD8: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CEFDA: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CEFDD: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEFDF: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CEFE1: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CEFE2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CEFF4; /* 0x100CEFE5: jnp 0x100ceff4 */
L_100CEFE7:
    PUSH32(esp, 0x20u); /* 0x100CEFE7: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CEFE9: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CEFEB: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CEFF0: fld dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CEFF3: pop ecx */
L_100CEFF4:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CEFF4: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CEFFA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CEFFC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF017; /* 0x100CEFFF: jne 0x100cf017 */
L_100CF001:
    fp_push(*(float*)&MEM32(0x10065818)); /* 0x100CF001: fld dword ptr [0x10065818] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF007: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF009: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF00B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF017; /* 0x100CF00E: jne 0x100cf017 */
L_100CF010:
    RECOMP_CALL(sub_10051B5C); /* 0x100CF010: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    goto L_100CF025; /* 0x100CF015: jmp 0x100cf025 */
L_100CF017:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF017: fstp st(0) */
L_100CF019:
    PUSH32(esp, 1); /* 0x100CF019: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF01B: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF020: pop ecx */
L_100CF021:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF021: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CF023: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF025:
    esp = ebp; /* 0x100CF025: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF027: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF028: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF029(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF029u);

L_100CF029:
    PUSH32(esp, ebp); /* 0x100CF029: push ebp */
    ebp = esp; /* 0x100CF02A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF02C: push ecx */
    PUSH32(esp, ecx); /* 0x100CF02D: push ecx */
    eax = ebp + 0x8; /* 0x100CF02E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF031: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CF032: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF037: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF038: pop ecx */
    /* test eax, eax */ /* 0x100CF039: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF09D; /* 0x100CF03B: je 0x100cf09d */
L_100CF03D:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CF044; /* 0x100CF03D: jle 0x100cf044 */
L_100CF03F:
    /* cmp eax, 2 */ /* 0x100CF03F: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF095; /* 0x100CF042: jle 0x100cf095 */
L_100CF044:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF044: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CF047: push ecx */
    PUSH32(esp, ecx); /* 0x100CF048: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF049: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFC35); /* 0x100CF04C: call 0x100cfc35 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CF051: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF054: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CF057: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF05A: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF05C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CF05E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CF070; /* 0x100CF061: jnp 0x100cf070 */
L_100CF063:
    PUSH32(esp, 0x20u); /* 0x100CF063: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF065: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF067: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CF06C: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100CF06F: pop ecx */
L_100CF070:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CF070: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF076: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF078: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF093; /* 0x100CF07B: jne 0x100cf093 */
L_100CF07D:
    fp_push(*(double*)ADDR(0x10065808)); /* 0x100CF07D: fld qword ptr [0x10065808] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF083: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF085: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF087: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF093; /* 0x100CF08A: jne 0x100cf093 */
L_100CF08C:
    RECOMP_CALL(sub_10051B5C); /* 0x100CF08C: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    goto L_100CF0A1; /* 0x100CF091: jmp 0x100cf0a1 */
L_100CF093:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF093: fstp st(0) */
L_100CF095:
    PUSH32(esp, 1); /* 0x100CF095: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF097: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF09C: pop ecx */
L_100CF09D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF09D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CF09F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF0A1:
    esp = ebp; /* 0x100CF0A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF0A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF0A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF0A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF0A5u);

    goto L_100CF0A5;
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CF0A5:
    PUSH32(esp, ebp); /* 0x100CF0A5: push ebp */
    ebp = esp; /* 0x100CF0A6: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CF0A8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF0AB: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CF0AC: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF0B1: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF0B2: pop ecx */
    /* test eax, eax */ /* 0x100CF0B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF0FC; /* 0x100CF0B5: je 0x100cf0fc */
L_100CF0B7:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CF0BE; /* 0x100CF0B7: jle 0x100cf0be */
L_100CF0B9:
    /* cmp eax, 2 */ /* 0x100CF0B9: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF0F4; /* 0x100CF0BC: jle 0x100cf0f4 */
L_100CF0BE:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF0BE: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CF0C1: push ecx */
    PUSH32(esp, ecx); /* 0x100CF0C2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF0C3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0A8A); /* 0x100CF0C6: call 0x100d0a8a */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100CF0CB: fst qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CF0CE: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF0D4: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CF0D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF0D7: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CF0D8: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF0F2; /* 0x100CF0DB: jne 0x100cf0f2 */
L_100CF0DD:
    fp_push(*(double*)ADDR(0x10065808)); /* 0x100CF0DD: fld qword ptr [0x10065808] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF0E3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF0E5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF0E7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF0F2; /* 0x100CF0EA: jne 0x100cf0f2 */
L_100CF0EC:
    ebp = POP32_VAL(esp); /* 0x100CF0EC: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B5C; /* 0x100CF0ED: jmp 0x10051b5c */
L_100CF0F2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF0F2: fstp st(0) */
L_100CF0F4:
    PUSH32(esp, 1); /* 0x100CF0F4: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF0F6: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF0FB: pop ecx */
L_100CF0FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF0FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CF0FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CF100: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF101: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF102(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF102u);

    goto L_100CF102;
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CF102:
    PUSH32(esp, ebp); /* 0x100CF102: push ebp */
    ebp = esp; /* 0x100CF103: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CF105: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF108: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CF109: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF10E: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF10F: pop ecx */
    /* test eax, eax */ /* 0x100CF110: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF15A; /* 0x100CF112: je 0x100cf15a */
L_100CF114:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CF11B; /* 0x100CF114: jle 0x100cf11b */
L_100CF116:
    /* cmp eax, 2 */ /* 0x100CF116: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF152; /* 0x100CF119: jle 0x100cf152 */
L_100CF11B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF11B: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CF11E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CF11F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100D0ADB); /* 0x100CF122: call 0x100d0adb */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CF127: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF12A: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CF12D: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF133: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CF135: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CF136: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF150; /* 0x100CF139: jne 0x100cf150 */
L_100CF13B:
    fp_push(*(float*)&MEM32(0x10065818)); /* 0x100CF13B: fld dword ptr [0x10065818] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF141: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF143: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF145: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF150; /* 0x100CF148: jne 0x100cf150 */
L_100CF14A:
    ebp = POP32_VAL(esp); /* 0x100CF14A: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B5C; /* 0x100CF14B: jmp 0x10051b5c */
L_100CF150:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF150: fstp st(0) */
L_100CF152:
    PUSH32(esp, 1); /* 0x100CF152: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF154: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF159: pop ecx */
L_100CF15A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF15A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CF15C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CF15E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF15F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF160u);

    goto L_100CF160;
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CF160:
    PUSH32(esp, ebp); /* 0x100CF160: push ebp */
    ebp = esp; /* 0x100CF161: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CF163: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF166: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CF167: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF16C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF16D: pop ecx */
    /* test eax, eax */ /* 0x100CF16E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF1B7; /* 0x100CF170: je 0x100cf1b7 */
L_100CF172:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CF179; /* 0x100CF172: jle 0x100cf179 */
L_100CF174:
    /* cmp eax, 2 */ /* 0x100CF174: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF1AF; /* 0x100CF177: jle 0x100cf1af */
L_100CF179:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF179: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CF17C: push ecx */
    PUSH32(esp, ecx); /* 0x100CF17D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF17E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0B2D); /* 0x100CF181: call 0x100d0b2d */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100CF186: fst qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065810)); /* 0x100CF189: fcom qword ptr [0x10065810] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF18F: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CF191: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF192: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CF193: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF1AD; /* 0x100CF196: jne 0x100cf1ad */
L_100CF198:
    fp_push(*(double*)ADDR(0x10065808)); /* 0x100CF198: fld qword ptr [0x10065808] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF19E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF1A0: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF1A2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF1AD; /* 0x100CF1A5: jne 0x100cf1ad */
L_100CF1A7:
    ebp = POP32_VAL(esp); /* 0x100CF1A7: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B5C; /* 0x100CF1A8: jmp 0x10051b5c */
L_100CF1AD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF1AD: fstp st(0) */
L_100CF1AF:
    PUSH32(esp, 1); /* 0x100CF1AF: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF1B1: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF1B6: pop ecx */
L_100CF1B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF1B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100CF1B9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CF1BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF1BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF1BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF1BDu);

L_100CF1BD:
    PUSH32(esp, ebp); /* 0x100CF1BD: push ebp */
    ebp = esp; /* 0x100CF1BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CF1C0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100CF1C3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF1C6: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CF1C7: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF1CC: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF1CD: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF1CE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF257; /* 0x100CF1D1: je 0x100cf257 */
L_100CF1D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF1D7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF1DD; /* 0x100CF1D8: je 0x100cf1dd */
L_100CF1DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF1DA: dec eax */
    _flag_k = FK_DEC;
    goto L_100CF1E8; /* 0x100CF1DB: jmp 0x100cf1e8 */
L_100CF1DD:
    eax = MEM32(ebp + 0xE); /* 0x100CF1DD: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CF1E0: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CF1E3: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF1E8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100CF257; /* 0x100CF1E8: je 0x100cf257 */
L_100CF1EA:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100CF1EA: fld qword ptr [0x10067ce8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF1F0: fld qword ptr [ebp + 8] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100CF1F3: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF1F6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF1F8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CF1FA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF213; /* 0x100CF1FD: jp 0x100cf213 */
L_100CF1FF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF1FF: fstp st(0) */
    PUSH32(esp, 1); /* 0x100CF201: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF203: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF205: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100CF20A: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100CF210: pop ecx */
    goto L_100CF25A; /* 0x100CF211: jmp 0x100cf25a */
L_100CF213:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF213: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF215: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF217: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CF219: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF232; /* 0x100CF21C: jp 0x100cf232 */
L_100CF21E:
    PUSH32(esp, 4); /* 0x100CF21E: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF220: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF222: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CF227: fld qword ptr [0x10065b48] */
    ecx = POP32_VAL(esp); /* 0x100CF22D: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF22E: fchs  */
    goto L_100CF25A; /* 0x100CF230: jmp 0x100cf25a */
L_100CF232:
    fp_push(1.0); /* 0x100CF232: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF234: faddp st(1) */
    PUSH32(esp, ecx); /* 0x100CF236: push ecx */
    PUSH32(esp, ecx); /* 0x100CF237: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CF238: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF23B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100CF23E: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CF243: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100CF246: fld st(0) */
    fp_push(1.0); /* 0x100CF248: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF24A: fsubp st(1) */
    ecx = POP32_VAL(esp); /* 0x100CF24C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF24D: pop ecx */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100CF24E: fsub qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100CF251: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF253: fsubp st(1) */
    goto L_100CF25A; /* 0x100CF255: jmp 0x100cf25a */
L_100CF257:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF257: fld qword ptr [ebp + 8] */
L_100CF25A:
    esp = ebp; /* 0x100CF25A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF25C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF25D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF25E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF25Eu);

L_100CF25E:
    PUSH32(esp, ebp); /* 0x100CF25E: push ebp */
    ebp = esp; /* 0x100CF25F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF261: push ecx */
    PUSH32(esp, ecx); /* 0x100CF262: push ecx */
    eax = ebp + 0x8; /* 0x100CF263: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF266: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CF267: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF26C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF26D: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF26E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF2FE; /* 0x100CF271: je 0x100cf2fe */
L_100CF277:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF277: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF27D; /* 0x100CF278: je 0x100cf27d */
L_100CF27A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF27A: dec eax */
    _flag_k = FK_DEC;
    goto L_100CF288; /* 0x100CF27B: jmp 0x100cf288 */
L_100CF27D:
    eax = MEM32(ebp + 0xA); /* 0x100CF27D: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100CF280: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CF283: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF288:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100CF2FE; /* 0x100CF288: je 0x100cf2fe */
L_100CF28A:
    fp_push(*(float*)&MEM32(0x10063D00)); /* 0x100CF28A: fld dword ptr [0x10063d00] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF290: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF293: fst dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF296: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF298: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CF29A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF2B3; /* 0x100CF29D: jp 0x100cf2b3 */
L_100CF29F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF29F: fstp st(0) */
    PUSH32(esp, 1); /* 0x100CF2A1: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF2A3: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF2A5: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CF2AA: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100CF2B0: pop ecx */
    goto L_100CF301; /* 0x100CF2B1: jmp 0x100cf301 */
L_100CF2B3:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF2B3: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF2B5: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF2B7: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CF2B9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF2D2; /* 0x100CF2BC: jp 0x100cf2d2 */
L_100CF2BE:
    PUSH32(esp, 4); /* 0x100CF2BE: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF2C0: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF2C2: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100CF2C7: fld dword ptr [0x10065b68] */
    ecx = POP32_VAL(esp); /* 0x100CF2CD: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF2CE: fchs  */
    goto L_100CF301; /* 0x100CF2D0: jmp 0x100cf301 */
L_100CF2D2:
    fp_push(1.0); /* 0x100CF2D2: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF2D4: faddp st(1) */
    PUSH32(esp, ecx); /* 0x100CF2D6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CF2D7: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF2DA: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CF2DD: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100CF2E0: call 0x100c20af */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF2E5: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100CF2E8: fld st(0) */
    fp_push(1.0); /* 0x100CF2EA: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF2EC: fsubp st(1) */
    ecx = POP32_VAL(esp); /* 0x100CF2EE: pop ecx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100CF2EF: fsub dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100CF2F2: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF2F4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF2F6: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF2F9: fld dword ptr [ebp - 8] */
    goto L_100CF301; /* 0x100CF2FC: jmp 0x100cf301 */
L_100CF2FE:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF2FE: fld dword ptr [ebp + 8] */
L_100CF301:
    esp = ebp; /* 0x100CF301: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF303: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF304: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF305(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF305u);

L_100CF305:
    PUSH32(esp, ebp); /* 0x100CF305: push ebp */
    ebp = esp; /* 0x100CF306: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CF308: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100CF30B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF30E: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CF30F: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF314: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF315: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF316: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF39F; /* 0x100CF319: je 0x100cf39f */
L_100CF31F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF31F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF325; /* 0x100CF320: je 0x100cf325 */
L_100CF322:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF322: dec eax */
    _flag_k = FK_DEC;
    goto L_100CF330; /* 0x100CF323: jmp 0x100cf330 */
L_100CF325:
    eax = MEM32(ebp + 0xE); /* 0x100CF325: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CF328: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CF32B: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF330:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100CF39F; /* 0x100CF330: je 0x100cf39f */
L_100CF332:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100CF332: fld qword ptr [0x10067ce8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF338: fld qword ptr [ebp + 8] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100CF33B: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF33E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF340: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CF342: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF35B; /* 0x100CF345: jp 0x100cf35b */
L_100CF347:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF347: fstp st(0) */
    PUSH32(esp, 1); /* 0x100CF349: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF34B: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF34D: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100CF352: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100CF358: pop ecx */
    goto L_100CF3A2; /* 0x100CF359: jmp 0x100cf3a2 */
L_100CF35B:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF35B: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF35D: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF35F: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100CF361: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF37A; /* 0x100CF364: jp 0x100cf37a */
L_100CF366:
    PUSH32(esp, 4); /* 0x100CF366: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF368: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF36A: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CF36F: fld qword ptr [0x10065b88] */
    ecx = POP32_VAL(esp); /* 0x100CF375: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF376: fchs  */
    goto L_100CF3A2; /* 0x100CF378: jmp 0x100cf3a2 */
L_100CF37A:
    fp_push(1.0); /* 0x100CF37A: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF37C: faddp st(1) */
    PUSH32(esp, ecx); /* 0x100CF37E: push ecx */
    PUSH32(esp, ecx); /* 0x100CF37F: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CF380: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF383: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100CF386: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CF38B: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100CF38E: fld st(0) */
    fp_push(1.0); /* 0x100CF390: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF392: fsubp st(1) */
    ecx = POP32_VAL(esp); /* 0x100CF394: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF395: pop ecx */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100CF396: fsub qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100CF399: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF39B: fsubp st(1) */
    goto L_100CF3A2; /* 0x100CF39D: jmp 0x100cf3a2 */
L_100CF39F:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF39F: fld qword ptr [ebp + 8] */
L_100CF3A2:
    esp = ebp; /* 0x100CF3A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF3A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF3A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF3A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF3A6u);

L_100CF3A6:
    PUSH32(esp, ebp); /* 0x100CF3A6: push ebp */
    ebp = esp; /* 0x100CF3A7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF3A9: push ecx */
    eax = ebp + 0x8; /* 0x100CF3AA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF3AD: push eax */
    eax = ebp + (-0x4); /* 0x100CF3AE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF3B1: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CF3B2: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF3B7: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF3B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF3B9: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF3BA: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF4D8; /* 0x100CF3BD: je 0x100cf4d8 */
L_100CF3C3:
    SET_LO16(ecx, MEM16(ebp + 0xE)); /* 0x100CF3C3: mov cx, word ptr [ebp + 0xe] */
    edx = 0x8000u; /* 0x100CF3C7: mov edx, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF3CC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF3DA; /* 0x100CF3CD: je 0x100cf3da */
L_100CF3CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF3CF: dec eax */
    _flag_k = FK_DEC;
L_100CF3D0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100CF3E1; /* 0x100CF3D0: jne 0x100cf3e1 */
L_100CF3D2:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF3D2: fld qword ptr [ebp + 8] */
    goto L_100CF4E8; /* 0x100CF3D5: jmp 0x100cf4e8 */
L_100CF3DA:
    eax = (uint32_t)LO16(ecx); /* 0x100CF3DA: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF3DD: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100CF3D0; /* 0x100CF3DF: jmp 0x100cf3d0 */
L_100CF3E1:
    eax = (uint32_t)LO16(ecx); /* 0x100CF3E1: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF3E4: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF3FA; /* 0x100CF3E6: je 0x100cf3fa */
L_100CF3E8:
    PUSH32(esp, 1); /* 0x100CF3E8: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF3EA: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100CF3EF: fld qword ptr [0x10065b58] */
    goto L_100CF4E7; /* 0x100CF3F5: jmp 0x100cf4e7 */
L_100CF3FA:
    fp_push(*(double*)ADDR(0x10065880)); /* 0x100CF3FA: fld qword ptr [0x10065880] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF400: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF403: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF405: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF407: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CF409: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF40C: mov ax, word ptr [ebp - 4] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF418; /* 0x100CF410: jp 0x100cf418 */
L_100CF412:
    fp_push(_st[0]); /* 0x100CF412: fld st(0) */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF414: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF416: faddp st(1) */
L_100CF418:
    fp_push(_st[0]); /* 0x100CF418: fld st(0) */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF41A: cwde  */
    fp_push(1.0); /* 0x100CF41B: fld1  */
    _st[1] -= _st[0]; /* 0x100CF41D: fsub st(1), st(0) */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CF41F: mov dword ptr [ebp - 4], eax */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF422: faddp st(2) */
    eax = MEM32(ebp + 0x10); /* 0x100CF424: mov eax, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x100CF427: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100CF429: fdivrp st(2) */
    fp_push(_st[1]); /* 0x100CF42B: fld st(1) */
    _st[0] *= _st[2]; /* 0x100CF42D: fmul st(2) */
    fp_push(*(double*)ADDR(0x10065838)); /* 0x100CF42F: fld qword ptr [0x10065838] */
    _st[0] *= _st[1]; /* 0x100CF435: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065840); /* 0x100CF437: fadd qword ptr [0x10065840] */
    _st[0] *= _st[1]; /* 0x100CF43D: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065848); /* 0x100CF43F: fadd qword ptr [0x10065848] */
    _st[0] *= _st[1]; /* 0x100CF445: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065850); /* 0x100CF447: fadd qword ptr [0x10065850] */
    _st[0] *= _st[1]; /* 0x100CF44D: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065858); /* 0x100CF44F: fadd qword ptr [0x10065858] */
    _st[0] *= _st[1]; /* 0x100CF455: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065868); /* 0x100CF457: fadd qword ptr [0x10065868] */
    _st[0] *= _st[1]; /* 0x100CF45D: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065878); /* 0x100CF45F: fadd qword ptr [0x10065878] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF465: fmulp st(1) */
    fp_push(_st[1]); /* 0x100CF467: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CF469: fsubrp st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100CF46B: fmulp st(2) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100CF46D: fild dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x100CF470: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF48A; /* 0x100CF472: jne 0x100cf48a */
L_100CF474:
    fp_push(*(double*)ADDR(0x10064D70)); /* 0x100CF474: fld qword ptr [0x10064d70] */
    _st[0] *= _st[1]; /* 0x100CF47A: fmul st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF47C: fsubp st(3) */
    fp_xch(1); /* 0x100CF47E: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100CF480: fsubrp st(2) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CF482: fmul qword ptr [0x10064de8] */
    goto L_100CF4D4; /* 0x100CF488: jmp 0x100cf4d4 */
L_100CF48A:
    fp_push(_st[1]); /* 0x100CF48A: fld st(1) */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_100CF4BA; /* 0x100CF48C: jle 0x100cf4ba */
L_100CF48E:
    _st[0] *= *(double*)ADDR(0x10065828); /* 0x100CF48E: fmul qword ptr [0x10065828] */
    fp_xch(3); /* 0x100CF494: fxch st(3) */
    _st[0] *= *(double*)ADDR(0x10063CB0); /* 0x100CF496: fmul qword ptr [0x10063cb0] */
    fp_push(_st[1]); /* 0x100CF49C: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10065830); /* 0x100CF49E: fmul qword ptr [0x10065830] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF4A4: fsubp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF4A6: fsubp st(3) */
    fp_xch(1); /* 0x100CF4A8: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10065870); /* 0x100CF4AA: fmul qword ptr [0x10065870] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF4B0: faddp st(2) */
    _st[0] *= *(double*)ADDR(0x10065860); /* 0x100CF4B2: fmul qword ptr [0x10065860] */
    goto L_100CF4D4; /* 0x100CF4B8: jmp 0x100cf4d4 */
L_100CF4BA:
    _st[0] *= *(double*)ADDR(0x10065820); /* 0x100CF4BA: fmul qword ptr [0x10065820] */
    fp_xch(3); /* 0x100CF4C0: fxch st(3) */
    _st[0] *= *(double*)ADDR(0x10064508); /* 0x100CF4C2: fmul qword ptr [0x10064508] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF4C8: fsubp st(3) */
    fp_xch(1); /* 0x100CF4CA: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064530); /* 0x100CF4CC: fmul qword ptr [0x10064530] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF4D2: faddp st(2) */
L_100CF4D4:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF4D4: faddp st(1) */
    goto L_100CF4E8; /* 0x100CF4D6: jmp 0x100cf4e8 */
L_100CF4D8:
    PUSH32(esp, 4); /* 0x100CF4D8: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF4DA: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CF4DF: fld qword ptr [0x10065b48] */
    _st[0] = -_st[0]; /* 0x100CF4E5: fchs  */
L_100CF4E7:
    ecx = POP32_VAL(esp); /* 0x100CF4E7: pop ecx */
L_100CF4E8:
    esp = ebp; /* 0x100CF4E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF4EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF4EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF4EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF4ECu);

L_100CF4EC:
    PUSH32(esp, ebp); /* 0x100CF4EC: push ebp */
    ebp = esp; /* 0x100CF4ED: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF4EF: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10065838)); /* 0x100CF4F2: fld qword ptr [0x10065838] */
    _st[0] *= _st[1]; /* 0x100CF4F8: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065840); /* 0x100CF4FA: fadd qword ptr [0x10065840] */
    _st[0] *= _st[1]; /* 0x100CF500: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065848); /* 0x100CF502: fadd qword ptr [0x10065848] */
    _st[0] *= _st[1]; /* 0x100CF508: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065850); /* 0x100CF50A: fadd qword ptr [0x10065850] */
    _st[0] *= _st[1]; /* 0x100CF510: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065858); /* 0x100CF512: fadd qword ptr [0x10065858] */
    _st[0] *= _st[1]; /* 0x100CF518: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065868); /* 0x100CF51A: fadd qword ptr [0x10065868] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF520: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10065878); /* 0x100CF522: fadd qword ptr [0x10065878] */
    ebp = POP32_VAL(esp); /* 0x100CF528: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF529: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF52A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF52Au);

L_100CF52A:
    PUSH32(esp, ebp); /* 0x100CF52A: push ebp */
    ebp = esp; /* 0x100CF52B: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF52D: fld qword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100CF530: push -1 */
    PUSH32(esp, ecx); /* 0x100CF532: push ecx */
    PUSH32(esp, ecx); /* 0x100CF533: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF534: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF3A6); /* 0x100CF537: call 0x100cf3a6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CF53C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CF53F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF540: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF541u);

L_100CF541:
    PUSH32(esp, ebp); /* 0x100CF541: push ebp */
    ebp = esp; /* 0x100CF542: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF544: push ecx */
    PUSH32(esp, ecx); /* 0x100CF545: push ecx */
    eax = ebp + 0x8; /* 0x100CF546: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF549: push eax */
    eax = ebp + (-0x4); /* 0x100CF54A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF54D: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CF54E: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF553: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF554: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF555: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF556: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF692; /* 0x100CF559: je 0x100cf692 */
L_100CF55F:
    SET_LO16(ecx, MEM16(ebp + 0xA)); /* 0x100CF55F: mov cx, word ptr [ebp + 0xa] */
    edx = 0x8000u; /* 0x100CF563: mov edx, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF568: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF576; /* 0x100CF569: je 0x100cf576 */
L_100CF56B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF56B: dec eax */
    _flag_k = FK_DEC;
L_100CF56C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100CF57D; /* 0x100CF56C: jne 0x100cf57d */
L_100CF56E:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF56E: fld dword ptr [ebp + 8] */
    goto L_100CF6A2; /* 0x100CF571: jmp 0x100cf6a2 */
L_100CF576:
    eax = (uint32_t)LO16(ecx); /* 0x100CF576: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF579: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100CF56C; /* 0x100CF57B: jmp 0x100cf56c */
L_100CF57D:
    eax = (uint32_t)LO16(ecx); /* 0x100CF57D: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF580: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF596; /* 0x100CF582: je 0x100cf596 */
L_100CF584:
    PUSH32(esp, 1); /* 0x100CF584: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF586: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100CF58B: fld dword ptr [0x10065b78] */
    goto L_100CF6A1; /* 0x100CF591: jmp 0x100cf6a1 */
L_100CF596:
    fp_push(*(float*)&MEM32(0x10065888)); /* 0x100CF596: fld dword ptr [0x10065888] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF59C: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF59F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF5A1: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF5A3: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CF5A5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF5A8: mov ax, word ptr [ebp - 4] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF5B8; /* 0x100CF5AC: jp 0x100cf5b8 */
L_100CF5AE:
    _st[0] += _st[0]; /* 0x100CF5AE: fadd st(0), st(0) */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF5B0: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CF5B2: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF5B5: fld dword ptr [ebp + 8] */
L_100CF5B8:
    fp_push(_st[0]); /* 0x100CF5B8: fld st(0) */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF5BA: cwde  */
    fp_push(1.0); /* 0x100CF5BB: fld1  */
    _st[1] -= _st[0]; /* 0x100CF5BD: fsub st(1), st(0) */
    fp_xch(1); /* 0x100CF5BF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF5C1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF5C4: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100CF5C7: fld st(0) */
    fp_xch(3); /* 0x100CF5C9: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF5CB: faddp st(2) */
    fp_xch(2); /* 0x100CF5CD: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100CF5CF: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CF5D1: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF5D4: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100CF5D7: fld st(0) */
    _st[0] *= _st[1]; /* 0x100CF5D9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF5DB: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x100CF5DE: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF5E0: fld dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x10065890)); /* 0x100CF5E3: fld qword ptr [0x10065890] */
    _st[0] *= _st[1]; /* 0x100CF5E9: fmul st(1) */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CF5EB: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x100CF5EE: mov eax, dword ptr [ebp + 0xc] */
    _st[0] += *(double*)ADDR(0x10065898); /* 0x100CF5F1: fadd qword ptr [0x10065898] */
    fp_push(_st[1]); /* 0x100CF5F7: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF5F9: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100658A0); /* 0x100CF5FB: fadd qword ptr [0x100658a0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF601: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF603: fsubp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF605: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CF607: fstp dword ptr [ebp - 4] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x100CF60A: fild dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF60D: fstp dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x100CF610: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF634; /* 0x100CF612: jne 0x100cf634 */
L_100CF614:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF614: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF617: fld dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x10065070)); /* 0x100CF61A: fld qword ptr [0x10065070] */
    _st[0] *= _st[1]; /* 0x100CF620: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CF622: fsubp st(2) */
    fp_xch(2); /* 0x100CF624: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CF626: fsubrp st(1) */
    fp_xch(1); /* 0x100CF628: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CF62A: fmul qword ptr [0x10064de8] */
L_100CF630:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF630: faddp st(1) */
    goto L_100CF68A; /* 0x100CF632: jmp 0x100cf68a */
L_100CF634:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_100CF66A; /* 0x100CF634: jle 0x100cf66a */
L_100CF636:
    fp_push(*(double*)ADDR(0x100CF6B0)); /* 0x100CF636: fld qword ptr [0x100cf6b0] */
    _st[0] *= _st[1]; /* 0x100CF63C: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF63E: fld dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x100CF6C0); /* 0x100CF641: fmul qword ptr [0x100cf6c0] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF647: fld dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x100CF6B8)); /* 0x100CF64A: fld qword ptr [0x100cf6b8] */
    _st[0] *= _st[1]; /* 0x100CF650: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100CF652: fsubp st(2) */
    fp_xch(2); /* 0x100CF654: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CF656: fsubrp st(1) */
    fp_xch(2); /* 0x100CF658: fxch st(2) */
    _st[0] *= *(double*)ADDR(0x10065870); /* 0x100CF65A: fmul qword ptr [0x10065870] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF660: faddp st(2) */
    _st[0] *= *(double*)ADDR(0x10065860); /* 0x100CF662: fmul qword ptr [0x10065860] */
    RECOMP_BACKEDGE();
    goto L_100CF630; /* 0x100CF668: jmp 0x100cf630 */
L_100CF66A:
    fp_push(*(double*)ADDR(0x100CF6A8)); /* 0x100CF66A: fld qword ptr [0x100cf6a8] */
    _st[0] *= _st[1]; /* 0x100CF670: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF672: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x10064530)); /* 0x100CF675: fld qword ptr [0x10064530] */
    _st[1] *= _st[0]; /* 0x100CF67B: fmul st(1), st(0) */
    fp_xch(2); /* 0x100CF67D: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CF67F: fsubrp st(1) */
    fp_xch(2); /* 0x100CF681: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF683: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF685: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100CF687: fadd dword ptr [ebp - 8] */
L_100CF68A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CF68A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CF68D: fld dword ptr [ebp - 4] */
    goto L_100CF6A2; /* 0x100CF690: jmp 0x100cf6a2 */
L_100CF692:
    PUSH32(esp, 4); /* 0x100CF692: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF694: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100CF699: fld dword ptr [0x10065b68] */
    _st[0] = -_st[0]; /* 0x100CF69F: fchs  */
L_100CF6A1:
    ecx = POP32_VAL(esp); /* 0x100CF6A1: pop ecx */
L_100CF6A2:
    esp = ebp; /* 0x100CF6A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF6A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF6A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF6C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF6C8u);

L_100CF6C8:
    PUSH32(esp, ebp); /* 0x100CF6C8: push ebp */
    ebp = esp; /* 0x100CF6C9: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF6CB: fld dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10065890)); /* 0x100CF6CE: fld qword ptr [0x10065890] */
    _st[0] *= _st[1]; /* 0x100CF6D4: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065898); /* 0x100CF6D6: fadd qword ptr [0x10065898] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF6DC: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100658A0); /* 0x100CF6DE: fadd qword ptr [0x100658a0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CF6E4: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF6E7: fld dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CF6EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF6EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF6EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF6ECu);

L_100CF6EC:
    PUSH32(esp, ebp); /* 0x100CF6EC: push ebp */
    ebp = esp; /* 0x100CF6ED: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF6EF: fld dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100CF6F2: push -1 */
    PUSH32(esp, ecx); /* 0x100CF6F4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CF6F5: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF541); /* 0x100CF6F8: call 0x100cf541 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF6FD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF6FE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100CF6FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF700: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF701(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF701u);

L_100CF701:
    PUSH32(esp, ebp); /* 0x100CF701: push ebp */
    ebp = esp; /* 0x100CF702: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF704: push ecx */
    eax = ebp + 0x8; /* 0x100CF705: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF708: push eax */
    eax = ebp + (-0x4); /* 0x100CF709: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF70C: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CF70D: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF712: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF713: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF714: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF715: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF833; /* 0x100CF718: je 0x100cf833 */
L_100CF71E:
    SET_LO16(ecx, MEM16(ebp + 0xE)); /* 0x100CF71E: mov cx, word ptr [ebp + 0xe] */
    edx = 0x8000u; /* 0x100CF722: mov edx, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF727: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF735; /* 0x100CF728: je 0x100cf735 */
L_100CF72A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF72A: dec eax */
    _flag_k = FK_DEC;
L_100CF72B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100CF73C; /* 0x100CF72B: jne 0x100cf73c */
L_100CF72D:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF72D: fld qword ptr [ebp + 8] */
    goto L_100CF843; /* 0x100CF730: jmp 0x100cf843 */
L_100CF735:
    eax = (uint32_t)LO16(ecx); /* 0x100CF735: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF738: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100CF72B; /* 0x100CF73A: jmp 0x100cf72b */
L_100CF73C:
    eax = (uint32_t)LO16(ecx); /* 0x100CF73C: movzx eax, cx */
    /* test edx, eax */ /* 0x100CF73F: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF755; /* 0x100CF741: je 0x100cf755 */
L_100CF743:
    PUSH32(esp, 1); /* 0x100CF743: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF745: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100CF74A: fld qword ptr [0x10065b98] */
    goto L_100CF842; /* 0x100CF750: jmp 0x100cf842 */
L_100CF755:
    fp_push(*(double*)ADDR(0x10065880)); /* 0x100CF755: fld qword ptr [0x10065880] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF75B: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF75E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF760: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CF762: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100CF764: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF767: mov ax, word ptr [ebp - 4] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CF773; /* 0x100CF76B: jp 0x100cf773 */
L_100CF76D:
    fp_push(_st[0]); /* 0x100CF76D: fld st(0) */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF76F: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF771: faddp st(1) */
L_100CF773:
    fp_push(_st[0]); /* 0x100CF773: fld st(0) */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF775: cwde  */
    fp_push(1.0); /* 0x100CF776: fld1  */
    _st[1] -= _st[0]; /* 0x100CF778: fsub st(1), st(0) */
    MEM32(ebp + (-0x4)) = eax; /* 0x100CF77A: mov dword ptr [ebp - 4], eax */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF77D: faddp st(2) */
    eax = MEM32(ebp + 0x10); /* 0x100CF77F: mov eax, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x100CF782: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100CF784: fdivrp st(2) */
    fp_push(_st[1]); /* 0x100CF786: fld st(1) */
    _st[0] *= _st[2]; /* 0x100CF788: fmul st(2) */
    fp_push(*(double*)ADDR(0x10065838)); /* 0x100CF78A: fld qword ptr [0x10065838] */
    _st[0] *= _st[1]; /* 0x100CF790: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065840); /* 0x100CF792: fadd qword ptr [0x10065840] */
    _st[0] *= _st[1]; /* 0x100CF798: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065848); /* 0x100CF79A: fadd qword ptr [0x10065848] */
    _st[0] *= _st[1]; /* 0x100CF7A0: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065850); /* 0x100CF7A2: fadd qword ptr [0x10065850] */
    _st[0] *= _st[1]; /* 0x100CF7A8: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065858); /* 0x100CF7AA: fadd qword ptr [0x10065858] */
    _st[0] *= _st[1]; /* 0x100CF7B0: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065868); /* 0x100CF7B2: fadd qword ptr [0x10065868] */
    _st[0] *= _st[1]; /* 0x100CF7B8: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10065878); /* 0x100CF7BA: fadd qword ptr [0x10065878] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CF7C0: fmulp st(1) */
    fp_push(_st[1]); /* 0x100CF7C2: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CF7C4: fsubrp st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100CF7C6: fmulp st(2) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100CF7C8: fild dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x100CF7CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF7E5; /* 0x100CF7CD: jne 0x100cf7e5 */
L_100CF7CF:
    fp_push(*(double*)ADDR(0x10064D70)); /* 0x100CF7CF: fld qword ptr [0x10064d70] */
    _st[0] *= _st[1]; /* 0x100CF7D5: fmul st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF7D7: fsubp st(3) */
    fp_xch(1); /* 0x100CF7D9: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100CF7DB: fsubrp st(2) */
    _st[0] *= *(double*)ADDR(0x10064DE8); /* 0x100CF7DD: fmul qword ptr [0x10064de8] */
    goto L_100CF82F; /* 0x100CF7E3: jmp 0x100cf82f */
L_100CF7E5:
    fp_push(_st[1]); /* 0x100CF7E5: fld st(1) */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_100CF815; /* 0x100CF7E7: jle 0x100cf815 */
L_100CF7E9:
    _st[0] *= *(double*)ADDR(0x10065828); /* 0x100CF7E9: fmul qword ptr [0x10065828] */
    fp_xch(3); /* 0x100CF7EF: fxch st(3) */
    _st[0] *= *(double*)ADDR(0x10063CB0); /* 0x100CF7F1: fmul qword ptr [0x10063cb0] */
    fp_push(_st[1]); /* 0x100CF7F7: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10065830); /* 0x100CF7F9: fmul qword ptr [0x10065830] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CF7FF: fsubp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF801: fsubp st(3) */
    fp_xch(1); /* 0x100CF803: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10065870); /* 0x100CF805: fmul qword ptr [0x10065870] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF80B: faddp st(2) */
    _st[0] *= *(double*)ADDR(0x10065860); /* 0x100CF80D: fmul qword ptr [0x10065860] */
    goto L_100CF82F; /* 0x100CF813: jmp 0x100cf82f */
L_100CF815:
    _st[0] *= *(double*)ADDR(0x10065820); /* 0x100CF815: fmul qword ptr [0x10065820] */
    fp_xch(3); /* 0x100CF81B: fxch st(3) */
    _st[0] *= *(double*)ADDR(0x10064508); /* 0x100CF81D: fmul qword ptr [0x10064508] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x100CF823: fsubp st(3) */
    fp_xch(1); /* 0x100CF825: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10064530); /* 0x100CF827: fmul qword ptr [0x10064530] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100CF82D: faddp st(2) */
L_100CF82F:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CF82F: faddp st(1) */
    goto L_100CF843; /* 0x100CF831: jmp 0x100cf843 */
L_100CF833:
    PUSH32(esp, 4); /* 0x100CF833: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF835: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CF83A: fld qword ptr [0x10065b88] */
    _st[0] = -_st[0]; /* 0x100CF840: fchs  */
L_100CF842:
    ecx = POP32_VAL(esp); /* 0x100CF842: pop ecx */
L_100CF843:
    esp = ebp; /* 0x100CF843: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF845: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF846: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF847(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF847u);

L_100CF847:
    PUSH32(esp, ebp); /* 0x100CF847: push ebp */
    ebp = esp; /* 0x100CF848: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF84A: fld qword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100CF84D: push -1 */
    PUSH32(esp, ecx); /* 0x100CF84F: push ecx */
    PUSH32(esp, ecx); /* 0x100CF850: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF851: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF701); /* 0x100CF854: call 0x100cf701 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CF859: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CF85C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF85D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF85E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF85Eu);

L_100CF85E:
    PUSH32(esp, ebp); /* 0x100CF85E: push ebp */
    ebp = esp; /* 0x100CF85F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100CF861: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100CF864: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF867: push eax */
    eax = ebp + (-0x4); /* 0x100CF868: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF86B: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100CF86C: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF871: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF872: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF873: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF874: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF8A5; /* 0x100CF877: je 0x100cf8a5 */
L_100CF879:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF879: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF89D; /* 0x100CF87A: je 0x100cf89d */
L_100CF87C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF87C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF898; /* 0x100CF87D: je 0x100cf898 */
L_100CF87F:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF87F: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF883: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x100CF885: mov word ptr [ebp - 4], ax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF889: cwde  */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CF88A: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x100CF88D: fild dword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CF890: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CF893: fld qword ptr [ebp - 0xc] */
    goto L_100CF8B5; /* 0x100CF896: jmp 0x100cf8b5 */
L_100CF898:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF898: fld qword ptr [ebp + 8] */
    goto L_100CF8B5; /* 0x100CF89B: jmp 0x100cf8b5 */
L_100CF89D:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CF89D: fld qword ptr [0x10065b48] */
    goto L_100CF8B5; /* 0x100CF8A3: jmp 0x100cf8b5 */
L_100CF8A5:
    PUSH32(esp, 4); /* 0x100CF8A5: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF8A7: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100CF8AC: fld qword ptr [0x10065b48] */
    ecx = POP32_VAL(esp); /* 0x100CF8B2: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF8B3: fchs  */
L_100CF8B5:
    esp = ebp; /* 0x100CF8B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF8B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF8B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF8B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF8B9u);

L_100CF8B9:
    PUSH32(esp, ebp); /* 0x100CF8B9: push ebp */
    ebp = esp; /* 0x100CF8BA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF8BC: push ecx */
    PUSH32(esp, ecx); /* 0x100CF8BD: push ecx */
    eax = ebp + 0x8; /* 0x100CF8BE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF8C1: push eax */
    eax = ebp + (-0x4); /* 0x100CF8C2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF8C5: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100CF8C6: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF8CB: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF8CC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF8CD: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF8CE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF8FF; /* 0x100CF8D1: je 0x100cf8ff */
L_100CF8D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF8D3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF8F7; /* 0x100CF8D4: je 0x100cf8f7 */
L_100CF8D6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF8D6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF8F2; /* 0x100CF8D7: je 0x100cf8f2 */
L_100CF8D9:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF8D9: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF8DD: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x100CF8DF: mov word ptr [ebp - 4], ax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF8E3: cwde  */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CF8E4: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x100CF8E7: fild dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CF8EA: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100CF8ED: fld dword ptr [ebp - 8] */
    goto L_100CF90F; /* 0x100CF8F0: jmp 0x100cf90f */
L_100CF8F2:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CF8F2: fld dword ptr [ebp + 8] */
    goto L_100CF90F; /* 0x100CF8F5: jmp 0x100cf90f */
L_100CF8F7:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100CF8F7: fld dword ptr [0x10065b68] */
    goto L_100CF90F; /* 0x100CF8FD: jmp 0x100cf90f */
L_100CF8FF:
    PUSH32(esp, 4); /* 0x100CF8FF: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF901: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100CF906: fld dword ptr [0x10065b68] */
    ecx = POP32_VAL(esp); /* 0x100CF90C: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF90D: fchs  */
L_100CF90F:
    esp = ebp; /* 0x100CF90F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF912: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF913(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF913u);

L_100CF913:
    PUSH32(esp, ebp); /* 0x100CF913: push ebp */
    ebp = esp; /* 0x100CF914: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100CF916: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100CF919: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF91C: push eax */
    eax = ebp + (-0x4); /* 0x100CF91D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100CF920: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100CF921: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF926: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF927: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CF928: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CF929: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF95A; /* 0x100CF92C: je 0x100cf95a */
L_100CF92E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF92E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF952; /* 0x100CF92F: je 0x100cf952 */
L_100CF931:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CF931: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CF94D; /* 0x100CF932: je 0x100cf94d */
L_100CF934:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x100CF934: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x100CF938: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x100CF93A: mov word ptr [ebp - 4], ax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF93E: cwde  */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CF93F: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x100CF942: fild dword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100CF945: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100CF948: fld qword ptr [ebp - 0xc] */
    goto L_100CF96A; /* 0x100CF94B: jmp 0x100cf96a */
L_100CF94D:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF94D: fld qword ptr [ebp + 8] */
    goto L_100CF96A; /* 0x100CF950: jmp 0x100cf96a */
L_100CF952:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CF952: fld qword ptr [0x10065b88] */
    goto L_100CF96A; /* 0x100CF958: jmp 0x100cf96a */
L_100CF95A:
    PUSH32(esp, 4); /* 0x100CF95A: push 4 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF95C: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CF961: fld qword ptr [0x10065b88] */
    ecx = POP32_VAL(esp); /* 0x100CF967: pop ecx */
    _st[0] = -_st[0]; /* 0x100CF968: fchs  */
L_100CF96A:
    esp = ebp; /* 0x100CF96A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF96C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF96D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF96E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF96Eu);

L_100CF96E:
    PUSH32(esp, ebp); /* 0x100CF96E: push ebp */
    ebp = esp; /* 0x100CF96F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF971: push ecx */
    PUSH32(esp, ecx); /* 0x100CF972: push ecx */
    eax = ebp + 0x8; /* 0x100CF973: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF976: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CF977: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF97C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF97D: pop ecx */
    /* test eax, eax */ /* 0x100CF97E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CF9E2; /* 0x100CF980: je 0x100cf9e2 */
L_100CF982:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CF989; /* 0x100CF982: jle 0x100cf989 */
L_100CF984:
    /* cmp eax, 2 */ /* 0x100CF984: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CF9DA; /* 0x100CF987: jle 0x100cf9da */
L_100CF989:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF989: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CF98C: push ecx */
    PUSH32(esp, ecx); /* 0x100CF98D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CF98E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFBEF); /* 0x100CF991: call 0x100cfbef */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CF996: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CF999: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CF99C: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF99F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF9A1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CF9A3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CF9B5; /* 0x100CF9A6: jnp 0x100cf9b5 */
L_100CF9A8:
    PUSH32(esp, 0x20u); /* 0x100CF9A8: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF9AA: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF9AC: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CF9B1: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100CF9B4: pop ecx */
L_100CF9B5:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CF9B5: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF9BB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF9BD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF9D8; /* 0x100CF9C0: jne 0x100cf9d8 */
L_100CF9C2:
    fp_push(*(double*)ADDR(0x10064510)); /* 0x100CF9C2: fld qword ptr [0x10064510] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CF9C8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CF9CA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CF9CC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CF9D8; /* 0x100CF9CF: jne 0x100cf9d8 */
L_100CF9D1:
    RECOMP_CALL(sub_10051B40); /* 0x100CF9D1: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    goto L_100CF9E4; /* 0x100CF9D6: jmp 0x100cf9e4 */
L_100CF9D8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CF9D8: fstp st(0) */
L_100CF9DA:
    PUSH32(esp, 1); /* 0x100CF9DA: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CF9DC: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CF9E1: pop ecx */
L_100CF9E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CF9E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CF9E4:
    esp = ebp; /* 0x100CF9E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CF9E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CF9E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CF9E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CF9E8u);

L_100CF9E8:
    PUSH32(esp, ebp); /* 0x100CF9E8: push ebp */
    ebp = esp; /* 0x100CF9E9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CF9EB: push ecx */
    eax = ebp + 0x8; /* 0x100CF9EC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CF9EF: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CF9F0: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CF9F5: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CF9F6: pop ecx */
    /* test eax, eax */ /* 0x100CF9F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFA5D; /* 0x100CF9F9: je 0x100cfa5d */
L_100CF9FB:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CFA02; /* 0x100CF9FB: jle 0x100cfa02 */
L_100CF9FD:
    /* cmp eax, 2 */ /* 0x100CF9FD: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CFA55; /* 0x100CFA00: jle 0x100cfa55 */
L_100CFA02:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFA02: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CFA05: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CFA06: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CFC13); /* 0x100CFA09: call 0x100cfc13 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CFA0E: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CFA11: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100CFA14: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFA16: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFA19: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFA1B: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CFA1D: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100CFA1E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFA30; /* 0x100CFA21: jnp 0x100cfa30 */
L_100CFA23:
    PUSH32(esp, 0x20u); /* 0x100CFA23: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFA25: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFA27: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CFA2C: fld dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100CFA2F: pop ecx */
L_100CFA30:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CFA30: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFA36: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFA38: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFA53; /* 0x100CFA3B: jne 0x100cfa53 */
L_100CFA3D:
    fp_push(*(float*)&MEM32(0x10065080)); /* 0x100CFA3D: fld dword ptr [0x10065080] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFA43: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFA45: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFA47: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFA53; /* 0x100CFA4A: jne 0x100cfa53 */
L_100CFA4C:
    RECOMP_CALL(sub_10051B40); /* 0x100CFA4C: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    goto L_100CFA5F; /* 0x100CFA51: jmp 0x100cfa5f */
L_100CFA53:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFA53: fstp st(0) */
L_100CFA55:
    PUSH32(esp, 1); /* 0x100CFA55: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFA57: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFA5C: pop ecx */
L_100CFA5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFA5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CFA5F:
    esp = ebp; /* 0x100CFA5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CFA61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFA62: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFA63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFA63u);

L_100CFA63:
    PUSH32(esp, ebp); /* 0x100CFA63: push ebp */
    ebp = esp; /* 0x100CFA64: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CFA66: push ecx */
    PUSH32(esp, ecx); /* 0x100CFA67: push ecx */
    eax = ebp + 0x8; /* 0x100CFA68: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFA6B: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFA6C: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFA71: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFA72: pop ecx */
    /* test eax, eax */ /* 0x100CFA73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFAD7; /* 0x100CFA75: je 0x100cfad7 */
L_100CFA77:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CFA7E; /* 0x100CFA77: jle 0x100cfa7e */
L_100CFA79:
    /* cmp eax, 2 */ /* 0x100CFA79: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CFACF; /* 0x100CFA7C: jle 0x100cfacf */
L_100CFA7E:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFA7E: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CFA81: push ecx */
    PUSH32(esp, ecx); /* 0x100CFA82: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFA83: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFC35); /* 0x100CFA86: call 0x100cfc35 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100CFA8B: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFA8E: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100CFA91: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFA94: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFA96: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CFA98: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFAAA; /* 0x100CFA9B: jnp 0x100cfaaa */
L_100CFA9D:
    PUSH32(esp, 0x20u); /* 0x100CFA9D: push 0x20 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFA9F: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFAA1: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CFAA6: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100CFAA9: pop ecx */
L_100CFAAA:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CFAAA: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFAB0: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFAB2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFACD; /* 0x100CFAB5: jne 0x100cfacd */
L_100CFAB7:
    fp_push(*(double*)ADDR(0x10064510)); /* 0x100CFAB7: fld qword ptr [0x10064510] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFABD: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFABF: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFAC1: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFACD; /* 0x100CFAC4: jne 0x100cfacd */
L_100CFAC6:
    RECOMP_CALL(sub_10051B40); /* 0x100CFAC6: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    goto L_100CFAD9; /* 0x100CFACB: jmp 0x100cfad9 */
L_100CFACD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFACD: fstp st(0) */
L_100CFACF:
    PUSH32(esp, 1); /* 0x100CFACF: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFAD1: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFAD6: pop ecx */
L_100CFAD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFAD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CFAD9:
    esp = ebp; /* 0x100CFAD9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CFADB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFADC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFADD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFADDu);

    goto L_100CFADD;
L_10051B40:
    /* cmp MEM32(0x100DF7C0), 0 */ /* 0x10051B40: cmp dword ptr [0x100df7c0], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051B5C; /* 0x10051B47: je 0x10051b5c */
L_10051B49:
    PUSH32(esp, ebp); /* 0x10051B49: push ebp */
    ebp = esp; /* 0x10051B4A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10051B4C: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10051B4F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10051B52: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x10051B55: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051B5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051B5B: ret  */
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CFADD:
    PUSH32(esp, ebp); /* 0x100CFADD: push ebp */
    ebp = esp; /* 0x100CFADE: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFAE0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFAE3: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CFAE4: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFAE9: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFAEA: pop ecx */
    /* test eax, eax */ /* 0x100CFAEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFB34; /* 0x100CFAED: je 0x100cfb34 */
L_100CFAEF:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CFAF6; /* 0x100CFAEF: jle 0x100cfaf6 */
L_100CFAF1:
    /* cmp eax, 2 */ /* 0x100CFAF1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CFB2C; /* 0x100CFAF4: jle 0x100cfb2c */
L_100CFAF6:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFAF6: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CFAF9: push ecx */
    PUSH32(esp, ecx); /* 0x100CFAFA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFAFB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0A8A); /* 0x100CFAFE: call 0x100d0a8a */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100CFB03: fst qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CFB06: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFB0C: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CFB0E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CFB0F: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CFB10: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFB2A; /* 0x100CFB13: jne 0x100cfb2a */
L_100CFB15:
    fp_push(*(double*)ADDR(0x10064510)); /* 0x100CFB15: fld qword ptr [0x10064510] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFB1B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFB1D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFB1F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFB2A; /* 0x100CFB22: jne 0x100cfb2a */
L_100CFB24:
    ebp = POP32_VAL(esp); /* 0x100CFB24: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B40; /* 0x100CFB25: jmp 0x10051b40 */
L_100CFB2A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFB2A: fstp st(0) */
L_100CFB2C:
    PUSH32(esp, 1); /* 0x100CFB2C: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFB2E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFB33: pop ecx */
L_100CFB34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFB34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CFB36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFB37: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFB38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFB38u);

    goto L_100CFB38;
L_10051B40:
    /* cmp MEM32(0x100DF7C0), 0 */ /* 0x10051B40: cmp dword ptr [0x100df7c0], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051B5C; /* 0x10051B47: je 0x10051b5c */
L_10051B49:
    PUSH32(esp, ebp); /* 0x10051B49: push ebp */
    ebp = esp; /* 0x10051B4A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10051B4C: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10051B4F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10051B52: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x10051B55: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051B5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051B5B: ret  */
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CFB38:
    PUSH32(esp, ebp); /* 0x100CFB38: push ebp */
    ebp = esp; /* 0x100CFB39: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFB3B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFB3E: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CFB3F: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFB44: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFB45: pop ecx */
    /* test eax, eax */ /* 0x100CFB46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFB90; /* 0x100CFB48: je 0x100cfb90 */
L_100CFB4A:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CFB51; /* 0x100CFB4A: jle 0x100cfb51 */
L_100CFB4C:
    /* cmp eax, 2 */ /* 0x100CFB4C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CFB88; /* 0x100CFB4F: jle 0x100cfb88 */
L_100CFB51:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFB51: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CFB54: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CFB55: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100D0ADB); /* 0x100CFB58: call 0x100d0adb */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CFB5D: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFB60: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CFB63: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFB69: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CFB6B: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CFB6C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFB86; /* 0x100CFB6F: jne 0x100cfb86 */
L_100CFB71:
    fp_push(*(float*)&MEM32(0x10065080)); /* 0x100CFB71: fld dword ptr [0x10065080] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFB77: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFB79: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFB7B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFB86; /* 0x100CFB7E: jne 0x100cfb86 */
L_100CFB80:
    ebp = POP32_VAL(esp); /* 0x100CFB80: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B40; /* 0x100CFB81: jmp 0x10051b40 */
L_100CFB86:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFB86: fstp st(0) */
L_100CFB88:
    PUSH32(esp, 1); /* 0x100CFB88: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFB8A: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFB8F: pop ecx */
L_100CFB90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFB90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CFB92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFB93: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFB94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFB94u);

    goto L_100CFB94;
L_10051B40:
    /* cmp MEM32(0x100DF7C0), 0 */ /* 0x10051B40: cmp dword ptr [0x100df7c0], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051B5C; /* 0x10051B47: je 0x10051b5c */
L_10051B49:
    PUSH32(esp, ebp); /* 0x10051B49: push ebp */
    ebp = esp; /* 0x10051B4A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10051B4C: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10051B4F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10051B52: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x10051B55: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051B5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051B5B: ret  */
L_10051B5C:
    PUSH32(esp, ebp); /* 0x10051B5C: push ebp */
    ebp = esp; /* 0x10051B5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10051B5F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x10051B62: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x10051B65: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051B67: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x10051B6B: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x10051B6F: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x10051B73: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x10051B77: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x10051B7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051BBB; /* 0x10051B7D: je 0x10051bbb */
L_10051B7F:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x10051B7F: fsubp st(1) */
    /* test edx, edx */ /* 0x10051B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051BA3; /* 0x10051B83: jns 0x10051ba3 */
L_10051B85:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051B85: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051B88: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x10051B8B: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051B91: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B97: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051B9A: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051B9E: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BA1: jmp 0x10051bcf */
L_10051BA3:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x10051BA3: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x10051BA6: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x10051BA9: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BAF: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x10051BB2: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10051BB6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10051BCF; /* 0x10051BB9: jmp 0x10051bcf */
L_10051BBB:
    edx = MEM32(esp + 0x14); /* 0x10051BBB: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x10051BBF: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051B7F; /* 0x10051BC5: jne 0x10051b7f */
L_10051BC7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BC7: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x10051BCB: fstp dword ptr [esp + 0x18] */
L_10051BCF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10051BCF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10051BD0: ret  */
L_100CFB94:
    PUSH32(esp, ebp); /* 0x100CFB94: push ebp */
    ebp = esp; /* 0x100CFB95: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFB97: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFB9A: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFB9B: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFBA0: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFBA1: pop ecx */
    /* test eax, eax */ /* 0x100CFBA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFBEB; /* 0x100CFBA4: je 0x100cfbeb */
L_100CFBA6:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100CFBAD; /* 0x100CFBA6: jle 0x100cfbad */
L_100CFBA8:
    /* cmp eax, 2 */ /* 0x100CFBA8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100CFBE3; /* 0x100CFBAB: jle 0x100cfbe3 */
L_100CFBAD:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFBAD: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CFBB0: push ecx */
    PUSH32(esp, ecx); /* 0x100CFBB1: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFBB2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0B2D); /* 0x100CFBB5: call 0x100d0b2d */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100CFBBA: fst qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064520)); /* 0x100CFBBD: fcom qword ptr [0x10064520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFBC3: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100CFBC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CFBC6: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100CFBC7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFBE1; /* 0x100CFBCA: jne 0x100cfbe1 */
L_100CFBCC:
    fp_push(*(double*)ADDR(0x10064510)); /* 0x100CFBCC: fld qword ptr [0x10064510] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFBD2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFBD4: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CFBD6: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFBE1; /* 0x100CFBD9: jne 0x100cfbe1 */
L_100CFBDB:
    ebp = POP32_VAL(esp); /* 0x100CFBDB: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10051B40; /* 0x100CFBDC: jmp 0x10051b40 */
L_100CFBE1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFBE1: fstp st(0) */
L_100CFBE3:
    PUSH32(esp, 1); /* 0x100CFBE3: push 1 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFBE5: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFBEA: pop ecx */
L_100CFBEB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFBEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100CFBED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFBEE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFBEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFBEFu);

L_100CFBEF:
    PUSH32(esp, ebp); /* 0x100CFBEF: push ebp */
    ebp = esp; /* 0x100CFBF0: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFBF2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFBF5: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CFBF6: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFBFB: fld qword ptr [ebp + 8] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFBFE: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFBFF: pop ecx */
    /* cmp eax, 2 */ /* 0x100CFC00: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CFC11; /* 0x100CFC03: jbe 0x100cfc11 */
L_100CFC05:
    PUSH32(esp, ecx); /* 0x100CFC05: push ecx */
    PUSH32(esp, ecx); /* 0x100CFC06: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFC07: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D069F); /* 0x100CFC0A: call 0x100d069f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFC0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CFC10: pop ecx */
L_100CFC11:
    ebp = POP32_VAL(esp); /* 0x100CFC11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFC12: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFC13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFC13u);

L_100CFC13:
    PUSH32(esp, ebp); /* 0x100CFC13: push ebp */
    ebp = esp; /* 0x100CFC14: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFC16: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFC19: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CFC1A: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFC1F: fld dword ptr [ebp + 8] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFC22: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFC23: pop ecx */
    /* cmp eax, 2 */ /* 0x100CFC24: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CFC33; /* 0x100CFC27: jbe 0x100cfc33 */
L_100CFC29:
    PUSH32(esp, ecx); /* 0x100CFC29: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CFC2A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100D07E8); /* 0x100CFC2D: call 0x100d07e8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFC32: pop ecx */
L_100CFC33:
    ebp = POP32_VAL(esp); /* 0x100CFC33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFC34: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFC35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFC35u);

L_100CFC35:
    PUSH32(esp, ebp); /* 0x100CFC35: push ebp */
    ebp = esp; /* 0x100CFC36: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CFC38: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CFC3B: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFC3C: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFC41: fld qword ptr [ebp + 8] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CFC44: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CFC45: pop ecx */
    /* cmp eax, 2 */ /* 0x100CFC46: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100CFC57; /* 0x100CFC49: jbe 0x100cfc57 */
L_100CFC4B:
    PUSH32(esp, ecx); /* 0x100CFC4B: push ecx */
    PUSH32(esp, ecx); /* 0x100CFC4C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFC4D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0941); /* 0x100CFC50: call 0x100d0941 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFC55: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CFC56: pop ecx */
L_100CFC57:
    ebp = POP32_VAL(esp); /* 0x100CFC57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFC58: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFC59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFC59u);

L_100CFC59:
    PUSH32(esp, ebp); /* 0x100CFC59: push ebp */
    ebp = esp; /* 0x100CFC5A: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CFC5C: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CFC5F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CFC62: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFC66: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFC69: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFCB0); /* 0x100CFC6C: call 0x100cfcb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CFC71: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CFC74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFC75: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFC76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFC76u);

L_100CFC76:
    PUSH32(esp, ebp); /* 0x100CFC76: push ebp */
    ebp = esp; /* 0x100CFC77: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CFC79: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100CFC7C: sub esp, 0xc */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x4) = _v; } /* 0x100CFC7F: fstp qword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFC83: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CFC86: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CFE08); /* 0x100CFC89: call 0x100cfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100CFC8E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CFC91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFC92: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFC93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFC93u);

L_100CFC93:
    PUSH32(esp, ebp); /* 0x100CFC93: push ebp */
    ebp = esp; /* 0x100CFC94: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CFC96: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CFC99: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CFC9C: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFCA0: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CFCA3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CFF37); /* 0x100CFCA6: call 0x100cff37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CFCAB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100CFCAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFCAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFCB0u);

L_100CFCB0:
    PUSH32(esp, ebp); /* 0x100CFCB0: push ebp */
    ebp = esp; /* 0x100CFCB1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100CFCB3: push ebx */
    PUSH32(esp, esi); /* 0x100CFCB4: push esi */
    eax = ebp + 0x8; /* 0x100CFCB5: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CFCB8: push edi */
    PUSH32(esp, eax); /* 0x100CFCB9: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CFCBA: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFCBF: pop ecx */
    PUSH32(esp, 2); /* 0x100CFCC0: push 2 */
    esi = (uint32_t)LO16(eax); /* 0x100CFCC2: movzx esi, ax */
    ebx = 0x7FF0u; /* 0x100CFCC5: mov ebx, 0x7ff0 */
    edi = POP32_VAL(esp); /* 0x100CFCCA: pop edi */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100CFCCB: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CFDEE; /* 0x100CFCCE: je 0x100cfdee */
L_100CFCD4:
    eax = ebp + 0x10; /* 0x100CFCD4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CFCD7: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFCD8: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CFCDD: fld qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100CFCE0: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CFCE1: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CFDEB; /* 0x100CFCE4: je 0x100cfdeb */
L_100CFCEA:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFCEA: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFCED: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFCEF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CFCF1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFDE9; /* 0x100CFCF4: jnp 0x100cfde9 */
L_100CFCFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CFCFA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CFCFC: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100CFCFD: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFD24; /* 0x100CFD00: jne 0x100cfd24 */
L_100CFD02:
    eax = MEM32(ebp + 0xE); /* 0x100CFD02: mov eax, dword ptr [ebp + 0xe] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFD05: fstp st(0) */
    eax = (uint32_t)LO16(eax); /* 0x100CFD07: movzx eax, ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFD0A: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFEFu);
    eax = eax & 0xFFEFu; /* 0x100CFD0C: and eax, 0xffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xA) = 0xFFFFFFFFu; /* 0x100CFD11: mov dword ptr [ebp + 0xa], 0xffffffff */
    _flag_a = (uint32_t)((eax | 0x7FEFu)); _flag_b = (uint32_t)((eax | 0x7FEFu));
    eax = eax | 0x7FEFu; /* 0x100CFD18: or eax, 0x7fef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xFFFFu; /* 0x100CFD1D: mov ecx, 0xffff */
    goto L_100CFD3B; /* 0x100CFD22: jmp 0x100cfd3b */
L_100CFD24:
    /* test LO16(esi), LO16(esi) */ /* 0x100CFD24: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFD48; /* 0x100CFD27: jne 0x100cfd48 */
L_100CFD29:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFD29: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFD2B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFD2D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFD36; /* 0x100CFD30: jp 0x100cfd36 */
L_100CFD32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFD32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CFD3B; /* 0x100CFD34: jmp 0x100cfd3b */
L_100CFD36:
    eax = 0x8000u; /* 0x100CFD36: mov eax, 0x8000 */
L_100CFD3B:
    MEM16(ebp + 0xE) = (uint16_t)(LO16(eax)); /* 0x100CFD3B: mov word ptr [ebp + 0xe], ax */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(ecx)); /* 0x100CFD3F: mov word ptr [ebp + 8], cx */
    goto L_100CFDEE; /* 0x100CFD43: jmp 0x100cfdee */
L_100CFD48:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFD48: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFD4A: fnstsw ax */
    fp_push(0.0); /* 0x100CFD4C: fldz  */
    /* test HI8(eax), 5 */ /* 0x100CFD4E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFD5C; /* 0x100CFD51: jp 0x100cfd5c */
L_100CFD53:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFD53: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFD55: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFD57: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFD72; /* 0x100CFD5A: jnp 0x100cfd72 */
L_100CFD5C:
    fp_xch(2); /* 0x100CFD5C: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFD5E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFD60: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFD62: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFDAA; /* 0x100CFD65: jp 0x100cfdaa */
L_100CFD67:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFD67: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFD69: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFD6B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFD78; /* 0x100CFD6E: jnp 0x100cfd78 */
L_100CFD70:
    goto L_100CFDAE; /* 0x100CFD70: jmp 0x100cfdae */
L_100CFD72:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CFD72: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CFD74: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFD76: fstp st(0) */
L_100CFD78:
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0x8) = (uint16_t)(MEM16(ebp + 0x8) + 1); /* 0x100CFD78: inc word ptr [ebp + 8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100CFDEE; /* 0x100CFD7C: jne 0x100cfdee */
L_100CFD7E:
    _flag_a = (uint32_t)(MEM16(ebp + 0xA)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0xA) = (uint16_t)(MEM16(ebp + 0xA) + 1); /* 0x100CFD7E: inc word ptr [ebp + 0xa] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100CFDEE; /* 0x100CFD82: jne 0x100cfdee */
L_100CFD84:
    _flag_a = (uint32_t)(MEM16(ebp + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0xC) = (uint16_t)(MEM16(ebp + 0xC) + 1); /* 0x100CFD84: inc word ptr [ebp + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100CFDEE; /* 0x100CFD88: jne 0x100cfdee */
L_100CFD8A:
    SET_LO16(eax, MEM16(ebp + 0xE)); /* 0x100CFD8A: mov ax, word ptr [ebp + 0xe] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x100CFD8E: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + 0xE) = (uint16_t)(LO16(eax)); /* 0x100CFD90: mov word ptr [ebp + 0xe], ax */
    eax = (uint32_t)LO16(eax); /* 0x100CFD94: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100CFD97: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x100CFD9C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFDEE; /* 0x100CFD9E: jne 0x100cfdee */
L_100CFDA0:
    PUSH32(esp, 8); /* 0x100CFDA0: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFDA2: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFDA7: pop ecx */
    goto L_100CFDEE; /* 0x100CFDA8: jmp 0x100cfdee */
L_100CFDAA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFDAA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFDAC: fstp st(0) */
L_100CFDAE:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100CFDAE: mov ax, word ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x100CFDB2: mov ecx, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CFDB7: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x100CFDBA: mov word ptr [ebp + 8], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100CFDBE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFDEE; /* 0x100CFDC1: jne 0x100cfdee */
L_100CFDC3:
    SET_LO16(eax, MEM16(ebp + 0xA)); /* 0x100CFDC3: mov ax, word ptr [ebp + 0xa] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CFDC7: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0xA) = (uint16_t)(LO16(eax)); /* 0x100CFDCA: mov word ptr [ebp + 0xa], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100CFDCE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFDEE; /* 0x100CFDD1: jne 0x100cfdee */
L_100CFDD3:
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x100CFDD3: mov ax, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CFDD7: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0xC) = (uint16_t)(LO16(eax)); /* 0x100CFDDA: mov word ptr [ebp + 0xc], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100CFDDE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFDEE; /* 0x100CFDE1: jne 0x100cfdee */
L_100CFDE3:
    _flag_a = (uint32_t)(MEM16(ebp + 0xE)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(ebp + 0xE) = (uint16_t)(MEM16(ebp + 0xE) + LO16(ecx)); /* 0x100CFDE3: add word ptr [ebp + 0xe], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_100CFDEE; /* 0x100CFDE7: jmp 0x100cfdee */
L_100CFDE9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFDE9: fstp st(0) */
L_100CFDEB:
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CFDEB: fstp qword ptr [ebp + 8] */
L_100CFDEE:
    eax = MEM32(ebp + 0xE); /* 0x100CFDEE: mov eax, dword ptr [ebp + 0xe] */
    edi = POP32_VAL(esp); /* 0x100CFDF1: pop edi */
    eax = (uint32_t)LO16(eax); /* 0x100CFDF2: movzx eax, ax */
    esi = POP32_VAL(esp); /* 0x100CFDF5: pop esi */
    /* test ebx, eax */ /* 0x100CFDF6: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CFDF8: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFE03; /* 0x100CFDF9: jne 0x100cfe03 */
L_100CFDFB:
    PUSH32(esp, 0x10u); /* 0x100CFDFB: push 0x10 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFDFD: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFE02: pop ecx */
L_100CFE03:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFE03: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CFE06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFE07: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFE08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFE08u);

L_100CFE08:
    PUSH32(esp, ebp); /* 0x100CFE08: push ebp */
    ebp = esp; /* 0x100CFE09: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100CFE0B: push ebx */
    PUSH32(esp, esi); /* 0x100CFE0C: push esi */
    eax = ebp + 0x8; /* 0x100CFE0D: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CFE10: push edi */
    PUSH32(esp, eax); /* 0x100CFE11: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CFE12: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFE17: pop ecx */
    PUSH32(esp, 2); /* 0x100CFE18: push 2 */
    esi = (uint32_t)LO16(eax); /* 0x100CFE1A: movzx esi, ax */
    ebx = 0x7F80u; /* 0x100CFE1D: mov ebx, 0x7f80 */
    edi = POP32_VAL(esp); /* 0x100CFE22: pop edi */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100CFE23: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CFF1D; /* 0x100CFE26: je 0x100cff1d */
L_100CFE2C:
    eax = ebp + 0xC; /* 0x100CFE2C: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CFE2F: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFE30: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100CFE35: fld qword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x100CFE38: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CFE39: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CFF1A; /* 0x100CFE3C: je 0x100cff1a */
L_100CFE42:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFE42: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100CFE45: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100CFE47: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFE49: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CFE4B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFF18; /* 0x100CFE4E: jnp 0x100cff18 */
L_100CFE54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CFE54: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CFE56: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100CFE57: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFE82; /* 0x100CFE5A: jne 0x100cfe82 */
L_100CFE5C:
    eax = MEM32(ebp + 0xA); /* 0x100CFE5C: mov eax, dword ptr [ebp + 0xa] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFE5F: fstp st(0) */
    eax = (uint32_t)LO16(eax); /* 0x100CFE61: movzx eax, ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFE64: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF7Fu);
    eax = eax & 0xFF7Fu; /* 0x100CFE66: and eax, 0xff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x7F7Fu)); _flag_b = (uint32_t)((eax | 0x7F7Fu));
    eax = eax | 0x7F7Fu; /* 0x100CFE6B: or eax, 0x7f7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + 0xA) = (uint16_t)(LO16(eax)); /* 0x100CFE70: mov word ptr [ebp + 0xa], ax */
    eax = 0xFFFFu; /* 0x100CFE74: mov eax, 0xffff */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x100CFE79: mov word ptr [ebp + 8], ax */
    goto L_100CFF1D; /* 0x100CFE7D: jmp 0x100cff1d */
L_100CFE82:
    /* test LO16(esi), LO16(esi) */ /* 0x100CFE82: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFEA3; /* 0x100CFE85: jne 0x100cfea3 */
L_100CFE87:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFE87: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFE89: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFE8B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFE94; /* 0x100CFE8E: jp 0x100cfe94 */
L_100CFE90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFE90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CFE99; /* 0x100CFE92: jmp 0x100cfe99 */
L_100CFE94:
    eax = 0x8000u; /* 0x100CFE94: mov eax, 0x8000 */
L_100CFE99:
    MEM16(ebp + 0xA) = (uint16_t)(LO16(eax)); /* 0x100CFE99: mov word ptr [ebp + 0xa], ax */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(ecx)); /* 0x100CFE9D: mov word ptr [ebp + 8], cx */
    goto L_100CFF1D; /* 0x100CFEA1: jmp 0x100cff1d */
L_100CFEA3:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFEA3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFEA5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFEA7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFEB9; /* 0x100CFEAA: jp 0x100cfeb9 */
L_100CFEAC:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100CFEAC: fcom qword ptr [0x10067cd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFEB2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CFEB4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFED1; /* 0x100CFEB7: je 0x100cfed1 */
L_100CFEB9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFEB9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFEBB: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CFEBD: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CFEBF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFEFB; /* 0x100CFEC2: jne 0x100cfefb */
L_100CFEC4:
    fp_push(0.0); /* 0x100CFEC4: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFEC6: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFEC8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CFECA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CFED5; /* 0x100CFECD: je 0x100cfed5 */
L_100CFECF:
    goto L_100CFEFD; /* 0x100CFECF: jmp 0x100cfefd */
L_100CFED1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFED1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFED3: fstp st(0) */
L_100CFED5:
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0x8) = (uint16_t)(MEM16(ebp + 0x8) + 1); /* 0x100CFED5: inc word ptr [ebp + 8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100CFF1D; /* 0x100CFED9: jne 0x100cff1d */
L_100CFEDB:
    SET_LO16(eax, MEM16(ebp + 0xA)); /* 0x100CFEDB: mov ax, word ptr [ebp + 0xa] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x100CFEDF: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + 0xA) = (uint16_t)(LO16(eax)); /* 0x100CFEE1: mov word ptr [ebp + 0xa], ax */
    eax = (uint32_t)LO16(eax); /* 0x100CFEE5: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100CFEE8: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x100CFEED: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFF1D; /* 0x100CFEEF: jne 0x100cff1d */
L_100CFEF1:
    PUSH32(esp, 8); /* 0x100CFEF1: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFEF3: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFEF8: pop ecx */
    goto L_100CFF1D; /* 0x100CFEF9: jmp 0x100cff1d */
L_100CFEFB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFEFB: fstp st(0) */
L_100CFEFD:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100CFEFD: mov ax, word ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x100CFF01: mov ecx, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100CFF06: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x100CFF09: mov word ptr [ebp + 8], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100CFF0D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFF1D; /* 0x100CFF10: jne 0x100cff1d */
L_100CFF12:
    _flag_a = (uint32_t)(MEM16(ebp + 0xA)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(ebp + 0xA) = (uint16_t)(MEM16(ebp + 0xA) + LO16(ecx)); /* 0x100CFF12: add word ptr [ebp + 0xa], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_100CFF1D; /* 0x100CFF16: jmp 0x100cff1d */
L_100CFF18:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFF18: fstp st(0) */
L_100CFF1A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100CFF1A: fstp dword ptr [ebp + 8] */
L_100CFF1D:
    eax = MEM32(ebp + 0xA); /* 0x100CFF1D: mov eax, dword ptr [ebp + 0xa] */
    edi = POP32_VAL(esp); /* 0x100CFF20: pop edi */
    eax = (uint32_t)LO16(eax); /* 0x100CFF21: movzx eax, ax */
    esi = POP32_VAL(esp); /* 0x100CFF24: pop esi */
    /* test ebx, eax */ /* 0x100CFF25: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100CFF27: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFF32; /* 0x100CFF28: jne 0x100cff32 */
L_100CFF2A:
    PUSH32(esp, 0x10u); /* 0x100CFF2A: push 0x10 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100CFF2C: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFF31: pop ecx */
L_100CFF32:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CFF32: fld dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CFF35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CFF36: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CFF37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CFF37u);

L_100CFF37:
    PUSH32(esp, ebp); /* 0x100CFF37: push ebp */
    ebp = esp; /* 0x100CFF38: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100CFF3A: push ebx */
    PUSH32(esp, esi); /* 0x100CFF3B: push esi */
    eax = ebp + 0x8; /* 0x100CFF3C: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CFF3F: push edi */
    PUSH32(esp, eax); /* 0x100CFF40: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFF41: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CFF46: pop ecx */
    PUSH32(esp, 2); /* 0x100CFF47: push 2 */
    esi = (uint32_t)LO16(eax); /* 0x100CFF49: movzx esi, ax */
    ebx = 0x7FF0u; /* 0x100CFF4C: mov ebx, 0x7ff0 */
    edi = POP32_VAL(esp); /* 0x100CFF51: pop edi */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100CFF52: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100D0075; /* 0x100CFF55: je 0x100d0075 */
L_100CFF5B:
    eax = ebp + 0x10; /* 0x100CFF5B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CFF5E: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CFF5F: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CFF64: fld qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100CFF67: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100CFF68: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100D0072; /* 0x100CFF6B: je 0x100d0072 */
L_100CFF71:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CFF71: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFF74: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFF76: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CFF78: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100D0070; /* 0x100CFF7B: jnp 0x100d0070 */
L_100CFF81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CFF81: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CFF83: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100CFF84: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CFFAB; /* 0x100CFF87: jne 0x100cffab */
L_100CFF89:
    eax = MEM32(ebp + 0xE); /* 0x100CFF89: mov eax, dword ptr [ebp + 0xe] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFF8C: fstp st(0) */
    eax = (uint32_t)LO16(eax); /* 0x100CFF8E: movzx eax, ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFF91: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFEFu);
    eax = eax & 0xFFEFu; /* 0x100CFF93: and eax, 0xffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xA) = 0xFFFFFFFFu; /* 0x100CFF98: mov dword ptr [ebp + 0xa], 0xffffffff */
    _flag_a = (uint32_t)((eax | 0x7FEFu)); _flag_b = (uint32_t)((eax | 0x7FEFu));
    eax = eax | 0x7FEFu; /* 0x100CFF9F: or eax, 0x7fef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xFFFFu; /* 0x100CFFA4: mov ecx, 0xffff */
    goto L_100CFFC2; /* 0x100CFFA9: jmp 0x100cffc2 */
L_100CFFAB:
    /* test LO16(esi), LO16(esi) */ /* 0x100CFFAB: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CFFCF; /* 0x100CFFAE: jne 0x100cffcf */
L_100CFFB0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFFB0: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFFB2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFFB4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFFBD; /* 0x100CFFB7: jp 0x100cffbd */
L_100CFFB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CFFB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100CFFC2; /* 0x100CFFBB: jmp 0x100cffc2 */
L_100CFFBD:
    eax = 0x8000u; /* 0x100CFFBD: mov eax, 0x8000 */
L_100CFFC2:
    MEM16(ebp + 0xE) = (uint16_t)(LO16(eax)); /* 0x100CFFC2: mov word ptr [ebp + 0xe], ax */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(ecx)); /* 0x100CFFC6: mov word ptr [ebp + 8], cx */
    goto L_100D0075; /* 0x100CFFCA: jmp 0x100d0075 */
L_100CFFCF:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFFCF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFFD1: fnstsw ax */
    fp_push(0.0); /* 0x100CFFD3: fldz  */
    /* test HI8(eax), 5 */ /* 0x100CFFD5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CFFE3; /* 0x100CFFD8: jp 0x100cffe3 */
L_100CFFDA:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFFDA: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFFDC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFFDE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFFF9; /* 0x100CFFE1: jnp 0x100cfff9 */
L_100CFFE3:
    fp_xch(2); /* 0x100CFFE3: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFFE5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFFE7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFFE9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100D0031; /* 0x100CFFEC: jp 0x100d0031 */
L_100CFFEE:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CFFEE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CFFF0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CFFF2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CFFFF; /* 0x100CFFF5: jnp 0x100cffff */
L_100CFFF7:
    goto L_100D0035; /* 0x100CFFF7: jmp 0x100d0035 */
L_100CFFF9:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CFFF9: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CFFFB: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CFFFD: fstp st(0) */
L_100CFFFF:
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0x8) = (uint16_t)(MEM16(ebp + 0x8) + 1); /* 0x100CFFFF: inc word ptr [ebp + 8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100D0075; /* 0x100D0003: jne 0x100d0075 */
L_100D0005:
    _flag_a = (uint32_t)(MEM16(ebp + 0xA)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0xA) = (uint16_t)(MEM16(ebp + 0xA) + 1); /* 0x100D0005: inc word ptr [ebp + 0xa] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100D0075; /* 0x100D0009: jne 0x100d0075 */
L_100D000B:
    _flag_a = (uint32_t)(MEM16(ebp + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebp + 0xC) = (uint16_t)(MEM16(ebp + 0xC) + 1); /* 0x100D000B: inc word ptr [ebp + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100D0075; /* 0x100D000F: jne 0x100d0075 */
L_100D0011:
    SET_LO16(eax, MEM16(ebp + 0xE)); /* 0x100D0011: mov ax, word ptr [ebp + 0xe] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x100D0015: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + 0xE) = (uint16_t)(LO16(eax)); /* 0x100D0017: mov word ptr [ebp + 0xe], ax */
    eax = (uint32_t)LO16(eax); /* 0x100D001B: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100D001E: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x100D0023: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D0075; /* 0x100D0025: jne 0x100d0075 */
L_100D0027:
    PUSH32(esp, 8); /* 0x100D0027: push 8 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100D0029: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100D002E: pop ecx */
    goto L_100D0075; /* 0x100D002F: jmp 0x100d0075 */
L_100D0031:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100D0031: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100D0033: fstp st(0) */
L_100D0035:
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x100D0035: mov ax, word ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x100D0039: mov ecx, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100D003E: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x100D0041: mov word ptr [ebp + 8], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100D0045: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D0075; /* 0x100D0048: jne 0x100d0075 */
L_100D004A:
    SET_LO16(eax, MEM16(ebp + 0xA)); /* 0x100D004A: mov ax, word ptr [ebp + 0xa] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100D004E: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0xA) = (uint16_t)(LO16(eax)); /* 0x100D0051: mov word ptr [ebp + 0xa], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100D0055: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D0075; /* 0x100D0058: jne 0x100d0075 */
L_100D005A:
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x100D005A: mov ax, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100D005E: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + 0xC) = (uint16_t)(LO16(eax)); /* 0x100D0061: mov word ptr [ebp + 0xc], ax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100D0065: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100D0075; /* 0x100D0068: jne 0x100d0075 */
L_100D006A:
    _flag_a = (uint32_t)(MEM16(ebp + 0xE)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(ebp + 0xE) = (uint16_t)(MEM16(ebp + 0xE) + LO16(ecx)); /* 0x100D006A: add word ptr [ebp + 0xe], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_100D0075; /* 0x100D006E: jmp 0x100d0075 */
L_100D0070:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100D0070: fstp st(0) */
L_100D0072:
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100D0072: fstp qword ptr [ebp + 8] */
L_100D0075:
    eax = MEM32(ebp + 0xE); /* 0x100D0075: mov eax, dword ptr [ebp + 0xe] */
    edi = POP32_VAL(esp); /* 0x100D0078: pop edi */
    eax = (uint32_t)LO16(eax); /* 0x100D0079: movzx eax, ax */
    esi = POP32_VAL(esp); /* 0x100D007C: pop esi */
    /* test ebx, eax */ /* 0x100D007D: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100D007F: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100D008A; /* 0x100D0080: jne 0x100d008a */
L_100D0082:
    PUSH32(esp, 0x10u); /* 0x100D0082: push 0x10 */
    RECOMP_CALL(sub_100BFFA8); /* 0x100D0084: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100D0089: pop ecx */
L_100D008A:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D008A: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100D008D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D008E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100D008F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100D008Fu);

L_100D008F:
    PUSH32(esp, ebp); /* 0x100D008F: push ebp */
    ebp = esp; /* 0x100D0090: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100D0092: push ecx */
    PUSH32(esp, ecx); /* 0x100D0093: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100D0094: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100D0097: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100D009A: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100D009F: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100D00A2: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100D00A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100D00A8: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100D00AD: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100D00B0: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100D00B3: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100D00B6: fld dword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x100D00B9: fmul st(0), st(0) */
    fp_xch(1); /* 0x100D00BB: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100D00BD: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100D00BF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100D00C1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100D00C4: fld dword ptr [ebp - 8] */
    esp = ebp; /* 0x100D00C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100D00C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D00CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100D00CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100D00CBu);

L_100D00CB:
    PUSH32(esp, ebp); /* 0x100D00CB: push ebp */
    ebp = esp; /* 0x100D00CC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100D00CE: push ecx */
    PUSH32(esp, ecx); /* 0x100D00CF: push ecx */
    PUSH32(esp, esi); /* 0x100D00D0: push esi */
    PUSH32(esp, edi); /* 0x100D00D1: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100D00D2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x100D00D5: lea esi, [ebp + 8] */
    edi = esp; /* 0x100D00D8: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00DA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00DC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00DD: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100D00DE: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100D00E3: mov edi, esp */
    esi = ebp + 0x8; /* 0x100D00E5: lea esi, [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100D00E8: fstp qword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00EB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00EC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100D00EE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100D00EF: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _st[0] *= _st[0]; /* 0x100D00F4: fmul st(0), st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100D00F6: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100D00F9: fld qword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x100D00FC: fmul st(0), st(0) */
    edi = POP32_VAL(esp); /* 0x100D00FE: pop edi */
    esi = POP32_VAL(esp); /* 0x100D00FF: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100D0100: faddp st(1) */
    esp = ebp; /* 0x100D0102: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100D0104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D0105: ret  */
    RECOMP_REGS_OUT();
}

void sub_100D0106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100D0106u);

L_100D0106:
    PUSH32(esp, ebp); /* 0x100D0106: push ebp */
    ebp = esp; /* 0x100D0107: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100D0109: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100D010C: push 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100D010E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100D0111: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100D0115: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100D0118: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D0162); /* 0x100D011B: call 0x100d0162 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100D0120: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100D0123: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D0124: ret  */
    RECOMP_REGS_OUT();
}

void sub_100D0125(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100D0125u);

L_100D0125:
    PUSH32(esp, ebp); /* 0x100D0125: push ebp */
    ebp = esp; /* 0x100D0126: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100D0128: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x100D012B: push 0 */
    PUSH32(esp, ecx); /* 0x100D012D: push ecx */
    PUSH32(esp, ecx); /* 0x100D012E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100D012F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100D0133: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100D0136: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100D0317); /* 0x100D0139: call 0x100d0317 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100D013E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100D0141: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100D0142: ret  */
    RECOMP_REGS_OUT();
}
