#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1009EC54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EC54u);

L_1009EC54:
    PUSH32(esp, ebp); /* 0x1009EC54: push ebp */
    ebp = esp; /* 0x1009EC55: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009EC57: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009EC5A: push ebx */
    PUSH32(esp, esi); /* 0x1009EC5B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1009EC5C: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009EC5F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009EC61: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009EC62: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1009EC65: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009EC69: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1009EC70: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009ED57; /* 0x1009EC74: jne 0x1009ed57 */
L_1009EC7A:
    eax = MEM32(0x100E02F0); /* 0x1009EC7A: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, edi); /* 0x1009EC7F: push edi */
L_1009EC80:
    SET_LO8(ecx, MEM8(eax)); /* 0x1009EC80: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x40u */ /* 0x1009EC82: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009ED56; /* 0x1009EC85: je 0x1009ed56 */
L_1009EC8B:
    /* cmp LO8(ecx), 0x5Au */ /* 0x1009EC8B: cmp cl, 0x5a */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009ED56; /* 0x1009EC8E: je 0x1009ed56 */
L_1009EC94:
    /* test ebx, ebx */ /* 0x1009EC94: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EC9C; /* 0x1009EC96: je 0x1009ec9c */
L_1009EC98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009EC98: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009ECAA; /* 0x1009EC9A: jmp 0x1009ecaa */
L_1009EC9C:
    PUSH32(esp, 0x2Cu); /* 0x1009EC9C: push 0x2c */
    ecx = esi; /* 0x1009EC9E: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009ECA0: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009ECA5: mov eax, dword ptr [0x100e02f0] */
L_1009ECAA:
    SET_LO8(ecx, MEM8(eax)); /* 0x1009ECAA: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009ECAC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009ED4D; /* 0x1009ECAE: je 0x1009ed4d */
L_1009ECB4:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x1009ECB4: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x1009ECB7: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    /* cmp ecx, 9 */ /* 0x1009ECBA: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009ECDF; /* 0x1009ECBD: ja 0x1009ecdf */
L_1009ECBF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009ECBF: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009ECC0: mov dword ptr [0x100e02f0], eax */
    eax = ebp + (-0x18); /* 0x1009ECC5: lea eax, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1009ECC8: push ecx */
    ecx = MEM32(0x100E02E8); /* 0x1009ECC9: mov ecx, dword ptr [0x100e02e8] */
    PUSH32(esp, eax); /* 0x1009ECCF: push eax */
    RECOMP_CALL(sub_10030CE7); /* 0x1009ECD0: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009ECD5: push eax */
    ecx = esi; /* 0x1009ECD6: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x1009ECD8: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1009ED3D; /* 0x1009ECDD: jmp 0x1009ed3d */
L_1009ECDF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009ECDF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x1009ECE3: mov edi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFF0000u; /* 0x1009ECE5: and dword ptr [ebp - 4], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1009ECEC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009ECEF: push eax */
    eax = ebp + (-0x10); /* 0x1009ECF0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009ECF3: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x1009ECF4: call 0x1002334f */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009ECF9: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009ECFE: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1009ED00: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009ED01: pop ecx */
    /* cmp eax, 1 */ /* 0x1009ED02: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009ED1B; /* 0x1009ED05: jle 0x1009ed1b */
L_1009ED07:
    ecx = MEM32(0x100E02E8); /* 0x1009ED07: mov ecx, dword ptr [0x100e02e8] */
    /* cmp MEM32(ecx), 9 */ /* 0x1009ED0D: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009ED1B; /* 0x1009ED10: je 0x1009ed1b */
L_1009ED12:
    eax = ebp + (-0x10); /* 0x1009ED12: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009ED15: push eax */
    RECOMP_CALL(sub_100230C2); /* 0x1009ED16: call 0x100230c2 */
    RECOMP_FLAGS_IN();
L_1009ED1B:
    eax = ebp + (-0x10); /* 0x1009ED1B: lea eax, [ebp - 0x10] */
    ecx = esi; /* 0x1009ED1E: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1009ED20: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009ED21: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009ED26: mov eax, dword ptr [0x100e02f0] */
    /* cmp eax, edi */ /* 0x1009ED2B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009ED42; /* 0x1009ED2D: jne 0x1009ed42 */
L_1009ED2F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009ED2F: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009ED36: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1009ED39: mov byte ptr [esi + 4], 2 */
L_1009ED3D:
    eax = MEM32(0x100E02F0); /* 0x1009ED3D: mov eax, dword ptr [0x100e02f0] */
L_1009ED42:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1009ED42: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009ED56; /* 0x1009ED46: jne 0x1009ed56 */
L_1009ED48:
    RECOMP_BACKEDGE();
    goto L_1009EC80; /* 0x1009ED48: jmp 0x1009ec80 */
L_1009ED4D:
    PUSH32(esp, 1); /* 0x1009ED4D: push 1 */
    ecx = esi; /* 0x1009ED4F: mov ecx, esi */
    RECOMP_CALL(sub_1002374C); /* 0x1009ED51: call 0x1002374c */
    RECOMP_FLAGS_IN();
L_1009ED56:
    edi = POP32_VAL(esp); /* 0x1009ED56: pop edi */
L_1009ED57:
    eax = esi; /* 0x1009ED57: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009ED59: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009ED5A: pop ebx */
    esp = ebp; /* 0x1009ED5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009ED5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009ED5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009ED5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009ED5Fu);

L_1009ED5F:
    PUSH32(esp, ebp); /* 0x1009ED5F: push ebp */
    ebp = esp; /* 0x1009ED60: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1009ED62: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1009ED67: sub esp, 0x30 */
    _flag_k = FK_CMP;
    /* cmp MEM8(eax), 0 */ /* 0x1009ED6A: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x1009ED6D: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EEC2; /* 0x1009ED6E: je 0x1009eec2 */
L_1009ED74:
    RECOMP_CALL(sub_1009F772); /* 0x1009ED74: call 0x1009f772 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009ED79: mov esi, eax */
    /* test esi, esi */ /* 0x1009ED7B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1009ED83; /* 0x1009ED7D: jns 0x1009ed83 */
L_1009ED7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009ED7F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1009ED81: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1009ED83:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1009ED96; /* 0x1009ED83: jne 0x1009ed96 */
L_1009ED85:
    eax = ebp + (-0x20); /* 0x1009ED85: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0x5Du); /* 0x1009ED88: push 0x5d */
    PUSH32(esp, eax); /* 0x1009ED8A: push eax */
    eax = ebp + (-0x18); /* 0x1009ED8B: lea eax, [ebp - 0x18] */
    ecx = ebp + (-0x10); /* 0x1009ED8E: lea ecx, [ebp - 0x10] */
    goto L_1009EF36; /* 0x1009ED91: jmp 0x1009ef36 */
L_1009ED96:
    eax = MEM32(ebp + (-0x4)); /* 0x1009ED96: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009ED99: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x1009ED9D: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1009EDA2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1009EDA3: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009EDA6: mov dword ptr [ebp - 4], eax */
    /* test MEM32(edi + 0x4), 0x800u */ /* 0x1009EDA9: test dword ptr [edi + 4], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EDC2; /* 0x1009EDB0: je 0x1009edc2 */
L_1009EDB2:
    PUSH32(esp, 0x10062210u); /* 0x1009EDB2: push 0x10062210 */
    ecx = ebp + (-0x8); /* 0x1009EDB7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1009EDBA: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1009EDBF: mov eax, dword ptr [ebp - 4] */
L_1009EDC2:
    /* cmp LO8(eax), 1 */ /* 0x1009EDC2: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1009EE22; /* 0x1009EDC4: jg 0x1009ee22 */
L_1009EDC6:
    eax = esi; /* 0x1009EDC6: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009EDC8: dec esi */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1009EDC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EE22; /* 0x1009EDCB: je 0x1009ee22 */
L_1009EDCD:
    eax = MEM32(0x100E02F0); /* 0x1009EDCD: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1009EDD2: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EE22; /* 0x1009EDD5: je 0x1009ee22 */
L_1009EDD7:
    eax = ebp + (-0x28); /* 0x1009EDD7: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1009EDDA: push 0 */
    PUSH32(esp, eax); /* 0x1009EDDC: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009EDDD: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EDE2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009EDE3: pop ecx */
    PUSH32(esp, eax); /* 0x1009EDE4: push eax */
    eax = ebp + (-0x10); /* 0x1009EDE5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009EDE8: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1009EDE9: push 0x5b */
    ecx = ebp + (-0x30); /* 0x1009EDEB: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1002A173); /* 0x1009EDEE: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EDF3: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EDF5: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009EDFA: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x18); /* 0x1009EDFD: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009EE00: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009EE03: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x5Du); /* 0x1009EE06: push 0x5d */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009EE08: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009EE0B: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1009EE10: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009EE13: push eax */
    ecx = ebp + (-0x8); /* 0x1009EE14: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009EE17: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 1 */ /* 0x1009EE1C: cmp byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009EDC6; /* 0x1009EE20: jle 0x1009edc6 */
L_1009EE22:
    /* cmp MEM32(edi), 0 */ /* 0x1009EE22: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EE99; /* 0x1009EE25: je 0x1009ee99 */
L_1009EE27:
    /* test MEM32(edi + 0x4), 0x800u */ /* 0x1009EE27: test dword ptr [edi + 4], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EE49; /* 0x1009EE2E: je 0x1009ee49 */
L_1009EE30:
    eax = ebp + (-0x8); /* 0x1009EE30: lea eax, [ebp - 8] */
    ecx = edi; /* 0x1009EE33: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1009EE35: push eax */
    eax = ebp + (-0x30); /* 0x1009EE36: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1009EE39: push eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EE3A: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1009EE3F: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009EE41: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(eax + 0x4); /* 0x1009EE44: mov eax, dword ptr [eax + 4] */
    goto L_1009EE96; /* 0x1009EE47: jmp 0x1009ee96 */
L_1009EE49:
    PUSH32(esp, edi); /* 0x1009EE49: push edi */
    eax = ebp + (-0x18); /* 0x1009EE4A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009EE4D: push eax */
    PUSH32(esp, 0x28u); /* 0x1009EE4E: push 0x28 */
    ecx = ebp + (-0x30); /* 0x1009EE50: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1002A173); /* 0x1009EE53: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EE58: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EE5A: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009EE5F: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x10); /* 0x1009EE62: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1009EE65: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009EE68: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 0x29u); /* 0x1009EE6B: push 0x29 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009EE6D: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009EE70: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009EE75: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x18); /* 0x1009EE78: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009EE7B: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009EE7E: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009EE81: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1009EE84: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009EE87: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009EE88: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009EE8D: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009EE90: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009EE93: mov eax, dword ptr [ebp - 0x14] */
L_1009EE96:
    MEM32(ebp + (-0x4)) = eax; /* 0x1009EE96: mov dword ptr [ebp - 4], eax */
L_1009EE99:
    eax = ebp + (-0x8); /* 0x1009EE99: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009EE9C: push eax */
    eax = ebp + (-0x20); /* 0x1009EE9D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009EEA0: push eax */
    RECOMP_CALL(sub_1002334F); /* 0x1009EEA1: call 0x1002334f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EEA6: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1009EEA9: mov edx, dword ptr [ebp - 0x1c] */
    ecx = POP32_VAL(esp); /* 0x1009EEAC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009EEAD: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x1009EEAE: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x1009EEB1: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1009EEB7: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1009EEB9: mov dword ptr [eax + 4], edx */
    edi = POP32_VAL(esp); /* 0x1009EEBC: pop edi */
    goto L_1009EF5C; /* 0x1009EEBD: jmp 0x1009ef5c */
L_1009EEC2:
    eax = MEM32(ebp + 0xC); /* 0x1009EEC2: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x1009EEC5: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EF2A; /* 0x1009EEC8: je 0x1009ef2a */
L_1009EECA:
    PUSH32(esp, eax); /* 0x1009EECA: push eax */
    eax = ebp + (-0x20); /* 0x1009EECB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009EECE: push eax */
    PUSH32(esp, 0x28u); /* 0x1009EECF: push 0x28 */
    ecx = ebp + (-0x30); /* 0x1009EED1: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1002A173); /* 0x1009EED4: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EED9: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EEDB: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009EEE0: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x18); /* 0x1009EEE3: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009EEE6: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009EEE9: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0x1009EF64u); /* 0x1009EEEC: push 0x1009ef64 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009EEF1: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1009EEF4: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009EEF9: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x10); /* 0x1009EEFC: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1009EEFF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009EF02: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1009EF05: push 1 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009EF07: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1002374C); /* 0x1009EF0A: call 0x1002374c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009EF0F: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x1009EF12: lea ecx, [ebp - 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009EF15: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009EF18: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x5Du); /* 0x1009EF1B: push 0x5d */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009EF1D: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009EF20: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1009EF25: lea eax, [ebp - 8] */
    goto L_1009EF4E; /* 0x1009EF28: jmp 0x1009ef4e */
L_1009EF2A:
    eax = ebp + (-0x30); /* 0x1009EF2A: lea eax, [ebp - 0x30] */
    PUSH32(esp, 0x5Du); /* 0x1009EF2D: push 0x5d */
    PUSH32(esp, eax); /* 0x1009EF2F: push eax */
    eax = ebp + (-0x28); /* 0x1009EF30: lea eax, [ebp - 0x28] */
    ecx = ebp + (-0x20); /* 0x1009EF33: lea ecx, [ebp - 0x20] */
L_1009EF36:
    PUSH32(esp, 1); /* 0x1009EF36: push 1 */
    PUSH32(esp, eax); /* 0x1009EF38: push eax */
    PUSH32(esp, 0x5Bu); /* 0x1009EF39: push 0x5b */
    RECOMP_CALL(sub_1002A173); /* 0x1009EF3B: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EF40: mov ecx, eax */
    RECOMP_CALL(sub_1009EC32); /* 0x1009EF42: call 0x1009ec32 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EF47: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1009EF49: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
L_1009EF4E:
    PUSH32(esp, eax); /* 0x1009EF4E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009EF4F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002326B); /* 0x1009EF52: call 0x1002326b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EF57: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1009EF5A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009EF5B: pop ecx */
L_1009EF5C:
    esi = POP32_VAL(esp); /* 0x1009EF5C: pop esi */
    esp = ebp; /* 0x1009EF5D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EF5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EF60: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009EF64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EF64u);

L_1009EF64:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx) = MEM32(ebx) - ebx; /* 0x1009EF64: sub dword ptr [ebx], ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebp); /* 0x1009EF67: push ebp */
    ebp = esp; /* 0x1009EF68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009EF6A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1009EF6D: push 0 */
    RECOMP_CALL(sub_1002B49E); /* 0x1009EF6F: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EF74: pop ecx */
    PUSH32(esp, eax); /* 0x1009EF75: push eax */
    ecx = ebp + (-0x8); /* 0x1009EF76: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009EF79: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1009EF7E: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009EF84: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009EF86: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EFD5; /* 0x1009EF88: je 0x1009efd5 */
L_1009EF8A:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009EF8A: movsx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009EF8D: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009EF8E: mov dword ptr [0x100e02f0], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1009EF94: sub eax, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009EFC6; /* 0x1009EF97: je 0x1009efc6 */
L_1009EF99:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009EF99: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009EF9A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009EFB1; /* 0x1009EF9B: je 0x1009efb1 */
L_1009EF9D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1009EF9D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1009EFDF; /* 0x1009EFA0: jne 0x1009efdf */
L_1009EFA2:
    ecx = MEM32(ebp + 0x8); /* 0x1009EFA2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1009EFA5: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1009EFA7: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EFAC: mov eax, dword ptr [ebp + 8] */
    goto L_1009EFFA; /* 0x1009EFAF: jmp 0x1009effa */
L_1009EFB1:
    eax = ebp + (-0x10); /* 0x1009EFB1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009EFB4: push eax */
    RECOMP_CALL(sub_100235D9); /* 0x1009EFB5: call 0x100235d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EFBA: pop ecx */
    PUSH32(esp, eax); /* 0x1009EFBB: push eax */
    ecx = ebp + (-0x8); /* 0x1009EFBC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009EFBF: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1009EFDF; /* 0x1009EFC4: jmp 0x1009efdf */
L_1009EFC6:
    PUSH32(esp, 0x1002A664u); /* 0x1009EFC6: push 0x1002a664 */
    ecx = ebp + (-0x8); /* 0x1009EFCB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1009EFCE: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1009EFDF; /* 0x1009EFD3: jmp 0x1009efdf */
L_1009EFD5:
    PUSH32(esp, 1); /* 0x1009EFD5: push 1 */
    ecx = ebp + (-0x8); /* 0x1009EFD7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009EFDA: call 0x1002374c */
    RECOMP_FLAGS_IN();
L_1009EFDF:
    PUSH32(esp, 0x1009F000u); /* 0x1009EFDF: push 0x1009f000 */
    ecx = ebp + (-0x8); /* 0x1009EFE4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1009EFE7: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EFEC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009EFEF: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1009EFF2: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009EFF4: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009EFF7: mov dword ptr [eax + 4], ecx */
L_1009EFFA:
    esp = ebp; /* 0x1009EFFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EFFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EFFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009EF67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EF67u);

L_1009EF67:
    PUSH32(esp, ebp); /* 0x1009EF67: push ebp */
    ebp = esp; /* 0x1009EF68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009EF6A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1009EF6D: push 0 */
    RECOMP_CALL(sub_1002B49E); /* 0x1009EF6F: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EF74: pop ecx */
    PUSH32(esp, eax); /* 0x1009EF75: push eax */
    ecx = ebp + (-0x8); /* 0x1009EF76: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009EF79: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1009EF7E: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009EF84: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009EF86: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EFD5; /* 0x1009EF88: je 0x1009efd5 */
L_1009EF8A:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009EF8A: movsx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009EF8D: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009EF8E: mov dword ptr [0x100e02f0], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1009EF94: sub eax, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009EFC6; /* 0x1009EF97: je 0x1009efc6 */
L_1009EF99:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009EF99: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009EF9A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009EFB1; /* 0x1009EF9B: je 0x1009efb1 */
L_1009EF9D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1009EF9D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1009EFDF; /* 0x1009EFA0: jne 0x1009efdf */
L_1009EFA2:
    ecx = MEM32(ebp + 0x8); /* 0x1009EFA2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1009EFA5: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1009EFA7: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EFAC: mov eax, dword ptr [ebp + 8] */
    goto L_1009EFFA; /* 0x1009EFAF: jmp 0x1009effa */
L_1009EFB1:
    eax = ebp + (-0x10); /* 0x1009EFB1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009EFB4: push eax */
    RECOMP_CALL(sub_100235D9); /* 0x1009EFB5: call 0x100235d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EFBA: pop ecx */
    PUSH32(esp, eax); /* 0x1009EFBB: push eax */
    ecx = ebp + (-0x8); /* 0x1009EFBC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009EFBF: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1009EFDF; /* 0x1009EFC4: jmp 0x1009efdf */
L_1009EFC6:
    PUSH32(esp, 0x1002A664u); /* 0x1009EFC6: push 0x1002a664 */
    ecx = ebp + (-0x8); /* 0x1009EFCB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1009EFCE: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    goto L_1009EFDF; /* 0x1009EFD3: jmp 0x1009efdf */
L_1009EFD5:
    PUSH32(esp, 1); /* 0x1009EFD5: push 1 */
    ecx = ebp + (-0x8); /* 0x1009EFD7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009EFDA: call 0x1002374c */
    RECOMP_FLAGS_IN();
L_1009EFDF:
    PUSH32(esp, 0x1009F000u); /* 0x1009EFDF: push 0x1009f000 */
    ecx = ebp + (-0x8); /* 0x1009EFE4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A669); /* 0x1009EFE7: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EFEC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009EFEF: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1009EFF2: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009EFF4: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009EFF7: mov dword ptr [eax + 4], ecx */
L_1009EFFA:
    esp = ebp; /* 0x1009EFFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EFFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EFFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F000u);

L_1009F000:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esp);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esp; /* 0x1009F000: sub dword ptr [eax], esp */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009F002: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009F005: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009F006: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009F009: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFF0000u; /* 0x1009F00B: mov eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1009F010: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1009F013: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1009F016: lea eax, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1009F019: push ecx */
    PUSH32(esp, eax); /* 0x1009F01A: push eax */
    PUSH32(esp, 0x100237BAu); /* 0x1009F01B: push 0x100237ba */
    eax = ebp + (-0x10); /* 0x1009F020: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009F023: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, eax); /* 0x1009F026: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F027: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1009F02A: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023486); /* 0x1009F02D: call 0x10023486 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F032: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1009F035: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1009F038: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F03A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F03B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F003(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F003u);

L_1009F003:
    PUSH32(esp, ebp); /* 0x1009F003: push ebp */
    ebp = esp; /* 0x1009F004: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009F006: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009F009: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFF0000u; /* 0x1009F00B: mov eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1009F010: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1009F013: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1009F016: lea eax, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1009F019: push ecx */
    PUSH32(esp, eax); /* 0x1009F01A: push eax */
    PUSH32(esp, 0x100237BAu); /* 0x1009F01B: push 0x100237ba */
    eax = ebp + (-0x10); /* 0x1009F020: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009F023: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, eax); /* 0x1009F026: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F027: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1009F02A: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023486); /* 0x1009F02D: call 0x10023486 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F032: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1009F035: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1009F038: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F03A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F03B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F03Cu);

L_1009F03C:
    PUSH32(esp, ebp); /* 0x1009F03C: push ebp */
    ebp = esp; /* 0x1009F03D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009F03F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100E02F0); /* 0x1009F042: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009F047: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFF0000u; /* 0x1009F04B: and dword ptr [ebp - 4], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax)); /* 0x1009F052: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F054: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F0EF; /* 0x1009F056: je 0x1009f0ef */
L_1009F05C:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009F05C: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1009F05F: add eax, -0x30 */
    _flag_k = FK_ADD;
    /* cmp eax, 7 */ /* 0x1009F062: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009F0EB; /* 0x1009F065: ja 0x1009f0eb */
L_1009F06B:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1009F100)); goto _ljump; }
L_1009F072:
    PUSH32(esp, 0x1009F120u); /* 0x1009F072: push 0x1009f120 */
    goto L_1009F08C; /* 0x1009F077: jmp 0x1009f08c */
L_1009F079:
    PUSH32(esp, 0x1009F128u); /* 0x1009F079: push 0x1009f128 */
    goto L_1009F08C; /* 0x1009F07E: jmp 0x1009f08c */
L_1009F080:
    PUSH32(esp, 0x1009F130u); /* 0x1009F080: push 0x1009f130 */
    goto L_1009F08C; /* 0x1009F085: jmp 0x1009f08c */
L_1009F087:
    PUSH32(esp, 0x10030558u); /* 0x1009F087: push 0x10030558 */
L_1009F08C:
    ecx = ebp + (-0x8); /* 0x1009F08C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009F08F: call 0x10022c2c */
    RECOMP_FLAGS_IN();
L_1009F094:
    eax = MEM32(0x100E02F0); /* 0x1009F094: mov eax, dword ptr [0x100e02f0] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1009F099: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1009F09C: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x31u; /* 0x1009F0A2: sub eax, 0x31 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F0B3; /* 0x1009F0A5: je 0x1009f0b3 */
L_1009F0A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0A7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0A8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F0B3; /* 0x1009F0A9: je 0x1009f0b3 */
L_1009F0AB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0AB: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0AC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F0B3; /* 0x1009F0AD: je 0x1009f0b3 */
L_1009F0AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0AF: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F0B0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009F0DB; /* 0x1009F0B1: jne 0x1009f0db */
L_1009F0B3:
    eax = ebp + (-0x8); /* 0x1009F0B3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F0B6: push eax */
    eax = ebp + (-0x10); /* 0x1009F0B7: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F0BA: push eax */
    PUSH32(esp, 0x10030438u); /* 0x1009F0BB: push 0x10030438 */
    ecx = ebp + (-0x18); /* 0x1009F0C0: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009F0C3: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F0C8: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F0CA: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009F0CF: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F0D2: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009F0D5: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F0D8: mov dword ptr [ebp - 4], eax */
L_1009F0DB:
    eax = MEM32(ebp + 0x8); /* 0x1009F0DB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009F0DE: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1009F0E1: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F0E3: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009F0E6: mov dword ptr [eax + 4], ecx */
    goto L_1009F0FC; /* 0x1009F0E9: jmp 0x1009f0fc */
L_1009F0EB:
    PUSH32(esp, 2); /* 0x1009F0EB: push 2 */
    goto L_1009F0F1; /* 0x1009F0ED: jmp 0x1009f0f1 */
L_1009F0EF:
    PUSH32(esp, 1); /* 0x1009F0EF: push 1 */
L_1009F0F1:
    ecx = MEM32(ebp + 0x8); /* 0x1009F0F1: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F0F4: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F0F9: mov eax, dword ptr [ebp + 8] */
L_1009F0FC:
    esp = ebp; /* 0x1009F0FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F0FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F0FF: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1009F072u: goto L_1009F072;
      case 0x1009F079u: goto L_1009F079;
      case 0x1009F080u: goto L_1009F080;
      case 0x1009F087u: goto L_1009F087;
      case 0x1009F094u: goto L_1009F094;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1009F120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F120u);

L_1009F120:
    void_lift_trap(0x1009F120u, "arpl word ptr [eax + 0x61], bp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009F145; /* 0x1009F123: jb 0x1009f145 */
L_1009F125:
    _flag_a = (uint32_t)(MEM8(eax + 0x6F687390)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F687390) = (uint8_t)(MEM8(eax + 0x6F687390) + LO8(edx)); /* 0x1009F125: add byte ptr [eax + 0x6f687390], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1009F1A1; /* 0x1009F12B: jb 0x1009f1a1 */
L_1009F12D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1009F12D: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* nop */ /* 0x1009F12F: nop  */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x8B550020u); /* 0x1009F130: imul ebp, dword ptr [esi + 0x74], 0x8b550020 */
    /* in: no port I/O under Win32 */ /* 0x1009F137: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1009F138: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(0x100E02F0); /* 0x1009F13B: mov edx, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x1009F141: push ebx */
    PUSH32(esp, esi); /* 0x1009F142: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x1009F143: mov esi, dword ptr [ebp - 4] */
    goto L_1009F146; /* falls through past a gap */
L_1009F145:
    _df = 1; /* 0x1009F145: cld  */
L_1009F146:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009F146: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF0000u);
    esi = esi & 0xFFFF0000u; /* 0x1009F148: and esi, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009F14E: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F151: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1009F152: mov dword ptr [ebp - 4], esi */
    MEM32(0x100E02F0) = edx; /* 0x1009F155: mov dword ptr [0x100e02f0], edx */
    PUSH32(esp, edi); /* 0x1009F15B: push edi */
    SET_LO8(ecx, MEM8(edx)); /* 0x1009F15C: mov cl, byte ptr [edx] */
    edi = (int32_t)(int8_t)LO8(ecx); /* 0x1009F15E: movsx edi, cl */
    eax = edi; /* 0x1009F161: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1009F163: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F28F; /* 0x1009F166: je 0x1009f28f */
L_1009F16C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F16C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F263; /* 0x1009F16D: je 0x1009f263 */
L_1009F173:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F173: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F258; /* 0x1009F174: je 0x1009f258 */
L_1009F17A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F17A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F17C: je 0x1009f254 */
L_1009F182:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1009F182: mov al, byte ptr [edx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F185: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F187: je 0x1009f254 */
L_1009F18D:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F18D: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F268; /* 0x1009F190: jne 0x1009f268 */
L_1009F196:
    ecx = edi + (-0x30); /* 0x1009F196: lea ecx, [edi - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009F199: add edx, 2 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1009F19C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1009F19C: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1009F19F: add ecx, -0x30 */
    _flag_k = FK_ADD;
    goto L_1009F1A2; /* falls through past a gap */
L_1009F1A1:
    { uint32_t _rv = (MEM8(edi)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edi) = (uint8_t)(_rv); } /* 0x1009F1A1: ror byte ptr [edi], 1 */
    goto L_1009F1A3; /* falls through past a gap */
L_1009F1A2:
    edi = (int32_t)(int8_t)LO8(eax); /* 0x1009F1A2: movsx edi, al */
    goto L_1009F1A5; /* falls through past a gap */
L_1009F1A3:
    esi = 0x89F903F8u; /* 0x1009F1A3: mov esi, 0x89f903f8 */
    goto L_1009F1A8; /* falls through past a gap */
L_1009F1A5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1009F1A5: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = edx; /* 0x1009F1A7: mov dword ptr [0x100e02f0], edx */
    goto L_1009F1AD; /* falls through past a gap */
L_1009F1A8:
    { uint32_t _aa = eax, _ab = 0x100E02F0u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1009F1A8: adc eax, 0x100e02f0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1009F1AD:
    /* cmp edi, 1 */ /* 0x1009F1AD: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009F1D8; /* 0x1009F1B0: jbe 0x1009f1d8 */
L_1009F1B2:
    PUSH32(esp, 0x2Cu); /* 0x1009F1B2: push 0x2c */
    ecx = ebp + (-0x8); /* 0x1009F1B4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F1B7: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1009F1BC: push ebx */
    PUSH32(esp, edi); /* 0x1009F1BD: push edi */
    ecx = ebp + (-0x18); /* 0x1009F1BE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1009F1C1: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009F1C6: push eax */
    eax = ebp + (-0x20); /* 0x1009F1C7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F1CA: push eax */
    ecx = ebp + (-0x8); /* 0x1009F1CB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F1CE: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1009F1D3: mov ebx, dword ptr [eax] */
    esi = MEM32(eax + 0x4); /* 0x1009F1D5: mov esi, dword ptr [eax + 4] */
L_1009F1D8:
    PUSH32(esp, 0x3Eu); /* 0x1009F1D8: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1009F1DA: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009F1DD: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1009F1E0: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F1E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009F1E8: mov eax, dword ptr [0x100e02f0] */
    edx = MEM32(ebp + (-0x10)); /* 0x1009F1ED: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F1F0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F1F3: mov dword ptr [ebp - 8], edx */
    /* cmp MEM8(eax), 0x24u */ /* 0x1009F1F6: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F1F9: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F206; /* 0x1009F1FC: jne 0x1009f206 */
L_1009F1FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F1FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F1FF: mov dword ptr [0x100e02f0], eax */
    goto L_1009F227; /* 0x1009F204: jmp 0x1009f227 */
L_1009F206:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1009F206: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x10); /* 0x1009F209: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0x5Eu); /* 0x1009F20C: push 0x5e */
    MEM32(ebp + (-0x10)) = edx; /* 0x1009F20E: mov dword ptr [ebp - 0x10], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F211: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1009F216: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F219: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(0x100E02F0); /* 0x1009F21C: mov eax, dword ptr [0x100e02f0] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F221: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F224: mov dword ptr [ebp - 4], ecx */
L_1009F227:
    /* cmp MEM8(eax), 0 */ /* 0x1009F227: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F234; /* 0x1009F22A: je 0x1009f234 */
L_1009F22C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F22C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F22D: mov dword ptr [0x100e02f0], eax */
    goto L_1009F244; /* 0x1009F232: jmp 0x1009f244 */
L_1009F234:
    PUSH32(esp, 1); /* 0x1009F234: push 1 */
    ecx = ebp + (-0x8); /* 0x1009F236: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009F239: call 0x1002374c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F23E: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1009F241: mov edx, dword ptr [ebp - 8] */
L_1009F244:
    eax = MEM32(ebp + 0x8); /* 0x1009F244: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1009F247: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x1009F24D: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1009F24F: mov dword ptr [eax + 4], ecx */
    goto L_1009F2D3; /* 0x1009F252: jmp 0x1009f2d3 */
L_1009F254:
    PUSH32(esp, 1); /* 0x1009F254: push 1 */
    goto L_1009F26A; /* 0x1009F256: jmp 0x1009f26a */
L_1009F258:
    eax = MEM32(ebp + 0xC); /* 0x1009F258: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1009F2DCu; /* 0x1009F25B: mov dword ptr [eax], 0x1009f2dc */
    goto L_1009F287; /* 0x1009F261: jmp 0x1009f287 */
L_1009F263:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F263: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F277; /* 0x1009F266: je 0x1009f277 */
L_1009F268:
    PUSH32(esp, 2); /* 0x1009F268: push 2 */
L_1009F26A:
    ecx = MEM32(ebp + 0x8); /* 0x1009F26A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F26D: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F272: mov eax, dword ptr [ebp + 8] */
    goto L_1009F2D3; /* 0x1009F275: jmp 0x1009f2d3 */
L_1009F277:
    eax = MEM32(ebp + 0x10); /* 0x1009F277: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F27A: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x3Eu); /* 0x1009F27D: push 0x3e */
    MEM8(eax) = (uint8_t)(1); /* 0x1009F27F: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_1002A173); /* 0x1009F282: call 0x1002a173 */
    RECOMP_FLAGS_IN();
L_1009F287:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1009F287: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    goto L_1009F2C4; /* 0x1009F28D: jmp 0x1009f2c4 */
L_1009F28F:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F28F: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F292: jne 0x1009f2bd */
L_1009F294:
    ecx = MEM32(ebp + 0xC); /* 0x1009F294: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1009F297: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x26u */ /* 0x1009F299: cmp byte ptr [eax], 0x26 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2AA; /* 0x1009F29C: jne 0x1009f2aa */
L_1009F29E:
    MEM32(ecx) = 0x1009F2DCu; /* 0x1009F29E: mov dword ptr [ecx], 0x1009f2dc */
    edx = MEM32(0x100E02F0); /* 0x1009F2A4: mov edx, dword ptr [0x100e02f0] */
L_1009F2AA:
    eax = MEM32(ecx); /* 0x1009F2AA: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x2Au */ /* 0x1009F2AC: cmp byte ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F2AF: jne 0x1009f2bd */
L_1009F2B1:
    MEM32(ecx) = 0x1009F2E0u; /* 0x1009F2B1: mov dword ptr [ecx], 0x1009f2e0 */
    edx = MEM32(0x100E02F0); /* 0x1009F2B7: mov edx, dword ptr [0x100e02f0] */
L_1009F2BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F2BD: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1009F2BE: mov dword ptr [0x100e02f0], edx */
L_1009F2C4:
    eax = MEM32(ebp + 0x8); /* 0x1009F2C4: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1009F2C7: mov byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1009F2CA: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1009F2D1: mov dword ptr [eax], ebx */
L_1009F2D3:
    edi = POP32_VAL(esp); /* 0x1009F2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1009F2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009F2D5: pop ebx */
    esp = ebp; /* 0x1009F2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F128u);

L_1009F128:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1009F192; /* 0x1009F128: jae 0x1009f192 */
L_1009F12A:
    /* outsd: no port I/O under Win32 */ /* 0x1009F12A: outsd dx, dword ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009F1A1; /* 0x1009F12B: jb 0x1009f1a1 */
L_1009F12D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1009F12D: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* nop */ /* 0x1009F12F: nop  */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x8B550020u); /* 0x1009F130: imul ebp, dword ptr [esi + 0x74], 0x8b550020 */
    /* in: no port I/O under Win32 */ /* 0x1009F137: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1009F138: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(0x100E02F0); /* 0x1009F13B: mov edx, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x1009F141: push ebx */
    PUSH32(esp, esi); /* 0x1009F142: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x1009F143: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009F146: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF0000u);
    esi = esi & 0xFFFF0000u; /* 0x1009F148: and esi, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009F14E: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F151: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1009F152: mov dword ptr [ebp - 4], esi */
    MEM32(0x100E02F0) = edx; /* 0x1009F155: mov dword ptr [0x100e02f0], edx */
    PUSH32(esp, edi); /* 0x1009F15B: push edi */
    SET_LO8(ecx, MEM8(edx)); /* 0x1009F15C: mov cl, byte ptr [edx] */
    edi = (int32_t)(int8_t)LO8(ecx); /* 0x1009F15E: movsx edi, cl */
    eax = edi; /* 0x1009F161: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1009F163: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F28F; /* 0x1009F166: je 0x1009f28f */
L_1009F16C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F16C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F263; /* 0x1009F16D: je 0x1009f263 */
L_1009F173:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F173: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F258; /* 0x1009F174: je 0x1009f258 */
L_1009F17A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F17A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F17C: je 0x1009f254 */
L_1009F182:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1009F182: mov al, byte ptr [edx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F185: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F187: je 0x1009f254 */
L_1009F18D:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F18D: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F268; /* 0x1009F190: jne 0x1009f268 */
    goto L_1009F196; /* falls through past a gap */
L_1009F192:
    { uint32_t _rv = (MEM8(eax)) & 255u, _rn = ((LO8(ecx)) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(eax) = (uint8_t)(_rv); } /* 0x1009F192: rol byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009F194: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1009F196:
    ecx = edi + (-0x30); /* 0x1009F196: lea ecx, [edi - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009F199: add edx, 2 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1009F19C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1009F19C: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1009F19F: add ecx, -0x30 */
    _flag_k = FK_ADD;
    goto L_1009F1A2; /* falls through past a gap */
L_1009F1A1:
    { uint32_t _rv = (MEM8(edi)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edi) = (uint8_t)(_rv); } /* 0x1009F1A1: ror byte ptr [edi], 1 */
    goto L_1009F1A3; /* falls through past a gap */
L_1009F1A2:
    edi = (int32_t)(int8_t)LO8(eax); /* 0x1009F1A2: movsx edi, al */
    goto L_1009F1A5; /* falls through past a gap */
L_1009F1A3:
    esi = 0x89F903F8u; /* 0x1009F1A3: mov esi, 0x89f903f8 */
    goto L_1009F1A8; /* falls through past a gap */
L_1009F1A5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1009F1A5: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = edx; /* 0x1009F1A7: mov dword ptr [0x100e02f0], edx */
    goto L_1009F1AD; /* falls through past a gap */
L_1009F1A8:
    { uint32_t _aa = eax, _ab = 0x100E02F0u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1009F1A8: adc eax, 0x100e02f0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1009F1AD:
    /* cmp edi, 1 */ /* 0x1009F1AD: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009F1D8; /* 0x1009F1B0: jbe 0x1009f1d8 */
L_1009F1B2:
    PUSH32(esp, 0x2Cu); /* 0x1009F1B2: push 0x2c */
    ecx = ebp + (-0x8); /* 0x1009F1B4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F1B7: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1009F1BC: push ebx */
    PUSH32(esp, edi); /* 0x1009F1BD: push edi */
    ecx = ebp + (-0x18); /* 0x1009F1BE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1009F1C1: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009F1C6: push eax */
    eax = ebp + (-0x20); /* 0x1009F1C7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F1CA: push eax */
    ecx = ebp + (-0x8); /* 0x1009F1CB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F1CE: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1009F1D3: mov ebx, dword ptr [eax] */
    esi = MEM32(eax + 0x4); /* 0x1009F1D5: mov esi, dword ptr [eax + 4] */
L_1009F1D8:
    PUSH32(esp, 0x3Eu); /* 0x1009F1D8: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1009F1DA: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009F1DD: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1009F1E0: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F1E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009F1E8: mov eax, dword ptr [0x100e02f0] */
    edx = MEM32(ebp + (-0x10)); /* 0x1009F1ED: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F1F0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F1F3: mov dword ptr [ebp - 8], edx */
    /* cmp MEM8(eax), 0x24u */ /* 0x1009F1F6: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F1F9: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F206; /* 0x1009F1FC: jne 0x1009f206 */
L_1009F1FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F1FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F1FF: mov dword ptr [0x100e02f0], eax */
    goto L_1009F227; /* 0x1009F204: jmp 0x1009f227 */
L_1009F206:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1009F206: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x10); /* 0x1009F209: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0x5Eu); /* 0x1009F20C: push 0x5e */
    MEM32(ebp + (-0x10)) = edx; /* 0x1009F20E: mov dword ptr [ebp - 0x10], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F211: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1009F216: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F219: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(0x100E02F0); /* 0x1009F21C: mov eax, dword ptr [0x100e02f0] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F221: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F224: mov dword ptr [ebp - 4], ecx */
L_1009F227:
    /* cmp MEM8(eax), 0 */ /* 0x1009F227: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F234; /* 0x1009F22A: je 0x1009f234 */
L_1009F22C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F22C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F22D: mov dword ptr [0x100e02f0], eax */
    goto L_1009F244; /* 0x1009F232: jmp 0x1009f244 */
L_1009F234:
    PUSH32(esp, 1); /* 0x1009F234: push 1 */
    ecx = ebp + (-0x8); /* 0x1009F236: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009F239: call 0x1002374c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F23E: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1009F241: mov edx, dword ptr [ebp - 8] */
L_1009F244:
    eax = MEM32(ebp + 0x8); /* 0x1009F244: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1009F247: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x1009F24D: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1009F24F: mov dword ptr [eax + 4], ecx */
    goto L_1009F2D3; /* 0x1009F252: jmp 0x1009f2d3 */
L_1009F254:
    PUSH32(esp, 1); /* 0x1009F254: push 1 */
    goto L_1009F26A; /* 0x1009F256: jmp 0x1009f26a */
L_1009F258:
    eax = MEM32(ebp + 0xC); /* 0x1009F258: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1009F2DCu; /* 0x1009F25B: mov dword ptr [eax], 0x1009f2dc */
    goto L_1009F287; /* 0x1009F261: jmp 0x1009f287 */
L_1009F263:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F263: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F277; /* 0x1009F266: je 0x1009f277 */
L_1009F268:
    PUSH32(esp, 2); /* 0x1009F268: push 2 */
L_1009F26A:
    ecx = MEM32(ebp + 0x8); /* 0x1009F26A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F26D: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F272: mov eax, dword ptr [ebp + 8] */
    goto L_1009F2D3; /* 0x1009F275: jmp 0x1009f2d3 */
L_1009F277:
    eax = MEM32(ebp + 0x10); /* 0x1009F277: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F27A: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x3Eu); /* 0x1009F27D: push 0x3e */
    MEM8(eax) = (uint8_t)(1); /* 0x1009F27F: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_1002A173); /* 0x1009F282: call 0x1002a173 */
    RECOMP_FLAGS_IN();
L_1009F287:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1009F287: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    goto L_1009F2C4; /* 0x1009F28D: jmp 0x1009f2c4 */
L_1009F28F:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F28F: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F292: jne 0x1009f2bd */
L_1009F294:
    ecx = MEM32(ebp + 0xC); /* 0x1009F294: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1009F297: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x26u */ /* 0x1009F299: cmp byte ptr [eax], 0x26 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2AA; /* 0x1009F29C: jne 0x1009f2aa */
L_1009F29E:
    MEM32(ecx) = 0x1009F2DCu; /* 0x1009F29E: mov dword ptr [ecx], 0x1009f2dc */
    edx = MEM32(0x100E02F0); /* 0x1009F2A4: mov edx, dword ptr [0x100e02f0] */
L_1009F2AA:
    eax = MEM32(ecx); /* 0x1009F2AA: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x2Au */ /* 0x1009F2AC: cmp byte ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F2AF: jne 0x1009f2bd */
L_1009F2B1:
    MEM32(ecx) = 0x1009F2E0u; /* 0x1009F2B1: mov dword ptr [ecx], 0x1009f2e0 */
    edx = MEM32(0x100E02F0); /* 0x1009F2B7: mov edx, dword ptr [0x100e02f0] */
L_1009F2BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F2BD: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1009F2BE: mov dword ptr [0x100e02f0], edx */
L_1009F2C4:
    eax = MEM32(ebp + 0x8); /* 0x1009F2C4: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1009F2C7: mov byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1009F2CA: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1009F2D1: mov dword ptr [eax], ebx */
L_1009F2D3:
    edi = POP32_VAL(esp); /* 0x1009F2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1009F2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009F2D5: pop ebx */
    esp = ebp; /* 0x1009F2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F130u);

L_1009F130:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x74) * (int32_t)0x8B550020u); /* 0x1009F130: imul ebp, dword ptr [esi + 0x74], 0x8b550020 */
    /* in: no port I/O under Win32 */ /* 0x1009F137: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1009F138: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(0x100E02F0); /* 0x1009F13B: mov edx, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x1009F141: push ebx */
    PUSH32(esp, esi); /* 0x1009F142: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x1009F143: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009F146: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF0000u);
    esi = esi & 0xFFFF0000u; /* 0x1009F148: and esi, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009F14E: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F151: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1009F152: mov dword ptr [ebp - 4], esi */
    MEM32(0x100E02F0) = edx; /* 0x1009F155: mov dword ptr [0x100e02f0], edx */
    PUSH32(esp, edi); /* 0x1009F15B: push edi */
    SET_LO8(ecx, MEM8(edx)); /* 0x1009F15C: mov cl, byte ptr [edx] */
    edi = (int32_t)(int8_t)LO8(ecx); /* 0x1009F15E: movsx edi, cl */
    eax = edi; /* 0x1009F161: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1009F163: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F28F; /* 0x1009F166: je 0x1009f28f */
L_1009F16C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F16C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F263; /* 0x1009F16D: je 0x1009f263 */
L_1009F173:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F173: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F258; /* 0x1009F174: je 0x1009f258 */
L_1009F17A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F17A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F17C: je 0x1009f254 */
L_1009F182:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1009F182: mov al, byte ptr [edx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F185: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F187: je 0x1009f254 */
L_1009F18D:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F18D: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F268; /* 0x1009F190: jne 0x1009f268 */
L_1009F196:
    ecx = edi + (-0x30); /* 0x1009F196: lea ecx, [edi - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009F199: add edx, 2 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1009F19C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1009F19C: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1009F19F: add ecx, -0x30 */
    _flag_k = FK_ADD;
    edi = (int32_t)(int8_t)LO8(eax); /* 0x1009F1A2: movsx edi, al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1009F1A5: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = edx; /* 0x1009F1A7: mov dword ptr [0x100e02f0], edx */
    /* cmp edi, 1 */ /* 0x1009F1AD: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009F1D8; /* 0x1009F1B0: jbe 0x1009f1d8 */
L_1009F1B2:
    PUSH32(esp, 0x2Cu); /* 0x1009F1B2: push 0x2c */
    ecx = ebp + (-0x8); /* 0x1009F1B4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F1B7: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1009F1BC: push ebx */
    PUSH32(esp, edi); /* 0x1009F1BD: push edi */
    ecx = ebp + (-0x18); /* 0x1009F1BE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1009F1C1: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009F1C6: push eax */
    eax = ebp + (-0x20); /* 0x1009F1C7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F1CA: push eax */
    ecx = ebp + (-0x8); /* 0x1009F1CB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F1CE: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1009F1D3: mov ebx, dword ptr [eax] */
    esi = MEM32(eax + 0x4); /* 0x1009F1D5: mov esi, dword ptr [eax + 4] */
L_1009F1D8:
    PUSH32(esp, 0x3Eu); /* 0x1009F1D8: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1009F1DA: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009F1DD: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1009F1E0: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F1E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009F1E8: mov eax, dword ptr [0x100e02f0] */
    edx = MEM32(ebp + (-0x10)); /* 0x1009F1ED: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F1F0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F1F3: mov dword ptr [ebp - 8], edx */
    /* cmp MEM8(eax), 0x24u */ /* 0x1009F1F6: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F1F9: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F206; /* 0x1009F1FC: jne 0x1009f206 */
L_1009F1FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F1FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F1FF: mov dword ptr [0x100e02f0], eax */
    goto L_1009F227; /* 0x1009F204: jmp 0x1009f227 */
L_1009F206:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1009F206: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x10); /* 0x1009F209: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0x5Eu); /* 0x1009F20C: push 0x5e */
    MEM32(ebp + (-0x10)) = edx; /* 0x1009F20E: mov dword ptr [ebp - 0x10], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F211: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1009F216: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F219: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(0x100E02F0); /* 0x1009F21C: mov eax, dword ptr [0x100e02f0] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F221: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F224: mov dword ptr [ebp - 4], ecx */
L_1009F227:
    /* cmp MEM8(eax), 0 */ /* 0x1009F227: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F234; /* 0x1009F22A: je 0x1009f234 */
L_1009F22C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F22C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F22D: mov dword ptr [0x100e02f0], eax */
    goto L_1009F244; /* 0x1009F232: jmp 0x1009f244 */
L_1009F234:
    PUSH32(esp, 1); /* 0x1009F234: push 1 */
    ecx = ebp + (-0x8); /* 0x1009F236: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009F239: call 0x1002374c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F23E: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1009F241: mov edx, dword ptr [ebp - 8] */
L_1009F244:
    eax = MEM32(ebp + 0x8); /* 0x1009F244: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1009F247: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x1009F24D: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1009F24F: mov dword ptr [eax + 4], ecx */
    goto L_1009F2D3; /* 0x1009F252: jmp 0x1009f2d3 */
L_1009F254:
    PUSH32(esp, 1); /* 0x1009F254: push 1 */
    goto L_1009F26A; /* 0x1009F256: jmp 0x1009f26a */
L_1009F258:
    eax = MEM32(ebp + 0xC); /* 0x1009F258: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1009F2DCu; /* 0x1009F25B: mov dword ptr [eax], 0x1009f2dc */
    goto L_1009F287; /* 0x1009F261: jmp 0x1009f287 */
L_1009F263:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F263: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F277; /* 0x1009F266: je 0x1009f277 */
L_1009F268:
    PUSH32(esp, 2); /* 0x1009F268: push 2 */
L_1009F26A:
    ecx = MEM32(ebp + 0x8); /* 0x1009F26A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F26D: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F272: mov eax, dword ptr [ebp + 8] */
    goto L_1009F2D3; /* 0x1009F275: jmp 0x1009f2d3 */
L_1009F277:
    eax = MEM32(ebp + 0x10); /* 0x1009F277: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F27A: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x3Eu); /* 0x1009F27D: push 0x3e */
    MEM8(eax) = (uint8_t)(1); /* 0x1009F27F: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_1002A173); /* 0x1009F282: call 0x1002a173 */
    RECOMP_FLAGS_IN();
L_1009F287:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1009F287: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    goto L_1009F2C4; /* 0x1009F28D: jmp 0x1009f2c4 */
L_1009F28F:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F28F: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F292: jne 0x1009f2bd */
L_1009F294:
    ecx = MEM32(ebp + 0xC); /* 0x1009F294: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1009F297: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x26u */ /* 0x1009F299: cmp byte ptr [eax], 0x26 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2AA; /* 0x1009F29C: jne 0x1009f2aa */
L_1009F29E:
    MEM32(ecx) = 0x1009F2DCu; /* 0x1009F29E: mov dword ptr [ecx], 0x1009f2dc */
    edx = MEM32(0x100E02F0); /* 0x1009F2A4: mov edx, dword ptr [0x100e02f0] */
L_1009F2AA:
    eax = MEM32(ecx); /* 0x1009F2AA: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x2Au */ /* 0x1009F2AC: cmp byte ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F2AF: jne 0x1009f2bd */
L_1009F2B1:
    MEM32(ecx) = 0x1009F2E0u; /* 0x1009F2B1: mov dword ptr [ecx], 0x1009f2e0 */
    edx = MEM32(0x100E02F0); /* 0x1009F2B7: mov edx, dword ptr [0x100e02f0] */
L_1009F2BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F2BD: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1009F2BE: mov dword ptr [0x100e02f0], edx */
L_1009F2C4:
    eax = MEM32(ebp + 0x8); /* 0x1009F2C4: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1009F2C7: mov byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1009F2CA: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1009F2D1: mov dword ptr [eax], ebx */
L_1009F2D3:
    edi = POP32_VAL(esp); /* 0x1009F2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1009F2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009F2D5: pop ebx */
    esp = ebp; /* 0x1009F2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F135u);

L_1009F135:
    PUSH32(esp, ebp); /* 0x1009F135: push ebp */
    ebp = esp; /* 0x1009F136: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1009F138: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(0x100E02F0); /* 0x1009F13B: mov edx, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x1009F141: push ebx */
    PUSH32(esp, esi); /* 0x1009F142: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x1009F143: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009F146: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF0000u);
    esi = esi & 0xFFFF0000u; /* 0x1009F148: and esi, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009F14E: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F151: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1009F152: mov dword ptr [ebp - 4], esi */
    MEM32(0x100E02F0) = edx; /* 0x1009F155: mov dword ptr [0x100e02f0], edx */
    PUSH32(esp, edi); /* 0x1009F15B: push edi */
    SET_LO8(ecx, MEM8(edx)); /* 0x1009F15C: mov cl, byte ptr [edx] */
    edi = (int32_t)(int8_t)LO8(ecx); /* 0x1009F15E: movsx edi, cl */
    eax = edi; /* 0x1009F161: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1009F163: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F28F; /* 0x1009F166: je 0x1009f28f */
L_1009F16C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F16C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F263; /* 0x1009F16D: je 0x1009f263 */
L_1009F173:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009F173: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009F258; /* 0x1009F174: je 0x1009f258 */
L_1009F17A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F17A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F17C: je 0x1009f254 */
L_1009F182:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1009F182: mov al, byte ptr [edx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F185: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F254; /* 0x1009F187: je 0x1009f254 */
L_1009F18D:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F18D: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F268; /* 0x1009F190: jne 0x1009f268 */
L_1009F196:
    ecx = edi + (-0x30); /* 0x1009F196: lea ecx, [edi - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009F199: add edx, 2 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1009F19C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1009F19C: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1009F19F: add ecx, -0x30 */
    _flag_k = FK_ADD;
    edi = (int32_t)(int8_t)LO8(eax); /* 0x1009F1A2: movsx edi, al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1009F1A5: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = edx; /* 0x1009F1A7: mov dword ptr [0x100e02f0], edx */
    /* cmp edi, 1 */ /* 0x1009F1AD: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009F1D8; /* 0x1009F1B0: jbe 0x1009f1d8 */
L_1009F1B2:
    PUSH32(esp, 0x2Cu); /* 0x1009F1B2: push 0x2c */
    ecx = ebp + (-0x8); /* 0x1009F1B4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F1B7: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1009F1BC: push ebx */
    PUSH32(esp, edi); /* 0x1009F1BD: push edi */
    ecx = ebp + (-0x18); /* 0x1009F1BE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A881); /* 0x1009F1C1: call 0x1002a881 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009F1C6: push eax */
    eax = ebp + (-0x20); /* 0x1009F1C7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F1CA: push eax */
    ecx = ebp + (-0x8); /* 0x1009F1CB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F1CE: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1009F1D3: mov ebx, dword ptr [eax] */
    esi = MEM32(eax + 0x4); /* 0x1009F1D5: mov esi, dword ptr [eax + 4] */
L_1009F1D8:
    PUSH32(esp, 0x3Eu); /* 0x1009F1D8: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1009F1DA: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009F1DD: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1009F1E0: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F1E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009F1E8: mov eax, dword ptr [0x100e02f0] */
    edx = MEM32(ebp + (-0x10)); /* 0x1009F1ED: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F1F0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F1F3: mov dword ptr [ebp - 8], edx */
    /* cmp MEM8(eax), 0x24u */ /* 0x1009F1F6: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F1F9: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F206; /* 0x1009F1FC: jne 0x1009f206 */
L_1009F1FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F1FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F1FF: mov dword ptr [0x100e02f0], eax */
    goto L_1009F227; /* 0x1009F204: jmp 0x1009f227 */
L_1009F206:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1009F206: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x10); /* 0x1009F209: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0x5Eu); /* 0x1009F20C: push 0x5e */
    MEM32(ebp + (-0x10)) = edx; /* 0x1009F20E: mov dword ptr [ebp - 0x10], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F211: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1009F216: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F219: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(0x100E02F0); /* 0x1009F21C: mov eax, dword ptr [0x100e02f0] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009F221: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F224: mov dword ptr [ebp - 4], ecx */
L_1009F227:
    /* cmp MEM8(eax), 0 */ /* 0x1009F227: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F234; /* 0x1009F22A: je 0x1009f234 */
L_1009F22C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F22C: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F22D: mov dword ptr [0x100e02f0], eax */
    goto L_1009F244; /* 0x1009F232: jmp 0x1009f244 */
L_1009F234:
    PUSH32(esp, 1); /* 0x1009F234: push 1 */
    ecx = ebp + (-0x8); /* 0x1009F236: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002374C); /* 0x1009F239: call 0x1002374c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F23E: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1009F241: mov edx, dword ptr [ebp - 8] */
L_1009F244:
    eax = MEM32(ebp + 0x8); /* 0x1009F244: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x1009F247: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x1009F24D: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1009F24F: mov dword ptr [eax + 4], ecx */
    goto L_1009F2D3; /* 0x1009F252: jmp 0x1009f2d3 */
L_1009F254:
    PUSH32(esp, 1); /* 0x1009F254: push 1 */
    goto L_1009F26A; /* 0x1009F256: jmp 0x1009f26a */
L_1009F258:
    eax = MEM32(ebp + 0xC); /* 0x1009F258: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1009F2DCu; /* 0x1009F25B: mov dword ptr [eax], 0x1009f2dc */
    goto L_1009F287; /* 0x1009F261: jmp 0x1009f287 */
L_1009F263:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F263: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F277; /* 0x1009F266: je 0x1009f277 */
L_1009F268:
    PUSH32(esp, 2); /* 0x1009F268: push 2 */
L_1009F26A:
    ecx = MEM32(ebp + 0x8); /* 0x1009F26A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F26D: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009F272: mov eax, dword ptr [ebp + 8] */
    goto L_1009F2D3; /* 0x1009F275: jmp 0x1009f2d3 */
L_1009F277:
    eax = MEM32(ebp + 0x10); /* 0x1009F277: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F27A: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x3Eu); /* 0x1009F27D: push 0x3e */
    MEM8(eax) = (uint8_t)(1); /* 0x1009F27F: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_1002A173); /* 0x1009F282: call 0x1002a173 */
    RECOMP_FLAGS_IN();
L_1009F287:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x1009F287: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
    goto L_1009F2C4; /* 0x1009F28D: jmp 0x1009f2c4 */
L_1009F28F:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009F28F: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F292: jne 0x1009f2bd */
L_1009F294:
    ecx = MEM32(ebp + 0xC); /* 0x1009F294: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1009F297: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x26u */ /* 0x1009F299: cmp byte ptr [eax], 0x26 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2AA; /* 0x1009F29C: jne 0x1009f2aa */
L_1009F29E:
    MEM32(ecx) = 0x1009F2DCu; /* 0x1009F29E: mov dword ptr [ecx], 0x1009f2dc */
    edx = MEM32(0x100E02F0); /* 0x1009F2A4: mov edx, dword ptr [0x100e02f0] */
L_1009F2AA:
    eax = MEM32(ecx); /* 0x1009F2AA: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax), 0x2Au */ /* 0x1009F2AC: cmp byte ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F2BD; /* 0x1009F2AF: jne 0x1009f2bd */
L_1009F2B1:
    MEM32(ecx) = 0x1009F2E0u; /* 0x1009F2B1: mov dword ptr [ecx], 0x1009f2e0 */
    edx = MEM32(0x100E02F0); /* 0x1009F2B7: mov edx, dword ptr [0x100e02f0] */
L_1009F2BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009F2BD: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = edx; /* 0x1009F2BE: mov dword ptr [0x100e02f0], edx */
L_1009F2C4:
    eax = MEM32(ebp + 0x8); /* 0x1009F2C4: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1009F2C7: mov byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1009F2CA: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1009F2D1: mov dword ptr [eax], ebx */
L_1009F2D3:
    edi = POP32_VAL(esp); /* 0x1009F2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1009F2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009F2D5: pop ebx */
    esp = ebp; /* 0x1009F2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F2DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F2DCu);

L_1009F2DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5E909000u);
    eax = eax & 0x5E909000u; /* 0x1009F2DC: and eax, 0x5e909000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009F2E1: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009F2E4: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009F2E5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = 0x100E030Cu; /* 0x1009F2E8: mov ecx, 0x100e030c */
    PUSH32(esp, esi); /* 0x1009F2ED: push esi */
    PUSH32(esp, 0); /* 0x1009F2EE: push 0 */
    PUSH32(esp, 8); /* 0x1009F2F0: push 8 */
    RECOMP_CALL(sub_10022CB8); /* 0x1009F2F2: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009F2F7: mov esi, eax */
    /* test esi, esi */ /* 0x1009F2F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F30D; /* 0x1009F2FB: je 0x1009f30d */
L_1009F2FD:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009F2FD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1009F300: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009F304: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009F30F; /* 0x1009F30B: jmp 0x1009f30f */
L_1009F30D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009F30D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009F30F:
    PUSH32(esp, esi); /* 0x1009F30F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F310: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100237E1); /* 0x1009F313: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1009F318: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F31B: push eax */
    RECOMP_CALL(sub_1009F003); /* 0x1009F31C: call 0x1009f003 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009F321: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F324: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F327: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F32A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009F32D: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F330: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0x20u); /* 0x1009F333: push 0x20 */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F335: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009F33A: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x18); /* 0x1009F33D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009F340: push eax */
    ecx = ebp + (-0x8); /* 0x1009F341: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F344: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1009F349: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1009F34B: mov dword ptr [esi], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1009F34D: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1009F350: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ecx; /* 0x1009F353: mov dword ptr [esi + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1009F356: pop esi */
    esp = ebp; /* 0x1009F357: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F35A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F2E0u);

L_1009F2E0:
    esi = POP32_VAL(esp); /* 0x1009F2E0: pop esi */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009F2E1: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009F2E4: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009F2E5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = 0x100E030Cu; /* 0x1009F2E8: mov ecx, 0x100e030c */
    PUSH32(esp, esi); /* 0x1009F2ED: push esi */
    PUSH32(esp, 0); /* 0x1009F2EE: push 0 */
    PUSH32(esp, 8); /* 0x1009F2F0: push 8 */
    RECOMP_CALL(sub_10022CB8); /* 0x1009F2F2: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009F2F7: mov esi, eax */
    /* test esi, esi */ /* 0x1009F2F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F30D; /* 0x1009F2FB: je 0x1009f30d */
L_1009F2FD:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009F2FD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1009F300: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009F304: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009F30F; /* 0x1009F30B: jmp 0x1009f30f */
L_1009F30D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009F30D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009F30F:
    PUSH32(esp, esi); /* 0x1009F30F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F310: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100237E1); /* 0x1009F313: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1009F318: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F31B: push eax */
    RECOMP_CALL(sub_1009F003); /* 0x1009F31C: call 0x1009f003 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009F321: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F324: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F327: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F32A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009F32D: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F330: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0x20u); /* 0x1009F333: push 0x20 */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F335: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009F33A: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x18); /* 0x1009F33D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009F340: push eax */
    ecx = ebp + (-0x8); /* 0x1009F341: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F344: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1009F349: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1009F34B: mov dword ptr [esi], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1009F34D: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1009F350: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ecx; /* 0x1009F353: mov dword ptr [esi + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1009F356: pop esi */
    esp = ebp; /* 0x1009F357: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F35A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F2E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F2E2u);

L_1009F2E2:
    PUSH32(esp, ebp); /* 0x1009F2E2: push ebp */
    ebp = esp; /* 0x1009F2E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009F2E5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = 0x100E030Cu; /* 0x1009F2E8: mov ecx, 0x100e030c */
    PUSH32(esp, esi); /* 0x1009F2ED: push esi */
    PUSH32(esp, 0); /* 0x1009F2EE: push 0 */
    PUSH32(esp, 8); /* 0x1009F2F0: push 8 */
    RECOMP_CALL(sub_10022CB8); /* 0x1009F2F2: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009F2F7: mov esi, eax */
    /* test esi, esi */ /* 0x1009F2F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F30D; /* 0x1009F2FB: je 0x1009f30d */
L_1009F2FD:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009F2FD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x1009F300: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009F304: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009F30F; /* 0x1009F30B: jmp 0x1009f30f */
L_1009F30D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009F30D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009F30F:
    PUSH32(esp, esi); /* 0x1009F30F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F310: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100237E1); /* 0x1009F313: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1009F318: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F31B: push eax */
    RECOMP_CALL(sub_1009F003); /* 0x1009F31C: call 0x1009f003 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009F321: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x1009F324: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F327: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F32A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1009F32D: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F330: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0x20u); /* 0x1009F333: push 0x20 */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F335: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009F33A: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x18); /* 0x1009F33D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009F340: push eax */
    ecx = ebp + (-0x8); /* 0x1009F341: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F344: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1009F349: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1009F34B: mov dword ptr [esi], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1009F34D: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1009F350: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ecx; /* 0x1009F353: mov dword ptr [esi + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1009F356: pop esi */
    esp = ebp; /* 0x1009F357: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F35A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F35B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F35Bu);

L_1009F35B:
    PUSH32(esp, ebp); /* 0x1009F35B: push ebp */
    ebp = esp; /* 0x1009F35C: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x1009F35E: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1009F363: sub esp, 0x38 */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009F366: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F368: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009F384; /* 0x1009F36A: jne 0x1009f384 */
L_1009F36C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009F36C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1009F36F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F371: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1009F374: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F379: add esp, 0xc */
    _flag_k = FK_ADD;
L_1009F37C:
    eax = MEM32(ebp + 0x8); /* 0x1009F37C: mov eax, dword ptr [ebp + 8] */
    goto L_1009F74D; /* 0x1009F37F: jmp 0x1009f74d */
L_1009F384:
    /* cmp LO8(ecx), 0x36u */ /* 0x1009F384: cmp cl, 0x36 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1009F38E; /* 0x1009F387: jl 0x1009f38e */
L_1009F389:
    /* cmp LO8(ecx), 0x39u */ /* 0x1009F389: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009F39F; /* 0x1009F38C: jle 0x1009f39f */
L_1009F38E:
    /* cmp LO8(ecx), 0x5Fu */ /* 0x1009F38E: cmp cl, 0x5f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F39F; /* 0x1009F391: je 0x1009f39f */
L_1009F393:
    ecx = MEM32(ebp + 0x8); /* 0x1009F393: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1009F396: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F398: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F37C; /* 0x1009F39D: jmp 0x1009f37c */
L_1009F39F:
    PUSH32(esp, ebx); /* 0x1009F39F: push ebx */
    ebx = (int32_t)(int8_t)LO8(ecx); /* 0x1009F3A0: movsx ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x36u; /* 0x1009F3A3: sub ebx, 0x36 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F3A6: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F3A7: mov dword ptr [0x100e02f0], eax */
    /* cmp ebx, 0x29u */ /* 0x1009F3AC: cmp ebx, 0x29 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F3DF; /* 0x1009F3AF: jne 0x1009f3df */
L_1009F3B1:
    SET_LO8(ecx, MEM8(eax)); /* 0x1009F3B1: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F3B3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F3CD; /* 0x1009F3B5: je 0x1009f3cd */
L_1009F3B7:
    ebx = (int32_t)(int8_t)LO8(ecx); /* 0x1009F3B7: movsx ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x3Du; /* 0x1009F3BA: sub ebx, 0x3d */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F3BD: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F3BE: mov dword ptr [0x100e02f0], eax */
    /* cmp ebx, 4 */ /* 0x1009F3C3: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009F3E8; /* 0x1009F3C6: jl 0x1009f3e8 */
L_1009F3C8:
    /* cmp ebx, 7 */ /* 0x1009F3C8: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1009F3E6; /* 0x1009F3CB: jmp 0x1009f3e6 */
L_1009F3CD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009F3CD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1009F3D0: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F3D2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1009F3D5: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F3DA: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1009F3FA; /* 0x1009F3DD: jmp 0x1009f3fa */
L_1009F3DF:
    /* test ebx, ebx */ /* 0x1009F3DF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009F3E8; /* 0x1009F3E1: js 0x1009f3e8 */
L_1009F3E3:
    /* cmp ebx, 3 */ /* 0x1009F3E3: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1009F3E6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_1009F3EB; /* 0x1009F3E6: jle 0x1009f3eb */
L_1009F3E8:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1009F3E8: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009F3EB:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1009F3EB: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F402; /* 0x1009F3EE: jne 0x1009f402 */
L_1009F3F0:
    ecx = MEM32(ebp + 0x8); /* 0x1009F3F0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1009F3F3: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F3F5: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1009F3FA:
    eax = MEM32(ebp + 0x8); /* 0x1009F3FA: mov eax, dword ptr [ebp + 8] */
    goto L_1009F74C; /* 0x1009F3FD: jmp 0x1009f74c */
L_1009F402:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1009F402: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0xFFFF0000u; /* 0x1009F406: and dword ptr [ebp - 0xc], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1009F40D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009F40E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009F411: push edi */
    edi = ebx; /* 0x1009F412: mov edi, ebx */
    eax = MEM32(esi); /* 0x1009F414: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F416: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x4); /* 0x1009F419: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F41C: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    edi = edi & 2; /* 0x1009F41F: and edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F501; /* 0x1009F422: je 0x1009f501 */
L_1009F428:
    eax = ebp + (-0x8); /* 0x1009F428: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F42B: push eax */
    eax = ebp + (-0x18); /* 0x1009F42C: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009F42F: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1009F430: push 0x1002a7cc */
    ecx = ebp + (-0x20); /* 0x1009F435: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009F438: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F43D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F43F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009F444: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F447: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009F44A: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F44D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1009F450: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1009F455: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F49D; /* 0x1009F458: je 0x1009f49d */
L_1009F45A:
    eax = ebp + (-0x30); /* 0x1009F45A: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1009F45D: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1009F45E: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F463: pop ecx */
    PUSH32(esp, eax); /* 0x1009F464: push eax */
    eax = ebp + (-0x20); /* 0x1009F465: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F468: push eax */
    PUSH32(esp, 0x20u); /* 0x1009F469: push 0x20 */
    ecx = ebp + (-0x38); /* 0x1009F46B: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F46E: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F473: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F475: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009F47A: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x18); /* 0x1009F47D: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009F480: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009F483: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009F486: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1009F489: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F48C: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F48D: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009F492: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F495: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009F498: mov eax, dword ptr [ebp - 0x14] */
    goto L_1009F4BF; /* 0x1009F49B: jmp 0x1009f4bf */
L_1009F49D:
    eax = ebp + (-0x8); /* 0x1009F49D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F4A0: push eax */
    eax = ebp + (-0x20); /* 0x1009F4A1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F4A4: push eax */
    PUSH32(esp, 1); /* 0x1009F4A5: push 1 */
    ecx = ebp + (-0x38); /* 0x1009F4A7: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F4AA: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F4AF: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F4B1: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009F4B6: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F4B9: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009F4BC: mov eax, dword ptr [ebp - 0x1c] */
L_1009F4BF:
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F4BF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1009F4C2: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009F4C7: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009F4C9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F575; /* 0x1009F4CB: je 0x1009f575 */
L_1009F4D1:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009F4D1: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F56E; /* 0x1009F4D4: jne 0x1009f56e */
L_1009F4DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009F4DA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009F4DB: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(0x100E0300); /* 0x1009F4E0: mov eax, dword ptr [0x100e0300] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1009F4E5: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1009F4E8: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x38); /* 0x1009F4EA: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F4ED: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F55D; /* 0x1009F4EE: je 0x1009f55d */
L_1009F4F0:
    RECOMP_CALL(sub_1009FFEC); /* 0x1009F4F0: call 0x1009ffec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F4F5: pop ecx */
    ecx = MEM32(eax); /* 0x1009F4F6: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1009F4F8: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1009F4FB: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009F4FE: mov dword ptr [ebp - 0xc], eax */
L_1009F501:
    /* test LO8(ebx), 4 */ /* 0x1009F501: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F5A1; /* 0x1009F504: je 0x1009f5a1 */
L_1009F50A:
    eax = MEM32(0x100E0300); /* 0x1009F50A: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009F50F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009F50F: shr eax, 1 */
    eax = ~eax; /* 0x1009F511: not eax */
    /* test LO8(eax), 1 */ /* 0x1009F513: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x38); /* 0x1009F515: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F518: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F592; /* 0x1009F519: je 0x1009f592 */
L_1009F51B:
    RECOMP_CALL(sub_1009EF67); /* 0x1009F51B: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F520: pop ecx */
    PUSH32(esp, eax); /* 0x1009F521: push eax */
    eax = ebp + (-0x20); /* 0x1009F522: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F525: push eax */
    PUSH32(esp, 0x20u); /* 0x1009F526: push 0x20 */
    ecx = ebp + (-0x30); /* 0x1009F528: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F52B: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F530: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F532: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009F537: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x18); /* 0x1009F53A: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009F53D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009F540: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009F543: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1009F546: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F549: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F54A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009F54F: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F552: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009F555: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F558: mov dword ptr [ebp - 4], eax */
    goto L_1009F5A1; /* 0x1009F55B: jmp 0x1009f5a1 */
L_1009F55D:
    RECOMP_CALL(sub_1009FFEC); /* 0x1009F55D: call 0x1009ffec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F562: pop ecx */
    PUSH32(esp, eax); /* 0x1009F563: push eax */
    ecx = ebp + (-0x10); /* 0x1009F564: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1009F567: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F501; /* 0x1009F56C: jmp 0x1009f501 */
L_1009F56E:
    PUSH32(esp, 2); /* 0x1009F56E: push 2 */
    goto L_1009F73F; /* 0x1009F570: jmp 0x1009f73f */
L_1009F575:
    eax = ebp + (-0x8); /* 0x1009F575: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F578: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009F579: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x38); /* 0x1009F57C: lea ecx, [ebp - 0x38] */
    PUSH32(esp, 1); /* 0x1009F57F: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F581: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F586: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F588: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    goto L_1009F747; /* 0x1009F58D: jmp 0x1009f747 */
L_1009F592:
    RECOMP_CALL(sub_1009EF67); /* 0x1009F592: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F597: pop ecx */
    PUSH32(esp, eax); /* 0x1009F598: push eax */
    ecx = ebp + (-0x8); /* 0x1009F599: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1009F59C: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
L_1009F5A1:
    eax = MEM32(0x100E0300); /* 0x1009F5A1: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009F5A6: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009F5A6: shr eax, 1 */
    eax = ~eax; /* 0x1009F5A8: not eax */
    /* test LO8(eax), 1 */ /* 0x1009F5AA: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F5D4; /* 0x1009F5AC: je 0x1009f5d4 */
L_1009F5AE:
    eax = ebp + (-0x8); /* 0x1009F5AE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F5B1: push eax */
    eax = ebp + (-0x38); /* 0x1009F5B2: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F5B5: push eax */
    eax = ebp + (-0x30); /* 0x1009F5B6: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1009F5B9: push eax */
    RECOMP_CALL(sub_1002B4F8); /* 0x1009F5BA: call 0x1002b4f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F5BF: pop ecx */
    ecx = eax; /* 0x1009F5C0: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F5C2: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1009F5C7: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1009F5C9: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009F5CC: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F5CF: mov dword ptr [ebp - 4], eax */
    goto L_1009F5E7; /* 0x1009F5D2: jmp 0x1009f5e7 */
L_1009F5D4:
    eax = ebp + (-0x38); /* 0x1009F5D4: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F5D7: push eax */
    RECOMP_CALL(sub_1002B4F8); /* 0x1009F5D8: call 0x1002b4f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F5DD: pop ecx */
    PUSH32(esp, eax); /* 0x1009F5DE: push eax */
    ecx = ebp + (-0x8); /* 0x1009F5DF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1009F5E2: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
L_1009F5E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009F5E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ebx */ /* 0x1009F5E9: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F628; /* 0x1009F5EB: je 0x1009f628 */
L_1009F5ED:
    eax = ebp + (-0x8); /* 0x1009F5ED: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F5F0: push eax */
    eax = ebp + (-0x20); /* 0x1009F5F1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F5F4: push eax */
    PUSH32(esp, 0x28u); /* 0x1009F5F5: push 0x28 */
    ecx = ebp + (-0x38); /* 0x1009F5F7: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F5FA: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F5FF: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F601: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009F606: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x18); /* 0x1009F609: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009F60C: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009F60F: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0x29u); /* 0x1009F612: push 0x29 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009F614: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F617: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009F61C: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009F61F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009F622: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009F625: mov dword ptr [ebp - 4], eax */
L_1009F628:
    PUSH32(esp, ebx); /* 0x1009F628: push ebx */
    PUSH32(esp, 8); /* 0x1009F629: push 8 */
    ecx = 0x100E030Cu; /* 0x1009F62B: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x1009F630: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009F635: mov esi, eax */
    /* test esi, esi */ /* 0x1009F637: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F649; /* 0x1009F639: je 0x1009f649 */
L_1009F63B:
    MEM8(esi + 0x4) = (uint8_t)(LO8(ebx)); /* 0x1009F63B: mov byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009F63E: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x1009F645: mov dword ptr [esi], ebx */
    goto L_1009F64B; /* 0x1009F647: jmp 0x1009f64b */
L_1009F649:
    esi = ebx; /* 0x1009F649: mov esi, ebx */
L_1009F64B:
    eax = ebp + (-0x28); /* 0x1009F64B: lea eax, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1009F64E: push esi */
    PUSH32(esp, eax); /* 0x1009F64F: push eax */
    RECOMP_CALL(sub_1002AA2C); /* 0x1009F650: call 0x1002aa2c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x38); /* 0x1009F655: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F658: push eax */
    RECOMP_CALL(sub_1002AA6B); /* 0x1009F659: call 0x1002aa6b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F65E: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x30); /* 0x1009F661: lea ecx, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1009F664: push eax */
    eax = ebp + (-0x20); /* 0x1009F665: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F668: push eax */
    PUSH32(esp, 0x28u); /* 0x1009F669: push 0x28 */
    RECOMP_CALL(sub_1002A173); /* 0x1009F66B: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F670: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F672: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1009F677: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x18); /* 0x1009F67A: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009F67D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009F680: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0x29u); /* 0x1009F683: push 0x29 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009F685: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F688: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1009F68D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1009F690: push eax */
    ecx = ebp + (-0x8); /* 0x1009F691: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F694: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0300); /* 0x1009F699: mov ecx, dword ptr [0x100e0300] */
    eax = ecx; /* 0x1009F69F: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1009F6A1: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1009F6A4: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F6BE; /* 0x1009F6A6: je 0x1009f6be */
L_1009F6A8:
    /* test edi, edi */ /* 0x1009F6A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F6BE; /* 0x1009F6AA: je 0x1009f6be */
L_1009F6AC:
    eax = ebp + (-0x10); /* 0x1009F6AC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F6AF: push eax */
    ecx = ebp + (-0x8); /* 0x1009F6B0: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F6B3: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0300); /* 0x1009F6B8: mov ecx, dword ptr [0x100e0300] */
L_1009F6BE:
    if (19u) _cf = (((ecx) >> 18) & 1u); /* 0x1009F6BE: shr ecx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((ecx >> 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 19u; /* 0x1009F6BE: shr ecx, 0x13 */
    eax = ebp + (-0x38); /* 0x1009F6C1: lea eax, [ebp - 0x38] */
    ecx = ~ecx; /* 0x1009F6C4: not ecx */
    PUSH32(esp, eax); /* 0x1009F6C6: push eax */
    /* test LO8(ecx), 1 */ /* 0x1009F6C7: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F6DD; /* 0x1009F6CA: je 0x1009f6dd */
L_1009F6CC:
    RECOMP_CALL(sub_1002AA9C); /* 0x1009F6CC: call 0x1002aa9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F6D1: pop ecx */
    PUSH32(esp, eax); /* 0x1009F6D2: push eax */
    ecx = ebp + (-0x8); /* 0x1009F6D3: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F6D6: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1009F6EC; /* 0x1009F6DB: jmp 0x1009f6ec */
L_1009F6DD:
    RECOMP_CALL(sub_1002AA9C); /* 0x1009F6DD: call 0x1002aa9c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F6E2: pop ecx */
    PUSH32(esp, eax); /* 0x1009F6E3: push eax */
    ecx = ebp + (-0x8); /* 0x1009F6E4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1009F6E7: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
L_1009F6EC:
    eax = MEM32(0x100E0300); /* 0x1009F6EC: mov eax, dword ptr [0x100e0300] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1009F6F1: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1009F6F1: shr eax, 8 */
    eax = ~eax; /* 0x1009F6F4: not eax */
    /* test LO8(eax), 1 */ /* 0x1009F6F6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x38); /* 0x1009F6F8: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009F6FB: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F70F; /* 0x1009F6FC: je 0x1009f70f */
L_1009F6FE:
    RECOMP_CALL(sub_1002AACE); /* 0x1009F6FE: call 0x1002aace */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F703: pop ecx */
    PUSH32(esp, eax); /* 0x1009F704: push eax */
    ecx = ebp + (-0x8); /* 0x1009F705: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F708: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    goto L_1009F71E; /* 0x1009F70D: jmp 0x1009f71e */
L_1009F70F:
    RECOMP_CALL(sub_1002AACE); /* 0x1009F70F: call 0x1002aace */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F714: pop ecx */
    PUSH32(esp, eax); /* 0x1009F715: push eax */
    ecx = ebp + (-0x8); /* 0x1009F716: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1009F719: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
L_1009F71E:
    /* test esi, esi */ /* 0x1009F71E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F73D; /* 0x1009F720: je 0x1009f73d */
L_1009F722:
    eax = MEM32(ebp + (-0x8)); /* 0x1009F722: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1009F725: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1009F727: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1009F72A: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009F72D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1009F730: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x1009F733: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1009F735: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax + 0x4) = ecx; /* 0x1009F738: mov dword ptr [eax + 4], ecx */
    goto L_1009F74A; /* 0x1009F73B: jmp 0x1009f74a */
L_1009F73D:
    PUSH32(esp, 3); /* 0x1009F73D: push 3 */
L_1009F73F:
    ecx = MEM32(ebp + 0x8); /* 0x1009F73F: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F742: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1009F747:
    eax = MEM32(ebp + 0x8); /* 0x1009F747: mov eax, dword ptr [ebp + 8] */
L_1009F74A:
    edi = POP32_VAL(esp); /* 0x1009F74A: pop edi */
    esi = POP32_VAL(esp); /* 0x1009F74B: pop esi */
L_1009F74C:
    ebx = POP32_VAL(esp); /* 0x1009F74C: pop ebx */
L_1009F74D:
    esp = ebp; /* 0x1009F74D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009F74F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F750: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F772(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F772u);

L_1009F772:
    ecx = MEM32(0x100E02F0); /* 0x1009F772: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009F778: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009F77A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009F781; /* 0x1009F77C: jne 0x1009f781 */
L_1009F77E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009F77E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F780: ret  */
L_1009F781:
    /* cmp LO8(eax), 0x30u */ /* 0x1009F781: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1009F797; /* 0x1009F783: jl 0x1009f797 */
L_1009F785:
    /* cmp LO8(eax), 0x39u */ /* 0x1009F785: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1009F797; /* 0x1009F787: jg 0x1009f797 */
L_1009F789:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009F789: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Fu; /* 0x1009F78C: sub eax, 0x2f */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009F78F: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009F790: mov dword ptr [0x100e02f0], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F796: ret  */
L_1009F797:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1009F797: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009F7BB; /* 0x1009F799: jmp 0x1009f7bb */
L_1009F79B:
    /* test LO8(eax), LO8(eax) */ /* 0x1009F79B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F77E; /* 0x1009F79D: je 0x1009f77e */
L_1009F79F:
    /* cmp LO8(eax), 0x41u */ /* 0x1009F79F: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1009F7CF; /* 0x1009F7A1: jl 0x1009f7cf */
L_1009F7A3:
    /* cmp LO8(eax), 0x50u */ /* 0x1009F7A3: cmp al, 0x50 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1009F7CF; /* 0x1009F7A5: jg 0x1009f7cf */
L_1009F7A7:
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1009F7A7: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1009F7A7: shl edx, 4 */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009F7AA: movsx eax, al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFBFu; /* 0x1009F7AD: add edx, -0x41 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1009F7B0: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009F7B2: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009F7B3: mov dword ptr [0x100e02f0], ecx */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009F7B9: mov al, byte ptr [ecx] */
L_1009F7BB:
    /* cmp LO8(eax), 0x40u */ /* 0x1009F7BB: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F79B; /* 0x1009F7BD: jne 0x1009f79b */
L_1009F7BF:
    SET_LO8(eax, MEM8(ecx)); /* 0x1009F7BF: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009F7C1: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009F7C2: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x1009F7C8: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F7CF; /* 0x1009F7CA: jne 0x1009f7cf */
L_1009F7CC:
    eax = edx; /* 0x1009F7CC: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F7CE: ret  */
L_1009F7CF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1009F7CF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009F7D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009F7D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009F7D3u);

L_1009F7D3:
    PUSH32(esp, ebp); /* 0x1009F7D3: push ebp */
    ebp = esp; /* 0x1009F7D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x1009F7D6: sub esp, 0x90 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x1009F7DC: mov ecx, dword ptr [ebp - 4] */
    edx = 0xFFFF0000u; /* 0x1009F7DF: mov edx, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1009F7E4: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1009F7E7: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1009F7E9: push ebx */
    PUSH32(esp, esi); /* 0x1009F7EA: push esi */
    esi = MEM32(0x100E02F0); /* 0x1009F7EB: mov esi, dword ptr [0x100e02f0] */
    PUSH32(esp, edi); /* 0x1009F7F1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1009F7F2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009F7F4: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1009F7F7: mov dword ptr [ebp - 8], edi */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1009F7FA: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009F7FD: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edi; /* 0x1009F7FE: mov dword ptr [ebp - 0x10], edi */
    MEM32(0x100E02F0) = esi; /* 0x1009F801: mov dword ptr [0x100e02f0], esi */
    /* cmp eax, 0x41u */ /* 0x1009F807: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009F999; /* 0x1009F80A: jg 0x1009f999 */
L_1009F810:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FD6E; /* 0x1009F810: je 0x1009fd6e */
L_1009F816:
    /* test eax, eax */ /* 0x1009F816: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F980; /* 0x1009F818: je 0x1009f980 */
L_1009F81E:
    /* cmp eax, 0x2Fu */ /* 0x1009F81E: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F821: jle 0x1009fc77 */
L_1009F827:
    /* cmp eax, 0x31u */ /* 0x1009F827: cmp eax, 0x31 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009F87A; /* 0x1009F82A: jle 0x1009f87a */
L_1009F82C:
    /* cmp eax, 0x39u */ /* 0x1009F82C: cmp eax, 0x39 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F82F: jg 0x1009fc77 */
L_1009F835:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009F835: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FCE8)); /* 0x1009F839: push dword ptr [eax*4 + 0x1009fce8] */
L_1009F840:
    ecx = ebp + (-0x8); /* 0x1009F840: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009F843: call 0x10022c2c */
    RECOMP_FLAGS_IN();
L_1009F848:
    edi = MEM32(ebp + (-0x8)); /* 0x1009F848: mov edi, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1009F84B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FD9B; /* 0x1009F84D: je 0x1009fd9b */
L_1009F853:
    eax = ebp + (-0x8); /* 0x1009F853: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F856: push eax */
    eax = ebp + (-0x28); /* 0x1009F857: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1009F85A: push eax */
    PUSH32(esp, 0x1009FF08u); /* 0x1009F85B: push 0x1009ff08 */
    ecx = ebp + (-0x30); /* 0x1009F860: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009F863: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F868: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F86A: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x28)); /* 0x1009F86F: mov edi, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1009F872: mov ecx, dword ptr [ebp - 0x24] */
    goto L_1009FD9E; /* 0x1009F875: jmp 0x1009fd9e */
L_1009F87A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1009F87A: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x1009F87D: mov ebx, edi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009F87F: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x1009F882: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009F90C; /* 0x1009F885: je 0x1009f90c */
L_1009F88B:
    eax = ebp + (-0x88); /* 0x1009F88B: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1009F891: push eax */
    RECOMP_CALL(sub_100300A6); /* 0x1009F892: call 0x100300a6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009F897: pop ecx */
    PUSH32(esp, eax); /* 0x1009F898: push eax */
    eax = ebp + (-0x28); /* 0x1009F899: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1009F89C: push eax */
    PUSH32(esp, 0x3Cu); /* 0x1009F89D: push 0x3c */
    ecx = ebp + (-0x20); /* 0x1009F89F: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F8A2: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F8A7: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F8A9: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1009F8AE: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1009F8B1: push eax */
    ecx = ebp + (-0x10); /* 0x1009F8B2: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F8B5: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1009F8BA: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x1009F8BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F8D4; /* 0x1009F8BF: je 0x1009f8d4 */
L_1009F8C1:
    eax = MEM32(ecx); /* 0x1009F8C1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1009F8C3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Eu */ /* 0x1009F8C6: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F8D4; /* 0x1009F8C8: jne 0x1009f8d4 */
L_1009F8CA:
    PUSH32(esp, 0x20u); /* 0x1009F8CA: push 0x20 */
    ecx = ebp + (-0x10); /* 0x1009F8CC: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F8CF: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1009F8D4:
    PUSH32(esp, 0x3Eu); /* 0x1009F8D4: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1009F8D6: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009F8D9: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1009F8DE: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1009F8E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F8E8; /* 0x1009F8E3: je 0x1009f8e8 */
L_1009F8E5:
    MEM8(eax) = (uint8_t)(1); /* 0x1009F8E5: mov byte ptr [eax], 1 */
L_1009F8E8:
    esi = MEM32(0x100E02F0); /* 0x1009F8E8: mov esi, dword ptr [0x100e02f0] */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1009F8EE: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F902; /* 0x1009F8F0: jne 0x1009f902 */
L_1009F8F2:
    eax = MEM32(ebp + 0x8); /* 0x1009F8F2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1009F8F5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x1009F8F8: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1009F8FA: mov ecx, dword ptr [ebp - 0xc] */
    goto L_1009FDA3; /* 0x1009F8FD: jmp 0x1009fda3 */
L_1009F902:
    ebx = MEM32(ebp + (-0x10)); /* 0x1009F902: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009F905: inc esi */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = esi; /* 0x1009F906: mov dword ptr [0x100e02f0], esi */
L_1009F90C:
    PUSH32(esp, edi); /* 0x1009F90C: push edi */
    eax = ebp + (-0x90); /* 0x1009F90D: lea eax, [ebp - 0x90] */
    PUSH32(esp, edi); /* 0x1009F913: push edi */
    PUSH32(esp, eax); /* 0x1009F914: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x1009F915: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009F91A: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1009F91D: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x1009F91F: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009F922: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1009F925: mov dword ptr [ebp - 4], edx */
    MEM32(0x100E02F0) = esi; /* 0x1009F928: mov dword ptr [0x100e02f0], esi */
    /* test ecx, ecx */ /* 0x1009F92E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F95D; /* 0x1009F930: je 0x1009f95d */
L_1009F932:
    /* cmp MEM8(esi + (-0x1)), 0x31u */ /* 0x1009F932: cmp byte ptr [esi - 1], 0x31 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x1))) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009F95D; /* 0x1009F936: jne 0x1009f95d */
L_1009F938:
    eax = ebp + (-0x8); /* 0x1009F938: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009F93B: push eax */
    eax = ebp + (-0x20); /* 0x1009F93C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009F93F: push eax */
    PUSH32(esp, 0x7Eu); /* 0x1009F940: push 0x7e */
    ecx = ebp + (-0x28); /* 0x1009F942: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1002A173); /* 0x1009F945: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009F94A: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009F94C: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x1009F951: mov ecx, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1009F954: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009F957: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1009F95A: mov dword ptr [ebp - 4], edx */
L_1009F95D:
    /* test ebx, ebx */ /* 0x1009F95D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F973; /* 0x1009F95F: je 0x1009f973 */
L_1009F961:
    eax = ebp + (-0x10); /* 0x1009F961: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009F964: push eax */
    ecx = ebp + (-0x8); /* 0x1009F965: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009F968: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1009F96D: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009F970: mov ecx, dword ptr [ebp - 8] */
L_1009F973:
    eax = MEM32(ebp + 0x8); /* 0x1009F973: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009F976: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1009F978: mov dword ptr [eax + 4], edx */
    goto L_1009FDA6; /* 0x1009F97B: jmp 0x1009fda6 */
L_1009F980:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009F980: dec esi */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = esi; /* 0x1009F981: mov dword ptr [0x100e02f0], esi */
L_1009F987:
    PUSH32(esp, 1); /* 0x1009F987: push 1 */
L_1009F989:
    ecx = MEM32(ebp + 0x8); /* 0x1009F989: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009F98C: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1009F991:
    eax = MEM32(ebp + 0x8); /* 0x1009F991: mov eax, dword ptr [ebp + 8] */
    goto L_1009FDA6; /* 0x1009F994: jmp 0x1009fda6 */
L_1009F999:
    /* cmp eax, 0x42u */ /* 0x1009F999: cmp eax, 0x42 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FD6B; /* 0x1009F99C: je 0x1009fd6b */
L_1009F9A2:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F9A2: jle 0x1009fc77 */
L_1009F9A8:
    /* cmp eax, 0x5Au */ /* 0x1009F9A8: cmp eax, 0x5a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FD6E; /* 0x1009F9AB: jle 0x1009fd6e */
L_1009F9B1:
    /* cmp eax, 0x5Fu */ /* 0x1009F9B1: cmp eax, 0x5f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F9B4: jne 0x1009fc77 */
L_1009F9BA:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1009F9BA: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009F9BD: inc esi */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = esi; /* 0x1009F9BE: mov dword ptr [0x100e02f0], esi */
    /* cmp eax, 0x4Fu */ /* 0x1009F9C4: cmp eax, 0x4f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FAA2; /* 0x1009F9C7: jg 0x1009faa2 */
L_1009F9CD:
    /* cmp eax, 0x44u */ /* 0x1009F9CD: cmp eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1009FD4B; /* 0x1009F9D0: jge 0x1009fd4b */
L_1009F9D6:
    /* cmp eax, 0x39u */ /* 0x1009F9D6: cmp eax, 0x39 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FA41; /* 0x1009F9D9: jg 0x1009fa41 */
L_1009F9DB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FA1D; /* 0x1009F9DB: je 0x1009fa1d */
L_1009F9DD:
    /* test eax, eax */ /* 0x1009F9DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F980; /* 0x1009F9DF: je 0x1009f980 */
L_1009F9E1:
    /* cmp eax, 0x2Fu */ /* 0x1009F9E1: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F9E4: jle 0x1009fc77 */
L_1009F9EA:
    /* cmp eax, 0x36u */ /* 0x1009F9EA: cmp eax, 0x36 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FA0D; /* 0x1009F9ED: jle 0x1009fa0d */
L_1009F9EF:
    /* cmp eax, 0x38u */ /* 0x1009F9EF: cmp eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009F9F2: jg 0x1009fc77 */
L_1009F9F8:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009F9F8: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD78)); /* 0x1009F9FC: push dword ptr [eax*4 + 0x1009fd78] */
L_1009FA03:
    ecx = MEM32(ebp + 0x8); /* 0x1009FA03: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009FA06: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F991; /* 0x1009FA0B: jmp 0x1009f991 */
L_1009FA0D:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FA0D: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD78)); /* 0x1009FA11: push dword ptr [eax*4 + 0x1009fd78] */
    RECOMP_BACKEDGE();
    goto L_1009F840; /* 0x1009FA18: jmp 0x1009f840 */
L_1009FA1D:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FA1D: movsx eax, byte ptr [esi - 1] */
    ecx = ebp + (-0x20); /* 0x1009FA21: lea ecx, [ebp - 0x20] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD78)); /* 0x1009FA24: push dword ptr [eax*4 + 0x1009fd78] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009FA2B: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1009FA30: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)((edx | 0x8000u)); _flag_b = (uint32_t)((edx | 0x8000u));
    edx = edx | 0x8000u; /* 0x1009FA33: or edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009FA39:
    ecx = MEM32(ebp + (-0x20)); /* 0x1009FA39: mov ecx, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_1009F973; /* 0x1009FA3C: jmp 0x1009f973 */
L_1009FA41:
    /* cmp eax, 0x3Fu */ /* 0x1009FA41: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FA7F; /* 0x1009FA44: je 0x1009fa7f */
L_1009FA46:
    /* cmp eax, 0x40u */ /* 0x1009FA46: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FA49: jle 0x1009fc77 */
L_1009FA4F:
    /* cmp eax, 0x42u */ /* 0x1009FA4F: cmp eax, 0x42 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FD4B; /* 0x1009FA52: jle 0x1009fd4b */
L_1009FA58:
    /* cmp eax, 0x43u */ /* 0x1009FA58: cmp eax, 0x43 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FA5B: jne 0x1009fc77 */
L_1009FA61:
    PUSH32(esp, 1); /* 0x1009FA61: push 1 */
    PUSH32(esp, 0x1009FF14u); /* 0x1009FA63: push 0x1009ff14 */
L_1009FA68:
    eax = ebp + (-0x20); /* 0x1009FA68: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1009FA6B: push eax */
    RECOMP_CALL(sub_1009FF49); /* 0x1009FA6C: call 0x1009ff49 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1009FA71: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009FA74: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | 0x1000u)); _flag_b = (uint32_t)((edx | 0x1000u));
    edx = edx | 0x1000u; /* 0x1009FA77: or edx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1009FA39; /* 0x1009FA7D: jmp 0x1009fa39 */
L_1009FA7F:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1009FA7F: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009FA82: inc esi */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = esi; /* 0x1009FA83: mov dword ptr [0x100e02f0], esi */
    /* test eax, eax */ /* 0x1009FA89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F980; /* 0x1009FA8B: je 0x1009f980 */
L_1009FA91:
    /* cmp eax, 0x30u */ /* 0x1009FA91: cmp eax, 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FA94: jne 0x1009fc77 */
L_1009FA9A:
    PUSH32(esp, edi); /* 0x1009FA9A: push edi */
    PUSH32(esp, 0x100626ECu); /* 0x1009FA9B: push 0x100626ec */
    RECOMP_BACKEDGE();
    goto L_1009FA68; /* 0x1009FAA0: jmp 0x1009fa68 */
L_1009FAA2:
    /* cmp eax, 0x54u */ /* 0x1009FAA2: cmp eax, 0x54 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FC92; /* 0x1009FAA5: jg 0x1009fc92 */
L_1009FAAB:
    /* cmp eax, 0x53u */ /* 0x1009FAAB: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1009FD4B; /* 0x1009FAAE: jge 0x1009fd4b */
L_1009FAB4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x50u; /* 0x1009FAB4: sub eax, 0x50 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009FC40; /* 0x1009FAB7: je 0x1009fc40 */
L_1009FABD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FABD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009FD9E; /* 0x1009FABE: je 0x1009fd9e */
L_1009FAC4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FAC4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FAC5: jne 0x1009fc77 */
L_1009FACB:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FACB: movsx eax, byte ptr [esi - 1] */
    ecx = ebp + (-0x8); /* 0x1009FACF: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD5C)); /* 0x1009FAD2: push dword ptr [eax*4 + 0x1009fd5c] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009FAD9: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FADE: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(eax)); /* 0x1009FAE3: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1009FAE5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FAFB; /* 0x1009FAE7: jne 0x1009fafb */
L_1009FAE9:
    PUSH32(esp, 1); /* 0x1009FAE9: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FAEB: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x1009FAEE: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1009EC32); /* 0x1009FAF1: call 0x1009ec32 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F991; /* 0x1009FAF6: jmp 0x1009f991 */
L_1009FAFB:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1009FAFB: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1009FAFE: sub eax, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FB01: js 0x1009fc77 */
L_1009FB07:
    /* cmp eax, 5 */ /* 0x1009FB07: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FB0A: jae 0x1009fc77 */
L_1009FB10:
    PUSH32(esp, MEM32(eax * 4 + 0x1009FEF0)); /* 0x1009FB10: push dword ptr [eax*4 + 0x1009fef0] */
    ecx = ebp + (-0x10); /* 0x1009FB17: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009FB1A: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1009FB1F: mov ecx, dword ptr [0x100e02f0] */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x1009FB25: movsx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FB28: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FB29: mov dword ptr [0x100e02f0], ecx */
    /* cmp eax, 0x30u */ /* 0x1009FB2F: cmp eax, 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FC01; /* 0x1009FB32: je 0x1009fc01 */
L_1009FB38:
    /* cmp eax, 0x31u */ /* 0x1009FB38: cmp eax, 0x31 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FB55; /* 0x1009FB3B: je 0x1009fb55 */
L_1009FB3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFCEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFCEu; /* 0x1009FB3D: add eax, -0x32 */
    _flag_k = FK_ADD;
    /* cmp eax, 2 */ /* 0x1009FB40: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009FC7E; /* 0x1009FB43: jbe 0x1009fc7e */
L_1009FB49:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1009FB49: dec ecx */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FB4A: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1009F987; /* 0x1009FB50: jmp 0x1009f987 */
L_1009FB55:
    eax = MEM32(ebp + (-0x8)); /* 0x1009FB55: mov eax, dword ptr [ebp - 8] */
    ecx = ebp + (-0x18); /* 0x1009FB58: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009FB5B: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1009FB5E: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009FB61: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x1009FB64: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009FB67: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FB68: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1009FB6D: push 0x2c */
    eax = ebp + (-0x48); /* 0x1009FB6F: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1009FB72: push eax */
    eax = ebp + (-0x38); /* 0x1009FB73: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1009FB76: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1009FB77: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FB7C: pop ecx */
    ecx = eax; /* 0x1009FB7D: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1009FB7F: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009FB84: push eax */
    ecx = ebp + (-0x18); /* 0x1009FB85: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FB88: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1009FB8D: push 0x2c */
    eax = ebp + (-0x58); /* 0x1009FB8F: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1009FB92: push eax */
    eax = ebp + (-0x78); /* 0x1009FB93: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1009FB96: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1009FB97: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FB9C: pop ecx */
    ecx = eax; /* 0x1009FB9D: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1009FB9F: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009FBA4: push eax */
    ecx = ebp + (-0x18); /* 0x1009FBA5: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FBA8: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1009FBAD: push 0x2c */
    eax = ebp + (-0x68); /* 0x1009FBAF: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1009FBB2: push eax */
    eax = ebp + (-0x40); /* 0x1009FBB3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1009FBB6: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1009FBB7: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FBBC: pop ecx */
    ecx = eax; /* 0x1009FBBD: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1009FBBF: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009FBC4: push eax */
    ecx = ebp + (-0x18); /* 0x1009FBC5: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FBC8: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1009FBCD: push 0x29 */
    eax = ebp + (-0x50); /* 0x1009FBCF: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1009FBD2: push eax */
    eax = ebp + (-0x60); /* 0x1009FBD3: lea eax, [ebp - 0x60] */
    PUSH32(esp, edi); /* 0x1009FBD6: push edi */
    PUSH32(esp, eax); /* 0x1009FBD7: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FBD8: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FBDD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009FBDE: pop ecx */
    ecx = eax; /* 0x1009FBDF: mov ecx, eax */
    RECOMP_CALL(sub_1002AC44); /* 0x1009FBE1: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009FBE6: push eax */
    ecx = ebp + (-0x18); /* 0x1009FBE7: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FBEA: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x1009FBEF: push 0x27 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FBF1: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x1009FBF4: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002AC44); /* 0x1009FBF7: call 0x1002ac44 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F991; /* 0x1009FBFC: jmp 0x1009f991 */
L_1009FC01:
    eax = ebp + (-0x28); /* 0x1009FC01: lea eax, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1009FC04: push edi */
    PUSH32(esp, eax); /* 0x1009FC05: push eax */
    RECOMP_CALL(sub_100237E1); /* 0x1009FC06: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1009FC0B: mov eax, dword ptr [ebp - 0x28] */
    ecx = POP32_VAL(esp); /* 0x1009FC0E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009FC0F: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009FC10: mov dword ptr [ebp - 0x18], eax */
    ecx = ebp + (-0x18); /* 0x1009FC13: lea ecx, [ebp - 0x18] */
    eax = MEM32(ebp + (-0x24)); /* 0x1009FC16: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, 0x20u); /* 0x1009FC19: push 0x20 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009FC1B: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1009FC1E: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009FC23: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x20); /* 0x1009FC26: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1009FC29: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1009FC2C: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009FC2F: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x8); /* 0x1009FC32: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009FC35: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FC36: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1009FC3B: lea ecx, [ebp - 0x20] */
    goto L_1009FC81; /* 0x1009FC3E: jmp 0x1009fc81 */
L_1009FC40:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FC40: movsx eax, byte ptr [esi - 1] */
    ecx = ebp + (-0x8); /* 0x1009FC44: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD5C)); /* 0x1009FC47: push dword ptr [eax*4 + 0x1009fd5c] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009FC4E: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1009FC53: push edi */
    eax = ebp + (-0x70); /* 0x1009FC54: lea eax, [ebp - 0x70] */
    PUSH32(esp, edi); /* 0x1009FC57: push edi */
    PUSH32(esp, eax); /* 0x1009FC58: push eax */
    RECOMP_CALL(sub_1009F7D3); /* 0x1009FC59: call 0x1009f7d3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009FC5E: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1009FC61: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1009FC63: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1009FC66: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009FC69: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x1009FC6C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FC7E; /* 0x1009FC6E: je 0x1009fc7e */
L_1009FC70:
    /* test eax, 0x400u */ /* 0x1009FC70: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FC7E; /* 0x1009FC75: je 0x1009fc7e */
L_1009FC77:
    PUSH32(esp, 2); /* 0x1009FC77: push 2 */
    RECOMP_BACKEDGE();
    goto L_1009F989; /* 0x1009FC79: jmp 0x1009f989 */
L_1009FC7E:
    ecx = ebp + (-0x8); /* 0x1009FC7E: lea ecx, [ebp - 8] */
L_1009FC81:
    eax = ebp + (-0x10); /* 0x1009FC81: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009FC84: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FC85: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x1009FC88: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009F991; /* 0x1009FC8D: jmp 0x1009f991 */
L_1009FC92:
    /* cmp eax, 0x56u */ /* 0x1009FC92: cmp eax, 0x56 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FD5B; /* 0x1009FC95: jle 0x1009fd5b */
L_1009FC9B:
    /* cmp eax, 0x57u */ /* 0x1009FC9B: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FC9E: jle 0x1009fc77 */
L_1009FCA0:
    /* cmp eax, 0x59u */ /* 0x1009FCA0: cmp eax, 0x59 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FD4B; /* 0x1009FCA3: jle 0x1009fd4b */
L_1009FCA9:
    /* cmp eax, 0x5Fu */ /* 0x1009FCA9: cmp eax, 0x5f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FCAC: jne 0x1009fc77 */
L_1009FCAE:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1009FCAE: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009FCB1: inc esi */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = esi; /* 0x1009FCB2: mov dword ptr [0x100e02f0], esi */
    /* cmp eax, 0x41u */ /* 0x1009FCB8: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FCBB: jl 0x1009fc77 */
L_1009FCBD:
    /* cmp eax, 0x44u */ /* 0x1009FCBD: cmp eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FCCC; /* 0x1009FCC0: jle 0x1009fccc */
L_1009FCC2:
    /* cmp eax, 0x46u */ /* 0x1009FCC2: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009FCDC; /* 0x1009FCC5: jle 0x1009fcdc */
L_1009FCC7:
    /* cmp eax, 0x4Au */ /* 0x1009FCC7: cmp eax, 0x4a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1009FC77; /* 0x1009FCCA: jg 0x1009fc77 */
L_1009FCCC:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FCCC: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FDC0)); /* 0x1009FCD0: push dword ptr [eax*4 + 0x1009fdc0] */
    RECOMP_BACKEDGE();
    goto L_1009FA03; /* 0x1009FCD7: jmp 0x1009fa03 */
L_1009FCDC:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FCDC: movsx eax, byte ptr [esi - 1] */
    ecx = ebp + (-0x18); /* 0x1009FCE0: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FDC0)); /* 0x1009FCE3: push dword ptr [eax*4 + 0x1009fdc0] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009FCEA: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FCEF: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1009FCF4: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FD1E; /* 0x1009FCF7: jne 0x1009fd1e */
L_1009FCF9:
    eax = ebp + (-0x80); /* 0x1009FCF9: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1009FCFC: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1009FCFD: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FD02: pop ecx */
    PUSH32(esp, eax); /* 0x1009FD03: push eax */
    ecx = ebp + (-0x18); /* 0x1009FD04: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FD07: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FD0C: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1009FD11: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FD31; /* 0x1009FD14: jne 0x1009fd31 */
L_1009FD16:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FD16: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FD17: mov dword ptr [0x100e02f0], eax */
    goto L_1009FD31; /* 0x1009FD1C: jmp 0x1009fd31 */
L_1009FD1E:
    eax = ebp + (-0x30); /* 0x1009FD1E: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1009FD21: push eax */
    RECOMP_CALL(sub_1002B479); /* 0x1009FD22: call 0x1002b479 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009FD27: pop ecx */
    PUSH32(esp, eax); /* 0x1009FD28: push eax */
    ecx = ebp + (-0x18); /* 0x1009FD29: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10022BFB); /* 0x1009FD2C: call 0x10022bfb */
    RECOMP_FLAGS_IN();
L_1009FD31:
    PUSH32(esp, 0x1009FF04u); /* 0x1009FD31: push 0x1009ff04 */
    ecx = ebp + (-0x18); /* 0x1009FD36: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1002A669); /* 0x1009FD39: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FD3E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1009FD41: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x1009FD44: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1009FD46: mov ecx, dword ptr [ebp - 0x14] */
    goto L_1009FDA3; /* 0x1009FD49: jmp 0x1009fda3 */
L_1009FD4B:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FD4B: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD5C)); /* 0x1009FD4F: push dword ptr [eax*4 + 0x1009fd5c] */
    RECOMP_BACKEDGE();
    goto L_1009FA03; /* 0x1009FD56: jmp 0x1009fa03 */
L_1009FD5B:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FD5B: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FD5C)); /* 0x1009FD5F: push dword ptr [eax*4 + 0x1009fd5c] */
    RECOMP_BACKEDGE();
    goto L_1009F840; /* 0x1009FD66: jmp 0x1009f840 */
L_1009FD6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1009FD6B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1009FD6D: inc edi */
    _flag_k = FK_INC;
L_1009FD6E:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1009FD6E: movsx eax, byte ptr [esi - 1] */
    ecx = ebp + (-0x8); /* 0x1009FD72: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x1009FCCC)); /* 0x1009FD75: push dword ptr [eax*4 + 0x1009fccc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1009FD7C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1009FD81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009F848; /* 0x1009FD83: je 0x1009f848 */
L_1009FD89:
    edi = MEM32(ebp + (-0x8)); /* 0x1009FD89: mov edi, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1009FD8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FD9B; /* 0x1009FD8E: je 0x1009fd9b */
L_1009FD90:
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FD90: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x1009FD93: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009FD9E; /* 0x1009FD99: jmp 0x1009fd9e */
L_1009FD9B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FD9B: mov ecx, dword ptr [ebp - 4] */
L_1009FD9E:
    eax = MEM32(ebp + 0x8); /* 0x1009FD9E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x1009FDA1: mov dword ptr [eax], edi */
L_1009FDA3:
    MEM32(eax + 0x4) = ecx; /* 0x1009FDA3: mov dword ptr [eax + 4], ecx */
L_1009FDA6:
    edi = POP32_VAL(esp); /* 0x1009FDA6: pop edi */
    esi = POP32_VAL(esp); /* 0x1009FDA7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009FDA8: pop ebx */
    esp = ebp; /* 0x1009FDA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FDAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FDAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FF04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FF04u);

L_1009FF04:
    void_lift_trap(0x1009FF04u, "daa ");
    void_lift_trap(0x1009FF05u, "daa ");
    _flag_a = (uint32_t)(MEM8(eax + 0x7265706F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x7265706F) = (uint8_t)(MEM8(eax + 0x7265706F) + LO8(edx)); /* 0x1009FF06: add byte ptr [eax + 0x7265706f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x1009FF0C: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1009FF7E; /* 0x1009FF0D: je 0x1009ff7e */
L_1009FF0F:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1009FF11; /* 0x1009FF0F: jb 0x1009ff11 */
L_1009FF11:
    /* nop */ /* 0x1009FF11: nop  */
    /* nop */ /* 0x1009FF12: nop  */
    /* nop */ /* 0x1009FF13: nop  */
    PUSHAD(); /* 0x1009FF14: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1009FF8B; /* 0x1009FF15: jae 0x1009ff8b */
L_1009FF17:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009FF82; /* 0x1009FF17: jb 0x1009ff82 */
L_1009FF19:
    /* outsb: no port I/O under Win32 */ /* 0x1009FF19: outsb dx, byte ptr [esi] */
    void_lift_trap(0x1009FF1Au, "daa ");
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009FF1C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009FF1F: in al, dx */
    /* cmp MEM32(ecx + 0x4), 1 */ /* 0x1009FF20: cmp dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FF3D; /* 0x1009FF24: jne 0x1009ff3d */
L_1009FF26:
    PUSH32(esp, 4); /* 0x1009FF26: push 4 */
    PUSH32(esp, 0x1009FF44u); /* 0x1009FF28: push 0x1009ff44 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009FF2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FF30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022D98); /* 0x1009FF33: call 0x10022d98 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF38: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1009FF40; /* 0x1009FF3B: jmp 0x1009ff40 */
L_1009FF3D:
    eax = MEM32(ebp + 0x8); /* 0x1009FF3D: mov eax, dword ptr [ebp + 8] */
L_1009FF40:
    ebp = POP32_VAL(esp); /* 0x1009FF40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1009FF41: ret 8 */
L_1009FF7E:
    PUSH32(esp, 0); /* 0x1009FF7E: push 0 */
    PUSH32(esp, eax); /* 0x1009FF80: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1009FF81: mov dword ptr [0x100e02f0], ecx */
    goto L_1009FF87; /* falls through past a gap */
L_1009FF82:
    _flag_a = (uint32_t)((eax | 0x100E02F0u)); _flag_b = (uint32_t)((eax | 0x100E02F0u));
    eax = eax | 0x100E02F0u; /* 0x1009FF82: or eax, 0x100e02f0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009FF87:
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF87: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    goto L_1009FF8C; /* falls through past a gap */
L_1009FF8B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x6AF045)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x6AF045) = MEM32(ebp + 0x6AF045) - 1; /* 0x1009FF8B: dec dword ptr [ebp + 0x6af045] */
    _flag_k = FK_DEC;
    goto L_1009FF91; /* falls through past a gap */
L_1009FF8C:
    eax = ebp + (-0x10); /* 0x1009FF8C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1009FF8F: push 0 */
L_1009FF91:
    PUSH32(esp, eax); /* 0x1009FF91: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF92: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FF97: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF9C: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FF9F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFA1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFA3: je 0x1009ffd1 */
L_1009FFA5:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009FFA5: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFB6; /* 0x1009FFA8: je 0x1009ffb6 */
L_1009FFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFAA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFAB: mov dword ptr [0x100e02f0], eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FFB0: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFB2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FFA5; /* 0x1009FFB4: jne 0x1009ffa5 */
L_1009FFB6:
    /* cmp MEM8(eax), 0 */ /* 0x1009FFB6: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFB9: je 0x1009ffd1 */
L_1009FFBB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009FFBB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFBE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFBF: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009FFC4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009FFC7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FFC9: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009FFCC: mov dword ptr [eax + 4], ecx */
    goto L_1009FFE8; /* 0x1009FFCF: jmp 0x1009ffe8 */
L_1009FFD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FFD1: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFD2: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 1); /* 0x1009FFD7: push 1 */
    goto L_1009FFDD; /* 0x1009FFD9: jmp 0x1009ffdd */
L_1009FFDD:
    ecx = MEM32(ebp + 0x8); /* 0x1009FFDD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009FFE0: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FFE5: mov eax, dword ptr [ebp + 8] */
L_1009FFE8:
    esp = ebp; /* 0x1009FFE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FFEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FFEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FF08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FF08u);

L_1009FF08:
    /* outsd: no port I/O under Win32 */ /* 0x1009FF08: outsd dx, dword ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_1009FF70; /* 0x1009FF09: jo 0x1009ff70 */
L_1009FF0B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009FF6E; /* 0x1009FF0B: jb 0x1009ff6e */
L_1009FF0D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1009FF7E; /* 0x1009FF0D: je 0x1009ff7e */
L_1009FF0F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009FF11; /* 0x1009FF0F: jb 0x1009ff11 */
L_1009FF11:
    /* nop */ /* 0x1009FF11: nop  */
    /* nop */ /* 0x1009FF12: nop  */
    /* nop */ /* 0x1009FF13: nop  */
    PUSHAD(); /* 0x1009FF14: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1009FF8B; /* 0x1009FF15: jae 0x1009ff8b */
L_1009FF17:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009FF82; /* 0x1009FF17: jb 0x1009ff82 */
L_1009FF19:
    /* outsb: no port I/O under Win32 */ /* 0x1009FF19: outsb dx, byte ptr [esi] */
    void_lift_trap(0x1009FF1Au, "daa ");
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009FF1C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009FF1F: in al, dx */
    /* cmp MEM32(ecx + 0x4), 1 */ /* 0x1009FF20: cmp dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FF3D; /* 0x1009FF24: jne 0x1009ff3d */
L_1009FF26:
    PUSH32(esp, 4); /* 0x1009FF26: push 4 */
    PUSH32(esp, 0x1009FF44u); /* 0x1009FF28: push 0x1009ff44 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009FF2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FF30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022D98); /* 0x1009FF33: call 0x10022d98 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF38: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1009FF40; /* 0x1009FF3B: jmp 0x1009ff40 */
L_1009FF3D:
    eax = MEM32(ebp + 0x8); /* 0x1009FF3D: mov eax, dword ptr [ebp + 8] */
L_1009FF40:
    ebp = POP32_VAL(esp); /* 0x1009FF40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1009FF41: ret 8 */
L_1009FF6E:
    _flag_a = (uint32_t)(MEM32(ecx + (-0x77))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + (-0x77)) = MEM32(ecx + (-0x77)) + eax; /* 0x1009FF6E: add dword ptr [ecx - 0x77], eax */
    _flag_k = FK_ADD;
    goto L_1009FF71; /* falls through past a gap */
L_1009FF70:
    MEM32(0x100E02F0) = ecx; /* 0x1009FF70: mov dword ptr [0x100e02f0], ecx */
    goto L_1009FF76; /* falls through past a gap */
L_1009FF71:
    _flag_a = (uint32_t)((eax | 0x100E02F0u)); _flag_b = (uint32_t)((eax | 0x100E02F0u));
    eax = eax | 0x100E02F0u; /* 0x1009FF71: or eax, 0x100e02f0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009FF76:
    /* cmp LO8(eax), 0x5Fu */ /* 0x1009FF76: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FFDB; /* 0x1009FF78: jne 0x1009ffdb */
L_1009FF7A:
    eax = ebp + (-0x10); /* 0x1009FF7A: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF7D: inc ecx */
    _flag_k = FK_INC;
L_1009FF7E:
    PUSH32(esp, 0); /* 0x1009FF7E: push 0 */
    PUSH32(esp, eax); /* 0x1009FF80: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1009FF81: mov dword ptr [0x100e02f0], ecx */
    goto L_1009FF87; /* falls through past a gap */
L_1009FF82:
    _flag_a = (uint32_t)((eax | 0x100E02F0u)); _flag_b = (uint32_t)((eax | 0x100E02F0u));
    eax = eax | 0x100E02F0u; /* 0x1009FF82: or eax, 0x100e02f0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009FF87:
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF87: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    goto L_1009FF8C; /* falls through past a gap */
L_1009FF8B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x6AF045)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x6AF045) = MEM32(ebp + 0x6AF045) - 1; /* 0x1009FF8B: dec dword ptr [ebp + 0x6af045] */
    _flag_k = FK_DEC;
    goto L_1009FF91; /* falls through past a gap */
L_1009FF8C:
    eax = ebp + (-0x10); /* 0x1009FF8C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1009FF8F: push 0 */
L_1009FF91:
    PUSH32(esp, eax); /* 0x1009FF91: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF92: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FF97: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF9C: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FF9F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFA1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFA3: je 0x1009ffd1 */
L_1009FFA5:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009FFA5: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFB6; /* 0x1009FFA8: je 0x1009ffb6 */
L_1009FFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFAA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFAB: mov dword ptr [0x100e02f0], eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FFB0: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFB2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FFA5; /* 0x1009FFB4: jne 0x1009ffa5 */
L_1009FFB6:
    /* cmp MEM8(eax), 0 */ /* 0x1009FFB6: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFB9: je 0x1009ffd1 */
L_1009FFBB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009FFBB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFBE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFBF: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009FFC4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009FFC7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FFC9: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009FFCC: mov dword ptr [eax + 4], ecx */
    goto L_1009FFE8; /* 0x1009FFCF: jmp 0x1009ffe8 */
L_1009FFD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FFD1: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFD2: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 1); /* 0x1009FFD7: push 1 */
    goto L_1009FFDD; /* 0x1009FFD9: jmp 0x1009ffdd */
L_1009FFDB:
    PUSH32(esp, 2); /* 0x1009FFDB: push 2 */
L_1009FFDD:
    ecx = MEM32(ebp + 0x8); /* 0x1009FFDD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009FFE0: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FFE5: mov eax, dword ptr [ebp + 8] */
L_1009FFE8:
    esp = ebp; /* 0x1009FFE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FFEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FFEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FF14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FF14u);

L_1009FF14:
    PUSHAD(); /* 0x1009FF14: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1009FF8B; /* 0x1009FF15: jae 0x1009ff8b */
L_1009FF17:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1009FF82; /* 0x1009FF17: jb 0x1009ff82 */
L_1009FF19:
    /* outsb: no port I/O under Win32 */ /* 0x1009FF19: outsb dx, byte ptr [esi] */
    void_lift_trap(0x1009FF1Au, "daa ");
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009FF1C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009FF1F: in al, dx */
    /* cmp MEM32(ecx + 0x4), 1 */ /* 0x1009FF20: cmp dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FF3D; /* 0x1009FF24: jne 0x1009ff3d */
L_1009FF26:
    PUSH32(esp, 4); /* 0x1009FF26: push 4 */
    PUSH32(esp, 0x1009FF44u); /* 0x1009FF28: push 0x1009ff44 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009FF2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009FF30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022D98); /* 0x1009FF33: call 0x10022d98 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF38: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1009FF40; /* 0x1009FF3B: jmp 0x1009ff40 */
L_1009FF3D:
    eax = MEM32(ebp + 0x8); /* 0x1009FF3D: mov eax, dword ptr [ebp + 8] */
L_1009FF40:
    ebp = POP32_VAL(esp); /* 0x1009FF40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1009FF41: ret 8 */
L_1009FF82:
    _flag_a = (uint32_t)((eax | 0x100E02F0u)); _flag_b = (uint32_t)((eax | 0x100E02F0u));
    eax = eax | 0x100E02F0u; /* 0x1009FF82: or eax, 0x100e02f0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF87: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    goto L_1009FF8C; /* falls through past a gap */
L_1009FF8B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x6AF045)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x6AF045) = MEM32(ebp + 0x6AF045) - 1; /* 0x1009FF8B: dec dword ptr [ebp + 0x6af045] */
    _flag_k = FK_DEC;
    goto L_1009FF91; /* falls through past a gap */
L_1009FF8C:
    eax = ebp + (-0x10); /* 0x1009FF8C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1009FF8F: push 0 */
L_1009FF91:
    PUSH32(esp, eax); /* 0x1009FF91: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF92: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FF97: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF9C: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FF9F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFA1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFA3: je 0x1009ffd1 */
L_1009FFA5:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009FFA5: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFB6; /* 0x1009FFA8: je 0x1009ffb6 */
L_1009FFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFAA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFAB: mov dword ptr [0x100e02f0], eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FFB0: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFB2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FFA5; /* 0x1009FFB4: jne 0x1009ffa5 */
L_1009FFB6:
    /* cmp MEM8(eax), 0 */ /* 0x1009FFB6: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFB9: je 0x1009ffd1 */
L_1009FFBB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009FFBB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFBE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFBF: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009FFC4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009FFC7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FFC9: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009FFCC: mov dword ptr [eax + 4], ecx */
    goto L_1009FFE8; /* 0x1009FFCF: jmp 0x1009ffe8 */
L_1009FFD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FFD1: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFD2: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 1); /* 0x1009FFD7: push 1 */
    goto L_1009FFDD; /* 0x1009FFD9: jmp 0x1009ffdd */
L_1009FFDD:
    ecx = MEM32(ebp + 0x8); /* 0x1009FFDD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009FFE0: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FFE5: mov eax, dword ptr [ebp + 8] */
L_1009FFE8:
    esp = ebp; /* 0x1009FFE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FFEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FFEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FF44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FF44u);

L_1009FF44:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) & HI8(ebx)); /* 0x1009FF44: and byte ptr [edi], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x1009FF46u, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1009FF47: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebp); /* 0x1009FF49: push ebp */
    ebp = esp; /* 0x1009FF4A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009FF4C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x1009FF4F: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009FF52: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009FF55: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1009FF5A: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009FF60: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF62: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FF63: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x1009FF69: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FFDB; /* 0x1009FF6B: jne 0x1009ffdb */
L_1009FF6D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1009FF6D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF6F: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FF70: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x5Fu */ /* 0x1009FF76: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FFDB; /* 0x1009FF78: jne 0x1009ffdb */
L_1009FF7A:
    eax = ebp + (-0x10); /* 0x1009FF7A: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF7D: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x1009FF7E: push 0 */
    PUSH32(esp, eax); /* 0x1009FF80: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1009FF81: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF87: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1009FF8C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1009FF8F: push 0 */
    PUSH32(esp, eax); /* 0x1009FF91: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF92: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FF97: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF9C: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FF9F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFA1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFA3: je 0x1009ffd1 */
L_1009FFA5:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009FFA5: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFB6; /* 0x1009FFA8: je 0x1009ffb6 */
L_1009FFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFAA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFAB: mov dword ptr [0x100e02f0], eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FFB0: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFB2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FFA5; /* 0x1009FFB4: jne 0x1009ffa5 */
L_1009FFB6:
    /* cmp MEM8(eax), 0 */ /* 0x1009FFB6: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFB9: je 0x1009ffd1 */
L_1009FFBB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009FFBB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFBE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFBF: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009FFC4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009FFC7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FFC9: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009FFCC: mov dword ptr [eax + 4], ecx */
    goto L_1009FFE8; /* 0x1009FFCF: jmp 0x1009ffe8 */
L_1009FFD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FFD1: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFD2: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 1); /* 0x1009FFD7: push 1 */
    goto L_1009FFDD; /* 0x1009FFD9: jmp 0x1009ffdd */
L_1009FFDB:
    PUSH32(esp, 2); /* 0x1009FFDB: push 2 */
L_1009FFDD:
    ecx = MEM32(ebp + 0x8); /* 0x1009FFDD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009FFE0: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FFE5: mov eax, dword ptr [ebp + 8] */
L_1009FFE8:
    esp = ebp; /* 0x1009FFE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FFEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FFEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FF49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FF49u);

L_1009FF49:
    PUSH32(esp, ebp); /* 0x1009FF49: push ebp */
    ebp = esp; /* 0x1009FF4A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009FF4C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x1009FF4F: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009FF52: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10022BC1); /* 0x1009FF55: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x1009FF5A: mov ecx, dword ptr [0x100e02f0] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1009FF60: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF62: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FF63: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x1009FF69: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FFDB; /* 0x1009FF6B: jne 0x1009ffdb */
L_1009FF6D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1009FF6D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF6F: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1009FF70: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x5Fu */ /* 0x1009FF76: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009FFDB; /* 0x1009FF78: jne 0x1009ffdb */
L_1009FF7A:
    eax = ebp + (-0x10); /* 0x1009FF7A: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009FF7D: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x1009FF7E: push 0 */
    PUSH32(esp, eax); /* 0x1009FF80: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1009FF81: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF87: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1009FF8C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1009FF8F: push 0 */
    PUSH32(esp, eax); /* 0x1009FF91: push eax */
    RECOMP_CALL(sub_1002A7CF); /* 0x1009FF92: call 0x1002a7cf */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x1009FF97: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009FF9C: add esp, 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FF9F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFA1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFA3: je 0x1009ffd1 */
L_1009FFA5:
    /* cmp LO8(ecx), 0x40u */ /* 0x1009FFA5: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFB6; /* 0x1009FFA8: je 0x1009ffb6 */
L_1009FFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFAA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFAB: mov dword ptr [0x100e02f0], eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1009FFB0: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009FFB2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009FFA5; /* 0x1009FFB4: jne 0x1009ffa5 */
L_1009FFB6:
    /* cmp MEM8(eax), 0 */ /* 0x1009FFB6: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009FFD1; /* 0x1009FFB9: je 0x1009ffd1 */
L_1009FFBB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009FFBB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009FFBE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFBF: mov dword ptr [0x100e02f0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009FFC4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1009FFC7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009FFC9: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1009FFCC: mov dword ptr [eax + 4], ecx */
    goto L_1009FFE8; /* 0x1009FFCF: jmp 0x1009ffe8 */
L_1009FFD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009FFD1: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = eax; /* 0x1009FFD2: mov dword ptr [0x100e02f0], eax */
    PUSH32(esp, 1); /* 0x1009FFD7: push 1 */
    goto L_1009FFDD; /* 0x1009FFD9: jmp 0x1009ffdd */
L_1009FFDB:
    PUSH32(esp, 2); /* 0x1009FFDB: push 2 */
L_1009FFDD:
    ecx = MEM32(ebp + 0x8); /* 0x1009FFDD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009FFE0: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009FFE5: mov eax, dword ptr [ebp + 8] */
L_1009FFE8:
    esp = ebp; /* 0x1009FFE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009FFEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009FFEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009FFEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009FFECu);

L_1009FFEC:
    PUSH32(esp, ebp); /* 0x1009FFEC: push ebp */
    ebp = esp; /* 0x1009FFED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009FFEF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009FFF2: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFF0000u; /* 0x1009FFF6: mov eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1009FFFB: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1009FFFE: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x100A0001: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x100A0004: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x100A0008: push 1 */
    PUSH32(esp, eax); /* 0x100A000A: push eax */
    PUSH32(esp, 0x100237BAu); /* 0x100A000B: push 0x100237ba */
    eax = ebp + (-0x10); /* 0x100A0010: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A0013: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0014: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10023486); /* 0x100A0017: call 0x10023486 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100A001C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A001F: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100A0022: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A0024: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0025: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0026(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0026u);

L_100A0026:
    PUSH32(esp, ebp); /* 0x100A0026: push ebp */
    ebp = esp; /* 0x100A0027: mov ebp, esp */
    eax = MEM32(0x100E02F0); /* 0x100A0029: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x100A002E: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A0030: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0052; /* 0x100A0032: je 0x100a0052 */
L_100A0034:
    /* cmp LO8(ecx), 0x41u */ /* 0x100A0034: cmp cl, 0x41 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + 0x8); /* 0x100A0037: mov ecx, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0040; /* 0x100A003A: je 0x100a0040 */
L_100A003C:
    PUSH32(esp, 2); /* 0x100A003C: push 2 */
    goto L_100A0057; /* 0x100A003E: jmp 0x100a0057 */
L_100A0040:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A0040: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x100A0064u); /* 0x100A0041: push 0x100a0064 */
    MEM32(0x100E02F0) = eax; /* 0x100A0046: mov dword ptr [0x100e02f0], eax */
    RECOMP_CALL(sub_10022BC1); /* 0x100A004B: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    goto L_100A005C; /* 0x100A0050: jmp 0x100a005c */
L_100A0052:
    ecx = MEM32(ebp + 0x8); /* 0x100A0052: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x100A0055: push 1 */
L_100A0057:
    RECOMP_CALL(sub_1009EB14); /* 0x100A0057: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_100A005C:
    eax = MEM32(ebp + 0x8); /* 0x100A005C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100A005F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0060: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0064(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0064u);

L_100A0064:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_100A00CC; /* 0x100A0064: jnp 0x100a00cc */
L_100A0066:
    void_lift_trap(0x100A0066u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x100A0067: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A00E7; /* 0x100A0068: je 0x100a00e7 */
L_100A006A:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A006A: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A006D: in al, dx */
    PUSH32(esp, ecx); /* 0x100A006E: push ecx */
    PUSH32(esp, ecx); /* 0x100A006F: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x100A0070: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100A0073: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A0074: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1006274Cu); /* 0x100A0077: push 0x1006274c */
    eax = MEM32(ecx); /* 0x100A007C: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x100A007E: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A0080: mov eax, dword ptr [ecx + 4] */
    ecx = esi; /* 0x100A0083: mov ecx, esi */
    MEM32(esi + 0x4) = eax; /* 0x100A0085: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_1002A669); /* 0x100A0088: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100A008D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100A0090: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x100A0091: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0096: pop ecx */
    PUSH32(esp, eax); /* 0x100A0097: push eax */
    ecx = esi; /* 0x100A0098: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x100A009A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7Du); /* 0x100A009F: push 0x7d */
    ecx = esi; /* 0x100A00A1: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A00A3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x100A00A8: mov ecx, dword ptr [0x100e02f0] */
    /* cmp MEM8(ecx), 0x40u */ /* 0x100A00AE: cmp byte ptr [ecx], 0x40 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A00BA; /* 0x100A00B1: jne 0x100a00ba */
L_100A00B3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A00B3: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100A00B4: mov dword ptr [0x100e02f0], ecx */
L_100A00BA:
    eax = esi; /* 0x100A00BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A00BC: pop esi */
    esp = ebp; /* 0x100A00BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A00BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A00C0: ret  */
L_100A00CC:
    PUSH32(esp, ebx); /* 0x100A00CC: push ebx */
    PUSH32(esp, esi); /* 0x100A00CD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A00CE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A00D1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A00D3: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x100A00D4: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A00D6: mov eax, dword ptr [ecx + 4] */
    SET_LO8(ecx, LO8(eax)); /* 0x100A00D9: mov cl, al */
    MEM32(esi + 0x4) = eax; /* 0x100A00DB: mov dword ptr [esi + 4], eax */
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100A00DE: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A00E0: jg 0x100a021e */
L_100A00E6:
    eax = MEM32(0x100E02F0); /* 0x100A00E6: mov eax, dword ptr [0x100e02f0] */
    goto L_100A00EB; /* falls through past a gap */
L_100A00E7:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi)); /* 0x100A00E7: lock add cl, byte ptr [esi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax + (-0x7BF0FFC8)), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A00EA: adc byte ptr [eax - 0x7bf0ffc8], al */
      MEM8(eax + (-0x7BF0FFC8)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A00F0; /* falls through past a gap */
L_100A00EB:
    /* cmp MEM8(eax), 0 */ /* 0x100A00EB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01FA; /* 0x100A00EE: je 0x100a01fa */
    goto L_100A00F4; /* falls through past a gap */
L_100A00F0:
    PUSH32(esp, _seg_es); /* 0x100A00F0: push es */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100A00F1: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(ebp + (-0x17AF0FBB))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x17AF0FBB)) = (uint8_t)(MEM8(ebp + (-0x17AF0FBB)) + LO8(ecx)); /* 0x100A00F3: add byte ptr [ebp - 0x17af0fbb], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A00F9; /* falls through past a gap */
L_100A00F4:
    eax = ebp + (-0x10); /* 0x100A00F4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A00F7: push eax */
    RECOMP_CALL(sub_1009F003); /* 0x100A00F8: call 0x1009f003 */
    RECOMP_FLAGS_IN();
    goto L_100A00FD; /* falls through past a gap */
L_100A00F9:
    PUSH32(esp, _seg_es); /* 0x100A00F9: push es */
    /* out: no port I/O under Win32 */ /* 0x100A00FA: out dx, eax */
    RECOMP_ITAIL(0x100A00FBu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100A00FD:
    eax = MEM32(ebp + (-0x10)); /* 0x100A00FD: mov eax, dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100A0100: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A0101: mov dword ptr [ebp - 8], eax */
    ecx = ebp + (-0x8); /* 0x100A0104: lea ecx, [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x100A0107: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x20u); /* 0x100A010A: push 0x20 */
    MEM32(ebp + (-0x4)) = eax; /* 0x100A010C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A010F: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100A0114: push esi */
    eax = ebp + (-0x18); /* 0x100A0115: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A0118: push eax */
    ecx = ebp + (-0x8); /* 0x100A0119: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x100A011C: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A0121: mov ecx, eax */
    eax = MEM32(ecx); /* 0x100A0123: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x100A0125: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A0127: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x100A012A: mov dword ptr [esi + 4], eax */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x100A012D: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A012F: jg 0x100a021e */
L_100A0135:
    eax = MEM32(0x100E02F0); /* 0x100A0135: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x100A013A: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01F2; /* 0x100A013D: je 0x100a01f2 */
L_100A0143:
    PUSH32(esp, 0x1006274Cu); /* 0x100A0143: push 0x1006274c */
L_100A0148:
    ecx = esi; /* 0x100A0148: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x100A014A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A014F: mov eax, dword ptr [0x100e02f0] */
L_100A0154:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A0154: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A0157: jg 0x100a01ed */
L_100A015D:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A015D: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A015F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A01CD; /* 0x100A0161: je 0x100a01cd */
L_100A0163:
    /* cmp LO8(ecx), 0x40u */ /* 0x100A0163: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01CD; /* 0x100A0166: je 0x100a01cd */
L_100A0168:
    eax = ebp + (-0x18); /* 0x100A0168: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A016B: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x100A016C: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0171: pop ecx */
    PUSH32(esp, eax); /* 0x100A0172: push eax */
    eax = ebp + (-0x10); /* 0x100A0173: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A0176: push eax */
    PUSH32(esp, 0x60u); /* 0x100A0177: push 0x60 */
    ecx = ebp + (-0x20); /* 0x100A0179: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1002A173); /* 0x100A017C: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A0181: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x100A0183: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100A0188: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x100A018B: lea ecx, [ebp - 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A018E: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x100A0191: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x27u); /* 0x100A0194: push 0x27 */
    MEM32(ebp + (-0x4)) = eax; /* 0x100A0196: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A0199: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100A019E: lea eax, [ebp - 8] */
    ecx = esi; /* 0x100A01A1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100A01A3: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100A01A4: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A01A9: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01AE: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A01B9; /* 0x100A01B1: jne 0x100a01b9 */
L_100A01B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A01B3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x100A01B4: mov dword ptr [0x100e02f0], eax */
L_100A01B9:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A01B9: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A01BC: jg 0x100a01ed */
L_100A01BE:
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01BE: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0154; /* 0x100A01C1: je 0x100a0154 */
L_100A01C3:
    PUSH32(esp, 0x100A0228u); /* 0x100A01C3: push 0x100a0228 */
    RECOMP_BACKEDGE();
    goto L_100A0148; /* 0x100A01C8: jmp 0x100a0148 */
L_100A01CD:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A01CD: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A01D0: jg 0x100a01ed */
L_100A01D2:
    /* cmp MEM8(eax), 0 */ /* 0x100A01D2: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A01DF; /* 0x100A01D5: jne 0x100a01df */
L_100A01D7:
    PUSH32(esp, ebx); /* 0x100A01D7: push ebx */
    ecx = esi; /* 0x100A01D8: mov ecx, esi */
    RECOMP_CALL(sub_1002374C); /* 0x100A01DA: call 0x1002374c */
    RECOMP_FLAGS_IN();
L_100A01DF:
    PUSH32(esp, 0x7Du); /* 0x100A01DF: push 0x7d */
    ecx = esi; /* 0x100A01E1: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A01E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A01E8: mov eax, dword ptr [0x100e02f0] */
L_100A01ED:
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01ED: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A01F0: jne 0x100a021e */
L_100A01F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A01F2: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x100A01F3: mov dword ptr [0x100e02f0], eax */
    goto L_100A021E; /* 0x100A01F8: jmp 0x100a021e */
L_100A01FA:
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100A01FA: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A01FC: jg 0x100a021e */
L_100A01FE:
    PUSH32(esp, esi); /* 0x100A01FE: push esi */
    eax = ebp + (-0x10); /* 0x100A01FF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A0202: push eax */
    PUSH32(esp, ebx); /* 0x100A0203: push ebx */
    ecx = ebp + (-0x20); /* 0x100A0204: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009EB14); /* 0x100A0207: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A020C: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x100A020E: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x100A0213: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(esi) = ecx; /* 0x100A0216: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x100A0218: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x4) = ecx; /* 0x100A021B: mov dword ptr [esi + 4], ecx */
L_100A021E:
    eax = esi; /* 0x100A021E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A0220: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A0221: pop ebx */
    esp = ebp; /* 0x100A0222: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A0224: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0225: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A006B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A006Bu);

L_100A006B:
    PUSH32(esp, ebp); /* 0x100A006B: push ebp */
    ebp = esp; /* 0x100A006C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A006E: push ecx */
    PUSH32(esp, ecx); /* 0x100A006F: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x100A0070: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100A0073: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A0074: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1006274Cu); /* 0x100A0077: push 0x1006274c */
    eax = MEM32(ecx); /* 0x100A007C: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x100A007E: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A0080: mov eax, dword ptr [ecx + 4] */
    ecx = esi; /* 0x100A0083: mov ecx, esi */
    MEM32(esi + 0x4) = eax; /* 0x100A0085: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_1002A669); /* 0x100A0088: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100A008D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100A0090: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x100A0091: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0096: pop ecx */
    PUSH32(esp, eax); /* 0x100A0097: push eax */
    ecx = esi; /* 0x100A0098: mov ecx, esi */
    RECOMP_CALL(sub_10022BFB); /* 0x100A009A: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7Du); /* 0x100A009F: push 0x7d */
    ecx = esi; /* 0x100A00A1: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A00A3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E02F0); /* 0x100A00A8: mov ecx, dword ptr [0x100e02f0] */
    /* cmp MEM8(ecx), 0x40u */ /* 0x100A00AE: cmp byte ptr [ecx], 0x40 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A00BA; /* 0x100A00B1: jne 0x100a00ba */
L_100A00B3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A00B3: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100A00B4: mov dword ptr [0x100e02f0], ecx */
L_100A00BA:
    eax = esi; /* 0x100A00BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A00BC: pop esi */
    esp = ebp; /* 0x100A00BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A00BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A00C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A00C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A00C1u);

L_100A00C1:
    PUSH32(esp, ebp); /* 0x100A00C1: push ebp */
    ebp = esp; /* 0x100A00C2: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100A00C4: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100A00C7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x100A00CA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x100A00CC: push ebx */
    PUSH32(esp, esi); /* 0x100A00CD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A00CE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A00D1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A00D3: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x100A00D4: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A00D6: mov eax, dword ptr [ecx + 4] */
    SET_LO8(ecx, LO8(eax)); /* 0x100A00D9: mov cl, al */
    MEM32(esi + 0x4) = eax; /* 0x100A00DB: mov dword ptr [esi + 4], eax */
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100A00DE: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A00E0: jg 0x100a021e */
L_100A00E6:
    eax = MEM32(0x100E02F0); /* 0x100A00E6: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x100A00EB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01FA; /* 0x100A00EE: je 0x100a01fa */
L_100A00F4:
    eax = ebp + (-0x10); /* 0x100A00F4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A00F7: push eax */
    RECOMP_CALL(sub_1009F003); /* 0x100A00F8: call 0x1009f003 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100A00FD: mov eax, dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100A0100: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A0101: mov dword ptr [ebp - 8], eax */
    ecx = ebp + (-0x8); /* 0x100A0104: lea ecx, [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x100A0107: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x20u); /* 0x100A010A: push 0x20 */
    MEM32(ebp + (-0x4)) = eax; /* 0x100A010C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A010F: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100A0114: push esi */
    eax = ebp + (-0x18); /* 0x100A0115: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A0118: push eax */
    ecx = ebp + (-0x8); /* 0x100A0119: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A19F); /* 0x100A011C: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A0121: mov ecx, eax */
    eax = MEM32(ecx); /* 0x100A0123: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x100A0125: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100A0127: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x100A012A: mov dword ptr [esi + 4], eax */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x100A012D: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A012F: jg 0x100a021e */
L_100A0135:
    eax = MEM32(0x100E02F0); /* 0x100A0135: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x100A013A: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01F2; /* 0x100A013D: je 0x100a01f2 */
L_100A0143:
    PUSH32(esp, 0x1006274Cu); /* 0x100A0143: push 0x1006274c */
L_100A0148:
    ecx = esi; /* 0x100A0148: mov ecx, esi */
    RECOMP_CALL(sub_1002A669); /* 0x100A014A: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A014F: mov eax, dword ptr [0x100e02f0] */
L_100A0154:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A0154: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A0157: jg 0x100a01ed */
L_100A015D:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A015D: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A015F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A01CD; /* 0x100A0161: je 0x100a01cd */
L_100A0163:
    /* cmp LO8(ecx), 0x40u */ /* 0x100A0163: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A01CD; /* 0x100A0166: je 0x100a01cd */
L_100A0168:
    eax = ebp + (-0x18); /* 0x100A0168: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A016B: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x100A016C: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0171: pop ecx */
    PUSH32(esp, eax); /* 0x100A0172: push eax */
    eax = ebp + (-0x10); /* 0x100A0173: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A0176: push eax */
    PUSH32(esp, 0x60u); /* 0x100A0177: push 0x60 */
    ecx = ebp + (-0x20); /* 0x100A0179: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1002A173); /* 0x100A017C: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A0181: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x100A0183: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100A0188: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x100A018B: lea ecx, [ebp - 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A018E: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x100A0191: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x27u); /* 0x100A0194: push 0x27 */
    MEM32(ebp + (-0x4)) = eax; /* 0x100A0196: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A0199: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100A019E: lea eax, [ebp - 8] */
    ecx = esi; /* 0x100A01A1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100A01A3: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x100A01A4: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A01A9: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01AE: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A01B9; /* 0x100A01B1: jne 0x100a01b9 */
L_100A01B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A01B3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x100A01B4: mov dword ptr [0x100e02f0], eax */
L_100A01B9:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A01B9: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A01BC: jg 0x100a01ed */
L_100A01BE:
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01BE: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0154; /* 0x100A01C1: je 0x100a0154 */
L_100A01C3:
    PUSH32(esp, 0x100A0228u); /* 0x100A01C3: push 0x100a0228 */
    RECOMP_BACKEDGE();
    goto L_100A0148; /* 0x100A01C8: jmp 0x100a0148 */
L_100A01CD:
    /* cmp MEM8(esi + 0x4), LO8(ebx) */ /* 0x100A01CD: cmp byte ptr [esi + 4], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A01ED; /* 0x100A01D0: jg 0x100a01ed */
L_100A01D2:
    /* cmp MEM8(eax), 0 */ /* 0x100A01D2: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A01DF; /* 0x100A01D5: jne 0x100a01df */
L_100A01D7:
    PUSH32(esp, ebx); /* 0x100A01D7: push ebx */
    ecx = esi; /* 0x100A01D8: mov ecx, esi */
    RECOMP_CALL(sub_1002374C); /* 0x100A01DA: call 0x1002374c */
    RECOMP_FLAGS_IN();
L_100A01DF:
    PUSH32(esp, 0x7Du); /* 0x100A01DF: push 0x7d */
    ecx = esi; /* 0x100A01E1: mov ecx, esi */
    RECOMP_CALL(sub_1002A1C1); /* 0x100A01E3: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100A01E8: mov eax, dword ptr [0x100e02f0] */
L_100A01ED:
    /* cmp MEM8(eax), 0x40u */ /* 0x100A01ED: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A01F0: jne 0x100a021e */
L_100A01F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A01F2: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x100A01F3: mov dword ptr [0x100e02f0], eax */
    goto L_100A021E; /* 0x100A01F8: jmp 0x100a021e */
L_100A01FA:
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100A01FA: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_100A021E; /* 0x100A01FC: jg 0x100a021e */
L_100A01FE:
    PUSH32(esp, esi); /* 0x100A01FE: push esi */
    eax = ebp + (-0x10); /* 0x100A01FF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100A0202: push eax */
    PUSH32(esp, ebx); /* 0x100A0203: push ebx */
    ecx = ebp + (-0x20); /* 0x100A0204: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009EB14); /* 0x100A0207: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A020C: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x100A020E: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x100A0213: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(esi) = ecx; /* 0x100A0216: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x100A0218: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x4) = ecx; /* 0x100A021B: mov dword ptr [esi + 4], ecx */
L_100A021E:
    eax = esi; /* 0x100A021E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A0220: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A0221: pop ebx */
    esp = ebp; /* 0x100A0222: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A0224: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0225: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0228u);

L_100A0228:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A024A; /* 0x100A0228: jae 0x100a024a */
L_100A022A:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A022A: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A022D: in al, dx */
    eax = MEM32(0x100E40F4); /* 0x100A022E: mov eax, dword ptr [0x100e40f4] */
    /* test LO8(eax), 1 */ /* 0x100A0233: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0298; /* 0x100A0235: jne 0x100a0298 */
L_100A0237:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0237: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40D8) = 4; /* 0x100A0239: mov dword ptr [0x100e40d8], 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A0243: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E40E0) = 2; /* 0x100A0244: mov dword ptr [0x100e40e0], 2 */
    goto L_100A024E; /* falls through past a gap */
L_100A024A:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x100A024A: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A024C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A024E:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x100A024E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40D4) = ecx; /* 0x100A0250: mov dword ptr [0x100e40d4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A0256: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40F4) = eax; /* 0x100A0258: mov dword ptr [0x100e40f4], eax */
    eax = 0x100A02B8u; /* 0x100A025D: mov eax, 0x100a02b8 */
    MEM32(0x100E40C8) = edx; /* 0x100A0262: mov dword ptr [0x100e40c8], edx */
    MEM32(0x100E40C4) = eax; /* 0x100A0268: mov dword ptr [0x100e40c4], eax */
    MEM32(0x100E40CC) = edx; /* 0x100A026D: mov dword ptr [0x100e40cc], edx */
    MEM32(0x100E40D0) = eax; /* 0x100A0273: mov dword ptr [0x100e40d0], eax */
    MEM32(0x100E40DC) = eax; /* 0x100A0278: mov dword ptr [0x100e40dc], eax */
    MEM32(0x100E40E4) = edx; /* 0x100A027D: mov dword ptr [0x100e40e4], edx */
    MEM32(0x100E40E8) = eax; /* 0x100A0283: mov dword ptr [0x100e40e8], eax */
    MEM32(0x100E40EC) = 3; /* 0x100A0288: mov dword ptr [0x100e40ec], 3 */
    MEM32(0x100E40F0) = edx; /* 0x100A0292: mov dword ptr [0x100e40f0], edx */
L_100A0298:
    eax = MEM32(ebp + 0x8); /* 0x100A0298: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 3 */ /* 0x100A029B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A02AA; /* 0x100A029E: ja 0x100a02aa */
L_100A02A0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x100A02A0: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E40C4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100E40C4u; /* 0x100A02A3: add eax, 0x100e40c4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A02A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A02A9: ret  */
L_100A02AA:
    eax = 0x100E40E8u; /* 0x100A02AA: mov eax, 0x100e40e8 */
    ebp = POP32_VAL(esp); /* 0x100A02AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A02B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A022B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A022Bu);

L_100A022B:
    PUSH32(esp, ebp); /* 0x100A022B: push ebp */
    ebp = esp; /* 0x100A022C: mov ebp, esp */
    eax = MEM32(0x100E40F4); /* 0x100A022E: mov eax, dword ptr [0x100e40f4] */
    /* test LO8(eax), 1 */ /* 0x100A0233: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0298; /* 0x100A0235: jne 0x100a0298 */
L_100A0237:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0237: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40D8) = 4; /* 0x100A0239: mov dword ptr [0x100e40d8], 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A0243: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E40E0) = 2; /* 0x100A0244: mov dword ptr [0x100e40e0], 2 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x100A024E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40D4) = ecx; /* 0x100A0250: mov dword ptr [0x100e40d4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A0256: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E40F4) = eax; /* 0x100A0258: mov dword ptr [0x100e40f4], eax */
    eax = 0x100A02B8u; /* 0x100A025D: mov eax, 0x100a02b8 */
    MEM32(0x100E40C8) = edx; /* 0x100A0262: mov dword ptr [0x100e40c8], edx */
    MEM32(0x100E40C4) = eax; /* 0x100A0268: mov dword ptr [0x100e40c4], eax */
    MEM32(0x100E40CC) = edx; /* 0x100A026D: mov dword ptr [0x100e40cc], edx */
    MEM32(0x100E40D0) = eax; /* 0x100A0273: mov dword ptr [0x100e40d0], eax */
    MEM32(0x100E40DC) = eax; /* 0x100A0278: mov dword ptr [0x100e40dc], eax */
    MEM32(0x100E40E4) = edx; /* 0x100A027D: mov dword ptr [0x100e40e4], edx */
    MEM32(0x100E40E8) = eax; /* 0x100A0283: mov dword ptr [0x100e40e8], eax */
    MEM32(0x100E40EC) = 3; /* 0x100A0288: mov dword ptr [0x100e40ec], 3 */
    MEM32(0x100E40F0) = edx; /* 0x100A0292: mov dword ptr [0x100e40f0], edx */
L_100A0298:
    eax = MEM32(ebp + 0x8); /* 0x100A0298: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 3 */ /* 0x100A029B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A02AA; /* 0x100A029E: ja 0x100a02aa */
L_100A02A0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x100A02A0: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E40C4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100E40C4u; /* 0x100A02A3: add eax, 0x100e40c4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A02A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A02A9: ret  */
L_100A02AA:
    eax = 0x100E40E8u; /* 0x100A02AA: mov eax, 0x100e40e8 */
    ebp = POP32_VAL(esp); /* 0x100A02AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A02B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A02B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A02B8u);

L_100A02B8:
    void_lift_trap(0x100A02B8u, "mov gs, word ptr [edi]");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100A02BA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ecx); /* 0x100A02BC: push ecx */
    /* test MEM32(ecx), 0x09FF1D10u */ /* 0x100A02BD: test dword ptr [ecx], 0x9ff1d10 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x09FF1D10u);
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A02C3: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x100A02C6: in al, dx */
    PUSH32(esp, esi); /* 0x100A02C7: push esi */
    PUSH32(esp, edi); /* 0x100A02C8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A02C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A02CB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A02CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A02CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A02D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001F41F); /* 0x100A02D4: call 0x1001f41f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A02D9: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A02DB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x100A02DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02E0: jne 0x100a030c */
L_100A02E2:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A02E2: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02E5: je 0x100a030c */
L_100A02E7:
    /* cmp MEM32(0x100DFDD0), eax */ /* 0x100A02E7: cmp dword ptr [0x100dfdd0], eax */
    _flag_a = (uint32_t)(MEM32(0x100DFDD0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02ED: jbe 0x100a030c */
L_100A02EF:
    PUSH32(esp, esi); /* 0x100A02EF: push esi */
    RECOMP_CALL(sub_100A47E9); /* 0x100A02F0: call 0x100a47e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x100A02F5: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A02FB: pop ecx */
    /* cmp esi, MEM32(0x100DFDD0) */ /* 0x100A02FC: cmp esi, dword ptr [0x100dfdd0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A0307; /* 0x100A0302: jbe 0x100a0307 */
L_100A0304:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A0304: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A0307:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100A0307: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A02CB; /* 0x100A030A: jne 0x100a02cb */
L_100A030C:
    eax = edi; /* 0x100A030C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100A030E: pop edi */
    esi = POP32_VAL(esp); /* 0x100A030F: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A0310: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0311: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A02C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A02C4u);

L_100A02C4:
    PUSH32(esp, ebp); /* 0x100A02C4: push ebp */
    ebp = esp; /* 0x100A02C5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A02C7: push esi */
    PUSH32(esp, edi); /* 0x100A02C8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A02C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A02CB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A02CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A02CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A02D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001F41F); /* 0x100A02D4: call 0x1001f41f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A02D9: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A02DB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x100A02DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02E0: jne 0x100a030c */
L_100A02E2:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A02E2: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02E5: je 0x100a030c */
L_100A02E7:
    /* cmp MEM32(0x100DFDD0), eax */ /* 0x100A02E7: cmp dword ptr [0x100dfdd0], eax */
    _flag_a = (uint32_t)(MEM32(0x100DFDD0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A030C; /* 0x100A02ED: jbe 0x100a030c */
L_100A02EF:
    PUSH32(esp, esi); /* 0x100A02EF: push esi */
    RECOMP_CALL(sub_100A47E9); /* 0x100A02F0: call 0x100a47e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x100A02F5: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A02FB: pop ecx */
    /* cmp esi, MEM32(0x100DFDD0) */ /* 0x100A02FC: cmp esi, dword ptr [0x100dfdd0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A0307; /* 0x100A0302: jbe 0x100a0307 */
L_100A0304:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A0304: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A0307:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100A0307: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A02CB; /* 0x100A030A: jne 0x100a02cb */
L_100A030C:
    eax = edi; /* 0x100A030C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100A030E: pop edi */
    esi = POP32_VAL(esp); /* 0x100A030F: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A0310: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0311: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0312(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0312u);

L_100A0312:
    PUSH32(esp, ebp); /* 0x100A0312: push ebp */
    ebp = esp; /* 0x100A0313: mov ebp, esp */
    eax = MEM32(0x100DFDD0); /* 0x100A0315: mov eax, dword ptr [0x100dfdd0] */
    ecx = MEM32(ebp + 0x8); /* 0x100A031A: mov ecx, dword ptr [ebp + 8] */
    MEM32(0x100DFDD0) = ecx; /* 0x100A031D: mov dword ptr [0x100dfdd0], ecx */
    ebp = POP32_VAL(esp); /* 0x100A0323: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0324: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0325u);

L_100A0325:
    eax = MEM32(0x100DF7B0); /* 0x100A0325: mov eax, dword ptr [0x100df7b0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A032A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A032B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A032Bu);

L_100A032B:
    _flag_a = (uint32_t)(MEM32(0x100DF7B0)); _flag_b = (uint32_t)(0);
    MEM32(0x100DF7B0) = MEM32(0x100DF7B0) & 0; /* 0x100A032B: and dword ptr [0x100df7b0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0332: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0333(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0333u);

L_100A0333:
    PUSH32(esp, ebp); /* 0x100A0333: push ebp */
    ebp = esp; /* 0x100A0334: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A0336: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100A0339: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0349; /* 0x100A033B: je 0x100a0349 */
L_100A033D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x100A033D: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x100A0340: push dword ptr [eax - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A0343: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0348: pop ecx */
L_100A0349:
    ebp = POP32_VAL(esp); /* 0x100A0349: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A034A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A034B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A034Bu);

L_100A034B:
    PUSH32(esp, ebp); /* 0x100A034B: push ebp */
    ebp = esp; /* 0x100A034C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100A034E: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A0350: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0353: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A03A7); /* 0x100A0356: call 0x100a03a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A035B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A035E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A035F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0360u);

L_100A0360:
    PUSH32(esp, ebp); /* 0x100A0360: push ebp */
    ebp = esp; /* 0x100A0361: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A0363: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100A0366: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A037F; /* 0x100A0368: jne 0x100a037f */
L_100A036A:
    RECOMP_CALL(sub_1001177D); /* 0x100A036A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A036F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A0375: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A037A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A037D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A037E: ret  */
L_100A037F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x100A037F: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x100A0382: push dword ptr [eax - 4] */
    RECOMP_CALL(sub_1001CA0E); /* 0x100A0385: call 0x1001ca0e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x100A038A: mov edx, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x100A038D: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x100A038E: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100A0391: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x100A0393: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 4 */ /* 0x100A0396: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A039E; /* 0x100A0399: ja 0x100a039e */
L_100A039B:
    PUSH32(esp, 4); /* 0x100A039B: push 4 */
    edx = POP32_VAL(esp); /* 0x100A039D: pop edx */
L_100A039E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100A039E: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A03A0: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x100A03A2: sub eax, 3 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100A03A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A03A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A03A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A03A7u);

L_100A03A7:
    PUSH32(esp, ebp); /* 0x100A03A7: push ebp */
    ebp = esp; /* 0x100A03A8: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100A03AA: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx + (-0x1); /* 0x100A03AD: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x100A03B0: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A03C8; /* 0x100A03B2: je 0x100a03c8 */
L_100A03B4:
    RECOMP_CALL(sub_1001177D); /* 0x100A03B4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A03B9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A03BF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A03C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A03C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A03C7: ret  */
L_100A03C8:
    eax = MEM32(ebp + 0x8); /* 0x100A03C8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A03CB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x100A03CC: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x100A03CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A03EB; /* 0x100A03D1: je 0x100a03eb */
L_100A03D3:
    /* cmp esi, eax */ /* 0x100A03D3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A03EB; /* 0x100A03D5: jb 0x100a03eb */
L_100A03D7:
    RECOMP_CALL(sub_1001177D); /* 0x100A03D7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A03DC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A03E2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A03E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A0440; /* 0x100A03E9: jmp 0x100a0440 */
L_100A03EB:
    /* cmp ecx, 4 */ /* 0x100A03EB: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A03F3; /* 0x100A03EE: ja 0x100a03f3 */
L_100A03F0:
    PUSH32(esp, 4); /* 0x100A03F0: push 4 */
    ecx = POP32_VAL(esp); /* 0x100A03F2: pop ecx */
L_100A03F3:
    PUSH32(esp, ebx); /* 0x100A03F3: push ebx */
    PUSH32(esp, edi); /* 0x100A03F4: push edi */
    edi = esi; /* 0x100A03F5: mov edi, esi */
    ebx = ecx + (-0x1); /* 0x100A03F7: lea ebx, [ecx - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x100A03FA: neg edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x100A03FC: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x4; /* 0x100A03FF: lea ecx, [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x100A0402: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100A0404: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x100A0406: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A0417; /* 0x100A0408: jbe 0x100a0417 */
L_100A040A:
    RECOMP_CALL(sub_1001177D); /* 0x100A040A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A040F: mov dword ptr [eax], 0xc */
    goto L_100A0424; /* 0x100A0415: jmp 0x100a0424 */
L_100A0417:
    PUSH32(esp, ecx); /* 0x100A0417: push ecx */
    RECOMP_CALL(sub_1000ED30); /* 0x100A0418: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100A041D: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x100A041F: pop ecx */
    /* test edx, edx */ /* 0x100A0420: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0428; /* 0x100A0422: jne 0x100a0428 */
L_100A0424:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0424: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A043E; /* 0x100A0426: jmp 0x100a043e */
L_100A0428:
    eax = edi + 0x4; /* 0x100A0428: lea eax, [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100A042B: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = ~ebx; /* 0x100A042D: not ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100A042F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A0431: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x100A0433: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100A0435: sub eax, esi */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x100A0437: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x100A0439: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ecx + (-0x4)) = edx; /* 0x100A043B: mov dword ptr [ecx - 4], edx */
L_100A043E:
    edi = POP32_VAL(esp); /* 0x100A043E: pop edi */
    ebx = POP32_VAL(esp); /* 0x100A043F: pop ebx */
L_100A0440:
    esi = POP32_VAL(esp); /* 0x100A0440: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A0441: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0442: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0443(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0443u);

L_100A0443:
    PUSH32(esp, ebp); /* 0x100A0443: push ebp */
    ebp = esp; /* 0x100A0444: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100A0446: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x100A0449: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A044D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A044E: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A0451: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A046B; /* 0x100A0453: jne 0x100a046b */
L_100A0455:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A0455: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A0458: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A045B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100A03A7); /* 0x100A045E: call 0x100a03a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A0463: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100A05B1; /* 0x100A0466: jmp 0x100a05b1 */
L_100A046B:
    PUSH32(esp, edi); /* 0x100A046B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100A046C: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100A046F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A047C; /* 0x100A0471: jne 0x100a047c */
L_100A0473:
    PUSH32(esp, esi); /* 0x100A0473: push esi */
    RECOMP_CALL(sub_100A0333); /* 0x100A0474: call 0x100a0333 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0479: pop ecx */
    goto L_100A04A1; /* 0x100A047A: jmp 0x100a04a1 */
L_100A047C:
    ecx = MEM32(ebp + 0x10); /* 0x100A047C: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + (-0x1); /* 0x100A047F: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x100A0482: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0491; /* 0x100A0484: jne 0x100a0491 */
L_100A0486:
    edx = MEM32(ebp + 0x14); /* 0x100A0486: mov edx, dword ptr [ebp + 0x14] */
    /* test edx, edx */ /* 0x100A0489: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A04A8; /* 0x100A048B: je 0x100a04a8 */
L_100A048D:
    /* cmp edx, edi */ /* 0x100A048D: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A04A8; /* 0x100A048F: jb 0x100a04a8 */
L_100A0491:
    RECOMP_CALL(sub_1001177D); /* 0x100A0491: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A0496: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A049C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A04A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A04A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A05B0; /* 0x100A04A3: jmp 0x100a05b0 */
L_100A04A8:
    eax = esi; /* 0x100A04A8: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x100A04AA: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100A04AD: push ebx */
    ebx = MEM32(eax + (-0x4)); /* 0x100A04AE: mov ebx, dword ptr [eax - 4] */
    /* cmp ecx, 4 */ /* 0x100A04B1: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A04B9; /* 0x100A04B4: ja 0x100a04b9 */
L_100A04B6:
    PUSH32(esp, 4); /* 0x100A04B6: push 4 */
    ecx = POP32_VAL(esp); /* 0x100A04B8: pop ecx */
L_100A04B9:
    eax = ecx + (-0x1); /* 0x100A04B9: lea eax, [ecx - 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100A04BC: mov dword ptr [ebp - 8], eax */
    eax = edx; /* 0x100A04BF: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A04C1: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100A04C3: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x100A04C6: mov dword ptr [ebp + 8], eax */
    eax = esi; /* 0x100A04C9: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100A04CB: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100A04CD: push ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x100A04CE: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1001CA0E); /* 0x100A04D1: call 0x1001ca0e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A04D6: pop ecx */
    ecx = ebx; /* 0x100A04D7: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x100A04D9: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A04DB: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x100A04DD: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, edi */ /* 0x100A04E0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A04E7; /* 0x100A04E2: jbe 0x100a04e7 */
L_100A04E4:
    MEM32(ebp + (-0x10)) = edi; /* 0x100A04E4: mov dword ptr [ebp - 0x10], edi */
L_100A04E7:
    ecx = MEM32(ebp + 0x8); /* 0x100A04E7: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0x4; /* 0x100A04EA: lea eax, [edi + 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x100A04ED: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A04F0: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100A04F2: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A04F4: mov dword ptr [ebp - 4], eax */
    /* cmp edi, eax */ /* 0x100A04F7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A0508; /* 0x100A04F9: jbe 0x100a0508 */
L_100A04FB:
    RECOMP_CALL(sub_1001177D); /* 0x100A04FB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A0500: mov dword ptr [eax], 0xc */
    goto L_100A0547; /* 0x100A0506: jmp 0x100a0547 */
L_100A0508:
    eax = ecx + 0x4; /* 0x100A0508: lea eax, [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100A050B: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100A050D: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x100A050F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A0538; /* 0x100A0511: jb 0x100a0538 */
L_100A0513:
    RECOMP_CALL(sub_1001177D); /* 0x100A0513: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A0518: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x100A051B: push ebx */
    eax = MEM32(eax); /* 0x100A051C: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100A051E: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_100A0661); /* 0x100A0521: call 0x100a0661 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A0526: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x100A0528: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A0529: pop ecx */
    /* test edi, edi */ /* 0x100A052A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0554; /* 0x100A052C: jne 0x100a0554 */
L_100A052E:
    RECOMP_CALL(sub_1001177D); /* 0x100A052E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x100A0533: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x100A0536: mov dword ptr [eax], ecx */
L_100A0538:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A0538: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ED30); /* 0x100A053B: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A0540: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x100A0542: pop ecx */
    /* test edi, edi */ /* 0x100A0543: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A054B; /* 0x100A0545: jne 0x100a054b */
L_100A0547:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0547: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A05AF; /* 0x100A0549: jmp 0x100a05af */
L_100A054B:
    MEM32(ebp + (-0xC)) = 1; /* 0x100A054B: mov dword ptr [ebp - 0xc], 1 */
    goto L_100A0556; /* 0x100A0552: jmp 0x100a0556 */
L_100A0554:
    ebx = edi; /* 0x100A0554: mov ebx, edi */
L_100A0556:
    eax = esi; /* 0x100A0556: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x100A0558: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x100A055B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100A055D: mov eax, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0571; /* 0x100A0560: jne 0x100a0571 */
L_100A0562:
    ecx = MEM32(ebp + (-0x8)); /* 0x100A0562: mov ecx, dword ptr [ebp - 8] */
    edx = eax + esi; /* 0x100A0565: lea edx, [eax + esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x100A0568: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    ecx = ~ecx; /* 0x100A056B: not ecx */
    /* test ecx, edx */ /* 0x100A056D: test ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A05AD; /* 0x100A056F: je 0x100a05ad */
L_100A0571:
    ecx = MEM32(ebp + 0x14); /* 0x100A0571: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100A0574: add eax, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x100A0576: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100A0579: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x100A057B: push dword ptr [ebp - 0x10] */
    edx = ~edx; /* 0x100A057E: not edx */
    esi = ecx + 0x4; /* 0x100A0580: lea esi, [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100A0583: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x100A0585: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x100A0588: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100A058A: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x100A058C: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A058E: push eax */
    PUSH32(esp, esi); /* 0x100A058F: push esi */
    RECOMP_CALL(sub_1000F10E); /* 0x100A0590: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A0595: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x100A0598: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A05A5; /* 0x100A059C: je 0x100a05a5 */
L_100A059E:
    PUSH32(esp, ebx); /* 0x100A059E: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A059F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A05A4: pop ecx */
L_100A05A5:
    ecx = esi; /* 0x100A05A5: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x100A05A7: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(ecx + (-0x4)) = edi; /* 0x100A05AA: mov dword ptr [ecx - 4], edi */
L_100A05AD:
    eax = esi; /* 0x100A05AD: mov eax, esi */
L_100A05AF:
    ebx = POP32_VAL(esp); /* 0x100A05AF: pop ebx */
L_100A05B0:
    edi = POP32_VAL(esp); /* 0x100A05B0: pop edi */
L_100A05B1:
    esi = POP32_VAL(esp); /* 0x100A05B1: pop esi */
    esp = ebp; /* 0x100A05B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A05B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A05B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A05B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A05B6u);

L_100A05B6:
    PUSH32(esp, ebp); /* 0x100A05B6: push ebp */
    ebp = esp; /* 0x100A05B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A05B9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A05BA: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A05BD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A05BE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100A05C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A05DF; /* 0x100A05C2: je 0x100a05df */
L_100A05C4:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x100A05C4: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A05C6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x100A05C8: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x100A05C9: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x100A05CB: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A05DF; /* 0x100A05CE: jae 0x100a05df */
L_100A05D0:
    RECOMP_CALL(sub_1001177D); /* 0x100A05D0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A05D5: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A05DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A062A; /* 0x100A05DD: jmp 0x100a062a */
L_100A05DF:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10)); /* 0x100A05DF: imul esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100A05E3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100A05E4: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x100A05E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A05FC; /* 0x100A05E9: je 0x100a05fc */
L_100A05EB:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A05EB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A05EE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x100A05F1: push ebx */
    RECOMP_CALL(sub_100A0360); /* 0x100A05F2: call 0x100a0360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A05F7: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100A05FA: mov edi, eax */
L_100A05FC:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A05FC: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A05FF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x100A0602: push esi */
    PUSH32(esp, ebx); /* 0x100A0603: push ebx */
    RECOMP_CALL(sub_100A0443); /* 0x100A0604: call 0x100a0443 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A0609: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A060B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x100A060E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0627; /* 0x100A0610: je 0x100a0627 */
L_100A0612:
    /* cmp edi, esi */ /* 0x100A0612: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A0627; /* 0x100A0614: jae 0x100a0627 */
L_100A0616:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100A0616: sub esi, edi */
    _flag_k = FK_CMP;
    eax = ebx + edi; /* 0x100A0618: lea eax, [ebx + edi] */
    PUSH32(esp, esi); /* 0x100A061B: push esi */
    PUSH32(esp, 0); /* 0x100A061C: push 0 */
    PUSH32(esp, eax); /* 0x100A061E: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100A061F: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A0624: add esp, 0xc */
    _flag_k = FK_ADD;
L_100A0627:
    eax = ebx; /* 0x100A0627: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A0629: pop ebx */
L_100A062A:
    edi = POP32_VAL(esp); /* 0x100A062A: pop edi */
    esi = POP32_VAL(esp); /* 0x100A062B: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A062C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A062D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A062E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A062Eu);

L_100A062E:
    PUSH32(esp, ebp); /* 0x100A062E: push ebp */
    ebp = esp; /* 0x100A062F: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100A0631: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A0633: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A0636: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0639: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A0443); /* 0x100A063C: call 0x100a0443 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A0641: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A0644: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0645: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0646(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0646u);

L_100A0646:
    PUSH32(esp, ebp); /* 0x100A0646: push ebp */
    ebp = esp; /* 0x100A0647: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100A0649: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A064B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A064E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A0651: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0654: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A05B6); /* 0x100A0657: call 0x100a05b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A065C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A065F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0660: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0661u);

L_100A0661:
    PUSH32(esp, ebp); /* 0x100A0661: push ebp */
    ebp = esp; /* 0x100A0662: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100A0664: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A0665: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A0668: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0683; /* 0x100A066A: jne 0x100a0683 */
L_100A066C:
    RECOMP_CALL(sub_1001177D); /* 0x100A066C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A0671: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A0677: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A067C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A0717; /* 0x100A067E: jmp 0x100a0717 */
L_100A0683:
    PUSH32(esp, esi); /* 0x100A0683: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A0684: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFE0u */ /* 0x100A0687: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A069B; /* 0x100A068A: jbe 0x100a069b */
L_100A068C:
    RECOMP_CALL(sub_1001177D); /* 0x100A068C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A0691: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0697: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A0716; /* 0x100A0699: jmp 0x100a0716 */
L_100A069B:
    /* test esi, esi */ /* 0x100A069B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A06A0; /* 0x100A069D: jne 0x100a06a0 */
L_100A069F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A069F: inc esi */
    _flag_k = FK_INC;
L_100A06A0:
    PUSH32(esp, ebx); /* 0x100A06A0: push ebx */
    PUSH32(esp, edi); /* 0x100A06A1: push edi */
    PUSH32(esp, 0); /* 0x100A06A2: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A06A4: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51F4)); /* 0x100A06AA: call dword ptr [0x100e51f4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100A06B0: push esi */
    PUSH32(esp, edi); /* 0x100A06B1: push edi */
    PUSH32(esp, 0x10u); /* 0x100A06B2: push 0x10 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A06B4: push dword ptr [0x100df7b0] */
    MEM32(ebp + 0x8) = eax; /* 0x100A06BA: mov dword ptr [ebp + 8], eax */
    RECOMP_ICALL(MEM32(0x100E51F0)); /* 0x100A06BD: call dword ptr [0x100e51f0] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A06C3: mov ebx, eax */
    /* test ebx, ebx */ /* 0x100A06C5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0713; /* 0x100A06C7: jne 0x100a0713 */
L_100A06C9:
    eax = MEM32(ebp + 0x8); /* 0x100A06C9: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x4000u */ /* 0x100A06CC: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A06FD; /* 0x100A06D1: ja 0x100a06fd */
L_100A06D3:
    /* cmp esi, eax */ /* 0x100A06D3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A06FD; /* 0x100A06D5: ja 0x100a06fd */
L_100A06D7:
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 0xFFFFFFFFu; /* 0x100A06D7: or dword ptr [ebp + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x100A06DB: lea eax, [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A06DE: push ebx */
    PUSH32(esp, 4); /* 0x100A06DF: push 4 */
    PUSH32(esp, eax); /* 0x100A06E1: push eax */
    PUSH32(esp, ebx); /* 0x100A06E2: push ebx */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A06E3: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51F8)); /* 0x100A06E9: call dword ptr [0x100e51f8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A06EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A06FD; /* 0x100A06F1: je 0x100a06fd */
L_100A06F3:
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x100A06F3: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A06FD; /* 0x100A06F7: jne 0x100a06fd */
L_100A06F9:
    ebx = edi; /* 0x100A06F9: mov ebx, edi */
    goto L_100A0713; /* 0x100A06FB: jmp 0x100a0713 */
L_100A06FD:
    RECOMP_CALL(sub_1001177D); /* 0x100A06FD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A0702: mov esi, eax */
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A0704: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A070A: push eax */
    RECOMP_CALL(sub_1001E482); /* 0x100A070B: call 0x1001e482 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0710: pop ecx */
    MEM32(esi) = eax; /* 0x100A0711: mov dword ptr [esi], eax */
L_100A0713:
    eax = ebx; /* 0x100A0713: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A0715: pop ebx */
L_100A0716:
    esi = POP32_VAL(esp); /* 0x100A0716: pop esi */
L_100A0717:
    edi = POP32_VAL(esp); /* 0x100A0717: pop edi */
    ebp = POP32_VAL(esp); /* 0x100A0718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0719: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A071A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A071Au);

L_100A071A:
    RECOMP_CALL(sub_1001177D); /* 0x100A071A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x100A071F: mov dword ptr [eax], 0x28 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A0725: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0728: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0729(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0729u);

L_100A0729:
    PUSH32(esp, esi); /* 0x100A0729: push esi */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x100A072A: push -2 */
    esi = POP32_VAL(esp); /* 0x100A072C: pop esi */
    PUSH32(esp, 0); /* 0x100A072D: push 0 */
    PUSH32(esp, 0); /* 0x100A072F: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A0731: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51FC)); /* 0x100A0737: call dword ptr [0x100e51fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A073D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0744; /* 0x100A073F: jne 0x100a0744 */
L_100A0741:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x100A0741: push -4 */
    esi = POP32_VAL(esp); /* 0x100A0743: pop esi */
L_100A0744:
    eax = esi; /* 0x100A0744: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A0746: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0747: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0748u);

    goto L_100A0748;
L_100A0729:
    PUSH32(esp, esi); /* 0x100A0729: push esi */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x100A072A: push -2 */
    esi = POP32_VAL(esp); /* 0x100A072C: pop esi */
    PUSH32(esp, 0); /* 0x100A072D: push 0 */
    PUSH32(esp, 0); /* 0x100A072F: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A0731: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51FC)); /* 0x100A0737: call dword ptr [0x100e51fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A073D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0744; /* 0x100A073F: jne 0x100a0744 */
L_100A0741:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x100A0741: push -4 */
    esi = POP32_VAL(esp); /* 0x100A0743: pop esi */
L_100A0744:
    eax = esi; /* 0x100A0744: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A0746: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0747: ret  */
L_100A0748:
    RECOMP_BACKEDGE();
    goto L_100A0729; /* 0x100A0748: jmp 0x100a0729 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A074A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A074Au);

L_100A074A:
    PUSH32(esp, 0); /* 0x100A074A: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A074C: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E5200)); /* 0x100A0752: call dword ptr [0x100e5200] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A0758: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A075A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A075C: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A075E: dec eax */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A075F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0760u);

L_100A0760:
    RECOMP_CALL(sub_1001177D); /* 0x100A0760: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x100A0765: mov dword ptr [eax], 0x28 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A076B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A076D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A076E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A076Eu);

L_100A076E:
    PUSH32(esp, 0x2Cu); /* 0x100A076E: push 0x2c */
    PUSH32(esp, 0x100A0890u); /* 0x100A0770: push 0x100a0890 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A0775: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & 0; /* 0x100A077A: and dword ptr [ebp - 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x100A077E: push 6 */
    ecx = POP32_VAL(esp); /* 0x100A0780: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0781: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x38); /* 0x100A0783: lea edi, [ebp - 0x38] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x100A0786: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 0xFFFFFFFEu); /* 0x100A0788: push -2 */
    ebx = POP32_VAL(esp); /* 0x100A078A: pop ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x100A078B: mov dword ptr [ebp - 0x20], ebx */
    edi = MEM32(ebp + 0x8); /* 0x100A078E: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A0791: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A0793: setne al */
    /* test eax, eax */ /* 0x100A0796: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A07B2; /* 0x100A0798: jne 0x100a07b2 */
L_100A079A:
    RECOMP_CALL(sub_1001177D); /* 0x100A079A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A079F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A07A5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFAu); /* 0x100A07AA: push -6 */
L_100A07AC:
    eax = POP32_VAL(esp); /* 0x100A07AC: pop eax */
    goto L_100A0889; /* 0x100A07AD: jmp 0x100a0889 */
L_100A07B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A07B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x100A07B4: mov word ptr [ebp - 0x32], ax */
    MEM8(ebp + (-0x33)) = (uint8_t)(LO8(eax)); /* 0x100A07B8: mov byte ptr [ebp - 0x33], al */
    eax = MEM32(edi); /* 0x100A07BB: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x100A07BD: mov dword ptr [ebp - 0x3c], eax */
    /* test eax, eax */ /* 0x100A07C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A07E0; /* 0x100A07C2: jne 0x100a07e0 */
L_100A07C4:
    eax = ebp + (-0x3C); /* 0x100A07C4: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x100A07C7: push eax */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A07C8: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E5204)); /* 0x100A07CE: call dword ptr [0x100e5204] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A07D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A086E; /* 0x100A07D6: jne 0x100a086e */
L_100A07DC:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x100A07DC: push -3 */
    RECOMP_BACKEDGE();
    goto L_100A07AC; /* 0x100A07DE: jmp 0x100a07ac */
L_100A07E0:
    /* cmp MEM32(edi + 0x8), 1 */ /* 0x100A07E0: cmp dword ptr [edi + 8], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0804; /* 0x100A07E4: jne 0x100a0804 */
L_100A07E6:
    PUSH32(esp, eax); /* 0x100A07E6: push eax */
    PUSH32(esp, 0); /* 0x100A07E7: push 0 */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A07E9: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E51FC)); /* 0x100A07EF: call dword ptr [0x100e51fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A07F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A07FD; /* 0x100A07F7: jne 0x100a07fd */
L_100A07F9:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x100A07F9: push -4 */
    RECOMP_BACKEDGE();
    goto L_100A07AC; /* 0x100A07FB: jmp 0x100a07ac */
L_100A07FD:
    PUSH32(esp, 4); /* 0x100A07FD: push 4 */
    eax = POP32_VAL(esp); /* 0x100A07FF: pop eax */
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x100A0800: mov word ptr [ebp - 0x32], ax */
L_100A0804:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A0804: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A0808: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A080A: mov dword ptr [ebp - 0x1c], esi */
    eax = ebp + (-0x3C); /* 0x100A080D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x100A0810: push eax */
    PUSH32(esp, MEM32(0x100DF7B0)); /* 0x100A0811: push dword ptr [0x100df7b0] */
    RECOMP_ICALL(MEM32(0x100E5204)); /* 0x100A0817: call dword ptr [0x100e5204] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A081D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0825; /* 0x100A081F: jne 0x100a0825 */
L_100A0821:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A0821: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A0822: mov dword ptr [ebp - 0x1c], esi */
L_100A0825:
    MEM32(ebp + (-0x4)) = ebx; /* 0x100A0825: mov dword ptr [ebp - 4], ebx */
    goto L_100A084F; /* 0x100A0828: jmp 0x100a084f */
L_100A084F:
    /* cmp esi, 1 */ /* 0x100A084F: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0869; /* 0x100A0852: jne 0x100a0869 */
L_100A0854:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A0854: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A085A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x103u */ /* 0x100A085C: cmp eax, 0x103 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A0861: setne cl */
    eax = ecx + (-0x5); /* 0x100A0864: lea eax, [ecx - 5] */
    goto L_100A0889; /* 0x100A0867: jmp 0x100a0889 */
L_100A0869:
    /* cmp esi, 2 */ /* 0x100A0869: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A07F9; /* 0x100A086C: je 0x100a07f9 */
L_100A086E:
    /* test MEM8(ebp + (-0x32)), 4 */ /* 0x100A086E: test byte ptr [ebp - 0x32], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x32))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0804; /* 0x100A0872: je 0x100a0804 */
L_100A0874:
    eax = MEM32(ebp + (-0x3C)); /* 0x100A0874: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(edi) = eax; /* 0x100A0877: mov dword ptr [edi], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x100A0879: mov eax, dword ptr [ebp - 0x38] */
    MEM32(edi + 0x4) = eax; /* 0x100A087C: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = 1; /* 0x100A087F: mov dword ptr [edi + 8], 1 */
    eax = MEM32(ebp + (-0x20)); /* 0x100A0886: mov eax, dword ptr [ebp - 0x20] */
L_100A0889:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A0889: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A088E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A08AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A08ACu);

L_100A08AC:
    PUSH32(esp, ebp); /* 0x100A08AC: push ebp */
    ebp = esp; /* 0x100A08AD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x100A08AF: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A08B2: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A08B7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A08B9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100A08BC: push ebx */
    PUSH32(esp, esi); /* 0x100A08BD: push esi */
    PUSH32(esp, edi); /* 0x100A08BE: push edi */
    PUSH32(esp, 4); /* 0x100A08BF: push 4 */
    eax = POP32_VAL(esp); /* 0x100A08C1: pop eax */
    RECOMP_CALL(sub_10011E68); /* 0x100A08C2: call 0x10011e68 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x100A08C7: mov eax, esp */
    ecx = ebp + (-0x30); /* 0x100A08C9: lea ecx, [ebp - 0x30] */
    PUSH32(esp, 0x1Cu); /* 0x100A08CC: push 0x1c */
    PUSH32(esp, ecx); /* 0x100A08CE: push ecx */
    PUSH32(esp, eax); /* 0x100A08CF: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x100A08D0: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(0x100E520C)); /* 0x100A08D3: call dword ptr [0x100e520c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A08D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0966; /* 0x100A08DB: je 0x100a0966 */
L_100A08E1:
    eax = MEM32(ebp + (-0x2C)); /* 0x100A08E1: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100A08E4: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x54); /* 0x100A08E7: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x100A08EA: push eax */
    RECOMP_ICALL(MEM32(0x100E5208)); /* 0x100A08EB: call dword ptr [0x100e5208] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x50)); /* 0x100A08F1: mov ebx, dword ptr [ebp - 0x50] */
    eax = ebp + (-0x8); /* 0x100A08F4: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A08F7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A08F9: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x100A08FA: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_100A47CE); /* 0x100A08FD: call 0x100a47ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0902: pop ecx */
    /* test eax, eax */ /* 0x100A0903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A090F; /* 0x100A0905: je 0x100a090f */
L_100A0907:
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x100A0907: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A090F; /* 0x100A090A: jbe 0x100a090f */
L_100A090C:
    esi = MEM32(ebp + (-0x8)); /* 0x100A090C: mov esi, dword ptr [ebp - 8] */
L_100A090F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A090F: dec esi */
    _flag_k = FK_DEC;
    eax = ebx + (-0x1); /* 0x100A0910: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x100A0913: add esi, ebx */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x100A0915: not eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x100A0917: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A091D; /* 0x100A0919: je 0x100a091d */
L_100A091B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x100A091B: add esi, ebx */
    _flag_k = FK_ADD;
L_100A091D:
    eax = ebx + ebx; /* 0x100A091D: lea eax, [ebx + ebx] */
    /* cmp esi, eax */ /* 0x100A0920: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A0926; /* 0x100A0922: jae 0x100a0926 */
L_100A0924:
    esi = eax; /* 0x100A0924: mov esi, eax */
L_100A0926:
    eax = MEM32(ebp + (-0xC)); /* 0x100A0926: mov eax, dword ptr [ebp - 0xc] */
    edi = ebx + (-0x1); /* 0x100A0929: lea edi, [ebx - 1] */
    edi = ~edi; /* 0x100A092C: not edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100A092E: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    edi = edi & MEM32(ebp + (-0x10)); /* 0x100A0930: and edi, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x100A0933: sub edi, esi */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x100A0935: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A0966; /* 0x100A0937: jb 0x100a0966 */
L_100A0939:
    PUSH32(esp, 4); /* 0x100A0939: push 4 */
    PUSH32(esp, 0x1000u); /* 0x100A093B: push 0x1000 */
    PUSH32(esp, esi); /* 0x100A0940: push esi */
    PUSH32(esp, edi); /* 0x100A0941: push edi */
    RECOMP_ICALL(MEM32(0x100E51A0)); /* 0x100A0942: call dword ptr [0x100e51a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0948: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0966; /* 0x100A094A: je 0x100a0966 */
L_100A094C:
    eax = ebp + (-0x14); /* 0x100A094C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100A094F: push eax */
    PUSH32(esp, 0x104u); /* 0x100A0950: push 0x104 */
    PUSH32(esp, esi); /* 0x100A0955: push esi */
    PUSH32(esp, edi); /* 0x100A0956: push edi */
    RECOMP_ICALL(MEM32(0x100E51A4)); /* 0x100A0957: call dword ptr [0x100e51a4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A095D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0966; /* 0x100A095F: je 0x100a0966 */
L_100A0961:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0961: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A0963: inc eax */
    _flag_k = FK_INC;
    goto L_100A0968; /* 0x100A0964: jmp 0x100a0968 */
L_100A0966:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0966: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A0968:
    esp = ebp + (-0x60); /* 0x100A0968: lea esp, [ebp - 0x60] */
    edi = POP32_VAL(esp); /* 0x100A096B: pop edi */
    esi = POP32_VAL(esp); /* 0x100A096C: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A096D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x100A096E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A0971: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100A0973: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A0978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A097A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A097B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A097C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A097Cu);

L_100A097C:
    PUSH32(esp, esi); /* 0x100A097C: push esi */
    PUSH32(esp, edi); /* 0x100A097D: push edi */
    esi = 0x100DF640u; /* 0x100A097E: mov esi, 0x100df640 */
L_100A0983:
    edi = MEM32(esi); /* 0x100A0983: mov edi, dword ptr [esi] */
    /* test edi, edi */ /* 0x100A0985: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A09C0; /* 0x100A0987: je 0x100a09c0 */
L_100A0989:
    eax = edi + 0x800; /* 0x100A0989: lea eax, [edi + 0x800] */
    /* cmp edi, eax */ /* 0x100A098F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A09B5; /* 0x100A0991: jae 0x100a09b5 */
L_100A0993:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x100A0993: add edi, 0xc */
    _flag_k = FK_ADD;
L_100A0996:
    /* cmp MEM32(edi + (-0x4)), 0 */ /* 0x100A0996: cmp dword ptr [edi - 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A09A3; /* 0x100A099A: je 0x100a09a3 */
L_100A099C:
    PUSH32(esp, edi); /* 0x100A099C: push edi */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x100A099D: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
L_100A09A3:
    ecx = MEM32(esi); /* 0x100A09A3: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x100A09A5: add edi, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x800u; /* 0x100A09A8: add ecx, 0x800 */
    _flag_k = FK_ADD;
    eax = edi + (-0xC); /* 0x100A09AE: lea eax, [edi - 0xc] */
    /* cmp eax, ecx */ /* 0x100A09B1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A0996; /* 0x100A09B3: jb 0x100a0996 */
L_100A09B5:
    PUSH32(esp, MEM32(esi)); /* 0x100A09B5: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A09B7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100A09BC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100A09BF: pop ecx */
L_100A09C0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100A09C0: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x100DF740u */ /* 0x100A09C3: cmp esi, 0x100df740 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100DF740u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100A0983; /* 0x100A09C9: jl 0x100a0983 */
L_100A09CB:
    edi = POP32_VAL(esp); /* 0x100A09CB: pop edi */
    esi = POP32_VAL(esp); /* 0x100A09CC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A09CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A09CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A09CEu);

L_100A09CE:
    PUSH32(esp, 0x6Cu); /* 0x100A09CE: push 0x6c */
    PUSH32(esp, 0x100A0D20u); /* 0x100A09D0: push 0x100a0d20 */
    RECOMP_CALL(sub_100353E2); /* 0x100A09D5: call 0x100353e2 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100A09DA: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x100A09DD: mov dword ptr [ebp - 0x7c], ebx */
    edi = MEM32(ebp + 0xC); /* 0x100A09E0: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A09E3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A09E5: mov dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A09E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100A09EA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A09EC: setne al */
    /* test eax, eax */ /* 0x100A09EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0A0A; /* 0x100A09F1: jne 0x100a0a0a */
L_100A09F3:
    RECOMP_CALL(sub_1001E471); /* 0x100A09F3: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A09F8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A09FA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A09FF: mov dword ptr [eax], 0x16 */
    goto L_100A0D0F; /* 0x100A0A05: jmp 0x100a0d0f */
L_100A0A0A:
    PUSH32(esp, 0x24u); /* 0x100A0A0A: push 0x24 */
    PUSH32(esp, esi); /* 0x100A0A0C: push esi */
    PUSH32(esp, edi); /* 0x100A0A0D: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100A0A0E: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A0A13: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x100A0A16: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0A32; /* 0x100A0A19: jne 0x100a0a32 */
L_100A0A1B:
    RECOMP_CALL(sub_1001E471); /* 0x100A0A1B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A0A20: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A0A22: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A0A27: mov dword ptr [eax], 9 */
    goto L_100A0D14; /* 0x100A0A2D: jmp 0x100a0d14 */
L_100A0A32:
    /* test ebx, ebx */ /* 0x100A0A32: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A0CFD; /* 0x100A0A34: js 0x100a0cfd */
L_100A0A3A:
    /* cmp ebx, MEM32(0x100DFDD8) */ /* 0x100A0A3A: cmp ebx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A0CFD; /* 0x100A0A40: jae 0x100a0cfd */
L_100A0A46:
    eax = ebx; /* 0x100A0A46: mov eax, ebx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A0A48: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x6C)) = eax; /* 0x100A0A4B: mov dword ptr [ebp - 0x6c], eax */
    ecx = ebx; /* 0x100A0A4E: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A0A50: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A0A53: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A0A53: shl ecx, 6 */
    MEM32(ebp + (-0x68)) = ecx; /* 0x100A0A56: mov dword ptr [ebp - 0x68], ecx */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0A59: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x100A0A60: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0A65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A0A67: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A0A68: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0CFD; /* 0x100A0A6A: je 0x100a0cfd */
L_100A0A70:
    PUSH32(esp, ebx); /* 0x100A0A70: push ebx */
    RECOMP_CALL(sub_10014206); /* 0x100A0A71: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0A76: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A0A77: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0A7A: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x100A0A7D: mov ecx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x68)); /* 0x100A0A84: mov eax, dword ptr [ebp - 0x68] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x100A0A87: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0AB2; /* 0x100A0A8C: jne 0x100a0ab2 */
L_100A0A8E:
    RECOMP_CALL(sub_1001177D); /* 0x100A0A8E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A0A93: mov dword ptr [eax], 9 */
L_100A0A99:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A0A99: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A0A9C: mov dword ptr [ebp - 0x64], esi */
L_100A0A9F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A0A9F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A0CF5); /* 0x100A0AA6: call 0x100a0cf5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A0AAB: mov eax, esi */
    goto L_100A0D17; /* 0x100A0AAD: jmp 0x100a0d17 */
L_100A0AB2:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0AB2: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A0AB5: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100A0ABB: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A0AC0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A0AC2: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x100A0AC3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0B52; /* 0x100A0AC5: je 0x100a0b52 */
L_100A0ACB:
    /* cmp eax, 2 */ /* 0x100A0ACB: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0AED; /* 0x100A0ACE: je 0x100a0aed */
L_100A0AD0:
    /* cmp eax, 3 */ /* 0x100A0AD0: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0AE8; /* 0x100A0AD3: je 0x100a0ae8 */
L_100A0AD5:
    /* test eax, eax */ /* 0x100A0AD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A8E; /* 0x100A0AD7: je 0x100a0a8e */
L_100A0AD9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A0AD9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A0ADF: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A0AE0: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0AE5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100A0A99; /* 0x100A0AE6: jmp 0x100a0a99 */
L_100A0AE8:
    /* cmp eax, 2 */ /* 0x100A0AE8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0AF4; /* 0x100A0AEB: jne 0x100a0af4 */
L_100A0AED:
    ecx = 0x2000u; /* 0x100A0AED: mov ecx, 0x2000 */
    goto L_100A0AF9; /* 0x100A0AF2: jmp 0x100a0af9 */
L_100A0AF4:
    ecx = 0x1000u; /* 0x100A0AF4: mov ecx, 0x1000 */
L_100A0AF9:
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x100A0AF9: mov word ptr [edi + 6], cx */
    MEM32(edi) = ebx; /* 0x100A0AFD: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x100A0AFF: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A0B02: mov word ptr [edi + 8], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0B06: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x100A0B08: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x100A0B0C: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x20) = esi; /* 0x100A0B0F: mov dword ptr [edi + 0x20], esi */
    MEM32(edi + 0x1C) = esi; /* 0x100A0B12: mov dword ptr [edi + 0x1c], esi */
    MEM32(edi + 0x18) = esi; /* 0x100A0B15: mov dword ptr [edi + 0x18], esi */
    /* cmp eax, 2 */ /* 0x100A0B18: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0B25; /* 0x100A0B1B: jne 0x100a0b25 */
L_100A0B1D:
    MEM32(edi + 0x14) = esi; /* 0x100A0B1D: mov dword ptr [edi + 0x14], esi */
    RECOMP_BACKEDGE();
    goto L_100A0A9F; /* 0x100A0B20: jmp 0x100a0a9f */
L_100A0B25:
    PUSH32(esp, esi); /* 0x100A0B25: push esi */
    eax = ebp + (-0x70); /* 0x100A0B26: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x100A0B29: push eax */
    PUSH32(esp, esi); /* 0x100A0B2A: push esi */
    PUSH32(esp, esi); /* 0x100A0B2B: push esi */
    PUSH32(esp, esi); /* 0x100A0B2C: push esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0B2D: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0B30: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A0B37: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0B3A: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5220)); /* 0x100A0B3D: call dword ptr [0x100e5220] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A0B43: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A0B45: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    eax = eax & MEM32(ebp + (-0x70)); /* 0x100A0B47: and eax, dword ptr [ebp - 0x70] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = eax; /* 0x100A0B4A: mov dword ptr [edi + 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_100A0A9F; /* 0x100A0B4D: jmp 0x100a0a9f */
L_100A0B52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0B52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x100A0B54: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x100A0B57: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A0B5A: mov word ptr [edi + 8], dx */
    eax = ebp + (-0x60); /* 0x100A0B5E: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x100A0B61: push eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0B62: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0B65: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A0B6C: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0B6F: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E521C)); /* 0x100A0B72: call dword ptr [0x100e521c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0B78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0AD9; /* 0x100A0B7A: je 0x100a0ad9 */
L_100A0B80:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A0B80: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x100A0B84: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0B91; /* 0x100A0B88: je 0x100a0b91 */
L_100A0B8A:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x100A0B8A: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A0B96; /* 0x100A0B8F: jmp 0x100a0b96 */
L_100A0B91:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x100A0B91: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A0B96:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A0B96: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x100A0B9A: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0BAB; /* 0x100A0B9E: jne 0x100a0bab */
L_100A0BA0:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x100A0BA0: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0BAB; /* 0x100A0BA4: jne 0x100a0bab */
L_100A0BA6:
    MEM32(edi + 0x1C) = esi; /* 0x100A0BA6: mov dword ptr [edi + 0x1c], esi */
    goto L_100A0C02; /* 0x100A0BA9: jmp 0x100a0c02 */
L_100A0BAB:
    eax = ebp + (-0x78); /* 0x100A0BAB: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0BAE: push eax */
    eax = ebp + (-0x4C); /* 0x100A0BAF: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100A0BB2: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A0BB3: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0BB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0BBB: je 0x100a0a99 */
L_100A0BC1:
    eax = ebp + (-0x2C); /* 0x100A0BC1: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0BC4: push eax */
    eax = ebp + (-0x78); /* 0x100A0BC5: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0BC8: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A0BC9: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0BCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0BD1: je 0x100a0a99 */
L_100A0BD7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A0BD7: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A0BD9: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A0BDD: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A0BDE: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A0BE2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A0BE3: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A0BE7: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A0BE8: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A0BEC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A0BED: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A0BF1: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A0BF2: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0BF6: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A0BF7: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A0BFC: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x100A0BFF: mov dword ptr [edi + 0x1c], eax */
L_100A0C02:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x100A0C02: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0C13; /* 0x100A0C06: jne 0x100a0c13 */
L_100A0C08:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x100A0C08: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0C13; /* 0x100A0C0C: jne 0x100a0c13 */
L_100A0C0E:
    eax = MEM32(edi + 0x1C); /* 0x100A0C0E: mov eax, dword ptr [edi + 0x1c] */
    goto L_100A0C67; /* 0x100A0C11: jmp 0x100a0c67 */
L_100A0C13:
    eax = ebp + (-0x78); /* 0x100A0C13: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0C16: push eax */
    eax = ebp + (-0x54); /* 0x100A0C17: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x100A0C1A: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A0C1B: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0C21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0C23: je 0x100a0a99 */
L_100A0C29:
    eax = ebp + (-0x2C); /* 0x100A0C29: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0C2C: push eax */
    eax = ebp + (-0x78); /* 0x100A0C2D: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0C30: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A0C31: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0C37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0C39: je 0x100a0a99 */
L_100A0C3F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A0C3F: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A0C41: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A0C45: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A0C46: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A0C4A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A0C4B: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A0C4F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A0C50: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A0C54: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A0C55: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A0C59: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A0C5A: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0C5E: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A0C5F: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A0C64: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100A0C67:
    MEM32(edi + 0x18) = eax; /* 0x100A0C67: mov dword ptr [edi + 0x18], eax */
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x100A0C6A: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0C7B; /* 0x100A0C6E: jne 0x100a0c7b */
L_100A0C70:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x100A0C70: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0C7B; /* 0x100A0C74: jne 0x100a0c7b */
L_100A0C76:
    eax = MEM32(edi + 0x1C); /* 0x100A0C76: mov eax, dword ptr [edi + 0x1c] */
    goto L_100A0CCF; /* 0x100A0C79: jmp 0x100a0ccf */
L_100A0C7B:
    eax = ebp + (-0x78); /* 0x100A0C7B: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0C7E: push eax */
    eax = ebp + (-0x5C); /* 0x100A0C7F: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x100A0C82: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A0C83: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0C89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0C8B: je 0x100a0a99 */
L_100A0C91:
    eax = ebp + (-0x2C); /* 0x100A0C91: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0C94: push eax */
    eax = ebp + (-0x78); /* 0x100A0C95: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A0C98: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A0C99: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0C9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0A99; /* 0x100A0CA1: je 0x100a0a99 */
L_100A0CA7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A0CA7: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A0CA9: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A0CAD: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A0CAE: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A0CB2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A0CB3: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A0CB7: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A0CB8: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A0CBC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A0CBD: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A0CC1: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A0CC2: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A0CC6: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A0CC7: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A0CCC: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100A0CCF:
    MEM32(edi + 0x20) = eax; /* 0x100A0CCF: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x100A0CD2: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(edi + 0x14) = eax; /* 0x100A0CD5: mov dword ptr [edi + 0x14], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A0CD8: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)((eax | 0x8000u)); _flag_b = (uint32_t)((eax | 0x8000u));
    eax = eax | 0x8000u; /* 0x100A0CDC: or eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A0CE1: mov word ptr [edi + 6], ax */
    MEM32(edi) = esi; /* 0x100A0CE5: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x100A0CE7: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_100A0A9F; /* 0x100A0CEA: jmp 0x100a0a9f */
L_100A0CFD:
    RECOMP_CALL(sub_1001E471); /* 0x100A0CFD: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A0D02: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A0D04: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A0D09: mov dword ptr [eax], 9 */
L_100A0D0F:
    RECOMP_CALL(sub_100A4670); /* 0x100A0D0F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A0D14:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A0D14: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A0D17:
    RECOMP_CALL(sub_1003542A); /* 0x100A0D17: call 0x1003542a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0D1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0CF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0CF5u);

L_100A0CF5:
    PUSH32(esp, ebx); /* 0x100A0CF5: push ebx */
    RECOMP_CALL(sub_100141E0); /* 0x100A0CF6: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0CFB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0CFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0D20u);

L_100A0D20:
    /* in: no port I/O under Win32 */ /* 0x100A0D20: in al, 0xff */
    RECOMP_ITAIL(0x100A0D22u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100A0D3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0D3Cu);

L_100A0D3C:
    PUSH32(esp, 0x14u); /* 0x100A0D3C: push 0x14 */
    PUSH32(esp, 0x100A0DF0u); /* 0x100A0D3E: push 0x100a0df0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A0D43: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x100A0D48: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0D4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x100A0D4E: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x100A0D51: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0D54: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100A0D56: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A0D59: setne cl */
    /* test ecx, ecx */ /* 0x100A0D5C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0D75; /* 0x100A0D5E: jne 0x100a0d75 */
L_100A0D60:
    RECOMP_CALL(sub_1001177D); /* 0x100A0D60: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A0D65: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A0D6B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A0D70:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A0D70: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A0DE6; /* 0x100A0D73: jmp 0x100a0de6 */
L_100A0D75:
    MEM32(ebp + (-0x4)) = eax; /* 0x100A0D75: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, eax); /* 0x100A0D78: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A0D79: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x100A0D7C: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A0D7E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0D81: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x100A0D84: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100A0D87: push eax */
    eax = ebp + (-0x24); /* 0x100A0D88: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A0D8B: push eax */
    RECOMP_CALL(sub_10015509); /* 0x100A0D8C: call 0x10015509 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A0D91: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A0D94: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x100A0D96: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A0D99: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A0DB5); /* 0x100A0DA0: call 0x100a0db5 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x100A0DA5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0DE3; /* 0x100A0DA7: je 0x100a0de3 */
L_100A0DA9:
    RECOMP_CALL(sub_1001177D); /* 0x100A0DA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A0DAE: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_100A0D70; /* 0x100A0DB0: jmp 0x100a0d70 */
L_100A0DE3:
    eax = MEM32(ebp + (-0x1C)); /* 0x100A0DE3: mov eax, dword ptr [ebp - 0x1c] */
L_100A0DE6:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A0DE6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0DEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0DB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0DB5u);

L_100A0DB5:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x100A0DB5: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0DE2; /* 0x100A0DB9: je 0x100a0de2 */
L_100A0DBB:
    /* test esi, esi */ /* 0x100A0DBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0DD9; /* 0x100A0DBD: je 0x100a0dd9 */
L_100A0DBF:
    ecx = MEM32(ebp + (-0x1C)); /* 0x100A0DBF: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ecx; /* 0x100A0DC2: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A0DC4: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A0DC7: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A0DCA: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A0DCA: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0DCD: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x100A0DD4: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A0DD9:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100A0DD9: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_100141E0); /* 0x100A0DDC: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0DE1: pop ecx */
L_100A0DE2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0DE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0E0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0E0Cu);

L_100A0E0C:
    PUSH32(esp, ebp); /* 0x100A0E0C: push ebp */
    ebp = esp; /* 0x100A0E0D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A0E0F: push ecx */
    PUSH32(esp, esi); /* 0x100A0E10: push esi */
    PUSH32(esp, 0); /* 0x100A0E11: push 0 */
    eax = ebp + (-0x4); /* 0x100A0E13: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A0E16: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A0E19: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A0E1A: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A0E1D: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A0E20: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A0E23: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A0E26: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100153C7); /* 0x100A0E29: call 0x100153c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A0E2E: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A0E31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0E38; /* 0x100A0E33: jne 0x100a0e38 */
L_100A0E35:
    esi = MEM32(ebp + (-0x4)); /* 0x100A0E35: mov esi, dword ptr [ebp - 4] */
L_100A0E38:
    eax = esi; /* 0x100A0E38: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A0E3A: pop esi */
    esp = ebp; /* 0x100A0E3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A0E3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A0E3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A0E3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A0E3Fu);

L_100A0E3F:
    PUSH32(esp, 0x6Cu); /* 0x100A0E3F: push 0x6c */
    PUSH32(esp, 0x100A11C8u); /* 0x100A0E41: push 0x100a11c8 */
    RECOMP_CALL(sub_100353E2); /* 0x100A0E46: call 0x100353e2 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100A0E4B: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x100A0E4E: mov dword ptr [ebp - 0x7c], ebx */
    edi = MEM32(ebp + 0xC); /* 0x100A0E51: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A0E54: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A0E56: mov dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0E59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100A0E5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A0E5D: setne al */
    /* test eax, eax */ /* 0x100A0E60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0E7B; /* 0x100A0E62: jne 0x100a0e7b */
L_100A0E64:
    RECOMP_CALL(sub_1001E471); /* 0x100A0E64: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A0E69: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A0E6B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A0E70: mov dword ptr [eax], 0x16 */
    goto L_100A11B8; /* 0x100A0E76: jmp 0x100a11b8 */
L_100A0E7B:
    PUSH32(esp, 0x38u); /* 0x100A0E7B: push 0x38 */
    PUSH32(esp, esi); /* 0x100A0E7D: push esi */
    PUSH32(esp, edi); /* 0x100A0E7E: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100A0E7F: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A0E84: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x100A0E87: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0EA3; /* 0x100A0E8A: jne 0x100a0ea3 */
L_100A0E8C:
    RECOMP_CALL(sub_1001E471); /* 0x100A0E8C: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A0E91: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A0E93: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A0E98: mov dword ptr [eax], 9 */
    goto L_100A11BD; /* 0x100A0E9E: jmp 0x100a11bd */
L_100A0EA3:
    /* test ebx, ebx */ /* 0x100A0EA3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A11A6; /* 0x100A0EA5: js 0x100a11a6 */
L_100A0EAB:
    /* cmp ebx, MEM32(0x100DFDD8) */ /* 0x100A0EAB: cmp ebx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A11A6; /* 0x100A0EB1: jae 0x100a11a6 */
L_100A0EB7:
    eax = ebx; /* 0x100A0EB7: mov eax, ebx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A0EB9: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x6C)) = eax; /* 0x100A0EBC: mov dword ptr [ebp - 0x6c], eax */
    ecx = ebx; /* 0x100A0EBF: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A0EC1: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A0EC4: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A0EC4: shl ecx, 6 */
    MEM32(ebp + (-0x68)) = ecx; /* 0x100A0EC7: mov dword ptr [ebp - 0x68], ecx */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0ECA: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x100A0ED1: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0ED6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A0ED8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A0ED9: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A11A6; /* 0x100A0EDB: je 0x100a11a6 */
L_100A0EE1:
    PUSH32(esp, ebx); /* 0x100A0EE1: push ebx */
    RECOMP_CALL(sub_10014206); /* 0x100A0EE2: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0EE7: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A0EE8: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0EEB: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x100A0EEE: mov ecx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x68)); /* 0x100A0EF5: mov eax, dword ptr [ebp - 0x68] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x100A0EF8: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A0F23; /* 0x100A0EFD: jne 0x100a0f23 */
L_100A0EFF:
    RECOMP_CALL(sub_1001177D); /* 0x100A0EFF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A0F04: mov dword ptr [eax], 9 */
L_100A0F0A:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A0F0A: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A0F0D: mov dword ptr [ebp - 0x64], esi */
L_100A0F10:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A0F10: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A119E); /* 0x100A0F17: call 0x100a119e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A0F1C: mov eax, esi */
    goto L_100A11C0; /* 0x100A0F1E: jmp 0x100a11c0 */
L_100A0F23:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0F23: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A0F26: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100A0F2C: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A0F31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A0F33: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x100A0F34: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0FD3; /* 0x100A0F36: je 0x100a0fd3 */
L_100A0F3C:
    /* cmp eax, 2 */ /* 0x100A0F3C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0F5E; /* 0x100A0F3F: je 0x100a0f5e */
L_100A0F41:
    /* cmp eax, 3 */ /* 0x100A0F41: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0F59; /* 0x100A0F44: je 0x100a0f59 */
L_100A0F46:
    /* test eax, eax */ /* 0x100A0F46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0EFF; /* 0x100A0F48: je 0x100a0eff */
L_100A0F4A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A0F4A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A0F50: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A0F51: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A0F56: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100A0F0A; /* 0x100A0F57: jmp 0x100a0f0a */
L_100A0F59:
    /* cmp eax, 2 */ /* 0x100A0F59: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A0F65; /* 0x100A0F5C: jne 0x100a0f65 */
L_100A0F5E:
    ecx = 0x2000u; /* 0x100A0F5E: mov ecx, 0x2000 */
    goto L_100A0F6A; /* 0x100A0F63: jmp 0x100a0f6a */
L_100A0F65:
    ecx = 0x1000u; /* 0x100A0F65: mov ecx, 0x1000 */
L_100A0F6A:
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x100A0F6A: mov word ptr [edi + 6], cx */
    MEM32(edi) = ebx; /* 0x100A0F6E: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x100A0F70: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A0F73: mov word ptr [edi + 8], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A0F77: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x100A0F79: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x100A0F7D: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x30) = esi; /* 0x100A0F80: mov dword ptr [edi + 0x30], esi */
    MEM32(edi + 0x34) = esi; /* 0x100A0F83: mov dword ptr [edi + 0x34], esi */
    MEM32(edi + 0x28) = esi; /* 0x100A0F86: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x2C) = esi; /* 0x100A0F89: mov dword ptr [edi + 0x2c], esi */
    MEM32(edi + 0x20) = esi; /* 0x100A0F8C: mov dword ptr [edi + 0x20], esi */
    MEM32(edi + 0x24) = esi; /* 0x100A0F8F: mov dword ptr [edi + 0x24], esi */
    /* cmp eax, 2 */ /* 0x100A0F92: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A0FC8; /* 0x100A0F95: je 0x100a0fc8 */
L_100A0F97:
    PUSH32(esp, esi); /* 0x100A0F97: push esi */
    eax = ebp + (-0x70); /* 0x100A0F98: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x100A0F9B: push eax */
    PUSH32(esp, esi); /* 0x100A0F9C: push esi */
    PUSH32(esp, esi); /* 0x100A0F9D: push esi */
    PUSH32(esp, esi); /* 0x100A0F9E: push esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0F9F: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0FA2: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A0FA9: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0FAC: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5220)); /* 0x100A0FAF: call dword ptr [0x100e5220] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0FB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0FC8; /* 0x100A0FB7: je 0x100a0fc8 */
L_100A0FB9:
    eax = MEM32(ebp + (-0x70)); /* 0x100A0FB9: mov eax, dword ptr [ebp - 0x70] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A0FBC: cdq  */
    MEM32(edi + 0x18) = eax; /* 0x100A0FBD: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = edx; /* 0x100A0FC0: mov dword ptr [edi + 0x1c], edx */
    RECOMP_BACKEDGE();
    goto L_100A0F10; /* 0x100A0FC3: jmp 0x100a0f10 */
L_100A0FC8:
    MEM32(edi + 0x18) = esi; /* 0x100A0FC8: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x100A0FCB: mov dword ptr [edi + 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_100A0F10; /* 0x100A0FCE: jmp 0x100a0f10 */
L_100A0FD3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A0FD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x100A0FD5: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x100A0FD8: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A0FDB: mov word ptr [edi + 8], dx */
    eax = ebp + (-0x60); /* 0x100A0FDF: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x100A0FE2: push eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A0FE3: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A0FE6: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A0FED: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A0FF0: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E521C)); /* 0x100A0FF3: call dword ptr [0x100e521c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A0FF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F4A; /* 0x100A0FFB: je 0x100a0f4a */
L_100A1001:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A1001: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x100A1005: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1012; /* 0x100A1009: je 0x100a1012 */
L_100A100B:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x100A100B: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A1017; /* 0x100A1010: jmp 0x100a1017 */
L_100A1012:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x100A1012: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A1017:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A1017: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x100A101B: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A102F; /* 0x100A101F: jne 0x100a102f */
L_100A1021:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x100A1021: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A102F; /* 0x100A1025: jne 0x100a102f */
L_100A1027:
    MEM32(edi + 0x28) = esi; /* 0x100A1027: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x2C) = esi; /* 0x100A102A: mov dword ptr [edi + 0x2c], esi */
    goto L_100A1089; /* 0x100A102D: jmp 0x100a1089 */
L_100A102F:
    eax = ebp + (-0x78); /* 0x100A102F: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A1032: push eax */
    eax = ebp + (-0x4C); /* 0x100A1033: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100A1036: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A1037: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A103D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A103F: je 0x100a0f0a */
L_100A1045:
    eax = ebp + (-0x2C); /* 0x100A1045: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1048: push eax */
    eax = ebp + (-0x78); /* 0x100A1049: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A104C: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A104D: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1053: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A1055: je 0x100a0f0a */
L_100A105B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A105B: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A105D: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1061: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A1062: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A1066: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1067: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A106B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A106C: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A1070: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A1071: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A1075: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A1076: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A107A: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A107B: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1080: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x100A1083: mov dword ptr [edi + 0x28], eax */
    MEM32(edi + 0x2C) = edx; /* 0x100A1086: mov dword ptr [edi + 0x2c], edx */
L_100A1089:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x100A1089: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A10A3; /* 0x100A108D: jne 0x100a10a3 */
L_100A108F:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x100A108F: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A10A3; /* 0x100A1093: jne 0x100a10a3 */
L_100A1095:
    eax = MEM32(edi + 0x28); /* 0x100A1095: mov eax, dword ptr [edi + 0x28] */
    MEM32(edi + 0x20) = eax; /* 0x100A1098: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(edi + 0x2C); /* 0x100A109B: mov eax, dword ptr [edi + 0x2c] */
    MEM32(edi + 0x24) = eax; /* 0x100A109E: mov dword ptr [edi + 0x24], eax */
    goto L_100A10FD; /* 0x100A10A1: jmp 0x100a10fd */
L_100A10A3:
    eax = ebp + (-0x78); /* 0x100A10A3: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A10A6: push eax */
    eax = ebp + (-0x54); /* 0x100A10A7: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x100A10AA: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A10AB: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A10B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A10B3: je 0x100a0f0a */
L_100A10B9:
    eax = ebp + (-0x2C); /* 0x100A10B9: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A10BC: push eax */
    eax = ebp + (-0x78); /* 0x100A10BD: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A10C0: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A10C1: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A10C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A10C9: je 0x100a0f0a */
L_100A10CF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A10CF: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A10D1: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A10D5: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A10D6: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A10DA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A10DB: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A10DF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A10E0: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A10E4: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A10E5: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A10E9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A10EA: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A10EE: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A10EF: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A10F4: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x100A10F7: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x100A10FA: mov dword ptr [edi + 0x24], edx */
L_100A10FD:
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x100A10FD: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1117; /* 0x100A1101: jne 0x100a1117 */
L_100A1103:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x100A1103: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1117; /* 0x100A1107: jne 0x100a1117 */
L_100A1109:
    eax = MEM32(edi + 0x28); /* 0x100A1109: mov eax, dword ptr [edi + 0x28] */
    MEM32(edi + 0x30) = eax; /* 0x100A110C: mov dword ptr [edi + 0x30], eax */
    eax = MEM32(edi + 0x2C); /* 0x100A110F: mov eax, dword ptr [edi + 0x2c] */
    MEM32(edi + 0x34) = eax; /* 0x100A1112: mov dword ptr [edi + 0x34], eax */
    goto L_100A1171; /* 0x100A1115: jmp 0x100a1171 */
L_100A1117:
    eax = ebp + (-0x78); /* 0x100A1117: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A111A: push eax */
    eax = ebp + (-0x5C); /* 0x100A111B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x100A111E: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A111F: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1125: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A1127: je 0x100a0f0a */
L_100A112D:
    eax = ebp + (-0x2C); /* 0x100A112D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1130: push eax */
    eax = ebp + (-0x78); /* 0x100A1131: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A1134: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A1135: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A113B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A0F0A; /* 0x100A113D: je 0x100a0f0a */
L_100A1143:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A1143: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A1145: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1149: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A114A: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A114E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A114F: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A1153: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A1154: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A1158: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A1159: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A115D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A115E: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1162: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A1163: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1168: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x30) = eax; /* 0x100A116B: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = edx; /* 0x100A116E: mov dword ptr [edi + 0x34], edx */
L_100A1171:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1171: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x40)); /* 0x100A1173: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x100A1176: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A1179: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x100A117B: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ecx; /* 0x100A117E: mov dword ptr [edi + 0x1c], ecx */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A1181: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)((eax | 0x8000u)); _flag_b = (uint32_t)((eax | 0x8000u));
    eax = eax | 0x8000u; /* 0x100A1185: or eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A118A: mov word ptr [edi + 6], ax */
    MEM32(edi) = esi; /* 0x100A118E: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x100A1190: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_100A0F10; /* 0x100A1193: jmp 0x100a0f10 */
L_100A11A6:
    RECOMP_CALL(sub_1001E471); /* 0x100A11A6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A11AB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A11AD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A11B2: mov dword ptr [eax], 9 */
L_100A11B8:
    RECOMP_CALL(sub_100A4670); /* 0x100A11B8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A11BD:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A11BD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A11C0:
    RECOMP_CALL(sub_1003542A); /* 0x100A11C0: call 0x1003542a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A11C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A119E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A119Eu);

L_100A119E:
    PUSH32(esp, ebx); /* 0x100A119E: push ebx */
    RECOMP_CALL(sub_100141E0); /* 0x100A119F: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A11A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A11A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A11C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A11C8u);

L_100A11C8:
    /* in: no port I/O under Win32 */ /* 0x100A11C8: in al, 0xff */
    RECOMP_ITAIL(0x100A11CAu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100A11E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A11E4u);

L_100A11E4:
    PUSH32(esp, 0x6Cu); /* 0x100A11E4: push 0x6c */
    PUSH32(esp, 0x100A1560u); /* 0x100A11E6: push 0x100a1560 */
    RECOMP_CALL(sub_100353E2); /* 0x100A11EB: call 0x100353e2 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100A11F0: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x100A11F3: mov dword ptr [ebp - 0x7c], ebx */
    edi = MEM32(ebp + 0xC); /* 0x100A11F6: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A11F9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A11FB: mov dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A11FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100A1200: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1202: setne al */
    /* test eax, eax */ /* 0x100A1205: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1220; /* 0x100A1207: jne 0x100a1220 */
L_100A1209:
    RECOMP_CALL(sub_1001E471); /* 0x100A1209: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A120E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A1210: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A1215: mov dword ptr [eax], 0x16 */
    goto L_100A154C; /* 0x100A121B: jmp 0x100a154c */
L_100A1220:
    PUSH32(esp, 0x30u); /* 0x100A1220: push 0x30 */
    PUSH32(esp, esi); /* 0x100A1222: push esi */
    PUSH32(esp, edi); /* 0x100A1223: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100A1224: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A1229: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x100A122C: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1248; /* 0x100A122F: jne 0x100a1248 */
L_100A1231:
    RECOMP_CALL(sub_1001E471); /* 0x100A1231: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A1236: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A1238: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A123D: mov dword ptr [eax], 9 */
    goto L_100A1551; /* 0x100A1243: jmp 0x100a1551 */
L_100A1248:
    /* test ebx, ebx */ /* 0x100A1248: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A153A; /* 0x100A124A: js 0x100a153a */
L_100A1250:
    /* cmp ebx, MEM32(0x100DFDD8) */ /* 0x100A1250: cmp ebx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A153A; /* 0x100A1256: jae 0x100a153a */
L_100A125C:
    eax = ebx; /* 0x100A125C: mov eax, ebx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A125E: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x6C)) = eax; /* 0x100A1261: mov dword ptr [ebp - 0x6c], eax */
    ecx = ebx; /* 0x100A1264: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1266: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1269: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1269: shl ecx, 6 */
    MEM32(ebp + (-0x68)) = ecx; /* 0x100A126C: mov dword ptr [ebp - 0x68], ecx */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A126F: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x100A1276: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A127B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A127D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A127E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A153A; /* 0x100A1280: je 0x100a153a */
L_100A1286:
    PUSH32(esp, ebx); /* 0x100A1286: push ebx */
    RECOMP_CALL(sub_10014206); /* 0x100A1287: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A128C: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A128D: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A1290: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x100A1293: mov ecx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x68)); /* 0x100A129A: mov eax, dword ptr [ebp - 0x68] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x100A129D: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A12C8; /* 0x100A12A2: jne 0x100a12c8 */
L_100A12A4:
    RECOMP_CALL(sub_1001177D); /* 0x100A12A4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A12A9: mov dword ptr [eax], 9 */
L_100A12AF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A12AF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A12B2: mov dword ptr [ebp - 0x64], esi */
L_100A12B5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A12B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1532); /* 0x100A12BC: call 0x100a1532 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A12C1: mov eax, esi */
    goto L_100A1554; /* 0x100A12C3: jmp 0x100a1554 */
L_100A12C8:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A12C8: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A12CB: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100A12D1: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A12D6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A12D8: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x100A12D9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1371; /* 0x100A12DB: je 0x100a1371 */
L_100A12E1:
    /* cmp eax, 2 */ /* 0x100A12E1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1303; /* 0x100A12E4: je 0x100a1303 */
L_100A12E6:
    /* cmp eax, 3 */ /* 0x100A12E6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A12FE; /* 0x100A12E9: je 0x100a12fe */
L_100A12EB:
    /* test eax, eax */ /* 0x100A12EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12A4; /* 0x100A12ED: je 0x100a12a4 */
L_100A12EF:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A12EF: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A12F5: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A12F6: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A12FB: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100A12AF; /* 0x100A12FC: jmp 0x100a12af */
L_100A12FE:
    /* cmp eax, 2 */ /* 0x100A12FE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A130A; /* 0x100A1301: jne 0x100a130a */
L_100A1303:
    ecx = 0x2000u; /* 0x100A1303: mov ecx, 0x2000 */
    goto L_100A130F; /* 0x100A1308: jmp 0x100a130f */
L_100A130A:
    ecx = 0x1000u; /* 0x100A130A: mov ecx, 0x1000 */
L_100A130F:
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x100A130F: mov word ptr [edi + 6], cx */
    MEM32(edi) = ebx; /* 0x100A1313: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x100A1315: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A1318: mov word ptr [edi + 8], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A131C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x100A131E: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x100A1322: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x28) = esi; /* 0x100A1325: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x2C) = esi; /* 0x100A1328: mov dword ptr [edi + 0x2c], esi */
    MEM32(edi + 0x20) = esi; /* 0x100A132B: mov dword ptr [edi + 0x20], esi */
    MEM32(edi + 0x24) = esi; /* 0x100A132E: mov dword ptr [edi + 0x24], esi */
    MEM32(edi + 0x18) = esi; /* 0x100A1331: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x100A1334: mov dword ptr [edi + 0x1c], esi */
    /* cmp eax, 2 */ /* 0x100A1337: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1344; /* 0x100A133A: jne 0x100a1344 */
L_100A133C:
    MEM32(edi + 0x14) = esi; /* 0x100A133C: mov dword ptr [edi + 0x14], esi */
    RECOMP_BACKEDGE();
    goto L_100A12B5; /* 0x100A133F: jmp 0x100a12b5 */
L_100A1344:
    PUSH32(esp, esi); /* 0x100A1344: push esi */
    eax = ebp + (-0x70); /* 0x100A1345: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x100A1348: push eax */
    PUSH32(esp, esi); /* 0x100A1349: push esi */
    PUSH32(esp, esi); /* 0x100A134A: push esi */
    PUSH32(esp, esi); /* 0x100A134B: push esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A134C: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A134F: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A1356: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A1359: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5220)); /* 0x100A135C: call dword ptr [0x100e5220] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A1362: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A1364: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    eax = eax & MEM32(ebp + (-0x70)); /* 0x100A1366: and eax, dword ptr [ebp - 0x70] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = eax; /* 0x100A1369: mov dword ptr [edi + 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_100A12B5; /* 0x100A136C: jmp 0x100a12b5 */
L_100A1371:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1371: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x100A1373: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x100A1376: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A1379: mov word ptr [edi + 8], dx */
    eax = ebp + (-0x60); /* 0x100A137D: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x100A1380: push eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A1381: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1384: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A138B: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A138E: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E521C)); /* 0x100A1391: call dword ptr [0x100e521c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1397: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12EF; /* 0x100A1399: je 0x100a12ef */
L_100A139F:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A139F: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x100A13A3: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A13B0; /* 0x100A13A7: je 0x100a13b0 */
L_100A13A9:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x100A13A9: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A13B5; /* 0x100A13AE: jmp 0x100a13b5 */
L_100A13B0:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x100A13B0: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A13B5:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A13B5: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x100A13B9: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A13CD; /* 0x100A13BD: jne 0x100a13cd */
L_100A13BF:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x100A13BF: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A13CD; /* 0x100A13C3: jne 0x100a13cd */
L_100A13C5:
    MEM32(edi + 0x20) = esi; /* 0x100A13C5: mov dword ptr [edi + 0x20], esi */
    MEM32(edi + 0x24) = esi; /* 0x100A13C8: mov dword ptr [edi + 0x24], esi */
    goto L_100A1427; /* 0x100A13CB: jmp 0x100a1427 */
L_100A13CD:
    eax = ebp + (-0x78); /* 0x100A13CD: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A13D0: push eax */
    eax = ebp + (-0x4C); /* 0x100A13D1: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100A13D4: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A13D5: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A13DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A13DD: je 0x100a12af */
L_100A13E3:
    eax = ebp + (-0x2C); /* 0x100A13E3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A13E6: push eax */
    eax = ebp + (-0x78); /* 0x100A13E7: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A13EA: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A13EB: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A13F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A13F3: je 0x100a12af */
L_100A13F9:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A13F9: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A13FB: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A13FF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A1400: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A1404: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1405: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A1409: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A140A: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A140E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A140F: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A1413: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A1414: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1418: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A1419: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A141E: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x100A1421: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x100A1424: mov dword ptr [edi + 0x24], edx */
L_100A1427:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x100A1427: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1441; /* 0x100A142B: jne 0x100a1441 */
L_100A142D:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x100A142D: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1441; /* 0x100A1431: jne 0x100a1441 */
L_100A1433:
    eax = MEM32(edi + 0x20); /* 0x100A1433: mov eax, dword ptr [edi + 0x20] */
    MEM32(edi + 0x18) = eax; /* 0x100A1436: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x24); /* 0x100A1439: mov eax, dword ptr [edi + 0x24] */
    MEM32(edi + 0x1C) = eax; /* 0x100A143C: mov dword ptr [edi + 0x1c], eax */
    goto L_100A149B; /* 0x100A143F: jmp 0x100a149b */
L_100A1441:
    eax = ebp + (-0x78); /* 0x100A1441: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A1444: push eax */
    eax = ebp + (-0x54); /* 0x100A1445: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x100A1448: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A1449: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A144F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A1451: je 0x100a12af */
L_100A1457:
    eax = ebp + (-0x2C); /* 0x100A1457: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A145A: push eax */
    eax = ebp + (-0x78); /* 0x100A145B: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A145E: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A145F: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A1467: je 0x100a12af */
L_100A146D:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A146D: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A146F: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1473: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A1474: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A1478: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1479: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A147D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A147E: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A1482: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A1483: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A1487: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A1488: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A148C: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A148D: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1492: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x100A1495: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = edx; /* 0x100A1498: mov dword ptr [edi + 0x1c], edx */
L_100A149B:
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x100A149B: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A14B5; /* 0x100A149F: jne 0x100a14b5 */
L_100A14A1:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x100A14A1: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A14B5; /* 0x100A14A5: jne 0x100a14b5 */
L_100A14A7:
    eax = MEM32(edi + 0x20); /* 0x100A14A7: mov eax, dword ptr [edi + 0x20] */
    MEM32(edi + 0x28) = eax; /* 0x100A14AA: mov dword ptr [edi + 0x28], eax */
    eax = MEM32(edi + 0x24); /* 0x100A14AD: mov eax, dword ptr [edi + 0x24] */
    MEM32(edi + 0x2C) = eax; /* 0x100A14B0: mov dword ptr [edi + 0x2c], eax */
    goto L_100A150F; /* 0x100A14B3: jmp 0x100a150f */
L_100A14B5:
    eax = ebp + (-0x78); /* 0x100A14B5: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A14B8: push eax */
    eax = ebp + (-0x5C); /* 0x100A14B9: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x100A14BC: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A14BD: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A14C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A14C5: je 0x100a12af */
L_100A14CB:
    eax = ebp + (-0x2C); /* 0x100A14CB: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A14CE: push eax */
    eax = ebp + (-0x78); /* 0x100A14CF: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A14D2: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A14D3: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A14D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A12AF; /* 0x100A14DB: je 0x100a12af */
L_100A14E1:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A14E1: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A14E3: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A14E7: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A14E8: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A14EC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A14ED: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A14F1: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A14F2: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A14F6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A14F7: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A14FB: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A14FC: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1500: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x100A1501: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1506: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x100A1509: mov dword ptr [edi + 0x28], eax */
    MEM32(edi + 0x2C) = edx; /* 0x100A150C: mov dword ptr [edi + 0x2c], edx */
L_100A150F:
    eax = MEM32(ebp + (-0x3C)); /* 0x100A150F: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(edi + 0x14) = eax; /* 0x100A1512: mov dword ptr [edi + 0x14], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A1515: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)((eax | 0x8000u)); _flag_b = (uint32_t)((eax | 0x8000u));
    eax = eax | 0x8000u; /* 0x100A1519: or eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A151E: mov word ptr [edi + 6], ax */
    MEM32(edi) = esi; /* 0x100A1522: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x100A1524: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_100A12B5; /* 0x100A1527: jmp 0x100a12b5 */
L_100A153A:
    RECOMP_CALL(sub_1001E471); /* 0x100A153A: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A153F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A1541: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1546: mov dword ptr [eax], 9 */
L_100A154C:
    RECOMP_CALL(sub_100A4670); /* 0x100A154C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A1551:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A1551: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A1554:
    RECOMP_CALL(sub_1003542A); /* 0x100A1554: call 0x1003542a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1559: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1532(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1532u);

L_100A1532:
    PUSH32(esp, ebx); /* 0x100A1532: push ebx */
    RECOMP_CALL(sub_100141E0); /* 0x100A1533: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1538: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1539: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1560u);

L_100A1560:
    /* in: no port I/O under Win32 */ /* 0x100A1560: in al, 0xff */
    RECOMP_ITAIL(0x100A1562u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100A157C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A157Cu);

L_100A157C:
    PUSH32(esp, 0x6Cu); /* 0x100A157C: push 0x6c */
    PUSH32(esp, 0x100A18E0u); /* 0x100A157E: push 0x100a18e0 */
    RECOMP_CALL(sub_100353E2); /* 0x100A1583: call 0x100353e2 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100A1588: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x100A158B: mov dword ptr [ebp - 0x7c], ebx */
    edi = MEM32(ebp + 0xC); /* 0x100A158E: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A1591: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A1593: mov dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100A1598: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A159A: setne al */
    /* test eax, eax */ /* 0x100A159D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A15B8; /* 0x100A159F: jne 0x100a15b8 */
L_100A15A1:
    RECOMP_CALL(sub_1001E471); /* 0x100A15A1: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A15A6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A15A8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A15AD: mov dword ptr [eax], 0x16 */
    goto L_100A18CE; /* 0x100A15B3: jmp 0x100a18ce */
L_100A15B8:
    PUSH32(esp, 0x30u); /* 0x100A15B8: push 0x30 */
    PUSH32(esp, esi); /* 0x100A15BA: push esi */
    PUSH32(esp, edi); /* 0x100A15BB: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100A15BC: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A15C1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x100A15C4: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A15E0; /* 0x100A15C7: jne 0x100a15e0 */
L_100A15C9:
    RECOMP_CALL(sub_1001E471); /* 0x100A15C9: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A15CE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A15D0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A15D5: mov dword ptr [eax], 9 */
    goto L_100A18D3; /* 0x100A15DB: jmp 0x100a18d3 */
L_100A15E0:
    /* test ebx, ebx */ /* 0x100A15E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A18BC; /* 0x100A15E2: js 0x100a18bc */
L_100A15E8:
    /* cmp ebx, MEM32(0x100DFDD8) */ /* 0x100A15E8: cmp ebx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A18BC; /* 0x100A15EE: jae 0x100a18bc */
L_100A15F4:
    eax = ebx; /* 0x100A15F4: mov eax, ebx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A15F6: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x6C)) = eax; /* 0x100A15F9: mov dword ptr [ebp - 0x6c], eax */
    ecx = ebx; /* 0x100A15FC: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A15FE: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1601: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1601: shl ecx, 6 */
    MEM32(ebp + (-0x68)) = ecx; /* 0x100A1604: mov dword ptr [ebp - 0x68], ecx */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1607: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x100A160E: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A1613: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A1615: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A1616: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A18BC; /* 0x100A1618: je 0x100a18bc */
L_100A161E:
    PUSH32(esp, ebx); /* 0x100A161E: push ebx */
    RECOMP_CALL(sub_10014206); /* 0x100A161F: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1624: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A1625: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A1628: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x100A162B: mov ecx, dword ptr [eax*4 + 0x100df640] */
    eax = MEM32(ebp + (-0x68)); /* 0x100A1632: mov eax, dword ptr [ebp - 0x68] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x100A1635: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1660; /* 0x100A163A: jne 0x100a1660 */
L_100A163C:
    RECOMP_CALL(sub_1001177D); /* 0x100A163C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1641: mov dword ptr [eax], 9 */
L_100A1647:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A1647: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = esi; /* 0x100A164A: mov dword ptr [ebp - 0x64], esi */
L_100A164D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A164D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A18B4); /* 0x100A1654: call 0x100a18b4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A1659: mov eax, esi */
    goto L_100A18D6; /* 0x100A165B: jmp 0x100a18d6 */
L_100A1660:
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A1660: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A1663: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    eax = eax & 0xFFFF7FFFu; /* 0x100A1669: and eax, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A166E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A1670: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x100A1671: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1707; /* 0x100A1673: je 0x100a1707 */
L_100A1679:
    /* cmp eax, 2 */ /* 0x100A1679: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A169B; /* 0x100A167C: je 0x100a169b */
L_100A167E:
    /* cmp eax, 3 */ /* 0x100A167E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1696; /* 0x100A1681: je 0x100a1696 */
L_100A1683:
    /* test eax, eax */ /* 0x100A1683: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A163C; /* 0x100A1685: je 0x100a163c */
L_100A1687:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A1687: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A168D: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A168E: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1693: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100A1647; /* 0x100A1694: jmp 0x100a1647 */
L_100A1696:
    /* cmp eax, 2 */ /* 0x100A1696: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A16A2; /* 0x100A1699: jne 0x100a16a2 */
L_100A169B:
    ecx = 0x2000u; /* 0x100A169B: mov ecx, 0x2000 */
    goto L_100A16A7; /* 0x100A16A0: jmp 0x100a16a7 */
L_100A16A2:
    ecx = 0x1000u; /* 0x100A16A2: mov ecx, 0x1000 */
L_100A16A7:
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x100A16A7: mov word ptr [edi + 6], cx */
    MEM32(edi) = ebx; /* 0x100A16AB: mov dword ptr [edi], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x100A16AD: mov dword ptr [edi + 0x10], ebx */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A16B0: mov word ptr [edi + 8], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A16B4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x100A16B6: mov word ptr [edi + 4], cx */
    MEM32(edi + 0xA) = ecx; /* 0x100A16BA: mov dword ptr [edi + 0xa], ecx */
    MEM32(edi + 0x28) = esi; /* 0x100A16BD: mov dword ptr [edi + 0x28], esi */
    MEM32(edi + 0x24) = esi; /* 0x100A16C0: mov dword ptr [edi + 0x24], esi */
    MEM32(edi + 0x20) = esi; /* 0x100A16C3: mov dword ptr [edi + 0x20], esi */
    /* cmp eax, 2 */ /* 0x100A16C6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A16FC; /* 0x100A16C9: je 0x100a16fc */
L_100A16CB:
    PUSH32(esp, esi); /* 0x100A16CB: push esi */
    eax = ebp + (-0x70); /* 0x100A16CC: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x100A16CF: push eax */
    PUSH32(esp, esi); /* 0x100A16D0: push esi */
    PUSH32(esp, esi); /* 0x100A16D1: push esi */
    PUSH32(esp, esi); /* 0x100A16D2: push esi */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A16D3: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A16D6: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A16DD: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A16E0: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E5220)); /* 0x100A16E3: call dword ptr [0x100e5220] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A16E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A16FC; /* 0x100A16EB: je 0x100a16fc */
L_100A16ED:
    eax = MEM32(ebp + (-0x70)); /* 0x100A16ED: mov eax, dword ptr [ebp - 0x70] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A16F0: cdq  */
    MEM32(edi + 0x18) = eax; /* 0x100A16F1: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = edx; /* 0x100A16F4: mov dword ptr [edi + 0x1c], edx */
    RECOMP_BACKEDGE();
    goto L_100A164D; /* 0x100A16F7: jmp 0x100a164d */
L_100A16FC:
    MEM32(edi + 0x18) = esi; /* 0x100A16FC: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x1C) = esi; /* 0x100A16FF: mov dword ptr [edi + 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_100A164D; /* 0x100A1702: jmp 0x100a164d */
L_100A1707:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1707: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x100A1709: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0xA) = eax; /* 0x100A170C: mov dword ptr [edi + 0xa], eax */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x100A170F: mov word ptr [edi + 8], dx */
    eax = ebp + (-0x60); /* 0x100A1713: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x100A1716: push eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x100A1717: mov eax, dword ptr [ebp - 0x6c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A171A: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0x68)); /* 0x100A1721: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x100A1724: push dword ptr [ecx + eax] */
    RECOMP_ICALL(MEM32(0x100E521C)); /* 0x100A1727: call dword ptr [0x100e521c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A172D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1687; /* 0x100A172F: je 0x100a1687 */
L_100A1735:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A1735: movzx eax, word ptr [edi + 6] */
    /* test MEM8(ebp + (-0x60)), 1 */ /* 0x100A1739: test byte ptr [ebp - 0x60], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x60))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1746; /* 0x100A173D: je 0x100a1746 */
L_100A173F:
    _flag_a = (uint32_t)((eax | 0x124u)); _flag_b = (uint32_t)((eax | 0x124u));
    eax = eax | 0x124u; /* 0x100A173F: or eax, 0x124 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A174B; /* 0x100A1744: jmp 0x100a174b */
L_100A1746:
    _flag_a = (uint32_t)((eax | 0x1B6u)); _flag_b = (uint32_t)((eax | 0x1B6u));
    eax = eax | 0x1B6u; /* 0x100A1746: or eax, 0x1b6 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A174B:
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A174B: mov word ptr [edi + 6], ax */
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x100A174F: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1760; /* 0x100A1753: jne 0x100a1760 */
L_100A1755:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x100A1755: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1760; /* 0x100A1759: jne 0x100a1760 */
L_100A175B:
    MEM32(edi + 0x24) = esi; /* 0x100A175B: mov dword ptr [edi + 0x24], esi */
    goto L_100A17B7; /* 0x100A175E: jmp 0x100a17b7 */
L_100A1760:
    eax = ebp + (-0x78); /* 0x100A1760: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A1763: push eax */
    eax = ebp + (-0x4C); /* 0x100A1764: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x100A1767: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A1768: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A176E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A1770: je 0x100a1647 */
L_100A1776:
    eax = ebp + (-0x2C); /* 0x100A1776: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1779: push eax */
    eax = ebp + (-0x78); /* 0x100A177A: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A177D: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A177E: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1784: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A1786: je 0x100a1647 */
L_100A178C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A178C: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A178E: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1792: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A1793: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A1797: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1798: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A179C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A179D: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A17A1: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A17A2: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A17A6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A17A7: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A17AB: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A17AC: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A17B1: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x100A17B4: mov dword ptr [edi + 0x24], eax */
L_100A17B7:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x100A17B7: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A17C8; /* 0x100A17BB: jne 0x100a17c8 */
L_100A17BD:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x100A17BD: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A17C8; /* 0x100A17C1: jne 0x100a17c8 */
L_100A17C3:
    eax = MEM32(edi + 0x24); /* 0x100A17C3: mov eax, dword ptr [edi + 0x24] */
    goto L_100A181C; /* 0x100A17C6: jmp 0x100a181c */
L_100A17C8:
    eax = ebp + (-0x78); /* 0x100A17C8: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A17CB: push eax */
    eax = ebp + (-0x54); /* 0x100A17CC: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x100A17CF: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A17D0: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A17D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A17D8: je 0x100a1647 */
L_100A17DE:
    eax = ebp + (-0x2C); /* 0x100A17DE: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A17E1: push eax */
    eax = ebp + (-0x78); /* 0x100A17E2: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A17E5: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A17E6: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A17EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A17EE: je 0x100a1647 */
L_100A17F4:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A17F4: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A17F6: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A17FA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A17FB: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A17FF: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1800: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A1804: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A1805: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A1809: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A180A: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A180E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A180F: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1813: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A1814: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1819: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100A181C:
    MEM32(edi + 0x20) = eax; /* 0x100A181C: mov dword ptr [edi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x5C)), 0 */ /* 0x100A181F: cmp dword ptr [ebp - 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1830; /* 0x100A1823: jne 0x100a1830 */
L_100A1825:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x100A1825: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1830; /* 0x100A1829: jne 0x100a1830 */
L_100A182B:
    eax = MEM32(edi + 0x24); /* 0x100A182B: mov eax, dword ptr [edi + 0x24] */
    goto L_100A1884; /* 0x100A182E: jmp 0x100a1884 */
L_100A1830:
    eax = ebp + (-0x78); /* 0x100A1830: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A1833: push eax */
    eax = ebp + (-0x5C); /* 0x100A1834: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x100A1837: push eax */
    RECOMP_ICALL(MEM32(0x100E5218)); /* 0x100A1838: call dword ptr [0x100e5218] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A183E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A1840: je 0x100a1647 */
L_100A1846:
    eax = ebp + (-0x2C); /* 0x100A1846: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1849: push eax */
    eax = ebp + (-0x78); /* 0x100A184A: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x100A184D: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x100A184E: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1647; /* 0x100A1856: je 0x100a1647 */
L_100A185C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A185C: push -1 */
    eax = (uint32_t)MEM16(ebp + (-0x20)); /* 0x100A185E: movzx eax, word ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1862: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x22)); /* 0x100A1863: movzx eax, word ptr [ebp - 0x22] */
    PUSH32(esp, eax); /* 0x100A1867: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x24)); /* 0x100A1868: movzx eax, word ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A186C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x26)); /* 0x100A186D: movzx eax, word ptr [ebp - 0x26] */
    PUSH32(esp, eax); /* 0x100A1871: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2A)); /* 0x100A1872: movzx eax, word ptr [ebp - 0x2a] */
    PUSH32(esp, eax); /* 0x100A1876: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x2C)); /* 0x100A1877: movzx eax, word ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A187B: push eax */
    RECOMP_CALL(sub_10086D5C); /* 0x100A187C: call 0x10086d5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1881: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100A1884:
    MEM32(edi + 0x28) = eax; /* 0x100A1884: mov dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1887: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x40)); /* 0x100A1889: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x100A188C: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A188F: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x100A1891: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ecx; /* 0x100A1894: mov dword ptr [edi + 0x1c], ecx */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x100A1897: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)((eax | 0x8000u)); _flag_b = (uint32_t)((eax | 0x8000u));
    eax = eax | 0x8000u; /* 0x100A189B: or eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x100A18A0: mov word ptr [edi + 6], ax */
    MEM32(edi) = esi; /* 0x100A18A4: mov dword ptr [edi], esi */
    MEM32(edi + 0x10) = esi; /* 0x100A18A6: mov dword ptr [edi + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_100A164D; /* 0x100A18A9: jmp 0x100a164d */
L_100A18BC:
    RECOMP_CALL(sub_1001E471); /* 0x100A18BC: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A18C1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A18C3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A18C8: mov dword ptr [eax], 9 */
L_100A18CE:
    RECOMP_CALL(sub_100A4670); /* 0x100A18CE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A18D3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A18D3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A18D6:
    RECOMP_CALL(sub_1003542A); /* 0x100A18D6: call 0x1003542a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A18DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A18B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A18B4u);

L_100A18B4:
    PUSH32(esp, ebx); /* 0x100A18B4: push ebx */
    RECOMP_CALL(sub_100141E0); /* 0x100A18B5: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A18BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A18BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A18E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A18E0u);

L_100A18E0:
    /* in: no port I/O under Win32 */ /* 0x100A18E0: in al, 0xff */
    RECOMP_ITAIL(0x100A18E2u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100A18FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A18FCu);

L_100A18FC:
    PUSH32(esp, 0x18u); /* 0x100A18FC: push 0x18 */
    PUSH32(esp, 0x100A19F8u); /* 0x100A18FE: push 0x100a19f8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A1903: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A1908: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x100A190B: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x100A190E: mov dword ptr [ebp - 0x24], esi */
    edi = MEM32(ebp + 0x8); /* 0x100A1911: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x100A1914: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1931; /* 0x100A1917: jne 0x100a1931 */
L_100A1919:
    RECOMP_CALL(sub_1001E471); /* 0x100A1919: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A191E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A1921: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1926: mov dword ptr [eax], 9 */
    goto L_100A19EE; /* 0x100A192C: jmp 0x100a19ee */
L_100A1931:
    /* test edi, edi */ /* 0x100A1931: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A19D6; /* 0x100A1933: js 0x100a19d6 */
L_100A1939:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x100A1939: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A19D6; /* 0x100A193F: jae 0x100a19d6 */
L_100A1945:
    eax = edi; /* 0x100A1945: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1947: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x1C)) = eax; /* 0x100A194A: mov dword ptr [ebp - 0x1c], eax */
    ebx = edi; /* 0x100A194D: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100A194F: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100A1952: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100A1952: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1955: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ebx + 0x4); /* 0x100A195C: movsx eax, byte ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A1961: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A19D6; /* 0x100A1964: je 0x100a19d6 */
L_100A1966:
    PUSH32(esp, edi); /* 0x100A1966: push edi */
    RECOMP_CALL(sub_10014206); /* 0x100A1967: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A196C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A196D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x1C)); /* 0x100A1971: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1974: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x100A197B: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A199A; /* 0x100A1980: je 0x100a199a */
L_100A1982:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A1982: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1985: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1988: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A198B: push edi */
    RECOMP_CALL(sub_10017FDE); /* 0x100A198C: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A1991: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A1994: mov esi, eax */
    ebx = edx; /* 0x100A1996: mov ebx, edx */
    goto L_100A19AF; /* 0x100A1998: jmp 0x100a19af */
L_100A199A:
    RECOMP_CALL(sub_1001177D); /* 0x100A199A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A199F: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x100A19A5: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A19AA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x100A19AD: mov ebx, esi */
L_100A19AF:
    MEM32(ebp + (-0x28)) = esi; /* 0x100A19AF: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A19B2: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A19B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A19CE); /* 0x100A19BC: call 0x100a19ce */
    RECOMP_FLAGS_IN();
    edx = ebx; /* 0x100A19C1: mov edx, ebx */
    goto L_100A19F0; /* 0x100A19C3: jmp 0x100a19f0 */
L_100A19D6:
    RECOMP_CALL(sub_1001E471); /* 0x100A19D6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A19DB: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x100A19DE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A19E3: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A19E9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A19EE:
    edx = esi; /* 0x100A19EE: mov edx, esi */
L_100A19F0:
    eax = esi; /* 0x100A19F0: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A19F2: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A19F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A19CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A19CEu);

L_100A19CE:
    PUSH32(esp, edi); /* 0x100A19CE: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A19CF: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A19D4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A19D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1A14u);

L_100A1A14:
    PUSH32(esp, 0x14u); /* 0x100A1A14: push 0x14 */
    PUSH32(esp, 0x100A1AC8u); /* 0x100A1A16: push 0x100a1ac8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A1A1B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x100A1A20: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1A24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x100A1A26: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x100A1A29: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A1A2C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100A1A2E: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1A31: setne cl */
    /* test ecx, ecx */ /* 0x100A1A34: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1A4D; /* 0x100A1A36: jne 0x100a1a4d */
L_100A1A38:
    RECOMP_CALL(sub_1001177D); /* 0x100A1A38: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A1A3D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A1A43: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A1A48:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A1A48: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A1ABE; /* 0x100A1A4B: jmp 0x100a1abe */
L_100A1A4D:
    MEM32(ebp + (-0x4)) = eax; /* 0x100A1A4D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, eax); /* 0x100A1A50: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1A51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x40u); /* 0x100A1A54: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1A56: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A1A59: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x100A1A5C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100A1A5F: push eax */
    eax = ebp + (-0x24); /* 0x100A1A60: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A1A63: push eax */
    RECOMP_CALL(sub_100A1BFC); /* 0x100A1A64: call 0x100a1bfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1A69: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100A1A6C: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x100A1A6E: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A1A71: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1A8D); /* 0x100A1A78: call 0x100a1a8d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x100A1A7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1ABB; /* 0x100A1A7F: je 0x100a1abb */
L_100A1A81:
    RECOMP_CALL(sub_1001177D); /* 0x100A1A81: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A1A86: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_100A1A48; /* 0x100A1A88: jmp 0x100a1a48 */
L_100A1ABB:
    eax = MEM32(ebp + (-0x1C)); /* 0x100A1ABB: mov eax, dword ptr [ebp - 0x1c] */
L_100A1ABE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A1ABE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1AC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1A8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1A8Du);

L_100A1A8D:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x100A1A8D: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1ABA; /* 0x100A1A91: je 0x100a1aba */
L_100A1A93:
    /* test esi, esi */ /* 0x100A1A93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1AB1; /* 0x100A1A95: je 0x100a1ab1 */
L_100A1A97:
    ecx = MEM32(ebp + (-0x1C)); /* 0x100A1A97: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ecx; /* 0x100A1A9A: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1A9C: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1A9F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1AA2: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1AA2: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1AA5: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x100A1AAC: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A1AB1:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100A1AB1: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_100141E0); /* 0x100A1AB4: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1AB9: pop ecx */
L_100A1ABA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1ABA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1AE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1AE4u);

L_100A1AE4:
    PUSH32(esp, ebp); /* 0x100A1AE4: push ebp */
    ebp = esp; /* 0x100A1AE5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A1AE7: push ecx */
    PUSH32(esp, esi); /* 0x100A1AE8: push esi */
    PUSH32(esp, 0); /* 0x100A1AE9: push 0 */
    eax = ebp + (-0x4); /* 0x100A1AEB: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A1AEE: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A1AF1: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A1AF2: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A1AF5: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1AF8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1AFB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A1AFE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A1B17); /* 0x100A1B01: call 0x100a1b17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A1B06: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A1B09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1B10; /* 0x100A1B0B: jne 0x100a1b10 */
L_100A1B0D:
    esi = MEM32(ebp + (-0x4)); /* 0x100A1B0D: mov esi, dword ptr [ebp - 4] */
L_100A1B10:
    eax = esi; /* 0x100A1B10: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A1B12: pop esi */
    esp = ebp; /* 0x100A1B13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A1B15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1B16: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1B17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1B17u);

L_100A1B17:
    PUSH32(esp, 0x14u); /* 0x100A1B17: push 0x14 */
    PUSH32(esp, 0x100A1BE0u); /* 0x100A1B19: push 0x100a1be0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A1B1E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A1B23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100A1B25: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x100A1B28: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1B2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x18); /* 0x100A1B2D: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x100A1B30: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1B32: setne al */
    /* test eax, eax */ /* 0x100A1B35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1B4C; /* 0x100A1B37: jne 0x100a1b4c */
L_100A1B39:
    RECOMP_CALL(sub_1001177D); /* 0x100A1B39: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A1B3E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A1B40: pop esi */
    MEM32(eax) = esi; /* 0x100A1B41: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A1B43: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A1B48: mov eax, esi */
    goto L_100A1BA8; /* 0x100A1B4A: jmp 0x100a1ba8 */
L_100A1B4C:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x100A1B4C: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1B4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100A1B51: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1B54: setne al */
    /* test eax, eax */ /* 0x100A1B57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1B39; /* 0x100A1B59: je 0x100a1b39 */
L_100A1B5B:
    /* cmp MEM32(ebp + 0x1C), ecx */ /* 0x100A1B5B: cmp dword ptr [ebp + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1B6F; /* 0x100A1B5E: je 0x100a1b6f */
L_100A1B60:
    eax = MEM32(ebp + 0x14); /* 0x100A1B60: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    eax = eax & 0xFFFFFE7Fu; /* 0x100A1B63: and eax, 0xfffffe7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A1B68: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A1B6A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A1B6C: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A1B39; /* 0x100A1B6D: je 0x100a1b39 */
L_100A1B6F:
    MEM32(ebp + (-0x4)) = ecx; /* 0x100A1B6F: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A1B72: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A1B75: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1B78: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1B7B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A1B7E: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A1B81: push esi */
    eax = ebp + (-0x20); /* 0x100A1B82: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A1B85: push eax */
    RECOMP_CALL(sub_100A1BFC); /* 0x100A1B86: call 0x100a1bfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100A1B8B: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100A1B8E: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A1B90: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A1B93: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1BB4); /* 0x100A1B9A: call 0x100a1bb4 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x100A1B9F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1BA6; /* 0x100A1BA1: je 0x100a1ba6 */
L_100A1BA3:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x100A1BA3: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A1BA6:
    eax = edi; /* 0x100A1BA6: mov eax, edi */
L_100A1BA8:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A1BA8: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1BAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1BB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1BB4u);

L_100A1BB4:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x100A1BB4: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1BDF; /* 0x100A1BB8: je 0x100a1bdf */
L_100A1BBA:
    /* test edi, edi */ /* 0x100A1BBA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1BD7; /* 0x100A1BBC: je 0x100a1bd7 */
L_100A1BBE:
    ecx = MEM32(esi); /* 0x100A1BBE: mov ecx, dword ptr [esi] */
    eax = ecx; /* 0x100A1BC0: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1BC2: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1BC5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1BC8: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1BC8: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1BCB: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x100A1BD2: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A1BD7:
    PUSH32(esp, MEM32(esi)); /* 0x100A1BD7: push dword ptr [esi] */
    RECOMP_CALL(sub_100141E0); /* 0x100A1BD9: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1BDE: pop ecx */
L_100A1BDF:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1BDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1BFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1BFCu);

L_100A1BFC:
    PUSH32(esp, ebp); /* 0x100A1BFC: push ebp */
    ebp = esp; /* 0x100A1BFD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A1BFF: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A1C00: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x100A1C04: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A1C07: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1C08: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1007BA26); /* 0x100A1C0B: call 0x1007ba26 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1C10: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A1C11: pop ecx */
    /* test eax, eax */ /* 0x100A1C12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1C1B; /* 0x100A1C14: jne 0x100a1c1b */
L_100A1C16:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A1C16: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A1C46; /* 0x100A1C19: jmp 0x100a1c46 */
L_100A1C1B:
    PUSH32(esp, esi); /* 0x100A1C1B: push esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100A1C1C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A1C1F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A1C22: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A1C25: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A1C28: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1C2B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A1C2E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015509); /* 0x100A1C31: call 0x10015509 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A1C36: push dword ptr [ebp - 4] */
    esi = eax; /* 0x100A1C39: mov esi, eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A1C3B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100A1C40: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A1C43: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A1C45: pop esi */
L_100A1C46:
    esp = ebp; /* 0x100A1C46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A1C48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1C49: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1C4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1C4Au);

L_100A1C4A:
    PUSH32(esp, ebp); /* 0x100A1C4A: push ebp */
    ebp = esp; /* 0x100A1C4B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x100A1C4D: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A1C4F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A1C52: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A1C55: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A1C58: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1C5B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100A1B17); /* 0x100A1C5E: call 0x100a1b17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A1C63: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A1C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1C67: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1C68u);

L_100A1C68:
    PUSH32(esp, 0x14u); /* 0x100A1C68: push 0x14 */
    PUSH32(esp, 0x100A1D58u); /* 0x100A1C6A: push 0x100a1d58 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A1C6F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A1C74: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A1C76: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x100A1C79: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x100A1C7C: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1C91; /* 0x100A1C7F: jne 0x100a1c91 */
L_100A1C81:
    RECOMP_CALL(sub_1001177D); /* 0x100A1C81: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1C86: mov dword ptr [eax], 9 */
    goto L_100A1D48; /* 0x100A1C8C: jmp 0x100a1d48 */
L_100A1C91:
    /* test edi, edi */ /* 0x100A1C91: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A1D38; /* 0x100A1C93: js 0x100a1d38 */
L_100A1C99:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x100A1C99: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A1D38; /* 0x100A1C9F: jae 0x100a1d38 */
L_100A1CA5:
    eax = edi; /* 0x100A1CA5: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1CA7: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    MEM32(ebp + (-0x20)) = eax; /* 0x100A1CAA: mov dword ptr [ebp - 0x20], eax */
    ebx = edi; /* 0x100A1CAD: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100A1CAF: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100A1CB2: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100A1CB2: shl ebx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1CB5: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ebx + 0x4); /* 0x100A1CBC: movsx eax, byte ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100A1CC1: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1D38; /* 0x100A1CC4: je 0x100a1d38 */
L_100A1CC6:
    PUSH32(esp, edi); /* 0x100A1CC6: push edi */
    RECOMP_CALL(sub_10014206); /* 0x100A1CC7: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1CCC: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A1CCD: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x20)); /* 0x100A1CD0: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1CD3: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 1 */ /* 0x100A1CDA: test byte ptr [eax + ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1D09; /* 0x100A1CDF: je 0x100a1d09 */
L_100A1CE1:
    PUSH32(esp, edi); /* 0x100A1CE1: push edi */
    RECOMP_CALL(sub_10014D4B); /* 0x100A1CE2: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1CE7: pop ecx */
    PUSH32(esp, eax); /* 0x100A1CE8: push eax */
    RECOMP_ICALL(MEM32(0x100E5238)); /* 0x100A1CE9: call dword ptr [0x100e5238] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1CEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1CFB; /* 0x100A1CF1: jne 0x100a1cfb */
L_100A1CF3:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A1CF3: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A1CF9: mov esi, eax */
L_100A1CFB:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A1CFB: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x100A1CFE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1D1A; /* 0x100A1D00: je 0x100a1d1a */
L_100A1D02:
    RECOMP_CALL(sub_1001E471); /* 0x100A1D02: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100A1D07: mov dword ptr [eax], esi */
L_100A1D09:
    RECOMP_CALL(sub_1001177D); /* 0x100A1D09: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1D0E: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A1D14: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A1D17: mov dword ptr [ebp - 0x1c], esi */
L_100A1D1A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A1D1A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1D30); /* 0x100A1D21: call 0x100a1d30 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A1D26: mov eax, esi */
    goto L_100A1D4B; /* 0x100A1D28: jmp 0x100a1d4b */
L_100A1D38:
    RECOMP_CALL(sub_1001177D); /* 0x100A1D38: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x100A1D3D: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x100A1D43: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A1D48:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A1D48: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A1D4B:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A1D4B: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1D50: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1D30u);

L_100A1D30:
    PUSH32(esp, edi); /* 0x100A1D30: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A1D31: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1D36: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1D37: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1D74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1D74u);

L_100A1D74:
    PUSH32(esp, 0x2Cu); /* 0x100A1D74: push 0x2c */
    PUSH32(esp, 0x100A2000u); /* 0x100A1D76: push 0x100a2000 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A1D7B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A1D80: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x100A1D82: mov edi, ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A1D84: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1D87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100A1D89: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100A1D8C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1D8E: setne al */
    /* test eax, eax */ /* 0x100A1D91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1DB4; /* 0x100A1D93: jne 0x100a1db4 */
L_100A1D95:
    RECOMP_CALL(sub_1001E471); /* 0x100A1D95: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A1D9A: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x100A1D9C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A1DA1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A1DA7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A1DAC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A1DAC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A1FF4; /* 0x100A1DAF: jmp 0x100a1ff4 */
L_100A1DB4:
    _flag_a = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu));
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) | 0xFFFFFFFFu; /* 0x100A1DB4: or dword ptr [ecx + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x100A1DB8: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x100A1DBB: mov edx, dword ptr [ebp + 0x10] */
    eax = edx; /* 0x100A1DBE: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF3F7Fu);
    eax = eax & 0xFFFF3F7Fu; /* 0x100A1DC0: and eax, 0xffff3f7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A1DC5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A1DC7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A1DC9: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A1D95; /* 0x100A1DCA: je 0x100a1d95 */
L_100A1DCC:
    eax = edx; /* 0x100A1DCC: mov eax, edx */
    esi = 0xC000u; /* 0x100A1DCE: mov esi, 0xc000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100A1DD3: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A1DD5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x100A1DD7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1DD9: setne cl */
    /* test ecx, ecx */ /* 0x100A1DDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1D95; /* 0x100A1DDE: je 0x100a1d95 */
L_100A1DE0:
    MEM32(ebp + (-0x3C)) = 0xCu; /* 0x100A1DE0: mov dword ptr [ebp - 0x3c], 0xc */
    MEM32(ebp + (-0x38)) = ebx; /* 0x100A1DE7: mov dword ptr [ebp - 0x38], ebx */
    /* test LO8(edx), 0x80u */ /* 0x100A1DEA: test dl, 0x80 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x100A1DED: push 0 */
    eax = POP32_VAL(esp); /* 0x100A1DEF: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A1DF0: sete al */
    MEM32(ebp + (-0x34)) = eax; /* 0x100A1DF3: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A1DF6: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x3C); /* 0x100A1DF9: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x100A1DFC: push eax */
    eax = ebp + (-0x2C); /* 0x100A1DFD: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100A1E00: push eax */
    eax = ebp + (-0x28); /* 0x100A1E01: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100A1E04: push eax */
    RECOMP_ICALL(MEM32(0x100E523C)); /* 0x100A1E05: call dword ptr [0x100e523c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A1E0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1E1E; /* 0x100A1E0D: jne 0x100a1e1e */
L_100A1E0F:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A1E0F: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A1E15: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A1E16: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1E1B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100A1DAC; /* 0x100A1E1C: jmp 0x100a1dac */
L_100A1E1E:
    RECOMP_CALL(sub_1001530F); /* 0x100A1E1E: call 0x1001530f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A1E23: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x100A1E25: mov dword ptr [ebp - 0x20], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100A1E28: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1FBC; /* 0x100A1E2B: je 0x100a1fbc */
L_100A1E31:
    MEM32(ebp + (-0x4)) = ebx; /* 0x100A1E31: mov dword ptr [ebp - 4], ebx */
    edx = esi; /* 0x100A1E34: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x100A1E36: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = esi; /* 0x100A1E39: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1E3B: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1E3E: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1E3E: shl ecx, 6 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1E41: mov eax, dword ptr [edx*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(0x89u); /* 0x100A1E48: mov byte ptr [eax + ecx + 4], 0x89 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1E4D: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x80u); /* 0x100A1E54: and byte ptr [eax + ecx + 0x24], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1E59: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x7Fu); /* 0x100A1E60: and byte ptr [eax + ecx + 0x24], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A1E65: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1F7D); /* 0x100A1E6C: call 0x100a1f7d */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001530F); /* 0x100A1E71: call 0x1001530f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A1E76: mov edi, eax */
    MEM32(ebp + (-0x30)) = edi; /* 0x100A1E78: mov dword ptr [ebp - 0x30], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100A1E7B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1FA4; /* 0x100A1E7E: je 0x100a1fa4 */
L_100A1E84:
    MEM32(ebp + (-0x24)) = ebx; /* 0x100A1E84: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x100A1E87: mov dword ptr [ebp - 4], 1 */
    edx = edi; /* 0x100A1E8E: mov edx, edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x100A1E90: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edi; /* 0x100A1E93: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1E95: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1E98: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1E98: shl ecx, 6 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1E9B: mov eax, dword ptr [edx*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(0x89u); /* 0x100A1EA2: mov byte ptr [eax + ecx + 4], 0x89 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1EA7: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x80u); /* 0x100A1EAE: and byte ptr [eax + ecx + 0x24], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A1EB3: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x7Fu); /* 0x100A1EBA: and byte ptr [eax + ecx + 0x24], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A1EBF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A1F8D); /* 0x100A1EC6: call 0x100a1f8d */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x100A1ECB: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x100A1ECE: push eax */
    RECOMP_CALL(sub_100152F6); /* 0x100A1ECF: call 0x100152f6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1ED4: pop ecx */
    /* test eax, eax */ /* 0x100A1ED5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1F9A; /* 0x100A1ED7: jne 0x100a1f9a */
L_100A1EDD:
    eax = 0x8000u; /* 0x100A1EDD: mov eax, 0x8000 */
    edx = MEM32(ebp + 0x10); /* 0x100A1EE2: mov edx, dword ptr [ebp + 0x10] */
    /* test eax, edx */ /* 0x100A1EE5: test eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1EF6; /* 0x100A1EE7: jne 0x100a1ef6 */
L_100A1EE9:
    /* test edx, 0x4000u */ /* 0x100A1EE9: test edx, 0x4000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A1F28; /* 0x100A1EEF: jne 0x100a1f28 */
L_100A1EF1:
    /* cmp MEM32(ebp + (-0x24)), eax */ /* 0x100A1EF1: cmp dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A1F28; /* 0x100A1EF4: jne 0x100a1f28 */
L_100A1EF6:
    eax = esi; /* 0x100A1EF6: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1EF8: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x100A1EFB: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1EFD: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1F00: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1F00: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1F03: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0x7Fu); /* 0x100A1F0A: and byte ptr [eax + ecx + 4], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edi; /* 0x100A1F0F: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1F11: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x100A1F14: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1F16: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1F19: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1F19: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1F1C: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0x7Fu); /* 0x100A1F23: and byte ptr [eax + ecx + 4], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A1F28:
    /* test LO8(edx), LO8(edx) */ /* 0x100A1F28: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A1F5E; /* 0x100A1F2A: jns 0x100a1f5e */
L_100A1F2C:
    eax = esi; /* 0x100A1F2C: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1F2E: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x100A1F31: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1F33: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1F36: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1F36: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1F39: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x10u); /* 0x100A1F40: or byte ptr [eax + ecx + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edi; /* 0x100A1F45: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1F47: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x100A1F4A: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1F4C: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1F4F: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1F4F: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1F52: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x10u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x10u); /* 0x100A1F59: or byte ptr [eax + ecx + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A1F5E:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x100A1F5E: push dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x100A1F61: push esi */
    RECOMP_CALL(sub_1001501C); /* 0x100A1F62: call 0x1001501c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x100A1F67: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x100A1F6A: push edi */
    RECOMP_CALL(sub_1001501C); /* 0x100A1F6B: call 0x1001501c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A1F70: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x100A1F73: mov eax, dword ptr [ebp - 0x1c] */
    goto L_100A1FBF; /* 0x100A1F76: jmp 0x100a1fbf */
L_100A1F9A:
    PUSH32(esp, ebx); /* 0x100A1F9A: push ebx */
    PUSH32(esp, ebx); /* 0x100A1F9B: push ebx */
    PUSH32(esp, ebx); /* 0x100A1F9C: push ebx */
    PUSH32(esp, ebx); /* 0x100A1F9D: push ebx */
    PUSH32(esp, ebx); /* 0x100A1F9E: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A1F9F: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_100A1FA4:
    eax = esi; /* 0x100A1FA4: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A1FA6: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x100A1FA9: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A1FAB: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A1FAE: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A1FAE: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A1FB1: mov eax, dword ptr [eax*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x100A1FB8: mov byte ptr [eax + ecx + 4], bl */
L_100A1FBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1FBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A1FBE: inc eax */
    _flag_k = FK_INC;
L_100A1FBF:
    /* test eax, eax */ /* 0x100A1FBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A1FEA; /* 0x100A1FC1: je 0x100a1fea */
L_100A1FC3:
    RECOMP_CALL(sub_1001177D); /* 0x100A1FC3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100A1FC8: mov dword ptr [eax], 0x18 */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x100A1FCE: push dword ptr [ebp - 0x28] */
    esi = MEM32(0x100E5074); /* 0x100A1FD1: mov esi, dword ptr [0x100e5074] */
    RECOMP_ICALL(esi); /* 0x100A1FD7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x100A1FD9: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(esi); /* 0x100A1FDC: call esi */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001E471); /* 0x100A1FDE: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x100A1FE3: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_100A1DAC; /* 0x100A1FE5: jmp 0x100a1dac */
L_100A1FEA:
    eax = MEM32(ebp + 0x8); /* 0x100A1FEA: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x100A1FED: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x100A1FEF: mov dword ptr [eax + 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A1FF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A1FF4:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A1FF4: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1FF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1F7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1F7Du);

L_100A1F7D:
    PUSH32(esp, esi); /* 0x100A1F7D: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A1F7E: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1F83: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1F84: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A1F8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A1F8Du);

L_100A1F8D:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100A1F8D: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A1F99; /* 0x100A1F90: je 0x100a1f99 */
L_100A1F92:
    PUSH32(esp, edi); /* 0x100A1F92: push edi */
    RECOMP_CALL(sub_100141E0); /* 0x100A1F93: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A1F98: pop ecx */
L_100A1F99:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A1F99: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2028u);

L_100A2028:
    PUSH32(esp, 0xCu); /* 0x100A2028: push 0xc */
    PUSH32(esp, 0x100A2140u); /* 0x100A202A: push 0x100a2140 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A202F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2034: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x100A2038: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test MEM8(ebp + 0xC), 8 */ /* 0x100A203A: test byte ptr [ebp + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2043; /* 0x100A203E: je 0x100a2043 */
L_100A2040:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x20u); /* 0x100A2040: add bl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2043:
    /* test MEM32(ebp + 0xC), 0x4000u */ /* 0x100A2043: test dword ptr [ebp + 0xc], 0x4000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A204F; /* 0x100A204A: je 0x100a204f */
L_100A204C:
    _flag_a = (uint32_t)((LO8(ebx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0x80u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0x80u); /* 0x100A204C: or bl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A204F:
    /* test MEM8(ebp + 0xC), 0x80u */ /* 0x100A204F: test byte ptr [ebp + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2058; /* 0x100A2053: je 0x100a2058 */
L_100A2055:
    _flag_a = (uint32_t)((LO8(ebx) | 0x10u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0x10u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0x10u); /* 0x100A2055: or bl, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A2058:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A2058: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A205B: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A2061: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A207A; /* 0x100A2063: jne 0x100a207a */
L_100A2065:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100A2065: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100A206B: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100A206C: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2071: pop ecx */
L_100A2072:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A2072: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A210D; /* 0x100A2075: jmp 0x100a210d */
L_100A207A:
    /* cmp eax, 2 */ /* 0x100A207A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2084; /* 0x100A207D: jne 0x100a2084 */
L_100A207F:
    _flag_a = (uint32_t)((LO8(ebx) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 0x40u)) << 24;
    SET_LO8(ebx, LO8(ebx) | 0x40u); /* 0x100A207F: or bl, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A208C; /* 0x100A2082: jmp 0x100a208c */
L_100A2084:
    /* cmp eax, 3 */ /* 0x100A2084: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A208C; /* 0x100A2087: jne 0x100a208c */
L_100A2089:
    _flag_a = (uint32_t)((LO8(ebx) | 8)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 8)) << 24;
    SET_LO8(ebx, LO8(ebx) | 8); /* 0x100A2089: or bl, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A208C:
    RECOMP_CALL(sub_1001530F); /* 0x100A208C: call 0x1001530f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2091: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100A2093: mov dword ptr [ebp + 0xc], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100A2096: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A20B0; /* 0x100A2099: jne 0x100a20b0 */
L_100A209B:
    RECOMP_CALL(sub_1001177D); /* 0x100A209B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100A20A0: mov dword ptr [eax], 0x18 */
    RECOMP_CALL(sub_1001E471); /* 0x100A20A6: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100A20AB: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100A2072; /* 0x100A20AE: jmp 0x100a2072 */
L_100A20B0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A20B0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A20B4: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A20B7: push esi */
    RECOMP_CALL(sub_1001501C); /* 0x100A20B8: call 0x1001501c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A20BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A20BE: pop ecx */
    _flag_a = (uint32_t)((LO8(ebx) | 1)) << 24; _flag_b = (uint32_t)((LO8(ebx) | 1)) << 24;
    SET_LO8(ebx, LO8(ebx) | 1); /* 0x100A20BF: or bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = esi; /* 0x100A20C2: mov edx, esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x100A20C4: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = esi; /* 0x100A20C7: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A20C9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A20CC: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A20CC: shl ecx, 6 */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A20CF: mov eax, dword ptr [edx*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x100A20D6: mov byte ptr [eax + ecx + 4], bl */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A20DA: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x80u); /* 0x100A20E1: and byte ptr [eax + ecx + 0x24], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x100A20E6: mov eax, dword ptr [edx*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x7Fu); /* 0x100A20ED: and byte ptr [eax + ecx + 0x24], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A20F2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A20F4: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100A20F5: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A20F8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2119); /* 0x100A20FF: call 0x100a2119 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x100A2104: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A210B; /* 0x100A2106: jne 0x100a210b */
L_100A2108:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A2108: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A210B:
    eax = esi; /* 0x100A210B: mov eax, esi */
L_100A210D:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A210D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2112: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2119u);

L_100A2119:
    /* test edi, edi */ /* 0x100A2119: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2136; /* 0x100A211B: jne 0x100a2136 */
L_100A211D:
    eax = esi; /* 0x100A211D: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100A211F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x100A2122: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A2124: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100A2127: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100A2127: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100A212A: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x100A2131: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A2136:
    PUSH32(esp, esi); /* 0x100A2136: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100A2137: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A213C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A213D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A215C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A215Cu);

L_100A215C:
    PUSH32(esp, 0xCu); /* 0x100A215C: push 0xc */
    PUSH32(esp, 0x100A21A8u); /* 0x100A215E: push 0x100a21a8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2163: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2168: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A216C: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A216E: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2173: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2174: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A21C4); /* 0x100A2178: call 0x100a21c4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A217D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A217F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2182: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2199); /* 0x100A2189: call 0x100a2199 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A218E: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2190: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2195: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2199(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2199u);

L_100A2199:
    PUSH32(esp, 3); /* 0x100A2199: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A219B: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A21A0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A21A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A21C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A21C4u);

L_100A21C4:
    PUSH32(esp, ebp); /* 0x100A21C4: push ebp */
    ebp = esp; /* 0x100A21C5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100A21C7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A21CA: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A21CF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A21D1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E1868); /* 0x100A21D4: mov eax, dword ptr [0x100e1868] */
    PUSH32(esp, ebx); /* 0x100A21D9: push ebx */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x100A21DA: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x100A21DD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A21EF; /* 0x100A21DF: je 0x100a21ef */
L_100A21E1:
    eax = (uint32_t)LO8(eax); /* 0x100A21E1: movzx eax, al */
    MEM32(0x100E1868) = ebx; /* 0x100A21E4: mov dword ptr [0x100e1868], ebx */
    goto L_100A2284; /* 0x100A21EA: jmp 0x100a2284 */
L_100A21EF:
    ecx = MEM32(0x100E142C); /* 0x100A21EF: mov ecx, dword ptr [0x100e142c] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x100A21F5: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2205; /* 0x100A21F8: jne 0x100a2205 */
L_100A21FA:
    RECOMP_CALL(sub_100A44B2); /* 0x100A21FA: call 0x100a44b2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E142C); /* 0x100A21FF: mov ecx, dword ptr [0x100e142c] */
L_100A2205:
    /* cmp ecx, ebx */ /* 0x100A2205: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A220D; /* 0x100A2207: jne 0x100a220d */
L_100A2209:
    eax = ebx; /* 0x100A2209: mov eax, ebx */
    goto L_100A2284; /* 0x100A220B: jmp 0x100a2284 */
L_100A220D:
    PUSH32(esp, esi); /* 0x100A220D: push esi */
    eax = ebp + (-0x20); /* 0x100A220E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100A2211: push eax */
    PUSH32(esp, ecx); /* 0x100A2212: push ecx */
    RECOMP_ICALL(MEM32(0x100E5228)); /* 0x100A2213: call dword ptr [0x100e5228] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100A2219: push 0 */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A221B: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A2221: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x100E524C); /* 0x100A2227: mov ebx, dword ptr [0x100e524c] */
    goto L_100A2257; /* 0x100A222D: jmp 0x100a2257 */
L_100A222F:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x100A222F: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A226F; /* 0x100A2233: je 0x100a226f */
L_100A2235:
    /* cmp MEM16(ebp + (-0x18)), LO16(esi) */ /* 0x100A2235: cmp word ptr [ebp - 0x18], si */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x18))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A225A; /* 0x100A2239: jne 0x100a225a */
L_100A223B:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x100A223B: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A225A; /* 0x100A223F: je 0x100a225a */
L_100A2241:
    esi = (uint32_t)MEM8(ebp + (-0xA)); /* 0x100A2241: movzx esi, byte ptr [ebp - 0xa] */
    /* test esi, esi */ /* 0x100A2245: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2272; /* 0x100A2247: jne 0x100a2272 */
L_100A2249:
    eax = ebp + (-0x14); /* 0x100A2249: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100A224C: push eax */
    RECOMP_CALL(sub_100A233A); /* 0x100A224D: call 0x100a233a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2252: pop ecx */
    /* test eax, eax */ /* 0x100A2253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A2293; /* 0x100A2255: jne 0x100a2293 */
L_100A2257:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A2257: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A2259: inc esi */
    _flag_k = FK_INC;
L_100A225A:
    eax = ebp + (-0x1C); /* 0x100A225A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100A225D: push eax */
    PUSH32(esp, esi); /* 0x100A225E: push esi */
    eax = ebp + (-0x18); /* 0x100A225F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100A2262: push eax */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2263: push dword ptr [0x100e142c] */
    RECOMP_ICALL(ebx); /* 0x100A2269: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A226B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A222F; /* 0x100A226D: jne 0x100a222f */
L_100A226F:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100A226F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A2272:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A2272: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2275: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5250)); /* 0x100A227B: call dword ptr [0x100e5250] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A2281: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100A2283: pop esi */
L_100A2284:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A2284: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A2287: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A2289: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A228A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A228F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A2291: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2292: ret  */
L_100A2293:
    esi = (uint32_t)MEM8(eax); /* 0x100A2293: movzx esi, byte ptr [eax] */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x100A2296: movzx eax, byte ptr [eax + 1] */
    MEM32(0x100E1868) = eax; /* 0x100A229A: mov dword ptr [0x100e1868], eax */
    RECOMP_BACKEDGE();
    goto L_100A2272; /* 0x100A229F: jmp 0x100a2272 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A22A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A22A1u);

L_100A22A1:
    PUSH32(esp, 0xCu); /* 0x100A22A1: push 0xc */
    PUSH32(esp, 0x100A22E8u); /* 0x100A22A3: push 0x100a22e8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A22A8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A22AD: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A22B1: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A22B3: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A22B8: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A22B9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A2304); /* 0x100A22BD: call 0x100a2304 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A22C2: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A22C4: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A22C7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A22DE); /* 0x100A22CE: call 0x100a22de */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A22D3: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A22D5: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A22DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A22DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A22DEu);

L_100A22DE:
    PUSH32(esp, 3); /* 0x100A22DE: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A22E0: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A22E5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A22E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2304u);

L_100A2304:
    eax = MEM32(0x100E1868); /* 0x100A2304: mov eax, dword ptr [0x100e1868] */
    PUSH32(esp, edi); /* 0x100A2309: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100A230A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x100A230D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A231C; /* 0x100A230F: je 0x100a231c */
L_100A2311:
    MEM32(0x100E1868) = edi; /* 0x100A2311: mov dword ptr [0x100e1868], edi */
    eax = (uint32_t)LO8(eax); /* 0x100A2317: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x100A231A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A231B: ret  */
L_100A231C:
    PUSH32(esp, esi); /* 0x100A231C: push esi */
    RECOMP_CALL(sub_100A21C4); /* 0x100A231D: call 0x100a21c4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2322: mov esi, eax */
    /* cmp esi, edi */ /* 0x100A2324: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A2335; /* 0x100A2326: je 0x100a2335 */
L_100A2328:
    PUSH32(esp, esi); /* 0x100A2328: push esi */
    RECOMP_CALL(sub_100A2C64); /* 0x100A2329: call 0x100a2c64 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x100A232E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x100A2330: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x100A2332: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A2337; /* 0x100A2333: jne 0x100a2337 */
L_100A2335:
    eax = edi; /* 0x100A2335: mov eax, edi */
L_100A2337:
    esi = POP32_VAL(esp); /* 0x100A2337: pop esi */
    edi = POP32_VAL(esp); /* 0x100A2338: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2339: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A233A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A233Au);

L_100A233A:
    PUSH32(esp, ebp); /* 0x100A233A: push ebp */
    ebp = esp; /* 0x100A233B: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x100A233D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A2340: push esi */
    PUSH32(esp, edi); /* 0x100A2341: push edi */
    ecx = MEM32(edx + 0xC); /* 0x100A2342: mov ecx, dword ptr [edx + 0xc] */
    /* test ecx, 0x100u */ /* 0x100A2345: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2399; /* 0x100A234B: je 0x100a2399 */
L_100A234D:
    edi = (uint32_t)MEM16(edx + 0x8); /* 0x100A234D: movzx edi, word ptr [edx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2351: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x100A2353: mov esi, eax */
    edx = eax; /* 0x100A2355: mov edx, eax */
L_100A2357:
    /* cmp MEM16(edx + 0x100A23E8), LO16(edi) */ /* 0x100A2357: cmp word ptr [edx + 0x100a23e8], di */
    _flag_a = (uint32_t)(MEM16(edx + 0x100A23E8)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A236B; /* 0x100A235E: je 0x100a236b */
L_100A2360:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xAu; /* 0x100A2360: add edx, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A2363: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, 0x78u */ /* 0x100A2364: cmp edx, 0x78 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A2367: jae 0x100a23e1 */
L_100A2369:
    RECOMP_BACKEDGE();
    goto L_100A2357; /* 0x100A2369: jmp 0x100a2357 */
L_100A236B:
    eax = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x100A236B: imul eax, esi, 0xa */
    /* test LO8(ecx), 3 */ /* 0x100A236E: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A237A; /* 0x100A2371: je 0x100a237a */
L_100A2373:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100A23F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100A23F0u; /* 0x100A2373: add eax, 0x100a23f0 */
    _flag_k = FK_ADD;
    goto L_100A23E1; /* 0x100A2378: jmp 0x100a23e1 */
L_100A237A:
    /* test LO8(ecx), 0xCu */ /* 0x100A237A: test cl, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2386; /* 0x100A237D: je 0x100a2386 */
L_100A237F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100A23EEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100A23EEu; /* 0x100A237F: add eax, 0x100a23ee */
    _flag_k = FK_ADD;
    goto L_100A23E1; /* 0x100A2384: jmp 0x100a23e1 */
L_100A2386:
    /* test LO8(ecx), 0x10u */ /* 0x100A2386: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A2392; /* 0x100A2389: je 0x100a2392 */
L_100A238B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100A23ECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100A23ECu; /* 0x100A238B: add eax, 0x100a23ec */
    _flag_k = FK_ADD;
    goto L_100A23E1; /* 0x100A2390: jmp 0x100a23e1 */
L_100A2392:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100A23EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100A23EAu; /* 0x100A2392: add eax, 0x100a23ea */
    _flag_k = FK_ADD;
    goto L_100A23E1; /* 0x100A2397: jmp 0x100a23e1 */
L_100A2399:
    eax = (uint32_t)MEM16(edx + 0x8); /* 0x100A2399: movzx eax, word ptr [edx + 8] */
    /* test LO8(ecx), 3 */ /* 0x100A239D: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A23AB; /* 0x100A23A0: je 0x100a23ab */
L_100A23A2:
    eax = eax * 8 + 0x100A2466; /* 0x100A23A2: lea eax, [eax*8 + 0x100a2466] */
    goto L_100A23CE; /* 0x100A23A9: jmp 0x100a23ce */
L_100A23AB:
    /* test LO8(ecx), 0xCu */ /* 0x100A23AB: test cl, 0xc */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A23B9; /* 0x100A23AE: je 0x100a23b9 */
L_100A23B0:
    eax = eax * 8 + 0x100A2464; /* 0x100A23B0: lea eax, [eax*8 + 0x100a2464] */
    goto L_100A23CE; /* 0x100A23B7: jmp 0x100a23ce */
L_100A23B9:
    /* test LO8(ecx), 0x10u */ /* 0x100A23B9: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A23C7; /* 0x100A23BC: je 0x100a23c7 */
L_100A23BE:
    eax = eax * 8 + 0x100A2462; /* 0x100A23BE: lea eax, [eax*8 + 0x100a2462] */
    goto L_100A23CE; /* 0x100A23C5: jmp 0x100a23ce */
L_100A23C7:
    eax = eax * 8 + 0x100A2460; /* 0x100A23C7: lea eax, [eax*8 + 0x100a2460] */
L_100A23CE:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A23CE: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A23D0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A23D9; /* 0x100A23D2: je 0x100a23d9 */
L_100A23D4:
    /* cmp LO8(ecx), 0xE0u */ /* 0x100A23D4: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23DF; /* 0x100A23D7: jne 0x100a23df */
L_100A23D9:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x100A23D9: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A23DD: jne 0x100a23e1 */
L_100A23DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A23DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A23E1:
    edi = POP32_VAL(esp); /* 0x100A23E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100A23E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A23E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A23E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A23EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A23EAu);

    goto L_100A23EA;
L_100A239B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A239B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((HI8(edx) | HI8(edx))) << 24; _flag_b = (uint32_t)((HI8(edx) | HI8(edx))) << 24;
    SET_HI8(edx, HI8(edx) | HI8(edx)); /* 0x100A239C: or dh, dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A239E:
    { uint32_t _rv = (MEM32(ebx)) & 0xFFFFFFFFu, _rn = ((0x74u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(ebx) = _rv; } /* 0x100A239E: rol dword ptr [ebx], 0x74 */
    _flag_a = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx));
    MEM32(ebp + 0x2466C504) = MEM32(ebp + 0x2466C504) | ecx; /* 0x100A23A1: or dword ptr [ebp + 0x2466c504], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100A23A7: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23CE; /* 0x100A23A9: jmp 0x100a23ce */
L_100A23CE:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A23CE: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A23D0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23D2; /* falls through past a gap */
L_100A23D1:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100A23D1: leave  */
L_100A23D2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A23D9; /* 0x100A23D2: je 0x100a23d9 */
L_100A23D4:
    /* cmp LO8(ecx), 0xE0u */ /* 0x100A23D4: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23DF; /* 0x100A23D7: jne 0x100a23df */
L_100A23D9:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x100A23D9: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A23DD: jne 0x100a23e1 */
L_100A23DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A23DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A23E1:
    edi = POP32_VAL(esp); /* 0x100A23E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100A23E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A23E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A23E4: ret  */
L_100A23E6:
    /* nop */ /* 0x100A23E6: nop  */
    /* nop */ /* 0x100A23E7: nop  */
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A23E8: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A23EA:
    _flag_a = (uint32_t)((eax | 0x0A000D00u)); _flag_b = (uint32_t)((eax | 0x0A000D00u));
    eax = eax | 0x0A000D00u; /* 0x100A23EA: or eax, 0xa000d00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A23F1:
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100A23F1: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax ^ 0x3F002F00u)); _flag_b = (uint32_t)((eax ^ 0x3F002F00u));
    eax = eax ^ 0x3F002F00u; /* 0x100A23F2: xor eax, 0x3f002f00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebp; /* 0x100A23F9: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(edi + eax * 2 + (-0x1FB82000))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + eax * 2 + (-0x1FB82000)) = (uint8_t)(MEM8(edi + eax * 2 + (-0x1FB82000)) + HI8(eax)); /* 0x100A23FA: add byte ptr [edi + eax*2 - 0x1fb82000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2401: inc edi */
    _flag_k = FK_INC;
    { int _zc = (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A247B; } /* 0x100A2402: loopne 0x100a247b */
L_100A2404:
    _flag_a = (uint32_t)(MEM8(edi + 0x48E00048)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x48E00048) = (uint8_t)(MEM8(edi + 0x48E00048) + LO8(edx)); /* 0x100A2404: add byte ptr [edi + 0x48e00048], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2454; } /* 0x100A240A: loopne 0x100a2454 */
L_100A240C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239B; } /* 0x100A240C: loopne 0x100a239b */
L_100A240E:
    _flag_a = (uint32_t)(MEM8(eax + 0x49E00049)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x49E00049) = (uint8_t)(MEM8(eax + 0x49E00049) + LO8(ebx)); /* 0x100A240E: add byte ptr [eax + 0x49e00049], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A245F; } /* 0x100A2414: loopne 0x100a245f */
L_100A2416:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239E; } /* 0x100A2416: loopne 0x100a239e */
L_100A2418:
    _flag_a = (uint32_t)(MEM8(ecx + 0x4BE0004B)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x4BE0004B) = (uint8_t)(MEM8(ecx + 0x4BE0004B) + LO8(ebx)); /* 0x100A2418: add byte ptr [ecx + 0x4be0004b], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A246B; } /* 0x100A241E: loopne 0x100a246b */
L_100A2420:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2495; } /* 0x100A2420: loopne 0x100a2495 */
L_100A2422:
    _flag_a = (uint32_t)(MEM8(ebx + 0x4DE0004D)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x4DE0004D) = (uint8_t)(MEM8(ebx + 0x4DE0004D) + LO8(ebx)); /* 0x100A2422: add byte ptr [ebx + 0x4de0004d], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2477; } /* 0x100A2428: loopne 0x100a2477 */
L_100A242A:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A0; } /* 0x100A242A: loopne 0x100a24a0 */
L_100A242C:
    _flag_a = (uint32_t)(MEM8(ebp + 0x4FE0004F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x4FE0004F) = (uint8_t)(MEM8(ebp + 0x4FE0004F) + LO8(ebx)); /* 0x100A242C: add byte ptr [ebp + 0x4fe0004f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2483; } /* 0x100A2432: loopne 0x100a2483 */
L_100A2434:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AB; } /* 0x100A2434: loopne 0x100a24ab */
L_100A2436:
    _flag_a = (uint32_t)(MEM8(edi + 0x50E00050)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x50E00050) = (uint8_t)(MEM8(edi + 0x50E00050) + LO8(ebx)); /* 0x100A2436: add byte ptr [edi + 0x50e00050], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A248E; } /* 0x100A243C: loopne 0x100a248e */
L_100A243E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23D1; } /* 0x100A243E: loopne 0x100a23d1 */
L_100A2440:
    _flag_a = (uint32_t)(MEM8(eax + 0x51E00051)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x51E00051) = (uint8_t)(MEM8(eax + 0x51E00051) + HI8(eax)); /* 0x100A2440: add byte ptr [eax + 0x51e00051], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2499; } /* 0x100A2446: loopne 0x100a2499 */
L_100A2448:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24C0; } /* 0x100A2448: loopne 0x100a24c0 */
L_100A244A:
    _flag_a = (uint32_t)(MEM8(ecx + 0x52E00052)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x52E00052) = (uint8_t)(MEM8(ecx + 0x52E00052) + HI8(eax)); /* 0x100A244A: add byte ptr [ecx + 0x52e00052], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A4; } /* 0x100A2450: loopne 0x100a24a4 */
L_100A2452:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23E6; } /* 0x100A2452: loopne 0x100a23e6 */
L_100A2454:
    _flag_a = (uint32_t)(MEM8(edx + 0x53E00053)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53E00053) = (uint8_t)(MEM8(edx + 0x53E00053) + HI8(eax)); /* 0x100A2454: add byte ptr [edx + 0x53e00053], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AF; } /* 0x100A245A: loopne 0x100a24af */
L_100A245C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23F1; } /* 0x100A245C: loopne 0x100a23f1 */
L_100A245E:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A245E: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2464; /* falls through past a gap */
L_100A245F:
    MEM32(0) = eax; /* 0x100A245F: mov dword ptr [0], eax */
L_100A2464:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2464: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2466: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2468: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246A: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246C; /* falls through past a gap */
L_100A246B:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x100A246B: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246D; /* falls through past a gap */
L_100A246C:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246C: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246E; /* falls through past a gap */
L_100A246D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A246D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246F; /* falls through past a gap */
L_100A246E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A246E: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2470; /* falls through past a gap */
L_100A246F:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + esi; /* 0x100A246F: add dword ptr [ecx], esi */
    _flag_k = FK_ADD;
    goto L_100A2471; /* falls through past a gap */
L_100A2470:
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A2470: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2472; /* falls through past a gap */
L_100A2471:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A2471: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2473; /* falls through past a gap */
L_100A2472:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x100A2472: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2474; /* falls through past a gap */
L_100A2473:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2473: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2475; /* falls through past a gap */
L_100A2474:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2474: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2476; /* falls through past a gap */
L_100A2475:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2475: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2477; /* falls through past a gap */
L_100A2476:
    _flag_a = (uint32_t)(MEM8(eax + 0x32)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x32) = (uint8_t)(MEM8(eax + 0x32) + HI8(ebx)); /* 0x100A2476: add byte ptr [eax + 0x32], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2479; /* falls through past a gap */
L_100A2477:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A24AB; /* 0x100A2477: js 0x100a24ab */
L_100A2479:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2479: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247C; /* falls through past a gap */
L_100A247B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A247B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247D; /* falls through past a gap */
L_100A247C:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A247C: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247E; /* falls through past a gap */
L_100A247D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A247D: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    goto L_100A247F; /* falls through past a gap */
L_100A247E:
    _flag_a = (uint32_t)(MEM8(ecx + 0x33)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x33) = (uint8_t)(MEM8(ecx + 0x33) + HI8(ebx)); /* 0x100A247E: add byte ptr [ecx + 0x33], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2481; /* falls through past a gap */
L_100A247F:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_100A24B4; /* 0x100A247F: jns 0x100a24b4 */
L_100A2481:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2481: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2483:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2483: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_100A24BD; /* 0x100A2487: jp 0x100a24bd */
L_100A2489:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100A2489: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A248C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A248E:
    _flag_a = (uint32_t)(MEM8(ebx + 0x35)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x35) = (uint8_t)(MEM8(ebx + 0x35) + HI8(ebx)); /* 0x100A248E: add byte ptr [ebx + 0x35], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(eax)); /* 0x100A2491: add byte ptr [0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2497; /* falls through past a gap */
L_100A2495:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2497:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_100A24CF; /* 0x100A2497: jl 0x100a24cf */
L_100A2499:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x100A2499: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A249C: push ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A249D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100A24D8; /* 0x100A249F: jge 0x100a24d8 */
    goto L_100A24A1; /* falls through past a gap */
L_100A24A0:
    void_lift_trap(0x100A24A0u, "aaa ");
L_100A24A1:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A24A1: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A5; /* falls through past a gap */
L_100A24A4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A6; /* falls through past a gap */
L_100A24A5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A7; /* falls through past a gap */
L_100A24A6:
    _flag_a = (uint32_t)(MEM8(esi + 0x38)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x38) = (uint8_t)(MEM8(esi + 0x38) + HI8(ebx)); /* 0x100A24A6: add byte ptr [esi + 0x38], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A9; /* falls through past a gap */
L_100A24A7:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100A24E1; /* 0x100A24A7: jle 0x100a24e1 */
L_100A24A9:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A24A9: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A24EA; /* 0x100A24AF: jg 0x100a24ea */
L_100A24B1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A24B1: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B5; /* falls through past a gap */
L_100A24B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B6; /* falls through past a gap */
L_100A24B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B7; /* falls through past a gap */
L_100A24B6:
    _flag_a = (uint32_t)(MEM8(eax + 0x290030)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x290030) = (uint8_t)(MEM8(eax + 0x290030) + LO8(eax)); /* 0x100A24B6: add byte ptr [eax + 0x290030], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BC; /* falls through past a gap */
L_100A24B7:
    _flag_a = (uint32_t)((MEM8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ 0)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ 0); /* 0x100A24B7: xor byte ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A24BA: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
L_100A24BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BE; /* falls through past a gap */
L_100A24BD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BF; /* falls through past a gap */
L_100A24BE:
    _flag_a = (uint32_t)(MEM8(ecx + 0x5F002D)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x5F002D) = (uint8_t)(MEM8(ecx + 0x5F002D) + LO8(eax)); /* 0x100A24BE: add byte ptr [ecx + 0x5f002d], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24C4; /* falls through past a gap */
L_100A24BF:
    _flag_a = (uint32_t)(MEM32(0x1F005F00)); _flag_b = (uint32_t)(0x3D820000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1F005F00) = MEM32(0x1F005F00) - 0x3D820000u; /* 0x100A24BF: sub dword ptr [0x1f005f00], 0x3d820000 */
    _flag_k = FK_CMP;
    goto L_100A24C9; /* falls through past a gap */
L_100A24C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1F005F00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1F005F00u; /* 0x100A24C0: sub eax, 0x1f005f00 */
    _flag_k = FK_CMP;
    goto L_100A24C5; /* falls through past a gap */
L_100A24C4:
    _seg_ds = POP32_VAL(esp); /* 0x100A24C4: pop ds */
L_100A24C5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(0x2B00), 0 */ /* 0x100A24C7: cmp byte ptr [0x2b00], 0 */
    _flag_a = (uint32_t)(MEM8(0x2B00)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A24CE; /* falls through past a gap */
L_100A24C9:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A24C9: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24CF; /* falls through past a gap */
L_100A24CE:
    _flag_a = (uint32_t)(MEM8(ebx + 0x80008)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x80008) = (uint8_t)(MEM8(ebx + 0x80008) + LO8(eax)); /* 0x100A24CE: add byte ptr [ebx + 0x80008], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24D4; /* falls through past a gap */
L_100A24CF:
    _flag_a = (uint32_t)((MEM32(eax) | 0)); _flag_b = (uint32_t)((MEM32(eax) | 0));
    MEM32(eax) = MEM32(eax) | 0; /* 0x100A24CF: or dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100A24D2: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A24D4:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A24D6; /* 0x100A24D4: jg 0x100a24d6 */
L_100A24D6:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A24D6: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24D8:
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A24D8: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A24DA: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5100710F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5100710F) = (uint8_t)(MEM8(eax + eax + 0x5100710F) + LO8(edx)); /* 0x100A24DC: add byte ptr [eax + eax + 0x5100710f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E3; /* falls through past a gap */
L_100A24E1:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E1: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E4; /* falls through past a gap */
L_100A24E3:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E3: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E5; /* falls through past a gap */
L_100A24E4:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E4: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24E6; /* falls through past a gap */
L_100A24E5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E7; /* falls through past a gap */
L_100A24E6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A24E6: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E8; /* falls through past a gap */
L_100A24E7:
    { uint32_t _aa = MEM8(edi), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E7: adc byte ptr [edi], dh */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24EA; /* falls through past a gap */
L_100A24E8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100A24EA; /* 0x100A24E8: ja 0x100a24ea */
L_100A24EA:
    PUSH32(esp, edi); /* 0x100A24EA: push edi */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A24EB: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ebp), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24EF: adc dword ptr [ebp], esp */
      MEM32(ebp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A24F2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(0x72120000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x72120000) = (uint8_t)(MEM8(0x72120000) + LO8(eax)); /* 0x100A24F3: add byte ptr [0x72120000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100A24F9: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24FC: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A24FE: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A2502; /* 0x100A2500: je 0x100a2502 */
L_100A2502:
    PUSH32(esp, esp); /* 0x100A2502: push esp */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x100A2503: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + edi * 2) = (uint8_t)(MEM8(ecx + edi * 2) + LO8(edx)); /* 0x100A2506: add byte ptr [ecx + edi*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ebx)); /* 0x100A2509: add byte ptr [ecx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A250C: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x550075)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x550075) = (uint8_t)(MEM8(0x550075) + LO8(edx)); /* 0x100A250E: add byte ptr [0x550075], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0x69160000u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2514: adc eax, 0x69160000 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A2519: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A251C: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A251E: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2520: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A2521: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2524u, "sldt word ptr [eax]");
    { uint32_t _sa = MEM8(eax), _sb = HI8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2527: sbb byte ptr [eax], dh */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x100A252A: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A252B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A252D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(ebx), _sb = ebx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A252F: sbb dword ptr [ebx], ebx */
      MEM32(ebx) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_100A2534; /* 0x100A2532: jnp 0x100a2534 */
L_100A2534:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2534: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A2536: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = POP32_VAL(esp); /* 0x100A2538: pop ebp */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ebx)); /* 0x100A2539: add byte ptr [ebp], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x0D1B0000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A253C: sbb eax, 0xd1b0000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0xA00)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0xA00) = (uint8_t)(MEM8(0xA00) + LO8(ecx)); /* 0x100A2541: add byte ptr [0xa00], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2547: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2549: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A254F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A2552: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2553: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2555: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A2557: push ds */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A255A; /* 0x100A2558: jae 0x100a255a */
L_100A255A:
    PUSH32(esp, ebx); /* 0x100A255A: push ebx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A255B: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A255D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x100A255F: pop ds */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax + eax + 0x4))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax + eax + 0x4)) = (uint8_t)(MEM8(FS_BASE + (eax + eax + 0x4)) + LO8(eax)); /* 0x100A2560: add byte ptr fs:[eax + eax + 4], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2565: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100A2567: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A256A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x100A256B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A256D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esp);
    MEM32(edi) = MEM32(edi) & esp; /* 0x100A256F: and dword ptr [edi], esp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2572: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x100A2573: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2575: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax)); /* 0x100A2577: and ch, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A257A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100A257B: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A257D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(edx));
    ebp = ebp & MEM32(edx); /* 0x100A257F: and ebp, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100A2582: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x100A2583: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Bu) << 24;
    SET_LO8(eax, LO8(eax) & 0x6Bu); /* 0x100A2587: and al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x100A2589: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x100A258C: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x4C006C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4C006C) = (uint8_t)(MEM8(0x4C006C) + HI8(eax)); /* 0x100A258E: add byte ptr [0x4c006c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x100A2594: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A2596: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, MEM32(eax) */ /* 0x100A2598: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A259A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A259C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A259E: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25A0u, "daa ");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A25A1: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - HI8(eax)); /* 0x100A25A7: sub byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_100A25AC; /* 0x100A25AA: jle 0x100a25ac */
L_100A25AC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A25AE: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A25B8: pop esp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x1C)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x1C) = (uint8_t)(MEM8(eax + eax + 0x1C) + HI8(ebx)); /* 0x100A25B9: add byte ptr [eax + eax + 0x1c], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x100A25BF: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A25C2: pop edx */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A25C3: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x78u); /* 0x100A25C7: sub al, 0x78 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A25C9: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A25CC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x430063)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x430063) = (uint8_t)(MEM8(0x430063) + HI8(ecx)); /* 0x100A25CE: add byte ptr [0x430063], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A25D4: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A25D6: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_100A25DA; /* 0x100A25D8: jbe 0x100a25da */
L_100A25DA:
    PUSH32(esp, esi); /* 0x100A25DA: push esi */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A25DB: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25DFu, "das ");
    void_lift_trap(0x100A25E0u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A25E2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A25E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ecx)); /* 0x100A25E7: xor byte ptr [esi], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A25EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A25EB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(ebp) ^ ebp)); _flag_b = (uint32_t)((MEM32(ebp) ^ ebp));
    MEM32(ebp) = MEM32(ebp) ^ ebp; /* 0x100A25EF: xor dword ptr [ebp], ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A25F2: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(0x2C320000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C320000) = (uint8_t)(MEM8(0x2C320000) + LO8(ecx)); /* 0x100A25F3: add byte ptr [0x2c320000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ebx)); /* 0x100A25F9: add byte ptr [eax + eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A25FE: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x100A2600: add byte ptr cs:[esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2603: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2605: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x2Fu); /* 0x100A2607: xor al, 0x2f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x100A2609: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ 0)); _flag_b = (uint32_t)((eax ^ 0));
    eax = eax ^ 0; /* 0x100A260F: xor eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2614: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2616: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x100A2618: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A261E; /* 0x100A261C: jb 0x100a261e */
L_100A261E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2620: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2622: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2624: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2626: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A2628: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2630: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2632: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2634: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2636: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x100A2638: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5E) = (uint8_t)(MEM8(eax + eax + 0x5E) + LO8(edx)); /* 0x100A263A: add byte ptr [eax + eax + 0x5e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A263E: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0 */ /* 0x100A2641: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebp); /* 0x100A2643: push ebp */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x100A2644: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0056003Du); /* 0x100A2647: imul eax, dword ptr [eax], 0x56003d */
    PUSHAD(); /* 0x100A264D: pushal  */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A264E: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A2651: add byte ptr ds:[edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100A2655: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A2656: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2659u, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A265A: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A265Du, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A265Fu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2660: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = POP32_VAL(esp); /* 0x100A2663: pop ecx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2664: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2667u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2668: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A266B: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6E) = (uint8_t)(MEM8(eax + eax + 0x6E) + HI8(eax)); /* 0x100A266C: add byte ptr [eax + eax + 0x6e], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A2670: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x100A2673: pop ebx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A2674: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2677: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A2678: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A267B: pop esp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A267C: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A2681; /* 0x100A267F: jo 0x100a2681 */
L_100A2681:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100A2681: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ebx)); /* 0x100A2682: add byte ptr [ebp], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + HI8(edx)); /* 0x100A2685: add byte ptr [bx + di], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2689: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2691: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2693: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2695: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2697: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2699: inc edi */
    _flag_k = FK_INC;
    void_lift_trap(0x100A269Au, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_100A269F; /* 0x100A269D: ja 0x100a269f */
L_100A269F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A26A1: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), LO8(eax) */ /* 0x100A26A2: cmp byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A26A4; /* falls through past a gap */
L_100A26A3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A5; /* falls through past a gap */
L_100A26A4:
    _flag_a = (uint32_t)(MEM8(ebp + 0x49000000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x49000000) = (uint8_t)(MEM8(ebp + 0x49000000) + LO8(ecx)); /* 0x100A26A4: add byte ptr [ebp + 0x49000000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AA; /* falls through past a gap */
L_100A26A5:
    eax = eax; /* 0x100A26A5: lea eax, [eax] */
L_100A26A7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A9; /* falls through past a gap */
L_100A26A8:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100A26A8: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AB; /* falls through past a gap */
L_100A26A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A26A9: dec ecx */
    _flag_k = FK_DEC;
L_100A26AA:
    /* cmp MEM32(eax), eax */ /* 0x100A26AA: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_100A26AC; /* falls through past a gap */
L_100A26AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AD; /* falls through past a gap */
L_100A26AC:
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x2D000000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x2D000000) = (uint8_t)(MEM8(eax + eax + 0x2D000000) + LO8(eax)); /* 0x100A26AC: add byte ptr [eax + eax + 0x2d000000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B3; /* falls through past a gap */
L_100A26AD:
    /* test MEM8(eax), LO8(eax) */ /* 0x100A26AD: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B1; /* falls through past a gap */
L_100A26B0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B2; /* falls through past a gap */
L_100A26B1:
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(ecx)); /* 0x100A26B1: add byte ptr [0], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100A26B2: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_100A26B7; /* falls through past a gap */
L_100A26B3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B5; /* falls through past a gap */
L_100A26B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B6; /* falls through past a gap */
L_100A26B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B8; /* falls through past a gap */
L_100A26B7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B9; /* falls through past a gap */
L_100A26B8:
    _flag_a = (uint32_t)(MEM8(ebx + 0x34)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x34) = (uint8_t)(MEM8(ebx + 0x34) + LO8(ecx)); /* 0x100A26B8: add byte ptr [ebx + 0x34], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BB; /* falls through past a gap */
L_100A26B9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100A26B9: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0); /* 0x100A26BA: xor al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A26BC; /* falls through past a gap */
L_100A26BB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BD; /* falls through past a gap */
L_100A26BC:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A26BC: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BF; /* falls through past a gap */
L_100A26BD:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A26BF; /* 0x100A26BD: jae 0x100a26bf */
L_100A26BF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(edx)); /* 0x100A26C1: add byte ptr [0], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A26C9: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CA: add byte ptr ss:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A26CF; /* 0x100A26CD: je 0x100a26cf */
L_100A26CF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A26D1: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A26D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A26DA: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A26DC: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100A26E1: push eax */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100A26E2: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x51000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x51000000) = (uint8_t)(MEM8(ecx + 0x51000000) + LO8(edx)); /* 0x100A26E4: add byte ptr [ecx + 0x51000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100A26EA: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(edx)); /* 0x100A26EC: add byte ptr [esi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x100A26F1: push edx */
    _flag_a = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ LO8(eax)); /* 0x100A26F2: xor byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x53000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53000000) = (uint8_t)(MEM8(edx + 0x53000000) + LO8(edx)); /* 0x100A26F4: add byte ptr [edx + 0x53000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FA: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x100A26FD: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2700: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2702: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2704: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2706: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2708: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2710: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2712: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2714: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2716: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A269F; } /* 0x100A2718: loopne 0x100a269f */
L_100A271A:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A3; } /* 0x100A271A: loopne 0x100a26a3 */
L_100A271C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A7; } /* 0x100A271C: loopne 0x100a26a7 */
L_100A271E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AB; } /* 0x100A271E: loopne 0x100a26ab */
L_100A2720:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A8; } /* 0x100A2720: loopne 0x100a26a8 */
L_100A2722:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AC; } /* 0x100A2722: loopne 0x100a26ac */
L_100A2724:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B0; } /* 0x100A2724: loopne 0x100a26b0 */
L_100A2726:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B4; } /* 0x100A2726: loopne 0x100a26b4 */
L_100A2728:
    PUSH32(esp, 0xCu); /* 0x100A2728: push 0xc */
    PUSH32(esp, 0x100A2770u); /* 0x100A272A: push 0x100a2770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A272F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2734: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2738: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A273A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A273F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A278C); /* 0x100A2744: call 0x100a278c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2749: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A274B: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A274E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2765); /* 0x100A2755: call 0x100a2765 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A275A: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A275C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A23EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A23ECu);

    goto L_100A23EC;
L_100A239B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A239B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((HI8(edx) | HI8(edx))) << 24; _flag_b = (uint32_t)((HI8(edx) | HI8(edx))) << 24;
    SET_HI8(edx, HI8(edx) | HI8(edx)); /* 0x100A239C: or dh, dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A239E:
    { uint32_t _rv = (MEM32(ebx)) & 0xFFFFFFFFu, _rn = ((0x74u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(ebx) = _rv; } /* 0x100A239E: rol dword ptr [ebx], 0x74 */
    _flag_a = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx));
    MEM32(ebp + 0x2466C504) = MEM32(ebp + 0x2466C504) | ecx; /* 0x100A23A1: or dword ptr [ebp + 0x2466c504], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100A23A7: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23CE; /* 0x100A23A9: jmp 0x100a23ce */
L_100A23CE:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A23CE: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A23D0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23D2; /* falls through past a gap */
L_100A23D1:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100A23D1: leave  */
L_100A23D2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A23D9; /* 0x100A23D2: je 0x100a23d9 */
L_100A23D4:
    /* cmp LO8(ecx), 0xE0u */ /* 0x100A23D4: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23DF; /* 0x100A23D7: jne 0x100a23df */
L_100A23D9:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x100A23D9: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A23DD: jne 0x100a23e1 */
L_100A23DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A23DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A23E1:
    edi = POP32_VAL(esp); /* 0x100A23E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100A23E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A23E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A23E4: ret  */
L_100A23E6:
    /* nop */ /* 0x100A23E6: nop  */
    /* nop */ /* 0x100A23E7: nop  */
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A23E8: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x0A000D00u)); _flag_b = (uint32_t)((eax | 0x0A000D00u));
    eax = eax | 0x0A000D00u; /* 0x100A23EA: or eax, 0xa000d00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A23EF; /* falls through past a gap */
L_100A23EC:
    _flag_a = (uint32_t)((eax | 0xA00u)); _flag_b = (uint32_t)((eax | 0xA00u));
    eax = eax | 0xA00u; /* 0x100A23EC: or eax, 0xa00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A23F1; /* falls through past a gap */
L_100A23EF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A23F1:
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100A23F1: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax ^ 0x3F002F00u)); _flag_b = (uint32_t)((eax ^ 0x3F002F00u));
    eax = eax ^ 0x3F002F00u; /* 0x100A23F2: xor eax, 0x3f002f00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebp; /* 0x100A23F9: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(edi + eax * 2 + (-0x1FB82000))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + eax * 2 + (-0x1FB82000)) = (uint8_t)(MEM8(edi + eax * 2 + (-0x1FB82000)) + HI8(eax)); /* 0x100A23FA: add byte ptr [edi + eax*2 - 0x1fb82000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2401: inc edi */
    _flag_k = FK_INC;
    { int _zc = (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A247B; } /* 0x100A2402: loopne 0x100a247b */
L_100A2404:
    _flag_a = (uint32_t)(MEM8(edi + 0x48E00048)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x48E00048) = (uint8_t)(MEM8(edi + 0x48E00048) + LO8(edx)); /* 0x100A2404: add byte ptr [edi + 0x48e00048], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2454; } /* 0x100A240A: loopne 0x100a2454 */
L_100A240C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239B; } /* 0x100A240C: loopne 0x100a239b */
L_100A240E:
    _flag_a = (uint32_t)(MEM8(eax + 0x49E00049)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x49E00049) = (uint8_t)(MEM8(eax + 0x49E00049) + LO8(ebx)); /* 0x100A240E: add byte ptr [eax + 0x49e00049], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A245F; } /* 0x100A2414: loopne 0x100a245f */
L_100A2416:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239E; } /* 0x100A2416: loopne 0x100a239e */
L_100A2418:
    _flag_a = (uint32_t)(MEM8(ecx + 0x4BE0004B)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x4BE0004B) = (uint8_t)(MEM8(ecx + 0x4BE0004B) + LO8(ebx)); /* 0x100A2418: add byte ptr [ecx + 0x4be0004b], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A246B; } /* 0x100A241E: loopne 0x100a246b */
L_100A2420:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2495; } /* 0x100A2420: loopne 0x100a2495 */
L_100A2422:
    _flag_a = (uint32_t)(MEM8(ebx + 0x4DE0004D)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x4DE0004D) = (uint8_t)(MEM8(ebx + 0x4DE0004D) + LO8(ebx)); /* 0x100A2422: add byte ptr [ebx + 0x4de0004d], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2477; } /* 0x100A2428: loopne 0x100a2477 */
L_100A242A:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A0; } /* 0x100A242A: loopne 0x100a24a0 */
L_100A242C:
    _flag_a = (uint32_t)(MEM8(ebp + 0x4FE0004F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x4FE0004F) = (uint8_t)(MEM8(ebp + 0x4FE0004F) + LO8(ebx)); /* 0x100A242C: add byte ptr [ebp + 0x4fe0004f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2483; } /* 0x100A2432: loopne 0x100a2483 */
L_100A2434:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AB; } /* 0x100A2434: loopne 0x100a24ab */
L_100A2436:
    _flag_a = (uint32_t)(MEM8(edi + 0x50E00050)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x50E00050) = (uint8_t)(MEM8(edi + 0x50E00050) + LO8(ebx)); /* 0x100A2436: add byte ptr [edi + 0x50e00050], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A248E; } /* 0x100A243C: loopne 0x100a248e */
L_100A243E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23D1; } /* 0x100A243E: loopne 0x100a23d1 */
L_100A2440:
    _flag_a = (uint32_t)(MEM8(eax + 0x51E00051)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x51E00051) = (uint8_t)(MEM8(eax + 0x51E00051) + HI8(eax)); /* 0x100A2440: add byte ptr [eax + 0x51e00051], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2499; } /* 0x100A2446: loopne 0x100a2499 */
L_100A2448:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24C0; } /* 0x100A2448: loopne 0x100a24c0 */
L_100A244A:
    _flag_a = (uint32_t)(MEM8(ecx + 0x52E00052)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x52E00052) = (uint8_t)(MEM8(ecx + 0x52E00052) + HI8(eax)); /* 0x100A244A: add byte ptr [ecx + 0x52e00052], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A4; } /* 0x100A2450: loopne 0x100a24a4 */
L_100A2452:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23E6; } /* 0x100A2452: loopne 0x100a23e6 */
L_100A2454:
    _flag_a = (uint32_t)(MEM8(edx + 0x53E00053)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53E00053) = (uint8_t)(MEM8(edx + 0x53E00053) + HI8(eax)); /* 0x100A2454: add byte ptr [edx + 0x53e00053], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AF; } /* 0x100A245A: loopne 0x100a24af */
L_100A245C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23F1; } /* 0x100A245C: loopne 0x100a23f1 */
L_100A245E:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A245E: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2464; /* falls through past a gap */
L_100A245F:
    MEM32(0) = eax; /* 0x100A245F: mov dword ptr [0], eax */
L_100A2464:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2464: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2466: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2468: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246A: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246C; /* falls through past a gap */
L_100A246B:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x100A246B: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246D; /* falls through past a gap */
L_100A246C:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246C: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246E; /* falls through past a gap */
L_100A246D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A246D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246F; /* falls through past a gap */
L_100A246E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A246E: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2470; /* falls through past a gap */
L_100A246F:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + esi; /* 0x100A246F: add dword ptr [ecx], esi */
    _flag_k = FK_ADD;
    goto L_100A2471; /* falls through past a gap */
L_100A2470:
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A2470: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2472; /* falls through past a gap */
L_100A2471:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A2471: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2473; /* falls through past a gap */
L_100A2472:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x100A2472: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2474; /* falls through past a gap */
L_100A2473:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2473: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2475; /* falls through past a gap */
L_100A2474:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2474: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2476; /* falls through past a gap */
L_100A2475:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2475: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2477; /* falls through past a gap */
L_100A2476:
    _flag_a = (uint32_t)(MEM8(eax + 0x32)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x32) = (uint8_t)(MEM8(eax + 0x32) + HI8(ebx)); /* 0x100A2476: add byte ptr [eax + 0x32], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2479; /* falls through past a gap */
L_100A2477:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A24AB; /* 0x100A2477: js 0x100a24ab */
L_100A2479:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2479: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247C; /* falls through past a gap */
L_100A247B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A247B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247D; /* falls through past a gap */
L_100A247C:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A247C: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247E; /* falls through past a gap */
L_100A247D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A247D: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    goto L_100A247F; /* falls through past a gap */
L_100A247E:
    _flag_a = (uint32_t)(MEM8(ecx + 0x33)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x33) = (uint8_t)(MEM8(ecx + 0x33) + HI8(ebx)); /* 0x100A247E: add byte ptr [ecx + 0x33], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2481; /* falls through past a gap */
L_100A247F:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_100A24B4; /* 0x100A247F: jns 0x100a24b4 */
L_100A2481:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2481: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2483:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2483: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_100A24BD; /* 0x100A2487: jp 0x100a24bd */
L_100A2489:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100A2489: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A248C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A248E:
    _flag_a = (uint32_t)(MEM8(ebx + 0x35)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x35) = (uint8_t)(MEM8(ebx + 0x35) + HI8(ebx)); /* 0x100A248E: add byte ptr [ebx + 0x35], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(eax)); /* 0x100A2491: add byte ptr [0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2497; /* falls through past a gap */
L_100A2495:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2497:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_100A24CF; /* 0x100A2497: jl 0x100a24cf */
L_100A2499:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x100A2499: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A249C: push ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A249D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100A24D8; /* 0x100A249F: jge 0x100a24d8 */
    goto L_100A24A1; /* falls through past a gap */
L_100A24A0:
    void_lift_trap(0x100A24A0u, "aaa ");
L_100A24A1:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A24A1: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A5; /* falls through past a gap */
L_100A24A4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A6; /* falls through past a gap */
L_100A24A5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A7; /* falls through past a gap */
L_100A24A6:
    _flag_a = (uint32_t)(MEM8(esi + 0x38)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x38) = (uint8_t)(MEM8(esi + 0x38) + HI8(ebx)); /* 0x100A24A6: add byte ptr [esi + 0x38], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A9; /* falls through past a gap */
L_100A24A7:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100A24E1; /* 0x100A24A7: jle 0x100a24e1 */
L_100A24A9:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A24A9: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A24EA; /* 0x100A24AF: jg 0x100a24ea */
L_100A24B1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A24B1: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B5; /* falls through past a gap */
L_100A24B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B6; /* falls through past a gap */
L_100A24B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B7; /* falls through past a gap */
L_100A24B6:
    _flag_a = (uint32_t)(MEM8(eax + 0x290030)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x290030) = (uint8_t)(MEM8(eax + 0x290030) + LO8(eax)); /* 0x100A24B6: add byte ptr [eax + 0x290030], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BC; /* falls through past a gap */
L_100A24B7:
    _flag_a = (uint32_t)((MEM8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ 0)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ 0); /* 0x100A24B7: xor byte ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A24BA: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
L_100A24BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BE; /* falls through past a gap */
L_100A24BD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BF; /* falls through past a gap */
L_100A24BE:
    _flag_a = (uint32_t)(MEM8(ecx + 0x5F002D)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x5F002D) = (uint8_t)(MEM8(ecx + 0x5F002D) + LO8(eax)); /* 0x100A24BE: add byte ptr [ecx + 0x5f002d], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24C4; /* falls through past a gap */
L_100A24BF:
    _flag_a = (uint32_t)(MEM32(0x1F005F00)); _flag_b = (uint32_t)(0x3D820000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1F005F00) = MEM32(0x1F005F00) - 0x3D820000u; /* 0x100A24BF: sub dword ptr [0x1f005f00], 0x3d820000 */
    _flag_k = FK_CMP;
    goto L_100A24C9; /* falls through past a gap */
L_100A24C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1F005F00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1F005F00u; /* 0x100A24C0: sub eax, 0x1f005f00 */
    _flag_k = FK_CMP;
    goto L_100A24C5; /* falls through past a gap */
L_100A24C4:
    _seg_ds = POP32_VAL(esp); /* 0x100A24C4: pop ds */
L_100A24C5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(0x2B00), 0 */ /* 0x100A24C7: cmp byte ptr [0x2b00], 0 */
    _flag_a = (uint32_t)(MEM8(0x2B00)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A24CE; /* falls through past a gap */
L_100A24C9:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A24C9: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24CF; /* falls through past a gap */
L_100A24CE:
    _flag_a = (uint32_t)(MEM8(ebx + 0x80008)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x80008) = (uint8_t)(MEM8(ebx + 0x80008) + LO8(eax)); /* 0x100A24CE: add byte ptr [ebx + 0x80008], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24D4; /* falls through past a gap */
L_100A24CF:
    _flag_a = (uint32_t)((MEM32(eax) | 0)); _flag_b = (uint32_t)((MEM32(eax) | 0));
    MEM32(eax) = MEM32(eax) | 0; /* 0x100A24CF: or dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100A24D2: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A24D4:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A24D6; /* 0x100A24D4: jg 0x100a24d6 */
L_100A24D6:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A24D6: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24D8:
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A24D8: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A24DA: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5100710F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5100710F) = (uint8_t)(MEM8(eax + eax + 0x5100710F) + LO8(edx)); /* 0x100A24DC: add byte ptr [eax + eax + 0x5100710f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E3; /* falls through past a gap */
L_100A24E1:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E1: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E4; /* falls through past a gap */
L_100A24E3:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E3: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E5; /* falls through past a gap */
L_100A24E4:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E4: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24E6; /* falls through past a gap */
L_100A24E5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E7; /* falls through past a gap */
L_100A24E6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A24E6: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E8; /* falls through past a gap */
L_100A24E7:
    { uint32_t _aa = MEM8(edi), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E7: adc byte ptr [edi], dh */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24EA; /* falls through past a gap */
L_100A24E8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100A24EA; /* 0x100A24E8: ja 0x100a24ea */
L_100A24EA:
    PUSH32(esp, edi); /* 0x100A24EA: push edi */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A24EB: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ebp), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24EF: adc dword ptr [ebp], esp */
      MEM32(ebp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A24F2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(0x72120000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x72120000) = (uint8_t)(MEM8(0x72120000) + LO8(eax)); /* 0x100A24F3: add byte ptr [0x72120000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100A24F9: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24FC: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A24FE: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A2502; /* 0x100A2500: je 0x100a2502 */
L_100A2502:
    PUSH32(esp, esp); /* 0x100A2502: push esp */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x100A2503: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + edi * 2) = (uint8_t)(MEM8(ecx + edi * 2) + LO8(edx)); /* 0x100A2506: add byte ptr [ecx + edi*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ebx)); /* 0x100A2509: add byte ptr [ecx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A250C: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x550075)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x550075) = (uint8_t)(MEM8(0x550075) + LO8(edx)); /* 0x100A250E: add byte ptr [0x550075], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0x69160000u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2514: adc eax, 0x69160000 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A2519: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A251C: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A251E: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2520: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A2521: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2524u, "sldt word ptr [eax]");
    { uint32_t _sa = MEM8(eax), _sb = HI8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2527: sbb byte ptr [eax], dh */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x100A252A: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A252B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A252D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(ebx), _sb = ebx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A252F: sbb dword ptr [ebx], ebx */
      MEM32(ebx) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_100A2534; /* 0x100A2532: jnp 0x100a2534 */
L_100A2534:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2534: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A2536: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = POP32_VAL(esp); /* 0x100A2538: pop ebp */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ebx)); /* 0x100A2539: add byte ptr [ebp], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x0D1B0000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A253C: sbb eax, 0xd1b0000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0xA00)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0xA00) = (uint8_t)(MEM8(0xA00) + LO8(ecx)); /* 0x100A2541: add byte ptr [0xa00], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2547: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2549: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A254F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A2552: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2553: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2555: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A2557: push ds */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A255A; /* 0x100A2558: jae 0x100a255a */
L_100A255A:
    PUSH32(esp, ebx); /* 0x100A255A: push ebx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A255B: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A255D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x100A255F: pop ds */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax + eax + 0x4))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax + eax + 0x4)) = (uint8_t)(MEM8(FS_BASE + (eax + eax + 0x4)) + LO8(eax)); /* 0x100A2560: add byte ptr fs:[eax + eax + 4], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2565: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100A2567: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A256A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x100A256B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A256D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esp);
    MEM32(edi) = MEM32(edi) & esp; /* 0x100A256F: and dword ptr [edi], esp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2572: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x100A2573: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2575: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax)); /* 0x100A2577: and ch, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A257A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100A257B: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A257D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(edx));
    ebp = ebp & MEM32(edx); /* 0x100A257F: and ebp, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100A2582: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x100A2583: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Bu) << 24;
    SET_LO8(eax, LO8(eax) & 0x6Bu); /* 0x100A2587: and al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x100A2589: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x100A258C: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x4C006C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4C006C) = (uint8_t)(MEM8(0x4C006C) + HI8(eax)); /* 0x100A258E: add byte ptr [0x4c006c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x100A2594: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A2596: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, MEM32(eax) */ /* 0x100A2598: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A259A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A259C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A259E: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25A0u, "daa ");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A25A1: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - HI8(eax)); /* 0x100A25A7: sub byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_100A25AC; /* 0x100A25AA: jle 0x100a25ac */
L_100A25AC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A25AE: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A25B8: pop esp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x1C)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x1C) = (uint8_t)(MEM8(eax + eax + 0x1C) + HI8(ebx)); /* 0x100A25B9: add byte ptr [eax + eax + 0x1c], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x100A25BF: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A25C2: pop edx */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A25C3: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x78u); /* 0x100A25C7: sub al, 0x78 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A25C9: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A25CC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x430063)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x430063) = (uint8_t)(MEM8(0x430063) + HI8(ecx)); /* 0x100A25CE: add byte ptr [0x430063], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A25D4: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A25D6: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_100A25DA; /* 0x100A25D8: jbe 0x100a25da */
L_100A25DA:
    PUSH32(esp, esi); /* 0x100A25DA: push esi */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A25DB: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25DFu, "das ");
    void_lift_trap(0x100A25E0u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A25E2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A25E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ecx)); /* 0x100A25E7: xor byte ptr [esi], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A25EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A25EB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(ebp) ^ ebp)); _flag_b = (uint32_t)((MEM32(ebp) ^ ebp));
    MEM32(ebp) = MEM32(ebp) ^ ebp; /* 0x100A25EF: xor dword ptr [ebp], ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A25F2: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(0x2C320000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C320000) = (uint8_t)(MEM8(0x2C320000) + LO8(ecx)); /* 0x100A25F3: add byte ptr [0x2c320000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ebx)); /* 0x100A25F9: add byte ptr [eax + eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A25FE: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x100A2600: add byte ptr cs:[esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2603: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2605: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x2Fu); /* 0x100A2607: xor al, 0x2f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x100A2609: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ 0)); _flag_b = (uint32_t)((eax ^ 0));
    eax = eax ^ 0; /* 0x100A260F: xor eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2614: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2616: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x100A2618: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A261E; /* 0x100A261C: jb 0x100a261e */
L_100A261E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2620: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2622: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2624: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2626: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A2628: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2630: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2632: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2634: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2636: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x100A2638: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5E) = (uint8_t)(MEM8(eax + eax + 0x5E) + LO8(edx)); /* 0x100A263A: add byte ptr [eax + eax + 0x5e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A263E: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0 */ /* 0x100A2641: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebp); /* 0x100A2643: push ebp */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x100A2644: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0056003Du); /* 0x100A2647: imul eax, dword ptr [eax], 0x56003d */
    PUSHAD(); /* 0x100A264D: pushal  */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A264E: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A2651: add byte ptr ds:[edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100A2655: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A2656: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2659u, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A265A: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A265Du, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A265Fu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2660: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = POP32_VAL(esp); /* 0x100A2663: pop ecx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2664: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2667u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2668: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A266B: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6E) = (uint8_t)(MEM8(eax + eax + 0x6E) + HI8(eax)); /* 0x100A266C: add byte ptr [eax + eax + 0x6e], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A2670: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x100A2673: pop ebx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A2674: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2677: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A2678: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A267B: pop esp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A267C: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A2681; /* 0x100A267F: jo 0x100a2681 */
L_100A2681:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100A2681: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ebx)); /* 0x100A2682: add byte ptr [ebp], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + HI8(edx)); /* 0x100A2685: add byte ptr [bx + di], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2689: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2691: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2693: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2695: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2697: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2699: inc edi */
    _flag_k = FK_INC;
    void_lift_trap(0x100A269Au, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_100A269F; /* 0x100A269D: ja 0x100a269f */
L_100A269F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A26A1: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), LO8(eax) */ /* 0x100A26A2: cmp byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A26A4; /* falls through past a gap */
L_100A26A3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A5; /* falls through past a gap */
L_100A26A4:
    _flag_a = (uint32_t)(MEM8(ebp + 0x49000000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x49000000) = (uint8_t)(MEM8(ebp + 0x49000000) + LO8(ecx)); /* 0x100A26A4: add byte ptr [ebp + 0x49000000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AA; /* falls through past a gap */
L_100A26A5:
    eax = eax; /* 0x100A26A5: lea eax, [eax] */
L_100A26A7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A9; /* falls through past a gap */
L_100A26A8:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100A26A8: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AB; /* falls through past a gap */
L_100A26A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A26A9: dec ecx */
    _flag_k = FK_DEC;
L_100A26AA:
    /* cmp MEM32(eax), eax */ /* 0x100A26AA: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_100A26AC; /* falls through past a gap */
L_100A26AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AD; /* falls through past a gap */
L_100A26AC:
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x2D000000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x2D000000) = (uint8_t)(MEM8(eax + eax + 0x2D000000) + LO8(eax)); /* 0x100A26AC: add byte ptr [eax + eax + 0x2d000000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B3; /* falls through past a gap */
L_100A26AD:
    /* test MEM8(eax), LO8(eax) */ /* 0x100A26AD: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B1; /* falls through past a gap */
L_100A26B0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B2; /* falls through past a gap */
L_100A26B1:
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(ecx)); /* 0x100A26B1: add byte ptr [0], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100A26B2: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_100A26B7; /* falls through past a gap */
L_100A26B3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B5; /* falls through past a gap */
L_100A26B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B6; /* falls through past a gap */
L_100A26B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B8; /* falls through past a gap */
L_100A26B7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B9; /* falls through past a gap */
L_100A26B8:
    _flag_a = (uint32_t)(MEM8(ebx + 0x34)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x34) = (uint8_t)(MEM8(ebx + 0x34) + LO8(ecx)); /* 0x100A26B8: add byte ptr [ebx + 0x34], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BB; /* falls through past a gap */
L_100A26B9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100A26B9: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0); /* 0x100A26BA: xor al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A26BC; /* falls through past a gap */
L_100A26BB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BD; /* falls through past a gap */
L_100A26BC:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A26BC: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BF; /* falls through past a gap */
L_100A26BD:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A26BF; /* 0x100A26BD: jae 0x100a26bf */
L_100A26BF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(edx)); /* 0x100A26C1: add byte ptr [0], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A26C9: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CA: add byte ptr ss:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A26CF; /* 0x100A26CD: je 0x100a26cf */
L_100A26CF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A26D1: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A26D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A26DA: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A26DC: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100A26E1: push eax */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100A26E2: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x51000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x51000000) = (uint8_t)(MEM8(ecx + 0x51000000) + LO8(edx)); /* 0x100A26E4: add byte ptr [ecx + 0x51000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100A26EA: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(edx)); /* 0x100A26EC: add byte ptr [esi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x100A26F1: push edx */
    _flag_a = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ LO8(eax)); /* 0x100A26F2: xor byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x53000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53000000) = (uint8_t)(MEM8(edx + 0x53000000) + LO8(edx)); /* 0x100A26F4: add byte ptr [edx + 0x53000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FA: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x100A26FD: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2700: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2702: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2704: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2706: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2708: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2710: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2712: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2714: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2716: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A269F; } /* 0x100A2718: loopne 0x100a269f */
L_100A271A:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A3; } /* 0x100A271A: loopne 0x100a26a3 */
L_100A271C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A7; } /* 0x100A271C: loopne 0x100a26a7 */
L_100A271E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AB; } /* 0x100A271E: loopne 0x100a26ab */
L_100A2720:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A8; } /* 0x100A2720: loopne 0x100a26a8 */
L_100A2722:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AC; } /* 0x100A2722: loopne 0x100a26ac */
L_100A2724:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B0; } /* 0x100A2724: loopne 0x100a26b0 */
L_100A2726:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B4; } /* 0x100A2726: loopne 0x100a26b4 */
L_100A2728:
    PUSH32(esp, 0xCu); /* 0x100A2728: push 0xc */
    PUSH32(esp, 0x100A2770u); /* 0x100A272A: push 0x100a2770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A272F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2734: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2738: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A273A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A273F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A278C); /* 0x100A2744: call 0x100a278c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2749: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A274B: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A274E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2765); /* 0x100A2755: call 0x100a2765 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A275A: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A275C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A23EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A23EEu);

    goto L_100A23EE;
L_100A239B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A239B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((HI8(edx) | HI8(edx))) << 24; _flag_b = (uint32_t)((HI8(edx) | HI8(edx))) << 24;
    SET_HI8(edx, HI8(edx) | HI8(edx)); /* 0x100A239C: or dh, dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A239E:
    { uint32_t _rv = (MEM32(ebx)) & 0xFFFFFFFFu, _rn = ((0x74u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(ebx) = _rv; } /* 0x100A239E: rol dword ptr [ebx], 0x74 */
    _flag_a = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx));
    MEM32(ebp + 0x2466C504) = MEM32(ebp + 0x2466C504) | ecx; /* 0x100A23A1: or dword ptr [ebp + 0x2466c504], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100A23A7: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23CE; /* 0x100A23A9: jmp 0x100a23ce */
L_100A23CE:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A23CE: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A23D0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23D2; /* falls through past a gap */
L_100A23D1:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100A23D1: leave  */
L_100A23D2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A23D9; /* 0x100A23D2: je 0x100a23d9 */
L_100A23D4:
    /* cmp LO8(ecx), 0xE0u */ /* 0x100A23D4: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23DF; /* 0x100A23D7: jne 0x100a23df */
L_100A23D9:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x100A23D9: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A23DD: jne 0x100a23e1 */
L_100A23DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A23DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A23E1:
    edi = POP32_VAL(esp); /* 0x100A23E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100A23E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A23E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A23E4: ret  */
L_100A23E6:
    /* nop */ /* 0x100A23E6: nop  */
    /* nop */ /* 0x100A23E7: nop  */
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A23E8: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x0A000D00u)); _flag_b = (uint32_t)((eax | 0x0A000D00u));
    eax = eax | 0x0A000D00u; /* 0x100A23EA: or eax, 0xa000d00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A23EF; /* falls through past a gap */
L_100A23EE:
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A23EE: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23F0; /* falls through past a gap */
L_100A23EF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A23F1; /* falls through past a gap */
L_100A23F0:
    _flag_a = (uint32_t)(MEM8(esi + 0x2F0035)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x2F0035) = (uint8_t)(MEM8(esi + 0x2F0035) + HI8(eax)); /* 0x100A23F0: add byte ptr [esi + 0x2f0035], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A23F6; /* falls through past a gap */
L_100A23F1:
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100A23F1: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax ^ 0x3F002F00u)); _flag_b = (uint32_t)((eax ^ 0x3F002F00u));
    eax = eax ^ 0x3F002F00u; /* 0x100A23F2: xor eax, 0x3f002f00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A23F7; /* falls through past a gap */
L_100A23F6:
    void_lift_trap(0x100A23F6u, "aas ");
L_100A23F7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebp; /* 0x100A23F9: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(edi + eax * 2 + (-0x1FB82000))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + eax * 2 + (-0x1FB82000)) = (uint8_t)(MEM8(edi + eax * 2 + (-0x1FB82000)) + HI8(eax)); /* 0x100A23FA: add byte ptr [edi + eax*2 - 0x1fb82000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2401: inc edi */
    _flag_k = FK_INC;
    { int _zc = (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A247B; } /* 0x100A2402: loopne 0x100a247b */
L_100A2404:
    _flag_a = (uint32_t)(MEM8(edi + 0x48E00048)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x48E00048) = (uint8_t)(MEM8(edi + 0x48E00048) + LO8(edx)); /* 0x100A2404: add byte ptr [edi + 0x48e00048], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2454; } /* 0x100A240A: loopne 0x100a2454 */
L_100A240C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239B; } /* 0x100A240C: loopne 0x100a239b */
L_100A240E:
    _flag_a = (uint32_t)(MEM8(eax + 0x49E00049)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x49E00049) = (uint8_t)(MEM8(eax + 0x49E00049) + LO8(ebx)); /* 0x100A240E: add byte ptr [eax + 0x49e00049], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A245F; } /* 0x100A2414: loopne 0x100a245f */
L_100A2416:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239E; } /* 0x100A2416: loopne 0x100a239e */
L_100A2418:
    _flag_a = (uint32_t)(MEM8(ecx + 0x4BE0004B)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x4BE0004B) = (uint8_t)(MEM8(ecx + 0x4BE0004B) + LO8(ebx)); /* 0x100A2418: add byte ptr [ecx + 0x4be0004b], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A246B; } /* 0x100A241E: loopne 0x100a246b */
L_100A2420:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2495; } /* 0x100A2420: loopne 0x100a2495 */
L_100A2422:
    _flag_a = (uint32_t)(MEM8(ebx + 0x4DE0004D)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x4DE0004D) = (uint8_t)(MEM8(ebx + 0x4DE0004D) + LO8(ebx)); /* 0x100A2422: add byte ptr [ebx + 0x4de0004d], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2477; } /* 0x100A2428: loopne 0x100a2477 */
L_100A242A:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A0; } /* 0x100A242A: loopne 0x100a24a0 */
L_100A242C:
    _flag_a = (uint32_t)(MEM8(ebp + 0x4FE0004F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x4FE0004F) = (uint8_t)(MEM8(ebp + 0x4FE0004F) + LO8(ebx)); /* 0x100A242C: add byte ptr [ebp + 0x4fe0004f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2483; } /* 0x100A2432: loopne 0x100a2483 */
L_100A2434:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AB; } /* 0x100A2434: loopne 0x100a24ab */
L_100A2436:
    _flag_a = (uint32_t)(MEM8(edi + 0x50E00050)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x50E00050) = (uint8_t)(MEM8(edi + 0x50E00050) + LO8(ebx)); /* 0x100A2436: add byte ptr [edi + 0x50e00050], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A248E; } /* 0x100A243C: loopne 0x100a248e */
L_100A243E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23D1; } /* 0x100A243E: loopne 0x100a23d1 */
L_100A2440:
    _flag_a = (uint32_t)(MEM8(eax + 0x51E00051)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x51E00051) = (uint8_t)(MEM8(eax + 0x51E00051) + HI8(eax)); /* 0x100A2440: add byte ptr [eax + 0x51e00051], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2499; } /* 0x100A2446: loopne 0x100a2499 */
L_100A2448:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24C0; } /* 0x100A2448: loopne 0x100a24c0 */
L_100A244A:
    _flag_a = (uint32_t)(MEM8(ecx + 0x52E00052)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x52E00052) = (uint8_t)(MEM8(ecx + 0x52E00052) + HI8(eax)); /* 0x100A244A: add byte ptr [ecx + 0x52e00052], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A4; } /* 0x100A2450: loopne 0x100a24a4 */
L_100A2452:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23E6; } /* 0x100A2452: loopne 0x100a23e6 */
L_100A2454:
    _flag_a = (uint32_t)(MEM8(edx + 0x53E00053)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53E00053) = (uint8_t)(MEM8(edx + 0x53E00053) + HI8(eax)); /* 0x100A2454: add byte ptr [edx + 0x53e00053], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AF; } /* 0x100A245A: loopne 0x100a24af */
L_100A245C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23F1; } /* 0x100A245C: loopne 0x100a23f1 */
L_100A245E:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A245E: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2464; /* falls through past a gap */
L_100A245F:
    MEM32(0) = eax; /* 0x100A245F: mov dword ptr [0], eax */
L_100A2464:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2464: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2466: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2468: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246A: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246C; /* falls through past a gap */
L_100A246B:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x100A246B: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246D; /* falls through past a gap */
L_100A246C:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246C: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246E; /* falls through past a gap */
L_100A246D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A246D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246F; /* falls through past a gap */
L_100A246E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A246E: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2470; /* falls through past a gap */
L_100A246F:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + esi; /* 0x100A246F: add dword ptr [ecx], esi */
    _flag_k = FK_ADD;
    goto L_100A2471; /* falls through past a gap */
L_100A2470:
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A2470: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2472; /* falls through past a gap */
L_100A2471:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A2471: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2473; /* falls through past a gap */
L_100A2472:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x100A2472: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2474; /* falls through past a gap */
L_100A2473:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2473: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2475; /* falls through past a gap */
L_100A2474:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2474: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2476; /* falls through past a gap */
L_100A2475:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2475: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2477; /* falls through past a gap */
L_100A2476:
    _flag_a = (uint32_t)(MEM8(eax + 0x32)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x32) = (uint8_t)(MEM8(eax + 0x32) + HI8(ebx)); /* 0x100A2476: add byte ptr [eax + 0x32], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2479; /* falls through past a gap */
L_100A2477:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A24AB; /* 0x100A2477: js 0x100a24ab */
L_100A2479:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2479: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247C; /* falls through past a gap */
L_100A247B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A247B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247D; /* falls through past a gap */
L_100A247C:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A247C: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247E; /* falls through past a gap */
L_100A247D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A247D: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    goto L_100A247F; /* falls through past a gap */
L_100A247E:
    _flag_a = (uint32_t)(MEM8(ecx + 0x33)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x33) = (uint8_t)(MEM8(ecx + 0x33) + HI8(ebx)); /* 0x100A247E: add byte ptr [ecx + 0x33], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2481; /* falls through past a gap */
L_100A247F:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_100A24B4; /* 0x100A247F: jns 0x100a24b4 */
L_100A2481:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2481: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2483:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2483: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_100A24BD; /* 0x100A2487: jp 0x100a24bd */
L_100A2489:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100A2489: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A248C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A248E:
    _flag_a = (uint32_t)(MEM8(ebx + 0x35)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x35) = (uint8_t)(MEM8(ebx + 0x35) + HI8(ebx)); /* 0x100A248E: add byte ptr [ebx + 0x35], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(eax)); /* 0x100A2491: add byte ptr [0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2497; /* falls through past a gap */
L_100A2495:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2497:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_100A24CF; /* 0x100A2497: jl 0x100a24cf */
L_100A2499:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x100A2499: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A249C: push ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A249D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100A24D8; /* 0x100A249F: jge 0x100a24d8 */
    goto L_100A24A1; /* falls through past a gap */
L_100A24A0:
    void_lift_trap(0x100A24A0u, "aaa ");
L_100A24A1:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A24A1: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A5; /* falls through past a gap */
L_100A24A4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A6; /* falls through past a gap */
L_100A24A5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A7; /* falls through past a gap */
L_100A24A6:
    _flag_a = (uint32_t)(MEM8(esi + 0x38)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x38) = (uint8_t)(MEM8(esi + 0x38) + HI8(ebx)); /* 0x100A24A6: add byte ptr [esi + 0x38], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A9; /* falls through past a gap */
L_100A24A7:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100A24E1; /* 0x100A24A7: jle 0x100a24e1 */
L_100A24A9:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A24A9: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A24EA; /* 0x100A24AF: jg 0x100a24ea */
L_100A24B1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A24B1: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B5; /* falls through past a gap */
L_100A24B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B6; /* falls through past a gap */
L_100A24B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B7; /* falls through past a gap */
L_100A24B6:
    _flag_a = (uint32_t)(MEM8(eax + 0x290030)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x290030) = (uint8_t)(MEM8(eax + 0x290030) + LO8(eax)); /* 0x100A24B6: add byte ptr [eax + 0x290030], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BC; /* falls through past a gap */
L_100A24B7:
    _flag_a = (uint32_t)((MEM8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ 0)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ 0); /* 0x100A24B7: xor byte ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A24BA: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
L_100A24BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BE; /* falls through past a gap */
L_100A24BD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BF; /* falls through past a gap */
L_100A24BE:
    _flag_a = (uint32_t)(MEM8(ecx + 0x5F002D)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x5F002D) = (uint8_t)(MEM8(ecx + 0x5F002D) + LO8(eax)); /* 0x100A24BE: add byte ptr [ecx + 0x5f002d], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24C4; /* falls through past a gap */
L_100A24BF:
    _flag_a = (uint32_t)(MEM32(0x1F005F00)); _flag_b = (uint32_t)(0x3D820000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1F005F00) = MEM32(0x1F005F00) - 0x3D820000u; /* 0x100A24BF: sub dword ptr [0x1f005f00], 0x3d820000 */
    _flag_k = FK_CMP;
    goto L_100A24C9; /* falls through past a gap */
L_100A24C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1F005F00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1F005F00u; /* 0x100A24C0: sub eax, 0x1f005f00 */
    _flag_k = FK_CMP;
    goto L_100A24C5; /* falls through past a gap */
L_100A24C4:
    _seg_ds = POP32_VAL(esp); /* 0x100A24C4: pop ds */
L_100A24C5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(0x2B00), 0 */ /* 0x100A24C7: cmp byte ptr [0x2b00], 0 */
    _flag_a = (uint32_t)(MEM8(0x2B00)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A24CE; /* falls through past a gap */
L_100A24C9:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A24C9: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24CF; /* falls through past a gap */
L_100A24CE:
    _flag_a = (uint32_t)(MEM8(ebx + 0x80008)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x80008) = (uint8_t)(MEM8(ebx + 0x80008) + LO8(eax)); /* 0x100A24CE: add byte ptr [ebx + 0x80008], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24D4; /* falls through past a gap */
L_100A24CF:
    _flag_a = (uint32_t)((MEM32(eax) | 0)); _flag_b = (uint32_t)((MEM32(eax) | 0));
    MEM32(eax) = MEM32(eax) | 0; /* 0x100A24CF: or dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100A24D2: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A24D4:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A24D6; /* 0x100A24D4: jg 0x100a24d6 */
L_100A24D6:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A24D6: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24D8:
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A24D8: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A24DA: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5100710F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5100710F) = (uint8_t)(MEM8(eax + eax + 0x5100710F) + LO8(edx)); /* 0x100A24DC: add byte ptr [eax + eax + 0x5100710f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E3; /* falls through past a gap */
L_100A24E1:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E1: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E4; /* falls through past a gap */
L_100A24E3:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E3: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E5; /* falls through past a gap */
L_100A24E4:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E4: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24E6; /* falls through past a gap */
L_100A24E5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E7; /* falls through past a gap */
L_100A24E6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A24E6: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E8; /* falls through past a gap */
L_100A24E7:
    { uint32_t _aa = MEM8(edi), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E7: adc byte ptr [edi], dh */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24EA; /* falls through past a gap */
L_100A24E8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100A24EA; /* 0x100A24E8: ja 0x100a24ea */
L_100A24EA:
    PUSH32(esp, edi); /* 0x100A24EA: push edi */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A24EB: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ebp), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24EF: adc dword ptr [ebp], esp */
      MEM32(ebp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A24F2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(0x72120000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x72120000) = (uint8_t)(MEM8(0x72120000) + LO8(eax)); /* 0x100A24F3: add byte ptr [0x72120000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100A24F9: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24FC: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A24FE: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A2502; /* 0x100A2500: je 0x100a2502 */
L_100A2502:
    PUSH32(esp, esp); /* 0x100A2502: push esp */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x100A2503: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + edi * 2) = (uint8_t)(MEM8(ecx + edi * 2) + LO8(edx)); /* 0x100A2506: add byte ptr [ecx + edi*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ebx)); /* 0x100A2509: add byte ptr [ecx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A250C: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x550075)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x550075) = (uint8_t)(MEM8(0x550075) + LO8(edx)); /* 0x100A250E: add byte ptr [0x550075], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0x69160000u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2514: adc eax, 0x69160000 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A2519: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A251C: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A251E: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2520: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A2521: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2524u, "sldt word ptr [eax]");
    { uint32_t _sa = MEM8(eax), _sb = HI8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2527: sbb byte ptr [eax], dh */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x100A252A: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A252B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A252D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(ebx), _sb = ebx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A252F: sbb dword ptr [ebx], ebx */
      MEM32(ebx) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_100A2534; /* 0x100A2532: jnp 0x100a2534 */
L_100A2534:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2534: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A2536: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = POP32_VAL(esp); /* 0x100A2538: pop ebp */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ebx)); /* 0x100A2539: add byte ptr [ebp], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x0D1B0000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A253C: sbb eax, 0xd1b0000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0xA00)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0xA00) = (uint8_t)(MEM8(0xA00) + LO8(ecx)); /* 0x100A2541: add byte ptr [0xa00], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2547: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2549: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A254F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A2552: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2553: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2555: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A2557: push ds */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A255A; /* 0x100A2558: jae 0x100a255a */
L_100A255A:
    PUSH32(esp, ebx); /* 0x100A255A: push ebx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A255B: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A255D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x100A255F: pop ds */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax + eax + 0x4))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax + eax + 0x4)) = (uint8_t)(MEM8(FS_BASE + (eax + eax + 0x4)) + LO8(eax)); /* 0x100A2560: add byte ptr fs:[eax + eax + 4], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2565: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100A2567: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A256A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x100A256B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A256D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esp);
    MEM32(edi) = MEM32(edi) & esp; /* 0x100A256F: and dword ptr [edi], esp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2572: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x100A2573: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2575: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax)); /* 0x100A2577: and ch, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A257A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100A257B: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A257D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(edx));
    ebp = ebp & MEM32(edx); /* 0x100A257F: and ebp, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100A2582: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x100A2583: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Bu) << 24;
    SET_LO8(eax, LO8(eax) & 0x6Bu); /* 0x100A2587: and al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x100A2589: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x100A258C: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x4C006C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4C006C) = (uint8_t)(MEM8(0x4C006C) + HI8(eax)); /* 0x100A258E: add byte ptr [0x4c006c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x100A2594: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A2596: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, MEM32(eax) */ /* 0x100A2598: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A259A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A259C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A259E: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25A0u, "daa ");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A25A1: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - HI8(eax)); /* 0x100A25A7: sub byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_100A25AC; /* 0x100A25AA: jle 0x100a25ac */
L_100A25AC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A25AE: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A25B8: pop esp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x1C)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x1C) = (uint8_t)(MEM8(eax + eax + 0x1C) + HI8(ebx)); /* 0x100A25B9: add byte ptr [eax + eax + 0x1c], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x100A25BF: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A25C2: pop edx */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A25C3: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x78u); /* 0x100A25C7: sub al, 0x78 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A25C9: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A25CC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x430063)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x430063) = (uint8_t)(MEM8(0x430063) + HI8(ecx)); /* 0x100A25CE: add byte ptr [0x430063], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A25D4: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A25D6: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_100A25DA; /* 0x100A25D8: jbe 0x100a25da */
L_100A25DA:
    PUSH32(esp, esi); /* 0x100A25DA: push esi */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A25DB: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25DFu, "das ");
    void_lift_trap(0x100A25E0u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A25E2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A25E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ecx)); /* 0x100A25E7: xor byte ptr [esi], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A25EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A25EB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(ebp) ^ ebp)); _flag_b = (uint32_t)((MEM32(ebp) ^ ebp));
    MEM32(ebp) = MEM32(ebp) ^ ebp; /* 0x100A25EF: xor dword ptr [ebp], ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A25F2: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(0x2C320000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C320000) = (uint8_t)(MEM8(0x2C320000) + LO8(ecx)); /* 0x100A25F3: add byte ptr [0x2c320000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ebx)); /* 0x100A25F9: add byte ptr [eax + eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A25FE: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x100A2600: add byte ptr cs:[esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2603: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2605: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x2Fu); /* 0x100A2607: xor al, 0x2f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x100A2609: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ 0)); _flag_b = (uint32_t)((eax ^ 0));
    eax = eax ^ 0; /* 0x100A260F: xor eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2614: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2616: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x100A2618: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A261E; /* 0x100A261C: jb 0x100a261e */
L_100A261E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2620: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2622: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2624: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2626: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A2628: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2630: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2632: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2634: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2636: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x100A2638: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5E) = (uint8_t)(MEM8(eax + eax + 0x5E) + LO8(edx)); /* 0x100A263A: add byte ptr [eax + eax + 0x5e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A263E: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0 */ /* 0x100A2641: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebp); /* 0x100A2643: push ebp */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x100A2644: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0056003Du); /* 0x100A2647: imul eax, dword ptr [eax], 0x56003d */
    PUSHAD(); /* 0x100A264D: pushal  */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A264E: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A2651: add byte ptr ds:[edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100A2655: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A2656: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2659u, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A265A: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A265Du, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A265Fu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2660: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = POP32_VAL(esp); /* 0x100A2663: pop ecx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2664: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2667u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2668: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A266B: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6E) = (uint8_t)(MEM8(eax + eax + 0x6E) + HI8(eax)); /* 0x100A266C: add byte ptr [eax + eax + 0x6e], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A2670: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x100A2673: pop ebx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A2674: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2677: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A2678: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A267B: pop esp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A267C: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A2681; /* 0x100A267F: jo 0x100a2681 */
L_100A2681:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100A2681: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ebx)); /* 0x100A2682: add byte ptr [ebp], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + HI8(edx)); /* 0x100A2685: add byte ptr [bx + di], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2689: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2691: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2693: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2695: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2697: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2699: inc edi */
    _flag_k = FK_INC;
    void_lift_trap(0x100A269Au, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_100A269F; /* 0x100A269D: ja 0x100a269f */
L_100A269F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A26A1: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), LO8(eax) */ /* 0x100A26A2: cmp byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A26A4; /* falls through past a gap */
L_100A26A3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A5; /* falls through past a gap */
L_100A26A4:
    _flag_a = (uint32_t)(MEM8(ebp + 0x49000000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x49000000) = (uint8_t)(MEM8(ebp + 0x49000000) + LO8(ecx)); /* 0x100A26A4: add byte ptr [ebp + 0x49000000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AA; /* falls through past a gap */
L_100A26A5:
    eax = eax; /* 0x100A26A5: lea eax, [eax] */
L_100A26A7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A9; /* falls through past a gap */
L_100A26A8:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100A26A8: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AB; /* falls through past a gap */
L_100A26A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A26A9: dec ecx */
    _flag_k = FK_DEC;
L_100A26AA:
    /* cmp MEM32(eax), eax */ /* 0x100A26AA: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_100A26AC; /* falls through past a gap */
L_100A26AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AD; /* falls through past a gap */
L_100A26AC:
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x2D000000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x2D000000) = (uint8_t)(MEM8(eax + eax + 0x2D000000) + LO8(eax)); /* 0x100A26AC: add byte ptr [eax + eax + 0x2d000000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B3; /* falls through past a gap */
L_100A26AD:
    /* test MEM8(eax), LO8(eax) */ /* 0x100A26AD: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B1; /* falls through past a gap */
L_100A26B0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B2; /* falls through past a gap */
L_100A26B1:
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(ecx)); /* 0x100A26B1: add byte ptr [0], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100A26B2: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_100A26B7; /* falls through past a gap */
L_100A26B3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B5; /* falls through past a gap */
L_100A26B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B6; /* falls through past a gap */
L_100A26B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B8; /* falls through past a gap */
L_100A26B7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B9; /* falls through past a gap */
L_100A26B8:
    _flag_a = (uint32_t)(MEM8(ebx + 0x34)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x34) = (uint8_t)(MEM8(ebx + 0x34) + LO8(ecx)); /* 0x100A26B8: add byte ptr [ebx + 0x34], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BB; /* falls through past a gap */
L_100A26B9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100A26B9: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0); /* 0x100A26BA: xor al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A26BC; /* falls through past a gap */
L_100A26BB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BD; /* falls through past a gap */
L_100A26BC:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A26BC: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BF; /* falls through past a gap */
L_100A26BD:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A26BF; /* 0x100A26BD: jae 0x100a26bf */
L_100A26BF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(edx)); /* 0x100A26C1: add byte ptr [0], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A26C9: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CA: add byte ptr ss:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A26CF; /* 0x100A26CD: je 0x100a26cf */
L_100A26CF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A26D1: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A26D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A26DA: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A26DC: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100A26E1: push eax */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100A26E2: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x51000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x51000000) = (uint8_t)(MEM8(ecx + 0x51000000) + LO8(edx)); /* 0x100A26E4: add byte ptr [ecx + 0x51000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100A26EA: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(edx)); /* 0x100A26EC: add byte ptr [esi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x100A26F1: push edx */
    _flag_a = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ LO8(eax)); /* 0x100A26F2: xor byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x53000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53000000) = (uint8_t)(MEM8(edx + 0x53000000) + LO8(edx)); /* 0x100A26F4: add byte ptr [edx + 0x53000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FA: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x100A26FD: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2700: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2702: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2704: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2706: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2708: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2710: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2712: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2714: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2716: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A269F; } /* 0x100A2718: loopne 0x100a269f */
L_100A271A:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A3; } /* 0x100A271A: loopne 0x100a26a3 */
L_100A271C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A7; } /* 0x100A271C: loopne 0x100a26a7 */
L_100A271E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AB; } /* 0x100A271E: loopne 0x100a26ab */
L_100A2720:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A8; } /* 0x100A2720: loopne 0x100a26a8 */
L_100A2722:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AC; } /* 0x100A2722: loopne 0x100a26ac */
L_100A2724:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B0; } /* 0x100A2724: loopne 0x100a26b0 */
L_100A2726:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B4; } /* 0x100A2726: loopne 0x100a26b4 */
L_100A2728:
    PUSH32(esp, 0xCu); /* 0x100A2728: push 0xc */
    PUSH32(esp, 0x100A2770u); /* 0x100A272A: push 0x100a2770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A272F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2734: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2738: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A273A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A273F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A278C); /* 0x100A2744: call 0x100a278c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2749: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A274B: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A274E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2765); /* 0x100A2755: call 0x100a2765 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A275A: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A275C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A23F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A23F0u);

    goto L_100A23F0;
L_100A239B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A239B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((HI8(edx) | HI8(edx))) << 24; _flag_b = (uint32_t)((HI8(edx) | HI8(edx))) << 24;
    SET_HI8(edx, HI8(edx) | HI8(edx)); /* 0x100A239C: or dh, dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A239E:
    { uint32_t _rv = (MEM32(ebx)) & 0xFFFFFFFFu, _rn = ((0x74u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(ebx) = _rv; } /* 0x100A239E: rol dword ptr [ebx], 0x74 */
    _flag_a = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx)); _flag_b = (uint32_t)((MEM32(ebp + 0x2466C504) | ecx));
    MEM32(ebp + 0x2466C504) = MEM32(ebp + 0x2466C504) | ecx; /* 0x100A23A1: or dword ptr [ebp + 0x2466c504], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100A23A7: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23CE; /* 0x100A23A9: jmp 0x100a23ce */
L_100A23CE:
    SET_LO8(ecx, MEM8(eax)); /* 0x100A23CE: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A23D0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A23D2; /* falls through past a gap */
L_100A23D1:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100A23D1: leave  */
L_100A23D2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A23D9; /* 0x100A23D2: je 0x100a23d9 */
L_100A23D4:
    /* cmp LO8(ecx), 0xE0u */ /* 0x100A23D4: cmp cl, 0xe0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23DF; /* 0x100A23D7: jne 0x100a23df */
L_100A23D9:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x100A23D9: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A23E1; /* 0x100A23DD: jne 0x100a23e1 */
L_100A23DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A23DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A23E1:
    edi = POP32_VAL(esp); /* 0x100A23E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100A23E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A23E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A23E4: ret  */
L_100A23E6:
    /* nop */ /* 0x100A23E6: nop  */
    /* nop */ /* 0x100A23E7: nop  */
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A23E8: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x0A000D00u)); _flag_b = (uint32_t)((eax | 0x0A000D00u));
    eax = eax | 0x0A000D00u; /* 0x100A23EA: or eax, 0xa000d00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A23F1; /* falls through past a gap */
L_100A23F0:
    _flag_a = (uint32_t)(MEM8(esi + 0x2F0035)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x2F0035) = (uint8_t)(MEM8(esi + 0x2F0035) + HI8(eax)); /* 0x100A23F0: add byte ptr [esi + 0x2f0035], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A23F6; /* falls through past a gap */
L_100A23F1:
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100A23F1: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax ^ 0x3F002F00u)); _flag_b = (uint32_t)((eax ^ 0x3F002F00u));
    eax = eax ^ 0x3F002F00u; /* 0x100A23F2: xor eax, 0x3f002f00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A23F7; /* falls through past a gap */
L_100A23F6:
    void_lift_trap(0x100A23F6u, "aas ");
L_100A23F7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A23F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebp; /* 0x100A23F9: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(edi + eax * 2 + (-0x1FB82000))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + eax * 2 + (-0x1FB82000)) = (uint8_t)(MEM8(edi + eax * 2 + (-0x1FB82000)) + HI8(eax)); /* 0x100A23FA: add byte ptr [edi + eax*2 - 0x1fb82000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2401: inc edi */
    _flag_k = FK_INC;
    { int _zc = (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A247B; } /* 0x100A2402: loopne 0x100a247b */
L_100A2404:
    _flag_a = (uint32_t)(MEM8(edi + 0x48E00048)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x48E00048) = (uint8_t)(MEM8(edi + 0x48E00048) + LO8(edx)); /* 0x100A2404: add byte ptr [edi + 0x48e00048], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2454; } /* 0x100A240A: loopne 0x100a2454 */
L_100A240C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239B; } /* 0x100A240C: loopne 0x100a239b */
L_100A240E:
    _flag_a = (uint32_t)(MEM8(eax + 0x49E00049)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x49E00049) = (uint8_t)(MEM8(eax + 0x49E00049) + LO8(ebx)); /* 0x100A240E: add byte ptr [eax + 0x49e00049], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A245F; } /* 0x100A2414: loopne 0x100a245f */
L_100A2416:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A239E; } /* 0x100A2416: loopne 0x100a239e */
L_100A2418:
    _flag_a = (uint32_t)(MEM8(ecx + 0x4BE0004B)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x4BE0004B) = (uint8_t)(MEM8(ecx + 0x4BE0004B) + LO8(ebx)); /* 0x100A2418: add byte ptr [ecx + 0x4be0004b], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A246B; } /* 0x100A241E: loopne 0x100a246b */
L_100A2420:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2495; } /* 0x100A2420: loopne 0x100a2495 */
L_100A2422:
    _flag_a = (uint32_t)(MEM8(ebx + 0x4DE0004D)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x4DE0004D) = (uint8_t)(MEM8(ebx + 0x4DE0004D) + LO8(ebx)); /* 0x100A2422: add byte ptr [ebx + 0x4de0004d], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2477; } /* 0x100A2428: loopne 0x100a2477 */
L_100A242A:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A0; } /* 0x100A242A: loopne 0x100a24a0 */
L_100A242C:
    _flag_a = (uint32_t)(MEM8(ebp + 0x4FE0004F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x4FE0004F) = (uint8_t)(MEM8(ebp + 0x4FE0004F) + LO8(ebx)); /* 0x100A242C: add byte ptr [ebp + 0x4fe0004f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2483; } /* 0x100A2432: loopne 0x100a2483 */
L_100A2434:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AB; } /* 0x100A2434: loopne 0x100a24ab */
L_100A2436:
    _flag_a = (uint32_t)(MEM8(edi + 0x50E00050)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x50E00050) = (uint8_t)(MEM8(edi + 0x50E00050) + LO8(ebx)); /* 0x100A2436: add byte ptr [edi + 0x50e00050], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A248E; } /* 0x100A243C: loopne 0x100a248e */
L_100A243E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23D1; } /* 0x100A243E: loopne 0x100a23d1 */
L_100A2440:
    _flag_a = (uint32_t)(MEM8(eax + 0x51E00051)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x51E00051) = (uint8_t)(MEM8(eax + 0x51E00051) + HI8(eax)); /* 0x100A2440: add byte ptr [eax + 0x51e00051], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A2499; } /* 0x100A2446: loopne 0x100a2499 */
L_100A2448:
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24C0; } /* 0x100A2448: loopne 0x100a24c0 */
L_100A244A:
    _flag_a = (uint32_t)(MEM8(ecx + 0x52E00052)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x52E00052) = (uint8_t)(MEM8(ecx + 0x52E00052) + HI8(eax)); /* 0x100A244A: add byte ptr [ecx + 0x52e00052], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24A4; } /* 0x100A2450: loopne 0x100a24a4 */
L_100A2452:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23E6; } /* 0x100A2452: loopne 0x100a23e6 */
L_100A2454:
    _flag_a = (uint32_t)(MEM8(edx + 0x53E00053)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53E00053) = (uint8_t)(MEM8(edx + 0x53E00053) + HI8(eax)); /* 0x100A2454: add byte ptr [edx + 0x53e00053], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A24AF; } /* 0x100A245A: loopne 0x100a24af */
L_100A245C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A23F1; } /* 0x100A245C: loopne 0x100a23f1 */
L_100A245E:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A245E: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2464; /* falls through past a gap */
L_100A245F:
    MEM32(0) = eax; /* 0x100A245F: mov dword ptr [0], eax */
L_100A2464:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2464: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2466: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2468: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246A: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246C; /* falls through past a gap */
L_100A246B:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x100A246B: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246D; /* falls through past a gap */
L_100A246C:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A246C: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A246E; /* falls through past a gap */
L_100A246D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A246D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A246F; /* falls through past a gap */
L_100A246E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A246E: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2470; /* falls through past a gap */
L_100A246F:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + esi; /* 0x100A246F: add dword ptr [ecx], esi */
    _flag_k = FK_ADD;
    goto L_100A2471; /* falls through past a gap */
L_100A2470:
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A2470: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2472; /* falls through past a gap */
L_100A2471:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A2471: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2473; /* falls through past a gap */
L_100A2472:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x100A2472: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A2474; /* falls through past a gap */
L_100A2473:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2473: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2475; /* falls through past a gap */
L_100A2474:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2474: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2476; /* falls through past a gap */
L_100A2475:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2475: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2477; /* falls through past a gap */
L_100A2476:
    _flag_a = (uint32_t)(MEM8(eax + 0x32)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x32) = (uint8_t)(MEM8(eax + 0x32) + HI8(ebx)); /* 0x100A2476: add byte ptr [eax + 0x32], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2479; /* falls through past a gap */
L_100A2477:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_100A24AB; /* 0x100A2477: js 0x100a24ab */
L_100A2479:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2479: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247C; /* falls through past a gap */
L_100A247B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A247B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247D; /* falls through past a gap */
L_100A247C:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A247C: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A247E; /* falls through past a gap */
L_100A247D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A247D: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    goto L_100A247F; /* falls through past a gap */
L_100A247E:
    _flag_a = (uint32_t)(MEM8(ecx + 0x33)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x33) = (uint8_t)(MEM8(ecx + 0x33) + HI8(ebx)); /* 0x100A247E: add byte ptr [ecx + 0x33], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2481; /* falls through past a gap */
L_100A247F:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_100A24B4; /* 0x100A247F: jns 0x100a24b4 */
L_100A2481:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2481: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2483:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2483: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_100A24BD; /* 0x100A2487: jp 0x100a24bd */
L_100A2489:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100A2489: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A248C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A248E:
    _flag_a = (uint32_t)(MEM8(ebx + 0x35)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x35) = (uint8_t)(MEM8(ebx + 0x35) + HI8(ebx)); /* 0x100A248E: add byte ptr [ebx + 0x35], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(eax)); /* 0x100A2491: add byte ptr [0], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A2497; /* falls through past a gap */
L_100A2495:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A2497:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_100A24CF; /* 0x100A2497: jl 0x100a24cf */
L_100A2499:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x100A2499: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A249C: push ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A249D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100A24D8; /* 0x100A249F: jge 0x100a24d8 */
    goto L_100A24A1; /* falls through past a gap */
L_100A24A0:
    void_lift_trap(0x100A24A0u, "aaa ");
L_100A24A1:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A24A1: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A5; /* falls through past a gap */
L_100A24A4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A6; /* falls through past a gap */
L_100A24A5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A7; /* falls through past a gap */
L_100A24A6:
    _flag_a = (uint32_t)(MEM8(esi + 0x38)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x38) = (uint8_t)(MEM8(esi + 0x38) + HI8(ebx)); /* 0x100A24A6: add byte ptr [esi + 0x38], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24A9; /* falls through past a gap */
L_100A24A7:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_LE)) goto L_100A24E1; /* 0x100A24A7: jle 0x100a24e1 */
L_100A24A9:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A24A9: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100A24EA; /* 0x100A24AF: jg 0x100a24ea */
L_100A24B1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A24B1: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B5; /* falls through past a gap */
L_100A24B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B6; /* falls through past a gap */
L_100A24B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24B7; /* falls through past a gap */
L_100A24B6:
    _flag_a = (uint32_t)(MEM8(eax + 0x290030)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x290030) = (uint8_t)(MEM8(eax + 0x290030) + LO8(eax)); /* 0x100A24B6: add byte ptr [eax + 0x290030], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BC; /* falls through past a gap */
L_100A24B7:
    _flag_a = (uint32_t)((MEM8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ 0)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ 0); /* 0x100A24B7: xor byte ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A24BA: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
L_100A24BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BE; /* falls through past a gap */
L_100A24BD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24BF; /* falls through past a gap */
L_100A24BE:
    _flag_a = (uint32_t)(MEM8(ecx + 0x5F002D)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x5F002D) = (uint8_t)(MEM8(ecx + 0x5F002D) + LO8(eax)); /* 0x100A24BE: add byte ptr [ecx + 0x5f002d], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24C4; /* falls through past a gap */
L_100A24BF:
    _flag_a = (uint32_t)(MEM32(0x1F005F00)); _flag_b = (uint32_t)(0x3D820000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1F005F00) = MEM32(0x1F005F00) - 0x3D820000u; /* 0x100A24BF: sub dword ptr [0x1f005f00], 0x3d820000 */
    _flag_k = FK_CMP;
    goto L_100A24C9; /* falls through past a gap */
L_100A24C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1F005F00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1F005F00u; /* 0x100A24C0: sub eax, 0x1f005f00 */
    _flag_k = FK_CMP;
    goto L_100A24C5; /* falls through past a gap */
L_100A24C4:
    _seg_ds = POP32_VAL(esp); /* 0x100A24C4: pop ds */
L_100A24C5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(0x2B00), 0 */ /* 0x100A24C7: cmp byte ptr [0x2b00], 0 */
    _flag_a = (uint32_t)(MEM8(0x2B00)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A24CE; /* falls through past a gap */
L_100A24C9:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A24C9: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24CF; /* falls through past a gap */
L_100A24CE:
    _flag_a = (uint32_t)(MEM8(ebx + 0x80008)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x80008) = (uint8_t)(MEM8(ebx + 0x80008) + LO8(eax)); /* 0x100A24CE: add byte ptr [ebx + 0x80008], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24D4; /* falls through past a gap */
L_100A24CF:
    _flag_a = (uint32_t)((MEM32(eax) | 0)); _flag_b = (uint32_t)((MEM32(eax) | 0));
    MEM32(eax) = MEM32(eax) | 0; /* 0x100A24CF: or dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x100A24D2: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A24D4:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A24D6; /* 0x100A24D4: jg 0x100a24d6 */
L_100A24D6:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A24D6: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A24D8:
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A24D8: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A24DA: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5100710F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5100710F) = (uint8_t)(MEM8(eax + eax + 0x5100710F) + LO8(edx)); /* 0x100A24DC: add byte ptr [eax + eax + 0x5100710f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E3; /* falls through past a gap */
L_100A24E1:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E1: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E4; /* falls through past a gap */
L_100A24E3:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x100A24E3: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E5; /* falls through past a gap */
L_100A24E4:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E4: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24E6; /* falls through past a gap */
L_100A24E5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E7; /* falls through past a gap */
L_100A24E6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A24E6: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A24E8; /* falls through past a gap */
L_100A24E7:
    { uint32_t _aa = MEM8(edi), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24E7: adc byte ptr [edi], dh */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A24EA; /* falls through past a gap */
L_100A24E8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100A24EA; /* 0x100A24E8: ja 0x100a24ea */
L_100A24EA:
    PUSH32(esp, edi); /* 0x100A24EA: push edi */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A24EB: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A24ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ebp), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24EF: adc dword ptr [ebp], esp */
      MEM32(ebp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A24F2: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(0x72120000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x72120000) = (uint8_t)(MEM8(0x72120000) + LO8(eax)); /* 0x100A24F3: add byte ptr [0x72120000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100A24F9: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A24FC: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A24FE: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A2502; /* 0x100A2500: je 0x100a2502 */
L_100A2502:
    PUSH32(esp, esp); /* 0x100A2502: push esp */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x100A2503: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + edi * 2) = (uint8_t)(MEM8(ecx + edi * 2) + LO8(edx)); /* 0x100A2506: add byte ptr [ecx + edi*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ebx)); /* 0x100A2509: add byte ptr [ecx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A250C: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x550075)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x550075) = (uint8_t)(MEM8(0x550075) + LO8(edx)); /* 0x100A250E: add byte ptr [0x550075], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = 0x69160000u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2514: adc eax, 0x69160000 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A2519: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x100A251C: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A251E: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2520: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100A2521: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2524u, "sldt word ptr [eax]");
    { uint32_t _sa = MEM8(eax), _sb = HI8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2527: sbb byte ptr [eax], dh */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x100A252A: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A252B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A252D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(ebx), _sb = ebx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A252F: sbb dword ptr [ebx], ebx */
      MEM32(ebx) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_100A2534; /* 0x100A2532: jnp 0x100a2534 */
L_100A2534:
    { uint32_t _sa = eax, _sb = MEM32(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2534: sbb eax, dword ptr [eax] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A2536: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = POP32_VAL(esp); /* 0x100A2538: pop ebp */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ebx)); /* 0x100A2539: add byte ptr [ebp], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x0D1B0000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A253C: sbb eax, 0xd1b0000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0xA00)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0xA00) = (uint8_t)(MEM8(0xA00) + LO8(ecx)); /* 0x100A2541: add byte ptr [0xa00], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A2547: sbb al, 0 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2549: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A254D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A254F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A2552: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2553: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2555: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x100A2557: push ds */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A255A; /* 0x100A2558: jae 0x100a255a */
L_100A255A:
    PUSH32(esp, ebx); /* 0x100A255A: push ebx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x100A255B: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A255D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x100A255F: pop ds */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax + eax + 0x4))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax + eax + 0x4)) = (uint8_t)(MEM8(FS_BASE + (eax + eax + 0x4)) + LO8(eax)); /* 0x100A2560: add byte ptr fs:[eax + eax + 4], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2565: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x100A2567: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A256A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x100A256B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A256D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esp);
    MEM32(edi) = MEM32(edi) & esp; /* 0x100A256F: and dword ptr [edi], esp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2572: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x100A2573: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2575: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    SET_HI8(ecx, HI8(ecx) & MEM8(eax)); /* 0x100A2577: and ch, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A257A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100A257B: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A257D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(edx));
    ebp = ebp & MEM32(edx); /* 0x100A257F: and ebp, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100A2582: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x100A2583: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Bu) << 24;
    SET_LO8(eax, LO8(eax) & 0x6Bu); /* 0x100A2587: and al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x100A2589: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x100A258C: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x4C006C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4C006C) = (uint8_t)(MEM8(0x4C006C) + HI8(eax)); /* 0x100A258E: add byte ptr [0x4c006c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x100A2594: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A2596: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, MEM32(eax) */ /* 0x100A2598: cmp eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A259A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A259C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A259E: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25A0u, "daa ");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A25A1: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - HI8(eax)); /* 0x100A25A7: sub byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_100A25AC; /* 0x100A25AA: jle 0x100a25ac */
L_100A25AC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A25AE: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A25B8: pop esp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x1C)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x1C) = (uint8_t)(MEM8(eax + eax + 0x1C) + HI8(ebx)); /* 0x100A25B9: add byte ptr [eax + eax + 0x1c], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x100A25BF: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A25C2: pop edx */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x100A25C3: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x78u); /* 0x100A25C7: sub al, 0x78 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A25C9: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A25CC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(0x430063)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x430063) = (uint8_t)(MEM8(0x430063) + HI8(ecx)); /* 0x100A25CE: add byte ptr [0x430063], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x100A25D4: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A25D6: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_100A25DA; /* 0x100A25D8: jbe 0x100a25da */
L_100A25DA:
    PUSH32(esp, esi); /* 0x100A25DA: push esi */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A25DB: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A25DFu, "das ");
    void_lift_trap(0x100A25E0u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100A25E2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A25E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ecx)); /* 0x100A25E7: xor byte ptr [esi], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A25EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A25EB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(ebp) ^ ebp)); _flag_b = (uint32_t)((MEM32(ebp) ^ ebp));
    MEM32(ebp) = MEM32(ebp) ^ ebp; /* 0x100A25EF: xor dword ptr [ebp], ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A25F2: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(0x2C320000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C320000) = (uint8_t)(MEM8(0x2C320000) + LO8(ecx)); /* 0x100A25F3: add byte ptr [0x2c320000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ebx)); /* 0x100A25F9: add byte ptr [eax + eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A25FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A25FE: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x100A2600: add byte ptr cs:[esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2603: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2605: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x2Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x2Fu); /* 0x100A2607: xor al, 0x2f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x100A2609: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A260D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ 0)); _flag_b = (uint32_t)((eax ^ 0));
    eax = eax ^ 0; /* 0x100A260F: xor eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2614: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2616: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(eax)); /* 0x100A2618: sub al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A261E; /* 0x100A261C: jb 0x100a261e */
L_100A261E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A261E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2620: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2622: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2624: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2626: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A2628: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A262E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2630: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2632: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2634: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2636: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x100A2638: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x5E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x5E) = (uint8_t)(MEM8(eax + eax + 0x5E) + LO8(edx)); /* 0x100A263A: add byte ptr [eax + eax + 0x5e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x100A263E: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0 */ /* 0x100A2641: cmp al, 0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebp); /* 0x100A2643: push ebp */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x100A2644: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0056003Du); /* 0x100A2647: imul eax, dword ptr [eax], 0x56003d */
    PUSHAD(); /* 0x100A264D: pushal  */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x100A264E: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x100A2651: add byte ptr ds:[edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100A2655: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A2656: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2659u, "aas ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x100A265A: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A265Du, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A265Fu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2660: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = POP32_VAL(esp); /* 0x100A2663: pop ecx */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A2664: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A2667u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100A2668: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100A266B: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6E) = (uint8_t)(MEM8(eax + eax + 0x6E) + HI8(eax)); /* 0x100A266C: add byte ptr [eax + eax + 0x6e], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100A2670: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x100A2673: pop ebx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A2674: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A2677: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A2678: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x100A267B: pop esp */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x100A267C: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A2681; /* 0x100A267F: jo 0x100a2681 */
L_100A2681:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100A2681: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ebx)); /* 0x100A2682: add byte ptr [ebp], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + HI8(edx)); /* 0x100A2685: add byte ptr [bx + di], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2689: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A268F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2691: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2693: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2695: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2697: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A2699: inc edi */
    _flag_k = FK_INC;
    void_lift_trap(0x100A269Au, "aaa ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_100A269F; /* 0x100A269D: ja 0x100a269f */
L_100A269F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A269F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A26A1: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), LO8(eax) */ /* 0x100A26A2: cmp byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_100A26A4; /* falls through past a gap */
L_100A26A3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A5; /* falls through past a gap */
L_100A26A4:
    _flag_a = (uint32_t)(MEM8(ebp + 0x49000000)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x49000000) = (uint8_t)(MEM8(ebp + 0x49000000) + LO8(ecx)); /* 0x100A26A4: add byte ptr [ebp + 0x49000000], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AA; /* falls through past a gap */
L_100A26A5:
    eax = eax; /* 0x100A26A5: lea eax, [eax] */
L_100A26A7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26A9; /* falls through past a gap */
L_100A26A8:
    _flag_a = (uint32_t)(MEM8(ecx + 0x39)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x39) = (uint8_t)(MEM8(ecx + 0x39) + LO8(ecx)); /* 0x100A26A8: add byte ptr [ecx + 0x39], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AB; /* falls through past a gap */
L_100A26A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A26A9: dec ecx */
    _flag_k = FK_DEC;
L_100A26AA:
    /* cmp MEM32(eax), eax */ /* 0x100A26AA: cmp dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_100A26AC; /* falls through past a gap */
L_100A26AB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26AD; /* falls through past a gap */
L_100A26AC:
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x2D000000)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x2D000000) = (uint8_t)(MEM8(eax + eax + 0x2D000000) + LO8(eax)); /* 0x100A26AC: add byte ptr [eax + eax + 0x2d000000], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B3; /* falls through past a gap */
L_100A26AD:
    /* test MEM8(eax), LO8(eax) */ /* 0x100A26AD: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26AF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B1; /* falls through past a gap */
L_100A26B0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B2; /* falls through past a gap */
L_100A26B1:
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(ecx)); /* 0x100A26B1: add byte ptr [0], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100A26B2: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_100A26B7; /* falls through past a gap */
L_100A26B3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B5; /* falls through past a gap */
L_100A26B4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B6; /* falls through past a gap */
L_100A26B5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B7; /* falls through past a gap */
L_100A26B6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B8; /* falls through past a gap */
L_100A26B7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26B7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26B9; /* falls through past a gap */
L_100A26B8:
    _flag_a = (uint32_t)(MEM8(ebx + 0x34)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x34) = (uint8_t)(MEM8(ebx + 0x34) + LO8(ecx)); /* 0x100A26B8: add byte ptr [ebx + 0x34], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BB; /* falls through past a gap */
L_100A26B9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100A26B9: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) ^ 0)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0); /* 0x100A26BA: xor al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A26BC; /* falls through past a gap */
L_100A26BB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BD; /* falls through past a gap */
L_100A26BC:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A26BC: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A26BF; /* falls through past a gap */
L_100A26BD:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A26BF; /* 0x100A26BD: jae 0x100a26bf */
L_100A26BF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0) = (uint8_t)(MEM8(0) + HI8(edx)); /* 0x100A26C1: add byte ptr [0], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A26C9: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CA: add byte ptr ss:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A26CF; /* 0x100A26CD: je 0x100a26cf */
L_100A26CF:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x100A26D1: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A26D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(eax) ^ eax)); _flag_b = (uint32_t)((MEM32(eax) ^ eax));
    MEM32(eax) = MEM32(eax) ^ eax; /* 0x100A26DA: xor dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A26DC: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100A26E1: push eax */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(eax)); /* 0x100A26E2: xor al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x51000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x51000000) = (uint8_t)(MEM8(ecx + 0x51000000) + LO8(edx)); /* 0x100A26E4: add byte ptr [ecx + 0x51000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax ^ MEM32(eax))); _flag_b = (uint32_t)((eax ^ MEM32(eax)));
    eax = eax ^ MEM32(eax); /* 0x100A26EA: xor eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(edx)); /* 0x100A26EC: add byte ptr [esi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x100A26F1: push edx */
    _flag_a = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) ^ LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) ^ LO8(eax)); /* 0x100A26F2: xor byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x53000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x53000000) = (uint8_t)(MEM8(edx + 0x53000000) + LO8(edx)); /* 0x100A26F4: add byte ptr [edx + 0x53000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FA: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x100A26FD: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A26FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2700: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2702: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2704: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2706: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2708: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A270E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2710: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2712: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2714: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A2716: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A269F; } /* 0x100A2718: loopne 0x100a269f */
L_100A271A:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A3; } /* 0x100A271A: loopne 0x100a26a3 */
L_100A271C:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A7; } /* 0x100A271C: loopne 0x100a26a7 */
L_100A271E:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AB; } /* 0x100A271E: loopne 0x100a26ab */
L_100A2720:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26A8; } /* 0x100A2720: loopne 0x100a26a8 */
L_100A2722:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26AC; } /* 0x100A2722: loopne 0x100a26ac */
L_100A2724:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B0; } /* 0x100A2724: loopne 0x100a26b0 */
L_100A2726:
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100A26B4; } /* 0x100A2726: loopne 0x100a26b4 */
L_100A2728:
    PUSH32(esp, 0xCu); /* 0x100A2728: push 0xc */
    PUSH32(esp, 0x100A2770u); /* 0x100A272A: push 0x100a2770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A272F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2734: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2738: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A273A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A273F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A278C); /* 0x100A2744: call 0x100a278c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2749: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A274B: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A274E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2765); /* 0x100A2755: call 0x100a2765 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A275A: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A275C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2728u);

L_100A2728:
    PUSH32(esp, 0xCu); /* 0x100A2728: push 0xc */
    PUSH32(esp, 0x100A2770u); /* 0x100A272A: push 0x100a2770 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A272F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A2734: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A2738: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A273A: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A273F: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A278C); /* 0x100A2744: call 0x100a278c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2749: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A274B: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A274E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2765); /* 0x100A2755: call 0x100a2765 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A275A: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A275C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2761: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2765(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2765u);

L_100A2765:
    PUSH32(esp, 3); /* 0x100A2765: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2767: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A276C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A276D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A278C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A278Cu);

L_100A278C:
    PUSH32(esp, ebp); /* 0x100A278C: push ebp */
    ebp = esp; /* 0x100A278D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100A278F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A2792: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A2797: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A2799: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100A279C: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A279D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E1868), 0xFFFFFFFFu */ /* 0x100A279F: cmp dword ptr [0x100e1868], -1 */
    _flag_a = (uint32_t)(MEM32(0x100E1868)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100A27A6: push esi */
    PUSH32(esp, edi); /* 0x100A27A7: push edi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x100A27A8: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A27B5; /* 0x100A27AB: je 0x100a27b5 */
L_100A27AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A27AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A27AF: inc eax */
    _flag_k = FK_INC;
    goto L_100A28BD; /* 0x100A27B0: jmp 0x100a28bd */
L_100A27B5:
    eax = MEM32(0x100E142C); /* 0x100A27B5: mov eax, dword ptr [0x100e142c] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x100A27BA: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A27C9; /* 0x100A27BD: jne 0x100a27c9 */
L_100A27BF:
    RECOMP_CALL(sub_100A44B2); /* 0x100A27BF: call 0x100a44b2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E142C); /* 0x100A27C4: mov eax, dword ptr [0x100e142c] */
L_100A27C9:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A27C9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A27CC: je 0x100a28bb */
L_100A27D2:
    ecx = ebp + (-0x8); /* 0x100A27D2: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100A27D5: push ecx */
    PUSH32(esp, eax); /* 0x100A27D6: push eax */
    RECOMP_ICALL(MEM32(0x100E5244)); /* 0x100A27D7: call dword ptr [0x100e5244] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A27DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A27DF: je 0x100a28bb */
L_100A27E5:
    edi = MEM32(ebp + (-0x8)); /* 0x100A27E5: mov edi, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x100A27E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A27EA: je 0x100a28bb */
L_100A27F0:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x100A27F0: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A27F2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x100A27F4: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x100A27F5: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 0x14u */ /* 0x100A27F7: cmp eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A2849; /* 0x100A27FA: jb 0x100a2849 */
L_100A27FC:
    ecx = (uint32_t)((int32_t)edi * (int32_t)0x14u); /* 0x100A27FC: imul ecx, edi, 0x14 */
    eax = ecx + 0x8; /* 0x100A27FF: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x100A2802: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A2849; /* 0x100A2804: jbe 0x100a2849 */
L_100A2806:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x100A2806: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x400u */ /* 0x100A2809: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A282A; /* 0x100A280F: ja 0x100a282a */
L_100A2811:
    eax = ecx; /* 0x100A2811: mov eax, ecx */
    RECOMP_CALL(sub_10012BBF); /* 0x100A2813: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x100A2818: mov esi, esp */
    /* test esi, esi */ /* 0x100A281A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A281C: je 0x100a28bb */
L_100A2822:
    MEM32(esi) = 0xCCCCu; /* 0x100A2822: mov dword ptr [esi], 0xcccc */
    goto L_100A2841; /* 0x100A2828: jmp 0x100a2841 */
L_100A282A:
    PUSH32(esp, ecx); /* 0x100A282A: push ecx */
    RECOMP_CALL(sub_1000ED30); /* 0x100A282B: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A2830: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100A2832: pop ecx */
    /* test esi, esi */ /* 0x100A2833: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A2835: je 0x100a28bb */
L_100A283B:
    MEM32(esi) = 0xDDDDu; /* 0x100A283B: mov dword ptr [esi], 0xdddd */
L_100A2841:
    edi = MEM32(ebp + (-0x8)); /* 0x100A2841: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x100A2844: add esi, 8 */
    _flag_k = FK_ADD;
    goto L_100A284B; /* 0x100A2847: jmp 0x100a284b */
L_100A2849:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A2849: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A284B:
    /* test esi, esi */ /* 0x100A284B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28BB; /* 0x100A284D: je 0x100a28bb */
L_100A284F:
    eax = ebp + (-0xC); /* 0x100A284F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100A2852: push eax */
    PUSH32(esp, edi); /* 0x100A2853: push edi */
    PUSH32(esp, esi); /* 0x100A2854: push esi */
    PUSH32(esp, MEM32(0x100E142C)); /* 0x100A2855: push dword ptr [0x100e142c] */
    RECOMP_ICALL(MEM32(0x100E5248)); /* 0x100A285B: call dword ptr [0x100e5248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A2861: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28B0; /* 0x100A2863: je 0x100a28b0 */
L_100A2865:
    edi = MEM32(ebp + (-0xC)); /* 0x100A2865: mov edi, dword ptr [ebp - 0xc] */
    /* test edi, edi */ /* 0x100A2868: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28B0; /* 0x100A286A: je 0x100a28b0 */
L_100A286C:
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x100A286C: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A28B0; /* 0x100A286F: ja 0x100a28b0 */
L_100A2871:
    /* test edi, edi */ /* 0x100A2871: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A28B0; /* 0x100A2873: je 0x100a28b0 */
L_100A2875:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2875: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x4; /* 0x100A2877: lea ebx, [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A287A: inc eax */
    _flag_k = FK_INC;
L_100A287B:
    /* cmp MEM16(ebx + (-0x4)), LO16(eax) */ /* 0x100A287B: cmp word ptr [ebx - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebx + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A28A2; /* 0x100A287F: jne 0x100a28a2 */
L_100A2881:
    /* cmp MEM32(ebx), 0 */ /* 0x100A2881: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A28A2; /* 0x100A2884: je 0x100a28a2 */
L_100A2886:
    /* cmp MEM8(ebx + 0xA), 0 */ /* 0x100A2886: cmp byte ptr [ebx + 0xa], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xA)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A289A; /* 0x100A288A: jne 0x100a289a */
L_100A288C:
    PUSH32(esp, ebx); /* 0x100A288C: push ebx */
    RECOMP_CALL(sub_100A233A); /* 0x100A288D: call 0x100a233a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2892: pop ecx */
    /* test eax, eax */ /* 0x100A2893: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A289F; /* 0x100A2895: je 0x100a289f */
L_100A2897:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A2897: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A2899: inc eax */
    _flag_k = FK_INC;
L_100A289A:
    MEM32(ebp + (-0x10)) = eax; /* 0x100A289A: mov dword ptr [ebp - 0x10], eax */
    goto L_100A28A2; /* 0x100A289D: jmp 0x100a28a2 */
L_100A289F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A289F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A28A1: inc eax */
    _flag_k = FK_INC;
L_100A28A2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100A28A2: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x100A28A3: add ebx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edi; /* 0x100A28A6: mov dword ptr [ebp - 0xc], edi */
    /* test edi, edi */ /* 0x100A28A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A287B; /* 0x100A28AB: jne 0x100a287b */
L_100A28AD:
    ebx = MEM32(ebp + (-0x10)); /* 0x100A28AD: mov ebx, dword ptr [ebp - 0x10] */
L_100A28B0:
    PUSH32(esp, esi); /* 0x100A28B0: push esi */
    RECOMP_CALL(sub_10012BD5); /* 0x100A28B1: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A28B6: pop ecx */
    eax = ebx; /* 0x100A28B7: mov eax, ebx */
    goto L_100A28BD; /* 0x100A28B9: jmp 0x100a28bd */
L_100A28BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A28BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A28BD:
    esp = ebp + (-0x1C); /* 0x100A28BD: lea esp, [ebp - 0x1c] */
    edi = POP32_VAL(esp); /* 0x100A28C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100A28C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A28C2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x100A28C3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A28C6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100A28C8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A28CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A28CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A28D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A28D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A28D1u);

L_100A28D1:
    PUSH32(esp, 0xCu); /* 0x100A28D1: push 0xc */
    PUSH32(esp, 0x100A2920u); /* 0x100A28D3: push 0x100a2920 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A28D8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A28DD: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A28E1: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A28E3: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A28E8: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A28E9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A28ED: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A293C); /* 0x100A28F0: call 0x100a293c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A28F5: pop ecx */
    esi = eax; /* 0x100A28F6: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A28F8: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A28FB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A2912); /* 0x100A2902: call 0x100a2912 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A2907: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2909: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A290E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A2912(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A2912u);

L_100A2912:
    PUSH32(esp, 3); /* 0x100A2912: push 3 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A2914: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2919: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A291A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A293C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A293Cu);

L_100A293C:
    PUSH32(esp, ebp); /* 0x100A293C: push ebp */
    ebp = esp; /* 0x100A293D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A293F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100A2942: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A295A; /* 0x100A2945: je 0x100a295a */
L_100A2947:
    /* cmp MEM32(0x100E1868), 0xFFFFFFFFu */ /* 0x100A2947: cmp dword ptr [0x100e1868], -1 */
    _flag_a = (uint32_t)(MEM32(0x100E1868)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A295A; /* 0x100A294E: jne 0x100a295a */
L_100A2950:
    eax = (uint32_t)LO8(eax); /* 0x100A2950: movzx eax, al */
    MEM32(0x100E1868) = eax; /* 0x100A2953: mov dword ptr [0x100e1868], eax */
    ebp = POP32_VAL(esp); /* 0x100A2958: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A2959: ret  */
L_100A295A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A295A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A295D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A295E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A295F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A295Fu);

L_100A295F:
    PUSH32(esp, 0xCu); /* 0x100A295F: push 0xc */
    PUSH32(esp, 0x100A29A8u); /* 0x100A2961: push 0x100a29a8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A2966: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A296B: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100A296F: push 3 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A2971: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A2976: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A2977: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100A29C4); /* 0x100A297B: call 0x100a29c4 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100A2980: movzx esi, ax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A2983: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A2986: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A299E); /* 0x100A298D: call 0x100a299e */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, LO16(esi)); /* 0x100A2992: mov ax, si */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A2995: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A299A: ret  */
    RECOMP_REGS_OUT();
}
